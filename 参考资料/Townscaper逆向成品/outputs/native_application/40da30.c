// RVA 0x40da30 | Os.Hex.HexMath$$HexClamp
// PDB: HexMath_HexClamp_m353980FFEA59E5119D6BEC5D1D8C07BFA6CE03DB
// Body: [[1040da30, 1040dc6e]]
// Direct callees:

float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * __cdecl
HexMath_HexClamp_m353980FFEA59E5119D6BEC5D1D8C07BFA6CE03DB
          (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *__return_storage_ptr__,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_1,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_2,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_3,MethodInfo *param_4)

{
  float fVar1;

  if (param_1.___x_0 < param_2.___x_0) {
    if ((param_1.___y_1 < param_2.___y_1) ||
       (param_2.___y_1 = param_3.___y_1, param_3.___y_1 < param_1.___y_1)) {
      __return_storage_ptr__->___x_0 = param_2.___x_0;
      fVar1 = (float)((uint)param_2.___x_0 ^ __xmm_80000000800000008000000080000000);
      __return_storage_ptr__->___y_1 = param_2.___y_1;
      __return_storage_ptr__->___z_2 = fVar1 - param_2.___y_1;
      return __return_storage_ptr__;
    }
    if ((param_2.___z_2 <= param_1.___z_2) &&
       (param_2.___z_2 = param_3.___z_2, param_1.___z_2 <= param_3.___z_2)) {
      fVar1 = (param_2.___x_0 - param_1.___x_0) * __real_3f000000;
      __return_storage_ptr__->___x_0 = param_1.___x_0 + (param_2.___x_0 - param_1.___x_0);
      __return_storage_ptr__->___y_1 = param_1.___y_1 - fVar1;
      __return_storage_ptr__->___z_2 = param_1.___z_2 - fVar1;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->___x_0 = param_2.___x_0;
    fVar1 = (float)((uint)param_2.___x_0 ^ __xmm_80000000800000008000000080000000);
    __return_storage_ptr__->___z_2 = param_2.___z_2;
    __return_storage_ptr__->___y_1 = fVar1 - param_2.___z_2;
    return __return_storage_ptr__;
  }
  if (param_3.___x_0 < param_1.___x_0) {
    if (param_1.___y_1 < param_2.___y_1) {
      __return_storage_ptr__->___x_0 = param_3.___x_0;
      fVar1 = (float)((uint)param_3.___x_0 ^ __xmm_80000000800000008000000080000000);
      __return_storage_ptr__->___y_1 = param_2.___y_1;
      __return_storage_ptr__->___z_2 = fVar1 - param_2.___y_1;
      return __return_storage_ptr__;
    }
    if (param_1.___y_1 <= param_3.___y_1) {
      if ((param_2.___z_2 <= param_1.___z_2) &&
         (param_2.___z_2 = param_3.___z_2, param_1.___z_2 <= param_3.___z_2)) {
        fVar1 = (param_1.___x_0 - param_3.___x_0) * __real_3f000000;
        __return_storage_ptr__->___x_0 = param_1.___x_0 - (param_1.___x_0 - param_3.___x_0);
        __return_storage_ptr__->___y_1 = param_1.___y_1 + fVar1;
        __return_storage_ptr__->___z_2 = param_1.___z_2 + fVar1;
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->___x_0 = param_3.___x_0;
      fVar1 = (float)((uint)param_3.___x_0 ^ __xmm_80000000800000008000000080000000);
      __return_storage_ptr__->___z_2 = param_2.___z_2;
      __return_storage_ptr__->___y_1 = fVar1 - param_2.___z_2;
      return __return_storage_ptr__;
    }
    fVar1 = (float)((uint)param_2.___x_0 ^ __xmm_80000000800000008000000080000000);
    __return_storage_ptr__->___x_0 = param_3.___x_0;
    __return_storage_ptr__->___y_1 = param_3.___y_1;
    __return_storage_ptr__->___z_2 = fVar1 - param_3.___y_1;
    return __return_storage_ptr__;
  }
  if ((param_2.___y_1 <= param_1.___y_1) &&
     (param_2.___y_1 = param_3.___y_1, param_1.___y_1 <= param_3.___y_1)) {
    if ((param_2.___z_2 <= param_1.___z_2) &&
       (param_2.___z_2 = param_3.___z_2, param_1.___z_2 <= param_3.___z_2)) {
      __return_storage_ptr__->___x_0 = (float)(int)param_1._0_8_;
      __return_storage_ptr__->___y_1 = (float)(int)((ulonglong)param_1._0_8_ >> 0x20);
      __return_storage_ptr__->___z_2 = param_1.___z_2;
      return __return_storage_ptr__;
    }
    fVar1 = (param_2.___z_2 - param_1.___z_2) * __real_3f000000;
    __return_storage_ptr__->___x_0 = param_1.___x_0 - fVar1;
    __return_storage_ptr__->___y_1 = param_1.___y_1 - fVar1;
    __return_storage_ptr__->___z_2 = param_1.___z_2 + (param_2.___z_2 - param_1.___z_2);
    return __return_storage_ptr__;
  }
  if ((param_2.___z_2 <= param_1.___z_2) &&
     (param_2.___z_2 = param_3.___z_2, param_1.___z_2 <= param_3.___z_2)) {
    fVar1 = (param_2.___y_1 - param_1.___y_1) * __real_3f000000;
    __return_storage_ptr__->___x_0 = param_1.___x_0 - fVar1;
    __return_storage_ptr__->___y_1 = param_1.___y_1 + (param_2.___y_1 - param_1.___y_1);
    __return_storage_ptr__->___z_2 = param_1.___z_2 - fVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->___z_2 = param_2.___z_2;
  fVar1 = (float)((uint)param_2.___z_2 ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->___y_1 = param_2.___y_1;
  __return_storage_ptr__->___x_0 = fVar1 - param_2.___y_1;
  return __return_storage_ptr__;
}
