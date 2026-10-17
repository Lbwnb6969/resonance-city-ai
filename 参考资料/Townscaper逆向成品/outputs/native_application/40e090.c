// RVA 0x40e090 | Os.Hex.HexMath$$RotateCCW
// PDB: HexMath_RotateCCW_mE583F5219F4C94F9F5BE8360B6AA4B0F2441E146
// Body: [[1040e090, 1040e0c5]]
// Direct callees:

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
HexMath_RotateCCW_mE583F5219F4C94F9F5BE8360B6AA4B0F2441E146
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_1,MethodInfo *param_2)

{
  uint uVar1;

  uVar1 = __xmm_80000000800000008000000080000000;
  __return_storage_ptr__->___x_0 =
       (float)((uint)param_1.___y_1 ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->___y_1 = (float)((uint)param_1.___z_2 ^ uVar1);
  __return_storage_ptr__->___z_2 = (float)((uint)param_1.___x_0 ^ uVar1);
  return __return_storage_ptr__;
}
