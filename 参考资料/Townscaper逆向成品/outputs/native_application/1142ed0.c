// RVA 0x1142ed0 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$SaveBytes
// PDB: StandalonePCStorageContainer_SaveBytes_m33204B8BE8452A6E17667FD94A46943DFC311542
// Body: [[11142ed0, 11142f3d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
// 1110c910 DotNetSaveStorageRequest__ctor_mF1966C1B556D3105277205950094F01CF2D3731E
// 11142c00 StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F

Il2CppObject * __cdecl
StandalonePCStorageContainer_SaveBytes_m33204B8BE8452A6E17667FD94A46943DFC311542
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          String_t *param_2,ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *param_3,
          MethodInfo *param_4)

{
  String_t *pSVar1;
  DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017 *pDVar2;

  if (DAT_11524624 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017_il2cpp_TypeInfo_var
              );
    DAT_11524624 = '\x01';
  }
  pSVar1 = StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
                     (param_1,param_2,(MethodInfo *)0x0);
  pDVar2 = (DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017 *)
           il2cpp_codegen_object_new
                     (
                     DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017_il2cpp_TypeInfo_var
                     );
  DotNetSaveStorageRequest__ctor_mF1966C1B556D3105277205950094F01CF2D3731E
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
