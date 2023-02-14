using App.Scripts.General.Ads;
using App.Scripts.General.PopUpSystemSpace;
using App.Scripts.General.Utils;
using App.Scripts.Scenes.MainScene;
using App.Scripts.Scenes.MainScene.Skins;
using App.Scripts.Scenes.MainScene.UI.PopUps;
using Assets.App.Scripts.Scenes.MainScene.Map.Level;
using UnityEngine;

namespace App.Scripts.Installers
{
    public class MainSceneInstaller : Installer
    {
        [SerializeField] private ShopPopUp _shopPopUp;
        [SerializeField] private HatsScriptableObject _hatsConfig;
        [SerializeField] private BallsScriptableObject _ballsConfig;
        [SerializeField] private LevelsScriptableObject _levelsConfig;
        [SerializeField] private LevelSpawner _levelSpawner;

        private void Awake()
        {
            PopUpSystem.Instance.enabled = true;
            DebugUtils.Instance.enabled = true;
            MoneyWallet.Instance.enabled = true;
            AdsManager.Instance.enabled = true;
            DieCounter.Instance.enabled = true;
            
            _levelsConfig.LoadData();
            _levelSpawner.SpawnSelectedLevel();
            
            _hatsConfig.LoadSaves();
            _ballsConfig.LoadSaves();
            _shopPopUp.Initialize();
        }
    }
}