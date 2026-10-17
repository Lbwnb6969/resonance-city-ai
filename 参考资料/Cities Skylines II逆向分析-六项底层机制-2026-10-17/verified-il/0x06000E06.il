// Game.Tools.ToolApplySystem+ApplyEntitiesJob::Execute 0x06000E06
		.method public final hidebysig newslot virtual 
			instance void Execute () cil managed 
		{
			// Method begins at RVA 0x7aff0
			// Header size: 12
			// Code size: 265 (0x109)
			.maxstack 3
			.locals init (
				[0] int32,
				[1] int32,
				[2] valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk,
				[3] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
				[4] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>,
				[5] int32,
				[6] valuetype Game.Tools.Temp,
				[7] valuetype Game.City.PlayerMoney
			)

			IL_0000: ldc.i4.0
			IL_0001: stloc.0
			IL_0002: ldc.i4.0
			IL_0003: stloc.1
			IL_0004: br IL_00b3
			// loop start (head: IL_00b3)
				IL_0009: ldarg.0
				IL_000a: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_Chunks
				IL_000f: ldloc.1
				IL_0010: call instance !0 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::get_Item(int32)
				IL_0015: stloc.2
				IL_0016: ldloca.s 2
				IL_0018: ldarg.0
				IL_0019: ldfld valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_EntityType
				IL_001e: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle)
				IL_0023: stloc.3
				IL_0024: ldloca.s 2
				IL_0026: ldarg.0
				IL_0027: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Temp> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_TempType
				IL_002c: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Tools.Temp>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
				IL_0031: stloc.s 4
				IL_0033: ldloca.s 2
				IL_0035: ldarg.0
				IL_0036: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Warning> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_WarningType
				IL_003b: call instance bool [Unity.Entities]Unity.Entities.ArchetypeChunk::Has<valuetype Game.Tools.Warning>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
				IL_0040: brfalse.s IL_004e

				IL_0042: ldarg.0
				IL_0043: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_CommandBuffer
				IL_0048: ldloc.3
				IL_0049: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::AddComponent<valuetype Game.Common.Deleted>(valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)

				IL_004e: ldloca.s 2
				IL_0050: ldarg.0
				IL_0051: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Tools.Override> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_OverrideType
				IL_0056: call instance bool [Unity.Entities]Unity.Entities.ArchetypeChunk::Has<valuetype Game.Tools.Override>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
				IL_005b: brfalse.s IL_0075

				IL_005d: ldarg.0
				IL_005e: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_CommandBuffer
				IL_0063: ldloc.3
				IL_0064: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::AddComponent<valuetype Game.Common.Updated>(valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)
				IL_0069: ldarg.0
				IL_006a: ldflda valuetype [Unity.Entities]Unity.Entities.EntityCommandBuffer Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_CommandBuffer
				IL_006f: ldloc.3
				IL_0070: call instance void [Unity.Entities]Unity.Entities.EntityCommandBuffer::AddComponent<valuetype Game.Common.Overridden>(valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)

				IL_0075: ldc.i4.0
				IL_0076: stloc.s 5
				IL_0078: br.s IL_00a4
				// loop start (head: IL_00a4)
					IL_007a: ldloca.s 4
					IL_007c: ldloc.s 5
					IL_007e: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Item(int32)
					IL_0083: stloc.s 6
					IL_0085: ldloc.s 6
					IL_0087: ldfld valuetype Game.Tools.TempFlags Game.Tools.Temp::m_Flags
					IL_008c: ldc.i4 32768
					IL_0091: and
					IL_0092: brtrue.s IL_009e

					IL_0094: ldloc.0
					IL_0095: ldloc.s 6
					IL_0097: ldfld int32 Game.Tools.Temp::m_Cost
					IL_009c: add
					IL_009d: stloc.0

					IL_009e: ldloc.s 5
					IL_00a0: ldc.i4.1
					IL_00a1: add
					IL_00a2: stloc.s 5

					IL_00a4: ldloc.s 5
					IL_00a6: ldloca.s 4
					IL_00a8: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Tools.Temp>::get_Length()
					IL_00ad: blt.s IL_007a
				// end loop

				IL_00af: ldloc.1
				IL_00b0: ldc.i4.1
				IL_00b1: add
				IL_00b2: stloc.1

				IL_00b3: ldloc.1
				IL_00b4: ldarg.0
				IL_00b5: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_Chunks
				IL_00ba: call instance int32 valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::get_Length()
				IL_00bf: blt IL_0009
			// end loop

			IL_00c4: ldloc.0
			IL_00c5: brfalse.s IL_0108

			IL_00c7: ldarg.0
			IL_00c8: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.City.PlayerMoney> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_PlayerMoney
			IL_00cd: ldarg.0
			IL_00ce: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_City
			IL_00d3: call instance bool valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.City.PlayerMoney>::HasComponent(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_00d8: brfalse.s IL_0108

			IL_00da: ldarg.0
			IL_00db: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.City.PlayerMoney> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_PlayerMoney
			IL_00e0: ldarg.0
			IL_00e1: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_City
			IL_00e6: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.City.PlayerMoney>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
			IL_00eb: stloc.s 7
			IL_00ed: ldloca.s 7
			IL_00ef: ldloc.0
			IL_00f0: call instance void Game.City.PlayerMoney::Subtract(int32)
			IL_00f5: ldarg.0
			IL_00f6: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.City.PlayerMoney> Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_PlayerMoney
			IL_00fb: ldarg.0
			IL_00fc: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Tools.ToolApplySystem/ApplyEntitiesJob::m_City
			IL_0101: ldloc.s 7
			IL_0103: call instance void valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.City.PlayerMoney>::set_Item(valuetype [Unity.Entities]Unity.Entities.Entity, !0)

			IL_0108: ret
		} // end of method ApplyEntitiesJob::Execute
