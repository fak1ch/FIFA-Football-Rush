using System;
using System.Collections.Generic;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Stickmans
{
    [Serializable]
    public class JointDeactivatorConfig
    {
        public int positionSpringMinValue;
    }
    
    public class JointDeactivator : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        [SerializeField] private List<ConfigurableJoint> _joints;

        private readonly Dictionary<int, float> _positionSpringValues = new();
        private JointDeactivatorConfig _config;

        private void Start()
        {
            _config = _gameConfig.goalkeeperJointDeactivatorConfig;
            
            for (int i = 0; i < _joints.Count; i++)
            {
                _positionSpringValues.Add(i, _joints[i].slerpDrive.positionSpring);
            }
        }

        public void SetActiveJoints(bool value)
        {
            for (int i = 0; i < _joints.Count; i++)
            {
                float newPositionSpring = value ? _positionSpringValues[i] : _config.positionSpringMinValue;
                
                JointDrive jointDrive = _joints[i].slerpDrive;
                jointDrive.positionSpring = newPositionSpring;
                _joints[i].slerpDrive = jointDrive;
            }
        }
    }
}