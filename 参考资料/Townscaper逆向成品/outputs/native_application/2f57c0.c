// RVA 0x2f57c0 | Placemaker.SideProfile$$ToString
// PDB: SideProfile_ToString_m4ED38B65B3F61EB7B3E59D0CFFB3FDE2942FE365
// Body: [[102f57c0, 102f5a55]]
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
SideProfile_ToString_m4ED38B65B3F61EB7B3E59D0CFFB3FDE2942FE365
          (SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *param_1,MethodInfo *param_2)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  String_t *pSVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  if (DAT_1151c172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD53784CBAA529ED2E1B6FC6C583E2A0956D56FA6);
    DAT_1151c172 = '\x01';
  }
  pOVar1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
           il2cpp_array_new_specific
                     (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var,6);
  local_8 = (uint)param_1->___v00_0;
  pIVar2 = il2cpp_value_box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var,
                            &local_8);
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
  local_c = (uint)param_1->___v10_2;
  pIVar2 = il2cpp_value_box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var,
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
  if ((uint)pOVar1->_padding_ < 2) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  *(Il2CppObject **)&pOVar1->field_0x14 = pIVar2;
  local_10 = (uint)param_1->___v20_4;
  pIVar2 = il2cpp_value_box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var,
                            &local_10);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
    if (pIVar3 == (Il2CppObject *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar6);
    }
  }
  if (2 < (uint)pOVar1->_padding_) {
    pOVar1[1]._padding_ = (int)pIVar2;
    local_14 = (uint)param_1->___v30_6;
    pIVar2 = il2cpp_value_box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var,
                              &local_14);
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
    local_18 = (uint)param_1->___v4_8;
    pIVar2 = il2cpp_value_box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var,
                              &local_18);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = IsInst(pIVar2,*(Il2CppClass **)(pOVar1->_padding_ + 0x20));
      if (pIVar3 == (Il2CppObject *)0x0) {
        pMVar6 = (MethodInfo *)0x0;
        pEVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar5,pMVar6);
      }
    }
    if (4 < (uint)pOVar1->_padding_) {
      pOVar1[1]._padding_ = (int)pIVar2;
      local_1c = (uint)param_1->___v5_9;
      pIVar2 = il2cpp_value_box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var
                                ,&local_1c);
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
      if (5 < (uint)pOVar1->_padding_) {
        pOVar1[1]._padding_ = (int)pIVar2;
        pSVar4 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                           (_stringLiteralD53784CBAA529ED2E1B6FC6C583E2A0956D56FA6,pOVar1,
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
  pMVar6 = (MethodInfo *)0x0;
  pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar5,pMVar6);
}
