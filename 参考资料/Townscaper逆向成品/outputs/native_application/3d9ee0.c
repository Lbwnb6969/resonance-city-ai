// RVA 0x3d9ee0 | Placemaker.ModuleMath$$Mul
// PDB: ModuleMath_Mul_m5E4FE6E367905789CE2BF2E56195F9553F6A9050
// Body: [[103d9ee0, 103d9fd9]]
// Direct callees:
// 1022f180 ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
// 103cd400 math_mul_mA9E246D746A20FDA15C98394B53432145F3C2655_inline

Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 * __cdecl
ModuleMath_Mul_m5E4FE6E367905789CE2BF2E56195F9553F6A9050
          (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *__return_storage_ptr__,
          Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 param_1,
          Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 param_2,MethodInfo *param_3)

{
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar1;
  int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 *piVar2;
  int iVar3;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *pOVar4;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *pOVar5;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar6;
  int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 local_44;

  piVar2 = math_mul_mA9E246D746A20FDA15C98394B53432145F3C2655_inline
                     (&local_44,param_1.___int4x4_0,param_2.___int4x4_0,(MethodInfo *)0x0);
  param_2.___int4x4_0.___c0_0.___x_0 = (piVar2->___c0_0).___x_0;
  param_2.___int4x4_0.___c0_0.___y_1 = (piVar2->___c0_0).___y_1;
  param_2.___int4x4_0.___c0_0.___z_2 = (piVar2->___c0_0).___z_2;
  param_2.___int4x4_0.___c0_0.___w_3 = (piVar2->___c0_0).___w_3;
  param_2.___int4x4_0.___c1_1.___x_0 = (piVar2->___c1_1).___x_0;
  param_2.___int4x4_0.___c1_1.___y_1 = (piVar2->___c1_1).___y_1;
  param_2.___int4x4_0.___c1_1.___z_2 = (piVar2->___c1_1).___z_2;
  param_2.___int4x4_0.___c1_1.___w_3 = (piVar2->___c1_1).___w_3;
  param_2.___int4x4_0.___c2_2.___x_0 = (piVar2->___c2_2).___x_0;
  param_2.___int4x4_0.___c2_2.___y_1 = (piVar2->___c2_2).___y_1;
  param_2.___int4x4_0.___c2_2.___z_2 = (piVar2->___c2_2).___z_2;
  param_2.___int4x4_0.___c2_2.___w_3 = (piVar2->___c2_2).___w_3;
  param_2.___int4x4_0.___c3_3.___x_0 = (piVar2->___c3_3).___x_0;
  param_2.___int4x4_0.___c3_3.___y_1 = (piVar2->___c3_3).___y_1;
  param_2.___int4x4_0.___c3_3.___z_2 = (piVar2->___c3_3).___z_2;
  param_2.___int4x4_0.___c3_3.___w_3 = (piVar2->___c3_3).___w_3;
  BVar6.___v4_4 = param_2.___cornerTransform0_1.___v4_4;
  BVar6.___v5_5 = param_2.___cornerTransform0_1.___v5_5;
  BVar6.___v6_6 = param_2.___cornerTransform0_1.___v6_6;
  BVar6.___v7_7 = param_2.___cornerTransform0_1.___v7_7;
  BVar6.___v0_0 = param_2.___cornerTransform0_1.___v0_0;
  BVar6.___v1_1 = param_2.___cornerTransform0_1.___v1_1;
  BVar6.___v2_2 = param_2.___cornerTransform0_1.___v2_2;
  BVar6.___v3_3 = param_2.___cornerTransform0_1.___v3_3;
  BVar6 = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                    (&param_1.___cornerTransform0_1,BVar6,(MethodInfo *)0x0);
  param_2.___cornerTransform0_1._0_4_ = BVar6._0_4_;
  param_2.___cornerTransform0_1._4_4_ = BVar6._4_4_;
  BVar1.___v4_4 = param_2.___cornerTransform1_2.___v4_4;
  BVar1.___v5_5 = param_2.___cornerTransform1_2.___v5_5;
  BVar1.___v6_6 = param_2.___cornerTransform1_2.___v6_6;
  BVar1.___v7_7 = param_2.___cornerTransform1_2.___v7_7;
  BVar1.___v0_0 = param_2.___cornerTransform1_2.___v0_0;
  BVar1.___v1_1 = param_2.___cornerTransform1_2.___v1_1;
  BVar1.___v2_2 = param_2.___cornerTransform1_2.___v2_2;
  BVar1.___v3_3 = param_2.___cornerTransform1_2.___v3_3;
  BVar6 = ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
                    (&param_1.___cornerTransform1_2,BVar1,(MethodInfo *)0x0);
  param_2.___cornerTransform1_2._0_4_ = BVar6._0_4_;
  param_2.___cornerTransform1_2._4_4_ = BVar6._4_4_;
  param_2.___inverted_4 = param_1.___inverted_4 != param_2.___inverted_4;
  pOVar4 = &param_2;
  pOVar5 = __return_storage_ptr__;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pOVar5->___int4x4_0).___c0_0.___x_0 = (pOVar4->___int4x4_0).___c0_0.___x_0;
    pOVar4 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
             &(pOVar4->___int4x4_0).___c0_0.___y_1;
    pOVar5 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
             &(pOVar5->___int4x4_0).___c0_0.___y_1;
  }
  return __return_storage_ptr__;
}
