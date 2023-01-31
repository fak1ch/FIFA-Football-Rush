using App.Scripts.General.PopUpSystemSpace;
using App.Scripts.Scenes.MainScene.Skins.UI;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.UI.PopUps
{
    public class ShopPopUp : PopUp
    {
        [SerializeField] private HatLotsInitializer _hatLotsInitializer;
        
        public void Initialize()
        {
            _hatLotsInitializer.Initialize();
        }
    }
}