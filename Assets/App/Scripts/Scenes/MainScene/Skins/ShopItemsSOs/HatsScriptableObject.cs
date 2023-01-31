using System;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins
{
    [CreateAssetMenu(fileName = "HatsConfig", menuName = "HatsConfig")]
    public class HatsScriptableObject : ShopItemsScriptableObject<HatConfig>
    {
        
    }

    [Serializable]
    public class HatConfig : ShopItemConfig
    {
        public GameObject hatPrefab;
    }
}