// RVA 0x5d0bb0 | Os.Utils.ListPool<byte>$$Return
// PDB: ListPool_1_Return_m1B678414ABF8A3D029F4A0418E6CE45D5C94074B_gshared
// Body: [[105d0bb0, 105d1026]]
// Direct callees:
// 1003e030 InitializedTypeInfo
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
ListPool_1_Return_m1B678414ABF8A3D029F4A0418E6CE45D5C94074B_gshared
          (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 **param_1,MethodInfo *param_2)

{
  MethodInfo *pMVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *pLVar4;
  int iVar5;
  Il2CppClass *pIVar6;
  List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *local_c;
  int local_8;

  pLVar4 = *param_1;
  if (pLVar4 == (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)0x0) {
    return;
  }
  pIVar3 = param_2->klass;
  pIVar6 = pIVar3;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
    pIVar6 = param_2->klass;
  }
  if (pIVar6->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar6);
  }
  (*(pIVar6->rgctx_data[8].method)->methodPointer)(pLVar4,pIVar3->rgctx_data[8].rgctxDataDummy);
  local_8 = 0;
  local_c = *param_1;
  while( true ) {
    pIVar3 = param_2->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
    }
    pIVar3 = pIVar3->rgctx_data->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
    }
    if (pIVar3->has_cctor != '\0') {
      pIVar3 = param_2->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
      }
      if (pIVar3->cctor_finished == 0) {
        pIVar3 = param_2->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
        }
        pIVar3 = pIVar3->rgctx_data->klass;
        if (pIVar3->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
        }
        il2cpp_runtime_class_init(pIVar3);
      }
    }
    pIVar3 = param_2->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
    }
    pIVar3 = pIVar3->rgctx_data->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
    }
    iVar2 = *(int *)pIVar3->static_fields;
    if (iVar2 == 0) goto LAB_105d1022;
    pIVar3 = param_2->klass;
    pIVar6 = pIVar3;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
      pIVar6 = param_2->klass;
    }
    if (pIVar6->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar6);
    }
    iVar2 = (*(pIVar6->rgctx_data[1].method)->methodPointer)
                      (iVar2,pIVar3->rgctx_data[1].rgctxDataDummy);
    pIVar3 = param_2->klass;
    if (iVar2 <= local_8) break;
    pIVar3 = InitializedTypeInfo(pIVar3);
    pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
    if (pIVar3->has_cctor != '\0') {
      pIVar3 = InitializedTypeInfo(param_2->klass);
      pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
      if (pIVar3->cctor_finished == 0) {
        pIVar3 = InitializedTypeInfo(param_2->klass);
        pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
        il2cpp_runtime_class_init(pIVar3);
      }
    }
    pIVar3 = InitializedTypeInfo(param_2->klass);
    pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
    iVar2 = *(int *)pIVar3->static_fields;
    if (iVar2 == 0) goto LAB_105d1022;
    pIVar3 = InitializedTypeInfo(param_2->klass);
    pMVar1 = pIVar3->rgctx_data[4].method;
    pIVar3 = InitializedTypeInfo(param_2->klass);
    pLVar4 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)
             (*pMVar1->methodPointer)(iVar2,local_8,pIVar3->rgctx_data[4].rgctxDataDummy);
    if (local_c == (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)0x0) goto LAB_105d1022;
    pIVar3 = InitializedTypeInfo(param_2->klass);
    pMVar1 = pIVar3->rgctx_data[7].method;
    pIVar3 = InitializedTypeInfo(param_2->klass);
    iVar2 = (*pMVar1->methodPointer)(local_c,pIVar3->rgctx_data[7].rgctxDataDummy);
    if (pLVar4 == (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)0x0) goto LAB_105d1022;
    pIVar3 = InitializedTypeInfo(param_2->klass);
    pMVar1 = pIVar3->rgctx_data[7].method;
    pIVar3 = InitializedTypeInfo(param_2->klass);
    iVar5 = (*pMVar1->methodPointer)(pLVar4,pIVar3->rgctx_data[7].rgctxDataDummy);
    if (iVar2 < iVar5) {
      pIVar3 = InitializedTypeInfo(param_2->klass);
      pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
      if (pIVar3->has_cctor != '\0') {
        pIVar3 = InitializedTypeInfo(param_2->klass);
        pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
        if (pIVar3->cctor_finished == 0) {
          pIVar3 = InitializedTypeInfo(param_2->klass);
          pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
          il2cpp_runtime_class_init(pIVar3);
        }
      }
      pIVar3 = InitializedTypeInfo(param_2->klass);
      pIVar3 = InitializedTypeInfo(pIVar3->rgctx_data->klass);
      iVar2 = *(int *)pIVar3->static_fields;
      if (iVar2 == 0) goto LAB_105d1022;
      pIVar3 = InitializedTypeInfo(param_2->klass);
      pMVar1 = pIVar3->rgctx_data[9].method;
      pIVar3 = InitializedTypeInfo(param_2->klass);
      (*pMVar1->methodPointer)(iVar2,local_8,local_c,pIVar3->rgctx_data[9].rgctxDataDummy);
      local_c = pLVar4;
    }
    local_8 = local_8 + 1;
  }
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data->klass;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  if (pIVar3->has_cctor != '\0') {
    pIVar3 = param_2->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
    }
    pIVar3 = pIVar3->rgctx_data->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
    }
    if (pIVar3->cctor_finished == 0) {
      pIVar3 = param_2->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
      }
      pIVar3 = pIVar3->rgctx_data->klass;
      if (pIVar3->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
      }
      il2cpp_runtime_class_init(pIVar3);
    }
  }
  pIVar3 = param_2->klass;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  pIVar3 = pIVar3->rgctx_data->klass;
  if (pIVar3->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
  }
  iVar2 = *(int *)pIVar3->static_fields;
  if (iVar2 != 0) {
    pIVar3 = param_2->klass;
    pIVar6 = pIVar3;
    if (pIVar3->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar3);
      pIVar6 = param_2->klass;
    }
    if (pIVar6->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar6);
    }
    (*(pIVar6->rgctx_data[10].method)->methodPointer)
              (iVar2,local_c,pIVar3->rgctx_data[10].rgctxDataDummy);
    *param_1 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)0x0;
    return;
  }
LAB_105d1022:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
