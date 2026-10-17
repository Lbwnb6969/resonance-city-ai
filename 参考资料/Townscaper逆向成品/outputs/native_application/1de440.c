// RVA 0x1de440 | Placemaker.Ui.KeyboardControlsMenu.<>c__DisplayClass21_0$$<OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass21_0_U3COnSetupU3Eb__3_mA6AA2A961C240247059D154A0D91E022DEB1029E
// Body: [[101de440, 101de46b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B

bool __cdecl
U3CU3Ec__DisplayClass21_0_U3COnSetupU3Eb__3_mA6AA2A961C240247059D154A0D91E022DEB1029E
          (U3CU3Ec__DisplayClass21_0_t1E72C7D5060177FDEC2ADD4AB3C2B75B12D3DB88 *param_1,
          ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (param_2 != (ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 *)0x0) {
    if (param_1->___key_0 != (ControlBindingKey_t8AEA78973EA9D7777243BEFE675B13C562714798 *)0x0) {
      bVar1 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                        (param_2->___OhAdHiaYRHUAwesgRmFbimEcbLQE_14,
                         param_1->___key_0->___actionName_4,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
