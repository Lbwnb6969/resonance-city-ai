// Game.Tools.ApplyNetSystem+HandleTempEntitiesJob::UpdateComponent 0x06000BFB
		.method private hidebysig 
			instance void UpdateComponent (
				int32 chunkIndex,
				valuetype [Unity.Entities]Unity.Entities.Entity entity,
				valuetype [Unity.Entities]Unity.Entities.Entity original,
				valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road> data
			) cil managed 
		{
			// Method begins at RVA 0x4e31c
			// Header size: 12
			// Code size: 112 (0x70)
			.maxstack 5
			.locals init (
				[0] valuetype Game.Net.Road,
				[1] valuetype Game.Net.Road
			)

			IL_0000: ldarga.s data
			IL_0002: ldarg.2
			IL_0003: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0008: brfalse.s IL_0058

			IL_000a: ldarga.s data
			IL_000c: ldarg.3
			IL_000d: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0012: brfalse.s IL_0042

			IL_0014: ldarga.s data
			IL_0016: ldarg.3
			IL_0017: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_001c: stloc.0
			IL_001d: ldarga.s data
			IL_001f: ldarg.2
			IL_0020: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0025: stloc.1
			IL_0026: ldloca.s 0
			IL_0028: ldloc.1
			IL_0029: ldfld valuetype Game.Net.RoadFlags Game.Net.Road::m_Flags
			IL_002e: stfld valuetype Game.Net.RoadFlags Game.Net.Road::m_Flags
			IL_0033: ldarg.0
			IL_0034: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0039: ldarg.1
			IL_003a: ldarg.3
			IL_003b: ldloc.0
			IL_003c: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::SetComponent<valuetype Game.Net.Road>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_0041: ret

			IL_0042: ldarg.0
			IL_0043: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0048: ldarg.1
			IL_0049: ldarg.3
			IL_004a: ldarga.s data
			IL_004c: ldarg.2
			IL_004d: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0052: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Net.Road>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_0057: ret

			IL_0058: ldarga.s data
			IL_005a: ldarg.3
			IL_005b: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Net.Road>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0060: brfalse.s IL_006f

			IL_0062: ldarg.0
			IL_0063: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0068: ldarg.1
			IL_0069: ldarg.3
			IL_006a: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<valuetype Game.Net.Road>(int32, valuetype [Unity.Entities]Unity.Entities.Entity)

			IL_006f: ret
		} // end of method HandleTempEntitiesJob::UpdateComponent
