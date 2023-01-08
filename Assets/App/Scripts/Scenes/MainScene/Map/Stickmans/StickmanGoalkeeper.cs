using System;
using System.Collections;
using App.Scripts.General.Utils;
using App.Scripts.Scenes.General.LevelEndMechanic;
using UnityEngine;
using Random = UnityEngine.Random;

namespace App.Scripts.Scenes.General.Map.Stickmans
{
    [Serializable]
    public class StickmanGoalkeeperConfig
    {
        public float delayUntilJump = 0.25f;
        public float forceUp;
        public float forceSide;
    }
    
    public class StickmanGoalkeeper : MonoBehaviour
    {
        [SerializeField] private Animator _animator;
        [SerializeField] private Rigidbody _rigidbody;
        [SerializeField] private Trigger _trigger;
        
        [Space(10)]
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private StickmanGoalkeeperConfig _config;
        private int _jumpTriggerHash;

        private void OnEnable()
        {
            _trigger.TriggerEnter += HandleTriggerEnter;
        }

        private void OnDisable()
        {
            _trigger.TriggerEnter -= HandleTriggerEnter;
        }

        private void Start()
        {
            _jumpTriggerHash = Animator.StringToHash("JumpTrigger");
            _config = _gameConfig.stickmanGoalkeeperConfig;
        }

        private IEnumerator StartJumpAnimationRoutine()
        {
            _animator.SetTrigger(_jumpTriggerHash);

            yield return new WaitForSeconds(_config.delayUntilJump);

            int multiplier = MathUtils.IsProbability(50) ? 1 : -1;
            float forceSide = _config.forceSide * multiplier;
            
            _rigidbody.AddForce(new Vector3(forceSide, _config.forceUp, 0));
        }

        private void HandleTriggerEnter(Collider collider)
        {
            if (collider.TryGetComponent(out MainItem mainItem))
            {
                StartCoroutine(StartJumpAnimationRoutine());
            }
        }
    }
}