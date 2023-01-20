using System;
using StarterAssets;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class TrapConfig
    {
        public int damageInPickableItems;
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
        
        public void SetActiveTrap(bool value)
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
                SetActiveTrap(false);
            }
        }
    }
}