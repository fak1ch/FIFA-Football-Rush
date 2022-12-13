using System;
using UnityEngine;

namespace App.Scripts.Scenes.General.Map
{
    public class CopyPositionObject : MonoBehaviour
    {
        [SerializeField] private Transform _target;

        private Vector3 _positionOffset;
        
        private void Start()
        {
            _positionOffset = transform.position - _target.transform.position;
        }

        private void Update()
        {
            transform.position = _positionOffset + _target.transform.position;
        }
    }
}