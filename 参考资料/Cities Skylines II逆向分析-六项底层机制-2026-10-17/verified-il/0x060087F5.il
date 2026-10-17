// Game.Prefabs.PrefabInitializeSystem::LateInitializePrefab 0x060087F5
	.method private hidebysig 
		instance void LateInitializePrefab (
			valuetype [Unity.Entities]Unity.Entities.Entity entity,
			class Game.Prefabs.PrefabBase prefab,
			class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase> dependencies,
			class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase> components
		) cil managed 
	{
		// Method begins at RVA 0x4fd1b4
		// Header size: 12
		// Code size: 398 (0x18e)
		.maxstack 7
		.locals init (
			[0] bool,
			[1] bool,
			[2] class Game.Prefabs.UnlockableBase,
			[3] int32,
			[4] class Game.Prefabs.ComponentBase,
			[5] class [mscorlib]System.Exception,
			[6] bool,
			[7] class [mscorlib]System.Exception,
			[8] bool
		)

		IL_0000: ldarg.0
		IL_0001: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.PrefabInitializeSystem::m_PrefabSystem
		IL_0006: ldarg.2
		IL_0007: callvirt instance bool Game.Prefabs.PrefabSystem::IsUnlockable(class Game.Prefabs.PrefabBase)
		IL_000c: stloc.0
		IL_000d: ldarg.2
		IL_000e: callvirt instance bool Game.Prefabs.PrefabBase::get_canIgnoreUnlockDependencies()
		IL_0013: stloc.1
		IL_0014: ldarg.2
		IL_0015: ldarg.s components
		IL_0017: callvirt instance bool Game.Prefabs.ComponentBase::GetComponents<class Game.Prefabs.ComponentBase>(class [mscorlib]System.Collections.Generic.List`1<!!0>)
		IL_001c: pop
		IL_001d: ldnull
		IL_001e: stloc.2
		IL_001f: ldloc.0
		IL_0020: brfalse.s IL_0029

		IL_0022: ldarg.2
		IL_0023: callvirt instance !!0 Game.Prefabs.ComponentBase::GetComponent<class Game.Prefabs.UnlockableBase>()
		IL_0028: stloc.2

		IL_0029: ldc.i4.0
		IL_002a: stloc.3
		IL_002b: br IL_00da
		// loop start (head: IL_00da)
			IL_0030: ldarg.s components
			IL_0032: ldloc.3
			IL_0033: callvirt instance !0 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Item(int32)
			IL_0038: stloc.s 4
			IL_003a: ldloc.s 4
			IL_003c: ldloc.2
			IL_003d: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
			IL_0042: brfalse IL_00d6
			.try
			{
				IL_0047: ldloc.s 4
				IL_0049: ldarg.0
				IL_004a: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
				IL_004f: ldarg.1
				IL_0050: callvirt instance void Game.Prefabs.ComponentBase::LateInitialize(valuetype [Unity.Entities]Unity.Entities.EntityManager, valuetype [Unity.Entities]Unity.Entities.Entity)
				IL_0055: ldloc.1
				IL_0056: brfalse.s IL_0061

				IL_0058: ldloc.s 4
				IL_005a: callvirt instance bool Game.Prefabs.ComponentBase::get_ignoreUnlockDependencies()
				IL_005f: brtrue.s IL_0069

				IL_0061: ldloc.s 4
				IL_0063: ldarg.3
				IL_0064: callvirt instance void Game.Prefabs.ComponentBase::GetDependencies(class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>)

				IL_0069: leave.s IL_00d6
			} // end .try
			catch [mscorlib]System.Exception
			{
				IL_006b: stloc.s 5
				IL_006d: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
				IL_0072: callvirt instance bool [Colossal.Logging]Colossal.Logging.ILog::get_showsErrorsInUI()
				IL_0077: stloc.s 6
				IL_0079: call class Game.SceneFlow.GameManager Game.SceneFlow.GameManager::get_instance()
				IL_007e: callvirt instance valuetype Game.GameMode Game.SceneFlow.GameManager::get_gameMode()
				IL_0083: call bool Game.GameModeExtensions::IsEditor(valuetype Game.GameMode)
				IL_0088: brfalse.s IL_0095

				IL_008a: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
				IL_008f: ldc.i4.0
				IL_0090: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)

				IL_0095: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
				IL_009a: ldarg.2
				IL_009b: ldloc.s 5
				IL_009d: ldstr "Error when initializing prefab: {0} ({1})"
				IL_00a2: ldarg.2
				IL_00a3: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
				IL_00a8: ldarg.2
				IL_00a9: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()
				IL_00ae: ldnull
				IL_00af: call bool [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData::op_Inequality(class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData, class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.IAssetData)
				IL_00b4: brtrue.s IL_00bd

				IL_00b6: ldstr "No asset"
				IL_00bb: br.s IL_00c3

				IL_00bd: ldarg.2
				IL_00be: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()

				IL_00c3: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::ErrorFormat(class [UnityEngine.CoreModule]UnityEngine.Object, class [mscorlib]System.Exception, string, object, object)
				IL_00c8: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
				IL_00cd: ldloc.s 6
				IL_00cf: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)
				IL_00d4: leave.s IL_00d6
			} // end handler

			IL_00d6: ldloc.3
			IL_00d7: ldc.i4.1
			IL_00d8: add
			IL_00d9: stloc.3

			IL_00da: ldloc.3
			IL_00db: ldarg.s components
			IL_00dd: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Count()
			IL_00e2: blt IL_0030
		// end loop

		IL_00e7: ldloc.0
		IL_00e8: brfalse IL_0180
		.try
		{
			IL_00ed: ldloc.2
			IL_00ee: ldnull
			IL_00ef: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Inequality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
			IL_00f4: brfalse.s IL_0106

			IL_00f6: ldloc.2
			IL_00f7: ldarg.0
			IL_00f8: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_00fd: ldarg.1
			IL_00fe: ldarg.3
			IL_00ff: callvirt instance void Game.Prefabs.UnlockableBase::LateInitialize(valuetype [Unity.Entities]Unity.Entities.EntityManager, valuetype [Unity.Entities]Unity.Entities.Entity, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>)
			IL_0104: br.s IL_0113

			IL_0106: ldarg.0
			IL_0107: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
			IL_010c: ldarg.1
			IL_010d: ldarg.3
			IL_010e: call void Game.Prefabs.UnlockableBase::DefaultLateInitialize(valuetype [Unity.Entities]Unity.Entities.EntityManager, valuetype [Unity.Entities]Unity.Entities.Entity, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>)

			IL_0113: leave.s IL_0180
		} // end .try
		catch [mscorlib]System.Exception
		{
			IL_0115: stloc.s 7
			IL_0117: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_011c: callvirt instance bool [Colossal.Logging]Colossal.Logging.ILog::get_showsErrorsInUI()
			IL_0121: stloc.s 8
			IL_0123: call class Game.SceneFlow.GameManager Game.SceneFlow.GameManager::get_instance()
			IL_0128: callvirt instance valuetype Game.GameMode Game.SceneFlow.GameManager::get_gameMode()
			IL_012d: call bool Game.GameModeExtensions::IsEditor(valuetype Game.GameMode)
			IL_0132: brfalse.s IL_013f

			IL_0134: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_0139: ldc.i4.0
			IL_013a: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)

			IL_013f: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_0144: ldarg.2
			IL_0145: ldloc.s 7
			IL_0147: ldstr "Error when initializing prefab: {0} ({1})"
			IL_014c: ldarg.2
			IL_014d: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
			IL_0152: ldarg.2
			IL_0153: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()
			IL_0158: ldnull
			IL_0159: call bool [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData::op_Inequality(class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData, class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.IAssetData)
			IL_015e: brtrue.s IL_0167

			IL_0160: ldstr "No asset"
			IL_0165: br.s IL_016d

			IL_0167: ldarg.2
			IL_0168: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()

			IL_016d: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::ErrorFormat(class [UnityEngine.CoreModule]UnityEngine.Object, class [mscorlib]System.Exception, string, object, object)
			IL_0172: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
			IL_0177: ldloc.s 8
			IL_0179: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)
			IL_017e: leave.s IL_0180
		} // end handler

		IL_0180: ldarg.s components
		IL_0182: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::Clear()
		IL_0187: ldarg.3
		IL_0188: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::Clear()
		IL_018d: ret
	} // end of method PrefabInitializeSystem::LateInitializePrefab
