using System;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level
{
    public class LevelRepository
    {
        private const string LevelPassedKey = "LevelPassedKey";

        public int LevelNumber { get;}
        public bool LevelPassed { get; private set; }
        
        public LevelRepository(int levelNumber)
        {
            LevelNumber = levelNumber;
            LevelPassed = PlayerPrefs.GetInt(LevelPassedKey) == 1;
        }

        public void SetLevelAsPassed()
        {
            LevelPassed = true;
            SaveLevel();
        }

        private void SaveLevel()
        {
            PlayerPrefs.SetInt(LevelPassedKey, LevelPassed ? 1 : 0);
        }
    }
}