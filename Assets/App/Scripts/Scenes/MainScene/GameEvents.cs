using StarterAssets;
using UnityEngine;

namespace App.Scripts.Scenes.General
{
    public class GameEvents : MonoBehaviour
    {
        [SerializeField] private Player _player;
        [SerializeField] private GameObject _mainMenuUI;

        public void StartLevel()
        {
            _player.SetPlayerCanMove(true);
            _mainMenuUI.SetActive(false);
        }

        public void RestartLevel()
        {
            
        }

        public void EndLevelWithWin()
        {
            
        }

        public void EndLevelWithLose()
        {
            
        }
    }
}