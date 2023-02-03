using System;
using System.Collections.Generic;
using UnityEngine;

namespace App.Scripts.Scenes.MainScene.UI.Tabs
{
    public class TabManager : MonoBehaviour
    {
        [SerializeField] private List<TabButton> _tabButtons;

        private void Start()
        {
            foreach (var tabButton in _tabButtons)
            {
                tabButton.OnTabButtonClicked += ShowTab;
            }
        }

        private void ShowTab(TabButton tabButton)
        {
            HideAllTabs();
            tabButton.SetActiveTab(true);
        }

        private void HideAllTabs()
        {
            foreach (var tabButton in _tabButtons)
            {
                tabButton.SetActiveTab(false);
            }
        }

        private void OnDestroy()
        {
            foreach (var tabButton in _tabButtons)
            {
                tabButton.OnTabButtonClicked -= ShowTab;
            }
        }
    }
}