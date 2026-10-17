// Game.Serialization.PrefabReferences::Check 0x0600143F
	.method public hidebysig 
		instance valuetype [Unity.Entities]Unity.Entities.Entity Check (
			valuetype [Unity.Entities]Unity.Entities.EntityManager entityManager,
			valuetype [Unity.Entities]Unity.Entities.Entity prefab
		) cil managed 
	{
		// Method begins at RVA 0xc7928
		// Header size: 12
		// Code size: 250 (0xfa)
		.maxstack 5
		.locals init (
			[0] valuetype Game.Prefabs.PrefabData
		)

		IL_0000: ldarg.2
		IL_0001: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
		IL_0006: call bool [Unity.Entities]Unity.Entities.Entity::op_Equality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_000b: brfalse.s IL_0013

		IL_000d: call valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.Entity::get_Null()
		IL_0012: ret

		IL_0013: ldarg.0
		IL_0014: ldfld bool Game.Serialization.PrefabReferences::m_IsReplacing
		IL_0019: brfalse.s IL_0032

		IL_001b: ldarg.2
		IL_001c: ldarg.0
		IL_001d: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabIn
		IL_0022: call bool [Unity.Entities]Unity.Entities.Entity::op_Equality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_0027: brtrue.s IL_002b

		IL_0029: ldarg.2
		IL_002a: ret

		IL_002b: ldarg.0
		IL_002c: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_0031: ret

		IL_0032: ldarg.0
		IL_0033: ldfld bool Game.Serialization.PrefabReferences::m_IsLoading
		IL_0038: brfalse.s IL_0046

		IL_003a: ldarga.s entityManager
		IL_003c: ldarg.2
		IL_003d: call instance bool [Unity.Entities]Unity.Entities.EntityManager::HasComponent<valuetype Game.Prefabs.LoadedIndex>(valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_0042: brfalse.s IL_0046

		IL_0044: ldarg.2
		IL_0045: ret

		IL_0046: ldarg.2
		IL_0047: ldarg.0
		IL_0048: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabIn
		IL_004d: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_0052: brfalse IL_00f3

		IL_0057: ldarga.s entityManager
		IL_0059: ldarg.2
		IL_005a: call instance !!0 [Unity.Entities]Unity.Entities.EntityManager::GetComponentData<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_005f: stloc.0
		IL_0060: ldloca.s 0
		IL_0062: ldloc.0
		IL_0063: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0068: ldarg.0
		IL_0069: ldflda valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool> Game.Serialization.PrefabReferences::m_ReferencedPrefabs
		IL_006e: call instance int32 valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool>::get_Length()
		IL_0073: ldloc.0
		IL_0074: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0079: add
		IL_007a: ldloc.0
		IL_007b: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0080: ldc.i4.0
		IL_0081: clt
		IL_0083: call int32 [Unity.Mathematics]Unity.Mathematics.math::select(int32, int32, bool)
		IL_0088: stfld int32 Game.Prefabs.PrefabData::m_Index
		IL_008d: ldarg.0
		IL_008e: ldarg.2
		IL_008f: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabIn
		IL_0094: ldarg.0
		IL_0095: ldfld bool Game.Serialization.PrefabReferences::m_IsLoading
		IL_009a: brfalse.s IL_00da

		IL_009c: ldarg.0
		IL_009d: ldarg.0
		IL_009e: ldflda valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Serialization.PrefabReferences::m_PrefabArray
		IL_00a3: ldloc.0
		IL_00a4: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_00a9: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
		IL_00ae: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_00b3: ldarg.0
		IL_00b4: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_00b9: ldarg.0
		IL_00ba: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabIn
		IL_00bf: call bool [Unity.Entities]Unity.Entities.Entity::op_Equality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_00c4: brfalse.s IL_00f3

		IL_00c6: ldarg.0
		IL_00c7: ldflda valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool> Game.Serialization.PrefabReferences::m_ReferencedPrefabs
		IL_00cc: ldloc.0
		IL_00cd: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_00d2: ldc.i4.1
		IL_00d3: call instance void valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool>::set_Item(int32, !0)
		IL_00d8: br.s IL_00f3

		IL_00da: ldarg.0
		IL_00db: ldarg.2
		IL_00dc: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_00e1: ldarg.0
		IL_00e2: ldflda valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool> Game.Serialization.PrefabReferences::m_ReferencedPrefabs
		IL_00e7: ldloc.0
		IL_00e8: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_00ed: ldc.i4.1
		IL_00ee: call instance void valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool>::set_Item(int32, !0)

		IL_00f3: ldarg.0
		IL_00f4: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_00f9: ret
	} // end of method PrefabReferences::Check
