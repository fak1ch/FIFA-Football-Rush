﻿using System;
using System.Collections;
using App.Scripts.General.Utils;
using App.Scripts.Scenes.MainScene.Map.Stickmans;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic.MainItem;
using UnityEngine;

namespace App.Scripts.Scenes.General.Map.Stickmans
{
    [Serializable]
    public class StickmanGoalkeeperConfig
    {
        public float delayUntilJump = 0.25f;
        public float forceUp;
        public float forceForward;
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

            _rigidbody.AddForce(new Vector3(0, _config.forceUp, -_config.forceForward));
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