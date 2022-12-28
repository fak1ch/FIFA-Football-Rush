using System;
using UnityEngine;

namespace App.Scripts.Scenes.General.Map.Stickmans
{
    public class StickmanGoalkeeper : MonoBehaviour
    {
        [SerializeField] private Animator _animator;

        private int _jumpTriggerHash;

        private void Start()
        {
            _jumpTriggerHash = Animator.StringToHash("JumpTrigger");
        }

        public void StartJumpAnimation()
        {
            _animator.SetTrigger(_jumpTriggerHash);
        }
    }
}