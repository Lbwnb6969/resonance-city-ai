// Game.Serialization.TransformFrameSystem+TransformFrameJob::InitTransformFrames 0x060013FB
		.method private hidebysig 
			instance void InitTransformFrames (
				valuetype Game.Objects.Transform transform,
				valuetype Game.Objects.Moving moving,
				valuetype Game.Objects.TransformState state,
				valuetype Game.Objects.TransformFlags 'flags',
				uint8 activity,
				valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Objects.TransformFrame> transformFrames,
				uint32 updateFrameOffset,
				bool fullReset
			) cil managed 
		{
			// Method begins at RVA 0xc6130
			// Header size: 12
			// Code size: 179 (0xb3)
			.maxstack 4
			.locals init (
				[0] int32,
				[1] valuetype Game.Objects.TransformFrame,
				[2] float32
			)

			IL_0000: ldc.i4.0
			IL_0001: stloc.0
			IL_0002: br IL_00a5
			// loop start (head: IL_00a5)
				IL_0007: ldarg.s fullReset
				IL_0009: brfalse.s IL_0030

				IL_000b: ldloca.s 1
				IL_000d: ldarg.1
				IL_000e: ldarg.2
				IL_000f: call instance void Game.Objects.TransformFrame::.ctor(valuetype Game.Objects.Transform, valuetype Game.Objects.Moving)
				IL_0014: ldloca.s 1
				IL_0016: ldarg.3
				IL_0017: stfld valuetype Game.Objects.TransformState Game.Objects.TransformFrame::m_State
				IL_001c: ldloca.s 1
				IL_001e: ldarg.s 'flags'
				IL_0020: stfld valuetype Game.Objects.TransformFlags Game.Objects.TransformFrame::m_Flags
				IL_0025: ldloca.s 1
				IL_0027: ldarg.s activity
				IL_0029: stfld uint8 Game.Objects.TransformFrame::m_Activity
				IL_002e: br.s IL_0060

				IL_0030: ldarga.s transformFrames
				IL_0032: ldloc.0
				IL_0033: call instance !0 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Objects.TransformFrame>::get_Item(int32)
				IL_0038: stloc.1
				IL_0039: ldloca.s 1
				IL_003b: ldarg.1
				IL_003c: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.Transform::m_Position
				IL_0041: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Position
				IL_0046: ldloca.s 1
				IL_0048: ldarg.2
				IL_0049: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.Moving::m_Velocity
				IL_004e: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Velocity
				IL_0053: ldloca.s 1
				IL_0055: ldarg.1
				IL_0056: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.quaternion Game.Objects.Transform::m_Rotation
				IL_005b: stfld valuetype [Unity.Mathematics]Unity.Mathematics.quaternion Game.Objects.TransformFrame::m_Rotation

				IL_0060: ldarg.s updateFrameOffset
				IL_0062: ldloc.0
				IL_0063: sub
				IL_0064: ldc.i4.4
				IL_0065: rem.un
				IL_0066: conv.r.un
				IL_0067: conv.r4
				IL_0068: ldc.r4 0.26666668
				IL_006d: mul
				IL_006e: ldc.r4 0.13333334
				IL_0073: add
				IL_0074: stloc.2
				IL_0075: ldloca.s 1
				IL_0077: ldflda valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Position
				IL_007c: dup
				IL_007d: ldobj [Unity.Mathematics]Unity.Mathematics.float3
				IL_0082: ldarg.2
				IL_0083: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.Moving::m_Velocity
				IL_0088: ldloc.2
				IL_0089: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Multiply(valuetype [Unity.Mathematics]Unity.Mathematics.float3, float32)
				IL_008e: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Subtraction(valuetype [Unity.Mathematics]Unity.Mathematics.float3, valuetype [Unity.Mathematics]Unity.Mathematics.float3)
				IL_0093: stobj [Unity.Mathematics]Unity.Mathematics.float3
				IL_0098: ldarga.s transformFrames
				IL_009a: ldloc.0
				IL_009b: ldloc.1
				IL_009c: call instance void valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Objects.TransformFrame>::set_Item(int32, !0)
				IL_00a1: ldloc.0
				IL_00a2: ldc.i4.1
				IL_00a3: add
				IL_00a4: stloc.0

				IL_00a5: ldloc.0
				IL_00a6: ldarga.s transformFrames
				IL_00a8: call instance int32 valuetype [Unity.Entities]Unity.Entities.DynamicBuffer`1<valuetype Game.Objects.TransformFrame>::get_Length()
				IL_00ad: blt IL_0007
			// end loop

			IL_00b2: ret
		} // end of method TransformFrameJob::InitTransformFrames
