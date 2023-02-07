﻿using System;
using App.Scripts.General.DoTweenAnimations;
using UnityEngine;

namespace Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps
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
        [SerializeField] private GameObject _explosiveEffect;

        private void Start()
        {
            _config = _gameConfig.levelObjectConfigs.trapConfigs.bombConfig;
            InitializeConfig(_config);

            _infinityLocalRotation.Initialize(_config.infinityLocalRotationConfig);
        }

        public override void SetActiveTrap(bool value)
        {
            base.SetActiveTrap(value);
            
            _audioSource.Play();
            _explosiveEffect.SetActive(!value);
        }
    }
}