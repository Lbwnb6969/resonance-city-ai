// RVA 0x2fd1a0 | Placemaker.Ui.StandardButton$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: StandardButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mEF3EBC0F5E44BF55C3D7001CDA253C5FCC17944D
// Body: [[102fd1a0, 102fd413]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8550 UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
// 103e85c0 UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 10873fa0 BaseButton_PushState_mFBCBE69CF38860C237DEBB135D456544E587C1EF
// 108740c0 BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
StandardButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mEF3EBC0F5E44BF55C3D7001CDA253C5FCC17944D
          (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;
  Delegate_t *pDVar7;
  Delegate_t *pDVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_20;
  undefined8 local_14;
  float local_c;
  float local_8;

  if (DAT_1151c1e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5D377B105E5B1ED1A6898B6AB192D400C2378F53_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m97B8181CC7CC61508E6A7D8AF3DC182556A7C98D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass3_0_t2D000AA72DDF89A5E24FDB9F4C159EF4A3E33FB9_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c1e4 = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass3_0_t2D000AA72DDF89A5E24FDB9F4C159EF4A3E33FB9_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  if (pBVar1 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar1->___name_0 = (String_t *)param_1;
    pUVar3 = param_1->___scaleZ_4;
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      pUVar3 = UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
                         (pUVar3,pTVar2,'\x04',0.0,1.0,(MethodInfo *)0x0);
      pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                           (&local_20,pTVar2,(MethodInfo *)0x0);
        local_14._0_4_ = pVVar4->___x_2;
        local_14._4_4_ = pVVar4->___y_3;
        local_c = pVVar4->___z_4;
        if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
                    (pUVar3,local_c,(MethodInfo *)0x0);
          pUVar3 = param_1->___scaleXY_5;
          pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                              (MethodInfo *)0x0);
          if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            pUVar3 = UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
                               (pUVar3,pTVar2,'\x03',0.0,1.0,(MethodInfo *)0x0);
            pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                (MethodInfo *)0x0);
            if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pVVar4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                 (&local_20,pTVar2,(MethodInfo *)0x0);
              if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
                          (pUVar3,pVVar4->___x_2,(MethodInfo *)0x0);
                pUVar3 = param_1->___scaleZ_4;
                if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var)
                  ;
                }
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (pUVar3,(MethodInfo *)0x0);
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (param_1->___scaleXY_5,(MethodInfo *)0x0);
                pBVar5 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
                         Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                    Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                                   );
                pBVar1->___screenAspectRatio_1 = (float)pBVar5;
                pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar6,(Il2CppObject *)pBVar1,
                           (int)
                           U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5D377B105E5B1ED1A6898B6AB192D400C2378F53_RuntimeMethod_var
                           ,
                           Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var
                          );
                if (pBVar5 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
                  BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
                            (pBVar5,(Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)pOVar6,
                             (MethodInfo *)0x0);
                  local_8 = pBVar1->___screenAspectRatio_1;
                  if (local_8 != 0.0) {
                    pDVar8 = *(Delegate_t **)((int)local_8 + 0x24);
                    pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                             il2cpp_codegen_object_new
                                       (
                                       Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                       );
                    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                              (pOVar6,(Il2CppObject *)pBVar1,
                               (int)
                               U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m97B8181CC7CC61508E6A7D8AF3DC182556A7C98D_RuntimeMethod_var
                               ,(MethodInfo *)0x0);
                    pDVar7 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                                       (pDVar8,(Delegate_t *)pOVar6,(MethodInfo *)0x0);
                    pDVar8 = (Delegate_t *)0x0;
                    if (pDVar7 != (Delegate_t *)0x0) {
                      if ((Il2CppClass *)pDVar7->_padding_ ==
                          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
                        pDVar8 = pDVar7;
                      }
                      if (pDVar8 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                        RaiseInvalidCastException
                                  ((Il2CppObject *)pDVar7,
                                   Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                  );
                      }
                    }
                    *(Delegate_t **)((int)local_8 + 0x24) = pDVar8;
                    if ((BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
                        pBVar1->___screenAspectRatio_1 !=
                        (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
                      BaseButton_PushState_mFBCBE69CF38860C237DEBB135D456544E587C1EF
                                ((BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
                                 pBVar1->___screenAspectRatio_1,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
