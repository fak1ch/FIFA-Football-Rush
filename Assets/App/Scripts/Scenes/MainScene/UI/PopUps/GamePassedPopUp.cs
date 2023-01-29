using System;
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
        public int CoinsBonus;
    }

    public class GamePassedPopUp : PopUp
    {
        [SerializeField] private LevelsScriptableObject _levelsConfig;
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private GamePassedPopUpConfig _config;

        [SerializeField] private CustomButton _restartButton;
        [SerializeField] private TextMeshProUGUI _bonusCoinsText;
        [SerializeField] private AudioSource _audioSource;

        private GameEvents _gameEvents;

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
            _config = _gameConfig.PopUpConfigs.GamePassedPopUpConfig;
            _bonusCoinsText.text = $"+{_config.CoinsBonus.ToString()}";
            _gameEvents = gameEvents;
        }

        public override void ShowPopUp()
        {
            base.ShowPopUp();
            _audioSource.Play();
            MoneyWallet.Instance.AddMoney(_config.CoinsBonus);
        }

        private void StartNextLevel()
        {
            if (_levelsConfig.LevelByNumberExist(_levelsConfig.SelectedLevelNumber + 1))
            {
                _levelsConfig.SelectedLevelNumber++;
            }
            
            HidePopUp();
            _gameEvents.RestartLevel();
        }
    }
}