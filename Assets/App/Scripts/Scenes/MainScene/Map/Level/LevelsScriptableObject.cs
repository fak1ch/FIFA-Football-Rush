using System;
using System.Collections.Generic;
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
            if (number < 1)
            {
                number = 1;
            }
            
            return _levelConfigs[number - 1].levelPrefab;
        }

        public bool LevelByNumberExist(int number)
        {
            return number < _levelConfigs.Count;
        }
    }

    [Serializable]
    public class LevelConfig
    {
        public Level levelPrefab;
    }
}