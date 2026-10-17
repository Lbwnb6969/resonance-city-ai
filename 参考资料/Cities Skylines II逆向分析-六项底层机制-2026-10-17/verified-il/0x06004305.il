// Game.Net.UpdateCollectSystem::GetUpdatedNetBounds 0x06004305
	.method public hidebysig 
		instance valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> GetUpdatedNetBounds (
			[out] valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle& dependencies
		) cil managed 
	{
		// Method begins at RVA 0x2090b9
		// Header size: 1
		// Code size: 19 (0x13)
		.maxstack 8

		IL_0000: ldarg.1
		IL_0001: ldarg.0
		IL_0002: ldfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Net.UpdateCollectSystem::m_NetWriteDependencies
		IL_0007: stobj [UnityEngine.CoreModule]Unity.Jobs.JobHandle
		IL_000c: ldarg.0
		IL_000d: ldfld valuetype [Unity.Collections]Unity.Collections.NativeList`1<valuetype [Colossal.Mathematics]Colossal.Mathematics.Bounds2> Game.Net.UpdateCollectSystem::m_UpdatedNetBounds
		IL_0012: ret
	} // end of method UpdateCollectSystem::GetUpdatedNetBounds
