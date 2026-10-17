// RVA 0x7581e0 | Placemaker.Props.PropNgonScaler$$Placemaker.Props.IPropModifier.Apply
// PDB: PropNgonScaler_Placemaker_Props_IPropModifier_Apply_mD3D72EABFFF8BA499EE5F164C513747A3EA82771
// Body: [[107581e0, 10758589]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196010 _libm_sse2_sqrt_precise
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10674380 Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
// 10675130 Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c030 Debug_DrawLine_mA85118FC8F0D6DF41CBF0AC95DB19CE2F2DB5149
// 10a44a80 Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480

void __cdecl
PropNgonScaler_Placemaker_Props_IPropModifier_Apply_mD3D72EABFFF8BA499EE5F164C513747A3EA82771
          (PropNgonScaler_tCB655738E813C69F149A1A07740B3A25BE3E6ED0 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          Random_tAA667D9E4475C884ADEB5B16274B7D4C4E90CC12 *param_3,
          PropModifierStruct_tEA20DD1E5AC1C0D4BBC7D9B440411A7A5CE1CF53 param_4,MethodInfo *param_5)

{
  float fVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar11;
  float fVar12;
  float fVar14;
  double dVar13;
  float fVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e0;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_c0;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_b0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_94;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_88;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_48;

  if (DAT_1151ec34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    DAT_1151ec34 = '\x01';
  }
  if (__real_3f000000 < param_4.___ts_2.___x_1 == param_4.___ts_2.___y_2 < __real_3f000000) {
    if (param_4.___square_0 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0)
    goto LAB_10758585;
    local_88.___m00_0 = ((param_4.___square_0)->___m0_12).___m00_0;
    local_88.___m10_1 = ((param_4.___square_0)->___m0_12).___m10_1;
    local_88.___m20_2 = ((param_4.___square_0)->___m0_12).___m20_2;
    local_88.___m30_3 = ((param_4.___square_0)->___m0_12).___m30_3;
    local_88.___m01_4 = ((param_4.___square_0)->___m0_12).___m01_4;
    local_88.___m11_5 = ((param_4.___square_0)->___m0_12).___m11_5;
    local_88.___m21_6 = ((param_4.___square_0)->___m0_12).___m21_6;
    local_88.___m31_7 = ((param_4.___square_0)->___m0_12).___m31_7;
    local_88.___m02_8 = ((param_4.___square_0)->___m0_12).___m02_8;
    local_88.___m12_9 = ((param_4.___square_0)->___m0_12).___m12_9;
    local_88.___m22_10 = ((param_4.___square_0)->___m0_12).___m22_10;
    local_88.___m32_11 = ((param_4.___square_0)->___m0_12).___m32_11;
    local_88.___m03_12 = ((param_4.___square_0)->___m0_12).___m03_12;
    local_88.___m13_13 = ((param_4.___square_0)->___m0_12).___m13_13;
    local_88.___m23_14 = ((param_4.___square_0)->___m0_12).___m23_14;
    local_88.___m33_15 = ((param_4.___square_0)->___m0_12).___m33_15;
    local_48.___m00_0 = ((param_4.___square_0)->___m2_14).___m00_0;
    local_48.___m10_1 = ((param_4.___square_0)->___m2_14).___m10_1;
    local_48.___m20_2 = ((param_4.___square_0)->___m2_14).___m20_2;
    local_48.___m30_3 = ((param_4.___square_0)->___m2_14).___m30_3;
    local_48.___m01_4 = ((param_4.___square_0)->___m2_14).___m01_4;
    local_48.___m11_5 = ((param_4.___square_0)->___m2_14).___m11_5;
    local_48.___m21_6 = ((param_4.___square_0)->___m2_14).___m21_6;
    local_48.___m31_7 = ((param_4.___square_0)->___m2_14).___m31_7;
    local_48.___m02_8 = ((param_4.___square_0)->___m2_14).___m02_8;
    local_48.___m12_9 = ((param_4.___square_0)->___m2_14).___m12_9;
    local_48.___m22_10 = ((param_4.___square_0)->___m2_14).___m22_10;
    local_48.___m32_11 = ((param_4.___square_0)->___m2_14).___m32_11;
    local_48.___m03_12 = ((param_4.___square_0)->___m2_14).___m03_12;
    local_48.___m13_13 = ((param_4.___square_0)->___m2_14).___m13_13;
    local_48.___m23_14 = ((param_4.___square_0)->___m2_14).___m23_14;
    local_48.___m33_15 = ((param_4.___square_0)->___m2_14).___m33_15;
  }
  else {
    if (param_4.___square_0 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0)
    goto LAB_10758585;
    local_88.___m00_0 = ((param_4.___square_0)->___m1_13).___m00_0;
    local_88.___m10_1 = ((param_4.___square_0)->___m1_13).___m10_1;
    local_88.___m20_2 = ((param_4.___square_0)->___m1_13).___m20_2;
    local_88.___m30_3 = ((param_4.___square_0)->___m1_13).___m30_3;
    local_88.___m01_4 = ((param_4.___square_0)->___m1_13).___m01_4;
    local_88.___m11_5 = ((param_4.___square_0)->___m1_13).___m11_5;
    local_88.___m21_6 = ((param_4.___square_0)->___m1_13).___m21_6;
    local_88.___m31_7 = ((param_4.___square_0)->___m1_13).___m31_7;
    local_88.___m02_8 = ((param_4.___square_0)->___m1_13).___m02_8;
    local_88.___m12_9 = ((param_4.___square_0)->___m1_13).___m12_9;
    local_88.___m22_10 = ((param_4.___square_0)->___m1_13).___m22_10;
    local_88.___m32_11 = ((param_4.___square_0)->___m1_13).___m32_11;
    local_88.___m03_12 = ((param_4.___square_0)->___m1_13).___m03_12;
    local_88.___m13_13 = ((param_4.___square_0)->___m1_13).___m13_13;
    local_88.___m23_14 = ((param_4.___square_0)->___m1_13).___m23_14;
    local_88.___m33_15 = ((param_4.___square_0)->___m1_13).___m33_15;
    local_48.___m00_0 = ((param_4.___square_0)->___m3_15).___m00_0;
    local_48.___m10_1 = ((param_4.___square_0)->___m3_15).___m10_1;
    local_48.___m20_2 = ((param_4.___square_0)->___m3_15).___m20_2;
    local_48.___m30_3 = ((param_4.___square_0)->___m3_15).___m30_3;
    local_48.___m01_4 = ((param_4.___square_0)->___m3_15).___m01_4;
    local_48.___m11_5 = ((param_4.___square_0)->___m3_15).___m11_5;
    local_48.___m21_6 = ((param_4.___square_0)->___m3_15).___m21_6;
    local_48.___m31_7 = ((param_4.___square_0)->___m3_15).___m31_7;
    local_48.___m02_8 = ((param_4.___square_0)->___m3_15).___m02_8;
    local_48.___m12_9 = ((param_4.___square_0)->___m3_15).___m12_9;
    local_48.___m22_10 = ((param_4.___square_0)->___m3_15).___m22_10;
    local_48.___m32_11 = ((param_4.___square_0)->___m3_15).___m32_11;
    local_48.___m03_12 = ((param_4.___square_0)->___m3_15).___m03_12;
    local_48.___m13_13 = ((param_4.___square_0)->___m3_15).___m13_13;
    local_48.___m23_14 = ((param_4.___square_0)->___m3_15).___m23_14;
    local_48.___m33_15 = ((param_4.___square_0)->___m3_15).___m33_15;
  }
  pVVar8 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                     ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_d0,&local_88,3,
                      (MethodInfo *)0x0);
  pVVar9 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_d0,*pVVar8,
                      (MethodInfo *)0x0);
  local_e0.___x_2 = pVVar9->___x_2;
  local_e0.___y_3 = pVVar9->___y_3;
  fVar15 = pVVar9->___z_4;
  local_a0._0_8_ = local_e0._0_8_;
  local_a0.___z_4 = fVar15;
  pVVar8 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                     ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_d0,&local_48,3,
                      (MethodInfo *)0x0);
  pVVar9 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                     (&local_c0,*pVVar8,(MethodInfo *)0x0);
  local_d0.___r_0 = pVVar9->___x_2;
  local_d0.___g_1 = pVVar9->___y_3;
  fVar1 = pVVar9->___z_4;
  local_d0.___b_2 = fVar1;
  local_b0._0_8_ = local_d0._0_8_;
  pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_4.___square_0,
                       (MethodInfo *)0x0);
  if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    VVar5.___z_4 = fVar15;
    VVar5.___x_2 = local_e0.___x_2;
    VVar5.___y_3 = local_e0.___y_3;
    pVVar9 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                       (&local_e0,pTVar10,VVar5,(MethodInfo *)0x0);
    local_c0.___x_2 = pVVar9->___x_2;
    local_c0.___y_3 = pVVar9->___y_3;
    fVar15 = pVVar9->___z_4;
    pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_4.___square_0,
                         (MethodInfo *)0x0);
    if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar6.___z_4 = fVar1;
      VVar6.___x_2 = local_b0.___r_0;
      VVar6.___y_3 = local_b0.___g_1;
      pVVar9 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_b0,pTVar10,
                          VVar6,(MethodInfo *)0x0);
      local_e0.___x_2 = pVVar9->___x_2;
      local_e0.___y_3 = pVVar9->___y_3;
      fVar1 = pVVar9->___z_4;
      pCVar11 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(&local_b0,(MethodInfo *)0x0)
      ;
      local_b0.___r_0 = pCVar11->___r_0;
      local_b0.___g_1 = pCVar11->___g_1;
      local_b0.___b_2 = pCVar11->___b_2;
      local_b0.___a_3 = pCVar11->___a_3;
      fVar12 = pCVar11->___r_0;
      fVar14 = pCVar11->___g_1;
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        fVar12 = local_b0.___r_0;
        fVar14 = local_b0.___g_1;
      }
      VVar2.___z_4 = fVar15;
      VVar2.___x_2 = local_c0.___x_2;
      VVar2.___y_3 = local_c0.___y_3;
      VVar3.___z_4 = fVar1;
      VVar3.___x_2 = local_e0.___x_2;
      VVar3.___y_3 = local_e0.___y_3;
      CVar4.___g_1 = fVar14;
      CVar4.___r_0 = fVar12;
      CVar4.___b_2 = local_b0.___b_2;
      CVar4.___a_3 = local_b0.___a_3;
      Debug_DrawLine_mA85118FC8F0D6DF41CBF0AC95DB19CE2F2DB5149
                (VVar2,VVar3,CVar4,10.0,(MethodInfo *)0x0);
      pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                           (MethodInfo *)0x0);
      if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar9 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                           (&local_e0,pTVar10,(MethodInfo *)0x0);
        local_c0.___x_2 = pVVar9->___x_2;
        local_c0.___y_3 = pVVar9->___y_3;
        local_c0.___z_4 = pVVar9->___z_4;
        local_d0.___b_2 = local_a0.___z_4 - local_d0.___b_2;
        local_94.___y_3 = local_a0.___y_3 - local_d0.___g_1;
        local_94.___x_2 = local_a0.___x_2 - local_d0.___r_0;
        local_94.___z_4 = local_d0.___b_2;
        fVar15 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                           (&local_94,(MethodInfo *)0x0);
        dVar13 = __real_4000000000000000;
        local_e0.___x_2 = fVar15;
        _libm_sse2_sqrt_precise();
        local_b0.___r_0 = (float)dVar13;
        local_e0.___x_2 = local_e0.___x_2 / (float)dVar13;
        local_d0.___b_2 = local_c0.___z_4 * local_e0.___x_2;
        VVar7.___y_3 = local_c0.___y_3 * local_e0.___x_2;
        VVar7.___x_2 = local_c0.___x_2 * local_e0.___x_2;
        VVar7.___z_4 = local_d0.___b_2;
        Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                  (pTVar10,VVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_10758585:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
