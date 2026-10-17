// Game.Tools.ToolOutputSystem::OnUpdate 0x06000EBE
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x80544
		// Header size: 12
		// Code size: 48 (0x30)
		.maxstack 2
		.locals init (
			[0] valuetype Game.Tools.ApplyMode
		)

		IL_0000: ldarg.0
		IL_0001: ldfld class Game.Tools.ToolSystem Game.Tools.ToolOutputSystem::m_ToolSystem
		IL_0006: callvirt instance valuetype Game.Tools.ApplyMode Game.Tools.ToolSystem::get_applyMode()
		IL_000b: stloc.0
		IL_000c: ldloc.0
		IL_000d: ldc.i4.1
		IL_000e: beq.s IL_0022

		IL_0010: ldloc.0
		IL_0011: ldc.i4.2
		IL_0012: bne.un.s IL_002f

		IL_0014: ldarg.0
		IL_0015: ldfld class Game.UpdateSystem Game.Tools.ToolOutputSystem::m_UpdateSystem
		IL_001a: ldc.i4.s 18
		IL_001c: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase)
		IL_0021: ret

		IL_0022: ldarg.0
		IL_0023: ldfld class Game.UpdateSystem Game.Tools.ToolOutputSystem::m_UpdateSystem
		IL_0028: ldc.i4.s 19
		IL_002a: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase)

		IL_002f: ret
	} // end of method ToolOutputSystem::OnUpdate
