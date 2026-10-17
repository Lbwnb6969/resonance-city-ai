// RVA 0xe13a30 | Placemaker.GridGenerator$$HexToPlane
// PDB: GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// Body: [[10e13a30, 10e13abc]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040ddd0 HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_1,MethodInfo *param_2)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;

  if (DAT_11522654 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522654 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar1 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(param_1,(MethodInfo *)0x0);
  param_1.___z_2 = fVar1.___y_1;
  fVar1.___y_1 = param_1.___z_2 * __real_3df925fe;
  fVar1.___x_0 = param_1.___y_1 * __real_3df925fe;
  return fVar1;
}
