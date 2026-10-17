// RVA 0x2fa5b0 | Placemaker.Ui.SoundButton$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SoundButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m2EAFAB368751A6235AB754B06E2381864A7FF097
// Body: [[102fa5b0, 102fa901]]
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
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
SoundButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m2EAFAB368751A6235AB754B06E2381864A7FF097
          (SoundButton_t3A64E30E13D6F873DC4C0619867A0944C9AA7000 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  int iVar3;
  Delegate_t *pDVar4;
  bool bVar5;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar6;
  Il2CppObject *pIVar7;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar8;
  Il2CppClass *pIVar9;
  Il2CppClass *pIVar10;
  Il2CppClass *pIVar11;
  float fVar12;

  if (DAT_1151c1c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m1CF58FDC2D929CF67048A8456217659EF81501D4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisDistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0_mF7E349ADCCF363113120015DB7C65F5A0FABC182_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisSlider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D_mE0B2184676DC4687105E995903B9107B41E19C26_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_m8DCA9587DDA0D57D25FDB8F8CB18122E75B1CDE3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m446FE7A1E5B4932339A717DCB1AA695BC19BE739_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mAA3DCBCB13366D2BA4B2EC9F203C413E3776455A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_mA3B8D6F4A4F339D14EFFE4F8327F34C1A8B34AB1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m91A2E221F96CCD7BBB83C5989D2D67D580A043D3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass8_0_tA679BCD3A12CB562D9F61334788E5D22912A406D_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c1c1 = '\x01';
  }
  pBVar6 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass8_0_tA679BCD3A12CB562D9F61334788E5D22912A406D_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar6,(MethodInfo *)0x0);
  if (pBVar6 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar6->___name_0 = (String_t *)param_1;
    pBVar6[1]._padding_ = (int)param_2;
    if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    }
    pIVar7 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                        Component_GetComponentInChildren_TisSlider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D_mE0B2184676DC4687105E995903B9107B41E19C26_RuntimeMethod_var
                       );
    pBVar6->___screenAspectRatio_1 = (float)pIVar7;
    if ((pIVar7 == (Il2CppObject *)0x0) || (pIVar7[3].monitor == (MonitorData *)0x0))
    goto LAB_102fa8f6;
    pIVar7 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pIVar7[3].monitor,
                        true,
                        Component_GetComponentInChildren_TisDistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0_mF7E349ADCCF363113120015DB7C65F5A0FABC182_RuntimeMethod_var
                       );
    (pBVar6->___referenceResolution_2).___x_0 = (float)pIVar7;
    if ((pBVar6->___screenAspectRatio_1 == 0.0) ||
       (pCVar1 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                  ((int)pBVar6->___screenAspectRatio_1 + 0x20),
       pCVar1 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) goto LAB_102fa8f6;
    pIVar7 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                       (pCVar1,true,
                        Component_GetComponentInChildren_TisDistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0_mF7E349ADCCF363113120015DB7C65F5A0FABC182_RuntimeMethod_var
                       );
    (pBVar6->___referenceResolution_2).___y_1 = (float)pIVar7;
    pUVar2 = param_1->___soundState_7;
    if ((((pBVar6[1]._padding_ == 0) || (iVar3 = *(int *)(pBVar6[1]._padding_ + 0xc), iVar3 == 0))
        || (iVar3 = *(int *)(iVar3 + 0x88), iVar3 == 0)) ||
       (iVar3 = *(int *)(iVar3 + 0x24), iVar3 == 0)) goto LAB_102fa8f6;
    bVar5 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                      (*(uchar *)(iVar3 + 0x11),7,(MethodInfo *)0x0);
    fVar12 = __real_3f800000;
    if (!bVar5) {
      fVar12 = 0.0;
    }
    if (pUVar2 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_102fa8f6;
    UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077(pUVar2,fVar12,(MethodInfo *)0x0);
    pUVar2 = param_1->___soundState_7;
    pOVar8 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar8,(Il2CppObject *)pBVar6,
               (int)
               U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m446FE7A1E5B4932339A717DCB1AA695BC19BE739_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (pUVar2 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_102fa8f6;
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              (pUVar2,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar8,(MethodInfo *)0x0
              );
    pUVar2 = param_1->___soundState_7;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar2,(MethodInfo *)0x0);
    pIVar7 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_m8DCA9587DDA0D57D25FDB8F8CB18122E75B1CDE3_RuntimeMethod_var
                       );
    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_102fa8f6;
    pDVar4 = (Delegate_t *)pIVar7[3].monitor;
    pOVar8 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar8,(Il2CppObject *)pBVar6,
               (int)
               U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mAA3DCBCB13366D2BA4B2EC9F203C413E3776455A_RuntimeMethod_var
               ,Action_2__ctor_m1CF58FDC2D929CF67048A8456217659EF81501D4_RuntimeMethod_var);
    pIVar9 = (Il2CppClass *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       (pDVar4,(Delegate_t *)pOVar8,(MethodInfo *)0x0);
    pIVar10 = (Il2CppClass *)0x0;
    if (pIVar9 != (Il2CppClass *)0x0) {
      if ((Il2CppClass *)pIVar9->image ==
          Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var) {
        pIVar10 = pIVar9;
      }
      pIVar11 = Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var;
      if (pIVar10 == (Il2CppClass *)0x0) goto LAB_102fa8fb;
    }
    pIVar9 = pIVar7[2].field0_0x0.klass;
    pIVar7[3].monitor = (MonitorData *)pIVar10;
    pOVar8 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar8,(Il2CppObject *)pBVar6,
               (int)
               U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_mA3B8D6F4A4F339D14EFFE4F8327F34C1A8B34AB1_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pIVar9 = (Il2CppClass *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pIVar9,(Delegate_t *)pOVar8,(MethodInfo *)0x0);
    pIVar10 = (Il2CppClass *)0x0;
    if (pIVar9 != (Il2CppClass *)0x0) {
      if ((Il2CppClass *)pIVar9->image ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pIVar10 = pIVar9;
      }
      pIVar11 = Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
      if (pIVar10 == (Il2CppClass *)0x0) goto LAB_102fa8fb;
    }
    pIVar7[2].field0_0x0.klass = pIVar10;
    iVar3 = pBVar6[1]._padding_;
    if (iVar3 != 0) {
      pDVar4 = *(Delegate_t **)(iVar3 + 0xa8);
      pOVar8 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar8,(Il2CppObject *)pBVar6,
                 (int)
                 U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m91A2E221F96CCD7BBB83C5989D2D67D580A043D3_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pIVar9 = (Il2CppClass *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         (pDVar4,(Delegate_t *)pOVar8,(MethodInfo *)0x0);
      pIVar10 = (Il2CppClass *)0x0;
      if (pIVar9 != (Il2CppClass *)0x0) {
        if ((Il2CppClass *)pIVar9->image ==
            Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
          pIVar10 = pIVar9;
        }
        pIVar11 = Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
        if (pIVar10 == (Il2CppClass *)0x0) {
LAB_102fa8fb:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException((Il2CppObject *)pIVar9,pIVar11);
        }
      }
      *(Il2CppClass **)(iVar3 + 0xa8) = pIVar10;
      return;
    }
  }
LAB_102fa8f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
