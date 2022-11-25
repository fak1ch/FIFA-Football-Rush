using System.Collections.Generic;
using UnityEngine;

namespace App.Scripts.General.LocalizationSystemSpace
{
    [CreateAssetMenu(fileName = "New language", menuName = "Languages")]
    public class LanguageScriptableObject : ScriptableObject
    {
        public List<SystemLanguage> languages = new List<SystemLanguage>();

        public bool ContainsLanguage(SystemLanguage language)
        {
            return languages.Contains(language);
        }
    }
}