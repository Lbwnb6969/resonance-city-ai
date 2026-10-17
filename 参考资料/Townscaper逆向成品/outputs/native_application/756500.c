// RVA 0x756500 | Placemaker.Props.PropCollider$$GetMatrix
// PDB: PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
// Body: [[10756500, 107568bc]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44a80 Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
// 10a45150 Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
// 10a45200 Matrix4x4_SetColumn_mE7F56CA5118157681EACFA69FD8DB61EDD3C6123
// 10a45990 Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F

Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __cdecl
PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
          (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *__return_storage_ptr__,
          PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar17;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar18;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar19;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar20;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar21;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar22;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar23;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar24;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_d4;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_94;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_44;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_34;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_24;
  undefined1 local_14 [8];
  float fStack_c;
  float fStack_8;

  memset((uchar *)__return_storage_ptr__,'\0',0x40);
  memset((uchar *)&local_94,'\0',0x40);
  piVar20 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                      ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)(local_14 + 4),
                       (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)
                       &param_1->___localBounds_5,(MethodInfo *)0x0);
  pMVar21 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A
                      (&local_d4,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*piVar20,
                       (MethodInfo *)0x0);
  local_34.___m_Left_0 = pMVar21->___m00_0;
  local_34.___m_Right_1 = pMVar21->___m10_1;
  local_34.___m_Top_2 = pMVar21->___m20_2;
  local_34.___m_Bottom_3 = pMVar21->___m30_3;
  local_24.___m_Left_0 = pMVar21->___m01_4;
  local_24.___m_Right_1 = pMVar21->___m11_5;
  local_24.___m_Top_2 = pMVar21->___m21_6;
  local_24.___m_Bottom_3 = pMVar21->___m31_7;
  local_54 = pMVar21->___m02_8;
  fStack_50 = pMVar21->___m12_9;
  fStack_4c = pMVar21->___m22_10;
  fStack_48 = pMVar21->___m32_11;
  local_44.___x_1 = pMVar21->___m03_12;
  local_44.___y_2 = pMVar21->___m13_13;
  local_44.___z_3 = pMVar21->___m23_14;
  local_44.___w_4 = pMVar21->___m33_15;
  pVVar22 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                      ((ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *)(local_14 + 4),
                       (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)
                       &param_1->___localBounds_5,(MethodInfo *)0x0);
  pMVar21 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
                      (&local_d4,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pVVar22,
                       (MethodInfo *)0x0);
  MVar17.___m10_1 = local_34.___m_Right_1;
  MVar17.___m00_0 = local_34.___m_Left_0;
  MVar17.___m20_2 = local_34.___m_Top_2;
  MVar17.___m30_3 = local_34.___m_Bottom_3;
  MVar17.___m01_4 = local_24.___m_Left_0;
  MVar17.___m11_5 = local_24.___m_Right_1;
  MVar17.___m21_6 = local_24.___m_Top_2;
  MVar17.___m31_7 = local_24.___m_Bottom_3;
  MVar17.___m02_8 = local_54;
  MVar17.___m12_9 = fStack_50;
  MVar17.___m22_10 = fStack_4c;
  MVar17.___m32_11 = fStack_48;
  MVar17.___m03_12 = local_44.___x_1;
  MVar17.___m13_13 = local_44.___y_2;
  MVar17.___m23_14 = local_44.___z_3;
  MVar17.___m33_15 = local_44.___w_4;
  pMVar21 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                      (&local_d4,MVar17,*pMVar21,(MethodInfo *)0x0);
  fVar1 = pMVar21->___m00_0;
  fVar2 = pMVar21->___m10_1;
  fVar3 = pMVar21->___m20_2;
  fVar4 = pMVar21->___m30_3;
  fVar5 = pMVar21->___m01_4;
  fVar6 = pMVar21->___m11_5;
  fVar7 = pMVar21->___m21_6;
  fVar8 = pMVar21->___m31_7;
  fVar9 = pMVar21->___m02_8;
  fVar10 = pMVar21->___m12_9;
  fVar11 = pMVar21->___m22_10;
  fVar12 = pMVar21->___m32_11;
  fVar13 = pMVar21->___m03_12;
  fVar14 = pMVar21->___m13_13;
  fVar15 = pMVar21->___m23_14;
  fVar16 = pMVar21->___m33_15;
  __return_storage_ptr__->___m00_0 = fVar1;
  __return_storage_ptr__->___m10_1 = fVar2;
  __return_storage_ptr__->___m20_2 = fVar3;
  __return_storage_ptr__->___m30_3 = fVar4;
  __return_storage_ptr__->___m01_4 = fVar5;
  __return_storage_ptr__->___m11_5 = fVar6;
  __return_storage_ptr__->___m21_6 = fVar7;
  __return_storage_ptr__->___m31_7 = fVar8;
  __return_storage_ptr__->___m02_8 = fVar9;
  __return_storage_ptr__->___m12_9 = fVar10;
  __return_storage_ptr__->___m22_10 = fVar11;
  __return_storage_ptr__->___m32_11 = fVar12;
  __return_storage_ptr__->___m03_12 = fVar13;
  __return_storage_ptr__->___m13_13 = fVar14;
  __return_storage_ptr__->___m23_14 = fVar15;
  __return_storage_ptr__->___m33_15 = fVar16;
  if (param_1->___layer_4 == '\x03') {
    local_94.___m00_0 = fVar1;
    local_94.___m10_1 = fVar2;
    local_94.___m20_2 = fVar3;
    local_94.___m30_3 = fVar4;
    local_94.___m01_4 = fVar5;
    local_94.___m11_5 = fVar6;
    local_94.___m21_6 = fVar7;
    local_94.___m31_7 = fVar8;
    local_94.___m02_8 = fVar9;
    local_94.___m12_9 = fVar10;
    local_94.___m22_10 = fVar11;
    local_94.___m32_11 = fVar12;
    local_94.___m03_12 = fVar13;
    local_94.___m13_13 = fVar14;
    local_94.___m23_14 = fVar15;
    local_94.___m33_15 = fVar16;
    pVVar23 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                        (&local_44,&local_94,0,(MethodInfo *)0x0);
    local_24.___m_Left_0 = 0.0;
    local_24.___m_Right_1 = 0.0;
    local_24.___m_Top_2 = 0.0;
    local_24.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_24,pVVar23->___x_1 * __real_3f000000,pVVar23->___y_2 * __real_3f000000,
               pVVar23->___z_3 * __real_3f000000,pVVar23->___w_4 * __real_3f000000,(MethodInfo *)0x0
              );
    pVVar23 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                        (&local_44,&local_94,2,(MethodInfo *)0x0);
    local_14._0_4_ = 0.0;
    local_14._4_4_ = 0.0;
    fStack_c = 0.0;
    fStack_8 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_14,
               pVVar23->___x_1 * __real_3f000000,pVVar23->___y_2 * __real_3f000000,
               pVVar23->___z_3 * __real_3f000000,pVVar23->___w_4 * __real_3f000000,(MethodInfo *)0x0
              );
    local_34.___m_Left_0 = 0.0;
    local_34.___m_Right_1 = 0.0;
    local_34.___m_Top_2 = 0.0;
    local_34.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_34,(float)local_14._0_4_ + local_24.___m_Left_0,
               (float)local_14._4_4_ + local_24.___m_Right_1,fStack_c + local_24.___m_Top_2,
               fStack_8 + local_24.___m_Bottom_3,(MethodInfo *)0x0);
    VVar18.___y_2 = local_34.___m_Right_1;
    VVar18.___x_1 = local_34.___m_Left_0;
    VVar18.___z_3 = local_34.___m_Top_2;
    VVar18.___w_4 = local_34.___m_Bottom_3;
    Matrix4x4_SetColumn_mE7F56CA5118157681EACFA69FD8DB61EDD3C6123
              (__return_storage_ptr__,0,VVar18,(MethodInfo *)0x0);
    local_34.___m_Left_0 = 0.0;
    local_34.___m_Right_1 = 0.0;
    local_34.___m_Top_2 = 0.0;
    local_34.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_34,(float)local_14._0_4_ - local_24.___m_Left_0,
               (float)local_14._4_4_ - local_24.___m_Right_1,fStack_c - local_24.___m_Top_2,
               fStack_8 - local_24.___m_Bottom_3,(MethodInfo *)0x0);
    VVar19.___y_2 = local_34.___m_Right_1;
    VVar19.___x_1 = local_34.___m_Left_0;
    VVar19.___z_3 = local_34.___m_Top_2;
    VVar19.___w_4 = local_34.___m_Bottom_3;
    Matrix4x4_SetColumn_mE7F56CA5118157681EACFA69FD8DB61EDD3C6123
              (__return_storage_ptr__,2,VVar19,(MethodInfo *)0x0);
  }
  pTVar24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       (MethodInfo *)0x0);
  if (pTVar24 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pMVar21 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                        (&local_d4,pTVar24,(MethodInfo *)0x0);
    pMVar21 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                        (&local_d4,*pMVar21,*__return_storage_ptr__,(MethodInfo *)0x0);
    fVar1 = pMVar21->___m10_1;
    fVar2 = pMVar21->___m20_2;
    fVar3 = pMVar21->___m30_3;
    fVar4 = pMVar21->___m01_4;
    fVar5 = pMVar21->___m11_5;
    fVar6 = pMVar21->___m21_6;
    fVar7 = pMVar21->___m31_7;
    fVar8 = pMVar21->___m02_8;
    fVar9 = pMVar21->___m12_9;
    fVar10 = pMVar21->___m22_10;
    fVar11 = pMVar21->___m32_11;
    fVar12 = pMVar21->___m03_12;
    fVar13 = pMVar21->___m13_13;
    fVar14 = pMVar21->___m23_14;
    fVar15 = pMVar21->___m33_15;
    __return_storage_ptr__->___m00_0 = pMVar21->___m00_0;
    __return_storage_ptr__->___m10_1 = fVar1;
    __return_storage_ptr__->___m20_2 = fVar2;
    __return_storage_ptr__->___m30_3 = fVar3;
    __return_storage_ptr__->___m01_4 = fVar4;
    __return_storage_ptr__->___m11_5 = fVar5;
    __return_storage_ptr__->___m21_6 = fVar6;
    __return_storage_ptr__->___m31_7 = fVar7;
    __return_storage_ptr__->___m02_8 = fVar8;
    __return_storage_ptr__->___m12_9 = fVar9;
    __return_storage_ptr__->___m22_10 = fVar10;
    __return_storage_ptr__->___m32_11 = fVar11;
    __return_storage_ptr__->___m03_12 = fVar12;
    __return_storage_ptr__->___m13_13 = fVar13;
    __return_storage_ptr__->___m23_14 = fVar14;
    __return_storage_ptr__->___m33_15 = fVar15;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
