// Game.Rendering.ObjectInterpolateSystem::CalculateTransform 0x060051D5
	.method public hidebysig static 
		valuetype Game.Rendering.InterpolatedTransform CalculateTransform (
			valuetype Game.Objects.TransformFrame frame1,
			valuetype Game.Objects.TransformFrame frame2,
			float32 framePosition
		) cil managed 
	{
		// Method begins at RVA 0x299e6c
		// Header size: 12
		// Code size: 143 (0x8f)
		.maxstack 6
		.locals init (
			[0] valuetype [Colossal.Mathematics]Colossal.Mathematics.Bezier4x3,
			[1] valuetype Game.Rendering.InterpolatedTransform
		)

		IL_0000: ldloca.s 0
		IL_0002: ldarg.0
		IL_0003: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Position
		IL_0008: ldarg.0
		IL_0009: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Position
		IL_000e: ldarg.0
		IL_000f: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Velocity
		IL_0014: ldc.r4 0.08888889
		IL_0019: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Multiply(valuetype [Unity.Mathematics]Unity.Mathematics.float3, float32)
		IL_001e: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Addition(valuetype [Unity.Mathematics]Unity.Mathematics.float3, valuetype [Unity.Mathematics]Unity.Mathematics.float3)
		IL_0023: ldarg.1
		IL_0024: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Position
		IL_0029: ldarg.1
		IL_002a: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Velocity
		IL_002f: ldc.r4 0.08888889
		IL_0034: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Multiply(valuetype [Unity.Mathematics]Unity.Mathematics.float3, float32)
		IL_0039: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Unity.Mathematics]Unity.Mathematics.float3::op_Subtraction(valuetype [Unity.Mathematics]Unity.Mathematics.float3, valuetype [Unity.Mathematics]Unity.Mathematics.float3)
		IL_003e: ldarg.1
		IL_003f: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Objects.TransformFrame::m_Position
		IL_0044: call instance void [Colossal.Mathematics]Colossal.Mathematics.Bezier4x3::.ctor(valuetype [Unity.Mathematics]Unity.Mathematics.float3, valuetype [Unity.Mathematics]Unity.Mathematics.float3, valuetype [Unity.Mathematics]Unity.Mathematics.float3, valuetype [Unity.Mathematics]Unity.Mathematics.float3)
		IL_0049: ldloca.s 1
		IL_004b: ldloc.0
		IL_004c: ldarg.2
		IL_004d: call valuetype [Unity.Mathematics]Unity.Mathematics.float3 [Colossal.Mathematics]Colossal.Mathematics.MathUtils::Position(valuetype [Colossal.Mathematics]Colossal.Mathematics.Bezier4x3, float32)
		IL_0052: stfld valuetype [Unity.Mathematics]Unity.Mathematics.float3 Game.Rendering.InterpolatedTransform::m_Position
		IL_0057: ldloca.s 1
		IL_0059: ldarg.0
		IL_005a: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.quaternion Game.Objects.TransformFrame::m_Rotation
		IL_005f: ldarg.1
		IL_0060: ldfld valuetype [Unity.Mathematics]Unity.Mathematics.quaternion Game.Objects.TransformFrame::m_Rotation
		IL_0065: ldarg.2
		IL_0066: call valuetype [Unity.Mathematics]Unity.Mathematics.quaternion [Unity.Mathematics]Unity.Mathematics.math::slerp(valuetype [Unity.Mathematics]Unity.Mathematics.quaternion, valuetype [Unity.Mathematics]Unity.Mathematics.quaternion, float32)
		IL_006b: stfld valuetype [Unity.Mathematics]Unity.Mathematics.quaternion Game.Rendering.InterpolatedTransform::m_Rotation
		IL_0070: ldloca.s 1
		IL_0072: ldarg.2
		IL_0073: ldc.r4 0.5
		IL_0078: bge.s IL_0082

		IL_007a: ldarg.0
		IL_007b: ldfld valuetype Game.Objects.TransformFlags Game.Objects.TransformFrame::m_Flags
		IL_0080: br.s IL_0088

		IL_0082: ldarg.1
		IL_0083: ldfld valuetype Game.Objects.TransformFlags Game.Objects.TransformFrame::m_Flags

		IL_0088: stfld valuetype Game.Objects.TransformFlags Game.Rendering.InterpolatedTransform::m_Flags
		IL_008d: ldloc.1
		IL_008e: ret
	} // end of method ObjectInterpolateSystem::CalculateTransform
