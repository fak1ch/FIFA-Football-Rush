using App.Scripts.Scenes.MainScene.Map.LevelEndMechanic;
using Cinemachine;
using StarterAssets;
using StarterAssets.Animations;
using StarterAssets.NewMovement;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelEndMechanic
{
    public class LevelEndStarter : MonoBehaviour
    {
        [SerializeField] private StickmanView _stickmanView;
        [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;
        [SerializeField] private CinemachineVirtualCamera _followMainItemCamera;
        [SerializeField] private CollisionObject _collisionObject;
        [SerializeField] private LevelEndItemsTransfer _levelEndItemsTransfer;
         
        private MainItem _mainItem;
        
        private void OnEnable()
        {
            _collisionObject.CollisionEnter += HandleCollisionEnter;
        }

        private void OnDisable()
        {
            _collisionObject.CollisionEnter -= HandleCollisionEnter;
        }

        private void StartLevelEndAnimation()
        {
            _followMainItemCamera.gameObject.SetActive(true);
            _stickmanView.SetCanMove(false);
            _forwardSmoothMovement.SetCanMove(false);
            
            _levelEndItemsTransfer.StartTransferItems();
        }

        private void HandleCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out Player player))
            {
                StartLevelEndAnimation();
            }
        }
    }
}