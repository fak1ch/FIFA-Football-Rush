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
        public float rightSpeedMultiplier;
        public float maxSpeed;
        public float minLocalX;
        public float maxLocalX;
    }

    public class StickmanView : MonoBehaviour
    {
        public event Action OnJump;
        
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
            if (!_isCanMove) return;
            
            _deltaMouseX = _inputSystem.MoveInput.x;

            float newAngleY = _deltaMouseX * _config.angleMultiplier;
            newAngleY = newAngleY * newAngleY <= _config.thresholdInputX ? 0 : newAngleY;
            newAngleY = _inputSystem.IsMouseDown ? newAngleY : 0;
            
            RotateStickman(newAngleY);
            SmoothMove();
            MoveStickman();
            GroundedCheck();
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

            transform.position = newPosition;
        }

        private void SmoothMove()
        {
            float percent = MathUtils.GetPercent(0, _forwardSmoothMovement.MaxMoveSpeed,
                _forwardSmoothMovement.CurrentMoveSpeed);

            _currentSpeed = _config.maxSpeed * percent * Time.deltaTime * _deltaMouseX * _config.rightSpeedMultiplier;
        }
        
        private void GroundedCheck()
        {
            Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - _config.groundedOffset, transform.position.z);
            IsGrounded = Physics.CheckSphere(spherePosition, _config.groundedRadius, _config.groundLayers, QueryTriggerInteraction.Ignore);
        }
        
        public void SetCanMove(bool value)
        {
            _isCanMove = value;
        }
    }
}