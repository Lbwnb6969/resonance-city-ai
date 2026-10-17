// RVA 0x83e4b0 | Placemaker.Ui.GameViewRect$$set_top
// PDB: GameViewRect_set_top_m9F736E53F92D41FE348E319A915CC0732FBE1137
// Body: [[1083e4b0, 1083e541]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661ba0 RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
// 10662090 RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF

void __cdecl
GameViewRect_set_top_m9F736E53F92D41FE348E319A915CC0732FBE1137
          (GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *param_1,float param_2,
          MethodInfo *param_3)

{
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  float local_c;

  if (DAT_1151f415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f415 = '\x01';
  }
  pRVar1 = param_1->___sliding_5;
  if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    VVar2 = RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
                      (pRVar1,(MethodInfo *)0x0);
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    local_c = VVar2.___x_0;
    VVar2.___y_1 = (float)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
    VVar2.___x_0 = local_c;
    RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
              (pRVar1,VVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
