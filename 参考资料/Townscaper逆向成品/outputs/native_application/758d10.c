// RVA 0x758d10 | Placemaker.PropPlacement$$get_rotation
// PDB: PropPlacement_get_rotation_m1331FA8ED25738956DCC4BDE95912AF829159B9A
// Body: [[10758d10, 10758d5d]]
// Direct callees:

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
PropPlacement_get_rotation_m1331FA8ED25738956DCC4BDE95912AF829159B9A
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          PropPlacement_tD41690F5D140D9B0C43BB94609E32451E0846546 *param_1,MethodInfo *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;

  fVar3 = __real_3fb40000;
  bVar1 = (param_1->___rotationByte_2).___y_1;
  __return_storage_ptr__->___x_2 = (float)(param_1->___rotationByte_2).___x_0 * __real_3fb40000;
  bVar2 = (param_1->___rotationByte_2).___z_2;
  __return_storage_ptr__->___y_3 = (float)bVar1 * fVar3;
  __return_storage_ptr__->___z_4 = (float)bVar2 * fVar3;
  return __return_storage_ptr__;
}
