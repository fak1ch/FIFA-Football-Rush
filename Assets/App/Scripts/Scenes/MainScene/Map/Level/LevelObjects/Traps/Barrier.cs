using System;
using App.Scripts.Scenes.MainScene.Map.Level.Traps.Barrier;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps
{
    [Serializable]
    public class BarrierConfig : TrapConfig
    {
        public InfinityLocalRotationSequenceConfig infinityLocalRotationSequenceConfig;
    }
    
    public class Barrier : Trap
    {
        [SerializeField] private InfinityLocalRotationSequence infinityLocalRotationSequence;
        private BarrierConfig _config;

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.barrierConfig;
            InitializeConfig(_config);

            infinityLocalRotationSequence.Initialize(_config.infinityLocalRotationSequenceConfig);
        }
    }
}