// RVA 0xe75580 | Placemaker.Graphs.Graph$$SampleNormalDistance2
// PDB: Graph_SampleNormalDistance2_mB56C7ECD21D4061906252E2FD5E3FE922068ED57
// Body: [[10e75580, 10e76393]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10806c40 Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
// 10836340 ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
// 10836a20 ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10e116a0 GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
// 10e43f20 ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
// 10e6b990 Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC

ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 * __cdecl
Graph_SampleNormalDistance2_mB56C7ECD21D4061906252E2FD5E3FE922068ED57
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
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar15;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar16;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar17;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar18;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar19;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar21;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar25;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar26;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar27;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar28;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar29;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar30;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar31;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar32;
  bool bVar33;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar34;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar35;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar36;
  undefined8 *extraout_EAX_00;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar37;
  int iVar38;
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
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_1a8;
  float local_164;
  float fStack_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_134;
  uint local_f0;
  uint uStack_ec;
  float local_e8;
  uint local_e4;
  uint uStack_e0;
  float local_dc;
  uint local_d8;
  uint uStack_d4;
  float local_d0;
  uint local_cc;
  uint uStack_c8;
  float local_c4;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_c0;
  undefined8 local_bc;
  float local_b4;
  int local_b0;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_ac;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_1c;
  undefined8 local_10;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *local_8;

  if (DAT_11522847 == '\0') {
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
              ((uint *)&
                       ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var
              );
    DAT_11522847 = '\x01';
  }
  local_c0 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  fVar28.___y_1 = param_2.___y_3;
  fVar28.___x_0 = param_2.___x_2;
  fVar28.___z_2 = param_2.___z_4;
  fVar44 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3(fVar28,(MethodInfo *)0x0);
  param_2.___z_4 = param_2.___y_3 - __real_3f000000;
  local_b0 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                       (param_2.___z_4,(MethodInfo *)0x0);
  if (local_b0 < -1) {
    pVVar36 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_1c,
                         (MethodInfo *)0x0);
    local_10._0_4_ = pVVar36->___x_2;
    local_10._4_4_ = pVVar36->___y_3;
    fVar40 = pVVar36->___z_4;
    param_2.___z_4 =
         Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(param_2.___z_4,(MethodInfo *)0x0);
    (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
    (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
    (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
    __return_storage_ptr__->___Item2_1 = 0.0;
    VVar24.___z_4 = fVar40;
    VVar24.___x_2 = (float)(undefined4)local_10;
    VVar24.___y_3 = local_10._4_4_;
    ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
              (__return_storage_ptr__,VVar24,__real_3f800000 - param_2.___z_4,
               ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
    return __return_storage_ptr__;
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar15 = param_1->___master_4->___graph_7,
     pGVar15 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    if (pGVar15->___boundsHeight_27 + 1 < local_b0) {
LAB_10e762d2:
      pVVar36 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                          (&param_2,(MethodInfo *)0x0);
      VVar24 = *pVVar36;
      (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
      (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
      (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
      __return_storage_ptr__->___Item2_1 = 0.0;
      ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
                (__return_storage_ptr__,VVar24,2.0,
                 ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
      return __return_storage_ptr__;
    }
    iVar30.___z_2 = 0;
    iVar30.___x_0 = (int)fVar44.___x_0;
    iVar30.___y_1 = (int)fVar44.___y_1;
    fVar45 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
             HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar30,unaff_EDI);
    local_20 = fVar45.___y_1;
    local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)fVar45.___x_0;
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
      fVar45.___y_1 = local_20;
      fVar45.___x_0 = (float)local_8;
    }
    local_20 = fVar45.___y_1;
    local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)fVar45.___x_0;
    pfVar34 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                        (&local_1c,fVar45,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pGVar15 = param_1->___master_4->___graph_7,
       pGVar15 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
      uVar1 = (pGVar15->___bounds_28).___c1_1.___y_1;
      uVar8 = (pGVar15->___bounds_28).___c1_1.___z_2;
      iStack_40 = (pGVar15->___bounds_28).___c0_0.___y_1 + -0x120;
      iStack_3c = (pGVar15->___bounds_28).___c0_0.___z_2 + -0x120;
      local_44 = (pGVar15->___bounds_28).___c0_0.___x_0 + -0x120;
      fStack_38 = (float)((pGVar15->___bounds_28).___c1_1.___x_0 + 0x120);
      local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)pfVar34->___z_2;
      fStack_34 = (float)(uVar1 + 0x120);
      fStack_30 = (float)(uVar8 + 0x120);
      local_10._0_4_ = pfVar34->___x_0;
      local_10._4_4_ = pfVar34->___y_1;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      iVar19.___c0_0.___y_1 = iStack_40;
      iVar19.___c0_0.___x_0 = local_44;
      iVar19.___c0_0.___z_2 = iStack_3c;
      iVar19.___c1_1.___x_0 = (int)fStack_38;
      iVar19.___c1_1.___y_1 = (int)fStack_34;
      iVar19.___c1_1.___z_2 = (int)fStack_30;
      fVar29.___z_2 = (float)local_8;
      fVar29.___x_0 = (float)(undefined4)local_10;
      fVar29.___y_1 = local_10._4_4_;
      bVar33 = ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
                         (iVar19,fVar29,(MethodInfo *)0x0);
      if (!bVar33) goto LAB_10e762d2;
      if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
        local_8 = param_1->___master_4->___grid_5;
        iVar31.___z_2 = 0;
        iVar31.___x_0 = (int)fVar44.___x_0;
        iVar31.___y_1 = (int)fVar44.___y_1;
        fVar45 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar31,unaff_EDI);
        if (local_8 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) {
          pQVar35 = GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
                              (&local_1a8,local_8,fVar45,(MethodInfo *)0x0);
          local_134.___quadIndex_0 = pQVar35->___quadIndex_0;
          local_134._1_3_ = *(undefined3 *)&pQVar35->field_0x1;
          local_134.___v0_1.___x_0 = (pQVar35->___v0_1).___x_0;
          local_134.___v0_1.___y_1 = (pQVar35->___v0_1).___y_1;
          local_134.___v1_2.___x_0 = (pQVar35->___v1_2).___x_0;
          local_134.___v1_2.___y_1 = (pQVar35->___v1_2).___y_1;
          local_134.___v2_3.___x_0 = (pQVar35->___v2_3).___x_0;
          local_134.___v2_3.___y_1 = (pQVar35->___v2_3).___y_1;
          local_134.___v3_4.___x_0 = (pQVar35->___v3_4).___x_0;
          local_134.___v3_4.___y_1 = (pQVar35->___v3_4).___y_1;
          local_134.___p0_5.___x_0 = (pQVar35->___p0_5).___x_0;
          local_134.___p0_5.___y_1 = (pQVar35->___p0_5).___y_1;
          local_134.___p1_6.___x_0 = (pQVar35->___p1_6).___x_0;
          local_134.___p1_6.___y_1 = (pQVar35->___p1_6).___y_1;
          local_134.___p2_7.___x_0 = (pQVar35->___p2_7).___x_0;
          local_134.___p2_7.___y_1 = (pQVar35->___p2_7).___y_1;
          local_134.___p3_8.___x_0 = (pQVar35->___p3_8).___x_0;
          local_134.___p3_8.___y_1 = (pQVar35->___p3_8).___y_1;
          bVar33 = Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
                             (&local_134,(MethodInfo *)0x0);
          if (!bVar33) goto LAB_10e762d2;
          local_10 = CONCAT44(local_134.___p0_5.___y_1,local_134.___p0_5.___x_0);
          iVar32.___y_1 = (int)local_134.___p0_5.___y_1;
          iVar32.___x_0 = (int)local_134.___p0_5.___x_0;
          iVar32.___z_2 = 0;
          pMVar48 = (MethodInfo *)local_134.___p0_5.___x_0;
          iVar46 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar32,unaff_EDI);
          local_64 = (float)iVar46.___y_1;
          local_2c = (float)iVar46.___x_0;
          local_10 = CONCAT44(local_134.___p1_6.___y_1,local_134.___p1_6.___x_0);
          iVar23.___y_1 = (int)local_134.___p1_6.___y_1;
          iVar23.___x_0 = (int)local_134.___p1_6.___x_0;
          iVar23.___z_2 = 0;
          pMVar49 = (MethodInfo *)local_134.___p1_6.___x_0;
          iVar46 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar23,pMVar48);
          local_6c = (float)iVar46.___y_1;
          local_68 = (float)iVar46.___x_0;
          local_10 = CONCAT44(local_134.___p2_7.___y_1,local_134.___p2_7.___x_0);
          iVar21.___y_1 = (int)local_134.___p2_7.___y_1;
          iVar21.___x_0 = (int)local_134.___p2_7.___x_0;
          iVar21.___z_2 = 0;
          pMVar48 = (MethodInfo *)local_134.___p2_7.___x_0;
          iVar46 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar21,pMVar49);
          local_74 = (float)iVar46.___y_1;
          local_70 = (float)iVar46.___x_0;
          local_10 = CONCAT44(local_134.___p3_8.___y_1,local_134.___p3_8.___x_0);
          iVar17.___y_1 = (int)local_134.___p3_8.___y_1;
          iVar17.___x_0 = (int)local_134.___p3_8.___x_0;
          iVar17.___z_2 = 0;
          VVar47 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar17,pMVar48);
          local_20 = VVar47.___y_1;
          local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)VVar47.___x_0;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            VVar47.___y_1 = local_20;
            VVar47.___x_0 = (float)local_8;
          }
          local_20 = VVar47.___y_1;
          local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)VVar47.___x_0;
          VVar18.___y_1 = local_64;
          VVar18.___x_0 = local_2c;
          VVar20.___y_1 = local_6c;
          VVar20.___x_0 = local_68;
          VVar22.___y_1 = local_74;
          VVar22.___x_0 = local_70;
          VVar47 = ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
                             (VVar18,VVar20,VVar22,VVar47,
                              (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar44,
                              (MethodInfo *)0x0);
          pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&param_2,
                               (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar47,
                               param_2.___z_4 - (float)local_b0,(MethodInfo *)0x0);
          uVar2 = pfVar34->___x_0;
          uVar9 = pfVar34->___y_1;
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_ac,(float)uVar2,
                     (float)uVar9,pfVar34->___z_2,(MethodInfo *)0x0);
          local_bc = *extraout_EAX;
          param_2.___z_4 = *(float *)(extraout_EAX + 1);
          param_2.___x_2 = (float)local_bc;
          param_2.___y_3 = (float)((ulonglong)local_bc >> 0x20);
          local_1c._0_8_ = *extraout_EAX;
          fStack_38 = local_1c.___x_0;
          fStack_34 = local_1c.___y_1;
          local_164 = __real_3f800000 - param_2.___x_2;
          fStack_160 = __real_3f800000 - fStack_34;
          local_15c = __real_3f800000 - param_2.___z_4;
          local_b4 = param_2.___z_4;
          local_64 = local_164;
          local_48 = fStack_160;
          fStack_30 = param_2.___z_4;
          local_20 = local_15c;
          local_1c.___z_2 = param_2.___z_4;
          pVVar36 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                              (&param_2,(MethodInfo *)0x0);
          uVar3 = pVVar36->___x_2;
          uVar10 = pVVar36->___y_3;
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    (&param_2,(float)uVar3,(float)uVar10,pVVar36->___z_4,(MethodInfo *)0x0);
          local_a0 = *extraout_EAX_00;
          local_2c = 0.0;
          fStack_154 = local_bc._4_4_ * local_bc._4_4_;
          local_98 = *(float *)(extraout_EAX_00 + 1);
          local_70 = local_64 * local_64;
          local_14c = __real_3f800000 - local_70;
          local_68 = local_20 * local_20;
          local_158 = (float)local_bc * (float)local_bc;
          local_150 = local_b4 * local_b4;
          fStack_148 = __real_3f800000 - local_48 * local_48;
          local_144 = __real_3f800000 - local_68;
          local_10 = CONCAT44(local_150,(undefined4)local_10);
          local_74 = __real_3f800000 - local_158;
          local_6c = __real_3f800000 - local_150;
          param_2.___y_3 = local_134.___p0_5.___x_0 - local_134.___p1_6.___x_0;
          param_2.___z_4 = local_134.___p0_5.___y_1 - local_134.___p1_6.___y_1;
          fVar44.___y_1 = param_2.___z_4;
          fVar44.___x_0 = param_2.___y_3;
          local_140 = local_144;
          local_13c = local_14c;
          local_138 = local_158;
          local_7c = fStack_154;
          local_78 = fStack_148;
          pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              (&local_ac,fVar44,0.0,(MethodInfo *)0x0);
          local_1c.___x_0 = pfVar34->___x_0;
          local_1c.___y_1 = pfVar34->___y_1;
          fStack_30 = pfVar34->___z_2;
          uVar4 = pfVar34->___x_0;
          uVar11 = pfVar34->___y_1;
          local_e4 = (uint)local_1c.___x_0 ^ __xmm_80000000800000008000000080000000;
          uStack_e0 = (uint)local_1c.___y_1 ^ __xmm_80000000800000008000000080000000;
          local_dc = (float)((uint)fStack_30 ^ __xmm_80000000800000008000000080000000);
          param_2.___y_3 = local_134.___p3_8.___x_0 - local_134.___p2_7.___x_0;
          param_2.___z_4 = local_134.___p3_8.___y_1 - local_134.___p2_7.___y_1;
          fVar25.___y_1 = param_2.___z_4;
          fVar25.___x_0 = param_2.___y_3;
          param_2.___x_2 = local_1c.___x_0;
          fStack_38 = (float)uVar4;
          fStack_34 = (float)uVar11;
          local_1c.___z_2 = fStack_30;
          pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              (&local_ac,fVar25,0.0,(MethodInfo *)0x0);
          local_1c.___x_0 = pfVar34->___x_0;
          local_1c.___y_1 = pfVar34->___y_1;
          fStack_30 = pfVar34->___z_2;
          uVar5 = pfVar34->___x_0;
          uVar12 = pfVar34->___y_1;
          local_cc = (uint)local_1c.___x_0 ^ __xmm_80000000800000008000000080000000;
          uStack_c8 = (uint)local_1c.___y_1 ^ __xmm_80000000800000008000000080000000;
          local_c4 = (float)((uint)fStack_30 ^ __xmm_80000000800000008000000080000000);
          param_2.___y_3 = local_134.___p0_5.___x_0 - local_134.___p3_8.___x_0;
          param_2.___z_4 = local_134.___p0_5.___y_1 - local_134.___p3_8.___y_1;
          fVar26.___y_1 = param_2.___z_4;
          fVar26.___x_0 = param_2.___y_3;
          param_2.___x_2 = local_1c.___x_0;
          fStack_38 = (float)uVar5;
          fStack_34 = (float)uVar12;
          local_1c.___z_2 = fStack_30;
          pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              (&local_ac,fVar26,0.0,(MethodInfo *)0x0);
          local_1c.___x_0 = pfVar34->___x_0;
          local_1c.___y_1 = pfVar34->___y_1;
          fStack_30 = pfVar34->___z_2;
          uVar6 = pfVar34->___x_0;
          uVar13 = pfVar34->___y_1;
          local_f0 = (uint)local_1c.___x_0 ^ __xmm_80000000800000008000000080000000;
          uStack_ec = (uint)local_1c.___y_1 ^ __xmm_80000000800000008000000080000000;
          local_e8 = (float)((uint)fStack_30 ^ __xmm_80000000800000008000000080000000);
          param_2.___y_3 = local_134.___p1_6.___x_0 - local_134.___p2_7.___x_0;
          param_2.___z_4 = local_134.___p1_6.___y_1 - local_134.___p2_7.___y_1;
          fVar27.___y_1 = param_2.___z_4;
          fVar27.___x_0 = param_2.___y_3;
          param_2.___x_2 = local_1c.___x_0;
          fStack_38 = (float)uVar6;
          fStack_34 = (float)uVar13;
          local_1c.___z_2 = fStack_30;
          pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              (&local_ac,fVar27,0.0,(MethodInfo *)0x0);
          local_1c.___x_0 = pfVar34->___x_0;
          local_1c.___y_1 = pfVar34->___y_1;
          fStack_30 = pfVar34->___z_2;
          uVar7 = pfVar34->___x_0;
          uVar14 = pfVar34->___y_1;
          local_d8 = (uint)local_1c.___x_0 ^ __xmm_80000000800000008000000080000000;
          uStack_d4 = (uint)local_1c.___y_1 ^ __xmm_80000000800000008000000080000000;
          local_d0 = (float)((uint)fStack_30 ^ __xmm_80000000800000008000000080000000);
          local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0;
          param_2.___x_2 = local_1c.___x_0;
          param_2.___y_3 = local_1c.___y_1;
          fStack_38 = (float)uVar7;
          fStack_34 = (float)uVar14;
          local_1c.___z_2 = fStack_30;
          while( true ) {
            if (local_8 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) {
              local_ac.___y_1 = fStack_148;
              local_ac.___x_0 = local_14c;
              fStack_38 = local_158;
              fStack_34 = fStack_154;
              local_1c.___y_1 = fStack_160;
              local_1c.___x_0 = local_164;
              local_94 = CONCAT44(uStack_e0,local_e4);
              local_88 = CONCAT44(uStack_ec,local_f0);
              local_ac.___z_2 = local_144;
              local_5c = local_144;
              local_28 = fStack_148;
              local_4c = local_14c;
              fStack_30 = local_150;
              local_60 = local_150;
              param_2.___z_4 = fStack_154;
              local_1c.___z_2 = local_15c;
              local_54 = local_158;
              local_50 = local_15c;
              local_8c = local_dc;
              local_24 = fStack_160;
              local_80 = local_e8;
              local_58 = local_164;
              iVar39 = local_134.___v0_1.___x_0;
              iVar38 = local_134.___v0_1.___y_1;
            }
            else if (local_8 ==
                     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)&DAT_00000001) {
              local_4c = local_70;
              local_28 = local_78;
              local_5c = local_140;
              local_54 = local_74;
              param_2.___z_4 = local_7c;
              local_60 = local_10._4_4_;
              local_58 = (float)local_bc;
              local_24 = local_48;
              local_50 = local_20;
              local_94 = CONCAT44(uStack_e0,local_e4);
              local_8c = local_dc;
              local_88 = CONCAT44(uStack_d4,local_d8);
              local_80 = local_d0;
              iVar39 = local_134.___v1_2.___x_0;
              iVar38 = local_134.___v1_2.___y_1;
            }
            else {
              local_8c = local_c4;
              if (local_8 ==
                  (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)&DAT_00000002) {
                local_4c = local_70;
                local_28 = local_78;
                local_5c = local_68;
                local_54 = local_74;
                param_2.___z_4 = local_7c;
                local_60 = local_6c;
                local_58 = (float)local_bc;
                local_24 = local_48;
                local_50 = local_b4;
                local_94 = CONCAT44(uStack_c8,local_cc);
                local_88 = CONCAT44(uStack_d4,local_d8);
                local_80 = local_d0;
                iVar39 = local_134.___v2_3.___x_0;
                iVar38 = local_134.___v2_3.___y_1;
              }
              else {
                local_4c = local_13c;
                local_28 = local_78;
                local_5c = local_68;
                local_54 = local_138;
                param_2.___z_4 = local_7c;
                local_60 = local_6c;
                local_58 = local_64;
                local_24 = local_48;
                local_50 = local_b4;
                local_94 = CONCAT44(uStack_c8,local_cc);
                local_88 = CONCAT44(uStack_ec,local_f0);
                local_80 = local_e8;
                iVar39 = local_134.___v3_4.___x_0;
                iVar38 = local_134.___v3_4.___y_1;
              }
            }
            if (((param_1->___master_4 ==
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                (pGVar15 = param_1->___master_4->___graph_7,
                pGVar15 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
               (pDVar16 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                          pGVar15->___cornerDict_16,
               pDVar16 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) break;
            iVar46.___y_1 = iVar38;
            iVar46.___x_0 = iVar39;
            bVar33 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                               (pDVar16,iVar46,(Il2CppObject **)&local_c0,
                                Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                               );
            if (bVar33) {
              iVar39 = 0;
              do {
                if (local_c0 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
                goto LAB_10e7638f;
                pTVar37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    (local_c0,(MethodInfo *)0x0);
                iVar38 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                                   (param_1,pTVar37,local_b0 + iVar39,(MethodInfo *)0x0);
                iVar39 = iVar39 + 1;
                fVar43 = (float)(-1 < iVar38);
                fVar42 = local_24 * local_4c * local_50 - local_24 * local_54 * local_50;
                fVar41 = local_24 * local_58 * local_5c - local_24 * local_58 * local_60;
                local_98 = fVar42 * local_8c * fVar43 + local_98 + fVar41 * local_80 * fVar43;
                fVar40 = local_28 * local_58;
                local_28 = __real_3f800000 - local_28;
                local_a0 = CONCAT44(fVar42 * local_94._4_4_ * fVar43 + local_a0._4_4_ +
                                    fVar41 * local_88._4_4_ * fVar43 +
                                    (fVar40 * local_50 - param_2.___z_4 * local_58 * local_50) *
                                    fVar43,fVar42 * (float)local_94 * fVar43 + (float)local_a0 +
                                           fVar41 * (float)local_88 * fVar43);
                param_2.___z_4 = __real_3f800000 - param_2.___z_4;
                local_2c = fVar43 * local_58 * local_24 * local_50 + local_2c;
                local_24 = __real_3f800000 - local_24;
              } while (iVar39 < 2);
            }
            local_8 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)
                      ((int)&local_8->_padding_ + 1);
            if (3 < (int)local_8) {
              Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                        (&param_2,(float)local_a0,(float)((ulonglong)local_a0 >> 0x20),local_98,
                         (MethodInfo *)0x0);
              VVar24 = *extraout_EAX_01;
              (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
              (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
              (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
              __return_storage_ptr__->___Item2_1 = 0.0;
              ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
                        (__return_storage_ptr__,VVar24,local_2c,
                         ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var
                        );
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
LAB_10e7638f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
