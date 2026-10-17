// RVA 0x758ba0 | Placemaker.PropPlacement$$GetMatrix
// PDB: PropPlacement_GetMatrix_m3C1162EFB75CB7C68E6723B2EA75A2B7E13D7924
// Body: [[10758ba0, 10758d0b]]
// Direct callees:
// 1022e8a0 ByteFloat3_op_Explicit_m42A2818744434505AC14E80B1636E17034D86F3C
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10a04800 SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
// 10a452c0 Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5

Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __cdecl
PropPlacement_GetMatrix_m3C1162EFB75CB7C68E6723B2EA75A2B7E13D7924
          (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *__return_storage_ptr__,
          PropPlacement_tD41690F5D140D9B0C43BB94609E32451E0846546 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar7;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar10;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_8c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_40;
  undefined8 local_30;
  undefined8 local_24;
  undefined8 local_18;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_10;

  pfVar7 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                     (&local_10,param_1->___pos_0,(MethodInfo *)0x0);
  local_18._0_4_ = pfVar7->___x_0;
  local_18._4_4_ = pfVar7->___y_1;
  fVar1 = pfVar7->___z_2;
  local_10.___z_2 = (float)(param_1->___rotationByte_2).___z_2 * __real_3fb40000;
  pQVar8 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                     (&local_40,(float)(param_1->___rotationByte_2).___x_0 * __real_3fb40000,
                      (float)(param_1->___rotationByte_2).___y_1 * __real_3fb40000,local_10.___z_2,
                      (MethodInfo *)0x0);
  local_40.___x_0 = pQVar8->___x_0;
  local_40.___y_1 = pQVar8->___y_1;
  local_40.___z_2 = pQVar8->___z_2;
  local_40.___w_3 = pQVar8->___w_3;
  pVVar9 = ByteFloat3_op_Explicit_m42A2818744434505AC14E80B1636E17034D86F3C
                     (&local_4c,param_1->___scale_1,(MethodInfo *)0x0);
  local_30._0_4_ = pVVar9->___x_2;
  local_30._4_4_ = pVVar9->___y_3;
  local_10.___x_0 = pVVar9->___x_2;
  local_10.___y_1 = pVVar9->___y_3;
  local_10.___z_2 = pVVar9->___z_4 * __real_40000000;
  VVar4.___z_4 = fVar1;
  VVar4.___x_2 = (float)(undefined4)local_18;
  VVar4.___y_3 = (float)local_18._4_4_;
  QVar5.___y_1 = local_40.___y_1;
  QVar5.___x_0 = local_40.___x_0;
  QVar5.___z_2 = local_40.___z_2;
  QVar5.___w_3 = local_40.___w_3;
  VVar6.___y_3 = (float)local_30._4_4_ * __real_40000000;
  VVar6.___x_2 = (float)(undefined4)local_30 * __real_40000000;
  VVar6.___z_4._0_2_ = SUB42(local_10.___z_2,0);
  VVar6.___z_4._2_1_ = (char)((uint)local_10.___z_2 >> 0x10);
  VVar6.___z_4._3_1_ = (char)((uint)local_10.___z_2 >> 0x18);
  local_24 = local_30;
  pMVar10 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5
                      (&local_8c,VVar4,QVar5,VVar6,(MethodInfo *)0x0);
  fVar1 = pMVar10->___m10_1;
  fVar2 = pMVar10->___m20_2;
  fVar3 = pMVar10->___m30_3;
  __return_storage_ptr__->___m00_0 = pMVar10->___m00_0;
  __return_storage_ptr__->___m10_1 = fVar1;
  __return_storage_ptr__->___m20_2 = fVar2;
  __return_storage_ptr__->___m30_3 = fVar3;
  fVar1 = pMVar10->___m11_5;
  fVar2 = pMVar10->___m21_6;
  fVar3 = pMVar10->___m31_7;
  __return_storage_ptr__->___m01_4 = pMVar10->___m01_4;
  __return_storage_ptr__->___m11_5 = fVar1;
  __return_storage_ptr__->___m21_6 = fVar2;
  __return_storage_ptr__->___m31_7 = fVar3;
  fVar1 = pMVar10->___m12_9;
  fVar2 = pMVar10->___m22_10;
  fVar3 = pMVar10->___m32_11;
  __return_storage_ptr__->___m02_8 = pMVar10->___m02_8;
  __return_storage_ptr__->___m12_9 = fVar1;
  __return_storage_ptr__->___m22_10 = fVar2;
  __return_storage_ptr__->___m32_11 = fVar3;
  fVar1 = pMVar10->___m13_13;
  fVar2 = pMVar10->___m23_14;
  fVar3 = pMVar10->___m33_15;
  __return_storage_ptr__->___m03_12 = pMVar10->___m03_12;
  __return_storage_ptr__->___m13_13 = fVar1;
  __return_storage_ptr__->___m23_14 = fVar2;
  __return_storage_ptr__->___m33_15 = fVar3;
  return __return_storage_ptr__;
}
