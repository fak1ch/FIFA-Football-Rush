using System;
using App.Scripts.General.PopUpSystemSpace;
using App.Scripts.Scenes.MainScene.Skins.UI;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.UI.PopUps
{
    public class ShopPopUp : PopUp
    {
        [SerializeField] private HatLotsInitializer _hatLotsInitializer;
        [SerializeField] private BallLotsInitializer _ballLotsInitializer;
        
        public void Initialize()
        {
            _hatLotsInitializer.Initialize();
            _ballLotsInitializer.Initialize();
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                HidePopUp();
            }
        }
    }
}