using System;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    public class MaterialTileConfigurator : MonoBehaviour
    {
        [SerializeField] private Vector2 _tilingMultiplier;
        [SerializeField] private Material _material;

        private void Start()
        {
            _material.mainTextureScale = 
                new Vector2(transform.localScale.x, transform.localScale.z) * _tilingMultiplier;
        }
    }
}