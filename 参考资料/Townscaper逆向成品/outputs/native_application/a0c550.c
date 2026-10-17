// RVA 0xa0c550 | Placemaker.Ui.SideMenu$$Button_New
// PDB: SideMenu_Button_New_mFA64795EFD1F98EFFF46D70EE8735347EDBC0431
// Body: [[10a0c550, 10a0c5d6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 109fe3d0 SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290

void __cdecl
SideMenu_Button_New_mFA64795EFD1F98EFFF46D70EE8735347EDBC0431
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,MethodInfo *param_3)

{
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;

  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pSVar1 = param_1->___master_4->___saveMenu_6,
     pSVar1 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)) {
    if (DAT_1152019f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         UiMaster_StartNew_mFD3E10F73443B8ADF3A39463CEECFED7ABB7B556_RuntimeMethod_var
                );
      DAT_1152019f = '\x01';
    }
    pUVar2 = pSVar1->___master_4;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)pUVar2,
               (int)UiMaster_StartNew_mFD3E10F73443B8ADF3A39463CEECFED7ABB7B556_RuntimeMethod_var,
               (MethodInfo *)0x0);
    if ((pSVar1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pSVar3 = pSVar1->___master_4->___sideMenu_8,
       pSVar3 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
      SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290
                (pSVar1,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar4,
                 pSVar3->___newSaveGameMessage_18,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
