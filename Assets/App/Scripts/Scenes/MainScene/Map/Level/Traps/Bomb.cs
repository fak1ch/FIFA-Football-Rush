using System;
using App.Scripts.General.DoTweenAnimations;
using App.Scripts.General.VibrateSystem;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    [Serializable]
    public class BombConfig : TrapConfig
    {
        public InfinityLocalRotationConfig infinityLocalRotationConfig;
    }
    
    public class Bomb : Trap
    {
        [SerializeField] private InfinityLocalRotation _infinityLocalRotation;
        private BombConfig _config;

        [SerializeField] private AudioSource _audioSource;
        [SerializeField] private GameObject _meshObject;
        [SerializeField] private GameObject _explosiveEffect;

        private void Start()
        {
            _config = _gameConfig.trapConfigs.bombConfig;
            InitializeConfig(_config);

            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
        }

        public override void SetActiveTrap(bool value)
        {
            _audioSource.Play();
            _meshObject.SetActive(value);
            _explosiveEffect.SetActive(!value);
        }
    }
}