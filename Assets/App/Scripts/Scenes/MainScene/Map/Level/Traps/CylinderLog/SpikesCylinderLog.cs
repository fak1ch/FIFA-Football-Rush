using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class SpikesCylinderLogConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
        public InfinityWorldMoveXConfig infinityLocalMoveXConfig;
    }
    
    public class SpikesCylinderLog : Trap
    {
        [SerializeField] private LogAnimation _logAnimation;
        [SerializeField] private InfinityLocalMoveX _infinityLocalMoveX;
        
        private SpikesCylinderLogConfig _config;
        
        private void Start()
        {
            _config = _gameConfig.trapConfigs.spikesCylinderLogConfig;
            InitializeConfig(_config);
            
            _logAnimation.Initialize(_config.infinityLocalRotationConfig);
            _infinityLocalMoveX.Initialize(_config.infinityLocalMoveXConfig);
        }
    }
}