using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using UnityEngine.Scripting;

namespace Game.Common;

public class PrepareCleanUpSystem : GameSystemBase
{
	private CleanUpSystem m_CleanUpSystem;

	private EntityQuery m_DeletedQuery;

	private EntityQuery m_UpdatedQuery;

	[Preserve]
	protected override void OnCreate()
	{
		base.OnCreate();
		m_CleanUpSystem = World.GetOrCreateSystemManaged<CleanUpSystem>();
		m_DeletedQuery = GetEntityQuery(new EntityQueryDesc
		{
			Any = new ComponentType[2]
			{
				ComponentType.ReadOnly<Deleted>(),
				ComponentType.ReadOnly<Event>()
			}
		});
		m_UpdatedQuery = GetEntityQuery(new EntityQueryDesc
		{
			Any = new ComponentType[6]
			{
				ComponentType.ReadOnly<Created>(),
				ComponentType.ReadOnly<Updated>(),
				ComponentType.ReadOnly<Applied>(),
				ComponentType.ReadOnly<EffectsUpdated>(),
				ComponentType.ReadOnly<BatchesUpdated>(),
				ComponentType.ReadOnly<PathfindUpdated>()
			},
			None = new ComponentType[1] { ComponentType.ReadOnly<Deleted>() }
		});
	}

	[Preserve]
	protected override void OnUpdate()
	{
		NativeList<Entity> deletedEntities = m_DeletedQuery.ToEntityListAsync(Allocator.TempJob, out var outJobHandle);
		NativeList<Entity> updatedEntities = m_UpdatedQuery.ToEntityListAsync(Allocator.TempJob, out var outJobHandle2);
		m_CleanUpSystem.AddDeleted(deletedEntities, outJobHandle);
		m_CleanUpSystem.AddUpdated(updatedEntities, outJobHandle2);
		Dependency = JobHandle.CombineDependencies(outJobHandle, outJobHandle2);
	}

	[Preserve]
	public PrepareCleanUpSystem()
	{
	}
}
