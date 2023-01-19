using System;
using App.Scripts.Scenes.General;
using StarterAssets;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map
{
    [Serializable]
    public class BottomDieZoneConfig
    {
        public float dieYValue = -2;
    }
    
    public class BottomDieZone : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private BottomDieZoneConfig _config;

        [SerializeField] private GameEvents _gameEvents;
        [SerializeField] private Player _player;

        private void Start()
        {
            _config = _gameConfig.bottomDieZoneConfig;
        }

        private void Update()
        {
            if (_gameEvents.IsLevelEnd) return;

            if (_player.transform.position.y <= _config.dieYValue)
            {
                _gameEvents.EndLevelWithLose();
            }
        }
    }
}