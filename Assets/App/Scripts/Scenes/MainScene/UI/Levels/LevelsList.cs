using System;
using App.Scripts.General.Utils;
using Assets.App.Scripts.Scenes.MainScene.Map.Level;
using UnityEngine;
using UnityEngine.UI;

namespace App.Scripts.Scenes.MainScene.UI.Levels
{
    [Serializable]
    public class LevelsListConfig
    {
        public int levelsCellCount;
    }
    
    public class LevelsList : MonoBehaviour
    {
        [Space(10)] 
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        [SerializeField] private LevelsScriptableObject _levelsConfig;
        [SerializeField] private GridLayoutGroup _levelCellContainer;
        [SerializeField] private LevelCell _levelCellPrefab;
        [SerializeField] private Canvas _canvas;

        private LevelsListConfig _config;

        private void Start()
        {
            _config = _gameConfig.levelsListConfig;
            _levelCellContainer.cellSize = CalculateCellSize(_canvas, _levelCellContainer, _config.levelsCellCount);

            for (int i = 0; i < _levelsConfig.LevelsCount; i++)
            {
                int levelNumber = i + 1;
                LevelRepository levelRepository = new LevelRepository(levelNumber);
                
                LevelCell levelCell = Instantiate(_levelCellPrefab, _levelCellContainer.transform);
                levelCell.Initialize(levelRepository);

                if (levelRepository.LevelPassed == false)
                {
                    break;
                }
            }
        }
        
        public static Vector2 CalculateCellSize(Canvas canvas, GridLayoutGroup grid, int columnCount)
        {
            float newBlockWidth = Screen.width / canvas.scaleFactor;
            newBlockWidth -= grid.padding.left + grid.padding.right;
            newBlockWidth -= grid.spacing.x * (columnCount - 1);
            newBlockWidth /= columnCount;

            float percent = MathUtils.GetPercent(0, grid.cellSize.x, newBlockWidth);

            return new Vector2(newBlockWidth, newBlockWidth);
        }
    }
}