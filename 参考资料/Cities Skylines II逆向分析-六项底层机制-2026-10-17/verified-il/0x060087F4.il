// Game.Prefabs.PrefabInitializeSystem::InitializePrefab 0x060087F4
	.method private hidebysig 
		instance void InitializePrefab (
			valuetype [Unity.Entities]Unity.Entities.Entity entity,
			class Game.Prefabs.PrefabBase prefab,
			class [System]System.Collections.Generic.Queue`1<valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem> queue,
			class [System.Core]System.Collections.Generic.HashSet`1<class Game.Prefabs.PrefabBase> prefabSet,
			class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase> dependencies,
			class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase> components
		) cil managed 
	{
		// Method begins at RVA 0x4fd074
		// Header size: 12
		// Code size: 268 (0x10c)
		.maxstack 7
		.locals init (
			[0] int32,
			[1] class Game.Prefabs.ComponentBase,
			[2] class [mscorlib]System.Exception,
			[3] bool,
			[4] valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<class Game.Prefabs.PrefabBase>,
			[5] class Game.Prefabs.PrefabBase
		)

		IL_0000: ldarg.2
		IL_0001: ldarg.s components
		IL_0003: callvirt instance bool Game.Prefabs.ComponentBase::GetComponents<class Game.Prefabs.ComponentBase>(class [mscorlib]System.Collections.Generic.List`1<!!0>)
		IL_0008: pop
		IL_0009: ldc.i4.0
		IL_000a: stloc.0
		IL_000b: br IL_00f7
		// loop start (head: IL_00f7)
			IL_0010: ldarg.s components
			IL_0012: ldloc.0
			IL_0013: callvirt instance !0 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Item(int32)
			IL_0018: stloc.1
			.try
			{
				.try
				{
					IL_0019: ldloc.1
					IL_001a: ldarg.0
					IL_001b: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
					IL_0020: ldarg.1
					IL_0021: callvirt instance void Game.Prefabs.ComponentBase::Initialize(valuetype [Unity.Entities]Unity.Entities.EntityManager, valuetype [Unity.Entities]Unity.Entities.Entity)
					IL_0026: ldloc.1
					IL_0027: ldarg.s dependencies
					IL_0029: callvirt instance void Game.Prefabs.ComponentBase::GetDependencies(class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>)
					IL_002e: leave IL_00f3
				} // end .try
				catch [mscorlib]System.Exception
				{
					IL_0033: stloc.2
					IL_0034: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
					IL_0039: callvirt instance bool [Colossal.Logging]Colossal.Logging.ILog::get_showsErrorsInUI()
					IL_003e: stloc.3
					IL_003f: call class Game.SceneFlow.GameManager Game.SceneFlow.GameManager::get_instance()
					IL_0044: callvirt instance valuetype Game.GameMode Game.SceneFlow.GameManager::get_gameMode()
					IL_0049: call bool Game.GameModeExtensions::IsEditor(valuetype Game.GameMode)
					IL_004e: brfalse.s IL_005b

					IL_0050: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
					IL_0055: ldc.i4.0
					IL_0056: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)

					IL_005b: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
					IL_0060: ldarg.2
					IL_0061: ldloc.2
					IL_0062: ldstr "Error when initializing prefab: {0} ({1})"
					IL_0067: ldarg.2
					IL_0068: callvirt instance string [UnityEngine.CoreModule]UnityEngine.Object::get_name()
					IL_006d: ldarg.2
					IL_006e: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()
					IL_0073: ldnull
					IL_0074: call bool [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData::op_Inequality(class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.AssetData, class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.IAssetData)
					IL_0079: brtrue.s IL_0082

					IL_007b: ldstr "No asset"
					IL_0080: br.s IL_0088

					IL_0082: ldarg.2
					IL_0083: callvirt instance class [Colossal.IO.AssetDatabase]Colossal.IO.AssetDatabase.PrefabAsset Game.Prefabs.PrefabBase::get_asset()

					IL_0088: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::ErrorFormat(class [UnityEngine.CoreModule]UnityEngine.Object, class [mscorlib]System.Exception, string, object, object)
					IL_008d: ldsfld class [Colossal.Logging]Colossal.Logging.ILog [Colossal.Core]Colossal.Entities.COSystemBase::baseLog
					IL_0092: ldloc.3
					IL_0093: callvirt instance void [Colossal.Logging]Colossal.Logging.ILog::set_showsErrorsInUI(bool)
					IL_0098: leave.s IL_00f3
				} // end handler
			} // end .try
			finally
			{
				IL_009a: ldarg.s dependencies
				IL_009c: callvirt instance valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<!0> class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::GetEnumerator()
				IL_00a1: stloc.s 4
				.try
				{
					IL_00a3: br.s IL_00d2
					// loop start (head: IL_00d2)
						IL_00a5: ldloca.s 4
						IL_00a7: call instance !0 valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<class Game.Prefabs.PrefabBase>::get_Current()
						IL_00ac: stloc.s 5
						IL_00ae: ldloc.s 5
						IL_00b0: ldnull
						IL_00b1: call bool [UnityEngine.CoreModule]UnityEngine.Object::op_Equality(class [UnityEngine.CoreModule]UnityEngine.Object, class [UnityEngine.CoreModule]UnityEngine.Object)
						IL_00b6: brtrue.s IL_00c3

						IL_00b8: ldarg.s prefabSet
						IL_00ba: ldloc.s 5
						IL_00bc: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<class Game.Prefabs.PrefabBase>::Add(!0)
						IL_00c1: brfalse.s IL_00d2

						IL_00c3: ldarg.3
						IL_00c4: ldloc.s 5
						IL_00c6: ldarg.2
						IL_00c7: ldloc.1
						IL_00c8: newobj instance void Game.Prefabs.PrefabInitializeSystem/QueueItem::.ctor(class Game.Prefabs.PrefabBase, class Game.Prefabs.PrefabBase, class Game.Prefabs.ComponentBase)
						IL_00cd: callvirt instance void class [System]System.Collections.Generic.Queue`1<valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem>::Enqueue(!0)

						IL_00d2: ldloca.s 4
						IL_00d4: call instance bool valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<class Game.Prefabs.PrefabBase>::MoveNext()
						IL_00d9: brtrue.s IL_00a5
					// end loop

					IL_00db: leave.s IL_00eb
				} // end .try
				finally
				{
					IL_00dd: ldloca.s 4
					IL_00df: constrained. valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<class Game.Prefabs.PrefabBase>
					IL_00e5: callvirt instance void [mscorlib]System.IDisposable::Dispose()
					IL_00ea: endfinally
				} // end handler

				IL_00eb: ldarg.s dependencies
				IL_00ed: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::Clear()
				IL_00f2: endfinally
			} // end handler

			IL_00f3: ldloc.0
			IL_00f4: ldc.i4.1
			IL_00f5: add
			IL_00f6: stloc.0

			IL_00f7: ldloc.0
			IL_00f8: ldarg.s components
			IL_00fa: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Count()
			IL_00ff: blt IL_0010
		// end loop

		IL_0104: ldarg.s components
		IL_0106: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::Clear()
		IL_010b: ret
	} // end of method PrefabInitializeSystem::InitializePrefab
