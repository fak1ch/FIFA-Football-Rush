using System;
using App.Scripts.Scenes;
using StarterAssets.InputSystems;
using UnityEngine;

namespace StarterAssets.NewMovement
{
    [Serializable]
    public class ForwardSmoothMovementConfig
    {
        public float maxMoveSpeed = 5;
        public float smoothMoveMultiplier = 3;
    }

    public class ForwardSmoothMovement : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private ForwardSmoothMovementConfig _config;

        [Space(10)] 
        [SerializeField] private InputSystem _inputSystem;

        private bool _isCanMove = false;
        
        public float CurrentMoveSpeed { get; private set; }
        public float MaxMoveSpeed => _config.maxMoveSpeed;

        private void Start()
        {
            _config = _gameConfig.forwardSmoothMovementConfig;
        }

        private void Update()
        {
            SmoothMove();
            MoveForward();
        }

        private void SmoothMove()
        {
            float endValue = _inputSystem.IsMouseDown ? _config.maxMoveSpeed : 0;
            endValue = _isCanMove ? endValue : 0;
        
            CurrentMoveSpeed = Mathf.Lerp(CurrentMoveSpeed, endValue,
                Time.deltaTime * _config.smoothMoveMultiplier);
        }
        
        private void MoveForward()
        {
            transform.Translate(new Vector3(0, 0, 1) * CurrentMoveSpeed * Time.deltaTime);
        }
        
        public void SetCanMove(bool value)
        {
            _isCanMove = value;
        }
    }
}