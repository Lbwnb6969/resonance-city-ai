// RVA 0x8811c0 | Placemaker.Life.ButterflyFlock$$OnUpdate
// PDB: ButterflyFlock_OnUpdate_mC9722E8936069B6D6F6355C7720DAECA0EF39F0A
// Body: [[108811c0, 10881737]]
// Direct callees:
// 1003e420 Invoke
// 10092630 PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1050daa0 PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 106742c0 Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629
// 10881768 FUN_10881768
// 108833e0 ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ButterflyFlock_OnUpdate_mC9722E8936069B6D6F6355C7720DAECA0EF39F0A
          (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar5;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar6;
  float *pfVar7;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar17;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  bool bVar25;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar26;
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *pBVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar28;
  PropRadiusIterator_1_t8BEB1BDABCF7CF0A8A765F4BE51A89745FC048D8 *pPVar29;
  int iVar30;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar31;
  String_t *pSVar32;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar33;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar34;
  Il2CppObject *pIVar35;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar36;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined2 uVar41;
  undefined2 uVar42;
  PropRadiusIterator_1_t8BEB1BDABCF7CF0A8A765F4BE51A89745FC048D8 local_7b8;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_770;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 VStack_760;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_750;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_740;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_730;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_720;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_710;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_700;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_6f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_6e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_6d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_6c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_6b0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_6a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_690;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_680;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E aVStack_670 [4];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_640;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fStack_630;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_620;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_610;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_600;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_5f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_5e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_5d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_5c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_5b0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E aVStack_5a0 [2];
  float fStack_588;
  float local_57c;
  float fStack_570;
  float fStack_564;
  float fStack_558;
  float fStack_54c;
  float fStack_540;
  float fStack_534;
  float fStack_528;
  float fStack_51c;
  float fStack_510;
  float fStack_504;
  float fStack_4f8;
  float fStack_4ec;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_4d8;
  PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B local_4c8;
  undefined8 local_480;
  undefined8 local_474;
  undefined8 local_468;
  undefined8 local_45c;
  undefined8 local_450;
  float local_448;
  undefined8 local_444;
  float local_43c;
  undefined8 local_438;
  undefined8 uStack_42c;
  undefined8 local_420;
  undefined8 local_414;
  undefined8 local_408;
  undefined8 uStack_3f0;
  float fStack_3e8;
  undefined8 uStack_3e4;
  undefined8 uStack_3d8;
  undefined8 uStack_3cc;
  undefined8 uStack_3c0;
  float fStack_3b8;
  undefined8 uStack_3b4;
  undefined8 uStack_3a8;
  float fStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_390;
  undefined8 uStack_384;
  float fStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_36c;
  undefined8 uStack_360;
  float fStack_358;
  undefined8 uStack_354;
  undefined8 uStack_348;
  undefined8 uStack_33c;
  undefined8 uStack_330;
  undefined8 uStack_324;
  float fStack_31c;
  undefined8 uStack_318;
  float fStack_310;
  undefined8 uStack_30c;
  undefined8 uStack_300;
  undefined8 uStack_2f4;
  float fStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2dc;
  undefined8 uStack_2d0;
  float fStack_2c8;
  undefined8 uStack_2c4;
  undefined8 uStack_2b8;
  undefined8 uStack_2ac;
  float fStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_294;
  float fStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_27c;
  undefined8 uStack_270;
  float fStack_268;
  undefined8 uStack_264;
  undefined8 uStack_258;
  undefined8 uStack_24c;
  float fStack_244;
  undefined8 uStack_240;
  undefined8 uStack_234;
  undefined8 local_228;
  undefined8 local_21c;
  float local_214;
  undefined8 local_210;
  undefined8 local_204;
  float local_1fc;
  undefined8 local_1f8;
  float local_1f0;
  float fStack_1e4;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  float local_1bc;
  float fStack_1b8;
  float local_1b4;
  undefined8 uStack_1b0;
  float fStack_1a8;
  undefined8 uStack_1a4;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_180;
  undefined8 uStack_174;
  float fStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_15c;
  float fStack_154;
  undefined8 uStack_150;
  float fStack_148;
  undefined8 uStack_144;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_12c;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_114;
  float fStack_10c;
  undefined8 uStack_108;
  float fStack_100;
  undefined8 uStack_fc;
  float fStack_f4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_f0;
  undefined8 uStack_e4;
  Il2CppObject *pIStack_dc;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_d8;
  undefined8 uStack_cc;
  float fStack_c4;
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *local_bc;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_b4;
  undefined4 uStack_a8;
  int local_88;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_84;
  float local_78;
  ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *pBStack_74;
  undefined8 uStack_70;
  float local_68;
  Exception_t *local_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  String_t *local_50;
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *pBStack_4c;
  undefined1 local_45 [33];
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  int local_14;

  puStack_24 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  puStack_18 = &__ehhandler__ButterflyFlock_OnUpdate_mC9722E8936069B6D6F6355C7720DAECA0EF39F0A;
  pvStack_1c = ExceptionList;
  local_20 = &stack0xfffff830;
  ExceptionList = &pvStack_1c;
  puVar23 = &stack0xfffffffc;
  puVar24 = &stack0xfffff830;
  if (DAT_1151f5d3 == '\0') {
    ExceptionList = &pvStack_1c;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m6292A40671E923ACA3F127F3AC70E85B80A3B4E5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t428EE1A2EF0DAB43B08E748658632119C0628F96_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5017749CB463E9EC263AC0D22B753686B3A705CC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral15DA4649065304BE7BBEDD8EED88D74430099708);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE94D9C6A1BB0F2F1B7531974E4AAD70D6F76179E);
    DAT_1151f5d3 = '\x01';
    puVar23 = puStack_24;
    puVar24 = local_20;
  }
  local_20 = puVar24;
  puStack_24 = puVar23;
  local_45[0] = 0;
  local_84.___z_4 = 0.0;
  local_84.___x_2 = 0.0;
  local_84.___y_3 = 0.0;
  memset((uchar *)&local_4c8,'\0',0x44);
  local_b4.___x_2 = 0.0;
  local_b4.___y_3 = 0.0;
  local_b4.___z_4 = 0.0;
  local_d8.___x_2 = 0.0;
  local_d8.___y_3 = 0.0;
  local_d8.___z_4 = 0.0;
  local_f0.___x_2 = 0.0;
  local_f0.___y_3 = 0.0;
  local_f0.___z_4 = 0.0;
  local_64 = (Exception_t *)0x0;
  local_88 = 0;
  if (param_1->___activeButterflies_9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
  goto LAB_1088311e;
  local_68 = (float)Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                              (param_1->___activeButterflies_9,(MethodInfo *)0x0);
  local_78 = local_68;
  do {
    local_68 = (float)((int)local_68 + -1);
    if ((int)local_68 < 0) {
      iVar30 = 0;
      if ((int)local_78 < 1) {
        ExceptionList = pvStack_1c;
        return;
      }
      goto LAB_10882e10;
    }
    if ((param_1->___activeButterflies_9 ==
         (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
       (pTVar26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (param_1->___activeButterflies_9,(int)local_68,(MethodInfo *)0x0),
       pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pBVar27 = (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar26,
                         Component_GetComponent_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m6292A40671E923ACA3F127F3AC70E85B80A3B4E5_RuntimeMethod_var
                        );
    local_bc = pBVar27;
    local_45._17_4_ = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    if (pBVar27 == (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0) goto LAB_1088311e;
  } while ((float)local_45._17_4_ <= pBVar27->___time_10 + __real_3e99999a);
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_45,
             (MethodInfo *)_stringLiteralE94D9C6A1BB0F2F1B7531974E4AAD70D6F76179E);
  local_408._0_4_ = (pBVar27->___velocityNext_8).___x_2;
  local_408._4_4_ = (pBVar27->___velocityNext_8).___y_3;
  local_448 = (pBVar27->___posMid_6).___z_4;
  local_438._0_4_ = (pBVar27->___posMid_6).___x_2;
  local_438._4_4_ = (pBVar27->___posMid_6).___y_3;
  local_420._0_4_ = (pBVar27->___velocityNext_8).___x_2;
  local_420._4_4_ = (pBVar27->___velocityNext_8).___y_3;
  local_450._0_4_ = (pBVar27->___posMid_6).___x_2;
  local_450._4_4_ = (pBVar27->___posMid_6).___y_3;
  local_444._0_4_ = (pBVar27->___velocityNext_8).___x_2;
  local_444._4_4_ = (pBVar27->___velocityNext_8).___y_3;
  local_43c = (pBVar27->___velocityNext_8).___z_4;
  local_57c = local_43c + local_448;
  local_14._0_1_ = 0;
  local_14._1_3_ = 0;
  (pBVar27->___posMid_6).___x_2 = (float)(undefined4)local_408 + (float)(undefined4)local_438;
  (pBVar27->___posMid_6).___y_3 = (float)local_420._4_4_ + (float)local_438._4_4_;
  (pBVar27->___posMid_6).___z_4 = local_57c;
  fVar39 = (pBVar27->___velocityNext_8).___y_3;
  fVar38 = (pBVar27->___velocityNext_8).___z_4;
  (pBVar27->___velocityPrev_7).___x_2 = (pBVar27->___velocityNext_8).___x_2;
  (pBVar27->___velocityPrev_7).___y_3 = fVar39;
  (pBVar27->___velocityPrev_7).___z_4 = fVar38;
  pBVar27->___time_10 = pBVar27->___time_10 + __real_3e99999a;
  fVar38 = (pBVar27->___rotation1_5).___y_1;
  fVar39 = (pBVar27->___rotation1_5).___z_2;
  fVar40 = (pBVar27->___rotation1_5).___w_3;
  bVar4 = pBVar27->___state_11;
  (pBVar27->___rotation0_4).___x_0 = (pBVar27->___rotation1_5).___x_0;
  (pBVar27->___rotation0_4).___y_1 = fVar38;
  (pBVar27->___rotation0_4).___z_2 = fVar39;
  (pBVar27->___rotation0_4).___w_3 = fVar40;
  local_414 = local_438;
  if (1 < bVar4) {
    if (bVar4 != 2) goto LAB_10882ca7;
    pVVar28 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&VStack_6b0,(MethodInfo *)0x0);
    fVar39 = pVVar28->___y_3;
    fVar38 = pVVar28->___z_4;
    (pBVar27->___velocityNext_8).___x_2 = pVVar28->___x_2;
    (pBVar27->___velocityNext_8).___y_3 = fVar39;
    (pBVar27->___velocityNext_8).___z_4 = fVar38;
    fVar38 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    uStack_58 = CONCAT44(fVar38,(float)uStack_58);
    if (__real_3b83126f <= fVar38) goto LAB_10882ca7;
    pBVar27->___state_11 = '\0';
    pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar27,
                         (MethodInfo *)0x0);
    uStack_cc = 0x3ecccccd00000000;
    fStack_c4 = 0.2;
    if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
    VVar22.___z_4 = 0.2;
    VVar22.___x_2 = 0.0;
    VVar22.___y_3 = 0.4;
    pVVar28 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
                        (&VStack_6c0,pTVar26,VVar22,(MethodInfo *)0x0);
    fVar39 = pVVar28->___y_3;
    fVar38 = pVVar28->___z_4;
    (pBVar27->___velocityNext_8).___x_2 = pVVar28->___x_2;
    (pBVar27->___velocityNext_8).___y_3 = fVar39;
    (pBVar27->___velocityNext_8).___z_4 = fVar38;
    pIVar35 = Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar27,
                         Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
                        );
    if (pIVar35 == (Il2CppObject *)0x0) goto LAB_1088311e;
    pMVar36 = param_1->___flapMesh_6;
    uVar41 = SUB42(pIVar35,0);
    uVar42 = (undefined2)((uint)pIVar35 >> 0x10);
LAB_10882c9f:
    MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
              ((MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)CONCAT22(uVar42,uVar41),
               pMVar36,(MethodInfo *)0x0);
    goto LAB_10882ca7;
  }
  local_50 = (String_t *)&pBVar27->___landing_12;
  local_45._17_4_ = *(undefined4 *)local_50;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_45._17_4_,
                      (MethodInfo *)0x0);
  if (!bVar25) {
    local_45c._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    local_45c._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    local_480._0_4_ = (pBVar27->___posMid_6).___x_2;
    local_480._4_4_ = (pBVar27->___posMid_6).___y_3;
    local_1fc = (pBVar27->___posMid_6).___z_4;
    local_474._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    local_474._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    local_204._0_4_ = (pBVar27->___posMid_6).___x_2;
    local_204._4_4_ = (pBVar27->___posMid_6).___y_3;
    local_1f8._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    local_1f8._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    local_45._17_4_ = (float)(undefined4)local_45c + (float)(undefined4)local_480;
    local_1f0 = (pBVar27->___velocityNext_8).___z_4;
    uStack_70 = CONCAT44((float)local_474._4_4_ + (float)local_480._4_4_,(undefined4)uStack_70);
    local_45._1_4_ = local_1f0 + local_1fc;
    local_468 = local_480;
    pVVar28 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629
                        (&local_6d0,(MethodInfo *)0x0);
    local_228._0_4_ = pVVar28->___x_2;
    local_228._4_4_ = pVVar28->___y_3;
    local_214 = pVVar28->___z_4;
    local_21c._0_4_ = pVVar28->___x_2;
    local_21c._4_4_ = pVVar28->___y_3;
    local_1bc = (float)local_45._17_4_ - (float)(undefined4)local_228 * __real_3ecccccd;
    fStack_1b8 = (float)uStack_70._4_4_ - (float)local_228._4_4_ * __real_3ecccccd;
    local_1b4 = (float)local_45._1_4_ - local_214 * __real_3ecccccd;
    local_210 = local_228;
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pPVar5 = param_1->___master_4->___propPlacer_19,
       pPVar5 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) {
      VVar13.___y_3 = fStack_1b8;
      VVar13.___x_2 = local_1bc;
      VVar13.___z_4._0_2_ = SUB42(local_1b4,0);
      VVar13.___z_4._2_2_ = (short)((uint)local_1b4 >> 0x10);
      pPVar29 = PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B
                          (&local_7b8,pPVar5,VVar13,0.8,
                           PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B_RuntimeMethod_var
                          );
      local_4c8.___propPlacer_0 = pPVar29->___propPlacer_0;
      local_4c8.___sqRadius_1 = pPVar29->___sqRadius_1;
      local_4c8.___pos_2.___x_2 = (pPVar29->___pos_2).___x_2;
      local_4c8.___pos_2.___y_3 = (pPVar29->___pos_2).___y_3;
      local_4c8.___pos_2.___z_4 = (pPVar29->___pos_2).___z_4;
      local_4c8.___x_3 = pPVar29->___x_3;
      local_4c8.___y_4 = pPVar29->___y_4;
      local_4c8.___z_5 = pPVar29->___z_5;
      local_4c8.___i_6 = pPVar29->___i_6;
      local_4c8.___propColliders_7 = pPVar29->___propColliders_7;
      local_4c8.___min_8.___x_0 = (pPVar29->___min_8).___x_0;
      local_4c8.___min_8.___y_1 = (pPVar29->___min_8).___y_1;
      local_4c8.___min_8.___z_2 = (pPVar29->___min_8).___z_2;
      local_4c8.___max_9.___x_0 = (pPVar29->___max_9).___x_0;
      local_4c8.___max_9.___y_1 = (pPVar29->___max_9).___y_1;
      local_4c8.___max_9.___z_2 = (pPVar29->___max_9).___z_2;
      local_4c8.___current_10 = (Il2CppObject *)pPVar29->___current_10;
      local_45._1_4_ =
           PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
                     (&local_4c8,
                      PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5017749CB463E9EC263AC0D22B753686B3A705CC_RuntimeMethod_var
                     );
      local_14._0_1_ = 1;
      local_45._9_4_ = local_45._1_4_;
      while ((Il2CppObject *)local_45._9_4_ != (Il2CppObject *)0x0) {
        iVar30 = InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                            ,(Il2CppObject *)local_45._9_4_);
        if ((char)iVar30 == '\0') {
          uStack_a8 = 0x13c;
          local_88 = local_88 + 1;
          local_14 = (uint)local_14._1_3_ << 8;
          FUN_10881768();
          return;
        }
        iVar30 = InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_1_t428EE1A2EF0DAB43B08E748658632119C0628F96_il2cpp_TypeInfo_var
                            ,(Il2CppObject *)local_45._9_4_);
        uStack_70 = CONCAT44(iVar30,(undefined4)uStack_70);
        if (iVar30 == 0) break;
        local_45._17_4_ = *(undefined4 *)(iVar30 + 0xc);
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                           ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_45._17_4_,
                            (MethodInfo *)0x0);
        if (!bVar25) {
          ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
                    (param_1,pBVar27,uStack_70._4_4_,(MethodInfo *)0x0);
        }
      }
    }
    goto LAB_1088311e;
  }
  uStack_240._0_4_ = (pBVar27->___velocityNext_8).___x_2;
  uStack_240._4_4_ = (pBVar27->___velocityNext_8).___y_3;
  local_45[8] = pBVar27->___state_11;
  uStack_24c._0_4_ = (pBVar27->___velocityNext_8).___x_2;
  uStack_24c._4_4_ = (pBVar27->___velocityNext_8).___y_3;
  fStack_244 = (pBVar27->___velocityNext_8).___z_4;
  fStack_588 = fStack_244 * __real_3f333333;
  fVar38 = (float)uStack_240._4_4_ * __real_3f333333;
  (pBVar27->___velocityNext_8).___x_2 = (float)(undefined4)uStack_240 * __real_3f333333;
  (pBVar27->___velocityNext_8).___y_3 = fVar38;
  (pBVar27->___velocityNext_8).___z_4 = fStack_588;
  pBStack_74 = (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)local_50->_padding_;
  uStack_234 = uStack_240;
  if (pBStack_74 == (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)0x0)
  goto LAB_1088311e;
  pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBStack_74,
                       (MethodInfo *)0x0);
  uStack_1c8 = 0;
  uStack_1c4 = 0x3c23d70a;
  uStack_1c0 = 0;
  if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  pVVar28 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                      (&VStack_6e0,pTVar26,
                       (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                       (ZEXT412(0x3c23d70a) << 0x20),(MethodInfo *)0x0);
  uStack_e4._0_4_ = pVVar28->___x_2;
  uStack_e4._4_4_ = (Il2CppObject *)pVVar28->___y_3;
  pIStack_dc = (Il2CppObject *)pVVar28->___z_4;
  pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBStack_74,
                       (MethodInfo *)0x0);
  uStack_1d4 = 0;
  uStack_1d0 = 0x3e99999a;
  uStack_1cc = 0;
  if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  pVVar28 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
                      (&VStack_6f0,pTVar26,
                       (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                       (ZEXT412(0x3e99999a) << 0x20),(MethodInfo *)0x0);
  uVar2._0_4_ = pVVar28->___x_2;
  uVar2._4_4_ = pVVar28->___y_3;
  fVar38 = pVVar28->___z_4;
  if (local_45[8] == '\x01') {
    uStack_264._0_4_ = (pBVar27->___posMid_6).___x_2;
    uStack_264._4_4_ = (pBVar27->___posMid_6).___y_3;
    uStack_270._0_4_ = (pBVar27->___posMid_6).___x_2;
    uStack_270._4_4_ = (pBVar27->___posMid_6).___y_3;
    fStack_60 = (float)uStack_e4;
    fStack_5c = 0.0;
    uStack_58 = 0;
    local_45._1_4_ = uStack_e4._4_4_;
    fStack_268 = (pBVar27->___posMid_6).___z_4;
    local_45._9_4_ = pIStack_dc;
    fStack_4ec = (float)pIStack_dc - fStack_268;
    local_b4.___y_3 = (float)uStack_e4._4_4_ - (float)uStack_264._4_4_;
    local_b4.___x_2 = (float)uStack_e4 - (float)(undefined4)uStack_264;
    uStack_258 = uStack_264;
    uStack_1e0 = uVar2;
    fStack_1d8 = fVar38;
    local_b4.___z_4 = fStack_4ec;
    local_45._17_4_ =
         Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                   (&local_b4,(MethodInfo *)0x0);
    local_45._17_4_ =
         Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                   (0.0,(float)local_45._17_4_,(MethodInfo *)0x0);
    fStack_f4 = (float)local_45._9_4_ + fStack_1d8 * (float)local_45._17_4_;
    uStack_fc = CONCAT44((float)local_45._1_4_ + uStack_1e0._4_4_ * (float)local_45._17_4_,
                         (float)local_45._17_4_ * (float)uStack_1e0 + fStack_60);
    fStack_4f8 = fStack_f4;
  }
  else {
    uStack_294._0_4_ = pVVar28->___x_2;
    uStack_294._4_4_ = pVVar28->___y_3;
    fStack_60 = (float)uStack_e4;
    fStack_5c = 0.0;
    uStack_58 = 0;
    local_45._1_4_ = uStack_e4._4_4_;
    local_45._9_4_ = pIStack_dc;
    fStack_f4 = (float)pIStack_dc + fVar38;
    uStack_fc = CONCAT44((float)uStack_e4._4_4_ + (float)uStack_294._4_4_,
                         (float)uStack_e4 + (float)(undefined4)uVar2);
    fStack_504 = fStack_f4;
    fStack_28c = fVar38;
    uStack_288 = uStack_294;
    uStack_27c = uVar2;
  }
  uStack_36c._0_4_ = (pBVar27->___posMid_6).___x_2;
  uStack_36c._4_4_ = (pBVar27->___posMid_6).___y_3;
  fStack_2a4 = (pBVar27->___posMid_6).___z_4;
  local_84.___x_2 = (float)uStack_fc - (float)(undefined4)uStack_36c;
  uStack_2ac._0_4_ = (pBVar27->___posMid_6).___x_2;
  uStack_2ac._4_4_ = (pBVar27->___posMid_6).___y_3;
  local_84.___y_3 = uStack_fc._4_4_ - (float)uStack_36c._4_4_;
  fStack_510 = fStack_f4 - fStack_2a4;
  uStack_2a0 = uStack_36c;
  local_84.___z_4 = fStack_510;
  local_45._17_4_ =
       Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                 (&local_84,(MethodInfo *)0x0);
  if (local_45[8] == '\x01') {
    if ((float)local_45._17_4_ < __real_3ca3d70a) {
      uStack_138._0_4_ = (pBVar27->___posMid_6).___x_2;
      uStack_138._4_4_ = (pBVar27->___posMid_6).___y_3;
      fStack_13c = (pBVar27->___posMid_6).___z_4;
      uStack_144._0_4_ = (pBVar27->___posMid_6).___x_2;
      uStack_144._4_4_ = (pBVar27->___posMid_6).___y_3;
      fStack_570 = (float)local_45._9_4_ - fStack_13c;
      pBVar27->___state_11 = '\x02';
      (pBVar27->___velocityNext_8).___x_2 = fStack_60 - (float)(undefined4)uStack_138;
      (pBVar27->___velocityNext_8).___y_3 = (float)local_45._1_4_ - uStack_138._4_4_;
      (pBVar27->___velocityNext_8).___z_4 = fStack_570;
      uStack_12c = uStack_138;
      fStack_124 = fStack_13c;
      pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBStack_74,
                           (MethodInfo *)0x0);
      if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
      pVVar28 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                          (aVStack_670,pTVar26,(MethodInfo *)0x0);
      uStack_70._0_4_ = pVVar28->___x_2;
      uStack_70._4_4_ =
           (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)pVVar28->___y_3;
      local_45._17_4_ = pVVar28->___z_4;
      pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar27,
                           (MethodInfo *)0x0);
      if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
      pVVar28 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                          (&VStack_680,pTVar26,(MethodInfo *)0x0);
      uStack_1b0._0_4_ = pVVar28->___x_2;
      uStack_1b0._4_4_ = pVVar28->___y_3;
      fStack_1a8 = pVVar28->___z_4;
      pVVar28 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                          (&VStack_690,(MethodInfo *)0x0);
      uStack_18c._0_4_ = pVVar28->___x_2;
      uStack_18c._4_4_ = pVVar28->___y_3;
      fStack_148 = pVVar28->___z_4;
      uStack_150._0_4_ = pVVar28->___x_2;
      uStack_150._4_4_ = pVVar28->___y_3;
      pBStack_4c = (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)
                   (uStack_1b0._4_4_ + (float)uStack_18c._4_4_ * __real_3e4ccccd);
      local_bc = (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)
                 (fStack_1a8 + fStack_148 * __real_3e4ccccd);
      uStack_120 = uStack_18c;
      uStack_58._4_4_ =
           (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
           ((float)uStack_18c * __real_3e4ccccd + (float)uStack_1b0);
      pVVar28 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
                          (&VStack_6a0,(MethodInfo *)0x0);
      uStack_180._0_4_ = pVVar28->___x_2;
      uStack_180._4_4_ = pVVar28->___y_3;
      fStack_16c = pVVar28->___z_4;
      uStack_174._0_4_ = pVVar28->___x_2;
      uStack_174._4_4_ = pVVar28->___y_3;
      fStack_1e4 = fStack_16c * __real_3f000000 + (float)local_bc;
      fVar38 = (float)uStack_180._4_4_ * __real_3f000000 + (float)pBStack_4c;
      VVar11.___z_4 = (float)local_45._17_4_;
      VVar11.___x_2 = (float)(undefined4)uStack_70;
      VVar11.___y_3 = (float)uStack_70._4_4_;
      VVar21.___y_3._0_2_ = SUB42(fVar38,0);
      VVar21.___x_2 = (float)uStack_180 * __real_3f000000 + (float)uStack_58._4_4_;
      VVar21.___y_3._2_2_ = (short)((uint)fVar38 >> 0x10);
      VVar21.___z_4 = fStack_1e4;
      uStack_168 = uStack_180;
      pQVar33 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1
                          (&QStack_730,VVar11,VVar21,(MethodInfo *)0x0);
      fStack_60 = pQVar33->___x_0;
      fStack_5c = pQVar33->___y_1;
      uStack_58._0_4_ = pQVar33->___z_2;
      uStack_58._4_4_ = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pQVar33->___w_3;
      pQVar33 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                          (&QStack_740,90.0,0.0,0.0,(MethodInfo *)0x0);
      QVar8.___y_1 = fStack_5c;
      QVar8.___x_0 = fStack_60;
      QVar8.___z_2 = (float)uStack_58;
      QVar8.___w_3 = (float)uStack_58._4_4_;
      QVar17.___z_2._2_2_ = (short)((uint)pQVar33->___z_2 >> 0x10);
      QVar17._0_10_ = *(unkbyte10 *)pQVar33;
      QVar17.___w_3 = pQVar33->___w_3;
      pQVar33 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                          (&QStack_750,QVar8,QVar17,(MethodInfo *)0x0);
      fVar38 = pQVar33->___y_1;
      fVar39 = pQVar33->___z_2;
      fVar40 = pQVar33->___w_3;
      (pBVar27->___rotation1_5).___x_0 = pQVar33->___x_0;
      (pBVar27->___rotation1_5).___y_1 = fVar38;
      (pBVar27->___rotation1_5).___z_2 = fVar39;
      (pBVar27->___rotation1_5).___w_3 = fVar40;
      pIVar35 = Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar27,
                           Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
                          );
      fVar38 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      uStack_58 = CONCAT44(fVar38,(float)uStack_58);
      if (__real_3e4ccccd <= fVar38) {
        pMVar36 = param_1->___sitFlapMesh_8;
      }
      else {
        pMVar36 = param_1->___sitMesh_7;
      }
      if (pIVar35 == (Il2CppObject *)0x0) goto LAB_1088311e;
      uVar41 = SUB42(pIVar35,0);
      uVar42 = (undefined2)((uint)pIVar35 >> 0x10);
      goto LAB_10882c9f;
    }
    fVar39 = local_84.___y_3 * __real_3dcccccd;
    uStack_42c._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    uStack_42c._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    fStack_37c = (pBVar27->___velocityNext_8).___z_4;
    uStack_384._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    uStack_384._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    fVar38 = fStack_37c + local_84.___z_4 * __real_3dcccccd;
    (pBVar27->___velocityNext_8).___x_2 =
         local_84.___x_2 * __real_3dcccccd + (float)(undefined4)uStack_42c;
    (pBVar27->___velocityNext_8).___y_3 = (float)uStack_42c._4_4_ + fVar39;
    fStack_540 = fVar38;
    uStack_378 = uStack_42c;
LAB_10881ff2:
    (pBVar27->___velocityNext_8).___z_4 = fVar38;
  }
  else {
    if (__real_3f000000 < (float)local_45._17_4_) {
      fVar38 = (float)local_45._17_4_ - __real_3f000000;
      fVar39 = local_84.___y_3 * fVar38 * __real_3f000000;
      uStack_2c4._0_4_ = (pBVar27->___velocityNext_8).___x_2;
      uStack_2c4._4_4_ = (pBVar27->___velocityNext_8).___y_3;
      fStack_2c8 = (pBVar27->___velocityNext_8).___z_4;
      uStack_2d0._0_4_ = (pBVar27->___velocityNext_8).___x_2;
      uStack_2d0._4_4_ = (pBVar27->___velocityNext_8).___y_3;
      fStack_51c = fStack_2c8 + local_84.___z_4 * fVar38 * __real_3f000000;
      (pBVar27->___velocityNext_8).___x_2 =
           local_84.___x_2 * fVar38 * __real_3f000000 + (float)(undefined4)uStack_2c4;
      (pBVar27->___velocityNext_8).___y_3 = (float)uStack_2c4._4_4_ + fVar39;
      (pBVar27->___velocityNext_8).___z_4 = fStack_51c;
      uStack_2b8 = uStack_2c4;
    }
    local_45._1_4_ = pBVar27->___time_10 * __real_3c23d70a;
    local_45._17_4_ =
         Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                   ((pBVar27->___posMid_6).___y_3,(float)local_45._1_4_ + ___real_3f0a8c15,
                    (MethodInfo *)0x0);
    fStack_60 = (float)local_45._17_4_ - __real_3f000000;
    fStack_5c = 0.0;
    uStack_58 = 0;
    fVar38 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       ((pBVar27->___posMid_6).___z_4,(float)local_45._1_4_ + ___real_4083f3b6,
                        (MethodInfo *)0x0);
    local_45._17_4_ = fVar38 - __real_3f000000;
    fVar39 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                       ((pBVar27->___posMid_6).___x_2,(float)local_45._1_4_ + ___real_411d816f,
                        (MethodInfo *)0x0);
    uStack_70 = CONCAT44(fVar39,(undefined4)uStack_70);
    fVar38 = (float)local_45._17_4_ * __real_3ecccccd;
    uStack_2e8._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    uStack_2e8._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    fStack_2ec = (pBVar27->___velocityNext_8).___z_4;
    uStack_2f4._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    uStack_2f4._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    fStack_528 = fStack_2ec + (fVar39 - __real_3f000000) * __real_3ecccccd;
    (pBVar27->___velocityNext_8).___x_2 =
         fStack_60 * __real_3ecccccd + (float)(undefined4)uStack_2e8;
    (pBVar27->___velocityNext_8).___y_3 = (float)uStack_2e8._4_4_ + fVar38;
    (pBVar27->___velocityNext_8).___z_4 = fStack_528;
    uStack_330._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    uStack_330._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    fStack_31c = (pBVar27->___posMid_6).___z_4;
    uStack_33c._0_4_ = (pBVar27->___posMid_6).___x_2;
    uStack_33c._4_4_ = (pBVar27->___posMid_6).___y_3;
    uStack_300._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    uStack_300._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    uStack_324._0_4_ = (pBVar27->___posMid_6).___x_2;
    uStack_324._4_4_ = (pBVar27->___posMid_6).___y_3;
    fStack_310 = (pBVar27->___velocityNext_8).___z_4;
    uStack_318._0_4_ = (pBVar27->___velocityNext_8).___x_2;
    uStack_318._4_4_ = (pBVar27->___velocityNext_8).___y_3;
    fStack_194 = ((float)uStack_300._4_4_ + (float)uStack_33c._4_4_) - __real_3dcccccd;
    fStack_190 = (fStack_310 + fStack_31c) - 0.0;
    fStack_198 = ((float)(undefined4)uStack_330 + (float)(undefined4)uStack_33c) - 0.0;
    uStack_30c = uStack_33c;
    uStack_2dc = uStack_2e8;
    if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar6 = param_1->___master_4->___graph_7,
       pGVar6 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1088311e;
    VVar19.___y_3._0_2_ = SUB42(fStack_194,0);
    VVar19.___x_2 = fStack_198;
    VVar19.___y_3._2_2_ = (short)((uint)fStack_194 >> 0x10);
    VVar19.___z_4 = fStack_190;
    pVVar31 = Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
                        (&VStack_760,pGVar6,VVar19,(MethodInfo *)0x0);
    fStack_60 = (pVVar31->___Item1_0).___x_2;
    fStack_5c = (pVVar31->___Item1_0).___y_3;
    pfVar7 = &(pVVar31->___Item1_0).___z_4;
    uStack_58 = *(undefined8 *)pfVar7;
    if (__real_3e99999a < pVVar31->___Item2_1) {
      fVar39 = pVVar31->___Item2_1 - __real_3e99999a;
      fVar38 = fVar39 * *pfVar7;
      uStack_354._0_4_ = (pBVar27->___velocityNext_8).___x_2;
      uStack_354._4_4_ = (pBVar27->___velocityNext_8).___y_3;
      fStack_358 = (pBVar27->___velocityNext_8).___z_4;
      uStack_360._0_4_ = (pBVar27->___velocityNext_8).___x_2;
      uStack_360._4_4_ = (pBVar27->___velocityNext_8).___y_3;
      fVar38 = fStack_358 + fVar38 + fVar38;
      (pBVar27->___velocityNext_8).___x_2 =
           fVar39 * fStack_60 + fVar39 * fStack_60 + (float)(undefined4)uStack_354;
      (pBVar27->___velocityNext_8).___y_3 =
           (float)uStack_354._4_4_ + fVar39 * fStack_5c + fVar39 * fStack_5c;
      fStack_534 = fVar38;
      uStack_348 = uStack_354;
      goto LAB_10881ff2;
    }
  }
  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
            (aVStack_5a0,(MethodInfo *)0x0);
  uStack_58._0_4_ = (pBVar27->___velocityNext_8).___x_2;
  uStack_58._4_4_ =
       (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)(pBVar27->___velocityNext_8).___y_3;
  local_45._17_4_ = (pBVar27->___velocityNext_8).___z_4;
  pVVar28 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                      (&VStack_5b0,&pBVar27->___velocityNext_8,(MethodInfo *)0x0);
  uStack_39c._0_4_ = pVVar28->___x_2;
  uStack_39c._4_4_ = pVVar28->___y_3;
  fStack_3a0 = pVVar28->___z_4;
  uStack_3a8._0_4_ = pVVar28->___x_2;
  uStack_3a8._4_4_ = pVVar28->___y_3;
  fStack_54c = fStack_3a0 * __real_3e4ccccd;
  VVar9.___z_4 = (float)local_45._17_4_;
  VVar9.___x_2 = (float)uStack_58;
  VVar9.___y_3 = (float)uStack_58._4_4_;
  VVar14.___y_3 = (float)uStack_39c._4_4_ * __real_3e4ccccd;
  VVar14.___x_2 = (float)(undefined4)uStack_39c * __real_3e4ccccd;
  VVar14.___z_4._0_2_ = SUB42(fStack_54c,0);
  VVar14.___z_4._2_2_ = (short)((uint)fStack_54c >> 0x10);
  uStack_390 = uStack_39c;
  pVVar28 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                      (&VStack_5c0,VVar9,VVar14,0.3,(MethodInfo *)0x0);
  fVar39 = pVVar28->___y_3;
  fVar38 = pVVar28->___z_4;
  (pBVar27->___velocityNext_8).___x_2 = pVVar28->___x_2;
  (pBVar27->___velocityNext_8).___y_3 = fVar39;
  (pBVar27->___velocityNext_8).___z_4 = fVar38;
  bVar25 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                     ((pBVar27->___velocityNext_8).___x_2,(MethodInfo *)0x0);
  if (((bVar25) ||
      (bVar25 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                          ((pBVar27->___velocityNext_8).___y_3,(MethodInfo *)0x0), bVar25)) ||
     (bVar25 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                         ((pBVar27->___velocityNext_8).___z_4,(MethodInfo *)0x0), bVar25)) {
    local_b4.___x_2 = (pBVar27->___velocityNext_8).___x_2;
    local_b4.___y_3 = (pBVar27->___velocityNext_8).___y_3;
    local_b4.___z_4 = (pBVar27->___velocityNext_8).___z_4;
    pSVar32 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318
                        (&local_b4,(MethodInfo *)0x0);
    local_45._17_4_ =
         String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                   (_stringLiteral15DA4649065304BE7BBEDD8EED88D74430099708,pSVar32,(MethodInfo *)0x0
                   );
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
              ((Il2CppObject *)local_45._17_4_,
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar27,(MethodInfo *)0x0);
    pQVar33 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                        (&QStack_770,(MethodInfo *)0x0);
    fVar38 = pQVar33->___y_1;
    fVar39 = pQVar33->___z_2;
    fVar40 = pQVar33->___w_3;
    (pBVar27->___rotation0_4).___x_0 = pQVar33->___x_0;
    (pBVar27->___rotation0_4).___y_1 = fVar38;
    (pBVar27->___rotation0_4).___z_2 = fVar39;
    (pBVar27->___rotation0_4).___w_3 = fVar40;
    pQVar33 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                        (&QStack_700,(MethodInfo *)0x0);
    fVar38 = pQVar33->___y_1;
    fVar39 = pQVar33->___z_2;
    fVar40 = pQVar33->___w_3;
    (pBVar27->___rotation1_5).___x_0 = pQVar33->___x_0;
    (pBVar27->___rotation1_5).___y_1 = fVar38;
    (pBVar27->___rotation1_5).___z_2 = fVar39;
    (pBVar27->___rotation1_5).___w_3 = fVar40;
    pVVar28 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&VStack_5d0,(MethodInfo *)0x0);
    fVar39 = pVVar28->___y_3;
    fVar38 = pVVar28->___z_4;
    (pBVar27->___velocityPrev_7).___x_2 = pVVar28->___x_2;
    (pBVar27->___velocityPrev_7).___y_3 = fVar39;
    (pBVar27->___velocityPrev_7).___z_4 = fVar38;
    pVVar28 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&VStack_5e0,(MethodInfo *)0x0);
    fVar39 = pVVar28->___y_3;
    fVar38 = pVVar28->___z_4;
    (pBVar27->___velocityNext_8).___x_2 = pVVar28->___x_2;
    (pBVar27->___velocityNext_8).___y_3 = fVar39;
    (pBVar27->___velocityNext_8).___z_4 = fVar38;
    if (((ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)local_50->_padding_ ==
         (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)0x0) ||
       (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             local_50->_padding_,(MethodInfo *)0x0),
       pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pVVar28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        (&VStack_5f0,pTVar26,(MethodInfo *)0x0);
    fVar39 = pVVar28->___y_3;
    fVar38 = pVVar28->___z_4;
    (pBVar27->___pos_9).___x_2 = pVVar28->___x_2;
    (pBVar27->___pos_9).___y_3 = fVar39;
    (pBVar27->___pos_9).___z_4 = fVar38;
    if (((ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)local_50->_padding_ ==
         (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)0x0) ||
       (pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             local_50->_padding_,(MethodInfo *)0x0),
       pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pVVar28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        (&VStack_600,pTVar26,(MethodInfo *)0x0);
    fVar39 = pVVar28->___y_3;
    fVar38 = pVVar28->___z_4;
    (pBVar27->___posMid_6).___x_2 = pVVar28->___x_2;
    (pBVar27->___posMid_6).___y_3 = fVar39;
    (pBVar27->___posMid_6).___z_4 = fVar38;
  }
  pVVar28 = &pBVar27->___velocityNext_8;
  if (local_45[8] == '\x01') {
    uStack_3cc._0_4_ = pVVar28->___x_2;
    uStack_3cc._4_4_ = pVVar28->___y_3;
    fStack_3b8 = (pBVar27->___velocityNext_8).___z_4;
    uStack_3c0._0_4_ = pVVar28->___x_2;
    uStack_3c0._4_4_ = pVVar28->___y_3;
    fStack_558 = (local_84.___z_4 + fStack_3b8) * __real_3f000000;
    fVar38 = (local_84.___y_3 + (float)uStack_3cc._4_4_) * __real_3f000000;
    pVVar28->___x_2 = (local_84.___x_2 + (float)(undefined4)uStack_3cc) * __real_3f000000;
    pVVar28->___y_3 = fVar38;
    (pBVar27->___velocityNext_8).___z_4 = fStack_558;
    uStack_3b4 = uStack_3cc;
  }
  local_45._17_4_ = (pBVar27->___velocityNext_8).___z_4;
  uStack_58._0_4_ = pVVar28->___x_2;
  uStack_58._4_4_ = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pVVar28->___y_3;
  pVVar28 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                      (&VStack_610,(MethodInfo *)0x0);
  VVar10.___z_4 = (float)local_45._17_4_;
  VVar10.___x_2 = (float)uStack_58;
  VVar10.___y_3 = (float)uStack_58._4_4_;
  bVar25 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710
                     (VVar10,*pVVar28,(MethodInfo *)0x0);
  if (bVar25) {
    uVar1 = (pBVar27->___velocityNext_8).___x_2;
    uVar3 = (pBVar27->___velocityNext_8).___y_3;
    local_d8.___z_4 = (pBVar27->___velocityNext_8).___z_4;
    local_d8.___y_3 = (float)uVar3 * __real_3f000000;
    local_d8.___x_2 = (float)uVar1;
    local_45._17_4_ =
         Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                   (&local_d8,(MethodInfo *)0x0);
    if (__real_3a83126f < (float)local_45._17_4_) {
      fVar39 = local_d8.___x_2;
      uVar41 = local_d8.___y_3._0_2_;
      uVar42 = local_d8.___y_3._2_2_;
      pQVar33 = &QStack_720;
      fVar38 = local_d8.___z_4;
LAB_108824d0:
      VVar20.___y_3._0_2_ = uVar41;
      VVar20.___x_2 = fVar39;
      VVar20.___y_3._2_2_ = uVar42;
      VVar20.___z_4 = fVar38;
      pQVar33 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                          (pQVar33,VVar20,(MethodInfo *)0x0);
      fVar38 = pQVar33->___y_1;
      fVar39 = pQVar33->___z_2;
      fVar40 = pQVar33->___w_3;
      (pBVar27->___rotation1_5).___x_0 = pQVar33->___x_0;
      (pBVar27->___rotation1_5).___y_1 = fVar38;
      (pBVar27->___rotation1_5).___z_2 = fVar39;
      (pBVar27->___rotation1_5).___w_3 = fVar40;
    }
  }
  else {
    pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar27,
                         (MethodInfo *)0x0);
    if ((pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
       (pTVar26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar26,0,(MethodInfo *)0x0),
       pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1088311e;
    pVVar28 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
                        (&VStack_620,pTVar26,(MethodInfo *)0x0);
    uStack_58._0_4_ = pVVar28->___x_2;
    uStack_58._4_4_ = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pVVar28->___y_3;
    local_45._17_4_ = pVVar28->___z_4;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    fVar15.___z_2._0_2_ = (short)local_45._17_4_;
    fVar15.___x_0 = (float)uStack_58;
    fVar15.___y_1 = (float)uStack_58._4_4_;
    fVar15.___z_2._2_2_ = SUB42(local_45._17_4_,2);
    pfVar34 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        (&fStack_630,fVar15,0.0,(MethodInfo *)0x0);
    local_f0.___x_2 = pfVar34->___x_0;
    local_f0.___y_3 = pfVar34->___y_1;
    local_f0.___z_4 = pfVar34->___z_2;
    local_45._17_4_ =
         Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                   (&local_f0,(MethodInfo *)0x0);
    if (__real_3a83126f < (float)local_45._17_4_) {
      fVar39 = local_f0.___x_2;
      uVar41 = local_f0.___y_3._0_2_;
      uVar42 = local_f0.___y_3._2_2_;
      pQVar33 = &QStack_710;
      fVar38 = local_f0.___z_4;
      goto LAB_108824d0;
    }
  }
  if (local_45[8] != '\x01') {
    local_45._17_4_ = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    if ((float)local_45._17_4_ < __real_3b83126f) {
      pBVar27->___state_11 = '\x01';
    }
    else {
      local_45._17_4_ =
           Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      if ((float)local_45._17_4_ < __real_3d4ccccd) {
        fStack_3e8 = (pBVar27->___posMid_6).___z_4;
        uStack_70 = CONCAT44(__real_7f7fffff,(undefined4)uStack_70);
        uStack_3e4._0_4_ = (pBVar27->___posMid_6).___x_2;
        uStack_3e4._4_4_ = (pBVar27->___posMid_6).___y_3;
        uStack_3f0._0_4_ = (pBVar27->___posMid_6).___x_2;
        uStack_3f0._4_4_ = (pBVar27->___posMid_6).___y_3;
        QStack_4d8.___w_3 = fStack_3e8 - 0.0;
        local_50 = (String_t *)0x0;
        uStack_1a4 = CONCAT44((float)uStack_3e4._4_4_ - __real_3ecccccd,
                              (float)(undefined4)uStack_3e4 - 0.0);
        uStack_3d8 = uStack_3e4;
        fStack_19c = QStack_4d8.___w_3;
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pPVar5 = param_1->___master_4->___propPlacer_19,
              pPVar5 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) {
          VVar16.___y_3 = (float)uStack_3e4._4_4_ - __real_3ecccccd;
          VVar16.___x_2 = (float)(undefined4)uStack_3e4 - 0.0;
          VVar16.___z_4._0_2_ = SUB42(QStack_4d8.___w_3,0);
          VVar16.___z_4._2_2_ = (short)((uint)QStack_4d8.___w_3 >> 0x10);
          pPVar29 = PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B
                              (&local_7b8,pPVar5,VVar16,0.8,
                               PropPlacer_GetPropIterator_TisButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B_m126BA9EF82F9C7CE6657D1D7421081E7A3AFE65B_RuntimeMethod_var
                              );
          local_4c8.___propPlacer_0 = pPVar29->___propPlacer_0;
          local_4c8.___sqRadius_1 = pPVar29->___sqRadius_1;
          local_4c8.___pos_2.___x_2 = (pPVar29->___pos_2).___x_2;
          local_4c8.___pos_2.___y_3 = (pPVar29->___pos_2).___y_3;
          local_4c8.___pos_2.___z_4 = (pPVar29->___pos_2).___z_4;
          local_4c8.___x_3 = pPVar29->___x_3;
          local_4c8.___y_4 = pPVar29->___y_4;
          local_4c8.___z_5 = pPVar29->___z_5;
          local_4c8.___i_6 = pPVar29->___i_6;
          local_4c8.___propColliders_7 = pPVar29->___propColliders_7;
          local_4c8.___min_8.___x_0 = (pPVar29->___min_8).___x_0;
          local_4c8.___min_8.___y_1 = (pPVar29->___min_8).___y_1;
          local_4c8.___min_8.___z_2 = (pPVar29->___min_8).___z_2;
          local_4c8.___max_9.___x_0 = (pPVar29->___max_9).___x_0;
          local_4c8.___max_9.___y_1 = (pPVar29->___max_9).___y_1;
          local_4c8.___max_9.___z_2 = (pPVar29->___max_9).___z_2;
          local_4c8.___current_10 = (Il2CppObject *)pPVar29->___current_10;
          local_45._1_4_ =
               PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7AC9C8780AC3A24960C48FAF9489CF9DB4DE51ED_gshared
                         (&local_4c8,
                          PropRadiusIterator_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5017749CB463E9EC263AC0D22B753686B3A705CC_RuntimeMethod_var
                         );
          local_14._0_1_ = 3;
          local_45._9_4_ = local_45._1_4_;
          while ((Il2CppObject *)local_45._9_4_ != (Il2CppObject *)0x0) {
            iVar30 = InterfaceFuncInvoker0<int>::Invoke
                               (0,
                                IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                                ,(Il2CppObject *)local_45._9_4_);
            if ((char)iVar30 == '\0') {
              uStack_a8 = 0x6d2;
              local_88 = local_88 + 1;
              local_14 = (uint)local_14._1_3_ << 8;
              FUN_10882811();
              return;
            }
            local_45._17_4_ =
                 InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_1_t428EE1A2EF0DAB43B08E748658632119C0628F96_il2cpp_TypeInfo_var
                            ,(Il2CppObject *)local_45._9_4_);
            if ((String_t *)local_45._17_4_ == (String_t *)0x0) break;
            pBStack_4c = *(Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E **)
                          &((String_t *)local_45._17_4_)->___m_firstChar_1;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBStack_4c,
                                (MethodInfo *)0x0);
            if (!bVar25) {
              fVar38 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0)
              ;
              uStack_58 = CONCAT44(fVar38,(float)uStack_58);
              pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   local_45._17_4_,(MethodInfo *)0x0);
              if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
              pVVar28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&VStack_640,pTVar26,(MethodInfo *)0x0);
              uStack_114._0_4_ = pVVar28->___x_2;
              uStack_114._4_4_ = pVVar28->___y_3;
              fStack_154 = pVVar28->___z_4;
              uStack_15c._0_4_ = pVVar28->___x_2;
              uStack_15c._4_4_ = pVVar28->___y_3;
              fStack_564 = fStack_19c - fStack_154;
              local_b4.___y_3 = uStack_1a4._4_4_ - (float)uStack_114._4_4_;
              local_b4.___x_2 = (float)uStack_1a4 - (float)(undefined4)uStack_114;
              fStack_10c = fStack_154;
              uStack_108 = uStack_114;
              fStack_100 = fStack_154;
              local_b4.___z_4 = fStack_564;
              pBStack_4c = (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)
                           Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                     (&local_b4,(MethodInfo *)0x0);
              if ((float)pBStack_4c + (float)uStack_58._4_4_ < (float)uStack_70._4_4_) {
                local_50 = (String_t *)local_45._17_4_;
                uStack_70 = CONCAT44((float)pBStack_4c + (float)uStack_58._4_4_,
                                     (undefined4)uStack_70);
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
  uStack_a8 = 0x788;
  local_88 = local_88 + 1;
  local_14 = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_45,
             (MethodInfo *)0x0);
  if (local_64 == (Exception_t *)0x0) {
    FUN_10882ddb();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(local_64,(MethodInfo *)0x0);
LAB_10882e10:
  if (((param_1->___activeButterflies_9 ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
      (pTVar26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (param_1->___activeButterflies_9,iVar30,(MethodInfo *)0x0),
      pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
     (pCVar37 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar26,
                           Component_GetComponent_TisButterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E_m6292A40671E923ACA3F127F3AC70E85B80A3B4E5_RuntimeMethod_var
                          ), pCVar37 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0))
  goto LAB_1088311e;
  uStack_180 = *(undefined8 *)&pCVar37[4].field_0x8;
  fStack_124 = *(float *)&pCVar37[5].field_0x4;
  uStack_12c = *(undefined8 *)&pCVar37[4].field_0x8;
  uStack_174 = *(undefined8 *)&pCVar37[3].field_0x8;
  fStack_154 = *(float *)&pCVar37[4].field_0x4;
  uStack_15c = *(undefined8 *)&pCVar37[3].field_0x8;
  fStack_10c = *(float *)&pCVar37[6].field_0x4;
  uStack_168 = *(undefined8 *)&pCVar37[5].field_0x8;
  uStack_114 = *(undefined8 *)&pCVar37[5].field_0x8;
  uStack_18c = *(undefined8 *)&pCVar37[3].field_0x8;
  fStack_100 = *(float *)&pCVar37[4].field_0x4;
  uStack_108 = *(undefined8 *)&pCVar37[3].field_0x8;
  pBStack_4c = *(Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E **)&pCVar37[7].field_0x8;
  uStack_150 = uStack_180;
  uStack_144 = uStack_168;
  uStack_138 = uStack_18c;
  uStack_120 = uStack_174;
  uStack_cc = uStack_15c;
  fStack_c4 = fStack_154;
  fVar38 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  uStack_58 = CONCAT44(fVar38,(float)uStack_58);
  local_68 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       ((float)pBStack_4c,(float)pBStack_4c + __real_3e99999a,fVar38,
                        (MethodInfo *)0x0);
  fVar38 = __real_3f800000 - local_68;
  fVar39 = fVar38 * fVar38;
  fVar40 = (fVar38 + fVar38) * local_68;
  fVar38 = local_68 * local_68;
  fStack_1e4 = (fStack_154 - fStack_124 * __real_3f000000) * fVar39 + fVar40 * fStack_c4 +
               (fStack_10c * __real_3f000000 + fStack_100) * fVar38;
  *(ulonglong *)&pCVar37[6].field_0x8 =
       CONCAT44((uStack_120._4_4_ - uStack_150._4_4_ * __real_3f000000) * fVar39 +
                fVar40 * uStack_cc._4_4_ +
                (uStack_144._4_4_ * __real_3f000000 + uStack_138._4_4_) * fVar38,
                ((float)uStack_174 - (float)uStack_180 * __real_3f000000) * fVar39 +
                fVar40 * (float)uStack_cc +
                ((float)uStack_168 * __real_3f000000 + (float)uStack_18c) * fVar38);
  *(float *)&pCVar37[7].field_0x4 = fStack_1e4;
  pTVar26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      (pCVar37,(MethodInfo *)0x0);
  uStack_58 = CONCAT44(pTVar26,(float)uStack_58);
  if (pTVar26 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1088311e;
  Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
            (pTVar26,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&pCVar37[6].field_0x8,
             (MethodInfo *)0x0);
  QVar12.___w_3._2_2_ = (short)((uint)*(undefined4 *)&pCVar37[3].field_0x4 >> 0x10);
  QVar12._0_14_ = *(undefined1 (*) [14])&pCVar37[2].field_0x4;
  pQVar33 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                      (&QStack_4d8,
                       *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(pCVar37 + 1),QVar12
                       ,local_68,(MethodInfo *)0x0);
  QVar18.___z_2._2_2_ = (short)((uint)pQVar33->___z_2 >> 0x10);
  QVar18._0_10_ = *(unkbyte10 *)pQVar33;
  QVar18.___w_3 = pQVar33->___w_3;
  Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
            (uStack_58._4_4_,QVar18,(MethodInfo *)0x0);
  iVar30 = iVar30 + 1;
  if ((int)local_78 <= iVar30) {
    ExceptionList = pvStack_1c;
    return;
  }
  goto LAB_10882e10;
}
