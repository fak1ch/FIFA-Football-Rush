using System;
using System.Collections.Generic;
using App.Scripts.General.UI.ButtonSpace;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.UI.Tabs
{
    public class TabButton : MonoBehaviour
    {
        public event Action<TabButton> OnTabButtonClicked;
        
        [SerializeField] private CustomButton _button;
        [SerializeField] private List<GameObject> _gameObjects;

        #region Events

        private void OnEnable()
        {
            _button.onClickOccurred.AddListener(HandleButtonClicked);
        }

        private void OnDisable()
        {
            _button.onClickOccurred.AddListener(HandleButtonClicked);
        }

        #endregion
        
        private void HandleButtonClicked()
        {
            OnTabButtonClicked?.Invoke(this);
        }

        public void SetActiveTab(bool value)
        {
            foreach (var gm in _gameObjects)
            {
                gm.SetActive(value);
            }
        }
    }
}