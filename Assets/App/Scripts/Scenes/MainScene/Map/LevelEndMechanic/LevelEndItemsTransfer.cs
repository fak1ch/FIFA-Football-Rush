using System;
using System.Collections;
using App.Scripts.Scenes.General.ItemSystem;
using App.Scripts.Scenes.General.LevelEndMechanic;
using DG.Tweening;
using Unity.VisualScripting;
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
        
        [Space(10)]
        [SerializeField] private MainItemViewConfig _mainItemViewConfig;
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private LevelEndItemsTransferConfig _config;
        private MainItem _mainItem;

        private int _itemsWhichMoveToStart;
        private float _delayBetweenTransferItems;
        
        public void StartTransferItems()
        {
            _config = _gameConfig.levelEndItemsTransferConfig;
            
            PickableItem pickableItem = _itemContainer.GetPickableItem();
            pickableItem.SetActiveCollider(true);
            pickableItem.gameObject.SetActive(true);
            MovePickableItemToStartPoint(pickableItem, false);

            _mainItemViewConfig.pickableItem = pickableItem;
            _mainItemViewConfig.rigidbody = pickableItem.AddComponent<Rigidbody>();
            _mainItemViewConfig.rigidbody.useGravity = false;
            //_mainItemViewConfig.rigidbody.isKinematic = true;
            _mainItem = pickableItem.gameObject.AddComponent<MainItem>();
            _mainItem.Initialize(_mainItemViewConfig);

            StartCoroutine(TransferItemsFromContainerToMainItem());
        }
        
        private IEnumerator TransferItemsFromContainerToMainItem()
        {
            _itemsWhichMoveToStart = _itemContainer.CurrentPickableItems;
            _delayBetweenTransferItems = _config.timeForTransferItems / _itemsWhichMoveToStart;
            
            while (_itemContainer.CurrentPickableItems > 0)
            {
                PickableItem pickableItem = _itemContainer.GetPickableItem();
                pickableItem.gameObject.SetActive(true);
                MovePickableItemToStartPoint(pickableItem);

                yield return new WaitForSecondsRealtime(_delayBetweenTransferItems);
            }

            if (_itemsWhichMoveToStart > 0) yield return null;

            yield return new WaitForSecondsRealtime(_config.delayBetweenMainItemStartMove);
            
            _cameraTargetSetuper.SetupTarget(_mainItem.transform);
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
            _itemsWhichMoveToStart--;
            
            pickableItem.OnLocalMoveAnimationComplete -= SwitchOffPickableItem;
            pickableItem.gameObject.SetActive(false);
            
            _mainItem.ScaleMainItem();
        }
    }
}