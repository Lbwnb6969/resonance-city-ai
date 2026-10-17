// RVA 0x1142df0 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$LoadBytes
// PDB: StandalonePCStorageContainer_LoadBytes_m8AABBFB5C89267ED15472F99FC91188D6235BBF1
// Body: [[11142df0, 11142e5a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
// 1110c760 DotNetLoadStorageRequest__ctor_m1A7200DDC688B92B0B13264E80A74B99C85E4E86
// 11142c00 StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F

Il2CppObject * __cdecl
StandalonePCStorageContainer_LoadBytes_m8AABBFB5C89267ED15472F99FC91188D6235BBF1
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          String_t *param_2,MethodInfo *param_3)

{
  String_t *pSVar1;
  DotNetLoadStorageRequest_tB242851C4F15B5DC4FB16BDE5068F452B3927568 *pDVar2;

  if (DAT_11524622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetLoadStorageRequest_tB242851C4F15B5DC4FB16BDE5068F452B3927568_il2cpp_TypeInfo_var
              );
    DAT_11524622 = '\x01';
  }
  pSVar1 = StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
                     (param_1,param_2,(MethodInfo *)0x0);
  pDVar2 = (DotNetLoadStorageRequest_tB242851C4F15B5DC4FB16BDE5068F452B3927568 *)
           il2cpp_codegen_object_new
                     (
                     DotNetLoadStorageRequest_tB242851C4F15B5DC4FB16BDE5068F452B3927568_il2cpp_TypeInfo_var
                     );
  DotNetLoadStorageRequest__ctor_m1A7200DDC688B92B0B13264E80A74B99C85E4E86
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
