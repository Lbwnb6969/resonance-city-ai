// RVA 0x1148690 | DeleteFromBuild$$.ctor
// PDB: DeleteFromBuild__ctor_m560CE1988E18F636243D7EC8CDD44CD9ED3769E6
// Body: [[11148690, 1114872f]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
DeleteFromBuild__ctor_m560CE1988E18F636243D7EC8CDD44CD9ED3769E6
          (DeleteFromBuild_t9821908854B174A5D1D275DAE3D2DAD882A927D5 *param_1,MethodInfo *param_2)

{
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar1;
  Il2CppObject *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;

  if (DAT_11524769 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral741CBD0E9658F383F00758DE646E13CA6F8E724F);
    DAT_11524769 = '\x01';
  }
  pSVar1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)
           il2cpp_array_new_specific
                     (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var,1);
  if (pSVar1 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
    if ((_stringLiteral741CBD0E9658F383F00758DE646E13CA6F8E724F != (String_t *)0x0) &&
       (pIVar2 = IsInst((Il2CppObject *)_stringLiteral741CBD0E9658F383F00758DE646E13CA6F8E724F,
                        *(Il2CppClass **)(pSVar1->_padding_ + 0x20)), pIVar2 == (Il2CppObject *)0x0)
       ) {
      pMVar4 = (MethodInfo *)0x0;
      pEVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar3,pMVar4);
    }
    if (pSVar1->_padding_ == 0) {
      pMVar4 = (MethodInfo *)0x0;
      pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar3,pMVar4);
    }
    pSVar1->m_Items[0] = _stringLiteral741CBD0E9658F383F00758DE646E13CA6F8E724F;
    param_1->___mustHaveCompileDefines_4 = pSVar1;
    Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
