using System;
using Assets.App.Scripts.Scenes.MainScene.Map.Level;
using TMPro;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.UI
{
    public class LevelNumberView : MonoBehaviour
    {
        private const string Level = "УРОВЕНЬ ";
        
        [SerializeField] private TextMeshProUGUI _text;
        [SerializeField] private LevelsScriptableObject _levelsConfig;

        private void Start()
        {
            int levelNumber = _levelsConfig.SelectedLevelNumber;
            
            if (levelNumber < 1)
            {
                levelNumber = 1;
            }
            
            _text.text = $"{Level}{levelNumber}";
        }
    }
}