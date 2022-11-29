using System;

namespace App.Scripts.General.Pool
{
    [Serializable]
    public class PoolObjectInformation<T>
    {
        public int id;
        public T prefab;
        public int poolSize;
    }
}