using System;
using App.Scripts.General.Utils;
using StarterAssets.NewMovement;
using UnityEngine;

namespace StarterAssets.Animations
{
    public class StickmanAnimationHandler : MonoBehaviour
    {
         [SerializeField] private ForwardSmoothMovement _forwardSmoothMovement;
         [SerializeField] private GroundChecker _groundChecker;
         [SerializeField] private Animator _animator;
         
         private int _moveSpeedPercentId;
         private int _groundedId;
         private int _playerDieTriggerId;
         private int _playerVictoryTriggerId;

         private void Start()
         {
             _moveSpeedPercentId = Animator.StringToHash("MoveSpeedPercent");
             _groundedId = Animator.StringToHash("Grounded");
             _playerDieTriggerId = Animator.StringToHash("PlayerDie");
             _playerVictoryTriggerId = Animator.StringToHash("PlayerDance");
         }
        
         private void Update()
         {
             float percent = MathUtils.GetPercent(0, _forwardSmoothMovement.MaxMoveSpeed, 
                 _forwardSmoothMovement.CurrentMoveSpeed);
             
             _animator.SetFloat(_moveSpeedPercentId, percent);
             _animator.SetBool(_groundedId, _groundChecker.IsGrounded);
         }

         public void PlayVictoryAnimation()
         {
             _animator.SetTrigger(_playerVictoryTriggerId);
         }

         public void PlayDieAnimation()
         {
             _animator.SetTrigger(_playerDieTriggerId);
         }
    }
}