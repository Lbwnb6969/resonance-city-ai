// RVA 0x758790 | Placemaker.Props.PropNode$$AddOverlap
// PDB: PropNode_AddOverlap_m33051E86504D4A2268280EE9D0BF5168053F5501
// Body: [[10758790, 107587e8]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared

void __cdecl
PropNode_AddOverlap_m33051E86504D4A2268280EE9D0BF5168053F5501
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  if (DAT_1151ec37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
    DAT_1151ec37 = '\x01';
  }
  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11 !=
      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
    List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11,
               (uint)param_1->___childCount_13 + (uint)param_1->___parentCount_12 +
               (uint)param_1->___overlapCount_14,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
    param_1->___overlapCount_14 = param_1->___overlapCount_14 + '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
