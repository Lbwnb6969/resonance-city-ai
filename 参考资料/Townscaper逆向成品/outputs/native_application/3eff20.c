// RVA 0x3eff20 | Placemaker.VoxelBobEffect$$StopPressing
// PDB: VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
// Body: [[103eff20, 103eff4a]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
          (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *param_1,float param_2,
          MethodInfo *param_3)

{
  float fVar1;

  param_1->___bobVelocity_6 = param_2;
  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0);
  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___bobTime_7 = fVar1;
  return;
}
