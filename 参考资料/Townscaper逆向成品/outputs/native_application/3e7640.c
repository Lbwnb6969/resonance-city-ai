// RVA 0x3e7640 | Placemaker.Ui.UiMaster$$get_clickEffect
// PDB: UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
// Body: [[103e7640, 103e7656]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 * __cdecl
UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  if (param_1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    return param_1->___worldMaster_5->___clickEffect_14;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
