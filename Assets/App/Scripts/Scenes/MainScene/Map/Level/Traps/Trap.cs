using System;
using App.Scripts.General.VibrateSystem;
using StarterAssets;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class TrapConfig
    {
        public int damageInPickableItems;

        [Space(10)] 
        public long vibrateMilliseconds = 200;
    }
    
    public abstract class Trap : MonoBehaviour
    {
        [SerializeField] protected GameConfigScriptableObject _gameConfig;
        [SerializeField] private CollisionObject _collisionObject;

        private TrapConfig _trapConfig;
        
        private void OnEnable()
        {
            _collisionObject.CollisionEnter += HandleCollisionEnter;
        }

        private void OnDisable()
        {
            _collisionObject.CollisionEnter -= HandleCollisionEnter;
        }

        protected void InitializeConfig(TrapConfig config)
        {
            _trapConfig = config;
        }
        
        public virtual void SetActiveTrap(bool value)
        {
            gameObject.SetActive(value);
        }
        
        private void HandleCollisionEnter(Collision collision)
        {
            if (_trapConfig == null) return;
            if (_trapConfig.damageInPickableItems <= 0) return;

            if (collision.gameObject.TryGetComponent(out Player player))
            {
                player.ItemContainer.RemoveSomePickableItemsWithAnimation(_trapConfig.damageInPickableItems);
                Vibrator.Instance.Vibrate(_trapConfig.vibrateMilliseconds);
                SetActiveTrap(false);
            }
        }
    }
}