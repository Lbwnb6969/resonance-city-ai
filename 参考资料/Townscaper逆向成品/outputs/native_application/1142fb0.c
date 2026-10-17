// RVA 0x1142fb0 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$.ctor
// PDB: StandalonePCStorageContainer__ctor_m84A3B1783D59F514E09E9FDE0FC3427B49F1881B
// Body: [[11142fb0, 11142ff6]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d2050 CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3
// 110cf350 FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B

void __cdecl
StandalonePCStorageContainer__ctor_m84A3B1783D59F514E09E9FDE0FC3427B49F1881B
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *param_2,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_3,
          PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *param_4,MethodInfo *param_5)

{
  StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *pSVar1;
  String_t *pSVar2;

  CustomEntry__ctor_m6D4C850A7CA6A6B283CBF77D808A2D464BF6D6E3
            ((CustomEntry_t52178788B948781461C5F6B5655F409DA823DF21 *)param_1,param_3.___id_0,
             (String_t *)param_4,(MethodInfo *)0x0);
  param_1->___requestScheduler_2 = param_2;
  if ((param_4 != (PlatformSettings_t3FEC8BA69291E07F62699229910DA7E6828AA8AA *)0x0) &&
     (pSVar1 = param_4->___standalone_7,
     pSVar1 != (StandalonePlatformSettings_t44D95CAF8B7F3010B7B48B35FE75EE08D38B8916 *)0x0)) {
    pSVar2 = FilePathRootExtensions_Path_mB547D0EC6CAADF29442349F5AF59AB3CC3CE033B
                       (pSVar1->___storageRoot_0,pSVar1->___storageRootSuffixPc_1,(MethodInfo *)0x0)
    ;
    param_1->___U3CRootPathU3Ek__BackingField_3 = pSVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
