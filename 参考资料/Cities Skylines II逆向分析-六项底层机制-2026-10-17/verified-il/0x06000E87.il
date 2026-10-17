// Game.Tools.ToolClearSystem+ClearEntitiesJob::Execute 0x06000E87
		.method public hidebysig 
			instance void Execute (
				[in] valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk& chunk,
				int32 unfilteredChunkIndex,
				bool useEnabledMask,
				[in] valuetype [Unity.Burst]Unity.Burst.Intrinsics.v128& chunkEnabledMask
			) cil managed 
		{
			.param [1]
				.custom instance void [mscorlib]System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor() = (
					01 00 00 00
				)
			.param [4]
				.custom instance void [mscorlib]System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor() = (
					01 00 00 00
				)
			// Method begins at RVA 0x7c51c
			// Header size: 12
			// Code size: 555 (0x22b)
			.maxstack 3
			.locals init (
				[0] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[1] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>,
				[2] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Common.Owner>,
				[3] valuetype [Unity.Entities]Unity.Entities.BufferAccessor`1<valuetype Game.Net.AggregateElement>,
				[4] valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[5] int32,
				[6] valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[7] int32,
				[8] valuetype Game.Common.Owner,
				[9] valuetype Game.Tools.Temp,
				[10] int32,
				[11] valuetype Game.Tools.Temp,
				[12] int32,
				[13] valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.AggregateElement>,
				[14] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[15] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.AggregateElement>
			)

			IL_0000: ldarg.1
			IL_0001: ldarg.0
			IL_0002: ldfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Tools.ToolClearSystem/ClearEntitiesJob::m_EntityType
			IL_0007: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle)
			IL_000c: stloc.0
			IL_000d: ldarg.1
			IL_000e: ldarg.0
			IL_000f: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ToolClearSystem/ClearEntitiesJob::m_TempType
			IL_0014: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0019: stloc.1
			IL_001a: ldarg.1
			IL_001b: ldarg.0
			IL_001c: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Owner> Game.Tools.ToolClearSystem/ClearEntitiesJob::m_OwnerType
			IL_0021: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Common.Owner>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0026: stloc.2
			IL_0027: ldarg.1
			IL_0028: ldarg.0
			IL_0029: ldflda valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<valuetype Game.Net.AggregateElement> Game.Tools.ToolClearSystem/ClearEntitiesJob::m_AggregateElementType
			IL_002e: call instance valuetype [Unity.Entities]Unity.Entities.BufferAccessor`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetBufferAccessor<valuetype Game.Net.AggregateElement>(valuetype [Unity.Entities]Unity.Entities.BufferTypeHandle`1<!!0>&)
			IL_0033: stloc.3
			IL_0034: ldarg.1
			IL_0035: call instance int32 [Unity.Entities]Unity.Entities.ArchetypeChunk::get_Count()
			IL_003a: stloc.s 5
			IL_003c: ldloc.s 5
			IL_003e: conv.u
			IL_003f: sizeof [Unity.Entities]Unity.Entities.Entity
			IL_0045: mul.ovf.un
			IL_0046: localloc
			IL_0048: ldloc.s 5
			IL_004a: newobj instance void valuetype [mscorlib]System.Span`1<valuetype [Unity.Entities]Unity.Entities.Entity>::.ctor(void*, int32)
			IL_004f: call valuetype [Colossal.Collections]Colossal.Collections.StackList`1<!0> valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::op_Implicit(valuetype [mscorlib]System.Span`1<!0>)
			IL_0054: stloc.s 4
			IL_0056: ldloca.s 2
			IL_0058: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Common.Owner>::get_Length()
			IL_005d: brfalse IL_0149

			IL_0062: ldarg.0
			IL_0063: ldarg.1
			IL_0064: ldobj [Unity.Entities]Unity.Entities.ArchetypeChunk
			IL_0069: call instance bool Game.Tools.ToolClearSystem/ClearEntitiesJob::IsHandledAsSubObject(valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk)
			IL_006e: brfalse IL_0149

			IL_0073: ldarg.1
			IL_0074: call instance int32 [Unity.Entities]Unity.Entities.ArchetypeChunk::get_Count()
			IL_0079: stloc.s 5
			IL_007b: ldloc.s 5
			IL_007d: conv.u
			IL_007e: sizeof [Unity.Entities]Unity.Entities.Entity
			IL_0084: mul.ovf.un
			IL_0085: localloc
			IL_0087: ldloc.s 5
			IL_0089: newobj instance void valuetype [mscorlib]System.Span`1<valuetype [Unity.Entities]Unity.Entities.Entity>::.ctor(void*, int32)
			IL_008e: call valuetype [Colossal.Collections]Colossal.Collections.StackList`1<!0> valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::op_Implicit(valuetype [mscorlib]System.Span`1<!0>)
			IL_0093: stloc.s 6
			IL_0095: ldc.i4.0
			IL_0096: stloc.s 7
			IL_0098: br IL_011d
			// loop start (head: IL_011d)
				IL_009d: ldloca.s 2
				IL_009f: ldloc.s 7
				IL_00a1: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Common.Owner>::get_Item(int32)
				IL_00a6: stloc.s 8
				IL_00a8: ldloca.s 1
				IL_00aa: ldloc.s 7
				IL_00ac: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Item(int32)
				IL_00b1: stloc.s 9
				IL_00b3: ldloc.s 9
				IL_00b5: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_00ba: ldc.i4.8
				IL_00bb: and
				IL_00bc: brtrue.s IL_00d2

				IL_00be: ldarg.0
				IL_00bf: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ToolClearSystem/ClearEntitiesJob::m_TempData
				IL_00c4: ldloc.s 8
				IL_00c6: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Common.Owner::m_Owner
				IL_00cb: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_00d0: brtrue.s IL_0117

				IL_00d2: ldloc.s 9
				IL_00d4: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_00d9: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_00de: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_00e3: brfalse.s IL_0107

				IL_00e5: ldarg.0
				IL_00e6: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden> Game.Tools.ToolClearSystem/ClearEntitiesJob::m_HiddenData
				IL_00eb: ldloc.s 9
				IL_00ed: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_00f2: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_00f7: brfalse.s IL_0107

				IL_00f9: ldloca.s 4
				IL_00fb: ldloc.s 9
				IL_00fd: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0102: call instance void valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AddNoResize(!0)

				IL_0107: ldloca.s 6
				IL_0109: ldloca.s 0
				IL_010b: ldloc.s 7
				IL_010d: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
				IL_0112: call instance void valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AddNoResize(!0)

				IL_0117: ldloc.s 7
				IL_0119: ldc.i4.1
				IL_011a: add
				IL_011b: stloc.s 7

				IL_011d: ldloc.s 7
				IL_011f: ldloca.s 2
				IL_0121: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Common.Owner>::get_Length()
				IL_0126: blt IL_009d
			// end loop

			IL_012b: ldloca.s 6
			IL_012d: call instance int32 valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
			IL_0132: brfalse.s IL_01ac

			IL_0134: ldarg.0
			IL_0135: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ToolClearSystem/ClearEntitiesJob::m_CommandBuffer
			IL_013a: ldarg.2
			IL_013b: ldloca.s 6
			IL_013d: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!0> valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AsArray()
			IL_0142: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.Deleted>(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)
			IL_0147: br.s IL_01ac

			IL_0149: ldc.i4.0
			IL_014a: stloc.s 10
			IL_014c: br.s IL_0194
			// loop start (head: IL_0194)
				IL_014e: ldloca.s 1
				IL_0150: ldloc.s 10
				IL_0152: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Item(int32)
				IL_0157: stloc.s 11
				IL_0159: ldloc.s 11
				IL_015b: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0160: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_0165: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_016a: brfalse.s IL_018e

				IL_016c: ldarg.0
				IL_016d: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden> Game.Tools.ToolClearSystem/ClearEntitiesJob::m_HiddenData
				IL_0172: ldloc.s 11
				IL_0174: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0179: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Hidden>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_017e: brfalse.s IL_018e

				IL_0180: ldloca.s 4
				IL_0182: ldloc.s 11
				IL_0184: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0189: call instance void valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AddNoResize(!0)

				IL_018e: ldloc.s 10
				IL_0190: ldc.i4.1
				IL_0191: add
				IL_0192: stloc.s 10

				IL_0194: ldloc.s 10
				IL_0196: ldloca.s 1
				IL_0198: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Length()
				IL_019d: blt.s IL_014e
			// end loop

			IL_019f: ldarg.0
			IL_01a0: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ToolClearSystem/ClearEntitiesJob::m_CommandBuffer
			IL_01a5: ldarg.2
			IL_01a6: ldloc.0
			IL_01a7: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.Deleted>(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)

			IL_01ac: ldloca.s 4
			IL_01ae: call instance int32 valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
			IL_01b3: brfalse.s IL_01db

			IL_01b5: ldarg.0
			IL_01b6: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ToolClearSystem/ClearEntitiesJob::m_CommandBuffer
			IL_01bb: ldarg.2
			IL_01bc: ldloca.s 4
			IL_01be: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!0> valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AsArray()
			IL_01c3: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.BatchesUpdated>(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)
			IL_01c8: ldarg.0
			IL_01c9: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ToolClearSystem/ClearEntitiesJob::m_CommandBuffer
			IL_01ce: ldarg.2
			IL_01cf: ldloca.s 4
			IL_01d1: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!0> valuetype [Colossal.Collections]Colossal.Collections.StackList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AsArray()
			IL_01d6: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<valuetype Game.Tools.Hidden>(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)

			IL_01db: ldc.i4.0
			IL_01dc: stloc.s 12
			IL_01de: br.s IL_021f
			// loop start (head: IL_021f)
				IL_01e0: ldloca.s 3
				IL_01e2: ldloc.s 12
				IL_01e4: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferAccessor`1<valuetype Game.Net.AggregateElement>::get_Item(int32)
				IL_01e9: stloc.s 13
				IL_01eb: ldloca.s 13
				IL_01ed: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!0> valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.AggregateElement>::AsNativeArray()
				IL_01f2: stloc.s 15
				IL_01f4: ldloca.s 15
				IL_01f6: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.AggregateElement>::Reinterpret<valuetype [Unity.Entities]Unity.Entities.Entity>()
				IL_01fb: stloc.s 14
				IL_01fd: ldarg.0
				IL_01fe: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ToolClearSystem/ClearEntitiesJob::m_CommandBuffer
				IL_0203: ldarg.2
				IL_0204: ldloc.s 14
				IL_0206: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::AddComponent<valuetype Game.Common.BatchesUpdated>(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)
				IL_020b: ldarg.0
				IL_020c: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter Game.Tools.ToolClearSystem/ClearEntitiesJob::m_CommandBuffer
				IL_0211: ldarg.2
				IL_0212: ldloc.s 14
				IL_0214: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer/ParallelWriter::RemoveComponent<valuetype Game.Tools.Highlighted>(int32, valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)
				IL_0219: ldloc.s 12
				IL_021b: ldc.i4.1
				IL_021c: add
				IL_021d: stloc.s 12

				IL_021f: ldloc.s 12
				IL_0221: ldloca.s 3
				IL_0223: call instance int32 valuetype [Unity.Entities]Unity.Entities.BufferAccessor`1<valuetype Game.Net.AggregateElement>::get_Length()
				IL_0228: blt.s IL_01e0
			// end loop

			IL_022a: ret
		} // end of method ClearEntitiesJob::Execute
