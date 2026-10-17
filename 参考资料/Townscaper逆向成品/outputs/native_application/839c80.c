// RVA 0x839c80 | Placemaker.Graphs.Flow$$SampleFlow
// PDB: Flow_SampleFlow_mE638B0DB51ECB7201DA36F4388AB369D66807362
// Body: [[10839c80, 1083bde1]]
// Direct callees:
// 10066d80 List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
// 10090ab0 ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10806c40 Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
// 10836a20 ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e116a0 GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
// 10e49b40 ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708_gshared

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ValueTuple_4_t9C34DE17C2A629C24643C6CC64508DF79E685907 * __cdecl
Flow_SampleFlow_mE638B0DB51ECB7201DA36F4388AB369D66807362
          (ValueTuple_4_t9C34DE17C2A629C24643C6CC64508DF79E685907 *__return_storage_ptr__,
          Flow_t39D4306CF6EAF469941A331619EEFD7CC66F9C46 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar4;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar5;
  Il2CppClass *pIVar6;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar15;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar16;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar17;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar18;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar19;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar21;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar22;
  bool bVar23;
  char cVar24;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar25;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar26;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar27;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *pDVar28;
  undefined8 *extraout_EAX_00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_01;
  int iVar29;
  int iVar30;
  MethodInfo *unaff_EDI;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar37;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar38;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar39;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar40;
  MethodInfo *pMVar41;
  MethodInfo *pMVar42;
  undefined1 local_1e8 [72];
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_1a0;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float local_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float local_134;
  float fStack_130;
  int iStack_12c;
  float fStack_128;
  float local_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_98;
  Il2CppObject *local_84;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_80;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  float local_5c;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_58;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_44;
  float local_38;
  float local_34;
  float local_30;
  char *local_2c;
  char local_25;
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  char local_20;
  char local_1f;
  char local_1e;
  char local_1d;
  float local_1c;
  float local_18;
  float local_14;

  if (DAT_1151f40d == '\0') {
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
                       ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708_RuntimeMethod_var
              );
    DAT_1151f40d = '\x01';
  }
  local_84 = (Il2CppObject *)0x0;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  local_58.___y_1 = param_2.___x_2;
  local_58.___z_2 = param_2.___z_4;
  local_2c = (char *)(param_2.___y_3 - __real_3f000000);
  local_b4 = (float)Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                              ((float)local_2c,(MethodInfo *)0x0);
  VVar38.___y_1 = local_a0.___y_1;
  VVar38.___x_0 = local_a0.___x_0;
  if ((int)local_b4 < -1) {
LAB_1083bd18:
    pVVar27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_98,(MethodInfo *)0x0);
    local_120._0_4_ = pVVar27->___x_2;
    local_120._4_4_ = pVVar27->___y_3;
    local_70.___z_4 = pVVar27->___z_4;
    pVVar27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_98,(MethodInfo *)0x0);
    local_b0._0_4_ = pVVar27->___x_2;
    local_b0._4_4_ = pVVar27->___y_3;
    fVar31 = pVVar27->___z_4;
    local_58.___z_2 =
         Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C((float)local_2c,(MethodInfo *)0x0);
    (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
    (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
    (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
    (__return_storage_ptr__->___Item2_1).___x_2 = 0.0;
    (__return_storage_ptr__->___Item2_1).___y_3 = 0.0;
    (__return_storage_ptr__->___Item2_1).___z_4 = 0.0;
    __return_storage_ptr__->___Item3_2 = 0.0;
    __return_storage_ptr__->___Item4_3 = 0.0;
    VVar12.___z_4 = local_70.___z_4;
    VVar12.___x_2 = (float)(undefined4)local_120;
    VVar12.___y_3 = local_120._4_4_;
    VVar14.___z_4 = fVar31;
    VVar14.___x_2 = (float)(undefined4)local_b0;
    VVar14.___y_3 = local_b0._4_4_;
    ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708_gshared
              (__return_storage_ptr__,VVar12,VVar14,__real_3f800000 - local_58.___z_2,0.0,
               ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708_RuntimeMethod_var);
    return __return_storage_ptr__;
  }
  if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
     (pGVar3 = param_1->___master_4->___graph_7, local_a0 = VVar38,
     pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1083bddd;
  if (pGVar3->___boundsHeight_27 + 1 < (int)local_b4) goto LAB_1083bd18;
  iVar19.___y_1 = (int)local_58.___z_2;
  iVar19.___x_0 = (int)local_58.___y_1;
  iVar19.___z_2 = 0;
  fVar37 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
           HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar19,unaff_EDI);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  pfVar25 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                      (&local_80,fVar37,(MethodInfo *)0x0);
  VVar22.___y_1 = local_a0.___y_1;
  VVar22.___x_0 = local_a0.___x_0;
  if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
     (pGVar3 = param_1->___master_4->___graph_7, local_a0 = VVar22,
     pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1083bddd;
  uStack_e8._0_4_ = (pGVar3->___bounds_28).___c1_1.___y_1;
  uStack_e8._4_4_ = (pGVar3->___bounds_28).___c1_1.___z_2;
  iVar30 = uStack_e8._4_4_ + 0x120;
  local_120 = CONCAT44((pGVar3->___bounds_28).___c0_0.___x_0 + -0x120,(undefined4)local_120);
  iVar29 = (pGVar3->___bounds_28).___c0_0.___y_1 + -0x120;
  local_98.___x_2 = pfVar25->___x_0;
  local_98.___y_3 = pfVar25->___y_1;
  local_b0 = CONCAT44(iVar29,(undefined4)local_b0);
  local_a0.___y_1 = (float)((pGVar3->___bounds_28).___c0_0.___z_2 + -0x120);
  local_a0.___x_0 = (float)((pGVar3->___bounds_28).___c1_1.___x_0 + 0x120);
  local_a4 = (float)((undefined4)uStack_e8 + 0x120);
  local_98.___z_4 = pfVar25->___z_2;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    iVar29 = (int)local_b0._4_4_;
  }
  if (((((local_98.___x_2 < (float)(int)local_120._4_4_) || (local_98.___y_3 < (float)iVar29)) ||
       (local_98.___z_4 < (float)(int)local_a0.___y_1)) ||
      (((float)(int)local_a0.___x_0 < local_98.___x_2 || ((float)(int)local_a4 < local_98.___y_3))))
     || ((float)iVar30 < local_98.___z_4)) {
LAB_1083bc94:
    pVVar27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_98,(MethodInfo *)0x0);
    local_58.___x_0 = pVVar27->___x_2;
    local_58.___y_1 = pVVar27->___y_3;
    fVar31 = pVVar27->___z_4;
    pVVar27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        (&local_98,(MethodInfo *)0x0);
    VVar12 = *pVVar27;
    (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
    (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
    (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
    (__return_storage_ptr__->___Item2_1).___x_2 = 0.0;
    (__return_storage_ptr__->___Item2_1).___y_3 = 0.0;
    (__return_storage_ptr__->___Item2_1).___z_4 = 0.0;
    __return_storage_ptr__->___Item3_2 = 0.0;
    __return_storage_ptr__->___Item4_3 = 0.0;
    VVar11.___z_4 = fVar31;
    VVar11.___x_2 = local_58.___x_0;
    VVar11.___y_3 = local_58.___y_1;
    ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708
              (__return_storage_ptr__,VVar11,VVar12,0.0,0.0,
               ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708_RuntimeMethod_var);
    return __return_storage_ptr__;
  }
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    pGVar4 = param_1->___master_4->___grid_5;
    iVar20.___y_1 = (int)local_58.___z_2;
    iVar20.___x_0 = (int)local_58.___y_1;
    iVar20.___z_2 = 0;
    fVar37 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
             HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar20,unaff_EDI);
    if (pGVar4 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) {
      pQVar26 = GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
                          ((Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *)local_1e8,pGVar4,fVar37
                           ,(MethodInfo *)0x0);
      local_1a0.___quadIndex_0 = pQVar26->___quadIndex_0;
      local_1a0._1_3_ = *(undefined3 *)&pQVar26->field_0x1;
      local_1a0.___v0_1.___x_0 = (pQVar26->___v0_1).___x_0;
      local_1a0.___v0_1.___y_1 = (pQVar26->___v0_1).___y_1;
      local_1a0.___v1_2.___x_0 = (pQVar26->___v1_2).___x_0;
      local_1a0.___v1_2.___y_1 = (pQVar26->___v1_2).___y_1;
      local_1a0.___v2_3.___x_0 = (pQVar26->___v2_3).___x_0;
      local_1a0.___v2_3.___y_1 = (pQVar26->___v2_3).___y_1;
      local_1a0.___v3_4.___x_0 = (pQVar26->___v3_4).___x_0;
      local_1a0.___v3_4.___y_1 = (pQVar26->___v3_4).___y_1;
      local_1a0.___p0_5.___x_0 = (pQVar26->___p0_5).___x_0;
      local_1a0.___p0_5.___y_1 = (pQVar26->___p0_5).___y_1;
      local_1a0.___p1_6.___x_0 = (pQVar26->___p1_6).___x_0;
      local_1a0.___p1_6.___y_1 = (pQVar26->___p1_6).___y_1;
      local_1a0.___p2_7.___x_0 = (pQVar26->___p2_7).___x_0;
      local_1a0.___p2_7.___y_1 = (pQVar26->___p2_7).___y_1;
      local_1a0.___p3_8.___x_0 = (pQVar26->___p3_8).___x_0;
      local_1a0.___p3_8.___y_1 = (pQVar26->___p3_8).___y_1;
      bVar23 = Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0(&local_1a0,(MethodInfo *)0x0);
      if (!bVar23) goto LAB_1083bc94;
      local_70.___y_3 = local_1a0.___p0_5.___x_0;
      local_70.___z_4 = local_1a0.___p0_5.___y_1;
      iVar21.___y_1 = (int)local_1a0.___p0_5.___y_1;
      iVar21.___x_0 = (int)local_1a0.___p0_5.___x_0;
      iVar21.___z_2 = 0;
      pMVar41 = (MethodInfo *)local_1a0.___p0_5.___x_0;
      VVar38 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
               HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar21,unaff_EDI);
      local_70.___y_3 = local_1a0.___p1_6.___x_0;
      local_70.___z_4 = local_1a0.___p1_6.___y_1;
      iVar13.___y_1 = (int)local_1a0.___p1_6.___y_1;
      iVar13.___x_0 = (int)local_1a0.___p1_6.___x_0;
      iVar13.___z_2 = 0;
      pMVar42 = (MethodInfo *)local_1a0.___p1_6.___x_0;
      iVar39 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar13,pMVar41);
      local_a4 = (float)iVar39.___y_1;
      local_b8 = (float)iVar39.___x_0;
      local_70.___y_3 = local_1a0.___p2_7.___x_0;
      local_70.___z_4 = local_1a0.___p2_7.___y_1;
      iVar9.___y_1 = (int)local_1a0.___p2_7.___y_1;
      iVar9.___x_0 = (int)local_1a0.___p2_7.___x_0;
      iVar9.___z_2 = 0;
      pMVar41 = (MethodInfo *)local_1a0.___p2_7.___x_0;
      local_a0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar9,pMVar42);
      local_70.___y_3 = local_1a0.___p3_8.___x_0;
      local_70.___z_4 = local_1a0.___p3_8.___y_1;
      iVar7.___y_1 = (int)local_1a0.___p3_8.___y_1;
      iVar7.___x_0 = (int)local_1a0.___p3_8.___x_0;
      iVar7.___z_2 = 0;
      VVar40 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
               HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar7,pMVar41);
      local_b0 = CONCAT44(VVar40.___x_0,(undefined4)local_b0);
      local_120 = CONCAT44(VVar40.___y_1,(undefined4)local_120);
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        VVar40.___y_1 = local_120._4_4_;
        VVar40.___x_0 = local_b0._4_4_;
      }
      VVar8.___y_1 = local_a4;
      VVar8.___x_0 = local_b8;
      VVar18.___y_1 = local_58.___z_2;
      VVar18.___x_0 = local_58.___y_1;
      VVar38 = ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
                         (VVar38,VVar8,local_a0,VVar40,VVar18,(MethodInfo *)0x0);
      fVar31 = local_b4;
      local_98.___z_4 = VVar38.___y_1;
      local_58.___y_1 = VVar38.___x_0;
      local_58.___z_2 = local_98.___z_4;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_70,VVar38.___x_0,(float)local_2c - (float)(int)local_b4,local_98.___z_4,
                 (MethodInfo *)0x0);
      local_98._0_8_ = *extraout_EAX;
      local_98.___z_4 = *(float *)(extraout_EAX + 1);
      local_80._0_8_ = *extraout_EAX;
      local_34 = __real_3f800000 - local_98.___x_2;
      local_30 = __real_3f800000 - local_80.___y_1;
      local_5c = __real_3f800000 - local_98.___z_4;
      local_80.___z_2 = local_98.___z_4;
      local_58._0_8_ = local_80._0_8_;
      local_58.___z_2 = local_98.___z_4;
      local_44._0_8_ = local_98._0_8_;
      local_44.___z_4 = local_98.___z_4;
      pVVar27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                          (&local_98,(MethodInfo *)0x0);
      local_22 = '\0';
      local_25 = -1 < (int)fVar31;
      local_1e = '\0';
      local_20 = '\0';
      local_80.___x_0 = pVVar27->___x_2;
      local_80.___y_1 = pVVar27->___y_3;
      local_80.___z_2 = pVVar27->___z_4;
      local_23 = (int)fVar31 < 0;
      local_24 = '\0';
      local_38 = 0.0;
      local_21 = local_23;
      local_1f = local_23;
      local_1d = local_23;
      if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
          (pGVar3 = param_1->___master_4->___graph_7,
          pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
         (pDVar5 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   pGVar3->___cornerDict_16,
         pDVar5 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0))
      goto LAB_1083bddd;
      iVar39.___y_1 = local_1a0.___v0_1.___y_1;
      iVar39.___x_0 = local_1a0.___v0_1.___x_0;
      bVar23 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                         (pDVar5,iVar39,&local_84,
                          Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                         );
      if (bVar23) {
        if (local_84 == (Il2CppObject *)0x0) goto LAB_1083bddd;
        pIVar6 = local_84[4].field0_0x0.klass;
        local_b0 = CONCAT44(pIVar6,(undefined4)local_b0);
        if (pIVar6 == (Il2CppClass *)0x0) goto LAB_1083bddd;
        local_2c = pIVar6->namespaze;
        cVar24 = '\0';
        if ((int)fVar31 < (int)local_2c) {
          cVar24 = local_25;
        }
        if (cVar24 == '\0') {
          local_18 = local_80.___y_1;
          local_1c = local_80.___x_0;
        }
        else {
          pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                              ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)(local_1e8 + 0x10),
                               (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar6,
                               (int)fVar31,
                               List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                              );
          local_110 = (pDVar28->___delta_0).___x_0;
          fStack_10c = (pDVar28->___delta_0).___y_1;
          fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
          fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
          local_100 = (pDVar28->___pos_2).___x_0;
          fStack_fc = (pDVar28->___pos_2).___y_1;
          fStack_f8 = (pDVar28->___invYPos_3).___x_0;
          fStack_f4 = (pDVar28->___invYPos_3).___y_1;
          local_f0 = (pDVar28->___smoothPos_4).___x_0;
          fStack_ec = (pDVar28->___smoothPos_4).___y_1;
          uStack_e8._0_4_ = pDVar28->___frame_5;
          uStack_e8._4_4_ = pDVar28->___time_6;
          local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                      (pDVar28->___delta_0).___x_0;
          fStack_150 = (pDVar28->___delta_0).___y_1;
          fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
          fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
          local_144 = (pDVar28->___pos_2).___x_0;
          fStack_140 = (pDVar28->___pos_2).___y_1;
          fStack_13c = (pDVar28->___invYPos_3).___x_0;
          fStack_138 = (pDVar28->___invYPos_3).___y_1;
          local_134 = (pDVar28->___smoothPos_4).___x_0;
          fStack_130 = (pDVar28->___smoothPos_4).___y_1;
          iStack_12c = pDVar28->___frame_5;
          fStack_128 = pDVar28->___time_6;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          local_21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (local_154,(MethodInfo *)0x0);
          fVar32 = local_30 * local_34 * local_5c;
          local_18 = fStack_f8 * fVar32 + local_80.___y_1;
          local_80.___x_0 = fStack_fc * fVar32 + local_80.___x_0;
          local_38 = fVar32 + ___real_00000000;
          local_80.___y_1 = local_18;
          local_80.___z_2 = fStack_f4 * fVar32 + local_80.___z_2;
          local_1c = local_80.___x_0;
        }
        local_14 = local_80.___z_2;
        if ((int)fVar31 + 1 < (int)local_2c) {
          if ((local_84 == (Il2CppObject *)0x0) ||
             (local_84[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_1083bddd;
          pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                              ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)(local_1e8 + 0x10),
                               (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                               local_84[4].field0_0x0.klass,(int)fVar31 + 1,
                               List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                              );
          local_110 = (pDVar28->___delta_0).___x_0;
          fStack_10c = (pDVar28->___delta_0).___y_1;
          fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
          fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
          local_100 = (pDVar28->___pos_2).___x_0;
          fStack_fc = (pDVar28->___pos_2).___y_1;
          fStack_f8 = (pDVar28->___invYPos_3).___x_0;
          fStack_f4 = (pDVar28->___invYPos_3).___y_1;
          local_f0 = (pDVar28->___smoothPos_4).___x_0;
          fStack_ec = (pDVar28->___smoothPos_4).___y_1;
          uStack_e8._0_4_ = pDVar28->___frame_5;
          uStack_e8._4_4_ = pDVar28->___time_6;
          local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                      (pDVar28->___delta_0).___x_0;
          fStack_150 = (pDVar28->___delta_0).___y_1;
          fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
          fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
          local_144 = (pDVar28->___pos_2).___x_0;
          fStack_140 = (pDVar28->___pos_2).___y_1;
          fStack_13c = (pDVar28->___invYPos_3).___x_0;
          fStack_138 = (pDVar28->___invYPos_3).___y_1;
          local_134 = (pDVar28->___smoothPos_4).___x_0;
          fStack_130 = (pDVar28->___smoothPos_4).___y_1;
          iStack_12c = pDVar28->___frame_5;
          fStack_128 = pDVar28->___time_6;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          local_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (local_154,(MethodInfo *)0x0);
          fVar32 = local_44.___y_3 * local_34 * local_5c;
          local_1c = fStack_fc * fVar32 + local_1c;
          local_18 = fStack_f8 * fVar32 + local_18;
          local_80.___y_1 = local_18;
          local_80.___x_0 = local_1c;
          local_38 = fVar32 + local_38;
          local_14 = fStack_f4 * fVar32 + local_14;
        }
      }
      else {
        local_14 = local_80.___z_2;
        local_18 = local_80.___y_1;
        local_1c = local_80.___x_0;
      }
      local_80.___z_2 = local_14;
      if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pGVar3 = param_1->___master_4->___graph_7,
          pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
         (pDVar5 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   pGVar3->___cornerDict_16,
         pDVar5 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
        iVar15.___y_1 = local_1a0.___v1_2.___y_1;
        iVar15.___x_0 = local_1a0.___v1_2.___x_0;
        bVar23 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                           (pDVar5,iVar15,&local_84,
                            Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                           );
        if (bVar23) {
          if (local_84 == (Il2CppObject *)0x0) goto LAB_1083bddd;
          pIVar6 = local_84[4].field0_0x0.klass;
          local_b0 = CONCAT44(pIVar6,(undefined4)local_b0);
          if (pIVar6 == (Il2CppClass *)0x0) goto LAB_1083bddd;
          local_2c = pIVar6->namespaze;
          cVar24 = '\0';
          if ((int)fVar31 < (int)local_2c) {
            cVar24 = local_25;
          }
          if (cVar24 != '\0') {
            pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                 (local_1e8 + 0x10),
                                 (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar6,
                                 (int)fVar31,
                                 List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                );
            local_110 = (pDVar28->___delta_0).___x_0;
            fStack_10c = (pDVar28->___delta_0).___y_1;
            fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
            fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
            local_100 = (pDVar28->___pos_2).___x_0;
            fStack_fc = (pDVar28->___pos_2).___y_1;
            fStack_f8 = (pDVar28->___invYPos_3).___x_0;
            fStack_f4 = (pDVar28->___invYPos_3).___y_1;
            local_f0 = (pDVar28->___smoothPos_4).___x_0;
            fStack_ec = (pDVar28->___smoothPos_4).___y_1;
            uStack_e8._0_4_ = pDVar28->___frame_5;
            uStack_e8._4_4_ = pDVar28->___time_6;
            local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                        (pDVar28->___delta_0).___x_0;
            fStack_150 = (pDVar28->___delta_0).___y_1;
            fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
            fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
            local_144 = (pDVar28->___pos_2).___x_0;
            fStack_140 = (pDVar28->___pos_2).___y_1;
            fStack_13c = (pDVar28->___invYPos_3).___x_0;
            fStack_138 = (pDVar28->___invYPos_3).___y_1;
            local_134 = (pDVar28->___smoothPos_4).___x_0;
            fStack_130 = (pDVar28->___smoothPos_4).___y_1;
            iStack_12c = pDVar28->___frame_5;
            fStack_128 = pDVar28->___time_6;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            local_1d = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                 (local_154,(MethodInfo *)0x0);
            fVar32 = local_30 * local_44.___x_2 * local_5c;
            local_1c = fStack_fc * fVar32 + local_1c;
            local_18 = fStack_f8 * fVar32 + local_18;
            local_80.___y_1 = local_18;
            local_80.___x_0 = local_1c;
            local_38 = fVar32 + local_38;
            local_80.___z_2 = fStack_f4 * fVar32 + local_14;
            local_14 = local_80.___z_2;
          }
          if ((int)fVar31 + 1 < (int)local_2c) {
            if ((local_84 == (Il2CppObject *)0x0) ||
               (local_84[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_1083bddd;
            pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                 (local_1e8 + 0x10),
                                 (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                 local_84[4].field0_0x0.klass,(int)fVar31 + 1,
                                 List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                );
            local_110 = (pDVar28->___delta_0).___x_0;
            fStack_10c = (pDVar28->___delta_0).___y_1;
            fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
            fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
            local_100 = (pDVar28->___pos_2).___x_0;
            fStack_fc = (pDVar28->___pos_2).___y_1;
            fStack_f8 = (pDVar28->___invYPos_3).___x_0;
            fStack_f4 = (pDVar28->___invYPos_3).___y_1;
            local_f0 = (pDVar28->___smoothPos_4).___x_0;
            fStack_ec = (pDVar28->___smoothPos_4).___y_1;
            uStack_e8._0_4_ = pDVar28->___frame_5;
            uStack_e8._4_4_ = pDVar28->___time_6;
            local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                        (pDVar28->___delta_0).___x_0;
            fStack_150 = (pDVar28->___delta_0).___y_1;
            fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
            fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
            local_144 = (pDVar28->___pos_2).___x_0;
            fStack_140 = (pDVar28->___pos_2).___y_1;
            fStack_13c = (pDVar28->___invYPos_3).___x_0;
            fStack_138 = (pDVar28->___invYPos_3).___y_1;
            local_134 = (pDVar28->___smoothPos_4).___x_0;
            fStack_130 = (pDVar28->___smoothPos_4).___y_1;
            iStack_12c = pDVar28->___frame_5;
            fStack_128 = pDVar28->___time_6;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            local_1e = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                 (local_154,(MethodInfo *)0x0);
            fVar32 = local_44.___y_3 * local_44.___x_2 * local_5c;
            local_1c = fStack_fc * fVar32 + local_1c;
            local_18 = fStack_f8 * fVar32 + local_18;
            local_80.___y_1 = local_18;
            local_80.___x_0 = local_1c;
            local_38 = fVar32 + local_38;
            local_80.___z_2 = fStack_f4 * fVar32 + local_14;
            local_14 = local_80.___z_2;
          }
        }
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pGVar3 = param_1->___master_4->___graph_7,
               pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
           (pDVar5 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                     pGVar3->___cornerDict_16,
           pDVar5 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
          iVar16.___y_1 = local_1a0.___v2_3.___y_1;
          iVar16.___x_0 = local_1a0.___v2_3.___x_0;
          bVar23 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                             (pDVar5,iVar16,&local_84,
                              Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                             );
          if (bVar23) {
            if (local_84 == (Il2CppObject *)0x0) goto LAB_1083bddd;
            pIVar6 = local_84[4].field0_0x0.klass;
            local_b0 = CONCAT44(pIVar6,(undefined4)local_b0);
            if (pIVar6 == (Il2CppClass *)0x0) goto LAB_1083bddd;
            local_2c = pIVar6->namespaze;
            cVar24 = '\0';
            if ((int)fVar31 < (int)local_2c) {
              cVar24 = local_25;
            }
            if (cVar24 != '\0') {
              pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                  ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                   (local_1e8 + 0x10),
                                   (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar6,
                                   (int)fVar31,
                                   List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                  );
              local_110 = (pDVar28->___delta_0).___x_0;
              fStack_10c = (pDVar28->___delta_0).___y_1;
              fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
              fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
              local_100 = (pDVar28->___pos_2).___x_0;
              fStack_fc = (pDVar28->___pos_2).___y_1;
              fStack_f8 = (pDVar28->___invYPos_3).___x_0;
              fStack_f4 = (pDVar28->___invYPos_3).___y_1;
              local_f0 = (pDVar28->___smoothPos_4).___x_0;
              fStack_ec = (pDVar28->___smoothPos_4).___y_1;
              uStack_e8._0_4_ = pDVar28->___frame_5;
              uStack_e8._4_4_ = pDVar28->___time_6;
              local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                          (pDVar28->___delta_0).___x_0;
              fStack_150 = (pDVar28->___delta_0).___y_1;
              fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
              fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
              local_144 = (pDVar28->___pos_2).___x_0;
              fStack_140 = (pDVar28->___pos_2).___y_1;
              fStack_13c = (pDVar28->___invYPos_3).___x_0;
              fStack_138 = (pDVar28->___invYPos_3).___y_1;
              local_134 = (pDVar28->___smoothPos_4).___x_0;
              fStack_130 = (pDVar28->___smoothPos_4).___y_1;
              iStack_12c = pDVar28->___frame_5;
              fStack_128 = pDVar28->___time_6;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              local_1f = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                   (local_154,(MethodInfo *)0x0);
              fVar32 = local_30 * local_44.___x_2 * local_44.___z_4;
              local_1c = fStack_fc * fVar32 + local_1c;
              local_18 = fStack_f8 * fVar32 + local_18;
              local_80.___y_1 = local_18;
              local_80.___x_0 = local_1c;
              local_38 = fVar32 + local_38;
              local_80.___z_2 = fStack_f4 * fVar32 + local_14;
              local_14 = local_80.___z_2;
            }
            if ((int)fVar31 + 1 < (int)local_2c) {
              if ((local_84 == (Il2CppObject *)0x0) ||
                 (local_84[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_1083bddd;
              pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                  ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                   (local_1e8 + 0x10),
                                   (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                   local_84[4].field0_0x0.klass,(int)fVar31 + 1,
                                   List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                  );
              local_110 = (pDVar28->___delta_0).___x_0;
              fStack_10c = (pDVar28->___delta_0).___y_1;
              fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
              fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
              local_100 = (pDVar28->___pos_2).___x_0;
              fStack_fc = (pDVar28->___pos_2).___y_1;
              fStack_f8 = (pDVar28->___invYPos_3).___x_0;
              fStack_f4 = (pDVar28->___invYPos_3).___y_1;
              local_f0 = (pDVar28->___smoothPos_4).___x_0;
              fStack_ec = (pDVar28->___smoothPos_4).___y_1;
              uStack_e8._0_4_ = pDVar28->___frame_5;
              uStack_e8._4_4_ = pDVar28->___time_6;
              local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                          (pDVar28->___delta_0).___x_0;
              fStack_150 = (pDVar28->___delta_0).___y_1;
              fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
              fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
              local_144 = (pDVar28->___pos_2).___x_0;
              fStack_140 = (pDVar28->___pos_2).___y_1;
              fStack_13c = (pDVar28->___invYPos_3).___x_0;
              fStack_138 = (pDVar28->___invYPos_3).___y_1;
              local_134 = (pDVar28->___smoothPos_4).___x_0;
              fStack_130 = (pDVar28->___smoothPos_4).___y_1;
              iStack_12c = pDVar28->___frame_5;
              fStack_128 = pDVar28->___time_6;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              local_20 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                   (local_154,(MethodInfo *)0x0);
              fVar32 = local_44.___y_3 * local_44.___x_2 * local_44.___z_4;
              local_1c = fStack_fc * fVar32 + local_1c;
              local_18 = fStack_f8 * fVar32 + local_18;
              local_80.___y_1 = local_18;
              local_80.___x_0 = local_1c;
              local_38 = fVar32 + local_38;
              local_80.___z_2 = fStack_f4 * fVar32 + local_14;
              local_14 = local_80.___z_2;
            }
          }
          if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) && (pGVar3 = param_1->___master_4->___graph_7,
                    pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
             (pDVar5 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       pGVar3->___cornerDict_16,
             pDVar5 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
            iVar17.___y_1 = local_1a0.___v3_4.___y_1;
            iVar17.___x_0 = local_1a0.___v3_4.___x_0;
            bVar23 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                               (pDVar5,iVar17,&local_84,
                                Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                               );
            if (bVar23) {
              if ((local_84 == (Il2CppObject *)0x0) ||
                 (pIVar6 = local_84[4].field0_0x0.klass, pIVar6 == (Il2CppClass *)0x0))
              goto LAB_1083bddd;
              local_2c = pIVar6->namespaze;
              cVar24 = '\0';
              if ((int)fVar31 < (int)local_2c) {
                cVar24 = local_25;
              }
              if (cVar24 != '\0') {
                pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                    ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                     (local_1e8 + 0x10),
                                     (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar6,
                                     (int)fVar31,
                                     List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                    );
                local_110 = (pDVar28->___delta_0).___x_0;
                fStack_10c = (pDVar28->___delta_0).___y_1;
                fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
                fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
                local_100 = (pDVar28->___pos_2).___x_0;
                fStack_fc = (pDVar28->___pos_2).___y_1;
                fStack_f8 = (pDVar28->___invYPos_3).___x_0;
                fStack_f4 = (pDVar28->___invYPos_3).___y_1;
                local_f0 = (pDVar28->___smoothPos_4).___x_0;
                fStack_ec = (pDVar28->___smoothPos_4).___y_1;
                uStack_e8._0_4_ = pDVar28->___frame_5;
                uStack_e8._4_4_ = pDVar28->___time_6;
                local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                            (pDVar28->___delta_0).___x_0;
                fStack_150 = (pDVar28->___delta_0).___y_1;
                fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
                fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
                local_144 = (pDVar28->___pos_2).___x_0;
                fStack_140 = (pDVar28->___pos_2).___y_1;
                fStack_13c = (pDVar28->___invYPos_3).___x_0;
                fStack_138 = (pDVar28->___invYPos_3).___y_1;
                local_134 = (pDVar28->___smoothPos_4).___x_0;
                fStack_130 = (pDVar28->___smoothPos_4).___y_1;
                iStack_12c = pDVar28->___frame_5;
                fStack_128 = pDVar28->___time_6;
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                local_23 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                     (local_154,(MethodInfo *)0x0);
                fVar32 = local_34 * local_30 * local_44.___z_4;
                local_1c = fStack_fc * fVar32 + local_1c;
                local_18 = fStack_f8 * fVar32 + local_18;
                local_80.___y_1 = local_18;
                local_80.___x_0 = local_1c;
                local_38 = fVar32 + local_38;
                local_80.___z_2 = fStack_f4 * fVar32 + local_14;
                local_14 = local_80.___z_2;
              }
              if ((int)fVar31 + 1 < (int)local_2c) {
                if ((local_84 == (Il2CppObject *)0x0) ||
                   (local_84[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_1083bddd;
                pDVar28 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                    ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)
                                     (local_1e8 + 0x10),
                                     (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                     local_84[4].field0_0x0.klass,(int)fVar31 + 1,
                                     List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                    );
                local_110 = (pDVar28->___delta_0).___x_0;
                fStack_10c = (pDVar28->___delta_0).___y_1;
                fStack_108 = (pDVar28->___smoothDelta_1).___x_0;
                fStack_104 = (pDVar28->___smoothDelta_1).___y_1;
                local_100 = (pDVar28->___pos_2).___x_0;
                fStack_fc = (pDVar28->___pos_2).___y_1;
                fStack_f8 = (pDVar28->___invYPos_3).___x_0;
                fStack_f4 = (pDVar28->___invYPos_3).___y_1;
                local_f0 = (pDVar28->___smoothPos_4).___x_0;
                fStack_ec = (pDVar28->___smoothPos_4).___y_1;
                uStack_e8._0_4_ = pDVar28->___frame_5;
                uStack_e8._4_4_ = pDVar28->___time_6;
                local_154 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                            (pDVar28->___delta_0).___x_0;
                fStack_150 = (pDVar28->___delta_0).___y_1;
                fStack_14c = (pDVar28->___smoothDelta_1).___x_0;
                fStack_148 = (pDVar28->___smoothDelta_1).___y_1;
                local_144 = (pDVar28->___pos_2).___x_0;
                fStack_140 = (pDVar28->___pos_2).___y_1;
                fStack_13c = (pDVar28->___invYPos_3).___x_0;
                fStack_138 = (pDVar28->___invYPos_3).___y_1;
                local_134 = (pDVar28->___smoothPos_4).___x_0;
                fStack_130 = (pDVar28->___smoothPos_4).___y_1;
                iStack_12c = pDVar28->___frame_5;
                fStack_128 = pDVar28->___time_6;
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                local_24 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                     (local_154,(MethodInfo *)0x0);
                fVar31 = local_44.___y_3 * local_34 * local_44.___z_4;
                local_80.___y_1 = fStack_f8 * fVar31 + local_18;
                local_80.___x_0 = fStack_fc * fVar31 + local_1c;
                local_38 = fVar31 + local_38;
                local_80.___z_2 = fStack_f4 * fVar31 + local_14;
              }
            }
            pVVar27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                (&local_98,(MethodInfo *)0x0);
            uVar1 = pVVar27->___x_2;
            uVar2 = pVVar27->___y_3;
            Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                      (&local_70,(float)uVar1,(float)uVar2,pVVar27->___z_4,(MethodInfo *)0x0);
            local_98._0_8_ = *extraout_EAX_00;
            local_1c = 0.0;
            local_114 = local_34 * local_34;
            local_18 = *(float *)(extraout_EAX_00 + 1);
            local_124 = local_30 * local_30;
            local_a4 = __real_3f800000 - local_114;
            local_cc = local_5c * local_5c;
            local_a0.___x_0 = local_44.___x_2 * local_44.___x_2;
            local_2c = (char *)(local_44.___y_3 * local_44.___y_3);
            local_b0 = CONCAT44(__real_3f800000 - local_124,(undefined4)local_b0);
            local_d8 = __real_3f800000 - local_cc;
            local_a0.___y_1 = __real_3f800000 - local_a0.___x_0;
            local_120 = CONCAT44(local_44.___z_4 * local_44.___z_4,(undefined4)local_120);
            local_c0 = local_1a0.___p3_8.___y_1 - local_1a0.___p2_7.___y_1;
            local_b4 = __real_3f800000 - (float)local_2c;
            local_b8 = __real_3f800000 - local_44.___z_4 * local_44.___z_4;
            local_d0 = local_1a0.___p0_5.___x_0 - local_1a0.___p1_6.___x_0;
            local_dc = local_1a0.___p0_5.___x_0 - local_1a0.___p3_8.___x_0;
            local_118 = local_1a0.___p0_5.___y_1 - local_1a0.___p1_6.___y_1;
            local_bc = local_1a0.___p3_8.___x_0 - local_1a0.___p2_7.___x_0;
            local_c8 = local_1a0.___p1_6.___x_0 - local_1a0.___p2_7.___x_0;
            local_d4 = local_1a0.___p0_5.___y_1 - local_1a0.___p3_8.___y_1;
            local_c4 = local_1a0.___p1_6.___y_1 - local_1a0.___p2_7.___y_1;
            local_98.___z_4 = local_18;
            if (local_21 == '\0') {
              local_14 = local_98.___y_3;
              local_f0 = local_98.___x_2;
              fStack_ec = 0.0;
              uStack_e8._0_4_ = 0;
              uStack_e8._4_4_ = 0;
            }
            else {
              fVar31 = local_98.___y_3;
              fVar32 = local_98.___x_2;
              if (local_1d == '\0') {
                local_58._0_8_ = *extraout_EAX_00;
                local_58.___z_2 = *(float *)(extraout_EAX_00 + 1);
                local_18 = local_30 * local_114 * local_5c - local_30 * local_a0.___y_1 * local_5c;
                local_1c = local_d0 * local_18;
                local_18 = local_118 * local_18;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_18 = local_18 + local_58.___z_2;
                fVar31 = local_58.___y_1 + 0.0;
                fVar32 = local_58.___x_0 + local_1c;
              }
              local_f0 = fVar32;
              local_14 = fVar31;
              fStack_ec = 0.0;
              uStack_e8._0_4_ = 0;
              uStack_e8._4_4_ = 0;
              if (local_23 == '\0') {
                local_70.___z_4 = local_cc * local_34 * local_30 - local_b8 * local_34 * local_30;
                local_1c = local_70.___z_4 * local_d4;
                local_70.___z_4 = local_70.___z_4 * local_dc;
                fVar31 = (float)0;
                uVar34 = 0;
                uVar35 = 0;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = fStack_ec;
                  uVar34 = (undefined4)uStack_e8;
                  uVar35 = uStack_e8._4_4_;
                }
                local_18 = local_1c + local_18;
                local_f0 = local_f0 + local_70.___z_4;
                local_14 = local_14 + 0.0;
                fStack_ec = fVar31;
                uStack_e8._0_4_ = uVar34;
                uStack_e8._4_4_ = uVar35;
              }
              if (local_22 == '\0') {
                local_14 = local_14 -
                           (local_34 * local_124 * local_5c - local_34 * local_b4 * local_5c);
              }
              local_1c = local_34 * local_30 * local_5c + 0.0;
            }
            fVar31 = local_44.___x_2;
            if (local_1d != '\0') {
              if (local_21 == '\0') {
                local_70.___z_4 =
                     local_30 * local_a4 * local_5c - local_30 * local_a0.___x_0 * local_5c;
                local_58.___z_2 = local_d0 * local_70.___z_4;
                local_70.___z_4 = local_118 * local_70.___z_4;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_18 = local_70.___z_4 + local_18;
                local_f0 = local_f0 + local_58.___z_2;
                local_14 = local_14 + ___real_00000000;
              }
              if (local_1f == '\0') {
                local_70.___z_4 =
                     local_cc * local_30 * local_44.___x_2 - local_b8 * local_30 * local_44.___x_2;
                local_58.___z_2 = local_70.___z_4 * local_c4;
                local_70.___z_4 = local_70.___z_4 * local_c8;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_14 = local_14 + ___real_00000000;
                local_f0 = local_f0 + local_70.___z_4;
                local_18 = local_18 + local_58.___z_2;
              }
              if (local_1e == '\0') {
                local_14 = local_14 -
                           (local_124 * local_44.___x_2 * local_5c -
                           local_b4 * local_44.___x_2 * local_5c);
              }
              local_1c = local_30 * local_44.___x_2 * local_5c + local_1c;
              fVar31 = local_44.___x_2;
            }
            if (local_1f != '\0') {
              if (local_23 == '\0') {
                local_70.___z_4 =
                     local_30 * local_a4 * local_44.___z_4 -
                     local_30 * local_a0.___x_0 * local_44.___z_4;
                local_58.___z_2 = local_bc * local_70.___z_4;
                local_70.___z_4 = local_c0 * local_70.___z_4;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___x_2;
                }
                local_14 = local_14 + ___real_00000000;
                local_f0 = local_f0 + local_58.___z_2;
                local_18 = local_18 + local_70.___z_4;
              }
              if (local_1d == '\0') {
                local_70.___z_4 = local_d8 * local_30 * fVar31 - local_120._4_4_ * local_30 * fVar31
                ;
                local_58.___z_2 = local_70.___z_4 * local_c4;
                local_70.___z_4 = local_70.___z_4 * local_c8;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___x_2;
                }
                local_14 = local_14 + ___real_00000000;
                local_f0 = local_f0 + local_70.___z_4;
                local_18 = local_18 + local_58.___z_2;
              }
              if (local_20 == '\0') {
                local_14 = local_14 -
                           (local_124 * fVar31 * local_44.___z_4 -
                           local_b4 * fVar31 * local_44.___z_4);
              }
              local_1c = local_30 * fVar31 * local_44.___z_4 + local_1c;
            }
            if (local_23 != '\0') {
              if (local_1f == '\0') {
                local_58.___z_2 =
                     local_30 * local_114 * local_44.___z_4 -
                     local_30 * local_a0.___y_1 * local_44.___z_4;
                local_70.___z_4 = local_bc * local_58.___z_2;
                local_58.___z_2 = local_c0 * local_58.___z_2;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_18 = local_58.___z_2 + local_18;
                local_f0 = local_f0 + local_70.___z_4;
                local_14 = local_14 + ___real_00000000;
              }
              if (local_21 == '\0') {
                local_70.___z_4 =
                     local_d8 * local_34 * local_30 - local_120._4_4_ * local_34 * local_30;
                local_58.___z_2 = local_70.___z_4 * local_d4;
                local_70.___z_4 = local_70.___z_4 * local_dc;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_14 = local_14 + ___real_00000000;
                local_f0 = local_f0 + local_70.___z_4;
                local_18 = local_18 + local_58.___z_2;
              }
              if (local_24 == '\0') {
                local_14 = local_14 -
                           (local_124 * local_34 * local_44.___z_4 -
                           local_b4 * local_34 * local_44.___z_4);
              }
              local_1c = local_34 * local_30 * local_44.___z_4 + local_1c;
            }
            fVar31 = local_44.___y_3;
            if (local_22 != '\0') {
              if (local_1e == '\0') {
                local_58.___z_2 =
                     local_44.___y_3 * local_114 * local_5c -
                     local_44.___y_3 * local_a0.___y_1 * local_5c;
                local_70.___z_4 = local_d0 * local_58.___z_2;
                local_58.___z_2 = local_118 * local_58.___z_2;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_18 = local_58.___z_2 + local_18;
                local_f0 = local_f0 + local_70.___z_4;
                local_14 = local_14 + ___real_00000000;
              }
              if (local_24 == '\0') {
                local_70.___z_4 =
                     local_cc * local_44.___y_3 * local_34 - local_b8 * local_44.___y_3 * local_34;
                local_58.___z_2 = local_70.___z_4 * local_d4;
                local_70.___z_4 = local_70.___z_4 * local_dc;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_14 = local_14 + ___real_00000000;
                local_f0 = local_f0 + local_70.___z_4;
                local_18 = local_18 + local_58.___z_2;
              }
              if (local_21 == '\0') {
                local_14 = local_14 -
                           (local_b0._4_4_ * local_34 * local_5c -
                           (float)local_2c * local_34 * local_5c);
              }
              local_1c = local_44.___y_3 * local_34 * local_5c + local_1c;
              fVar31 = local_44.___y_3;
            }
            if (local_1e != '\0') {
              if (local_22 == '\0') {
                fVar32 = fVar31 * local_a4 * local_5c - fVar31 * local_a0.___x_0 * local_5c;
                local_d0 = local_d0 * fVar32;
                local_118 = local_118 * fVar32;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___y_3;
                }
                local_18 = local_118 + local_18;
                local_f0 = local_f0 + local_d0;
                local_14 = local_14 + ___real_00000000;
              }
              if (local_20 == '\0') {
                local_58.___z_2 =
                     local_cc * fVar31 * local_44.___x_2 - local_b8 * fVar31 * local_44.___x_2;
                local_cc = local_58.___z_2 * local_c4;
                local_58.___z_2 = local_58.___z_2 * local_c8;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___y_3;
                }
                local_14 = local_14 + ___real_00000000;
                local_f0 = local_f0 + local_58.___z_2;
                local_18 = local_18 + local_cc;
              }
              if (local_1d == '\0') {
                local_14 = local_14 -
                           (local_b0._4_4_ * local_44.___x_2 * local_5c -
                           (float)local_2c * local_44.___x_2 * local_5c);
              }
              local_1c = fVar31 * local_44.___x_2 * local_5c + local_1c;
            }
            if (local_20 != '\0') {
              if (local_24 == '\0') {
                local_58.___z_2 =
                     fVar31 * local_a4 * local_44.___z_4 -
                     fVar31 * local_a0.___x_0 * local_44.___z_4;
                local_70.___z_4 = local_bc * local_58.___z_2;
                local_58.___z_2 = local_c0 * local_58.___z_2;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___y_3;
                }
                local_18 = local_58.___z_2 + local_18;
                local_f0 = local_f0 + local_70.___z_4;
                local_14 = local_14 + 0.0;
              }
              if (local_1e == '\0') {
                local_70.___z_4 =
                     local_d8 * fVar31 * local_44.___x_2 -
                     local_120._4_4_ * fVar31 * local_44.___x_2;
                local_58.___z_2 = local_70.___z_4 * local_c4;
                local_70.___z_4 = local_70.___z_4 * local_c8;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___y_3;
                }
                local_14 = local_14 + ___real_00000000;
                local_f0 = local_f0 + local_70.___z_4;
                local_18 = local_18 + local_58.___z_2;
              }
              if (local_1f == '\0') {
                local_14 = local_14 -
                           (local_b0._4_4_ * local_44.___x_2 * local_44.___z_4 -
                           (float)local_2c * local_44.___x_2 * local_44.___z_4);
              }
              local_1c = fVar31 * local_44.___x_2 * local_44.___z_4 + local_1c;
            }
            fVar32 = local_14;
            fVar33 = local_f0;
            fVar36 = local_18;
            if (local_24 != '\0') {
              if (local_20 == '\0') {
                fVar32 = fVar31 * local_114 * local_44.___z_4 -
                         fVar31 * local_a0.___y_1 * local_44.___z_4;
                local_bc = local_bc * fVar32;
                local_c0 = local_c0 * fVar32;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___y_3;
                }
                local_18 = local_c0 + local_18;
                local_f0 = local_f0 + local_bc;
                local_14 = local_14 + ___real_00000000;
              }
              fVar32 = local_14;
              fVar33 = local_f0;
              fVar36 = local_18;
              if (local_22 == '\0') {
                local_58.___z_2 = local_d8 * fVar31 * local_34 - local_120._4_4_ * fVar31 * local_34
                ;
                local_d8 = local_58.___z_2 * local_d4;
                local_58.___z_2 = local_58.___z_2 * local_dc;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                  fVar31 = local_44.___y_3;
                }
                fVar32 = local_14 + ___real_00000000;
                fVar33 = local_f0 + local_58.___z_2;
                fVar36 = local_18 + local_d8;
              }
              if (local_23 == '\0') {
                fVar32 = fVar32 - (local_b0._4_4_ * local_34 * local_44.___z_4 -
                                  (float)local_2c * local_34 * local_44.___z_4);
              }
              local_1c = fVar31 * local_34 * local_44.___z_4 + local_1c;
            }
            local_98.___z_4 = fVar36 * __real_40000000;
            Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                      (&local_98,fVar33 * __real_40000000,fVar32 * __real_40000000,local_98.___z_4,
                       (MethodInfo *)0x0);
            VVar12 = *extraout_EAX_01;
            (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
            (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
            (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
            (__return_storage_ptr__->___Item2_1).___x_2 = 0.0;
            (__return_storage_ptr__->___Item2_1).___y_3 = 0.0;
            (__return_storage_ptr__->___Item2_1).___z_4 = 0.0;
            __return_storage_ptr__->___Item3_2 = 0.0;
            __return_storage_ptr__->___Item4_3 = 0.0;
            VVar10.___z_4 = local_80.___z_2;
            VVar10.___x_2 = local_80.___x_0;
            VVar10.___y_3 = local_80.___y_1;
            ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708
                      (__return_storage_ptr__,VVar10,VVar12,local_1c,local_38,
                       ValueTuple_4__ctor_m28895C980D681EDA32B8A603254CEE6ED5F13708_RuntimeMethod_var
                      );
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
LAB_1083bddd:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
