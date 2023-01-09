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
    }
    
    public class PickableItem : MonoBehaviour
    {
        public event Action<PickableItem> OnLocalMoveAnimationComplete;

        [SerializeField] private Collider _collider;
        [SerializeField] private Rigidbody _rigidbody;
        [SerializeField] private GameConfigScriptableObject _gameConfig;

        private Tween _localMoveTween;
        private PickableItemConfig _config;

        private int _indexInContainer;

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
            LocalMoveToPosition(newLocalPosition, _config.localMoveAnimationDuration, _config.localMoveEase);
        }

        public void SetActiveGravity(bool value)
        {
            _rigidbody.useGravity = value;
            _rigidbody.velocity = Vector3.zero;
            
            _rigidbody.velocity = Vector3.zero;
            _rigidbody.angularVelocity = Vector3.zero;
        }

        public void SetActiveCollider(bool value)
        {
            _collider.enabled = value;
        }

        public void SetRigidbodyVelocity(Vector3 newVelocity)
        {
            _rigidbody.velocity = newVelocity;
        }

        private void OnDestroy()
        {
            _localMoveTween?.Kill();
        }
    }
}