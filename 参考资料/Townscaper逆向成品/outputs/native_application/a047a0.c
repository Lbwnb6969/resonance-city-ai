// RVA 0xa047a0 | Os.Utils.SbyteFloat3$$get_normal
// PDB: SbyteFloat3_get_normal_mCF04D1ADE2C07EAE1A32DF6F96E9D5366D1418CE
// Body: [[10a047a0, 10a047fa]]
// Direct callees:

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
SbyteFloat3_get_normal_mCF04D1ADE2C07EAE1A32DF6F96E9D5366D1418CE
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,MethodInfo *param_2)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;

  fVar4 = __real_437e0000;
  cVar1 = param_1->___y_3;
  cVar2 = param_1->___z_4;
  fVar3 = (float)(int)param_1->___x_2 / __real_437e0000;
  __return_storage_ptr__->___x_2 = fVar3 + fVar3;
  fVar3 = (float)(int)cVar1 / fVar4;
  __return_storage_ptr__->___y_3 = fVar3 + fVar3;
  fVar4 = (float)(int)cVar2 / fVar4;
  __return_storage_ptr__->___z_4 = fVar4 + fVar4;
  return __return_storage_ptr__;
}
