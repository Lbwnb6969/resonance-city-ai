// Game.Net.UpdateCollectSystem::AddNetBoundsReader 0x06004306
	.method public hidebysig 
		instance void AddNetBoundsReader (
			valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle handle
		) cil managed 
	{
		// Method begins at RVA 0x2090cd
		// Header size: 1
		// Code size: 19 (0x13)
		.maxstack 8

		IL_0000: ldarg.0
		IL_0001: ldarg.0
		IL_0002: ldfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetReadDependencies
		IL_0007: ldarg.1
		IL_0008: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.JobHandle::CombineDependencies(valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_000d: stfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetReadDependencies
		IL_0012: ret
	} // end of method UpdateCollectSystem::AddNetBoundsReader
