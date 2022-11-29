using System;
using StarterAssets.InputSystems;
using StarterAssets.NewMovement;
using UnityEngine;

namespace StarterAssets.Animations
{
    public class StickmanView : MonoBehaviour
    {
        [Space(10)]
        [SerializeField] private float _rotateSpeed;
        [SerializeField] private float _angleMultiplier = 1;
        [SerializeField] private float _thresholdInputX;
        [SerializeField] private float _minAngleY;
        [SerializeField] private float _maxAngleY;

        [Space(10)] 
        [SerializeField] private float _rightSpeedMultiplier;
        
        [Space(10)]
        [SerializeField] private InputSystem _inputSystem;
        [SerializeField] private Rigidbody _rigidbody;
        [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;

        private float _deltaMouseX;
        private Vector2 _targetForward;
        
        private void Update()
        {
            _deltaMouseX = _inputSystem.MoveInput.x;

            float newAngleY = _deltaMouseX * _angleMultiplier;
            newAngleY = newAngleY * newAngleY <= _thresholdInputX ? 0 : newAngleY;
            newAngleY = _inputSystem.IsMouseDown ? newAngleY : 0;
            
            RotateStickman(newAngleY);
            MoveStickman();
        }

        private void RotateStickman(float targetYRotation)
        {
            targetYRotation = Mathf.Clamp(targetYRotation, _minAngleY, _maxAngleY);

            Quaternion targetRotation = Quaternion.Euler(Vector3.up * targetYRotation);

            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, _rotateSpeed * Time.deltaTime);
        }
        
        private void MoveStickman()
        {
            transform.position += new Vector3(1, 0, 0) 
                                  * _forwardSmoothMovement.CurrentMoveSpeed
                                  * Time.deltaTime * _deltaMouseX * _rightSpeedMultiplier;
        }
    }
}