using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level
{
    public class Level : MonoBehaviour
    {
        [SerializeField] private Transform _levelGround;

        public Transform LevelGround => _levelGround;
    }
}