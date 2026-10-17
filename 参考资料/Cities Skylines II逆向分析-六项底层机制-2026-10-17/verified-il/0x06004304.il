// Game.Net.UpdateCollectSystem::OnUpdate 0x06004304
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x208d00
		// Header size: 12
		// Code size: 941 (0x3ad)
		.maxstack 5
		.locals init (
			[0] bool,
			[1] bool,
			[2] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[3] valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>,
			[4] valuetype Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob,
			[5] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[6] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[7] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[8] valuetype Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob,
			[9] valuetype Game.Net.UpdateCollectSystem/DequeueBoundsJob,
			[10] valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>,
			[11] valuetype Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob,
			[12] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[13] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[14] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[15] valuetype Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob
		)

		IL_0000: ldarg.0
		IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Net.UpdateCollectSystem::m_NetGeometryQuery
		IL_0006: call instance bool [Unity.Entities]Unity.Entities.EntityQuery::get_IsEmptyIgnoreFilter()
		IL_000b: ldc.i4.0
		IL_000c: ceq
		IL_000e: stloc.0
		IL_000f: ldarg.0
		IL_0010: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Net.UpdateCollectSystem::m_LaneGeometryQuery
		IL_0015: call instance bool [Unity.Entities]Unity.Entities.EntityQuery::get_IsEmptyIgnoreFilter()
		IL_001a: ldc.i4.0
		IL_001b: ceq
		IL_001d: stloc.1
		IL_001e: ldloc.0
		IL_001f: brtrue.s IL_0051

		IL_0021: ldarg.0
		IL_0022: call instance bool Game.Net.UpdateCollectSystem::get_netsUpdated()
		IL_0027: brfalse.s IL_0051

		IL_0029: ldarg.0
		IL_002a: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetWriteDependencies
		IL_002f: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_0034: ldarg.0
		IL_0035: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetReadDependencies
		IL_003a: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_003f: ldarg.0
		IL_0040: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem::m_UpdatedNetBounds
		IL_0045: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Clear()
		IL_004a: ldarg.0
		IL_004b: ldc.i4.0
		IL_004c: call instance void Game.Net.UpdateCollectSystem::set_netsUpdated(bool)

		IL_0051: ldloc.1
		IL_0052: brtrue.s IL_0084

		IL_0054: ldarg.0
		IL_0055: call instance bool Game.Net.UpdateCollectSystem::get_lanesUpdated()
		IL_005a: brfalse.s IL_0084

		IL_005c: ldarg.0
		IL_005d: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_LaneWriteDependencies
		IL_0062: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_0067: ldarg.0
		IL_0068: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_LaneReadDependencies
		IL_006d: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_0072: ldarg.0
		IL_0073: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem::m_UpdatedLaneBounds
		IL_0078: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Clear()
		IL_007d: ldarg.0
		IL_007e: ldc.i4.0
		IL_007f: call instance void Game.Net.UpdateCollectSystem::set_lanesUpdated(bool)

		IL_0084: ldloc.0
		IL_0085: brtrue.s IL_008b

		IL_0087: ldloc.1
		IL_0088: brtrue.s IL_008b

		IL_008a: ret

		IL_008b: ldloca.s 2
		IL_008d: initobj [UnityEngine.CoreModule]Unity.Jobs.JobHandle
		IL_0093: ldloc.0
		IL_0094: brfalse IL_022a

		IL_0099: ldarg.0
		IL_009a: ldc.i4.1
		IL_009b: call instance void Game.Net.UpdateCollectSystem::set_netsUpdated(bool)
		IL_00a0: ldloca.s 3
		IL_00a2: ldc.i4.3
		IL_00a3: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_00a8: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::.ctor(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_00ad: ldloca.s 8
		IL_00af: initobj Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob
		IL_00b5: ldloca.s 8
		IL_00b7: ldarg.0
		IL_00b8: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_00bd: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Net.UpdateCollectSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_00c2: ldarg.0
		IL_00c3: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00c8: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00cd: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EntityType
		IL_00d2: ldloca.s 8
		IL_00d4: ldarg.0
		IL_00d5: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_00da: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EdgeGeometry> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Net_EdgeGeometry_RO_ComponentTypeHandle
		IL_00df: ldarg.0
		IL_00e0: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00e5: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.EdgeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00ea: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EdgeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EdgeGeometryType
		IL_00ef: ldloca.s 8
		IL_00f1: ldarg.0
		IL_00f2: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_00f7: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.StartNodeGeometry> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Net_StartNodeGeometry_RO_ComponentTypeHandle
		IL_00fc: ldarg.0
		IL_00fd: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0102: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.StartNodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0107: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.StartNodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_StartGeometryType
		IL_010c: ldloca.s 8
		IL_010e: ldarg.0
		IL_010f: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_0114: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EndNodeGeometry> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Net_EndNodeGeometry_RO_ComponentTypeHandle
		IL_0119: ldarg.0
		IL_011a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_011f: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.EndNodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0124: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EndNodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EndGeometryType
		IL_0129: ldloca.s 8
		IL_012b: ldarg.0
		IL_012c: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_0131: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.NodeGeometry> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Net_NodeGeometry_RO_ComponentTypeHandle
		IL_0136: ldarg.0
		IL_0137: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_013c: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.NodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0141: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.NodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_NodeGeometryType
		IL_0146: ldloca.s 8
		IL_0148: ldarg.0
		IL_0149: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_014e: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Created> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Common_Created_RO_ComponentTypeHandle
		IL_0153: ldarg.0
		IL_0154: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0159: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Common.Created>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_015e: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Created> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_CreatedType
		IL_0163: ldloca.s 8
		IL_0165: ldarg.0
		IL_0166: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_016b: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Deleted> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Common_Deleted_RO_ComponentTypeHandle
		IL_0170: ldarg.0
		IL_0171: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0176: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Common.Deleted>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_017b: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Deleted> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_DeletedType
		IL_0180: ldloca.s 8
		IL_0182: ldarg.0
		IL_0183: ldfld class Game.Net.SearchSystem Game.Net.UpdateCollectSystem::m_SearchSystem
		IL_0188: ldc.i4.1
		IL_0189: ldloca.s 5
		IL_018b: callvirt instance valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ> Game.Net.SearchSystem::GetNetSearchTree(bool, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_0190: stfld valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_SearchTree
		IL_0195: ldloca.s 8
		IL_0197: ldloca.s 3
		IL_0199: call instance valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<!0> valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::AsParallelWriter()
		IL_019e: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
		IL_01a3: ldloc.s 8
		IL_01a5: stloc.s 4
		IL_01a7: ldloca.s 9
		IL_01a9: initobj Game.Net.UpdateCollectSystem/DequeueBoundsJob
		IL_01af: ldloca.s 9
		IL_01b1: ldloc.3
		IL_01b2: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_Queue
		IL_01b7: ldloca.s 9
		IL_01b9: ldarg.0
		IL_01ba: ldfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem::m_UpdatedNetBounds
		IL_01bf: stfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_ResultList
		IL_01c4: ldloc.s 9
		IL_01c6: ldloc.s 4
		IL_01c8: ldarg.0
		IL_01c9: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Net.UpdateCollectSystem::m_NetGeometryQuery
		IL_01ce: ldarg.0
		IL_01cf: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
		IL_01d4: ldloc.s 5
		IL_01d6: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_01db: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_01e0: stloc.s 6
		IL_01e2: ldloc.s 6
		IL_01e4: ldarg.0
		IL_01e5: ldfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetReadDependencies
		IL_01ea: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_01ef: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobExtensions::Schedule<valuetype Game.Net.UpdateCollectSystem/DequeueBoundsJob>(!!0, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_01f4: stloc.s 7
		IL_01f6: ldloca.s 3
		IL_01f8: ldloc.s 7
		IL_01fa: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Dispose(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_01ff: pop
		IL_0200: ldarg.0
		IL_0201: ldfld class Game.Net.SearchSystem Game.Net.UpdateCollectSystem::m_SearchSystem
		IL_0206: ldloc.s 6
		IL_0208: callvirt instance void Game.Net.SearchSystem::AddNetSearchTreeReader(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_020d: ldarg.0
		IL_020e: ldloc.s 7
		IL_0210: stfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetWriteDependencies
		IL_0215: ldarg.0
		IL_0216: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetReadDependencies
		IL_021b: initobj [UnityEngine.CoreModule]Unity.Jobs.JobHandle
		IL_0221: ldloc.2
		IL_0222: ldloc.s 6
		IL_0224: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0229: stloc.2

		IL_022a: ldloc.1
		IL_022b: brfalse IL_03a5

		IL_0230: ldarg.0
		IL_0231: ldc.i4.1
		IL_0232: call instance void Game.Net.UpdateCollectSystem::set_lanesUpdated(bool)
		IL_0237: ldloca.s 10
		IL_0239: ldc.i4.3
		IL_023a: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_023f: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::.ctor(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_0244: ldloca.s 15
		IL_0246: initobj Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob
		IL_024c: ldloca.s 15
		IL_024e: ldarg.0
		IL_024f: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_0254: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Net.UpdateCollectSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_0259: ldarg.0
		IL_025a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_025f: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0264: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_EntityType
		IL_0269: ldloca.s 15
		IL_026b: ldarg.0
		IL_026c: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_0271: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Curve> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Net_Curve_RO_ComponentTypeHandle
		IL_0276: ldarg.0
		IL_0277: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_027c: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Net.Curve>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0281: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Curve> Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_CurveType
		IL_0286: ldloca.s 15
		IL_0288: ldarg.0
		IL_0289: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_028e: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Created> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Common_Created_RO_ComponentTypeHandle
		IL_0293: ldarg.0
		IL_0294: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0299: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Common.Created>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_029e: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Created> Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_CreatedType
		IL_02a3: ldloca.s 15
		IL_02a5: ldarg.0
		IL_02a6: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_02ab: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Deleted> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Common_Deleted_RO_ComponentTypeHandle
		IL_02b0: ldarg.0
		IL_02b1: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02b6: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Common.Deleted>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02bb: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Deleted> Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_DeletedType
		IL_02c0: ldloca.s 15
		IL_02c2: ldarg.0
		IL_02c3: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_02c8: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabRef> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Prefabs_PrefabRef_RO_ComponentTypeHandle
		IL_02cd: ldarg.0
		IL_02ce: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02d3: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabRef>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02d8: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabRef> Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_PrefabRefType
		IL_02dd: ldloca.s 15
		IL_02df: ldarg.0
		IL_02e0: ldflda valuetype Game.Net.UpdateCollectSystem/TypeHandle Game.Net.UpdateCollectSystem::__TypeHandle
		IL_02e5: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.NetLaneGeometryData> Game.Net.UpdateCollectSystem/TypeHandle::__Game_Prefabs_NetLaneGeometryData_RO_ComponentLookup
		IL_02ea: ldarg.0
		IL_02eb: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02f0: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Prefabs.NetLaneGeometryData>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02f5: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.NetLaneGeometryData> Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_PrefabLaneGeometryData
		IL_02fa: ldloca.s 15
		IL_02fc: ldarg.0
		IL_02fd: ldfld class Game.Net.SearchSystem Game.Net.UpdateCollectSystem::m_SearchSystem
		IL_0302: ldc.i4.1
		IL_0303: ldloca.s 12
		IL_0305: callvirt instance valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ> Game.Net.SearchSystem::GetLaneSearchTree(bool, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_030a: stfld valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ> Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_SearchTree
		IL_030f: ldloca.s 15
		IL_0311: ldloca.s 10
		IL_0313: call instance valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<!0> valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::AsParallelWriter()
		IL_0318: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob::m_ResultQueue
		IL_031d: ldloc.s 15
		IL_031f: stloc.s 11
		IL_0321: ldloca.s 9
		IL_0323: initobj Game.Net.UpdateCollectSystem/DequeueBoundsJob
		IL_0329: ldloca.s 9
		IL_032b: ldloc.s 10
		IL_032d: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_Queue
		IL_0332: ldloca.s 9
		IL_0334: ldarg.0
		IL_0335: ldfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem::m_UpdatedLaneBounds
		IL_033a: stfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_ResultList
		IL_033f: ldloc.s 9
		IL_0341: ldloc.s 11
		IL_0343: ldarg.0
		IL_0344: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Net.UpdateCollectSystem::m_LaneGeometryQuery
		IL_0349: ldarg.0
		IL_034a: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
		IL_034f: ldloc.s 12
		IL_0351: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0356: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Net.UpdateCollectSystem/CollectUpdatedLaneBoundsJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_035b: stloc.s 13
		IL_035d: ldloc.s 13
		IL_035f: ldarg.0
		IL_0360: ldfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_LaneReadDependencies
		IL_0365: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_036a: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobExtensions::Schedule<valuetype Game.Net.UpdateCollectSystem/DequeueBoundsJob>(!!0, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_036f: stloc.s 14
		IL_0371: ldloca.s 10
		IL_0373: ldloc.s 14
		IL_0375: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Dispose(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_037a: pop
		IL_037b: ldarg.0
		IL_037c: ldfld class Game.Net.SearchSystem Game.Net.UpdateCollectSystem::m_SearchSystem
		IL_0381: ldloc.s 13
		IL_0383: callvirt instance void Game.Net.SearchSystem::AddLaneSearchTreeReader(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0388: ldarg.0
		IL_0389: ldloc.s 14
		IL_038b: stfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_LaneWriteDependencies
		IL_0390: ldarg.0
		IL_0391: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_LaneReadDependencies
		IL_0396: initobj [UnityEngine.CoreModule]Unity.Jobs.JobHandle
		IL_039c: ldloc.2
		IL_039d: ldloc.s 13
		IL_039f: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_03a4: stloc.2

		IL_03a5: ldarg.0
		IL_03a6: ldloc.2
		IL_03a7: call instance void [Unity.Entities]Unity.Entities.SystemBase::set_Dependency(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_03ac: ret
	} // end of method UpdateCollectSystem::OnUpdate
