// RVA 0x1da5b0 | Placemaker.BootMaster.<BootRoutine>d__11$$System.Collections.IEnumerator.get_Current
// PDB: U3CBootRoutineU3Ed__11_System_Collections_IEnumerator_get_Current_m0E7B9755DF21F79DEA975E088C32017F799F619A
// Body: [[101da5b0, 101da5ec]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

Il2CppObject * __cdecl
U3CBootRoutineU3Ed__11_System_Collections_IEnumerator_get_Current_m0E7B9755DF21F79DEA975E088C32017F799F619A
          (U3CBootRoutineU3Ed__11_tE91A7954F486E79AC32D606E758003FB9D1E217C *param_1,
          MethodInfo *param_2)

{
  Il2CppObject *pIVar1;

  if (DAT_1151af3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
    DAT_1151af3c = '\x01';
  }
  param_1 = (U3CBootRoutineU3Ed__11_tE91A7954F486E79AC32D606E758003FB9D1E217C *)
            CONCAT13(param_1->___U3CU3E2__current_1,param_1._0_3_);
  pIVar1 = il2cpp_value_box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var,
                            (void *)((int)&param_1 + 3));
  return pIVar1;
}
