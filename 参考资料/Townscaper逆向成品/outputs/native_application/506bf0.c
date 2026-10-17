// RVA 0x506bf0 | Os.Utils.PooledList<object>$$set_Item
// PDB: PooledList_1_set_Item_m43D4F49AD362E34882B31FD4E8D6FC387D16A06A_gshared
// Body: [[10506bf0, 10506c48]]
// Direct callees:
// 1003e3b0 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
PooledList_1_set_Item_m43D4F49AD362E34882B31FD4E8D6FC387D16A06A_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,int param_2,
          Il2CppObject *param_3,MethodInfo *param_4)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppClass *pIVar2;

  pLVar1 = param_1->___list_0;
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pIVar2 = param_4->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[3].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    InterfaceActionInvoker2<String_t_*,String_t_*>::Invoke
              (1,pIVar2,(Il2CppObject *)pLVar1,(String_t *)param_2,(String_t *)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
