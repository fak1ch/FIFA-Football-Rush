using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class HorizontalSawConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
    }
    
    public class HorizontalSaw : Trap
    {
        [SerializeField] private InfinityLocalRotation _infinityLocalRotation;
        
        private HorizontalSawConfig _config;

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.horizontalSawConfig;
            InitializeConfig(_config);
            
            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
        }
    }
}