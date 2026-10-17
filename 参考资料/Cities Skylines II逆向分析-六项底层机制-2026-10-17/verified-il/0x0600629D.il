// Game.Common.PseudoRandomSeed::GetRandom 0x0600629D
	.method public hidebysig 
		instance valuetype [Unity.Mathematics]Unity.Mathematics.Random GetRandom (
			uint32 reason
		) cil managed 
	{
		// Method begins at RVA 0x340ae8
		// Header size: 12
		// Code size: 39 (0x27)
		.maxstack 4
		.locals init (
			[0] valuetype [Unity.Mathematics]Unity.Mathematics.Random
		)

		IL_0000: ldloca.s 0
		IL_0002: ldc.i4.1
		IL_0003: ldarg.0
		IL_0004: ldfld uint16 Game.Common.PseudoRandomSeed::m_Seed
		IL_0009: ldarg.1
		IL_000a: xor
		IL_000b: call uint32 [Unity.Mathematics]Unity.Mathematics.math::max(uint32, uint32)
		IL_0010: call instance void [Unity.Mathematics]Unity.Mathematics.Random::.ctor(uint32)
		IL_0015: ldloca.s 0
		IL_0017: call instance uint32 [Unity.Mathematics]Unity.Mathematics.Random::NextUInt()
		IL_001c: pop
		IL_001d: ldloca.s 0
		IL_001f: call instance uint32 [Unity.Mathematics]Unity.Mathematics.Random::NextUInt()
		IL_0024: pop
		IL_0025: ldloc.0
		IL_0026: ret
	} // end of method PseudoRandomSeed::GetRandom
