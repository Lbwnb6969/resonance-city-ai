// Game.Serialization.PrefabReferences::Check 0x0600143E
	.method public hidebysig 
		instance void Check (
			valuetype [Unity.Entities]Unity.Entities.Entity& prefab
		) cil managed 
	{
		// Method begins at RVA 0xc7848
		// Header size: 12
		// Code size: 210 (0xd2)
		.maxstack 5
		.locals init (
			[0] valuetype Game.Prefabs.PrefabData
		)

		IL_0000: ldarg.1
		IL_0001: ldobj [Unity.Entities]Unity.Entities.Entity
		IL_0006: ldarg.0
		IL_0007: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabIn
		IL_000c: call bool [Unity.Entities]Unity.Entities.Entity::op_Inequality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_0011: brfalse IL_00c5

		IL_0016: ldarg.0
		IL_0017: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabData> Game.Serialization.PrefabReferences::m_PrefabData
		IL_001c: ldarg.1
		IL_001d: ldobj [Unity.Entities]Unity.Entities.Entity
		IL_0022: call instance !0 valuetype [Unity.Entities]Unity.Entities.ComponentLookup`1<valuetype Game.Prefabs.PrefabData>::get_Item(valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_0027: stloc.0
		IL_0028: ldloca.s 0
		IL_002a: ldloc.0
		IL_002b: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0030: ldarg.0
		IL_0031: ldflda valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool> Game.Serialization.PrefabReferences::m_ReferencedPrefabs
		IL_0036: call instance int32 valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool>::get_Length()
		IL_003b: ldloc.0
		IL_003c: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0041: add
		IL_0042: ldloc.0
		IL_0043: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0048: ldc.i4.0
		IL_0049: clt
		IL_004b: call int32 [Unity.Mathematics]Unity.Mathematics.math::select(int32, int32, bool)
		IL_0050: stfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0055: ldarg.0
		IL_0056: ldarg.1
		IL_0057: ldobj [Unity.Entities]Unity.Entities.Entity
		IL_005c: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabIn
		IL_0061: ldarg.0
		IL_0062: ldfld bool Game.Serialization.PrefabReferences::m_IsLoading
		IL_0067: brfalse.s IL_00a7

		IL_0069: ldarg.0
		IL_006a: ldarg.0
		IL_006b: ldflda valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Serialization.PrefabReferences::m_PrefabArray
		IL_0070: ldloc.0
		IL_0071: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_0076: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
		IL_007b: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_0080: ldarg.0
		IL_0081: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_0086: ldarg.0
		IL_0087: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabIn
		IL_008c: call bool [Unity.Entities]Unity.Entities.Entity::op_Equality(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)
		IL_0091: brfalse.s IL_00c5

		IL_0093: ldarg.0
		IL_0094: ldflda valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool> Game.Serialization.PrefabReferences::m_ReferencedPrefabs
		IL_0099: ldloc.0
		IL_009a: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_009f: ldc.i4.1
		IL_00a0: call instance void valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool>::set_Item(int32, !0)
		IL_00a5: br.s IL_00c5

		IL_00a7: ldarg.0
		IL_00a8: ldarg.1
		IL_00a9: ldobj [Unity.Entities]Unity.Entities.Entity
		IL_00ae: stfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_00b3: ldarg.0
		IL_00b4: ldflda valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool> Game.Serialization.PrefabReferences::m_ReferencedPrefabs
		IL_00b9: ldloc.0
		IL_00ba: ldfld int32 Game.Prefabs.PrefabData::m_Index
		IL_00bf: ldc.i4.1
		IL_00c0: call instance void valuetype [Unity.Collections]Unity.Collections.LowLevel.Unsafe.UnsafeList`1<bool>::set_Item(int32, !0)

		IL_00c5: ldarg.1
		IL_00c6: ldarg.0
		IL_00c7: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Serialization.PrefabReferences::m_LastPrefabOut
		IL_00cc: stobj [Unity.Entities]Unity.Entities.Entity
		IL_00d1: ret
	} // end of method PrefabReferences::Check
