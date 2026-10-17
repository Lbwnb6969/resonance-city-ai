// RVA 0x506610 | Os.Utils.PooledList<object>$$Dispose
// PDB: PooledList_1_Dispose_m6BC2907301FD8733A3290F31C506DEBB8BE159A2_gshared
// Body: [[10506610, 105066fe]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow

void __cdecl
PooledList_1_Dispose_m6BC2907301FD8733A3290F31C506DEBB8BE159A2_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;

  pIVar1 = param_2->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[1].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  if (pIVar1->has_cctor != '\0') {
    pIVar1 = param_2->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data[1].klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->cctor_finished == 0) {
      pIVar1 = param_2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[1].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      il2cpp_runtime_class_init(pIVar1);
    }
  }
  pIVar1 = param_2->klass;
  pIVar2 = pIVar1;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    pIVar2 = param_2->klass;
  }
  if (pIVar2->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
  }
  (*(pIVar2->rgctx_data[2].method)->methodPointer)(param_1,pIVar1->rgctx_data[2].rgctxDataDummy);
  return;
}
