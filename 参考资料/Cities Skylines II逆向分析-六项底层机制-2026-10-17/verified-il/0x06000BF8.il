// Game.Tools.ApplyNetSystem+HandleTempEntitiesJob::Delete 0x06000BF8
		.method private hidebysig 
			instance void Delete (
				int32 chunkIndex,
				valuetype [Unity.Entities]Unity.Entities.Entity entity,
				valuetype Game.Tools.Temp temp
			) cil managed 
		{
			// Method begins at RVA 0x4e1ac
			// Header size: 12
			// Code size: 68 (0x44)
			.maxstack 4
			.locals init (
				[0] valuetype Game.Common.Deleted
			)

			IL_0000: ldarg.3
			IL_0001: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_0006: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
			IL_000b: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0010: brfalse.s IL_002d

			IL_0012: ldarg.0
			IL_0013: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0018: ldarg.1
			IL_0019: ldarg.3
			IL_001a: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
			IL_001f: ldloca.s 0
			IL_0021: initobj Game.Common.Deleted
			IL_0027: ldloc.0
			IL_0028: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.Deleted>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)

			IL_002d: ldarg.0
			IL_002e: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0033: ldarg.1
			IL_0034: ldarg.2
			IL_0035: ldloca.s 0
			IL_0037: initobj Game.Common.Deleted
			IL_003d: ldloc.0
			IL_003e: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.Deleted>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_0043: ret
		} // end of method HandleTempEntitiesJob::Delete
