// RVA 0x40ec70 | Os.Hex.HexOnionIteratorGizmo$$OnDrawGizmos
// PDB: HexOnionIteratorGizmo_OnDrawGizmos_mE1682395DD48076D31B49A852572A7CAD2D5EC96
// Body: [[1040ec70, 1040eff9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1040f270 HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e5d0 Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F

void __cdecl
HexOnionIteratorGizmo_OnDrawGizmos_mE1682395DD48076D31B49A852572A7CAD2D5EC96
          (HexOnionIteratorGizmo_tF215CA64D1ACD7AEC49B886D25C6B4A9185C927D *param_1,
          MethodInfo *param_2)

{
  float fVar1;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar8;
  undefined8 *extraout_EAX;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_01;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_b4;
  float local_a8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_a4;
  undefined1 local_98 [28];
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_58;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_54;
  undefined8 local_48;
  undefined8 local_3c;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [8];
  float fStack_18;
  float fStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  if (DAT_1151ca8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ca8d = '\x01';
  }
  pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pMVar8 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                       ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)local_98,pTVar7,
                        (MethodInfo *)0x0);
    local_58 = pMVar8->___m00_0;
    iStack_54.___x_0 = (int)pMVar8->___m10_1;
    iStack_54.___y_1 = (int)pMVar8->___m20_2;
    iStack_54.___z_2 = (int)pMVar8->___m30_3;
    fVar1 = pMVar8->___m01_4;
    iStack_b4.___x_0 = (int)pMVar8->___m11_5;
    iStack_b4.___y_1 = (int)pMVar8->___m21_6;
    iStack_b4.___z_2 = (int)pMVar8->___m31_7;
    local_a8 = pMVar8->___m02_8;
    VStack_a4.___x_2 = pMVar8->___m12_9;
    VStack_a4.___y_3 = pMVar8->___m22_10;
    VStack_a4.___z_4 = pMVar8->___m32_11;
    local_30 = pMVar8->___m03_12;
    fStack_2c = pMVar8->___m13_13;
    fStack_28 = pMVar8->___m23_14;
    fStack_24 = pMVar8->___m33_15;
    if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    }
    MVar2.___m10_1 = (float)iStack_54.___x_0;
    MVar2.___m00_0 = local_58;
    MVar2.___m20_2 = (float)iStack_54.___y_1;
    MVar2.___m30_3 = (float)iStack_54.___z_2;
    MVar2.___m01_4 = fVar1;
    MVar2.___m11_5 = (float)iStack_b4.___x_0;
    MVar2.___m21_6 = (float)iStack_b4.___y_1;
    MVar2.___m31_7 = (float)iStack_b4.___z_2;
    MVar2.___m02_8 = local_a8;
    MVar2.___m12_9 = VStack_a4.___x_2;
    MVar2.___m22_10 = VStack_a4.___y_3;
    MVar2.___m32_11 = VStack_a4.___z_4;
    MVar2.___m03_12 = local_30;
    MVar2.___m13_13 = fStack_2c;
    MVar2.___m23_14 = fStack_28;
    MVar2.___m33_15 = fStack_24;
    pMVar8 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                       ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)local_98,MVar2,
                        *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                         ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                               ->static_fields + 0x1c),(MethodInfo *)0x0);
    Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar8,(MethodInfo *)0x0);
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_20,1.0,1.0,1.0,0.2,
               (MethodInfo *)0x0);
    CVar4.___g_1 = (float)local_20._4_4_;
    CVar4.___r_0 = (float)local_20._0_4_;
    CVar4.___b_2 = fStack_18;
    CVar4.___a_3 = fStack_14;
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar4,(MethodInfo *)0x0);
    memset(local_98 + 0x14,'\0',0x2c);
    do {
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&VStack_a4,(float)(int)local_70,(float)(int)local_6c,(float)(int)local_68,
                 (MethodInfo *)0x0);
      fVar1 = *(float *)(extraout_EAX + 1);
      uStack_c = (undefined4)*extraout_EAX;
      uStack_8 = (undefined4)((ulonglong)*extraout_EAX >> 0x20);
      piVar9 = HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
                         (&iStack_b4,
                          (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)
                          (local_98 + 0x14),(MethodInfo *)0x0);
      local_48._0_4_ = piVar9->___x_0;
      local_48._4_4_ = piVar9->___y_1;
      iStack_54.___x_0 = piVar9->___x_0;
      iStack_54.___y_1 = piVar9->___y_1;
      fStack_24 = (float)piVar9->___z_2;
      local_3c = local_48;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                 (float)(int)(undefined4)local_48,(float)(int)local_48._4_4_,fStack_24,
                 (MethodInfo *)0x0);
      VVar3.___y_3 = (float)uStack_8;
      VVar3.___x_2 = (float)uStack_c;
      VVar3.___z_4 = fVar1;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar3,*extraout_EAX_00,(MethodInfo *)0x0);
    } while ((uint)local_7c < 6);
    local_20._0_4_ = 0.0;
    local_20._4_4_ = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_20,1.0,1.0,1.0,1.0,
               (MethodInfo *)0x0);
    CVar5.___g_1 = (float)local_20._4_4_;
    CVar5.___r_0 = (float)local_20._0_4_;
    CVar5.___b_2 = fStack_18;
    CVar5.___a_3 = fStack_14;
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar5,(MethodInfo *)0x0);
    memset(local_98 + 0x14,'\0',0x2c);
    uStack_8 = 0x3dcccccd;
    local_10 = 0x3dcccccd;
    uStack_c = 0x3dcccccd;
    do {
      fStack_24 = (float)(int)local_68;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_20 + 4),
                 (float)(int)local_70,(float)(int)local_6c,fStack_24,(MethodInfo *)0x0);
      VVar6.___y_3 = (float)uStack_c;
      VVar6.___x_2 = (float)local_10;
      VVar6.___z_4 = 0.1;
      Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
                (*extraout_EAX_01,VVar6,(MethodInfo *)0x0);
      HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
                (&iStack_54,
                 (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *)(local_98 + 0x14),
                 (MethodInfo *)0x0);
    } while ((uint)local_7c < 6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
