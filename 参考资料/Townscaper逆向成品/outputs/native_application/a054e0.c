// RVA 0xa054e0 | Placemaker.Ui.ScreenshotButtons$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: ScreenshotButtons_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m7183B0F3C6C6E6EC485A3C12B60EC150C21ED485
// Body: [[10a054e0, 10a059e0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10ac6810 FileBrowser_add_OnOpenFoldersComplete_mC11290F59AC1F054BF7F706E20DCD35195E7E6A8
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
// 10c1d150 Singleton_1_get_Instance_m4E8C37BD2935D7C403E1FC595DD35897728836B4_gshared

void __cdecl
ScreenshotButtons_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m7183B0F3C6C6E6EC485A3C12B60EC150C21ED485
          (ScreenshotButtons_t36FF37FF4142755CD948572FF8DFA7B3E9E67307 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *pTVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar8;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar9;
  String_t *pSVar10;
  float *pfVar11;
  Il2CppObject *pIVar12;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar13;
  Delegate_t *pDVar14;
  Delegate_t *pDVar15;
  FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *pFVar16;
  undefined1 local_20 [16];
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *local_10;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *local_c;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *local_8;

  if (DAT_115201c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_m46B2F6A80EA022EB45762E6945852D7062ADFB90_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       OpenFoldersComplete_t70E5BF5A30918103F1B92C22B4C46C7899485D0F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ScreenshotButtons_OnFolderBrowsingComplete_mDB3F455ECEB7A8692369268C3D634F959E628673_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Singleton_1_get_Instance_mCED330DE853BBDFBF90FDB47109C277CC35E9E3C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_mE19E0B157369B9E74BA53FA6D97ADB07CFCE5500_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFrameStateU7C0_m8C080B31E66BCF84A353F42B5280BD1242CCA55C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass20_0_t7B4BB739803156022C6247A2D79724DD8FB9530D_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m890257EF82D69B3D1BBE01D00999912A9D9EC88B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m2E8CDDA90BBD3504D2DAA98985ACC35973AB37A6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mE181D2E7C1E3CFDFB5F00351D4DF6DE7C060B0BA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass20_1_t75E9B92044FD680CE97D5A76B5B84380466E2C48_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_115201c2 = '\x01';
  }
  pBVar8 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass20_0_t7B4BB739803156022C6247A2D79724DD8FB9530D_il2cpp_TypeInfo_var
                     );
  local_10 = pBVar8;
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar8,(MethodInfo *)0x0);
  if (pBVar8 == (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) goto LAB_10a059d5;
  pBVar8->___name_0 = (String_t *)param_1;
  pBVar8->___screenAspectRatio_1 = (float)param_2;
  pTVar1 = param_1->___widthInput_16;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pTVar1,(MethodInfo *)0x0);
  if (bVar7) {
    pBVar9 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
             il2cpp_codegen_object_new
                       (
                       U3CU3Ec__DisplayClass20_1_t75E9B92044FD680CE97D5A76B5B84380466E2C48_il2cpp_TypeInfo_var
                       );
    BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar9,(MethodInfo *)0x0);
    if (param_1->___widthInput_16 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0
       ) goto LAB_10a059d5;
    pSVar10 = (String_t *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___widthInput_16,
                         Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var
                        );
    if ((pBVar9 == (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) ||
       (pBVar9->___name_0 = pSVar10, pSVar10 == (String_t *)0x0)) goto LAB_10a059d5;
    pfVar11 = (float *)(**(code **)(pSVar10->_padding_ + 0x16c))
                                 (local_20,pSVar10,*(undefined4 *)(pSVar10->_padding_ + 0x170));
    fVar4 = pfVar11[1];
    fVar5 = pfVar11[2];
    fVar6 = pfVar11[3];
    pBVar9->___screenAspectRatio_1 = *pfVar11;
    (pBVar9->___referenceResolution_2).___x_0 = fVar4;
    (pBVar9->___referenceResolution_2).___y_1 = fVar5;
    pBVar9[1]._padding_ = (int)fVar6;
    local_8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)param_1->___errorWidth_12;
    local_c = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
              il2cpp_codegen_object_new
                        (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_c,
               (Il2CppObject *)pBVar9,
               (int)
               U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m890257EF82D69B3D1BBE01D00999912A9D9EC88B_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (local_8 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10a059d5;
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              ((UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)local_8,local_c,
               (MethodInfo *)0x0);
    if (param_1->___heightInput_17 ==
        (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0) goto LAB_10a059d5;
    pIVar12 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___heightInput_17,
                         Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var
                        );
    pBVar9[1]._padding_ = (int)pIVar12;
    local_c = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)param_1->___errorHeight_13;
    local_8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
              il2cpp_codegen_object_new
                        (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_8,
               (Il2CppObject *)pBVar9,
               (int)
               U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m2E8CDDA90BBD3504D2DAA98985ACC35973AB37A6_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (local_c == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10a059d5;
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              ((UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)local_c,local_8,
               (MethodInfo *)0x0);
    if (param_1->___pathInput_18 == (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 *)0x0)
    goto LAB_10a059d5;
    pSVar10 = (String_t *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___pathInput_18,
                         Component_GetComponent_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_mC2B96FBBFDBEB7FC16A23436F3C7A3C2740CAAA1_RuntimeMethod_var
                        );
    pBVar9[1].___name_0 = pSVar10;
    local_c = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)param_1->___errorPath_14;
    local_8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
              il2cpp_codegen_object_new
                        (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_8,
               (Il2CppObject *)pBVar9,
               (int)
               U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mE181D2E7C1E3CFDFB5F00351D4DF6DE7C060B0BA_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (local_c == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10a059d5;
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              ((UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)local_c,local_8,
               (MethodInfo *)0x0);
  }
  if (param_1->___frameState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
              (param_1->___frameState_10,param_1->___cornersCanvasGroup_8,(MethodInfo *)0x0);
    if (param_1->___sideDimState_11 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
      UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                (param_1->___sideDimState_11,param_1->___frameCanvasGroup_5,(MethodInfo *)0x0);
      if (param_1->___sideDimState_11 !=
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                  (param_1->___sideDimState_11,param_1->___frameCanvasGroup1_6,(MethodInfo *)0x0);
        pIVar12 = Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                             Component_GetComponentInChildren_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_m46B2F6A80EA022EB45762E6945852D7062ADFB90_RuntimeMethod_var
                            );
        (pBVar8->___referenceResolution_2).___x_0 = (float)pIVar12;
        if (pIVar12 != (Il2CppObject *)0x0) {
          pUVar2 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)pIVar12[2].monitor;
          local_c = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                    il2cpp_codegen_object_new
                              (
                              Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                              );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_c,
                     (Il2CppObject *)pBVar8,
                     (int)
                     U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFrameStateU7C0_m8C080B31E66BCF84A353F42B5280BD1242CCA55C_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                      (pUVar2,local_c,(MethodInfo *)0x0);
            if ((pBVar8->___screenAspectRatio_1 != 0.0) &&
               (iVar3 = *(int *)((int)pBVar8->___screenAspectRatio_1 + 0x44), iVar3 != 0)) {
              pUVar2 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar3 + 0x18);
              local_c = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                        il2cpp_codegen_object_new
                                  (
                                  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                  );
              OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                        ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_c,
                         (Il2CppObject *)pBVar8,
                         (int)
                         U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFrameStateU7C0_m8C080B31E66BCF84A353F42B5280BD1242CCA55C_RuntimeMethod_var
                         ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                        );
              if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                          (pUVar2,local_c,(MethodInfo *)0x0);
                if ((pBVar8->___screenAspectRatio_1 != 0.0) &&
                   (iVar3 = *(int *)((int)pBVar8->___screenAspectRatio_1 + 0x18), iVar3 != 0)) {
                  pUVar2 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar3 + 0x1c)
                  ;
                  local_c = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                            il2cpp_codegen_object_new
                                      (
                                      Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                      );
                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                            ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_c
                             ,(Il2CppObject *)pBVar8,
                             (int)
                             U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFrameStateU7C0_m8C080B31E66BCF84A353F42B5280BD1242CCA55C_RuntimeMethod_var
                             ,
                             Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                            );
                  if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                    UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                              (pUVar2,local_c,(MethodInfo *)0x0);
                    local_c = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                              pBVar8->___screenAspectRatio_1;
                    if (local_c != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
                      pDVar15 = *(Delegate_t **)(local_c + 3);
                      pOVar13 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                                il2cpp_codegen_object_new
                                          (
                                          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                          );
                      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                (pOVar13,(Il2CppObject *)local_10,
                                 (int)
                                 U3CU3Ec__DisplayClass20_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_mE19E0B157369B9E74BA53FA6D97ADB07CFCE5500_RuntimeMethod_var
                                 ,(MethodInfo *)0x0);
                      pDVar14 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                                          (pDVar15,(Delegate_t *)pOVar13,(MethodInfo *)0x0);
                      pDVar15 = (Delegate_t *)0x0;
                      if (pDVar14 != (Delegate_t *)0x0) {
                        if ((Il2CppClass *)pDVar14->_padding_ ==
                            Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
                          pDVar15 = pDVar14;
                        }
                        if (pDVar15 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                          RaiseInvalidCastException
                                    ((Il2CppObject *)pDVar14,
                                     Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                    );
                        }
                      }
                      *(Delegate_t **)(local_c + 3) = pDVar15;
                      pUVar2 = param_1->___errorHeight_13;
                      if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var
                                  );
                      }
                      UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                                (pUVar2,(MethodInfo *)0x0);
                      UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                                (param_1->___errorWidth_12,(MethodInfo *)0x0);
                      UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                                (param_1->___errorPath_14,(MethodInfo *)0x0);
                      UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                                (param_1->___frameState_10,(MethodInfo *)0x0);
                      UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                                (param_1->___sideDimState_11,(MethodInfo *)0x0);
                      if ((Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var
                           ->has_cctor != '\0') &&
                         (Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var
                          ->cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Singleton_1_t887DC8229FBD4CC71E760D8D1CF1867EDCBA6673_il2cpp_TypeInfo_var
                                  );
                      }
                      pFVar16 = (FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *)
                                Singleton_1_get_Instance_m4E8C37BD2935D7C403E1FC595DD35897728836B4_gshared
                                          (
                                          Singleton_1_get_Instance_mCED330DE853BBDFBF90FDB47109C277CC35E9E3C_RuntimeMethod_var
                                          );
                      pOVar13 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                                il2cpp_codegen_object_new
                                          (
                                          OpenFoldersComplete_t70E5BF5A30918103F1B92C22B4C46C7899485D0F_il2cpp_TypeInfo_var
                                          );
                      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                (pOVar13,(Il2CppObject *)param_1,
                                 (int)
                                 ScreenshotButtons_OnFolderBrowsingComplete_mDB3F455ECEB7A8692369268C3D634F959E628673_RuntimeMethod_var
                                 ,(MethodInfo *)0x0);
                      if (pFVar16 != (FileBrowser_t31868B98C085AF75757CAD6D10A9911254D0028E *)0x0) {
                        FileBrowser_add_OnOpenFoldersComplete_mC11290F59AC1F054BF7F706E20DCD35195E7E6A8
                                  (pFVar16,(OpenFoldersComplete_t70E5BF5A30918103F1B92C22B4C46C7899485D0F
                                            *)pOVar13,(MethodInfo *)0x0);
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
  }
LAB_10a059d5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
