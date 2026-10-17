// RVA 0x92ecb0 | FuryStudios.FurySDK.Internal.NoopAsyncRequest<IList<string>>$$.ctor
// PDB: NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared
// Body: [[1092ecb0, 1092ece1]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110b3a0 AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48

void __cdecl
NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared
          (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  MethodInfo *pMVar1;

  if (param_1 != (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *)0x0) {
    pMVar1 = param_3->klass->rgctx_data->method;
    (*pMVar1->methodPointer)(param_1,pMVar1);
    AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48
              ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,param_2,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
