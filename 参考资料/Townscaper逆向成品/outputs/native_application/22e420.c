// RVA 0x22e420 | Os.Utils.ByteFloat2$$op_Explicit
// PDB: ByteFloat2_op_Explicit_m6B5F3F08007258F2CEB3F995082083A781D26E64
// Body: [[1022e420, 1022e431]]
// Direct callees:

int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 __cdecl
ByteFloat2_op_Explicit_m6B5F3F08007258F2CEB3F995082083A781D26E64
          (ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 param_1,MethodInfo *param_2)

{
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar1;

  iVar1.___x_0 = (uint)param_1.___x_0;
  iVar1.___y_1._0_2_ = (ushort)param_1 >> 8;
  iVar1.___y_1._2_2_ = 0;
  return iVar1;
}
