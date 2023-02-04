﻿using System;
using System.Collections;
using App.Scripts.General.LoadScene;
using App.Scripts.General.PopUpSystemSpace;
using App.Scripts.General.PopUpSystemSpace.PopUps;
using StarterAssets;
using StarterAssets.Animations;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    [Serializable]
    public class GameEventsConfig
    {
        public float durationTillEndLevel;
    }
    
    public class GameEvents : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private GameEventsConfig _config;
        
        [Space(10)]
        [SerializeField] private Player _player;
        [SerializeField] private StickmanAnimationHandler _stickmanAnimationHandler;
        [SerializeField] private GameObject _mainMenuUI;
        [SerializeField] private GameObject _gameProcessUI;
        
        private delegate void EmptyMethod(int itemsCount);

        private void Start()
        {
            _config = _gameConfig.GameEventsConfig;
            
            GameOverPopUp gameOverPopUp = PopUpSystem.Instance.GetPopUpWithoutShow<GameOverPopUp>();
            gameOverPopUp.Initialize(this);
            GamePassedPopUp gamePassedPopUp = PopUpSystem.Instance.GetPopUpWithoutShow<GamePassedPopUp>();
            gamePassedPopUp.Initialize(this);
        }

        public void StartLevel()
        {
            _mainMenuUI.gameObject.SetActive(false);
            _gameProcessUI.gameObject.SetActive(true);
            SetPauseGame(false);
        }

        public void RestartLevel()
        {
            SceneLoader.Instance.LoadScene(SceneEnum.MainScene);
        }

        private void EndLevelWithWin(int itemsCount)
        {
            GamePassedPopUp gamePassedPopUp = PopUpSystem.Instance.ShowPopUp<GamePassedPopUp>();
            gamePassedPopUp.AddCoinsBonus(itemsCount);
        }

        private void EndLevelWithLose(int itemsCount)
        {
            PopUpSystem.Instance.ShowPopUp<GameOverPopUp>();
        }

        public void EndLevel(bool victory, int itemsCount = 0)
        {
            SetPauseGame(true);

            if (victory)
            {
                _stickmanAnimationHandler.PlayVictoryAnimation();
            }
            else
            {
                _stickmanAnimationHandler.PlayDieAnimation();
            }
            
            EmptyMethod EndLevel = victory ? EndLevelWithWin : EndLevelWithLose;
            StartCoroutine(EndLevelAfterDuration(EndLevel, itemsCount));
        }
        
        private IEnumerator EndLevelAfterDuration(EmptyMethod EndLevel, int itemsCount)
        {
            yield return new WaitForSeconds(_config.durationTillEndLevel);
            EndLevel(itemsCount);
        }
        
        private void SetPauseGame(bool value)
        {
            _player.SetPlayerCanMove(!value);
        }
    }
}