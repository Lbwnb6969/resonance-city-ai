// RVA 0x506920 | Os.Utils.PooledList<object>$$Remove
// PDB: PooledList_1_Remove_mCE8B55F78AFD7A50059949EDAD2ED3A09F0D10E3_gshared
// Body: [[10506920, 10506975]]
// Direct callees:
// 1003e330 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

bool __cdecl
PooledList_1_Remove_mCE8B55F78AFD7A50059949EDAD2ED3A09F0D10E3_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppClass *pIVar2;
  undefined1 extraout_AL;

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
              (6,pIVar2,(Il2CppObject *)pLVar1,
               (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_2);
    return (bool)extraout_AL;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
