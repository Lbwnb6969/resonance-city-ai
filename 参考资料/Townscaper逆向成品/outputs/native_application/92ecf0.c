// RVA 0x92ecf0 | FuryStudios.FurySDK.Internal.NoopAsyncRequest<ILeaderboard>$$.ctor
// PDB: NoopAsyncRequest_1__ctor_mD8B22BB2ED9D345F8FD29B23A039B3372787C40F_gshared
// Body: [[1092ecf0, 1092ed56]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 110d0630 PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0
// 1110b350 AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469

void __cdecl
NoopAsyncRequest_1__ctor_mD8B22BB2ED9D345F8FD29B23A039B3372787C40F_gshared
          (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *param_1,uint param_2,
          MethodInfo *param_3)

{
  MethodInfo *pMVar1;
  PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *pPVar2;

  if (DAT_1151facd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177_il2cpp_TypeInfo_var
              );
    DAT_1151facd = '\x01';
  }
  if (param_1 != (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *)0x0) {
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
