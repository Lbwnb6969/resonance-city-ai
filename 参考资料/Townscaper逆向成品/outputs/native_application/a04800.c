// RVA 0xa04800 | Os.Utils.SbyteFloat3$$op_Explicit
// PDB: SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
// Body: [[10a04800, 10a0484a]]
// Direct callees:

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 param_1,MethodInfo *param_2)

{
  float fVar1;

  fVar1 = __real_437e0000;
  __return_storage_ptr__->___x_0 = (float)(int)param_1.___x_2 / __real_437e0000;
  __return_storage_ptr__->___y_1 = (float)(int)param_1.___y_3 / fVar1;
  __return_storage_ptr__->___z_2 = (float)(int)param_1.___z_4 / fVar1;
  return __return_storage_ptr__;
}
