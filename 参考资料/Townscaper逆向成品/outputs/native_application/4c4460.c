// RVA 0x4c4460 | Placemaker.Ui.Dim$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: Dim_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m465317E127892D17BF0D1EE138F957DDE5AF35D7
// Body: [[104c4460, 104c46d6]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared

void __cdecl
Dim_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m465317E127892D17BF0D1EE138F957DDE5AF35D7
          (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  Il2CppObject *pIVar2;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar3;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar4;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar5;
  String_t *pSVar6;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar7;

  if (DAT_1151d130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_mB723273129EBD713A059D4D3CDE7FEE7E40CB136_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m55B42FE609CA73266AF551D1AD0033DFFCE6F9AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CamSettingsU7C2_m27F540794FB110E0B65FEED6BF5FB469579C80F1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_t9081E9D92E6D5B7EA3A447DD584F333F49712933_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151d130 = '\x01';
  }
  pBVar3 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass11_0_t9081E9D92E6D5B7EA3A447DD584F333F49712933_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar3,(MethodInfo *)0x0);
  if (pBVar3 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar3->___screenAspectRatio_1 = (float)param_1;
    (pBVar3->___referenceResolution_2).___x_0 = (float)param_2;
    pUVar1 = param_1->___alphaState_5;
    pCVar4 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                       );
    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                (pUVar1,pCVar4,(MethodInfo *)0x0);
      pUVar1 = param_1->___blurState_7;
      if ((U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var);
      }
      pAVar5 = *(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 **)
                ((int)U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var->
                      static_fields + 4);
      if (pAVar5 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
        if ((U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var);
        }
        pIVar2 = *(Il2CppObject **)
                  U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var->
                  static_fields;
        pAVar5 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                 il2cpp_codegen_object_new
                           (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pAVar5,pIVar2,
                   (int)
                   U3CU3Ec_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_mB723273129EBD713A059D4D3CDE7FEE7E40CB136_RuntimeMethod_var
                   ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
        *(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 **)
         ((int)U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43_il2cpp_TypeInfo_var->static_fields
         + 4) = pAVar5;
      }
      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                  (pUVar1,pAVar5,(MethodInfo *)0x0);
        pSVar6 = (String_t *)
                 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                            Component_GetComponentInChildren_TisGraphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_m4097B20F8597826885B7A134E4FFB52E84A9EC8F_RuntimeMethod_var
                           );
        pBVar3->___name_0 = pSVar6;
        pUVar1 = param_1->___dimOrDark_6;
        pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar7,(Il2CppObject *)pBVar3,
                   (int)
                   U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m55B42FE609CA73266AF551D1AD0033DFFCE6F9AE_RuntimeMethod_var
                   ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
        if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                    (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                     (MethodInfo *)0x0);
          pUVar1 = param_1->___dimOrDark_6;
          pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar7,(Il2CppObject *)pBVar3,
                     (int)
                     U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CamSettingsU7C2_m27F540794FB110E0B65FEED6BF5FB469579C80F1_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                      (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                       (MethodInfo *)0x0);
            pUVar1 = param_1->___alphaState_5;
            pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                               );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar7,(Il2CppObject *)pBVar3,
                       (int)
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CamSettingsU7C2_m27F540794FB110E0B65FEED6BF5FB469579C80F1_RuntimeMethod_var
                       ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
            if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
              UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                        (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar7,
                         (MethodInfo *)0x0);
              pUVar1 = param_1->___dimOrDark_6;
              if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
              }
              UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
              UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                        (param_1->___alphaState_5,(MethodInfo *)0x0);
              UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                        (param_1->___blurState_7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
