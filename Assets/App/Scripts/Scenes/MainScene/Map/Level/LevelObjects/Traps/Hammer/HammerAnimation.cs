using System;
using App.Scripts.General.DoTweenAnimations;
using DG.Tweening;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps.Hammer
{
    [Serializable]
    public class HammerAnimationConfig
    {
        public Vector3 startLocalAngle;
        public Vector3 endLocalAngle;
        public float liftUpDuration;
        public float liftDownDuration;
        public Ease liftUpEase;
        public Ease liftDownEase;
        public float intervalBetweenAnims;
    }
    
    public class HammerAnimation : DoTweenAnimation
    {
        private HammerAnimationConfig _config;

        private Sequence _hammerSequence;
        
        public void Initialize(HammerAnimationConfig config)
        {
            _config = config;

            transform.localEulerAngles = _config.startLocalAngle;
            
            _hammerSequence = DOTween.Sequence();
            _hammerSequence.Append(transform.DOLocalRotate(_config.endLocalAngle, _config.liftDownDuration)
                .SetEase(_config.liftDownEase));
            _hammerSequence.AppendInterval(_config.intervalBetweenAnims);
            _hammerSequence.Append(transform.DOLocalRotate(_config.startLocalAngle, _config.liftUpDuration)
                .SetEase(_config.liftUpEase));
            _hammerSequence.OnComplete(StartAnimation);
        }
        
        public override void StartAnimation()
        {
            _hammerSequence.Restart();
        }

        public override void Pause()
        {
            _hammerSequence.Pause();
        }

        public override void Kill()
        {
            _hammerSequence.Kill();
        }
    }
}