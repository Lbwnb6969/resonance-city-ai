// RVA 0xa04910 | Os.Utils.SbyteFloat3$$op_Multiply
// PDB: SbyteFloat3_op_Multiply_mE9EFCA46E3FBF484CF2C1BE533355BC6548837A1
// Body: [[10a04910, 10a04994]]
// Direct callees:

SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 __cdecl
SbyteFloat3_op_Multiply_mE9EFCA46E3FBF484CF2C1BE533355BC6548837A1
          (int3x3_t1164F7C264DD9B11A19FA20671EE3113194A242D param_1,
          SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 param_2,MethodInfo *param_3)

{
  *(char *)param_1.___c0_0.___x_0 =
       param_3._2_1_ * (char)param_1.___c1_1.___x_0 + param_3._1_1_ * (char)param_1.___c0_0.___z_2 +
       (char)param_1.___c0_0.___y_1 * (char)param_3;
  *(char *)(param_1.___c0_0.___x_0 + 1) =
       (char)param_1.___c2_2.___x_0 * param_3._2_1_ + (char)param_1.___c1_1.___z_2 * param_3._1_1_ +
       (char)param_1.___c1_1.___y_1 * (char)param_3;
  *(schar *)(param_1.___c0_0.___x_0 + 2) =
       param_2.___x_2 * param_3._2_1_ + (char)param_1.___c2_2.___z_2 * param_3._1_1_ +
       (char)param_1.___c2_2.___y_1 * (char)param_3;
  return param_1.___c0_0.___x_0._0_3_;
}
