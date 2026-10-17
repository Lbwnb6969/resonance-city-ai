// RVA 0x9c9200 | Placemaker.Ui.SideMenu.<>c__DisplayClass22_0$$<Button_Quit_Full>b__0
// PDB: U3CU3Ec__DisplayClass22_0_U3CButton_Quit_FullU3Eb__0_m1663A156605F973F886F7E9732B9540E692C80C9
// Body: [[109c9200, 109c925a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a35be0 Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

void __cdecl
U3CU3Ec__DisplayClass22_0_U3CButton_Quit_FullU3Eb__0_m1663A156605F973F886F7E9732B9540E692C80C9
          (U3CU3Ec__DisplayClass22_0_tA90E226C2F1FBF083335F3D4398CBE67B816294A *param_1,
          MethodInfo *param_2)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar2;

  if (DAT_1151ff30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_mE8540CF3DEBEB6A3C91EE43915880731CA0E76EA_RuntimeMethod_var);
    DAT_1151ff30 = '\x01';
  }
  if (((param_1->___U3CU3E4__this_0 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) &&
      (pUVar1 = param_1->___U3CU3E4__this_0->___master_4,
      pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) &&
     (pLVar2 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pUVar1->___lockedButtons_42,
     pLVar2 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)) {
    List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
              (pLVar2,(Il2CppObject *)param_1->___button_1,
               List_1_Remove_mE8540CF3DEBEB6A3C91EE43915880731CA0E76EA_RuntimeMethod_var);
    Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
