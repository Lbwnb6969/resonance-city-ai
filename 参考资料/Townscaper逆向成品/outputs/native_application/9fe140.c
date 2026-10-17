// RVA 0x9fe140 | Placemaker.Ui.SaveMenu$$Button_Focus_Duplicate
// PDB: SaveMenu_Button_Focus_Duplicate_m625728F4D11535820742751B0A4A9FBBAC4E6190
// Body: [[109fe140, 109fe1a0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 109fe3d0 SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290

void __cdecl
SaveMenu_Button_Focus_Duplicate_m625728F4D11535820742751B0A4A9FBBAC4E6190
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar1;

  if (DAT_115201a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SaveMenu_U3CButton_Focus_DuplicateU3Eg__DuplicateU7C66_0_m0DECAAFFB416E4FC8B679C4631E45A9B4BB9EE45_RuntimeMethod_var
              );
    DAT_115201a0 = '\x01';
  }
  pOVar1 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar1,(Il2CppObject *)param_1,
             (int)
             SaveMenu_U3CButton_Focus_DuplicateU3Eg__DuplicateU7C66_0_m0DECAAFFB416E4FC8B679C4631E45A9B4BB9EE45_RuntimeMethod_var
             ,(MethodInfo *)0x0);
  SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290
            (param_1,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar1,
             param_1->___focusedCardDuplicateMessage_36,(MethodInfo *)0x0);
  return;
}
