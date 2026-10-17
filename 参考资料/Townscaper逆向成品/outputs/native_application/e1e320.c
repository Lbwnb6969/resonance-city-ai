// RVA 0xe1e320 | Placemaker.GridGenerator$$PlaneToHex
// PDB: GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
// Body: [[10e1e320, 10e1e3ae]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040df70 HexMath_PlaneToHex_m9CB2ADE964668EF8AE96FF82BF5572580BBE5CD6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,MethodInfo *param_2)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar2;
  float fVar3;
  float fVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_10;

  if (DAT_11522658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522658 = '\x01';
  }
  fVar4 = param_1.___x_0 * ___real_4103851f;
  fVar3 = param_1.___y_1 * ___real_4103851f;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar1.___y_1 = fVar3;
  fVar1.___x_0 = fVar4;
  pfVar2 = HexMath_PlaneToHex_m9CB2ADE964668EF8AE96FF82BF5572580BBE5CD6
                     (&local_10,fVar1,(MethodInfo *)0x0);
  fVar4 = pfVar2->___y_1;
  fVar3 = pfVar2->___z_2;
  __return_storage_ptr__->___x_0 = pfVar2->___x_0;
  __return_storage_ptr__->___y_1 = fVar4;
  __return_storage_ptr__->___z_2 = fVar3;
  return __return_storage_ptr__;
}
