using System;
using App.Scripts.Scenes;
using UnityEngine;

namespace StarterAssets.InputSystems
{
    [Serializable]
    public class InputSystemConfig
    {
        public float sensitivity = 0.1f;
        public float targetScreenWidth = 768;
    }
    
    public class InputSystem : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        [SerializeField] private Canvas _canvas;

        private InputSystemConfig _config;
        
        private Vector2 _moveInput;
        private Vector2 _lastFrameMousePosition;
        private Vector2 _currentFrameMousePosition;
        private float _screenMultiplier;
        
        public Vector2 MoveInput { get; private set; }
        public bool IsMouseDown { get; private set; }

        private void Start()
        {
            _config = _gameConfig.inputSystemConfig;
            _screenMultiplier = _config.targetScreenWidth/ _canvas.pixelRect.width;
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
                deltaPosition *= _config.sensitivity;

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