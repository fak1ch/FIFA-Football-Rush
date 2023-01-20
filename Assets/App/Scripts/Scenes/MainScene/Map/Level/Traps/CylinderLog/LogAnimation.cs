using System;
using App.Scripts.General.DoTweenAnimations;
using DG.Tweening;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    public class LogAnimation : DoTweenAnimation
    {
        private InfinityLocalRotationConfig _config;
        
        private Sequence _rotateSequence;
        
        
        public void Initialize(InfinityLocalRotationConfig config)
        {
            _config = config;

            Vector3 startLocalEulerAngles = _config.endLocalEulerAngles * -1;

            _rotateSequence = DOTween.Sequence();
            _rotateSequence.Append(transform.DOLocalRotate(_config.endLocalEulerAngles, _config.rotateDuration)
                .SetRelative()
                .SetEase(_config.ease));
            _rotateSequence.Append(transform.DOLocalRotate(startLocalEulerAngles, _config.rotateDuration)
                .SetRelative()
                .SetEase(_config.ease));
            _rotateSequence.OnComplete(StartAnimation);
        }

        public override void StartAnimation()
        {
            _rotateSequence.Restart();
        }

        public override void Pause()
        {
            _rotateSequence.Pause();
        }

        public override void Kill()
        {
            _rotateSequence.Kill();
        }
    }
}