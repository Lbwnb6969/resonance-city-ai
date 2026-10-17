// RVA 0x3efdd0 | Placemaker.Quads.Vert$$get_worldPos
// PDB: Vert_get_worldPos_m1B44E5C719AA8A0553AD35127D6E56313CEF5AFC
// Body: [[103efdd0, 103efe59]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
Vert_get_worldPos_m1B44E5C719AA8A0553AD35127D6E56313CEF5AFC
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *param_1,MethodInfo *param_2)

{
  float fVar1;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar2;
  float fVar3;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_10;

  if (DAT_1151c90d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151c90d = '\x01';
  }
  local_10.___y_1 = (param_1->___planePos_1).___x_0;
  local_10.___z_2 = (param_1->___planePos_1).___y_1;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar2.___y_1 = local_10.___z_2;
  fVar2.___x_0 = local_10.___y_1;
  pfVar4 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                     (&local_10,fVar2,0.0,(MethodInfo *)0x0);
  fVar3 = pfVar4->___y_1;
  fVar1 = pfVar4->___z_2;
  __return_storage_ptr__->___x_0 = pfVar4->___x_0;
  __return_storage_ptr__->___y_1 = fVar3;
  __return_storage_ptr__->___z_2 = fVar1;
  return __return_storage_ptr__;
}
