using System;
using App.Scripts.General.Utils;
using StarterAssets.NewMovement;
using UnityEngine;

namespace StarterAssets.Animations
{
    public class StickmanAnimationHandler : MonoBehaviour
    {
         [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;
         [SerializeField] private StickmanView _stickmanView;
         [SerializeField] private Animator _animator;
        
         private int _jumpTriggerId;
         private int _moveSpeedPercentId;
         private int _groundedId;

         #region Events

         private void OnEnable()
         {
             _stickmanView.OnJump += PlayJumpAnimation;
         }

         private void OnDisable()
         {
             _stickmanView.OnJump += PlayJumpAnimation;
         }

         #endregion

         private void Start()
         {
             _jumpTriggerId = Animator.StringToHash("Jump");
             _moveSpeedPercentId = Animator.StringToHash("MoveSpeedPercent");
             _groundedId = Animator.StringToHash("Grounded");
         }
        
         private void Update()
         {
             float percent = MathUtils.GetPercent(0, _forwardSmoothMovement.MaxMoveSpeed, 
                 _forwardSmoothMovement.CurrentMoveSpeed);
             
             _animator.SetFloat(_moveSpeedPercentId, percent);
             _animator.SetBool(_groundedId, _stickmanView.IsGrounded);
         }
        
         private void PlayJumpAnimation()
         {
             _animator.SetTrigger(_jumpTriggerId);
         }
    }
}