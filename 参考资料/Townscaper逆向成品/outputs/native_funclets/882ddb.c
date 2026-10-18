// RVA 0x882ddb | Recovered.function.called_by_8811c0
// PDB: FUN_10882ddb
// Body: [[10882ddb, 10883122] [10883133, 1088313a]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1065f8c0 Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10882ddb(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  uchar uVar22;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar23;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar24;
  int iVar25;
  List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 *pLVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar29;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar31;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar32;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar33;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar34;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar35;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar37;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar38;
  Il2CppClass *pIVar39;
  MethodInfo *pMVar40;
  bool bVar41;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar42;
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *pBVar43;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar44;
  PropRadiusIterator_1_t8BEB1BDABCF7CF0A8A765F4BE51A89745FC048D8 *pPVar45;
  Il2CppObject *pIVar46;
  int iVar47;
  undefined4 uVar48;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar49;
  String_t *pSVar50;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar51;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar52;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar53;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar54;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar55;
  int iVar56;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined2 uVar65;
  undefined2 uVar66;

  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x9c + unaff_EDI * 4) == 0x788)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x78) = unaff_EDI;
  }
  do {
    iVar47 = *(int *)(unaff_EBX + 8);
    iVar56 = *(int *)(unaff_EBP + -0x58) + -1;
    *(int *)(unaff_EBP + -0x58) = iVar56;
    if (iVar56 < 0) {
      iVar56 = 0;
      if (0 < *(int *)(unaff_EBP + -0x68)) goto LAB_10882e10;
      goto LAB_1088310a;
    }
    if ((*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar47 + 0x20) ==
         (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
       (pTVar42 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)
                              (iVar47 + 0x20),iVar56,(MethodInfo *)0x0),
       pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pBVar43 = (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar42,
                         Component_GetComponent_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m6292A40671E923ACA3F127F3AC70E85B80A3B4E5_RuntimeMethod_var
                        );
    *(Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E **)(unaff_EBP + -0xac) = pBVar43;
    fVar64 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar64;
    if (pBVar43 == (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0) goto LAB_1088311e;
  } while (*(float *)(unaff_EBP + -0x24) <= pBVar43->___time_10 + __real_3e99999a);
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x35),
             (MethodInfo *)_stringLiteralE94D9C6A1BB0F2F1B7531974E4AAD70D6F76179E);
  fVar59 = (pBVar43->___posMid_6).___z_4;
  *(undefined8 *)(unaff_EBP + -0x3f8) = *(undefined8 *)&pBVar43->___velocityNext_8;
  uVar1._0_4_ = (pBVar43->___posMid_6).___x_2;
  uVar1._4_4_ = (pBVar43->___posMid_6).___y_3;
  *(undefined8 *)(unaff_EBP + -0x404) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x428) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x410) = *(undefined8 *)&pBVar43->___velocityNext_8;
  fVar64 = *(float *)(unaff_EBP + -0x40c);
  fVar57 = *(float *)(unaff_EBP + -0x424);
  *(undefined8 *)(unaff_EBP + -0x440) = *(undefined8 *)&pBVar43->___posMid_6;
  uVar1 = *(undefined8 *)&pBVar43->___velocityNext_8;
  *(float *)(unaff_EBP + -0x438) = fVar59;
  fVar59 = (pBVar43->___velocityNext_8).___z_4;
  *(undefined8 *)(unaff_EBP + -0x434) = uVar1;
  *(float *)(unaff_EBP + -0x42c) = fVar59;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(float *)(unaff_EBP + -0x56c) = *(float *)(unaff_EBP + -0x42c) + *(float *)(unaff_EBP + -0x438);
  fVar59 = *(float *)(unaff_EBP + -0x56c);
  (pBVar43->___posMid_6).___x_2 = *(float *)(unaff_EBP + -0x3f8) + *(float *)(unaff_EBP + -0x404);
  (pBVar43->___posMid_6).___y_3 = fVar64 + fVar57;
  (pBVar43->___posMid_6).___z_4 = fVar59;
  fVar57 = (pBVar43->___velocityNext_8).___y_3;
  fVar64 = (pBVar43->___velocityNext_8).___z_4;
  (pBVar43->___velocityPrev_7).___x_2 = (pBVar43->___velocityNext_8).___x_2;
  (pBVar43->___velocityPrev_7).___y_3 = fVar57;
  (pBVar43->___velocityPrev_7).___z_4 = fVar64;
  pBVar43->___time_10 = pBVar43->___time_10 + __real_3e99999a;
  fVar64 = (pBVar43->___rotation1_5).___y_1;
  fVar57 = (pBVar43->___rotation1_5).___z_2;
  fVar59 = (pBVar43->___rotation1_5).___w_3;
  bVar21 = pBVar43->___state_11;
  (pBVar43->___rotation0_4).___x_0 = (pBVar43->___rotation1_5).___x_0;
  (pBVar43->___rotation0_4).___y_1 = fVar64;
  (pBVar43->___rotation0_4).___z_2 = fVar57;
  (pBVar43->___rotation0_4).___w_3 = fVar59;
  if (1 < bVar21) {
    if (bVar21 != 2) goto LAB_10882ca7;
    pVVar44 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6a0),
                         (MethodInfo *)0x0);
    fVar57 = pVVar44->___y_3;
    fVar64 = pVVar44->___z_4;
    (pBVar43->___velocityNext_8).___x_2 = pVVar44->___x_2;
    (pBVar43->___velocityNext_8).___y_3 = fVar57;
    (pBVar43->___velocityNext_8).___z_4 = fVar64;
    fVar57 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    fVar64 = __real_3b83126f;
    *(float *)(unaff_EBP + -0x44) = fVar57;
    if (fVar64 < *(float *)(unaff_EBP + -0x44) || fVar64 == *(float *)(unaff_EBP + -0x44))
    goto LAB_10882ca7;
    pBVar43->___state_11 = '\0';
    pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar43,
                         (MethodInfo *)0x0);
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
    *(undefined4 *)(unaff_EBP + -0xb8) = 0x3ecccccd;
    *(undefined4 *)(unaff_EBP + -0xb4) = 0x3e4ccccd;
    if (pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
    pVVar44 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6b0),
                         pTVar42,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                  (unaff_EBP + -0xbc),(MethodInfo *)0x0);
    fVar57 = pVVar44->___y_3;
    fVar64 = pVVar44->___z_4;
    (pBVar43->___velocityNext_8).___x_2 = pVVar44->___x_2;
    (pBVar43->___velocityNext_8).___y_3 = fVar57;
    (pBVar43->___velocityNext_8).___z_4 = fVar64;
    pIVar46 = Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar43,
                         Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
                        );
    if (pIVar46 == (Il2CppObject *)0x0) goto LAB_1088311e;
    pMVar53 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)(*(int *)(unaff_EBX + 8) + 0x14);
    uVar65 = SUB42(pIVar46,0);
    uVar66 = (undefined2)((uint)pIVar46 >> 0x10);
LAB_10882c9f:
    MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
              ((MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)CONCAT22(uVar66,uVar65),
               pMVar53,(MethodInfo *)0x0);
    goto LAB_10882ca7;
  }
  *(ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B ***)(unaff_EBP + -0x40) =
       &pBVar43->___landing_12;
  *(ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B **)(unaff_EBP + -0x24) =
       pBVar43->___landing_12;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar41 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x24),
                      (MethodInfo *)0x0);
  fVar64 = __real_3f333333;
  if (!bVar41) {
    *(undefined8 *)(unaff_EBP + -0x44c) = *(undefined8 *)&pBVar43->___velocityNext_8;
    uVar2._0_4_ = (pBVar43->___posMid_6).___x_2;
    uVar2._4_4_ = (pBVar43->___posMid_6).___y_3;
    *(undefined8 *)(unaff_EBP + -0x458) = uVar2;
    fVar64 = (pBVar43->___posMid_6).___z_4;
    *(undefined8 *)(unaff_EBP + -0x470) = uVar2;
    *(undefined8 *)(unaff_EBP + -0x464) = *(undefined8 *)&pBVar43->___velocityNext_8;
    *(undefined8 *)(unaff_EBP + -500) = *(undefined8 *)&pBVar43->___posMid_6;
    *(undefined8 *)(unaff_EBP + -0x1e8) = *(undefined8 *)&pBVar43->___velocityNext_8;
    *(float *)(unaff_EBP + -0x1ec) = fVar64;
    *(float *)(unaff_EBP + -0x1e0) = (pBVar43->___velocityNext_8).___z_4;
    *(float *)(unaff_EBP + -0x24) = *(float *)(unaff_EBP + -0x44c) + *(float *)(unaff_EBP + -0x458);
    *(float *)(unaff_EBP + -0x5c) = *(float *)(unaff_EBP + -0x460) + *(float *)(unaff_EBP + -0x46c);
    *(float *)(unaff_EBP + -0x34) = *(float *)(unaff_EBP + -0x1e0) + *(float *)(unaff_EBP + -0x1ec);
    pVVar44 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6c0),
                         (MethodInfo *)0x0);
    fVar57 = __real_3ecccccd;
    uVar3._0_4_ = pVVar44->___x_2;
    uVar3._4_4_ = pVVar44->___y_3;
    fVar64 = pVVar44->___z_4;
    *(undefined8 *)(unaff_EBP + -0x218) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x200) = uVar3;
    uVar1 = *(undefined8 *)pVVar44;
    *(float *)(unaff_EBP + -0x204) = fVar64;
    *(undefined8 *)(unaff_EBP + -0x20c) = uVar1;
    *(float *)(unaff_EBP + -0x1ac) =
         *(float *)(unaff_EBP + -0x24) - *(float *)(unaff_EBP + -0x218) * fVar57;
    *(float *)(unaff_EBP + -0x1a8) =
         *(float *)(unaff_EBP + -0x5c) - *(float *)(unaff_EBP + -0x1fc) * fVar57;
    *(float *)(unaff_EBP + -0x1a4) =
         *(float *)(unaff_EBP + -0x34) - *(float *)(unaff_EBP + -0x204) * fVar57;
    iVar47 = *(int *)(*(int *)(unaff_EBX + 8) + 0xc);
    if ((iVar47 != 0) &&
       (pPVar23 = *(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)(iVar47 + 0x48),
       pPVar23 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) {
      VVar31.___z_4._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x1a4) >> 0x10);
      VVar31._0_10_ = *(unkbyte10 *)(unaff_EBP + -0x1ac);
      pPVar45 = PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B
                          ((PropRadiusIterator_1_t8BEB1BDABCF7CF0A8A765F4BE51A89745FC048D8 *)
                           (unaff_EBP + -0x7a8),pPVar23,VVar31,0.8,
                           PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B_RuntimeMethod_var
                          );
      pMVar40 =
      PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5017749CB463E9EC263AC0D22B753686B3A705CC_RuntimeMethod_var
      ;
      fVar64 = pPVar45->___sqRadius_1;
      fVar57 = (pPVar45->___pos_2).___x_2;
      fVar59 = (pPVar45->___pos_2).___y_3;
      *(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)(unaff_EBP + -0x4b8) =
           pPVar45->___propPlacer_0;
      *(float *)(unaff_EBP + -0x4b4) = fVar64;
      *(float *)(unaff_EBP + -0x4b0) = fVar57;
      *(float *)(unaff_EBP + -0x4ac) = fVar59;
      iVar47 = pPVar45->___x_3;
      iVar56 = pPVar45->___y_4;
      iVar25 = pPVar45->___z_5;
      *(float *)(unaff_EBP + -0x4a8) = (pPVar45->___pos_2).___z_4;
      *(int *)(unaff_EBP + -0x4a4) = iVar47;
      *(int *)(unaff_EBP + -0x4a0) = iVar56;
      *(int *)(unaff_EBP + -0x49c) = iVar25;
      pLVar26 = pPVar45->___propColliders_7;
      iVar47 = (pPVar45->___min_8).___x_0;
      iVar56 = (pPVar45->___min_8).___y_1;
      *(int *)(unaff_EBP + -0x498) = pPVar45->___i_6;
      *(List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 **)(unaff_EBP + -0x494) = pLVar26;
      *(int *)(unaff_EBP + -0x490) = iVar47;
      *(int *)(unaff_EBP + -0x48c) = iVar56;
      iVar47 = (pPVar45->___max_9).___x_0;
      iVar56 = (pPVar45->___max_9).___y_1;
      iVar25 = (pPVar45->___max_9).___z_2;
      *(int *)(unaff_EBP + -0x488) = (pPVar45->___min_8).___z_2;
      *(int *)(unaff_EBP + -0x484) = iVar47;
      *(int *)(unaff_EBP + -0x480) = iVar56;
      *(int *)(unaff_EBP + -0x47c) = iVar25;
      *(ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B **)(unaff_EBP + -0x478) =
           pPVar45->___current_10;
      pIVar46 = PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
                          ((PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *)
                           (unaff_EBP + -0x4b8),pMVar40);
      *(Il2CppObject **)(unaff_EBP + -0x2c) = pIVar46;
      *(Il2CppObject **)(unaff_EBP + -0x34) = pIVar46;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      while (pIVar46 != (Il2CppObject *)0x0) {
        iVar47 = InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                            ,pIVar46);
        if ((char)iVar47 == '\0') {
          *(undefined4 *)(unaff_EBP + -0x98 + unaff_EDI * 4) = 0x13c;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + -0x78) + 1;
          FUN_10881768();
          return;
        }
        iVar47 = InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_1_t428EE1A2EF0DAB43B08E748658632119C0628F96_il2cpp_TypeInfo_var
                            ,*(Il2CppObject **)(unaff_EBP + -0x2c));
        *(int *)(unaff_EBP + -0x5c) = iVar47;
        pIVar39 = Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
        if (iVar47 == 0) break;
        pOVar55 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(iVar47 + 0xc);
        *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x24) = pOVar55;
        if ((pIVar39->has_cctor != '\0') && (pIVar39->cctor_finished == 0)) {
          il2cpp_runtime_class_init(pIVar39);
          pOVar55 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x24);
        }
        bVar41 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                           (pOVar55,(MethodInfo *)0x0);
        pIVar46 = *(Il2CppObject **)(unaff_EBP + -0x2c);
        if (!bVar41) {
          ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
                    (*(ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD **)(unaff_EBX + 8),
                     pBVar43,*(ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B **)
                              (unaff_EBP + -0x5c),(MethodInfo *)0x0);
          pIVar46 = *(Il2CppObject **)(unaff_EBP + -0x2c);
        }
      }
    }
    goto LAB_1088311e;
  }
  uVar4._0_4_ = (pBVar43->___velocityNext_8).___x_2;
  uVar4._4_4_ = (pBVar43->___velocityNext_8).___y_3;
  uVar22 = pBVar43->___state_11;
  *(undefined8 *)(unaff_EBP + -0x224) = uVar4;
  *(undefined8 *)(unaff_EBP + -0x230) = uVar4;
  uVar1 = *(undefined8 *)&pBVar43->___velocityNext_8;
  fVar57 = *(float *)(unaff_EBP + -0x22c);
  *(uchar *)(unaff_EBP + -0x2d) = uVar22;
  fVar59 = (pBVar43->___velocityNext_8).___z_4;
  *(undefined8 *)(unaff_EBP + -0x23c) = uVar1;
  *(float *)(unaff_EBP + -0x234) = fVar59;
  *(float *)(unaff_EBP + -0x578) = *(float *)(unaff_EBP + -0x234) * fVar64;
  fVar59 = *(float *)(unaff_EBP + -0x578);
  (pBVar43->___velocityNext_8).___x_2 = *(float *)(unaff_EBP + -0x224) * fVar64;
  (pBVar43->___velocityNext_8).___y_3 = fVar57 * fVar64;
  (pBVar43->___velocityNext_8).___z_4 = fVar59;
  pCVar54 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
            **(undefined4 **)(unaff_EBP + -0x40);
  *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + -100) = pCVar54;
  if (pCVar54 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1088311e;
  pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      (pCVar54,(MethodInfo *)0x0);
  *(undefined4 *)(unaff_EBP + -0x1b8) = 0;
  *(undefined4 *)(unaff_EBP + -0x1b4) = 0x3c23d70a;
  *(undefined4 *)(unaff_EBP + -0x1b0) = 0;
  if (pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  pVVar44 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6d0),
                       pTVar42,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                (unaff_EBP + -0x1b8),(MethodInfo *)0x0);
  fVar64 = pVVar44->___z_4;
  *(undefined8 *)(unaff_EBP + -0xd4) = *(undefined8 *)pVVar44;
  *(float *)(unaff_EBP + -0xcc) = fVar64;
  pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + -100),
                       (MethodInfo *)0x0);
  *(undefined4 *)(unaff_EBP + -0x1c4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0x3e99999a;
  *(undefined4 *)(unaff_EBP + -0x1bc) = 0;
  if (pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  pVVar44 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6e0),
                       pTVar42,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                (unaff_EBP + -0x1c4),(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar44->___x_2;
  uVar5._4_4_ = pVVar44->___y_3;
  fVar64 = pVVar44->___z_4;
  if (*(char *)(unaff_EBP + -0x2d) == '\x01') {
    *(undefined8 *)(unaff_EBP + -0x1d0) = uVar5;
    uVar6._0_4_ = (pBVar43->___posMid_6).___x_2;
    uVar6._4_4_ = (pBVar43->___posMid_6).___y_3;
    *(undefined8 *)(unaff_EBP + -0x248) = uVar6;
    *(undefined8 *)(unaff_EBP + -0x254) = uVar6;
    *(undefined8 *)(unaff_EBP + -0x260) = *(undefined8 *)&pBVar43->___posMid_6;
    *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0xd4);
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(float *)(unaff_EBP + -0x34) = *(float *)(unaff_EBP + -0xd0);
    *(float *)(unaff_EBP + -0x1c8) = fVar64;
    *(float *)(unaff_EBP + -600) = (pBVar43->___posMid_6).___z_4;
    *(float *)(unaff_EBP + -0x2c) = *(float *)(unaff_EBP + -0xcc);
    *(float *)(unaff_EBP + -0x4dc) = *(float *)(unaff_EBP + -0xcc) - *(float *)(unaff_EBP + -600);
    *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x4dc);
    *(ulonglong *)(unaff_EBP + -0xa4) =
         CONCAT44(*(float *)(unaff_EBP + -0xd0) - *(float *)(unaff_EBP + -0x250),
                  *(float *)(unaff_EBP + -0xd4) - *(float *)(unaff_EBP + -0x248));
    fVar64 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xa4),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar64;
    fVar64 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                       (0.0,*(float *)(unaff_EBP + -0x24),(MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar64;
    fVar64 = *(float *)(unaff_EBP + -0x24);
    *(float *)(unaff_EBP + -0x4e8) =
         *(float *)(unaff_EBP + -0x2c) + *(float *)(unaff_EBP + -0x1c8) * fVar64;
    uVar48 = *(undefined4 *)(unaff_EBP + -0x4e8);
    *(ulonglong *)(unaff_EBP + -0xec) =
         CONCAT44(*(float *)(unaff_EBP + -0x34) + *(float *)(unaff_EBP + -0x1cc) * fVar64,
                  fVar64 * *(float *)(unaff_EBP + -0x1d0) + *(float *)(unaff_EBP + -0x50));
  }
  else {
    *(undefined8 *)(unaff_EBP + -0x26c) = uVar5;
    uVar7._0_4_ = pVVar44->___x_2;
    uVar7._4_4_ = pVVar44->___y_3;
    *(undefined8 *)(unaff_EBP + -0x278) = uVar7;
    *(undefined8 *)(unaff_EBP + -0x284) = uVar7;
    *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0xd4);
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(float *)(unaff_EBP + -0x34) = *(float *)(unaff_EBP + -0xd0);
    *(float *)(unaff_EBP + -0x27c) = fVar64;
    *(float *)(unaff_EBP + -0x2c) = *(float *)(unaff_EBP + -0xcc);
    *(float *)(unaff_EBP + -0x4f4) = *(float *)(unaff_EBP + -0xcc) + *(float *)(unaff_EBP + -0x27c);
    uVar48 = *(undefined4 *)(unaff_EBP + -0x4f4);
    *(ulonglong *)(unaff_EBP + -0xec) =
         CONCAT44(*(float *)(unaff_EBP + -0xd0) + *(float *)(unaff_EBP + -0x274),
                  *(float *)(unaff_EBP + -0xd4) + *(float *)(unaff_EBP + -0x26c));
  }
  *(undefined4 *)(unaff_EBP + -0xe4) = uVar48;
  uVar8._0_4_ = (pBVar43->___posMid_6).___x_2;
  uVar8._4_4_ = (pBVar43->___posMid_6).___y_3;
  fVar64 = (pBVar43->___posMid_6).___z_4;
  *(undefined8 *)(unaff_EBP + -0x35c) = uVar8;
  *(undefined8 *)(unaff_EBP + -0x290) = uVar8;
  *(undefined8 *)(unaff_EBP + -0x29c) = *(undefined8 *)&pBVar43->___posMid_6;
  *(float *)(unaff_EBP + -0x294) = fVar64;
  *(float *)(unaff_EBP + -0x500) = *(float *)(unaff_EBP + -0xe4) - *(float *)(unaff_EBP + -0x294);
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x500);
  *(ulonglong *)(unaff_EBP + -0x74) =
       CONCAT44(*(float *)(unaff_EBP + -0xe8) - *(float *)(unaff_EBP + -0x28c),
                *(float *)(unaff_EBP + -0xec) - *(float *)(unaff_EBP + -0x35c));
  fVar64 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x74),
                      (MethodInfo *)0x0);
  *(float *)(unaff_EBP + -0x24) = fVar64;
  fVar59 = __real_3f000000;
  fVar57 = __real_3dcccccd;
  fVar64 = *(float *)(unaff_EBP + -0x24);
  if (*(char *)(unaff_EBP + -0x2d) == '\x01') {
    if (fVar64 < __real_3ca3d70a) {
      uVar18._0_4_ = (pBVar43->___posMid_6).___x_2;
      uVar18._4_4_ = (pBVar43->___posMid_6).___y_3;
      fVar62 = (pBVar43->___posMid_6).___z_4;
      fVar64 = *(float *)(unaff_EBP + -0x2c);
      fVar57 = *(float *)(unaff_EBP + -0x34);
      *(undefined8 *)(unaff_EBP + -0x11c) = uVar18;
      *(undefined8 *)(unaff_EBP + -0x128) = uVar18;
      uVar1 = *(undefined8 *)&pBVar43->___posMid_6;
      fVar59 = *(float *)(unaff_EBP + -0x124);
      *(float *)(unaff_EBP + -300) = fVar62;
      fVar61 = *(float *)(unaff_EBP + -300);
      *(undefined8 *)(unaff_EBP + -0x134) = uVar1;
      fVar63 = *(float *)(unaff_EBP + -0x50);
      fVar60 = *(float *)(unaff_EBP + -0x11c);
      pBVar43->___state_11 = '\x02';
      *(float *)(unaff_EBP + -0x114) = fVar62;
      *(float *)(unaff_EBP + -0x560) = fVar64 - fVar61;
      fVar64 = *(float *)(unaff_EBP + -0x560);
      pCVar54 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + -100);
      (pBVar43->___velocityNext_8).___x_2 = fVar63 - fVar60;
      (pBVar43->___velocityNext_8).___y_3 = fVar57 - fVar59;
      (pBVar43->___velocityNext_8).___z_4 = fVar64;
      pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          (pCVar54,(MethodInfo *)0x0);
      if (pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
      pVVar44 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x660)
                           ,pTVar42,(MethodInfo *)0x0);
      fVar64 = pVVar44->___z_4;
      *(undefined8 *)(unaff_EBP + -0x60) = *(undefined8 *)pVVar44;
      *(float *)(unaff_EBP + -0x24) = fVar64;
      pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar43,
                           (MethodInfo *)0x0);
      if (pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
      pVVar44 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x670)
                           ,pTVar42,(MethodInfo *)0x0);
      uVar1 = *(undefined8 *)pVVar44;
      *(float *)(unaff_EBP + -0x198) = pVVar44->___z_4;
      *(undefined8 *)(unaff_EBP + -0x1a0) = uVar1;
      pVVar44 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x680)
                           ,(MethodInfo *)0x0);
      fVar57 = __real_3e4ccccd;
      uVar19._0_4_ = pVVar44->___x_2;
      uVar19._4_4_ = pVVar44->___y_3;
      fVar64 = pVVar44->___z_4;
      *(undefined8 *)(unaff_EBP + -0x17c) = uVar19;
      *(undefined8 *)(unaff_EBP + -0x110) = uVar19;
      *(undefined8 *)(unaff_EBP + -0x140) = *(undefined8 *)pVVar44;
      *(float *)(unaff_EBP + -0x138) = fVar64;
      *(float *)(unaff_EBP + -0x44) =
           *(float *)(unaff_EBP + -0x17c) * fVar57 + *(float *)(unaff_EBP + -0x1a0);
      *(float *)(unaff_EBP + -0x3c) =
           *(float *)(unaff_EBP + -0x19c) + *(float *)(unaff_EBP + -0x10c) * fVar57;
      *(float *)(unaff_EBP + -0xac) =
           *(float *)(unaff_EBP + -0x198) + *(float *)(unaff_EBP + -0x138) * fVar57;
      pVVar44 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x690)
                           ,(MethodInfo *)0x0);
      fVar57 = __real_3f000000;
      uVar20._0_4_ = pVVar44->___x_2;
      uVar20._4_4_ = pVVar44->___y_3;
      fVar64 = pVVar44->___z_4;
      *(undefined8 *)(unaff_EBP + -0x170) = uVar20;
      *(undefined8 *)(unaff_EBP + -0x158) = uVar20;
      *(undefined8 *)(unaff_EBP + -0x164) = *(undefined8 *)pVVar44;
      *(float *)(unaff_EBP + -0x15c) = fVar64;
      fVar64 = *(float *)(unaff_EBP + -0x154) * fVar57 + *(float *)(unaff_EBP + -0x3c);
      *(float *)(unaff_EBP + -0x1d4) =
           *(float *)(unaff_EBP + -0x15c) * fVar57 + *(float *)(unaff_EBP + -0xac);
      VVar29.___z_4 = *(float *)(unaff_EBP + -0x24);
      VVar29._0_8_ = *(undefined8 *)(unaff_EBP + -0x60);
      VVar38.___y_3._0_2_ = SUB42(fVar64,0);
      VVar38.___x_2 = *(float *)(unaff_EBP + -0x170) * fVar57 + *(float *)(unaff_EBP + -0x44);
      VVar38.___y_3._2_2_ = (short)((uint)fVar64 >> 0x10);
      VVar38.___z_4 = *(float *)(unaff_EBP + -0x1d4);
      pQVar51 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1
                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                           (unaff_EBP + -0x720),VVar29,VVar38,(MethodInfo *)0x0);
      fVar64 = pQVar51->___y_1;
      fVar57 = pQVar51->___z_2;
      fVar59 = pQVar51->___w_3;
      *(float *)(unaff_EBP + -0x50) = pQVar51->___x_0;
      *(float *)(unaff_EBP + -0x4c) = fVar64;
      *(float *)(unaff_EBP + -0x48) = fVar57;
      *(float *)(unaff_EBP + -0x44) = fVar59;
      pQVar51 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                           (unaff_EBP + -0x730),90.0,0.0,0.0,(MethodInfo *)0x0);
      QVar35.___z_2._2_2_ = (short)((uint)pQVar51->___z_2 >> 0x10);
      QVar35._0_10_ = *(unkbyte10 *)pQVar51;
      QVar35.___w_3 = pQVar51->___w_3;
      pQVar51 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                           (unaff_EBP + -0x740),
                           *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                            (unaff_EBP + -0x50),QVar35,(MethodInfo *)0x0);
      fVar64 = pQVar51->___y_1;
      fVar57 = pQVar51->___z_2;
      fVar59 = pQVar51->___w_3;
      (pBVar43->___rotation1_5).___x_0 = pQVar51->___x_0;
      (pBVar43->___rotation1_5).___y_1 = fVar64;
      (pBVar43->___rotation1_5).___z_2 = fVar57;
      (pBVar43->___rotation1_5).___w_3 = fVar59;
      pIVar46 = Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar43,
                           Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
                          );
      fVar57 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      fVar64 = __real_3e4ccccd;
      *(float *)(unaff_EBP + -0x44) = fVar57;
      if (fVar64 < *(float *)(unaff_EBP + -0x44) || fVar64 == *(float *)(unaff_EBP + -0x44)) {
        pMVar53 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                   (*(int *)(unaff_EBX + 8) + 0x1c);
      }
      else {
        pMVar53 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                   (*(int *)(unaff_EBX + 8) + 0x18);
      }
      if (pIVar46 == (Il2CppObject *)0x0) goto LAB_1088311e;
      uVar65 = SUB42(pIVar46,0);
      uVar66 = (undefined2)((uint)pIVar46 >> 0x10);
      goto LAB_10882c9f;
    }
    fVar61 = *(float *)(unaff_EBP + -0x70) * __real_3dcccccd;
    fVar59 = *(float *)(unaff_EBP + -0x6c) * __real_3dcccccd;
    uVar13._0_4_ = (pBVar43->___velocityNext_8).___x_2;
    uVar13._4_4_ = (pBVar43->___velocityNext_8).___y_3;
    fVar64 = (pBVar43->___velocityNext_8).___z_4;
    *(undefined8 *)(unaff_EBP + -0x41c) = uVar13;
    *(undefined8 *)(unaff_EBP + -0x368) = uVar13;
    *(undefined8 *)(unaff_EBP + -0x374) = *(undefined8 *)&pBVar43->___velocityNext_8;
    *(float *)(unaff_EBP + -0x36c) = fVar64;
    fVar64 = *(float *)(unaff_EBP + -0x364);
    *(float *)(unaff_EBP + -0x530) = *(float *)(unaff_EBP + -0x36c) + fVar59;
    fVar59 = *(float *)(unaff_EBP + -0x530);
    (pBVar43->___velocityNext_8).___x_2 =
         *(float *)(unaff_EBP + -0x74) * fVar57 + *(float *)(unaff_EBP + -0x41c);
    (pBVar43->___velocityNext_8).___y_3 = fVar64 + fVar61;
LAB_10881ff2:
    (pBVar43->___velocityNext_8).___z_4 = fVar59;
  }
  else {
    if (__real_3f000000 < fVar64) {
      fVar64 = fVar64 - __real_3f000000;
      fVar60 = *(float *)(unaff_EBP + -0x70) * fVar64 * __real_3f000000;
      fVar61 = *(float *)(unaff_EBP + -0x6c) * fVar64 * __real_3f000000;
      uVar9._0_4_ = (pBVar43->___velocityNext_8).___x_2;
      uVar9._4_4_ = (pBVar43->___velocityNext_8).___y_3;
      fVar57 = (pBVar43->___velocityNext_8).___z_4;
      *(undefined8 *)(unaff_EBP + -0x2a8) = uVar9;
      *(undefined8 *)(unaff_EBP + -0x2b4) = uVar9;
      uVar1 = *(undefined8 *)&pBVar43->___velocityNext_8;
      *(float *)(unaff_EBP + -0x2b8) = fVar57;
      fVar57 = *(float *)(unaff_EBP + -0x2b0);
      *(undefined8 *)(unaff_EBP + -0x2c0) = uVar1;
      *(float *)(unaff_EBP + -0x50c) = *(float *)(unaff_EBP + -0x2b8) + fVar61;
      fVar61 = *(float *)(unaff_EBP + -0x50c);
      (pBVar43->___velocityNext_8).___x_2 =
           *(float *)(unaff_EBP + -0x74) * fVar64 * fVar59 + *(float *)(unaff_EBP + -0x2a8);
      (pBVar43->___velocityNext_8).___y_3 = fVar57 + fVar60;
      (pBVar43->___velocityNext_8).___z_4 = fVar61;
    }
    fVar57 = pBVar43->___time_10 * __real_3c23d70a;
    fVar64 = (pBVar43->___posMid_6).___y_3;
    *(float *)(unaff_EBP + -0x34) = fVar57;
    fVar57 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       (fVar64,fVar57 + ___real_3f0a8c15,(MethodInfo *)0x0);
    fVar64 = (pBVar43->___posMid_6).___z_4;
    *(float *)(unaff_EBP + -0x24) = fVar57;
    *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0x24) - __real_3f000000;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    fVar57 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       (fVar64,*(float *)(unaff_EBP + -0x34) + ___real_4083f3b6,(MethodInfo *)0x0);
    fVar64 = *(float *)(unaff_EBP + -0x34) + ___real_411d816f;
    *(float *)(unaff_EBP + -0x24) = fVar57;
    *(float *)(unaff_EBP + -0x24) = *(float *)(unaff_EBP + -0x24) - __real_3f000000;
    fVar57 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       ((pBVar43->___posMid_6).___x_2,fVar64,(MethodInfo *)0x0);
    fVar61 = __real_3ecccccd;
    fVar64 = *(float *)(unaff_EBP + -0x24);
    *(float *)(unaff_EBP + -0x5c) = fVar57;
    fVar59 = *(float *)(unaff_EBP + -0x5c) - __real_3f000000;
    uVar10._0_4_ = (pBVar43->___velocityNext_8).___x_2;
    uVar10._4_4_ = (pBVar43->___velocityNext_8).___y_3;
    *(float *)(unaff_EBP + -0x2dc) = (pBVar43->___velocityNext_8).___z_4;
    *(undefined8 *)(unaff_EBP + -0x2cc) = uVar10;
    *(undefined8 *)(unaff_EBP + -0x2d8) = uVar10;
    *(undefined8 *)(unaff_EBP + -0x2e4) = *(undefined8 *)&pBVar43->___velocityNext_8;
    fVar57 = *(float *)(unaff_EBP + -0x2d4);
    *(float *)(unaff_EBP + -0x518) = *(float *)(unaff_EBP + -0x2dc) + fVar59 * fVar61;
    fVar59 = *(float *)(unaff_EBP + -0x518);
    (pBVar43->___velocityNext_8).___x_2 =
         *(float *)(unaff_EBP + -0x50) * fVar61 + *(float *)(unaff_EBP + -0x2cc);
    (pBVar43->___velocityNext_8).___y_3 = fVar57 + fVar64 * fVar61;
    (pBVar43->___velocityNext_8).___z_4 = fVar59;
    fVar64 = (pBVar43->___posMid_6).___z_4;
    *(undefined8 *)(unaff_EBP + -800) = *(undefined8 *)&pBVar43->___velocityNext_8;
    uVar11._0_4_ = (pBVar43->___posMid_6).___x_2;
    uVar11._4_4_ = (pBVar43->___posMid_6).___y_3;
    *(undefined8 *)(unaff_EBP + -0x32c) = uVar11;
    *(undefined8 *)(unaff_EBP + -0x2fc) = uVar11;
    *(undefined8 *)(unaff_EBP + -0x2f0) = *(undefined8 *)&pBVar43->___velocityNext_8;
    uVar1 = *(undefined8 *)&pBVar43->___posMid_6;
    *(float *)(unaff_EBP + -0x30c) = fVar64;
    fVar64 = (pBVar43->___velocityNext_8).___z_4;
    *(undefined8 *)(unaff_EBP + -0x314) = uVar1;
    uVar1 = *(undefined8 *)&pBVar43->___velocityNext_8;
    *(float *)(unaff_EBP + -0x300) = fVar64;
    *(undefined8 *)(unaff_EBP + -0x308) = uVar1;
    *(float *)(unaff_EBP + -0x184) =
         (*(float *)(unaff_EBP + -0x2ec) + *(float *)(unaff_EBP + -0x2f8)) - __real_3dcccccd;
    *(float *)(unaff_EBP + -0x180) =
         (*(float *)(unaff_EBP + -0x300) + *(float *)(unaff_EBP + -0x30c)) - 0.0;
    *(float *)(unaff_EBP + -0x188) =
         (*(float *)(unaff_EBP + -800) + *(float *)(unaff_EBP + -0x32c)) - 0.0;
    iVar47 = *(int *)(*(int *)(unaff_EBX + 8) + 0xc);
    if ((iVar47 == 0) ||
       (pGVar24 = *(Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 **)(iVar47 + 0x18),
       pGVar24 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1088311e;
    pVVar49 = Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
                        ((ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)
                         (unaff_EBP + -0x750),pGVar24,
                         *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x188),
                         (MethodInfo *)0x0);
    fVar61 = __real_3e99999a;
    fVar64 = (pVVar49->___Item1_0).___y_3;
    fVar57 = (pVVar49->___Item1_0).___z_4;
    fVar59 = pVVar49->___Item2_1;
    *(float *)(unaff_EBP + -0x50) = (pVVar49->___Item1_0).___x_2;
    *(float *)(unaff_EBP + -0x4c) = fVar64;
    *(float *)(unaff_EBP + -0x48) = fVar57;
    *(float *)(unaff_EBP + -0x44) = fVar59;
    if (fVar61 < fVar59) {
      fVar59 = fVar59 - fVar61;
      fVar60 = fVar59 * *(float *)(unaff_EBP + -0x50);
      fVar61 = fVar59 * *(float *)(unaff_EBP + -0x4c);
      fVar59 = fVar59 * *(float *)(unaff_EBP + -0x48);
      uVar12._0_4_ = (pBVar43->___velocityNext_8).___x_2;
      uVar12._4_4_ = (pBVar43->___velocityNext_8).___y_3;
      fVar57 = (pBVar43->___velocityNext_8).___z_4;
      *(undefined8 *)(unaff_EBP + -0x338) = uVar12;
      *(undefined8 *)(unaff_EBP + -0x344) = uVar12;
      fVar64 = *(float *)(unaff_EBP + -0x340);
      *(undefined8 *)(unaff_EBP + -0x350) = *(undefined8 *)&pBVar43->___velocityNext_8;
      *(float *)(unaff_EBP + -0x348) = fVar57;
      *(float *)(unaff_EBP + -0x524) = *(float *)(unaff_EBP + -0x348) + fVar59 + fVar59;
      fVar59 = *(float *)(unaff_EBP + -0x524);
      (pBVar43->___velocityNext_8).___x_2 = fVar60 + fVar60 + *(float *)(unaff_EBP + -0x338);
      (pBVar43->___velocityNext_8).___y_3 = fVar64 + fVar61 + fVar61;
      goto LAB_10881ff2;
    }
  }
  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x590),
             (MethodInfo *)0x0);
  fVar64 = (pBVar43->___velocityNext_8).___z_4;
  *(undefined8 *)(unaff_EBP + -0x48) = *(undefined8 *)&pBVar43->___velocityNext_8;
  *(float *)(unaff_EBP + -0x24) = fVar64;
  pVVar44 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5a0),
                       &pBVar43->___velocityNext_8,(MethodInfo *)0x0);
  fVar57 = __real_3e4ccccd;
  uVar14._0_4_ = pVVar44->___x_2;
  uVar14._4_4_ = pVVar44->___y_3;
  fVar64 = pVVar44->___z_4;
  *(undefined8 *)(unaff_EBP + -0x380) = uVar14;
  *(undefined8 *)(unaff_EBP + -0x38c) = uVar14;
  *(undefined8 *)(unaff_EBP + -0x398) = *(undefined8 *)pVVar44;
  *(float *)(unaff_EBP + -0x390) = fVar64;
  *(float *)(unaff_EBP + -0x53c) = *(float *)(unaff_EBP + -0x390) * fVar57;
  VVar27.___z_4 = *(float *)(unaff_EBP + -0x24);
  VVar27._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
  VVar32.___y_3 = *(float *)(unaff_EBP + -0x388) * fVar57;
  VVar32.___x_2 = *(float *)(unaff_EBP + -0x380) * fVar57;
  VVar32.___z_4._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x53c);
  VVar32.___z_4._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x53c) >> 0x10);
  pVVar44 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5b0),
                       VVar27,VVar32,0.3,(MethodInfo *)0x0);
  fVar57 = pVVar44->___y_3;
  fVar64 = pVVar44->___z_4;
  (pBVar43->___velocityNext_8).___x_2 = pVVar44->___x_2;
  (pBVar43->___velocityNext_8).___y_3 = fVar57;
  (pBVar43->___velocityNext_8).___z_4 = fVar64;
  bVar41 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                     ((pBVar43->___velocityNext_8).___x_2,(MethodInfo *)0x0);
  if (((bVar41) ||
      (bVar41 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                          ((pBVar43->___velocityNext_8).___y_3,(MethodInfo *)0x0), bVar41)) ||
     (bVar41 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                         ((pBVar43->___velocityNext_8).___z_4,(MethodInfo *)0x0), bVar41)) {
    *(undefined8 *)(unaff_EBP + -0xa4) = *(undefined8 *)&pBVar43->___velocityNext_8;
    *(float *)(unaff_EBP + -0x9c) = (pBVar43->___velocityNext_8).___z_4;
    pSVar50 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xa4),
                         (MethodInfo *)0x0);
    pSVar50 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                        (_stringLiteral15DA4649065304BE7BBEDD8EED88D74430099708,pSVar50,
                         (MethodInfo *)0x0);
    pIVar39 = Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
    *(String_t **)(unaff_EBP + -0x24) = pSVar50;
    if ((pIVar39->has_cctor != '\0') && (pIVar39->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar39);
      pSVar50 = *(String_t **)(unaff_EBP + -0x24);
    }
    Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
              ((Il2CppObject *)pSVar50,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar43,
               (MethodInfo *)0x0);
    pQVar51 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0x760),(MethodInfo *)0x0);
    fVar64 = pQVar51->___y_1;
    fVar57 = pQVar51->___z_2;
    fVar59 = pQVar51->___w_3;
    (pBVar43->___rotation0_4).___x_0 = pQVar51->___x_0;
    (pBVar43->___rotation0_4).___y_1 = fVar64;
    (pBVar43->___rotation0_4).___z_2 = fVar57;
    (pBVar43->___rotation0_4).___w_3 = fVar59;
    pQVar51 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0x6f0),(MethodInfo *)0x0);
    fVar64 = pQVar51->___y_1;
    fVar57 = pQVar51->___z_2;
    fVar59 = pQVar51->___w_3;
    (pBVar43->___rotation1_5).___x_0 = pQVar51->___x_0;
    (pBVar43->___rotation1_5).___y_1 = fVar64;
    (pBVar43->___rotation1_5).___z_2 = fVar57;
    (pBVar43->___rotation1_5).___w_3 = fVar59;
    pVVar44 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5c0),
                         (MethodInfo *)0x0);
    fVar57 = pVVar44->___y_3;
    fVar64 = pVVar44->___z_4;
    (pBVar43->___velocityPrev_7).___x_2 = pVVar44->___x_2;
    (pBVar43->___velocityPrev_7).___y_3 = fVar57;
    (pBVar43->___velocityPrev_7).___z_4 = fVar64;
    pVVar44 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5d0),
                         (MethodInfo *)0x0);
    fVar57 = pVVar44->___y_3;
    fVar64 = pVVar44->___z_4;
    (pBVar43->___velocityNext_8).___x_2 = pVVar44->___x_2;
    (pBVar43->___velocityNext_8).___y_3 = fVar57;
    (pBVar43->___velocityNext_8).___z_4 = fVar64;
    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)**(undefined4 **)(unaff_EBP + -0x40)
         == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             **(undefined4 **)(unaff_EBP + -0x40),(MethodInfo *)0x0),
       pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pVVar44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5e0),
                         pTVar42,(MethodInfo *)0x0);
    fVar57 = pVVar44->___y_3;
    fVar64 = pVVar44->___z_4;
    (pBVar43->___pos_9).___x_2 = pVVar44->___x_2;
    (pBVar43->___pos_9).___y_3 = fVar57;
    (pBVar43->___pos_9).___z_4 = fVar64;
    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)**(undefined4 **)(unaff_EBP + -0x40)
         == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             **(undefined4 **)(unaff_EBP + -0x40),(MethodInfo *)0x0),
       pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pVVar44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x5f0),
                         pTVar42,(MethodInfo *)0x0);
    fVar57 = pVVar44->___y_3;
    fVar64 = pVVar44->___z_4;
    (pBVar43->___posMid_6).___x_2 = pVVar44->___x_2;
    (pBVar43->___posMid_6).___y_3 = fVar57;
    (pBVar43->___posMid_6).___z_4 = fVar64;
  }
  pVVar44 = &pBVar43->___velocityNext_8;
  if (*(char *)(unaff_EBP + -0x2d) == '\x01') {
    uVar15._0_4_ = pVVar44->___x_2;
    uVar15._4_4_ = pVVar44->___y_3;
    fVar64 = (pBVar43->___velocityNext_8).___z_4;
    *(undefined8 *)(unaff_EBP + -0x3bc) = uVar15;
    *(undefined8 *)(unaff_EBP + -0x3a4) = uVar15;
    *(undefined8 *)(unaff_EBP + -0x3b0) = *(undefined8 *)pVVar44;
    *(float *)(unaff_EBP + -0x3a8) = fVar64;
    fVar59 = (*(float *)(unaff_EBP + -0x70) + *(float *)(unaff_EBP + -0x3a0)) * __real_3f000000;
    fVar57 = (*(float *)(unaff_EBP + -0x74) + *(float *)(unaff_EBP + -0x3bc)) * __real_3f000000;
    *(float *)(unaff_EBP + -0x548) =
         (*(float *)(unaff_EBP + -0x6c) + *(float *)(unaff_EBP + -0x3a8)) * __real_3f000000;
    fVar64 = *(float *)(unaff_EBP + -0x548);
    pVVar44->___x_2 = fVar57;
    pVVar44->___y_3 = fVar59;
    (pBVar43->___velocityNext_8).___z_4 = fVar64;
  }
  uVar1 = *(undefined8 *)pVVar44;
  *(float *)(unaff_EBP + -0x24) = (pBVar43->___velocityNext_8).___z_4;
  *(undefined8 *)(unaff_EBP + -0x48) = uVar1;
  pVVar44 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x600),
                       (MethodInfo *)0x0);
  VVar28.___z_4 = *(float *)(unaff_EBP + -0x24);
  VVar28._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
  bVar41 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710
                     (VVar28,*pVVar44,(MethodInfo *)0x0);
  if (bVar41) {
    *(undefined8 *)(unaff_EBP + -200) = *(undefined8 *)&pBVar43->___velocityNext_8;
    fVar64 = *(float *)(unaff_EBP + -0xc4) * __real_3f000000;
    *(float *)(unaff_EBP + -0xc0) = (pBVar43->___velocityNext_8).___z_4;
    *(float *)(unaff_EBP + -0xc4) = fVar64;
    fVar64 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -200),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar64;
    if (__real_3a83126f < *(float *)(unaff_EBP + -0x24)) {
      uVar1 = *(undefined8 *)(unaff_EBP + -200);
      fVar64 = *(float *)(unaff_EBP + -0xc0);
      uVar48 = (undefined4)uVar1;
      uVar65 = (undefined2)((ulonglong)uVar1 >> 0x20);
      uVar66 = (undefined2)((ulonglong)uVar1 >> 0x30);
      pQVar51 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0x710);
LAB_108824d0:
      VVar37.___y_3._0_2_ = uVar65;
      VVar37.___x_2 = (float)uVar48;
      VVar37.___y_3._2_2_ = uVar66;
      VVar37.___z_4 = fVar64;
      pQVar51 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                          (pQVar51,VVar37,(MethodInfo *)0x0);
      fVar64 = pQVar51->___y_1;
      fVar57 = pQVar51->___z_2;
      fVar59 = pQVar51->___w_3;
      (pBVar43->___rotation1_5).___x_0 = pQVar51->___x_0;
      (pBVar43->___rotation1_5).___y_1 = fVar64;
      (pBVar43->___rotation1_5).___z_2 = fVar57;
      (pBVar43->___rotation1_5).___w_3 = fVar59;
    }
  }
  else {
    pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar43,
                         (MethodInfo *)0x0);
    if ((pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
       (pTVar42 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar42,0,(MethodInfo *)0x0),
       pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pVVar44 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x610),
                         pTVar42,(MethodInfo *)0x0);
    uVar58._0_4_ = pVVar44->___x_2;
    uVar58._4_4_ = pVVar44->___y_3;
    *(float *)(unaff_EBP + -0x24) = pVVar44->___z_4;
    pIVar39 = ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var;
    *(undefined8 *)(unaff_EBP + -0x48) = uVar58;
    if ((pIVar39->has_cctor != '\0') && (pIVar39->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar39);
      uVar58 = *(undefined8 *)(unaff_EBP + -0x48);
    }
    fVar33.___z_2._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x24);
    fVar33.___x_0 = (float)(int)uVar58;
    fVar33.___y_1 = (float)(int)((ulonglong)uVar58 >> 0x20);
    fVar33.___z_2._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x24) >> 0x10);
    pfVar52 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)(unaff_EBP + -0x620),
                         fVar33,0.0,(MethodInfo *)0x0);
    *(undefined8 *)(unaff_EBP + -0xe0) = *(undefined8 *)pfVar52;
    *(float *)(unaff_EBP + -0xd8) = pfVar52->___z_2;
    fVar64 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xe0),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar64;
    if (__real_3a83126f < *(float *)(unaff_EBP + -0x24)) {
      uVar1 = *(undefined8 *)(unaff_EBP + -0xe0);
      fVar64 = *(float *)(unaff_EBP + -0xd8);
      uVar48 = (undefined4)uVar1;
      uVar65 = (undefined2)((ulonglong)uVar1 >> 0x20);
      uVar66 = (undefined2)((ulonglong)uVar1 >> 0x30);
      pQVar51 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0x700);
      goto LAB_108824d0;
    }
  }
  if (*(char *)(unaff_EBP + -0x2d) != '\x01') {
    fVar57 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    fVar64 = __real_3b83126f;
    *(float *)(unaff_EBP + -0x24) = fVar57;
    if (*(float *)(unaff_EBP + -0x24) <= fVar64 && fVar64 != *(float *)(unaff_EBP + -0x24)) {
      pBVar43->___state_11 = '\x01';
    }
    else {
      fVar57 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      fVar64 = __real_3d4ccccd;
      *(float *)(unaff_EBP + -0x24) = fVar57;
      if (*(float *)(unaff_EBP + -0x24) <= fVar64 && fVar64 != *(float *)(unaff_EBP + -0x24)) {
        fVar64 = (pBVar43->___posMid_6).___z_4;
        *(undefined4 *)(unaff_EBP + -0x5c) = __real_7f7fffff;
        uVar16._0_4_ = (pBVar43->___posMid_6).___x_2;
        uVar16._4_4_ = (pBVar43->___posMid_6).___y_3;
        *(undefined8 *)(unaff_EBP + -0x3c8) = uVar16;
        *(undefined8 *)(unaff_EBP + -0x3d4) = uVar16;
        fVar59 = *(float *)(unaff_EBP + -0x3c8) - 0.0;
        fVar57 = *(float *)(unaff_EBP + -0x3d0) - __real_3ecccccd;
        *(undefined8 *)(unaff_EBP + -0x3e0) = *(undefined8 *)&pBVar43->___posMid_6;
        *(float *)(unaff_EBP + -0x3d8) = fVar64;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(float *)(unaff_EBP + -0x4bc) = *(float *)(unaff_EBP + -0x3d8) - 0.0;
        iVar47 = *(int *)(unaff_EBX + 8);
        uVar48 = *(undefined4 *)(unaff_EBP + -0x4bc);
        *(ulonglong *)(unaff_EBP + -0x194) = CONCAT44(fVar57,fVar59);
        iVar47 = *(int *)(iVar47 + 0xc);
        *(undefined4 *)(unaff_EBP + -0x18c) = uVar48;
        if ((iVar47 != 0) &&
           (pPVar23 = *(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)(iVar47 + 0x48),
           pPVar23 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) {
          VVar34.___y_3 = fVar57;
          VVar34.___x_2 = fVar59;
          VVar34.___z_4._0_2_ = (short)uVar48;
          VVar34.___z_4._2_2_ = (short)((uint)uVar48 >> 0x10);
          pPVar45 = PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B
                              ((PropRadiusIterator_1_t8BEB1BDABCF7CF0A8A765F4BE51A89745FC048D8 *)
                               (unaff_EBP + -0x7a8),pPVar23,VVar34,0.8,
                               PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B_RuntimeMethod_var
                              );
          pMVar40 =
          PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5017749CB463E9EC263AC0D22B753686B3A705CC_RuntimeMethod_var
          ;
          fVar64 = pPVar45->___sqRadius_1;
          fVar57 = (pPVar45->___pos_2).___x_2;
          fVar59 = (pPVar45->___pos_2).___y_3;
          *(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)(unaff_EBP + -0x4b8) =
               pPVar45->___propPlacer_0;
          *(float *)(unaff_EBP + -0x4b4) = fVar64;
          *(float *)(unaff_EBP + -0x4b0) = fVar57;
          *(float *)(unaff_EBP + -0x4ac) = fVar59;
          iVar47 = pPVar45->___x_3;
          iVar56 = pPVar45->___y_4;
          iVar25 = pPVar45->___z_5;
          *(float *)(unaff_EBP + -0x4a8) = (pPVar45->___pos_2).___z_4;
          *(int *)(unaff_EBP + -0x4a4) = iVar47;
          *(int *)(unaff_EBP + -0x4a0) = iVar56;
          *(int *)(unaff_EBP + -0x49c) = iVar25;
          pLVar26 = pPVar45->___propColliders_7;
          iVar47 = (pPVar45->___min_8).___x_0;
          iVar56 = (pPVar45->___min_8).___y_1;
          *(int *)(unaff_EBP + -0x498) = pPVar45->___i_6;
          *(List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 **)(unaff_EBP + -0x494) = pLVar26;
          *(int *)(unaff_EBP + -0x490) = iVar47;
          *(int *)(unaff_EBP + -0x48c) = iVar56;
          iVar47 = (pPVar45->___max_9).___x_0;
          iVar56 = (pPVar45->___max_9).___y_1;
          iVar25 = (pPVar45->___max_9).___z_2;
          *(int *)(unaff_EBP + -0x488) = (pPVar45->___min_8).___z_2;
          *(int *)(unaff_EBP + -0x484) = iVar47;
          *(int *)(unaff_EBP + -0x480) = iVar56;
          *(int *)(unaff_EBP + -0x47c) = iVar25;
          *(ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B **)(unaff_EBP + -0x478) =
               pPVar45->___current_10;
          pIVar46 = PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
                              ((PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *)
                               (unaff_EBP + -0x4b8),pMVar40);
          *(Il2CppObject **)(unaff_EBP + -0x2c) = pIVar46;
          *(Il2CppObject **)(unaff_EBP + -0x34) = pIVar46;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          while (pIVar46 != (Il2CppObject *)0x0) {
            iVar47 = InterfaceFuncInvoker0<int>::Invoke
                               (0,
                                IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                                ,pIVar46);
            if ((char)iVar47 == '\0') {
              *(undefined4 *)(unaff_EBP + -0x98 + unaff_EDI * 4) = 0x6d2;
              *(undefined1 *)(unaff_EBP + -4) = 0;
              *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + -0x78) + 1;
              FUN_10882811();
              return;
            }
            iVar47 = InterfaceFuncInvoker0<int>::Invoke
                               (0,
                                IEnumerator_1_t428EE1A2EF0DAB43B08E748658632119C0628F96_il2cpp_TypeInfo_var
                                ,*(Il2CppObject **)(unaff_EBP + -0x2c));
            *(int *)(unaff_EBP + -0x24) = iVar47;
            if (iVar47 == 0) break;
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar47 + 0xc);
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar41 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                                 (unaff_EBP + -0x3c),(MethodInfo *)0x0);
            pIVar46 = *(Il2CppObject **)(unaff_EBP + -0x2c);
            if (!bVar41) {
              fVar64 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0)
              ;
              *(float *)(unaff_EBP + -0x44) = fVar64;
              pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                    (unaff_EBP + -0x24),(MethodInfo *)0x0);
              if (pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
              pVVar44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                   (unaff_EBP + -0x630),pTVar42,(MethodInfo *)0x0);
              uVar17._0_4_ = pVVar44->___x_2;
              uVar17._4_4_ = pVVar44->___y_3;
              fVar64 = pVVar44->___z_4;
              *(undefined8 *)(unaff_EBP + -0xf8) = uVar17;
              *(undefined8 *)(unaff_EBP + -0x104) = uVar17;
              *(undefined8 *)(unaff_EBP + -0x14c) = *(undefined8 *)pVVar44;
              *(float *)(unaff_EBP + -0x144) = fVar64;
              *(float *)(unaff_EBP + -0xf0) = fVar64;
              *(float *)(unaff_EBP + -0xfc) = fVar64;
              *(float *)(unaff_EBP + -0x554) =
                   *(float *)(unaff_EBP + -0x18c) - *(float *)(unaff_EBP + -0x144);
              *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x554);
              *(ulonglong *)(unaff_EBP + -0xa4) =
                   CONCAT44(*(float *)(unaff_EBP + -400) - *(float *)(unaff_EBP + -0x100),
                            *(float *)(unaff_EBP + -0x194) - *(float *)(unaff_EBP + -0xf8));
              fVar64 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                 ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                  (unaff_EBP + -0xa4),(MethodInfo *)0x0);
              pIVar46 = *(Il2CppObject **)(unaff_EBP + -0x2c);
              *(float *)(unaff_EBP + -0x3c) = fVar64;
              fVar64 = *(float *)(unaff_EBP + -0x3c) + *(float *)(unaff_EBP + -0x44);
              if (fVar64 < *(float *)(unaff_EBP + -0x5c)) {
                *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x24);
                pIVar46 = *(Il2CppObject **)(unaff_EBP + -0x2c);
                *(float *)(unaff_EBP + -0x5c) = fVar64;
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
  if (*(Exception_t **)(unaff_EBP + -0x54) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x54),(MethodInfo *)0x0);
  }
  FUN_10882ddb();
  return;
LAB_10882e10:
  if (((*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar47 + 0x20) ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
      (pTVar42 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar47 + 0x20)
                            ,iVar56,(MethodInfo *)0x0),
      pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
     (pCVar54 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar42,
                           Component_GetComponent_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m6292A40671E923ACA3F127F3AC70E85B80A3B4E5_RuntimeMethod_var
                          ), pCVar54 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0))
  goto LAB_1088311e;
  uVar1 = *(undefined8 *)&pCVar54[4].field_0x8;
  uVar48 = *(undefined4 *)&pCVar54[5].field_0x4;
  *(undefined8 *)(unaff_EBP + -0x170) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x140) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x11c) = *(undefined8 *)&pCVar54[4].field_0x8;
  *(undefined4 *)(unaff_EBP + -0x114) = uVar48;
  uVar1 = *(undefined8 *)&pCVar54[3].field_0x8;
  uVar48 = *(undefined4 *)&pCVar54[4].field_0x4;
  *(undefined8 *)(unaff_EBP + -0x164) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x110) = uVar1;
  uVar1 = *(undefined8 *)&pCVar54[3].field_0x8;
  *(undefined8 *)(unaff_EBP + -0x14c) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x144) = uVar48;
  *(undefined4 *)(unaff_EBP + -0xb4) = uVar48;
  uVar48 = *(undefined4 *)&pCVar54[6].field_0x4;
  *(undefined8 *)(unaff_EBP + -0xbc) = uVar1;
  uVar1 = *(undefined8 *)&pCVar54[5].field_0x8;
  *(undefined8 *)(unaff_EBP + -0x158) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x134) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x104) = *(undefined8 *)&pCVar54[5].field_0x8;
  *(undefined4 *)(unaff_EBP + -0xfc) = uVar48;
  uVar1 = *(undefined8 *)&pCVar54[3].field_0x8;
  uVar48 = *(undefined4 *)&pCVar54[4].field_0x4;
  *(undefined8 *)(unaff_EBP + -0x17c) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x128) = uVar1;
  *(undefined8 *)(unaff_EBP + -0xf8) = *(undefined8 *)&pCVar54[3].field_0x8;
  *(undefined4 *)(unaff_EBP + -0xf0) = uVar48;
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)&pCVar54[7].field_0x8;
  fVar64 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  *(float *)(unaff_EBP + -0x44) = fVar64;
  fVar64 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     (*(float *)(unaff_EBP + -0x3c),*(float *)(unaff_EBP + -0x3c) + __real_3e99999a,
                      *(float *)(unaff_EBP + -0x44),(MethodInfo *)0x0);
  fVar57 = __real_3f800000;
  *(float *)(unaff_EBP + -0x58) = fVar64;
  fVar64 = *(float *)(unaff_EBP + -0x58);
  fVar57 = fVar57 - fVar64;
  fVar62 = fVar57 * fVar57;
  fVar63 = (fVar57 + fVar57) * fVar64;
  fVar64 = fVar64 * fVar64;
  fVar57 = *(float *)(unaff_EBP + -0x170) * __real_3f000000;
  fVar59 = *(float *)(unaff_EBP + -0x158) * __real_3f000000;
  fVar61 = *(float *)(unaff_EBP + -0x13c) * __real_3f000000;
  fVar60 = *(float *)(unaff_EBP + -0x130) * __real_3f000000;
  *(float *)(unaff_EBP + -0x1d4) =
       (*(float *)(unaff_EBP + -0x144) - *(float *)(unaff_EBP + -0x114) * __real_3f000000) * fVar62
       + fVar63 * *(float *)(unaff_EBP + -0xb4) +
       (*(float *)(unaff_EBP + -0xfc) * __real_3f000000 + *(float *)(unaff_EBP + -0xf0)) * fVar64;
  uVar48 = *(undefined4 *)(unaff_EBP + -0x1d4);
  *(ulonglong *)&pCVar54[6].field_0x8 =
       CONCAT44((*(float *)(unaff_EBP + -0x10c) - fVar61) * fVar62 +
                fVar63 * *(float *)(unaff_EBP + -0xb8) +
                (fVar60 + *(float *)(unaff_EBP + -0x124)) * fVar64,
                (*(float *)(unaff_EBP + -0x164) - fVar57) * fVar62 +
                fVar63 * *(float *)(unaff_EBP + -0xbc) +
                (fVar59 + *(float *)(unaff_EBP + -0x17c)) * fVar64);
  *(undefined4 *)&pCVar54[7].field_0x4 = uVar48;
  pTVar42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      (pCVar54,(MethodInfo *)0x0);
  *(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x44) = pTVar42;
  if (pTVar42 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
            (pTVar42,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&pCVar54[6].field_0x8,
             (MethodInfo *)0x0);
  QVar30.___w_3._2_2_ = (short)((uint)*(undefined4 *)&pCVar54[3].field_0x4 >> 0x10);
  QVar30._0_14_ = *(undefined1 (*) [14])&pCVar54[2].field_0x4;
  pQVar51 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                      ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0x4c8),
                       *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(pCVar54 + 1),QVar30
                       ,*(float *)(unaff_EBP + -0x58),(MethodInfo *)0x0);
  QVar36.___z_2._2_2_ = (short)((uint)pQVar51->___z_2 >> 0x10);
  QVar36._0_10_ = *(unkbyte10 *)pQVar51;
  QVar36.___w_3 = pQVar51->___w_3;
  Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
            (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x44),QVar36,
             (MethodInfo *)0x0);
  iVar47 = *(int *)(unaff_EBX + 8);
  iVar56 = iVar56 + 1;
  if (*(int *)(unaff_EBP + -0x68) <= iVar56) {
LAB_1088310a:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  goto LAB_10882e10;
}
