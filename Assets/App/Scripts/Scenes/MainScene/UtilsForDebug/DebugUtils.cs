using App.Scripts.General.Singleton;
using App.Scripts.Scenes.General;
using TMPro;
using UnityEngine;

namespace App.Scripts.General.Utils
{
    public class DebugUtils : MonoSingleton<DebugUtils>
    {
        [SerializeField] private GameSettingsScriptableObject gameSettingsConfig;
        
        [Space(10)]
        [SerializeField] private TextMeshProUGUI _customConsoleText;
        [SerializeField] private GameObject _customConsoleGameObject;
        
        [Space(10)]
        [SerializeField] private TextMeshProUGUI _fpsText;
        [SerializeField] private GameObject _fpsTextGameObject;
        [SerializeField] private float _waitTime;

        private float _time;

        private void Start()
        {
            _customConsoleGameObject.SetActive(gameSettingsConfig.onCustomConsole);
            _fpsTextGameObject.SetActive(gameSettingsConfig.onFpsRenderer);
        }

        private void Update()
        {
            if (!gameSettingsConfig.onFpsRenderer) return;
            
            _time -= Time.deltaTime;
            if (_time <= 0)
            {
                _time = _waitTime;
                float fps = 1.0f / Time.deltaTime;
                _fpsText.text = $"{(int) fps}";
            }
        }
        
        public void Log(string text)
        {
            if (!gameSettingsConfig.onCustomConsole) return;
            
            _customConsoleText.text += "\n" + text;
            Debug.Log(text);
        }
    }
}