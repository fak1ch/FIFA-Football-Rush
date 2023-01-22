using System;
using System.Collections.Generic;
using App.Scripts.Scenes.General.ItemSystem;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.ItemSystem.ItemChangers
{
    public class FewChangersSection : MonoBehaviour
    {
        [SerializeField] private List<ItemChanger> _itemChangers;

        private void Start()
        {
            foreach (var itemChanger in _itemChangers)
            {
                itemChanger.CollisionWithPlayer += HideAllItemChangers;
            }
        }

        private void HideAllItemChangers()
        {
            foreach (var itemChanger in _itemChangers)
            {
                itemChanger.CollisionWithPlayer -= HideAllItemChangers;
                itemChanger.HideItemChanger();
            }
        }
    }
}