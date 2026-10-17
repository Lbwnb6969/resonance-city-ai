// RVA 0x110af40 | FuryStudios.FurySDK.Internal.AsyncRequestScheduler$$Update
// PDB: AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73
// Body: [[1110af40, 1110b0d6]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10456330 CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
// 10513690 Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
// 105139f0 Queue_1_Peek_m0200A0B0E9EDA50F0A67185D38B6664BA833F34D_gshared
// 1110b620 AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2

void __cdecl
AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73
          (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *param_1,
          MethodInfo *param_2)

{
  bool bVar1;
  Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *pQVar2;
  XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *pXVar3;
  int iVar4;
  XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *pXVar5;

  if (DAT_11523e7b == '\0') {
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
    DAT_11523e7b = '\x01';
  }
  pQVar2 = (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___requestQueue_0;
  if (pQVar2 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) {
    if (pQVar2->____size_3 == 0) {
      return;
    }
    do {
      if (pQVar2->____size_3 < 1) {
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
            param_1->___OnQueueCompleted_4 ==
            (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          return;
        }
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___OnQueueCompleted_4,(MethodInfo *)0x0);
        return;
      }
      if (pQVar2 == (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0) break;
      pXVar3 = (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)
               Queue_1_Peek_m0200A0B0E9EDA50F0A67185D38B6664BA833F34D_gshared
                         (pQVar2,
                          Queue_1_Peek_m8E67B0F4C8EDD50659B98953B4CDFC6FC922E5E8_RuntimeMethod_var);
      if (pXVar3 == (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)0x0) {
        if ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___requestQueue_0 ==
            (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) break;
        Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
                  ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___requestQueue_0,
                   Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var);
      }
      else {
        if ((*(byte *)(pXVar3->_padding_ + 0xb4) <
             AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
             typeHierarchyDepth) ||
           (*(Il2CppClass **)
             (*(int *)(pXVar3->_padding_ + 100) + -4 +
             (uint)AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
                   typeHierarchyDepth * 4) !=
            AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        pXVar5 = (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)0x0;
        if (bVar1) {
          pXVar5 = pXVar3;
        }
        iVar4 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                           ,(Il2CppObject *)pXVar3);
        if (iVar4 == 0) {
          if (pXVar5 != (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)0x0) {
            AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2
                      ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)pXVar5,
                       (MethodInfo *)0x0);
          }
          if ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
              param_1->___OnRequestStarted_2 !=
              (CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)0x0) {
            CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
                      ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
                       param_1->___OnRequestStarted_2,pXVar3,(MethodInfo *)0x0);
          }
        }
        InterfaceFuncInvoker0<int>::Invoke
                  (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                   (Il2CppObject *)pXVar3);
        iVar4 = InterfaceFuncInvoker0<int>::Invoke
                          (0,
                           IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                           ,(Il2CppObject *)pXVar3);
        if (iVar4 == 1) {
          return;
        }
        if ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___requestQueue_0 ==
            (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) break;
        Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
                  ((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___requestQueue_0,
                   Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var);
        if ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
            param_1->___OnRequestCompleted_3 !=
            (CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)0x0) {
          CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
                    ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
                     param_1->___OnRequestCompleted_3,pXVar3,(MethodInfo *)0x0);
        }
      }
      pQVar2 = (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)param_1->___requestQueue_0;
    } while (pQVar2 != (Queue_1_t8E6EF552233A7A5C1A2718F5CC554044887CF616 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
