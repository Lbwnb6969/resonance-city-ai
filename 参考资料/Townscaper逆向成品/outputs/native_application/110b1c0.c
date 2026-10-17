// RVA 0x110b1c0 | FuryStudios.FurySDK.Internal.AsyncRequest$$Abort
// PDB: AsyncRequest_Abort_mFB99C5B4F789C65F8C8BE5ADD6718E2BCFA00489
// Body: [[1110b1c0, 1110b28b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10a6be20 Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B

void __cdecl
AsyncRequest_Abort_mFB99C5B4F789C65F8C8BE5ADD6718E2BCFA00489
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,MethodInfo *param_2)

{
  Exception_t *pEVar1;

  if (DAT_11523e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequestAbortException_t30367006BF25A2DC85C8F213C5A66F5571F32DFC_il2cpp_TypeInfo_var
              );
    DAT_11523e73 = '\x01';
  }
  if (param_1->___U3CStateU3Ek__BackingField_0 == 1) {
    pEVar1 = (Exception_t *)
             il2cpp_codegen_object_new
                       (
                       AsyncRequestAbortException_t30367006BF25A2DC85C8F213C5A66F5571F32DFC_il2cpp_TypeInfo_var
                       );
    if (DAT_11523e76 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata((uint *)&Exception_t_il2cpp_TypeInfo_var);
      DAT_11523e76 = '\x01';
    }
    if ((Exception_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Exception_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Exception_t_il2cpp_TypeInfo_var);
    }
    Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(pEVar1,(MethodInfo *)0x0);
    if ((param_1->___U3CStateU3Ek__BackingField_0 != 2) &&
       (param_1->___U3CStateU3Ek__BackingField_0 != 4)) {
      param_1->___U3CErrorU3Ek__BackingField_1 = pEVar1;
      param_1->___U3CStateU3Ek__BackingField_0 = 4;
      (**(code **)(param_1->_padding_ + 0x13c))(param_1,*(undefined4 *)(param_1->_padding_ + 0x140))
      ;
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___OnComplete_2
          != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___OnComplete_2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}
