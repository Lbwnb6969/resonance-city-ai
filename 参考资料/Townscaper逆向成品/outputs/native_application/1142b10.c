// RVA 0x1142b10 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$FileExists
// PDB: StandalonePCStorageContainer_FileExists_m2FFF6ED83923509644A047C13A7CA0EDBDF7A518
// Body: [[11142b10, 11142b7a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
// 1110c2c0 DotNetCheckIfFileExists__ctor_m2ADEB3EC7D39631A9CE1B3C79B40D9525C1F1367
// 11142c00 StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F

Il2CppObject * __cdecl
StandalonePCStorageContainer_FileExists_m2FFF6ED83923509644A047C13A7CA0EDBDF7A518
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          String_t *param_2,MethodInfo *param_3)

{
  String_t *pSVar1;
  DotNetCheckIfFileExists_t4BA9C4C51302C5958994A8DD7DAD201C42623C6B *pDVar2;

  if (DAT_11524627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetCheckIfFileExists_t4BA9C4C51302C5958994A8DD7DAD201C42623C6B_il2cpp_TypeInfo_var
              );
    DAT_11524627 = '\x01';
  }
  pSVar1 = StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
                     (param_1,param_2,(MethodInfo *)0x0);
  pDVar2 = (DotNetCheckIfFileExists_t4BA9C4C51302C5958994A8DD7DAD201C42623C6B *)
           il2cpp_codegen_object_new
                     (
                     DotNetCheckIfFileExists_t4BA9C4C51302C5958994A8DD7DAD201C42623C6B_il2cpp_TypeInfo_var
                     );
  DotNetCheckIfFileExists__ctor_m2ADEB3EC7D39631A9CE1B3C79B40D9525C1F1367
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
