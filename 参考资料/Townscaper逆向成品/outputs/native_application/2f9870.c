// RVA 0x2f9870 | Placemaker.Ui.Slider$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: Slider_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m80CE0A80C17D7F01C8B96C8DEE3E2932CD47838A
// Body: [[102f9870, 102f9979]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046

void __cdecl
Slider_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m80CE0A80C17D7F01C8B96C8DEE3E2932CD47838A
          (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  float fVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  float fVar3;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_14;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *local_8;

  if (DAT_1151c1bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m3F4B0A14E3AC1FC4E228EB3F8F3861757FA9BF85_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass23_0_t1D664A30B2BD8F6F9F556E73E7837D1C62034EAA_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c1bf = '\x01';
  }
  pBVar4 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass23_0_t1D664A30B2BD8F6F9F556E73E7837D1C62034EAA_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar4,(MethodInfo *)0x0);
  if (pBVar4 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar4->___name_0 = (String_t *)param_1;
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___sliderHandle_9 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_14,
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___sliderHandle_9,(MethodInfo *)0x0);
      fVar3 = pVVar5->___y_3;
      fVar1 = pVVar5->___z_4;
      pBVar4->___screenAspectRatio_1 = pVVar5->___x_2;
      (pBVar4->___referenceResolution_2).___x_0 = fVar3;
      (pBVar4->___referenceResolution_2).___y_1 = fVar1;
      pUVar2 = param_1->___pressedState_14;
      local_8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                il2cpp_codegen_object_new
                          (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)local_8,
                 (Il2CppObject *)pBVar4,
                 (int)
                 U3CU3Ec__DisplayClass23_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m3F4B0A14E3AC1FC4E228EB3F8F3861757FA9BF85_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                  (pUVar2,local_8,(MethodInfo *)0x0);
        pUVar2 = param_1->___pressedState_14;
        if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
        }
        UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
