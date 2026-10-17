// RVA 0x9ff030 | Placemaker.Ui.SaveMenu$$LateUpdate
// PDB: SaveMenu_LateUpdate_mCFFF97A9C67CB3704EBC803CC64CE8FC4FBCEEDB
// Body: [[109ff030, 109ff802]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1320 Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662c90 Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3bfa0 Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90

void __cdecl
SaveMenu_LateUpdate_mCFFF97A9C67CB3704EBC803CC64CE8FC4FBCEEDB
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

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
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar13;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar14;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar23;
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar24;
  bool bVar25;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar27;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar28;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar29;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar30;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar31;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar32;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar33;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar34;
  float fVar35;
  float fVar36;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_60;
  undefined1 local_50 [8];
  float fStack_48;
  float fStack_44;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  float fStack_8;

  pSVar24 = param_1;
  if (DAT_1152019a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1152019a = '\x01';
  }
  if (param_1->___visibleState_28 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar25 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                       (param_1->___visibleState_28,(MethodInfo *)0x0);
    if (!bVar25) {
      return;
    }
    if (param_1->___focusGamepadState_33 !=
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      bVar25 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                         (param_1->___focusGamepadState_33,(MethodInfo *)0x0);
      if (bVar25) {
        pBVar15 = param_1->___selectedFocusButton_19;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                           ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar15,
                            (MethodInfo *)0x0);
        if (!bVar25) {
          return;
        }
        if ((param_1->___selectedFocusButton_19 !=
             (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) &&
           (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___selectedFocusButton_19,(MethodInfo *)0x0),
           pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          pRVar33 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
          if (*(Il2CppClass **)pTVar26 ==
              RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
            pRVar33 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar26;
          }
          if (pRVar33 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            pRVar32 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                                ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_50,pRVar33,
                                 (MethodInfo *)0x0);
            local_60.___m_Left_0 = pRVar32->___m_XMin_0;
            local_60.___m_Right_1 = pRVar32->___m_YMin_1;
            local_60.___m_Top_2 = pRVar32->___m_Width_2;
            local_60.___m_Bottom_3 = pRVar32->___m_Height_3;
            fVar36 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                               (&local_60,(MethodInfo *)0x0);
            VVar34 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
                               ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_60,
                                (MethodInfo *)0x0);
            fVar35 = fStack_8;
            fStack_c = VVar34.___x_0;
            fStack_8 = VVar34.___y_1;
            local_34.___z_4 = 0.0;
            param_1 = (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0;
            VVar20.___y_3 = fVar35;
            VVar20.___x_2 = fVar36;
            VVar20.___z_4 = 0.0;
            pVVar27 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_50 + 4)
                                 ,(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pRVar33,
                                 VVar20,(MethodInfo *)0x0);
            local_28.___x_2 = pVVar27->___x_2;
            local_28.___y_3 = pVVar27->___y_3;
            local_28.___z_4 = pVVar27->___z_4;
            fStack_8 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                                 ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_60,
                                  (MethodInfo *)0x0);
            VVar34 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
                               ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_60,
                                (MethodInfo *)0x0);
            fVar35 = fStack_14;
            fStack_18 = VVar34.___x_0;
            fStack_14 = VVar34.___y_1;
            local_34.___z_4 = 0.0;
            VVar21.___y_3 = fVar35;
            VVar21.___x_2 = fStack_8;
            VVar21.___z_4 = 0.0;
            pVVar27 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_50 + 4)
                                 ,(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pRVar33,
                                 VVar21,(MethodInfo *)0x0);
            local_34.___x_2 = pVVar27->___x_2;
            local_34.___y_3 = pVVar27->___y_3;
            local_34.___z_4 = pVVar27->___z_4;
            if (pSVar24->___focusGamepadCursor0_17 !=
                (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
              pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   pSVar24->___focusGamepadCursor0_17,(MethodInfo *)0x0);
              if ((pSVar24->___focusGamepadCursor0_17 !=
                   (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) &&
                 (pTVar31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pSVar24->___focusGamepadCursor0_17,(MethodInfo *)0x0),
                 pTVar31 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                pVVar27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (local_50 + 4),pTVar31,(MethodInfo *)0x0);
                if (pSVar24->___snapFocusGamepad_34 == false) {
                  fVar35 = *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                           ->static_fields + 0x10);
                }
                else {
                  fVar35 = 0.0;
                }
                uVar6 = pVVar27->___x_2;
                uVar12 = pVVar27->___y_3;
                fStack_14 = pVVar27->___z_4;
                local_1c = (float)uVar6;
                fStack_18 = (float)uVar12;
                fVar35 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                   (fVar35,(MethodInfo *)0x0);
                local_10 = (local_1c - local_28.___x_2) * fVar35 + local_28.___x_2;
                fStack_c = (fStack_18 - local_28.___y_3) * fVar35 + local_28.___y_3;
                fStack_8 = (fStack_14 - local_28.___z_4) * fVar35 + local_28.___z_4;
                if (pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  VVar22.___y_3 = fStack_c;
                  VVar22.___x_2 = local_10;
                  VVar22.___z_4 = fStack_8;
                  Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                            (pTVar26,VVar22,(MethodInfo *)0x0);
                  if (pSVar24->___focusGamepadCursor1_18 !=
                      (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
                    pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pSVar24->___focusGamepadCursor1_18,(MethodInfo *)0x0);
                    if ((pSVar24->___focusGamepadCursor1_18 !=
                         (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) &&
                       (pTVar31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             pSVar24->___focusGamepadCursor1_18,(MethodInfo *)0x0),
                       pTVar31 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                      pVVar27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                           (local_50 + 4),pTVar31,(MethodInfo *)0x0);
                      if (pSVar24->___snapFocusGamepad_34 == false) {
                        param_1 = *(SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 **)
                                   ((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                         ->static_fields + 0x10);
                      }
                      local_28.___x_2 = pVVar27->___x_2;
                      local_28.___y_3 = pVVar27->___y_3;
                      local_28.___z_4 = pVVar27->___z_4;
                      fVar35 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                         ((float)param_1,(MethodInfo *)0x0);
                      local_1c = (local_28.___x_2 - local_34.___x_2) * fVar35 + local_34.___x_2;
                      fStack_18 = (local_28.___y_3 - local_34.___y_3) * fVar35 + local_34.___y_3;
                      fStack_14 = (local_28.___z_4 - local_34.___z_4) * fVar35 + local_34.___z_4;
                      if (pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                        VVar23.___y_3 = fStack_18;
                        VVar23.___x_2 = local_1c;
                        VVar23.___z_4 = fStack_14;
                        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                  (pTVar26,VVar23,(MethodInfo *)0x0);
                        pSVar24->___snapFocusGamepad_34 = false;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (param_1->___gamepadState_32 !=
               (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        bVar25 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                           (param_1->___gamepadState_32,(MethodInfo *)0x0);
        if (bVar25) {
          pSVar13 = param_1->___gamepadCard_22;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar13,
                              (MethodInfo *)0x0);
          if (bVar25) {
            if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___gamepadCursor_23
                 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
               (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___gamepadCursor_23,(MethodInfo *)0x0),
               pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
              pVVar27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_34,pTVar26,(MethodInfo *)0x0);
              uVar1 = pVVar27->___x_2;
              uVar7 = pVVar27->___y_3;
              fVar35 = pVVar27->___z_4;
              fStack_c = (float)uVar1;
              fStack_8 = (float)uVar7;
              if ((param_1->___gamepadCard_22 !=
                   (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
                 (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       param_1->___gamepadCard_22,(MethodInfo *)0x0),
                 pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                pVVar27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                    (&local_34,pTVar26,(MethodInfo *)0x0);
                uVar2 = pVVar27->___x_2;
                uVar8 = pVVar27->___y_3;
                fVar36 = pVVar27->___z_4;
                fStack_18 = (float)uVar2;
                fStack_14 = (float)uVar8;
                pCVar28 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
                                    ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)local_50,
                                     (MethodInfo *)0x0);
                local_50._0_4_ = pCVar28->___r_0;
                local_50._4_4_ = pCVar28->___g_1;
                fStack_48 = pCVar28->___b_2;
                fStack_44 = pCVar28->___a_3;
                if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
                }
                VVar16.___y_3 = fStack_8;
                VVar16.___x_2 = fStack_c;
                VVar16.___z_4 = fVar35;
                VVar17.___y_3 = fStack_14;
                VVar17.___x_2 = fStack_18;
                VVar17.___z_4 = fVar36;
                CVar19.___g_1 = (float)local_50._4_4_;
                CVar19.___r_0 = (float)local_50._0_4_;
                CVar19.___b_2 = fStack_48;
                CVar19.___a_3 = fStack_44;
                Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
                          (VVar16,VVar17,CVar19,(MethodInfo *)0x0);
                if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                     param_1->___gamepadCursor_23 !=
                     (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                   (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         param_1->___gamepadCursor_23,(MethodInfo *)0x0),
                   pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                  pOVar29 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                            Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                      (pTVar26,(MethodInfo *)0x0);
                  if (param_1->___gamepadCard_22 !=
                      (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) {
                    pOVar30 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                              Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         param_1->___gamepadCard_22,(MethodInfo *)0x0);
                    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                );
                    }
                    bVar25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                       (pOVar29,pOVar30,(MethodInfo *)0x0);
                    if (!bVar25) {
                      return;
                    }
                    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___gamepadCursor_23 !=
                         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                       (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             param_1->___gamepadCursor_23,(MethodInfo *)0x0),
                       pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                      pVVar27 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                                          (&local_34,pTVar26,(MethodInfo *)0x0);
                      uVar3 = pVVar27->___x_2;
                      uVar9 = pVVar27->___y_3;
                      fStack_14 = pVVar27->___z_4;
                      local_1c = (float)uVar3;
                      fStack_18 = (float)uVar9;
                      if ((param_1->___gamepadCard_22 !=
                           (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
                         (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)param_1->___gamepadCard_22,(MethodInfo *)0x0),
                         pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                        pVVar27 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                             (local_50 + 4),pTVar26,(MethodInfo *)0x0);
                        local_34.___x_2 = pVVar27->___x_2;
                        local_34.___y_3 = pVVar27->___y_3;
                        fStack_8 = pVVar27->___z_4;
                        uVar4 = pVVar27->___x_2;
                        uVar10 = pVVar27->___y_3;
                        local_40.___z_4 = fStack_14 - fStack_8;
                        local_40.___y_3 = fStack_18 - local_34.___y_3;
                        local_40.___x_2 = local_1c - local_34.___x_2;
                        local_34.___z_4 = local_40.___z_4;
                        local_28._0_8_ = local_34._0_8_;
                        local_10 = (float)uVar4;
                        fStack_c = (float)uVar10;
                        fVar35 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                           (&local_40,(MethodInfo *)0x0);
                        pCVar14 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___gamepadCursor_23;
                        if (fVar35 < __real_3f800000) {
                          if (pCVar14 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
                          {
                            pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                (pCVar14,(MethodInfo *)0x0);
                            if ((param_1->___gamepadCard_22 !=
                                 (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
                               (pTVar31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                    ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___gamepadCard_22,(MethodInfo *)0x0),
                               pTVar26 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0
                               )) {
                              Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                                        (pTVar26,pTVar31,(MethodInfo *)0x0);
                              if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___gamepadCursor_23 !=
                                  (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                                pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                    ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___gamepadCursor_23,(MethodInfo *)0x0);
                                pVVar27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                                    ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(local_50 + 4),(MethodInfo *)0x0);
                                if (pTVar26 !=
                                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                                  Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                                            (pTVar26,*pVVar27,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                        else if (pCVar14 !=
                                 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                          pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              (pCVar14,(MethodInfo *)0x0);
                          if ((param_1->___gamepadCard_22 !=
                               (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
                             (pTVar31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                  ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___gamepadCard_22,(MethodInfo *)0x0),
                             pTVar31 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                          {
                            pVVar27 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(local_50 + 4),pTVar31,(MethodInfo *)0x0);
                            uVar5 = pVVar27->___x_2;
                            uVar11 = pVVar27->___y_3;
                            fVar35 = pVVar27->___z_4;
                            fStack_18 = (float)uVar5;
                            fStack_14 = (float)uVar11;
                            if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___gamepadCursor_23 !=
                                 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                               (pTVar31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                    ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___gamepadCursor_23,(MethodInfo *)0x0),
                               pTVar31 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0
                               )) {
                              pVVar27 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                                                  ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(local_50 + 4),pTVar31,(MethodInfo *)0x0);
                              VVar18.___y_3 = fStack_14;
                              VVar18.___x_2 = fStack_18;
                              VVar18.___z_4 = fVar35;
                              pVVar27 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                                                  ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)(local_50 + 4),VVar18,*pVVar27,
                                                  *(float *)((int)
                                                  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                                  ->static_fields + 0xc),(MethodInfo *)0x0);
                              if (pTVar26 !=
                                  (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                                Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                                          (pTVar26,*pVVar27,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_109ff7fe;
          }
        }
        return;
      }
    }
  }
LAB_109ff7fe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
