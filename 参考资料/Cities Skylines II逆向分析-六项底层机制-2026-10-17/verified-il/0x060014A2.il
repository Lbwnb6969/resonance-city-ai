// Game.Serialization.ResolvePrefabsSystem::OnUpdate 0x060014A2
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0xce90c
		// Header size: 12
		// Code size: 1349 (0x545)
		.maxstack 4
		.locals init (
			[0] int32,
			[1] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
			[2] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabComponents>,
			[3] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Zones.ZoneType>,
			[4] valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification>,
			[5] valuetype Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob,
			[6] valuetype Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob,
			[7] valuetype Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob,
			[8] valuetype Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob,
			[9] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[10] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[11] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[12] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[13] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[14] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[15] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
			[16] valuetype [Unity.Entities]Unity.Entities.ComponentType,
			[17] valuetype Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob,
			[18] valuetype Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob,
			[19] valuetype Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob,
			[20] valuetype Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob,
			[21] valuetype Game.Serialization.ResolvePrefabsSystem/FixZoneTypeJob,
			[22] valuetype [Unity.Entities]Unity.Entities.EntityManager,
			[23] valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification,
			[24] int32,
			[25] valuetype [Unity.Entities]Unity.Entities.Entity,
			[26] valuetype Game.Prefabs.PrefabData,
			[27] valuetype Game.Prefabs.PrefabID
		)

		IL_0000: ldarg.0
		IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_EnabledLoadedPrefabQuery
		IL_0006: call instance int32 [Unity.Entities]Unity.Entities.EntityQuery::CalculateEntityCount()
		IL_000b: stloc.0
		IL_000c: ldloca.s 1
		IL_000e: ldloc.0
		IL_000f: ldc.i4.3
		IL_0010: ldc.i4.1
		IL_0011: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::.ctor(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArrayOptions)
		IL_0016: ldloca.s 2
		IL_0018: ldloc.0
		IL_0019: ldc.i4.3
		IL_001a: ldc.i4.1
		IL_001b: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabComponents>::.ctor(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArrayOptions)
		IL_0020: ldloca.s 3
		IL_0022: ldc.i4 340
		IL_0027: ldc.i4.3
		IL_0028: ldc.i4.1
		IL_0029: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Zones.ZoneType>::.ctor(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArrayOptions)
		IL_002e: ldloca.s 4
		IL_0030: ldc.i4.3
		IL_0031: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_0036: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification>::.ctor(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_003b: ldloca.s 17
		IL_003d: initobj Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob
		IL_0043: ldloca.s 17
		IL_0045: ldarg.0
		IL_0046: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_004b: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_0050: ldarg.0
		IL_0051: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0056: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_005b: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob::m_EntityType
		IL_0060: ldloca.s 17
		IL_0062: ldarg.0
		IL_0063: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0068: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_PrefabData_RO_ComponentTypeHandle
		IL_006d: ldarg.0
		IL_006e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0073: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0078: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob::m_PrefabDataType
		IL_007d: ldloca.s 17
		IL_007f: ldarg.0
		IL_0080: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0085: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.Locked> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_Locked_RO_ComponentTypeHandle
		IL_008a: ldarg.0
		IL_008b: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0090: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.Locked>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0095: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.Locked> Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob::m_LockedType
		IL_009a: ldloca.s 17
		IL_009c: ldarg.0
		IL_009d: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_00a2: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PlacedSignatureBuildingData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_PlacedSignatureBuildingData_RO_ComponentTypeHandle
		IL_00a7: ldarg.0
		IL_00a8: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00ad: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PlacedSignatureBuildingData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00b2: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PlacedSignatureBuildingData> Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob::m_PlacedSignatureType
		IL_00b7: ldloca.s 17
		IL_00b9: ldloc.1
		IL_00ba: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob::m_PrefabArray
		IL_00bf: ldloca.s 17
		IL_00c1: ldloc.2
		IL_00c2: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabComponents> Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob::m_PrefabComponents
		IL_00c7: ldloc.s 17
		IL_00c9: stloc.s 5
		IL_00cb: ldloca.s 18
		IL_00cd: initobj Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob
		IL_00d3: ldloca.s 18
		IL_00d5: ldarg.0
		IL_00d6: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_00db: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_00e0: ldarg.0
		IL_00e1: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00e6: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00eb: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_EntityType
		IL_00f0: ldloca.s 18
		IL_00f2: ldarg.0
		IL_00f3: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_00f8: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_PrefabData_RO_ComponentTypeHandle
		IL_00fd: ldarg.0
		IL_00fe: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0103: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0108: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_PrefabDataType
		IL_010d: ldloca.s 18
		IL_010f: ldarg.0
		IL_0110: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0115: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.SignatureBuildingData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_SignatureBuildingData_RO_ComponentTypeHandle
		IL_011a: ldarg.0
		IL_011b: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0120: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.SignatureBuildingData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0125: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.SignatureBuildingData> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_SignatureBuildingType
		IL_012a: ldloca.s 18
		IL_012c: ldarg.0
		IL_012d: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0132: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PlacedSignatureBuildingData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_PlacedSignatureBuildingData_RO_ComponentTypeHandle
		IL_0137: ldarg.0
		IL_0138: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_013d: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PlacedSignatureBuildingData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0142: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PlacedSignatureBuildingData> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_PlacedSignatureBuildingType
		IL_0147: ldloca.s 18
		IL_0149: ldarg.0
		IL_014a: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_014f: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.LoadedIndex> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_LoadedIndex_RO_BufferTypeHandle
		IL_0154: ldarg.0
		IL_0155: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_015a: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.LoadedIndex>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_015f: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.LoadedIndex> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_LoadedIndexType
		IL_0164: ldloca.s 18
		IL_0166: ldarg.0
		IL_0167: ldfld class Game.Serialization.LoadGameSystem Game.Serialization.ResolvePrefabsSystem::m_LoadGameSystem
		IL_016c: callvirt instance valuetype [Colossal.Core]Colossal.Serialization.Entities.Context Game.Serialization.LoadGameSystem::get_context()
		IL_0171: stfld valuetype [Colossal.Core]Colossal.Serialization.Entities.Context Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_Context
		IL_0176: ldloca.s 18
		IL_0178: ldloc.2
		IL_0179: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabComponents> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_PrefabComponents
		IL_017e: ldloca.s 18
		IL_0180: ldarg.0
		IL_0181: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0186: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.Locked> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_Locked_RW_ComponentTypeHandle
		IL_018b: ldarg.0
		IL_018c: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0191: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.Locked>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0196: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.Locked> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_LockedType
		IL_019b: ldloca.s 18
		IL_019d: ldloc.1
		IL_019e: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_PrefabArray
		IL_01a3: ldloca.s 18
		IL_01a5: ldloca.s 4
		IL_01a7: call instance valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<!0> valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification>::AsParallelWriter()
		IL_01ac: stfld valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification> Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob::m_ComponentModifications
		IL_01b1: ldloc.s 18
		IL_01b3: stloc.s 6
		IL_01b5: ldloca.s 19
		IL_01b7: initobj Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob
		IL_01bd: ldloca.s 19
		IL_01bf: ldarg.0
		IL_01c0: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_01c5: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_PrefabData_RO_ComponentTypeHandle
		IL_01ca: ldarg.0
		IL_01cb: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_01d0: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_01d5: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob::m_PrefabDataType
		IL_01da: ldloca.s 19
		IL_01dc: ldarg.0
		IL_01dd: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_01e2: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.LoadedIndex> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_LoadedIndex_RO_BufferTypeHandle
		IL_01e7: ldarg.0
		IL_01e8: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_01ed: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.LoadedIndex>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_01f2: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.LoadedIndex> Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob::m_LoadedIndexType
		IL_01f7: ldloca.s 19
		IL_01f9: ldloc.1
		IL_01fa: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob::m_PrefabArray
		IL_01ff: ldloca.s 19
		IL_0201: ldarg.0
		IL_0202: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0207: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_020c: ldarg.0
		IL_020d: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0212: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0217: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob::m_EntityType
		IL_021c: ldloca.s 19
		IL_021e: ldarg.0
		IL_021f: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0224: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Simulation.CollectedCityServiceBudgetData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Simulation_CollectedCityServiceBudgetData_RW_ComponentLookup
		IL_0229: ldarg.0
		IL_022a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_022f: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Simulation.CollectedCityServiceBudgetData>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0234: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Simulation.CollectedCityServiceBudgetData> Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob::m_Budgets
		IL_0239: ldloca.s 19
		IL_023b: ldarg.0
		IL_023c: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0241: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Simulation.CollectedCityServiceFeeData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Simulation_CollectedCityServiceFeeData_RW_BufferLookup
		IL_0246: ldarg.0
		IL_0247: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_024c: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Simulation.CollectedCityServiceFeeData>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0251: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Simulation.CollectedCityServiceFeeData> Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob::m_Fees
		IL_0256: ldloca.s 19
		IL_0258: ldarg.0
		IL_0259: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_025e: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Simulation.CollectedCityServiceUpkeepData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Simulation_CollectedCityServiceUpkeepData_RW_BufferLookup
		IL_0263: ldarg.0
		IL_0264: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0269: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Simulation.CollectedCityServiceUpkeepData>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_026e: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Simulation.CollectedCityServiceUpkeepData> Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob::m_Upkeeps
		IL_0273: ldloc.s 19
		IL_0275: stloc.s 7
		IL_0277: ldloca.s 20
		IL_0279: initobj Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob
		IL_027f: ldloca.s 20
		IL_0281: ldarg.0
		IL_0282: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_0287: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
		IL_028c: ldarg.0
		IL_028d: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0292: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0297: stfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob::m_EntityType
		IL_029c: ldloca.s 20
		IL_029e: ldarg.0
		IL_029f: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_02a4: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_PrefabData_RO_ComponentTypeHandle
		IL_02a9: ldarg.0
		IL_02aa: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02af: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02b4: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob::m_PrefabDataType
		IL_02b9: ldloca.s 20
		IL_02bb: ldarg.0
		IL_02bc: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_02c1: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.ZoneData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_ZoneData_RO_ComponentTypeHandle
		IL_02c6: ldarg.0
		IL_02c7: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02cc: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.ZoneData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02d1: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.ZoneData> Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob::m_ZoneDataType
		IL_02d6: ldloca.s 20
		IL_02d8: ldarg.0
		IL_02d9: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_02de: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.ZoneData> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Prefabs_ZoneData_RO_ComponentLookup
		IL_02e3: ldarg.0
		IL_02e4: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_02e9: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Prefabs.ZoneData>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_02ee: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.ZoneData> Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob::m_ZoneData
		IL_02f3: ldloca.s 20
		IL_02f5: ldloc.1
		IL_02f6: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob::m_PrefabArray
		IL_02fb: ldloca.s 20
		IL_02fd: ldloc.3
		IL_02fe: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Zones.ZoneType> Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob::m_ZoneTypeArray
		IL_0303: ldloc.s 20
		IL_0305: stloc.s 8
		IL_0307: ldloca.s 21
		IL_0309: initobj Game.Serialization.ResolvePrefabsSystem/FixZoneTypeJob
		IL_030f: ldloca.s 21
		IL_0311: ldloc.3
		IL_0312: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Zones.ZoneType> Game.Serialization.ResolvePrefabsSystem/FixZoneTypeJob::m_ZoneTypeArray
		IL_0317: ldloca.s 21
		IL_0319: ldarg.0
		IL_031a: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_031f: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Zones.Cell> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Zones_Cell_RW_BufferTypeHandle
		IL_0324: ldarg.0
		IL_0325: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_032a: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Zones.Cell>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_032f: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Zones.Cell> Game.Serialization.ResolvePrefabsSystem/FixZoneTypeJob::m_CellType
		IL_0334: ldloca.s 21
		IL_0336: ldarg.0
		IL_0337: ldflda valuetype Game.Serialization.ResolvePrefabsSystem/TypeHandle Game.Serialization.ResolvePrefabsSystem::__TypeHandle
		IL_033c: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Zones.VacantLot> Game.Serialization.ResolvePrefabsSystem/TypeHandle::__Game_Zones_VacantLot_RW_BufferTypeHandle
		IL_0341: ldarg.0
		IL_0342: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0347: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Zones.VacantLot>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_034c: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Zones.VacantLot> Game.Serialization.ResolvePrefabsSystem/FixZoneTypeJob::m_VacantLotType
		IL_0351: ldloc.s 21
		IL_0353: ldloc.s 5
		IL_0355: ldarg.0
		IL_0356: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_EnabledLoadedPrefabQuery
		IL_035b: ldarg.0
		IL_035c: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
		IL_0361: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Serialization.ResolvePrefabsSystem/FillLoadedPrefabsJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0366: stloc.s 9
		IL_0368: call void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::ScheduleBatchedJobs()
		IL_036d: ldarg.0
		IL_036e: ldfld class Game.Prefabs.PrefabSystem Game.Serialization.ResolvePrefabsSystem::m_PrefabSystem
		IL_0373: callvirt instance void Game.Prefabs.PrefabSystem::UpdateLoadedIndices()
		IL_0378: ldloc.s 7
		IL_037a: ldarg.0
		IL_037b: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_ActualBudgetQuery
		IL_0380: ldloc.s 9
		IL_0382: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Serialization.ResolvePrefabsSystem/CopyBudgetDataJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0387: stloc.s 10
		IL_0389: ldloc.s 6
		IL_038b: ldarg.0
		IL_038c: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_ActualPrefabQuery
		IL_0391: ldloc.s 10
		IL_0393: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Serialization.ResolvePrefabsSystem/CheckActualPrefabsJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0398: stloc.s 11
		IL_039a: ldloc.s 8
		IL_039c: ldarg.0
		IL_039d: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_LoadedZonePrefabQuery
		IL_03a2: ldloc.s 11
		IL_03a4: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Serialization.ResolvePrefabsSystem/FillZoneTypeArrayJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_03a9: stloc.s 12
		IL_03ab: ldarg.0
		IL_03ac: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_LoadedZoneCellQuery
		IL_03b1: ldloc.s 12
		IL_03b3: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.JobChunkExtensions::ScheduleParallel<valuetype Game.Serialization.ResolvePrefabsSystem/FixZoneTypeJob>(!!0, valuetype [Unity.Entities]Unity.Entities.EntityQuery, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_03b8: stloc.s 13
		IL_03ba: ldloca.s 12
		IL_03bc: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_03c1: ldarg.0
		IL_03c2: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_03c7: stloc.s 22
		IL_03c9: ldloca.s 22
		IL_03cb: ldarg.0
		IL_03cc: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_ActualPrefabQuery
		IL_03d1: ldc.i4.0
		IL_03d2: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentEnabled<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.EntityQuery, bool)
		IL_03d7: ldarg.0
		IL_03d8: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_03dd: stloc.s 22
		IL_03df: ldloca.s 22
		IL_03e1: ldarg.0
		IL_03e2: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_EnabledLoadedPrefabQuery
		IL_03e7: ldc.i4.0
		IL_03e8: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentEnabled<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.EntityQuery, bool)
		IL_03ed: ldarg.0
		IL_03ee: ldfld class Game.Serialization.CheckPrefabReferencesSystem Game.Serialization.ResolvePrefabsSystem::m_CheckPrefabReferencesSystem
		IL_03f3: ldloc.1
		IL_03f4: ldc.i4.1
		IL_03f5: ldloc.s 13
		IL_03f7: callvirt instance void Game.Serialization.CheckPrefabReferencesSystem::BeginPrefabCheck(valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>, bool, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_03fc: ldarg.0
		IL_03fd: ldfld class Game.UpdateSystem Game.Serialization.ResolvePrefabsSystem::m_UpdateSystem
		IL_0402: ldc.i4.s 30
		IL_0404: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase)
		IL_0409: ldarg.0
		IL_040a: ldfld class Game.Serialization.CheckPrefabReferencesSystem Game.Serialization.ResolvePrefabsSystem::m_CheckPrefabReferencesSystem
		IL_040f: ldloca.s 14
		IL_0411: callvirt instance void Game.Serialization.CheckPrefabReferencesSystem::EndPrefabCheck(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_0416: ldloca.s 14
		IL_0418: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_041d: ldarg.0
		IL_041e: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_0423: stloc.s 22
		IL_0425: ldloca.s 22
		IL_0427: ldarg.0
		IL_0428: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_ActualPrefabQuery
		IL_042d: ldc.i4.1
		IL_042e: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentEnabled<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.EntityQuery, bool)
		IL_0433: ldarg.0
		IL_0434: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_EnabledLoadedPrefabQuery
		IL_0439: ldc.i4.3
		IL_043a: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_043f: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.EntityQuery::ToEntityArray(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_0444: stloc.s 15
		IL_0446: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Prefabs.PlacedSignatureBuildingData>()
		IL_044b: stloc.s 16
		// loop start (head: IL_044d)
			IL_044d: ldloca.s 4
			IL_044f: ldloca.s 23
			IL_0451: call instance bool valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification>::TryDequeue(!0&)
			IL_0456: brfalse.s IL_0465

			IL_0458: ldarg.0
			IL_0459: ldloc.s 23
			IL_045b: ldc.i4.2
			IL_045c: ldloc.s 16
			IL_045e: call instance void Game.Serialization.ResolvePrefabsSystem::AddOrRemoveComponent(valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification, valuetype Game.Prefabs.PrefabComponents, valuetype [Unity.Entities]Unity.Entities.ComponentType)
			IL_0463: br.s IL_044d
		// end loop

		IL_0465: ldloca.s 15
		IL_0467: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
		IL_046c: brfalse IL_050c

		IL_0471: ldarg.0
		IL_0472: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_0477: stloc.s 22
		IL_0479: ldloca.s 22
		IL_047b: ldloc.s 15
		IL_047d: call instance void [Unity.Entities]Unity.Entities.EntityManager::AddComponent<valuetype Game.Prefabs.LoadedIndex>(valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)
		IL_0482: ldc.i4.0
		IL_0483: stloc.s 24
		IL_0485: br.s IL_04fe
		// loop start (head: IL_04fe)
			IL_0487: ldloca.s 15
			IL_0489: ldloc.s 24
			IL_048b: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
			IL_0490: stloc.s 25
			IL_0492: ldarg.0
			IL_0493: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_0498: stloc.s 22
			IL_049a: ldloca.s 22
			IL_049c: ldloc.s 25
			IL_049e: call instance !!0 [Unity.Entities]Unity.Entities.EntityManager::GetComponentData<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_04a3: stloc.s 26
			IL_04a5: ldarg.0
			IL_04a6: ldfld class Game.Prefabs.PrefabSystem Game.Serialization.ResolvePrefabsSystem::m_PrefabSystem
			IL_04ab: ldloc.s 26
			IL_04ad: ldfld int32 Game.Prefabs.PrefabData::m_Index
			IL_04b2: callvirt instance valuetype Game.Prefabs.PrefabID Game.Prefabs.PrefabSystem::GetLoadedObsoleteID(int32)
			IL_04b7: stloc.s 27
			IL_04b9: ldloca.s 26
			IL_04bb: ldc.i4.m1
			IL_04bc: ldloc.s 24
			IL_04be: sub
			IL_04bf: stfld int32 Game.Prefabs.PrefabData::m_Index
			IL_04c4: ldarg.0
			IL_04c5: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_04ca: stloc.s 22
			IL_04cc: ldloca.s 22
			IL_04ce: ldloc.s 25
			IL_04d0: ldloc.s 26
			IL_04d2: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentData<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_04d7: ldarg.0
			IL_04d8: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_04dd: stloc.s 22
			IL_04df: ldloca.s 22
			IL_04e1: ldloc.s 25
			IL_04e3: ldc.i4.0
			IL_04e4: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentEnabled<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.Entity, bool)
			IL_04e9: ldarg.0
			IL_04ea: ldfld class Game.Prefabs.PrefabSystem Game.Serialization.ResolvePrefabsSystem::m_PrefabSystem
			IL_04ef: ldloc.s 25
			IL_04f1: ldloc.s 27
			IL_04f3: callvirt instance void Game.Prefabs.PrefabSystem::AddObsoleteID(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.PrefabID)
			IL_04f8: ldloc.s 24
			IL_04fa: ldc.i4.1
			IL_04fb: add
			IL_04fc: stloc.s 24

			IL_04fe: ldloc.s 24
			IL_0500: ldloca.s 15
			IL_0502: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
			IL_0507: blt IL_0487
		// end loop

		IL_050c: ldarg.0
		IL_050d: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_0512: stloc.s 22
		IL_0514: ldloca.s 22
		IL_0516: ldarg.0
		IL_0517: ldfld valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Serialization.ResolvePrefabsSystem::m_AllLoadedPrefabQuery
		IL_051c: call instance void [Unity.Entities]Unity.Entities.EntityManager::DestroyEntity(valuetype [Unity.Entities]Unity.Entities.EntityQuery)
		IL_0521: ldloca.s 1
		IL_0523: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Dispose()
		IL_0528: ldloca.s 2
		IL_052a: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabComponents>::Dispose()
		IL_052f: ldloca.s 3
		IL_0531: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Zones.ZoneType>::Dispose()
		IL_0536: ldloca.s 4
		IL_0538: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype Game.Serialization.ResolvePrefabsSystem/ComponentModification>::Dispose()
		IL_053d: ldloca.s 15
		IL_053f: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Dispose()
		IL_0544: ret
	} // end of method ResolvePrefabsSystem::OnUpdate
