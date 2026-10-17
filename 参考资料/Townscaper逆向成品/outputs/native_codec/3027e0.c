// RVA 0x3027e0 | TextSaveSystem.ReadValue
// PDB: TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
// Body: [[103027e0, 10302abf]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1088f200 BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10f02c00 String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9

int __cdecl
TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
          (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *param_1,int *param_2,int param_3,
          MethodInfo *param_4)

{
  int iVar1;
  bool bVar2;
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar3;
  Il2CppObject *pIVar4;
  String_t *pSVar5;
  Exception_t *pEVar6;
  int iVar7;
  MethodInfo *pMVar8;
  int local_8;

  if (DAT_1151c221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCBA7D4C8780A2C1A6A3E386F6CC75FC20D97B213);
    DAT_1151c221 = '\x01';
  }
  iVar7 = 0;
  iVar1 = 1;
  if (param_1 != (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0) {
    if (*param_2 + param_3 <= param_1->___m_length_4) {
      while (0 < param_3) {
        param_3 = param_3 + -1;
        local_8 = *param_2;
        *param_2 = local_8 + 1;
        bVar2 = BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
                          (param_1,local_8,(MethodInfo *)0x0);
        if (bVar2) {
          iVar7 = iVar7 + iVar1;
        }
        iVar1 = iVar1 * 2;
      }
      return iVar7;
    }
    pSVar3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
             il2cpp_array_new_specific
                       (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var,6
                       );
    if (pSVar3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
      if ((_stringLiteralCBA7D4C8780A2C1A6A3E386F6CC75FC20D97B213 != (String_t *)0x0) &&
         (pIVar4 = IsInst((Il2CppObject *)_stringLiteralCBA7D4C8780A2C1A6A3E386F6CC75FC20D97B213,
                          *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
         pIVar4 == (Il2CppObject *)0x0)) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pMVar8 = (MethodInfo *)0x0;
      if (pSVar3->_padding_ == 0) {
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pSVar3->m_Items[0] = _stringLiteralCBA7D4C8780A2C1A6A3E386F6CC75FC20D97B213;
      pSVar5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(param_2,(MethodInfo *)0x0);
      if ((pSVar5 != (String_t *)0x0) &&
         (pIVar4 = IsInst((Il2CppObject *)pSVar5,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
         pIVar4 == (Il2CppObject *)0x0)) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      if ((uint)pSVar3->_padding_ < 2) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      *(String_t **)&pSVar3->field_0x14 = pSVar5;
      if ((_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745 != (String_t *)0x0) &&
         (pIVar4 = IsInst((Il2CppObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745,
                          *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
         pIVar4 == (Il2CppObject *)0x0)) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pMVar8 = (MethodInfo *)0x0;
      if ((uint)pSVar3->_padding_ < 3) {
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pSVar3[1]._padding_ = (int)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
      pSVar5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(&param_3,(MethodInfo *)0x0);
      if ((pSVar5 != (String_t *)0x0) &&
         (pIVar4 = IsInst((Il2CppObject *)pSVar5,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
         pIVar4 == (Il2CppObject *)0x0)) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      if ((uint)pSVar3->_padding_ < 4) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pSVar3[1]._padding_ = (int)pSVar5;
      if ((_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745 != (String_t *)0x0) &&
         (pIVar4 = IsInst((Il2CppObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745,
                          *(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
         pIVar4 == (Il2CppObject *)0x0)) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pMVar8 = (MethodInfo *)0x0;
      if ((uint)pSVar3->_padding_ < 5) {
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pSVar3[1]._padding_ = (int)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
      local_8 = param_1->___m_length_4;
      pSVar5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(&local_8,(MethodInfo *)0x0);
      if ((pSVar5 != (String_t *)0x0) &&
         (pIVar4 = IsInst((Il2CppObject *)pSVar5,*(Il2CppClass **)(pSVar3->_padding_ + 0x20)),
         pIVar4 == (Il2CppObject *)0x0)) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pMVar8 = (MethodInfo *)0x0;
      if ((uint)pSVar3->_padding_ < 6) {
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar8);
      }
      pSVar3[1]._padding_ = (int)pSVar5;
      pSVar5 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(pSVar3,(MethodInfo *)0x0);
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      *param_2 = *param_2 + param_3;
      return -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
