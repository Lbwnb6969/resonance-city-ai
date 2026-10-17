// RVA 0x420760 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnInputMapped
// PDB: KeyboardAndMouseControlRemap_OnInputMapped_m2BEBB42576D37B70E359325706A7F2B80EA1E4E3
// Body: [[10420760, 10420791]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10420c40 KeyboardAndMouseControlRemap_RefreshControls_m13ED4C5DE37B41139DB961C2C42330D333E342AE
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

void __cdecl
KeyboardAndMouseControlRemap_OnInputMapped_m2BEBB42576D37B70E359325706A7F2B80EA1E4E3
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          InputMappedEventData_t40B67A839D90692520B8DFA7571EC98D9865DD61 *param_2,
          MethodInfo *param_3)

{
  if (param_1->___conflictFound_17 == false) {
    if (param_1->___inputMapper_11 == (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapper_11,(MethodInfo *)0x0);
  }
  KeyboardAndMouseControlRemap_RefreshControls_m13ED4C5DE37B41139DB961C2C42330D333E342AE
            (param_1,(MethodInfo *)0x0);
  return;
}
