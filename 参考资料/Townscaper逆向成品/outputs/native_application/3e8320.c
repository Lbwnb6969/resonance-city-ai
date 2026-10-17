// RVA 0x3e8320 | Placemaker.Ui.UpdateState$$CheckUpdating
// PDB: UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E
// Body: [[103e8320, 103e8408]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared

void __cdecl
UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,MethodInfo *param_2)

{
  float fVar1;
  bool bVar2;

  if (DAT_1151c8cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var)
    ;
    DAT_1151c8cc = '\x01';
  }
  fVar1 = param_1->____target_1;
  bVar2 = __real_38d1b717 <
          (float)((uint)(param_1->____current_0 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->___isUpdating_2 == bVar2) {
    if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)param_1->___onValueChanged_3 !=
        (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) {
      UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                 param_1->___onValueChanged_3,param_1->____current_0,
                 Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
      return;
    }
  }
  else {
    param_1->___isUpdating_2 = bVar2;
    if (bVar2) {
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___onStart_5 !=
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___onStart_5,(MethodInfo *)0x0);
        if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)param_1->___onValueChanged_3
            != (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) {
          UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                    ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                     param_1->___onValueChanged_3,param_1->____current_0,
                     Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
          return;
        }
      }
    }
    else {
      param_1->____current_0 = fVar1;
      if ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)param_1->___onValueChanged_3 !=
          (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)0x0) {
        UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                  ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)
                   param_1->___onValueChanged_3,fVar1,
                   Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___onStop_6 !=
            (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     param_1->___onStop_6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
