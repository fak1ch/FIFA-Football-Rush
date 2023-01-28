using System;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    [CreateAssetMenu(menuName = "GameSettingsConfig", fileName = "GameSettingsConfig")]
    public class GameSettingsScriptableObject : ScriptableObject
    {
        [Space(10)]
        public bool onCustomConsole = false;
        public bool onFpsRenderer = false;

        [Space(10)] 
        public bool onVibration = true;
        public bool onSounds = true;
    }
}