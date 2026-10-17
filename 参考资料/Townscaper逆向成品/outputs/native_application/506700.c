// RVA 0x506700 | Os.Utils.PooledList<object>$$GetEnumerator
// PDB: PooledList_1_GetEnumerator_m51FC73063CF7D0574E682B9AE2DCF46988A39771_gshared
// Body: [[10506700, 10506752]]
// Direct callees:
// 1003e420 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Il2CppObject * __cdecl
PooledList_1_GetEnumerator_m51FC73063CF7D0574E682B9AE2DCF46988A39771_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,MethodInfo *param_2)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;

  pLVar1 = param_1->___list_0;
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pIVar2 = param_2->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[5].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    pIVar3 = (Il2CppObject *)InterfaceFuncInvoker0<int>::Invoke(0,pIVar2,(Il2CppObject *)pLVar1);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
