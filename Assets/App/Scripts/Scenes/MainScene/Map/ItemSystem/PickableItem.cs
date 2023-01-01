using System;
using DG.Tweening;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    [Serializable]
    public class PickableItemConfig
    {
        public float localMoveAnimationDuration;
        public Ease localMoveEase;

        [Header("Jump Animation")] 
        [Space(10)] 
        public float offsetY;
        public float jumpToUpDuration;
        public float jumpToDownDuration;
        public Ease jumpToUpEase;
        public Ease jumpToDownEase;
    }
    
    public class PickableItem : MonoBehaviour
    {
        public event Action<PickableItem> OnLocalMoveAnimationComplete;

        [SerializeField] private BoxCollider _boxCollider;
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private Tween _localMoveTween;
        private Sequence _jumpSequence;
        private PickableItemConfig _config;

        private int _indexInContainer;
        private Vector3 _startLocalPosition;
        private Vector3 _endLocalPosition;
        private bool _picked = false;

        public int ItemIndexInContainer
        {
            get => _indexInContainer;

            set
            {
                _jumpSequence?.Kill();
                _indexInContainer = value;
                _picked = true;
            }
        }

        private void Start()
        {
            _config = _gameConfig.pickableItemConfig;

            if (_picked == false)
            {
                StartJumpAnimation();
            }
        }

        public void LocalMoveToPosition(Vector3 newLocalPosition, float animationDuration, Ease ease)
        {
            _localMoveTween?.Kill();
            _localMoveTween = transform.DOLocalMove(newLocalPosition, animationDuration).SetEase(ease);
            _localMoveTween.OnComplete(() => OnLocalMoveAnimationComplete?.Invoke(this));
        }

        public void LocalMoveToPosition(Vector3 newLocalPosition)
        {
            LocalMoveToPosition(newLocalPosition, _config.localMoveAnimationDuration, _config.localMoveEase);
        }
        
        private void StartJumpAnimation()
        {
            _startLocalPosition = transform.localPosition;
            _endLocalPosition = _startLocalPosition;
            _endLocalPosition.y += _config.offsetY;
            
            _jumpSequence = DOTween.Sequence();
            _jumpSequence.Append(transform.DOLocalMove(_endLocalPosition, _config.jumpToUpDuration)
                .SetEase(_config.jumpToUpEase));
            _jumpSequence.Append(transform.DOLocalMove(_startLocalPosition, _config.jumpToDownDuration)
                .SetEase(_config.jumpToDownEase));
            _jumpSequence.OnComplete(() => _jumpSequence.Restart());
        }
        
        public void SetActiveCollider(bool value)
        {
            _boxCollider.enabled = value;
        }

        private void OnDestroy()
        {
            _localMoveTween?.Kill();
            _jumpSequence?.Kill();
        }
    }
}