using System.Collections.Generic;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    public class WallsContainer : MonoBehaviour
    {
        [SerializeField] private List<DestroyableWall> _walls;

        public void Initialize(MainItem.MainItem mainItem)
        {
            foreach (var wall in _walls)
            {
                wall.Initialize(mainItem);
            }
        }
    }
}