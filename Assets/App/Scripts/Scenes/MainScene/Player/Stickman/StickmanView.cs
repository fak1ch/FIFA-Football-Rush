using System;
using App.Scripts.Scenes;
using UnityEngine;

namespace StarterAssets.Animations
{
    [Serializable]
    public class StickmanViewConfig
    {
        public LeftToRightMovementConfig leftToRightMovementConfig;
        public StickmanRotationConfig stickmanRotationConfig;
        public GroundCheckerConfig groundCheckerConfig;
    }

    public class StickmanView : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private StickmanViewConfig _config;

        [SerializeField] private LeftToRightMovement _leftToRightMovement;
        [SerializeField] private StickmanRotation _stickmanRotation;

        private void Start()
        {
            _config = _gameConfig.stickmanViewConfig;
            
            _leftToRightMovement.Initialize(_config.leftToRightMovementConfig);
            _stickmanRotation.Initialize(_config.stickmanRotationConfig);
        }

        public void SetPause(bool value)
        {
            _leftToRightMovement.SetPause(value);
            _stickmanRotation.SetPause(value);
        }
    }
}