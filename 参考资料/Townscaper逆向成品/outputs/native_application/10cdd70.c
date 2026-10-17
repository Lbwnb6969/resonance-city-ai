// RVA 0x10cdd70 | FuryStudios.FurySDK.Utils.DebugMenu$$AddButton
// PDB: DebugMenu_AddButton_m8A6034174EA46AE6DBA9EB0E1C4CBA36DBFDA0D9
// Body: [[110cdd70, 110cde58]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10f084f0 String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B
// 110ce1c0 DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B

ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 * __cdecl
DebugMenu_AddButton_m8A6034174EA46AE6DBA9EB0E1C4CBA36DBFDA0D9
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_2,String_t *param_3,
          MethodInfo *param_4)

{
  uint uVar1;
  String_t *pSVar2;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar3;
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar4;
  ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 *pBVar5;
  Exception_t *pEVar6;
  MethodInfo *pMVar7;

  if (DAT_11523a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    DAT_11523a72 = '\x01';
  }
  pCVar3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
           il2cpp_array_new_specific
                     (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,1);
  if (pCVar3 != (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) {
    if (pCVar3->_padding_ == 0) {
      pMVar7 = (MethodInfo *)0x0;
      pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar6,pMVar7);
    }
    pCVar3->m_Items[0] = L'/';
    if (param_3 != (String_t *)0x0) {
      pSVar4 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B
                         (param_3,pCVar3,(MethodInfo *)0x0);
      if (DAT_11523a73 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978_il2cpp_TypeInfo_var
                  );
        DAT_11523a73 = '\x01';
      }
      if (pSVar4 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
        uVar1 = pSVar4->_padding_;
        if (uVar1 - 1 < uVar1) {
          pSVar2 = pSVar4->m_Items[uVar1 - 1];
          pBVar5 = (ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 *)
                   il2cpp_codegen_object_new
                             (
                             ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978_il2cpp_TypeInfo_var
                             );
          U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                    ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pBVar5,
                     (MethodInfo *)0x0);
          pBVar5->___callback_2 = param_2;
          pBVar5->_padding_ = (int)pSVar2;
          pBVar5->___debugMenu_3 = param_1;
          DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B
                    (param_1,(MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)pBVar5,pSVar4,
                     (MethodInfo *)0x0);
          return pBVar5;
        }
        pMVar7 = (MethodInfo *)0x0;
        pEVar6 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
