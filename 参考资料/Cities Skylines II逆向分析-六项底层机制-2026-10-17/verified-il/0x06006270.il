// Game.Common.CleanUpSystem::OnUpdate 0x06006270
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x340750
		// Header size: 12
		// Code size: 101 (0x65)
		.maxstack 3
		.locals init (
			[0] valuetype [Unity.Entities]Unity.Entities.EntityManager
		)

		IL_0000: ldarg.0
		IL_0001: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Common.CleanUpSystem::m_DeletedDeps
		IL_0006: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_000b: ldarg.0
		IL_000c: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Common.CleanUpSystem::m_UpdatedDeps
		IL_0011: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_0016: ldarg.0
		IL_0017: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_001c: stloc.0
		IL_001d: ldloca.s 0
		IL_001f: ldarg.0
		IL_0020: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Common.CleanUpSystem::m_DeletedEntities
		IL_0025: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!0> valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AsArray()
		IL_002a: call instance void [Unity.Entities]Unity.Entities.EntityManager::DestroyEntity(valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>)
		IL_002f: ldarg.0
		IL_0030: call instance valuetype [Unity.Entities]Unity.Entities.EntityManager [Unity.Entities]Unity.Entities.ComponentSystemBase::get_EntityManager()
		IL_0035: stloc.0
		IL_0036: ldloca.s 0
		IL_0038: ldarg.0
		IL_0039: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Common.CleanUpSystem::m_UpdatedEntities
		IL_003e: call instance valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<!0> valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::AsArray()
		IL_0043: ldarg.0
		IL_0044: ldflda valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet Game.Common.CleanUpSystem::m_UpdateTypes
		IL_0049: call instance void [Unity.Entities]Unity.Entities.EntityManager::RemoveComponent(valuetype [UnityEngine.CoreModule]Unity.Collections.NativeArray`1<valuetype [Unity.Entities]Unity.Entities.Entity>, valuetype [Unity.Entities]Unity.Entities.ComponentTypeSet&)
		IL_004e: ldarg.0
		IL_004f: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Common.CleanUpSystem::m_DeletedEntities
		IL_0054: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Dispose()
		IL_0059: ldarg.0
		IL_005a: ldflda valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity> Game.Common.CleanUpSystem::m_UpdatedEntities
		IL_005f: call instance void valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>::Dispose()
		IL_0064: ret
	} // end of method CleanUpSystem::OnUpdate
