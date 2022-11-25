using System;
using UnityEngine;

namespace StarterAssets.InputSystems
{
    public class InputSystem : MonoBehaviour
    {
        [SerializeField] private float _sensitivity = 1;
        
        private Vector2 _moveInput;

        private Vector2 _lastFrameMousePosition;
        private Vector2 _currentFrameMousePosition;
        
        public Vector2 MoveInput { get; private set; }
        public bool IsMouseDown { get; private set; }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Mouse0))
            {
                IsMouseDown = true;
                
                _currentFrameMousePosition = Input.mousePosition;
                _lastFrameMousePosition = _currentFrameMousePosition;
            }
            
            if (Input.GetKey(KeyCode.Mouse0))
            {
                _currentFrameMousePosition = Input.mousePosition;

                Vector2 deltaPosition = _currentFrameMousePosition - _lastFrameMousePosition;
                deltaPosition *= _sensitivity;

                MoveInput = deltaPosition;
            }
            
            if (Input.GetKeyUp(KeyCode.Mouse0))
            {
                IsMouseDown = false;
            }
            
            _lastFrameMousePosition = _currentFrameMousePosition;
        }

        public void SetMoveInput(Vector2 vector)
        {
            
        }
    }
}