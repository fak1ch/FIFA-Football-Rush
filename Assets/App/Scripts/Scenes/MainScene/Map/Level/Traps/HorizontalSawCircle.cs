using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class HorizontalSawCircleConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
    }
    
    public class HorizontalSawCircle : Trap
    {
        [SerializeField] private InfinityLocalRotation _infinityLocalRotation;
        
        private HorizontalSawCircleConfig _config;
        
        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.horizontalSawCircleConfig;

            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
        }
    }
}