// RVA 0xc9f640 | FuryStudios.FurySDK.Internal.AsyncRequest<bool>$$ContinueWith
// PDB: AsyncRequest_1_ContinueWith_m248D8AC224B6E1F1DEC428FF7335C7E287E8D309_gshared
// Body: [[10c9f640, 10c9f6a7]]
// Direct callees:
// 1015daa0 InitFromCodegenSlow
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 * __cdecl
AsyncRequest_1_ContinueWith_m248D8AC224B6E1F1DEC428FF7335C7E287E8D309_gshared
          (AsyncRequest_1_tC5FD169BBC412E33E2DFD5A46A7E1A7020F64918 *param_1,
          AsyncRequestCallback_1_tC6D31F1527DD99EE2F9E411AF07FAD274F62B051 *param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  MethodInfo *pMVar2;
  Il2CppObject *pIVar3;
  AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *pAVar4;

  pIVar1 = param_3->klass->rgctx_data[1].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  pIVar3 = il2cpp_codegen_object_new(pIVar1);
  pMVar2 = param_3->klass->rgctx_data[2].method;
  (*pMVar2->methodPointer)(pIVar3,param_2,param_1,pMVar2);
  if (param_1 != (AsyncRequest_1_tC5FD169BBC412E33E2DFD5A46A7E1A7020F64918 *)0x0) {
    pAVar4 = (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)
             (**(code **)(param_1->_padding_ + 0x11c))
                       (param_1,pIVar3,*(undefined4 *)(param_1->_padding_ + 0x120));
    return pAVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
