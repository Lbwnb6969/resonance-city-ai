// RVA 0x506450 | Os.Utils.PooledList<object>$$Add
// PDB: PooledList_1_Add_m485C6D62128CEE06B15C1BD91CF6F2FA28468F0A_gshared
// Body: [[10506450, 105064a5]]
// Direct callees:
// 1003e330 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
PooledList_1_Add_m485C6D62128CEE06B15C1BD91CF6F2FA28468F0A_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppClass *pIVar2;

  pLVar1 = param_1->___list_0;
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pIVar2 = param_3->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[4].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
              (2,pIVar2,(Il2CppObject *)pLVar1,
               (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
