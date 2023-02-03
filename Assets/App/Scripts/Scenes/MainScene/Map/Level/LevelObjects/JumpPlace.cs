using System;
using System.Collections;
using App.Scripts.Scenes;
using StarterAssets;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects
{
    [Serializable]
    public class JumpPlaceConfig
    {
        public AnimationCurve yAnimation;
        public AnimationCurve zAnimation;
        public float jumpHeightMultiplierByJumpLength;
        public float jumpDurationMultiplierByJumpLength;

        [Space(10)] 
        public bool spawnCoins = true;
        public int coinCount;
    }
    
    public class JumpPlace : OtherLevelObject
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private JumpPlaceConfig _config;

        [SerializeField] private Coin _coinPrefab;
        [SerializeField] private Transform _coinContainer;
        [SerializeField] private Transform _endJumpPoint;
        [SerializeField] private Trigger _trigger;
        [SerializeField] private AudioSource _audioSource;

        private float distanceZToEndJumpPoint;
        private float jumpLength;
        private float jumpHeight;
        private float jumpDuration;

        #region Events

        private void OnEnable()
        {
            _trigger.TriggerEnter += HandleTriggerEnter;
        }

        private void OnDisable()
        {
            _trigger.TriggerEnter -= HandleTriggerEnter;
        }

        #endregion

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.jumpPlaceConfig;
            
            distanceZToEndJumpPoint = _endJumpPoint.position.z - transform.position.z;
            jumpLength = distanceZToEndJumpPoint;
            jumpHeight = _config.jumpHeightMultiplierByJumpLength * jumpLength;
            jumpDuration = _config.jumpDurationMultiplierByJumpLength * jumpLength;

            if (_config.spawnCoins)
            {
                SpawnCoins();
            }
        }
        
        private void HandleTriggerEnter(Collider targetCollider)
        {
            if (targetCollider.TryGetComponent(out Player player))
            {
                StartCoroutine(AnimationByTime(player.transform));
                _audioSource.Play();
            }
        }

        private void SpawnCoins()
        {
            float timeOffset = 1f / (_config.coinCount + 1);
            float evaluateTime = timeOffset;

            for (int i = 0; i < _config.coinCount; i++)
            {
                Vector3 coinPosition = transform.position;
                coinPosition.y += _config.yAnimation.Evaluate(evaluateTime) * jumpHeight;
                coinPosition.z += _config.zAnimation.Evaluate(evaluateTime) * jumpLength;
                
                Coin coin = Instantiate(_coinPrefab, coinPosition, Quaternion.identity);
                coin.transform.SetParent(_coinContainer);

                evaluateTime += timeOffset;
            }
        }

        private IEnumerator AnimationByTime(Transform jumper)
        {
            float expiredSeconds = 0;
            float progress = 0;

            Vector3 startPosition = jumper.position;

            while (progress < 1)
            {
                expiredSeconds += Time.deltaTime;
                progress = expiredSeconds / jumpDuration;
                
                float yPosition = _config.yAnimation.Evaluate(progress) * jumpHeight;
                float zPosition = _config.zAnimation.Evaluate(progress) * jumpLength;

                jumper.position = startPosition + new Vector3(0, yPosition, zPosition);

                yield return null;
            }
        }
    }
}