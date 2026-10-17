// RVA 0x110a930 | FuryStudios.FurySDK.Internal.AsyncRequestChain$$OnUpdate
// PDB: AsyncRequestChain_OnUpdate_mF5ED64C6EEBF25BFEE0E4F90683F6C5ECA39790D
// Body: [[1110a930, 1110acaa]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10513690 Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
// 105139f0 Queue_1_Peek_m0200A0B0E9EDA50F0A67185D38B6664BA833F34D_gshared
// 1110b350 AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
// 1110b430 AsyncRequest_MoveNext_m4151FEF04945D82CC510A58F840F0BDAA7D783F3
// 1110b620 AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2
// 1110b700 AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1

void __cdecl
AsyncRequestChain_OnUpdate_mF5ED64C6EEBF25BFEE0E4F90683F6C5ECA39790D
          (AsyncRequestChain_tA0F1F24B7A14369AB4C847C2FB00E7093C1771C2 *param_1,MethodInfo *param_2)

{
  byte bVar1;
  byte bVar2;
  Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *pQVar3;
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar4;
  char cVar5;
  bool bVar6;
  AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *pAVar7;
  int iVar8;
  AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *pAVar9;
  Exception_t *pEVar10;

  if (DAT_11523e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Peek_m8E67B0F4C8EDD50659B98953B4CDFC6FC922E5E8_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Queue_1_get_Count_m7263F1BC13342D3A68A2CDB7B96189FB9BE98ACA_RuntimeMethod_var
              );
    DAT_11523e79 = '\x01';
  }
  pQVar3 = (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___childRequests_6;
  if (param_1->___failed_7 == false) {
    if (pQVar3 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
      if (pQVar3->____size_3 == 0) {
LAB_1110aacc:
        AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1
                  ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,
                   (MethodInfo *)0x0);
        return;
      }
      if ((pQVar3 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) &&
         (pAVar7 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)
                   Queue_1_Peek_m0200A0B0E9EDA50F0A67185D38B6664BA833F34D_gshared
                             (pQVar3,
                              Queue_1_Peek_m8E67B0F4C8EDD50659B98953B4CDFC6FC922E5E8_RuntimeMethod_var
                             ),
         pAVar7 != (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0)) {
        if ((((Il2CppObject_u_0 *)&pAVar7->_padding_)->klass->typeHierarchyDepth <
             AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
             typeHierarchyDepth) ||
           (((Il2CppObject_u_0 *)&pAVar7->_padding_)->klass->typeHierarchy
            [AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
             typeHierarchyDepth - 1] !=
            AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pAVar9 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0;
        if (bVar6) {
          pAVar9 = pAVar7;
        }
        if ((pAVar9 != (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0) &&
           (iVar8 = InterfaceFuncInvoker0<int>::Invoke
                              (0,
                               IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                               ,(Il2CppObject *)pAVar7), iVar8 == 0)) {
          bVar1 = ((Il2CppObject_u_0 *)&pAVar7->_padding_)->klass->typeHierarchyDepth;
          bVar2 = AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
                  typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             (((Il2CppObject_u_0 *)&pAVar7->_padding_)->klass->typeHierarchy[bVar2 - 1] !=
              AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pAVar9 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0;
          if (bVar6) {
            pAVar9 = pAVar7;
          }
          if (pAVar9 == (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0)
          goto LAB_1110aca6;
          if ((bVar1 < bVar2) ||
             (((Il2CppObject_u_0 *)&pAVar7->_padding_)->klass->typeHierarchy[bVar2 - 1] !=
              AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pAVar9 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0;
          if (bVar6) {
            pAVar9 = pAVar7;
          }
          AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2(pAVar9,(MethodInfo *)0x0);
        }
        iVar8 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                           ,(Il2CppObject *)pAVar7);
        if ((char)iVar8 != '\0') {
          return;
        }
        if ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___childRequests_6 !=
            (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) {
          Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
                    ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
                     param_1->___childRequests_6,
                     Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var);
          iVar8 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                             ,(Il2CppObject *)pAVar7);
          if (iVar8 == 4) {
            param_1->___failed_7 = true;
            pEVar10 = (Exception_t *)
                      InterfaceFuncInvoker0<int>::Invoke
                                (1,
                                 IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                                 ,(Il2CppObject *)pAVar7);
            param_1->___error_8 = pEVar10;
            if (param_1->___childRequests_6 !=
                (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)0x0) {
              if (param_1->___childRequests_6->____size_3 != 0) {
                return;
              }
              AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
                        ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,pEVar10,
                         (MethodInfo *)0x0);
              return;
            }
          }
          else if (param_1->___childRequests_6 !=
                   (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)0x0) {
            if (param_1->___childRequests_6->____size_3 != 0) {
              return;
            }
            goto LAB_1110aacc;
          }
        }
      }
    }
  }
  else if (pQVar3 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
    if (pQVar3->____size_3 == 0) {
      AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
                ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,
                 param_1->___error_8,(MethodInfo *)0x0);
      return;
    }
    if (pQVar3 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
      pAVar7 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)
               Queue_1_Peek_m0200A0B0E9EDA50F0A67185D38B6664BA833F34D_gshared
                         (pQVar3,
                          Queue_1_Peek_m8E67B0F4C8EDD50659B98953B4CDFC6FC922E5E8_RuntimeMethod_var);
      if (pAVar7 != (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0)
      goto LAB_1110ab47;
      pAVar9 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0;
      while ((pAVar9 == (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0 ||
             (cVar5 = (**(code **)(pAVar9->_padding_ + 0x114))
                                (pAVar9,*(undefined4 *)(pAVar9->_padding_ + 0x118)), cVar5 == '\0'))
            ) {
        pQVar4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___childRequests_6;
        if (pQVar4 == (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) goto LAB_1110aca6;
        if (pQVar4->____size_3 < 2) break;
        Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
                  (pQVar4,
                   Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var);
        if ((Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___childRequests_6 ==
            (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) goto LAB_1110aca6;
        pAVar7 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)
                 Queue_1_Peek_m0200A0B0E9EDA50F0A67185D38B6664BA833F34D_gshared
                           ((Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)
                            param_1->___childRequests_6,
                            Queue_1_Peek_m8E67B0F4C8EDD50659B98953B4CDFC6FC922E5E8_RuntimeMethod_var
                           );
        if (pAVar7 == (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0) {
          pAVar9 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0;
        }
        else {
LAB_1110ab47:
          if ((*(byte *)(pAVar7->_padding_ + 0xb4) <
               AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
               typeHierarchyDepth) ||
             (*(Il2CppClass **)
               (*(int *)(pAVar7->_padding_ + 100) + -4 +
               (uint)AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
                     typeHierarchyDepth * 4) !=
              AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pAVar9 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0;
          if (bVar6) {
            pAVar9 = pAVar7;
          }
        }
      }
      if ((pAVar9 != (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)0x0) &&
         (cVar5 = (**(code **)(pAVar9->_padding_ + 0x114))
                            (pAVar9,*(undefined4 *)(pAVar9->_padding_ + 0x118)), cVar5 != '\0')) {
        if (pAVar9->___U3CStateU3Ek__BackingField_0 == 0) {
          AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2(pAVar9,(MethodInfo *)0x0);
        }
        bVar6 = AsyncRequest_MoveNext_m4151FEF04945D82CC510A58F840F0BDAA7D783F3
                          (pAVar9,(MethodInfo *)0x0);
        if (!bVar6) {
          if ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___childRequests_6 ==
              (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) goto LAB_1110aca6;
          Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
                    ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
                     param_1->___childRequests_6,
                     Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var);
        }
        if (param_1->___childRequests_6 == (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)0x0)
        goto LAB_1110aca6;
        if (param_1->___childRequests_6->____size_3 != 0) {
          return;
        }
      }
      if (param_1->_padding_ == 2) {
        return;
      }
      if (param_1->_padding_ != 4) {
        param_1->_padding_ = (int)param_1->___error_8;
        param_1->_padding_ = 4;
        (**(code **)(param_1->_padding_ + 0x13c))
                  (param_1,*(undefined4 *)(param_1->_padding_ + 0x140));
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->_padding_ !=
            (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     param_1->_padding_,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      return;
    }
  }
LAB_1110aca6:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
