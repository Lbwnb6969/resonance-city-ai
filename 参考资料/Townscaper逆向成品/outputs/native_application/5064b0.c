// RVA 0x5064b0 | Os.Utils.PooledList<object>$$Clear
// PDB: PooledList_1_Clear_mE20EE78206A4D360F1C3FB018195732F47E7A0E4_gshared
// Body: [[105064b0, 10506502]]
// Direct callees:
// 1003e420 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
PooledList_1_Clear_mE20EE78206A4D360F1C3FB018195732F47E7A0E4_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,MethodInfo *param_2)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppClass *pIVar2;

  pLVar1 = param_1->___list_0;
  if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pIVar2 = param_2->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[4].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    InterfaceFuncInvoker0<int>::Invoke(3,pIVar2,(Il2CppObject *)pLVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
