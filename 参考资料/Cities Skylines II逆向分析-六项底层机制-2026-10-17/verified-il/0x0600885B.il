// Game.Prefabs.ReplacePrefabSystem::OnUpdate 0x0600885B
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x4ffa48
		// Header size: 12
		// Code size: 1356 (0x54c)
		.maxstack 6
		.locals init (
			[0] valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer,
			[1] valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer,
			[2] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[3] valuetype [Unity.Collections]Unity.Collections.NativeHashSet`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
			[4] valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob,
			[5] valuetype Game.Prefabs.ReplacePrefabSystem/CreateUpdateSetJob,
			[6] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[7] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[8] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[9] valuetype Game.Serialization.PrefabReferences,
			[10] valuetype [Unity.Entities]Unity.Entities.EntityManager,
			[11] valuetype Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob,
			[12] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[13] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[14] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[15] valuetype Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob,
			[16] valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData,
			[17] valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob,
			[18] valuetype Game.Prefabs.ReplacePrefabSystem/CreateUpdateSetJob,
			[19] valuetype Game.Prefabs.ReplacePrefabSystem/IterateInstancesJob,
			[20] valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Prefabs.BuildingUpgradeElement>,
			[21] valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Prefabs.BuildingUpgradeElement>
		)

		IL_0000: ldloca.s 0
		IL_0002: ldc.i4.3
		IL_0003: ldc.i4.0
		IL_0004: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::.ctor(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator, valuetype [Unity.Entities]Unity.Entities.PlaybackPolicy)
		IL_0009: ldloca.s 1
		IL_000b: initobj [Unity.Entities]Unity.Entities.EntityCommandBuffer
		IL_0011: ldarg.0
		IL_0012: ldfld class Game.Tools.ToolSystem Game.Prefabs.ReplacePrefabSystem::m_ToolSystem
		IL_0017: callvirt instance void Game.Tools.ToolSystem::RequireFullUpdate()
		IL_001c: ldloca.s 2
		IL_001e: initobj [UnityEngine.CoreModule]Unity.Jobs.JobHandle
		IL_0024: ldarg.0
		IL_0025: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_002a: stloc.s 10
		IL_002c: ldloca.s 10
		IL_002e: ldarg.0
		IL_002f: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_OldPrefab
		IL_0034: call instance bool [Unity.Entities]Unity.Entities.EntityManager::HasComponent<valuetype Game.Prefabs.MeshData>(valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_0039: brfalse IL_015d

		IL_003e: ldloca.s 1
		IL_0040: ldc.i4.3
		IL_0041: ldc.i4.0
		IL_0042: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::.ctor(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator, valuetype [Unity.Entities]Unity.Entities.PlaybackPolicy)
		IL_0047: ldloca.s 15
		IL_0049: initobj Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob
		IL_004f: ldloca.s 15
		IL_0051: ldarg.0
		IL_0052: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_OldPrefab
		IL_0057: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_OldMeshEntity
		IL_005c: ldloca.s 15
		IL_005e: ldarg.0
		IL_005f: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_NewPrefab
		IL_0064: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_NewMeshEntity
		IL_0069: ldloca.s 15
		IL_006b: ldarg.0
		IL_006c: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0071: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Rendering.MeshBatch> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Rendering_MeshBatch_RW_BufferLookup
		IL_0076: ldarg.0
		IL_0077: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_007c: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Rendering.MeshBatch>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0081: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Rendering.MeshBatch> Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_MeshBatches
		IL_0086: ldloca.s 15
		IL_0088: ldarg.0
		IL_0089: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_008e: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Rendering.FadeBatch> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Rendering_FadeBatch_RW_BufferLookup
		IL_0093: ldarg.0
		IL_0094: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0099: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Rendering.FadeBatch>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_009e: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Rendering.FadeBatch> Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_FadeBatches
		IL_00a3: ldloca.s 15
		IL_00a5: ldarg.0
		IL_00a6: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_00ab: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.BatchGroup> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_BatchGroup_RW_BufferLookup
		IL_00b0: ldarg.0
		IL_00b1: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00b6: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.BatchGroup>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00bb: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.BatchGroup> Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_BatchGroups
		IL_00c0: ldloca.s 15
		IL_00c2: ldarg.0
		IL_00c3: ldfld class Game.Rendering.BatchManagerSystem Game.Prefabs.ReplacePrefabSystem::m_BatchManagerSystem
		IL_00c8: ldc.i4.0
		IL_00c9: ldloca.s 12
		IL_00cb: callvirt instance valuetype [Colossal.Core]Colossal.Rendering.NativeBatchGroups`4<valuetype Game.Rendering.CullingData, valuetype Game.Rendering.GroupData, valuetype Game.Rendering.BatchData, valuetype Game.Rendering.InstanceData> Game.Rendering.BatchManagerSystem::GetNativeBatchGroups(bool, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_00d0: stfld valuetype [Colossal.Core]Colossal.Rendering.NativeBatchGroups`4<valuetype Game.Rendering.CullingData, valuetype Game.Rendering.GroupData, valuetype Game.Rendering.BatchData, valuetype Game.Rendering.InstanceData> Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_NativeBatchGroups
		IL_00d5: ldloca.s 15
		IL_00d7: ldarg.0
		IL_00d8: ldfld class Game.Rendering.BatchManagerSystem Game.Prefabs.ReplacePrefabSystem::m_BatchManagerSystem
		IL_00dd: ldc.i4.0
		IL_00de: ldloca.s 13
		IL_00e0: callvirt instance valuetype [Colossal.Core]Colossal.Rendering.NativeBatchInstances`4<valuetype Game.Rendering.CullingData, valuetype Game.Rendering.GroupData, valuetype Game.Rendering.BatchData, valuetype Game.Rendering.InstanceData> Game.Rendering.BatchManagerSystem::GetNativeBatchInstances(bool, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_00e5: stfld valuetype [Colossal.Core]Colossal.Rendering.NativeBatchInstances`4<valuetype Game.Rendering.CullingData, valuetype Game.Rendering.GroupData, valuetype Game.Rendering.BatchData, valuetype Game.Rendering.InstanceData> Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_NativeBatchInstances
		IL_00ea: ldloca.s 15
		IL_00ec: ldarg.0
		IL_00ed: ldfld class Game.Rendering.BatchManagerSystem Game.Prefabs.ReplacePrefabSystem::m_BatchManagerSystem
		IL_00f2: ldc.i4.0
		IL_00f3: ldloca.s 14
		IL_00f5: callvirt instance valuetype [Colossal.Core]Colossal.Rendering.NativeSubBatches`4<valuetype Game.Rendering.CullingData, valuetype Game.Rendering.GroupData, valuetype Game.Rendering.BatchData, valuetype Game.Rendering.InstanceData> Game.Rendering.BatchManagerSystem::GetNativeSubBatches(bool, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_00fa: stfld valuetype [Colossal.Core]Colossal.Rendering.NativeSubBatches`4<valuetype Game.Rendering.CullingData, valuetype Game.Rendering.GroupData, valuetype Game.Rendering.BatchData, valuetype Game.Rendering.InstanceData> Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_NativeSubBatches
		IL_00ff: ldloca.s 15
		IL_0101: ldloc.1
		IL_0102: stfld valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_EntityCommandBuffer
		IL_0107: ldloca.s 15
		IL_0109: ldarg.0
		IL_010a: ldfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh> Game.Prefabs.ReplacePrefabSystem::m_MeshReplaces
		IL_010f: stfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh> Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob::m_ReplaceMeshes
		IL_0114: ldloc.s 15
		IL_0116: stloc.s 11
		IL_0118: ldloc.2
		IL_0119: ldloc.s 11
		IL_011b: ldarg.0
		IL_011c: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
		IL_0121: ldloc.s 12
		IL_0123: ldloc.s 13
		IL_0125: ldloc.s 14
		IL_0127: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Colossal.Core]Colossal.Entities.JobUtils::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_012c: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobExtensions::Schedule<valuetype Game.Prefabs.ReplacePrefabSystem/RemoveBatchGroupsJob>(!!0, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0131: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0136: stloc.2
		IL_0137: ldarg.0
		IL_0138: ldfld class Game.Rendering.BatchManagerSystem Game.Prefabs.ReplacePrefabSystem::m_BatchManagerSystem
		IL_013d: ldloc.2
		IL_013e: callvirt instance void Game.Rendering.BatchManagerSystem::AddNativeBatchGroupsWriter(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0143: ldarg.0
		IL_0144: ldfld class Game.Rendering.BatchManagerSystem Game.Prefabs.ReplacePrefabSystem::m_BatchManagerSystem
		IL_0149: ldloc.2
		IL_014a: callvirt instance void Game.Rendering.BatchManagerSystem::AddNativeBatchInstancesWriter(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_014f: ldarg.0
		IL_0150: ldfld class Game.Rendering.BatchManagerSystem Game.Prefabs.ReplacePrefabSystem::m_BatchManagerSystem
		IL_0155: ldloc.2
		IL_0156: callvirt instance void Game.Rendering.BatchManagerSystem::AddNativeSubBatchesWriter(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_015b: br.s IL_0192

		IL_015d: ldarg.0
		IL_015e: ldflda valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData> Game.Prefabs.ReplacePrefabSystem::m_ReplacePrefabData
		IL_0163: ldarg.0
		IL_0164: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_NewPrefab
		IL_0169: ldloca.s 16
		IL_016b: initobj Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData
		IL_0171: ldloca.s 16
		IL_0173: ldarg.0
		IL_0174: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_OldPrefab
		IL_0179: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData::m_OldPrefab
		IL_017e: ldloca.s 16
		IL_0180: ldarg.0
		IL_0181: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_SourceInstance
		IL_0186: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData::m_SourceInstance
		IL_018b: ldloc.s 16
		IL_018d: call instance void valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData>::set_Item(!0, !1)

		IL_0192: ldarg.0
		IL_0193: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_SourceInstance
		IL_0198: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
		IL_019d: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_01a2: brfalse.s IL_01b5

		IL_01a4: ldarg.0
		IL_01a5: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem::m_UpdateInstances
		IL_01aa: ldarg.0
		IL_01ab: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_SourceInstance
		IL_01b0: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Enqueue(!0)

		IL_01b5: ldloca.s 3
		IL_01b7: ldc.i4.s 100
		IL_01b9: ldc.i4.3
		IL_01ba: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_01bf: call instance void valuetype [Unity.Collections]Unity.Collections.NativeHashSet`1<valuetype [Unity.Entities]Unity.Entities.Entity>::.ctor(int32, valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_01c4: ldloca.s 17
		IL_01c6: initobj Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob
		IL_01cc: ldloca.s 17
		IL_01ce: ldarg.0
		IL_01cf: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_OldPrefab
		IL_01d4: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_OldPrefab
		IL_01d9: ldloca.s 17
		IL_01db: ldarg.0
		IL_01dc: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_NewPrefab
		IL_01e1: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_NewPrefab
		IL_01e6: ldloca.s 17
		IL_01e8: ldarg.0
		IL_01e9: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_SourceInstance
		IL_01ee: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_SourceInstance
		IL_01f3: ldloca.s 17
		IL_01f5: ldarg.0
		IL_01f6: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_01fb: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_0200: ldarg.0
		IL_0201: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0206: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_020b: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_EntityType
		IL_0210: ldloca.s 17
		IL_0212: ldarg.0
		IL_0213: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0218: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabRef> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_PrefabRef_RW_ComponentTypeHandle
		IL_021d: ldarg.0
		IL_021e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0223: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabRef>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0228: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabRef> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_PrefabRefType
		IL_022d: ldloca.s 17
		IL_022f: ldarg.0
		IL_0230: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0235: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.EditorContainer> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Tools_EditorContainer_RW_ComponentTypeHandle
		IL_023a: ldarg.0
		IL_023b: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0240: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Tools.EditorContainer>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0245: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.EditorContainer> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_EditorContainerType
		IL_024a: ldloca.s 17
		IL_024c: ldarg.0
		IL_024d: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0252: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubObject> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_SubObject_RW_BufferTypeHandle
		IL_0257: ldarg.0
		IL_0258: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_025d: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.SubObject>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0262: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubObject> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_SubObjectType
		IL_0267: ldloca.s 17
		IL_0269: ldarg.0
		IL_026a: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_026f: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubNet> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_SubNet_RW_BufferTypeHandle
		IL_0274: ldarg.0
		IL_0275: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_027a: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.SubNet>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_027f: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubNet> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_SubNetType
		IL_0284: ldloca.s 17
		IL_0286: ldarg.0
		IL_0287: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_028c: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubArea> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_SubArea_RW_BufferTypeHandle
		IL_0291: ldarg.0
		IL_0292: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0297: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.SubArea>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_029c: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubArea> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_SubAreaType
		IL_02a1: ldloca.s 17
		IL_02a3: ldarg.0
		IL_02a4: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_02a9: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.PlaceholderObjectElement> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_PlaceholderObjectElement_RW_BufferTypeHandle
		IL_02ae: ldarg.0
		IL_02af: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02b4: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.PlaceholderObjectElement>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02b9: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.PlaceholderObjectElement> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_PlaceholderObjectElementType
		IL_02be: ldloca.s 17
		IL_02c0: ldarg.0
		IL_02c1: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_02c6: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.ServiceUpgradeBuilding> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_ServiceUpgradeBuilding_RW_BufferTypeHandle
		IL_02cb: ldarg.0
		IL_02cc: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02d1: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.ServiceUpgradeBuilding>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02d6: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.ServiceUpgradeBuilding> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_ServiceUpgradeBuildingType
		IL_02db: ldloca.s 17
		IL_02dd: ldarg.0
		IL_02de: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_02e3: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.BuildingUpgradeElement> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_BuildingUpgradeElement_RW_BufferTypeHandle
		IL_02e8: ldarg.0
		IL_02e9: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02ee: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.BuildingUpgradeElement>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02f3: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.BuildingUpgradeElement> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_BuildingUpgradeElementType
		IL_02f8: ldloca.s 17
		IL_02fa: ldarg.0
		IL_02fb: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0300: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.Effect> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_Effect_RW_BufferTypeHandle
		IL_0305: ldarg.0
		IL_0306: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_030b: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.Effect>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0310: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.Effect> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_EffectType
		IL_0315: ldloca.s 17
		IL_0317: ldarg.0
		IL_0318: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_031d: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.ActivityLocationElement> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_ActivityLocationElement_RW_BufferTypeHandle
		IL_0322: ldarg.0
		IL_0323: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0328: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.ActivityLocationElement>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_032d: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.ActivityLocationElement> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_ActivityLocationElementType
		IL_0332: ldloca.s 17
		IL_0334: ldarg.0
		IL_0335: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_033a: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.CharacterElement> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_CharacterElement_RW_BufferTypeHandle
		IL_033f: ldarg.0
		IL_0340: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0345: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.CharacterElement>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_034a: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.CharacterElement> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_CharacterElementType
		IL_034f: ldloca.s 17
		IL_0351: ldarg.0
		IL_0352: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0357: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubMesh> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_SubMesh_RW_BufferTypeHandle
		IL_035c: ldarg.0
		IL_035d: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0362: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.SubMesh>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0367: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubMesh> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_SubMeshType
		IL_036c: ldloca.s 17
		IL_036e: ldarg.0
		IL_036f: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0374: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.LodMesh> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_LodMesh_RW_BufferTypeHandle
		IL_0379: ldarg.0
		IL_037a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_037f: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.LodMesh>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0384: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.LodMesh> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_LodMeshType
		IL_0389: ldloca.s 17
		IL_038b: ldarg.0
		IL_038c: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0391: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.UIGroupElement> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_UIGroupElement_RW_BufferTypeHandle
		IL_0396: ldarg.0
		IL_0397: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_039c: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.UIGroupElement>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_03a1: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.UIGroupElement> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_UIGroupElementType
		IL_03a6: ldloca.s 17
		IL_03a8: ldarg.0
		IL_03a9: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_03ae: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Tutorials.TutorialPhaseRef> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Tutorials_TutorialPhaseRef_RW_BufferTypeHandle
		IL_03b3: ldarg.0
		IL_03b4: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_03b9: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Tutorials.TutorialPhaseRef>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_03be: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Tutorials.TutorialPhaseRef> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_TutorialPhaseType
		IL_03c3: ldloca.s 17
		IL_03c5: ldloca.s 0
		IL_03c7: call instance valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter [Unity.Entities]Unity.Entities.EntityCommandBuffer::AsParallelWriter()
		IL_03cc: stfld valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_CommandBuffer
		IL_03d1: ldloca.s 17
		IL_03d3: ldarg.0
		IL_03d4: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem::m_UpdateInstances
		IL_03d9: call instance valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<!0> valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AsParallelWriter()
		IL_03de: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_UpdateInstances
		IL_03e3: ldloc.s 17
		IL_03e5: stloc.s 4
		IL_03e7: ldloca.s 18
		IL_03e9: initobj Game.Prefabs.ReplacePrefabSystem/CreateUpdateSetJob
		IL_03ef: ldloca.s 18
		IL_03f1: ldarg.0
		IL_03f2: ldfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem::m_UpdateInstances
		IL_03f7: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem/CreateUpdateSetJob::m_Queue
		IL_03fc: ldloca.s 18
		IL_03fe: ldloc.3
		IL_03ff: stfld valuetype [Unity.Collections]Unity.Collections.NativeHashSet`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem/CreateUpdateSetJob::m_HashSet
		IL_0404: ldloc.s 18
		IL_0406: stloc.s 5
		IL_0408: ldloca.s 19
		IL_040a: initobj Game.Prefabs.ReplacePrefabSystem/IterateInstancesJob
		IL_0410: ldloca.s 19
		IL_0412: ldarg.0
		IL_0413: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0418: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_041d: ldarg.0
		IL_041e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0423: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0428: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Prefabs.ReplacePrefabSystem/IterateInstancesJob::m_EntityType
		IL_042d: ldloca.s 19
		IL_042f: ldarg.0
		IL_0430: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/TypeHandle Game.Prefabs.ReplacePrefabSystem::__TypeHandle
		IL_0435: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabRef> Game.Prefabs.ReplacePrefabSystem/TypeHandle::__Game_Prefabs_PrefabRef_RW_ComponentTypeHandle
		IL_043a: ldarg.0
		IL_043b: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0440: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabRef>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0445: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabRef> Game.Prefabs.ReplacePrefabSystem/IterateInstancesJob::m_PrefabRefType
		IL_044a: ldloca.s 19
		IL_044c: ldloc.3
		IL_044d: stfld valuetype [Unity.Collections]Unity.Collections.NativeHashSet`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem/IterateInstancesJob::m_InstanceSet
		IL_0452: ldloca.s 19
		IL_0454: ldloc.s 4
		IL_0456: ldfld valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob::m_CommandBuffer
		IL_045b: stfld valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Prefabs.ReplacePrefabSystem/IterateInstancesJob::m_CommandBuffer
		IL_0460: ldloc.s 19
		IL_0462: ldloc.s 4
		IL_0464: ldarg.0
		IL_0465: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Prefabs.ReplacePrefabSystem::m_PrefabRefQuery
		IL_046a: ldarg.0
		IL_046b: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
		IL_0470: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0475: stloc.s 6
		IL_0477: ldloc.s 5
		IL_0479: ldloc.s 6
		IL_047b: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobExtensions::Schedule<valuetype Game.Prefabs.ReplacePrefabSystem/CreateUpdateSetJob>(!!0, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0480: stloc.s 7
		IL_0482: ldarg.0
		IL_0483: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Prefabs.ReplacePrefabSystem::m_PrefabRefQuery
		IL_0488: ldloc.s 7
		IL_048a: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Prefabs.ReplacePrefabSystem/IterateInstancesJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_048f: stloc.s 8
		IL_0491: ldloca.s 3
		IL_0493: ldloc.s 8
		IL_0495: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle valuetype [Unity.Collections]Unity.Collections.NativeHashSet`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Dispose(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_049a: pop
		IL_049b: ldloc.2
		IL_049c: ldloc.s 8
		IL_049e: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_04a3: stloc.2
		IL_04a4: ldloca.s 9
		IL_04a6: ldarg.0
		IL_04a7: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_OldPrefab
		IL_04ac: ldarg.0
		IL_04ad: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_NewPrefab
		IL_04b2: call instance void Game.Serialization.PrefabReferences::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_04b7: ldarg.0
		IL_04b8: ldfld class Game.Serialization.PrimaryPrefabReferencesSystem Game.Prefabs.ReplacePrefabSystem::m_PrimaryPrefabReferencesSystem
		IL_04bd: ldloca.s 9
		IL_04bf: callvirt instance void Game.Serialization.PrimaryPrefabReferencesSystem::PatchSystemReferences(valuetype Game.Serialization.PrefabReferences&)
		IL_04c4: ldloca.s 2
		IL_04c6: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_04cb: ldarg.0
		IL_04cc: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_04d1: stloc.s 10
		IL_04d3: ldloca.s 10
		IL_04d5: ldarg.0
		IL_04d6: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_OldPrefab
		IL_04db: call instance bool [Unity.Entities]Unity.Entities.EntityManager::HasComponent<valuetype Game.Prefabs.BuildingUpgradeElement>(valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_04e0: brfalse.s IL_051a

		IL_04e2: ldarg.0
		IL_04e3: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_04e8: stloc.s 10
		IL_04ea: ldloca.s 10
		IL_04ec: ldarg.0
		IL_04ed: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_NewPrefab
		IL_04f2: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0> [Unity.Entities]Unity.Entities.EntityManager::AddBuffer<valuetype Game.Prefabs.BuildingUpgradeElement>(valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_04f7: stloc.s 20
		IL_04f9: ldarg.0
		IL_04fa: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_04ff: stloc.s 10
		IL_0501: ldloca.s 10
		IL_0503: ldarg.0
		IL_0504: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem::m_OldPrefab
		IL_0509: ldc.i4.1
		IL_050a: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0> [Unity.Entities]Unity.Entities.EntityManager::GetBuffer<valuetype Game.Prefabs.BuildingUpgradeElement>(valuetype [Unity.Entities]Unity.Entities.Entity, bool)
		IL_050f: stloc.s 21
		IL_0511: ldloca.s 20
		IL_0513: ldloc.s 21
		IL_0515: call instance void valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Prefabs.BuildingUpgradeElement>::CopyFrom(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0>)

		IL_051a: ldloca.s 0
		IL_051c: ldarg.0
		IL_051d: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_0522: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::Playback(valuetype [Unity.Entities]Unity.Entities.EntityManager)
		IL_0527: ldloca.s 0
		IL_0529: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::Dispose()
		IL_052e: ldloca.s 1
		IL_0530: call instance bool [Unity.Entities]Unity.Entities.EntityCommandBuffer::get_IsCreated()
		IL_0535: brfalse.s IL_054b

		IL_0537: ldloca.s 1
		IL_0539: ldarg.0
		IL_053a: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_053f: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::Playback(valuetype [Unity.Entities]Unity.Entities.EntityManager)
		IL_0544: ldloca.s 1
		IL_0546: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::Dispose()

		IL_054b: ret
	} // end of method ReplacePrefabSystem::OnUpdate
