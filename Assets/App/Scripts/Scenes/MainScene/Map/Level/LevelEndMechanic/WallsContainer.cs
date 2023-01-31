using System.Collections.Generic;
using App.Scripts.Scenes.General;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic
{
    public class WallsContainer : MonoBehaviour
    {
        [SerializeField] private List<DestroyableWall> _walls;

        public void Initialize(MainItem mainItem)
        {
            foreach (var wall in _walls)
            {
                wall.Initialize(mainItem);
            }
        }
    }
}