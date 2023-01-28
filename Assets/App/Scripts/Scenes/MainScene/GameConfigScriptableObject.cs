using System;
using App.Scripts.Scenes.General.ItemSystem;
using App.Scripts.Scenes.General.Map;
using App.Scripts.Scenes.General.Map.Stickmans;
using App.Scripts.Scenes.MainScene.Map;
using App.Scripts.Scenes.MainScene.Map.CloudsSystem;
using App.Scripts.Scenes.MainScene.Map.Level;
using App.Scripts.Scenes.MainScene.Map.Level.Traps;
using App.Scripts.Scenes.MainScene.Map.Level.Traps.Barrier;
using App.Scripts.Scenes.MainScene.Map.Stickmans;
using App.Scripts.Scenes.MainScene.UI.Levels;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic.MainItem;
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

        [Space(10)] public LevelObjectConfigs levelObjectConfigs;
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
        public TrapConfigs trapConfigs;
    }
}