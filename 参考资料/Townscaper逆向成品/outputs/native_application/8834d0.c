// RVA 0x8834d0 | Placemaker.Life.ButterflyLanding$$OnDrawGizmos
// PDB: ButterflyLanding_OnDrawGizmos_m6429C38CD6EF5D8F1E0EEEB28E7147BBB54E8A76
// Body: [[108834d0, 10883733]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e5d0 Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
ButterflyLanding_OnDrawGizmos_m6429C38CD6EF5D8F1E0EEEB28E7147BBB54E8A76
          (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *param_1,MethodInfo *param_2)

{
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *pBVar1;
  float fVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  bool bVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar11;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_80;
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  undefined8 local_24;
  undefined8 local_18;
  undefined8 local_c;

  if (DAT_1151f5d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5d8 = '\x01';
  }
  pBVar1 = param_1->___butterfly_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,(MethodInfo *)0x0);
  local_40._0_4_ = 0.0;
  local_40._4_4_ = 0.0;
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  if (bVar8) {
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_40,1.0,1.0,0.0,1.0,
               (MethodInfo *)0x0);
    CVar6.___g_1 = (float)local_40._4_4_;
    CVar6.___r_0 = (float)local_40._0_4_;
    CVar6.___b_2 = fStack_38;
    CVar6.___a_3 = fStack_34;
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar6,(MethodInfo *)0x0);
    pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088372f;
    pVVar11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        (&local_30,pTVar9,(MethodInfo *)0x0);
    local_c._0_4_ = pVVar11->___x_2;
    local_c._4_4_ = pVVar11->___y_3;
    fVar2 = pVVar11->___z_4;
    if (param_1->___butterfly_4 == (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0)
    goto LAB_1088372f;
    pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___butterfly_4,(MethodInfo *)0x0);
    if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088372f;
    pVVar11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        (&local_30,pTVar9,(MethodInfo *)0x0);
    VVar3.___z_4 = fVar2;
    VVar3.___x_2 = (float)(undefined4)local_c;
    VVar3.___y_3 = (float)local_c._4_4_;
    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar3,*pVVar11,(MethodInfo *)0x0);
  }
  else {
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_40,0.0,1.0,0.0,0.6,
               (MethodInfo *)0x0);
    CVar5.___g_1 = (float)local_40._4_4_;
    CVar5.___r_0 = (float)local_40._0_4_;
    CVar5.___b_2 = fStack_38;
    CVar5.___a_3 = fStack_34;
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar5,(MethodInfo *)0x0);
  }
  pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pMVar10 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                        (&local_80,pTVar9,(MethodInfo *)0x0);
    Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar10,(MethodInfo *)0x0);
    pVVar11 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_30,(MethodInfo *)0x0);
    local_c._0_4_ = pVVar11->___x_2;
    local_c._4_4_ = pVVar11->___y_3;
    fVar2 = pVVar11->___z_4;
    pVVar11 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_40 + 4),
                         (MethodInfo *)0x0);
    local_24._0_4_ = pVVar11->___x_2;
    local_24._4_4_ = pVVar11->___y_3;
    local_30.___x_2 = pVVar11->___x_2;
    local_30.___y_3 = pVVar11->___y_3;
    local_30.___z_4 = pVVar11->___z_4 * __real_3ca3d70a;
    VVar4.___z_4 = fVar2;
    VVar4.___x_2 = (float)(undefined4)local_c;
    VVar4.___y_3 = (float)local_c._4_4_;
    VVar7.___y_3 = (float)local_24._4_4_ * __real_3ca3d70a;
    VVar7.___x_2 = (float)(undefined4)local_24 * __real_3ca3d70a;
    VVar7.___z_4 = local_30.___z_4;
    local_18 = local_24;
    Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(VVar4,VVar7,(MethodInfo *)0x0);
    return;
  }
LAB_1088372f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
