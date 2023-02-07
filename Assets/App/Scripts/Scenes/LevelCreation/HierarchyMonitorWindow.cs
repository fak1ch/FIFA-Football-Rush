#if UNITY_EDITOR

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using App.Scripts.Scenes.General.ItemSystem;
using Unity.VisualScripting;
using Assets.App.Scripts.Scenes.MainScene.Map.Level;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects;
using Assets.App.Scripts.Scenes.MainScene.Map.Level.LevelObjects.Traps;
using UnityEditor;
using UnityEngine;

namespace App.Scripts.Scenes.General.LevelCreation
{
    public class HierarchyMonitorWindow  : EditorWindow
    {
        private LevelsScriptableObject _levelsConfig;
        private PickableItemsSkinSetuper _pickableItemsSkinSetuper;
        
        private Transform _pickableItemContainer;
        private Transform _trapsContainer;
        private Transform _itemChangersItemContainer;
        private Transform _otherLevelObjectsContainer;

        private Level _level;

        [MenuItem("Window/Hierarchy Monitor")]
        static void CreateWindow()
        {
            GetWindow<HierarchyMonitorWindow>();
        }

        private void OnFocus()
        {
            _levelsConfig = GetAllInstances<LevelsScriptableObject>()[0];
            _pickableItemContainer = FindObjectOfType<PickableItemContainer>().transform;
            _trapsContainer = FindObjectOfType<TrapsContainer>().transform;
            _itemChangersItemContainer = FindObjectOfType<ChangersContainer>().transform;
            _otherLevelObjectsContainer = FindObjectOfType<OtherObjectsContainer>().transform;
            _pickableItemsSkinSetuper = FindObjectOfType<PickableItemsSkinSetuper>();
            _level = FindObjectOfType<Level>();
        }

        private void OnHierarchyChange()
        {
            Trap[] traps = Resources.FindObjectsOfTypeAll<Trap>();
            ItemChanger[] itemChangers = Resources.FindObjectsOfTypeAll<ItemChanger>();
            PickableItem[] pickableItems = Resources.FindObjectsOfTypeAll<PickableItem>();
            OtherLevelObject[] otherLevelObjects = Resources.FindObjectsOfTypeAll<OtherLevelObject>();

            ChangeParent(traps, _trapsContainer);
            ChangeParent(itemChangers, _itemChangersItemContainer);
            ChangeParent(pickableItems, _pickableItemContainer);
            ChangeParent(otherLevelObjects, _otherLevelObjectsContainer);

            foreach (var pc in pickableItems)
            {
                if (pc.IsPrefabDefinition())
                {
                    continue;
                }
                
                if (pc.transform.parent == null)
                {
                    pc.transform.SetParent(_pickableItemContainer);
                }
            }
        }

        private void ChangeParent<T>(T[] gameObjects, Transform container) where T : MonoBehaviour
        {
            foreach (var gm in gameObjects)
            {
                if (gm.IsPrefabDefinition())
                {
                    continue;
                }

                if (gm.transform.parent != container)
                {
                    GameObject target = gm.transform.parent == null ? gm.gameObject : gm.transform.root.gameObject;
                    
                    target.transform.SetParent(container);
                }
            }
        }

        private void SaveLevelAsLast()
        {
            List<PickableItem> pickableItems = new List<PickableItem>();
            
            for (int i = 0; i < _pickableItemContainer.childCount; i++)
            {
                pickableItems.Add(_pickableItemContainer.GetChild(i).GetComponent<PickableItem>());
            }
            
            _pickableItemsSkinSetuper.SetPickableItemList(pickableItems);
            
            int levelIndex = _levelsConfig.LevelsCount + 1;
            _level.name = "Level" + levelIndex;
            
            string PathToLevelsFolder = Path.Combine(Application.dataPath, "App", "Prefabs", "MainScene", "Levels", _level.gameObject.name + ".prefab");
            
            GameObject levelPrefab1 = PrefabUtility.SaveAsPrefabAsset(_level.gameObject, PathToLevelsFolder);

            _levelsConfig.AddLevelAsLast(levelPrefab1.GetComponent<Level>());

            EditorUtility.DisplayDialog("Level saved", $"{_level.name} was been saved", "ok");
        }  

        private void ResetLevel()
        {
            DestroyAllChildInTransform(_pickableItemContainer);
            DestroyAllChildInTransform(_trapsContainer);
            DestroyAllChildInTransform(_itemChangersItemContainer);
            DestroyAllChildInTransform(_otherLevelObjectsContainer);
        }

        private void DestroyAllChildInTransform(Transform container)
        {
            for (int i = container.childCount; i > 0; --i)
            {
                DestroyImmediate(container.GetChild(0).gameObject);
            }
        }
        
        public static List<T> GetAllInstances<T>() where T : ScriptableObject
        {
            return AssetDatabase.FindAssets($"t: {typeof(T).Name}").ToList()
                .Select(AssetDatabase.GUIDToAssetPath)
                .Select(AssetDatabase.LoadAssetAtPath<T>)
                .ToList();
        }
        
        private void OnGUI()
        {
            GUILayout.Label("Containers", EditorStyles.boldLabel);

            _levelsConfig = EditorGUILayout.ObjectField("Levels Config",
                _levelsConfig, typeof(LevelsScriptableObject), true) as LevelsScriptableObject;
            
            _pickableItemsSkinSetuper = EditorGUILayout.ObjectField("Pickable Items Skin Setuper",
                _pickableItemsSkinSetuper, typeof(PickableItemsSkinSetuper), true) as PickableItemsSkinSetuper;
            
            _pickableItemContainer = EditorGUILayout.ObjectField("Pickable Item Container",
                _pickableItemContainer, typeof(Transform), true) as Transform;
            
            _trapsContainer = EditorGUILayout.ObjectField("Traps Container",
                _trapsContainer, typeof(Transform), true) as Transform;
            
            _itemChangersItemContainer = EditorGUILayout.ObjectField("Item Changers Container",
                _itemChangersItemContainer, typeof(Transform), true) as Transform;
            
            _otherLevelObjectsContainer = EditorGUILayout.ObjectField("Other Level Objects Container",
                _otherLevelObjectsContainer, typeof(Transform), true) as Transform;
            
            _level = EditorGUILayout.ObjectField("Level main object",
                _level, typeof(Level), true) as Level;

            if (GUILayout.Button("Save level as last"))
            {
                SaveLevelAsLast();
            }
            
            if (GUILayout.Button("ResetLevel"))
            {
                ResetLevel();
            }
        }
    }
}

#endif