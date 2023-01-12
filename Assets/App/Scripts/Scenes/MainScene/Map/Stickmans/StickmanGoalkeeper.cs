using System;
using System.Collections;
using App.Scripts.General.Utils;
using App.Scripts.Scenes.MainScene.Map.LevelEndMechanic;
using App.Scripts.Scenes.MainScene.Map.Stickmans;
using UnityEngine;

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
        [SerializeField] private JointDeactivator _jointDeactivator;
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
            _rigidbody.maxAngularVelocity = Mathf.Infinity;
        }

        private IEnumerator StartJumpAnimationRoutine()
        {
            _animator.SetTrigger(_jumpTriggerHash);
            _jointDeactivator.SetActiveJoints(false);

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