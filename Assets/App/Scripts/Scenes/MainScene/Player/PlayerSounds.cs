using System;
using App.Scripts.General.Utils;
using DG.Tweening;
using UnityEngine;

namespace StarterAssets
{
    public class PlayerSounds : MonoBehaviour
    {
        [SerializeField] private AudioSource _audioSourceJump;

        private void PlayJumpSound()
        {
            _audioSourceJump.DORestart();
            _audioSourceJump.Play();
        }
    }
}