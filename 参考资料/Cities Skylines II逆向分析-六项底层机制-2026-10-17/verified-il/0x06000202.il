// Game.Zones.CellCheckHelpers+CollectBlocksJob::RemoveDuplicates 0x06000202
		.method private hidebysig 
			instance void RemoveDuplicates () cil managed 
		{
			// Method begins at RVA 0x10cdc
			// Header size: 12
			// Code size: 158 (0x9e)
			.maxstack 4
			.locals init (
				[0] int32,
				[1] int32,
				[2] valuetype Game.Zones.CellCheckHelpers/SortedEntity,
				[3] valuetype Game.Zones.CellCheckHelpers/SortedEntity
			)

			IL_0000: ldarg.0
			IL_0001: ldfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
			IL_0006: call void [Unity.Collections]Unity.Collections.NativeSortExtension::Sort<valuetype Game.Zones.CellCheckHelpers/SortedEntity>(valuetype [Unity.Collections]Unity.Collections.NativeList`1<!!0>)
			IL_000b: ldc.i4.0
			IL_000c: stloc.0
			IL_000d: ldc.i4.0
			IL_000e: stloc.1
			IL_000f: br.s IL_0068
			// loop start (head: IL_0068)
				IL_0011: ldarg.0
				IL_0012: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
				IL_0017: ldloc.0
				IL_0018: dup
				IL_0019: ldc.i4.1
				IL_001a: add
				IL_001b: stloc.0
				IL_001c: call instance !0 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::get_Item(int32)
				IL_0021: stloc.2
				IL_0022: br.s IL_0049
				// loop start (head: IL_0049)
					IL_0024: ldarg.0
					IL_0025: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
					IL_002a: ldloc.0
					IL_002b: call instance !0 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::get_Item(int32)
					IL_0030: stloc.3
					IL_0031: ldloca.s 3
					IL_0033: ldflda valuetype [Unity.Entities]Unity.Entities.Entity Game.Zones.CellCheckHelpers/SortedEntity::m_Entity
					IL_0038: ldloc.2
					IL_0039: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Zones.CellCheckHelpers/SortedEntity::m_Entity
					IL_003e: call instance bool [Unity.Entities]Unity.Entities.Entity::Equals(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_0043: brfalse.s IL_0057

					IL_0045: ldloc.0
					IL_0046: ldc.i4.1
					IL_0047: add
					IL_0048: stloc.0

					IL_0049: ldloc.0
					IL_004a: ldarg.0
					IL_004b: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
					IL_0050: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::get_Length()
					IL_0055: blt.s IL_0024
				// end loop

				IL_0057: ldarg.0
				IL_0058: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
				IL_005d: ldloc.1
				IL_005e: dup
				IL_005f: ldc.i4.1
				IL_0060: add
				IL_0061: stloc.1
				IL_0062: ldloc.2
				IL_0063: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::set_Item(int32, !0)

				IL_0068: ldloc.0
				IL_0069: ldarg.0
				IL_006a: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
				IL_006f: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::get_Length()
				IL_0074: blt.s IL_0011
			// end loop

			IL_0076: ldloc.1
			IL_0077: ldarg.0
			IL_0078: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
			IL_007d: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::get_Length()
			IL_0082: bge.s IL_009d

			IL_0084: ldarg.0
			IL_0085: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
			IL_008a: ldloc.1
			IL_008b: ldarg.0
			IL_008c: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity> Game.Zones.CellCheckHelpers/CollectBlocksJob::m_ResultList
			IL_0091: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::get_Length()
			IL_0096: ldloc.1
			IL_0097: sub
			IL_0098: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype Game.Zones.CellCheckHelpers/SortedEntity>::RemoveRange(int32, int32)

			IL_009d: ret
		} // end of method CollectBlocksJob::RemoveDuplicates
