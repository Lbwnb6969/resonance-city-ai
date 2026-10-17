// Game.Prefabs.VehicleInitializeSystem::OnUpdate 0x06009252
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x5395ec
		// Header size: 12
		// Code size: 1542 (0x606)
		.maxstack 4
		.locals init (
			[0] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>,
			[1] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData>,
			[2] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.ObjectGeometryData>,
			[3] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.MultipleUnitTrainData>,
			[4] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.TrainData>,
			[5] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarData>,
			[6] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.SwayingData>,
			[7] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.VehicleData>,
			[8] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarTractorData>,
			[9] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarTrailerData>,
			[10] valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubMesh>,
			[11] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[12] int32,
			[13] valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk,
			[14] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>,
			[15] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.ObjectGeometryData>,
			[16] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.TrainData>,
			[17] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarData>,
			[18] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.SwayingData>,
			[19] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTractorData>,
			[20] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTrailerData>,
			[21] int32,
			[22] class Game.Prefabs.TrainPrefab,
			[23] valuetype Game.Prefabs.ObjectGeometryData,
			[24] valuetype Game.Prefabs.TrainData,
			[25] valuetype [Unity.Mathematics]Unity.Mathematics.float2,
			[26] int32,
			[27] class Game.Prefabs.VehiclePrefab,
			[28] valuetype Game.Prefabs.CarData,
			[29] valuetype Game.Prefabs.SwayingData,
			[30] class Game.Prefabs.CarBasePrefab,
			[31] class Game.Prefabs.BicyclePrefab,
			[32] int32,
			[33] class Game.Prefabs.CarTractor,
			[34] valuetype Game.Prefabs.ObjectGeometryData,
			[35] valuetype Game.Prefabs.CarTractorData,
			[36] int32,
			[37] class Game.Prefabs.CarTrailerPrefab,
			[38] valuetype Game.Prefabs.ObjectGeometryData,
			[39] valuetype Game.Prefabs.CarTrailerData,
			[40] valuetype Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob
		)

		IL_0000: ldarg.0
		IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Prefabs.VehicleInitializeSystem::m_PrefabQuery
		IL_0006: ldc.i4.3
		IL_0007: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_000c: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk> [Unity.Entities]Unity.Entities.EntityQuery::ToArchetypeChunkArray(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_0011: stloc.0
		IL_0012: ldarg.0
		IL_0013: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_0018: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_PrefabData_RO_ComponentTypeHandle
		IL_001d: ldarg.0
		IL_001e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0023: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0028: stloc.1
		IL_0029: ldarg.0
		IL_002a: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_002f: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.ObjectGeometryData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_ObjectGeometryData_RO_ComponentTypeHandle
		IL_0034: ldarg.0
		IL_0035: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_003a: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.ObjectGeometryData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_003f: stloc.2
		IL_0040: ldarg.0
		IL_0041: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_0046: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.MultipleUnitTrainData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_MultipleUnitTrainData_RO_ComponentTypeHandle
		IL_004b: ldarg.0
		IL_004c: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0051: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.MultipleUnitTrainData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0056: stloc.3
		IL_0057: ldarg.0
		IL_0058: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_005d: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.TrainData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_TrainData_RW_ComponentTypeHandle
		IL_0062: ldarg.0
		IL_0063: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0068: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.TrainData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_006d: stloc.s 4
		IL_006f: ldarg.0
		IL_0070: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_0075: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_CarData_RW_ComponentTypeHandle
		IL_007a: ldarg.0
		IL_007b: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0080: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.CarData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_0085: stloc.s 5
		IL_0087: ldarg.0
		IL_0088: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_008d: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.SwayingData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_SwayingData_RW_ComponentTypeHandle
		IL_0092: ldarg.0
		IL_0093: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_0098: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.SwayingData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_009d: stloc.s 6
		IL_009f: ldarg.0
		IL_00a0: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_00a5: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.VehicleData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_VehicleData_RW_ComponentTypeHandle
		IL_00aa: ldarg.0
		IL_00ab: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00b0: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.VehicleData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00b5: stloc.s 7
		IL_00b7: ldarg.0
		IL_00b8: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_00bd: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarTractorData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_CarTractorData_RW_ComponentTypeHandle
		IL_00c2: ldarg.0
		IL_00c3: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00c8: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.CarTractorData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00cd: stloc.s 8
		IL_00cf: ldarg.0
		IL_00d0: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_00d5: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarTrailerData> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_CarTrailerData_RW_ComponentTypeHandle
		IL_00da: ldarg.0
		IL_00db: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00e0: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.CarTrailerData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00e5: stloc.s 9
		IL_00e7: ldarg.0
		IL_00e8: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_00ed: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubMesh> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_SubMesh_RO_BufferTypeHandle
		IL_00f2: ldarg.0
		IL_00f3: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_00f8: call valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferTypeHandle<valuetype Game.Prefabs.SubMesh>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_00fd: stloc.s 10
		IL_00ff: ldarg.0
		IL_0100: call instance void [Unity.Entities]Unity.Entities.SystemBase::CompleteDependency()
		IL_0105: ldc.i4.0
		IL_0106: stloc.s 12
		IL_0108: br IL_0565
		// loop start (head: IL_0565)
			IL_010d: ldloca.s 0
			IL_010f: ldloc.s 12
			IL_0111: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::get_Item(int32)
			IL_0116: stloc.s 13
			IL_0118: ldloca.s 13
			IL_011a: ldloca.s 1
			IL_011c: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0121: stloc.s 14
			IL_0123: ldloca.s 13
			IL_0125: ldloca.s 2
			IL_0127: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.ObjectGeometryData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_012c: stloc.s 15
			IL_012e: ldloca.s 13
			IL_0130: ldloca.s 4
			IL_0132: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.TrainData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0137: stloc.s 16
			IL_0139: ldloca.s 13
			IL_013b: ldloca.s 5
			IL_013d: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.CarData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0142: stloc.s 17
			IL_0144: ldloca.s 13
			IL_0146: ldloca.s 6
			IL_0148: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.SwayingData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_014d: stloc.s 18
			IL_014f: ldloca.s 13
			IL_0151: ldloca.s 8
			IL_0153: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.CarTractorData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0158: stloc.s 19
			IL_015a: ldloca.s 13
			IL_015c: ldloca.s 9
			IL_015e: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.CarTrailerData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0163: stloc.s 20
			IL_0165: ldc.i4.0
			IL_0166: stloc.s 21
			IL_0168: br IL_0256
			// loop start (head: IL_0256)
				IL_016d: ldarg.0
				IL_016e: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.VehicleInitializeSystem::m_PrefabSystem
				IL_0173: ldloca.s 14
				IL_0175: ldloc.s 21
				IL_0177: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>::get_Item(int32)
				IL_017c: callvirt instance !!0 Game.Prefabs.PrefabSystem::GetPrefab<class Game.Prefabs.TrainPrefab>(valuetype Game.Prefabs.PrefabData)
				IL_0181: stloc.s 22
				IL_0183: ldloca.s 15
				IL_0185: ldloc.s 21
				IL_0187: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.ObjectGeometryData>::get_Item(int32)
				IL_018c: stloc.s 23
				IL_018e: ldloca.s 16
				IL_0190: ldloc.s 21
				IL_0192: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.TrainData>::get_Item(int32)
				IL_0197: stloc.s 24
				IL_0199: ldloca.s 25
				IL_019b: ldloc.s 23
				IL_019d: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Prefabs.ObjectGeometryData::m_Bounds
				IL_01a2: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::max
				IL_01a7: ldfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_01ac: ldloc.s 23
				IL_01ae: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Prefabs.ObjectGeometryData::m_Bounds
				IL_01b3: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::min
				IL_01b8: ldfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_01bd: neg
				IL_01be: call instance void [Unity.Mathematics]Unity.Mathematics.float2::.ctor(float32, float32)
				IL_01c3: ldloca.s 24
				IL_01c5: ldloc.s 22
				IL_01c7: ldfld valuetype Game.Net.TrackTypes Game.Prefabs.TrainPrefab::m_TrackType
				IL_01cc: stfld valuetype Game.Net.TrackTypes Game.Prefabs.TrainData::m_TrackType
				IL_01d1: ldloca.s 24
				IL_01d3: ldloc.s 22
				IL_01d5: ldfld valuetype Game.Vehicles.EnergyTypes Game.Prefabs.TrainPrefab::m_EnergyType
				IL_01da: stfld valuetype Game.Vehicles.EnergyTypes Game.Prefabs.TrainData::m_EnergyType
				IL_01df: ldloca.s 24
				IL_01e1: ldloc.s 22
				IL_01e3: ldfld float32 Game.Prefabs.TrainPrefab::m_MaxSpeed
				IL_01e8: ldc.r4 3.6
				IL_01ed: div
				IL_01ee: stfld float32 Game.Prefabs.TrainData::m_MaxSpeed
				IL_01f3: ldloca.s 24
				IL_01f5: ldloc.s 22
				IL_01f7: ldfld float32 Game.Prefabs.TrainPrefab::m_Acceleration
				IL_01fc: stfld float32 Game.Prefabs.TrainData::m_Acceleration
				IL_0201: ldloca.s 24
				IL_0203: ldloc.s 22
				IL_0205: ldfld float32 Game.Prefabs.TrainPrefab::m_Braking
				IL_020a: stfld float32 Game.Prefabs.TrainData::m_Braking
				IL_020f: ldloca.s 24
				IL_0211: ldloc.s 22
				IL_0213: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.TrainPrefab::m_Turning
				IL_0218: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.math::radians(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_021d: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.TrainData::m_Turning
				IL_0222: ldloca.s 24
				IL_0224: ldloc.s 22
				IL_0226: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.TrainPrefab::m_BogieOffset
				IL_022b: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.TrainData::m_BogieOffsets
				IL_0230: ldloca.s 24
				IL_0232: ldloc.s 25
				IL_0234: ldloc.s 22
				IL_0236: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.TrainPrefab::m_AttachOffset
				IL_023b: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.float2::op_Subtraction(valuetype [Unity.Mathematics]Unity.Mathematics.float2, valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_0240: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.TrainData::m_AttachOffsets
				IL_0245: ldloca.s 16
				IL_0247: ldloc.s 21
				IL_0249: ldloc.s 24
				IL_024b: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.TrainData>::set_Item(int32, !0)
				IL_0250: ldloc.s 21
				IL_0252: ldc.i4.1
				IL_0253: add
				IL_0254: stloc.s 21

				IL_0256: ldloc.s 21
				IL_0258: ldloca.s 16
				IL_025a: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.TrainData>::get_Length()
				IL_025f: blt IL_016d
			// end loop

			IL_0264: ldc.i4.0
			IL_0265: stloc.s 26
			IL_0267: br IL_03a8
			// loop start (head: IL_03a8)
				IL_026c: ldarg.0
				IL_026d: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.VehicleInitializeSystem::m_PrefabSystem
				IL_0272: ldloca.s 14
				IL_0274: ldloc.s 26
				IL_0276: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>::get_Item(int32)
				IL_027b: callvirt instance !!0 Game.Prefabs.PrefabSystem::GetPrefab<class Game.Prefabs.VehiclePrefab>(valuetype Game.Prefabs.PrefabData)
				IL_0280: stloc.s 27
				IL_0282: ldloca.s 17
				IL_0284: ldloc.s 26
				IL_0286: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarData>::get_Item(int32)
				IL_028b: stloc.s 28
				IL_028d: ldloca.s 18
				IL_028f: ldloc.s 26
				IL_0291: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.SwayingData>::get_Item(int32)
				IL_0296: stloc.s 29
				IL_0298: ldloc.s 27
				IL_029a: isinst Game.Prefabs.CarBasePrefab
				IL_029f: stloc.s 30
				IL_02a1: ldloc.s 30
				IL_02a3: brfalse.s IL_0319

				IL_02a5: ldloca.s 28
				IL_02a7: ldloc.s 30
				IL_02a9: ldfld valuetype Game.Vehicles.SizeClass Game.Prefabs.CarBasePrefab::m_SizeClass
				IL_02ae: stfld valuetype Game.Vehicles.SizeClass Game.Prefabs.CarData::m_SizeClass
				IL_02b3: ldloca.s 28
				IL_02b5: ldloc.s 30
				IL_02b7: ldfld valuetype Game.Vehicles.EnergyTypes Game.Prefabs.CarBasePrefab::m_EnergyType
				IL_02bc: stfld valuetype Game.Vehicles.EnergyTypes Game.Prefabs.CarData::m_EnergyType
				IL_02c1: ldloca.s 28
				IL_02c3: ldloc.s 30
				IL_02c5: ldfld float32 Game.Prefabs.CarBasePrefab::m_MaxSpeed
				IL_02ca: ldc.r4 3.6
				IL_02cf: div
				IL_02d0: stfld float32 Game.Prefabs.CarData::m_MaxSpeed
				IL_02d5: ldloca.s 28
				IL_02d7: ldloc.s 30
				IL_02d9: ldfld float32 Game.Prefabs.CarBasePrefab::m_Acceleration
				IL_02de: stfld float32 Game.Prefabs.CarData::m_Acceleration
				IL_02e3: ldloca.s 28
				IL_02e5: ldloc.s 30
				IL_02e7: ldfld float32 Game.Prefabs.CarBasePrefab::m_Braking
				IL_02ec: stfld float32 Game.Prefabs.CarData::m_Braking
				IL_02f1: ldloca.s 28
				IL_02f3: ldloc.s 30
				IL_02f5: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.CarBasePrefab::m_Turning
				IL_02fa: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.math::radians(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_02ff: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.CarData::m_Turning
				IL_0304: ldloca.s 29
				IL_0306: ldloc.s 30
				IL_0308: ldfld float32 Game.Prefabs.CarBasePrefab::m_Stiffness
				IL_030d: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Implicit(float32)
				IL_0312: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.SwayingData::m_SpringFactors
				IL_0317: br.s IL_038c

				IL_0319: ldloc.s 27
				IL_031b: isinst Game.Prefabs.BicyclePrefab
				IL_0320: stloc.s 31
				IL_0322: ldloc.s 31
				IL_0324: brfalse.s IL_038c

				IL_0326: ldloca.s 28
				IL_0328: ldc.i4.0
				IL_0329: stfld valuetype Game.Vehicles.SizeClass Game.Prefabs.CarData::m_SizeClass
				IL_032e: ldloca.s 28
				IL_0330: ldc.i4.0
				IL_0331: stfld valuetype Game.Vehicles.EnergyTypes Game.Prefabs.CarData::m_EnergyType
				IL_0336: ldloca.s 28
				IL_0338: ldloc.s 31
				IL_033a: ldfld float32 Game.Prefabs.BicyclePrefab::m_MaxSpeed
				IL_033f: ldc.r4 3.6
				IL_0344: div
				IL_0345: stfld float32 Game.Prefabs.CarData::m_MaxSpeed
				IL_034a: ldloca.s 28
				IL_034c: ldloc.s 31
				IL_034e: ldfld float32 Game.Prefabs.BicyclePrefab::m_Acceleration
				IL_0353: stfld float32 Game.Prefabs.CarData::m_Acceleration
				IL_0358: ldloca.s 28
				IL_035a: ldloc.s 31
				IL_035c: ldfld float32 Game.Prefabs.BicyclePrefab::m_Braking
				IL_0361: stfld float32 Game.Prefabs.CarData::m_Braking
				IL_0366: ldloca.s 28
				IL_0368: ldloc.s 31
				IL_036a: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.BicyclePrefab::m_Turning
				IL_036f: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.math::radians(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_0374: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float2 Game.Prefabs.CarData::m_Turning
				IL_0379: ldloca.s 29
				IL_037b: ldloc.s 31
				IL_037d: ldfld float32 Game.Prefabs.BicyclePrefab::m_Stiffness
				IL_0382: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Implicit(float32)
				IL_0387: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.SwayingData::m_SpringFactors

				IL_038c: ldloca.s 17
				IL_038e: ldloc.s 26
				IL_0390: ldloc.s 28
				IL_0392: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarData>::set_Item(int32, !0)
				IL_0397: ldloca.s 18
				IL_0399: ldloc.s 26
				IL_039b: ldloc.s 29
				IL_039d: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.SwayingData>::set_Item(int32, !0)
				IL_03a2: ldloc.s 26
				IL_03a4: ldc.i4.1
				IL_03a5: add
				IL_03a6: stloc.s 26

				IL_03a8: ldloc.s 26
				IL_03aa: ldloca.s 17
				IL_03ac: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarData>::get_Length()
				IL_03b1: blt IL_026c
			// end loop

			IL_03b6: ldc.i4.0
			IL_03b7: stloc.s 32
			IL_03b9: br IL_0478
			// loop start (head: IL_0478)
				IL_03be: ldarg.0
				IL_03bf: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.VehicleInitializeSystem::m_PrefabSystem
				IL_03c4: ldloca.s 14
				IL_03c6: ldloc.s 32
				IL_03c8: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>::get_Item(int32)
				IL_03cd: callvirt instance !!0 Game.Prefabs.PrefabSystem::GetPrefab<class Game.Prefabs.VehiclePrefab>(valuetype Game.Prefabs.PrefabData)
				IL_03d2: callvirt instance !!0 Game.Prefabs.ComponentBase::GetComponent<class Game.Prefabs.CarTractor>()
				IL_03d7: stloc.s 33
				IL_03d9: ldloca.s 15
				IL_03db: ldloc.s 32
				IL_03dd: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.ObjectGeometryData>::get_Item(int32)
				IL_03e2: stloc.s 34
				IL_03e4: ldloca.s 19
				IL_03e6: ldloc.s 32
				IL_03e8: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTractorData>::get_Item(int32)
				IL_03ed: stloc.s 35
				IL_03ef: ldloca.s 35
				IL_03f1: ldloc.s 33
				IL_03f3: ldfld valuetype Game.Prefabs.CarTrailerType Game.Prefabs.CarTractor::m_TrailerType
				IL_03f8: stfld valuetype Game.Prefabs.CarTrailerType Game.Prefabs.CarTractorData::m_TrailerType
				IL_03fd: ldloca.s 35
				IL_03ff: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTractorData::m_AttachPosition
				IL_0404: ldloc.s 33
				IL_0406: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTractor::m_AttachOffset
				IL_040b: call instance valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.float3::get_xy()
				IL_0410: call instance void [Unity.Mathematics]Unity.Mathematics.float3::set_xy(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_0415: ldloca.s 35
				IL_0417: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTractorData::m_AttachPosition
				IL_041c: ldloc.s 34
				IL_041e: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Prefabs.ObjectGeometryData::m_Bounds
				IL_0423: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::min
				IL_0428: ldfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_042d: ldloc.s 33
				IL_042f: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTractor::m_AttachOffset
				IL_0434: ldfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_0439: add
				IL_043a: stfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_043f: ldloc.s 33
				IL_0441: ldfld class Game.Prefabs.CarTrailerPrefab Game.Prefabs.CarTractor::m_FixedTrailer
				IL_0446: ldnull
				IL_0447: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
				IL_044c: brfalse.s IL_0467

				IL_044e: ldloca.s 35
				IL_0450: ldarg.0
				IL_0451: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.VehicleInitializeSystem::m_PrefabSystem
				IL_0456: ldloc.s 33
				IL_0458: ldfld class Game.Prefabs.CarTrailerPrefab Game.Prefabs.CarTractor::m_FixedTrailer
				IL_045d: callvirt instance valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabSystem::GetEntity(class Game.Prefabs.PrefabBase)
				IL_0462: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.CarTractorData::m_FixedTrailer

				IL_0467: ldloca.s 19
				IL_0469: ldloc.s 32
				IL_046b: ldloc.s 35
				IL_046d: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTractorData>::set_Item(int32, !0)
				IL_0472: ldloc.s 32
				IL_0474: ldc.i4.1
				IL_0475: add
				IL_0476: stloc.s 32

				IL_0478: ldloc.s 32
				IL_047a: ldloca.s 19
				IL_047c: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTractorData>::get_Length()
				IL_0481: blt IL_03be
			// end loop

			IL_0486: ldc.i4.0
			IL_0487: stloc.s 36
			IL_0489: br IL_0551
			// loop start (head: IL_0551)
				IL_048e: ldarg.0
				IL_048f: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.VehicleInitializeSystem::m_PrefabSystem
				IL_0494: ldloca.s 14
				IL_0496: ldloc.s 36
				IL_0498: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>::get_Item(int32)
				IL_049d: callvirt instance !!0 Game.Prefabs.PrefabSystem::GetPrefab<class Game.Prefabs.CarTrailerPrefab>(valuetype Game.Prefabs.PrefabData)
				IL_04a2: stloc.s 37
				IL_04a4: ldloca.s 15
				IL_04a6: ldloc.s 36
				IL_04a8: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.ObjectGeometryData>::get_Item(int32)
				IL_04ad: stloc.s 38
				IL_04af: ldloca.s 20
				IL_04b1: ldloc.s 36
				IL_04b3: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTrailerData>::get_Item(int32)
				IL_04b8: stloc.s 39
				IL_04ba: ldloca.s 39
				IL_04bc: ldloc.s 37
				IL_04be: ldfld valuetype Game.Prefabs.CarTrailerType Game.Prefabs.CarTrailerPrefab::m_TrailerType
				IL_04c3: stfld valuetype Game.Prefabs.CarTrailerType Game.Prefabs.CarTrailerData::m_TrailerType
				IL_04c8: ldloca.s 39
				IL_04ca: ldloc.s 37
				IL_04cc: ldfld valuetype Game.Prefabs.TrailerMovementType Game.Prefabs.CarTrailerPrefab::m_MovementType
				IL_04d1: stfld valuetype Game.Prefabs.TrailerMovementType Game.Prefabs.CarTrailerData::m_MovementType
				IL_04d6: ldloca.s 39
				IL_04d8: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTrailerData::m_AttachPosition
				IL_04dd: ldloc.s 37
				IL_04df: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTrailerPrefab::m_AttachOffset
				IL_04e4: call instance valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.float3::get_xy()
				IL_04e9: call instance void [Unity.Mathematics]Unity.Mathematics.float3::set_xy(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_04ee: ldloca.s 39
				IL_04f0: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTrailerData::m_AttachPosition
				IL_04f5: ldloc.s 38
				IL_04f7: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Prefabs.ObjectGeometryData::m_Bounds
				IL_04fc: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::max
				IL_0501: ldfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_0506: ldloc.s 37
				IL_0508: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Prefabs.CarTrailerPrefab::m_AttachOffset
				IL_050d: ldfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_0512: sub
				IL_0513: stfld float32 [Unity.Mathematics]Unity.Mathematics.float3::z
				IL_0518: ldloc.s 37
				IL_051a: ldfld class Game.Prefabs.CarBasePrefab Game.Prefabs.CarTrailerPrefab::m_FixedTractor
				IL_051f: ldnull
				IL_0520: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
				IL_0525: brfalse.s IL_0540

				IL_0527: ldloca.s 39
				IL_0529: ldarg.0
				IL_052a: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.VehicleInitializeSystem::m_PrefabSystem
				IL_052f: ldloc.s 37
				IL_0531: ldfld class Game.Prefabs.CarBasePrefab Game.Prefabs.CarTrailerPrefab::m_FixedTractor
				IL_0536: callvirt instance valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabSystem::GetEntity(class Game.Prefabs.PrefabBase)
				IL_053b: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.CarTrailerData::m_FixedTractor

				IL_0540: ldloca.s 20
				IL_0542: ldloc.s 36
				IL_0544: ldloc.s 39
				IL_0546: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTrailerData>::set_Item(int32, !0)
				IL_054b: ldloc.s 36
				IL_054d: ldc.i4.1
				IL_054e: add
				IL_054f: stloc.s 36

				IL_0551: ldloc.s 36
				IL_0553: ldloca.s 20
				IL_0555: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.CarTrailerData>::get_Length()
				IL_055a: blt IL_048e
			// end loop

			IL_055f: ldloc.s 12
			IL_0561: ldc.i4.1
			IL_0562: add
			IL_0563: stloc.s 12

			IL_0565: ldloc.s 12
			IL_0567: ldloca.s 0
			IL_0569: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::get_Length()
			IL_056e: blt IL_010d
		// end loop

		IL_0573: ldloca.s 40
		IL_0575: initobj Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob
		IL_057b: ldloca.s 40
		IL_057d: ldloc.2
		IL_057e: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.ObjectGeometryData> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_ObjectGeometryType
		IL_0583: ldloca.s 40
		IL_0585: ldloc.s 9
		IL_0587: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarTrailerData> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_CarTrailerType
		IL_058c: ldloca.s 40
		IL_058e: ldloc.3
		IL_058f: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.MultipleUnitTrainData> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_MultipleUnitTrainType
		IL_0594: ldloca.s 40
		IL_0596: ldloc.s 10
		IL_0598: stfld valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Prefabs.SubMesh> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_SubmeshType
		IL_059d: ldloca.s 40
		IL_059f: ldloc.s 5
		IL_05a1: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.CarData> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_CarType
		IL_05a6: ldloca.s 40
		IL_05a8: ldloc.s 4
		IL_05aa: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.TrainData> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_TrainType
		IL_05af: ldloca.s 40
		IL_05b1: ldloc.s 6
		IL_05b3: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.SwayingData> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_SwayingType
		IL_05b8: ldloca.s 40
		IL_05ba: ldloc.s 7
		IL_05bc: stfld valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.VehicleData> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_VehicleType
		IL_05c1: ldloca.s 40
		IL_05c3: ldarg.0
		IL_05c4: ldflda valuetype Game.Prefabs.VehicleInitializeSystem/TypeHandle Game.Prefabs.VehicleInitializeSystem::__TypeHandle
		IL_05c9: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.ProceduralBone> Game.Prefabs.VehicleInitializeSystem/TypeHandle::__Game_Prefabs_ProceduralBone_RO_BufferLookup
		IL_05ce: ldarg.0
		IL_05cf: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
		IL_05d4: call valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetBufferLookup<valuetype Game.Prefabs.ProceduralBone>(valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
		IL_05d9: stfld valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Prefabs.ProceduralBone> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_ProceduralBones
		IL_05de: ldloca.s 40
		IL_05e0: ldloc.0
		IL_05e1: stfld valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk> Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob::m_Chunks
		IL_05e6: ldloc.s 40
		IL_05e8: ldloca.s 0
		IL_05ea: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::get_Length()
		IL_05ef: ldc.i4.1
		IL_05f0: ldarg.0
		IL_05f1: call instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [Unity.Entities]Unity.Entities.SystemBase::get_Dependency()
		IL_05f6: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobParallelForExtensions::Schedule<valuetype Game.Prefabs.VehicleInitializeSystem/InitializeVehiclesJob>(!!0, int32, int32, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_05fb: stloc.s 11
		IL_05fd: ldarg.0
		IL_05fe: ldloc.s 11
		IL_0600: call instance void [Unity.Entities]Unity.Entities.SystemBase::set_Dependency(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0605: ret
	} // end of method VehicleInitializeSystem::OnUpdate
