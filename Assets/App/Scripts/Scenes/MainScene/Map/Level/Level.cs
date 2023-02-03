using App.Scripts.Scenes.General.LevelCreation;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level
{
    public class Level : MonoBehaviour
    {
        [SerializeField] private Transform _levelGround;
        [SerializeField] private PickableItemsSkinSetuper _pickableItemsSkinSetuper;

        public Transform LevelGround => _levelGround;
        public PickableItemsSkinSetuper PickableItemsSkinSetuper => _pickableItemsSkinSetuper;
    }
}