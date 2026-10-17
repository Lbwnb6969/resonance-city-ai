// RVA 0x92ec40 | FuryStudios.FurySDK.Internal.NoopAsyncRequest<bool>$$.ctor
// PDB: NoopAsyncRequest_1__ctor_m06B99BD6DA2AF54A637613A7174A9A4094C9F2A5_gshared
// Body: [[1092ec40, 1092eca6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 110d0630 PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0
// 1110b350 AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469

void __cdecl
NoopAsyncRequest_1__ctor_m06B99BD6DA2AF54A637613A7174A9A4094C9F2A5_gshared
          (NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26 *param_1,uint param_2,
          MethodInfo *param_3)

{
  MethodInfo *pMVar1;
  PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *pPVar2;

  if (DAT_1151facc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177_il2cpp_TypeInfo_var
              );
    DAT_1151facc = '\x01';
  }
  if (param_1 != (NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26 *)0x0) {
    pMVar1 = param_3->klass->rgctx_data->method;
    (*pMVar1->methodPointer)(param_1,pMVar1);
    pPVar2 = (PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *)
             il2cpp_codegen_object_new
                       (
                       PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177_il2cpp_TypeInfo_var
                       );
    PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0
              (pPVar2,param_2,(MethodInfo *)0x0);
    AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
              ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,
               (Exception_t *)pPVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
