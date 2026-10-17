// RVA 0x7587f0 | Placemaker.Props.PropNode$$AddParent
// PDB: PropNode_AddParent_mA4BAFEA1B4AAAFB63117F19F8914399608E3A63B
// Body: [[107587f0, 1075883c]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared

void __cdecl
PropNode_AddParent_mA4BAFEA1B4AAAFB63117F19F8914399608E3A63B
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  if (DAT_1151ec35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
    DAT_1151ec35 = '\x01';
  }
  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11 !=
      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
    List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11,
               (uint)param_1->___parentCount_12,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
               List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
    param_1->___parentCount_12 = param_1->___parentCount_12 + '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
