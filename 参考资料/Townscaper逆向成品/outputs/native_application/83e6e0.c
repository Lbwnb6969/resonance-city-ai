// RVA 0x83e6e0 | Placemaker.Ui.GamepadScreenCursor$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: GamepadScreenCursor_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m9F70AEA80BF1C9037AAAD17289715542951F5218
// Body: [[1083e6e0, 1083e995]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e6950 UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared

void __cdecl
GamepadScreenCursor_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m9F70AEA80BF1C9037AAAD17289715542951F5218
          (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  int iVar3;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar4;
  Il2CppObject *pIVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar7;

  if (DAT_1151f416 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__12_2_m0587BF4153E6DC380329C176015A578A26A1067D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mACC12833CAB2AC31D667EA30C4AA39864693E60D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m15E2DD1ACAB2958AA8020765A4437D305F10D854_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m4E8C5C1C42D136EB1FF96D0BDB863447FA84BD5D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass12_0_tA9DDB437CFE98734E80FEB07874355C2B3DBDE1D_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151f416 = '\x01';
  }
  pBVar4 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass12_0_tA9DDB437CFE98734E80FEB07874355C2B3DBDE1D_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar4,(MethodInfo *)0x0);
  if (pBVar4 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar4->___name_0 = (String_t *)param_1;
    pBVar4->___screenAspectRatio_1 = (float)param_2;
    if ((param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___arrow_7 !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) {
      pIVar5 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___arrow_7
                          ,
                          Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                         );
      (pBVar4->___referenceResolution_2).___y_1 = (float)pIVar5;
      if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cursor_6 !=
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
        pIVar5 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___cursor_6,
                            Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                           );
        pUVar1 = (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)
                 pBVar4->___screenAspectRatio_1;
        (pBVar4->___referenceResolution_2).___x_0 = (float)pIVar5;
        pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar6,(Il2CppObject *)pBVar4,
                   (int)
                   U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mACC12833CAB2AC31D667EA30C4AA39864693E60D_RuntimeMethod_var
                   ,Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
        if (pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
                    (pUVar1,(Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)pOVar6,
                     (MethodInfo *)0x0);
          pUVar2 = param_1->___visibleState_10;
          pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar6,(Il2CppObject *)pBVar4,
                     (int)
                     U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m15E2DD1ACAB2958AA8020765A4437D305F10D854_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                      (pUVar2,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar6,
                       (MethodInfo *)0x0);
            if ((pBVar4->___screenAspectRatio_1 != 0.0) &&
               (iVar3 = *(int *)((int)pBVar4->___screenAspectRatio_1 + 0x44), iVar3 != 0)) {
              pUVar2 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)(iVar3 + 0x14);
              if ((U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var);
              }
              pAVar7 = *(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 **)
                        ((int)U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var
                              ->static_fields + 4);
              if (pAVar7 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
                if ((U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var);
                }
                pIVar5 = *(Il2CppObject **)
                          U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var->
                          static_fields;
                pAVar7 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pAVar7,
                           pIVar5,(int)
                                  U3CU3Ec_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__12_2_m0587BF4153E6DC380329C176015A578A26A1067D_RuntimeMethod_var
                           ,
                           Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                          );
                *(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 **)
                 ((int)U3CU3Ec_t20CB463291F0409477CA5930392D328037399B91_il2cpp_TypeInfo_var->
                       static_fields + 4) = pAVar7;
              }
              if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                          (pUVar2,pAVar7,(MethodInfo *)0x0);
                pUVar2 = param_1->___arrowState_11;
                pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar6,(Il2CppObject *)pBVar4,
                           (int)
                           U3CU3Ec__DisplayClass12_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m4E8C5C1C42D136EB1FF96D0BDB863447FA84BD5D_RuntimeMethod_var
                           ,
                           Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                          );
                if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                            (pUVar2,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar6,
                             (MethodInfo *)0x0);
                  pUVar2 = param_1->___visibleState_10;
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
                            (param_1->___openState_9,(MethodInfo *)0x0);
                  UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                            (param_1->___arrowState_11,(MethodInfo *)0x0);
                  param_1->___master_4 =
                       (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)
                       pBVar4->___screenAspectRatio_1;
                  return;
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
