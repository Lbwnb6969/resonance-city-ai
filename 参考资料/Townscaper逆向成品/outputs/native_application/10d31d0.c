// RVA 0x10d31d0 | FuryStudios.FurySDK.Utils.DebugMenu.<>c__DisplayClass22_0$$<Add>b__0
// PDB: U3CU3Ec__DisplayClass22_0_U3CAddU3Eb__0_m5AEE0FC1B2A337CCB535A3DEEF447E6D8990CAF8
// Body: [[110d31d0, 110d320f]]
// Direct callees:
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B

bool __cdecl
U3CU3Ec__DisplayClass22_0_U3CAddU3Eb__0_m5AEE0FC1B2A337CCB535A3DEEF447E6D8990CAF8
          (U3CU3Ec__DisplayClass22_0_tBE5F67D8DE18AB155B37AA29A0D67B52148A8728 *param_1,
          MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_2,MethodInfo *param_3)

{
  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *pSVar1;
  bool bVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;

  if (param_2 != (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) {
    pSVar1 = param_1->___path_0;
    if (pSVar1 != (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *)0x0) {
      pMVar4 = (MethodInfo *)0x0;
      if ((uint)param_1->___i_1 < (uint)pSVar1->_padding_) {
        bVar2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                          (param_2->___U3CNameU3Ek__BackingField_0,pSVar1->m_Items[param_1->___i_1],
                           (MethodInfo *)0x0);
        return bVar2;
      }
      pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar3,pMVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
