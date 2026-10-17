// Game.Net.UpdateCollectSystem+CollectUpdatedNetBoundsJob::Execute 0x0600430C
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
			// Method begins at RVA 0x209154
			// Header size: 12
			// Code size: 870 (0x366)
			.maxstack 3
			.locals init (
				[0] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EdgeGeometry>,
				[1] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.StartNodeGeometry>,
				[2] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EndNodeGeometry>,
				[3] int32,
				[4] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3,
				[5] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.NodeGeometry>,
				[6] int32,
				[7] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3,
				[8] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[9] int32,
				[10] valuetype [Unity.Entities]Unity.Entities.Entity,
				[11] valuetype Game.Common.QuadTreeBoundsXZ,
				[12] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[13] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EdgeGeometry>,
				[14] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.StartNodeGeometry>,
				[15] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EndNodeGeometry>,
				[16] int32,
				[17] valuetype [Unity.Entities]Unity.Entities.Entity,
				[18] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2,
				[19] valuetype Game.Common.QuadTreeBoundsXZ,
				[20] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3,
				[21] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2,
				[22] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2,
				[23] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.NodeGeometry>,
				[24] int32,
				[25] valuetype [Unity.Entities]Unity.Entities.Entity,
				[26] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2,
				[27] valuetype Game.Common.QuadTreeBoundsXZ,
				[28] valuetype Game.Net.NodeGeometry,
				[29] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2,
				[30] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2
			)

			IL_0000: ldarg.1
			IL_0001: ldarg.0
			IL_0002: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Created> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_CreatedType
			IL_0007: call instance bool [Unity.Entities]Unity.Entities.ArchetypeChunk::Has<valuetype Game.Common.Created>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_000c: brfalse IL_00ea

			IL_0011: ldarg.1
			IL_0012: ldarg.0
			IL_0013: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EdgeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EdgeGeometryType
			IL_0018: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.EdgeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_001d: stloc.0
			IL_001e: ldloca.s 0
			IL_0020: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EdgeGeometry>::get_Length()
			IL_0025: brfalse.s IL_00a3

			IL_0027: ldarg.1
			IL_0028: ldarg.0
			IL_0029: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.StartNodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_StartGeometryType
			IL_002e: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.StartNodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0033: stloc.1
			IL_0034: ldarg.1
			IL_0035: ldarg.0
			IL_0036: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EndNodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EndGeometryType
			IL_003b: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.EndNodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0040: stloc.2
			IL_0041: ldc.i4.0
			IL_0042: stloc.3
			IL_0043: br.s IL_0098
			// loop start (head: IL_0098)
				IL_0045: ldloca.s 0
				IL_0047: ldloc.3
				IL_0048: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EdgeGeometry>::get_Item(int32)
				IL_004d: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.EdgeGeometry::m_Bounds
				IL_0052: ldloca.s 1
				IL_0054: ldloc.3
				IL_0055: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.StartNodeGeometry>::get_Item(int32)
				IL_005a: ldfld valuetype Game.Net.EdgeNodeGeometry Game.Net.StartNodeGeometry::m_Geometry
				IL_005f: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.EdgeNodeGeometry::m_Bounds
				IL_0064: call valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::op_BitwiseOr(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3, valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3)
				IL_0069: ldloca.s 2
				IL_006b: ldloc.3
				IL_006c: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EndNodeGeometry>::get_Item(int32)
				IL_0071: ldfld valuetype Game.Net.EdgeNodeGeometry Game.Net.EndNodeGeometry::m_Geometry
				IL_0076: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.EdgeNodeGeometry::m_Bounds
				IL_007b: call valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::op_BitwiseOr(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3, valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3)
				IL_0080: stloc.s 4
				IL_0082: ldarg.0
				IL_0083: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_0088: ldloca.s 4
				IL_008a: call instance valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::get_xz()
				IL_008f: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_0094: ldloc.3
				IL_0095: ldc.i4.1
				IL_0096: add
				IL_0097: stloc.3

				IL_0098: ldloc.3
				IL_0099: ldloca.s 0
				IL_009b: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EdgeGeometry>::get_Length()
				IL_00a0: blt.s IL_0045
			// end loop

			IL_00a2: ret

			IL_00a3: ldarg.1
			IL_00a4: ldarg.0
			IL_00a5: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.NodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_NodeGeometryType
			IL_00aa: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.NodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_00af: stloc.s 5
			IL_00b1: ldc.i4.0
			IL_00b2: stloc.s 6
			IL_00b4: br.s IL_00de
			// loop start (head: IL_00de)
				IL_00b6: ldloca.s 5
				IL_00b8: ldloc.s 6
				IL_00ba: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.NodeGeometry>::get_Item(int32)
				IL_00bf: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.NodeGeometry::m_Bounds
				IL_00c4: stloc.s 7
				IL_00c6: ldarg.0
				IL_00c7: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_00cc: ldloca.s 7
				IL_00ce: call instance valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::get_xz()
				IL_00d3: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_00d8: ldloc.s 6
				IL_00da: ldc.i4.1
				IL_00db: add
				IL_00dc: stloc.s 6

				IL_00de: ldloc.s 6
				IL_00e0: ldloca.s 5
				IL_00e2: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.NodeGeometry>::get_Length()
				IL_00e7: blt.s IL_00b6
			// end loop

			IL_00e9: ret

			IL_00ea: ldarg.1
			IL_00eb: ldarg.0
			IL_00ec: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Common.Deleted> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_DeletedType
			IL_00f1: call instance bool [Unity.Entities]Unity.Entities.ArchetypeChunk::Has<valuetype Game.Common.Deleted>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_00f6: brfalse.s IL_0150

			IL_00f8: ldarg.1
			IL_00f9: ldarg.0
			IL_00fa: ldfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EntityType
			IL_00ff: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle)
			IL_0104: stloc.s 8
			IL_0106: ldc.i4.0
			IL_0107: stloc.s 9
			IL_0109: br.s IL_0144
			// loop start (head: IL_0144)
				IL_010b: ldloca.s 8
				IL_010d: ldloc.s 9
				IL_010f: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
				IL_0114: stloc.s 10
				IL_0116: ldarg.0
				IL_0117: ldflda valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_SearchTree
				IL_011c: ldloc.s 10
				IL_011e: ldloca.s 11
				IL_0120: call instance bool valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ>::TryGet(!0, !1&)
				IL_0125: brfalse.s IL_013e

				IL_0127: ldarg.0
				IL_0128: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_012d: ldloca.s 11
				IL_012f: ldflda valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Common.QuadTreeBoundsXZ::m_Bounds
				IL_0134: call instance valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::get_xz()
				IL_0139: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)

				IL_013e: ldloc.s 9
				IL_0140: ldc.i4.1
				IL_0141: add
				IL_0142: stloc.s 9

				IL_0144: ldloc.s 9
				IL_0146: ldloca.s 8
				IL_0148: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
				IL_014d: blt.s IL_010b
			// end loop

			IL_014f: ret

			IL_0150: ldarg.1
			IL_0151: ldarg.0
			IL_0152: ldfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EntityType
			IL_0157: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle)
			IL_015c: stloc.s 12
			IL_015e: ldarg.1
			IL_015f: ldarg.0
			IL_0160: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EdgeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EdgeGeometryType
			IL_0165: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.EdgeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_016a: stloc.s 13
			IL_016c: ldloca.s 13
			IL_016e: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EdgeGeometry>::get_Length()
			IL_0173: brfalse IL_028e

			IL_0178: ldarg.1
			IL_0179: ldarg.0
			IL_017a: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.StartNodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_StartGeometryType
			IL_017f: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.StartNodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0184: stloc.s 14
			IL_0186: ldarg.1
			IL_0187: ldarg.0
			IL_0188: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.EndNodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_EndGeometryType
			IL_018d: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.EndNodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_0192: stloc.s 15
			IL_0194: ldc.i4.0
			IL_0195: stloc.s 16
			IL_0197: br IL_027f
			// loop start (head: IL_027f)
				IL_019c: ldloca.s 12
				IL_019e: ldloc.s 16
				IL_01a0: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
				IL_01a5: stloc.s 17
				IL_01a7: ldloca.s 13
				IL_01a9: ldloc.s 16
				IL_01ab: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EdgeGeometry>::get_Item(int32)
				IL_01b0: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.EdgeGeometry::m_Bounds
				IL_01b5: ldloca.s 14
				IL_01b7: ldloc.s 16
				IL_01b9: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.StartNodeGeometry>::get_Item(int32)
				IL_01be: ldfld valuetype Game.Net.EdgeNodeGeometry Game.Net.StartNodeGeometry::m_Geometry
				IL_01c3: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.EdgeNodeGeometry::m_Bounds
				IL_01c8: call valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::op_BitwiseOr(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3, valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3)
				IL_01cd: ldloca.s 15
				IL_01cf: ldloc.s 16
				IL_01d1: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.EndNodeGeometry>::get_Item(int32)
				IL_01d6: ldfld valuetype Game.Net.EdgeNodeGeometry Game.Net.EndNodeGeometry::m_Geometry
				IL_01db: ldfld valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.EdgeNodeGeometry::m_Bounds
				IL_01e0: call valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::op_BitwiseOr(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3, valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3)
				IL_01e5: stloc.s 20
				IL_01e7: ldloca.s 20
				IL_01e9: call instance valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::get_xz()
				IL_01ee: stloc.s 18
				IL_01f0: ldarg.0
				IL_01f1: ldflda valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_SearchTree
				IL_01f6: ldloc.s 17
				IL_01f8: ldloca.s 19
				IL_01fa: call instance bool valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ>::TryGet(!0, !1&)
				IL_01ff: brfalse.s IL_026c

				IL_0201: ldloca.s 19
				IL_0203: ldflda valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Common.QuadTreeBoundsXZ::m_Bounds
				IL_0208: call instance valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::get_xz()
				IL_020d: stloc.s 21
				IL_020f: ldloc.s 21
				IL_0211: ldloc.s 18
				IL_0213: call valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds2::op_BitwiseOr(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2, valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_0218: stloc.s 22
				IL_021a: ldloc.s 22
				IL_021c: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Colossal.Mathematics]Colossal.Mathematics.MathUtils::Size(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_0221: call float32 [Unity.Mathematics]Unity.Mathematics.math::length(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_0226: ldloc.s 21
				IL_0228: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Colossal.Mathematics]Colossal.Mathematics.MathUtils::Size(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_022d: call float32 [Unity.Mathematics]Unity.Mathematics.math::length(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_0232: ldloc.s 18
				IL_0234: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Colossal.Mathematics]Colossal.Mathematics.MathUtils::Size(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_0239: call float32 [Unity.Mathematics]Unity.Mathematics.math::length(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_023e: add
				IL_023f: bge.un.s IL_0250

				IL_0241: ldarg.0
				IL_0242: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_0247: ldloc.s 22
				IL_0249: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_024e: br.s IL_0279

				IL_0250: ldarg.0
				IL_0251: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_0256: ldloc.s 21
				IL_0258: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_025d: ldarg.0
				IL_025e: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_0263: ldloc.s 18
				IL_0265: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_026a: br.s IL_0279

				IL_026c: ldarg.0
				IL_026d: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_0272: ldloc.s 18
				IL_0274: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)

				IL_0279: ldloc.s 16
				IL_027b: ldc.i4.1
				IL_027c: add
				IL_027d: stloc.s 16

				IL_027f: ldloc.s 16
				IL_0281: ldloca.s 12
				IL_0283: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
				IL_0288: blt IL_019c
			// end loop

			IL_028d: ret

			IL_028e: ldarg.1
			IL_028f: ldarg.0
			IL_0290: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Net.NodeGeometry> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_NodeGeometryType
			IL_0295: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Net.NodeGeometry>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
			IL_029a: stloc.s 23
			IL_029c: ldc.i4.0
			IL_029d: stloc.s 24
			IL_029f: br IL_0357
			// loop start (head: IL_0357)
				IL_02a4: ldloca.s 12
				IL_02a6: ldloc.s 24
				IL_02a8: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
				IL_02ad: stloc.s 25
				IL_02af: ldloca.s 23
				IL_02b1: ldloc.s 24
				IL_02b3: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Net.NodeGeometry>::get_Item(int32)
				IL_02b8: stloc.s 28
				IL_02ba: ldloca.s 28
				IL_02bc: ldflda valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Net.NodeGeometry::m_Bounds
				IL_02c1: call instance valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::get_xz()
				IL_02c6: stloc.s 26
				IL_02c8: ldarg.0
				IL_02c9: ldflda valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_SearchTree
				IL_02ce: ldloc.s 25
				IL_02d0: ldloca.s 27
				IL_02d2: call instance bool valuetype [Colossal.Collections]Colossal.Collections.NativeQuadTree`2<valuetype [Unity.Entities]Unity.Entities.Entity, valuetype Game.Common.QuadTreeBoundsXZ>::TryGet(!0, !1&)
				IL_02d7: brfalse.s IL_0344

				IL_02d9: ldloca.s 27
				IL_02db: ldflda valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds3 Game.Common.QuadTreeBoundsXZ::m_Bounds
				IL_02e0: call instance valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds3::get_xz()
				IL_02e5: stloc.s 29
				IL_02e7: ldloc.s 29
				IL_02e9: ldloc.s 26
				IL_02eb: call valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2 [Colossal.Mathematics]Colossal.Mathematics.Bounds2::op_BitwiseOr(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2, valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_02f0: stloc.s 30
				IL_02f2: ldloc.s 30
				IL_02f4: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Colossal.Mathematics]Colossal.Mathematics.MathUtils::Size(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_02f9: call float32 [Unity.Mathematics]Unity.Mathematics.math::length(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_02fe: ldloc.s 29
				IL_0300: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Colossal.Mathematics]Colossal.Mathematics.MathUtils::Size(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_0305: call float32 [Unity.Mathematics]Unity.Mathematics.math::length(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_030a: ldloc.s 26
				IL_030c: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Colossal.Mathematics]Colossal.Mathematics.MathUtils::Size(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2)
				IL_0311: call float32 [Unity.Mathematics]Unity.Mathematics.math::length(valuetype [Unity.Mathematics]Unity.Mathematics.float2)
				IL_0316: add
				IL_0317: bge.un.s IL_0328

				IL_0319: ldarg.0
				IL_031a: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_031f: ldloc.s 30
				IL_0321: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_0326: br.s IL_0351

				IL_0328: ldarg.0
				IL_0329: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_032e: ldloc.s 29
				IL_0330: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_0335: ldarg.0
				IL_0336: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_033b: ldloc.s 26
				IL_033d: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)
				IL_0342: br.s IL_0351

				IL_0344: ldarg.0
				IL_0345: ldflda valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem/CollectUpdatedNetBoundsJob::m_ResultQueue
				IL_034a: ldloc.s 26
				IL_034c: call instance void valuetype [Unity.Collections]Unity.Collections.NativeQueue`1/ParallelWriter<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2>::Enqueue(!0)

				IL_0351: ldloc.s 24
				IL_0353: ldc.i4.1
				IL_0354: add
				IL_0355: stloc.s 24

				IL_0357: ldloc.s 24
				IL_0359: ldloca.s 12
				IL_035b: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Length()
				IL_0360: blt IL_02a4
			// end loop

			IL_0365: ret
		} // end of method CollectUpdatedNetBoundsJob::Execute
