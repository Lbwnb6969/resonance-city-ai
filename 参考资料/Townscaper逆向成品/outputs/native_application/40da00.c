// RVA 0x40da00 | Os.Hex.HexMath$$GetHex3
// PDB: HexMath_GetHex3_m93C715F98C4C7C0F754D4D419756B3D546287763
// Body: [[1040da00, 1040da2a]]
// Direct callees:

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
HexMath_GetHex3_m93C715F98C4C7C0F754D4D419756B3D546287763
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,MethodInfo *param_2)

{
  float fVar1;

  __return_storage_ptr__->___x_0 = param_1.___x_0;
  fVar1 = (float)((uint)param_1.___x_0 ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->___y_1 = param_1.___y_1;
  __return_storage_ptr__->___z_2 = fVar1 - param_1.___y_1;
  return __return_storage_ptr__;
}
