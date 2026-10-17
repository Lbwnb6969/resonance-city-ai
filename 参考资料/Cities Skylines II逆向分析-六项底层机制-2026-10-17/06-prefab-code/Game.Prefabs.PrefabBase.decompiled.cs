#define UNITY_ASSERTIONS
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.Serialization;
using Colossal;
using Colossal.IO.AssetDatabase;
using Colossal.Json;
using Game.UI.Widgets;
using Unity.Entities;
using UnityEngine;
using UnityEngine.Assertions;

namespace Game.Prefabs;

public abstract class PrefabBase : ComponentBase, ISerializationCallbackReceiver, IPrefabBase
{
	[HideInEditor]
	[HideInInspector]
	public ushort version;

	[SerializeField]
	[HideInEditor]
	[HideInInspector]
	private ushort m_prefabFormat;

	public List<ComponentBase> components = new List<ComponentBase>();

	[NonSerialized]
	public bool isDirty = true;

	public string thumbnailUrl => "thumbnail://ThumbnailCamera/" + GetPrefabID().ToUrlSegment();

	public ushort prefabFormat => m_prefabFormat;

	public bool isBuiltin
	{
		get
		{
			if (!AssetDatabase.global.resources.prefabsMap.TryGetGuid(this, out var _))
			{
				return asset?.database is AssetDatabase<Colossal.IO.AssetDatabase.Game>;
			}
			return true;
		}
	}

	public bool isSubscribedMod => asset?.database is AssetDatabase<ParadoxMods>;

	public bool isPackaged => asset?.GetMeta().packaged ?? false;

	public bool isReadOnly
	{
		get
		{
			if (!isBuiltin && !isSubscribedMod)
			{
				return isPackaged;
			}
			return true;
		}
	}

	public PrefabAsset asset { get; set; }

	public virtual bool canIgnoreUnlockDependencies => true;

	public virtual string uiTag => GetPrefabID().ToString();

	public void OnBeforeSerialize()
	{
		UpdatePrefabFormat();
	}

	public virtual void OnAfterDeserialize()
	{
		prefab = this;
	}

	public void MarkCurrentPrefabObsolete()
	{
		ObsoleteIdentifiers obsoleteIdentifiers = AddOrGetComponent<ObsoleteIdentifiers>();
		PrefabIdentifierInfo prefabIdentifierInfo = ((version != 0) ? new PrefabIdentifierInfo
		{
			m_Name = name,
			m_Type = GetType().Name,
			m_Hash = (asset?.id.guid.ToString() ?? string.Empty)
		} : new PrefabIdentifierInfo
		{
			m_Name = name,
			m_Type = GetType().Name
		});
		if (obsoleteIdentifiers.m_PrefabIdentifiers == null)
		{
			obsoleteIdentifiers.m_PrefabIdentifiers = new PrefabIdentifierInfo[1] { prefabIdentifierInfo };
			return;
		}
		PrefabIdentifierInfo[] array = new PrefabIdentifierInfo[obsoleteIdentifiers.m_PrefabIdentifiers.Length + 1];
		Array.Copy(obsoleteIdentifiers.m_PrefabIdentifiers, array, obsoleteIdentifiers.m_PrefabIdentifiers.Length);
		array[^1] = prefabIdentifierInfo;
		obsoleteIdentifiers.m_PrefabIdentifiers = array;
	}

	[OnDeserialized]
	protected void OnDeserialized()
	{
		if (asset != null && version == 0)
		{
			MarkCurrentPrefabObsolete();
		}
	}

	[OnSerializing]
	protected void OnSerializing()
	{
		version = 1;
		UpdatePrefabFormat();
	}

	private void UpdatePrefabFormat()
	{
		PrefabFormatAttribute customAttribute = GetType().GetCustomAttribute<PrefabFormatAttribute>();
		if (customAttribute != null)
		{
			m_prefabFormat = customAttribute.format;
		}
	}

	protected override void OnEnable()
	{
		base.OnEnable();
		prefab = this;
		foreach (ComponentBase component in components)
		{
			if (!(component == null))
			{
				if (component.prefab != null && component.prefab != component && component.prefab != this)
				{
					ComponentBase.baseLog.ErrorFormat(prefab, "Component on prefab {0} is referenced from another prefab: {1}", prefab.name, component.prefab.name);
				}
				component.prefab = this;
			}
		}
		components.RemoveAll((ComponentBase x) => x == null);
	}

	public virtual void Reset()
	{
		isDirty = true;
	}

	public T AddOrGetComponent<T>() where T : ComponentBase
	{
		if (!TryGetExactly<T>(out var component))
		{
			return AddComponent<T>();
		}
		return component;
	}

	public ComponentBase AddOrGetComponent(Type type)
	{
		if (!TryGetExactly(type, out var component))
		{
			return AddComponent(type);
		}
		return component;
	}

	public T AddComponent<T>() where T : ComponentBase
	{
		return (T)AddComponent(typeof(T));
	}

	public T AddComponentFrom<T>(T from) where T : ComponentBase
	{
		T val = AddOrGetComponent<T>();
		JsonUtility.FromJsonOverwrite(JsonUtility.ToJson(from), val);
		return val;
	}

	public ComponentBase AddComponentFrom(ComponentBase from)
	{
		Type type = from.GetType();
		ComponentBase componentBase = AddOrGetComponent(type);
		JsonUtility.FromJsonOverwrite(JsonUtility.ToJson(from), componentBase);
		return componentBase;
	}

	public ComponentBase AddComponent(Type type)
	{
		if (Has(type))
		{
			throw new InvalidOperationException("Component already exists");
		}
		ComponentBase componentBase = (ComponentBase)ScriptableObject.CreateInstance(type);
		componentBase.name = type.Name;
		componentBase.prefab = this;
		components.Add(componentBase);
		isDirty = true;
		return componentBase;
	}

	public ComponentBase ReplaceComponentWith(ComponentBase target, Type type)
	{
		ComponentBase componentBase = (ComponentBase)ScriptableObject.CreateInstance(type);
		componentBase.prefab = this;
		int index = components.IndexOf(target);
		components[index] = componentBase;
		isDirty = true;
		return componentBase;
	}

	public void Remove<T>() where T : ComponentBase
	{
		Remove(typeof(T));
	}

	public void Remove(Type type)
	{
		int num = -1;
		for (int i = 0; i < components.Count; i++)
		{
			if (components[i].GetType() == type)
			{
				num = i;
				break;
			}
		}
		if (num >= 0)
		{
			components.RemoveAt(num);
			isDirty = true;
		}
	}

	public bool Has<T>() where T : ComponentBase
	{
		return Has(typeof(T));
	}

	public bool Has(Type type)
	{
		if (GetType() == type)
		{
			return true;
		}
		foreach (ComponentBase component in components)
		{
			if (component.GetType() == type)
			{
				return true;
			}
		}
		return false;
	}

	public bool HasSubclassOf(Type type)
	{
		if (GetType().IsSubclassOf(type))
		{
			return true;
		}
		foreach (ComponentBase component in components)
		{
			if (component.GetType().IsSubclassOf(type))
			{
				return true;
			}
		}
		return false;
	}

	public bool TryGet<T>(out T component) where T : ComponentBase
	{
		bool result = TryGet(typeof(T), out var component2);
		component = (T)component2;
		return result;
	}

	public bool TryGet(Type type, out ComponentBase component)
	{
		Type type2 = GetType();
		component = null;
		if (type2 == type || type2.IsSubclassOf(type))
		{
			component = this;
			return true;
		}
		foreach (ComponentBase component2 in components)
		{
			Type type3 = component2.GetType();
			if (type3 == type || type3.IsSubclassOf(type))
			{
				component = component2;
				return true;
			}
		}
		return false;
	}

	public bool TryGetExactly<T>(out T component) where T : ComponentBase
	{
		bool result = TryGetExactly(typeof(T), out var component2);
		component = (T)component2;
		return result;
	}

	public bool TryGetExactly(Type type, out ComponentBase component)
	{
		component = null;
		if (GetType() == type)
		{
			component = this;
			return true;
		}
		foreach (ComponentBase component2 in components)
		{
			if (component2.GetType() == type)
			{
				component = component2;
				return true;
			}
		}
		return false;
	}

	public bool TryGet<T>(List<T> result)
	{
		Assert.IsNotNull(components);
		int count = result.Count;
		if (this is T item)
		{
			result.Add(item);
		}
		foreach (ComponentBase component in components)
		{
			if (component.active && component is T item2)
			{
				result.Add(item2);
			}
		}
		return count != result.Count;
	}

	public override void GetDependencies(List<PrefabBase> prefabs)
	{
		base.GetDependencies(prefabs);
		if (asset != null)
		{
			string platformID = asset.GetMeta().platformID;
			if (!string.IsNullOrEmpty(platformID))
			{
				PrefabSystem existingSystemManaged = World.DefaultGameObjectInjectionWorld.GetExistingSystemManaged<PrefabSystem>();
				prefabs.Add(existingSystemManaged.GetOrCreateContentPrefab(platformID));
			}
		}
	}

	public override void GetPrefabComponents(HashSet<ComponentType> components)
	{
		components.Add(ComponentType.ReadWrite<PrefabData>());
		components.Add(ComponentType.ReadWrite<LoadedIndex>());
		if (asset != null && !string.IsNullOrEmpty(asset.GetMeta().platformID))
		{
			components.Add(ComponentType.ReadWrite<ModPrerequisiteData>());
		}
	}

	public override void GetArchetypeComponents(HashSet<ComponentType> components)
	{
		components.Add(ComponentType.ReadWrite<PrefabRef>());
	}

	public override void LateInitialize(EntityManager entityManager, Entity entity)
	{
		base.LateInitialize(entityManager, entity);
		if (asset != null)
		{
			string platformID = asset.GetMeta().platformID;
			if (!string.IsNullOrEmpty(platformID))
			{
				PrefabSystem existingSystemManaged = entityManager.World.GetExistingSystemManaged<PrefabSystem>();
				entityManager.SetComponentData(entity, new ModPrerequisiteData
				{
					m_ContentPrerequisite = existingSystemManaged.GetEntity(existingSystemManaged.GetOrCreateContentPrefab(platformID))
				});
			}
		}
	}

	public PrefabID GetPrefabID(Colossal.Hash128 overrideHash = default(Colossal.Hash128))
	{
		return new PrefabID(this, overrideHash);
	}

	public PrefabBase Clone(string newName = null)
	{
		PrefabBase prefabBase = (PrefabBase)ScriptableObject.CreateInstance(GetType());
		ProxyObject proxyObject = JSON.Load(JsonUtility.ToJson(this)) as ProxyObject;
		if (proxyObject != null)
		{
			proxyObject.Remove("components");
			proxyObject.Remove("m_NameOverride");
		}
		JsonUtility.FromJsonOverwrite(proxyObject.ToJSON(), prefabBase);
		prefabBase.name = newName ?? (name + " (copy)");
		foreach (ComponentBase component in components)
		{
			prefabBase.AddComponentFrom(component);
		}
		return prefabBase;
	}

	public static T Create<T>(string name) where T : PrefabBase
	{
		T val = ScriptableObject.CreateInstance<T>();
		val.name = name;
		return val;
	}

	public static PrefabBase Create(Type type, string name)
	{
		if (!typeof(PrefabBase).IsAssignableFrom(type))
		{
			throw new ArgumentException($"Type '{type}' does not inherit from PrefabBase");
		}
		PrefabBase prefabBase = (PrefabBase)ScriptableObject.CreateInstance(type);
		prefabBase.name = name;
		return prefabBase;
	}
}
