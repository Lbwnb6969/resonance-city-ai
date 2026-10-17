// RVA 0x10ce050 | FuryStudios.FurySDK.Utils.DebugMenu$$AddTextField
// PDB: DebugMenu_AddTextField_m8E2197EF15309C974BA25436B9A88D0609EC89C2
// Body: [[110ce050, 110ce0cd]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 110ce1c0 DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B

TextFieldEntry_t2B2A6465BC2D58FC8FC8864FD18870251E06E7C6 * __cdecl
DebugMenu_AddTextField_m8E2197EF15309C974BA25436B9A88D0609EC89C2
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,String_t *param_2,
          StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *param_3,MethodInfo *param_4)

{
  uint uVar1;
  String_t *pSVar2;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;

  if (DAT_11523a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextFieldEntry_t2B2A6465BC2D58FC8FC8864FD18870251E06E7C6_il2cpp_TypeInfo_var
              );
    DAT_11523a75 = '\x01';
  }
  if (param_3 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
    uVar1 = param_3->_padding_;
    if (uVar1 - 1 < uVar1) {
      pSVar2 = param_3->m_Items[uVar1 - 1];
      pUVar3 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
               il2cpp_codegen_object_new
                         (
                         TextFieldEntry_t2B2A6465BC2D58FC8FC8864FD18870251E06E7C6_il2cpp_TypeInfo_var
                         );
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                (pUVar3,(MethodInfo *)0x0);
      pUVar3->___U3CU3E1__state_0 = (int)pSVar2;
      pUVar3->___U3CU3E4__this_2 =
           (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_2;
      DebugMenu_Add_m31C21E7592546A49829C003BD21405E25B2E230B
                (param_1,(MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)pUVar3,param_3,
                 (MethodInfo *)0x0);
      return (TextFieldEntry_t2B2A6465BC2D58FC8FC8864FD18870251E06E7C6 *)pUVar3;
    }
    pMVar5 = (MethodInfo *)0x0;
    pEVar4 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
