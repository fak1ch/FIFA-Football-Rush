using System;
using App.Scripts.General.UI.ButtonSpace;
using App.Scripts.Scenes;
using App.Scripts.Scenes.General;
using App.Scripts.Scenes.MainScene;
using TMPro;
using UnityEngine;

namespace App.Scripts.General.PopUpSystemSpace.PopUps
{
    [Serializable]
    public class GameOverPopUpConfig
    {
        public int CoinsBonus;
    }

    public class GameOverPopUp : PopUp
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private GameOverPopUpConfig _config;

        [SerializeField] private CustomButton _restartButton;
        [SerializeField] private TextMeshProUGUI _bonusCoinsText;
        [SerializeField] private AudioSource _audioSource;

        private GameEvents _gameEvents;

        #region Events

        private void OnEnable()
        {
            _restartButton.onClickOccurred.AddListener(RestartGame);
        }

        private void OnDisable()
        {
            _restartButton.onClickOccurred.RemoveListener(RestartGame);
        }

        #endregion

        public void Initialize(GameEvents gameEvents)
        {
            _config = _gameConfig.UIConfigs.GameOverPopUpConfig;
            _bonusCoinsText.text = $"+{_config.CoinsBonus.ToString()}";
            _gameEvents = gameEvents;
        }

        public override void ShowPopUp()
        {
            base.ShowPopUp();
            _audioSource.Play();
            MoneyWallet.Instance.AddMoney(_config.CoinsBonus);
        }

        private void RestartGame()
        {
            DieCounter.Instance.TryShowAd();

            HidePopUp();
            _gameEvents.RestartLevel();
        }
    }
}