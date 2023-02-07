using System;
using App.Scripts.General.PopUpSystemSpace.PopUps;
using App.Scripts.Scenes.General;
using App.Scripts.Scenes.General.CoinsSystem;
using App.Scripts.Scenes.General.ItemSystem;
using App.Scripts.Scenes.General.Map.Stickmans;
using App.Scripts.Scenes.MainScene;
using App.Scripts.Scenes.MainScene.Map.CloudsSystem;
using App.Scripts.Scenes.MainScene.Map.Stickmans;
using App.Scripts.Scenes.MainScene.UI;
using App.Scripts.Scenes.MainScene.UI.Levels;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps.Hammer;
using StarterAssets.Animations;
using StarterAssets.InputSystems;
using StarterAssets.NewMovement;
using UnityEngine;

namespace App.Scripts.Scenes
{
    [CreateAssetMenu(menuName = "GameConfig", fileName = "GameConfig")]
    public class GameConfigScriptableObject : ScriptableObject
    {
        public GameEventsConfig GameEventsConfig;
        public MainItemConfig mainItemConfig;
        public MainItemViewConfig mainItemViewConfig;
        public InputSystemConfig inputSystemConfig;
        public ItemContainerConfig itemContainerConfig;
        public StickmanViewConfig stickmanViewConfig;
        public ForwardSmoothMovementConfig forwardSmoothMovementConfig;
        public PickableItemConfig pickableItemConfig;
        public LevelEndItemsTransferConfig levelEndItemsTransferConfig;
        public StickmanGoalkeeperConfig stickmanGoalkeeperConfig;
        public JointDeactivatorConfig goalkeeperJointDeactivatorConfig;
        public CloudsGeneratorConfig cloudsGeneratorConfig;
        public ItemChangerConfig itemChangerConfig;
        public LevelsListConfig levelsListConfig;
        public MoneyViewConfig moneyViewConfig;
 
        [Space(10)] 
        public LevelObjectConfigs levelObjectConfigs;

        [Space(10)]
        public SingletonConfigs SingletonConfigs;
        public UIConfigs UIConfigs;
    }

    [Serializable]
    public class TrapConfigs
    {
        public BombConfig bombConfig;
        public HorizontalSawConfig horizontalSawConfig;
        public HorizontalSawCircleConfig horizontalSawCircleConfig;
        public VerticalSawConfig verticalSawConfig;
        public JustSawConfig justSawConfig;
        public TrapConfig spikeConfig;
        public SpikesCylinderConfig spikesCylinderConfig;
        public SpikesCylinderLogConfig spikesCylinderLogConfig;
        public BarrierConfig barrierConfig;
        public HammerConfig hammerConfig;
    }

    [Serializable]
    public class LevelObjectConfigs
    {
        public DestroyableWallConfig destroyableWallConfig;
        public CoinConfig coinConfig;
        public JumpPlaceConfig jumpPlaceConfig;
        public ExplosiveGeneratorConfig ExplosiveGeneratorConfig;
        public TrapConfigs trapConfigs;
    }

    [Serializable]
    public class UIConfigs
    {
        public GameOverPopUpConfig GameOverPopUpConfig;
        public GamePassedPopUpConfig GamePassedPopUpConfig;
        public FreeCoinsButtonConfig FreeCoinsButtonConfig;
    }

    [Serializable]
    public class SingletonConfigs
    {
        public DieCounterConfig DieCounterConfig;
    }
}