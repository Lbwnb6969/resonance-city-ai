// Game.Tools.ApplyNetSystem+HandleTempEntitiesJob::Cancel 0x06000BF7
		.method private hidebysig 
			instance void Cancel (
				int32 chunkIndex,
				valuetype [Unity.Entities]Unity.Entities.Entity entity,
				valuetype Game.Tools.Temp temp
			) cil managed 
		{
			// Method begins at RVA 0x4e148
			// Header size: 12
			// Code size: 87 (0x57)
			.maxstack 4
			.locals init (
				[0] valuetype Game.Common.BatchesUpdated,
				[1] valuetype Game.Common.Deleted
			)

			IL_0000: ldarg.0
			IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden> Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_HiddenData
			IL_0006: ldarg.3
			IL_0007: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_000c: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0011: brfalse.s IL_0040

			IL_0013: ldarg.0
			IL_0014: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0019: ldarg.1
			IL_001a: ldarg.3
			IL_001b: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_0020: ldloca.s 0
			IL_0022: initobj Game.Common.BatchesUpdated
			IL_0028: ldloc.0
			IL_0029: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.BatchesUpdated>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_002e: ldarg.0
			IL_002f: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0034: ldarg.1
			IL_0035: ldarg.3
			IL_0036: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_003b: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<valuetype Game.Tools.Hidden>(int32, valuetype [Unity.Entities]Unity.Entities.Entity)

			IL_0040: ldarg.0
			IL_0041: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0046: ldarg.1
			IL_0047: ldarg.2
			IL_0048: ldloca.s 1
			IL_004a: initobj Game.Common.Deleted
			IL_0050: ldloc.1
			IL_0051: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.Deleted>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_0056: ret
		} // end of method HandleTempEntitiesJob::Cancel
