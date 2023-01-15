using System;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.EventSystems;

namespace App.Scripts.Scenes.General.UI.Buttons
{
    public class SoundsSwitch : SettingsSwitch
    {
        [SerializeField] private GameSettingsScriptableObject _gameSettings;

        [Space(10)]
        [SerializeField] private AudioMixer _audioMixer;
        [SerializeField] private float _minVolume;
        [SerializeField] private float _maxVolume;

        private void Start()
        {
            ChangeVolume();
        }

        public override void OnPointerClick(PointerEventData eventData)
        {
            base.OnPointerClick(eventData);

            _gameSettings.onSounds = IsOn;
            ChangeVolume();
        }

        private void ChangeVolume()
        {
            float newVolume = _gameSettings.onSounds ? _maxVolume : _minVolume;
            _audioMixer.SetFloat("MainVolume", newVolume);
        }
    }
}