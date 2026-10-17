// RVA 0x9c71c0 | Placemaker.StorageUtils.<SaveSettings>d__16$$System.IDisposable.Dispose
// PDB: U3CSaveSettingsU3Ed__16_System_IDisposable_Dispose_mDEE2D9C4B6DA044DAC364A4A3A450AAB9FFA6B1F
// Body: [[109c71c0, 109c7212]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

void __cdecl
U3CSaveSettingsU3Ed__16_System_IDisposable_Dispose_mDEE2D9C4B6DA044DAC364A4A3A450AAB9FFA6B1F
          (U3CSaveSettingsU3Ed__16_t72B654E5E2248FCD7EF0C1D0D1F28BB0AA30C80D *param_1,
          MethodInfo *param_2)

{
  if ((param_1->___U3CU3E1__state_0 == -3) || (param_1->___U3CU3E1__state_0 == 1)) {
    if (DAT_1151ff47 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var)
      ;
      DAT_1151ff47 = '\x01';
    }
    param_1->___U3CU3E1__state_0 = -1;
    if (param_1->___U3CstreamU3E5__2_4 !=
        (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) {
      InterfaceFuncInvoker0<int>::Invoke
                (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                 (Il2CppObject *)param_1->___U3CstreamU3E5__2_4);
    }
  }
  return;
}
