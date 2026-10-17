// RVA 0x3d8d60 | Placemaker.ModuleBuilder$$MaybeAddToGrassQueue
// PDB: ModuleBuilder_MaybeAddToGrassQueue_mD1E7EE550321DC439D7B6573DDA04CE4C914027B
// Body: [[103d8d60, 103d8db3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
ModuleBuilder_MaybeAddToGrassQueue_mD1E7EE550321DC439D7B6573DDA04CE4C914027B
          (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,MethodInfo *param_3)

{
  if (DAT_1151c876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m9217AA9E0D901F9C9AAD472B5D49540AD75363EC_RuntimeMethod_var);
    DAT_1151c876 = '\x01';
  }
  if (param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    if (param_2->___awaitingGrass_15 == false) {
      if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___qubesToGrass_7 ==
          (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103d8daf;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___qubesToGrass_7,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                 List_1_Add_m9217AA9E0D901F9C9AAD472B5D49540AD75363EC_RuntimeMethod_var);
      param_2->___awaitingGrass_15 = true;
    }
    return;
  }
LAB_103d8daf:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
