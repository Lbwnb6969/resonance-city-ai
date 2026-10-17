// RVA 0x9c65c0 | Placemaker.StorageUtils.<MoveAllSaves>d__25$$System.IDisposable.Dispose
// PDB: U3CMoveAllSavesU3Ed__25_System_IDisposable_Dispose_mD7DEBCC1F489B178DD410917EB15C5888395CDE8
// Body: [[109c65c0, 109c6612]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

void __cdecl
U3CMoveAllSavesU3Ed__25_System_IDisposable_Dispose_mD7DEBCC1F489B178DD410917EB15C5888395CDE8
          (U3CMoveAllSavesU3Ed__25_t6CA46A6619904EC57B8C55D47A26C884858A8D60 *param_1,
          MethodInfo *param_2)

{
  if ((param_1->___U3CU3E1__state_0 == -3) || (param_1->___U3CU3E1__state_0 == 2)) {
    if (DAT_1151ff43 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var)
      ;
      DAT_1151ff43 = '\x01';
    }
    param_1->___U3CU3E1__state_0 = -1;
    if (param_1->___U3CU3E7__wrap3_5 != (Il2CppObject *)0x0) {
      InterfaceFuncInvoker0<int>::Invoke
                (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,
                 param_1->___U3CU3E7__wrap3_5);
    }
  }
  return;
}
