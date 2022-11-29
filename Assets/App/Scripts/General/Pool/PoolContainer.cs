using System.Collections.Generic;
using App.Scripts.General.Pool;
using Pool;
using UnityEngine;

namespace LevelGeneration
{
    public class PoolContainer<T> where T : Component
    {
        protected readonly PoolObjectInformation<T>[] _objectsInfo;
        private readonly Transform _poolContainer;
        private readonly Dictionary<int, ObjectPool<T>> pools;

        protected PoolContainer(PoolObjectInformation<T>[] poolObjectInfos, Transform poolContainer)
        {
            _poolContainer = poolContainer;
            pools = new Dictionary<int, ObjectPool<T>>();
            _objectsInfo = poolObjectInfos;
            InitializePools();
        }
        
        private void InitializePools()
        {
            foreach (var info in _objectsInfo)
            {
                var poolData = new PoolData<T>
                {
                    size = info.poolSize,
                    container = _poolContainer,
                    prefab = info.prefab
                };
                
                pools.Add(info.id, new ObjectPool<T>(poolData));
            }
        }

        protected T GetObjectFromPoolById(int id)
        {
            return pools[id].GetElement();
        }

        protected void ReturnObjectToPool(T obj, int id)
        {
            pools[id].ReturnElementToPool(obj);
        }
    }
}