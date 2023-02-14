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
        private bool _needShowAd;

        private void Start()
        {
            _config = _gameConfig.SingletonConfigs.DieCounterConfig;
        }

        public void ClickTheCounter()
        {
            _dieCount++;

            _needShowAd = _dieCount >= _config.DieCountForShowAd;
        }

        public void TryShowAd()
        {
            if (_needShowAd)
            {
                _dieCount = 0;
                AdsManager.Instance.InterstitialAd.TryShowAd();
            }
        }
    }
}