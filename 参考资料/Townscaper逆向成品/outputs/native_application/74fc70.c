// RVA 0x74fc70 | Placemaker.Ui.PalettePicker$$Placemaker.Ui.PaletteMenu.IPaletteSetup.OnSetup
// PDB: PalettePicker_Placemaker_Ui_PaletteMenu_IPaletteSetup_OnSetup_m2F5E820FB7383D28AC42708872FAD162BE3BDEAE
// Body: [[1074fc70, 1074fda2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
PalettePicker_Placemaker_Ui_PaletteMenu_IPaletteSetup_OnSetup_m2F5E820FB7383D28AC42708872FAD162BE3BDEAE
          (PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  Il2CppObject *pIVar3;
  Delegate_t *pDVar4;
  Delegate_t *pDVar5;

  if (DAT_1151ebf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_0_m28B1D5A26EB6A3E3C6D2F4B50174E6E81AFBEB5A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_1_mFFD5329EC702080758935812E1AAFA6FCC37460B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151ebf0 = '\x01';
  }
  pUVar1 = param_1->___selectedState_6;
  pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar2,(Il2CppObject *)param_1,
             (int)
             PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_0_m28B1D5A26EB6A3E3C6D2F4B50174E6E81AFBEB5A_RuntimeMethod_var
             ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar2,(MethodInfo *)0x0
              );
    pIVar3 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                       );
    if (pIVar3 != (Il2CppObject *)0x0) {
      pDVar5 = (Delegate_t *)pIVar3[4].monitor;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,(Il2CppObject *)param_1,
                 (int)
                 PalettePicker_U3CPlacemaker_Ui_PaletteMenu_IPaletteSetup_OnSetupU3Eb__4_1_mFFD5329EC702080758935812E1AAFA6FCC37460B_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pDVar4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         (pDVar5,(Delegate_t *)pOVar2,(MethodInfo *)0x0);
      pDVar5 = (Delegate_t *)0x0;
      if (pDVar4 != (Delegate_t *)0x0) {
        if ((Il2CppClass *)pDVar4->_padding_ ==
            Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
          pDVar5 = pDVar4;
        }
        if (pDVar5 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pDVar4,
                     Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        }
      }
      pIVar3[4].monitor = (MonitorData *)pDVar5;
      pUVar1 = param_1->___selectedState_6;
      if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
      }
      UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
