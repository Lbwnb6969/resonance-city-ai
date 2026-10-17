// RVA 0x506980 | Os.Utils.PooledList<object>$$.ctor
// PDB: PooledList_1__ctor_mB3AD82DBF820B548D7CD0BF36F8121308461AC39_gshared
// Body: [[10506980, 10506a71]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow

void __cdecl
PooledList_1__ctor_mB3AD82DBF820B548D7CD0BF36F8121308461AC39_gshared
          (PooledList_1_t2AC3AAF7A1339FAADEEAB6E5CFB6D463A483AD62 *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar2;
  Il2CppClass *pIVar3;

  pIVar1 = param_3->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[1].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  if (pIVar1->has_cctor != '\0') {
    pIVar1 = param_3->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data[1].klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->cctor_finished == 0) {
      pIVar1 = param_3->klass;
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
  pIVar1 = param_3->klass;
  pIVar3 = pIVar1;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    pIVar3 = param_3->klass;
  }
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  pLVar2 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
           (*pIVar3->rgctx_data->method->methodPointer)(param_2,pIVar1->rgctx_data->rgctxDataDummy);
  param_1->___list_0 = pLVar2;
  return;
}
