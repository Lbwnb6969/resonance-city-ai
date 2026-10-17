// Game.Prefabs.PrefabInitializeSystem::OnUpdate 0x060087F3
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x4fce2c
		// Header size: 12
		// Code size: 494 (0x1ee)
		.maxstack 7
		.locals init (
			[0] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>,
			[1] valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle,
			[2] valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData>,
			[3] class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>,
			[4] class [System]System.Collections.Generic.Queue`1<valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem>,
			[5] class [System.Core]System.Collections.Generic.HashSet`1<class Game.Prefabs.PrefabBase>,
			[6] class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>,
			[7] class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>,
			[8] int32,
			[9] valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk,
			[10] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
			[11] valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>,
			[12] int32,
			[13] class Game.Prefabs.PrefabBase,
			[14] valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>,
			[15] valuetype Game.Prefabs.PrefabInitializeSystem/ListItem,
			[16] valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem,
			[17] valuetype [Unity.Entities]Unity.Entities.Entity,
			[18] valuetype Game.Prefabs.PrefabInitializeSystem/ListItem
		)

		IL_0000: ldarg.0
		IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Prefabs.PrefabInitializeSystem::m_PrefabQuery
		IL_0006: ldc.i4.3
		IL_0007: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_000c: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk> [Unity.Entities]Unity.Entities.EntityQuery::ToArchetypeChunkArray(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle)
		IL_0011: stloc.0
		.try
		{
			IL_0012: ldarg.0
			IL_0013: ldflda valuetype Game.Prefabs.PrefabInitializeSystem/TypeHandle Game.Prefabs.PrefabInitializeSystem::__TypeHandle
			IL_0018: ldflda valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle Game.Prefabs.PrefabInitializeSystem/TypeHandle::__Unity_Entities_Entity_TypeHandle
			IL_001d: ldarg.0
			IL_001e: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_0023: call valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetEntityTypeHandle(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_0028: stloc.1
			IL_0029: ldarg.0
			IL_002a: ldflda valuetype Game.Prefabs.PrefabInitializeSystem/TypeHandle Game.Prefabs.PrefabInitializeSystem::__TypeHandle
			IL_002f: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<valuetype Game.Prefabs.PrefabData> Game.Prefabs.PrefabInitializeSystem/TypeHandle::__Game_Prefabs_PrefabData_RO_ComponentTypeHandle
			IL_0034: ldarg.0
			IL_0035: call instance valuetype [Unity.Entities]Unity.Entities.SystemState& [Unity.Entities]Unity.Entities.SystemBase::get_CheckedStateRef()
			IL_003a: call valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0> [Unity.Entities]Unity.Entities.Internal.InternalCompilerInterface::GetComponentTypeHandle<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&, valuetype [Unity.Entities]Unity.Entities.SystemState&)
			IL_003f: stloc.2
			IL_0040: ldarg.0
			IL_0041: call instance void [Unity.Entities]Unity.Entities.SystemBase::CompleteDependency()
			IL_0046: newobj instance void class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::.ctor()
			IL_004b: stloc.3
			IL_004c: newobj instance void class [System]System.Collections.Generic.Queue`1<valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem>::.ctor()
			IL_0051: stloc.s 4
			IL_0053: newobj instance void class [System.Core]System.Collections.Generic.HashSet`1<class Game.Prefabs.PrefabBase>::.ctor()
			IL_0058: stloc.s 5
			IL_005a: newobj instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>::.ctor()
			IL_005f: stloc.s 6
			IL_0061: newobj instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::.ctor()
			IL_0066: stloc.s 7
			IL_0068: ldc.i4.0
			IL_0069: stloc.s 8
			IL_006b: br.s IL_00df
			// loop start (head: IL_00df)
				IL_006d: ldloca.s 0
				IL_006f: ldloc.s 8
				IL_0071: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::get_Item(int32)
				IL_0076: stloc.s 9
				IL_0078: ldloca.s 9
				IL_007a: ldloc.1
				IL_007b: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray(valuetype [Unity.Entities]Unity.Entities.EntityTypeHandle)
				IL_0080: stloc.s 10
				IL_0082: ldloca.s 9
				IL_0084: ldloca.s 2
				IL_0086: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!!0> [Unity.Entities]Unity.Entities.ArchetypeChunk::GetNativeArray<valuetype Game.Prefabs.PrefabData>(valuetype [Unity.Entities]Unity.Entities.ComponentTypeHandle`1<!!0>&)
				IL_008b: stloc.s 11
				IL_008d: ldc.i4.0
				IL_008e: stloc.s 12
				IL_0090: br.s IL_00ce
				// loop start (head: IL_00ce)
					IL_0092: ldarg.0
					IL_0093: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.PrefabInitializeSystem::m_PrefabSystem
					IL_0098: ldloca.s 11
					IL_009a: ldloc.s 12
					IL_009c: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>::get_Item(int32)
					IL_00a1: callvirt instance !!0 Game.Prefabs.PrefabSystem::GetPrefab<class Game.Prefabs.PrefabBase>(valuetype Game.Prefabs.PrefabData)
					IL_00a6: stloc.s 13
					IL_00a8: ldloc.3
					IL_00a9: ldloca.s 10
					IL_00ab: ldloc.s 12
					IL_00ad: call instance !0 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>::get_Item(int32)
					IL_00b2: ldloc.s 13
					IL_00b4: newobj instance void Game.Prefabs.PrefabInitializeSystem/ListItem::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity, class Game.Prefabs.PrefabBase)
					IL_00b9: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::Add(!0)
					IL_00be: ldloc.s 5
					IL_00c0: ldloc.s 13
					IL_00c2: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<class Game.Prefabs.PrefabBase>::Add(!0)
					IL_00c7: pop
					IL_00c8: ldloc.s 12
					IL_00ca: ldc.i4.1
					IL_00cb: add
					IL_00cc: stloc.s 12

					IL_00ce: ldloc.s 12
					IL_00d0: ldloca.s 11
					IL_00d2: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype Game.Prefabs.PrefabData>::get_Length()
					IL_00d7: blt.s IL_0092
				// end loop

				IL_00d9: ldloc.s 8
				IL_00db: ldc.i4.1
				IL_00dc: add
				IL_00dd: stloc.s 8

				IL_00df: ldloc.s 8
				IL_00e1: ldloca.s 0
				IL_00e3: call instance int32 valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::get_Length()
				IL_00e8: blt.s IL_006d
			// end loop

			IL_00ea: ldloc.3
			IL_00eb: callvirt instance valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<!0> class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::GetEnumerator()
			IL_00f0: stloc.s 14
			.try
			{
				IL_00f2: br.s IL_0119
				// loop start (head: IL_0119)
					IL_00f4: ldloca.s 14
					IL_00f6: call instance !0 valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::get_Current()
					IL_00fb: stloc.s 15
					IL_00fd: ldarg.0
					IL_00fe: ldloc.s 15
					IL_0100: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabInitializeSystem/ListItem::m_Entity
					IL_0105: ldloc.s 15
					IL_0107: ldfld class Game.Prefabs.PrefabBase Game.Prefabs.PrefabInitializeSystem/ListItem::m_Prefab
					IL_010c: ldloc.s 4
					IL_010e: ldloc.s 5
					IL_0110: ldloc.s 6
					IL_0112: ldloc.s 7
					IL_0114: call instance void Game.Prefabs.PrefabInitializeSystem::InitializePrefab(valuetype [Unity.Entities]Unity.Entities.Entity, class Game.Prefabs.PrefabBase, class [System]System.Collections.Generic.Queue`1<valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem>, class [System.Core]System.Collections.Generic.HashSet`1<class Game.Prefabs.PrefabBase>, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>)

					IL_0119: ldloca.s 14
					IL_011b: call instance bool valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::MoveNext()
					IL_0120: brtrue.s IL_00f4
				// end loop

				IL_0122: leave.s IL_0132
			} // end .try
			finally
			{
				IL_0124: ldloca.s 14
				IL_0126: constrained. valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>
				IL_012c: callvirt instance void [mscorlib]System.IDisposable::Dispose()
				IL_0131: endfinally
			} // end handler
			// loop start (head: IL_0132)
				IL_0132: ldloc.s 4
				IL_0134: ldloca.s 16
				IL_0136: callvirt instance bool class [System]System.Collections.Generic.Queue`1<valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem>::TryDequeue(!0&)
				IL_013b: brfalse.s IL_01a1

				IL_013d: ldarg.0
				IL_013e: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.PrefabInitializeSystem::m_PrefabSystem
				IL_0143: ldloc.s 16
				IL_0145: ldfld class Game.Prefabs.PrefabBase Game.Prefabs.PrefabInitializeSystem/QueueItem::m_Prefab
				IL_014a: ldnull
				IL_014b: ldloc.s 16
				IL_014d: ldfld class Game.Prefabs.PrefabBase Game.Prefabs.PrefabInitializeSystem/QueueItem::m_ParentPrefab
				IL_0152: ldloc.s 16
				IL_0154: ldfld class Game.Prefabs.ComponentBase Game.Prefabs.PrefabInitializeSystem/QueueItem::m_ParentComponent
				IL_0159: callvirt instance bool Game.Prefabs.PrefabSystem::AddPrefab(class Game.Prefabs.PrefabBase, string, class Game.Prefabs.PrefabBase, class Game.Prefabs.ComponentBase)
				IL_015e: brfalse.s IL_0132

				IL_0160: ldarg.0
				IL_0161: ldfld class Game.Prefabs.PrefabSystem Game.Prefabs.PrefabInitializeSystem::m_PrefabSystem
				IL_0166: ldloc.s 16
				IL_0168: ldfld class Game.Prefabs.PrefabBase Game.Prefabs.PrefabInitializeSystem/QueueItem::m_Prefab
				IL_016d: callvirt instance valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabSystem::GetEntity(class Game.Prefabs.PrefabBase)
				IL_0172: stloc.s 17
				IL_0174: ldarg.0
				IL_0175: ldloc.s 17
				IL_0177: ldloc.s 16
				IL_0179: ldfld class Game.Prefabs.PrefabBase Game.Prefabs.PrefabInitializeSystem/QueueItem::m_Prefab
				IL_017e: ldloc.s 4
				IL_0180: ldloc.s 5
				IL_0182: ldloc.s 6
				IL_0184: ldloc.s 7
				IL_0186: call instance void Game.Prefabs.PrefabInitializeSystem::InitializePrefab(valuetype [Unity.Entities]Unity.Entities.Entity, class Game.Prefabs.PrefabBase, class [System]System.Collections.Generic.Queue`1<valuetype Game.Prefabs.PrefabInitializeSystem/QueueItem>, class [System.Core]System.Collections.Generic.HashSet`1<class Game.Prefabs.PrefabBase>, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>)
				IL_018b: ldloc.3
				IL_018c: ldloc.s 17
				IL_018e: ldloc.s 16
				IL_0190: ldfld class Game.Prefabs.PrefabBase Game.Prefabs.PrefabInitializeSystem/QueueItem::m_Prefab
				IL_0195: newobj instance void Game.Prefabs.PrefabInitializeSystem/ListItem::.ctor(valuetype [Unity.Entities]Unity.Entities.Entity, class Game.Prefabs.PrefabBase)
				IL_019a: callvirt instance void class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::Add(!0)
				IL_019f: br.s IL_0132
			// end loop

			IL_01a1: ldloc.3
			IL_01a2: callvirt instance valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<!0> class [mscorlib]System.Collections.Generic.List`1<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::GetEnumerator()
			IL_01a7: stloc.s 14
			.try
			{
				IL_01a9: br.s IL_01cc
				// loop start (head: IL_01cc)
					IL_01ab: ldloca.s 14
					IL_01ad: call instance !0 valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::get_Current()
					IL_01b2: stloc.s 18
					IL_01b4: ldarg.0
					IL_01b5: ldloc.s 18
					IL_01b7: ldfld valuetype [Unity.Entities]Unity.Entities.Entity Game.Prefabs.PrefabInitializeSystem/ListItem::m_Entity
					IL_01bc: ldloc.s 18
					IL_01be: ldfld class Game.Prefabs.PrefabBase Game.Prefabs.PrefabInitializeSystem/ListItem::m_Prefab
					IL_01c3: ldloc.s 6
					IL_01c5: ldloc.s 7
					IL_01c7: call instance void Game.Prefabs.PrefabInitializeSystem::LateInitializePrefab(valuetype [Unity.Entities]Unity.Entities.Entity, class Game.Prefabs.PrefabBase, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.PrefabBase>, class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>)

					IL_01cc: ldloca.s 14
					IL_01ce: call instance bool valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>::MoveNext()
					IL_01d3: brtrue.s IL_01ab
				// end loop

				IL_01d5: leave.s IL_01ed
			} // end .try
			finally
			{
				IL_01d7: ldloca.s 14
				IL_01d9: constrained. valuetype [mscorlib]System.Collections.Generic.List`1/Enumerator<valuetype Game.Prefabs.PrefabInitializeSystem/ListItem>
				IL_01df: callvirt instance void [mscorlib]System.IDisposable::Dispose()
				IL_01e4: endfinally
			} // end handler
		} // end .try
		finally
		{
			IL_01e5: ldloca.s 0
			IL_01e7: call instance void valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.ArchetypeChunk>::Dispose()
			IL_01ec: endfinally
		} // end handler

		IL_01ed: ret
	} // end of method PrefabInitializeSystem::OnUpdate
