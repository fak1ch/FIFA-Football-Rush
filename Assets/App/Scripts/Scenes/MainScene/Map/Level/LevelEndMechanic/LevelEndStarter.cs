using System.Collections.Generic;
using App.Scripts.Scenes;
using App.Scripts.Scenes.General;
using App.Scripts.Scenes.General.ItemSystem;
using Cinemachine;
using StarterAssets;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    public class LevelEndStarter : MonoBehaviour
    {
        [SerializeField] private Player _player;
        [SerializeField] private CinemachineVirtualCamera _followMainItemCamera;
        [SerializeField] private CollisionObject _collisionObject;
        [SerializeField] private LevelEndItemsTransfer _levelEndItemsTransfer;
        [SerializeField] private GameEvents _gameEvents;
        [SerializeField] private ItemContainer _itemContainer;
        [SerializeField] private List<ParticleSystem> _particleSystems;
        [SerializeField] private AudioSource _audioSource;
         
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
            foreach (var particleSystem in _particleSystems)
            {
                particleSystem.gameObject.SetActive(true);
            }
            
            if (_itemContainer.CurrentPickableItems <= 0)
            {
                _gameEvents.EndLevel(false);
                return;
            }
            
            _audioSource.Play();
            
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