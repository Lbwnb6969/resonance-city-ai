// RVA 0x10d2ee0 | FuryStudios.FurySDK.TableEditAttribute$$.ctor
// PDB: TableEditAttribute__ctor_mB9B2C9157D7B6F56D57B04DDF3D0CEF5084A82D6
// Body: [[110d2ee0, 110d2f5f]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10285fc0 UnityTlsProvider__ctor_m59FD632B779113F9605538F8F598A53D1AC6985B
// 10f084f0 String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B

void __cdecl
TableEditAttribute__ctor_mB9B2C9157D7B6F56D57B04DDF3D0CEF5084A82D6
          (TableEditAttribute_t5768976CD6773187DB05A8B11D40EF64782CEFA4 *param_1,Type_t *param_2,
          String_t *param_3,MethodInfo *param_4)

{
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar1;
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;

  if (DAT_11523ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    DAT_11523ab2 = '\x01';
  }
  UnityTlsProvider__ctor_m59FD632B779113F9605538F8F598A53D1AC6985B
            ((UnityTlsProvider_t747B0278CE6D579418AE990C2F0CA3C3AB9A29DC *)param_1,(MethodInfo *)0x0
            );
  param_1->___U3COwnerU3Ek__BackingField_0 = param_2;
  pCVar1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
           il2cpp_array_new_specific
                     (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,1);
  if (pCVar1 != (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) {
    if (pCVar1->_padding_ == 0) {
      pMVar4 = (MethodInfo *)0x0;
      pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar3,pMVar4);
    }
    pCVar1->m_Items[0] = L'.';
    if (param_3 != (String_t *)0x0) {
      pSVar2 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B
                         (param_3,pCVar1,(MethodInfo *)0x0);
      param_1->___U3CFieldNamesU3Ek__BackingField_1 = pSVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
