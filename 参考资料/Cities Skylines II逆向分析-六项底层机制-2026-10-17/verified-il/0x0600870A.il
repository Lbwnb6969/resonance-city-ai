// Game.Prefabs.ArchetypePrefab::RefreshArchetype 0x0600870A
	.method family hidebysig 
		instance void RefreshArchetype (
			valuetype [Unity.Entities]Unity.Entities.EntityManager entityManager,
			valuetype [Unity.Entities]Unity.Entities.Entity entity
		) cil managed 
	{
		// Method begins at RVA 0x4f8bd8
		// Header size: 12
		// Code size: 104 (0x68)
		.maxstack 3
		.locals init (
			[0] class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>,
			[1] class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>,
			[2] valuetype Game.Prefabs.ArchetypeData,
			[3] int32
		)

		IL_0000: newobj instance void class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::.ctor()
		IL_0005: stloc.0
		IL_0006: ldarg.0
		IL_0007: ldloc.0
		IL_0008: call instance bool Game.Prefabs.ComponentBase::GetComponents<class Game.Prefabs.ComponentBase>(class [mscorlib]System.Collections.Generic.List`1<!!0>)
		IL_000d: pop
		IL_000e: newobj instance void class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::.ctor()
		IL_0013: stloc.1
		IL_0014: ldc.i4.0
		IL_0015: stloc.3
		IL_0016: br.s IL_0029
		// loop start (head: IL_0029)
			IL_0018: ldloc.0
			IL_0019: ldloc.3
			IL_001a: callvirt instance !0 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Item(int32)
			IL_001f: ldloc.1
			IL_0020: callvirt instance void Game.Prefabs.ComponentBase::GetArchetypeComponents(class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>)
			IL_0025: ldloc.3
			IL_0026: ldc.i4.1
			IL_0027: add
			IL_0028: stloc.3

			IL_0029: ldloc.3
			IL_002a: ldloc.0
			IL_002b: callvirt instance int32 class [mscorlib]System.Collections.Generic.List`1<class Game.Prefabs.ComponentBase>::get_Count()
			IL_0030: blt.s IL_0018
		// end loop

		IL_0032: ldloc.1
		IL_0033: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Common.Created>()
		IL_0038: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
		IL_003d: pop
		IL_003e: ldloc.1
		IL_003f: call valuetype [Unity.Entities]Unity.Entities.ComponentType [Unity.Entities]Unity.Entities.ComponentType::ReadWrite<valuetype Game.Common.Updated>()
		IL_0044: callvirt instance bool class [System.Core]System.Collections.Generic.HashSet`1<valuetype [Unity.Entities]Unity.Entities.ComponentType>::Add(!0)
		IL_0049: pop
		IL_004a: ldloca.s 2
		IL_004c: ldarga.s entityManager
		IL_004e: ldloc.1
		IL_004f: call !!0[] Game.Prefabs.PrefabUtils::ToArray<valuetype [Unity.Entities]Unity.Entities.ComponentType>(class [System.Core]System.Collections.Generic.HashSet`1<!!0>)
		IL_0054: call instance valuetype [Unity.Entities]Unity.Entities.EntityArchetype [Unity.Entities]Unity.Entities.EntityManager::CreateArchetype(valuetype [Unity.Entities]Unity.Entities.ComponentType[])
		IL_0059: stfld valuetype [Unity.Entities]Unity.Entities.EntityArchetype Game.Prefabs.ArchetypeData::m_Archetype
		IL_005e: ldarga.s entityManager
		IL_0060: ldarg.2
		IL_0061: ldloc.2
		IL_0062: call instance void [Unity.Entities]Unity.Entities.EntityManager::SetComponentData<valuetype Game.Prefabs.ArchetypeData>(valuetype [Unity.Entities]Unity.Entities.Entity, !!0)
		IL_0067: ret
	} // end of method ArchetypePrefab::RefreshArchetype
