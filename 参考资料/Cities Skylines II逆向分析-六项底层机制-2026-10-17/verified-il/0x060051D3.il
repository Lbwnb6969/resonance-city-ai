// Game.Rendering.ObjectInterpolateSystem::CalculateUpdateFrames 0x060051D3
	.method public hidebysig static 
		void CalculateUpdateFrames (
			uint32 simulationFrameIndex,
			float32 simulationFrameTime,
			uint32 updateFrameIndex,
			[out] uint32& updateFrame1,
			[out] uint32& updateFrame2,
			[out] float32& framePosition
		) cil managed 
	{
		// Method begins at RVA 0x299dcc
		// Header size: 12
		// Code size: 41 (0x29)
		.maxstack 3
		.locals init (
			[0] uint32
		)

		IL_0000: ldarg.0
		IL_0001: ldarg.2
		IL_0002: sub
		IL_0003: ldc.i4.s 32
		IL_0005: sub
		IL_0006: stloc.0
		IL_0007: ldarg.3
		IL_0008: ldloc.0
		IL_0009: ldc.i4.4
		IL_000a: shr.un
		IL_000b: ldc.i4.3
		IL_000c: and
		IL_000d: stind.i4
		IL_000e: ldarg.s updateFrame2
		IL_0010: ldarg.3
		IL_0011: ldind.u4
		IL_0012: ldc.i4.1
		IL_0013: add
		IL_0014: ldc.i4.3
		IL_0015: and
		IL_0016: stind.i4
		IL_0017: ldarg.s framePosition
		IL_0019: ldloc.0
		IL_001a: ldc.i4.s 15
		IL_001c: and
		IL_001d: conv.r.un
		IL_001e: conv.r4
		IL_001f: ldarg.1
		IL_0020: add
		IL_0021: ldc.r4 0.0625
		IL_0026: mul
		IL_0027: stind.r4
		IL_0028: ret
	} // end of method ObjectInterpolateSystem::CalculateUpdateFrames
