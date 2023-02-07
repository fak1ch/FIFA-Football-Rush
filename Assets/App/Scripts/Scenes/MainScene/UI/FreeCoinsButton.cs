using System;
using App.Scripts.General.Ads;
using App.Scripts.General.UI.ButtonSpace;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.UI
{
    [Serializable]
    public class FreeCoinsButtonConfig
    {
        public int CoinsBonus;
    }
    
    public class FreeCoinsButton : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private FreeCoinsButtonConfig _config;
        
        [SerializeField] private CustomButton _buttonShowAd;
        [SerializeField] private TextMeshProUGUI _coinsBonusText;

        #region Events

        private void OnEnable()
        {
            _buttonShowAd.onClickOccurred.AddListener(TryShowAd);
        }

        private void OnDisable()
        {
            _buttonShowAd.onClickOccurred.RemoveListener(TryShowAd);
        }

        #endregion

        private void Start()
        {
            _config = _gameConfig.UIConfigs.FreeCoinsButtonConfig;
            _coinsBonusText.text = $"+{_config.CoinsBonus}";
        }

        private void TryShowAd()
        {
            if (AdsManager.Instance.RewardAd.CanShow)
            {
                AdsManager.Instance.RewardAd.OnShowAdFinished += GivePriceToPlayer;
                AdsManager.Instance.RewardAd.OnShowAdNotFinished += RemoveEventSubscriptions;
                AdsManager.Instance.RewardAd.ShowAd();
            }
        }

        private void GivePriceToPlayer()
        {
            RemoveEventSubscriptions();
            MoneyWallet.Instance.AddMoney(_config.CoinsBonus);
        }

        private void RemoveEventSubscriptions()
        {
            AdsManager.Instance.RewardAd.OnShowAdFinished -= GivePriceToPlayer;
            AdsManager.Instance.RewardAd.OnShowAdNotFinished -= RemoveEventSubscriptions;
        }
    }
}