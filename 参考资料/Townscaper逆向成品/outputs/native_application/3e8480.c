// RVA 0x3e8480 | Placemaker.Ui.UpdateState$$PushValue
// PDB: UpdateState_PushValue_mF22A514A505A6B44489464571B337E6907709EF9
// Body: [[103e8480, 103e84ef]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared

UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C * __cdecl
UpdateState_PushValue_mF22A514A505A6B44489464571B337E6907709EF9
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,MethodInfo *param_2)

{
  if (DAT_1151c8cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var)
    ;
    DAT_1151c8cb = '\x01';
  }
  if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)param_1->___onValueChanged_3 !=
      (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) {
    UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
              ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
               param_1->___onValueChanged_3,param_1->____current_0,
               Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
    if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)param_1->___onTargetChange_4 !=
        (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) {
      UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                 param_1->___onTargetChange_4,param_1->____target_1,
                 Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
