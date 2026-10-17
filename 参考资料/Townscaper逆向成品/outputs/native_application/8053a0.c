// RVA 0x8053a0 | Placemaker.Props.PropTransformer$$Placemaker.Props.IPropModifier.Apply
// PDB: PropTransformer_Placemaker_Props_IPropModifier_Apply_m31EB35ABA26BC80079B539AA0EE128C3B4FDC028
// Body: [[108053a0, 1080584c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196f40 _libm_sse2_pow_precise
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1065ff40 Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
// 1066f7a0 Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44f60 Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C

void __cdecl
PropTransformer_Placemaker_Props_IPropModifier_Apply_m31EB35ABA26BC80079B539AA0EE128C3B4FDC028
          (PropTransformer_t6AE51D7045FE438CA7997276D0C703AA6A59FA02 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          Random_tAA667D9E4475C884ADEB5B16274B7D4C4E90CC12 *param_3,
          PropModifierStruct_tEA20DD1E5AC1C0D4BBC7D9B440411A7A5CE1CF53 param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar9;
  undefined8 *extraout_EAX;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_d0;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_90;
  undefined1 local_50 [8];
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [12];
  float local_34;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_18;
  undefined8 local_14;
  float local_c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_8;

  if (param_1->___scaleVariance_5 != 0.0) {
    local_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
    pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10805848;
    pVVar8 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_40 + 4),pTVar7,
                        (MethodInfo *)0x0);
    dVar15 = __real_4000000000000000;
    uVar13 = param_3->___state_0;
    local_30._0_4_ = pVVar8->___x_2;
    local_30._4_4_ = pVVar8->___y_3;
    local_28 = pVVar8->___z_4;
    uVar12 = uVar13 << 0xd ^ uVar13;
    local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)(uVar13 >> 9 | 0x3f800000);
    uVar12 = uVar12 ^ uVar12 >> 0x11;
    param_3->___state_0 = uVar12 << 5 ^ uVar12;
    _libm_sse2_pow_precise();
    fVar16 = (float)dVar15;
    local_14 = CONCAT44(local_30._4_4_ * fVar16,(float)local_30 * fVar16);
    local_c = local_28 * fVar16;
    if (local_18 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10805848;
    VVar4.___y_3 = local_30._4_4_ * fVar16;
    VVar4.___x_2 = (float)local_30 * fVar16;
    VVar4.___z_4 = local_c;
    Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
              (local_18,VVar4,(MethodInfo *)0x0);
  }
  if (param_1->___rotationVariance_6 != 0.0) {
    local_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10805848;
    pQVar9 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5
                       ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_50,pTVar7,
                        (MethodInfo *)0x0);
    uVar13 = param_3->___state_0;
    fVar16 = param_1->___rotationVariance_6;
    local_50._0_4_ = pQVar9->___x_0;
    local_50._4_4_ = pQVar9->___y_1;
    fStack_48 = pQVar9->___z_2;
    fStack_44 = pQVar9->___w_3;
    uVar12 = uVar13 << 0xd ^ uVar13;
    fVar17 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
    local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)(uVar13 >> 9 | 0x3f800000);
    fVar14 = (float)local_18 - __real_3f800000;
    uVar12 = uVar12 ^ uVar12 >> 0x11;
    param_3->___state_0 = uVar12 << 5 ^ uVar12;
    pQVar9 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                       ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_40,0.0,
                        (fVar16 - fVar17) * fVar14 + fVar17,0.0,(MethodInfo *)0x0);
    QVar3.___y_1 = (float)local_50._4_4_;
    QVar3.___x_0 = (float)local_50._0_4_;
    QVar3.___z_2 = fStack_48;
    QVar3.___w_3 = fStack_44;
    pQVar9 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                       ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)local_50,QVar3,
                        *pQVar9,(MethodInfo *)0x0);
    if (local_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10805848;
    Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
              (local_8,*pQVar9,(MethodInfo *)0x0);
  }
  if ((((param_1->___posVariance_7).___x_0 == 0.0) && ((param_1->___posVariance_7).___y_1 == 0.0))
     && ((param_1->___posVariance_7).___z_2 == 0.0)) {
    return;
  }
  local_30._0_4_ = (param_1->___posVariance_7).___x_0;
  local_30._4_4_ = (param_1->___posVariance_7).___y_1;
  local_c = (param_1->___posVariance_7).___z_2;
  uVar13 = param_3->___state_0;
  uVar1 = (param_1->___posVariance_7).___x_0;
  uVar2 = (param_1->___posVariance_7).___y_1;
  fVar17 = (float)((uint)(float)local_30 ^ __xmm_80000000800000008000000080000000);
  fVar19 = (float)((uint)local_30._4_4_ ^ __xmm_80000000800000008000000080000000);
  local_34 = (float)((uint)local_c ^ __xmm_80000000800000008000000080000000);
  local_14._0_4_ = (param_1->___posVariance_7).___x_0;
  local_14._4_4_ = (param_1->___posVariance_7).___y_1;
  uVar12 = uVar13 << 0xd ^ uVar13;
  local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)(uVar13 >> 9 | 0x3f800000);
  uVar12 = uVar12 ^ uVar12 >> 0x11;
  fVar16 = (float)local_18 - __real_3f800000;
  uVar12 = uVar12 ^ uVar12 << 5;
  uVar13 = uVar12 ^ uVar12 << 0xd;
  local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)(uVar12 >> 9 | 0x3f800000);
  uVar13 = uVar13 ^ uVar13 >> 0x11;
  fVar14 = (float)local_8 - __real_3f800000;
  uVar13 = uVar13 ^ uVar13 << 5;
  uVar12 = uVar13 ^ uVar13 << 0xd;
  uVar12 = uVar12 ^ uVar12 >> 0x11;
  local_24 = (float)(uVar13 >> 9 | 0x3f800000);
  fVar18 = local_24 - __real_3f800000;
  param_3->___state_0 = uVar12 << 5 ^ uVar12;
  local_34 = (local_c - local_34) * fVar18 + local_34;
  local_20 = (float)uVar1;
  fStack_1c = (float)uVar2;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_40 + 4),
             ((float)local_14 - fVar17) * fVar16 + fVar17,
             (local_14._4_4_ - fVar19) * fVar14 + fVar19,local_34,(MethodInfo *)0x0);
  local_24 = *(float *)(extraout_EAX + 1);
  fStack_1c = (float)*extraout_EAX;
  local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
             ((ulonglong)*extraout_EAX >> 0x20);
  pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_40 + 4),pTVar7,
                        (MethodInfo *)0x0);
    local_14._0_4_ = pVVar8->___x_2;
    local_14._4_4_ = pVVar8->___y_3;
    local_c = pVVar8->___z_4;
    pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pMVar11 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                          (&local_d0,pTVar10,(MethodInfo *)0x0);
      local_90.___m00_0 = pMVar11->___m00_0;
      local_90.___m10_1 = pMVar11->___m10_1;
      local_90.___m20_2 = pMVar11->___m20_2;
      local_90.___m30_3 = pMVar11->___m30_3;
      local_90.___m01_4 = pMVar11->___m01_4;
      local_90.___m11_5 = pMVar11->___m11_5;
      local_90.___m21_6 = pMVar11->___m21_6;
      local_90.___m31_7 = pMVar11->___m31_7;
      local_90.___m02_8 = pMVar11->___m02_8;
      local_90.___m12_9 = pMVar11->___m12_9;
      local_90.___m22_10 = pMVar11->___m22_10;
      local_90.___m32_11 = pMVar11->___m32_11;
      local_90.___m03_12 = pMVar11->___m03_12;
      local_90.___m13_13 = pMVar11->___m13_13;
      local_90.___m23_14 = pMVar11->___m23_14;
      local_90.___m33_15 = pMVar11->___m33_15;
      VVar5.___y_3 = (float)local_18;
      VVar5.___x_2 = fStack_1c;
      VVar5.___z_4 = local_24;
      pVVar8 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_50 + 4),
                          &local_90,VVar5,(MethodInfo *)0x0);
      local_30._0_4_ = pVVar8->___x_2;
      local_30._4_4_ = pVVar8->___y_3;
      local_40._4_4_ = pVVar8->___x_2;
      local_40._8_4_ = pVVar8->___y_3;
      local_34 = local_c + pVVar8->___z_4;
      VVar6.___y_3 = local_14._4_4_ + local_30._4_4_;
      VVar6.___x_2 = (float)local_30 + (float)local_14;
      VVar6.___z_4 = local_34;
      local_20 = (float)local_30;
      fStack_1c = local_30._4_4_;
      Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                (pTVar7,VVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_10805848:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
