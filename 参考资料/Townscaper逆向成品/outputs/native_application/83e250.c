// RVA 0x83e250 | Placemaker.Ui.GameViewRect$$get_left
// PDB: GameViewRect_get_left_m609A95AB82E08EDFDEE1BE53A0D15CD293509A85
// Body: [[1083e250, 1083e279]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661cc0 RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C

float __cdecl
GameViewRect_get_left_m609A95AB82E08EDFDEE1BE53A0D15CD293509A85
          (GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;

  if (param_1->___sliding_5 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    VVar1 = RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C
                      (param_1->___sliding_5,(MethodInfo *)0x0);
    return VVar1.___x_0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
