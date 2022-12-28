using App.Scripts.Scenes.General.ItemSystem;
using App.Scripts.Scenes.General.LevelEndMechanic;
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
        public InputSystemConfig inputSystemConfig;
        public ItemContainerConfig itemContainerConfig;
        public StickmanViewConfig stickmanViewConfig;
        public ForwardSmoothMovementConfig forwardSmoothMovementConfig;
        public LevelEndSceneConfig levelEndSceneConfig;
        public PickableItemConfig pickableItemConfig;
    }
}