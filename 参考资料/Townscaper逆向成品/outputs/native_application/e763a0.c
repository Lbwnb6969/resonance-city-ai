// RVA 0xe763a0 | Placemaker.Graphs.Graph$$SampleNormalDistance
// PDB: Graph_SampleNormalDistance_m937DE92AAA87DF1BF8CF84EF0FC4BAE2E5DC7C5D
// Body: [[10e763a0, 10e77bc4]]
// Direct callees:
// 10066d80 List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10806c40 Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
// 10836340 ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
// 10836a20 ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e116a0 GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
// 10e43f20 ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared

ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 * __cdecl
Graph_SampleNormalDistance_m937DE92AAA87DF1BF8CF84EF0FC4BAE2E5DC7C5D
          (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *__return_storage_ptr__,
          Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar9;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar10;
  Il2CppClass *pIVar11;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar12;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar13;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar17;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar20;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar21;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar22;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar23;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar24;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar25;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar26;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar27;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar28;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar29;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar30;
  bool bVar31;
  byte bVar32;
  int iVar33;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar34;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar35;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar36;
  undefined8 *extraout_EAX_00;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *pDVar37;
  uint uVar38;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_01;
  int iVar39;
  MethodInfo *unaff_EDI;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar44;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar45;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar46;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar47;
  MethodInfo *pMVar48;
  MethodInfo *pMVar49;
  undefined1 local_1a0 [68];
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_15c;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  int iStack_f0;
  float fStack_ec;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  int iStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_a4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_98;
  int local_8c;
  int iStack_88;
  int iStack_84;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fStack_80;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined8 local_34;
  float local_2c;
  Il2CppObject *local_28;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *local_8;

  if (DAT_11522846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m2D824BA8DB5C08E453D1087232C69DB7E73AB353_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var
              );
    DAT_11522846 = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  fVar26.___y_1 = param_2.___y_3;
  fVar26.___x_0 = param_2.___x_2;
  fVar26.___z_2 = param_2.___z_4;
  fVar44 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3(fVar26,(MethodInfo *)0x0);
  param_2.___z_4 = param_2.___y_3 - __real_3f000000;
  iVar33 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                     (param_2.___z_4,(MethodInfo *)0x0);
  if (iVar33 < -1) {
    pVVar36 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_a4,
                         (MethodInfo *)0x0);
    local_24.___y_1 = pVVar36->___x_2;
    local_24.___z_2 = pVVar36->___y_3;
    fVar41 = pVVar36->___z_4;
    param_2.___z_4 =
         Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(param_2.___z_4,(MethodInfo *)0x0);
    (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
    (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
    (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
    __return_storage_ptr__->___Item2_1 = 0.0;
    VVar19.___z_4 = fVar41;
    VVar19.___x_2 = local_24.___y_1;
    VVar19.___y_3 = local_24.___z_2;
    ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
              (__return_storage_ptr__,VVar19,__real_3f800000 - param_2.___z_4,
               ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
    return __return_storage_ptr__;
  }
  if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
     (pGVar9 = param_1->___master_4->___graph_7,
     pGVar9 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_10e77bc0;
  if (pGVar9->___boundsHeight_27 + 1 < iVar33) {
LAB_10e77afe:
    pVVar36 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(&param_2,(MethodInfo *)0x0)
    ;
    VVar19 = *pVVar36;
    (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
    (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
    (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
    __return_storage_ptr__->___Item2_1 = 0.0;
    ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
              (__return_storage_ptr__,VVar19,2.0,
               ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
    return __return_storage_ptr__;
  }
  iVar28.___z_2 = 0;
  iVar28.___x_0 = (int)fVar44.___x_0;
  iVar28.___y_1 = (int)fVar44.___y_1;
  fVar45 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
           HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar28,unaff_EDI);
  local_40 = fVar45.___y_1;
  local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)fVar45.___x_0;
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    fVar45.___y_1 = local_40;
    fVar45.___x_0 = (float)local_8;
  }
  local_40 = fVar45.___y_1;
  local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)fVar45.___x_0;
  pfVar34 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                      (&local_a4,fVar45,(MethodInfo *)0x0);
  if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
     (pGVar9 = param_1->___master_4->___graph_7,
     pGVar9 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_10e77bc0;
  uVar1 = (pGVar9->___bounds_28).___c1_1.___y_1;
  uVar5 = (pGVar9->___bounds_28).___c1_1.___z_2;
  iStack_88 = (pGVar9->___bounds_28).___c0_0.___y_1 + -0x120;
  iStack_84 = (pGVar9->___bounds_28).___c0_0.___z_2 + -0x120;
  local_8c = (pGVar9->___bounds_28).___c0_0.___x_0 + -0x120;
  fStack_80.___x_0 = (float)((pGVar9->___bounds_28).___c1_1.___x_0 + 0x120);
  local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)pfVar34->___z_2;
  fStack_80.___y_1 = (float)(uVar1 + 0x120);
  fStack_80.___z_2 = (float)(uVar5 + 0x120);
  local_24.___y_1 = pfVar34->___x_0;
  local_24.___z_2 = pfVar34->___y_1;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  iVar14.___c0_0.___y_1 = iStack_88;
  iVar14.___c0_0.___x_0 = local_8c;
  iVar14.___c0_0.___z_2 = iStack_84;
  iVar14.___c1_1.___x_0 = (int)fStack_80.___x_0;
  iVar14.___c1_1.___y_1 = (int)fStack_80.___y_1;
  iVar14.___c1_1.___z_2 = (int)fStack_80.___z_2;
  fVar27.___z_2 = (float)local_8;
  fVar27.___x_0 = local_24.___y_1;
  fVar27.___y_1 = local_24.___z_2;
  bVar31 = ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
                     (iVar14,fVar27,(MethodInfo *)0x0);
  if (!bVar31) goto LAB_10e77afe;
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    local_8 = param_1->___master_4->___grid_5;
    iVar29.___z_2 = 0;
    iVar29.___x_0 = (int)fVar44.___x_0;
    iVar29.___y_1 = (int)fVar44.___y_1;
    fVar45 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
             HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar29,unaff_EDI);
    if (local_8 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) {
      pQVar35 = GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
                          ((Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *)local_1a0,local_8,
                           fVar45,(MethodInfo *)0x0);
      local_15c.___quadIndex_0 = pQVar35->___quadIndex_0;
      local_15c._1_3_ = *(undefined3 *)&pQVar35->field_0x1;
      local_15c.___v0_1.___x_0 = (pQVar35->___v0_1).___x_0;
      local_15c.___v0_1.___y_1 = (pQVar35->___v0_1).___y_1;
      local_15c.___v1_2.___x_0 = (pQVar35->___v1_2).___x_0;
      local_15c.___v1_2.___y_1 = (pQVar35->___v1_2).___y_1;
      local_15c.___v2_3.___x_0 = (pQVar35->___v2_3).___x_0;
      local_15c.___v2_3.___y_1 = (pQVar35->___v2_3).___y_1;
      local_15c.___v3_4.___x_0 = (pQVar35->___v3_4).___x_0;
      local_15c.___v3_4.___y_1 = (pQVar35->___v3_4).___y_1;
      local_15c.___p0_5.___x_0 = (pQVar35->___p0_5).___x_0;
      local_15c.___p0_5.___y_1 = (pQVar35->___p0_5).___y_1;
      local_15c.___p1_6.___x_0 = (pQVar35->___p1_6).___x_0;
      local_15c.___p1_6.___y_1 = (pQVar35->___p1_6).___y_1;
      local_15c.___p2_7.___x_0 = (pQVar35->___p2_7).___x_0;
      local_15c.___p2_7.___y_1 = (pQVar35->___p2_7).___y_1;
      local_15c.___p3_8.___x_0 = (pQVar35->___p3_8).___x_0;
      local_15c.___p3_8.___y_1 = (pQVar35->___p3_8).___y_1;
      bVar31 = Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0(&local_15c,(MethodInfo *)0x0);
      if (!bVar31) goto LAB_10e77afe;
      local_24.___z_2 = local_15c.___p0_5.___y_1;
      local_24.___y_1 = local_15c.___p0_5.___x_0;
      iVar30.___y_1 = (int)local_15c.___p0_5.___y_1;
      iVar30.___x_0 = (int)local_15c.___p0_5.___x_0;
      iVar30.___z_2 = 0;
      pMVar48 = (MethodInfo *)local_15c.___p0_5.___x_0;
      iVar46 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar30,unaff_EDI);
      local_4c = (float)iVar46.___y_1;
      local_48 = (float)iVar46.___x_0;
      local_24.___z_2 = local_15c.___p1_6.___y_1;
      local_24.___y_1 = local_15c.___p1_6.___x_0;
      iVar18.___y_1 = (int)local_15c.___p1_6.___y_1;
      iVar18.___x_0 = (int)local_15c.___p1_6.___x_0;
      iVar18.___z_2 = 0;
      pMVar49 = (MethodInfo *)local_15c.___p1_6.___x_0;
      iVar46 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar18,pMVar48);
      local_54 = (float)iVar46.___y_1;
      local_50 = (float)iVar46.___x_0;
      local_24.___z_2 = local_15c.___p2_7.___y_1;
      local_24.___y_1 = local_15c.___p2_7.___x_0;
      iVar16.___y_1 = (int)local_15c.___p2_7.___y_1;
      iVar16.___x_0 = (int)local_15c.___p2_7.___x_0;
      iVar16.___z_2 = 0;
      pMVar48 = (MethodInfo *)local_15c.___p2_7.___x_0;
      iVar46 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar16,pMVar49);
      local_5c = (float)iVar46.___y_1;
      local_58 = (float)iVar46.___x_0;
      local_24.___z_2 = local_15c.___p3_8.___y_1;
      local_24.___y_1 = local_15c.___p3_8.___x_0;
      iVar12.___y_1 = (int)local_15c.___p3_8.___y_1;
      iVar12.___x_0 = (int)local_15c.___p3_8.___x_0;
      iVar12.___z_2 = 0;
      VVar47 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
               HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar12,pMVar48);
      local_40 = VVar47.___y_1;
      local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)VVar47.___x_0;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        VVar47.___y_1 = local_40;
        VVar47.___x_0 = (float)local_8;
      }
      local_40 = VVar47.___y_1;
      local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)VVar47.___x_0;
      VVar13.___y_1 = local_4c;
      VVar13.___x_0 = local_48;
      VVar15.___y_1 = local_54;
      VVar15.___x_0 = local_50;
      VVar17.___y_1 = local_5c;
      VVar17.___x_0 = local_58;
      VVar47 = ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
                         (VVar13,VVar15,VVar17,VVar47,
                          (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar44,
                          (MethodInfo *)0x0);
      pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&param_2,
                           (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar47,
                           param_2.___z_4 - (float)iVar33,(MethodInfo *)0x0);
      uVar2 = pfVar34->___x_0;
      uVar6 = pfVar34->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_98,(float)uVar2,
                 (float)uVar6,pfVar34->___z_2,(MethodInfo *)0x0);
      local_68 = *extraout_EAX;
      local_a4.___z_2 = *(float *)(extraout_EAX + 1);
      param_2.___x_2 = (float)local_68;
      param_2.___y_3 = (float)((ulonglong)local_68 >> 0x20);
      local_a4._0_8_ = *extraout_EAX;
      fStack_80.___x_0 = local_a4.___x_0;
      fStack_80.___y_1 = local_a4.___y_1;
      local_3c = __real_3f800000 - param_2.___x_2;
      param_2.___z_4 = (float)CONCAT13(-1 < iVar33,SUB43(local_a4.___z_2,0));
      local_38 = __real_3f800000 - fStack_80.___y_1;
      local_44 = __real_3f800000 - local_a4.___z_2;
      fStack_80.___z_2 = local_a4.___z_2;
      local_60 = local_a4.___z_2;
      pVVar36 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_a4,
                           (MethodInfo *)0x0);
      uVar3 = pVVar36->___x_2;
      uVar7 = pVVar36->___y_3;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_a4,(float)uVar3,
                 (float)uVar7,pVVar36->___z_4,(MethodInfo *)0x0);
      local_34 = *extraout_EAX_00;
      local_c = 0.0;
      local_4c = local_3c * local_3c;
      local_2c = *(float *)(extraout_EAX_00 + 1);
      local_b8 = local_38 * local_38;
      local_b0 = __real_3f800000 - local_4c;
      local_a8 = local_44 * local_44;
      local_b4 = (float)local_68 * (float)local_68;
      local_5c = __real_3f800000 - local_b8;
      local_40 = local_68._4_4_ * local_68._4_4_;
      local_54 = __real_3f800000 - local_a8;
      local_58 = local_60 * local_60;
      local_50 = __real_3f800000 - local_b4;
      local_48 = __real_3f800000 - local_40;
      local_ac = __real_3f800000 - local_58;
      local_24.___z_2 = local_15c.___p0_5.___y_1 - local_15c.___p1_6.___y_1;
      local_24.___y_1 = local_15c.___p0_5.___x_0 - local_15c.___p1_6.___x_0;
      fVar44.___y_1 = local_15c.___p0_5.___y_1 - local_15c.___p1_6.___y_1;
      fVar44.___x_0 = local_15c.___p0_5.___x_0 - local_15c.___p1_6.___x_0;
      pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          (&local_a4,fVar44,0.0,(MethodInfo *)0x0);
      local_74._0_4_ = pfVar34->___x_0;
      local_74._4_4_ = pfVar34->___y_1;
      local_6c = pfVar34->___z_2;
      local_24.___z_2 = local_15c.___p3_8.___y_1 - local_15c.___p2_7.___y_1;
      local_24.___y_1 = local_15c.___p3_8.___x_0 - local_15c.___p2_7.___x_0;
      fVar20.___y_1 = local_15c.___p3_8.___y_1 - local_15c.___p2_7.___y_1;
      fVar20.___x_0 = local_15c.___p3_8.___x_0 - local_15c.___p2_7.___x_0;
      pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          (&fStack_80,fVar20,0.0,(MethodInfo *)0x0);
      local_a4.___x_0 = pfVar34->___x_0;
      local_a4.___y_1 = pfVar34->___y_1;
      local_a4.___z_2 = pfVar34->___z_2;
      local_24.___z_2 = local_15c.___p0_5.___y_1 - local_15c.___p3_8.___y_1;
      local_24.___y_1 = local_15c.___p0_5.___x_0 - local_15c.___p3_8.___x_0;
      fVar21.___y_1 = local_15c.___p0_5.___y_1 - local_15c.___p3_8.___y_1;
      fVar21.___x_0 = local_15c.___p0_5.___x_0 - local_15c.___p3_8.___x_0;
      pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          (&local_98,fVar21,0.0,(MethodInfo *)0x0);
      uVar4 = pfVar34->___x_0;
      uVar8 = pfVar34->___y_1;
      fStack_80.___z_2 = pfVar34->___z_2;
      local_24.___z_2 = local_15c.___p1_6.___y_1 - local_15c.___p2_7.___y_1;
      local_24.___y_1 = local_15c.___p1_6.___x_0 - local_15c.___p2_7.___x_0;
      fVar22.___y_1 = local_15c.___p1_6.___y_1 - local_15c.___p2_7.___y_1;
      fVar22.___x_0 = local_15c.___p1_6.___x_0 - local_15c.___p2_7.___x_0;
      fStack_80.___x_0 = (float)uVar4;
      fStack_80.___y_1 = (float)uVar8;
      pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          (&local_24,fVar22,0.0,(MethodInfo *)0x0);
      local_98.___x_0 = pfVar34->___x_0;
      local_98.___y_1 = pfVar34->___y_1;
      local_98.___z_2 = pfVar34->___z_2;
      if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pGVar9 = param_1->___master_4->___graph_7,
          pGVar9 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
         (pDVar10 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                    pGVar9->___cornerDict_16,
         pDVar10 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
        iVar46.___y_1 = local_15c.___v0_1.___y_1;
        iVar46.___x_0 = local_15c.___v0_1.___x_0;
        bVar31 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                           (pDVar10,iVar46,&local_28,
                            Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                           );
        if (bVar31) {
          if ((local_28 == (Il2CppObject *)0x0) ||
             (pIVar11 = local_28[4].field0_0x0.klass, pIVar11 == (Il2CppClass *)0x0))
          goto LAB_10e77bc0;
          local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)pIVar11->namespaze;
          uVar38 = 0;
          if (iVar33 < (int)local_8) {
            uVar38 = (uint)param_2.___z_4 >> 0x18;
          }
          if (uVar38 == 0) {
            local_18 = local_34._4_4_;
            local_10 = (float)local_34;
          }
          else {
            pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                 (local_1a0 + 0x14),
                                 (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar11,iVar33,
                                 List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                );
            local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                        (pDVar37->___delta_0).___x_0;
            fStack_114 = (pDVar37->___delta_0).___y_1;
            fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
            fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
            local_108 = (pDVar37->___pos_2).___x_0;
            fStack_104 = (pDVar37->___pos_2).___y_1;
            fStack_100 = (pDVar37->___invYPos_3).___x_0;
            fStack_fc = (pDVar37->___invYPos_3).___y_1;
            local_f8 = (pDVar37->___smoothPos_4).___x_0;
            fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
            iStack_f0 = pDVar37->___frame_5;
            fStack_ec = pDVar37->___time_6;
            local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                       (pDVar37->___delta_0).___x_0;
            fStack_e4 = (pDVar37->___delta_0).___y_1;
            fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
            fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
            local_d8 = (pDVar37->___pos_2).___x_0;
            fStack_d4 = (pDVar37->___pos_2).___y_1;
            fStack_d0 = (pDVar37->___invYPos_3).___x_0;
            fStack_cc = (pDVar37->___invYPos_3).___y_1;
            local_c8 = (pDVar37->___smoothPos_4).___x_0;
            fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
            iStack_c0 = pDVar37->___frame_5;
            fStack_bc = pDVar37->___time_6;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (local_e8,(MethodInfo *)0x0);
            if (bVar31) {
              bVar32 = 0;
            }
            else {
              bVar32 = (fStack_114._0_1_ == '\0') + 1;
            }
            fVar41 = local_38 * local_4c * local_44 - local_38 * local_50 * local_44;
            fVar42 = (float)bVar32;
            fVar43 = local_a8 * local_38 * local_3c - local_ac * local_38 * local_3c;
            local_10 = fVar43 * fStack_80.___x_0 * fVar42 +
                       fVar41 * (float)local_74 * fVar42 + (float)local_34;
            local_2c = fVar43 * fStack_80.___z_2 * fVar42 + fVar41 * local_6c * fVar42 + local_2c;
            local_18 = (fVar43 * fStack_80.___y_1 * fVar42 +
                       fVar41 * local_74._4_4_ * fVar42 + local_34._4_4_) -
                       (local_b8 * fVar42 * local_3c * local_44 - local_48 * local_3c * local_44);
            local_c = local_38 * fVar42 * local_3c * local_44 + 0.0;
            local_34 = CONCAT44(local_18,local_10);
          }
          local_14 = local_2c;
          if (iVar33 + 1 < (int)local_8) {
            if ((local_28 == (Il2CppObject *)0x0) ||
               (local_28[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e77bc0;
            pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                 (local_1a0 + 0x14),
                                 (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                 local_28[4].field0_0x0.klass,iVar33 + 1,
                                 List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                );
            local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                       (pDVar37->___delta_0).___x_0;
            fStack_e4 = (pDVar37->___delta_0).___y_1;
            fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
            fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
            local_d8 = (pDVar37->___pos_2).___x_0;
            fStack_d4 = (pDVar37->___pos_2).___y_1;
            fStack_d0 = (pDVar37->___invYPos_3).___x_0;
            fStack_cc = (pDVar37->___invYPos_3).___y_1;
            local_c8 = (pDVar37->___smoothPos_4).___x_0;
            fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
            iStack_c0 = pDVar37->___frame_5;
            fStack_bc = pDVar37->___time_6;
            local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                        (pDVar37->___delta_0).___x_0;
            fStack_114 = (pDVar37->___delta_0).___y_1;
            fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
            fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
            local_108 = (pDVar37->___pos_2).___x_0;
            fStack_104 = (pDVar37->___pos_2).___y_1;
            fStack_100 = (pDVar37->___invYPos_3).___x_0;
            fStack_fc = (pDVar37->___invYPos_3).___y_1;
            local_f8 = (pDVar37->___smoothPos_4).___x_0;
            fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
            iStack_f0 = pDVar37->___frame_5;
            fStack_ec = pDVar37->___time_6;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (local_118,(MethodInfo *)0x0);
            if (bVar31) {
              bVar32 = 0;
            }
            else {
              bVar32 = (fStack_e4._0_1_ == '\0') + 1;
            }
            fVar43 = (float)bVar32;
            fVar41 = local_4c * local_68._4_4_ * local_44 - local_50 * local_68._4_4_ * local_44;
            fVar42 = local_3c * local_68._4_4_ * local_a8 - local_3c * local_68._4_4_ * local_ac;
            local_10 = fVar42 * fStack_80.___x_0 * fVar43 +
                       fVar41 * (float)local_74 * fVar43 + local_10;
            local_14 = fVar42 * fStack_80.___z_2 * fVar43 + fVar41 * local_6c * fVar43 + local_14;
            local_c = local_3c * fVar43 * local_68._4_4_ * local_44 + local_c;
            local_18 = (fVar42 * fStack_80.___y_1 * fVar43 +
                       fVar41 * local_74._4_4_ * fVar43 + local_18) -
                       (local_3c * fVar43 * local_5c * local_44 - local_3c * local_40 * local_44);
            local_34 = CONCAT44(local_18,local_10);
          }
        }
        else {
          local_14 = local_2c;
          local_18 = local_34._4_4_;
          local_10 = (float)local_34;
        }
        iVar39 = iVar33 + 1;
        local_2c = local_14;
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pGVar9 = param_1->___master_4->___graph_7,
               pGVar9 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
           (pDVar10 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                      pGVar9->___cornerDict_16,
           pDVar10 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
          iVar23.___y_1 = local_15c.___v1_2.___y_1;
          iVar23.___x_0 = local_15c.___v1_2.___x_0;
          bVar31 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                             (pDVar10,iVar23,&local_28,
                              Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                             );
          if (bVar31) {
            if (local_28 == (Il2CppObject *)0x0) goto LAB_10e77bc0;
            pIVar11 = local_28[4].field0_0x0.klass;
            local_24.___z_2 = (float)pIVar11;
            if (pIVar11 == (Il2CppClass *)0x0) goto LAB_10e77bc0;
            local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)pIVar11->namespaze;
            uVar38 = 0;
            if (iVar33 < (int)local_8) {
              uVar38 = (uint)param_2.___z_4 >> 0x18;
            }
            if (uVar38 != 0) {
              pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                  ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                   (local_1a0 + 0x14),
                                   (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar11,
                                   iVar33,
                                   List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                  );
              local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                         (pDVar37->___delta_0).___x_0;
              fStack_e4 = (pDVar37->___delta_0).___y_1;
              fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
              fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
              local_d8 = (pDVar37->___pos_2).___x_0;
              fStack_d4 = (pDVar37->___pos_2).___y_1;
              fStack_d0 = (pDVar37->___invYPos_3).___x_0;
              fStack_cc = (pDVar37->___invYPos_3).___y_1;
              local_c8 = (pDVar37->___smoothPos_4).___x_0;
              fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
              iStack_c0 = pDVar37->___frame_5;
              fStack_bc = pDVar37->___time_6;
              local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                          (pDVar37->___delta_0).___x_0;
              fStack_114 = (pDVar37->___delta_0).___y_1;
              fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
              fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
              local_108 = (pDVar37->___pos_2).___x_0;
              fStack_104 = (pDVar37->___pos_2).___y_1;
              fStack_100 = (pDVar37->___invYPos_3).___x_0;
              fStack_fc = (pDVar37->___invYPos_3).___y_1;
              local_f8 = (pDVar37->___smoothPos_4).___x_0;
              fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
              iStack_f0 = pDVar37->___frame_5;
              fStack_ec = pDVar37->___time_6;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                 (local_118,(MethodInfo *)0x0);
              if (bVar31) {
                bVar32 = 0;
              }
              else {
                bVar32 = (fStack_e4._0_1_ == '\0') + 1;
              }
              fVar43 = (float)bVar32;
              fVar41 = local_b0 * local_38 * local_44 - local_b4 * local_38 * local_44;
              fVar42 = (float)local_68 * local_38 * local_a8 - (float)local_68 * local_38 * local_ac
              ;
              local_10 = local_10 + (float)local_74 * fVar41 * fVar43 +
                         local_98.___x_0 * fVar42 * fVar43;
              local_2c = local_14 + local_6c * fVar41 * fVar43 + local_98.___z_2 * fVar42 * fVar43;
              local_c = (float)local_68 * fVar43 * local_38 * local_44 + local_c;
              local_18 = (local_98.___y_1 * fVar42 * fVar43 +
                         local_18 + local_74._4_4_ * fVar41 * fVar43) -
                         ((float)local_68 * fVar43 * local_b8 * local_44 -
                         (float)local_68 * local_48 * local_44);
              local_34 = CONCAT44(local_18,local_10);
              local_14 = local_2c;
            }
            if (iVar39 < (int)local_8) {
              if ((local_28 == (Il2CppObject *)0x0) ||
                 (local_28[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e77bc0;
              pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                  ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                   (local_1a0 + 0x14),
                                   (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                   local_28[4].field0_0x0.klass,iVar39,
                                   List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                  );
              local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                         (pDVar37->___delta_0).___x_0;
              fStack_e4 = (pDVar37->___delta_0).___y_1;
              fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
              fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
              local_d8 = (pDVar37->___pos_2).___x_0;
              fStack_d4 = (pDVar37->___pos_2).___y_1;
              fStack_d0 = (pDVar37->___invYPos_3).___x_0;
              fStack_cc = (pDVar37->___invYPos_3).___y_1;
              local_c8 = (pDVar37->___smoothPos_4).___x_0;
              fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
              iStack_c0 = pDVar37->___frame_5;
              fStack_bc = pDVar37->___time_6;
              local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                          (pDVar37->___delta_0).___x_0;
              fStack_114 = (pDVar37->___delta_0).___y_1;
              fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
              fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
              local_108 = (pDVar37->___pos_2).___x_0;
              fStack_104 = (pDVar37->___pos_2).___y_1;
              fStack_100 = (pDVar37->___invYPos_3).___x_0;
              fStack_fc = (pDVar37->___invYPos_3).___y_1;
              local_f8 = (pDVar37->___smoothPos_4).___x_0;
              fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
              iStack_f0 = pDVar37->___frame_5;
              fStack_ec = pDVar37->___time_6;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                 (local_118,(MethodInfo *)0x0);
              if (bVar31) {
                bVar32 = 0;
              }
              else {
                bVar32 = (fStack_e4._0_1_ == '\0') + 1;
              }
              fVar43 = (float)bVar32;
              fVar41 = local_b0 * local_68._4_4_ * local_44 - local_b4 * local_68._4_4_ * local_44;
              fVar42 = (float)local_68 * local_68._4_4_ * local_a8 -
                       (float)local_68 * local_68._4_4_ * local_ac;
              local_10 = local_98.___x_0 * fVar42 * fVar43 +
                         (float)local_74 * fVar41 * fVar43 + local_10;
              local_2c = local_98.___z_2 * fVar42 * fVar43 + local_6c * fVar41 * fVar43 + local_14;
              local_c = (float)local_68 * fVar43 * local_68._4_4_ * local_44 + local_c;
              local_18 = (local_98.___y_1 * fVar42 * fVar43 +
                         local_74._4_4_ * fVar41 * fVar43 + local_18) -
                         ((float)local_68 * fVar43 * local_5c * local_44 -
                         (float)local_68 * local_40 * local_44);
              local_34 = CONCAT44(local_18,local_10);
              local_14 = local_2c;
            }
          }
          if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) && (pGVar9 = param_1->___master_4->___graph_7,
                    pGVar9 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
             (pDVar10 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                        pGVar9->___cornerDict_16,
             pDVar10 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
            iVar24.___y_1 = local_15c.___v2_3.___y_1;
            iVar24.___x_0 = local_15c.___v2_3.___x_0;
            bVar31 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                               (pDVar10,iVar24,&local_28,
                                Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                               );
            if (bVar31) {
              if (local_28 == (Il2CppObject *)0x0) goto LAB_10e77bc0;
              pIVar11 = local_28[4].field0_0x0.klass;
              local_24.___z_2 = (float)pIVar11;
              if (pIVar11 == (Il2CppClass *)0x0) goto LAB_10e77bc0;
              local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)
                        pIVar11->namespaze;
              uVar38 = 0;
              if (iVar33 < (int)local_8) {
                uVar38 = (uint)param_2.___z_4 >> 0x18;
              }
              if (uVar38 != 0) {
                pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                    ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                     (local_1a0 + 0x14),
                                     (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar11,
                                     iVar33,
                                     List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                    );
                local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                           (pDVar37->___delta_0).___x_0;
                fStack_e4 = (pDVar37->___delta_0).___y_1;
                fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
                fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
                local_d8 = (pDVar37->___pos_2).___x_0;
                fStack_d4 = (pDVar37->___pos_2).___y_1;
                fStack_d0 = (pDVar37->___invYPos_3).___x_0;
                fStack_cc = (pDVar37->___invYPos_3).___y_1;
                local_c8 = (pDVar37->___smoothPos_4).___x_0;
                fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
                iStack_c0 = pDVar37->___frame_5;
                fStack_bc = pDVar37->___time_6;
                local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                            (pDVar37->___delta_0).___x_0;
                fStack_114 = (pDVar37->___delta_0).___y_1;
                fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
                fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
                local_108 = (pDVar37->___pos_2).___x_0;
                fStack_104 = (pDVar37->___pos_2).___y_1;
                fStack_100 = (pDVar37->___invYPos_3).___x_0;
                fStack_fc = (pDVar37->___invYPos_3).___y_1;
                local_f8 = (pDVar37->___smoothPos_4).___x_0;
                fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
                iStack_f0 = pDVar37->___frame_5;
                fStack_ec = pDVar37->___time_6;
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                   (local_118,(MethodInfo *)0x0);
                if (bVar31) {
                  bVar32 = 0;
                }
                else {
                  bVar32 = (fStack_e4._0_1_ == '\0') + 1;
                }
                fVar43 = (float)bVar32;
                fVar41 = local_b0 * local_38 * local_60 - local_b4 * local_38 * local_60;
                fVar42 = (float)local_68 * local_38 * local_54 -
                         (float)local_68 * local_38 * local_58;
                local_10 = local_98.___x_0 * fVar42 * fVar43 +
                           local_a4.___x_0 * fVar41 * fVar43 + local_10;
                local_2c = local_98.___z_2 * fVar42 * fVar43 +
                           local_a4.___z_2 * fVar41 * fVar43 + local_14;
                local_c = (float)local_68 * fVar43 * local_38 * local_60 + local_c;
                local_18 = (local_98.___y_1 * fVar42 * fVar43 +
                           local_18 + local_a4.___y_1 * fVar41 * fVar43) -
                           ((float)local_68 * fVar43 * local_b8 * local_60 -
                           (float)local_68 * local_48 * local_60);
                local_34 = CONCAT44(local_18,local_10);
                local_14 = local_2c;
              }
              if (iVar39 < (int)local_8) {
                if ((local_28 == (Il2CppObject *)0x0) ||
                   (local_28[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e77bc0;
                pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                    ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                     (local_1a0 + 0x14),
                                     (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                     local_28[4].field0_0x0.klass,iVar39,
                                     List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                    );
                local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                           (pDVar37->___delta_0).___x_0;
                fStack_e4 = (pDVar37->___delta_0).___y_1;
                fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
                fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
                local_d8 = (pDVar37->___pos_2).___x_0;
                fStack_d4 = (pDVar37->___pos_2).___y_1;
                fStack_d0 = (pDVar37->___invYPos_3).___x_0;
                fStack_cc = (pDVar37->___invYPos_3).___y_1;
                local_c8 = (pDVar37->___smoothPos_4).___x_0;
                fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
                iStack_c0 = pDVar37->___frame_5;
                fStack_bc = pDVar37->___time_6;
                local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                            (pDVar37->___delta_0).___x_0;
                fStack_114 = (pDVar37->___delta_0).___y_1;
                fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
                fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
                local_108 = (pDVar37->___pos_2).___x_0;
                fStack_104 = (pDVar37->___pos_2).___y_1;
                fStack_100 = (pDVar37->___invYPos_3).___x_0;
                fStack_fc = (pDVar37->___invYPos_3).___y_1;
                local_f8 = (pDVar37->___smoothPos_4).___x_0;
                fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
                iStack_f0 = pDVar37->___frame_5;
                fStack_ec = pDVar37->___time_6;
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                   (local_118,(MethodInfo *)0x0);
                if (bVar31) {
                  bVar32 = 0;
                }
                else {
                  bVar32 = (fStack_e4._0_1_ == '\0') + 1;
                }
                fVar41 = local_b0 * local_68._4_4_ * local_60 - local_b4 * local_68._4_4_ * local_60
                ;
                fVar40 = (float)bVar32;
                fVar42 = local_a4.___y_1 * fVar41 * fVar40;
                local_24.___z_2 = fVar42;
                fVar43 = (float)local_68 * local_68._4_4_ * local_54 -
                         (float)local_68 * local_68._4_4_ * local_58;
                local_10 = local_98.___x_0 * fVar43 * fVar40 +
                           local_a4.___x_0 * fVar41 * fVar40 + local_10;
                local_2c = local_98.___z_2 * fVar43 * fVar40 +
                           local_a4.___z_2 * fVar41 * fVar40 + local_14;
                local_c = (float)local_68 * fVar40 * local_68._4_4_ * local_60 + local_c;
                local_18 = (local_98.___y_1 * fVar43 * fVar40 + local_18 + fVar42) -
                           ((float)local_68 * fVar40 * local_5c * local_60 -
                           (float)local_68 * local_40 * local_60);
                local_34 = CONCAT44(local_18,local_10);
                local_14 = local_2c;
              }
            }
            if (((param_1->___master_4 !=
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                (pGVar9 = param_1->___master_4->___graph_7,
                pGVar9 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
               (pDVar10 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                          pGVar9->___cornerDict_16,
               pDVar10 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
              iVar25.___y_1 = local_15c.___v3_4.___y_1;
              iVar25.___x_0 = local_15c.___v3_4.___x_0;
              bVar31 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                                 (pDVar10,iVar25,&local_28,
                                  Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                                 );
              if (bVar31) {
                if ((local_28 == (Il2CppObject *)0x0) ||
                   (pIVar11 = local_28[4].field0_0x0.klass, pIVar11 == (Il2CppClass *)0x0))
                goto LAB_10e77bc0;
                local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)
                          pIVar11->namespaze;
                uVar38 = 0;
                if (iVar33 < (int)local_8) {
                  uVar38 = (uint)param_2.___z_4 >> 0x18;
                }
                if (uVar38 != 0) {
                  pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                      ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                       (local_1a0 + 0x14),
                                       (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar11,
                                       iVar33,
                                       List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                      );
                  local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                             (pDVar37->___delta_0).___x_0;
                  fStack_e4 = (pDVar37->___delta_0).___y_1;
                  fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
                  fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
                  local_d8 = (pDVar37->___pos_2).___x_0;
                  fStack_d4 = (pDVar37->___pos_2).___y_1;
                  fStack_d0 = (pDVar37->___invYPos_3).___x_0;
                  fStack_cc = (pDVar37->___invYPos_3).___y_1;
                  local_c8 = (pDVar37->___smoothPos_4).___x_0;
                  fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
                  iStack_c0 = pDVar37->___frame_5;
                  fStack_bc = pDVar37->___time_6;
                  local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                              (pDVar37->___delta_0).___x_0;
                  fStack_114 = (pDVar37->___delta_0).___y_1;
                  fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
                  fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
                  local_108 = (pDVar37->___pos_2).___x_0;
                  fStack_104 = (pDVar37->___pos_2).___y_1;
                  fStack_100 = (pDVar37->___invYPos_3).___x_0;
                  fStack_fc = (pDVar37->___invYPos_3).___y_1;
                  local_f8 = (pDVar37->___smoothPos_4).___x_0;
                  fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
                  iStack_f0 = pDVar37->___frame_5;
                  fStack_ec = pDVar37->___time_6;
                  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)
                    ;
                  }
                  bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                     (local_118,(MethodInfo *)0x0);
                  if (bVar31) {
                    bVar32 = 0;
                  }
                  else {
                    bVar32 = (fStack_e4._0_1_ == '\0') + 1;
                  }
                  fVar43 = (float)bVar32;
                  fVar41 = local_4c * local_38 * local_60 - local_50 * local_38 * local_60;
                  fVar42 = local_3c * local_38 * local_54 - local_3c * local_38 * local_58;
                  local_10 = fVar42 * fStack_80.___x_0 * fVar43 +
                             fVar41 * (float)local_74 * fVar43 + local_10;
                  local_2c = fVar42 * fStack_80.___z_2 * fVar43 +
                             fVar41 * local_6c * fVar43 + local_14;
                  local_c = local_3c * fVar43 * local_38 * local_60 + local_c;
                  local_18 = (fVar42 * fStack_80.___y_1 * fVar43 +
                             fVar41 * local_74._4_4_ * fVar43 + local_18) -
                             (local_3c * fVar43 * local_b8 * local_60 -
                             local_3c * local_48 * local_60);
                  local_34 = CONCAT44(local_18,local_10);
                  local_14 = local_2c;
                }
                if (iVar39 < (int)local_8) {
                  if ((local_28 == (Il2CppObject *)0x0) ||
                     (local_28[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e77bc0;
                  pDVar37 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                      ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                       (local_1a0 + 0x14),
                                       (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                       local_28[4].field0_0x0.klass,iVar39,
                                       List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                      );
                  local_e8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                             (pDVar37->___delta_0).___x_0;
                  fStack_e4 = (pDVar37->___delta_0).___y_1;
                  fStack_e0 = (pDVar37->___smoothDelta_1).___x_0;
                  fStack_dc = (pDVar37->___smoothDelta_1).___y_1;
                  local_d8 = (pDVar37->___pos_2).___x_0;
                  fStack_d4 = (pDVar37->___pos_2).___y_1;
                  fStack_d0 = (pDVar37->___invYPos_3).___x_0;
                  fStack_cc = (pDVar37->___invYPos_3).___y_1;
                  local_c8 = (pDVar37->___smoothPos_4).___x_0;
                  fStack_c4 = (pDVar37->___smoothPos_4).___y_1;
                  iStack_c0 = pDVar37->___frame_5;
                  fStack_bc = pDVar37->___time_6;
                  local_118 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                              (pDVar37->___delta_0).___x_0;
                  fStack_114 = (pDVar37->___delta_0).___y_1;
                  fStack_110 = (pDVar37->___smoothDelta_1).___x_0;
                  fStack_10c = (pDVar37->___smoothDelta_1).___y_1;
                  local_108 = (pDVar37->___pos_2).___x_0;
                  fStack_104 = (pDVar37->___pos_2).___y_1;
                  fStack_100 = (pDVar37->___invYPos_3).___x_0;
                  fStack_fc = (pDVar37->___invYPos_3).___y_1;
                  local_f8 = (pDVar37->___smoothPos_4).___x_0;
                  fStack_f4 = (pDVar37->___smoothPos_4).___y_1;
                  iStack_f0 = pDVar37->___frame_5;
                  fStack_ec = pDVar37->___time_6;
                  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)
                    ;
                  }
                  bVar31 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                     (local_118,(MethodInfo *)0x0);
                  if (bVar31) {
                    bVar32 = 0;
                  }
                  else {
                    bVar32 = (fStack_e4._0_1_ == '\0') + 1;
                  }
                  fVar42 = (float)bVar32;
                  fVar43 = local_4c * local_68._4_4_ * local_60 -
                           local_50 * local_68._4_4_ * local_60;
                  fVar41 = local_3c * local_68._4_4_ * local_54 -
                           local_3c * local_68._4_4_ * local_58;
                  local_2c = fVar41 * fStack_80.___z_2 * fVar42 +
                             fVar43 * local_6c * fVar42 + local_14;
                  local_c = local_3c * fVar42 * local_68._4_4_ * local_60 + local_c;
                  local_34 = CONCAT44((fVar41 * fStack_80.___y_1 * fVar42 +
                                      fVar43 * local_74._4_4_ * fVar42 + local_18) -
                                      (local_3c * fVar42 * local_5c * local_60 -
                                      local_3c * local_40 * local_60),
                                      fVar41 * fStack_80.___x_0 * fVar42 +
                                      local_10 + fVar43 * (float)local_74 * fVar42);
                }
              }
              Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                        (&param_2,(float)local_34,(float)((ulonglong)local_34 >> 0x20),local_2c,
                         (MethodInfo *)0x0);
              VVar19 = *extraout_EAX_01;
              (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
              (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
              (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
              __return_storage_ptr__->___Item2_1 = 0.0;
              ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
                        (__return_storage_ptr__,VVar19,local_c,
                         ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var
                        );
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
LAB_10e77bc0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
