// RVA 0x1142570 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$CreateContainer
// PDB: StandalonePCPlatformSDK_CreateContainer_m285C7280D548461CCAC9382478BDF8F9B95EC4E5
// Body: [[11142570, 111425e4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d2050 CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3
// 110cf350 FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B

BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF * __cdecl
StandalonePCPlatformSDK_CreateContainer_m285C7280D548461CCAC9382478BDF8F9B95EC4E5
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_2,MethodInfo *param_3)

{
  AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *pAVar1;
  int iVar2;
  BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF *pBVar3;
  String_t *pSVar4;

  if (DAT_11524616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823_il2cpp_TypeInfo_var
              );
    DAT_11524616 = '\x01';
  }
  pAVar1 = param_1->___storageRequestScheduler_14;
  pSVar4 = (String_t *)param_1->_padding_;
  pBVar3 = (BaseStorageContainer_t6D8C2F00EDB5D2AAB6E1B9B76E95985E014F45EF *)
           il2cpp_codegen_object_new
                     (
                     StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823_il2cpp_TypeInfo_var
                     );
  CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3
            ((CustomEntry_t52178788B948781461C5F6B5655F409DA823DF21 *)pBVar3,param_2.___id_0,pSVar4,
             (MethodInfo *)0x0);
  pBVar3[1]._padding_ = (int)pAVar1;
  if ((pSVar4 != (String_t *)0x0) && (iVar2 = pSVar4[1]._padding_, iVar2 != 0)) {
    pSVar4 = FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B
                       (*(int *)(iVar2 + 8),*(String_t **)(iVar2 + 0xc),(MethodInfo *)0x0);
    pBVar3[1]._padding_ = (int)pSVar4;
    return pBVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
