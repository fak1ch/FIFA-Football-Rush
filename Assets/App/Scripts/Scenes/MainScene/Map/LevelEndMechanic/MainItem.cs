using System;
using App.Scripts.Scenes.General.ItemSystem;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelEndMechanic
{
    [Serializable]
    public class MainItemConfig
    {
        public Vector3 endWorldPosition;
        public Vector3 gameOverNewVelocity;
        public float moveDurationSec = 2;
        public Ease moveEase = Ease.InQuad;

        [Space(10)]
        public float scaleValueForOnePickableItem = 0.01f;
    }
    
    [Serializable]
    public class MainItemViewConfig
    {  
        public GameConfigScriptableObject gameConfig;
        public TextMeshProUGUI itemsCountText;

        [HideInInspector]
        public Rigidbody rigidbody;
        [HideInInspector]
        public PickableItem pickableItem;
    }
    
    public class MainItem : MonoBehaviour
    {
        private MainItemConfig _config;
        private MainItemViewConfig _viewConfig;
        
        private Tween _moveTween;
        private bool _isGameOver = false;
        private int _currentItemsCount = 0;

        public int CurrentItemsCount => _currentItemsCount;

        public void Initialize(MainItemViewConfig viewConfig)
        {
            _viewConfig = viewConfig;
            _config = _viewConfig.gameConfig.mainItemConfig;
        }

        public void AddPickableItem()
        {
            _currentItemsCount++;
            _viewConfig.itemsCountText.text = _currentItemsCount.ToString();
        }

        public void StartMove()
        {
            _moveTween?.Kill();

            _moveTween = transform.DOMove(_config.endWorldPosition, _config.moveDurationSec)
                .SetEase(_config.moveEase).OnComplete(StartGameOverAnimation);
        }

        public void StartGameOverAnimation()
        {
            if (_isGameOver) return;
            _isGameOver = true;

            _moveTween?.Kill();
            _viewConfig.rigidbody.velocity = _config.gameOverNewVelocity;
            _viewConfig.rigidbody.useGravity = true;
        }
        
        public void ScaleMainItem()
        {
            AddPickableItem();

            float value = _config.scaleValueForOnePickableItem;
            Vector3 addScaleValue = new Vector3(value, value, value);
            transform.localScale += addScaleValue;
        }
        
        private void OnDestroy()
        {
            _moveTween?.Kill();
        }
    }
}