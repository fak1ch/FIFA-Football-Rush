using System;
using StarterAssets.InputSystems;
using UnityEngine;

namespace StarterAssets.NewMovement
{
    public class ForwardSmoothMovement : MonoBehaviour
    {
        [SerializeField] private float _maxMoveSpeed = 5;
        [SerializeField] private float _smoothMoveMultiplier = 3;

        [Space(10)] 
        [SerializeField] private InputSystem _inputSystem;

        public float CurrentMoveSpeed { get; private set; }

        private void Update()
        {
            SmoothMove();
            MoveForward();
        }

        private void SmoothMove()
        {
            float endValue = _inputSystem.IsMouseDown ? _maxMoveSpeed : 0; 
        
            CurrentMoveSpeed = Mathf.Lerp(CurrentMoveSpeed, endValue, Time.deltaTime * _smoothMoveMultiplier);
        }
        
        private void MoveForward()
        {
            transform.Translate(new Vector3(0, 0, 1) * CurrentMoveSpeed * Time.deltaTime);
        }
    }
}