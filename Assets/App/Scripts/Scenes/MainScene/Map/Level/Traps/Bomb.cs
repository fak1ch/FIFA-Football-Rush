using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class BombConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
    }
    
    public class Bomb : Trap
    {
        [SerializeField] private InfinityLocalRotation _infinityLocalRotation;
        
        private BombConfig _config;

        private void Start()
        {
            _config = _gameConfig.trapConfigs.bombConfig;
            InitializeConfig(_config);

            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
        }
    }
}