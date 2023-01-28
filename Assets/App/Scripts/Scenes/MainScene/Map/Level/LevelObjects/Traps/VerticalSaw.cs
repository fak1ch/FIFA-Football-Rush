using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps
{
    [Serializable]
    public class VerticalSawConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
        public InfinityWorldMoveXConfig infinityLocalMoveXConfig;
    }
    
    public class VerticalSaw : Trap
    {
        [SerializeField] private InfinityLocalRotation _infinityLocalRotation;
        [SerializeField] private InfinityLocalMoveX _infinityLocalMoveX;

        private VerticalSawConfig _config;
        
        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.verticalSawConfig;
            InitializeConfig(_config);
            
            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
            _infinityLocalMoveX.Initialize(_config.infinityLocalMoveXConfig);
        }
    }
}