using System;
using App.Scripts.General.Ads;
using App.Scripts.General.Singleton;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene
{
    [Serializable]
    public class DieCounterConfig
    {
        public int DieCountForShowAd = 1;
    }

    public class DieCounter : MonoSingleton<DieCounter>
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private DieCounterConfig _config;

        private int _dieCount = 0;
        
        private void Start()
        {
            _config = _gameConfig.SingletonConfigs.DieCounterConfig;
        }

        public void ClickTheCounter()
        {
            _dieCount++;

            if (_dieCount == _config.DieCountForShowAd)
            {
                _dieCount = 0;
                AdsManager.Instance.RewardAd.TryShowAd();
            }
        }
    }
}