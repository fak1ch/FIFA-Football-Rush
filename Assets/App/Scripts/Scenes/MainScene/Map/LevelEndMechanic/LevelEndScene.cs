using System;
using System.Collections;
using App.Scripts.Scenes.General.ItemSystem;
using Cinemachine;
using DG.Tweening;
using StarterAssets;
using StarterAssets.Animations;
using StarterAssets.NewMovement;
using Unity.VisualScripting;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelEndMechanic
{
    [Serializable]
    public class LevelEndSceneConfig
    {
        public float delayBetweenTransferItems = 0.1f;
        public float itemLocalMoveDuration = 1;
        public Ease itemLocalMoveEase;
    }
    
    public class LevelEndScene : MonoBehaviour
    {
        [SerializeField] private StickmanView _stickmanView;
        [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;
        [SerializeField] private Transform _startPointForMainItem;
        
        [Space(10)]
        [SerializeField] private CinemachineVirtualCamera _followMainItemCamera;
        [SerializeField] private ItemContainer _itemContainer;
        [SerializeField] private CollisionObject _collisionObject;

        [SerializeField] private MainItemViewConfig _mainItemViewConfig;
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private LevelEndSceneConfig _config;
        private MainItem _mainItem;
        
        private void OnEnable()
        {
            _collisionObject.CollisionEnter += HandleCollisionEnter;
        }

        private void OnDisable()
        {
            _collisionObject.CollisionEnter -= HandleCollisionEnter;
        }

        private void Start()
        {
            _config = _gameConfig.levelEndSceneConfig;
        }

        private void StartLevelEndAnimation()
        {
            _followMainItemCamera.gameObject.SetActive(true);
            _stickmanView.SetCanMove(false);
            _forwardSmoothMovement.SetCanMove(false);

            PickableItem pickableItem = _itemContainer.GetPickableItem();
            StartLocalMoveAnimationInPickableItem(pickableItem);

            _mainItemViewConfig.pickableItem = pickableItem;
            _mainItemViewConfig.rigidbody = pickableItem.AddComponent<Rigidbody>();
            _mainItem = pickableItem.gameObject.AddComponent<MainItem>();
            _mainItem.Initialize(_mainItemViewConfig);

            StartCoroutine(TransferItemsFromContainerToMainItem());
        }

        private IEnumerator TransferItemsFromContainerToMainItem()
        {
            while (_itemContainer.CurrentPickableItems > 0)
            {
                StartLocalMoveAnimationInPickableItem(_itemContainer.GetPickableItem());

                yield return new WaitForSecondsRealtime(_config.delayBetweenTransferItems);
            }
            
            _mainItem.StartMove();
        }
        
        private void HandleCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out Player player))
            {
                StartLevelEndAnimation();
            }
        }

        private void StartLocalMoveAnimationInPickableItem(PickableItem pickableItem)
        {
            pickableItem.transform.SetParent(_startPointForMainItem);
            pickableItem.LocalMoveToPosition(Vector3.zero, _config.itemLocalMoveDuration, _config.itemLocalMoveEase);

            pickableItem.OnLocalMoveAnimationComplete += ScaleMainItem;
        }

        private void ScaleMainItem(PickableItem pickableItem)
        {
            pickableItem.OnLocalMoveAnimationComplete -= ScaleMainItem;
            
            _mainItem.AddPickableItem();
        }
    }
}