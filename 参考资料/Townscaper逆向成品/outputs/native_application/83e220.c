// RVA 0x83e220 | Placemaker.Ui.GameViewRect$$get_bottom
// PDB: GameViewRect_get_bottom_m572929477CF392B9F38CD758D954315B5C937841
// Body: [[1083e220, 1083e249]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661cc0 RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C

float __cdecl
GameViewRect_get_bottom_m572929477CF392B9F38CD758D954315B5C937841
          (GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;

  if (param_1->___sliding_5 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    VVar1 = RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C
                      (param_1->___sliding_5,(MethodInfo *)0x0);
    return VVar1.___y_1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
