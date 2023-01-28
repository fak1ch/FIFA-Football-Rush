using System;
using App.Scripts.Scenes.General.ItemSystem;
using App.Scripts.Scenes.MainScene.Map.Stickmans;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelEndMechanic;
using StarterAssets;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    public class DebugObject : MonoBehaviour
    {
        [SerializeField] private ItemContainer _itemContainer;
        [SerializeField] private Transform _pointForTeleport;
        [SerializeField] private JointDeactivator _jointDeactivator;
        
        [Space(10)]
        [SerializeField] private EndLevelScene _endLevelScene;
        [SerializeField] private Transform _levelGround;

        private bool _jointsActive = true;
        
        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.A))
            {
                _itemContainer.AddSomePickableItems(100);
            }
            
            if (Input.GetKeyDown(KeyCode.T))
            {
                FindObjectOfType<Player>().transform.parent.position = _pointForTeleport.position;
            }

            if (Input.GetKeyDown(KeyCode.D))
            {
                _jointsActive = !_jointsActive;
                _jointDeactivator.SetActiveJoints(_jointsActive);
            }
            
            if (Input.GetKeyDown(KeyCode.S))
            {
                _endLevelScene.Initialize(_levelGround);
            }
        }
    }
}