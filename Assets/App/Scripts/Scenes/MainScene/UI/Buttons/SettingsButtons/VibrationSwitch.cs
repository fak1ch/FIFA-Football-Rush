using UnityEngine;
using UnityEngine.EventSystems;

namespace App.Scripts.Scenes.General.UI.Buttons
{
    public class VibrationSwitch : SettingsSwitch
    {
        [SerializeField] private GameSettingsScriptableObject _gameSettings;
        
        public override void OnPointerClick(PointerEventData eventData)
        {
            base.OnPointerClick(eventData);

            _gameSettings.onVibration = IsOn;
        }
    }
}