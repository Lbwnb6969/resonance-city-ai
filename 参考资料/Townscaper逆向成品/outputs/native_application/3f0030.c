// RVA 0x3f0030 | Placemaker.VoxelBobEffect$$Update
// PDB: VoxelBobEffect_Update_mC9FD428C00AA18858E0CC894D5B93CE4FF810284
// Body: [[103f0030, 103f010e]]
// Direct callees:
// 103eff50 VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
VoxelBobEffect_Update_mC9FD428C00AA18858E0CC894D5B93CE4FF810284
          (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;

  fVar1 = param_1->___bobTime_7;
  fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  if (fVar1 < fVar2) {
    do {
      fVar1 = param_1->___bobCurrent_5 * ___real_bf19999a + param_1->___bobVelocity_6;
      param_1->___bobVelocity_6 = fVar1 * __real_3ecccccd;
      param_1->___bobCurrent_5 = fVar1 + param_1->___bobCurrent_5;
      fVar1 = param_1->___bobTime_7 + __real_3d23d70a;
      param_1->___bobTime_7 = fVar1;
      fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    } while (fVar1 < fVar2);
  }
  if ((float)((uint)param_1->___bobVelocity_6 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
      (float)((uint)param_1->___bobCurrent_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_3a83126f) {
    param_1->___bobCurrent_5 = 0.0;
    param_1->___bobVelocity_6 = 0.0;
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,
               (MethodInfo *)0x0);
  }
  VoxelBobEffect_UpdateShader_m2C355F9825155740D677B34CBA00994C438817BC(param_1,(MethodInfo *)0x0);
  return;
}
