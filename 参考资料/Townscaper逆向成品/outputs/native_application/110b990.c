// RVA 0x110b990 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$OpenURL
// PDB: BasePlatformSDK_OpenURL_mC36DB860738B23990AA8E1A18C83F111A6339A47
// Body: [[1110b990, 1110baa9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10a35b80 Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E
// 110d0630 PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0

Il2CppObject * __cdecl
BasePlatformSDK_OpenURL_mC36DB860738B23990AA8E1A18C83F111A6339A47
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  char cVar1;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar2;
  PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *pPVar3;

  if (DAT_11523e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       CompletedAsyncRequest_tF8DF986264535D4928A391FD6DCEFD23D37B26B2_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    DAT_11523e8c = '\x01';
  }
  cVar1 = (**(code **)(param_1->_padding_ + 0x27c))
                    (param_1,0x2000,*(undefined4 *)(param_1->_padding_ + 0x280));
  if (cVar1 == '\0') {
    pUVar2 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
             il2cpp_codegen_object_new
                       (
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                       );
    if (DAT_11523e98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177_il2cpp_TypeInfo_var
                );
      DAT_11523e98 = '\x01';
    }
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              (pUVar2,(MethodInfo *)0x0);
    pUVar2->___U3CU3E1__state_0 = 0;
    pPVar3 = (PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *)
             il2cpp_codegen_object_new
                       (
                       PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177_il2cpp_TypeInfo_var
                       );
    PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0
              (pPVar3,0x2000,(MethodInfo *)0x0);
    if ((pUVar2->___U3CU3E1__state_0 != 2) && (pUVar2->___U3CU3E1__state_0 != 4)) {
      pUVar2->___U3CU3E2__current_1 = (Il2CppObject *)pPVar3;
      pUVar2->___U3CU3E1__state_0 = 4;
      (**(code **)(pUVar2->_padding_ + 0x13c))(pUVar2,*(undefined4 *)(pUVar2->_padding_ + 0x140));
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pUVar2->___U3CU3E4__this_2
          != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   pUVar2->___U3CU3E4__this_2,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)pUVar2;
  }
  Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(param_2,(MethodInfo *)0x0);
  pUVar2 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     CompletedAsyncRequest_tF8DF986264535D4928A391FD6DCEFD23D37B26B2_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar2,(MethodInfo *)0x0);
  pUVar2->___U3CU3E1__state_0 = 0;
  return (Il2CppObject *)pUVar2;
}
