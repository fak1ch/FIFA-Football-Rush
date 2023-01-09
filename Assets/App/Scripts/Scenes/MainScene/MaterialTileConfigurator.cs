using System;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    public class MaterialTileConfigurator : MonoBehaviour
    {
        [SerializeField] private float _tileYMultiplier;
        [SerializeField] private Material _material;

        private void Start()
        {
            _material.mainTextureScale = new Vector2(1, transform.localScale.z * _tileYMultiplier);
        }
    }
}