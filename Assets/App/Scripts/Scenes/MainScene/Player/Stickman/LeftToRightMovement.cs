using System;
using App.Scripts.General.Utils;
using App.Scripts.Scenes;
using StarterAssets.InputSystems;
using StarterAssets.NewMovement;
using UnityEngine;

namespace StarterAssets.Animations
{
    [Serializable]
    public class LeftToRightMovementConfig
    {
        public float speedMultiplier;
        public float smoothing;
        public float minLocalX;
        public float maxLocalX;
        public float maxSpeed;
        public float drag;
    }

    public class LeftToRightMovement : MonoBehaviour
    {
        [SerializeField] private InputSystem _inputSystem;
        [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;
        
        private LeftToRightMovementConfig _config;
        private float _deltaMouseX;
        private bool _onPause;

        public float VelocityX { get; private set; }

        public void Initialize(LeftToRightMovementConfig config)
        {
            _config = config;
        }

        private void Update()
        {
            if (_onPause) return;

            GetInput();
            ControlSpeed();
            SmoothMove();
            DragVelocity();
            
            Debug.Log(VelocityX);
        }

        private void GetInput()
        {
            _deltaMouseX = _inputSystem.MoveInput.x;
        }
        
        private void SmoothMove()
        {
            Vector3 newPosition = transform.position + new Vector3(1, 0, 0) * VelocityX;
            newPosition.x = Mathf.Clamp(newPosition.x, _config.minLocalX, _config.maxLocalX);

            transform.position = Vector3.Lerp(transform.position, newPosition, _config.smoothing);
        }

        private void ControlSpeed()
        {
            float percent = MathUtils.GetPercent(0, _forwardSmoothMovement.MaxMoveSpeed,
                _forwardSmoothMovement.CurrentMoveSpeed);

            float tempSpeed = percent * Time.deltaTime * _deltaMouseX * _config.speedMultiplier;

            VelocityX = Mathf.Clamp(VelocityX + tempSpeed, -_config.maxSpeed, _config.maxSpeed);
        }

        private void DragVelocity()
        {
            VelocityX = Mathf.Lerp(VelocityX, 0, _config.drag * Time.deltaTime);
        }
        
        public float GetSpeedPercent()
        {
            return MathUtils.GetPercentUnclamped(0, _config.maxSpeed, VelocityX);
        }
        
        public void SetPause(bool value)
        {
            _onPause = value;
        }
    }
}