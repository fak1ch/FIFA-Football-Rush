using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level
{
    [CreateAssetMenu(fileName = "Levels", menuName = "Levels")]
    public class LevelsScriptableObject : ScriptableObject
    {
        private const string SelectedLevelNumberKey = "SelectedLevelNumberKey";
        
        [SerializeField] private List<LevelConfig> _levelConfigs;

        private int _selectedLevelNumber;
        
        public int SelectedLevelNumber => _selectedLevelNumber;
        public int LevelsCount => _levelConfigs.Count;
        
        public Level GetLevelPrefabByNumber(int number)
        {
            number = Math.Clamp(number, 1, LevelsCount);
            
            return _levelConfigs[number - 1].levelPrefab;
        }

        public bool LevelByNumberExist(int number)
        {
            return number <= _levelConfigs.Count;
        }

        public void AddLevelAsLast(Level level)
        {
            _levelConfigs.Add(new LevelConfig()  
            {
                levelPrefab = level
            });
        }

        public void SetLevelByNumberPassed(int levelNumber)
        {
            LevelRepository levelRepository = new LevelRepository(_selectedLevelNumber);
            levelRepository.SetLevelAsPassed();
            
            if (LevelByNumberExist(_selectedLevelNumber + 1))
            {
                _selectedLevelNumber++;
                SaveData();
            }
        }
        
        public void LoadData()
        {
            _selectedLevelNumber = PlayerPrefs.GetInt(SelectedLevelNumberKey, 1);
        }
        
        private void SaveData()
        {
            PlayerPrefs.SetInt(SelectedLevelNumberKey, SelectedLevelNumber);
        }
    }

    [Serializable]
    public class LevelConfig
    {
        public Level levelPrefab;
    }
}