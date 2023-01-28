using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level
{
    public class LevelSpawner : MonoBehaviour
    {
        [SerializeField] private LevelsScriptableObject _levelsConfig;
        [SerializeField] private EndLevelScene _endLevelScene;
        [SerializeField] private Transform _levelContainer;

        private void Start()
        {
            SpawnSelectedLevel();
        }

        private void SpawnSelectedLevel()
        {
            int levelNumber = _levelsConfig.SelectedLevelNumber;
            Level levelPrefab = _levelsConfig.GetLevelPrefabByNumber(levelNumber);
            Level level = Instantiate(levelPrefab, Vector3.zero, Quaternion.identity, _levelContainer);
            
            _endLevelScene.Initialize(level.LevelGround);
        }
    }
}