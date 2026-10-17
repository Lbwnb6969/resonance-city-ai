// RVA 0x75ac70 | Placemaker.PropPlacer$$GetChunkMatrix
// PDB: PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
// Body: [[1075ac70, 1075add3]]
// Direct callees:
// 10192150 memset
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10a45e00 Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076

Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __cdecl
PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
          (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *__return_storage_ptr__,
          PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar1;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar2;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar3;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar4;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_44;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_34;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_24;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  local_44.___m_Left_0 = 0.0;
  local_44.___m_Right_1 = 0.0;
  local_44.___m_Top_2 = 0.0;
  local_44.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_44,1.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  local_34.___m_Left_0 = 0.0;
  local_34.___m_Right_1 = 0.0;
  local_34.___m_Top_2 = 0.0;
  local_34.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_34,0.0,1.0,0.0,0.0,(MethodInfo *)0x0);
  local_24.___m_Left_0 = 0.0;
  local_24.___m_Right_1 = 0.0;
  local_24.___m_Top_2 = 0.0;
  local_24.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_24,0.0,0.0,1.0,0.0,(MethodInfo *)0x0);
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,(float)param_2.___x_0 + (float)param_2.___x_0 + __real_3f800000,
             (float)param_2.___y_1 + (float)param_2.___y_1 + __real_3f800000,
             (float)param_2.___z_2 + (float)param_2.___z_2 + __real_3f800000,1.0,(MethodInfo *)0x0);
  memset((uchar *)__return_storage_ptr__,'\0',0x40);
  VVar1.___y_2 = local_44.___m_Right_1;
  VVar1.___x_1 = local_44.___m_Left_0;
  VVar1.___z_3 = local_44.___m_Top_2;
  VVar1.___w_4 = local_44.___m_Bottom_3;
  VVar2.___y_2 = local_34.___m_Right_1;
  VVar2.___x_1 = local_34.___m_Left_0;
  VVar2.___z_3 = local_34.___m_Top_2;
  VVar2.___w_4 = local_34.___m_Bottom_3;
  VVar3.___y_2 = local_24.___m_Right_1;
  VVar3.___x_1 = local_24.___m_Left_0;
  VVar3.___z_3 = local_24.___m_Top_2;
  VVar3.___w_4 = local_24.___m_Bottom_3;
  VVar4.___y_2 = local_14.___m_Right_1;
  VVar4.___x_1 = local_14.___m_Left_0;
  VVar4.___z_3 = local_14.___m_Top_2;
  VVar4.___w_4 = local_14.___m_Bottom_3;
  Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
            (__return_storage_ptr__,VVar1,VVar2,VVar3,VVar4,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}
