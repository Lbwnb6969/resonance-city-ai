// RVA 0x9fe5b0 | Placemaker.Ui.SaveMenu$$FocusGamepadUpdate
// PDB: SaveMenu_FocusGamepadUpdate_mDCEE421F90F5379E5E81E03BAE02DAAE5C3DA8A5
// Body: [[109fe5b0, 109fe84a] [109fe854, 109feaff]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10672c10 Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5
// 10672cf0 Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
// 10674380 Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
// 10755f80 ProgressBarButton_GamepadPress_m1DE864DB057D19DA6C5DA15D0F615A3DB9C608C6
// 1080ca70 RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
// 10873f30 BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 109fe390 SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10a0c7d0 SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f1a460 Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106
// 10f1a6e0 Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2
// 10f1c7d0 Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
// 10f1f2e0 Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SaveMenu_FocusGamepadUpdate_mDCEE421F90F5379E5E81E03BAE02DAAE5C3DA8A5
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF *pLVar2;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar3;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar4;
  bool bVar5;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *pPVar9;
  uint uVar10;
  float fVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_78;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_6c;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_3c;
  float local_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_24;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *local_14;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *local_10;
  float local_c;
  int local_8;

  if (DAT_1152019d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_mB884FFBDCB0F958A34DDC5B2875F652FD5D11B0D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A_mEDCF7FE5486F20DC1E1B7307F1CC25E18BFEA040_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1D950316B29DFB6F670BBCE36E4637E215C52B31_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m36EE4636AFBAE03DA6F3E3674C48D2B3DD25CCC5_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral45B70A20BB77FE0B9F0C0EDFF44CCF5A18938E76);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA23E48142038CF1CD099CB5392A499B251831409);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39);
    DAT_1152019d = '\x01';
  }
  local_30.___x_2 = 0.0;
  local_30.___y_3 = 0.0;
  local_30.___z_4 = 0.0;
  pBVar6 = param_1->___selectedFocusButton_19;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar6,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___focusCanvasGroup_9 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_109feafb;
    pBVar6 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
             Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___focusCanvasGroup_9,true,
                        Component_GetComponentInChildren_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_mB884FFBDCB0F958A34DDC5B2875F652FD5D11B0D_RuntimeMethod_var
                       );
    param_1->___selectedFocusButton_19 = pBVar6;
  }
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pPVar1 = param_1->___master_4->___player_43,
     pPVar1 != (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) {
    bVar5 = Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106(pPVar1,(MethodInfo *)0x0);
    if ((!bVar5) &&
       (bVar5 = Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2
                          (pPVar1,(MethodInfo *)0x0), !bVar5)) {
      return;
    }
    bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                      (pPVar1,_stringLiteralA23E48142038CF1CD099CB5392A499B251831409,
                       (MethodInfo *)0x0);
    if (bVar5) {
      if (param_1->___selectedFocusButton_19 !=
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
        BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28
                  (param_1->___selectedFocusButton_19,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar5 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                        (pPVar1,_stringLiteralA23E48142038CF1CD099CB5392A499B251831409,
                         (MethodInfo *)0x0);
      if (bVar5) {
        if (param_1->___selectedFocusButton_19 !=
            (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
          pPVar9 = (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___selectedFocusButton_19,
                              Component_GetComponent_TisProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A_mEDCF7FE5486F20DC1E1B7307F1CC25E18BFEA040_RuntimeMethod_var
                             );
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pPVar9,
                             (MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
          if (pPVar9 != (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *)0x0) {
            ProgressBarButton_GamepadPress_m1DE864DB057D19DA6C5DA15D0F615A3DB9C608C6
                      (pPVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                          (pPVar1,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,
                           (MethodInfo *)0x0);
        if (bVar5) {
          SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
                    (param_1,'\x01',(MethodInfo *)0x0);
          return;
        }
        bVar5 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                          (pPVar1,_stringLiteral45B70A20BB77FE0B9F0C0EDFF44CCF5A18938E76,
                           (MethodInfo *)0x0);
        if (bVar5) {
          SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689(param_1,(MethodInfo *)0x0);
          if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pDVar3 = param_1->___master_4->___dim_10,
             pDVar3 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
            Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar3,0,(MethodInfo *)0x0);
            if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
               && (pSVar4 = param_1->___master_4->___sideMenu_8,
                  pSVar4 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
              SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6(pSVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          fVar11 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                             (pPVar1,_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80,
                              (MethodInfo *)0x0);
          local_10 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
                     Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                               (pPVar1,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,
                                (MethodInfo *)0x0);
          local_24.___y_1 = (float)((uint)local_10 ^ __xmm_80000000800000008000000080000000);
          local_24.___x_0 = fVar11;
          fVar11 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
                             (&local_24,(MethodInfo *)0x0);
          if ((fVar11 <= ___real_3d23d70b) ||
             (bVar5 = RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
                                (&param_1->___rapidGamepadButton_25,1.0,(MethodInfo *)0x0), !bVar5))
          {
            return;
          }
          local_1c = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5
                               (&local_24,(MethodInfo *)0x0);
          if ((param_1->___selectedFocusButton_19 !=
               (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) &&
             (pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___selectedFocusButton_19,(MethodInfo *)0x0),
             pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
            pVVar8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                               (&local_6c,pTVar7,(MethodInfo *)0x0);
            local_10 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0;
            local_3c._0_4_ = pVVar8->___x_2;
            local_3c._4_4_ = pVVar8->___y_3;
            local_34 = pVVar8->___z_4;
            local_c = __real_7f7fffff;
            if (param_1->___focusButtons_20 !=
                (List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF *)0x0) {
              uVar10 = param_1->___focusButtons_20->____size_2 - 1;
              if (-1 < (int)uVar10) {
                local_8 = uVar10 * 4 + 0x10;
                do {
                  pLVar2 = param_1->___focusButtons_20;
                  if (pLVar2 == (List_1_t2DE248F6EC5B30FE6F150B99D0229C4072C3F4CF *)0x0)
                  goto LAB_109feafb;
                  if ((uint)pLVar2->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                              ((MethodInfo *)0x0);
                  }
                  pBVar6 = *(BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C **)
                            (pLVar2->____items_1 + local_8);
                  local_14 = param_1->___selectedFocusButton_19;
                  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)
                    ;
                  }
                  bVar5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar6,
                                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_14,
                                     (MethodInfo *)0x0);
                  if (!bVar5) {
                    if ((pBVar6 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) ||
                       (pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                            pBVar6,(MethodInfo *)0x0),
                       pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                    goto LAB_109feafb;
                    pVVar8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                       (&local_78,pTVar7,(MethodInfo *)0x0);
                    local_54._0_4_ = pVVar8->___x_2;
                    local_54._4_4_ = pVVar8->___y_3;
                    local_58 = pVVar8->___z_4;
                    local_30.___x_2 = (float)(undefined4)local_54 - (float)local_3c;
                    local_60._0_4_ = pVVar8->___x_2;
                    local_60._4_4_ = pVVar8->___y_3;
                    local_6c.___z_4 = local_58 - local_34;
                    local_30.___y_3 =
                         ((float)local_54._4_4_ - local_3c._4_4_) +
                         ((float)local_54._4_4_ - local_3c._4_4_);
                    local_48 = local_54;
                    local_30.___z_4 = local_6c.___z_4;
                    if (0.0 <= local_1c.___y_1 * local_30.___y_3 + local_30.___x_2 * local_1c.___x_0
                               + local_6c.___z_4 * 0.0) {
                      local_14 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
                                 Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                                           (&local_30,(MethodInfo *)0x0);
                      fVar11 = (float)local_14 /
                               ((local_30.___x_2 / (float)local_14) * local_1c.___x_0 +
                                (local_30.___y_3 / (float)local_14) * local_1c.___y_1 +
                               (local_30.___z_4 / (float)local_14) * ___real_00000000);
                      if (fVar11 < local_c) {
                        local_10 = pBVar6;
                        local_c = fVar11;
                      }
                    }
                  }
                  local_8 = local_8 + -4;
                  uVar10 = uVar10 - 1;
                } while (-1 < (int)uVar10);
              }
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              pBVar6 = local_10;
              bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_10,
                                 (MethodInfo *)0x0);
              if (!bVar5) {
                return;
              }
              param_1->___selectedFocusButton_19 = pBVar6;
              if (pBVar6 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
                pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar6,
                                    (MethodInfo *)0x0);
                ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
                          (pTVar7,4,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_109feafb:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
