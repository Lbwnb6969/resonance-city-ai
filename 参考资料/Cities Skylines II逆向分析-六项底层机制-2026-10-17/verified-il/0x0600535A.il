// Game.Rendering.RenderingSystem::PrepareRendering 0x0600535A
	.method public hidebysig 
		instance void PrepareRendering () cil managed 
	{
		// Method begins at RVA 0x2af304
		// Header size: 12
		// Code size: 961 (0x3c1)
		.maxstack 6
		.locals init (
			[0] int32,
			[1] valuetype [Unity.Mathematics]Unity.Mathematics.float4,
			[2] float32,
			[3] valuetype Game.Prefabs.TimeSettingsData,
			[4] valuetype Game.Common.TimeData,
			[5] float32,
			[6] int32,
			[7] uint32,
			[8] float32,
			[9] int32,
			[10] float32,
			[11] float32,
			[12] float32,
			[13] float32,
			[14] uint32,
			[15] float32,
			[16] valuetype [Unity.Mathematics]Unity.Mathematics.float2
		)

		IL_0000: ldc.i4.s 15
		IL_0002: stloc.0
		IL_0003: ldarg.0
		IL_0004: ldfld float32 Game.Rendering.RenderingSystem::m_LastFrameOffset
		IL_0009: ldarg.0
		IL_000a: call instance float32 Game.Rendering.RenderingSystem::get_frameOffset()
		IL_000f: beq.s IL_0081

		IL_0011: ldarg.0
		IL_0012: call instance float32 Game.Rendering.RenderingSystem::get_frameOffset()
		IL_0017: ldloc.0
		IL_0018: conv.r4
		IL_0019: mul
		IL_001a: stloc.s 5
		IL_001c: ldloc.s 5
		IL_001e: call float32 [Unity.Mathematics]Unity.Mathematics.math::floor(float32)
		IL_0023: conv.i4
		IL_0024: stloc.s 6
		IL_0026: ldarg.0
		IL_0027: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_002c: stloc.s 7
		IL_002e: ldarg.0
		IL_002f: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_0034: stloc.s 8
		IL_0036: ldarg.0
		IL_0037: ldarg.0
		IL_0038: ldfld class Game.Simulation.SimulationSystem Game.Rendering.RenderingSystem::m_SimulationSystem
		IL_003d: callvirt instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
		IL_0042: ldloc.s 6
		IL_0044: add
		IL_0045: call instance void Game.Rendering.RenderingSystem::set_frameIndex(uint32)
		IL_004a: ldarg.0
		IL_004b: ldloc.s 5
		IL_004d: ldloc.s 6
		IL_004f: conv.r4
		IL_0050: sub
		IL_0051: call instance void Game.Rendering.RenderingSystem::set_frameTime(float32)
		IL_0056: ldarg.0
		IL_0057: ldarg.0
		IL_0058: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_005d: ldloc.s 7
		IL_005f: sub
		IL_0060: conv.r4
		IL_0061: ldarg.0
		IL_0062: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_0067: ldloc.s 8
		IL_0069: sub
		IL_006a: add
		IL_006b: call instance void Game.Rendering.RenderingSystem::set_frameDelta(float32)
		IL_0070: ldarg.0
		IL_0071: ldarg.0
		IL_0072: call instance float32 Game.Rendering.RenderingSystem::get_frameOffset()
		IL_0077: stfld float32 Game.Rendering.RenderingSystem::m_LastFrameOffset
		IL_007c: br IL_01f0

		IL_0081: ldarg.0
		IL_0082: ldfld class Game.Simulation.SimulationSystem Game.Rendering.RenderingSystem::m_SimulationSystem
		IL_0087: callvirt instance float32 Game.Simulation.SimulationSystem::get_selectedSpeed()
		IL_008c: ldc.r4 1E-05
		IL_0091: bge.un.s IL_00a3

		IL_0093: ldarg.0
		IL_0094: ldc.r4 0.0
		IL_0099: call instance void Game.Rendering.RenderingSystem::set_frameDelta(float32)
		IL_009e: br IL_01f0

		IL_00a3: ldarg.0
		IL_00a4: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_00a9: ldarg.0
		IL_00aa: ldfld class Game.Simulation.SimulationSystem Game.Rendering.RenderingSystem::m_SimulationSystem
		IL_00af: callvirt instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
		IL_00b4: sub
		IL_00b5: stloc.s 9
		IL_00b7: ldarg.0
		IL_00b8: ldfld class Game.Simulation.SimulationSystem Game.Rendering.RenderingSystem::m_SimulationSystem
		IL_00bd: callvirt instance float32 Game.Simulation.SimulationSystem::get_frameTime()
		IL_00c2: stloc.s 10
		IL_00c4: ldloc.s 9
		IL_00c6: conv.r4
		IL_00c7: ldarg.0
		IL_00c8: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_00cd: add
		IL_00ce: call float32 [UnityEngine.CoreModule]UnityEngine.Time::get_deltaTime()
		IL_00d3: ldarg.0
		IL_00d4: ldfld class Game.Simulation.SimulationSystem Game.Rendering.RenderingSystem::m_SimulationSystem
		IL_00d9: callvirt instance float32 Game.Simulation.SimulationSystem::get_smoothSpeed()
		IL_00de: mul
		IL_00df: ldc.r4 60
		IL_00e4: mul
		IL_00e5: add
		IL_00e6: stloc.s 11
		IL_00e8: ldloc.s 11
		IL_00ea: ldloc.s 10
		IL_00ec: sub
		IL_00ed: stloc.s 12
		IL_00ef: ldloc.0
		IL_00f0: conv.r4
		IL_00f1: ldc.r4 1.2732395
		IL_00f6: mul
		IL_00f7: stloc.s 13
		IL_00f9: ldloc.s 12
		IL_00fb: ldloc.s 13
		IL_00fd: div
		IL_00fe: call float32 [Unity.Mathematics]Unity.Mathematics.math::atan(float32)
		IL_0103: ldloc.s 13
		IL_0105: mul
		IL_0106: stloc.s 12
		IL_0108: ldloc.s 12
		IL_010a: ldloc.0
		IL_010b: neg
		IL_010c: conv.r4
		IL_010d: ldloc.0
		IL_010e: conv.r4
		IL_010f: call float32 [Unity.Mathematics]Unity.Mathematics.math::clamp(float32, float32, float32)
		IL_0114: stloc.s 12
		IL_0116: ldloc.s 10
		IL_0118: ldloc.s 12
		IL_011a: add
		IL_011b: stloc.s 11
		IL_011d: ldloc.s 11
		IL_011f: call float32 [Unity.Mathematics]Unity.Mathematics.math::floor(float32)
		IL_0124: conv.i4
		IL_0125: stloc.s 9
		IL_0127: ldarg.0
		IL_0128: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_012d: stloc.s 14
		IL_012f: ldarg.0
		IL_0130: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_0135: stloc.s 15
		IL_0137: ldloc.s 9
		IL_0139: ldc.i4.0
		IL_013a: bge.s IL_0160

		IL_013c: ldarg.0
		IL_013d: ldfld class Game.Simulation.SimulationSystem Game.Rendering.RenderingSystem::m_SimulationSystem
		IL_0142: callvirt instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
		IL_0147: ldloc.s 9
		IL_0149: neg
		IL_014a: bge.un.s IL_0160

		IL_014c: ldarg.0
		IL_014d: ldc.i4.0
		IL_014e: call instance void Game.Rendering.RenderingSystem::set_frameIndex(uint32)
		IL_0153: ldarg.0
		IL_0154: ldc.r4 0.0
		IL_0159: call instance void Game.Rendering.RenderingSystem::set_frameTime(float32)
		IL_015e: br.s IL_0185

		IL_0160: ldarg.0
		IL_0161: ldarg.0
		IL_0162: ldfld class Game.Simulation.SimulationSystem Game.Rendering.RenderingSystem::m_SimulationSystem
		IL_0167: callvirt instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
		IL_016c: ldloc.s 9
		IL_016e: add
		IL_016f: call instance void Game.Rendering.RenderingSystem::set_frameIndex(uint32)
		IL_0174: ldarg.0
		IL_0175: ldloc.s 11
		IL_0177: ldloc.s 9
		IL_0179: conv.r4
		IL_017a: sub
		IL_017b: call float32 [Unity.Mathematics]Unity.Mathematics.math::saturate(float32)
		IL_0180: call instance void Game.Rendering.RenderingSystem::set_frameTime(float32)

		IL_0185: ldarg.0
		IL_0186: ldarg.0
		IL_0187: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_018c: ldloc.s 14
		IL_018e: sub
		IL_018f: conv.r4
		IL_0190: ldarg.0
		IL_0191: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_0196: ldloc.s 15
		IL_0198: sub
		IL_0199: add
		IL_019a: call instance void Game.Rendering.RenderingSystem::set_frameDelta(float32)
		IL_019f: ldarg.0
		IL_01a0: call instance float32 Game.Rendering.RenderingSystem::get_frameDelta()
		IL_01a5: ldc.r4 0.0
		IL_01aa: bge.un.s IL_01c7

		IL_01ac: ldarg.0
		IL_01ad: ldloc.s 14
		IL_01af: call instance void Game.Rendering.RenderingSystem::set_frameIndex(uint32)
		IL_01b4: ldarg.0
		IL_01b5: ldloc.s 15
		IL_01b7: call instance void Game.Rendering.RenderingSystem::set_frameTime(float32)
		IL_01bc: ldarg.0
		IL_01bd: ldc.r4 0.0
		IL_01c2: call instance void Game.Rendering.RenderingSystem::set_frameDelta(float32)

		IL_01c7: ldarg.0
		IL_01c8: ldloc.s 11
		IL_01ca: ldloc.s 10
		IL_01cc: sub
		IL_01cd: ldloc.0
		IL_01ce: conv.r4
		IL_01cf: div
		IL_01d0: ldc.r4 -1
		IL_01d5: ldc.r4 1
		IL_01da: call float32 [Unity.Mathematics]Unity.Mathematics.math::clamp(float32, float32, float32)
		IL_01df: call instance void Game.Rendering.RenderingSystem::set_frameOffset(float32)
		IL_01e4: ldarg.0
		IL_01e5: ldarg.0
		IL_01e6: call instance float32 Game.Rendering.RenderingSystem::get_frameOffset()
		IL_01eb: stfld float32 Game.Rendering.RenderingSystem::m_LastFrameOffset

		IL_01f0: ldarg.0
		IL_01f1: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_01f6: ldc.i4.s 60
		IL_01f8: ldc.i4 3600
		IL_01fd: newobj instance void [Unity.Mathematics]Unity.Mathematics.uint2::.ctor(uint32, uint32)
		IL_0202: call valuetype [Unity.Mathematics]Unity.Mathematics.uint2 [Unity.Mathematics]Unity.Mathematics.uint2::op_Modulus(uint32, valuetype [Unity.Mathematics]Unity.Mathematics.uint2)
		IL_0207: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.float2::op_Implicit(valuetype [Unity.Mathematics]Unity.Mathematics.uint2)
		IL_020c: ldarg.0
		IL_020d: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_0212: newobj instance void [Unity.Mathematics]Unity.Mathematics.float2::.ctor(float32)
		IL_0217: call valuetype [Unity.Mathematics]Unity.Mathematics.float2 [Unity.Mathematics]Unity.Mathematics.float2::op_Addition(valuetype [Unity.Mathematics]Unity.Mathematics.float2, valuetype [Unity.Mathematics]Unity.Mathematics.float2)
		IL_021c: stloc.s 16
		IL_021e: ldloca.s 16
		IL_0220: call instance valuetype [Unity.Mathematics]Unity.Mathematics.float4 [Unity.Mathematics]Unity.Mathematics.float2::get_xyxy()
		IL_0225: stloc.1
		IL_0226: ldloc.1
		IL_0227: ldc.r4 0.016666668
		IL_022c: ldc.r4 0.00027777778
		IL_0231: ldc.r4 0.10471976
		IL_0236: ldc.r4 0.0017453294
		IL_023b: newobj instance void [Unity.Mathematics]Unity.Mathematics.float4::.ctor(float32, float32, float32, float32)
		IL_0240: call valuetype [Unity.Mathematics]Unity.Mathematics.float4 [Unity.Mathematics]Unity.Mathematics.float4::op_Multiply(valuetype [Unity.Mathematics]Unity.Mathematics.float4, valuetype [Unity.Mathematics]Unity.Mathematics.float4)
		IL_0245: stloc.1
		IL_0246: ldstr "colossal_SimulationTime"
		IL_024b: ldloc.1
		IL_024c: call valuetype [UnityEngine.CoreModule]UnityEngine.Vector4 [Unity.Mathematics]Unity.Mathematics.float4::op_Implicit(valuetype [Unity.Mathematics]Unity.Mathematics.float4)
		IL_0251: call void [UnityEngine.CoreModule]UnityEngine.Shader::SetGlobalVector(string, valuetype [UnityEngine.CoreModule]UnityEngine.Vector4)
		IL_0256: ldarg.0
		IL_0257: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_025c: ldc.i4 216000
		IL_0261: rem.un
		IL_0262: conv.r.un
		IL_0263: conv.r4
		IL_0264: ldarg.0
		IL_0265: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_026a: add
		IL_026b: stloc.2
		IL_026c: ldstr "colossal_SimulationTime2"
		IL_0271: ldloc.2
		IL_0272: call void [UnityEngine.CoreModule]UnityEngine.Shader::SetGlobalFloat(string, float32)
		IL_0277: ldarg.0
		IL_0278: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Rendering.RenderingSystem::m_TimeSettingGroup
		IL_027d: ldloca.s 3
		IL_027f: call instance bool [Unity.Entities]Unity.Entities.EntityQuery::TryGetSingleton<valuetype Game.Prefabs.TimeSettingsData>(!!0&)
		IL_0284: brfalse.s IL_02c3

		IL_0286: ldarg.0
		IL_0287: ldflda valuetype [Unity.Entities]Unity.Entities.EntityQuery Game.Rendering.RenderingSystem::m_TimeDataQuery
		IL_028c: ldloca.s 4
		IL_028e: call instance bool [Unity.Entities]Unity.Entities.EntityQuery::TryGetSingleton<valuetype Game.Common.TimeData>(!!0&)
		IL_0293: brfalse.s IL_02c3

		IL_0295: ldarg.0
		IL_0296: ldarg.0
		IL_0297: ldfld class Game.Simulation.TimeSystem Game.Rendering.RenderingSystem::m_TimeSystem
		IL_029c: ldloc.3
		IL_029d: ldloc.s 4
		IL_029f: ldarg.0
		IL_02a0: call instance uint32 Game.Rendering.RenderingSystem::get_frameIndex()
		IL_02a5: ldloc.s 4
		IL_02a7: ldfld uint32 Game.Common.TimeData::m_FirstFrame
		IL_02ac: sub
		IL_02ad: conv.r.un
		IL_02ae: conv.r8
		IL_02af: ldarg.0
		IL_02b0: call instance float32 Game.Rendering.RenderingSystem::get_frameTime()
		IL_02b5: conv.r8
		IL_02b6: add
		IL_02b7: callvirt instance float32 Game.Simulation.TimeSystem::GetTimeOfDay(valuetype Game.Prefabs.TimeSettingsData, valuetype Game.Common.TimeData, float64)
		IL_02bc: call instance void Game.Rendering.RenderingSystem::set_timeOfDay(float32)
		IL_02c1: br.s IL_02ce

		IL_02c3: ldarg.0
		IL_02c4: ldc.r4 -1
		IL_02c9: call instance void Game.Rendering.RenderingSystem::set_timeOfDay(float32)

		IL_02ce: ldarg.0
		IL_02cf: ldarg.0
		IL_02d0: call instance bool Game.Rendering.RenderingSystem::GetMotionVectorsEnabled()
		IL_02d5: call instance void Game.Rendering.RenderingSystem::set_motionVectors(bool)
		IL_02da: ldarg.0
		IL_02db: ldfld class Game.Rendering.BatchManagerSystem Game.Rendering.RenderingSystem::m_BatchManagerSystem
		IL_02e0: callvirt instance bool Game.Rendering.BatchManagerSystem::CheckPropertyUpdates()
		IL_02e5: brfalse.s IL_02ff

		IL_02e7: ldarg.0
		IL_02e8: ldc.r4 0.0
		IL_02ed: call instance void Game.Rendering.RenderingSystem::set_frameLod(float32)
		IL_02f2: ldarg.0
		IL_02f3: ldc.i4 255
		IL_02f8: call instance void Game.Rendering.RenderingSystem::set_lodTimerDelta(int32)
		IL_02fd: br.s IL_0377

		IL_02ff: ldarg.0
		IL_0300: call instance bool Game.Rendering.RenderingSystem::get_lodCrossFade()
		IL_0305: brfalse.s IL_036c

		IL_0307: ldarg.0
		IL_0308: ldarg.0
		IL_0309: ldfld float32 Game.Rendering.RenderingSystem::m_LodTimer
		IL_030e: call float32 [UnityEngine.CoreModule]UnityEngine.Time::get_deltaTime()
		IL_0313: ldarg.0
		IL_0314: call instance bool Game.Rendering.RenderingSystem::get_debugCrossFade()
		IL_0319: brtrue.s IL_0322

		IL_031b: ldc.r4 1020
		IL_0320: br.s IL_0327

		IL_0322: ldc.r4 102

		IL_0327: mul
		IL_0328: add
		IL_0329: stfld float32 Game.Rendering.RenderingSystem::m_LodTimer
		IL_032e: ldarg.0
		IL_032f: ldarg.0
		IL_0330: ldfld float32 Game.Rendering.RenderingSystem::m_LodTimer
		IL_0335: call int32 [UnityEngine.CoreModule]UnityEngine.Mathf::FloorToInt(float32)
		IL_033a: call instance void Game.Rendering.RenderingSystem::set_lodTimerDelta(int32)
		IL_033f: ldarg.0
		IL_0340: ldarg.0
		IL_0341: ldfld float32 Game.Rendering.RenderingSystem::m_LodTimer
		IL_0346: ldarg.0
		IL_0347: call instance int32 Game.Rendering.RenderingSystem::get_lodTimerDelta()
		IL_034c: conv.r4
		IL_034d: sub
		IL_034e: stfld float32 Game.Rendering.RenderingSystem::m_LodTimer
		IL_0353: ldarg.0
		IL_0354: ldarg.0
		IL_0355: call instance int32 Game.Rendering.RenderingSystem::get_lodTimerDelta()
		IL_035a: ldc.i4.0
		IL_035b: ldc.i4 255
		IL_0360: call int32 [Unity.Mathematics]Unity.Mathematics.math::clamp(int32, int32, int32)
		IL_0365: call instance void Game.Rendering.RenderingSystem::set_lodTimerDelta(int32)
		IL_036a: br.s IL_0377

		IL_036c: ldarg.0
		IL_036d: ldc.i4 255
		IL_0372: call instance void Game.Rendering.RenderingSystem::set_lodTimerDelta(int32)

		IL_0377: ldarg.0
		IL_0378: ldarg.0
		IL_0379: call instance float32 Game.Rendering.RenderingSystem::get_frameLod()
		IL_037e: ldarg.0
		IL_037f: call instance float32 Game.Rendering.RenderingSystem::get_levelOfDetail()
		IL_0384: ldc.r4 0.01
		IL_0389: mul
		IL_038a: add
		IL_038b: ldarg.0
		IL_038c: call instance float32 Game.Rendering.RenderingSystem::get_levelOfDetail()
		IL_0391: call float32 [Unity.Mathematics]Unity.Mathematics.math::min(float32, float32)
		IL_0396: call instance void Game.Rendering.RenderingSystem::set_frameLod(float32)
		IL_039b: ldarg.0
		IL_039c: ldfld bool Game.Rendering.RenderingSystem::m_EnabledShadersUpdated
		IL_03a1: brfalse.s IL_03c0

		IL_03a3: ldarg.0
		IL_03a4: ldc.i4.0
		IL_03a5: stfld bool Game.Rendering.RenderingSystem::m_EnabledShadersUpdated
		IL_03aa: ldarg.0
		IL_03ab: ldfld class Game.Rendering.ManagedBatchSystem Game.Rendering.RenderingSystem::m_ManagedBatchSystem
		IL_03b0: callvirt instance void Game.Rendering.ManagedBatchSystem::EnabledShadersUpdated()
		IL_03b5: ldarg.0
		IL_03b6: ldfld class Game.Rendering.AreaBatchSystem Game.Rendering.RenderingSystem::m_AreaBatchSystem
		IL_03bb: callvirt instance void Game.Rendering.AreaBatchSystem::EnabledShadersUpdated()

		IL_03c0: ret
	} // end of method RenderingSystem::PrepareRendering
