// RVA 0x3d9fe0 | Placemaker.ModuleMath$$MultiplyBounds
// PDB: ModuleMath_MultiplyBounds_m9E639031813823E10AFE337B3392B7C7ADDB1EDE
// Body: [[103d9fe0, 103da12c]]
// Direct callees:
// 103cd350 math_mul_m8216B4BCB7ED4B82A4C35B49CCE6DFD8A393D243_inline

int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F * __cdecl
ModuleMath_MultiplyBounds_m9E639031813823E10AFE337B3392B7C7ADDB1EDE
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *__return_storage_ptr__,
          int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 param_1,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_2,MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 iVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar5;
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 iVar6;
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 local_20;
  int local_10;
  int local_c;
  int local_8;

  local_20.___x_0 = param_2.___c0_0.___x_0;
  local_20.___y_1 = param_2.___c0_0.___y_1;
  local_20.___z_2 = param_2.___c0_0.___z_2;
  local_20.___w_3 = 1;
  iVar5 = param_2.___c0_0;
  iVar4.___w_3 = 1;
  iVar4.___x_0 = iVar5.___x_0;
  iVar4.___y_1 = iVar5.___y_1;
  iVar4.___z_2 = iVar5.___z_2;
  piVar7 = math_mul_m8216B4BCB7ED4B82A4C35B49CCE6DFD8A393D243_inline
                     (&local_20,param_1,iVar4,(MethodInfo *)0x0);
  local_8 = piVar7->___x_0;
  iVar10 = piVar7->___y_1;
  iVar9 = piVar7->___z_2;
  local_20.___x_0 = param_2.___c1_1.___x_0;
  local_20.___y_1 = param_2.___c1_1.___y_1;
  local_20.___z_2 = param_2.___c1_1.___z_2;
  local_20.___w_3 = 1;
  iVar6.___y_1 = param_2.___c1_1.___y_1;
  iVar6.___x_0 = param_2.___c1_1.___x_0;
  iVar6.___z_2 = param_2.___c1_1.___z_2;
  iVar6.___w_3 = 1;
  local_10 = iVar9;
  local_c = iVar10;
  piVar7 = math_mul_m8216B4BCB7ED4B82A4C35B49CCE6DFD8A393D243_inline
                     ((int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 *)&param_2.___c0_0.___z_2,
                      param_1,iVar6,(MethodInfo *)0x0);
  iVar1 = piVar7->___x_0;
  iVar2 = piVar7->___y_1;
  iVar3 = piVar7->___z_2;
  if (iVar2 <= iVar10) {
    iVar10 = iVar2;
  }
  if (iVar3 <= iVar9) {
    iVar9 = iVar3;
  }
  iVar8 = local_8;
  if (local_8 <= iVar1) {
    iVar8 = iVar1;
  }
  if (local_c <= iVar2) {
    local_c = iVar2;
  }
  if (local_10 <= iVar3) {
    local_10 = iVar3;
  }
  if (iVar1 <= local_8) {
    local_8 = iVar1;
  }
  (__return_storage_ptr__->___c0_0).___x_0 = local_8;
  (__return_storage_ptr__->___c0_0).___y_1 = iVar10;
  (__return_storage_ptr__->___c0_0).___z_2 = iVar9;
  (__return_storage_ptr__->___c1_1).___x_0 = iVar8;
  (__return_storage_ptr__->___c1_1).___y_1 = local_c;
  (__return_storage_ptr__->___c1_1).___z_2 = local_10;
  return __return_storage_ptr__;
}
