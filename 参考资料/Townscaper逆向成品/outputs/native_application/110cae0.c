// RVA 0x110cae0 | FuryStudios.FurySDK.Internal.NoopAsyncRequest$$.ctor
// PDB: NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012
// Body: [[1110cae0, 1110cb6f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 110d0630 PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0

void __cdecl
NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012
          (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *param_1,uint param_2,
          MethodInfo *param_3)

{
  PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *pPVar1;

  if (DAT_11523e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177_il2cpp_TypeInfo_var
              );
    DAT_11523e98 = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  *(undefined4 *)&param_1->field_0x8 = 0;
  pPVar1 = (PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 *)
           il2cpp_codegen_object_new
                     (
                     PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177_il2cpp_TypeInfo_var
                     );
  PlatformFeatureNotSupportedException__ctor_m1F5519539F100B51312B49E56A867204F1EDF2D0
            (pPVar1,param_2,(MethodInfo *)0x0);
  if ((*(int *)&param_1->field_0x8 != 2) && (*(int *)&param_1->field_0x8 != 4)) {
    *(PlatformFeatureNotSupportedException_tA70444F739DAF000CC7C3E5F24A3DF19C6115177 **)
     &param_1->field_0xc = pPVar1;
    *(undefined4 *)&param_1->field_0x8 = 4;
    (**(code **)(*(int *)param_1 + 0x13c))(param_1,*(undefined4 *)(*(int *)param_1 + 0x140));
    if (*(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)&param_1->field_0x10 !=
        (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                (*(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
                  &param_1->field_0x10,(MethodInfo *)0x0);
    }
  }
  return;
}
