﻿using System;
using App.Scripts.Scenes;
using App.Scripts.Scenes.General;
using App.Scripts.Scenes.General.ItemSystem;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
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
        private GameEvents _gameEvents;
        private bool _isGameOver = false;

        public int CurrentItemsCount { get; private set;  } = 0;
        public PickableItem PickableItem => _pickableItem;

        public void Initialize(GameConfigScriptableObject gameConfig, PickableItem pickableItem, GameEvents gameEvents)
        {
            _config = gameConfig.mainItemConfig;
            _pickableItem = pickableItem;
            _gameEvents = gameEvents;

            CurrentItemsCount = 1;
        }

        public void StartMove()
        {
            _pickableItem.SetActiveCollider(true);
            _pickableItem.SetActiveGravity(true);
            _pickableItem.SetInterpolation(RigidbodyInterpolation.Interpolate);
            _pickableItem.SetCollisionDetection(CollisionDetectionMode.Continuous);
            _pickableItem.SetRigidbodyVelocity(_config.startVelocity);
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
            _gameEvents.EndLevel(true, CurrentItemsCount);
        }
    }
}