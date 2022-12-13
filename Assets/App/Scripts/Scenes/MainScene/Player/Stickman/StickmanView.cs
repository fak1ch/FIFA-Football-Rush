using System;
using App.Scripts.General.Utils;
using App.Scripts.Scenes;
using StarterAssets.InputSystems;
using StarterAssets.NewMovement;
using UnityEngine;

namespace StarterAssets.Animations
{
    [Serializable]
    public class StickmanViewConfig
    {
        public float rotateSpeed;
        public float angleMultiplier = 1;
        public float thresholdInputX;
        public float minAngleY;
        public float maxAngleY;

        [Space(10)]
        public float rightSpeedMultiplier;
        public float maxSpeed;
    }

    public class StickmanView : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private StickmanViewConfig _config;

        [Space(10)]
        [SerializeField] private InputSystem _inputSystem;
        [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;

        private float _deltaMouseX;
        private float _currentSpeed;
        private Vector2 _targetForward;
        private bool _isCanMove = true;

        private void Start()
        {
            _config = _gameConfig.stickmanViewConfig;
        }

        private void Update()
        {
            if (!_isCanMove) return;
            
            _deltaMouseX = _inputSystem.MoveInput.x;

            float newAngleY = _deltaMouseX * _config.angleMultiplier;
            newAngleY = newAngleY * newAngleY <= _config.thresholdInputX ? 0 : newAngleY;
            newAngleY = _inputSystem.IsMouseDown ? newAngleY : 0;
            
            RotateStickman(newAngleY);
            SmoothMove();
            MoveStickman();
        }

        private void RotateStickman(float targetYRotation)
        {
            targetYRotation = Mathf.Clamp(targetYRotation, _config.minAngleY, _config.maxAngleY);

            Quaternion targetRotation = Quaternion.Euler(Vector3.up * targetYRotation);

            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, 
                _config.rotateSpeed * Time.deltaTime);
        }
        
        private void MoveStickman()
        {
            if (!_inputSystem.IsMouseDown) return;

            transform.position += new Vector3(1, 0, 0) * _currentSpeed;
        }

        private void SmoothMove()
        {
            float percent = MathUtils.GetPercent(0, _forwardSmoothMovement.MaxMoveSpeed,
                _forwardSmoothMovement.CurrentMoveSpeed);

            _currentSpeed = _config.maxSpeed * percent * Time.deltaTime * _deltaMouseX;
        }
        
        public void SetCanMove(bool value)
        {
            _isCanMove = value;
        }
    }
}