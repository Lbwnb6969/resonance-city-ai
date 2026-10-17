// RVA 0x10cfd70 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$Add
// PDB: MenuNavigationEntry_Add_m28EA10D9D46A52934FE081440AE73A2D5DBE35CF
// Body: [[110cfd70, 110cfdb2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
MenuNavigationEntry_Add_m28EA10D9D46A52934FE081440AE73A2D5DBE35CF
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,
          MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_2,MethodInfo *param_3)

{
  if (DAT_11523abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m1C5DEF20131414F0F8B6DD8BDC12DFC23A2E50A8_RuntimeMethod_var);
    DAT_11523abc = '\x01';
  }
  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
      param_1->___U3CChildEntriesU3Ek__BackingField_3 !=
      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
               param_1->___U3CChildEntriesU3Ek__BackingField_3,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Add_m1C5DEF20131414F0F8B6DD8BDC12DFC23A2E50A8_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
