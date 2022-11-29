using System;
using App.Scripts.General.PopUpSystemSpace;
using App.Scripts.General.SystemPopUps.PopUps;
using UnityEngine;

namespace App.Scripts.Scenes.General.UI.PopUps
{
    public class SmallHintPopUp : InformationPopUp
    {
        [SerializeField] private float _popUpLifetime;

        private float _popUpLifetimeTemp;
        private bool _popUpClosed = false;

        public override void ShowPopUp()
        {
            _popUpClosed = false;
            _popUpLifetimeTemp = _popUpLifetime;
            base.ShowPopUp();
        }

        private void Update()
        {
            _popUpLifetimeTemp -= Time.deltaTime;
            if (_popUpLifetimeTemp <= 0 && !_popUpClosed)
            {
                _popUpClosed = true;
                HidePopUp();
            }
        }
    }
}