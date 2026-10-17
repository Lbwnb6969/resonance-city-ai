// RVA 0x83de20 | Placemaker.Ui.FullscreenButton$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: FullscreenButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m22F1322FF09D333F2D19919E1B5D442EF0FA832E
// Body: [[1083de20, 1083df33]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 106677c0 Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A

void __cdecl
FullscreenButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m22F1322FF09D333F2D19919E1B5D442EF0FA832E
          (FullscreenButton_t0AAFDBD51779A2F9B36D0D6C8E87A9D26DEBB018 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;

  if (DAT_1151f410 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       FullscreenButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m4CA8882545B07D5CB1E674323FFFF6969F7C7E4A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151f410 = '\x01';
  }
  if ((param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (param_2->___orbitalCamera_15 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0
     )) {
    if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    }
    pUVar1 = param_1->___state_6;
    bVar2 = Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A((MethodInfo *)0x0);
    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (pUVar1,bVar2,(MethodInfo *)0x0);
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (pUVar1,bVar2,(MethodInfo *)0x0);
      pUVar1 = param_1->___state_6;
      pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar3,(Il2CppObject *)param_1,
                 (int)
                 FullscreenButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m4CA8882545B07D5CB1E674323FFFF6969F7C7E4A_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                  (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar3,
                   (MethodInfo *)0x0);
        pUVar1 = param_1->___state_6;
        if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
        }
        UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
