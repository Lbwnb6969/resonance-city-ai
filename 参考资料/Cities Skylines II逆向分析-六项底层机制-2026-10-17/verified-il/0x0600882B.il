// Game.Prefabs.PrefabSystem::Deserialize 0x0600882B
	.method public final hidebysig newslot virtual 
		instance void Deserialize<([Colossal.Core]Colossal.Serialization.Entities.IReader) TReader> (
			!!TReader reader
		) cil managed 
	{
		// Method begins at RVA 0x4feb7c
		// Header size: 12
		// Code size: 309 (0x135)
		.maxstack 4
		.locals init (
			[0] int32,
			[1] int32,
			[2] valuetype [Colossal.Core]Colossal.Serialization.Entities.Context,
			[3] int32,
			[4] valuetype Game.Prefabs.PrefabID,
			[5] class Game.Prefabs.PrefabBase,
			[6] valuetype Game.Prefabs.PrefabSystem/LoadedIndexData,
			[7] int32,
			[8] int32,
			[9] valuetype Game.Prefabs.PrefabID,
			[10] class Game.Prefabs.PrefabBase
		)

		IL_0000: ldarg.0
		IL_0001: ldfld class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/ObsoleteData> Game.Prefabs.PrefabSystem::m_ObsoleteIDs
		IL_0006: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/ObsoleteData>::Clear()
		IL_000b: ldarg.0
		IL_000c: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<int32, valuetype Game.Prefabs.PrefabID> Game.Prefabs.PrefabSystem::m_LoadedObsoleteIDs
		IL_0011: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<int32, valuetype Game.Prefabs.PrefabID>::Clear()
		IL_0016: ldarg.0
		IL_0017: ldfld class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/LoadedIndexData> Game.Prefabs.PrefabSystem::m_LoadedIndexData
		IL_001c: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/LoadedIndexData>::Clear()
		IL_0021: ldarga.s reader
		IL_0023: ldloca.s 0
		IL_0025: constrained. !!TReader
		IL_002b: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IReader::Read(int32&)
		IL_0030: ldc.i4.0
		IL_0031: stloc.1
		IL_0032: ldarga.s reader
		IL_0034: constrained. !!TReader
		IL_003a: callvirt instance valuetype [Colossal.Core]Colossal.Serialization.Entities.Context [Colossal.Core]Colossal.Serialization.Entities.IReader::get_context()
		IL_003f: stloc.2
		IL_0040: ldloca.s 2
		IL_0042: call instance valuetype [Colossal.Core]Colossal.Version [Colossal.Core]Colossal.Serialization.Entities.Context::get_version()
		IL_0047: ldsfld valuetype [Colossal.Core]Colossal.Version Game.Version::obsoletePrefabFix
		IL_004c: call bool [Colossal.Core]Colossal.Version::op_GreaterThanOrEqual(valuetype [Colossal.Core]Colossal.Version, valuetype [Colossal.Core]Colossal.Version)
		IL_0051: brfalse.s IL_0062

		IL_0053: ldarga.s reader
		IL_0055: ldloca.s 1
		IL_0057: constrained. !!TReader
		IL_005d: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IReader::Read(int32&)

		IL_0062: ldc.i4.0
		IL_0063: stloc.3
		IL_0064: br.s IL_00c1
		// loop start (head: IL_00c1)
			IL_0066: ldarga.s reader
			IL_0068: ldloca.s 4
			IL_006a: constrained. !!TReader
			IL_0070: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IReader::Read<valuetype Game.Prefabs.PrefabID>(!!0&)
			IL_0075: ldarg.0
			IL_0076: ldloc.s 4
			IL_0078: ldloca.s 5
			IL_007a: call instance bool Game.Prefabs.PrefabSystem::TryGetPrefab(valuetype Game.Prefabs.PrefabID, class Game.Prefabs.PrefabBase&)
			IL_007f: brfalse.s IL_00af

			IL_0081: ldarg.0
			IL_0082: ldfld class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/LoadedIndexData> Game.Prefabs.PrefabSystem::m_LoadedIndexData
			IL_0087: ldloca.s 6
			IL_0089: initobj Game.Prefabs.PrefabSystem/LoadedIndexData
			IL_008f: ldloca.s 6
			IL_0091: ldarg.0
			IL_0092: ldloc.s 5
			IL_0094: call instance valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabSystem::GetEntity(class Game.Prefabs.PrefabBase)
			IL_0099: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabSystem/LoadedIndexData::m_Entity
			IL_009e: ldloca.s 6
			IL_00a0: ldloc.3
			IL_00a1: stfld int32 Game.Prefabs.PrefabSystem/LoadedIndexData::m_Index
			IL_00a6: ldloc.s 6
			IL_00a8: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/LoadedIndexData>::Add(!0)
			IL_00ad: br.s IL_00bd

			IL_00af: ldarg.0
			IL_00b0: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<int32, valuetype Game.Prefabs.PrefabID> Game.Prefabs.PrefabSystem::m_LoadedObsoleteIDs
			IL_00b5: ldloc.3
			IL_00b6: ldloc.s 4
			IL_00b8: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<int32, valuetype Game.Prefabs.PrefabID>::Add(!0, !1)

			IL_00bd: ldloc.3
			IL_00be: ldc.i4.1
			IL_00bf: add
			IL_00c0: stloc.3

			IL_00c1: ldloc.3
			IL_00c2: ldloc.0
			IL_00c3: blt.s IL_0066
		// end loop

		IL_00c5: ldc.i4.0
		IL_00c6: stloc.s 7
		IL_00c8: br.s IL_012f
		// loop start (head: IL_012f)
			IL_00ca: ldc.i4.m1
			IL_00cb: ldloc.s 7
			IL_00cd: sub
			IL_00ce: stloc.s 8
			IL_00d0: ldarga.s reader
			IL_00d2: ldloca.s 9
			IL_00d4: constrained. !!TReader
			IL_00da: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IReader::Read<valuetype Game.Prefabs.PrefabID>(!!0&)
			IL_00df: ldarg.0
			IL_00e0: ldloc.s 9
			IL_00e2: ldloca.s 10
			IL_00e4: call instance bool Game.Prefabs.PrefabSystem::TryGetPrefab(valuetype Game.Prefabs.PrefabID, class Game.Prefabs.PrefabBase&)
			IL_00e9: brfalse.s IL_011a

			IL_00eb: ldarg.0
			IL_00ec: ldfld class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/LoadedIndexData> Game.Prefabs.PrefabSystem::m_LoadedIndexData
			IL_00f1: ldloca.s 6
			IL_00f3: initobj Game.Prefabs.PrefabSystem/LoadedIndexData
			IL_00f9: ldloca.s 6
			IL_00fb: ldarg.0
			IL_00fc: ldloc.s 10
			IL_00fe: call instance valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabSystem::GetEntity(class Game.Prefabs.PrefabBase)
			IL_0103: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabSystem/LoadedIndexData::m_Entity
			IL_0108: ldloca.s 6
			IL_010a: ldloc.s 8
			IL_010c: stfld int32 Game.Prefabs.PrefabSystem/LoadedIndexData::m_Index
			IL_0111: ldloc.s 6
			IL_0113: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabSystem/LoadedIndexData>::Add(!0)
			IL_0118: br.s IL_0129

			IL_011a: ldarg.0
			IL_011b: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<int32, valuetype Game.Prefabs.PrefabID> Game.Prefabs.PrefabSystem::m_LoadedObsoleteIDs
			IL_0120: ldloc.s 8
			IL_0122: ldloc.s 9
			IL_0124: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<int32, valuetype Game.Prefabs.PrefabID>::Add(!0, !1)

			IL_0129: ldloc.s 7
			IL_012b: ldc.i4.1
			IL_012c: add
			IL_012d: stloc.s 7

			IL_012f: ldloc.s 7
			IL_0131: ldloc.1
			IL_0132: blt.s IL_00ca
		// end loop

		IL_0134: ret
	} // end of method PrefabSystem::Deserialize
