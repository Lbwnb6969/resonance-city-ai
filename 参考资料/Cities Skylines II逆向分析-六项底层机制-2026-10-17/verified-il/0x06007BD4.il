// Game.Simulation.SimulationSystem::OnUpdate 0x06007BD4
	.method family hidebysig virtual 
		instance void OnUpdate () cil managed 
	{
		.custom instance void [UnityEngine.CoreModule]UnityEngine.Scripting.PreserveAttribute::.ctor() = (
			01 00 00 00
		)
		// Method begins at RVA 0x46be44
		// Header size: 12
		// Code size: 998 (0x3e6)
		.maxstack 4
		.locals init (
			[0] int32,
			[1] class Game.Settings.GameplaySettings,
			[2] float32,
			[3] float32,
			[4] float32,
			[5] int32,
			[6] float32,
			[7] float32,
			[8] float32,
			[9] int32,
			[10] int32,
			[11] float32,
			[12] float32,
			[13] int32,
			[14] valuetype Game.Simulation.SimulationSystem/SimulationEndTimeJob,
			[15] int32,
			[16] uint32,
			[17] valuetype Game.Simulation.SimulationSystem/SimulationEndTimeJob
		)

		IL_0000: ldarg.0
		IL_0001: ldfld int32 Game.Simulation.SimulationSystem::m_StepCount
		IL_0006: brfalse.s IL_0048

		IL_0008: ldarg.0
		IL_0009: ldflda valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Simulation.SimulationSystem::m_WatchDeps
		IL_000e: call instance void [UnityEngine.CoreModule]Unity.Jobs.JobHandle::Complete()
		IL_0013: ldarg.0
		IL_0014: ldarg.0
		IL_0015: ldfld class [System]System.Diagnostics.Stopwatch Game.Simulation.SimulationSystem::m_Stopwatch
		IL_001a: callvirt instance int64 [System]System.Diagnostics.Stopwatch::get_ElapsedTicks()
		IL_001f: conv.r4
		IL_0020: ldsfld int64 [System]System.Diagnostics.Stopwatch::Frequency
		IL_0025: ldarg.0
		IL_0026: ldfld int32 Game.Simulation.SimulationSystem::m_StepCount
		IL_002b: conv.i8
		IL_002c: mul
		IL_002d: conv.r4
		IL_002e: div
		IL_002f: call instance void Game.Simulation.SimulationSystem::set_frameDuration(float32)
		IL_0034: ldarg.0
		IL_0035: ldfld class [System]System.Diagnostics.Stopwatch Game.Simulation.SimulationSystem::m_Stopwatch
		IL_003a: callvirt instance void [System]System.Diagnostics.Stopwatch::Reset()
		IL_003f: ldarg.0
		IL_0040: ldc.i4.0
		IL_0041: stfld int32 Game.Simulation.SimulationSystem::m_StepCount
		IL_0046: br.s IL_0053

		IL_0048: ldarg.0
		IL_0049: ldc.r4 0.0
		IL_004e: call instance void Game.Simulation.SimulationSystem::set_frameDuration(float32)

		IL_0053: ldarg.0
		IL_0054: ldfld bool Game.Simulation.SimulationSystem::m_IsLoading
		IL_0059: brfalse.s IL_00b3

		IL_005b: ldarg.0
		IL_005c: call instance float32 Game.Simulation.SimulationSystem::get_loadingProgress()
		IL_0061: ldc.r4 1
		IL_0066: beq.s IL_006f

		IL_0068: ldarg.0
		IL_0069: call instance void Game.Simulation.SimulationSystem::UpdateLoadingProgress()
		IL_006e: ret

		IL_006f: call class Game.SceneFlow.GameManager Game.SceneFlow.GameManager::get_instance()
		IL_0074: callvirt instance bool Game.SceneFlow.GameManager::get_isGameLoading()
		IL_0079: brtrue.s IL_00ca

		IL_007b: ldarg.0
		IL_007c: ldc.i4.0
		IL_007d: stfld bool Game.Simulation.SimulationSystem::m_IsLoading
		IL_0082: call class Game.Settings.SharedSettings Game.Settings.SharedSettings::get_instance()
		IL_0087: dup
		IL_0088: brtrue.s IL_008e

		IL_008a: pop
		IL_008b: ldnull
		IL_008c: br.s IL_0093

		IL_008e: call instance class Game.Settings.GameplaySettings Game.Settings.SharedSettings::get_gameplay()

		IL_0093: stloc.1
		IL_0094: ldarg.0
		IL_0095: ldloc.1
		IL_0096: brfalse.s IL_00a0

		IL_0098: ldloc.1
		IL_0099: callvirt instance bool Game.Settings.GameplaySettings::get_pausedAfterLoading()
		IL_009e: brtrue.s IL_00a7

		IL_00a0: ldc.r4 1
		IL_00a5: br.s IL_00ac

		IL_00a7: ldc.r4 0.0

		IL_00ac: call instance void Game.Simulation.SimulationSystem::set_selectedSpeed(float32)
		IL_00b1: br.s IL_00ca

		IL_00b3: call class Game.SceneFlow.GameManager Game.SceneFlow.GameManager::get_instance()
		IL_00b8: callvirt instance bool Game.SceneFlow.GameManager::get_isGameLoading()
		IL_00bd: brfalse.s IL_00ca

		IL_00bf: ldarg.0
		IL_00c0: ldc.r4 0.0
		IL_00c5: call instance void Game.Simulation.SimulationSystem::set_selectedSpeed(float32)

		IL_00ca: ldarg.0
		IL_00cb: call instance float32 Game.Simulation.SimulationSystem::get_selectedSpeed()
		IL_00d0: ldc.r4 0.0
		IL_00d5: bne.un.s IL_00e9

		IL_00d7: ldc.i4.0
		IL_00d8: stloc.0
		IL_00d9: ldarg.0
		IL_00da: ldc.r4 0.0
		IL_00df: call instance void Game.Simulation.SimulationSystem::set_smoothSpeed(float32)
		IL_00e4: br IL_02ef

		IL_00e9: call float32 [UnityEngine.CoreModule]UnityEngine.Time::get_deltaTime()
		IL_00ee: stloc.2
		IL_00ef: ldloc.2
		IL_00f0: ldarg.0
		IL_00f1: call instance float32 Game.Simulation.SimulationSystem::get_selectedSpeed()
		IL_00f6: mul
		IL_00f7: stloc.3
		IL_00f8: ldc.r4 1
		IL_00fd: stloc.s 4
		IL_00ff: ldarg.0
		IL_0100: ldfld class Game.Pathfind.PathfindResultSystem Game.Simulation.SimulationSystem::m_PathfindResultSystem
		IL_0105: callvirt instance uint32 Game.Pathfind.PathfindResultSystem::get_pendingSimulationFrame()
		IL_010a: ldc.i4.m1
		IL_010b: bge.un.s IL_0143

		IL_010d: ldc.i4.0
		IL_010e: ldarg.0
		IL_010f: ldfld class Game.Pathfind.PathfindResultSystem Game.Simulation.SimulationSystem::m_PathfindResultSystem
		IL_0114: callvirt instance uint32 Game.Pathfind.PathfindResultSystem::get_pendingSimulationFrame()
		IL_0119: ldarg.0
		IL_011a: call instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
		IL_011f: sub
		IL_0120: ldc.i4.1
		IL_0121: sub
		IL_0122: call uint32 [Unity.Mathematics]Unity.Mathematics.math::max(uint32, uint32)
		IL_0127: stloc.s 9
		IL_0129: ldc.r4 1
		IL_012e: ldloc.s 9
		IL_0130: conv.r4
		IL_0131: ldc.r4 0.020833334
		IL_0136: mul
		IL_0137: call float32 [Unity.Mathematics]Unity.Mathematics.math::min(float32, float32)
		IL_013c: stloc.s 4
		IL_013e: ldloc.3
		IL_013f: ldloc.s 4
		IL_0141: mul
		IL_0142: stloc.3

		IL_0143: ldarg.0
		IL_0144: ldarg.0
		IL_0145: ldfld float32 Game.Simulation.SimulationSystem::m_Timer
		IL_014a: ldloc.3
		IL_014b: add
		IL_014c: stfld float32 Game.Simulation.SimulationSystem::m_Timer
		IL_0151: ldarg.0
		IL_0152: ldfld float32 Game.Simulation.SimulationSystem::m_Timer
		IL_0157: ldc.r4 60
		IL_015c: mul
		IL_015d: call float32 [Unity.Mathematics]Unity.Mathematics.math::floor(float32)
		IL_0162: conv.i4
		IL_0163: stloc.0
		IL_0164: ldloc.3
		IL_0165: ldc.r4 60
		IL_016a: mul
		IL_016b: stloc.3
		IL_016c: ldarg.0
		IL_016d: ldfld class Game.Pathfind.PathfindResultSystem Game.Simulation.SimulationSystem::m_PathfindResultSystem
		IL_0172: callvirt instance uint32 Game.Pathfind.PathfindResultSystem::get_pendingSimulationFrame()
		IL_0177: ldc.i4.m1
		IL_0178: bge.un.s IL_01a9

		IL_017a: ldc.i4.0
		IL_017b: ldarg.0
		IL_017c: ldfld class Game.Pathfind.PathfindResultSystem Game.Simulation.SimulationSystem::m_PathfindResultSystem
		IL_0181: callvirt instance uint32 Game.Pathfind.PathfindResultSystem::get_pendingSimulationFrame()
		IL_0186: ldarg.0
		IL_0187: call instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
		IL_018c: sub
		IL_018d: ldc.i4.1
		IL_018e: sub
		IL_018f: call uint32 [Unity.Mathematics]Unity.Mathematics.math::max(uint32, uint32)
		IL_0194: stloc.s 10
		IL_0196: ldloc.0
		IL_0197: ldloc.s 10
		IL_0199: call int32 [Unity.Mathematics]Unity.Mathematics.math::min(int32, int32)
		IL_019e: stloc.0
		IL_019f: ldloc.3
		IL_01a0: ldloc.s 10
		IL_01a2: conv.r4
		IL_01a3: call float32 [Unity.Mathematics]Unity.Mathematics.math::min(float32, float32)
		IL_01a8: stloc.3

		IL_01a9: ldarg.0
		IL_01aa: call instance valuetype Game.Simulation.SimulationSystem/PerformancePreference Game.Simulation.SimulationSystem::get_performancePreference()
		IL_01af: ldc.i4.2
		IL_01b0: beq.s IL_0213

		IL_01b2: ldarg.0
		IL_01b3: ldfld class Game.EndFrameBarrier Game.Simulation.SimulationSystem::m_EndFrameBarrier
		IL_01b8: callvirt instance float32 Game.EndFrameBarrier::get_currentElapsedTime()
		IL_01bd: stloc.s 11
		IL_01bf: ldarg.0
		IL_01c0: ldfld class Game.EndFrameBarrier Game.Simulation.SimulationSystem::m_EndFrameBarrier
		IL_01c5: callvirt instance float32 Game.EndFrameBarrier::get_lastElapsedTime()
		IL_01ca: ldloc.s 11
		IL_01cc: sub
		IL_01cd: ldc.r4 0.001
		IL_01d2: ldarg.0
		IL_01d3: call instance float32 Game.Simulation.SimulationSystem::get_frameDuration()
		IL_01d8: call float32 [Unity.Mathematics]Unity.Mathematics.math::max(float32, float32)
		IL_01dd: div
		IL_01de: stloc.s 12
		IL_01e0: ldc.i4.1
		IL_01e1: ldarg.0
		IL_01e2: call instance valuetype Game.Simulation.SimulationSystem/PerformancePreference Game.Simulation.SimulationSystem::get_performancePreference()
		IL_01e7: brfalse.s IL_01f2

		IL_01e9: ldloc.s 12
		IL_01eb: call int32 [UnityEngine.CoreModule]UnityEngine.Mathf::CeilToInt(float32)
		IL_01f0: br.s IL_01f9

		IL_01f2: ldloc.s 12
		IL_01f4: call int32 [UnityEngine.CoreModule]UnityEngine.Mathf::FloorToInt(float32)

		IL_01f9: call int32 [Unity.Mathematics]Unity.Mathematics.math::max(int32, int32)
		IL_01fe: stloc.s 13
		IL_0200: ldloc.0
		IL_0201: ldloc.s 13
		IL_0203: call int32 [Unity.Mathematics]Unity.Mathematics.math::min(int32, int32)
		IL_0208: stloc.0
		IL_0209: ldloc.3
		IL_020a: ldloc.s 13
		IL_020c: conv.r4
		IL_020d: call float32 [Unity.Mathematics]Unity.Mathematics.math::min(float32, float32)
		IL_0212: stloc.3

		IL_0213: ldarg.0
		IL_0214: ldarg.0
		IL_0215: ldfld float32 Game.Simulation.SimulationSystem::m_Timer
		IL_021a: ldloc.0
		IL_021b: conv.r4
		IL_021c: ldc.r4 60
		IL_0221: div
		IL_0222: sub
		IL_0223: ldc.r4 0.0
		IL_0228: ldc.r4 0.016666668
		IL_022d: call float32 [Unity.Mathematics]Unity.Mathematics.math::clamp(float32, float32, float32)
		IL_0232: stfld float32 Game.Simulation.SimulationSystem::m_Timer
		IL_0237: ldc.i4.1
		IL_0238: ldc.i4.8
		IL_0239: ldarg.0
		IL_023a: call instance float32 Game.Simulation.SimulationSystem::get_selectedSpeed()
		IL_023f: ldloc.s 4
		IL_0241: mul
		IL_0242: ldc.r4 2
		IL_0247: mul
		IL_0248: call int32 [UnityEngine.CoreModule]UnityEngine.Mathf::RoundToInt(float32)
		IL_024d: call int32 [Unity.Mathematics]Unity.Mathematics.math::min(int32, int32)
		IL_0252: call int32 [Unity.Mathematics]Unity.Mathematics.math::max(int32, int32)
		IL_0257: stloc.s 5
		IL_0259: ldloc.0
		IL_025a: ldc.i4.0
		IL_025b: ldloc.s 5
		IL_025d: call int32 [Unity.Mathematics]Unity.Mathematics.math::clamp(int32, int32, int32)
		IL_0262: stloc.0
		IL_0263: ldloc.3
		IL_0264: ldc.r4 0.0
		IL_0269: ldloc.s 5
		IL_026b: conv.r4
		IL_026c: call float32 [Unity.Mathematics]Unity.Mathematics.math::clamp(float32, float32, float32)
		IL_0271: stloc.3
		IL_0272: ldloc.3
		IL_0273: ldc.r4 1E-06
		IL_0278: ldc.r4 60
		IL_027d: ldloc.2
		IL_027e: mul
		IL_027f: call float32 [Unity.Mathematics]Unity.Mathematics.math::max(float32, float32)
		IL_0284: div
		IL_0285: stloc.s 6
		IL_0287: ldloc.s 6
		IL_0289: ldarg.0
		IL_028a: call instance float32 Game.Simulation.SimulationSystem::get_smoothSpeed()
		IL_028f: ldc.r4 0.5
		IL_0294: ldloc.2
		IL_0295: call float32 [Unity.Mathematics]Unity.Mathematics.math::pow(float32, float32)
		IL_029a: call float32 [Unity.Mathematics]Unity.Mathematics.math::lerp(float32, float32, float32)
		IL_029f: stloc.s 7
		IL_02a1: ldarg.0
		IL_02a2: call instance float32 Game.Simulation.SimulationSystem::get_smoothSpeed()
		IL_02a7: ldarg.0
		IL_02a8: call instance float32 Game.Simulation.SimulationSystem::get_selectedSpeed()
		IL_02ad: add
		IL_02ae: ldarg.0
		IL_02af: ldfld float32 Game.Simulation.SimulationSystem::m_LastSpeed
		IL_02b4: sub
		IL_02b5: stloc.s 8
		IL_02b7: ldloc.s 6
		IL_02b9: ldarg.0
		IL_02ba: call instance float32 Game.Simulation.SimulationSystem::get_smoothSpeed()
		IL_02bf: ble.un.s IL_02d9

		IL_02c1: ldarg.0
		IL_02c2: ldloc.s 6
		IL_02c4: ldloc.s 8
		IL_02c6: call float32 [Unity.Mathematics]Unity.Mathematics.math::min(float32, float32)
		IL_02cb: ldloc.s 7
		IL_02cd: call float32 [Unity.Mathematics]Unity.Mathematics.math::max(float32, float32)
		IL_02d2: call instance void Game.Simulation.SimulationSystem::set_smoothSpeed(float32)
		IL_02d7: br.s IL_02ef

		IL_02d9: ldarg.0
		IL_02da: ldloc.s 6
		IL_02dc: ldloc.s 8
		IL_02de: call float32 [Unity.Mathematics]Unity.Mathematics.math::max(float32, float32)
		IL_02e3: ldloc.s 7
		IL_02e5: call float32 [Unity.Mathematics]Unity.Mathematics.math::min(float32, float32)
		IL_02ea: call instance void Game.Simulation.SimulationSystem::set_smoothSpeed(float32)

		IL_02ef: ldarg.0
		IL_02f0: ldarg.0
		IL_02f1: ldfld float32 Game.Simulation.SimulationSystem::m_Timer
		IL_02f6: ldc.r4 60
		IL_02fb: mul
		IL_02fc: call instance void Game.Simulation.SimulationSystem::set_frameTime(float32)
		IL_0301: ldarg.0
		IL_0302: ldarg.0
		IL_0303: call instance float32 Game.Simulation.SimulationSystem::get_selectedSpeed()
		IL_0308: stfld float32 Game.Simulation.SimulationSystem::m_LastSpeed
		IL_030d: ldarg.0
		IL_030e: ldfld class Game.UpdateSystem Game.Simulation.SimulationSystem::m_UpdateSystem
		IL_0313: ldc.i4.s 10
		IL_0315: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase)
		IL_031a: ldloc.0
		IL_031b: brfalse IL_03d8

		IL_0320: ldarg.0
		IL_0321: ldloc.0
		IL_0322: stfld int32 Game.Simulation.SimulationSystem::m_StepCount
		IL_0327: ldarg.0
		IL_0328: ldfld class [System]System.Diagnostics.Stopwatch Game.Simulation.SimulationSystem::m_Stopwatch
		IL_032d: callvirt instance void [System]System.Diagnostics.Stopwatch::Start()
		IL_0332: ldc.i4.0
		IL_0333: stloc.s 15
		IL_0335: br.s IL_039d
		// loop start (head: IL_039d)
			IL_0337: ldarg.0
			IL_0338: call instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
			IL_033d: stloc.s 16
			IL_033f: ldarg.0
			IL_0340: ldloc.s 16
			IL_0342: ldc.i4.1
			IL_0343: add
			IL_0344: call instance void Game.Simulation.SimulationSystem::set_frameIndex(uint32)
			IL_0349: ldarg.0
			IL_034a: ldfld class Game.Tools.ToolSystem Game.Simulation.SimulationSystem::m_ToolSystem
			IL_034f: callvirt instance valuetype Game.GameMode Game.Tools.ToolSystem::get_actionMode()
			IL_0354: call bool Game.GameModeExtensions::IsEditor(valuetype Game.GameMode)
			IL_0359: brfalse.s IL_0370

			IL_035b: ldarg.0
			IL_035c: ldfld class Game.UpdateSystem Game.Simulation.SimulationSystem::m_UpdateSystem
			IL_0361: ldc.i4.s 13
			IL_0363: ldarg.0
			IL_0364: call instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
			IL_0369: ldloc.s 15
			IL_036b: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase, uint32, int32)

			IL_0370: ldarg.0
			IL_0371: ldfld class Game.Tools.ToolSystem Game.Simulation.SimulationSystem::m_ToolSystem
			IL_0376: callvirt instance valuetype Game.GameMode Game.Tools.ToolSystem::get_actionMode()
			IL_037b: call bool Game.GameModeExtensions::IsGame(valuetype Game.GameMode)
			IL_0380: brfalse.s IL_0397

			IL_0382: ldarg.0
			IL_0383: ldfld class Game.UpdateSystem Game.Simulation.SimulationSystem::m_UpdateSystem
			IL_0388: ldc.i4.s 12
			IL_038a: ldarg.0
			IL_038b: call instance uint32 Game.Simulation.SimulationSystem::get_frameIndex()
			IL_0390: ldloc.s 15
			IL_0392: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase, uint32, int32)

			IL_0397: ldloc.s 15
			IL_0399: ldc.i4.1
			IL_039a: add
			IL_039b: stloc.s 15

			IL_039d: ldloc.s 15
			IL_039f: ldloc.0
			IL_03a0: blt.s IL_0337
		// end loop

		IL_03a2: ldloca.s 17
		IL_03a4: initobj Game.Simulation.SimulationSystem/SimulationEndTimeJob
		IL_03aa: ldloca.s 17
		IL_03ac: ldarg.0
		IL_03ad: ldfld class [System]System.Diagnostics.Stopwatch Game.Simulation.SimulationSystem::m_Stopwatch
		IL_03b2: call valuetype [mscorlib]System.Runtime.InteropServices.GCHandle [mscorlib]System.Runtime.InteropServices.GCHandle::Alloc(object)
		IL_03b7: stfld valuetype [mscorlib]System.Runtime.InteropServices.GCHandle Game.Simulation.SimulationSystem/SimulationEndTimeJob::m_Stopwatch
		IL_03bc: ldloc.s 17
		IL_03be: stloc.s 14
		IL_03c0: ldarg.0
		IL_03c1: ldloc.s 14
		IL_03c3: ldarg.0
		IL_03c4: ldfld class Game.EndFrameBarrier Game.Simulation.SimulationSystem::m_EndFrameBarrier
		IL_03c9: callvirt instance valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.EndFrameBarrier::get_producerHandle()
		IL_03ce: call valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle [UnityEngine.CoreModule]Unity.Jobs.IJobExtensions::Schedule<valuetype Game.Simulation.SimulationSystem/SimulationEndTimeJob>(!!0, valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle)
		IL_03d3: stfld valuetype [UnityEngine.CoreModule]Unity.Jobs.JobHandle Game.Simulation.SimulationSystem::m_WatchDeps

		IL_03d8: ldarg.0
		IL_03d9: ldfld class Game.UpdateSystem Game.Simulation.SimulationSystem::m_UpdateSystem
		IL_03de: ldc.i4.s 11
		IL_03e0: callvirt instance void Game.UpdateSystem::Update(valuetype Game.SystemUpdatePhase)
		IL_03e5: ret
	} // end of method SimulationSystem::OnUpdate
