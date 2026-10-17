// RVA 0x1142b80 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$GetDirPath
// PDB: StandalonePCStorageContainer_GetDirPath_m23187475E7D3E88029CF8BE6C62AFF4D71130DBF
// Body: [[11142b80, 11142bf5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10ed9980 Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF

String_t * __cdecl
StandalonePCStorageContainer_GetDirPath_m23187475E7D3E88029CF8BE6C62AFF4D71130DBF
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          MethodInfo *param_2)

{
  int iVar1;
  String_t *pSVar2;
  String_t *pSVar3;

  if (DAT_11524629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    DAT_11524629 = '\x01';
  }
  if ((param_1->_padding_ != 0) && (iVar1 = *(int *)(param_1->_padding_ + 0x14), iVar1 != 0)) {
    pSVar3 = param_1->___U3CRootPathU3Ek__BackingField_3;
    if (*(int *)(iVar1 + 0x18) != 2) {
      return pSVar3;
    }
    pSVar2 = (String_t *)param_1->_padding_;
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    pSVar3 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(pSVar3,pSVar2,(MethodInfo *)0x0)
    ;
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
