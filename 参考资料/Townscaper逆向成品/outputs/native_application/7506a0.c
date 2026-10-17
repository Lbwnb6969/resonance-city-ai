// RVA 0x7506a0 | Placemaker.Ui.PinUiButton$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: PinUiButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mCA7B67DC8EF290014BB8059C7DBD98F9AF70A1F7
// Body: [[107506a0, 10750876]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8700 UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 10448ac0 GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared
// 107509c0 PinnedUi_Setup_mB7B4D2FB7333B116A1C63C525C540021B686A284
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B

void __cdecl
PinUiButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mCA7B67DC8EF290014BB8059C7DBD98F9AF70A1F7
          (PinUiButton_t2DC79017B20F3160890B4C6B99A638ACBBCA49A0 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *pPVar2;
  float fVar3;
  int iVar4;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar5;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar6;
  String_t *pSVar7;
  Il2CppObject *pIVar8;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar9;

  if (DAT_1151ebfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_GetComponent_TisPinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242_m5424EC26DD8180F6B2AEA7AF0C74D084995626FD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mC534497E698C22B1503194F36F03E878AD692825_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mDCABBD2003F258C400C331A054E5FD692091ED54_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass6_0_tEE0895A37112998F13DA7D38315A008750F6F575_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151ebfe = '\x01';
  }
  pBVar5 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass6_0_tEE0895A37112998F13DA7D38315A008750F6F575_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar5,(MethodInfo *)0x0);
  if (pBVar5 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar5->___screenAspectRatio_1 = (float)param_1;
    (pBVar5->___referenceResolution_2).___y_1 = (float)param_2;
    pUVar1 = param_1->___state_6;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick_5 !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      pGVar6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick_5,
                          (MethodInfo *)0x0);
      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
                  (pUVar1,pGVar6,(MethodInfo *)0x0);
        if (param_1->___palettePinTarget_7 !=
            (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
          pSVar7 = (String_t *)
                   GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared
                             (param_1->___palettePinTarget_7,
                              GameObject_GetComponent_TisPinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242_m5424EC26DD8180F6B2AEA7AF0C74D084995626FD_RuntimeMethod_var
                             );
          pBVar5->___name_0 = pSVar7;
          if (param_1->___sideMenuPinTarget_8 !=
              (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
            pIVar8 = GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared
                               (param_1->___sideMenuPinTarget_8,
                                GameObject_GetComponent_TisPinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242_m5424EC26DD8180F6B2AEA7AF0C74D084995626FD_RuntimeMethod_var
                               );
            (pBVar5->___referenceResolution_2).___x_0 = (float)pIVar8;
            if ((PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *)pBVar5->___name_0 !=
                (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *)0x0) {
              PinnedUi_Setup_mB7B4D2FB7333B116A1C63C525C540021B686A284
                        ((PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *)pBVar5->___name_0,
                         (MethodInfo *)0x0);
              pPVar2 = (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *)
                       (pBVar5->___referenceResolution_2).___x_0;
              if (pPVar2 != (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *)0x0) {
                PinnedUi_Setup_mB7B4D2FB7333B116A1C63C525C540021B686A284(pPVar2,(MethodInfo *)0x0);
                pUVar1 = param_1->___state_6;
                pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar9,(Il2CppObject *)pBVar5,
                           (int)
                           U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mC534497E698C22B1503194F36F03E878AD692825_RuntimeMethod_var
                           ,
                           Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                          );
                if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                            (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar9,
                             (MethodInfo *)0x0);
                  fVar3 = (pBVar5->___referenceResolution_2).___y_1;
                  if ((fVar3 != 0.0) && (iVar4 = *(int *)((int)fVar3 + 0x18), iVar4 != 0)) {
                    pUVar1 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)
                              (iVar4 + 0x1c);
                    pOVar9 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                             il2cpp_codegen_object_new
                                       (
                                       Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                       );
                    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                              (pOVar9,(Il2CppObject *)pBVar5,
                               (int)
                               U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mDCABBD2003F258C400C331A054E5FD692091ED54_RuntimeMethod_var
                               ,
                               Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                              );
                    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                      UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                                (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar9
                                 ,(MethodInfo *)0x0);
                      pUVar1 = param_1->___state_6;
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
