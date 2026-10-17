// RVA 0x301530 | TextFps$$Update
// PDB: TextFps_Update_mD16446EA1996421C8943D3C7CCD5CE775A7010CD
// Body: [[10301530, 10301595]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10c11740 Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
TextFps_Update_mD16446EA1996421C8943D3C7CCD5CE775A7010CD
          (TextFps_t2E68405F76B6D147E838580426F41D0245F129A0 *param_1,MethodInfo *param_2)

{
  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *pTVar1;
  String_t *pSVar2;

  if (DAT_1151c219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386);
    DAT_1151c219 = '\x01';
  }
  pTVar1 = param_1->___textComponent_4;
  pSVar2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010
                     (&param_1->___currentFps_6,(MethodInfo *)0x0);
  pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                     (pSVar2,_stringLiteralDB41D02FAEC024FEA204D29ED11CEF86220D2386,
                      (MethodInfo *)0x0);
  if (pTVar1 != (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x314))
              (pTVar1,pSVar2,*(undefined4 *)(pTVar1->_padding_ + 0x318));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
