// RVA 0x110d1c0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$Load
// PDB: PlatformPlayerPrefs_Load_m5A44C6BCD9FE166A5FD3733E3B977D15113033A5
// Body: [[1110d1c0, 1110d38b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 10514ce0 Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
// 10c9f640 AsyncRequest_1_ContinueWith_m248D8AC224B6E1F1DEC428FF7335C7E287E8D309_gshared
// 10c9f6f0 AsyncRequest_1__ctor_m9959B461E4FE570F2FBC3137A0E3416345C50110_gshared
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 1110ad20 AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE

Il2CppObject * __cdecl
PlatformPlayerPrefs_Load_m5A44C6BCD9FE166A5FD3733E3B977D15113033A5
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,
          MethodInfo *param_2)

{
  String_t *pSVar1;
  String_t *pSVar2;
  AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *pAVar3;
  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *pQVar4;
  AsyncRequest_1_tC5FD169BBC412E33E2DFD5A46A7E1A7020F64918 *pAVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;
  AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *pAVar7;

  if (DAT_11523e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral934A24CC5C013253BEBBDD82CCEB294548B9663D);
    DAT_11523e9a = '\x01';
  }
  pSVar1 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                     (_stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C,(MethodInfo *)0x0);
  pSVar2 = _stringLiteral934A24CC5C013253BEBBDD82CCEB294548B9663D;
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
  pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                     (pSVar2,_stringLiteralF047BB5B344D982137AD581CD9FE5FC6E0C553DE,
                      (MethodInfo *)0x0);
  pAVar3 = param_1->___scheduler_3;
  (param_1->___container_1).___id_0 = pSVar1;
  param_1->___filename_2 = pSVar2;
  if (pAVar3 == (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    pAVar3 = (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)
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
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pAVar3,
               (MethodInfo *)0x0);
    pQVar4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)
             il2cpp_codegen_object_new
                       (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22_il2cpp_TypeInfo_var);
    Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared
              (pQVar4,Queue_1__ctor_m2AB7AC5CFAEFD29532259FC8768B2601963DEE38_RuntimeMethod_var);
    pAVar3->___requestQueue_0 = (Queue_1_tD352657B8F159773BF493CD423C42D6C0D116A22 *)pQVar4;
    param_1->___scheduler_3 = pAVar3;
  }
  else {
    AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
              (pAVar3,(MethodInfo *)0x0);
  }
  pAVar5 = (AsyncRequest_1_tC5FD169BBC412E33E2DFD5A46A7E1A7020F64918 *)
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
            ((AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *)pAVar5,
             AsyncRequest_1__ctor_m0FC9951A4CB2CECE1E094AA4B93CDE7A7967A2DA_RuntimeMethod_var);
  pAVar5[1]._padding_ = (int)pSVar1;
  pAVar5[1]._padding_ = (int)pSVar2;
  pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (
                     AsyncRequestCallback_1_t2C566095D069A15C97F11C1561D1C2EE83547808_il2cpp_TypeInfo_var
                     );
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar6,(Il2CppObject *)param_1,
             (int)
             PlatformPlayerPrefs_U3CLoadU3Eb__9_0_m5FE9E372481719D5DBC26D52B1BA6285253E6078_RuntimeMethod_var
             ,
             AsyncRequestCallback_1__ctor_m053B93C93CFC9B27EB68E202F4E56C869A808D94_RuntimeMethod_var
            );
  pAVar7 = AsyncRequest_1_ContinueWith_m248D8AC224B6E1F1DEC428FF7335C7E287E8D309_gshared
                     (pAVar5,(AsyncRequestCallback_1_tC6D31F1527DD99EE2F9E411AF07FAD274F62B051 *)
                             pOVar6,
                      AsyncRequest_1_ContinueWith_m5EEE2ACB247F1E9165B71D50792EB2303441A006_RuntimeMethod_var
                     );
  if (param_1->___scheduler_3 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
              (param_1->___scheduler_3,(Il2CppObject *)pAVar7,(MethodInfo *)0x0);
    return (Il2CppObject *)pAVar7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
