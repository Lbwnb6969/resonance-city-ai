// Game.Prefabs.PrefabID::.ctor 0x060087EA
	.method public hidebysig specialname rtspecialname 
		instance void .ctor (
			string 'type',
			string name,
			[opt] valuetype [Colossal.Core]Colossal.Hash128 hash
		) cil managed 
	{
		.param [3] = nullref
		// Method begins at RVA 0x4fcbfd
		// Header size: 1
		// Code size: 22 (0x16)
		.maxstack 8

		IL_0000: ldarg.0
		IL_0001: ldarg.1
		IL_0002: stfld string Game.Prefabs.PrefabID::m_Type
		IL_0007: ldarg.0
		IL_0008: ldarg.2
		IL_0009: stfld string Game.Prefabs.PrefabID::m_Name
		IL_000e: ldarg.0
		IL_000f: ldarg.3
		IL_0010: stfld valuetype [Colossal.Core]Colossal.Hash128 Game.Prefabs.PrefabID::m_Hash
		IL_0015: ret
	} // end of method PrefabID::.ctor
