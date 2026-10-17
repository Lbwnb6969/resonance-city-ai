// RVA 0x836840 | Os.Utils.ExtraMath$$GetClampedMagnitude
// PDB: ExtraMath_GetClampedMagnitude_mD672B0998923CC7185D9FC4B53521359092BD9DA
// Body: [[10836840, 108368da]]
// Direct callees:
// 10196010 _libm_sse2_sqrt_precise
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ExtraMath_GetClampedMagnitude_mD672B0998923CC7185D9FC4B53521359092BD9DA
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,float param_2,
          MethodInfo *param_3)

{
  double dVar1;
  float fVar2;

  fVar2 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                    (&param_1,(MethodInfo *)0x0);
  if (fVar2 <= param_2 * param_2) {
    __return_storage_ptr__->___x_2 = param_1.___x_2;
    __return_storage_ptr__->___y_3 = param_1.___y_3;
    __return_storage_ptr__->___z_4 = param_1.___z_4;
    return __return_storage_ptr__;
  }
  dVar1 = (double)fVar2;
  _libm_sse2_sqrt_precise();
  fVar2 = (float)dVar1;
  __return_storage_ptr__->___x_2 = (param_1.___x_2 / fVar2) * param_2;
  __return_storage_ptr__->___y_3 = (param_1.___y_3 / fVar2) * param_2;
  __return_storage_ptr__->___z_4 = (param_1.___z_4 / fVar2) * param_2;
  return __return_storage_ptr__;
}
