// RVA 0xcf6d30 | Os.Utils.DictPool<int, int>$$.cctor
// PDB: DictPool_2__cctor_m065E9CAB8971BD598F8C89941750F37E9C75AB4C_gshared
// Body: [[10cf6d30, 10cf6dea]]
// Direct callees:
// 1015daa0 InitFromCodegenSlow
// 1018ea90 il2cpp_codegen_object_new

void __cdecl
DictPool_2__cctor_m065E9CAB8971BD598F8C89941750F37E9C75AB4C_gshared(MethodInfo *param_1)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;

  pIVar1 = param_1->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[8].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar2 = il2cpp_codegen_object_new(pIVar1);
  pIVar1 = param_1->klass;
  pIVar3 = pIVar1;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    pIVar3 = param_1->klass;
  }
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  (*(pIVar3->rgctx_data[9].method)->methodPointer)(pIVar2,pIVar1->rgctx_data[9].rgctxDataDummy);
  pIVar1 = param_1->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  *(Il2CppObject **)pIVar1->static_fields = pIVar2;
  return;
}
