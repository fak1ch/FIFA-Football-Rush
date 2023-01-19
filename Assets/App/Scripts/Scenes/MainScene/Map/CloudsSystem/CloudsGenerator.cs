using System;
using System.Collections.Generic;
using App.Scripts.General.Utils;
using UnityEngine;
using Random = UnityEngine.Random;

namespace App.Scripts.Scenes.MainScene.Map.CloudsSystem
{
    [Serializable]
    public class CloudsGeneratorConfig
    {
        public Vector3 leftBottomRectanglePoint;
        public Vector3 rightTopRectanglePoint;
        public float minDistanceBetweenClouds;
        public int cloudsCount;
    }
    
    public class CloudsGenerator : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private CloudsGeneratorConfig _config;

        [SerializeField] private List<Cloud> _cloudPrefabs;
        [SerializeField] private Transform _cloudContainer;

        private List<Cloud> _instantiatedClouds = new List<Cloud>();

        private void Start()
        {
            _config = _gameConfig.cloudsGeneratorConfig;
            GenerateClouds();
        }

        private void GenerateClouds()
        {
            while (_instantiatedClouds.Count < _config.cloudsCount)
            {
                Cloud cloud = Instantiate(GetRandomPrefab(), _cloudContainer);
                cloud.transform.position = GetRandomPosition();

                _instantiatedClouds.Add(cloud);
            }
        }

        private Vector3 GetRandomPosition()
        {
            return MathUtils.RandomRangeVector3(
                _config.leftBottomRectanglePoint, 
                _config.rightTopRectanglePoint);
        }

        private Cloud GetRandomPrefab()
        {
            return _cloudPrefabs[Random.Range(0, _cloudPrefabs.Count)];
        }
    }
}