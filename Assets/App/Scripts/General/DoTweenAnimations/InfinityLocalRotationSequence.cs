using System;
using App.Scripts.General.DoTweenAnimations;
using DG.Tweening;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps.Barrier
{
    [Serializable]
    public class InfinityLocalRotationSequenceConfig
    {
        public Vector3 startLocalAngle;
        public Vector3 endLocalAngle;
        public float duration;
        public Ease ease;
        public bool isRelative;
    }
    
    public class InfinityLocalRotationSequence : DoTweenAnimation
    {
        private InfinityLocalRotationSequenceConfig _config;

        private Sequence _rotateSequence;

        public void Initialize(InfinityLocalRotationSequenceConfig config)
        {
            _config = config;

            _rotateSequence = DOTween.Sequence();
            _rotateSequence.Append(transform.DOLocalRotate(_config.endLocalAngle, _config.duration)
                .SetEase(_config.ease).SetRelative(_config.isRelative));
            _rotateSequence.Append(transform.DOLocalRotate(_config.startLocalAngle, _config.duration)
                .SetEase(_config.ease).SetRelative(_config.isRelative));
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