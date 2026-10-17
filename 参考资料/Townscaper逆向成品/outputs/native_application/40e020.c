// RVA 0x40e020 | Os.Hex.HexMath$$PlaneToWorld
// PDB: HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// Body: [[1040e020, 1040e044]]
// Direct callees:

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,float param_2,MethodInfo *param_3
          )

{
  __return_storage_ptr__->___x_0 = param_1.___x_0;
  __return_storage_ptr__->___y_1 = param_2;
  __return_storage_ptr__->___z_2 = param_1.___y_1;
  return __return_storage_ptr__;
}
