// RVA 0x74ddf0 | Placemaker.Orientation$$get_matrix
// PDB: Orientation_get_matrix_m17FCAC70C57A585778A04B146C1EE38EA8BB97D8
// Body: [[1074ddf0, 1074e028]]
// Direct callees:
// 10192150 memset
// 10a45e00 Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
// 10abecf0 ExtensionMethods_CTQuaternion_m4A9E9712734553E922C7789A7051CF06A384A0B0

Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __cdecl
Orientation_get_matrix_m17FCAC70C57A585778A04B146C1EE38EA8BB97D8
          (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *__return_storage_ptr__,
          Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *param_1,MethodInfo *param_2)

{
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar1;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar2;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar3;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar4;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar5;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar6;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar7;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar8;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar9;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_44;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_34;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_24;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_14;

  local_14.___x_0 = (float)(param_1->___int4x4_0).___c0_0.___x_0;
  local_14.___y_1 = (float)(param_1->___int4x4_0).___c0_0.___y_1;
  local_14.___z_2 = (float)(param_1->___int4x4_0).___c0_0.___z_2;
  local_14.___w_3 = (float)(param_1->___int4x4_0).___c0_0.___w_3;
  VVar4.___y_2 = local_14.___y_1;
  VVar4.___x_1 = local_14.___x_0;
  VVar4.___z_3 = local_14.___z_2;
  VVar4.___w_4 = local_14.___w_3;
  pQVar9 = ExtensionMethods_CTQuaternion_m4A9E9712734553E922C7789A7051CF06A384A0B0
                     (&local_44,VVar4,(MethodInfo *)0x0);
  local_44.___x_0 = pQVar9->___x_0;
  local_44.___y_1 = pQVar9->___y_1;
  local_44.___z_2 = pQVar9->___z_2;
  local_44.___w_3 = pQVar9->___w_3;
  local_14.___x_0 = (float)(param_1->___int4x4_0).___c1_1.___x_0;
  local_14.___y_1 = (float)(param_1->___int4x4_0).___c1_1.___y_1;
  local_14.___z_2 = (float)(param_1->___int4x4_0).___c1_1.___z_2;
  local_14.___w_3 = (float)(param_1->___int4x4_0).___c1_1.___w_3;
  VVar5.___y_2 = local_14.___y_1;
  VVar5.___x_1 = local_14.___x_0;
  VVar5.___z_3 = local_14.___z_2;
  VVar5.___w_4 = local_14.___w_3;
  pQVar9 = ExtensionMethods_CTQuaternion_m4A9E9712734553E922C7789A7051CF06A384A0B0
                     (&local_34,VVar5,(MethodInfo *)0x0);
  local_34.___x_0 = pQVar9->___x_0;
  local_34.___y_1 = pQVar9->___y_1;
  local_34.___z_2 = pQVar9->___z_2;
  local_34.___w_3 = pQVar9->___w_3;
  local_14.___x_0 = (float)(param_1->___int4x4_0).___c2_2.___x_0;
  local_14.___y_1 = (float)(param_1->___int4x4_0).___c2_2.___y_1;
  local_14.___z_2 = (float)(param_1->___int4x4_0).___c2_2.___z_2;
  local_14.___w_3 = (float)(param_1->___int4x4_0).___c2_2.___w_3;
  VVar6.___y_2 = local_14.___y_1;
  VVar6.___x_1 = local_14.___x_0;
  VVar6.___z_3 = local_14.___z_2;
  VVar6.___w_4 = local_14.___w_3;
  pQVar9 = ExtensionMethods_CTQuaternion_m4A9E9712734553E922C7789A7051CF06A384A0B0
                     (&local_24,VVar6,(MethodInfo *)0x0);
  local_24.___x_0 = pQVar9->___x_0;
  local_24.___y_1 = pQVar9->___y_1;
  local_24.___z_2 = pQVar9->___z_2;
  local_24.___w_3 = pQVar9->___w_3;
  local_14.___x_0 = (float)(param_1->___int4x4_0).___c3_3.___x_0;
  local_14.___y_1 = (float)(param_1->___int4x4_0).___c3_3.___y_1;
  local_14.___z_2 = (float)(param_1->___int4x4_0).___c3_3.___z_2;
  local_14.___w_3 = (float)(param_1->___int4x4_0).___c3_3.___w_3;
  VVar7.___y_2 = local_14.___y_1;
  VVar7.___x_1 = local_14.___x_0;
  VVar7.___z_3 = local_14.___z_2;
  VVar7.___w_4 = local_14.___w_3;
  pQVar9 = ExtensionMethods_CTQuaternion_m4A9E9712734553E922C7789A7051CF06A384A0B0
                     (&local_14,VVar7,(MethodInfo *)0x0);
  local_14.___x_0 = pQVar9->___x_0;
  local_14.___y_1 = pQVar9->___y_1;
  local_14.___z_2 = pQVar9->___z_2;
  local_14.___w_3 = pQVar9->___w_3;
  memset((uchar *)__return_storage_ptr__,'\0',0x40);
  VVar1.___y_2 = local_44.___y_1;
  VVar1.___x_1 = local_44.___x_0;
  VVar1.___z_3 = local_44.___z_2;
  VVar1.___w_4 = local_44.___w_3;
  VVar2.___y_2 = local_34.___y_1;
  VVar2.___x_1 = local_34.___x_0;
  VVar2.___z_3 = local_34.___z_2;
  VVar2.___w_4 = local_34.___w_3;
  VVar3.___y_2 = local_24.___y_1;
  VVar3.___x_1 = local_24.___x_0;
  VVar3.___z_3 = local_24.___z_2;
  VVar3.___w_4 = local_24.___w_3;
  VVar8.___y_2 = local_14.___y_1;
  VVar8.___x_1 = local_14.___x_0;
  VVar8.___z_3 = local_14.___z_2;
  VVar8.___w_4 = local_14.___w_3;
  Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
            (__return_storage_ptr__,VVar1,VVar2,VVar3,VVar8,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}
