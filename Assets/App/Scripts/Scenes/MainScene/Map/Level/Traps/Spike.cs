using System;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Map.Level.Traps
{
    public class Spike : Trap
    {
        private void Start()
        {
            InitializeConfig(_gameConfig.trapConfigs.spikeConfig);
        }
    }
}