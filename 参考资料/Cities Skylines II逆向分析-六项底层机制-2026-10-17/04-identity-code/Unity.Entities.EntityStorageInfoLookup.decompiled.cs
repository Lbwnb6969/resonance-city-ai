using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Entities;

[NativeContainer]
[NativeContainerIsReadOnly]
public struct EntityStorageInfoLookup
{
	[NativeDisableUnsafePtrRestriction]
	private unsafe readonly EntityDataAccess* m_EntityDataAccess;

	public unsafe EntityStorageInfo this[Entity entity]
	{
		get
		{
			EntityInChunk entityInChunk = m_EntityDataAccess->EntityComponentStore->GetEntityInChunk(entity);
			return new EntityStorageInfo
			{
				Chunk = new ArchetypeChunk(entityInChunk.Chunk, m_EntityDataAccess->EntityComponentStore),
				IndexInChunk = entityInChunk.IndexInChunk
			};
		}
	}

	internal unsafe EntityStorageInfoLookup(EntityDataAccess* entityDataAccess)
	{
		m_EntityDataAccess = entityDataAccess;
	}

	public unsafe void Update(SystemBase system)
	{
		Update(ref *system.m_StatePtr);
	}

	public void Update(ref SystemState systemState)
	{
	}

	public unsafe bool Exists(Entity entity)
	{
		return m_EntityDataAccess->EntityComponentStore->Exists(entity);
	}
}
