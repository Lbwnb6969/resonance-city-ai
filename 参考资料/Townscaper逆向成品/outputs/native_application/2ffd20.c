// RVA 0x2ffd20 | Placemaker.Ui.SunButton$$SetGamepad
// PDB: SunButton_SetGamepad_m3A686B11E1F42057001AD2CAC1501FC26C33128E
// Body: [[102ffd20, 102ffd40]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
SunButton_SetGamepad_m3A686B11E1F42057001AD2CAC1501FC26C33128E
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,bool param_2,
          MethodInfo *param_3)

{
  SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *pSVar1;

  if (param_2) {
    pSVar1 = param_1->___sliderBoth_16;
  }
  else {
    pSVar1 = (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *)0x0;
  }
  if (param_1 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0) {
    param_1->___currentSlider_24 = pSVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
