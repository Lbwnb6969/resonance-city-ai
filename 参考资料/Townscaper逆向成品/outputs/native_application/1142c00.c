// RVA 0x1142c00 | FuryStudios.FurySDK.StandalonePC.StandalonePCStorageContainer$$GetFilePath
// PDB: StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
// Body: [[11142c00, 11142d1d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10ed9760 Path_Combine_m7A2F79646794E197E588558EE81971A0C32A2A6A
// 10ed9980 Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF
// 10f04bc0 String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66

String_t * __cdecl
StandalonePCStorageContainer_GetFilePath_m84B1F362637941233B962AE2F0C07486D9D90E1F
          (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *param_1,
          String_t *param_2,MethodInfo *param_3)

{
  int iVar1;
  Il2CppObject *pIVar2;
  String_t *pSVar3;
  String_t *pSVar4;

  if (DAT_1152462a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
    DAT_1152462a = '\x01';
  }
  if ((param_1->_padding_ == 0) || (iVar1 = *(int *)(param_1->_padding_ + 0x14), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  pSVar4 = param_1->___U3CRootPathU3Ek__BackingField_3;
  if (iVar1 == 1) {
    param_1 = (StandalonePCStorageContainer_t85AE006496BDA473A698FC2BC33B866A4D43D823 *)
              param_1->_padding_;
    pIVar2 = il2cpp_value_box(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259_il2cpp_TypeInfo_var
                              ,&param_1);
    pSVar3 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                       (_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674,pIVar2,
                        (Il2CppObject *)param_2,(MethodInfo *)0x0);
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    pSVar4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(pSVar4,pSVar3,(MethodInfo *)0x0)
    ;
    return pSVar4;
  }
  if (iVar1 == 2) {
    pSVar3 = (String_t *)param_1->_padding_;
    if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    }
    pSVar4 = Path_Combine_m7A2F79646794E197E588558EE81971A0C32A2A6A
                       (pSVar4,pSVar3,param_2,(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
  }
  pSVar4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(pSVar4,param_2,(MethodInfo *)0x0);
  return pSVar4;
}
