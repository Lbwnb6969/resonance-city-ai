// RVA 0x22e460 | Os.Utils.ByteFloat2$$op_Explicit
// PDB: ByteFloat2_op_Explicit_mA190C650DB530CC9E7D6733D1B7263F03A1518A5
// Body: [[1022e460, 1022e4a5]]
// Direct callees:

Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 __cdecl
ByteFloat2_op_Explicit_mA190C650DB530CC9E7D6733D1B7263F03A1518A5
          (ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;

  VVar1.___y_1 = (float)((ushort)param_1 >> 8) * __real_3b800000;
  VVar1.___x_0 = (float)param_1.___x_0 * __real_3b800000;
  return VVar1;
}
