// Game.Common.RandomSeed::Next 0x06006290
	.method public hidebysig static 
		valuetype Game.Common.RandomSeed Next () cil managed 
	{
		// Method begins at RVA 0x3408e0
		// Header size: 12
		// Code size: 27 (0x1b)
		.maxstack 2
		.locals init (
			[0] valuetype Game.Common.RandomSeed
		)

		IL_0000: ldloca.s 0
		IL_0002: initobj Game.Common.RandomSeed
		IL_0008: ldloca.s 0
		IL_000a: ldsflda valuetype [Unity.Mathematics]Unity.Mathematics.Random Game.Common.RandomSeed::m_Random
		IL_000f: call instance uint32 [Unity.Mathematics]Unity.Mathematics.Random::NextUInt()
		IL_0014: stfld uint32 Game.Common.RandomSeed::m_Seed
		IL_0019: ldloc.0
		IL_001a: ret
	} // end of method RandomSeed::Next
