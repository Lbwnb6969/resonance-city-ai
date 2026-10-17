// Game.Prefabs.PrefabSystem::OnUpdate 0x06008828
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x4fe7cc
		// Header size: 1
		// Code size: 38 (0x26)
		.maxstack 8

		IL_0000: ldarg.0
		IL_0001: call instance bool Game.Prefabs.PrefabSystem::UpdatePrefabs()
		IL_0006: ldarg.0
		IL_0007: ldfld class Game.UpdateSystem Game.Prefabs.PrefabSystem::m_UpdateSystem
		IL_000c: ldc.i4.s 24
		IL_000e: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase)
		IL_0013: brfalse.s IL_0025

		IL_0015: ldarg.0
		IL_0016: call instance class [Unity.Entities]Unity.Entities.World [Unity.Entities]Unity.Entities.ComponentSystemBase::get_World()
		IL_001b: callvirt instance !!0 [Unity.Entities]Unity.Entities.World::GetOrCreateSystemManaged<class Game.Prefabs.ReplacePrefabSystem>()
		IL_0020: callvirt instance void Game.Prefabs.ReplacePrefabSystem::FinalizeReplaces()

		IL_0025: ret
	} // end of method PrefabSystem::OnUpdate
