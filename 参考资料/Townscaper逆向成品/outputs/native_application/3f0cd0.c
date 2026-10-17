// RVA 0x3f0cd0 | Placemaker.WaveFunctionCollapse$$DrawPropagationGizmo
// PDB: WaveFunctionCollapse_DrawPropagationGizmo_m2758253CC9839CB047793E44C382F8F999601FCE
// Body: [[103f0cd0, 103f12b4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106742c0 Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10675130 Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e520 Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431
// 10a44a80 Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
WaveFunctionCollapse_DrawPropagationGizmo_m2758253CC9839CB047793E44C382F8F999601FCE
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA param_2,MethodInfo *param_3)

{
  float fVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar8;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar9;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar10;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar14;
  bool bVar15;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar16;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar18;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar19;
  uchar uVar20;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_5c;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_38;
  float local_2c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_28;
  float local_1c;
  undefined8 uStack_18;
  float fStack_10;
  undefined8 local_c;

  if (DAT_1151c925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c925 = '\x01';
  }
  pQVar14 = param_2.___qube_0;
  if (((param_2.___qube_0 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
      (pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2.___qube_0
                            ,(MethodInfo *)0x0),
      pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
     (pTVar16 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                          (pTVar16,(MethodInfo *)0x0),
     pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pOVar17 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar16,
                         Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                        );
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar17,(MethodInfo *)0x0)
    ;
    if (!bVar15) {
      return;
    }
    pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar14,
                         (MethodInfo *)0x0);
    if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                          (&VStack_28,pTVar16,(MethodInfo *)0x0);
      local_c._0_4_ = pVVar18->___x_2;
      local_c._4_4_ = pVVar18->___y_3;
      fVar1 = pVVar18->___z_4;
      if (pOVar17 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) {
        pVVar19 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                            ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_5c,
                             (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(pOVar17 + 5),3,
                             (MethodInfo *)0x0);
        local_4c = pVVar19->___x_1;
        fStack_48 = pVVar19->___y_2;
        fStack_44 = pVVar19->___z_3;
        fStack_40 = pVVar19->___w_4;
        pVVar19 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                            ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_5c,
                             (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                             &pOVar17[10]._padding_,3,(MethodInfo *)0x0);
        local_3c = pVVar19->___x_1;
        VStack_38.___x_2 = pVVar19->___y_2;
        VStack_38.___y_3 = pVVar19->___z_3;
        VStack_38.___z_4 = pVVar19->___w_4;
        pVVar19 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                            ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_5c,
                             (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                             &pOVar17[0xf].___m_CachedPtr_0,3,(MethodInfo *)0x0);
        local_2c = pVVar19->___x_1;
        VStack_28.___x_2 = pVVar19->___y_2;
        VStack_28.___y_3 = pVVar19->___z_3;
        VStack_28.___z_4 = pVVar19->___w_4;
        pVVar19 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                            ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_5c,
                             (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(pOVar17 + 0x15)
                             ,3,(MethodInfo *)0x0);
        local_1c = pVVar19->___x_1;
        uStack_18._0_4_ = pVVar19->___y_2;
        uStack_18._4_4_ = pVVar19->___z_3;
        fStack_10 = pVVar19->___w_4;
        uVar20 = param_2.___sideVariationMask_3;
        bVar15 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                           (uVar20,0,(MethodInfo *)0x0);
        if (bVar15) {
          param_2.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
          param_2.___propagationIndex_1 = 0;
          param_2._6_2_ = 0;
          param_2.___existanceIndex_2 = 0;
          param_2.___sideVariationMask_3 = '\0';
          param_2._13_3_ = 0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&param_2,
                     local_3c + local_4c,0.0,VStack_38.___y_3 + fStack_44,
                     VStack_38.___z_4 + fStack_40,(MethodInfo *)0x0);
          local_5c.___m_Left_0 = 0.0;
          local_5c.___m_Right_1 = 0.0;
          local_5c.___m_Top_2 = 0.0;
          local_5c.___m_Bottom_3 = 0.0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    (&local_5c,(float)param_2.___qube_0 * ___xmm_3f0000003f0000003f0000003f000000,
                     (float)param_2._4_4_ * _UNK_111e1e94,
                     (float)param_2.___existanceIndex_2 * _UNK_111e1e98,
                     (float)param_2._12_4_ * _UNK_111e1e9c,(MethodInfo *)0x0);
          VVar8.___y_2 = local_5c.___m_Right_1;
          VVar8.___x_1 = local_5c.___m_Left_0;
          VVar8.___z_3 = local_5c.___m_Top_2;
          VVar8.___w_4 = local_5c.___m_Bottom_3;
          pVVar18 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               &param_2.___propagationIndex_1,VVar8,(MethodInfo *)0x0);
          VVar2.___z_4 = fVar1;
          VVar2.___x_2 = (float)(undefined4)local_c;
          VVar2.___y_3 = (float)local_c._4_4_;
          Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar2,*pVVar18,(MethodInfo *)0x0)
          ;
        }
        bVar15 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                           (uVar20,1,(MethodInfo *)0x0);
        if (bVar15) {
          param_2.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
          param_2.___propagationIndex_1 = 0;
          param_2._6_2_ = 0;
          param_2.___existanceIndex_2 = 0;
          param_2.___sideVariationMask_3 = '\0';
          param_2._13_3_ = 0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&param_2,
                     local_2c + local_3c,0.0,VStack_28.___y_3 + VStack_38.___y_3,
                     VStack_28.___z_4 + VStack_38.___z_4,(MethodInfo *)0x0);
          local_5c.___m_Left_0 = 0.0;
          local_5c.___m_Right_1 = 0.0;
          local_5c.___m_Top_2 = 0.0;
          local_5c.___m_Bottom_3 = 0.0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    (&local_5c,(float)param_2.___qube_0 * ___xmm_3f0000003f0000003f0000003f000000,
                     (float)param_2._4_4_ * _UNK_111e1e94,
                     (float)param_2.___existanceIndex_2 * _UNK_111e1e98,
                     (float)param_2._12_4_ * _UNK_111e1e9c,(MethodInfo *)0x0);
          VVar9.___y_2 = local_5c.___m_Right_1;
          VVar9.___x_1 = local_5c.___m_Left_0;
          VVar9.___z_3 = local_5c.___m_Top_2;
          VVar9.___w_4 = local_5c.___m_Bottom_3;
          pVVar18 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               &param_2.___propagationIndex_1,VVar9,(MethodInfo *)0x0);
          VVar3.___z_4 = fVar1;
          VVar3.___x_2 = (float)(undefined4)local_c;
          VVar3.___y_3 = (float)local_c._4_4_;
          Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar3,*pVVar18,(MethodInfo *)0x0)
          ;
        }
        bVar15 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                           (uVar20,2,(MethodInfo *)0x0);
        if (bVar15) {
          param_2.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
          param_2.___propagationIndex_1 = 0;
          param_2._6_2_ = 0;
          param_2.___existanceIndex_2 = 0;
          param_2.___sideVariationMask_3 = '\0';
          param_2._13_3_ = 0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&param_2,
                     local_1c + local_2c,0.0,uStack_18._4_4_ + VStack_28.___y_3,
                     fStack_10 + VStack_28.___z_4,(MethodInfo *)0x0);
          local_5c.___m_Left_0 = 0.0;
          local_5c.___m_Right_1 = 0.0;
          local_5c.___m_Top_2 = 0.0;
          local_5c.___m_Bottom_3 = 0.0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    (&local_5c,(float)param_2.___qube_0 * ___xmm_3f0000003f0000003f0000003f000000,
                     (float)param_2._4_4_ * _UNK_111e1e94,
                     (float)param_2.___existanceIndex_2 * _UNK_111e1e98,
                     (float)param_2._12_4_ * _UNK_111e1e9c,(MethodInfo *)0x0);
          VVar10.___y_2 = local_5c.___m_Right_1;
          VVar10.___x_1 = local_5c.___m_Left_0;
          VVar10.___z_3 = local_5c.___m_Top_2;
          VVar10.___w_4 = local_5c.___m_Bottom_3;
          pVVar18 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               &param_2.___propagationIndex_1,VVar10,(MethodInfo *)0x0);
          VVar4.___z_4 = fVar1;
          VVar4.___x_2 = (float)(undefined4)local_c;
          VVar4.___y_3 = (float)local_c._4_4_;
          Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar4,*pVVar18,(MethodInfo *)0x0)
          ;
        }
        bVar15 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                           (uVar20,3,(MethodInfo *)0x0);
        if (bVar15) {
          param_2.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
          param_2.___propagationIndex_1 = 0;
          param_2._6_2_ = 0;
          param_2.___existanceIndex_2 = 0;
          param_2.___sideVariationMask_3 = '\0';
          param_2._13_3_ = 0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&param_2,
                     local_1c + local_4c,0.0,uStack_18._4_4_ + fStack_44,fStack_10 + fStack_40,
                     (MethodInfo *)0x0);
          local_5c.___m_Left_0 = 0.0;
          local_5c.___m_Right_1 = 0.0;
          local_5c.___m_Top_2 = 0.0;
          local_5c.___m_Bottom_3 = 0.0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    (&local_5c,(float)param_2.___qube_0 * ___xmm_3f0000003f0000003f0000003f000000,
                     (float)param_2._4_4_ * _UNK_111e1e94,
                     (float)param_2.___existanceIndex_2 * _UNK_111e1e98,
                     (float)param_2._12_4_ * _UNK_111e1e9c,(MethodInfo *)0x0);
          VVar11.___y_2 = local_5c.___m_Right_1;
          VVar11.___x_1 = local_5c.___m_Left_0;
          VVar11.___z_3 = local_5c.___m_Top_2;
          VVar11.___w_4 = local_5c.___m_Bottom_3;
          pVVar18 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               &param_2.___propagationIndex_1,VVar11,(MethodInfo *)0x0);
          VVar5.___z_4 = fVar1;
          VVar5.___x_2 = (float)(undefined4)local_c;
          VVar5.___y_3 = (float)local_c._4_4_;
          Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar5,*pVVar18,(MethodInfo *)0x0)
          ;
        }
        bVar15 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                           (uVar20,4,(MethodInfo *)0x0);
        if (bVar15) {
          pVVar18 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629
                              (&VStack_38,(MethodInfo *)0x0);
          uStack_18._0_4_ = pVVar18->___x_2;
          uStack_18._4_4_ = pVVar18->___y_3;
          VStack_28.___z_4 = pVVar18->___z_4;
          VStack_28.___x_2 = pVVar18->___x_2;
          VStack_28.___y_3 = pVVar18->___y_3;
          param_2._12_4_ = VStack_28.___z_4 * __real_3f000000;
          VVar6.___z_4 = fVar1;
          VVar6.___x_2 = (float)(undefined4)local_c;
          VVar6.___y_3 = (float)local_c._4_4_;
          VVar12.___y_3 = uStack_18._4_4_ * __real_3f000000;
          VVar12.___x_2 = (float)(undefined4)uStack_18 * __real_3f000000;
          VVar12.___z_4 = (float)param_2._12_4_;
          param_2._4_4_ = (undefined4)uStack_18;
          param_2.___existanceIndex_2 = (uint)uStack_18._4_4_;
          fStack_10 = VStack_28.___z_4;
          Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar6,VVar12,(MethodInfo *)0x0);
        }
        bVar15 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                           (uVar20,5,(MethodInfo *)0x0);
        if (!bVar15) {
          return;
        }
        pVVar18 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                            (&VStack_38,(MethodInfo *)0x0);
        VStack_28.___x_2 = pVVar18->___x_2;
        VStack_28.___y_3 = pVVar18->___y_3;
        fStack_10 = pVVar18->___z_4;
        uStack_18._0_4_ = pVVar18->___x_2;
        uStack_18._4_4_ = pVVar18->___y_3;
        param_2._12_4_ = fStack_10 * __real_3f000000;
        VVar7.___z_4 = fVar1;
        VVar7.___x_2 = (float)(undefined4)local_c;
        VVar7.___y_3 = (float)local_c._4_4_;
        VVar13.___y_3 = VStack_28.___y_3 * __real_3f000000;
        VVar13.___x_2 = VStack_28.___x_2 * __real_3f000000;
        VVar13.___z_4 = (float)param_2._12_4_;
        param_2._4_4_ = VStack_28.___x_2;
        param_2.___existanceIndex_2 = (uint)VStack_28.___y_3;
        Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar7,VVar13,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
