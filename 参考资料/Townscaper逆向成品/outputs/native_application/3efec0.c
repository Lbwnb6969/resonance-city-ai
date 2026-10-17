// RVA 0x3efec0 | Placemaker.VoxelBobEffect$$SetPressed
// PDB: VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
// Body: [[103efec0, 103efeee]]
// Direct callees:
// 103eff50 VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
          (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,(MethodInfo *)0x0)
  ;
  (param_1->___bobPos_4).___x_2 = param_2.___x_2;
  (param_1->___bobPos_4).___y_3 = param_2.___y_3;
  (param_1->___bobPos_4).___z_4 = param_2.___z_4;
  VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC(param_1,(MethodInfo *)0x0);
  return;
}
