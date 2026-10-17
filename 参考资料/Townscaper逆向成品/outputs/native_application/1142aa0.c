// RVA 0x1142aa0 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$Delete
// PDB: StandalonePCStorageContainer_Delete_mBCD8E591469CBD50E7397336DE9EC1DE2AE8E8FB
// Body: [[11142aa0, 11142b0a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
// 1110c360 DotNetDeleteStorageRequest__ctor_m92908A9BA595353D53B7D8960D37ED5DC4DB31D0
// 11142c00 StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F

Il2CppObject * __cdecl
StandalonePCStorageContainer_Delete_mBCD8E591469CBD50E7397336DE9EC1DE2AE8E8FB
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          String_t *param_2,MethodInfo *param_3)

{
  String_t *pSVar1;
  DotNetDeleteStorageRequest_t177E13C24132C22EB2DE1C0632B8E0F095B5F93C *pDVar2;

  if (DAT_11524626 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetDeleteStorageRequest_t177E13C24132C22EB2DE1C0632B8E0F095B5F93C_il2cpp_TypeInfo_var
              );
    DAT_11524626 = '\x01';
  }
  pSVar1 = StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
                     (param_1,param_2,(MethodInfo *)0x0);
  pDVar2 = (DotNetDeleteStorageRequest_t177E13C24132C22EB2DE1C0632B8E0F095B5F93C *)
           il2cpp_codegen_object_new
                     (
                     DotNetDeleteStorageRequest_t177E13C24132C22EB2DE1C0632B8E0F095B5F93C_il2cpp_TypeInfo_var
                     );
  DotNetDeleteStorageRequest__ctor_m92908A9BA595353D53B7D8960D37ED5DC4DB31D0
            (pDVar2,pSVar1,(MethodInfo *)0x0);
  if (param_1->___requestScheduler_2 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
              (param_1->___requestScheduler_2,(Il2CppObject *)pDVar2,(MethodInfo *)0x0);
    return (Il2CppObject *)pDVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
