// RVA 0x10cde60 | FuryStudios.FurySDK.Utils.DebugMenu$$AddButton
// PDB: DebugMenu_AddButton_mC1B2639FE99BA2FF1A866903CE36FB4905B08D58
// Body: [[110cde60, 110cdee1]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 110ce1c0 DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B

ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 * __cdecl
DebugMenu_AddButton_mC1B2639FE99BA2FF1A866903CE36FB4905B08D58
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_2,
          StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *param_3,MethodInfo *param_4)

{
  uint uVar1;
  String_t *pSVar2;
  ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 *pBVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;

  if (DAT_11523a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978_il2cpp_TypeInfo_var);
    DAT_11523a73 = '\x01';
  }
  if (param_3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
    uVar1 = param_3->_padding_;
    if (uVar1 - 1 < uVar1) {
      pSVar2 = param_3->m_Items[uVar1 - 1];
      pBVar3 = (ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978 *)
               il2cpp_codegen_object_new
                         (ButtonEntry_tAFF9133AE7228CAA250AF3D7692C8F51996A5978_il2cpp_TypeInfo_var)
      ;
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pBVar3,
                 (MethodInfo *)0x0);
      pBVar3->___callback_2 = param_2;
      pBVar3->_padding_ = (int)pSVar2;
      pBVar3->___debugMenu_3 = param_1;
      DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B
                (param_1,(MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)pBVar3,param_3,
                 (MethodInfo *)0x0);
      return pBVar3;
    }
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
