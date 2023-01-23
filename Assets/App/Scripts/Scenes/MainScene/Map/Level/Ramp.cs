using System;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level
{
    [Serializable]
    public class RampConfig
    {
        public AnimationCurve jumpCurve;
    }
    
    public class Ramp : MonoBehaviour
    {
        [SerializeField] private GameConfigScriptableObject _gameConfig;
        private RampConfig _config;

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.rampConfig;
        }
    }
}