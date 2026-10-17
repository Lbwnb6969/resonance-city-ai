// RVA 0x22f280 | Placemaker.ByteQube$$ToString
// PDB: ByteQube_ToString_mDD6F25B02C6CCA2B242C5A36041C14A8F594A6F4
// Body: [[1022f280, 1022f5c5]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 10128ae0 il2cpp_value_box
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f04ed0 String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B

String_t * __cdecl
ByteQube_ToString_mDD6F25B02C6CCA2B242C5A36041C14A8F594A6F4
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,MethodInfo *param_2)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  String_t *pSVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  uchar local_c;
  uchar local_b;
  uchar local_a;
  uchar local_9;
  uchar local_8;
  uchar local_7;
  uchar local_6;
  uchar local_5;

  if (DAT_1151b57b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral513BED15C2B29524E0CAEA96314113A25558E5F5);
    DAT_1151b57b = '\x01';
  }
  pOVar1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
           il2cpp_array_new_specific
                     (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var,8);
  local_5 = param_1->___v0_0;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_5);
  if (pOVar1 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if (pOVar1->_padding_ == 0) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  pOVar1->m_Items[0] = pIVar2;
  local_6 = param_1->___v1_1;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_6);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if ((uint)pOVar1->_padding_ < 2) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  *(Il2CppObject **)&pOVar1->field_0x14 = pIVar2;
  local_7 = param_1->___v2_2;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_7);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if ((uint)pOVar1->_padding_ < 3) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  pOVar1[1]._padding_ = (int)pIVar2;
  local_8 = param_1->___v3_3;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_8);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if ((uint)pOVar1->_padding_ < 4) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  pOVar1[1]._padding_ = (int)pIVar2;
  local_9 = param_1->___v4_4;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_9);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if ((uint)pOVar1->_padding_ < 5) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  pOVar1[1]._padding_ = (int)pIVar2;
  local_a = param_1->___v5_5;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_a);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if ((uint)pOVar1->_padding_ < 6) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  pOVar1[1]._padding_ = (int)pIVar2;
  local_b = param_1->___v6_6;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_b);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if (6 < (uint)pOVar1->_padding_) {
    pOVar1[1].m_Items[0] = pIVar2;
    local_c = param_1->___v7_7;
    pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                              &local_c);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
      if (pIVar3 == (Il2CppObject *)0x0) {
        pMVar6 = (MethodInfo *)0x0;
        pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar5,pMVar6);
      }
    }
    pMVar6 = (MethodInfo *)0x0;
    if (7 < (uint)pOVar1->_padding_) {
      *(Il2CppObject **)&pOVar1[1].field_0x14 = pIVar2;
      pSVar4 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                         (_stringLiteral513BED15C2B29524E0CAEA96314113A25558E5F5,pOVar1,
                          (MethodInfo *)0x0);
      return pSVar4;
    }
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  pMVar6 = (MethodInfo *)0x0;
  pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar5,pMVar6);
}
