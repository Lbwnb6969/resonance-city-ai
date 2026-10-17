// Game.Common.RandomSeed::GetRandom 0x06006291
	.method public hidebysig 
		instance valuetype [Unity.Mathematics]Unity.Mathematics.Random GetRandom (
			int32 index
		) cil managed 
	{
		// Method begins at RVA 0x340908
		// Header size: 12
		// Code size: 36 (0x24)
		.maxstack 4
		.locals init (
			[0] uint32
		)

		IL_0000: ldarg.0
		IL_0001: ldfld uint32 Game.Common.RandomSeed::m_Seed
		IL_0006: ldc.i4 370248451
		IL_000b: ldarg.1
		IL_000c: mul
		IL_000d: xor
		IL_000e: stloc.0
		IL_000f: ldloc.0
		IL_0010: ldc.i4 1851936439
		IL_0015: ldloc.0
		IL_0016: ldc.i4.0
		IL_0017: ceq
		IL_0019: call uint32 [Unity.Mathematics]Unity.Mathematics.math::select(uint32, uint32, bool)
		IL_001e: newobj instance void [Unity.Mathematics]Unity.Mathematics.Random::.ctor(uint32)
		IL_0023: ret
	} // end of method RandomSeed::GetRandom
