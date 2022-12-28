using System;
using DG.Tweening;
using UnityEngine;

namespace App.Scripts.Scenes.General.ItemSystem
{
    [Serializable]
    public class PickableItemConfig
    {
        public float animationDuration;
        public Ease ease;
    }
    
    public class PickableItem : MonoBehaviour
    {
        public event Action<PickableItem> OnLocalMoveAnimationComplete;

        [SerializeField] private BoxCollider _boxCollider;
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private Tween _localMoveTween;
        private PickableItemConfig _config;

        public int ItemIndexInContainer { get; set; }

        private void Start()
        {
            _config = _gameConfig.pickableItemConfig;
        }

        public void LocalMoveToPosition(Vector3 newLocalPosition, float animationDuration, Ease ease)
        {
            _localMoveTween?.Kill();
            _localMoveTween = transform.DOLocalMove(newLocalPosition, animationDuration).SetEase(ease);
            _localMoveTween.OnComplete(() => OnLocalMoveAnimationComplete?.Invoke(this));
        }

        public void LocalMoveToPosition(Vector3 newLocalPosition)
        {
            LocalMoveToPosition(newLocalPosition, _config.animationDuration, _config.ease);
        }
        
        public void SetActiveCollider(bool value)
        {
            _boxCollider.enabled = value;
        }
    }
}