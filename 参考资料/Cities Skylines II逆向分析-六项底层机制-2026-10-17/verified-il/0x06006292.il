// Game.Common.RandomSeed::.cctor 0x06006292
	.method private hidebysig specialname rtspecialname static 
		void .cctor () cil managed 
	{
		// Method begins at RVA 0x340938
		// Header size: 12
		// Code size: 25 (0x19)
		.maxstack 1
		.locals init (
			[0] valuetype [mscorlib]System.DateTime
		)

		IL_0000: call valuetype [mscorlib]System.DateTime [mscorlib]System.DateTime::get_Now()
		IL_0005: stloc.0
		IL_0006: ldloca.s 0
		IL_0008: call instance int64 [mscorlib]System.DateTime::get_Ticks()
		IL_000d: conv.u4
		IL_000e: newobj instance void [Unity.Mathematics]Unity.Mathematics.Random::.ctor(uint32)
		IL_0013: stsfld valuetype [Unity.Mathematics]Unity.Mathematics.Random Game.Common.RandomSeed::m_Random
		IL_0018: ret
	} // end of method RandomSeed::.cctor
