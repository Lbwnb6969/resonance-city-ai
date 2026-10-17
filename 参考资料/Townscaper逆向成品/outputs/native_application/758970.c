// RVA 0x758970 | Placemaker.Props.PropNode$$RemoveMotevee
// PDB: PropNode_RemoveMotevee_m8D507C99C86AD6A5CE4C764F0F68A2E304C88979
// Body: [[10758970, 107589bb]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

void __cdecl
PropNode_RemoveMotevee_m8D507C99C86AD6A5CE4C764F0F68A2E304C88979
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (DAT_1151ec3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var);
    DAT_1151ec3d = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___relations_11 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    bVar1 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___relations_11,
                       (Il2CppObject *)param_2,
                       List_1_Remove_m446BEF07EE6F724D4698B84636E089B224418498_RuntimeMethod_var);
    if (bVar1) {
      param_1->___moteveeCount_15 = param_1->___moteveeCount_15 + 0xff;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
