// RVA 0xa0c260 | Placemaker.Ui.SideMenuNavigator$$UpdateScroll
// PDB: SideMenuNavigator_UpdateScroll_mCD6FC076558EE219A9E206B62518BEB8789A083E
// Body: [[10a0c260, 10a0c2e4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
SideMenuNavigator_UpdateScroll_mCD6FC076558EE219A9E206B62518BEB8789A083E
          (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *param_1,MethodInfo *param_2)

{
  int iVar1;

  if (DAT_115201ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65B6D484849CB5EE299A6401D50198A6209E1825_RuntimeMethod_var
              );
    DAT_115201ef = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___navigableButtons_7 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    iVar1 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                       param_1->___navigableButtons_7,(Il2CppObject *)param_1->___selectedButton_5,
                       List_1_IndexOf_m303B0EBC115DC00DCC20B97C7A34B93A38C6E369_RuntimeMethod_var);
    if ((param_1->___navigableButtons_7 != (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0)
       && (param_1->___scrollRect_11 !=
           (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0)) {
      (param_1->___scrollRect_11->___normPosTarget_8).___y_1 =
           __real_3f800000 -
           (float)iVar1 / ((float)param_1->___navigableButtons_7->____size_2 - __real_3f800000);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
