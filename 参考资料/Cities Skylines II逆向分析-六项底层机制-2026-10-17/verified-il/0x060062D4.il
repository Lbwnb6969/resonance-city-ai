// Game.Common.PrepareCleanUpSystem::OnUpdate 0x060062D4
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x341a40
		// Header size: 12
		// Code size: 80 (0x50)
		.maxstack 3
		.locals init (
			[0] valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
			[1] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle,
			[2] valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>,
			[3] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle
		)

		IL_0000: ldarg.0
		IL_0001: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Common.PrepareCleanUpSystem::m_DeletedQuery
		IL_0006: ldc.i4.3
		IL_0007: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_000c: ldloca.s 1
		IL_000e: call instance valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.EntityQuery::ToEntityListAsync(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_0013: stloc.0
		IL_0014: ldarg.0
		IL_0015: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Common.PrepareCleanUpSystem::m_UpdatedQuery
		IL_001a: ldc.i4.3
		IL_001b: call valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(valuetype [UnityEngine.CoreModule]Unity.Collections.Allocator)
		IL_0020: ldloca.s 3
		IL_0022: call instance valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity> [Unity.Entities]Unity.Entities.EntityQuery::ToEntityListAsync(valuetype [Unity.Collections]Unity.Collections.AllocatorManager/AllocatorHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle&)
		IL_0027: stloc.2
		IL_0028: ldarg.0
		IL_0029: ldfld class Game.Common.CleanUpSystem Game.Common.PrepareCleanUpSystem::m_CleanUpSystem
		IL_002e: ldloc.0
		IL_002f: ldloc.1
		IL_0030: callvirt instance void Game.Common.CleanUpSystem::AddDeleted(valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0035: ldarg.0
		IL_0036: ldfld class Game.Common.CleanUpSystem Game.Common.PrepareCleanUpSystem::m_CleanUpSystem
		IL_003b: ldloc.2
		IL_003c: ldloc.3
		IL_003d: callvirt instance void Game.Common.CleanUpSystem::AddUpdated(valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Unity.Entities]Unity.Entities.Entity>, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_0042: ldarg.0
		IL_0043: ldloc.1
		IL_0044: ldloc.3
		IL_0045: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_004a: call instance void [Unity.Entities]Unity.Entities.SystemBase::set_Dependency(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_004f: ret
	} // end of method PrepareCleanUpSystem::OnUpdate
