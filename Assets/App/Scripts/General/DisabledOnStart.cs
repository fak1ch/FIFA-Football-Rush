using System;
using UnityEngine;

namespace App.Scripts.General
{
    public class DisabledOnStart : MonoBehaviour
    {
        private void Start()
        {
            gameObject.SetActive(false);
        }
    }
}