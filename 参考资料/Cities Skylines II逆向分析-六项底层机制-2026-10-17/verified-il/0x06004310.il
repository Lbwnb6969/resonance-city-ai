// Game.Net.UpdateCollectSystem+DequeueBoundsJob::Execute 0x06004310
		.method public final hidebysig newslot virtual 
			instance void Execute () cil managed 
		{
			// Method begins at RVA 0x209730
			// Header size: 12
			// Code size: 60 (0x3c)
			.maxstack 3
			.locals init (
				[0] int32,
				[1] int32
			)

			IL_0000: ldarg.0
			IL_0001: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_Queue
			IL_0006: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::get_Count()
			IL_000b: stloc.0
			IL_000c: ldarg.0
			IL_000d: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_ResultList
			IL_0012: ldloc.0
			IL_0013: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::ResizeUninitialized(int32)
			IL_0018: ldc.i4.0
			IL_0019: stloc.1
			IL_001a: br.s IL_0037
			// loop start (head: IL_0037)
				IL_001c: ldarg.0
				IL_001d: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_ResultList
				IL_0022: ldloc.1
				IL_0023: ldarg.0
				IL_0024: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/DequeueBoundsJob::m_Queue
				IL_0029: call instance !0 valuetype [Unity.Collections]Unity.Collections.NativeQueue`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Dequeue()
				IL_002e: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::set_Item(int32, !0)
				IL_0033: ldloc.1
				IL_0034: ldc.i4.1
				IL_0035: add
				IL_0036: stloc.1

				IL_0037: ldloc.1
				IL_0038: ldloc.0
				IL_0039: blt.s IL_001c
			// end loop

			IL_003b: ret
		} // end of method DequeueBoundsJob::Execute
