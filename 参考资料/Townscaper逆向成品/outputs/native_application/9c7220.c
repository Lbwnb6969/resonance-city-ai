// RVA 0x9c7220 | Placemaker.StorageUtils.<SaveSettings>d__16$$<>m__Finally1
// PDB: U3CSaveSettingsU3Ed__16_U3CU3Em__Finally1_m7CFCCDA33C70B0B822C46610E477ECFE09105BF2
// Body: [[109c7220, 109c7263]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

void __cdecl
U3CSaveSettingsU3Ed__16_U3CU3Em__Finally1_m7CFCCDA33C70B0B822C46610E477ECFE09105BF2
          (U3CSaveSettingsU3Ed__16_t72B654E5E2248FCD7EF0C1D0D1F28BB0AA30C80D *param_1,
          MethodInfo *param_2)

{
  if (DAT_1151ff47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    DAT_1151ff47 = '\x01';
  }
  param_1->___U3CU3E1__state_0 = -1;
  if (param_1->___U3CstreamU3E5__2_4 !=
      (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
               (Il2CppObject *)param_1->___U3CstreamU3E5__2_4);
  }
  return;
}
