// RVA 0x4bf7b0 | Placemaker.Ui.CreditsMenu$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: CreditsMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m26910F1D8807E108DD916D779CCC3C55AC2B53BC
// Body: [[104bf7b0, 104bf9c7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e50e0 UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e85c0 UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 104bf180 CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
CreditsMenu_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m26910F1D8807E108DD916D779CCC3C55AC2B53BC
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *pBVar2;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar6;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar7;

  if (DAT_1151d0fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_m68F80AE43886AEE497916E95C42DBC6F9042BDAB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_1_m2458862F182FC2B5C2847DD2F8D7DCD654D52F29_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_2_mCAB12CB51D2A1E31EB02EE0DF676058DD6560A78_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151d0fe = '\x01';
  }
  param_1->___master_4 = param_2;
  if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
              (param_2,param_1->___openState_5,0x80,(MethodInfo *)0x0);
    pCVar3 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                       );
    if (param_1->___openState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_104bf9bc;
    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
              (param_1->___openState_5,pCVar3,(MethodInfo *)0x0);
    pUVar1 = param_1->___openState_5;
    pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_104bf9bc;
    UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
              (pUVar1,pTVar4,'\x03',1.05,1.0,(MethodInfo *)0x0);
    pUVar1 = param_1->___openState_5;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
    pBVar2 = param_1->___scrollRect_6;
    if (pBVar2 == (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0)
    goto LAB_104bf9bc;
    pAVar7 = pBVar2->___onBeginDrag_14;
    pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar5,(Il2CppObject *)param_1,
               (int)
               CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_m68F80AE43886AEE497916E95C42DBC6F9042BDAB_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar7,(Delegate_t *)pOVar5,(MethodInfo *)0x0);
    pAVar7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
    if (pAVar6 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
      if (*(Il2CppClass **)pAVar6 ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) goto LAB_104bf9c1;
    }
    pBVar2->___onBeginDrag_14 = pAVar7;
    pBVar2 = param_1->___scrollRect_6;
    if (pBVar2 == (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0)
    goto LAB_104bf9bc;
    pAVar7 = pBVar2->___onEndDrag_15;
    pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar5,(Il2CppObject *)param_1,
               (int)
               CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_1_m2458862F182FC2B5C2847DD2F8D7DCD654D52F29_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar7,(Delegate_t *)pOVar5,(MethodInfo *)0x0);
    pAVar7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
    if (pAVar6 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
      if (*(Il2CppClass **)pAVar6 ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) goto LAB_104bf9c1;
    }
    pBVar2->___onEndDrag_15 = pAVar7;
    pBVar2 = param_1->___scrollRect_6;
    if (pBVar2 != (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
      pAVar7 = pBVar2->___onScroll_16;
      pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar5,(Il2CppObject *)param_1,
                 (int)
                 CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_2_mCAB12CB51D2A1E31EB02EE0DF676058DD6560A78_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         ((Delegate_t *)pAVar7,(Delegate_t *)pOVar5,(MethodInfo *)0x0);
      pAVar7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
      if (pAVar6 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
        if (*(Il2CppClass **)pAVar6 ==
            Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
LAB_104bf9c1:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pAVar6,
                     Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        }
      }
      pBVar2->___onScroll_16 = pAVar7;
      CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
                (param_1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_104bf9bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
