// RVA 0x8369b0 | Os.Utils.ExtraMath$$GetXYZWfromXZ
// PDB: ExtraMath_GetXYZWfromXZ_m8DCC3EBB6975D719A5BF37D5172F38DFEFF3BE46
// Body: [[108369b0, 108369de]]
// Direct callees:

float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * __cdecl
ExtraMath_GetXYZWfromXZ_m8DCC3EBB6975D719A5BF37D5172F38DFEFF3BE46
          (float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 *__return_storage_ptr__,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,float param_2,float param_3,
          MethodInfo *param_4)

{
  __return_storage_ptr__->___x_0 = param_1.___x_0;
  __return_storage_ptr__->___y_1 = param_2;
  __return_storage_ptr__->___z_2 = param_1.___y_1;
  __return_storage_ptr__->___w_3 = param_3;
  return __return_storage_ptr__;
}
