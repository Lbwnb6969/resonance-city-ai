// RVA 0xc9f6b0 | FuryStudios.FurySDK.Internal.AsyncRequest<IList<string>>$$Success
// PDB: AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared
// Body: [[10c9f6b0, 10c9f6e1]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110b700 AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1

void __cdecl
AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared
          (AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *param_1,bool param_2,
          MethodInfo *param_3)

{
  MethodInfo *pMVar1;
  undefined3 in_stack_00000009;

  if (param_1 != (AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *)0x0) {
    pMVar1 = param_3->klass->rgctx_data->method;
    (*pMVar1->methodPointer)(param_1,_param_2,pMVar1);
    AsyncRequest_Success_mD7A9F46B76A84F8251EF08BEDC0780C9D6F4BEF1
              ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
