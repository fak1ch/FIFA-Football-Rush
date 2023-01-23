using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class JustSawConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
    }
    
    public class JustSaw : Trap
    {
        [SerializeField] private InfinityLocalRotation _infinityLocalRotation;

        private JustSawConfig _config;
        
        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.justSawConfig;
            InitializeConfig(_config);
            
            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
        }
    }
}