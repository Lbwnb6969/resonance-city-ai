// RVA 0x110b3a0 | FuryStudios.FurySDK.Internal.AsyncRequest$$Fail
// PDB: AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48
// Body: [[1110b3a0, 1110b420]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10a6be40 Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11

void __cdecl
AsyncRequest_Fail_mC453143EEAABA8F1FDAA506285CC65EAD51FAD48
          (AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  Exception_t *pEVar1;

  if (DAT_11523e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Exception_t_il2cpp_TypeInfo_var);
    DAT_11523e74 = '\x01';
  }
  pEVar1 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
  Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(pEVar1,param_2,(MethodInfo *)0x0);
  if ((param_1->___U3CStateU3Ek__BackingField_0 != 2) &&
     (param_1->___U3CStateU3Ek__BackingField_0 != 4)) {
    param_1->___U3CErrorU3Ek__BackingField_1 = pEVar1;
    param_1->___U3CStateU3Ek__BackingField_0 = 4;
    (**(code **)(param_1->_padding_ + 0x13c))(param_1,*(undefined4 *)(param_1->_padding_ + 0x140));
    if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___OnComplete_2 !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___OnComplete_2,(MethodInfo *)0x0);
    }
  }
  return;
}
