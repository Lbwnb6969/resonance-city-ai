// RVA 0xa07680 | Placemaker.Ui.ScreenshotSwitch$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: ScreenshotSwitch_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mD8539DFD06B283AAA73876146A7F531FDDB09EED
// Body: [[10a07680, 10a078ae]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 108740c0 BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
// 10a07a40 ScreenshotSwitch_SubscribeButton_mDB3A2ACD47A06B95961CDB1924C975F30B913D26

void __cdecl
ScreenshotSwitch_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mD8539DFD06B283AAA73876146A7F531FDDB09EED
          (ScreenshotSwitch_t30DE06810CA11EC175DDE16D672DF0D80E0FD901 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;

  if (DAT_115201ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_0_m5BD515AD43363B819A37E9ADFC6C88E3350878A5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_1_m17C64C5A2C1BCFC34B53327BFFC1240C817E334F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_2_mF4481B37688941E424E3705A5EFB40F278672DB4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_3_m19CD0B5BCF7D430FFCA3A5A39E997961410DFEC9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_115201ce = '\x01';
  }
  if (param_1->___frameState_9 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
              (param_1->___frameState_9,param_1->___frameCanvasGroup_5,(MethodInfo *)0x0);
    if (param_1->___frameState_9 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                (param_1->___frameState_9,param_1->___frameCanvasGroup1_6,(MethodInfo *)0x0);
      if (((param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (param_2->___sideMenu_8 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) &&
         (pUVar1 = param_2->___sideMenu_8->___openState_8,
         pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
        UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                  (pUVar1,param_1->___cornersCanvasGroup_7,(MethodInfo *)0x0);
        ScreenshotSwitch_SubscribeButton_mDB3A2ACD47A06B95961CDB1924C975F30B913D26
                  (param_1,param_1->___frameButtonOne_12,param_1->___frameOneState_15,
                   (MethodInfo *)0x0);
        ScreenshotSwitch_SubscribeButton_mDB3A2ACD47A06B95961CDB1924C975F30B913D26
                  (param_1,param_1->___frameButtonTwo_13,param_1->___frameTwoState_16,
                   (MethodInfo *)0x0);
        ScreenshotSwitch_SubscribeButton_mDB3A2ACD47A06B95961CDB1924C975F30B913D26
                  (param_1,param_1->___frameButtonThree_14,param_1->___frameThreeState_17,
                   (MethodInfo *)0x0);
        pUVar1 = param_1->___frameOneState_15;
        pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar3,(Il2CppObject *)param_1,
                   (int)
                   ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_0_m5BD515AD43363B819A37E9ADFC6C88E3350878A5_RuntimeMethod_var
                   ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
        if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                    (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar3,
                     (MethodInfo *)0x0);
          pUVar1 = param_1->___frameTwoState_16;
          pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar3,(Il2CppObject *)param_1,
                     (int)
                     ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_1_m17C64C5A2C1BCFC34B53327BFFC1240C817E334F_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                      (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar3,
                       (MethodInfo *)0x0);
            pUVar1 = param_1->___frameThreeState_17;
            pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                               );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar3,(Il2CppObject *)param_1,
                       (int)
                       ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_2_mF4481B37688941E424E3705A5EFB40F278672DB4_RuntimeMethod_var
                       ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
            if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
              UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                        (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar3,
                         (MethodInfo *)0x0);
              pBVar2 = param_1->___screenshotButton_10;
              pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                       il2cpp_codegen_object_new
                                 (
                                 Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var
                                 );
              OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                        (pOVar3,(Il2CppObject *)param_1,
                         (int)
                         ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_3_m19CD0B5BCF7D430FFCA3A5A39E997961410DFEC9_RuntimeMethod_var
                         ,Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var
                        );
              if (pBVar2 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
                BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
                          (pBVar2,(Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)pOVar3,
                           (MethodInfo *)0x0);
                pUVar1 = param_1->___frameState_9;
                if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var)
                  ;
                }
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (pUVar1,(MethodInfo *)0x0);
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (param_1->___frameOneState_15,(MethodInfo *)0x0);
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (param_1->___frameTwoState_16,(MethodInfo *)0x0);
                UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                          (param_1->___frameThreeState_17,(MethodInfo *)0x0);
                return;
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
