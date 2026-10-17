// RVA 0x22e7d0 | Os.Utils.ByteFloat3$$op_Equality
// PDB: ByteFloat3_op_Equality_m6905AC38FB99591AAE83853C840101500EDABA2C
// Body: [[1022e7d0, 1022e7f1]]
// Direct callees:

bool __cdecl
ByteFloat3_op_Equality_m6905AC38FB99591AAE83853C840101500EDABA2C
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 param_1,
          ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 param_2,MethodInfo *param_3)

{
  if ((param_1.___x_0 == param_2.___x_0) && (param_1.___y_1 == param_2.___y_1)) {
    return param_1.___z_2 == param_2.___z_2;
  }
  return false;
}
