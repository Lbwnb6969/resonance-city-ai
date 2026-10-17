// RVA 0x3e9590 | Placemaker.Ui.UpdateState$$set_targetBool
// PDB: UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// Body: [[103e9590, 103e960b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E

void __cdecl
UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,bool param_2,
          MethodInfo *param_3)

{
  float fVar1;

  if (param_1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    fVar1 = (float)param_2;
    if (DAT_1151c8ca == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var
                );
      DAT_1151c8ca = '\x01';
    }
    if (param_1->____target_1 != fVar1) {
      param_1->____target_1 = fVar1;
      if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)param_1->___onTargetChange_4 ==
          (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) goto LAB_103e9607;
      UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                 param_1->___onTargetChange_4,fVar1,
                 Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
      UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0)
      ;
    }
    return;
  }
LAB_103e9607:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
