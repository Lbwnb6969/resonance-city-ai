// RVA 0x1e0650 | BindingRow.<>c__DisplayClass7_0$$<SetButton>b__0
// PDB: U3CU3Ec__DisplayClass7_0_U3CSetButtonU3Eb__0_m9F97E369CCF37843842FBA066DC9ACAF6C6A887B
// Body: [[101e0650, 101e069a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10327930 UnityAction_3_Invoke_mD92AFC1A70A25FBA6519C77096F67E4C5BE89726_gshared

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CSetButtonU3Eb__0_m9F97E369CCF37843842FBA066DC9ACAF6C6A887B
          (U3CU3Ec__DisplayClass7_0_t198EAFA435D901C843E023DE0AF013B8E31CCB54 *param_1,
          MethodInfo *param_2)

{
  if (DAT_1151af3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_3_Invoke_mA7EE99F822C5CD722BA417077D54D66B85ED1685_RuntimeMethod_var)
    ;
    DAT_1151af3a = '\x01';
  }
  if ((UnityAction_3_tEB2BE2C791BD911AB4B4FC10C465100747B182E0 *)param_1->___action_0 !=
      (UnityAction_3_tEB2BE2C791BD911AB4B4FC10C465100747B182E0 *)0x0) {
    UnityAction_3_Invoke_mD92AFC1A70A25FBA6519C77096F67E4C5BE89726_gshared
              ((UnityAction_3_tEB2BE2C791BD911AB4B4FC10C465100747B182E0 *)param_1->___action_0,
               SUB41(param_1->___index_1,0),(Il2CppObject *)param_1->___mapId_2,
               (Il2CppObject *)(uint)param_1->___isAltField_3,
               Action_3_Invoke_mA7EE99F822C5CD722BA417077D54D66B85ED1685_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
