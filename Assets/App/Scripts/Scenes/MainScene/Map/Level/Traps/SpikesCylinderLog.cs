using System;
using App.Scripts.General.DoTweenAnimations;
using App.Scripts.Scenes.MainScene.Map.Level.Traps.Barrier;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class SpikesCylinderLogConfig : TrapConfig
    {
        public InfinityLocalRotationSequenceConfig infinityLocalRotationSequenceConfig;
        public InfinityWorldMoveXConfig infinityLocalMoveXConfig;
    }
    
    public class SpikesCylinderLog : Trap
    {
        [SerializeField] private InfinityLocalRotationSequence _infinityLocalRotationSequence;
        [SerializeField] private InfinityLocalMoveX _infinityLocalMoveX;
        
        private SpikesCylinderLogConfig _config;
        
        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.spikesCylinderLogConfig;
            InitializeConfig(_config);
            
            _infinityLocalRotationSequence.Initialize(_config.infinityLocalRotationSequenceConfig);
            _infinityLocalMoveX.Initialize(_config.infinityLocalMoveXConfig);
        }
    }
}