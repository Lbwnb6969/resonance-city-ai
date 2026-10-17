// RVA 0x871870 | Placemaker.Graphs.Action$$ToString
// PDB: Action_ToString_mC144347D57A5DFAD2B060B8114F1323C9681966C
// Body: [[10871870, 10871ab8]]
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
Action_ToString_mC144347D57A5DFAD2B060B8114F1323C9681966C
          (Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *param_1,MethodInfo *param_2)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  String_t *pSVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  int local_10;
  int local_c;
  schar local_7;
  schar local_6;
  uchar local_5;

  if (DAT_1151f58b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&VoxelType_t8AADD644D69D3488E42C8C9F0C1BD89DD4953320_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDE27E1BAA12C7F0AA61284847DDAADA96E94290A);
    DAT_1151f58b = '\x01';
  }
  pOVar1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
           il2cpp_array_new_specific
                     (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var,5);
  local_c = (param_1->___hexPos_0).___x_0;
  pIVar2 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
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
  local_10 = (param_1->___hexPos_0).___y_1;
  pIVar2 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
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
  if ((uint)pOVar1->_padding_ < 2) {
    pMVar6 = (MethodInfo *)0x0;
    pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  *(Il2CppObject **)&pOVar1->field_0x14 = pIVar2;
  local_5 = param_1->___height_1;
  pIVar2 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            &local_5);
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
    local_6 = param_1->___inType_2;
    pIVar2 = il2cpp_value_box(VoxelType_t8AADD644D69D3488E42C8C9F0C1BD89DD4953320_il2cpp_TypeInfo_var
                              ,&local_6);
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
    local_7 = param_1->___outType_3;
    pIVar2 = il2cpp_value_box(VoxelType_t8AADD644D69D3488E42C8C9F0C1BD89DD4953320_il2cpp_TypeInfo_var
                              ,&local_7);
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
    if (4 < (uint)pOVar1->_padding_) {
      pOVar1[1]._padding_ = (int)pIVar2;
      pSVar4 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                         (_stringLiteralDE27E1BAA12C7F0AA61284847DDAADA96E94290A,pOVar1,
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
