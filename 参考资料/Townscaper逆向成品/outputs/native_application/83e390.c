// RVA 0x83e390 | Placemaker.Ui.GameViewRect$$set_left
// PDB: GameViewRect_set_left_m9BE07FBD56AE79550290133F9CBA6DE069079FA7
// Body: [[1083e390, 1083e417]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661cc0 RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C
// 106622e0 RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271

void __cdecl
GameViewRect_set_left_m9BE07FBD56AE79550290133F9CBA6DE069079FA7
          (GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *param_1,float param_2,
          MethodInfo *param_3)

{
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;

  if (DAT_1151f412 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f412 = '\x01';
  }
  pRVar1 = param_1->___sliding_5;
  if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    VVar2 = RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C
                      (pRVar1,(MethodInfo *)0x0);
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    VVar2.___y_1 = VVar2.___y_1;
    VVar2.___x_0 = param_2;
    RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
              (pRVar1,VVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
