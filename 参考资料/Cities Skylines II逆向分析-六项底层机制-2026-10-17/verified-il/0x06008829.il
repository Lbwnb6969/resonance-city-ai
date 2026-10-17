// Game.Prefabs.PrefabSystem::UpdatePrefabs 0x06008829
	.method private hidebysig 
		instance bool UpdatePrefabs () cil managed 
	{
		// Method begins at RVA 0x4fe7f4
		// Header size: 12
		// Code size: 469 (0x1d5)
		.maxstack 5
		.locals init (
			[0] valuetype [mscorlib]System.Collections.Generic.Dictionary`2/Enumerator<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>,
			[1] valuetype [mscorlib]System.Collections.Generic.KeyValuePair`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>,
			[2] class Game.Prefabs.PrefabBase,
			[3] valuetype [Unity.Entities]Unity.Entities.Entity,
			[4] valuetype [Unity.Entities]Unity.Entities.Entity,
			[5] class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>,
			[6] class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>,
			[7] valuetype [Unity.Entities]Unity.Entities.Entity,
			[8] valuetype [Unity.Entities]Unity.Entities.EntityManager,
			[9] int32,
			[10] valuetype [Unity.Entities]Unity.Entities.EntityManager,
			[11] class [mscorlib]System.Exception,
			[12] bool
		)

		IL_0000: ldarg.0
		IL_0001: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.PrefabSystem::m_UpdateMap
		IL_0006: callvirt instance int32 class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::get_Count()
		IL_000b: brtrue.s IL_000f

		IL_000d: ldc.i4.0
		IL_000e: ret

		IL_000f: nop
		.try
		{
			IL_0010: ldarg.0
			IL_0011: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.PrefabSystem::m_UpdateMap
			IL_0016: callvirt instance valuetype [mscorlib]System.Collections.Generic.Dictionary`2/Enumerator<!0, !1> class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::GetEnumerator()
			IL_001b: stloc.0
			.try
			{
				IL_001c: br IL_01ab
				// loop start (head: IL_01ab)
					IL_0021: ldloca.s 0
					IL_0023: call instance valuetype [mscorlib]System.Collections.Generic.KeyValuePair`2<!0, !1> valuetype [mscorlib]System.Collections.Generic.Dictionary`2/Enumerator<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::get_Current()
					IL_0028: stloc.1
					IL_0029: ldloca.s 1
					IL_002b: call instance !0 valuetype [mscorlib]System.Collections.Generic.KeyValuePair`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::get_Key()
					IL_0030: stloc.2
					IL_0031: ldloca.s 1
					IL_0033: call instance !1 valuetype [mscorlib]System.Collections.Generic.KeyValuePair`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::get_Value()
					IL_0038: stloc.3
					.try
					{
						IL_0039: ldarg.0
						IL_003a: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.PrefabSystem::m_Entities
						IL_003f: ldloc.2
						IL_0040: ldloca.s 4
						IL_0042: callvirt instance bool class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::TryGetValue(!0, !1&)
						IL_0047: brfalse IL_0159

						IL_004c: ldarg.0
						IL_004d: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
						IL_0052: stloc.s 8
						IL_0054: ldloca.s 8
						IL_0056: ldloc.s 4
						IL_0058: call instance bool [Unity.Entities]Unity.Entities.EntityManager::AddComponent<valuetype Game.Common.Deleted>(valuetype [Unity.Entities]Unity.Entities.Entity)
						IL_005d: pop
						IL_005e: newobj instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::.ctor()
						IL_0063: stloc.s 5
						IL_0065: ldloc.2
						IL_0066: ldloc.s 5
						IL_0068: callvirt instance bool Game.Prefabs.ComponentBase::GetComponents<class Game.Prefabs.ComponentBase>(class [mscorlib]System.Collections.Generic.List`1<!!0>)
						IL_006d: pop
						IL_006e: newobj instance void class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::.ctor()
						IL_0073: stloc.s 6
						IL_0075: ldc.i4.0
						IL_0076: stloc.s 9
						IL_0078: br.s IL_0090
						// loop start (head: IL_0090)
							IL_007a: ldloc.s 5
							IL_007c: ldloc.s 9
							IL_007e: callvirt instance !0 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Item(int32)
							IL_0083: ldloc.s 6
							IL_0085: callvirt instance void Game.Prefabs.ComponentBase::GetPrefabComponents(class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>)
							IL_008a: ldloc.s 9
							IL_008c: ldc.i4.1
							IL_008d: add
							IL_008e: stloc.s 9

							IL_0090: ldloc.s 9
							IL_0092: ldloc.s 5
							IL_0094: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Count()
							IL_0099: blt.s IL_007a
						// end loop

						IL_009b: ldarg.0
						IL_009c: ldloc.2
						IL_009d: call instance bool Game.Prefabs.PrefabSystem::IsUnlockable(class Game.Prefabs.PrefabBase)
						IL_00a2: dup
						IL_00a3: brfalse.s IL_00bf

						IL_00a5: ldloc.s 6
						IL_00a7: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Prefabs.UnlockRequirement>()
						IL_00ac: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
						IL_00b1: pop
						IL_00b2: ldloc.s 6
						IL_00b4: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Prefabs.Locked>()
						IL_00b9: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
						IL_00be: pop

						IL_00bf: ldloc.s 6
						IL_00c1: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Common.Created>()
						IL_00c6: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
						IL_00cb: pop
						IL_00cc: ldloc.s 6
						IL_00ce: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Common.Updated>()
						IL_00d3: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
						IL_00d8: pop
						IL_00d9: ldarg.0
						IL_00da: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
						IL_00df: stloc.s 8
						IL_00e1: ldloca.s 8
						IL_00e3: ldloc.s 6
						IL_00e5: call !!0[] Game.Prefabs.PrefabUtils::ToArray<valuetype [Unity.Entities]Unity.Entities.ComponentType>(class [System.Core]System.Collections.Generic.HashSet`1<!!0>)
						IL_00ea: call instance valuetype [Unity.Entities]Unity.Entities.Entity [Unity.Entities]Unity.Entities.EntityManager::CreateEntity(valuetype [Unity.Entities]Unity.Entities.ComponentType[])
						IL_00ef: stloc.s 7
						IL_00f1: ldarg.0
						IL_00f2: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
						IL_00f7: stloc.s 8
						IL_00f9: ldloca.s 8
						IL_00fb: ldloc.s 7
						IL_00fd: ldarg.0
						IL_00fe: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
						IL_0103: stloc.s 10
						IL_0105: ldloca.s 10
						IL_0107: ldloc.s 4
						IL_0109: call instance !!0 [Unity.Entities]Unity.Entities.EntityManager::GetComponentData<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.Entity)
						IL_010e: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentData<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
						IL_0113: brfalse.s IL_0136

						IL_0115: ldarg.0
						IL_0116: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
						IL_011b: ldloc.s 4
						IL_011d: call bool [Colossal.Core]Colossal.Entities.EntitiesExtensions::HasEnabledComponent<valuetype Game.Prefabs.Locked>(valuetype [Unity.Entities]Unity.Entities.EntityManager, valuetype [Unity.Entities]Unity.Entities.Entity)
						IL_0122: brtrue.s IL_0136

						IL_0124: ldarg.0
						IL_0125: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
						IL_012a: stloc.s 8
						IL_012c: ldloca.s 8
						IL_012e: ldloc.s 7
						IL_0130: ldc.i4.0
						IL_0131: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentEnabled<valuetype Game.Prefabs.Locked>(valuetype [Unity.Entities]Unity.Entities.Entity, bool)

						IL_0136: ldarg.0
						IL_0137: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.PrefabSystem::m_Entities
						IL_013c: ldloc.2
						IL_013d: ldloc.s 7
						IL_013f: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::set_Item(!0, !1)
						IL_0144: ldarg.0
						IL_0145: call instance class [Unity.Entities]Unity.Entities.World [Unity.Entities]Unity.Entities.ComponentSystemBase::get_World()
						IL_014a: callvirt instance !!0 [Unity.Entities]Unity.Entities.World::GetOrCreateSystemManaged<class Game.Prefabs.ReplacePrefabSystem>()
						IL_014f: ldloc.s 4
						IL_0151: ldloc.s 7
						IL_0153: ldloc.3
						IL_0154: callvirt instance void Game.Prefabs.ReplacePrefabSystem::ReplacePrefab(valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity, valuetype [Unity.Entities]Unity.Entities.Entity)

						IL_0159: leave.s IL_01ab
					} // end .try
					catch [mscorlib]System.Exception
					{
						IL_015b: stloc.s 11
						IL_015d: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
						IL_0162: callvirt instance bool [Colossal.Logging]Colossal.Logging.ILog::get_showsErrorsInUI()
						IL_0167: stloc.s 12
						IL_0169: call class Game.SceneFlow.GameManager Game.SceneFlow.GameManager::get_instance()
						IL_016e: callvirt instance valuetype Game.GameMode Game.SceneFlow.GameManager::get_gameMode()
						IL_0173: call bool Game.GameModeExtensions::IsEditor(valuetype Game.GameMode)
						IL_0178: brfalse.s IL_0185

						IL_017a: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
						IL_017f: ldc.i4.0
						IL_0180: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)

						IL_0185: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
						IL_018a: ldloc.2
						IL_018b: ldloc.s 11
						IL_018d: ldstr "Error when updating prefab: {0}"
						IL_0192: ldloc.2
						IL_0193: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
						IL_0198: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::ErrorFormat(class [UnityEngine.CoreModule]UnityEngine.Object, class [mscorlib]System.Exception, string, object)
						IL_019d: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
						IL_01a2: ldloc.s 12
						IL_01a4: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)
						IL_01a9: leave.s IL_01ab
					} // end handler

					IL_01ab: ldloca.s 0
					IL_01ad: call instance bool valuetype [mscorlib]System.Collections.Generic.Dictionary`2/Enumerator<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::MoveNext()
					IL_01b2: brtrue IL_0021
				// end loop

				IL_01b7: leave.s IL_01d3
			} // end .try
			finally
			{
				IL_01b9: ldloca.s 0
				IL_01bb: constrained. valuetype [mscorlib]System.Collections.Generic.Dictionary`2/Enumerator<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>
				IL_01c1: callvirt instance void [mscorlib]System.IDisposable::Dispose()
				IL_01c6: endfinally
			} // end handler
		} // end .try
		finally
		{
			IL_01c7: ldarg.0
			IL_01c8: ldfld class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity> Game.Prefabs.PrefabSystem::m_UpdateMap
			IL_01cd: callvirt instance void class [mscorlib]System.Collections.Generic.Dictionary`2<class Game.Prefabs.PrefabBase, valuetype [Unity.Entities]Unity.Entities.Entity>::Clear()
			IL_01d2: endfinally
		} // end handler

		IL_01d3: ldc.i4.1
		IL_01d4: ret
	} // end of method PrefabSystem::UpdatePrefabs
