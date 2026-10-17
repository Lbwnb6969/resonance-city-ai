// RVA 0xa0c800 | Placemaker.Ui.SideMenu$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SideMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m8854B82513500CEBA8D30DCA80C6693503D52DA2
// Body: [[10a0c800, 10a0cbe7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e50e0 UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e69d0 UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
SideMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m8854B82513500CEBA8D30DCA80C6693503D52DA2
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  int iVar2;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;
  Delegate_t *pDVar5;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar6;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar7;
  Il2CppObject *pIVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Delegate_t *pDVar10;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar11;

  if (DAT_115201ea == '\0') {
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
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m073029061323A8E914B2D197D8D8A3B4C86DF6A3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m3DF6482C0D6F33C8EAEDE3E342C519BC91CBB842_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m7B900A3B12E20AD6BFDE5703CB38784DDD420113_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mF467B02BA65C18E53DE29B473E4EE31CC8ECA5AA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_m198F96FE68730F68397360FCA480E049D1A6F7AF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m2E8832C6AD51430D0D2467200AC93BF07ECCF60E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mFF6E01F5AA529CA34E8F94F0C0525508E00449B2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m1874993B7FD2937871D235FC67EE2B55D1C05DE9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_115201ea = '\x01';
  }
  pBVar3 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass17_0_t7007DC64C2A37C0828DA7D473B3E75A75BFC657C_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar3,(MethodInfo *)0x0);
  if (pBVar3 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar3->___name_0 = (String_t *)param_1;
    pBVar3->___screenAspectRatio_1 = (float)param_2;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)pBVar3,
               (int)
               U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m073029061323A8E914B2D197D8D8A3B4C86DF6A3_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    (pBVar3->___referenceResolution_2).___x_0 = (float)pOVar4;
    pUVar1 = param_1->___openState_8;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)pBVar3,
               (int)
               U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m3DF6482C0D6F33C8EAEDE3E342C519BC91CBB842_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a0cbd5;
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar4,(MethodInfo *)0x0
              );
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    pDVar5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       (*(Delegate_t **)
                         ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var
                               ->static_fields + 0xc),
                        (Delegate_t *)(pBVar3->___referenceResolution_2).___x_0,(MethodInfo *)0x0);
    pDVar10 = (Delegate_t *)0x0;
    if (pDVar5 != (Delegate_t *)0x0) {
      if ((Il2CppClass *)pDVar5->_padding_ ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pDVar10 = pDVar5;
      }
      if (pDVar10 == (Delegate_t *)0x0) goto LAB_10a0cbda;
    }
    *(Delegate_t **)
     ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields +
     0xc) = pDVar10;
    pUVar1 = param_1->___openState_8;
    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      pAVar7 = pUVar1->___onTargetChange_4;
      pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar4,(Il2CppObject *)pBVar3,
                 (int)
                 U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m1874993B7FD2937871D235FC67EE2B55D1C05DE9_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      pAVar6 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         ((Delegate_t *)pAVar7,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
      pAVar7 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
      if (pAVar6 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
        if (*(Il2CppClass **)pAVar6 ==
            Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pAVar6,
                     Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        }
      }
      pUVar1->___onTargetChange_4 = pAVar7;
      if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)pBVar3->___screenAspectRatio_1 !=
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
                  ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)
                   pBVar3->___screenAspectRatio_1,param_1->___openState_8,2,(MethodInfo *)0x0);
        UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                  (param_1->___openState_8,(MethodInfo *)0x0);
        pUVar1 = param_1->___sideButtonState_9;
        pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar4,(Il2CppObject *)pBVar3,
                   (int)
                   U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m7B900A3B12E20AD6BFDE5703CB38784DDD420113_RuntimeMethod_var
                   ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
        if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                    (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar4,
                     (MethodInfo *)0x0);
          UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                    (param_1->___sideButtonState_9,(MethodInfo *)0x0);
          pIVar8 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                              Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                             );
          (pBVar3->___referenceResolution_2).___y_1 = (float)pIVar8;
          if ((pBVar3->___screenAspectRatio_1 != 0.0) &&
             (iVar2 = *(int *)((int)pBVar3->___screenAspectRatio_1 + 0x20), iVar2 != 0)) {
            pUVar1 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar2 + 0x10);
            pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                               );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar4,(Il2CppObject *)pBVar3,
                       (int)
                       U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mF467B02BA65C18E53DE29B473E4EE31CC8ECA5AA_RuntimeMethod_var
                       ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
            if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
              UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                        (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar4,
                         (MethodInfo *)0x0);
              if ((pBVar3->___screenAspectRatio_1 != 0.0) &&
                 (iVar2 = *(int *)((int)pBVar3->___screenAspectRatio_1 + 0x20), iVar2 != 0)) {
                pUVar1 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar2 + 0x10);
                pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar4,(Il2CppObject *)pBVar3,
                           (int)
                           U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_m198F96FE68730F68397360FCA480E049D1A6F7AF_RuntimeMethod_var
                           ,
                           Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                          );
                if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                            (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar4,
                             (MethodInfo *)0x0);
                  pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1
                                      ,(MethodInfo *)0x0);
                  pRVar11 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
                  if ((pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
                     (*(Il2CppClass **)pTVar9 ==
                      RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var))
                  {
                    pRVar11 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar9;
                  }
                  UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
                            (pRVar11,(MethodInfo *)0x0);
                  pDVar10 = *(Delegate_t **)
                             ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var
                                   ->static_fields + 0xc);
                  pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                           il2cpp_codegen_object_new
                                     (
                                     Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                     );
                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                            (pOVar4,(Il2CppObject *)pBVar3,
                             (int)
                             U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m2E8832C6AD51430D0D2467200AC93BF07ECCF60E_RuntimeMethod_var
                             ,(MethodInfo *)0x0);
                  pDVar5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                                     (pDVar10,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
                  pDVar10 = (Delegate_t *)0x0;
                  if (pDVar5 != (Delegate_t *)0x0) {
                    if ((Il2CppClass *)pDVar5->_padding_ ==
                        Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
                      pDVar10 = pDVar5;
                    }
                    if (pDVar10 == (Delegate_t *)0x0) {
LAB_10a0cbda:
                    /* WARNING: Subroutine does not return */
                      RaiseInvalidCastException
                                ((Il2CppObject *)pDVar5,
                                 Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                );
                    }
                  }
                  *(Delegate_t **)
                   ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                         static_fields + 0xc) = pDVar10;
                  if ((pBVar3->___screenAspectRatio_1 != 0.0) &&
                     (iVar2 = *(int *)((int)pBVar3->___screenAspectRatio_1 + 0x44), iVar2 != 0)) {
                    pUVar1 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)
                              (iVar2 + 0x14);
                    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                             il2cpp_codegen_object_new
                                       (
                                       Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                       );
                    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                              (pOVar4,(Il2CppObject *)pBVar3,
                               (int)
                               U3CU3Ec__DisplayClass17_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mFF6E01F5AA529CA34E8F94F0C0525508E00449B2_RuntimeMethod_var
                               ,
                               Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                              );
                    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                      UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                                (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar4
                                 ,(MethodInfo *)0x0);
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
LAB_10a0cbd5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
