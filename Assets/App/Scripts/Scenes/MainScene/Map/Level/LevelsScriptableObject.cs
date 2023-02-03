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
        [SerializeField] private List<LevelConfig> _levelConfigs;

        public int SelectedLevelNumber { get; set; }
        public int LevelsCount => _levelConfigs.Count;
        
        public Level GetLevelPrefabByNumber(int number)
        {
            number = Math.Clamp(number, 1, LevelsCount);
            
            return _levelConfigs[number - 1].levelPrefab;
        }

        public bool LevelByNumberExist(int number)
        {
            return number < _levelConfigs.Count;
        }

        public void AddLevelAsLast(Level level)
        {
            _levelConfigs.Add(new LevelConfig()  
            {
                levelPrefab = level
            });
        }
    }

    [Serializable]
    public class LevelConfig
    {
        public Level levelPrefab;
    }
}