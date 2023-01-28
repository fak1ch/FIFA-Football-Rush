using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps
{
    [Serializable]
    public class SpikesCylinderConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
    }
    
    public class SpikesCylinder : Trap
    {
        [SerializeField] private InfinityLocalRotation _infinityLocalRotation;
        
        private SpikesCylinderConfig _config;

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.spikesCylinderConfig;
            InitializeConfig(_config);
            
            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
        }
    }
}