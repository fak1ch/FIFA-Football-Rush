using System;
using System.Collections;
using App.Scripts.Scenes.General.ItemSystem;
using Cinemachine;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.LevelEndMechanic
{
    [Serializable]
    public class LevelEndItemsTransferConfig
    {
        public float timeForTransferItems = 3f;
        public float delayBetweenMainItemStartMove = 1f;
        public float itemLocalMoveDuration = 1;
        public Ease itemLocalMoveEase;
    }
    
    public class LevelEndItemsTransfer : MonoBehaviour
    {
        [SerializeField] private ItemContainer _itemContainer;
        [SerializeField] private CameraTargetSetuper _cameraTargetSetuper;
        [SerializeField] private Transform _startPointForMainItem;
        [SerializeField] private WallsContainer _wallsContainer;
        [SerializeField] private AudioSource _audioSource;
        
        [Space(10)]
        [SerializeField] private CinemachineVirtualCamera _mainItemCamera;
        [SerializeField] private TextMeshProUGUI _itemsCountText;
        
        [Space(10)]
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private LevelEndItemsTransferConfig _config;
        private MainItem _mainItem;

        private int _itemsWhichMoveToMainItem;
        private float _delayBetweenTransferItems;
        
        public void StartTransferItems()
        {
            _config = _gameConfig.levelEndItemsTransferConfig;

            PickableItem pickableItem = _itemContainer.GetPickableItem();
            pickableItem.gameObject.SetActive(true);
            pickableItem.SetActiveCollider(true);
            MovePickableItemToStartPoint(pickableItem, false);
            
            _mainItem = pickableItem.gameObject.AddComponent<MainItem>();
            _mainItem.Initialize(_gameConfig, pickableItem);
            pickableItem.gameObject.AddComponent<MainItemView>().Initialize(_gameConfig.mainItemViewConfig,
                _mainItem, _mainItemCamera, _itemsCountText, pickableItem);

            StartCoroutine(TransferItemsFromContainerToMainItem());
        }
        
        private IEnumerator TransferItemsFromContainerToMainItem()
        {
            _delayBetweenTransferItems = _config.timeForTransferItems / _itemContainer.CurrentPickableItems;
            
            _audioSource.Play();
            
            while (_itemContainer.CurrentPickableItems > 0)
            {
                PickableItem pickableItem = _itemContainer.GetPickableItem();
                pickableItem.gameObject.SetActive(true);
                MovePickableItemToStartPoint(pickableItem);

                _itemsWhichMoveToMainItem++;
                
                yield return new WaitForSeconds(_delayBetweenTransferItems);
            }

            if (_itemsWhichMoveToMainItem > 0) yield return null;
            
            _audioSource.Stop();

            yield return new WaitForSeconds(_config.delayBetweenMainItemStartMove);
            
            _cameraTargetSetuper.SetupTarget(_mainItem.transform);
            _wallsContainer.Initialize(_mainItem);
            
            _mainItem.StartMove();
        }
        
        private void MovePickableItemToStartPoint(PickableItem pickableItem, bool switchOffItem = true)
        {
            pickableItem.transform.SetParent(_startPointForMainItem);
            pickableItem.LocalMoveToPosition(Vector3.zero, _config.itemLocalMoveDuration, _config.itemLocalMoveEase);

            if (switchOffItem)
            {
                pickableItem.OnLocalMoveAnimationComplete += SwitchOffPickableItem;
            }
        }

        private void SwitchOffPickableItem(PickableItem pickableItem)
        {
            _itemsWhichMoveToMainItem--;
            
            pickableItem.OnLocalMoveAnimationComplete -= SwitchOffPickableItem;
            pickableItem.gameObject.SetActive(false);
            
            _mainItem.UpdateView();
        }
    }
}