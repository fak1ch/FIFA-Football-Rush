using System;
using App.Scripts.Scenes.MainScene.Map.Level.Traps.Barrier;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class HammerConfig : TrapConfig
    {
        public HammerAnimationConfig hammerAnimationConfig;
    }
    
    public class Hammer : Trap
    {
        [SerializeField] private HammerAnimation hammerAnimation;
        private HammerConfig _config;

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.hammerConfig;
            InitializeConfig(_config);

            hammerAnimation.Initialize(_config.hammerAnimationConfig);
        }
    }
}