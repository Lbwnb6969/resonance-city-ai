// RVA 0x74eb50 | Placemaker.Ui.PaletteMenu$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: PaletteMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mB59DF03533A4801AFC9F1BA9B7834ECC287AB71C
// Body: [[1074eb50, 1074eec0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e530 RaiseInvalidCastException
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e69d0 UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
PaletteMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mB59DF03533A4801AFC9F1BA9B7834ECC287AB71C
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar4;
  Il2CppObject *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  ushort uVar7;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar8;
  String_t *pSVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar11;
  VirtualInvokeData *pVVar12;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar13;
  Delegate_t *pDVar14;
  Exception_t *pEVar15;
  Delegate_t *pDVar16;
  Il2CppObject **ppIVar17;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar18;
  MethodInfo *pMVar19;
  uint local_c;

  if (DAT_1151ebea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisIPaletteSetup_tF25B69502EBB23904340C91D1F258B5A6C51F3CC_m2428D2EE391307E76377500AA6CC4F10A60CF8B9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPaletteSetup_tF25B69502EBB23904340C91D1F258B5A6C51F3CC_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mF8840A12ED89C7EF6222142A8ABCC07026BE6A81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mFB452D45A72CEE1EBB310FD1737A9CE33B96B538_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m14B3996D8118FE938062A33282B855AF4B7278AB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m63866B49353085E14136443C50FF4BC8A89F5966_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass30_0_t43D67C24E6AA83F89AA6674E144B4F676C86BC90_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151ebea = '\x01';
  }
  pBVar8 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass30_0_t43D67C24E6AA83F89AA6674E144B4F676C86BC90_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar8,(MethodInfo *)0x0);
  if (pBVar8 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar8->___screenAspectRatio_1 = (float)param_1;
    (pBVar8->___referenceResolution_2).___y_1 = (float)param_2;
    pSVar9 = (String_t *)
             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                       );
    pBVar8->___name_0 = pSVar9;
    fVar2 = (pBVar8->___referenceResolution_2).___y_1;
    if ((fVar2 != 0.0) && (iVar3 = *(int *)((int)fVar2 + 0x20), iVar3 != 0)) {
      pUVar4 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar3 + 0x10);
      pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                il2cpp_codegen_object_new
                          (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar10,(Il2CppObject *)pBVar8,
                 (int)
                 U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mF8840A12ED89C7EF6222142A8ABCC07026BE6A81_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      if (pUVar4 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                  (pUVar4,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar10,
                   (MethodInfo *)0x0);
        fVar2 = (pBVar8->___referenceResolution_2).___y_1;
        if ((fVar2 != 0.0) && (iVar3 = *(int *)((int)fVar2 + 0x20), iVar3 != 0)) {
          pUVar4 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar3 + 0x10);
          pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                    il2cpp_codegen_object_new
                              (
                              Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                              );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar10,(Il2CppObject *)pBVar8,
                     (int)
                     U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mFB452D45A72CEE1EBB310FD1737A9CE33B96B538_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar4 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                      (pUVar4,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar10,
                       (MethodInfo *)0x0);
            pOVar11 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true
                                 ,
                                 Component_GetComponentsInChildren_TisIPaletteSetup_tF25B69502EBB23904340C91D1F258B5A6C51F3CC_m2428D2EE391307E76377500AA6CC4F10A60CF8B9_RuntimeMethod_var
                                );
            local_c = 0;
            if (pOVar11 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
              ppIVar17 = pOVar11->m_Items;
              for (; (int)local_c < pOVar11->_padding_; local_c = local_c + 1) {
                if ((uint)pOVar11->_padding_ <= local_c) {
                  pMVar19 = (MethodInfo *)0x0;
                  pEVar15 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                  il2cpp_codegen_raise_exception(pEVar15,pMVar19);
                }
                pIVar5 = *ppIVar17;
                if (pIVar5 == (Il2CppObject *)0x0) goto LAB_1074eea1;
                uVar7 = 0;
                uVar1 = ((pIVar5->field0_0x0).klass)->interface_offsets_count;
                if (uVar1 != 0) {
                  pIVar6 = ((pIVar5->field0_0x0).klass)->interfaceOffsets;
                  do {
                    if (pIVar6[uVar7].interfaceType ==
                        IPaletteSetup_tF25B69502EBB23904340C91D1F258B5A6C51F3CC_il2cpp_TypeInfo_var)
                    {
                      pVVar12 = (VirtualInvokeData *)
                                (&((pIVar5->field0_0x0).klass)->field_0xbc +
                                pIVar6[uVar7].offset * 8);
                      goto LAB_1074ed52;
                    }
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < uVar1);
                }
                pVVar12 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIVar5,
                                     IPaletteSetup_tF25B69502EBB23904340C91D1F258B5A6C51F3CC_il2cpp_TypeInfo_var
                                     ,0);
LAB_1074ed52:
                (*pVVar12->methodPtr)(pIVar5,pVVar12->method);
                ppIVar17 = ppIVar17 + 1;
              }
              pTVar13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                                   (MethodInfo *)0x0);
              pRVar18 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
              if ((pTVar13 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
                 (*(Il2CppClass **)pTVar13 ==
                  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
                pRVar18 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar13;
              }
              (pBVar8->___referenceResolution_2).___x_0 = (float)pRVar18;
              if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
              }
              UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
                        (pRVar18,(MethodInfo *)0x0);
              fVar2 = (pBVar8->___referenceResolution_2).___y_1;
              if ((fVar2 != 0.0) && (iVar3 = *(int *)((int)fVar2 + 0x38), iVar3 != 0)) {
                *(schar *)(iVar3 + 0x1c) = param_1->___selectedPickerIndex_6;
                pDVar16 = *(Delegate_t **)
                           ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var
                                 ->static_fields + 0xc);
                pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                          il2cpp_codegen_object_new
                                    (
                                    Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                    );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar10,(Il2CppObject *)pBVar8,
                           (int)
                           U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m14B3996D8118FE938062A33282B855AF4B7278AB_RuntimeMethod_var
                           ,(MethodInfo *)0x0);
                pDVar14 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                                    (pDVar16,(Delegate_t *)pOVar10,(MethodInfo *)0x0);
                pDVar16 = (Delegate_t *)0x0;
                if (pDVar14 != (Delegate_t *)0x0) {
                  if ((Il2CppClass *)pDVar14->_padding_ ==
                      Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
                    pDVar16 = pDVar14;
                  }
                  if (pDVar16 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                    RaiseInvalidCastException
                              ((Il2CppObject *)pDVar14,
                               Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)
                    ;
                  }
                }
                *(Delegate_t **)
                 ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                       static_fields + 0xc) = pDVar16;
                fVar2 = (pBVar8->___referenceResolution_2).___y_1;
                if (fVar2 != 0.0) {
                  pDVar16 = *(Delegate_t **)((int)fVar2 + 0xa8);
                  pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                            il2cpp_codegen_object_new
                                      (
                                      Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                      );
                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                            (pOVar10,(Il2CppObject *)pBVar8,
                             (int)
                             U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m63866B49353085E14136443C50FF4BC8A89F5966_RuntimeMethod_var
                             ,(MethodInfo *)0x0);
                  pDVar14 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                                      (pDVar16,(Delegate_t *)pOVar10,(MethodInfo *)0x0);
                  pDVar16 = (Delegate_t *)0x0;
                  if (pDVar14 != (Delegate_t *)0x0) {
                    if ((Il2CppClass *)pDVar14->_padding_ ==
                        Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
                      pDVar16 = pDVar14;
                    }
                    if (pDVar16 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                      RaiseInvalidCastException
                                ((Il2CppObject *)pDVar14,
                                 Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                );
                    }
                  }
                  *(Delegate_t **)((int)fVar2 + 0xa8) = pDVar16;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1074eea1:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
