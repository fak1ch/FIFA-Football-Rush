using System;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    [CreateAssetMenu(menuName = "MainSettingsConfig", fileName = "MainSettingsConfig")]
    public class MainSettingsScriptableObject : ScriptableObject
    {
        [Space(10)]
        public bool OnCustomConsole = false;
        public bool OnFpsRenderer = false;
    }
}