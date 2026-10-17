// RVA 0x758920 | Placemaker.Props.PropNode$$RemoveChild
// PDB: PropNode_RemoveChild_m60D99C37A94A7AAD4BB3B358D2EE6EF823F5C279
// Body: [[10758920, 1075896b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

void __cdecl
PropNode_RemoveChild_m60D99C37A94A7AAD4BB3B358D2EE6EF823F5C279
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (DAT_1151ec3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var);
    DAT_1151ec3b = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___relations_11 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    bVar1 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___relations_11,
                       (Il2CppObject *)param_2,
                       List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var);
    if (bVar1) {
      param_1->___childCount_13 = param_1->___childCount_13 + 0xff;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
