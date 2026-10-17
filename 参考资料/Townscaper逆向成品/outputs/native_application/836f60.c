// RVA 0x836f60 | Os.Utils.ExtraMath$$Rotate90Y
// PDB: ExtraMath_Rotate90Y_mF84A12A4E970068D2E4F0E8730F7337E67F4BEA0
// Body: [[10836f60, 10836f8b]]
// Direct callees:

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ExtraMath_Rotate90Y_mF84A12A4E970068D2E4F0E8730F7337E67F4BEA0
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,MethodInfo *param_2)

{
  __return_storage_ptr__->___x_2 = param_1.___z_4;
  __return_storage_ptr__->___y_3 = param_1.___y_3;
  __return_storage_ptr__->___z_4 =
       (float)((uint)param_1.___x_2 ^ __xmm_80000000800000008000000080000000);
  return __return_storage_ptr__;
}
