using System;
using App.Scripts.General.VibrateSystem;
using App.Scripts.Scenes;
using App.Scripts.Scenes.General;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    [Serializable]
    public class DestroyableWallConfig
    {
        public long vibrateMilliseconds;
    }
    
    public class DestroyableWall : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private DestroyableWallConfig _config;
        
        [SerializeField] private int _itemsCountForDestroy = 10;

        [Space(10)]
        [SerializeField] private ParticleSystem _destroyEffect;
        [SerializeField] private CollisionObject _collisionObject;
        [SerializeField] private Trigger _trigger;
        [SerializeField] private Collider _collider;
        [SerializeField] private TextMeshProUGUI _itemsCountForDestroyText;
        [SerializeField] private AudioSource _audioSource;
        [SerializeField] private GameEvents _gameEvents;

        #region Events

        private void OnEnable()
        {
            _itemsCountForDestroyText.text = _itemsCountForDestroy.ToString();
            
            _collisionObject.CollisionEnter += HandleCollisionEnter;
            _trigger.TriggerEnter += HandleTriggerEnter;
        }

        private void OnDisable()
        {
            _collisionObject.CollisionEnter -= HandleCollisionEnter;
            _trigger.TriggerEnter -= HandleTriggerEnter;
        }

        #endregion

        public void Initialize(MainItem.MainItem mainItem)
        {
            _config = _gameConfig.levelObjectConfigs.destroyableWallConfig;
            _collider.isTrigger = mainItem.CurrentItemsCount >= _itemsCountForDestroy;
        }

        private void HandleTriggerEnter(Collider target)
        {
            if (target.TryGetComponent(out MainItem.MainItem mainItem))
            {
                DestroyWall();
                
                _destroyEffect.gameObject.SetActive(true);
                _destroyEffect.DORestart();
                
                _audioSource.Play();
                Vibrator.Instance.Vibrate(_config.vibrateMilliseconds);
            }
        }
        
        private void HandleCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out MainItem.MainItem mainItem))
            {
                mainItem.StartGameOverAnimation();
                _gameEvents.EndLevel(true);
            }
        }
        
        private void DestroyWall()
        {
            _itemsCountForDestroyText.gameObject.SetActive(false);
            _collisionObject.gameObject.SetActive(false);
        }
    }
}