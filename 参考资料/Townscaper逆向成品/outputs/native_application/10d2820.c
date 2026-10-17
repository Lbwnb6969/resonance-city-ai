// RVA 0x10d2820 | FuryStudios.FurySDK.Utils.SafeArea$$<OnRenderObject>g__DrawSquare|18_0
// PDB: SafeArea_U3COnRenderObjectU3Eg__DrawSquareU7C18_0_m54582FBB4C3D51160292F7E2560D88307C6822FA
// Body: [[110d2820, 110d2904]]
// Direct callees:
// 10a3d850 GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9

void __cdecl
SafeArea_U3COnRenderObjectU3Eg__DrawSquareU7C18_0_m54582FBB4C3D51160292F7E2560D88307C6822FA
          (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,MethodInfo *param_3)

{
  if ((__real_3a83126f <=
       (float)((uint)(param_1.___x_0 - param_2.___x_0) & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (__real_3a83126f <=
      (float)((uint)(param_1.___y_1 - param_2.___y_1) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9
              (param_1.___x_0,param_1.___y_1,0.0,(MethodInfo *)0x0);
    GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9
              (param_2.___x_0,param_1.___y_1,0.0,(MethodInfo *)0x0);
    GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9
              (param_2.___x_0,param_2.___y_1,0.0,(MethodInfo *)0x0);
    GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9
              (param_1.___x_0,param_2.___y_1,0.0,(MethodInfo *)0x0);
  }
  return;
}
