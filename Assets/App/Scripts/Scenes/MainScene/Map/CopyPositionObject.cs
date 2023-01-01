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
            SetupTarget(_target);
        }

        private void Update()
        {
            transform.position = _positionOffset + _target.transform.position;
        }

        public void SetupTarget(Transform target)
        {
            _target = target;
            _positionOffset = transform.position - _target.transform.position;
        }
    }
}