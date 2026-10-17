// Game.Citizens.Citizen::GetPseudoRandom 0x0600960B
	.method public hidebysig 
		instance valuetype [Unity.Mathematics]Unity.Mathematics.Random GetPseudoRandom (
			valuetype Game.Citizens.CitizenPseudoRandom reason
		) cil managed 
	{
		// Method begins at RVA 0x54fa28
		// Header size: 12
		// Code size: 63 (0x3f)
		.maxstack 4
		.locals init (
			[0] valuetype [Unity.Mathematics]Unity.Mathematics.Random,
			[1] uint32
		)

		IL_0000: ldloca.s 0
		IL_0002: ldarg.1
		IL_0003: conv.u8
		IL_0004: ldarg.0
		IL_0005: ldfld uint16 Game.Citizens.Citizen::m_PseudoRandom
		IL_000a: ldc.i4.s 16
		IL_000c: shl
		IL_000d: ldarg.0
		IL_000e: ldfld uint16 Game.Citizens.Citizen::m_PseudoRandom
		IL_0013: or
		IL_0014: conv.i8
		IL_0015: xor
		IL_0016: conv.u4
		IL_0017: call instance void [Unity.Mathematics]Unity.Mathematics.Random::.ctor(uint32)
		IL_001c: ldloca.s 0
		IL_001e: call instance uint32 [Unity.Mathematics]Unity.Mathematics.Random::NextUInt()
		IL_0023: pop
		IL_0024: ldloca.s 0
		IL_0026: call instance uint32 [Unity.Mathematics]Unity.Mathematics.Random::NextUInt()
		IL_002b: stloc.1
		IL_002c: ldloc.1
		IL_002d: ldc.i4.m1
		IL_002e: ldloc.1
		IL_002f: ldc.i4.0
		IL_0030: ceq
		IL_0032: call uint32 [Unity.Mathematics]Unity.Mathematics.math::select(uint32, uint32, bool)
		IL_0037: stloc.1
		IL_0038: ldloc.1
		IL_0039: newobj instance void [Unity.Mathematics]Unity.Mathematics.Random::.ctor(uint32)
		IL_003e: ret
	} // end of method Citizen::GetPseudoRandom
