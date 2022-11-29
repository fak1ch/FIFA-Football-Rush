using System;
using App.Scripts.General.Utils;
using UnityEngine;

namespace StarterAssets.Animations
{
    public class StickmanAnimationHandler : MonoBehaviour
    {
        //[SerializeField] private PlayerMovement _playerMovement;
        // [SerializeField] private Animator _animator;
        //
        // private int _jumpTriggerId;
        // private int _moveSpeedPercentId;
        // private int _groundedId;
        //
        // private void Start()
        // {
        //     _jumpTriggerId = Animator.StringToHash("Jump");
        //     _moveSpeedPercentId = Animator.StringToHash("MoveSpeedPercent");
        //     _groundedId = Animator.StringToHash("Grounded");
        //
        //     _playerMovement.OnJump += PlayJumpAnimation;
        // }
        //
        // private void Update()
        // {
        //     float percent = MathUtils.GetPercent(0, _playerMovement.MaxSpeed, 
        //         _playerMovement.CurrentSpeed);
        //     
        //     _animator.SetFloat(_moveSpeedPercentId, percent);
        //     _animator.SetBool(_groundedId, _playerMovement.Grounded);
        // }
        //
        // private void PlayJumpAnimation()
        // {
        //     _animator.SetTrigger(_jumpTriggerId);
        // }
    }
}