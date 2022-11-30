using System;
using UnityEngine;

namespace StarterAssets.InputSystems
{
    public class InputSystem : MonoBehaviour
    {
        [SerializeField] private float _sensitivity = 1;
        
        [Space(10)]
        [SerializeField] private float _targetScreenWidth = 768;
        [SerializeField] private Canvas _canvas;
        
        private Vector2 _moveInput;
        private Vector2 _lastFrameMousePosition;
        private Vector2 _currentFrameMousePosition;
        private float _screenMultiplier;
        
        public Vector2 MoveInput { get; private set; }
        public bool IsMouseDown { get; private set; }

        private void Start()
        {
            _screenMultiplier = _targetScreenWidth/ _canvas.pixelRect.width;
        }

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

                MoveInput = deltaPosition * _screenMultiplier;
            }
            
            if (Input.GetKeyUp(KeyCode.Mouse0))
            {
                IsMouseDown = false;
            }
            
            _lastFrameMousePosition = _currentFrameMousePosition;
        }
    }
}