// RVA 0x5d0600 | Os.Utils.ListPool<BirdLanding>$$Get
// PDB: ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// Body: [[105d0600, 105d0a69]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E * __cdecl
ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared(MethodInfo *param_1)

{
  Il2CppClass *pIVar1;
  int iVar2;
  int iVar3;
  List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *pLVar4;
  Il2CppClass *pIVar5;

  pIVar1 = param_1->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  if (pIVar1->has_cctor != '\0') {
    pIVar1 = param_1->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->cctor_finished == 0) {
      pIVar1 = param_1->klass;
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
  pIVar1 = param_1->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  iVar2 = *(int *)pIVar1->static_fields;
  if (iVar2 != 0) {
    pIVar1 = param_1->klass;
    pIVar5 = pIVar1;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      pIVar5 = param_1->klass;
    }
    if (pIVar5->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
    }
    iVar2 = (*(pIVar5->rgctx_data[1].method)->methodPointer)
                      (iVar2,pIVar1->rgctx_data[1].rgctxDataDummy);
    pIVar1 = param_1->klass;
    if (iVar2 == 0) {
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[2].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pLVar4 = (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)il2cpp_codegen_object_new(pIVar1)
      ;
      pIVar1 = param_1->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = param_1->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      (*(pIVar5->rgctx_data[3].method)->methodPointer)(pLVar4,pIVar1->rgctx_data[3].rgctxDataDummy);
      return pLVar4;
    }
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->has_cctor != '\0') {
      pIVar1 = param_1->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      if (pIVar1->cctor_finished == 0) {
        pIVar1 = param_1->klass;
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
    pIVar1 = param_1->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar5 = param_1->klass;
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
      pIVar1 = param_1->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = param_1->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      iVar3 = (*(pIVar5->rgctx_data[1].method)->methodPointer)
                        (iVar3,pIVar1->rgctx_data[1].rgctxDataDummy);
      if (iVar2 != 0) {
        pIVar1 = param_1->klass;
        pIVar5 = pIVar1;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
          pIVar5 = param_1->klass;
        }
        if (pIVar5->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
        }
        pLVar4 = (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)
                 (*(pIVar5->rgctx_data[4].method)->methodPointer)
                           (iVar2,iVar3 + -1,pIVar1->rgctx_data[4].rgctxDataDummy);
        pIVar1 = param_1->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        pIVar1 = pIVar1->rgctx_data->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        pIVar5 = param_1->klass;
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
          pIVar1 = param_1->klass;
          pIVar5 = pIVar1;
          if (pIVar1->initialized_and_no_error == 0) {
            il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
            pIVar5 = param_1->klass;
          }
          if (pIVar5->initialized_and_no_error == 0) {
            il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
          }
          iVar3 = (*(pIVar5->rgctx_data[1].method)->methodPointer)
                            (iVar3,pIVar1->rgctx_data[1].rgctxDataDummy);
          if (iVar2 != 0) {
            pIVar1 = param_1->klass;
            pIVar5 = pIVar1;
            if (pIVar1->initialized_and_no_error == 0) {
              il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
              pIVar5 = param_1->klass;
            }
            if (pIVar5->initialized_and_no_error == 0) {
              il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
            }
            (*(pIVar5->rgctx_data[5].method)->methodPointer)
                      (iVar2,iVar3 + -1,pIVar1->rgctx_data[5].rgctxDataDummy);
            return pLVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
