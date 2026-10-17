// RVA 0x110ccd0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$DeleteKey
// PDB: PlatformPlayerPrefs_DeleteKey_m1036E01805C3948BBCB6977641005016B91F2E24
// Body: [[1110ccd0, 1110ce02]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10cf7660 Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared
// 10fc13d0 Dictionary_2_Remove_m6F693FCB7B517EA7E1B04E63E9973C04B5100395_gshared
// 10ffea90 Dictionary_2_Remove_m1E56E91A9BB341EE54712AF20BAF2ADC09D267A0_gshared
// 10ffecc0 Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared

void __cdecl
PlatformPlayerPrefs_DeleteKey_m1036E01805C3948BBCB6977641005016B91F2E24
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *pDVar1;
  Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *pDVar2;
  Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *pDVar3;
  Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *pDVar4;
  bool bVar5;

  if (DAT_11523e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_ContainsKey_m1005090BED3DCBC26613EC3A32F04FB3EF0CB73E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_ContainsKey_m151DB8CAF2F65A4621317E77AC025849F03D8132_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m105F8AD7F5E827D6F95768BD6C922EB155E5A7EF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m5A3F6460316A1214AE1141593B196EBF58E3E6D1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m7F73890E7536F7B562942068CC58EBAC01E1C09B_RuntimeMethod_var
              );
    DAT_11523e9e = '\x01';
  }
  if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
     && (pDVar1 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                  param_1->___data_0->___savedInt_0,
        pDVar1 != (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0)) {
    bVar5 = Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared
                      (pDVar1,(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_2,
                       Dictionary_2_ContainsKey_m151DB8CAF2F65A4621317E77AC025849F03D8132_RuntimeMethod_var
                      );
    if (bVar5) {
      if ((param_1->___data_0 ==
           (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) ||
         (pDVar2 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)
                   param_1->___data_0->___savedInt_0,
         pDVar2 == (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)0x0))
      goto LAB_1110cdfe;
      Dictionary_2_Remove_m1E56E91A9BB341EE54712AF20BAF2ADC09D267A0_gshared
                (pDVar2,(Il2CppObject *)param_2,
                 Dictionary_2_Remove_m105F8AD7F5E827D6F95768BD6C922EB155E5A7EF_RuntimeMethod_var);
    }
    if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
       && (pDVar1 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                    param_1->___data_0->___savedFloat_1,
          pDVar1 != (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0)) {
      bVar5 = Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared
                        (pDVar1,(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_2,
                         Dictionary_2_ContainsKey_m1005090BED3DCBC26613EC3A32F04FB3EF0CB73E_RuntimeMethod_var
                        );
      if (bVar5) {
        if ((param_1->___data_0 ==
             (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) ||
           (pDVar3 = (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *)
                     param_1->___data_0->___savedFloat_1,
           pDVar3 == (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *)0x0))
        goto LAB_1110cdfe;
        Dictionary_2_Remove_m6F693FCB7B517EA7E1B04E63E9973C04B5100395_gshared
                  (pDVar3,(Il2CppObject *)param_2,
                   Dictionary_2_Remove_m7F73890E7536F7B562942068CC58EBAC01E1C09B_RuntimeMethod_var);
      }
      if ((param_1->___data_0 !=
           (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) &&
         (pDVar1 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                   param_1->___data_0->___savedString_2,
         pDVar1 != (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0)) {
        bVar5 = Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared
                          (pDVar1,(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_2,
                           Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var
                          );
        if (bVar5) {
          if ((param_1->___data_0 ==
               (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) ||
             (pDVar4 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)
                       param_1->___data_0->___savedString_2,
             pDVar4 == (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)0x0))
          goto LAB_1110cdfe;
          Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared
                    (pDVar4,(Il2CppObject *)param_2,
                     Dictionary_2_Remove_m5A3F6460316A1214AE1141593B196EBF58E3E6D1_RuntimeMethod_var
                    );
        }
        return;
      }
    }
  }
LAB_1110cdfe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
