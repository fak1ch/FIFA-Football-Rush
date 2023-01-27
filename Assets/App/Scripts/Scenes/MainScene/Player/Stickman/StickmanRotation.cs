using System;
using UnityEngine;

namespace StarterAssets.Animations
{
    [Serializable]
    public class StickmanRotationConfig
    {
        public float rotateSpeed;
        public float maxAngleY;
    }

    public class StickmanRotation : MonoBehaviour
    {
        [SerializeField] private LeftToRightMovement _leftToRightMovement;
        
        private StickmanRotationConfig _config;
        private bool _onPause;

        public void Initialize(StickmanRotationConfig config)
        {
            _config = config;
        }
        
        private void Update()
        {
            if (_onPause) return;
            
            RotateStickman();
        }

        private void RotateStickman()
        {
            float speedPercent = _leftToRightMovement.GetSpeedPercent();
            float targetYRotation = _config.maxAngleY * speedPercent;

            Quaternion targetRotation = Quaternion.Euler(Vector3.up * targetYRotation);

            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, 
                _config.rotateSpeed * Time.deltaTime);
        }
        
        public void SetPause(bool value)
        {
            _onPause = value;
        }
    }
}