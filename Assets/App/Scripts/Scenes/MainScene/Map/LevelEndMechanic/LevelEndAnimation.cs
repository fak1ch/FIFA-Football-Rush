using System;
using System.Collections;
using App.Scripts.Scenes.General.ItemSystem;
using Cinemachine;
using StarterAssets.Animations;
using StarterAssets.NewMovement;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelEndMechanic
{
    public class LevelEndAnimation : MonoBehaviour
    {
        [SerializeField] private StickmanView _stickmanView;
        [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;
        
        [Space(10)]
        [SerializeField] private CinemachineVirtualCamera _followMainItemCamera;
        [SerializeField] private MainItem _mainItem;
        [SerializeField] private ItemContainer _itemContainer;
        [SerializeField] private LevelEndTrigger _levelEndTrigger;
        
        [Space(10)]
        [SerializeField] private float _delayBetweenTransferItems = 0.1f;

        private void OnEnable()
        {
            _levelEndTrigger.OnCollisionEnterWithStickman += StartLevelEndAnimation;
        }

        private void OnDisable()
        {
            _levelEndTrigger.OnCollisionEnterWithStickman -= StartLevelEndAnimation;
        }

        private void StartLevelEndAnimation()
        {
            _followMainItemCamera.gameObject.SetActive(true);
            _stickmanView.SetCanMove(false);
            _forwardSmoothMovement.SetCanMove(false);

            StartCoroutine(TransferItemsFromContainerToMainItem());
        }

        private IEnumerator TransferItemsFromContainerToMainItem()
        {
            while (_itemContainer.CurrentPickableItems > 0)
            {
                _itemContainer.RemoveSomePickableItems(1);
                _mainItem.AddItemsCount(1);

                yield return new WaitForSeconds(_delayBetweenTransferItems);
            }
            
            _mainItem.StartMove();
        }
    }
}