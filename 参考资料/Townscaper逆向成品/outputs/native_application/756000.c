// RVA 0x756000 | Placemaker.Ui.ProgressBarButton$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: ProgressBarButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m14E6C3683DF13359820C9321B8D8188BC3B4BB50
// Body: [[10756000, 107560d5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8e00 UpdateState_Subscribe_m8DA7370BC5920177A54215E5F37188F24196E91D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 108740c0 BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A

void __cdecl
ProgressBarButton_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m14E6C3683DF13359820C9321B8D8188BC3B4BB50
          (ProgressBarButton_t53730DC96EE47269D9729BEC4405F4126B379F4A *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;

  if (DAT_1151ec29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ProgressBarButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_m9D011F4CFA260FE5060AEB1A5219EE8E9E243AF8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151ec29 = '\x01';
  }
  if (param_1->___pressed_7 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_Subscribe_m8DA7370BC5920177A54215E5F37188F24196E91D
              (param_1->___pressed_7,
               (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)param_1->___bar_6,
               (MethodInfo *)0x0);
    pBVar2 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
             Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                       );
    pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar3,(Il2CppObject *)param_1,
               (int)
               ProgressBarButton_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_m9D011F4CFA260FE5060AEB1A5219EE8E9E243AF8_RuntimeMethod_var
               ,Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    if (pBVar2 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
      BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
                (pBVar2,(Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)pOVar3,
                 (MethodInfo *)0x0);
      pUVar1 = param_1->___pressed_7;
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
