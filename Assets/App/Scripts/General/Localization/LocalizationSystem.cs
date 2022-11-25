using System;
using System.Collections.Generic;
using System.IO;
using App.Scripts.General.Singleton;
using App.Scripts.General.Utils;
using ParserJsonSpace;
using UnityEngine;

namespace App.Scripts.General.LocalizationSystemSpace
{
    public class LocalizationSystem : MonoSingleton<LocalizationSystem>
    {
        private string PathToLoadLanguages;
        private const string LanguageKeyPrefs = "Language";

        public event Action OnLanguageChanged;

        [SerializeField] private SystemLanguage _defaultLanguage;
        [SerializeField] private LanguageScriptableObject _languageSO;

        private SystemLanguage _currentLanguage;
        private static Dictionary<string, string> _languageDictionary;
        
        public SystemLanguage CurrentLanguage => _currentLanguage;

        protected override void Awake()
        {
            base.Awake();

            var saveLanguage = (SystemLanguage)PlayerPrefs.GetInt(
                 LanguageKeyPrefs, (int)_defaultLanguage);
            
            PathToLoadLanguages = Path.Combine("Languages");
            SetLanguage(saveLanguage);
        }

        public void SetLanguage(SystemLanguage systemLanguage)
        {
            if (_currentLanguage == systemLanguage) return;
            _currentLanguage = systemLanguage;
            
            if (!_languageSO.ContainsLanguage(systemLanguage)) return;

            PlayerPrefs.SetInt(LanguageKeyPrefs, (int)_currentLanguage);
            
            LoadLanguageJsonByEnum(systemLanguage);
            OnLanguageChanged?.Invoke();
        }

        public string GetTextById(string id)
        {
            if (!_languageDictionary.ContainsKey(id))
            {
                DebugUtils.Instance.Log("Not Contains key: " + id);
                return string.Empty;
            }
            
            return _languageDictionary[id];
        }
        
        private void LoadLanguageJsonByEnum(SystemLanguage enumValue)
        {
            var jsonParser = new JsonParser<LanguageData>();
            enumValue = _languageSO.languages.Contains(enumValue) ? enumValue : _defaultLanguage;
            _languageDictionary = jsonParser.LoadDataFromFileInResources(Path.Combine(PathToLoadLanguages, enumValue.ToString())).languageDictionary;
        }
    }
}