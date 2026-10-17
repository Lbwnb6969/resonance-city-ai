// RVA 0x2fd630 | Placemaker.StorageUtils$$GetFileNameFromAbsolutePath
// PDB: StorageUtils_GetFileNameFromAbsolutePath_mDEBF08E92545FE87D833C54BA73ADABA4209DB9F
// Body: [[102fd630, 102fd6ea]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f084f0 String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B

String_t * __cdecl
StorageUtils_GetFileNameFromAbsolutePath_mDEBF08E92545FE87D833C54BA73ADABA4209DB9F
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  uint uVar1;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar2;
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;

  if (DAT_1151c1f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    DAT_1151c1f4 = '\x01';
  }
  pCVar2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
           il2cpp_array_new_specific
                     (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,1);
  if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
  }
  if (pCVar2 != (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) {
    if (pCVar2->_padding_ == 0) {
      pMVar5 = (MethodInfo *)0x0;
      pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar4,pMVar5);
    }
    pCVar2->m_Items[0] =
         *(wchar_t *)
          ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->static_fields +
          6);
    if (param_2 != (String_t *)0x0) {
      pSVar3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B
                         (param_2,pCVar2,(MethodInfo *)0x0);
      if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
        uVar1 = pSVar3->_padding_;
        if (uVar1 - 1 < uVar1) {
          return pSVar3->m_Items[uVar1 - 1];
        }
        pMVar5 = (MethodInfo *)0x0;
        pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar4,pMVar5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
