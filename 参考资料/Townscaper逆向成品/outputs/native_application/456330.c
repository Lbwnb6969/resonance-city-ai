// RVA 0x456330 | FuryStudios.FurySDK.AsyncRequestCallback$$Invoke
// PDB: CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
// Body: [[10456330, 104566c8]]
// Direct callees:
// 1003e420 Invoke
// 10127570 il2cpp_array_length
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e510 MethodIsStatic
// 1018e730 il2cpp_codegen_get_generic_virtual_method_internal
// 1018ea60 il2cpp_codegen_method_is_generic_instance
// 1018ea70 il2cpp_codegen_method_is_interface_method
// 1018ead0 il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found

void __cdecl
CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
          (CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *param_1,
          XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *param_2,MethodInfo *param_3)

{
  ushort uVar1;
  CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *pCVar2;
  code *pcVar3;
  Il2CppObject *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  ushort uVar7;
  VirtualInvokeData *pVVar8;
  MethodInfo *pMVar9;
  Il2CppClass *pIVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 **ppCVar14;
  XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *pXVar15;
  XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *pXVar16;
  uint local_c;

  iVar13 = *(int *)&param_1->field_0x34;
  if (iVar13 == 0) {
    uVar12 = 1;
    ppCVar14 = &param_1;
  }
  else {
    uVar12 = *(uint *)(iVar13 + 0xc);
    ppCVar14 = (CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 **)(iVar13 + 0x10);
  }
  local_c = 0;
  pXVar16 = param_2;
  if (uVar12 != 0) {
    do {
      pCVar2 = ppCVar14[local_c];
      pcVar3 = *(code **)&pCVar2->field_0x8;
      pIVar4 = *(Il2CppObject **)&pCVar2->field_0x10;
      pMVar9 = *(MethodInfo **)&pCVar2->field_0x14;
      if (pMVar9->slot == 0xffff) {
        il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(pMVar9);
      }
      bVar6 = MethodIsStatic(pMVar9);
      if (bVar6) {
        if (pMVar9->parameters_count == '\x01') goto LAB_104566a4;
        (*pcVar3)(pIVar4);
      }
      else if (pMVar9->parameters_count == '\x01') {
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_104566a4;
        if (((pMVar9->slot == 0xffff) || ((((pIVar4->field0_0x0).klass)->flags >> 8 & 1) != 0)) ||
           (*(int *)&param_1->field_0xc == 0)) {
          (*pcVar3)(pIVar4,pXVar16,pMVar9);
        }
        else {
          bVar6 = il2cpp_codegen_method_is_generic_instance(pMVar9);
          if (bVar6) {
            bVar6 = il2cpp_codegen_method_is_interface_method(pMVar9);
            uVar11 = pMVar9->slot;
            if (bVar6) {
              uVar7 = 0;
              uVar1 = ((pIVar4->field0_0x0).klass)->interface_offsets_count;
              if (uVar1 != 0) {
                do {
                  pXVar16 = param_2;
                  if (((pIVar4->field0_0x0).klass)->interfaceOffsets[uVar7].interfaceType ==
                      pMVar9->klass) {
                    pVVar8 = (VirtualInvokeData *)
                             (&((pIVar4->field0_0x0).klass)->field_0xbc +
                             (((pIVar4->field0_0x0).klass)->interfaceOffsets[uVar7].offset +
                             (uint)uVar11) * 8);
                    goto LAB_10456591;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar1);
              }
              pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                 (pIVar4,pMVar9->klass,uVar11);
LAB_10456591:
              pMVar9 = il2cpp_codegen_get_generic_virtual_method_internal(pVVar8->method,pMVar9);
              (*pMVar9->methodPointer)(pIVar4,pXVar16,pMVar9);
            }
            else {
              pMVar9 = il2cpp_codegen_get_generic_virtual_method_internal
                                 ((MethodInfo *)
                                  (&(pIVar4->field0_0x0).klass[1].image)[(uint)uVar11 * 2],pMVar9);
              (*pMVar9->methodPointer)(pIVar4,pXVar16,pMVar9);
            }
          }
          else {
            bVar6 = il2cpp_codegen_method_is_interface_method(pMVar9);
            if (bVar6) {
              pIVar10 = (Il2CppClass *)il2cpp_array_length((Il2CppArray *)pMVar9);
              uVar11 = 0;
              if (((pIVar4->field0_0x0).klass)->interface_offsets_count != 0) {
                pIVar5 = ((pIVar4->field0_0x0).klass)->interfaceOffsets;
                do {
                  if (pIVar5[uVar11].interfaceType == pIVar10) {
                    iVar13 = pIVar5[uVar11].offset + (uint)pMVar9->slot;
                    (**(code **)(&((pIVar4->field0_0x0).klass)->field_0xbc + iVar13 * 8))
                              (pIVar4,pXVar16,(&(pIVar4->field0_0x0).klass[1].image)[iVar13 * 2]);
                    goto LAB_104566aa;
                  }
                  uVar11 = uVar11 + 1;
                  pXVar16 = param_2;
                } while (uVar11 < ((pIVar4->field0_0x0).klass)->interface_offsets_count);
              }
              pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                 (pIVar4,pIVar10,pMVar9->slot);
              (*pVVar8->methodPtr)(pIVar4,pXVar16,pVVar8->method);
            }
            else {
              (**(code **)(&((pIVar4->field0_0x0).klass)->field_0xbc + (uint)pMVar9->slot * 8))
                        (pIVar4,pXVar16,
                         (&(pIVar4->field0_0x0).klass[1].image)[(uint)pMVar9->slot * 2]);
            }
          }
        }
      }
      else if ((pMVar9->slot == 0xffff) || (*(int *)&param_1->field_0xc == 0)) {
LAB_104566a4:
        (*pcVar3)(pXVar16,pMVar9);
      }
      else {
        bVar6 = il2cpp_codegen_method_is_generic_instance(pMVar9);
        if (bVar6) {
          bVar6 = il2cpp_codegen_method_is_interface_method(pMVar9);
          uVar11 = pMVar9->slot;
          if (bVar6) {
            uVar7 = 0;
            uVar1 = ((Il2CppObject_u_0 *)&pXVar16->_padding_)->klass->interface_offsets_count;
            pXVar15 = pXVar16;
            if (uVar1 != 0) {
              do {
                if (((Il2CppObject_u_0 *)&pXVar16->_padding_)->klass->interfaceOffsets[uVar7].
                    interfaceType == pMVar9->klass) {
                  pVVar8 = (VirtualInvokeData *)
                           (param_2->_padding_ + 0xbc +
                           (*(int *)(*(int *)(param_2->_padding_ + 0x58) + 4 + (uint)uVar7 * 8) +
                           (uint)uVar11) * 8);
                  pXVar16 = param_2;
                  goto LAB_1045644c;
                }
                uVar7 = uVar7 + 1;
                pXVar15 = param_2;
              } while (uVar7 < uVar1);
            }
            pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                               ((Il2CppObject *)pXVar15,pMVar9->klass,uVar11);
            pXVar16 = pXVar15;
LAB_1045644c:
            pMVar9 = il2cpp_codegen_get_generic_virtual_method_internal(pVVar8->method,pMVar9);
            (*pMVar9->methodPointer)(pXVar16,pMVar9);
          }
          else {
            pMVar9 = il2cpp_codegen_get_generic_virtual_method_internal
                               ((MethodInfo *)
                                (&((Il2CppObject_u_0 *)&pXVar16->_padding_)->klass[1].image)
                                [(uint)uVar11 * 2],pMVar9);
            (*pMVar9->methodPointer)(pXVar16,pMVar9);
          }
        }
        else {
          bVar6 = il2cpp_codegen_method_is_interface_method(pMVar9);
          if (bVar6) {
            pXVar15 = pXVar16;
            pIVar10 = (Il2CppClass *)il2cpp_array_length((Il2CppArray *)pMVar9);
            InterfaceFuncInvoker0<int>::Invoke(pMVar9->slot,pIVar10,(Il2CppObject *)pXVar15);
          }
          else {
            (**(code **)(&((Il2CppObject_u_0 *)&pXVar16->_padding_)->klass->field_0xbc +
                        (uint)pMVar9->slot * 8))
                      (pXVar16,(&((Il2CppObject_u_0 *)&pXVar16->_padding_)->klass[1].image)
                               [(uint)pMVar9->slot * 2]);
          }
        }
      }
LAB_104566aa:
      local_c = local_c + 1;
    } while (local_c < uVar12);
  }
  return;
}
