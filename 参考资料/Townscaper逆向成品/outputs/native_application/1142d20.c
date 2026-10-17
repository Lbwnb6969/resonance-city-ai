// RVA 0x1142d20 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$ListFiles
// PDB: StandalonePCStorageContainer_ListFiles_m74E49772FDACAC96FD370FCA041BFA3364AFBEBC
// Body: [[11142d20, 11142ddf]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10ed9980 Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
// 1110c5f0 DotNetListFiles__ctor_m86817917AB7C68118F02A3419D4B80FF1B4DD14E

Il2CppObject * __cdecl
StandalonePCStorageContainer_ListFiles_m74E49772FDACAC96FD370FCA041BFA3364AFBEBC
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          MethodInfo *param_2)

{
  int iVar1;
  String_t *pSVar2;
  String_t *pSVar3;
  DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE *pDVar4;

  if (DAT_11524628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var
              );
    DAT_11524628 = '\x01';
  }
  if (DAT_11524629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    DAT_11524629 = '\x01';
  }
  if ((param_1->_padding_ != 0) && (iVar1 = *(int *)(param_1->_padding_ + 0x14), iVar1 != 0)) {
    pSVar3 = param_1->___U3CRootPathU3Ek__BackingField_3;
    if (*(int *)(iVar1 + 0x18) == 2) {
      pSVar2 = (String_t *)param_1->_padding_;
      if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
         (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0))
      {
        il2cpp_runtime_class_init
                  (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
      }
      pSVar3 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
                         (pSVar3,pSVar2,(MethodInfo *)0x0);
    }
    pDVar4 = (DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE *)
             il2cpp_codegen_object_new
                       (
                       DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var
                       );
    DotNetListFiles__ctor_m86817917AB7C68118F02A3419D4B80FF1B4DD14E(pDVar4,pSVar3,(MethodInfo *)0x0)
    ;
    if (param_1->___requestScheduler_2 !=
        (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
      AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
                (param_1->___requestScheduler_2,(Il2CppObject *)pDVar4,(MethodInfo *)0x0);
      return (Il2CppObject *)pDVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
