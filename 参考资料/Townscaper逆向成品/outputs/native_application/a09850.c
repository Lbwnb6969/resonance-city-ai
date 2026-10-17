// RVA 0xa09850 | Placemaker.ShadowBaker$$GetQuaternion
// PDB: ShadowBaker_GetQuaternion_mFDA03C11B9FE1934493A2E2B62CA951AB5E460F1
// Body: [[10a09850, 10a098c2]]
// Direct callees:
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __cdecl
ShadowBaker_GetQuaternion_mFDA03C11B9FE1934493A2E2B62CA951AB5E460F1
          (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *__return_storage_ptr__,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_18;
  float local_8;

  local_8 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                      (2.0,90.0,param_1.___y_1,(MethodInfo *)0x0);
  pQVar4 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                     (&local_18,local_8,param_1.___x_0 * __real_43b40000,0.0,(MethodInfo *)0x0);
  fVar1 = pQVar4->___y_1;
  fVar2 = pQVar4->___z_2;
  fVar3 = pQVar4->___w_3;
  __return_storage_ptr__->___x_0 = pQVar4->___x_0;
  __return_storage_ptr__->___y_1 = fVar1;
  __return_storage_ptr__->___z_2 = fVar2;
  __return_storage_ptr__->___w_3 = fVar3;
  return __return_storage_ptr__;
}
