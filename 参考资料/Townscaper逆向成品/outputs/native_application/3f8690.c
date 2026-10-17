// RVA 0x3f8690 | Placemaker.WorldMaster$$NothingToLoadAtStartup
// PDB: WorldMaster_NothingToLoadAtStartup_mEDB042351288A98D3520D8702FD97CF31F1AE807
// Body: [[103f8690, 103f870e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103261e0 UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10a09b90 ShadowBaker_Load_mB4E192673934C8BE22F0DB035A2358E964247089

void __cdecl
WorldMaster_NothingToLoadAtStartup_mEDB042351288A98D3520D8702FD97CF31F1AE807
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  if (DAT_1151c948 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_m9EE9B35D93184158C0634B10A576D643D967B25A_RuntimeMethod_var)
    ;
    DAT_1151c948 = '\x01';
  }
  if (param_1->___saveData_42 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
              (param_1->___saveData_42,(MethodInfo *)0x0);
    if ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)param_1->___onCameraLoad_52 !=
        (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)0x0) {
      UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
                ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)
                 param_1->___onCameraLoad_52,(Il2CppObject *)param_1->___saveData_42,
                 Action_1_Invoke_m9EE9B35D93184158C0634B10A576D643D967B25A_RuntimeMethod_var);
      if (param_1->___shadowBaker_31 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0
         ) {
        ShadowBaker_Load_mB4E192673934C8BE22F0DB035A2358E964247089
                  (param_1->___shadowBaker_31,param_1->___saveData_42,(MethodInfo *)0x0);
        param_1->___state_57 = '\a';
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
