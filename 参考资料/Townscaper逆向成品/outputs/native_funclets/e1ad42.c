// RVA 0xe1ad42 | Recovered.function.called_by_e19d20
// PDB: FUN_10e1ad42
// Body: [[10e1ad42, 10e1b120]]
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
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10c11740 Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
// 10f02c00 String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6

void FUN_10e1ad42(void)

{
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppArray *pIVar3;
  String_t *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Exception_t *pEVar8;
  int unaff_EBP;
  Exception_t *unaff_EDI;
  MethodInfo *pMVar9;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x164),
             Enumerator_Dispose_m694BCD17B1125D6AD838A86E8C17F1E5A8AF3007_RuntimeMethod_var);
  if (unaff_EDI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
  }
  pIVar3 = il2cpp_array_new_specific
                     (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var,9);
  *(Il2CppArray **)(unaff_EBP + -0x44) = pIVar3;
  pSVar4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
                     ((float *)(unaff_EBP + -0x88),(MethodInfo *)0x0);
  if (pIVar3 == (Il2CppArray *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if ((pSVar4 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)pSVar4,*(Il2CppClass **)(pIVar3->_padding_ + 0x20)),
     pIVar5 == (Il2CppObject *)0x0)) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  if (pIVar3->max_length == 0) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pIVar3[1]._padding_ = (int)pSVar4;
  if ((_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745,
                      *(Il2CppClass **)(pIVar3->_padding_ + 0x20)), pIVar5 == (Il2CppObject *)0x0))
  {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pMVar9 = (MethodInfo *)0x0;
  if (pIVar3->max_length < 2) {
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pIVar3[1]._padding_ = (int)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
  pSVar4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
                     ((float *)(unaff_EBP + -0x68),(MethodInfo *)0x0);
  if ((pSVar4 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)pSVar4,*(Il2CppClass **)(pIVar3->_padding_ + 0x20)),
     pIVar5 == (Il2CppObject *)0x0)) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  if (pIVar3->max_length < 3) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pIVar3[1].bounds = (Il2CppArrayBounds *)pSVar4;
  if ((_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745,
                      *(Il2CppClass **)(pIVar3->_padding_ + 0x20)), pIVar5 == (Il2CppObject *)0x0))
  {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  if (pIVar3->max_length < 4) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pIVar3[1].max_length = (uint)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
  if (`struct_String_t*___cdecl_float3_ToString_mB8035CAC163C19E11A35ADFE448E5B362A56D8AF_inline(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D*,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1578CABA4FF62AC9986DD5D0BA4C26A5CCB44A6A);
    `struct_String_t*___cdecl_float3_ToString_mB8035CAC163C19E11A35ADFE448E5B362A56D8AF_inline(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D*,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar2 = Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -100);
  pIVar5 = il2cpp_value_box(pIVar2,(void *)(unaff_EBP + -0x38));
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x90);
  pIVar6 = il2cpp_value_box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var,
                            (void *)(unaff_EBP + -0x34));
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x8c);
  pIVar7 = il2cpp_value_box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var,
                            (void *)(unaff_EBP + -0x40));
  pSVar4 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                     (_stringLiteral1578CABA4FF62AC9986DD5D0BA4C26A5CCB44A6A,pIVar5,pIVar6,pIVar7,
                      (MethodInfo *)0x0);
  pSVar1 = *(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A **)(unaff_EBP + -0x44);
  if ((pSVar4 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)pSVar4,*(Il2CppClass **)(pSVar1->_padding_ + 0x20)),
     pIVar5 == (Il2CppObject *)0x0)) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  if ((uint)pSVar1->_padding_ < 5) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pSVar1[1]._padding_ = (int)pSVar4;
  if ((_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745,
                      *(Il2CppClass **)(pSVar1->_padding_ + 0x20)), pIVar5 == (Il2CppObject *)0x0))
  {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pMVar9 = (MethodInfo *)0x0;
  if ((uint)pSVar1->_padding_ < 6) {
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pSVar1[1]._padding_ = (int)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
  pSVar4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
                     ((int *)(unaff_EBP + -0x6c),(MethodInfo *)0x0);
  if ((pSVar4 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)pSVar4,*(Il2CppClass **)(pSVar1->_padding_ + 0x20)),
     pIVar5 == (Il2CppObject *)0x0)) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  if ((uint)pSVar1->_padding_ < 7) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pSVar1[1].m_Items[0] = pSVar4;
  if ((_stringLiteralD3672737537183C4C85F4CE832D31DE2C8061F96 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)_stringLiteralD3672737537183C4C85F4CE832D31DE2C8061F96,
                      *(Il2CppClass **)(pSVar1->_padding_ + 0x20)), pIVar5 == (Il2CppObject *)0x0))
  {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pMVar9 = (MethodInfo *)0x0;
  if ((uint)pSVar1->_padding_ < 8) {
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  *(String_t **)&pSVar1[1].field_0x14 = _stringLiteralD3672737537183C4C85F4CE832D31DE2C8061F96;
  pSVar4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
                     ((float *)(unaff_EBP + -0x98),(MethodInfo *)0x0);
  if ((pSVar4 != (String_t *)0x0) &&
     (pIVar5 = IsInst((Il2CppObject *)pSVar4,*(Il2CppClass **)(pSVar1->_padding_ + 0x20)),
     pIVar5 == (Il2CppObject *)0x0)) {
    pMVar9 = (MethodInfo *)0x0;
    pEVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pMVar9 = (MethodInfo *)0x0;
  if ((uint)pSVar1->_padding_ < 9) {
    pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pSVar1[2]._padding_ = (int)pSVar4;
  pSVar4 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(pSVar1,(MethodInfo *)0x0);
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}
