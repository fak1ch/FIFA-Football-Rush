using System;
using App.Scripts.General.Ads;
using App.Scripts.General.UI.ButtonSpace;
using App.Scripts.Scenes;
using App.Scripts.Scenes.General;
using Assets.App.Scripts.Scenes.MainScene.Map.Level;
using TMPro;
using UnityEngine;

namespace App.Scripts.General.PopUpSystemSpace.PopUps
{
    [Serializable]
    public class GamePassedPopUpConfig
    {
        public int LevelsCountForAd;
        public int CoinsBonus;
    }
    
    public class GamePassedPopUp : PopUp
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        [SerializeField] private LevelsScriptableObject _levelsConfig;

        [SerializeField] private CustomButton _restartButton;
        [SerializeField] private TextMeshProUGUI _bonusCoinsText;
        [SerializeField] private AudioSource _audioSource;

        private GameEvents _gameEvents;
        private GamePassedPopUpConfig _config;
        private int levelsCountForAdTemp = 0;

        #region Events

        private void OnEnable()
        {
            _restartButton.onClickOccurred.AddListener(StartNextLevel);
        }

        private void OnDisable()
        {
            _restartButton.onClickOccurred.RemoveListener(StartNextLevel);
        }

        #endregion

        public void Initialize(GameEvents gameEvents)
        {
            _config = _gameConfig.UIConfigs.GamePassedPopUpConfig;
            _gameEvents = gameEvents;
        }

        public override void ShowPopUp()
        {
            base.ShowPopUp();
            _audioSource.Play();

            _levelsConfig.SetLevelByNumberPassed(_levelsConfig.SelectedLevelNumber);
        }

        private void StartNextLevel()
        {
            levelsCountForAdTemp++;
            if (levelsCountForAdTemp >= _config.LevelsCountForAd)
            {
                AdsManager.Instance.InterstitialAd.TryShowAd();
                levelsCountForAdTemp = 0;
            }
            
            HidePopUp();
            _gameEvents.RestartLevel();
        }

        public void AddCoinsBonus(int itemsCount)
        {
            int coinsBonus = itemsCount + _config.CoinsBonus;
            _bonusCoinsText.text = $"+{coinsBonus}";
            MoneyWallet.Instance.AddMoney(coinsBonus);
        }
    }
}