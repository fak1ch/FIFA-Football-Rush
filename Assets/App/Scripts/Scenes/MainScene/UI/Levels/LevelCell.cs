using System;
using App.Scripts.General.LoadScene;
using App.Scripts.General.UI.ButtonSpace;
using Assets.App.Scripts.Scenes.MainScene.Map.Level;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.UI.Levels
{
    public class LevelCell : MonoBehaviour
    {
        [SerializeField] private LevelsScriptableObject _levelsConfig;
        [SerializeField] private TextMeshProUGUI _textMeshProUGUI;
        [SerializeField] private CustomButton _startLevelButton;

        private LevelRepository _levelRepository;

        #region Events

        private void OnEnable()
        {
            _startLevelButton.onClickOccurred.AddListener(StartLevel);
        }

        private void OnDisable()
        {
            _startLevelButton.onClickOccurred.RemoveListener(StartLevel);
        }

        #endregion

        public void Initialize(LevelRepository levelRepository)
        {
            _levelRepository = levelRepository;
            _textMeshProUGUI.text = _levelRepository.LevelNumber.ToString();
        }

        private void StartLevel()
        {
            _levelsConfig.SelectedLevelNumber = _levelRepository.LevelNumber;
            SceneLoader.Instance.LoadScene(SceneEnum.MainScene);
        }
    }
}