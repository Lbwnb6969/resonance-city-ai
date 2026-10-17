// RVA 0x758660 | Placemaker.Props.PropNode$$AddAnchor
// PDB: PropNode_AddAnchor_mE6096002F92BB21665BEA5713768EB72B93C3478
// Body: [[10758660, 107586c4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared

void __cdecl
PropNode_AddAnchor_mE6096002F92BB21665BEA5713768EB72B93C3478
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  if (DAT_1151ec39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
    DAT_1151ec39 = '\x01';
  }
  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11 !=
      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
    List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11,
               (uint)param_1->___moteveeCount_15 + (uint)param_1->___overlapCount_14 +
               (uint)param_1->___childCount_13 + (uint)param_1->___parentCount_12 +
               (uint)param_1->___anchorCount_16,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
    param_1->___anchorCount_16 = param_1->___anchorCount_16 + '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
