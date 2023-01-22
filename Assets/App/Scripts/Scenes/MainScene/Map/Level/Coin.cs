using System;
using App.Scripts.General.VibrateSystem;
using DG.Tweening;
using StarterAssets.Animations;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level
{
    [Serializable]
    public class CoinConfig
    {
        public Vector3 endLocalPositionOffset;
        public float moveDuration;

        [Space(10)]
        public Vector3 endLocalEulerAngles;
        public float rotateDuration;

        [Space(10)]
        public int addMoneyValue = 1;
    }
    
    public class Coin : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private CoinConfig _config;

        [SerializeField] private AudioSource _audioSource;
        [SerializeField] private CollisionObject _meshObject;
        [SerializeField] private ParticleSystem _pickEffect;

        private Vector3 _startLocalPosition;
        private Vector3 _endLocalPosition;

        private Sequence _moveSequence;
        private Tween _rotateTween;

        #region Events

        private void OnEnable()
        {
            _meshObject.CollisionEnter += HandleCollisionEnter;
        }

        private void OnDisable()
        {
            _meshObject.CollisionEnter -= HandleCollisionEnter;
        }

        #endregion

        private void Start()
        {
            _config = _gameConfig.coinConfig;
            
            _startLocalPosition = transform.localPosition;
            _endLocalPosition = _startLocalPosition + _config.endLocalPositionOffset;

            _moveSequence = DOTween.Sequence();
            _moveSequence.Append(transform.DOLocalMove(_endLocalPosition, _config.moveDuration)
                .SetEase(Ease.InOutQuad));
            _moveSequence.Append(transform.DOLocalMove(_startLocalPosition, _config.moveDuration)
                .SetEase(Ease.InOutQuad));
            _moveSequence.OnComplete(() => _moveSequence.Restart());

            _rotateTween = transform.DOLocalRotate(_config.endLocalEulerAngles, _config.rotateDuration)
                .SetEase(Ease.Linear)
                .SetRelative()
                .SetLoops(-1);
        }

        private void HandleCollisionEnter(Collision collision)
        {
            if (collision.gameObject.TryGetComponent(out StickmanView stickmanView))
            {
                MoneyWallet.Instance.AddMoney(_config.addMoneyValue);
                
                _meshObject.gameObject.SetActive(false);
                
                _pickEffect.gameObject.SetActive(true);
                _pickEffect.DORestart();
                
                _audioSource.Play();

                OnDestroy();
            }
        }

        private void OnDestroy()
        {
            _moveSequence.Kill();
            _rotateTween.Kill();
        }
    }
}