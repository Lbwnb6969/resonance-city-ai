// RVA 0x870cd0 | Placemaker.Ui.ActionInputManager$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: ActionInputManager_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mDED13B99061D6F80CB73C3BFCF6CEAE2FBF1466F
// Body: [[10870cd0, 10870d44]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e6950 UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272

void __cdecl
ActionInputManager_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mDED13B99061D6F80CB73C3BFCF6CEAE2FBF1466F
          (ActionInputManager_t5A1DB58B471D890F8E6A3314C6F6B597E49AD32F *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar1;

  if (DAT_1151f58c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ActionInputManager_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_0_m78A1CCBCCEFC272FD067FBFEDD3A8F08D45C8DE9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    DAT_1151f58c = '\x01';
  }
  pOVar1 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar1,(Il2CppObject *)param_1,
             (int)
             ActionInputManager_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_0_m78A1CCBCCEFC272FD067FBFEDD3A8F08D45C8DE9_RuntimeMethod_var
             ,Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
  if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
              (param_2,(Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)pOVar1,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
