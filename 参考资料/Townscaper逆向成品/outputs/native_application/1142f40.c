// RVA 0x1142f40 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$SaveText
// PDB: StandalonePCStorageContainer_SaveText_mD7F48EFE02B72C6D1A2349000ED34BA906213962
// Body: [[11142f40, 11142fad]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
// 1110c880 DotNetSaveStorageRequest__ctor_mD414E9E8D0B868FC7A4D08D8EBBE5E251B4A8874
// 11142c00 StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F

Il2CppObject * __cdecl
StandalonePCStorageContainer_SaveText_mD7F48EFE02B72C6D1A2349000ED34BA906213962
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          String_t *param_2,String_t *param_3,MethodInfo *param_4)

{
  String_t *pSVar1;
  DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017 *pDVar2;

  if (DAT_11524625 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017_il2cpp_TypeInfo_var
              );
    DAT_11524625 = '\x01';
  }
  pSVar1 = StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
                     (param_1,param_2,(MethodInfo *)0x0);
  pDVar2 = (DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017 *)
           il2cpp_codegen_object_new
                     (
                     DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017_il2cpp_TypeInfo_var
                     );
  DotNetSaveStorageRequest__ctor_mD414E9E8D0B868FC7A4D08D8EBBE5E251B4A8874
            (pDVar2,pSVar1,param_3,(MethodInfo *)0x0);
  if (param_1->___requestScheduler_2 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
              (param_1->___requestScheduler_2,(Il2CppObject *)pDVar2,(MethodInfo *)0x0);
    return (Il2CppObject *)pDVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
