// RVA 0x110ad20 | FuryStudios.FurySDK.Internal.AsyncRequestScheduler$$AbortAll
// PDB: AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
// Body: [[1110ad20, 1110aed1]]
// Direct callees:
// 1003e420 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10456330 CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
// 10513690 Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
// 1110b1c0 AsyncRequest_Abort_mFB99C5B4F789C65F8C8BE5ADD6718E2BCFA00489
// 1110b620 AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2

void __cdecl
AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
          (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *param_1,
          MethodInfo *param_2)

{
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar1;
  bool bVar2;
  ushort uVar3;
  XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *pXVar4;
  VirtualInvokeData *pVVar5;
  int iVar6;
  XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *pXVar7;

  if (DAT_11523e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Queue_1_get_Count_m7263F1BC13342D3A68A2CDB7B96189FB9BE98ACA_RuntimeMethod_var
              );
    DAT_11523e7d = '\x01';
  }
  pQVar1 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___requestQueue_0;
  while (pQVar1 != (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) {
    if (pQVar1->____size_3 < 1) {
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
          param_1->___OnQueueCompleted_4 !=
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___OnQueueCompleted_4,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    if ((pQVar1 == (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)0x0) ||
       (pXVar4 = (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)
                 Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared
                           (pQVar1,
                            Queue_1_Dequeue_m51A252AB46FD8FDD25EEF78C13CA1310494E3948_RuntimeMethod_var
                           ),
       pXVar4 == (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)0x0)) break;
    iVar6 = pXVar4->_padding_;
    if ((*(byte *)(iVar6 + 0xb4) <
         AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
         typeHierarchyDepth) ||
       (*(Il2CppClass **)
         (*(int *)(iVar6 + 100) + -4 +
         (uint)AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var->
               typeHierarchyDepth * 4) !=
        AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12_il2cpp_TypeInfo_var)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pXVar7 = (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)0x0;
    if (bVar2) {
      pXVar7 = pXVar4;
    }
    uVar3 = 0;
    if (*(short *)(iVar6 + 0xb2) != 0) {
      do {
        if (*(Il2CppClass **)(*(int *)(iVar6 + 0x58) + (uint)uVar3 * 8) ==
            IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var) {
          pVVar5 = (VirtualInvokeData *)
                   (*(int *)(*(int *)(iVar6 + 0x58) + 4 + (uint)uVar3 * 8) * 8 + 0xbc +
                   pXVar4->_padding_);
          goto LAB_1110ae0e;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(pXVar4->_padding_ + 0xb2));
    }
    pVVar5 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pXVar4,
                        IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var,
                        0);
LAB_1110ae0e:
    iVar6 = (*pVVar5->methodPtr)(pXVar4,pVVar5->method);
    if (iVar6 == 0) {
      if (pXVar7 != (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)0x0) {
        AsyncRequest_Start_mCE4621F21063B7935EA90D20A8F3519E979D29D2
                  ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)pXVar7,
                   (MethodInfo *)0x0);
      }
      if ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
          param_1->___OnRequestStarted_2 !=
          (CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)0x0) {
        CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
                  ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
                   param_1->___OnRequestStarted_2,pXVar4,(MethodInfo *)0x0);
      }
    }
    iVar6 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                       ,(Il2CppObject *)pXVar4);
    if (((iVar6 != 2) &&
        (iVar6 = InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                            ,(Il2CppObject *)pXVar4), iVar6 != 4)) &&
       (pXVar7 != (XsdCachingReader_tBFD2DD7C1AC298C42EDBD6B67F6619A3536FB197 *)0x0)) {
      AsyncRequest_Abort_mFB99C5B4F789C65F8C8BE5ADD6718E2BCFA00489
                ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)pXVar7,(MethodInfo *)0x0)
      ;
    }
    if ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
        param_1->___OnRequestCompleted_3 !=
        (CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)0x0) {
      CachingEventHandler_Invoke_m445BFFA8E6A148A20EDAAD55342FE1E0173894F9
                ((CachingEventHandler_t53EB8C2CC328E85074A74C9FFFA60176491DB376 *)
                 param_1->___OnRequestCompleted_3,pXVar4,(MethodInfo *)0x0);
    }
    pQVar1 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)param_1->___requestQueue_0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
