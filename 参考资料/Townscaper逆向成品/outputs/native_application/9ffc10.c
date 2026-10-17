// RVA 0x9ffc10 | Placemaker.Ui.SaveMenu$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SaveMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m30C5215721D4BC57380E9BBBD386997BA0C3CAF3
// Body: [[109ffc10, 10a000a6] [10a000aa, 10a003b8]]
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
// 103e8480 UpdateState_PushValue_mF22A514A505A6B44489464571B337E6907709EF9
// 103e85c0 UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 103e8e00 UpdateState_Subscribe_m8DA7370BC5920177A54215E5F37188F24196E91D
// 109fbd80 SaveCard_Setup_mD9851B4197E1CF1CFC09A8912125F8136601C822
// 10a004e0 SaveMenu_SetGridRect_m782135A6A01925CDF23EB6F7DC5B96C5634E6D50
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
SaveMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m30C5215721D4BC57380E9BBBD386997BA0C3CAF3
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  int iVar2;
  Delegate_t *pDVar3;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar4;
  Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *pAVar5;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar6;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar7;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar8;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar11;
  Il2CppClass *pIVar12;
  uint uVar13;
  int local_c;

  if (DAT_11520197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m080D0415389DA6DB377B4C27782221C9EF64BADD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t5F0B4430F35A43366FF29BFF9B2EB45E08CC8516_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m1572FB16D9EC631EC27C27524F24E205E3D8FB1A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mF0B68220D8975D066E4E8B7602C94EFC212EE034_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_m5A560FCD611E73817C20C7D9B87B4EBA8C8B6579_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m6915F75350B6DB3139E1B291F8F1254906FB9F2D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mD0FAE07BEB4E71FD3C0FB7AB568CA3A27751B027_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m9FFB54C0AE57355F0E5E30276F0E2A8EC9030149_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__8_m6E0CF71DA11749C1D27FFF4CC785A1FCD0FC0139_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFocusGamepadU7C3_m3C2756B8FD778C7E074A7EAC30A90F1B2AAA48EA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckGamepadU7C2_m8D7D9430A3199473773329B111C5ED38B118F0B3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_11520197 = '\x01';
  }
  pBVar6 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar6,(MethodInfo *)0x0);
  if (pBVar6 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar6->___name_0 = (String_t *)param_1;
    pBVar6->___screenAspectRatio_1 = (float)param_2;
    pUVar1 = param_1->___menuScaleState_31;
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    pAVar9 = pUVar1->___onValueChanged_3;
    pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar7,(Il2CppObject *)pBVar6,
               (int)
               U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m6915F75350B6DB3139E1B291F8F1254906FB9F2D_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    pAVar8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar9,(Delegate_t *)pOVar7,(MethodInfo *)0x0);
    pAVar9 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar8 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar8 ==
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
        pAVar9 = pAVar8;
      }
      pIVar12 = Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var;
      if (pAVar9 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10a003b2;
    }
    pUVar1->___onValueChanged_3 = pAVar9;
    if (param_1->___menuScaleState_31 ==
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
              (param_1->___menuScaleState_31,param_1->___scaleAnim_6,'\x03',0.0,1.0,
               (MethodInfo *)0x0);
    if (param_1->___menuScaleState_31 ==
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    UpdateState_PushValue_mF22A514A505A6B44489464571B337E6907709EF9
              (param_1->___menuScaleState_31,(MethodInfo *)0x0);
    pUVar1 = param_1->___menuScaleState_31;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
    pUVar1 = param_1->___openState_29;
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    pAVar9 = pUVar1->___onTargetChange_4;
    pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar7,(Il2CppObject *)pBVar6,
               (int)
               U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mD0FAE07BEB4E71FD3C0FB7AB568CA3A27751B027_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    pAVar8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar9,(Delegate_t *)pOVar7,(MethodInfo *)0x0);
    pAVar9 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar8 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar8 ==
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
        pAVar9 = pAVar8;
      }
      pIVar12 = Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var;
      if (pAVar9 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10a003b2;
    }
    pUVar1->___onTargetChange_4 = pAVar9;
    if (param_1->___openState_29 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_10a003ad;
    UpdateState_PushValue_mF22A514A505A6B44489464571B337E6907709EF9
              (param_1->___openState_29,(MethodInfo *)0x0);
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
              (param_1->___openState_29,(MethodInfo *)0x0);
    pUVar1 = param_1->___visibleState_28;
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    pAVar9 = pUVar1->___onTargetChange_4;
    pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar7,(Il2CppObject *)pBVar6,
               (int)
               U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_m9FFB54C0AE57355F0E5E30276F0E2A8EC9030149_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    pAVar8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar9,(Delegate_t *)pOVar7,(MethodInfo *)0x0);
    pAVar9 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar8 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar8 ==
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
        pAVar9 = pAVar8;
      }
      pIVar12 = Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var;
      if (pAVar9 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10a003b2;
    }
    pUVar1->___onTargetChange_4 = pAVar9;
    if (param_1->___visibleState_28 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_10a003ad;
    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
              (param_1->___visibleState_28,param_1->___canvasGroup_7,(MethodInfo *)0x0);
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
              (param_1->___visibleState_28,(MethodInfo *)0x0);
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)pBVar6->___screenAspectRatio_1 ==
        (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) goto LAB_10a003ad;
    UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
              ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)pBVar6->___screenAspectRatio_1,
               param_1->___openState_29,4,(MethodInfo *)0x0);
    if (param_1->___focusCardState_30 ==
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
              (param_1->___focusCardState_30,param_1->___focusCanvasGroup_9,(MethodInfo *)0x0);
    if (param_1->___focusCardState_30 ==
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
              (param_1->___focusCardState_30,param_1->___scaleAnim_6,'\x04',1.0,0.6,
               (MethodInfo *)0x0);
    pUVar1 = param_1->___focusCardState_30;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___focusScaleAnim_11 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10a003ad;
    pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         param_1->___focusScaleAnim_11,(MethodInfo *)0x0);
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
              (pUVar1,pTVar10,'\x03',1.2,1.0,(MethodInfo *)0x0);
    if (param_1->___focusCardState_30 ==
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10a003ad;
    UpdateState_PushValue_mF22A514A505A6B44489464571B337E6907709EF9
              (param_1->___focusCardState_30,(MethodInfo *)0x0);
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
              (param_1->___focusCardState_30,(MethodInfo *)0x0);
    if ((pBVar6->___screenAspectRatio_1 == 0.0) ||
       (iVar2 = *(int *)((int)pBVar6->___screenAspectRatio_1 + 0xc), iVar2 == 0)) goto LAB_10a003ad;
    iVar2 = *(int *)(iVar2 + 0x88);
    if (iVar2 == 0) goto LAB_10a003ad;
    pDVar3 = *(Delegate_t **)(iVar2 + 0x3c);
    pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t5F0B4430F35A43366FF29BFF9B2EB45E08CC8516_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar7,(Il2CppObject *)pBVar6,
               (int)
               U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__8_m6E0CF71DA11749C1D27FFF4CC785A1FCD0FC0139_RuntimeMethod_var
               ,Action_1__ctor_m080D0415389DA6DB377B4C27782221C9EF64BADD_RuntimeMethod_var);
    pAVar8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       (pDVar3,(Delegate_t *)pOVar7,(MethodInfo *)0x0);
    pAVar9 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar8 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar8 ==
          Action_1_t5F0B4430F35A43366FF29BFF9B2EB45E08CC8516_il2cpp_TypeInfo_var) {
        pAVar9 = pAVar8;
      }
      pIVar12 = Action_1_t5F0B4430F35A43366FF29BFF9B2EB45E08CC8516_il2cpp_TypeInfo_var;
      if (pAVar9 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10a003b2;
    }
    *(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 **)(iVar2 + 0x3c) = pAVar9;
    if (param_1->___saveCards_27 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
      uVar13 = param_1->___saveCards_27->____size_2 - 1;
      if (-1 < (int)uVar13) {
        local_c = uVar13 * 4 + 0x10;
        do {
          pLVar4 = param_1->___saveCards_27;
          if (pLVar4 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) goto LAB_10a003ad;
          if ((uint)pLVar4->____size_2 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          if (*(SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 **)
               (pLVar4->____items_1 + local_c) ==
              (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) goto LAB_10a003ad;
          SaveCard_Setup_mD9851B4197E1CF1CFC09A8912125F8136601C822
                    (*(SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 **)
                      (pLVar4->____items_1 + local_c),
                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)
                     pBVar6->___screenAspectRatio_1,(MethodInfo *)0x0);
          local_c = local_c + -4;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
      pUVar1 = param_1->___gamepadState_32;
      pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar7,(Il2CppObject *)pBVar6,
                 (int)
                 U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m1572FB16D9EC631EC27C27524F24E205E3D8FB1A_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                  (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                   (MethodInfo *)0x0);
        pUVar1 = param_1->___gamepadState_32;
        pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar7,(Il2CppObject *)pBVar6,
                   (int)
                   U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mF0B68220D8975D066E4E8B7602C94EFC212EE034_RuntimeMethod_var
                   ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
        if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                    (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                     (MethodInfo *)0x0);
          pUVar1 = param_1->___visibleState_28;
          pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar7,(Il2CppObject *)pBVar6,
                     (int)
                     U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckGamepadU7C2_m8D7D9430A3199473773329B111C5ED38B118F0B3_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                      (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                       (MethodInfo *)0x0);
            if ((pBVar6->___screenAspectRatio_1 != 0.0) &&
               (iVar2 = *(int *)((int)pBVar6->___screenAspectRatio_1 + 0x44), iVar2 != 0)) {
              pUVar1 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar2 + 0x14);
              pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                       il2cpp_codegen_object_new
                                 (
                                 Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                 );
              OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                        (pOVar7,(Il2CppObject *)pBVar6,
                         (int)
                         U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckGamepadU7C2_m8D7D9430A3199473773329B111C5ED38B118F0B3_RuntimeMethod_var
                         ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                        );
              if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                          (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                           (MethodInfo *)0x0);
                pUVar1 = param_1->___focusGamepadState_33;
                pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar7,(Il2CppObject *)pBVar6,
                           (int)
                           U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckGamepadU7C2_m8D7D9430A3199473773329B111C5ED38B118F0B3_RuntimeMethod_var
                           ,
                           Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                          );
                if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                            (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                             (MethodInfo *)0x0);
                  pUVar1 = param_1->___gamepadState_32;
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
                            (pUVar1,(MethodInfo *)0x0);
                  if (param_1->___focusGamepadState_33 !=
                      (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                    UpdateState_Subscribe_m8DA7370BC5920177A54215E5F37188F24196E91D
                              (param_1->___focusGamepadState_33,param_1->___focusGamepadCursor0_17,
                               (MethodInfo *)0x0);
                    if (param_1->___focusGamepadState_33 !=
                        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                      UpdateState_Subscribe_m8DA7370BC5920177A54215E5F37188F24196E91D
                                (param_1->___focusGamepadState_33,param_1->___focusGamepadCursor1_18
                                 ,(MethodInfo *)0x0);
                      pUVar1 = param_1->___focusCardState_30;
                      pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                               il2cpp_codegen_object_new
                                         (
                                         Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                         );
                      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                (pOVar7,(Il2CppObject *)pBVar6,
                                 (int)
                                 U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFocusGamepadU7C3_m3C2756B8FD778C7E074A7EAC30A90F1B2AAA48EA_RuntimeMethod_var
                                 ,
                                 Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                                );
                      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                        UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                                  (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                                          pOVar7,(MethodInfo *)0x0);
                        if ((pBVar6->___screenAspectRatio_1 != 0.0) &&
                           (iVar2 = *(int *)((int)pBVar6->___screenAspectRatio_1 + 0x44), iVar2 != 0
                           )) {
                          pUVar1 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)
                                    (iVar2 + 0x14);
                          pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                                   il2cpp_codegen_object_new
                                             (
                                             Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                             );
                          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                    (pOVar7,(Il2CppObject *)pBVar6,
                                     (int)
                                     U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFocusGamepadU7C3_m3C2756B8FD778C7E074A7EAC30A90F1B2AAA48EA_RuntimeMethod_var
                                     ,
                                     Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                                    );
                          if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
                             ) {
                            UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                                      (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                                              pOVar7,(MethodInfo *)0x0);
                            UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                                      (param_1->___focusGamepadState_33,(MethodInfo *)0x0);
                            pAVar5 = param_1->___onTotalSaveGameCountUpdate_40;
                            pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *
                                     )il2cpp_codegen_object_new
                                                (
                                                Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var
                                                );
                            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                                      (pOVar7,(Il2CppObject *)pBVar6,
                                       (int)
                                       U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_m5A560FCD611E73817C20C7D9B87B4EBA8C8B6579_RuntimeMethod_var
                                       ,
                                       Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var
                                      );
                            pAVar8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                                     Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                                               ((Delegate_t *)pAVar5,(Delegate_t *)pOVar7,
                                                (MethodInfo *)0x0);
                            pAVar9 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
                            if (pAVar8 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0)
                            {
                              if (*(Il2CppClass **)pAVar8 ==
                                  Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var
                                 ) {
                                pAVar9 = pAVar8;
                              }
                              pIVar12 =
                              Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var
                              ;
                              if (pAVar9 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                                            0x0) {
LAB_10a003b2:
                    /* WARNING: Subroutine does not return */
                                RaiseInvalidCastException((Il2CppObject *)pAVar8,pIVar12);
                              }
                            }
                            param_1->___onTotalSaveGameCountUpdate_40 =
                                 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)pAVar9;
                            pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1,(MethodInfo *)0x0);
                            pRVar11 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0
                            ;
                            if ((pTVar10 !=
                                 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
                               (*(Il2CppClass **)pTVar10 ==
                                RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                               )) {
                              pRVar11 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                                        pTVar10;
                            }
                            UiMaster_SubscribeToSafeArea_m5FC0F32B402B4921AAF28AA0A800584733F167C7
                                      (pRVar11,(MethodInfo *)0x0);
                            SaveMenu_SetGridRect_m782135A6A01925CDF23EB6F7DC5B96C5634E6D50
                                      (param_1,(MethodInfo *)0x0);
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
    }
  }
LAB_10a003ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
