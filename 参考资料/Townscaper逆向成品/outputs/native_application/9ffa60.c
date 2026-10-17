// RVA 0x9ffa60 | Placemaker.Ui.SaveMenu$$NewButton
// PDB: SaveMenu_NewButton_m5544C2C68C023A5C9E4E45387BEC4AB8F23D553A
// Body: [[109ffa60, 109ffad8]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 109fe3d0 SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290

void __cdecl
SaveMenu_NewButton_m5544C2C68C023A5C9E4E45387BEC4AB8F23D553A
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;

  if (DAT_1152019f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UiMaster_StartNew_mFD3E10F73443B8ADF3A39463CEECFED7ABB7B556_RuntimeMethod_var
              );
    DAT_1152019f = '\x01';
  }
  pUVar1 = param_1->___master_4;
  pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar3,(Il2CppObject *)pUVar1,
             (int)UiMaster_StartNew_mFD3E10F73443B8ADF3A39463CEECFED7ABB7B556_RuntimeMethod_var,
             (MethodInfo *)0x0);
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pSVar2 = param_1->___master_4->___sideMenu_8,
     pSVar2 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
    SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290
              (param_1,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar3,
               pSVar2->___newSaveGameMessage_18,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
