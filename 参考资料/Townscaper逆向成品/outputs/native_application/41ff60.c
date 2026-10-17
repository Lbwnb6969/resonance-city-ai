// RVA 0x41ff60 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnConflictFound
// PDB: KeyboardAndMouseControlRemap_OnConflictFound_m5DF35E3CDC61847B55F698577102115E6FF68530
// Body: [[1041ff60, 1041ffa5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325dd0 UnityAction_1_Invoke_m74DBA8433434A2BD595BF11212F0DF26D6F6DF3E_gshared

void __cdecl
KeyboardAndMouseControlRemap_OnConflictFound_m5DF35E3CDC61847B55F698577102115E6FF68530
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          ConflictFoundEventData_tA89C6523671C3D087025F21D974255D7CFFA97F8 *param_2,
          MethodInfo *param_3)

{
  if (DAT_1151cb11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mEE93F2046C1274F4639EB5392C5ABE87C1AE9DA7_RuntimeMethod_var)
    ;
    DAT_1151cb11 = '\x01';
  }
  if ((param_2 != (ConflictFoundEventData_tA89C6523671C3D087025F21D974255D7CFFA97F8 *)0x0) &&
     ((UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)param_2->___responseCallback_1 !=
      (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)0x0)) {
    UnityAction_1_Invoke_m74DBA8433434A2BD595BF11212F0DF26D6F6DF3E_gshared
              ((UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)
               param_2->___responseCallback_1,0,
               Action_1_Invoke_mEE93F2046C1274F4639EB5392C5ABE87C1AE9DA7_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
