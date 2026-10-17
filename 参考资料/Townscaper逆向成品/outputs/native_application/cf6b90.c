// RVA 0xcf6b90 | Os.Utils.DictPool<int, int>$$Return
// PDB: DictPool_2_Return_m5F442597FAFE10B043BA8D3D860C7D4AA6B6E89A_gshared
// Body: [[10cf6b90, 10cf6d23]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
DictPool_2_Return_m5F442597FAFE10B043BA8D3D860C7D4AA6B6E89A_gshared
          (Dictionary_2_t50595B4C24B307B6AB7BBA4DED1C8DE49E0879DB **param_1,MethodInfo *param_2)

{
  Dictionary_2_t50595B4C24B307B6AB7BBA4DED1C8DE49E0879DB *pDVar1;
  Il2CppClass *pIVar2;
  int iVar3;
  Il2CppClass *pIVar4;

  pDVar1 = *param_1;
  if (pDVar1 != (Dictionary_2_t50595B4C24B307B6AB7BBA4DED1C8DE49E0879DB *)0x0) {
    pIVar2 = param_2->klass;
    pIVar4 = pIVar2;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
      pIVar4 = param_2->klass;
    }
    if (pIVar4->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar4);
    }
    (*(pIVar4->rgctx_data[6].method)->methodPointer)(pDVar1,pIVar2->rgctx_data[6].rgctxDataDummy);
    pIVar2 = param_2->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    if (pIVar2->has_cctor != '\0') {
      pIVar2 = param_2->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
      }
      pIVar2 = pIVar2->rgctx_data->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
      }
      if (pIVar2->cctor_finished == 0) {
        pIVar2 = param_2->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
        }
        pIVar2 = pIVar2->rgctx_data->klass;
        if (pIVar2->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
        }
        il2cpp_runtime_class_init(pIVar2);
      }
    }
    pIVar2 = param_2->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
    }
    iVar3 = *(int *)pIVar2->static_fields;
    pDVar1 = *param_1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pIVar2 = param_2->klass;
    pIVar4 = pIVar2;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
      pIVar4 = param_2->klass;
    }
    if (pIVar4->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar4);
    }
    (*(pIVar4->rgctx_data[7].method)->methodPointer)
              (iVar3,pDVar1,pIVar2->rgctx_data[7].rgctxDataDummy);
    *param_1 = (Dictionary_2_t50595B4C24B307B6AB7BBA4DED1C8DE49E0879DB *)0x0;
  }
  return;
}
