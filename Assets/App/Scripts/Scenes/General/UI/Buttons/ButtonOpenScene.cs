using System;
using App.Scripts.General.LoadScene;
using App.Scripts.General.UI.ButtonSpace;
using UnityEngine;

namespace App.Scripts.Scenes.General.UI.Buttons
{
    public class ButtonOpenScene : MonoBehaviour
    {
        [SerializeField] private CustomButton _customButton;
        [SerializeField] private SceneEnum _selectedScene;

        private void OnEnable()
        {
            _customButton.onClickOccurred.AddListener(LoadSelectedScene);
        }

        private void OnDisable()
        {
            _customButton.onClickOccurred.RemoveListener(LoadSelectedScene);
        }

        private void LoadSelectedScene()
        {
            SceneLoader.Instance.LoadScene(_selectedScene);
        }
    }
}