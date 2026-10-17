// RVA 0x40de70 | Os.Hex.HexMath$$HexToPlane
// PDB: HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C
// Body: [[1040de70, 1040df66]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
HexMath_HexToPlane_mD65F5C36345F5C1D49814908E83D56417CCBBB9C
          (float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,MethodInfo *param_2)

{
  void *pvVar1;
  float fVar2;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar3;

  if (DAT_1151ca88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ca88 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar2 = (float)((uint)param_1.___x_0 ^ __xmm_80000000800000008000000080000000) - param_1.___y_1;
  if (DAT_1151ca87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ca87 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  pvVar1 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  fVar3.___y_1 = param_1.___x_0 * *(float *)((int)pvVar1 + 8) +
                 param_1.___y_1 * *(float *)((int)pvVar1 + 0x10) +
                 *(float *)((int)pvVar1 + 0x18) * fVar2;
  fVar3.___x_0 = param_1.___x_0 * *(float *)((int)pvVar1 + 4) +
                 param_1.___y_1 * *(float *)((int)pvVar1 + 0xc) +
                 *(float *)((int)pvVar1 + 0x14) * fVar2;
  return fVar3;
}
