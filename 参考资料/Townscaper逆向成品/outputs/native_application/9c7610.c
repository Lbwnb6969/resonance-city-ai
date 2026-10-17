// RVA 0x9c7610 | Placemaker.StorageUtils.<SaveToPath>d__23$$System.IDisposable.Dispose
// PDB: U3CSaveToPathU3Ed__23_System_IDisposable_Dispose_m0FFCDC013386C3C08F7EF12DF6730A0447BCC7CF
// Body: [[109c7610, 109c7662]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

void __cdecl
U3CSaveToPathU3Ed__23_System_IDisposable_Dispose_m0FFCDC013386C3C08F7EF12DF6730A0447BCC7CF
          (U3CSaveToPathU3Ed__23_t11F7B785B626EF11BF8E7674654FEB20D8E0F6CF *param_1,
          MethodInfo *param_2)

{
  if ((param_1->___U3CU3E1__state_0 == -3) || (param_1->___U3CU3E1__state_0 == 2)) {
    if (DAT_1151ff49 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var)
      ;
      DAT_1151ff49 = '\x01';
    }
    param_1->___U3CU3E1__state_0 = -1;
    if (param_1->___U3CstreamU3E5__3_6 !=
        (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) {
      InterfaceFuncInvoker0<int>::Invoke
                (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                 (Il2CppObject *)param_1->___U3CstreamU3E5__3_6);
    }
  }
  return;
}
