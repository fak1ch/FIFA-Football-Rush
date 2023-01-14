using System;
using App.Scripts.Scenes.General.ItemSystem;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.LevelEndMechanic
{
    [Serializable]
    public class MainItemConfig
    {
        public Vector3 gameOverNewVelocity;
        public Vector3 startVelocity;
    }

    public class MainItem : MonoBehaviour
    {
        public event Action<int> OnAddedItem;
        
        private MainItemConfig _config;

        private PickableItem _pickableItem;
        private bool _isGameOver = false;

        public int CurrentItemsCount { get; private set;  } = 0;

        public void Initialize(GameConfigScriptableObject gameConfig, PickableItem pickableItem)
        {
            _config = gameConfig.mainItemConfig;
            _pickableItem = pickableItem;

            CurrentItemsCount = 1;
        }

        public void StartMove()
        {
            _pickableItem.SetActiveCollider(true);
            _pickableItem.SetActiveGravity(true);
            _pickableItem.SetInterpolation(RigidbodyInterpolation.Interpolate);
            //_pickableItem.SetCollisionDetection(CollisionDetectionMode.Continuous);
            _pickableItem.SetRigidbodyVelocity(_config.startVelocity);
        }

        public void StartLevelPassedAnimation()
        {
            Debug.Log("Level Passed");
        }

        public void UpdateView()
        {
            CurrentItemsCount++;
            OnAddedItem?.Invoke(CurrentItemsCount);
        }
        
        public void StartGameOverAnimation()
        {
            if (_isGameOver) return;
            _isGameOver = true;

            _pickableItem.SetRigidbodyVelocity(_config.gameOverNewVelocity);
        }
    }
}