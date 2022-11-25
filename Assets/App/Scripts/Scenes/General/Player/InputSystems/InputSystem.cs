using System;
using UnityEngine;

namespace StarterAssets.InputSystems
{
    public class InputSystem : MonoBehaviour
    {
        private Vector2 _moveInput;
        private bool _isMoveInputChanged;
        
        public Vector2 MoveInput
        {
            get => _moveInput;

            private set
            {
                if (value != Vector2.zero)
                {
                    _isMoveInputChanged = true;
                }
                _moveInput = value;
            }
        }
        
        public bool IsMoveInputChanged
        {
            get
            {
                if (_isMoveInputChanged)
                {
                    _isMoveInputChanged = false;
                    return true;
                }

                return false;
            }
        }
        
        public void SetMoveInput(Vector2 vector)
        {
            MoveInput = vector;
        }
    }
}