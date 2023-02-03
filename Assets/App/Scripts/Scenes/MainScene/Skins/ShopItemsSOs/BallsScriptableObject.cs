using System;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.Skins
{
    [CreateAssetMenu(fileName = "BallsConfig", menuName = "BallsConfig")]
    public class BallsScriptableObject : ShopItemsScriptableObject<BallConfig>
    {
        
    }

    [Serializable]
    public class BallConfig : ShopItemConfig
    {
        public Mesh BallMesh;
        public Material[] Materials;
    }
}