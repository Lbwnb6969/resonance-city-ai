// RVA 0x110c447 | Recovered.function.called_by_110c380
// PDB: FUN_1110c447
// Body: [[1110c447, 1110c524] [1110c538, 1110c556]]
// Direct callees:
// 1003e770 SetAt
// 101280f0 il2cpp_runtime_class_init
// 1018e500 IsInst
// 1018e700 il2cpp_codegen_get_array_type_mismatch_exception
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10c9f6b0 AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared
// 10f08cb0 String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190
// 10f09b60 String_TrimStart_m02B916CA047749DD55A03278F4A96FBA62C8935A

void FUN_1110c447(void)

{
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *in_EAX;
  String_t *pSVar1;
  Il2CppObject *pIVar2;
  Exception_t *pEVar3;
  Il2CppObject **ppIVar4;
  AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *unaff_EBX;
  int unaff_EBP;
  uint uVar5;
  MethodInfo *pMVar6;

  uVar5 = 0;
  if (in_EAX != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
    ppIVar4 = in_EAX->m_Items;
    while( true ) {
      *(Il2CppObject ***)(unaff_EBP + -0x14) = ppIVar4;
      if (in_EAX->_padding_ <= (int)uVar5) {
        AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared
                  (unaff_EBX,SUB41(in_EAX,0),
                   AsyncRequest_1_Success_mB44B2E2E3D74BF98197AE575514DC6E2231A5CA6_RuntimeMethod_var
                  );
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      if ((uint)in_EAX->_padding_ <= uVar5) {
        pMVar6 = (MethodInfo *)0x0;
        pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar3,pMVar6);
      }
      if ((unaff_EBX[1]._padding_ == 0) || ((String_t *)*ppIVar4 == (String_t *)0x0)) break;
      pSVar1 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190
                         ((String_t *)*ppIVar4,*(int *)(unaff_EBX[1]._padding_ + 8),
                          (MethodInfo *)0x0);
      if ((DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var);
      }
      if (pSVar1 == (String_t *)0x0) break;
      pSVar1 = String_TrimStart_m02B916CA047749DD55A03278F4A96FBA62C8935A
                         (pSVar1,*(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 **)
                                  DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var
                                  ->static_fields,(MethodInfo *)0x0);
      if (pSVar1 != (String_t *)0x0) {
        pIVar2 = IsInst((Il2CppObject *)pSVar1,*(Il2CppClass **)(in_EAX->_padding_ + 0x20));
        if (pIVar2 == (Il2CppObject *)0x0) {
          pMVar6 = (MethodInfo *)0x0;
          pEVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar3,pMVar6);
        }
      }
      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                (in_EAX,uVar5,(Il2CppObject *)pSVar1);
      uVar5 = uVar5 + 1;
      unaff_EBX = *(AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD **)(unaff_EBP + 8);
      ppIVar4 = (Il2CppObject **)(*(int *)(unaff_EBP + -0x14) + 4);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
