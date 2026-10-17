// RVA 0x40df70 | Os.Hex.HexMath$$PlaneToHex
// PDB: HexMath_PlaneToHex_m9CB2ADE964668EF8AE96FF82BF5572580BBE5CD6
// Body: [[1040df70, 1040e015]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
HexMath_PlaneToHex_m9CB2ADE964668EF8AE96FF82BF5572580BBE5CD6
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,MethodInfo *param_2)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  if (DAT_1151ca89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ca89 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  pvVar1 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  fVar2 = param_1.___x_0 * *(float *)((int)pvVar1 + 4) +
          param_1.___y_1 * *(float *)((int)pvVar1 + 8);
  fVar3 = *(float *)((int)pvVar1 + 0x10);
  fVar4 = *(float *)((int)pvVar1 + 0x18);
  __return_storage_ptr__->___x_0 = fVar2 + fVar2;
  fVar3 = param_1.___x_0 * *(float *)((int)pvVar1 + 0xc) + param_1.___y_1 * fVar3;
  fVar4 = param_1.___x_0 * *(float *)((int)pvVar1 + 0x14) + param_1.___y_1 * fVar4;
  __return_storage_ptr__->___y_1 = fVar3 + fVar3;
  __return_storage_ptr__->___z_2 = fVar4 + fVar4;
  return __return_storage_ptr__;
}
