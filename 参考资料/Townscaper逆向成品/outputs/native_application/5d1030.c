// RVA 0x5d1030 | Os.Utils.ListPool<byte>$$.cctor
// PDB: ListPool_1__cctor_m0A43F818735D3573082F8FE706332D268A1DB383_gshared
// Body: [[105d1030, 105d10ea]]
// Direct callees:
// 1015daa0 InitFromCodegenSlow
// 1018ea90 il2cpp_codegen_object_new

void __cdecl
ListPool_1__cctor_m0A43F818735D3573082F8FE706332D268A1DB383_gshared(MethodInfo *param_1)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;

  pIVar1 = param_1->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[0xb].klass;
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
  (*(pIVar3->rgctx_data[0xc].method)->methodPointer)(pIVar2,pIVar1->rgctx_data[0xc].rgctxDataDummy);
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
