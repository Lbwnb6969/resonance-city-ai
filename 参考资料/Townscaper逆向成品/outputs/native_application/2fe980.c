// RVA 0x2fe980 | Placemaker.Ui.SunButton$$ImportSunValues
// PDB: SunButton_ImportSunValues_m7CEA379D7927AE9DC48EE93E773B81EE8808183B
// Body: [[102fe980, 102ff2d7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10195ff0 _CIfmod
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 103e8500 UpdateState_SetCurrentOrTarget_m9D15321C43FEC10844F06C0AE89604AC0F0B6843
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10662d70 Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066e5e0 Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10837030 ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3eaf0 Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e60 Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90

void __cdecl
SunButton_ImportSunValues_m7CEA379D7927AE9DC48EE93E773B81EE8808183B
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar13;
  ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *pSVar14;
  SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *pSVar15;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar16;
  Il2CppClass *pIVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *pSVar20;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar23;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar29;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar31;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar32;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar33;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar35;
  bool bVar36;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar37;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar38;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar39;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar40;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar41;
  Il2CppObject *pIVar42;
  float10 extraout_ST0;
  float fVar43;
  float fVar44;
  undefined1 local_60 [20];
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fStack_4c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_40;
  undefined4 uStack_34;
  undefined8 local_30;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *local_28;
  undefined8 local_24;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_1c;
  float local_18;
  uint local_14;
  float local_10;
  undefined8 local_c;

  if (DAT_1151c204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c204 = '\x01';
  }
  local_60._0_4_ = 0.0;
  local_60._4_4_ = 0.0;
  local_60._8_4_ = 0.0;
  local_60._12_4_ = 0.0;
  if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
      (pWVar13 = param_1->___master_4->___worldMaster_5,
      pWVar13 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
     (pSVar14 = pWVar13->___shadowBaker_31,
     pSVar14 == (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)) goto LAB_102ff2d3;
  local_10 = (pSVar14->___current_20).___x_0;
  pSVar15 = param_1->___currentSlider_24;
  local_c = CONCAT44((pSVar14->___current_20).___y_1,(undefined4)local_c);
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar36 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar15,(MethodInfo *)0x0)
  ;
  if (bVar36) {
    pSVar15 = param_1->___sliderY_15;
    pSVar20 = param_1->___currentSlider_24;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar20,
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar15,
                        (MethodInfo *)0x0);
    local_14 = (uint)bVar36;
  }
  else {
    local_14 = 0;
  }
  fVar43 = (param_1->___current_17).___x_0 - local_10;
  fVar44 = (param_1->___current_17).___y_1 - local_c._4_4_;
  if (__real_2edbe6fe <= fVar44 * fVar44 + fVar43 * fVar43) {
    pRVar16 = param_1->___bothContainer_13;
    (param_1->___current_17).___x_0 = local_10;
    (param_1->___current_17).___y_1 = local_c._4_4_;
    if (pRVar16 == (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
    goto LAB_102ff2d3;
    pRVar37 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_60 + 0x10),pRVar16
                         ,(MethodInfo *)0x0);
    local_60._0_4_ = pRVar37->___m_XMin_0;
    local_60._4_4_ = pRVar37->___m_YMin_1;
    local_60._8_4_ = pRVar37->___m_Width_2;
    local_60._12_4_ = pRVar37->___m_Height_3;
    local_c = CONCAT44((param_1->___current_17).___y_1,(undefined4)local_c);
    local_30 = (double)((param_1->___current_17).___x_0 + __real_42c80000);
    _CIfmod();
    fVar43 = (float)extraout_ST0;
    pTVar39 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___bothContainer_13;
    local_10 = (float)(int)((uint)(fVar43 <= __real_3f000000) * 2 + -1) + fVar43;
    local_1c = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
               TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                         ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_60,
                          (MethodInfo *)0x0);
    local_18 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                         ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_60,
                          (MethodInfo *)0x0);
    local_18 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                         ((float)local_1c,local_18,fVar43,(MethodInfo *)0x0);
    local_1c = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
               AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                         ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_60,
                          (MethodInfo *)0x0);
    fVar43 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_60,(MethodInfo *)0x0
                       );
    local_40.___y_3 =
         Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                   ((float)local_1c,fVar43,local_c._4_4_,(MethodInfo *)0x0);
    local_40.___x_2 = local_18;
    local_40.___z_4 = 0.0;
    local_30._4_4_ = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_40.___y_3;
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar26.___y_3 = local_40.___y_3;
    VVar26.___x_2 = local_18;
    VVar26.___z_4 = 0.0;
    pVVar38 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                        (&local_40,pTVar39,VVar26,(MethodInfo *)0x0);
    uVar1 = pVVar38->___x_2;
    uVar7 = pVVar38->___y_3;
    fVar43 = pVVar38->___z_4;
    local_28 = param_1->___bothContainer_13;
    local_30._0_4_ = (float)uVar1;
    local_30._4_4_ = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)uVar7;
    local_1c = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
               TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                         ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_60,
                          (MethodInfo *)0x0);
    fVar44 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_60,(MethodInfo *)0x0
                       );
    local_18 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                         ((float)local_1c,fVar44,local_10,(MethodInfo *)0x0);
    local_1c = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
               AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                         ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_60,
                          (MethodInfo *)0x0);
    fVar44 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_60,(MethodInfo *)0x0
                       );
    local_40.___y_3 =
         Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                   ((float)local_1c,fVar44,local_c._4_4_,(MethodInfo *)0x0);
    local_40.___x_2 = local_18;
    local_40.___z_4 = 0.0;
    local_1c = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_40.___y_3;
    if (local_28 == (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
    goto LAB_102ff2d3;
    VVar27.___y_3 = local_40.___y_3;
    VVar27.___x_2 = local_18;
    VVar27.___z_4 = 0.0;
    pVVar38 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                        (&local_40,(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_28,
                         VVar27,(MethodInfo *)0x0);
    local_c._0_4_ = pVVar38->___x_2;
    local_c._4_4_ = pVVar38->___y_3;
    local_18 = pVVar38->___z_4;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___handleBoth_8 ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar28.___y_3 = (float)local_30._4_4_;
    VVar28.___x_2 = (float)local_30;
    VVar28.___z_4 = fVar43;
    Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___handleBoth_8,
               VVar28,(MethodInfo *)0x0);
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___circle0_10 ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar29.___y_3 = (float)local_30._4_4_;
    VVar29.___x_2 = (float)local_30;
    VVar29.___z_4 = fVar43;
    Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___circle0_10,VVar29,
               (MethodInfo *)0x0);
    local_1c = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleX_5;
    if (local_1c == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (local_1c,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pVVar38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         (MethodInfo *)0x0);
    uVar2 = pVVar38->___x_2;
    uVar8 = pVVar38->___y_3;
    local_28 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pVVar38->___z_4;
    local_40.___y_3 = (float)uVar2;
    local_40.___z_4 = (float)uVar8;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleX_5 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___handleX_5,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                        (pTVar39,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar30.___y_3 = (float)local_30._4_4_;
    VVar30.___x_2 = (float)local_30;
    VVar30.___z_4 = fVar43;
    pVVar38 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         VVar30,(MethodInfo *)0x0);
    fVar44 = pVVar38->___x_2;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    VVar22.___y_3 = local_40.___z_4;
    VVar22.___x_2 = local_40.___y_3;
    VVar22.___z_4 = (float)local_28;
    pVVar38 = ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,VVar22,
                         fVar44,(MethodInfo *)0x0);
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_1c,*pVVar38,
               (MethodInfo *)0x0);
    local_28 = param_1->___handleY_7;
    if (local_28 == (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
    goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_28,
                         (MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pVVar38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         (MethodInfo *)0x0);
    uVar3 = pVVar38->___x_2;
    uVar9 = pVVar38->___y_3;
    fVar44 = pVVar38->___z_4;
    local_40.___y_3 = (float)uVar3;
    local_40.___z_4 = (float)uVar9;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleY_7 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___handleY_7,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                        (pTVar39,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar31.___y_3 = (float)local_30._4_4_;
    VVar31.___x_2 = (float)local_30;
    VVar31.___z_4 = fVar43;
    pVVar38 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         VVar31,(MethodInfo *)0x0);
    local_24._0_4_ = pVVar38->___x_2;
    local_24._4_4_ = pVVar38->___y_3;
    fVar23.___y_1 = local_40.___z_4;
    fVar23.___x_0 = local_40.___y_3;
    fVar23.___z_2 = fVar44;
    pfVar40 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        (&fStack_4c,fVar23,(float)local_24._4_4_,(MethodInfo *)0x0);
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_28,
               (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar40,(MethodInfo *)0x0);
    local_28 = param_1->___horizontalLine_12;
    if (local_28 == (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
    goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_28,
                         (MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pVVar38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         (MethodInfo *)0x0);
    uVar4 = pVVar38->___x_2;
    uVar10 = pVVar38->___y_3;
    fVar44 = pVVar38->___z_4;
    local_40.___y_3 = (float)uVar4;
    local_40.___z_4 = (float)uVar10;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___horizontalLine_12 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___horizontalLine_12,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                        (pTVar39,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar32.___y_3 = (float)local_30._4_4_;
    VVar32.___x_2 = (float)local_30;
    VVar32.___z_4 = fVar43;
    pVVar38 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         VVar32,(MethodInfo *)0x0);
    uVar5 = pVVar38->___x_2;
    uVar11 = pVVar38->___y_3;
    fVar24.___y_1 = local_40.___z_4;
    fVar24.___x_0 = local_40.___y_3;
    fVar24.___z_2 = fVar44;
    uStack_34 = uVar5;
    local_30._0_4_ = (float)uVar11;
    pfVar40 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        (&fStack_4c,fVar24,(float)uVar11,(MethodInfo *)0x0);
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_28,
               (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar40,(MethodInfo *)0x0);
    fVar43 = local_18;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___handleBoth1_9 ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar33.___z_4 = local_18;
    VVar33.___x_2 = (float)(undefined4)local_c;
    VVar33.___y_3 = local_c._4_4_;
    Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___handleBoth1_9,
               VVar33,(MethodInfo *)0x0);
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___circle1_11 ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar34.___z_4 = fVar43;
    VVar34.___x_2 = (float)(undefined4)local_c;
    VVar34.___y_3 = local_c._4_4_;
    Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___circle1_11,VVar34,
               (MethodInfo *)0x0);
    local_28 = param_1->___handleX1_6;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleX_5 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___handleX_5,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pVVar38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         (MethodInfo *)0x0);
    uVar6 = pVVar38->___x_2;
    uVar12 = pVVar38->___y_3;
    fVar44 = pVVar38->___z_4;
    local_40.___y_3 = (float)uVar6;
    local_40.___z_4 = (float)uVar12;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleX_5 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___handleX_5,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    pTVar39 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                        (pTVar39,(MethodInfo *)0x0);
    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102ff2d3;
    VVar35.___z_4 = fVar43;
    VVar35.___x_2 = (float)(undefined4)local_c;
    VVar35.___y_3 = local_c._4_4_;
    pVVar38 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,pTVar39,
                         VVar35,(MethodInfo *)0x0);
    VVar25.___y_3 = local_40.___z_4;
    VVar25.___x_2 = local_40.___y_3;
    VVar25.___z_4 = fVar44;
    pVVar38 = ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_4c,VVar25,
                         pVVar38->___x_2,(MethodInfo *)0x0);
    if (local_28 == (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
    goto LAB_102ff2d3;
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_28,*pVVar38,
               (MethodInfo *)0x0);
    if (param_1->___bulbColor_23 == (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)0x0)
    goto LAB_102ff2d3;
    pCVar41 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37
                        ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(local_60 + 0x10),
                         param_1->___bulbColor_23,(param_1->___current_17).___y_1,(MethodInfo *)0x0)
    ;
    local_60._16_4_ = pCVar41->___r_0;
    fStack_4c.___x_0 = pCVar41->___g_1;
    fStack_4c.___y_1 = pCVar41->___b_2;
    fStack_4c.___z_2 = 1.0;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleBoth_8 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pIVar42 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___handleBoth_8,true,
                         Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
                        );
    if (pIVar42 == (Il2CppObject *)0x0) goto LAB_102ff2d3;
    pIVar17 = (pIVar42->field0_0x0).klass;
    uVar18._0_1_ = pIVar17[1].naturalAligment;
    uVar18._1_1_ = pIVar17[1].packingSize;
    uVar18._2_2_ = *(undefined2 *)&pIVar17[1].field_0xba;
    (**(code **)&pIVar17[1].typeHierarchyDepth)
              (pIVar42,local_60._16_4_,fStack_4c.___x_0,fStack_4c.___y_1,fStack_4c.___z_2,uVar18);
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___handleBoth1_9 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_102ff2d3;
    pIVar42 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___handleBoth1_9,true,
                         Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
                        );
    if (pIVar42 == (Il2CppObject *)0x0) goto LAB_102ff2d3;
    pIVar17 = (pIVar42->field0_0x0).klass;
    uVar19._0_1_ = pIVar17[1].naturalAligment;
    uVar19._1_1_ = pIVar17[1].packingSize;
    uVar19._2_2_ = *(undefined2 *)&pIVar17[1].field_0xba;
    (**(code **)&pIVar17[1].typeHierarchyDepth)
              (pIVar42,local_60._16_4_,fStack_4c.___x_0,fStack_4c.___y_1,fStack_4c.___z_2,uVar19);
    pSVar15 = param_1->___sliderY_15;
    pSVar20 = param_1->___currentSlider_24;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar20,
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar15,
                        (MethodInfo *)0x0);
    if (bVar36) {
      fVar43 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                         (0.58,0.5,(float)((uint)(local_10 - __real_3f000000) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff),(MethodInfo *)0x0)
      ;
      param_1->___scale1_25 = fVar43;
    }
  }
  pUVar21 = param_1->___handle1scale_20;
  if (local_14 == 0) {
    if (pUVar21 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (pUVar21,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pUVar21 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_SetCurrentOrTarget_m9D15321C43FEC10844F06C0AE89604AC0F0B6843
              (pUVar21,param_1->___scale1_25,(MethodInfo *)0x0);
    return;
  }
LAB_102ff2d3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
