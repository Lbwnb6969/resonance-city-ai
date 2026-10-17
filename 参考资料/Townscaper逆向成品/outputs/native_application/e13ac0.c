// RVA 0xe13ac0 | Placemaker.GridGenerator$$HexToPlane
// PDB: GridGenerator_HexToPlane_m5111038CB66C215D42B4436F75F77882EF48039F
// Body: [[10e13ac0, 10e13b78]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040ddd0 HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
GridGenerator_HexToPlane_m5111038CB66C215D42B4436F75F77882EF48039F
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_1,MethodInfo *param_2)

{
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar1;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar2;

  if (DAT_11522657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522657 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar1.___y_1 = (float)param_1.___y_1;
  fVar1.___x_0 = (float)param_1.___x_0;
  fVar1.___z_2 = (float)param_1.___z_2;
  fVar2 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar1,(MethodInfo *)0x0);
  param_1.___z_2 = (int)fVar2.___y_1;
  fVar2.___y_1 = (float)param_1.___z_2 * __real_3df925fe;
  fVar2.___x_0 = (float)param_1.___y_1 * __real_3df925fe;
  return fVar2;
}
