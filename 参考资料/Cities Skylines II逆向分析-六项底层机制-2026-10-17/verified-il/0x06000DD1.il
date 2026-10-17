// Game.Tools.OriginalDeletedSystem::GetOriginalDeletedResult 0x06000DD1
	.method public hidebysig 
		instance bool GetOriginalDeletedResult (
			int32 delay
		) cil managed 
	{
		// Method begins at RVA 0x798d8
		// Header size: 12
		// Code size: 43 (0x2b)
		.maxstack 2
		.locals init (
			[0] int32
		)

		IL_0000: ldarg.0
		IL_0001: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Tools.OriginalDeletedSystem::m_Dependency
		IL_0006: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_000b: ldc.i4.1
		IL_000c: ldarg.1
		IL_000d: sub
		IL_000e: stloc.0
		IL_000f: br.s IL_0025
		// loop start (head: IL_0025)
			IL_0011: ldarg.0
			IL_0012: ldflda valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<bool> Game.Tools.OriginalDeletedSystem::m_OriginalDeleted
			IL_0017: ldloc.0
			IL_0018: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<bool>::get_Item(int32)
			IL_001d: brfalse.s IL_0021

			IL_001f: ldc.i4.1
			IL_0020: ret

			IL_0021: ldloc.0
			IL_0022: ldc.i4.1
			IL_0023: sub
			IL_0024: stloc.0

			IL_0025: ldloc.0
			IL_0026: ldc.i4.0
			IL_0027: bge.s IL_0011
		// end loop

		IL_0029: ldc.i4.0
		IL_002a: ret
	} // end of method OriginalDeletedSystem::GetOriginalDeletedResult
