// RVA 0x881768 | Recovered.function.called_by_8811c0
// PDB: FUN_10881768
// Body: [[10881768, 108827e0]]
// Direct callees:
// 1003e420 Invoke
// 10092630 PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B
// 101280f0 il2cpp_runtime_class_init
// 101d1320 Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
// 1050daa0 PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
// 1065f940 Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
// 1065fe60 Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
// 10660420 Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 1066f1a0 Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
// 1066f480 Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10673fd0 Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10674620 Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10882811 FUN_10882811
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a44230 Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10c10fb0 Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
// 10e75050 Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10881768(void)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar9;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar10;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 *pLVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar22;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  MethodInfo *pMVar25;
  Il2CppClass *pIVar26;
  bool bVar27;
  Il2CppObject *in_EAX;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar29;
  undefined4 uVar30;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar31;
  String_t *pSVar32;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar33;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar34;
  PropRadiusIterator_1_t8BEB1BDABCF7CF0A8A765F4BE51A89745FC048D8 *pPVar35;
  Il2CppObject *pIVar36;
  int iVar37;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar38;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar39;
  int unaff_EBX;
  int unaff_EBP;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *unaff_ESI;
  int unaff_EDI;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined2 uVar45;
  undefined2 uVar46;

  if (in_EAX != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,in_EAX);
  }
  if (*(Exception_t **)(unaff_EBP + -0x54) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x54),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x9c + unaff_EDI * 4) == 0x13c)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x78) = unaff_EDI;
  }
  *(int *)(unaff_EBP + -0x24) = unaff_ESI[8]._padding_;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar27 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x24),
                      (MethodInfo *)0x0);
  fVar44 = __real_3f333333;
  if (!bVar27) {
    pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)unaff_ESI,
                         (MethodInfo *)0x0);
    if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
    Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
              (pTVar28,*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)
                        (*(int *)(unaff_EBX + 8) + 0x24),(MethodInfo *)0x0);
    *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x68) + -1;
    goto LAB_10882ca7;
  }
  uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
  iVar37 = unaff_ESI[8]._padding_;
  *(undefined8 *)(unaff_EBP + -0x224) = uVar3;
  *(undefined8 *)(unaff_EBP + -0x230) = uVar3;
  uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
  *(char *)(unaff_EBP + -0x2d) = (char)iVar37;
  iVar37 = unaff_ESI[6]._padding_;
  *(undefined8 *)(unaff_EBP + -0x23c) = uVar3;
  *(int *)(unaff_EBP + -0x234) = iVar37;
  *(float *)(unaff_EBP + -0x578) = *(float *)(unaff_EBP + -0x234) * fVar44;
  iVar37 = *(int *)(unaff_EBP + -0x578);
  *(ulonglong *)&unaff_ESI[5].___m_CachedPtr_0 =
       CONCAT44(*(float *)(unaff_EBP + -0x22c) * fVar44,*(float *)(unaff_EBP + -0x224) * fVar44);
  unaff_ESI[6]._padding_ = iVar37;
  pCVar9 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
           **(undefined4 **)(unaff_EBP + -0x40);
  *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + -100) = pCVar9;
  if (pCVar9 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1088311e;
  pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      (pCVar9,(MethodInfo *)0x0);
  *(undefined4 *)(unaff_EBP + -0x1b8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1b4) = 0x3c23d70a;
  *(undefined4 *)(unaff_EBP + -0x1b0) = 0;
  if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  pVVar29 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6d0),
                       pTVar28,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                (unaff_EBP + -0x1b8),(MethodInfo *)0x0);
  fVar44 = pVVar29->___z_4;
  *(undefined8 *)(unaff_EBP + -0xd4) = *(undefined8 *)pVVar29;
  *(float *)(unaff_EBP + -0xcc) = fVar44;
  pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + -100),
                       (MethodInfo *)0x0);
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0x3e99999a;
  *(undefined4 *)(unaff_EBP + -0x1bc) = 0;
  if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  pVVar29 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6e0),
                       pTVar28,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                (unaff_EBP + -0x1c4),(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar29->___x_2;
  uVar3._4_4_ = pVVar29->___y_3;
  fVar44 = pVVar29->___z_4;
  if (*(char *)(unaff_EBP + -0x2d) == '\x01') {
    *(undefined8 *)(unaff_EBP + -0x1d0) = uVar3;
    uVar3 = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
    *(undefined8 *)(unaff_EBP + -0x248) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x254) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x260) = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
    *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0xd4);
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(float *)(unaff_EBP + -0x34) = *(float *)(unaff_EBP + -0xd0);
    *(float *)(unaff_EBP + -0x1c8) = fVar44;
    *(int *)(unaff_EBP + -600) = unaff_ESI[4]._padding_;
    *(float *)(unaff_EBP + -0x2c) = *(float *)(unaff_EBP + -0xcc);
    *(float *)(unaff_EBP + -0x4dc) = *(float *)(unaff_EBP + -0xcc) - *(float *)(unaff_EBP + -600);
    *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x4dc);
    *(ulonglong *)(unaff_EBP + -0xa4) =
         CONCAT44(*(float *)(unaff_EBP + -0xd0) - *(float *)(unaff_EBP + -0x250),
                  *(float *)(unaff_EBP + -0xd4) - *(float *)(unaff_EBP + -0x248));
    fVar44 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xa4),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar44;
    fVar44 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                       (0.0,*(float *)(unaff_EBP + -0x24),(MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar44;
    fVar44 = *(float *)(unaff_EBP + -0x24);
    *(float *)(unaff_EBP + -0x4e8) =
         *(float *)(unaff_EBP + -0x2c) + *(float *)(unaff_EBP + -0x1c8) * fVar44;
    uVar30 = *(undefined4 *)(unaff_EBP + -0x4e8);
    *(ulonglong *)(unaff_EBP + -0xec) =
         CONCAT44(*(float *)(unaff_EBP + -0x34) + *(float *)(unaff_EBP + -0x1cc) * fVar44,
                  fVar44 * *(float *)(unaff_EBP + -0x1d0) + *(float *)(unaff_EBP + -0x50));
  }
  else {
    *(undefined8 *)(unaff_EBP + -0x26c) = uVar3;
    uVar4._0_4_ = pVVar29->___x_2;
    uVar4._4_4_ = pVVar29->___y_3;
    *(undefined8 *)(unaff_EBP + -0x278) = uVar4;
    *(undefined8 *)(unaff_EBP + -0x284) = uVar4;
    *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0xd4);
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(float *)(unaff_EBP + -0x34) = *(float *)(unaff_EBP + -0xd0);
    *(float *)(unaff_EBP + -0x27c) = fVar44;
    *(float *)(unaff_EBP + -0x2c) = *(float *)(unaff_EBP + -0xcc);
    *(float *)(unaff_EBP + -0x4f4) = *(float *)(unaff_EBP + -0xcc) + *(float *)(unaff_EBP + -0x27c);
    uVar30 = *(undefined4 *)(unaff_EBP + -0x4f4);
    *(ulonglong *)(unaff_EBP + -0xec) =
         CONCAT44(*(float *)(unaff_EBP + -0xd0) + *(float *)(unaff_EBP + -0x274),
                  *(float *)(unaff_EBP + -0xd4) + *(float *)(unaff_EBP + -0x26c));
  }
  *(undefined4 *)(unaff_EBP + -0xe4) = uVar30;
  uVar3 = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
  iVar37 = unaff_ESI[4]._padding_;
  *(undefined8 *)(unaff_EBP + -0x35c) = uVar3;
  *(undefined8 *)(unaff_EBP + -0x290) = uVar3;
  *(undefined8 *)(unaff_EBP + -0x29c) = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
  *(int *)(unaff_EBP + -0x294) = iVar37;
  *(float *)(unaff_EBP + -0x500) = *(float *)(unaff_EBP + -0xe4) - *(float *)(unaff_EBP + -0x294);
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x500);
  *(ulonglong *)(unaff_EBP + -0x74) =
       CONCAT44(*(float *)(unaff_EBP + -0xe8) - *(float *)(unaff_EBP + -0x28c),
                *(float *)(unaff_EBP + -0xec) - *(float *)(unaff_EBP + -0x35c));
  fVar44 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x74),
                      (MethodInfo *)0x0);
  *(float *)(unaff_EBP + -0x24) = fVar44;
  fVar43 = __real_3f000000;
  fVar41 = __real_3dcccccd;
  fVar44 = *(float *)(unaff_EBP + -0x24);
  if (*(char *)(unaff_EBP + -0x2d) == '\x01') {
    if (fVar44 < __real_3ca3d70a) {
      uVar3 = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
      iVar37 = unaff_ESI[4]._padding_;
      fVar44 = *(float *)(unaff_EBP + -0x2c);
      fVar41 = *(float *)(unaff_EBP + -0x34);
      *(undefined8 *)(unaff_EBP + -0x11c) = uVar3;
      *(undefined8 *)(unaff_EBP + -0x128) = uVar3;
      uVar3 = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
      fVar43 = *(float *)(unaff_EBP + -0x124);
      *(int *)(unaff_EBP + -300) = iVar37;
      fVar42 = *(float *)(unaff_EBP + -300);
      *(undefined8 *)(unaff_EBP + -0x134) = uVar3;
      fVar12 = *(float *)(unaff_EBP + -0x50);
      fVar2 = *(float *)(unaff_EBP + -0x11c);
      *(undefined1 *)&unaff_ESI[8]._padding_ = 2;
      *(int *)(unaff_EBP + -0x114) = iVar37;
      *(float *)(unaff_EBP + -0x560) = fVar44 - fVar42;
      iVar37 = *(int *)(unaff_EBP + -0x560);
      pCVar9 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + -100);
      *(ulonglong *)&unaff_ESI[5].___m_CachedPtr_0 = CONCAT44(fVar41 - fVar43,fVar12 - fVar2);
      unaff_ESI[6]._padding_ = iVar37;
      pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          (pCVar9,(MethodInfo *)0x0);
      if (pTVar28 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar29 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                             (unaff_EBP + -0x660),pTVar28,(MethodInfo *)0x0);
        fVar44 = pVVar29->___z_4;
        *(undefined8 *)(unaff_EBP + -0x60) = *(undefined8 *)pVVar29;
        *(float *)(unaff_EBP + -0x24) = fVar44;
        pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)unaff_ESI,
                             (MethodInfo *)0x0);
        if (pTVar28 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar29 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               (unaff_EBP + -0x670),pTVar28,(MethodInfo *)0x0);
          uVar3 = *(undefined8 *)pVVar29;
          *(float *)(unaff_EBP + -0x198) = pVVar29->___z_4;
          *(undefined8 *)(unaff_EBP + -0x1a0) = uVar3;
          pVVar29 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               (unaff_EBP + -0x680),(MethodInfo *)0x0);
          fVar41 = __real_3e4ccccd;
          uVar7._0_4_ = pVVar29->___x_2;
          uVar7._4_4_ = pVVar29->___y_3;
          fVar44 = pVVar29->___z_4;
          *(undefined8 *)(unaff_EBP + -0x17c) = uVar7;
          *(undefined8 *)(unaff_EBP + -0x110) = uVar7;
          *(undefined8 *)(unaff_EBP + -0x140) = *(undefined8 *)pVVar29;
          *(float *)(unaff_EBP + -0x138) = fVar44;
          *(float *)(unaff_EBP + -0x44) =
               *(float *)(unaff_EBP + -0x17c) * fVar41 + *(float *)(unaff_EBP + -0x1a0);
          *(float *)(unaff_EBP + -0x3c) =
               *(float *)(unaff_EBP + -0x19c) + *(float *)(unaff_EBP + -0x10c) * fVar41;
          *(float *)(unaff_EBP + -0xac) =
               *(float *)(unaff_EBP + -0x198) + *(float *)(unaff_EBP + -0x138) * fVar41;
          pVVar29 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                               (unaff_EBP + -0x690),(MethodInfo *)0x0);
          fVar41 = __real_3f000000;
          uVar8._0_4_ = pVVar29->___x_2;
          uVar8._4_4_ = pVVar29->___y_3;
          fVar44 = pVVar29->___z_4;
          *(undefined8 *)(unaff_EBP + -0x170) = uVar8;
          *(undefined8 *)(unaff_EBP + -0x158) = uVar8;
          *(undefined8 *)(unaff_EBP + -0x164) = *(undefined8 *)pVVar29;
          *(float *)(unaff_EBP + -0x15c) = fVar44;
          fVar44 = *(float *)(unaff_EBP + -0x154) * fVar41 + *(float *)(unaff_EBP + -0x3c);
          *(float *)(unaff_EBP + -0x1d4) =
               *(float *)(unaff_EBP + -0x15c) * fVar41 + *(float *)(unaff_EBP + -0xac);
          VVar18.___z_4 = *(float *)(unaff_EBP + -0x24);
          VVar18._0_8_ = *(undefined8 *)(unaff_EBP + -0x60);
          VVar24.___y_3._0_2_ = SUB42(fVar44,0);
          VVar24.___x_2 = *(float *)(unaff_EBP + -0x170) * fVar41 + *(float *)(unaff_EBP + -0x44);
          VVar24.___y_3._2_2_ = (short)((uint)fVar44 >> 0x10);
          VVar24.___z_4 = *(float *)(unaff_EBP + -0x1d4);
          pQVar33 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1
                              ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                               (unaff_EBP + -0x720),VVar18,VVar24,(MethodInfo *)0x0);
          fVar44 = pQVar33->___y_1;
          fVar41 = pQVar33->___z_2;
          fVar43 = pQVar33->___w_3;
          *(float *)(unaff_EBP + -0x50) = pQVar33->___x_0;
          *(float *)(unaff_EBP + -0x4c) = fVar44;
          *(float *)(unaff_EBP + -0x48) = fVar41;
          *(float *)(unaff_EBP + -0x44) = fVar43;
          pQVar33 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                              ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                               (unaff_EBP + -0x730),90.0,0.0,0.0,(MethodInfo *)0x0);
          QVar22.___z_2._2_2_ = (short)((uint)pQVar33->___z_2 >> 0x10);
          QVar22._0_10_ = *(unkbyte10 *)pQVar33;
          QVar22.___w_3 = pQVar33->___w_3;
          pQVar33 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                              ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                               (unaff_EBP + -0x740),
                               *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                                (unaff_EBP + -0x50),QVar22,(MethodInfo *)0x0);
          fVar44 = pQVar33->___y_1;
          fVar41 = pQVar33->___z_2;
          fVar43 = pQVar33->___w_3;
          unaff_ESI[2]._padding_ = (int)pQVar33->___x_0;
          unaff_ESI[2].___m_CachedPtr_0 = (int)fVar44;
          unaff_ESI[3]._padding_ = (int)fVar41;
          unaff_ESI[3]._padding_ = (int)fVar43;
          pMVar38 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                    Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)unaff_ESI,
                               Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
                              );
          fVar41 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
          fVar44 = __real_3e4ccccd;
          *(float *)(unaff_EBP + -0x44) = fVar41;
          if (fVar44 < *(float *)(unaff_EBP + -0x44) || fVar44 == *(float *)(unaff_EBP + -0x44)) {
            pMVar39 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                       (*(int *)(unaff_EBX + 8) + 0x1c);
          }
          else {
            pMVar39 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                       (*(int *)(unaff_EBX + 8) + 0x18);
          }
          if (pMVar38 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
            MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                      (pMVar38,pMVar39,(MethodInfo *)0x0);
            goto LAB_10882ca7;
          }
        }
      }
      goto LAB_1088311e;
    }
    fVar44 = *(float *)(unaff_EBP + -0x70) * __real_3dcccccd;
    fVar43 = *(float *)(unaff_EBP + -0x6c) * __real_3dcccccd;
    uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    iVar37 = unaff_ESI[6]._padding_;
    *(undefined8 *)(unaff_EBP + -0x41c) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x368) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x374) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    *(int *)(unaff_EBP + -0x36c) = iVar37;
    *(float *)(unaff_EBP + -0x530) = *(float *)(unaff_EBP + -0x36c) + fVar43;
    iVar37 = *(int *)(unaff_EBP + -0x530);
    *(ulonglong *)&unaff_ESI[5].___m_CachedPtr_0 =
         CONCAT44(*(float *)(unaff_EBP + -0x364) + fVar44,
                  *(float *)(unaff_EBP + -0x74) * fVar41 + *(float *)(unaff_EBP + -0x41c));
LAB_10881ff2:
    unaff_ESI[6]._padding_ = iVar37;
  }
  else {
    if (__real_3f000000 < fVar44) {
      fVar44 = fVar44 - __real_3f000000;
      fVar41 = *(float *)(unaff_EBP + -0x70) * fVar44 * __real_3f000000;
      fVar42 = *(float *)(unaff_EBP + -0x6c) * fVar44 * __real_3f000000;
      uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
      iVar37 = unaff_ESI[6]._padding_;
      *(undefined8 *)(unaff_EBP + -0x2a8) = uVar3;
      *(undefined8 *)(unaff_EBP + -0x2b4) = uVar3;
      uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
      *(int *)(unaff_EBP + -0x2b8) = iVar37;
      *(undefined8 *)(unaff_EBP + -0x2c0) = uVar3;
      *(float *)(unaff_EBP + -0x50c) = *(float *)(unaff_EBP + -0x2b8) + fVar42;
      iVar37 = *(int *)(unaff_EBP + -0x50c);
      *(ulonglong *)&unaff_ESI[5].___m_CachedPtr_0 =
           CONCAT44(*(float *)(unaff_EBP + -0x2b0) + fVar41,
                    *(float *)(unaff_EBP + -0x74) * fVar44 * fVar43 + *(float *)(unaff_EBP + -0x2a8)
                   );
      unaff_ESI[6]._padding_ = iVar37;
    }
    fVar41 = (float)unaff_ESI[7].___m_CachedPtr_0 * __real_3c23d70a;
    fVar44 = (float)unaff_ESI[4]._padding_;
    *(float *)(unaff_EBP + -0x34) = fVar41;
    fVar41 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       (fVar44,fVar41 + ___real_3f0a8c15,(MethodInfo *)0x0);
    fVar44 = (float)unaff_ESI[4]._padding_;
    *(float *)(unaff_EBP + -0x24) = fVar41;
    *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0x24) - __real_3f000000;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    fVar41 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       (fVar44,*(float *)(unaff_EBP + -0x34) + ___real_4083f3b6,(MethodInfo *)0x0);
    fVar44 = *(float *)(unaff_EBP + -0x34) + ___real_411d816f;
    *(float *)(unaff_EBP + -0x24) = fVar41;
    *(float *)(unaff_EBP + -0x24) = *(float *)(unaff_EBP + -0x24) - __real_3f000000;
    fVar41 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       ((float)unaff_ESI[3].___m_CachedPtr_0,fVar44,(MethodInfo *)0x0);
    fVar44 = __real_3ecccccd;
    *(float *)(unaff_EBP + -0x5c) = fVar41;
    fVar41 = *(float *)(unaff_EBP + -0x5c) - __real_3f000000;
    uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    *(int *)(unaff_EBP + -0x2dc) = unaff_ESI[6]._padding_;
    *(undefined8 *)(unaff_EBP + -0x2cc) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x2d8) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x2e4) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    *(float *)(unaff_EBP + -0x518) = *(float *)(unaff_EBP + -0x2dc) + fVar41 * fVar44;
    iVar37 = *(int *)(unaff_EBP + -0x518);
    *(ulonglong *)&unaff_ESI[5].___m_CachedPtr_0 =
         CONCAT44(*(float *)(unaff_EBP + -0x2d4) + *(float *)(unaff_EBP + -0x24) * fVar44,
                  *(float *)(unaff_EBP + -0x50) * fVar44 + *(float *)(unaff_EBP + -0x2cc));
    unaff_ESI[6]._padding_ = iVar37;
    iVar37 = unaff_ESI[4]._padding_;
    *(undefined8 *)(unaff_EBP + -800) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    uVar3 = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
    *(undefined8 *)(unaff_EBP + -0x32c) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x2fc) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x2f0) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    uVar3 = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
    *(int *)(unaff_EBP + -0x30c) = iVar37;
    iVar37 = unaff_ESI[6]._padding_;
    *(undefined8 *)(unaff_EBP + -0x314) = uVar3;
    uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    *(int *)(unaff_EBP + -0x300) = iVar37;
    *(undefined8 *)(unaff_EBP + -0x308) = uVar3;
    *(float *)(unaff_EBP + -0x184) =
         (*(float *)(unaff_EBP + -0x2ec) + *(float *)(unaff_EBP + -0x2f8)) - __real_3dcccccd;
    *(float *)(unaff_EBP + -0x180) =
         (*(float *)(unaff_EBP + -0x300) + *(float *)(unaff_EBP + -0x30c)) - 0.0;
    *(float *)(unaff_EBP + -0x188) =
         (*(float *)(unaff_EBP + -800) + *(float *)(unaff_EBP + -0x32c)) - 0.0;
    iVar37 = *(int *)(*(int *)(unaff_EBX + 8) + 0xc);
    if ((iVar37 == 0) ||
       (pGVar10 = *(Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 **)(iVar37 + 0x18),
       pGVar10 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1088311e;
    pVVar31 = Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
                        ((ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)
                         (unaff_EBP + -0x750),pGVar10,
                         *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x188),
                         (MethodInfo *)0x0);
    fVar42 = __real_3e99999a;
    fVar44 = (pVVar31->___Item1_0).___y_3;
    fVar41 = (pVVar31->___Item1_0).___z_4;
    fVar43 = pVVar31->___Item2_1;
    *(float *)(unaff_EBP + -0x50) = (pVVar31->___Item1_0).___x_2;
    *(float *)(unaff_EBP + -0x4c) = fVar44;
    *(float *)(unaff_EBP + -0x48) = fVar41;
    *(float *)(unaff_EBP + -0x44) = fVar43;
    if (fVar42 < fVar43) {
      fVar43 = fVar43 - fVar42;
      fVar41 = fVar43 * *(float *)(unaff_EBP + -0x50);
      fVar44 = fVar43 * *(float *)(unaff_EBP + -0x4c);
      fVar43 = fVar43 * *(float *)(unaff_EBP + -0x48);
      uVar3 = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
      iVar37 = unaff_ESI[6]._padding_;
      *(undefined8 *)(unaff_EBP + -0x338) = uVar3;
      *(undefined8 *)(unaff_EBP + -0x344) = uVar3;
      *(undefined8 *)(unaff_EBP + -0x350) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
      *(int *)(unaff_EBP + -0x348) = iVar37;
      *(float *)(unaff_EBP + -0x524) = *(float *)(unaff_EBP + -0x348) + fVar43 + fVar43;
      iVar37 = *(int *)(unaff_EBP + -0x524);
      *(ulonglong *)&unaff_ESI[5].___m_CachedPtr_0 =
           CONCAT44(*(float *)(unaff_EBP + -0x340) + fVar44 + fVar44,
                    fVar41 + fVar41 + *(float *)(unaff_EBP + -0x338));
      goto LAB_10881ff2;
    }
  }
  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x590),
             (MethodInfo *)0x0);
  iVar37 = unaff_ESI[6]._padding_;
  *(undefined8 *)(unaff_EBP + -0x48) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
  *(int *)(unaff_EBP + -0x24) = iVar37;
  pVVar29 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5a0),
                       (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                       &unaff_ESI[5].___m_CachedPtr_0,(MethodInfo *)0x0);
  fVar41 = __real_3e4ccccd;
  uVar5._0_4_ = pVVar29->___x_2;
  uVar5._4_4_ = pVVar29->___y_3;
  fVar44 = pVVar29->___z_4;
  *(undefined8 *)(unaff_EBP + -0x380) = uVar5;
  *(undefined8 *)(unaff_EBP + -0x38c) = uVar5;
  *(undefined8 *)(unaff_EBP + -0x398) = *(undefined8 *)pVVar29;
  *(float *)(unaff_EBP + -0x390) = fVar44;
  *(float *)(unaff_EBP + -0x53c) = *(float *)(unaff_EBP + -0x390) * fVar41;
  VVar16.___z_4 = *(float *)(unaff_EBP + -0x24);
  VVar16._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
  VVar19.___y_3 = *(float *)(unaff_EBP + -0x388) * fVar41;
  VVar19.___x_2 = *(float *)(unaff_EBP + -0x380) * fVar41;
  VVar19.___z_4._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x53c);
  VVar19.___z_4._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x53c) >> 0x10);
  pVVar29 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5b0),
                       VVar16,VVar19,0.3,(MethodInfo *)0x0);
  fVar44 = pVVar29->___z_4;
  *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0 = *(undefined8 *)pVVar29;
  unaff_ESI[6]._padding_ = (int)fVar44;
  bVar27 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                     ((float)unaff_ESI[5].___m_CachedPtr_0,(MethodInfo *)0x0);
  if (bVar27) {
LAB_1088212e:
    *(undefined8 *)(unaff_EBP + -0xa4) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    *(int *)(unaff_EBP + -0x9c) = unaff_ESI[6]._padding_;
    pSVar32 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xa4),
                         (MethodInfo *)0x0);
    pSVar32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                        (_stringLiteral15DA4649065304BE7BBEDD8EED88D74430099708,pSVar32,
                         (MethodInfo *)0x0);
    pIVar26 = Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
    *(String_t **)(unaff_EBP + -0x24) = pSVar32;
    if ((pIVar26->has_cctor != '\0') && (pIVar26->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar26);
      pSVar32 = *(String_t **)(unaff_EBP + -0x24);
    }
    Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
              ((Il2CppObject *)pSVar32,unaff_ESI,(MethodInfo *)0x0);
    pQVar33 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0x760),(MethodInfo *)0x0);
    fVar44 = pQVar33->___y_1;
    fVar41 = pQVar33->___z_2;
    fVar43 = pQVar33->___w_3;
    unaff_ESI[1]._padding_ = (int)pQVar33->___x_0;
    unaff_ESI[1]._padding_ = (int)fVar44;
    unaff_ESI[1].___m_CachedPtr_0 = (int)fVar41;
    unaff_ESI[2]._padding_ = (int)fVar43;
    pQVar33 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0x6f0),(MethodInfo *)0x0);
    fVar44 = pQVar33->___y_1;
    fVar41 = pQVar33->___z_2;
    fVar43 = pQVar33->___w_3;
    unaff_ESI[2]._padding_ = (int)pQVar33->___x_0;
    unaff_ESI[2].___m_CachedPtr_0 = (int)fVar44;
    unaff_ESI[3]._padding_ = (int)fVar41;
    unaff_ESI[3]._padding_ = (int)fVar43;
    pVVar29 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5c0),
                         (MethodInfo *)0x0);
    fVar44 = pVVar29->___z_4;
    *(undefined8 *)&unaff_ESI[4].___m_CachedPtr_0 = *(undefined8 *)pVVar29;
    unaff_ESI[5]._padding_ = (int)fVar44;
    pVVar29 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5d0),
                         (MethodInfo *)0x0);
    fVar44 = pVVar29->___z_4;
    *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0 = *(undefined8 *)pVVar29;
    unaff_ESI[6]._padding_ = (int)fVar44;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)**(undefined4 **)(unaff_EBP + -0x40)
        == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1088311e;
    pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         **(undefined4 **)(unaff_EBP + -0x40),(MethodInfo *)0x0);
    if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
    pVVar29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5e0),
                         pTVar28,(MethodInfo *)0x0);
    fVar44 = pVVar29->___z_4;
    *(undefined8 *)&unaff_ESI[6].___m_CachedPtr_0 = *(undefined8 *)pVVar29;
    unaff_ESI[7]._padding_ = (int)fVar44;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)**(undefined4 **)(unaff_EBP + -0x40)
        == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1088311e;
    pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         **(undefined4 **)(unaff_EBP + -0x40),(MethodInfo *)0x0);
    if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
    pVVar29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5f0),
                         pTVar28,(MethodInfo *)0x0);
    fVar44 = pVVar29->___z_4;
    *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0 = *(undefined8 *)pVVar29;
    unaff_ESI[4]._padding_ = (int)fVar44;
  }
  else {
    bVar27 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                       ((float)unaff_ESI[6]._padding_,(MethodInfo *)0x0);
    if (bVar27) goto LAB_1088212e;
    bVar27 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                       ((float)unaff_ESI[6]._padding_,(MethodInfo *)0x0);
    if (bVar27) goto LAB_1088212e;
  }
  piVar1 = &unaff_ESI[5].___m_CachedPtr_0;
  if (*(char *)(unaff_EBP + -0x2d) == '\x01') {
    uVar3 = *(undefined8 *)piVar1;
    iVar37 = unaff_ESI[6]._padding_;
    *(undefined8 *)(unaff_EBP + -0x3bc) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x3a4) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x3b0) = *(undefined8 *)piVar1;
    *(int *)(unaff_EBP + -0x3a8) = iVar37;
    fVar41 = (*(float *)(unaff_EBP + -0x70) + *(float *)(unaff_EBP + -0x3a0)) * __real_3f000000;
    fVar44 = (*(float *)(unaff_EBP + -0x74) + *(float *)(unaff_EBP + -0x3bc)) * __real_3f000000;
    *(float *)(unaff_EBP + -0x548) =
         (*(float *)(unaff_EBP + -0x6c) + *(float *)(unaff_EBP + -0x3a8)) * __real_3f000000;
    iVar37 = *(int *)(unaff_EBP + -0x548);
    *(ulonglong *)piVar1 = CONCAT44(fVar41,fVar44);
    unaff_ESI[6]._padding_ = iVar37;
  }
  uVar3 = *(undefined8 *)piVar1;
  *(int *)(unaff_EBP + -0x24) = unaff_ESI[6]._padding_;
  *(undefined8 *)(unaff_EBP + -0x48) = uVar3;
  pVVar29 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x600),
                       (MethodInfo *)0x0);
  VVar17.___z_4 = *(float *)(unaff_EBP + -0x24);
  VVar17._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
  bVar27 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710
                     (VVar17,*pVVar29,(MethodInfo *)0x0);
  if (bVar27) {
    *(undefined8 *)(unaff_EBP + -200) = *(undefined8 *)&unaff_ESI[5].___m_CachedPtr_0;
    fVar44 = *(float *)(unaff_EBP + -0xc4) * __real_3f000000;
    *(int *)(unaff_EBP + -0xc0) = unaff_ESI[6]._padding_;
    *(float *)(unaff_EBP + -0xc4) = fVar44;
    fVar44 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -200),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar44;
    if (__real_3a83126f < *(float *)(unaff_EBP + -0x24)) {
      uVar3 = *(undefined8 *)(unaff_EBP + -200);
      fVar44 = *(float *)(unaff_EBP + -0xc0);
      uVar30 = (undefined4)uVar3;
      uVar45 = (undefined2)((ulonglong)uVar3 >> 0x20);
      uVar46 = (undefined2)((ulonglong)uVar3 >> 0x30);
      pQVar33 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0x710);
LAB_108824d0:
      VVar23.___y_3._0_2_ = uVar45;
      VVar23.___x_2 = (float)uVar30;
      VVar23.___y_3._2_2_ = uVar46;
      VVar23.___z_4 = fVar44;
      pQVar33 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                          (pQVar33,VVar23,(MethodInfo *)0x0);
      fVar44 = pQVar33->___y_1;
      fVar41 = pQVar33->___z_2;
      fVar43 = pQVar33->___w_3;
      unaff_ESI[2]._padding_ = (int)pQVar33->___x_0;
      unaff_ESI[2].___m_CachedPtr_0 = (int)fVar44;
      unaff_ESI[3]._padding_ = (int)fVar41;
      unaff_ESI[3]._padding_ = (int)fVar43;
    }
  }
  else {
    pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)unaff_ESI,
                         (MethodInfo *)0x0);
    if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
    pTVar28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                        (pTVar28,0,(MethodInfo *)0x0);
    if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
    pVVar29 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x610),
                         pTVar28,(MethodInfo *)0x0);
    uVar40._0_4_ = pVVar29->___x_2;
    uVar40._4_4_ = pVVar29->___y_3;
    *(float *)(unaff_EBP + -0x24) = pVVar29->___z_4;
    pIVar26 = ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var;
    *(undefined8 *)(unaff_EBP + -0x48) = uVar40;
    if ((pIVar26->has_cctor != '\0') && (pIVar26->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar26);
      uVar40 = *(undefined8 *)(unaff_EBP + -0x48);
    }
    fVar20.___z_2._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x24);
    fVar20.___x_0 = (float)(int)uVar40;
    fVar20.___y_1 = (float)(int)((ulonglong)uVar40 >> 0x20);
    fVar20.___z_2._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x24) >> 0x10);
    pfVar34 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)(unaff_EBP + -0x620),
                         fVar20,0.0,(MethodInfo *)0x0);
    *(undefined8 *)(unaff_EBP + -0xe0) = *(undefined8 *)pfVar34;
    *(float *)(unaff_EBP + -0xd8) = pfVar34->___z_2;
    fVar44 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xe0),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar44;
    if (__real_3a83126f < *(float *)(unaff_EBP + -0x24)) {
      uVar3 = *(undefined8 *)(unaff_EBP + -0xe0);
      fVar44 = *(float *)(unaff_EBP + -0xd8);
      uVar30 = (undefined4)uVar3;
      uVar45 = (undefined2)((ulonglong)uVar3 >> 0x20);
      uVar46 = (undefined2)((ulonglong)uVar3 >> 0x30);
      pQVar33 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0x700);
      goto LAB_108824d0;
    }
  }
  if (*(char *)(unaff_EBP + -0x2d) != '\x01') {
    fVar41 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    fVar44 = __real_3b83126f;
    *(float *)(unaff_EBP + -0x24) = fVar41;
    if (*(float *)(unaff_EBP + -0x24) <= fVar44 && fVar44 != *(float *)(unaff_EBP + -0x24)) {
      *(undefined1 *)&unaff_ESI[8]._padding_ = 1;
    }
    else {
      fVar41 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      fVar44 = __real_3d4ccccd;
      *(float *)(unaff_EBP + -0x24) = fVar41;
      if (*(float *)(unaff_EBP + -0x24) <= fVar44 && fVar44 != *(float *)(unaff_EBP + -0x24)) {
        iVar37 = unaff_ESI[4]._padding_;
        *(undefined4 *)(unaff_EBP + -0x5c) = __real_7f7fffff;
        uVar3 = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
        *(undefined8 *)(unaff_EBP + -0x3c8) = uVar3;
        *(undefined8 *)(unaff_EBP + -0x3d4) = uVar3;
        fVar41 = *(float *)(unaff_EBP + -0x3c8) - 0.0;
        fVar44 = *(float *)(unaff_EBP + -0x3d0) - __real_3ecccccd;
        *(undefined8 *)(unaff_EBP + -0x3e0) = *(undefined8 *)&unaff_ESI[3].___m_CachedPtr_0;
        *(int *)(unaff_EBP + -0x3d8) = iVar37;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(float *)(unaff_EBP + -0x4bc) = *(float *)(unaff_EBP + -0x3d8) - 0.0;
        iVar37 = *(int *)(unaff_EBX + 8);
        uVar30 = *(undefined4 *)(unaff_EBP + -0x4bc);
        *(ulonglong *)(unaff_EBP + -0x194) = CONCAT44(fVar44,fVar41);
        iVar37 = *(int *)(iVar37 + 0xc);
        *(undefined4 *)(unaff_EBP + -0x18c) = uVar30;
        if ((iVar37 != 0) &&
           (pPVar11 = *(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)(iVar37 + 0x48),
           pPVar11 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) {
          VVar21.___y_3 = fVar44;
          VVar21.___x_2 = fVar41;
          VVar21.___z_4._0_2_ = (short)uVar30;
          VVar21.___z_4._2_2_ = (short)((uint)uVar30 >> 0x10);
          pPVar35 = PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B
                              ((PropRadiusIterator_1_t8BEB1BDABCF7CF0A8A765F4BE51A89745FC048D8 *)
                               (unaff_EBP + -0x7a8),pPVar11,VVar21,0.8,
                               PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B_RuntimeMethod_var
                              );
          pMVar25 =
          PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5017749CB463E9EC263AC0D22B753686B3A705CC_RuntimeMethod_var
          ;
          fVar44 = pPVar35->___sqRadius_1;
          fVar41 = (pPVar35->___pos_2).___x_2;
          fVar43 = (pPVar35->___pos_2).___y_3;
          *(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)(unaff_EBP + -0x4b8) =
               pPVar35->___propPlacer_0;
          *(float *)(unaff_EBP + -0x4b4) = fVar44;
          *(float *)(unaff_EBP + -0x4b0) = fVar41;
          *(float *)(unaff_EBP + -0x4ac) = fVar43;
          iVar37 = pPVar35->___x_3;
          iVar13 = pPVar35->___y_4;
          iVar14 = pPVar35->___z_5;
          *(float *)(unaff_EBP + -0x4a8) = (pPVar35->___pos_2).___z_4;
          *(int *)(unaff_EBP + -0x4a4) = iVar37;
          *(int *)(unaff_EBP + -0x4a0) = iVar13;
          *(int *)(unaff_EBP + -0x49c) = iVar14;
          pLVar15 = pPVar35->___propColliders_7;
          iVar37 = (pPVar35->___min_8).___x_0;
          iVar13 = (pPVar35->___min_8).___y_1;
          *(int *)(unaff_EBP + -0x498) = pPVar35->___i_6;
          *(List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 **)(unaff_EBP + -0x494) = pLVar15;
          *(int *)(unaff_EBP + -0x490) = iVar37;
          *(int *)(unaff_EBP + -0x48c) = iVar13;
          iVar37 = (pPVar35->___max_9).___x_0;
          iVar13 = (pPVar35->___max_9).___y_1;
          iVar14 = (pPVar35->___max_9).___z_2;
          *(int *)(unaff_EBP + -0x488) = (pPVar35->___min_8).___z_2;
          *(int *)(unaff_EBP + -0x484) = iVar37;
          *(int *)(unaff_EBP + -0x480) = iVar13;
          *(int *)(unaff_EBP + -0x47c) = iVar14;
          *(ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B **)(unaff_EBP + -0x478) =
               pPVar35->___current_10;
          pIVar36 = PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
                              ((PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *)
                               (unaff_EBP + -0x4b8),pMVar25);
          *(Il2CppObject **)(unaff_EBP + -0x2c) = pIVar36;
          *(Il2CppObject **)(unaff_EBP + -0x34) = pIVar36;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          while (pIVar36 != (Il2CppObject *)0x0) {
            iVar37 = InterfaceFuncInvoker0<int>::Invoke
                               (0,
                                IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                                ,pIVar36);
            if ((char)iVar37 == '\0') {
              *(undefined4 *)(unaff_EBP + -0x98 + unaff_EDI * 4) = 0x6d2;
              *(undefined1 *)(unaff_EBP + -4) = 0;
              *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + -0x78) + 1;
              FUN_10882811();
              return;
            }
            iVar37 = InterfaceFuncInvoker0<int>::Invoke
                               (0,
                                IEnumerator_1_t428EE1A2EF0DAB43B08E748658632119C0628F96_il2cpp_TypeInfo_var
                                ,*(Il2CppObject **)(unaff_EBP + -0x2c));
            *(int *)(unaff_EBP + -0x24) = iVar37;
            if (iVar37 == 0) break;
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar37 + 0xc);
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar27 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                                 (unaff_EBP + -0x3c),(MethodInfo *)0x0);
            pIVar36 = *(Il2CppObject **)(unaff_EBP + -0x2c);
            if (!bVar27) {
              fVar44 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0)
              ;
              *(float *)(unaff_EBP + -0x44) = fVar44;
              pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                    (unaff_EBP + -0x24),(MethodInfo *)0x0);
              if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
              pVVar29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                   (unaff_EBP + -0x630),pTVar28,(MethodInfo *)0x0);
              uVar6._0_4_ = pVVar29->___x_2;
              uVar6._4_4_ = pVVar29->___y_3;
              fVar44 = pVVar29->___z_4;
              *(undefined8 *)(unaff_EBP + -0xf8) = uVar6;
              *(undefined8 *)(unaff_EBP + -0x104) = uVar6;
              *(undefined8 *)(unaff_EBP + -0x14c) = *(undefined8 *)pVVar29;
              *(float *)(unaff_EBP + -0x144) = fVar44;
              *(float *)(unaff_EBP + -0xf0) = fVar44;
              *(float *)(unaff_EBP + -0xfc) = fVar44;
              *(float *)(unaff_EBP + -0x554) =
                   *(float *)(unaff_EBP + -0x18c) - *(float *)(unaff_EBP + -0x144);
              *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x554);
              *(ulonglong *)(unaff_EBP + -0xa4) =
                   CONCAT44(*(float *)(unaff_EBP + -400) - *(float *)(unaff_EBP + -0x100),
                            *(float *)(unaff_EBP + -0x194) - *(float *)(unaff_EBP + -0xf8));
              fVar44 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                 ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                  (unaff_EBP + -0xa4),(MethodInfo *)0x0);
              pIVar36 = *(Il2CppObject **)(unaff_EBP + -0x2c);
              *(float *)(unaff_EBP + -0x3c) = fVar44;
              fVar44 = *(float *)(unaff_EBP + -0x3c) + *(float *)(unaff_EBP + -0x44);
              if (fVar44 < *(float *)(unaff_EBP + -0x5c)) {
                *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x24);
                pIVar36 = *(Il2CppObject **)(unaff_EBP + -0x2c);
                *(float *)(unaff_EBP + -0x5c) = fVar44;
              }
            }
          }
        }
LAB_1088311e:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
    }
  }
LAB_10882ca7:
  *(undefined4 *)(unaff_EBP + -0x98 + unaff_EDI * 4) = 0x788;
  *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + -0x78) + 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x35),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x54) == (Exception_t *)0x0) {
    FUN_10882ddb();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x54),(MethodInfo *)0x0);
}
