using App.Scripts.Scenes.General.ItemSystem;
using App.Scripts.Scenes.MainScene.Skins.UI;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level
{
    public class LevelSpawner : MonoBehaviour
    {
        [SerializeField] private LevelsScriptableObject _levelsConfig;
        [SerializeField] private EndLevelScene _endLevelScene;
        [SerializeField] private Transform _levelContainer;
        [SerializeField] private BallLotsInitializer _ballLotsInitializer;
        [SerializeField] private ItemContainer _itemContainer;

        private void Start()
        {
            SpawnSelectedLevel();
        }

        private void SpawnSelectedLevel()
        {
            int levelNumber = _levelsConfig.SelectedLevelNumber;
            Level levelPrefab = _levelsConfig.GetLevelPrefabByNumber(levelNumber);
            Level level = Instantiate(levelPrefab, Vector3.zero, Quaternion.identity, _levelContainer);
            
            level.PickableItemsSkinSetuper.Initialize(_itemContainer);
            _ballLotsInitializer.Initialize(level.PickableItemsSkinSetuper);
            _endLevelScene.Initialize(level.LevelGround);
        }
    }
}