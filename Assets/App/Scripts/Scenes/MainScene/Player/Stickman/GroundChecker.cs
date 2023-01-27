using System;
using System.ComponentModel;
using App.Scripts.Scenes;
using UnityEngine;

namespace StarterAssets.Animations
{
    [Serializable]
    public class GroundCheckerConfig
    {
        public float groundedOffset;
        public float groundedRadius;
        public LayerMask groundLayers;
    }
    
    public class GroundChecker : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private GroundCheckerConfig _config;
        
        public bool IsGrounded { get; private set; }

        private void Start()
        {
            _config = _gameConfig.stickmanViewConfig.groundCheckerConfig;
        }

        private void Update()
        {
            GroundedCheck();
        }

        private void GroundedCheck()
        {
            Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - _config.groundedOffset, transform.position.z);
            IsGrounded = Physics.CheckSphere(spherePosition, _config.groundedRadius, _config.groundLayers);
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