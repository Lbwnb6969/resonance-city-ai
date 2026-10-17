// RVA 0x9c2b60 | Os.Utils.UnityFunctions.HirearchyEnumerator$$ToString
// PDB: HirearchyEnumerator_ToString_mDDDB061A72E3D6EC1C2E82FBC2A5D9ABDFD7DE0E
// Body: [[109c2b60, 109c2e1b]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10f04ed0 String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B

String_t * __cdecl
HirearchyEnumerator_ToString_mDDDB061A72E3D6EC1C2E82FBC2A5D9ABDFD7DE0E
          (HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C *param_1,
          MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C *pHVar2;
  bool bVar3;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar4;
  String_t *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  String_t *pSVar8;
  Exception_t *pEVar9;
  MethodInfo *pMVar10;
  int local_c;
  int local_8;

  if (DAT_1151ff67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral15A99568A1E83073FCD3028758209B3185B3BD6D);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
    DAT_1151ff67 = '\x01';
  }
  pOVar4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
           il2cpp_array_new_specific
                     (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var,5);
  pHVar2 = param_1;
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___transform_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  pSVar8 = _stringLiteral15A99568A1E83073FCD3028758209B3185B3BD6D;
  pSVar5 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
  if (bVar3) {
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pHVar2->___transform_4 ==
        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_109c2d97;
    pSVar5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pHVar2->___transform_4,
                        (MethodInfo *)0x0);
  }
  if (pOVar4 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
LAB_109c2d97:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if ((pSVar5 != (String_t *)0x0) &&
     (pIVar6 = IsInst((Il2CppObject *)pSVar5,*(Il2CppClass **)(pOVar4->_padding_ + 0x20)),
     pIVar6 == (Il2CppObject *)0x0)) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  if (pOVar4->_padding_ == 0) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  pOVar4->m_Items[0] = (Il2CppObject *)pSVar5;
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pHVar2->___parent_5;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  pSVar5 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
  if (bVar3) {
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pHVar2->___parent_5 ==
        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_109c2d97;
    pSVar5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pHVar2->___parent_5,
                        (MethodInfo *)0x0);
  }
  if ((pSVar5 != (String_t *)0x0) &&
     (pIVar6 = IsInst((Il2CppObject *)pSVar5,*(Il2CppClass **)(pOVar4->_padding_ + 0x20)),
     pIVar6 == (Il2CppObject *)0x0)) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  if ((uint)pOVar4->_padding_ < 2) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  *(String_t **)&pOVar4->field_0x14 = pSVar5;
  param_1 = (HirearchyEnumerator_t0EEABAC20022980CDA6EFB5F4A0941E44A0F279C *)
            pHVar2->___siblingIndex_0;
  pIVar6 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                            &param_1);
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar7 = IsInst(pIVar6,*(Il2CppClass **)(pOVar4->_padding_ + 0x20)),
     pIVar7 == (Il2CppObject *)0x0)) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  if ((uint)pOVar4->_padding_ < 3) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  pOVar4[1]._padding_ = (int)pIVar6;
  local_8 = pHVar2->___siblingCount_1;
  pIVar6 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                            &local_8);
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar7 = IsInst(pIVar6,*(Il2CppClass **)(pOVar4->_padding_ + 0x20)),
     pIVar7 == (Il2CppObject *)0x0)) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  if ((uint)pOVar4->_padding_ < 4) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  pOVar4[1]._padding_ = (int)pIVar6;
  local_c = pHVar2->___depth_2;
  pIVar6 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                            &local_c);
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar7 = IsInst(pIVar6,*(Il2CppClass **)(pOVar4->_padding_ + 0x20)),
     pIVar7 == (Il2CppObject *)0x0)) {
    pMVar10 = (MethodInfo *)0x0;
    pEVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  pMVar10 = (MethodInfo *)0x0;
  if ((uint)pOVar4->_padding_ < 5) {
    pEVar9 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  pOVar4[1]._padding_ = (int)pIVar6;
  pSVar8 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(pSVar8,pOVar4,(MethodInfo *)0x0);
  return pSVar8;
}
