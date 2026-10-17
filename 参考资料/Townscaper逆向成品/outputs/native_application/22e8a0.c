// RVA 0x22e8a0 | Os.Utils.ByteFloat3$$op_Explicit
// PDB: ByteFloat3_op_Explicit_m42A2818744434505AC14E80B1636E17034D86F3C
// Body: [[1022e8a0, 1022e8ea]]
// Direct callees:

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ByteFloat3_op_Explicit_m42A2818744434505AC14E80B1636E17034D86F3C
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 param_1,MethodInfo *param_2)

{
  float fVar1;

  fVar1 = __real_3b800000;
  __return_storage_ptr__->___x_2 = (float)param_1.___x_0 * __real_3b800000;
  __return_storage_ptr__->___y_3 = (float)param_1.___y_1 * fVar1;
  __return_storage_ptr__->___z_4 = (float)param_1.___z_2 * fVar1;
  return __return_storage_ptr__;
}
