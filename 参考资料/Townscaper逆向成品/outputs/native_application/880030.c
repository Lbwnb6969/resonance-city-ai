// RVA 0x880030 | Placemaker.Life.BirdLanding$$get_targetPos
// PDB: BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
// Body: [[10880030, 108800f4]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  float fVar8;
  float fVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_58 [3];
  float fStack_30;
  float fStack_24;
  float local_1c;
  float local_10;

  pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (local_58,pTVar6,(MethodInfo *)0x0);
    uVar1 = pVVar7->___x_2;
    uVar2 = (param_1->___normal_6).___x_2;
    uVar3 = (param_1->___normal_6).___y_3;
    uVar4 = pVVar7->___y_3;
    fVar5 = pVVar7->___z_4;
    fVar8 = (param_1->___normal_6).___z_4 * __real_3e99999a;
    fVar9 = (float)uVar3 * __real_3e99999a;
    __return_storage_ptr__->___x_2 = (float)uVar2 * __real_3e99999a + (float)uVar1;
    __return_storage_ptr__->___y_3 = fVar9 + (float)uVar4;
    __return_storage_ptr__->___z_4 = fVar8 + fVar5;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
