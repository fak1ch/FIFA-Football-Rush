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
        [SerializeField] private Player _player;
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
            _player.SetPlayerCanMove(false);

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