// Game.Prefabs.ReplacePrefabSystem+Finalize::OnUpdate 0x06008860
		.method family hidebysig virtual 
			instance void OnUpdate () cil managed 
		{
			.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
				01 00 00 00
			)
			// Method begins at RVA 0x500038
			// Header size: 12
			// Code size: 1274 (0x4fa)
			.maxstack 4
			.locals init (
				[0] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[1] class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>,
				[2] class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>,
				[3] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1/Enumerator<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh>,
				[4] valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh,
				[5] valuetype [Unity.Entities]Unity.Entities.Entity,
				[6] valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer,
				[7] valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob,
				[8] valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob,
				[9] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[10] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
				[11] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
				[12] valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob,
				[13] valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob,
				[14] int32,
				[15] valuetype [Unity.Entities]Unity.Entities.Entity,
				[16] valuetype [Unity.Entities]Unity.Entities.EntityManager
			)

			IL_0000: ldarg.0
			IL_0001: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_0006: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem::m_UpdateInstances
			IL_000b: ldc.i4.3
			IL_000c: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
			IL_0011: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!0> valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity>::ToArray(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
			IL_0016: stloc.0
			IL_0017: ldarg.0
			IL_0018: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_001d: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh> Game.Prefabs.ReplacePrefabSystem::m_MeshReplaces
			IL_0022: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh>::get_Length()
			IL_0027: brfalse IL_00f4

			IL_002c: ldarg.0
			IL_002d: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_0032: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh> Game.Prefabs.ReplacePrefabSystem::m_MeshReplaces
			IL_0037: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1/Enumerator<!0> valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh>::GetEnumerator()
			IL_003c: stloc.3
			.try
			{
				IL_003d: br.s IL_0066
				// loop start (head: IL_0066)
					IL_003f: ldloca.s 3
					IL_0041: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1/Enumerator<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh>::get_Current()
					IL_0046: stloc.s 4
					IL_0048: ldarg.0
					IL_0049: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
					IL_004e: ldfld class Game.Rendering.ManagedBatchSystem Game.Prefabs.ReplacePrefabSystem::m_ManagedBatchSystem
					IL_0053: ldloc.s 4
					IL_0055: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/ReplaceMesh::m_OldMesh
					IL_005a: ldloc.s 4
					IL_005c: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/ReplaceMesh::m_NewMesh
					IL_0061: callvirt instance void Game.Rendering.ManagedBatchSystem::RemoveMesh(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)

					IL_0066: ldloca.s 3
					IL_0068: call instance bool valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1/Enumerator<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh>::MoveNext()
					IL_006d: brtrue.s IL_003f
				// end loop

				IL_006f: leave.s IL_007f
			} // end .try
			finally
			{
				IL_0071: ldloca.s 3
				IL_0073: constrained. valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1/Enumerator<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh>
				IL_0079: callvirt instance void [mscorlib]System.IDisposable::Dispose()
				IL_007e: endfinally
			} // end handler

			IL_007f: ldarg.0
			IL_0080: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_0085: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh> Game.Prefabs.ReplacePrefabSystem::m_MeshReplaces
			IL_008a: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Prefabs.ReplacePrefabSystem/ReplaceMesh>::Clear()
			IL_008f: ldarg.0
			IL_0090: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_0095: ldfld class Game.Rendering.ManagedBatchSystem Game.Prefabs.ReplacePrefabSystem::m_ManagedBatchSystem
			IL_009a: callvirt instance void Game.Rendering.ManagedBatchSystem::ResetSharedMeshes()
			IL_009f: newobj instance void class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::.ctor()
			IL_00a4: stloc.1
			IL_00a5: newobj instance void class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::.ctor()
			IL_00aa: stloc.2
			IL_00ab: ldloc.1
			IL_00ac: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Objects.Stack>()
			IL_00b1: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
			IL_00b6: pop
			IL_00b7: ldloc.1
			IL_00b8: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Rendering.MeshColor>()
			IL_00bd: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
			IL_00c2: pop
			IL_00c3: ldloc.1
			IL_00c4: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Rendering.MeshGroup>()
			IL_00c9: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
			IL_00ce: pop
			// loop start (head: IL_00cf)
				IL_00cf: ldarg.0
				IL_00d0: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
				IL_00d5: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem::m_UpdateInstances
				IL_00da: ldloca.s 5
				IL_00dc: call instance bool valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity>::TryDequeue(!0&)
				IL_00e1: brfalse.s IL_00f4

				IL_00e3: ldarg.0
				IL_00e4: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
				IL_00e9: ldloc.s 5
				IL_00eb: ldloc.1
				IL_00ec: ldloc.2
				IL_00ed: callvirt instance void Game.Prefabs.ReplacePrefabSystem::CheckInstanceComponents(valuetype [Unity.Entities]Unity.Entities.Entity, class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>, class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>)
				IL_00f2: br.s IL_00cf
			// end loop

			IL_00f4: ldarg.0
			IL_00f5: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_00fa: ldflda valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData> Game.Prefabs.ReplacePrefabSystem::m_ReplacePrefabData
			IL_00ff: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData>::get_Count()
			IL_0104: brfalse IL_04d2

			IL_0109: ldloca.s 6
			IL_010b: ldc.i4.3
			IL_010c: ldc.i4.0
			IL_010d: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::.ctor(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator, valuetype [Unity.Entities]Unity.Entities.PlaybackPolicy)
			IL_0112: ldloca.s 12
			IL_0114: initobj Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob
			IL_011a: ldloca.s 12
			IL_011c: ldarg.0
			IL_011d: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0122: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubArea> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubArea_RO_BufferLookup
			IL_0127: ldarg.0
			IL_0128: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_012d: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubArea>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0132: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubArea> Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob::m_PrefabSubAreas
			IL_0137: ldloca.s 12
			IL_0139: ldarg.0
			IL_013a: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_013f: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubAreaNode> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubAreaNode_RO_BufferLookup
			IL_0144: ldarg.0
			IL_0145: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_014a: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubAreaNode>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_014f: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubAreaNode> Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob::m_PrefabSubAreaNodes
			IL_0154: ldloca.s 12
			IL_0156: ldarg.0
			IL_0157: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_015c: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubNet> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubNet_RO_BufferLookup
			IL_0161: ldarg.0
			IL_0162: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0167: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubNet>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_016c: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubNet> Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob::m_PrefabSubNets
			IL_0171: ldloca.s 12
			IL_0173: ldarg.0
			IL_0174: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0179: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubLane> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubLane_RO_BufferLookup
			IL_017e: ldarg.0
			IL_017f: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0184: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubLane>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0189: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubLane> Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob::m_PrefabSubLanes
			IL_018e: ldloca.s 12
			IL_0190: ldarg.0
			IL_0191: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_0196: ldfld valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData> Game.Prefabs.ReplacePrefabSystem::m_ReplacePrefabData
			IL_019b: stfld valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData> Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob::m_ReplacePrefabData
			IL_01a0: ldloc.s 12
			IL_01a2: stloc.s 7
			IL_01a4: ldloca.s 13
			IL_01a6: initobj Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob
			IL_01ac: ldloca.s 13
			IL_01ae: ldarg.0
			IL_01af: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_01b4: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Deleted> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Common_Deleted_RO_ComponentLookup
			IL_01b9: ldarg.0
			IL_01ba: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_01bf: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Common.Deleted>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_01c4: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Deleted> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_DeletedData
			IL_01c9: ldloca.s 13
			IL_01cb: ldarg.0
			IL_01cc: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_01d1: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Common_Owner_RO_ComponentLookup
			IL_01d6: ldarg.0
			IL_01d7: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_01dc: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Common.Owner>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_01e1: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_OwnerData
			IL_01e6: ldloca.s 13
			IL_01e8: ldarg.0
			IL_01e9: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_01ee: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Tools_Temp_RO_ComponentLookup
			IL_01f3: ldarg.0
			IL_01f4: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_01f9: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_01fe: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_TempData
			IL_0203: ldloca.s 13
			IL_0205: ldarg.0
			IL_0206: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_020b: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.EditorContainer> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Tools_EditorContainer_RO_ComponentLookup
			IL_0210: ldarg.0
			IL_0211: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0216: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Tools.EditorContainer>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_021b: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.EditorContainer> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_EditorContainerData
			IL_0220: ldloca.s 13
			IL_0222: ldarg.0
			IL_0223: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0228: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Objects.Transform> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Objects_Transform_RO_ComponentLookup
			IL_022d: ldarg.0
			IL_022e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0233: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Objects.Transform>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0238: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Objects.Transform> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_TransformData
			IL_023d: ldloca.s 13
			IL_023f: ldarg.0
			IL_0240: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0245: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Buildings.ServiceUpgrade> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Buildings_ServiceUpgrade_RO_ComponentLookup
			IL_024a: ldarg.0
			IL_024b: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0250: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Buildings.ServiceUpgrade>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0255: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Buildings.ServiceUpgrade> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_ServiceUpgradeData
			IL_025a: ldloca.s 13
			IL_025c: ldarg.0
			IL_025d: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0262: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Edge> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Net_Edge_RO_ComponentLookup
			IL_0267: ldarg.0
			IL_0268: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_026d: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Net.Edge>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0272: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Edge> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_EdgeData
			IL_0277: ldloca.s 13
			IL_0279: ldarg.0
			IL_027a: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_027f: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabRef> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_PrefabRef_RO_ComponentLookup
			IL_0284: ldarg.0
			IL_0285: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_028a: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Prefabs.PrefabRef>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_028f: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabRef> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabRefData
			IL_0294: ldloca.s 13
			IL_0296: ldarg.0
			IL_0297: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_029c: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.SpawnableObjectData> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SpawnableObjectData_RO_ComponentLookup
			IL_02a1: ldarg.0
			IL_02a2: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_02a7: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Prefabs.SpawnableObjectData>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_02ac: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.SpawnableObjectData> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabSpawnableObjectData
			IL_02b1: ldloca.s 13
			IL_02b3: ldarg.0
			IL_02b4: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_02b9: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.NetGeometryData> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_NetGeometryData_RO_ComponentLookup
			IL_02be: ldarg.0
			IL_02bf: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_02c4: call valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentLookup<valuetype Game.Prefabs.NetGeometryData>(valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_02c9: stfld valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.NetGeometryData> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabNetGeometryData
			IL_02ce: ldloca.s 13
			IL_02d0: ldarg.0
			IL_02d1: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_02d6: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Objects.SubObject> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Objects_SubObject_RO_BufferLookup
			IL_02db: ldarg.0
			IL_02dc: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_02e1: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Objects.SubObject>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_02e6: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Objects.SubObject> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_SubObjects
			IL_02eb: ldloca.s 13
			IL_02ed: ldarg.0
			IL_02ee: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_02f3: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Areas.SubArea> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Areas_SubArea_RO_BufferLookup
			IL_02f8: ldarg.0
			IL_02f9: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_02fe: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Areas.SubArea>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0303: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Areas.SubArea> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_SubAreas
			IL_0308: ldloca.s 13
			IL_030a: ldarg.0
			IL_030b: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0310: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Net_SubNet_RO_BufferLookup
			IL_0315: ldarg.0
			IL_0316: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_031b: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.SubNet>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0320: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_SubNets
			IL_0325: ldloca.s 13
			IL_0327: ldarg.0
			IL_0328: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_032d: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Net_ConnectedEdge_RO_BufferLookup
			IL_0332: ldarg.0
			IL_0333: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0338: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_033d: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_ConnectedEdges
			IL_0342: ldloca.s 13
			IL_0344: ldarg.0
			IL_0345: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_034a: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubArea> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubArea_RO_BufferLookup
			IL_034f: ldarg.0
			IL_0350: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0355: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubArea>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_035a: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubArea> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabSubAreas
			IL_035f: ldloca.s 13
			IL_0361: ldarg.0
			IL_0362: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0367: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubAreaNode> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubAreaNode_RO_BufferLookup
			IL_036c: ldarg.0
			IL_036d: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0372: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubAreaNode>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0377: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubAreaNode> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabSubAreaNodes
			IL_037c: ldloca.s 13
			IL_037e: ldarg.0
			IL_037f: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_0384: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubNet> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubNet_RO_BufferLookup
			IL_0389: ldarg.0
			IL_038a: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_038f: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubNet>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0394: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubNet> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabSubNets
			IL_0399: ldloca.s 13
			IL_039b: ldarg.0
			IL_039c: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_03a1: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubLane> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_SubLane_RO_BufferLookup
			IL_03a6: ldarg.0
			IL_03a7: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_03ac: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.SubLane>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_03b1: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.SubLane> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabSubLanes
			IL_03b6: ldloca.s 13
			IL_03b8: ldarg.0
			IL_03b9: ldflda valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle Game.Prefabs.ReplacePrefabSystem/Finalize::__TypeHandle
			IL_03be: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.PlaceholderObjectElement> Game.Prefabs.ReplacePrefabSystem/Finalize/TypeHandle::__Game_Prefabs_PlaceholderObjectElement_RO_BufferLookup
			IL_03c3: ldarg.0
			IL_03c4: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_03c9: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.PlaceholderObjectElement>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_03ce: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.PlaceholderObjectElement> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_PrefabPlaceholderElements
			IL_03d3: ldloca.s 13
			IL_03d5: ldarg.0
			IL_03d6: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_03db: ldfld class Game.Tools.ToolSystem Game.Prefabs.ReplacePrefabSystem::m_ToolSystem
			IL_03e0: callvirt instance valuetype Game.GameMode Game.Tools.ToolSystem::get_actionMode()
			IL_03e5: call bool Game.GameModeExtensions::IsEditor(valuetype Game.GameMode)
			IL_03ea: stfld bool Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_EditorMode
			IL_03ef: ldloca.s 13
			IL_03f1: ldarg.0
			IL_03f2: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_03f7: ldfld class Game.City.CityConfigurationSystem Game.Prefabs.ReplacePrefabSystem::m_CityConfigurationSystem
			IL_03fc: callvirt instance bool Game.City.CityConfigurationSystem::get_leftHandTraffic()
			IL_0401: stfld bool Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_LefthandTraffic
			IL_0406: ldloca.s 13
			IL_0408: call valuetype Game.Common.RandomSeed Game.Common.RandomSeed::Next()
			IL_040d: stfld valuetype Game.Common.RandomSeed Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_RandomSeed
			IL_0412: ldloca.s 13
			IL_0414: ldloc.0
			IL_0415: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_Instances
			IL_041a: ldloca.s 13
			IL_041c: ldarg.0
			IL_041d: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_0422: ldfld valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData> Game.Prefabs.ReplacePrefabSystem::m_ReplacePrefabData
			IL_0427: stfld valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData> Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_ReplacePrefabData
			IL_042c: ldloca.s 13
			IL_042e: ldloca.s 6
			IL_0430: call instance valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter [Unity.Entities]Unity.Entities.EntityCommandBuffer::AsParallelWriter()
			IL_0435: stfld valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_CommandBuffer
			IL_043a: ldloc.s 13
			IL_043c: stloc.s 8
			IL_043e: ldarg.0
			IL_043f: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Prefabs.ReplacePrefabSystem/Finalize::m_LaneContainerQuery
			IL_0444: ldc.i4.2
			IL_0445: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
			IL_044a: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.EntityQuery::ToEntityArray(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
			IL_044f: stloc.s 9
			IL_0451: ldc.i4.0
			IL_0452: stloc.s 14
			IL_0454: br.s IL_0483
			// loop start (head: IL_0483)
				IL_0456: ldloca.s 9
				IL_0458: ldloc.s 14
				IL_045a: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
				IL_045f: stloc.s 15
				IL_0461: ldarg.0
				IL_0462: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
				IL_0467: stloc.s 16
				IL_0469: ldloca.s 16
				IL_046b: ldloc.s 15
				IL_046d: call instance bool [Unity.Entities]Unity.Entities.EntityManager::HasComponent<valuetype Game.Prefabs.NetData>(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0472: brfalse.s IL_047d

				IL_0474: ldloca.s 8
				IL_0476: ldloc.s 15
				IL_0478: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob::m_LaneContainer

				IL_047d: ldloc.s 14
				IL_047f: ldc.i4.1
				IL_0480: add
				IL_0481: stloc.s 14

				IL_0483: ldloc.s 14
				IL_0485: ldloca.s 9
				IL_0487: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
				IL_048c: blt.s IL_0456
			// end loop

			IL_048e: ldloca.s 9
			IL_0490: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Dispose()
			IL_0495: ldloc.s 7
			IL_0497: ldarg.0
			IL_0498: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
			IL_049d: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobExtensions::Schedule<valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/CheckPrefabReplacesJob>(!!0, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
			IL_04a2: stloc.s 10
			IL_04a4: ldloc.s 8
			IL_04a6: ldloca.s 0
			IL_04a8: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
			IL_04ad: ldc.i4.1
			IL_04ae: ldloc.s 10
			IL_04b0: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobParallelForExtensions::Schedule<valuetype Game.Prefabs.ReplacePrefabSystem/Finalize/UpdateInstanceElementsJob>(!!0, int32, int32, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
			IL_04b5: stloc.s 11
			IL_04b7: ldloca.s 11
			IL_04b9: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
			IL_04be: ldloca.s 6
			IL_04c0: ldarg.0
			IL_04c1: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_04c6: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::Playback(valuetype [Unity.Entities]Unity.Entities.EntityManager)
			IL_04cb: ldloca.s 6
			IL_04cd: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::Dispose()

			IL_04d2: ldloca.s 0
			IL_04d4: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Dispose()
			IL_04d9: ldarg.0
			IL_04da: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_04df: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.ReplacePrefabSystem::m_UpdateInstances
			IL_04e4: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Clear()
			IL_04e9: ldarg.0
			IL_04ea: ldfld class Game.Prefabs.ReplacePrefabSystem Game.Prefabs.ReplacePrefabSystem/Finalize::m_ReplacePrefabSystem
			IL_04ef: ldflda valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData> Game.Prefabs.ReplacePrefabSystem::m_ReplacePrefabData
			IL_04f4: call instance void valuetype [Unity.Collections]Unity.Collections.NativeHashMap`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Prefabs.ReplacePrefabSystem/ReplacePrefabData>::Clear()
			IL_04f9: ret
		} // end of method Finalize::OnUpdate
