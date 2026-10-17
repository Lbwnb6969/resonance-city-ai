// Game.Prefabs.PrefabSystem::AddPrefab 0x06008800
	.method public hidebysig 
		instance bool AddPrefab (
			class Game.Prefabs.PrefabBase prefab,
			[opt] string parentName,
			[opt] class Game.Prefabs.PrefabBase parentPrefab,
			[opt] class Game.Prefabs.ComponentBase parentComponent
		) cil managed 
	{
		.param [2] = nullref
		.param [3] = nullref
		.param [4] = nullref
		// Method begins at RVA 0x4fd510
		// Header size: 12
		// Code size: 822 (0x336)
		.maxstack 6
		.locals init (
			[0] class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>,
			[1] class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>,
			[2] valuetype [Unity.Entities]Unity.Entities.Entity,
			[3] valuetype Game.Prefabs.PrefabData,
			[4] valuetype Game.Prefabs.PrefabID,
			[5] valuetype Game.Prefabs.PrefabID,
			[6] class Game.Prefabs.ObsoleteIdentifiers,
			[7] bool,
			[8] int32,
			[9] valuetype [Unity.Entities]Unity.Entities.EntityManager,
			[10] valuetype [Colossal.Core]Colossal.Hash128,
			[11] int32,
			[12] class [mscorlib]System.Exception
		)

		IL_0000: ldarg.1
		IL_0001: ldnull
		IL_0002: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Equality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
		IL_0007: brfalse.s IL_0085

		IL_0009: ldarg.2
		IL_000a: brfalse.s IL_001e

		IL_000c: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
		IL_0011: ldstr "Trying to add null prefab in {0}"
		IL_0016: ldarg.2
		IL_0017: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::WarnFormat(string, object)
		IL_001c: br.s IL_0083

		IL_001e: ldarg.3
		IL_001f: ldnull
		IL_0020: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
		IL_0025: brfalse.s IL_004f

		IL_0027: ldarg.s parentComponent
		IL_0029: ldnull
		IL_002a: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
		IL_002f: brfalse.s IL_004f

		IL_0031: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
		IL_0036: ldstr "Trying to add null prefab in {0}/{1}"
		IL_003b: ldarg.3
		IL_003c: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
		IL_0041: ldarg.s parentComponent
		IL_0043: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
		IL_0048: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::WarnFormat(string, object, object)
		IL_004d: br.s IL_0083

		IL_004f: ldarg.3
		IL_0050: ldnull
		IL_0051: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
		IL_0056: brfalse.s IL_006f

		IL_0058: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
		IL_005d: ldstr "Trying to add null prefab in {0}"
		IL_0062: ldarg.3
		IL_0063: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
		IL_0068: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::WarnFormat(string, object)
		IL_006d: br.s IL_0083

		IL_006f: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
		IL_0074: ldstr "Trying to add null prefab"
		IL_0079: call !!0[] [mscorlib]System.Array::Empty<object>()
		IL_007e: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::WarnFormat(string, object[])

		IL_0083: ldc.i4.0
		IL_0084: ret

		IL_0085: nop
		.try
		{
			IL_0086: ldarg.0
			IL_0087: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.PrefabSystem::m_Entities
			IL_008c: ldarg.1
			IL_008d: callvirt instance bool class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::ContainsKey(!0)
			IL_0092: brtrue IL_0313

			IL_0097: ldarg.0
			IL_0098: ldarg.1
			IL_0099: call instance bool Game.Prefabs.PrefabSystem::IsAvailable(class Game.Prefabs.PrefabBase)
			IL_009e: brtrue.s IL_00fc

			IL_00a0: ldarg.3
			IL_00a1: ldnull
			IL_00a2: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
			IL_00a7: brfalse.s IL_00f4

			IL_00a9: ldarg.s parentComponent
			IL_00ab: ldnull
			IL_00ac: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
			IL_00b1: brfalse.s IL_00d8

			IL_00b3: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_00b8: ldarg.1
			IL_00b9: ldstr "Dependency not available in {0}/{1}: {2}"
			IL_00be: ldarg.3
			IL_00bf: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_00c4: ldarg.s parentComponent
			IL_00c6: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_00cb: ldarg.1
			IL_00cc: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_00d1: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::ErrorFormat(class [UnityEngine.CoreModule]UnityEngine.Object, string, object, object, object)
			IL_00d6: br.s IL_00f4

			IL_00d8: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_00dd: ldarg.1
			IL_00de: ldstr "Dependency not available in {0}: {1}"
			IL_00e3: ldarg.3
			IL_00e4: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_00e9: ldarg.1
			IL_00ea: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_00ef: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::ErrorFormat(class [UnityEngine.CoreModule]UnityEngine.Object, string, object, object)

			IL_00f4: ldc.i4.0
			IL_00f5: stloc.s 7
			IL_00f7: leave IL_0333

			IL_00fc: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_0101: ldarg.1
			IL_0102: ldstr "Adding prefab '{0}'"
			IL_0107: ldarg.1
			IL_0108: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_010d: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::VerboseFormat(class [UnityEngine.CoreModule]UnityEngine.Object, string, object)
			IL_0112: newobj instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::.ctor()
			IL_0117: stloc.0
			IL_0118: ldarg.1
			IL_0119: ldloc.0
			IL_011a: callvirt instance bool Game.Prefabs.ComponentBase::GetComponents<class Game.Prefabs.ComponentBase>(class [mscorlib]System.Collections.Generic.List`1<!!0>)
			IL_011f: pop
			IL_0120: newobj instance void class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::.ctor()
			IL_0125: stloc.1
			IL_0126: ldc.i4.0
			IL_0127: stloc.s 8
			IL_0129: br.s IL_013f
			// loop start (head: IL_013f)
				IL_012b: ldloc.0
				IL_012c: ldloc.s 8
				IL_012e: callvirt instance !0 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Item(int32)
				IL_0133: ldloc.1
				IL_0134: callvirt instance void Game.Prefabs.ComponentBase::GetPrefabComponents(class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>)
				IL_0139: ldloc.s 8
				IL_013b: ldc.i4.1
				IL_013c: add
				IL_013d: stloc.s 8

				IL_013f: ldloc.s 8
				IL_0141: ldloc.0
				IL_0142: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Count()
				IL_0147: blt.s IL_012b
			// end loop

			IL_0149: ldarg.0
			IL_014a: ldarg.1
			IL_014b: call instance bool Game.Prefabs.PrefabSystem::IsUnlockable(class Game.Prefabs.PrefabBase)
			IL_0150: brfalse.s IL_017b

			IL_0152: ldloc.1
			IL_0153: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Prefabs.UnlockRequirement>()
			IL_0158: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
			IL_015d: pop
			IL_015e: ldloc.1
			IL_015f: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Prefabs.Locked>()
			IL_0164: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
			IL_0169: pop
			IL_016a: ldarg.0
			IL_016b: ldfld class [Colossal.Logging]Colossal.Logging.ILog Game.Prefabs.PrefabSystem::m_UnlockingLog
			IL_0170: ldstr "Prefab locked: {0}"
			IL_0175: ldarg.1
			IL_0176: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::DebugFormat(string, object)

			IL_017b: ldloc.1
			IL_017c: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Common.Created>()
			IL_0181: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
			IL_0186: pop
			IL_0187: ldloc.1
			IL_0188: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Common.Updated>()
			IL_018d: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
			IL_0192: pop
			IL_0193: ldarg.0
			IL_0194: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_0199: stloc.s 9
			IL_019b: ldloca.s 9
			IL_019d: ldloc.1
			IL_019e: call !!0[] Game.Prefabs.PrefabUtils::ToArray<valuetype [Unity.Entities]Unity.Entities.ComponentType>(class [System.Core]System.Collections.Generic.HashSet`1<!!0>)
			IL_01a3: call instance valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.EntityManager::CreateEntity(valuetype [Unity.Entities]Unity.Entities.ComponentType[])
			IL_01a8: stloc.2
			IL_01a9: ldloca.s 3
			IL_01ab: initobj Game.Prefabs.PrefabData
			IL_01b1: ldloca.s 3
			IL_01b3: ldarg.0
			IL_01b4: ldfld class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase> Game.Prefabs.PrefabSystem::m_Prefabs
			IL_01b9: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::get_Count()
			IL_01be: stfld int32 Game.Prefabs.PrefabData::m_Index
			IL_01c3: ldarg.0
			IL_01c4: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_01c9: stloc.s 9
			IL_01cb: ldloca.s 9
			IL_01cd: ldloc.2
			IL_01ce: ldloc.3
			IL_01cf: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentData<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
			IL_01d4: ldarg.1
			IL_01d5: ldloca.s 10
			IL_01d7: initobj [Colossal.Core]Colossal.Hash128
			IL_01dd: ldloc.s 10
			IL_01df: callvirt instance valuetype Game.Prefabs.PrefabID Game.Prefabs.PrefabBase::GetPrefabID(valuetype [Colossal.Core]Colossal.Hash128)
			IL_01e4: stloc.s 4
			IL_01e6: ldarg.0
			IL_01e7: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32> Game.Prefabs.PrefabSystem::m_PrefabIndices
			IL_01ec: ldloc.s 4
			IL_01ee: callvirt instance bool class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32>::ContainsKey(!0)
			IL_01f3: brfalse.s IL_020e

			IL_01f5: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_01fa: ldarg.1
			IL_01fb: ldstr "Duplicate prefab ID: {0}"
			IL_0200: ldloc.s 4
			IL_0202: box Game.Prefabs.PrefabID
			IL_0207: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::WarnFormat(class [UnityEngine.CoreModule]UnityEngine.Object, string, object)
			IL_020c: br.s IL_0226

			IL_020e: ldarg.0
			IL_020f: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32> Game.Prefabs.PrefabSystem::m_PrefabIndices
			IL_0214: ldloc.s 4
			IL_0216: ldarg.0
			IL_0217: ldfld class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase> Game.Prefabs.PrefabSystem::m_Prefabs
			IL_021c: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::get_Count()
			IL_0221: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32>::Add(!0, !1)

			IL_0226: ldarg.1
			IL_0227: ldloca.s 5
			IL_0229: call bool Game.Prefabs.PrefabSystem::TryGetLegacyModPrefabID(class Game.Prefabs.PrefabBase, valuetype Game.Prefabs.PrefabID&)
			IL_022e: brfalse.s IL_0257

			IL_0230: ldarg.0
			IL_0231: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32> Game.Prefabs.PrefabSystem::m_PrefabIndices
			IL_0236: ldloc.s 5
			IL_0238: callvirt instance bool class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32>::ContainsKey(!0)
			IL_023d: brtrue.s IL_0257

			IL_023f: ldarg.0
			IL_0240: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32> Game.Prefabs.PrefabSystem::m_PrefabIndices
			IL_0245: ldloc.s 5
			IL_0247: ldarg.0
			IL_0248: ldfld class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase> Game.Prefabs.PrefabSystem::m_Prefabs
			IL_024d: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::get_Count()
			IL_0252: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32>::Add(!0, !1)

			IL_0257: ldarg.1
			IL_0258: ldloca.s 6
			IL_025a: callvirt instance bool Game.Prefabs.PrefabBase::TryGet<class Game.Prefabs.ObsoleteIdentifiers>(!!0&)
			IL_025f: brfalse IL_02f5

			IL_0264: ldloc.s 6
			IL_0266: ldfld class Game.Prefabs.PrefabIdentifierInfo[] Game.Prefabs.ObsoleteIdentifiers::m_PrefabIdentifiers
			IL_026b: brfalse IL_02f5

			IL_0270: ldc.i4.0
			IL_0271: stloc.s 11
			IL_0273: br.s IL_02e8
			// loop start (head: IL_02e8)
				IL_0275: ldloc.s 6
				IL_0277: ldfld class Game.Prefabs.PrefabIdentifierInfo[] Game.Prefabs.ObsoleteIdentifiers::m_PrefabIdentifiers
				IL_027c: ldloc.s 11
				IL_027e: ldelem.ref
				IL_027f: callvirt instance valuetype Game.Prefabs.PrefabID Game.Prefabs.PrefabIdentifierInfo::GetPrefabID()
				IL_0284: stloc.s 4
				IL_0286: ldarg.0
				IL_0287: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32> Game.Prefabs.PrefabSystem::m_PrefabIndices
				IL_028c: ldloc.s 4
				IL_028e: callvirt instance bool class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32>::ContainsKey(!0)
				IL_0293: brfalse.s IL_02ca

				IL_0295: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
				IL_029a: ldarg.1
				IL_029b: ldstr "Duplicate prefab ID: {0} ({1})"
				IL_02a0: ldloc.s 4
				IL_02a2: box Game.Prefabs.PrefabID
				IL_02a7: ldarg.1
				IL_02a8: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()
				IL_02ad: ldnull
				IL_02ae: call bool [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData::op_Inequality(class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData, class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.IAssetData)
				IL_02b3: brtrue.s IL_02bd

				IL_02b5: ldarg.1
				IL_02b6: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
				IL_02bb: br.s IL_02c3

				IL_02bd: ldarg.1
				IL_02be: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()

				IL_02c3: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::WarnFormat(class [UnityEngine.CoreModule]UnityEngine.Object, string, object, object)
				IL_02c8: br.s IL_02e2

				IL_02ca: ldarg.0
				IL_02cb: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32> Game.Prefabs.PrefabSystem::m_PrefabIndices
				IL_02d0: ldloc.s 4
				IL_02d2: ldarg.0
				IL_02d3: ldfld class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase> Game.Prefabs.PrefabSystem::m_Prefabs
				IL_02d8: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::get_Count()
				IL_02dd: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<valuetype Game.Prefabs.PrefabID, int32>::Add(!0, !1)

				IL_02e2: ldloc.s 11
				IL_02e4: ldc.i4.1
				IL_02e5: add
				IL_02e6: stloc.s 11

				IL_02e8: ldloc.s 11
				IL_02ea: ldloc.s 6
				IL_02ec: ldfld class Game.Prefabs.PrefabIdentifierInfo[] Game.Prefabs.ObsoleteIdentifiers::m_PrefabIdentifiers
				IL_02f1: ldlen
				IL_02f2: conv.i4
				IL_02f3: blt.s IL_0275
			// end loop

			IL_02f5: ldarg.0
			IL_02f6: ldfld class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase> Game.Prefabs.PrefabSystem::m_Prefabs
			IL_02fb: ldarg.1
			IL_02fc: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::Add(!0)
			IL_0301: ldarg.0
			IL_0302: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.PrefabSystem::m_Entities
			IL_0307: ldarg.1
			IL_0308: ldloc.2
			IL_0309: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::Add(!0, !1)
			IL_030e: ldc.i4.1
			IL_030f: stloc.s 7
			IL_0311: leave.s IL_0333

			IL_0313: leave.s IL_0331
		} // end .try
		catch [mscorlib]System.Exception
		{
			IL_0315: stloc.s 12
			IL_0317: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_031c: ldarg.1
			IL_031d: ldloc.s 12
			IL_031f: ldstr "Error when adding prefab: {0}"
			IL_0324: ldarg.1
			IL_0325: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_032a: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::ErrorFormat(class [UnityEngine.CoreModule]UnityEngine.Object, class [mscorlib]System.Exception, string, object)
			IL_032f: leave.s IL_0331
		} // end handler

		IL_0331: ldc.i4.0
		IL_0332: ret

		IL_0333: ldloc.s 7
		IL_0335: ret
	} // end of method PrefabSystem::AddPrefab
