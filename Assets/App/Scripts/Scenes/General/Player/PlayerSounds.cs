using System;
using App.Scripts.General.Utils;
using DG.Tweening;
using UnityEngine;

namespace StarterAssets
{
    public class PlayerSounds : MonoBehaviour
    {
        [SerializeField] private AudioSource _audioSourceJump;
        [SerializeField] private PlayerMovement _playerMovement;

        private void OnEnable()
        {
            _playerMovement.OnJump += PlayJumpSound;
        }

        private void OnDisable()
        {
            _playerMovement.OnJump -= PlayJumpSound;
        }

        private void PlayJumpSound()
        {
            _audioSourceJump.DORestart();
            _audioSourceJump.Play();
        }
    }
}