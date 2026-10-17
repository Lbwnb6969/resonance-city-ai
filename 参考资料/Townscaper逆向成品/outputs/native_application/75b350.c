// RVA 0x75b350 | Placemaker.PropPlacer$$OnDrawGizmos
// PDB: PropPlacer_OnDrawGizmos_m73BB54B9F393661C899B31CC8A053362201259E5
// Body: [[1075b350, 1075b6e2]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 1021d7a0 Dictionary_2_GetEnumerator_mEEE5DC7077C870F7EE594E3AC4F98083FB030DD1_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10675130 Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
// 1075ac70 PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
// 1075b6f4 FUN_1075b6f4
// 1091c4d0 Enumerator_MoveNext_m9FD46BAD90F02F9B08BDC6EE93E1F332F3F5A808_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e5d0 Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a44a80 Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
// 10a45eb0 Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596

void __cdecl
PropPlacer_OnDrawGizmos_m73BB54B9F393661C899B31CC8A053362201259E5
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,MethodInfo *param_2)

{
  float fVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar7;
  undefined1 *puVar8;
  bool bVar9;
  Enumerator_tE988A7A20A5754B179E57E6C24CC91BECAC78E6C *pEVar10;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar13;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar15;
  int iVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_154;
  Enumerator_tE988A7A20A5754B179E57E6C24CC91BECAC78E6C local_114;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_f4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_dc;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_d0;
  Enumerator_tE988A7A20A5754B179E57E6C24CC91BECAC78E6C local_90;
  float local_68;
  undefined1 local_64 [8];
  float fStack_5c;
  float fStack_58;
  undefined8 local_54;
  float local_4c;
  undefined8 local_48;
  undefined8 local_3c;
  int local_30;
  int iStack_2c;
  undefined8 uStack_28;
  undefined8 local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__PropPlacer_OnDrawGizmos_m73BB54B9F393661C899B31CC8A053362201259E5;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffea0;
  ExceptionList = &pvStack_10;
  puVar8 = &stack0xfffffea0;
  if (DAT_1151ec4e == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_GetEnumerator_m3E9024FE88C796E569678515E1BC26905065E7D8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mD52A4D2A1AC8202B5FCE2CDC4741DD6DB6359209_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mF895647EF33E9C56784B0AC0C3B1856641B18721_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m988BFE34DE7A8D9E5B313C9DE00E46F724066388_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Key_m039E2FDD7617C7F0931DCC6FE77ED0FA18C4A6CD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Value_mD9930379575B6572144CDF38666DD6238DC09D13_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    DAT_1151ec4e = '\x01';
    puVar8 = local_14;
  }
  local_14 = puVar8;
  memset((uchar *)&local_d0,'\0',0x40);
  local_64._0_4_ = 0.0;
  local_64._4_4_ = 0.0;
  fStack_5c = 0.0;
  fStack_58 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_64,1.0,1.0,1.0,0.1,
             (MethodInfo *)0x0);
  CVar4.___g_1 = (float)local_64._4_4_;
  CVar4.___r_0 = (float)local_64._0_4_;
  CVar4.___b_2 = fStack_5c;
  CVar4.___a_3 = fStack_58;
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar4,(MethodInfo *)0x0);
  if ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)param_1->___colliderDict_10 ==
      (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) {
LAB_1075b725:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pEVar10 = Dictionary_2_GetEnumerator_mEEE5DC7077C870F7EE594E3AC4F98083FB030DD1_gshared
                      (&local_114,
                       (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
                       param_1->___colliderDict_10,
                       Dictionary_2_GetEnumerator_m3E9024FE88C796E569678515E1BC26905065E7D8_RuntimeMethod_var
                      );
  local_90.___dictionary_0 = pEVar10->___dictionary_0;
  local_90.___version_1 = pEVar10->___version_1;
  local_90.___index_2 = pEVar10->___index_2;
  local_90.___current_3.___key_0.___x_0 = (pEVar10->___current_3).___key_0.___x_0;
  local_90.___current_3.___key_0.___y_1 = (pEVar10->___current_3).___key_0.___y_1;
  local_90.___current_3.___key_0.___z_2 = (pEVar10->___current_3).___key_0.___z_2;
  local_90.___current_3.___value_1 = (pEVar10->___current_3).___value_1;
  local_90.___getEnumeratorRetType_4 = pEVar10->___getEnumeratorRetType_4;
  local_8 = 0;
  do {
    bVar9 = Enumerator_MoveNext_m9FD46BAD90F02F9B08BDC6EE93E1F332F3F5A808_gshared
                      (&local_90,
                       Enumerator_MoveNext_mF895647EF33E9C56784B0AC0C3B1856641B18721_RuntimeMethod_var
                      );
    if (!bVar9) {
      FUN_1075b6f4();
      return;
    }
    local_30 = local_90.___current_3.___key_0.___x_0;
    iStack_2c = local_90.___current_3.___key_0.___y_1;
    uStack_28 = CONCAT44(local_90.___current_3.___value_1,local_90.___current_3.___key_0.___z_2);
    iVar5.___y_1 = local_90.___current_3.___key_0.___y_1;
    iVar5.___x_0 = local_90.___current_3.___key_0.___x_0;
    iVar5.___z_2 = local_90.___current_3.___key_0.___z_2;
    pMVar11 = PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
                        (&local_154,param_1,iVar5,(MethodInfo *)0x0);
    local_d0.___m00_0 = pMVar11->___m00_0;
    local_d0.___m10_1 = pMVar11->___m10_1;
    local_d0.___m20_2 = pMVar11->___m20_2;
    local_d0.___m30_3 = pMVar11->___m30_3;
    local_d0.___m01_4 = pMVar11->___m01_4;
    local_d0.___m11_5 = pMVar11->___m11_5;
    local_d0.___m21_6 = pMVar11->___m21_6;
    local_d0.___m31_7 = pMVar11->___m31_7;
    local_d0.___m02_8 = pMVar11->___m02_8;
    local_d0.___m12_9 = pMVar11->___m12_9;
    local_d0.___m22_10 = pMVar11->___m22_10;
    local_d0.___m32_11 = pMVar11->___m32_11;
    local_d0.___m03_12 = pMVar11->___m03_12;
    local_d0.___m13_13 = pMVar11->___m13_13;
    local_d0.___m23_14 = pMVar11->___m23_14;
    local_d0.___m33_15 = pMVar11->___m33_15;
    Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar11,(MethodInfo *)0x0);
    pVVar12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_dc,(MethodInfo *)0x0);
    local_1c._0_4_ = pVVar12->___x_2;
    local_1c._4_4_ = pVVar12->___y_3;
    fVar1 = pVVar12->___z_4;
    pVVar12 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(&local_e8,(MethodInfo *)0x0)
    ;
    local_48._0_4_ = pVVar12->___x_2;
    local_48._4_4_ = pVVar12->___y_3;
    local_4c = pVVar12->___z_4;
    local_54._0_4_ = pVVar12->___x_2;
    local_54._4_4_ = pVVar12->___y_3;
    local_68 = local_4c * __real_3ff9999a;
    VVar2.___z_4 = fVar1;
    VVar2.___x_2 = (float)(undefined4)local_1c;
    VVar2.___y_3 = local_1c._4_4_;
    VVar6.___y_3 = (float)local_48._4_4_ * __real_3ff9999a;
    VVar6.___x_2 = (float)(undefined4)local_48 * __real_3ff9999a;
    VVar6.___z_4 = local_68;
    local_3c = local_48;
    Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(VVar2,VVar6,(MethodInfo *)0x0);
    pMVar11 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
                        (&local_154,(MethodInfo *)0x0);
    Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar11,(MethodInfo *)0x0);
    pLVar7 = uStack_28._4_4_;
    iVar16 = 0;
    while( true ) {
      if (pLVar7 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) goto LAB_1075b725;
      if (pLVar7->____size_2 <= iVar16) break;
      pVVar13 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                          ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)
                           &local_114.___current_3.___key_0.___y_1,&local_d0,3,(MethodInfo *)0x0);
      pVVar12 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                          (&local_f4,*pVVar13,(MethodInfo *)0x0);
      uStack_28._0_4_ = pVVar12->___x_2;
      uStack_28._4_4_ = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)pVVar12->___y_3;
      local_1c = CONCAT44(pVVar12->___z_4,(undefined4)local_1c);
      pGVar14 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                          (pLVar7,iVar16,
                           List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                          );
      if ((pGVar14 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) ||
         (pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar14,
                               (MethodInfo *)0x0),
         pTVar15 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1075b725;
      pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_64 + 4),
                           pTVar15,(MethodInfo *)0x0);
      VVar3.___z_4 = local_1c._4_4_;
      VVar3.___x_2 = (float)(undefined4)uStack_28;
      VVar3.___y_3 = (float)uStack_28._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar3,*pVVar12,(MethodInfo *)0x0);
      iVar16 = iVar16 + 1;
    }
  } while( true );
}
