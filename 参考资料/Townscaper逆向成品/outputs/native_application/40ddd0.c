// RVA 0x40ddd0 | Os.Hex.HexMath$$HexToPlane
// PDB: HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69
// Body: [[1040ddd0, 1040de6c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_1,MethodInfo *param_2)

{
  void *pvVar1;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar2;

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
  fVar2.___y_1 = param_1.___x_0 * *(float *)((int)pvVar1 + 8) +
                 param_1.___y_1 * *(float *)((int)pvVar1 + 0x10) +
                 param_1.___z_2 * *(float *)((int)pvVar1 + 0x18);
  fVar2.___x_0 = param_1.___x_0 * *(float *)((int)pvVar1 + 4) +
                 param_1.___y_1 * *(float *)((int)pvVar1 + 0xc) +
                 param_1.___z_2 * *(float *)((int)pvVar1 + 0x14);
  return fVar2;
}
