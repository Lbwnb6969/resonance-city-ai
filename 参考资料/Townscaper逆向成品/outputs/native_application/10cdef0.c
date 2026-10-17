// RVA 0x10cdef0 | FuryStudios.FurySDK.Utils.DebugMenu$$AddLabel
// PDB: DebugMenu_AddLabel_m7739BA82999750A490B59736D85327CB2D5B4F9F
// Body: [[110cdef0, 110cdf67]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 110ce1c0 DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B

LabelEntry_t1CFCC0E98A51F61E2829703CD00245F80E21BEDD * __cdecl
DebugMenu_AddLabel_m7739BA82999750A490B59736D85327CB2D5B4F9F
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,
          StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *param_2,MethodInfo *param_3)

{
  uint uVar1;
  String_t *pSVar2;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;

  if (DAT_11523a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LabelEntry_t1CFCC0E98A51F61E2829703CD00245F80E21BEDD_il2cpp_TypeInfo_var);
    DAT_11523a71 = '\x01';
  }
  if (param_2 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
    uVar1 = param_2->_padding_;
    if (uVar1 - 1 < uVar1) {
      pSVar2 = param_2->m_Items[uVar1 - 1];
      pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
               il2cpp_codegen_object_new
                         (LabelEntry_t1CFCC0E98A51F61E2829703CD00245F80E21BEDD_il2cpp_TypeInfo_var);
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                (pUVar3,(MethodInfo *)0x0);
      pUVar3->___U3CU3E1__state_0 = (int)pSVar2;
      DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B
                (param_1,(MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)pUVar3,param_2,
                 (MethodInfo *)0x0);
      return (LabelEntry_t1CFCC0E98A51F61E2829703CD00245F80E21BEDD *)pUVar3;
    }
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
