// RVA 0x9a2090 | FuryStudios.FurySDK.Internal.CallbackAsyncRequest<bool>$$OnStarted
// PDB: CallbackAsyncRequest_1_OnStarted_m683C4C6C322E8CD64874E1222447575C011D4EED_gshared
// Body: [[109a2090, 109a2125]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110b350 AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
// 1110b700 AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1

void __cdecl
CallbackAsyncRequest_1_OnStarted_m683C4C6C322E8CD64874E1222447575C011D4EED_gshared
          (CallbackAsyncRequest_1_t61B6B21D13AE37C9A3ED6C3014F91FB5FD1DCB05 *param_1,
          MethodInfo *param_2)

{
  MethodInfo *pMVar1;
  int iVar2;
  Exception_t *pEVar3;

  if (DAT_1151fe32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    DAT_1151fe32 = '\x01';
  }
  if (param_1->___callback_6 !=
      (AsyncRequestCallback_1_t681CB56DB736B714A38B3C8939A302D6A797F386 *)0x0) {
    pMVar1 = param_2->klass->rgctx_data->method;
    (*pMVar1->methodPointer)(param_1->___callback_6,param_1->___parent_7,pMVar1);
  }
  if (param_1->___parent_7 != (Il2CppObject *)0x0) {
    iVar2 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                       ,param_1->___parent_7);
    if (iVar2 == 2) {
      AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1
                ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,(MethodInfo *)0x0
                );
      return;
    }
    if (param_1->___parent_7 != (Il2CppObject *)0x0) {
      pEVar3 = (Exception_t *)
               InterfaceFuncInvoker0<int>::Invoke
                         (1,
                          IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                          ,param_1->___parent_7);
      AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
                ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,pEVar3,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
