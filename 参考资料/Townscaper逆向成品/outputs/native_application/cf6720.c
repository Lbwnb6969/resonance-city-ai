// RVA 0xcf6720 | Os.Utils.DictPool<int, int>$$Get
// PDB: DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
// Body: [[10cf6720, 10cf6b8c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __cdecl
DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared(int param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  int iVar2;
  int iVar3;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar4;
  Il2CppClass *pIVar5;

  pIVar1 = param_2->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  if (pIVar1->has_cctor != '\0') {
    pIVar1 = param_2->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->cctor_finished == 0) {
      pIVar1 = param_2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      il2cpp_runtime_class_init(pIVar1);
    }
  }
  pIVar1 = param_2->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  iVar2 = *(int *)pIVar1->static_fields;
  if (iVar2 != 0) {
    pIVar1 = param_2->klass;
    pIVar5 = pIVar1;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      pIVar5 = param_2->klass;
    }
    if (pIVar5->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
    }
    iVar2 = (*(pIVar5->rgctx_data[1].method)->methodPointer)
                      (iVar2,pIVar1->rgctx_data[1].rgctxDataDummy);
    pIVar1 = param_2->klass;
    if (iVar2 == 0) {
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[2].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pDVar4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               il2cpp_codegen_object_new(pIVar1);
      pIVar1 = param_2->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = param_2->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      (*(pIVar5->rgctx_data[3].method)->methodPointer)
                (pDVar4,param_1,pIVar1->rgctx_data[3].rgctxDataDummy);
      return pDVar4;
    }
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->has_cctor != '\0') {
      pIVar1 = param_2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      if (pIVar1->cctor_finished == 0) {
        pIVar1 = param_2->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        pIVar1 = pIVar1->rgctx_data->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        il2cpp_runtime_class_init(pIVar1);
      }
    }
    pIVar1 = param_2->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar5 = param_2->klass;
    iVar2 = *(int *)pIVar1->static_fields;
    if (pIVar5->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
    }
    pIVar1 = pIVar5->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    iVar3 = *(int *)pIVar1->static_fields;
    if (iVar3 != 0) {
      pIVar1 = param_2->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = param_2->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      iVar3 = (*(pIVar5->rgctx_data[1].method)->methodPointer)
                        (iVar3,pIVar1->rgctx_data[1].rgctxDataDummy);
      if (iVar2 != 0) {
        pIVar1 = param_2->klass;
        pIVar5 = pIVar1;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
          pIVar5 = param_2->klass;
        }
        if (pIVar5->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
        }
        pDVar4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 (*(pIVar5->rgctx_data[4].method)->methodPointer)
                           (iVar2,iVar3 + -1,pIVar1->rgctx_data[4].rgctxDataDummy);
        pIVar1 = param_2->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        pIVar1 = pIVar1->rgctx_data->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        pIVar5 = param_2->klass;
        iVar2 = *(int *)pIVar1->static_fields;
        if (pIVar5->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
        }
        pIVar1 = pIVar5->rgctx_data->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        iVar3 = *(int *)pIVar1->static_fields;
        if (iVar3 != 0) {
          pIVar1 = param_2->klass;
          pIVar5 = pIVar1;
          if (pIVar1->initialized_and_no_error == 0) {
            il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
            pIVar5 = param_2->klass;
          }
          if (pIVar5->initialized_and_no_error == 0) {
            il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
          }
          iVar3 = (*(pIVar5->rgctx_data[1].method)->methodPointer)
                            (iVar3,pIVar1->rgctx_data[1].rgctxDataDummy);
          if (iVar2 != 0) {
            pIVar1 = param_2->klass;
            pIVar5 = pIVar1;
            if (pIVar1->initialized_and_no_error == 0) {
              il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
              pIVar5 = param_2->klass;
            }
            if (pIVar5->initialized_and_no_error == 0) {
              il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
            }
            (*(pIVar5->rgctx_data[5].method)->methodPointer)
                      (iVar2,iVar3 + -1,pIVar1->rgctx_data[5].rgctxDataDummy);
            return pDVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
