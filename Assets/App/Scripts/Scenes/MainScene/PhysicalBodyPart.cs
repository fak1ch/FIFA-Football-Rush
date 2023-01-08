using System;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    public class PhysicalBodyPart : MonoBehaviour
    {
        [SerializeField] private Transform _target;
        [SerializeField] private ConfigurableJoint _configurableJoint;

        private Quaternion _startRotation;

        private void Start()
        {
            _startRotation = transform.localRotation;
        }

        private void FixedUpdate()
        {
            _configurableJoint.targetRotation = Quaternion.Inverse(_target.localRotation) * _startRotation;
        }
    }
}