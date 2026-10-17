// RVA 0x74f430 | Placemaker.Ui.PaletteMenu$$UpdateAnchors
// PDB: PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5
// Body: [[1074f430, 1074f582]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f8f0 Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10672b80 Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,MethodInfo *param_2)

{
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  float fVar4;
  float fVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  undefined8 local_24;
  undefined8 local_18;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c;

  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___t0_10 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___t0_10,
                        (MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                         (&local_30,pTVar2,(MethodInfo *)0x0);
      local_24._0_4_ = pVVar3->___x_2;
      local_24._4_4_ = pVVar3->___y_3;
      pCVar1 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___t1_11;
      (param_1->___p0_17).___x_0 = (float)(undefined4)local_24;
      (param_1->___p0_17).___y_1 = (float)local_24._4_4_;
      local_18 = local_24;
      if (pCVar1 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
        pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           (pCVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                             (&local_30,pTVar2,(MethodInfo *)0x0);
          local_24._0_4_ = pVVar3->___x_2;
          local_24._4_4_ = pVVar3->___y_3;
          (param_1->___p1_18).___x_0 = (float)(undefined4)local_24;
          local_c.___x_0 = (float)(undefined4)local_24 - (param_1->___p0_17).___x_0;
          (param_1->___p1_18).___y_1 = (float)local_24._4_4_;
          local_c.___y_1 = (float)local_24._4_4_ - (param_1->___p0_17).___y_1;
          local_18 = local_24;
          fVar5 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
                            (&local_c,(MethodInfo *)0x0);
          fVar4 = fVar5 * __real_3f000000;
          (param_1->___dir_19).___x_0 = local_c.___x_0 / fVar5;
          (param_1->___dir_19).___y_1 = local_c.___y_1 / fVar5;
          param_1->___dist_20 = fVar4;
          pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                              (MethodInfo *)0x0);
          if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pVVar3 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331
                               (&local_30,pTVar2,(MethodInfo *)0x0);
            fVar4 = pVVar3->___x_2;
            fVar5 = __real_3f800000 / fVar4;
            param_1->___updating_25 = true;
            param_1->___lossyScale_22 = fVar4;
            fVar4 = fVar4 * ___real_42200000;
            param_1->___invLossyScale_23 = fVar5;
            param_1->___pickerSize_21 = fVar4;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
