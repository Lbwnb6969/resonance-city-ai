// RVA 0x9c4ad0 | Placemaker.StorageUtils.<CreateAndSaveSettingsData>d__18$$System.IDisposable.Dispose
// PDB: U3CCreateAndSaveSettingsDataU3Ed__18_System_IDisposable_Dispose_mE913E3E643A4F83B2605F4F143DE48096C70BEA9
// Body: [[109c4ad0, 109c4b22]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

void __cdecl
U3CCreateAndSaveSettingsDataU3Ed__18_System_IDisposable_Dispose_mE913E3E643A4F83B2605F4F143DE48096C70BEA9
          (U3CCreateAndSaveSettingsDataU3Ed__18_tFC5746EC37BC59ABC100C24BB2846D581FCAE345 *param_1,
          MethodInfo *param_2)

{
  if ((param_1->___U3CU3E1__state_0 == -3) || (param_1->___U3CU3E1__state_0 == 1)) {
    if (DAT_1151ff3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var)
      ;
      DAT_1151ff3a = '\x01';
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
