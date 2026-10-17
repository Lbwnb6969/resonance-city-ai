// RVA 0x22e8f0 | Os.Utils.ByteFloat3$$op_Inequality
// PDB: ByteFloat3_op_Inequality_m9A3EE4EDF46A29B0F6F6291FFFCA07E78BB32AC5
// Body: [[1022e8f0, 1022e911]]
// Direct callees:

bool __cdecl
ByteFloat3_op_Inequality_m9A3EE4EDF46A29B0F6F6291FFFCA07E78BB32AC5
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 param_1,
          ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 param_2,MethodInfo *param_3)

{
  if ((param_1.___x_0 == param_2.___x_0) && (param_1.___y_1 == param_2.___y_1)) {
    return param_1.___z_2 != param_2.___z_2;
  }
  return true;
}
