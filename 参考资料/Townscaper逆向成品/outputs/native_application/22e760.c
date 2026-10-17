// RVA 0x22e760 | Os.Utils.ByteFloat3$$get_normal
// PDB: ByteFloat3_get_normal_m9622B0984E936216C851030A718AB685E3404D40
// Body: [[1022e760, 1022e7ce]]
// Direct callees:

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ByteFloat3_get_normal_m9622B0984E936216C851030A718AB685E3404D40
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 *param_1,MethodInfo *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar5 = __real_3b800000;
  fVar3 = __real_3f800000;
  bVar1 = param_1->___y_1;
  bVar2 = param_1->___z_2;
  fVar4 = (float)param_1->___x_0 * __real_3b800000;
  __return_storage_ptr__->___x_2 = (fVar4 + fVar4) - __real_3f800000;
  fVar4 = (float)bVar1 * fVar5;
  __return_storage_ptr__->___y_3 = (fVar4 + fVar4) - fVar3;
  fVar5 = (float)bVar2 * fVar5;
  __return_storage_ptr__->___z_4 = (fVar5 + fVar5) - fVar3;
  return __return_storage_ptr__;
}
