// RVA 0x506a80 | Os.Utils.PooledList<object>$$get_Count
// PDB: PooledList_1_get_Count_m3D851AD05EE719234FF4AB1C341DBBFC701C16EC_gshared
// Body: [[10506a80, 10506ad2]]
// Direct callees:
// 1003e420 Invoke
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

int __cdecl
PooledList_1_get_Count_m3D851AD05EE719234FF4AB1C341DBBFC701C16EC_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,MethodInfo *param_2)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppClass *pIVar2;
  int iVar3;

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
    iVar3 = InterfaceFuncInvoker0<int>::Invoke(0,pIVar2,(Il2CppObject *)pLVar1);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
