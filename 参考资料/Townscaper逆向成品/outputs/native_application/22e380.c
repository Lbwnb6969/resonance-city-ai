// RVA 0x22e380 | Os.Utils.ByteFloat2$$op_Equality
// PDB: ByteFloat2_op_Equality_m397CA49EC9BF7CBAC12D5CFA3346E3ACF0CFEC90
// Body: [[1022e380, 1022e3a1]]
// Direct callees:

bool __cdecl
ByteFloat2_op_Equality_m397CA49EC9BF7CBAC12D5CFA3346E3ACF0CFEC90
          (ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 param_1,
          ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 param_2,MethodInfo *param_3)

{
  if (param_1.___x_0 != param_2.___x_0) {
    return false;
  }
  return param_1.___y_1 == param_2.___y_1;
}
