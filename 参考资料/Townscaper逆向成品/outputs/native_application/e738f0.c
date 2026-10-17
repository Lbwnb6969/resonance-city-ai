// RVA 0xe738f0 | Placemaker.Graphs.Graph$$QubeUpdated
// PDB: Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
// Body: [[10e738f0, 10e73943]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,MethodInfo *param_3)

{
  if (DAT_1152283e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m9217AA9E0D901F9C9AAD472B5D49540AD75363EC_RuntimeMethod_var);
    DAT_1152283e = '\x01';
  }
  if (param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    if (param_2->___awaitingGraphUpdate_16 == false) {
      if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___qubeUpdateQueue_21 ==
          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e7393f;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___qubeUpdateQueue_21,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                 List_1_Add_m9217AA9E0D901F9C9AAD472B5D49540AD75363EC_RuntimeMethod_var);
      param_2->___awaitingGraphUpdate_16 = true;
    }
    return;
  }
LAB_10e7393f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
