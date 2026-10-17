// RVA 0x301b00 | Placemaker.TextSaveSystem$$AddValue
// PDB: TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
// Body: [[10301b00, 10301b50]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
          (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *param_1,int param_2,int param_3,
          MethodInfo *param_4)

{
  if (DAT_1151c220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    DAT_1151c220 = '\x01';
  }
  if (param_1 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) {
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_3,
               List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
