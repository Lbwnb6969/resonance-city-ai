// RVA 0x3efe60 | Placemaker.VoxelBobEffect$$ClickBobEffect
// PDB: VoxelBobEffect_ClickBobEffect_mBC8B78F25332BF09125BF8FAC6ADE9139C8F2350
// Body: [[103efe60, 103efeb0]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
VoxelBobEffect_ClickBobEffect_mBC8B78F25332BF09125BF8FAC6ADE9139C8F2350
          (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,bool param_3,MethodInfo *param_4
          )

{
  float fVar1;

  (param_1->___bobPos_4).___x_2 = param_2.___x_2;
  (param_1->___bobPos_4).___y_3 = param_2.___y_3;
  (param_1->___bobPos_4).___z_4 = param_2.___z_4;
  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0);
  fVar1 = __real_becccccd;
  if (param_3) {
    fVar1 = __real_3ecccccd;
  }
  param_1->___bobVelocity_6 = fVar1;
  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___bobTime_7 = fVar1;
  return;
}
