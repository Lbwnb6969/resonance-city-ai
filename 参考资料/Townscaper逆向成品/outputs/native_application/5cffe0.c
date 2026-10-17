// RVA 0x5cffe0 | Os.Utils.ListPool<byte>$$Get
// PDB: ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// Body: [[105cffe0, 105d05f5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __cdecl
ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared(int param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  MethodInfo *pMVar2;
  int iVar3;
  List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *pLVar4;
  Il2CppClass *pIVar5;

  pMVar2 = param_2;
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
    if (iVar3 == 0) {
      pIVar1 = param_2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data[2].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pLVar4 = (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)il2cpp_codegen_object_new(pIVar1)
      ;
      pIVar1 = param_2->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = param_2->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      (*(pIVar5->rgctx_data[6].method)->methodPointer)
                (pLVar4,param_1,pIVar1->rgctx_data[6].rgctxDataDummy);
      return pLVar4;
    }
    param_2 = (MethodInfo *)0x0;
    while( true ) {
      pIVar1 = pMVar2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      if (pIVar1->has_cctor != '\0') {
        pIVar1 = pMVar2->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        pIVar1 = pIVar1->rgctx_data->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        if (pIVar1->cctor_finished == 0) {
          pIVar1 = pMVar2->klass;
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
      pIVar1 = pMVar2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      iVar3 = *(int *)pIVar1->static_fields;
      if (iVar3 == 0) goto LAB_105d05f1;
      pIVar1 = pMVar2->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = pMVar2->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      iVar3 = (*(pIVar5->rgctx_data[4].method)->methodPointer)
                        (iVar3,param_2,pIVar1->rgctx_data[4].rgctxDataDummy);
      if (iVar3 == 0) goto LAB_105d05f1;
      pIVar1 = pMVar2->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = pMVar2->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      iVar3 = (*(pIVar5->rgctx_data[7].method)->methodPointer)
                        (iVar3,pIVar1->rgctx_data[7].rgctxDataDummy);
      if (param_1 <= iVar3) break;
      pIVar1 = pMVar2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      if (pIVar1->has_cctor != '\0') {
        pIVar1 = pMVar2->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        pIVar1 = pIVar1->rgctx_data->klass;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        }
        if (pIVar1->cctor_finished == 0) {
          pIVar1 = pMVar2->klass;
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
      pIVar1 = pMVar2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      iVar3 = *(int *)pIVar1->static_fields;
      if (iVar3 == 0) goto LAB_105d05f1;
      pIVar1 = pMVar2->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = pMVar2->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      iVar3 = (*(pIVar5->rgctx_data[1].method)->methodPointer)
                        (iVar3,pIVar1->rgctx_data[1].rgctxDataDummy);
      if (iVar3 + -1 <= (int)param_2) break;
      param_2 = (MethodInfo *)((int)&param_2->methodPointer + 1);
    }
    pIVar1 = pMVar2->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->has_cctor != '\0') {
      pIVar1 = pMVar2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      if (pIVar1->cctor_finished == 0) {
        pIVar1 = pMVar2->klass;
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
    pIVar1 = pMVar2->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    iVar3 = *(int *)pIVar1->static_fields;
    if (iVar3 != 0) {
      pIVar1 = pMVar2->klass;
      pIVar5 = pIVar1;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
        pIVar5 = pMVar2->klass;
      }
      if (pIVar5->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
      }
      pLVar4 = (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)
               (*(pIVar5->rgctx_data[4].method)->methodPointer)
                         (iVar3,param_2,pIVar1->rgctx_data[4].rgctxDataDummy);
      pIVar1 = pMVar2->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      pIVar1 = pIVar1->rgctx_data->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      iVar3 = *(int *)pIVar1->static_fields;
      if (iVar3 != 0) {
        pIVar1 = pMVar2->klass;
        pIVar5 = pIVar1;
        if (pIVar1->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
          pIVar5 = pMVar2->klass;
        }
        if (pIVar5->initialized_and_no_error == 0) {
          il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar5);
        }
        (*(pIVar5->rgctx_data[5].method)->methodPointer)
                  (iVar3,param_2,pIVar1->rgctx_data[5].rgctxDataDummy);
        return pLVar4;
      }
    }
  }
LAB_105d05f1:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
