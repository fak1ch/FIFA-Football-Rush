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
        private GroundCheckerConfig _config => _gameConfig.stickmanViewConfig.groundCheckerConfig;
        
        public bool IsGrounded { get; private set; }

        private void Update()
        {
            GroundedCheck();
        }

        private void GroundedCheck()
        {
            Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - _config.groundedOffset, transform.position.z);
            IsGrounded = Physics.CheckSphere(spherePosition, _config.groundedRadius, _config.groundLayers);
        }
    }
}