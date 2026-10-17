// Game.Tools.ApplyNetSystem+PatchTempReferencesJob::Execute 0x06000BF2
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
			// Method begins at RVA 0x4d1e4
			// Header size: 12
			// Code size: 1519 (0x5ef)
			.maxstack 3
			.locals init (
				[0] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[1] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>,
				[2] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.Edge>,
				[3] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.Node>,
				[4] int32,
				[5] valuetype [Unity.Entities]Unity.Entities.Entity,
				[6] valuetype Game.Net.Edge,
				[7] valuetype Game.Tools.Temp,
				[8] valuetype Game.Tools.Temp,
				[9] valuetype Game.Tools.Temp,
				[10] valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>,
				[11] valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>,
				[12] int32,
				[13] valuetype Game.Net.ConnectedNode,
				[14] int32,
				[15] valuetype Game.Net.ConnectedNode,
				[16] valuetype Game.Tools.Temp,
				[17] valuetype Game.Tools.Temp,
				[18] valuetype Game.Tools.Temp,
				[19] valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>,
				[20] int32,
				[21] valuetype Game.Net.ConnectedNode,
				[22] valuetype Game.Tools.Temp,
				[23] int32,
				[24] valuetype [Unity.Entities]Unity.Entities.Entity,
				[25] valuetype Game.Tools.Temp,
				[26] valuetype [Unity.Entities]Unity.Entities.Entity,
				[27] valuetype [Unity.Entities]Unity.Entities.Entity,
				[28] bool,
				[29] valuetype Game.Tools.Temp
			)

			IL_0000: ldarg.1
			IL_0001: ldarg.0
			IL_0002: ldfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_EntityType
			IL_0007: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle)
			IL_000c: stloc.0
			IL_000d: ldarg.1
			IL_000e: ldarg.0
			IL_000f: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempType
			IL_0014: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0019: stloc.1
			IL_001a: ldarg.1
			IL_001b: ldarg.0
			IL_001c: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Edge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_EdgeType
			IL_0021: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.Edge>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0026: stloc.2
			IL_0027: ldarg.1
			IL_0028: ldarg.0
			IL_0029: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.Node> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_NodeType
			IL_002e: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.Node>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0033: stloc.3
			IL_0034: ldc.i4.0
			IL_0035: stloc.s 4
			IL_0037: br IL_0409
			// loop start (head: IL_0409)
				IL_003c: ldloca.s 0
				IL_003e: ldloc.s 4
				IL_0040: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
				IL_0045: stloc.s 5
				IL_0047: ldloca.s 2
				IL_0049: ldloc.s 4
				IL_004b: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.Edge>::get_Item(int32)
				IL_0050: stloc.s 6
				IL_0052: ldloca.s 1
				IL_0054: ldloc.s 4
				IL_0056: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Item(int32)
				IL_005b: stloc.s 7
				IL_005d: ldloc.s 7
				IL_005f: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_0064: ldc.i4.2
				IL_0065: and
				IL_0066: brtrue IL_0403

				IL_006b: ldloc.s 7
				IL_006d: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0072: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_0077: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_007c: brfalse IL_023c

				IL_0081: ldloc.s 7
				IL_0083: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_0088: ldc.i4 4352
				IL_008d: and
				IL_008e: brtrue IL_023c

				IL_0093: ldarg.0
				IL_0094: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
				IL_0099: ldloc.s 6
				IL_009b: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_Start
				IL_00a0: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_00a5: stloc.s 8
				IL_00a7: ldloc.s 8
				IL_00a9: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_00ae: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_00b3: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_00b8: brfalse.s IL_00d7

				IL_00ba: ldloc.s 8
				IL_00bc: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_00c1: ldc.i4 258
				IL_00c6: and
				IL_00c7: brtrue.s IL_00d7

				IL_00c9: ldloca.s 6
				IL_00cb: ldloc.s 8
				IL_00cd: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_00d2: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_Start

				IL_00d7: ldarg.0
				IL_00d8: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
				IL_00dd: ldloc.s 6
				IL_00df: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_End
				IL_00e4: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_00e9: stloc.s 9
				IL_00eb: ldloc.s 9
				IL_00ed: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_00f2: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_00f7: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_00fc: brfalse.s IL_011b

				IL_00fe: ldloc.s 9
				IL_0100: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_0105: ldc.i4 258
				IL_010a: and
				IL_010b: brtrue.s IL_011b

				IL_010d: ldloca.s 6
				IL_010f: ldloc.s 9
				IL_0111: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0116: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_End

				IL_011b: ldarg.0
				IL_011c: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Nodes
				IL_0121: ldloc.s 7
				IL_0123: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0128: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_012d: stloc.s 10
				IL_012f: ldarg.0
				IL_0130: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Nodes
				IL_0135: ldloc.s 5
				IL_0137: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_013c: stloc.s 11
				IL_013e: ldc.i4.0
				IL_013f: stloc.s 12
				IL_0141: br.s IL_0178
				// loop start (head: IL_0178)
					IL_0143: ldloca.s 10
					IL_0145: ldloc.s 12
					IL_0147: call instance !0 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::get_Item(int32)
					IL_014c: stloc.s 13
					IL_014e: ldarg.0
					IL_014f: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
					IL_0154: ldloc.s 13
					IL_0156: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_015b: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_0160: ldloc.s 7
					IL_0162: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
					IL_0167: newobj instance void Game.Net.ConnectedEdge::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_016c: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::RemoveValue<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
					IL_0171: pop
					IL_0172: ldloc.s 12
					IL_0174: ldc.i4.1
					IL_0175: add
					IL_0176: stloc.s 12

					IL_0178: ldloc.s 12
					IL_017a: ldloca.s 10
					IL_017c: call instance int32 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::get_Length()
					IL_0181: blt.s IL_0143
				// end loop

				IL_0183: ldloca.s 10
				IL_0185: call instance void valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::Clear()
				IL_018a: ldc.i4.0
				IL_018b: stloc.s 14
				IL_018d: br IL_0229
				// loop start (head: IL_0229)
					IL_0192: ldloca.s 11
					IL_0194: ldloc.s 14
					IL_0196: call instance !0 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::get_Item(int32)
					IL_019b: stloc.s 15
					IL_019d: ldarg.0
					IL_019e: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
					IL_01a3: ldloc.s 15
					IL_01a5: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_01aa: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_01af: brfalse.s IL_01f5

					IL_01b1: ldarg.0
					IL_01b2: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
					IL_01b7: ldloc.s 15
					IL_01b9: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_01be: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_01c3: stloc.s 16
					IL_01c5: ldloc.s 16
					IL_01c7: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
					IL_01cc: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
					IL_01d1: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_01d6: brfalse.s IL_01f5

					IL_01d8: ldloc.s 16
					IL_01da: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
					IL_01df: ldc.i4 258
					IL_01e4: and
					IL_01e5: brtrue.s IL_01f5

					IL_01e7: ldloca.s 15
					IL_01e9: ldloc.s 16
					IL_01eb: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
					IL_01f0: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node

					IL_01f5: ldarg.0
					IL_01f6: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
					IL_01fb: ldloc.s 15
					IL_01fd: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_0202: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_0207: ldloc.s 10
					IL_0209: ldloc.s 15
					IL_020b: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::TryAddUniqueValue<valuetype Game.Net.ConnectedNode>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
					IL_0210: pop
					IL_0211: ldloc.s 7
					IL_0213: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
					IL_0218: newobj instance void Game.Net.ConnectedEdge::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_021d: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::TryAddUniqueValue<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
					IL_0222: pop
					IL_0223: ldloc.s 14
					IL_0225: ldc.i4.1
					IL_0226: add
					IL_0227: stloc.s 14

					IL_0229: ldloc.s 14
					IL_022b: ldloca.s 11
					IL_022d: call instance int32 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::get_Length()
					IL_0232: blt IL_0192
				// end loop

				IL_0237: br IL_03f8

				IL_023c: ldarg.0
				IL_023d: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
				IL_0242: ldloc.s 6
				IL_0244: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_Start
				IL_0249: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_024e: stloc.s 17
				IL_0250: ldloc.s 17
				IL_0252: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0257: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_025c: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0261: brfalse.s IL_02be

				IL_0263: ldloc.s 17
				IL_0265: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_026a: ldc.i4 258
				IL_026f: and
				IL_0270: brtrue.s IL_02be

				IL_0272: ldarg.0
				IL_0273: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
				IL_0278: ldloc.s 6
				IL_027a: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_Start
				IL_027f: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0284: ldloc.s 5
				IL_0286: newobj instance void Game.Net.ConnectedEdge::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_028b: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::RemoveValue<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
				IL_0290: pop
				IL_0291: ldloca.s 6
				IL_0293: ldloc.s 17
				IL_0295: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_029a: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_Start
				IL_029f: ldarg.0
				IL_02a0: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
				IL_02a5: ldloc.s 6
				IL_02a7: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_Start
				IL_02ac: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_02b1: ldloc.s 5
				IL_02b3: newobj instance void Game.Net.ConnectedEdge::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_02b8: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::TryAddUniqueValue<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
				IL_02bd: pop

				IL_02be: ldarg.0
				IL_02bf: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
				IL_02c4: ldloc.s 6
				IL_02c6: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_End
				IL_02cb: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_02d0: stloc.s 18
				IL_02d2: ldloc.s 18
				IL_02d4: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_02d9: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_02de: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_02e3: brfalse.s IL_0340

				IL_02e5: ldloc.s 18
				IL_02e7: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_02ec: ldc.i4 258
				IL_02f1: and
				IL_02f2: brtrue.s IL_0340

				IL_02f4: ldarg.0
				IL_02f5: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
				IL_02fa: ldloc.s 6
				IL_02fc: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_End
				IL_0301: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0306: ldloc.s 5
				IL_0308: newobj instance void Game.Net.ConnectedEdge::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_030d: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::RemoveValue<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
				IL_0312: pop
				IL_0313: ldloca.s 6
				IL_0315: ldloc.s 18
				IL_0317: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_031c: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_End
				IL_0321: ldarg.0
				IL_0322: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
				IL_0327: ldloc.s 6
				IL_0329: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.Edge::m_End
				IL_032e: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0333: ldloc.s 5
				IL_0335: newobj instance void Game.Net.ConnectedEdge::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_033a: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::TryAddUniqueValue<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
				IL_033f: pop

				IL_0340: ldarg.0
				IL_0341: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Nodes
				IL_0346: ldloc.s 5
				IL_0348: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedNode>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_034d: stloc.s 19
				IL_034f: ldc.i4.0
				IL_0350: stloc.s 20
				IL_0352: br IL_03ea
				// loop start (head: IL_03ea)
					IL_0357: ldloca.s 19
					IL_0359: ldloc.s 20
					IL_035b: call instance !0 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::get_Item(int32)
					IL_0360: stloc.s 21
					IL_0362: ldarg.0
					IL_0363: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
					IL_0368: ldloc.s 21
					IL_036a: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_036f: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_0374: brfalse.s IL_03c5

					IL_0376: ldarg.0
					IL_0377: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
					IL_037c: ldloc.s 21
					IL_037e: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_0383: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_0388: stloc.s 22
					IL_038a: ldloc.s 22
					IL_038c: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
					IL_0391: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
					IL_0396: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_039b: brfalse.s IL_03c5

					IL_039d: ldloc.s 22
					IL_039f: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
					IL_03a4: ldc.i4 258
					IL_03a9: and
					IL_03aa: brtrue.s IL_03c5

					IL_03ac: ldloca.s 21
					IL_03ae: ldloc.s 22
					IL_03b0: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
					IL_03b5: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_03ba: ldloca.s 19
					IL_03bc: ldloc.s 20
					IL_03be: ldloc.s 21
					IL_03c0: call instance void valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::set_Item(int32, !0)

					IL_03c5: ldarg.0
					IL_03c6: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_Edges
					IL_03cb: ldloc.s 21
					IL_03cd: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Net.ConnectedNode::m_Node
					IL_03d2: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.ConnectedEdge>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_03d7: ldloc.s 5
					IL_03d9: newobj instance void Game.Net.ConnectedEdge::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_03de: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::TryAddUniqueValue<valuetype Game.Net.ConnectedEdge>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
					IL_03e3: pop
					IL_03e4: ldloc.s 20
					IL_03e6: ldc.i4.1
					IL_03e7: add
					IL_03e8: stloc.s 20

					IL_03ea: ldloc.s 20
					IL_03ec: ldloca.s 19
					IL_03ee: call instance int32 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Net.ConnectedNode>::get_Length()
					IL_03f3: blt IL_0357
				// end loop

				IL_03f8: ldloca.s 2
				IL_03fa: ldloc.s 4
				IL_03fc: ldloc.s 6
				IL_03fe: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.Edge>::set_Item(int32, !0)

				IL_0403: ldloc.s 4
				IL_0405: ldc.i4.1
				IL_0406: add
				IL_0407: stloc.s 4

				IL_0409: ldloc.s 4
				IL_040b: ldloca.s 2
				IL_040d: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.Edge>::get_Length()
				IL_0412: blt IL_003c
			// end loop

			IL_0417: ldloca.s 3
			IL_0419: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.Node>::get_Length()
			IL_041e: brtrue.s IL_042c

			IL_0420: ldloca.s 2
			IL_0422: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.Edge>::get_Length()
			IL_0427: brfalse IL_05ee

			IL_042c: ldc.i4.0
			IL_042d: stloc.s 23
			IL_042f: br IL_05e0
			// loop start (head: IL_05e0)
				IL_0434: ldloca.s 0
				IL_0436: ldloc.s 23
				IL_0438: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
				IL_043d: stloc.s 24
				IL_043f: ldloca.s 1
				IL_0441: ldloc.s 23
				IL_0443: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Item(int32)
				IL_0448: stloc.s 25
				IL_044a: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_044f: stloc.s 26
				IL_0451: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_0456: stloc.s 27
				IL_0458: ldc.i4.0
				IL_0459: stloc.s 28
				IL_045b: ldarg.0
				IL_045c: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_OwnerData
				IL_0461: ldloc.s 24
				IL_0463: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0468: brfalse IL_04f9

				IL_046d: ldarg.0
				IL_046e: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_OwnerData
				IL_0473: ldloc.s 24
				IL_0475: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_047a: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Common.Owner::m_Owner
				IL_047f: stloc.s 27
				IL_0481: ldloc.s 27
				IL_0483: stloc.s 26
				IL_0485: ldarg.0
				IL_0486: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
				IL_048b: ldloc.s 27
				IL_048d: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0492: brfalse.s IL_04f9

				IL_0494: ldarg.0
				IL_0495: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_TempData
				IL_049a: ldloc.s 27
				IL_049c: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Tools.Temp>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_04a1: stloc.s 29
				IL_04a3: ldloc.s 29
				IL_04a5: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_04aa: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_04af: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_04b4: brfalse.s IL_04e7

				IL_04b6: ldloc.s 29
				IL_04b8: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_04bd: ldc.i4 4352
				IL_04c2: and
				IL_04c3: brtrue.s IL_04e7

				IL_04c5: ldc.i4.1
				IL_04c6: stloc.s 28
				IL_04c8: ldloc.s 29
				IL_04ca: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_04cf: stloc.s 27
				IL_04d1: ldarg.0
				IL_04d2: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_OwnerData
				IL_04d7: ldloc.s 24
				IL_04d9: ldloc.s 27
				IL_04db: newobj instance void Game.Common.Owner::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_04e0: call instance void valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner>::set_Item(valuetype [Unity.Entities]Unity.Entities.Entity, !0)
				IL_04e5: br.s IL_04f9

				IL_04e7: ldloc.s 29
				IL_04e9: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_04ee: ldc.i4 32770
				IL_04f3: and
				IL_04f4: brtrue.s IL_04f9

				IL_04f6: ldc.i4.1
				IL_04f7: stloc.s 28

				IL_04f9: ldloc.s 25
				IL_04fb: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_0500: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_0505: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_050a: brfalse.s IL_057d

				IL_050c: ldloc.s 25
				IL_050e: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
				IL_0513: ldc.i4 258
				IL_0518: and
				IL_0519: brtrue.s IL_057d

				IL_051b: ldloc.s 28
				IL_051d: brfalse.s IL_0548

				IL_051f: ldarg.0
				IL_0520: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_SubNets
				IL_0525: ldloc.s 26
				IL_0527: call instance bool valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet>::HasBuffer(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_052c: brfalse.s IL_0548

				IL_052e: ldarg.0
				IL_052f: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_SubNets
				IL_0534: ldloc.s 26
				IL_0536: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_053b: ldloc.s 24
				IL_053d: newobj instance void Game.Net.SubNet::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0542: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::RemoveValue<valuetype Game.Net.SubNet>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
				IL_0547: pop

				IL_0548: ldloc.s 25
				IL_054a: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.Temp::m_Original
				IL_054f: stloc.s 24
				IL_0551: ldarg.0
				IL_0552: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_OwnerData
				IL_0557: ldloc.s 24
				IL_0559: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_055e: brfalse.s IL_0576

				IL_0560: ldarg.0
				IL_0561: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_OwnerData
				IL_0566: ldloc.s 24
				IL_0568: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Common.Owner>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_056d: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Common.Owner::m_Owner
				IL_0572: stloc.s 26
				IL_0574: br.s IL_057d

				IL_0576: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
				IL_057b: stloc.s 26

				IL_057d: ldloc.s 26
				IL_057f: ldloc.s 27
				IL_0581: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0586: brfalse.s IL_05da

				IL_0588: ldarg.0
				IL_0589: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_SubNets
				IL_058e: ldloc.s 26
				IL_0590: call instance bool valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet>::HasBuffer(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0595: brfalse.s IL_05b1

				IL_0597: ldarg.0
				IL_0598: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_SubNets
				IL_059d: ldloc.s 26
				IL_059f: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_05a4: ldloc.s 24
				IL_05a6: newobj instance void Game.Net.SubNet::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_05ab: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::RemoveValue<valuetype Game.Net.SubNet>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
				IL_05b0: pop

				IL_05b1: ldarg.0
				IL_05b2: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_SubNets
				IL_05b7: ldloc.s 27
				IL_05b9: call instance bool valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet>::HasBuffer(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_05be: brfalse.s IL_05da

				IL_05c0: ldarg.0
				IL_05c1: ldflda valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet> Game.Tools.ApplyNetSystem/PatchTempReferencesJob::m_SubNets
				IL_05c6: ldloc.s 27
				IL_05c8: call instance valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!0> valuetype [Unity.Entities]Unity.Entities.BufferLookup`1<valuetype Game.Net.SubNet>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_05cd: ldloc.s 24
				IL_05cf: newobj instance void Game.Net.SubNet::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_05d4: call bool [Colossal.Collections]Colossal.Collections.CollectionUtils::TryAddUniqueValue<valuetype Game.Net.SubNet>(valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<!!0>, !!0)
				IL_05d9: pop

				IL_05da: ldloc.s 23
				IL_05dc: ldc.i4.1
				IL_05dd: add
				IL_05de: stloc.s 23

				IL_05e0: ldloc.s 23
				IL_05e2: ldloca.s 1
				IL_05e4: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Length()
				IL_05e9: blt IL_0434
			// end loop

			IL_05ee: ret
		} // end of method PatchTempReferencesJob::Execute
