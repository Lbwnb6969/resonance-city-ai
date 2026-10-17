// RVA 0x110d020 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$Load
// PDB: PlatformPlayerPrefs_Load_m5770DB54F5D282111F0E07341AA67154A92D22B6
// Body: [[1110d020, 1110d1b1]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10514ce0 Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
// 10c9f640 AsyncRequest_1_ContinueWith_m248D8AC224B6E1F1DEC428FF7335C7E287E8D309_gshared
// 10c9f6f0 AsyncRequest_1__ctor_m9959B461E4FE570F2FBC3137A0E3416345C50110_gshared
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 1110ad20 AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE

Il2CppObject * __cdecl
PlatformPlayerPrefs_Load_m5770DB54F5D282111F0E07341AA67154A92D22B6
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_2,String_t *param_3,
          MethodInfo *param_4)

{
  String_t *pSVar1;
  AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *pAVar2;
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar3;
  AsyncRequest_1_tC5FD169BBC412E33E2DFD5A46A7E1A7020F64918 *pAVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;
  AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *pAVar6;

  if (DAT_11523e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequestCallback_1__ctor_m053B93C93CFC9B27EB68E202F4E56C869A808D94_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequestCallback_1_t2C566095D069A15C97F11C1561D1C2EE83547808_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequest_1_ContinueWith_m5EEE2ACB247F1E9165B71D50792EB2303441A006_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlatformPlayerPrefs_U3CLoadU3Eb__9_0_m5FE9E372481719D5DBC26D52B1BA6285253E6078_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlayerPrefsLoadRequest_t6616BA8C95AADA3039553787E6DD69235EF81D8F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF047BB5B344D982137AD581CD9FE5FC6E0C553DE);
    DAT_11523e9b = '\x01';
  }
  pSVar1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                     (param_3,_stringLiteralF047BB5B344D982137AD581CD9FE5FC6E0C553DE,
                      (MethodInfo *)0x0);
  pAVar2 = param_1->___scheduler_3;
  (param_1->___container_1).___id_0 = param_2.___id_0;
  param_1->___filename_2 = pSVar1;
  if (pAVar2 == (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    pAVar2 = (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)
             il2cpp_codegen_object_new
                       (
                       AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80_il2cpp_TypeInfo_var
                       );
    if (DAT_11523e7a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
      DAT_11523e7a = '\x01';
    }
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pAVar2,
               (MethodInfo *)0x0);
    pQVar3 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
             il2cpp_codegen_object_new
                       (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
    Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
              (pQVar3,Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
    pAVar2->___requestQueue_0 = (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)pQVar3;
    param_1->___scheduler_3 = pAVar2;
  }
  else {
    AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
              (pAVar2,(MethodInfo *)0x0);
  }
  pAVar4 = (AsyncRequest_1_tC5FD169BBC412E33E2DFD5A46A7E1A7020F64918 *)
           il2cpp_codegen_object_new
                     (
                     PlayerPrefsLoadRequest_t6616BA8C95AADA3039553787E6DD69235EF81D8F_il2cpp_TypeInfo_var
                     );
  if (DAT_11523ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequest_1__ctor_m0FC9951A4CB2CECE1E094AA4B93CDE7A7967A2DA_RuntimeMethod_var
              );
    DAT_11523ea7 = '\x01';
  }
  AsyncRequest_1__ctor_m9959B461E4FE570F2FBC3137A0E3416345C50110_gshared
            ((AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *)pAVar4,
             AsyncRequest_1__ctor_m0FC9951A4CB2CECE1E094AA4B93CDE7A7967A2DA_RuntimeMethod_var);
  pAVar4[1]._padding_ = (int)param_2.___id_0;
  pAVar4[1]._padding_ = (int)pSVar1;
  pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (
                     AsyncRequestCallback_1_t2C566095D069A15C97F11C1561D1C2EE83547808_il2cpp_TypeInfo_var
                     );
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar5,(Il2CppObject *)param_1,
             (int)
             PlatformPlayerPrefs_U3CLoadU3Eb__9_0_m5FE9E372481719D5DBC26D52B1BA6285253E6078_RuntimeMethod_var
             ,
             AsyncRequestCallback_1__ctor_m053B93C93CFC9B27EB68E202F4E56C869A808D94_RuntimeMethod_var
            );
  pAVar6 = AsyncRequest_1_ContinueWith_m248D8AC224B6E1F1DEC428FF7335C7E287E8D309_gshared
                     (pAVar4,(AsyncRequestCallback_1_tC6D31F1527DD99EE2F9E411AF07FAD274F62B051 *)
                             pOVar5,
                      AsyncRequest_1_ContinueWith_m5EEE2ACB247F1E9165B71D50792EB2303441A006_RuntimeMethod_var
                     );
  if (param_1->___scheduler_3 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
              (param_1->___scheduler_3,(Il2CppObject *)pAVar6,(MethodInfo *)0x0);
    return (Il2CppObject *)pAVar6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
