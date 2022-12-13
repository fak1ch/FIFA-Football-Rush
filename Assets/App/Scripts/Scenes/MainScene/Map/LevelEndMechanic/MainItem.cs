using System;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelEndMechanic
{
    [Serializable]
    public class MainItemConfig
    {
        public Vector3 endLocalPosition;
        public Vector3 gameOverNewVelocity;
        public float moveDurationSec = 2;
        public Ease moveEase = Ease.InQuad;
    }
    
    public class MainItem : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        [SerializeField] private TextMeshProUGUI _itemsCountText;

        [Space(10)] 
        [SerializeField] private Rigidbody _rigidbody;

        private MainItemConfig _config;
        
        private Vector3 _startLocalPosition;
        private Tween _moveTween;
        private bool _isGameOver = false;
        private int _currentItemsCount = 0;

        public int CurrentItemsCount => _currentItemsCount;
        
        private void Start()
        {
            _config = _gameConfig.mainItemConfig;
            _startLocalPosition = transform.localPosition;
        }

        public void AddItemsCount(int value)
        {
            _currentItemsCount += value;
            _itemsCountText.text = _currentItemsCount.ToString();
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.A))
            {
                StartMove();
            }
        }

        public void StartMove()
        {
            _moveTween?.Kill();

            transform.localPosition = _startLocalPosition;

            _moveTween = transform.DOLocalMove(_config.endLocalPosition, _config.moveDurationSec)
                .SetEase(_config.moveEase);
        }

        public void StartGameOverAnimation()
        {
            if (_isGameOver) return;
            _isGameOver = true;

            _moveTween?.Kill();
            _rigidbody.velocity = _config.gameOverNewVelocity;
            _rigidbody.useGravity = true;
        }
        
        private void OnDestroy()
        {
            _moveTween.Kill();
        }
    }
}