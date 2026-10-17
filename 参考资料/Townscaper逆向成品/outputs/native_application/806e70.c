// RVA 0x806e70 | Placemaker.Quads.Quad$$ToString
// PDB: Quad_ToString_m26D74C6274947EA9E67C10B4C5273FABD3150C46
// Body: [[10806e70, 108071f0]]
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
Quad_ToString_m26D74C6274947EA9E67C10B4C5273FABD3150C46
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,MethodInfo *param_2)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  String_t *pSVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_1151f1f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2E4F8D9566410E1FC014FB11E2297D4AB9A24B56);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&float2_tCB7B81181978EDE17722C533A55E345D9A413274_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1151f1f9 = '\x01';
  }
  pOVar1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
           il2cpp_array_new_specific
                     (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var,8);
  local_c = (param_1->___v0_1).___x_0;
  local_8 = (param_1->___v0_1).___y_1;
  pIVar2 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var,
                            &local_c);
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
  local_14 = (param_1->___v1_2).___x_0;
  local_10 = (param_1->___v1_2).___y_1;
  pIVar2 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var,
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
  if ((uint)pOVar1->_padding_ < 2) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  *(Il2CppObject **)&pOVar1->field_0x14 = pIVar2;
  local_1c = (param_1->___v2_3).___x_0;
  local_18 = (param_1->___v2_3).___y_1;
  pIVar2 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var,
                            &local_1c);
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
  local_24 = (param_1->___v3_4).___x_0;
  local_20 = (param_1->___v3_4).___y_1;
  pIVar2 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var,
                            &local_24);
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
  local_2c = (param_1->___p0_5).___x_0;
  local_28 = (param_1->___p0_5).___y_1;
  pIVar2 = il2cpp_value_box(float2_tCB7B81181978EDE17722C533A55E345D9A413274_il2cpp_TypeInfo_var,
                            &local_2c);
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
  local_34 = (param_1->___p1_6).___x_0;
  local_30 = (param_1->___p1_6).___y_1;
  pIVar2 = il2cpp_value_box(float2_tCB7B81181978EDE17722C533A55E345D9A413274_il2cpp_TypeInfo_var,
                            &local_34);
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
  local_3c = (param_1->___p2_7).___x_0;
  local_38 = (param_1->___p2_7).___y_1;
  pIVar2 = il2cpp_value_box(float2_tCB7B81181978EDE17722C533A55E345D9A413274_il2cpp_TypeInfo_var,
                            &local_3c);
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
    local_44 = (param_1->___p3_8).___x_0;
    local_40 = (param_1->___p3_8).___y_1;
    pIVar2 = il2cpp_value_box(float2_tCB7B81181978EDE17722C533A55E345D9A413274_il2cpp_TypeInfo_var,
                              &local_44);
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
                         (_stringLiteral2E4F8D9566410E1FC014FB11E2297D4AB9A24B56,pOVar1,
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
