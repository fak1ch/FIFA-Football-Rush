using System.Collections.Generic;
using App.Scripts.Scenes.General.Map;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.LevelEndMechanic
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