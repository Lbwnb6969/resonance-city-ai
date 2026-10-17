// RVA 0x758840 | Placemaker.Props.PropNode$$InserOverlap
// PDB: PropNode_InserOverlap_m4F1F22F450BB7ECDCA4C81A7B92FDDE1B698E413
// Body: [[10758840, 107588c3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 11030400 List_1_BinarySearch_m0D92C65448F44DDA1C144B749176B263BD373695_gshared
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared

void __cdecl
PropNode_InserOverlap_m4F1F22F450BB7ECDCA4C81A7B92FDDE1B698E413
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  uint uVar1;

  if (DAT_1151ec3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_BinarySearch_m3196C4AA15606309F984A14DE95E8914D0A0C929_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
    DAT_1151ec3f = '\x01';
  }
  if (param_1->___relations_11 != (List_1_t9B100DCC6CBE60AC19792B75D2F9FE7EBF80DB94 *)0x0) {
    uVar1 = List_1_BinarySearch_m0D92C65448F44DDA1C144B749176B263BD373695_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___relations_11,
                       (uint)param_1->___childCount_13 + (uint)param_1->___parentCount_12,
                       (uint)param_1->___overlapCount_14,(Il2CppObject *)param_2,
                       (Il2CppObject *)param_1,
                       List_1_BinarySearch_m3196C4AA15606309F984A14DE95E8914D0A0C929_RuntimeMethod_var
                      );
    if ((int)uVar1 < 0) {
      uVar1 = ~uVar1;
    }
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11 !=
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) {
      List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___relations_11,uVar1,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_2,
                 List_1_Insert_m0C57FA166F11F0FA64305B5277616CBDB81659B3_RuntimeMethod_var);
      param_1->___overlapCount_14 = param_1->___overlapCount_14 + '\x01';
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
