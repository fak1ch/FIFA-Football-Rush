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
        public float groundedOffset;
        public float groundedRadius;
        public LayerMask groundLayers;

        [Space(10)] 
        public float smoothing;
        public float rightSpeedMultiplier;
        public float maxSpeed;
        public float minLocalX;
        public float maxLocalX;
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
        private bool _isCanMove = false;
        
        public bool IsGrounded { get; private set; }

        private void Start()
        {
            _config = _gameConfig.stickmanViewConfig;
        }

        private void Update()
        {
            GroundedCheck();
            
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

            Vector3 newPosition = transform.position + new Vector3(1, 0, 0) * _currentSpeed;
            newPosition.x = Mathf.Clamp(newPosition.x, _config.minLocalX, _config.maxLocalX);

            transform.position = Vector3.Lerp(transform.position, newPosition, 1 / _config.smoothing);
        }

        private void SmoothMove()
        {
            float percent = MathUtils.GetPercent(0, _forwardSmoothMovement.MaxMoveSpeed,
                _forwardSmoothMovement.CurrentMoveSpeed);

            float tempSpeed = percent * Time.deltaTime * _deltaMouseX * _config.rightSpeedMultiplier;

            _currentSpeed = Mathf.Clamp(tempSpeed, -_config.maxSpeed, _config.maxSpeed);
        }
        
        private void GroundedCheck()
        {
            Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - _config.groundedOffset, transform.position.z);
            IsGrounded = Physics.CheckSphere(spherePosition, _config.groundedRadius, _config.groundLayers);
        }
        
        public void SetCanMove(bool value)
        {
            _isCanMove = value;
        }
        
        private void OnDrawGizmosSelected()
        {
            Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
            Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);

            Gizmos.color = IsGrounded ? transparentGreen : transparentRed;
            Gizmos.DrawSphere(new Vector3(transform.position.x, 
                transform.position.y - _config.groundedOffset, transform.position.z), _config.groundedRadius);
            
        }
    }
}