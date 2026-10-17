// RVA 0x110e680 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsSaveRequest.<>c__DisplayClass4_0$$<OnStarted>b__0
// PDB: U3CU3Ec__DisplayClass4_0_U3COnStartedU3Eb__0_m940F9D4B62C38391FD5632EDB480833CFEBBEBA7
// Body: [[1110e680, 1110e782]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906

void __cdecl
U3CU3Ec__DisplayClass4_0_U3COnStartedU3Eb__0_m940F9D4B62C38391FD5632EDB480833CFEBBEBA7
          (U3CU3Ec__DisplayClass4_0_tF72B5697059955914FE0235DDBBE767E89433600 *param_1,
          MethodInfo *param_2)

{
  PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB *pPVar1;
  int iVar2;

  if (DAT_11523eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    DAT_11523eae = '\x01';
  }
  if (param_1->___storageRequest_0 != (Il2CppObject *)0x0) {
    iVar2 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                       ,param_1->___storageRequest_0);
    pPVar1 = param_1->___U3CU3E4__this_1;
    if (iVar2 == 4) {
      if ((param_1->___storageRequest_0 != (Il2CppObject *)0x0) &&
         (iVar2 = InterfaceFuncInvoker0<int>::Invoke
                            (1,
                             IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                             ,param_1->___storageRequest_0),
         pPVar1 != (PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB *)0x0)) {
        if (pPVar1->_padding_ == 2) {
          return;
        }
        if (pPVar1->_padding_ == 4) {
          return;
        }
        pPVar1->_padding_ = iVar2;
        pPVar1->_padding_ = 4;
        (**(code **)(pPVar1->_padding_ + 0x13c))(pPVar1,*(undefined4 *)(pPVar1->_padding_ + 0x140));
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar1->_padding_ ==
            (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          return;
        }
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar1->_padding_
                   ,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pPVar1 != (PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB *)0x0) {
      if ((pPVar1->_padding_ != 2) && (pPVar1->_padding_ != 4)) {
        pPVar1->_padding_ = 2;
        (**(code **)(pPVar1->_padding_ + 0x13c))(pPVar1,*(undefined4 *)(pPVar1->_padding_ + 0x140));
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar1->_padding_ !=
            (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     pPVar1->_padding_,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
