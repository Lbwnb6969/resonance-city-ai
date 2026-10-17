// Game.Rendering.ObjectInterpolateSystem::CalculateUpdateFrames 0x060051D4
	.method public hidebysig static 
		void CalculateUpdateFrames (
			uint32 simulationFrameIndex,
			uint32 prevSimulationFrameIndex,
			float32 simulationFrameTime,
			uint32 updateFrameIndex,
			[out] uint32& updateFrame1,
			[out] uint32& updateFrame2,
			[out] float32& framePosition,
			[out] int32& updateFrameChanged
		) cil managed 
	{
		// Method begins at RVA 0x299e04
		// Header size: 12
		// Code size: 89 (0x59)
		.maxstack 6
		.locals init (
			[0] uint32,
			[1] uint32
		)

		IL_0000: ldarg.0
		IL_0001: ldarg.3
		IL_0002: sub
		IL_0003: ldc.i4.s 32
		IL_0005: sub
		IL_0006: stloc.0
		IL_0007: ldarg.1
		IL_0008: ldarg.3
		IL_0009: sub
		IL_000a: ldc.i4.s 32
		IL_000c: sub
		IL_000d: ldarg.s updateFrame1
		IL_000f: ldloc.0
		IL_0010: ldc.i4.4
		IL_0011: shr.un
		IL_0012: stind.i4
		IL_0013: ldc.i4.4
		IL_0014: shr.un
		IL_0015: stloc.1
		IL_0016: ldarg.s updateFrameChanged
		IL_0018: ldc.i4.0
		IL_0019: ldc.i4.m1
		IL_001a: ldc.i4.1
		IL_001b: ldarg.s updateFrame1
		IL_001d: ldind.u4
		IL_001e: ldloc.1
		IL_001f: cgt.un
		IL_0021: call int32 [Unity.Mathematics]Unity.Mathematics.math::select(int32, int32, bool)
		IL_0026: ldarg.s updateFrame1
		IL_0028: ldind.u4
		IL_0029: ldloc.1
		IL_002a: ceq
		IL_002c: ldc.i4.0
		IL_002d: ceq
		IL_002f: call int32 [Unity.Mathematics]Unity.Mathematics.math::select(int32, int32, bool)
		IL_0034: stind.i4
		IL_0035: ldarg.s updateFrame1
		IL_0037: ldarg.s updateFrame1
		IL_0039: ldind.u4
		IL_003a: ldc.i4.3
		IL_003b: and
		IL_003c: stind.i4
		IL_003d: ldarg.s updateFrame2
		IL_003f: ldarg.s updateFrame1
		IL_0041: ldind.u4
		IL_0042: ldc.i4.1
		IL_0043: add
		IL_0044: ldc.i4.3
		IL_0045: and
		IL_0046: stind.i4
		IL_0047: ldarg.s framePosition
		IL_0049: ldloc.0
		IL_004a: ldc.i4.s 15
		IL_004c: and
		IL_004d: conv.r.un
		IL_004e: conv.r4
		IL_004f: ldarg.2
		IL_0050: add
		IL_0051: ldc.r4 0.0625
		IL_0056: mul
		IL_0057: stind.r4
		IL_0058: ret
	} // end of method ObjectInterpolateSystem::CalculateUpdateFrames
