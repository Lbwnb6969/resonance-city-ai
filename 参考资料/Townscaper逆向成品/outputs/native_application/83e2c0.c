// RVA 0x83e2c0 | Placemaker.Ui.GameViewRect$$get_top
// PDB: GameViewRect_get_top_mB6BDF5D53348B1130A70D45444DE2A00E04005E9
// Body: [[1083e2c0, 1083e2fa]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661ba0 RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6

float __cdecl
GameViewRect_get_top_mB6BDF5D53348B1130A70D45444DE2A00E04005E9
          (GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;

  if (param_1->___sliding_5 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    VVar1 = RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
                      (param_1->___sliding_5,(MethodInfo *)0x0);
    return (float)((uint)VVar1.___y_1 ^ __xmm_80000000800000008000000080000000);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
