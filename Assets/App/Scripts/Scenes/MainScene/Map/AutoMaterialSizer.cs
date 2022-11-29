using System;
using UnityEngine;

namespace App.Scripts.Scenes.General.Map
{
    public class AutoMaterialSizer : MonoBehaviour
    {
        [SerializeField] private Material _material;

        private void Start()
        {
            _material.mainTextureScale = new Vector2(transform.localScale.x, transform.localScale.z);
        }
    }
}