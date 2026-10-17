// Game.Tools.ApplyNetSystem+HandleTempEntitiesJob::UpdateComponent 0x06000BF9
		.method private hidebysig 
			instance void UpdateComponent<valuetype .ctor (class [mscorlib]System.ValueType modreq([mscorlib]System.Runtime.InteropServices.UnmanagedType), [Unity.Entities]Unity.Entities.IComponentData) T> (
				int32 chunkIndex,
				valuetype [Unity.Entities]Unity.Entities.Entity entity,
				valuetype [Unity.Entities]Unity.Entities.Entity original,
				valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!T> data,
				bool updateValue
			) cil managed 
		{
			.param type T
				.custom instance void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor() = (
					01 00 00 00
				)
			// Method begins at RVA 0x4e1fc
			// Header size: 12
			// Code size: 119 (0x77)
			.maxstack 5
			.locals init (
				[0] !!T
			)

			IL_0000: ldarga.s data
			IL_0002: ldarg.2
			IL_0003: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!T>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0008: brfalse.s IL_005f

			IL_000a: ldarga.s data
			IL_000c: ldarg.3
			IL_000d: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!T>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0012: brfalse.s IL_002e

			IL_0014: ldarg.s updateValue
			IL_0016: brfalse.s IL_0076

			IL_0018: ldarg.0
			IL_0019: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_001e: ldarg.1
			IL_001f: ldarg.3
			IL_0020: ldarga.s data
			IL_0022: ldarg.2
			IL_0023: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!T>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0028: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::SetComponent<!!T>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_002d: ret

			IL_002e: ldarg.s updateValue
			IL_0030: brfalse.s IL_0048

			IL_0032: ldarg.0
			IL_0033: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_0038: ldarg.1
			IL_0039: ldarg.3
			IL_003a: ldarga.s data
			IL_003c: ldarg.2
			IL_003d: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!T>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0042: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<!!T>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_0047: ret

			IL_0048: ldarg.0
			IL_0049: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_004e: ldarg.1
			IL_004f: ldarg.3
			IL_0050: ldloca.s 0
			IL_0052: initobj !!T
			IL_0058: ldloc.0
			IL_0059: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<!!T>(int32, valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_005e: ret

			IL_005f: ldarga.s data
			IL_0061: ldarg.3
			IL_0062: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<!!T>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_0067: brfalse.s IL_0076

			IL_0069: ldarg.0
			IL_006a: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ApplyNetSystem/HandleTempEntitiesJob::m_CommandBuffer
			IL_006f: ldarg.1
			IL_0070: ldarg.3
			IL_0071: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<!!T>(int32, valuetype [Unity.Entities]Unity.Entities.Entity)

			IL_0076: ret
		} // end of method HandleTempEntitiesJob::UpdateComponent
