// Game.Tools.ApplyNetSystem+HandleTempEntitiesJob::Create 0x06000BFD
		.method private hidebysig 
			instance void Create (
				int32 chunkIndex,
				valuetype [Unity.Entities]Unity.Entities.Entity entity,
				valuetype Game.Tools.Temp temp
			) cil managed 
		{
			// Method begins at RVA 0x4e590
			// Header size: 12
			// Code size: 92 (0x5c)
			.maxstack 4
			.locals init (
				[0] valuetype Game.Tools.Recent,
				[1] valuetype Game.Tools.Recent
			)

			IL_0000: ldarg.0
			IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0006: ldarg.1
			IL_0007: ldarg.2
			IL_0008: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<valuetype Game.Tools.Temp>(int32, valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_000d: ldarg.3
			IL_000e: ldfld int32 Game.Tools.Temp::m_Cost
			IL_0013: ldc.i4.0
			IL_0014: ble.s IL_0048

			IL_0016: ldloca.s 1
			IL_0018: initobj Game.Tools.Recent
			IL_001e: ldloca.s 1
			IL_0020: ldarg.0
			IL_0021: ldfld uint32 Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_SimulationFrame
			IL_0026: stfld uint32 Game.Tools.Recent::m_ModificationFrame
			IL_002b: ldloca.s 1
			IL_002d: ldarg.3
			IL_002e: ldfld int32 Game.Tools.Temp::m_Cost
			IL_0033: stfld int32 Game.Tools.Recent::m_ModificationCost
			IL_0038: ldloc.1
			IL_0039: stloc.0
			IL_003a: ldarg.0
			IL_003b: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0040: ldarg.1
			IL_0041: ldarg.2
			IL_0042: ldloc.0
			IL_0043: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Tools.Recent>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)

			IL_0048: ldarg.0
			IL_0049: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_004e: ldarg.1
			IL_004f: ldarg.2
			IL_0050: ldarg.0
			IL_0051: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_ApplyCreatedTypes
			IL_0056: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent(int32, valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet&)
			IL_005b: ret
		} // end of method HandleTempEntitiesJob::Create
