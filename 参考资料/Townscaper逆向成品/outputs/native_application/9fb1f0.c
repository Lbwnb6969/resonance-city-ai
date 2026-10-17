// RVA 0x9fb1f0 | Placemaker.SaveCamera$$GetImage
// PDB: SaveCamera_GetImage_m5D5B448C8044324FBAB04D15DE504656A3840D18
// Body: [[109fb1f0, 109fbd42]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10197fe0 _libm_sse2_tan_precise
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10660030 Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
// 10664c60 RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E
// 10664db0 RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4
// 10664de0 RenderTexture_SetActive_m044CDBE8E6AF70D0B7E03BCC814C02CFDF82FFC0
// 10665a70 RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F
// 106682a0 Shader_GetGlobalVector_m2624DC4423F51AC17F8F9E75F7CD060598CB6908
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 1066ba70 Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
// 1066bf40 Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987
// 1066c450 Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fe60 Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a370d0 Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
// 10a37760 Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
// 10a37d40 Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61
// 10a38820 Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49
// 10a389d0 Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3eea0 Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a44200 Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// 111490d0 ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641

ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 * __cdecl
SaveCamera_GetImage_m5D5B448C8044324FBAB04D15DE504656A3840D18
          (SaveCamera_t7E86B5A1216D55E6BA708D6AA32DDA610977BD0E *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  Il2CppObject *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar6;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar7;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 RVar10;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar11;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar12;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar13;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar14;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar15;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar16;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar17;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  bool bVar22;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar23;
  int iVar24;
  int iVar25;
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *pRVar26;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar27;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar28;
  undefined8 *extraout_EAX;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar29;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar31;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar32;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar33;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar34;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar35;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar36;
  undefined1 auVar37 [16];
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar38;
  float fVar39;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_154;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_114;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_d4;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_c4;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_b4;
  Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 local_a4;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_84;
  undefined8 local_74;
  float local_6c;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_68;
  float local_58;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D VStack_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_48;
  undefined1 local_3c [8];
  float fStack_34;
  float fStack_30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  int local_20;
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *local_1c;
  float local_18;
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *local_14;
  float local_10;
  float fStack_c;
  float local_8;

  if (DAT_11520180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    DAT_11520180 = '\x01';
  }
  local_a4.____list_0 = (LinkedList_1_t555E05F2E497A99E81B02BC6149DEFDB20186689 *)0x0;
  local_a4.____node_1 = (LinkedListNode_1_t31224B82477217EC2257F5D5D3CD9B16431A66EC *)0x0;
  local_a4.____version_2 = 0;
  local_a4.____current_3.___Item1_0 = (Il2CppObject *)0x0;
  local_a4.____current_3.___Item2_1 = (Il2CppObject *)0x0;
  local_a4.____current_3.___Item3_2 = (Il2CppObject *)0x0;
  pOVar6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___bigTex_6;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar6,(MethodInfo *)0x0);
  if (!bVar22) {
    pTVar23 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
              il2cpp_codegen_object_new
                        (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(pTVar23,0x200,0x200,(MethodInfo *)0x0)
    ;
    param_1->___bigTex_6 = pTVar23;
  }
  pTVar23 = param_1->___bigTex_6;
  if (pTVar23 != (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
    iVar24 = (**(code **)(*(int *)pTVar23 + 0xdc))(pTVar23,*(undefined4 *)(*(int *)pTVar23 + 0xe0));
    pTVar23 = param_1->___bigTex_6;
    local_20 = iVar24;
    if (pTVar23 != (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
      local_18 = (float)(**(code **)(*(int *)pTVar23 + 0xec))
                                  (pTVar23,*(undefined4 *)(*(int *)pTVar23 + 0xf0));
      iVar24 = Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5
                         (iVar24,(MethodInfo *)0x0);
      iVar25 = Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5
                         ((int)local_18,(MethodInfo *)0x0);
      local_14 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E
                           (iVar24 * 2,iVar25 * 2,0x18,0,(MethodInfo *)0x0);
      pRVar26 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E
                          (iVar24,iVar25,0x18,0,(MethodInfo *)0x0);
      local_1c = pRVar26;
      if (((local_14 != (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)0x0) &&
          (RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F
                     (local_14,8,(MethodInfo *)0x0),
          pRVar26 != (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)0x0)) &&
         (RenderTexture_set_antiAliasing_m4D37900B7E23CA0D33F109DB8DF21265DB70C38F
                    (pRVar26,8,(MethodInfo *)0x0),
         param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)) {
        pQVar27 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                            ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)&local_84,15.0,
                             ((float)(param_2->___cam_2).___y_1 / __real_437f0000) * __real_43b40000
                             ,0.0,(MethodInfo *)0x0);
        local_68.___x_1 = pQVar27->___x_0;
        local_68.___y_2 = pQVar27->___y_1;
        local_68.___z_3 = pQVar27->___z_2;
        local_68.___w_4 = pQVar27->___w_3;
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pGVar7 = param_1->___master_4->___graph_7,
              pGVar7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
          local_84.___m_Top_2 = (float)(pGVar7->___bounds_28).___c1_1.___y_1;
          local_84.___m_Bottom_3 = (float)(pGVar7->___bounds_28).___c1_1.___z_2;
          local_10 = ((float)(pGVar7->___bounds_28).___c0_0.___x_0 +
                     (float)(pGVar7->___bounds_28).___c1_1.___x_0) * __real_3f000000;
          fStack_c = ((float)(pGVar7->___bounds_28).___c0_0.___y_1 + (float)(int)local_84.___m_Top_2
                     ) * __real_3f000000;
          local_8 = ((float)(pGVar7->___bounds_28).___c0_0.___z_2 +
                    (float)(int)local_84.___m_Bottom_3) * __real_3f000000;
          if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
          }
          fVar18.___y_1 = fStack_c;
          fVar18.___x_0 = local_10;
          fVar18.___z_2 = local_8;
          fVar38 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                             (fVar18,(MethodInfo *)0x0);
          if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             && (pGVar7 = param_1->___master_4->___graph_7,
                pGVar7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
            local_8 = (float)pGVar7->___boundsHeight_27;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            pfVar28 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)(local_3c + 4),
                                 fVar38,(float)(int)local_8 * __real_3f000000,(MethodInfo *)0x0);
            uVar2 = pfVar28->___x_0;
            uVar4 = pfVar28->___y_1;
            Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_3c + 4),
                       (float)uVar2,(float)uVar4,pfVar28->___z_2,(MethodInfo *)0x0);
            local_74 = *extraout_EAX;
            fVar39 = *(float *)(extraout_EAX + 1);
            fStack_c = (float)local_74;
            local_8 = (float)((ulonglong)local_74 >> 0x20);
            local_6c = fVar39;
            if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_5 !=
                 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
               (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___cam_5,(MethodInfo *)0x0),
               pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
              VVar19.___y_3 = local_8;
              VVar19.___x_2 = fStack_c;
              VVar19.___z_4 = fVar39;
              Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                        (pTVar29,VVar19,(MethodInfo *)0x0);
              if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_5 !=
                   (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                 (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       param_1->___cam_5,(MethodInfo *)0x0),
                 pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                QVar11.___y_1 = local_68.___y_2;
                QVar11.___x_0 = local_68.___x_1;
                QVar11.___z_2 = local_68.___z_3;
                QVar11.___w_3 = local_68.___w_4;
                Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                          (pTVar29,QVar11,(MethodInfo *)0x0);
                if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_5 !=
                     (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                   (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         param_1->___cam_5,(MethodInfo *)0x0),
                   pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                  pMVar30 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
                                      (&local_154,pTVar29,(MethodInfo *)0x0);
                  local_114.___m00_0 = pMVar30->___m00_0;
                  local_114.___m10_1 = pMVar30->___m10_1;
                  local_114.___m20_2 = pMVar30->___m20_2;
                  local_114.___m30_3 = pMVar30->___m30_3;
                  local_114.___m01_4 = pMVar30->___m01_4;
                  local_114.___m11_5 = pMVar30->___m11_5;
                  local_114.___m21_6 = pMVar30->___m21_6;
                  local_114.___m31_7 = pMVar30->___m31_7;
                  local_114.___m02_8 = pMVar30->___m02_8;
                  local_114.___m12_9 = pMVar30->___m12_9;
                  local_114.___m22_10 = pMVar30->___m22_10;
                  local_114.___m32_11 = pMVar30->___m32_11;
                  local_114.___m03_12 = pMVar30->___m03_12;
                  local_114.___m13_13 = pMVar30->___m13_13;
                  local_114.___m23_14 = pMVar30->___m23_14;
                  local_114.___m33_15 = pMVar30->___m33_15;
                  pVVar31 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                       (local_3c + 4),(MethodInfo *)0x0);
                  uVar3 = pVVar31->___x_2;
                  uVar5 = pVVar31->___y_3;
                  fVar39 = pVVar31->___z_4;
                  fStack_c = (float)uVar3;
                  local_8 = (float)uVar5;
                  pVVar31 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                       (local_3c + 4),(MethodInfo *)0x0);
                  VVar9.___y_3 = local_8;
                  VVar9.___x_2 = fStack_c;
                  VVar9.___z_4 = fVar39;
                  Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
                            ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)&local_a4,VVar9,
                             *pVVar31,(MethodInfo *)0x0);
                  if (param_1->___cam_5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0)
                  {
                    Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49
                              (param_1->___cam_5,16.0,(MethodInfo *)0x0);
                    local_8 = (float)(int)local_18 / (float)local_20;
                    auVar37._8_8_ = 0;
                    auVar37._0_8_ = __real_3fd1df46a0000000;
                    _libm_sse2_tan_precise();
                    local_18 = __real_40000000 / (float)auVar37._0_8_;
                    if (((param_1->___master_4 !=
                          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                        (pGVar7 = param_1->___master_4->___graph_7,
                        pGVar7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
                       (pTVar29 = pGVar7->___corners_6,
                       pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                      iVar24 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                         (pTVar29,(MethodInfo *)0x0);
                      while (iVar24 = iVar24 + -1, -1 < iVar24) {
                        if (((param_1->___master_4 ==
                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                            (pGVar7 = param_1->___master_4->___graph_7,
                            pGVar7 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
                           ((pTVar29 = pGVar7->___corners_6,
                            pTVar29 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
                            ((pTVar29 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                                  (pTVar29,iVar24,(MethodInfo *)0x0),
                             pTVar29 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0
                             || (pTVar32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                     ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pTVar29,(MethodInfo *)0x0),
                                pTVar32 ==
                                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))))))
                        goto LAB_109fbd3e;
                        local_20 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                             (pTVar32,(MethodInfo *)0x0);
                        if (local_20 != 0) {
                          pTVar32 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                              (pTVar29,0,(MethodInfo *)0x0);
                          if (pTVar32 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          goto LAB_109fbd3e;
                          pVVar31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                               (local_3c + 4),pTVar32,(MethodInfo *)0x0);
                          pVVar31 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                              (&local_48,&local_114,*pVVar31,(MethodInfo *)0x0);
                          Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                                    ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)&local_a4,
                                     *pVVar31,(MethodInfo *)0x0);
                          if (local_20 != 1) {
                            pTVar29 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                                (pTVar29,local_20 + -1,(MethodInfo *)0x0);
                            if (pTVar29 ==
                                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                            goto LAB_109fbd3e;
                            pVVar31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                                (&local_2c,pTVar29,(MethodInfo *)0x0);
                            pVVar31 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)&VStack_54,&local_114,*pVVar31,(MethodInfo *)0x0
                                                );
                            Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                                      ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)&local_a4
                                       ,*pVVar31,(MethodInfo *)0x0);
                          }
                        }
                      }
                      pVVar33 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                                          (&VStack_54,&local_a4,(MethodInfo *)0x0);
                      pIVar1 = pVVar33->___Item1_0;
                      pVVar33 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                                          (&VStack_54,&local_a4,(MethodInfo *)0x0);
                      local_2c.___x_2 = (float)pVVar33->___Item1_0;
                      local_2c.___y_3 = (float)pVVar33->___Item2_1;
                      fVar39 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                                         (((float)pIVar1 + __real_3f800000) * local_8,
                                          (local_2c.___y_3 + __real_3f800000) * __real_3f8ccccd,
                                          (MethodInfo *)0x0);
                      if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_5
                          != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                        pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             param_1->___cam_5,(MethodInfo *)0x0);
                        piVar34 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                                            ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)
                                             &VStack_54,
                                             (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E
                                              *)&local_a4,(MethodInfo *)0x0);
                        local_2c.___x_2 = (float)piVar34->___x_0;
                        local_2c.___y_3 = (float)piVar34->___y_1;
                        local_48.___z_4 = (float)piVar34->___z_2;
                        local_48.___x_2 = (float)piVar34->___x_0;
                        local_48.___y_3 = (float)piVar34->___y_1;
                        fStack_30 = (float)((uint)(fVar39 * local_18) ^
                                           __xmm_80000000800000008000000080000000) + local_48.___z_4
                        ;
                        QVar8.___y_1 = local_68.___y_2;
                        QVar8.___x_0 = local_68.___x_1;
                        QVar8.___z_2 = local_68.___z_3;
                        QVar8.___w_3 = local_68.___w_4;
                        VVar20.___y_3 = local_2c.___y_3 + 0.0;
                        VVar20.___x_2 = local_2c.___x_2 + 0.0;
                        VVar20.___z_4 = fStack_30;
                        local_10 = local_2c.___x_2;
                        fStack_c = local_2c.___y_3;
                        local_8 = local_48.___z_4;
                        pVVar31 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                             &VStack_54,QVar8,VVar20,(MethodInfo *)0x0);
                        local_48.___x_2 = pVVar31->___x_2;
                        local_48.___y_3 = pVVar31->___y_3;
                        fStack_30 = pVVar31->___z_4;
                        local_3c._4_4_ = pVVar31->___x_2;
                        fStack_34 = pVVar31->___y_3;
                        local_10 = (float)local_74 + local_48.___x_2;
                        fStack_c = local_74._4_4_ + local_48.___y_3;
                        local_8 = local_6c + fStack_30;
                        local_2c._0_8_ = local_48._0_8_;
                        if (pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                          VVar21.___y_3 = fStack_c;
                          VVar21.___x_2 = local_10;
                          VVar21.___z_4 = local_8;
                          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                    (pTVar29,VVar21,(MethodInfo *)0x0);
                          if ((ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                               ->has_cctor != '\0') &&
                             (ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                              ->cctor_finished == 0)) {
                            il2cpp_runtime_class_init
                                      (
                                      ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                      );
                          }
                          pVVar35 = Shader_GetGlobalVector_m2624DC4423F51AC17F8F9E75F7CD060598CB6908
                                              (&local_68,
                                               *(int *)((int)
                                                  ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                  ->static_fields + 0x10),(MethodInfo *)0x0);
                          local_58 = pVVar35->___x_1;
                          VStack_54.___Item1_0 = (Il2CppObject *)pVVar35->___y_2;
                          VStack_54.___Item2_1 = (Il2CppObject *)pVVar35->___z_3;
                          VStack_54.___Item3_2 = (Il2CppObject *)pVVar35->___w_4;
                          pVVar35 = Shader_GetGlobalVector_m2624DC4423F51AC17F8F9E75F7CD060598CB6908
                                              (&local_68,
                                               *(int *)((int)
                                                  ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                  ->static_fields + 8),(MethodInfo *)0x0);
                          local_68.___x_1 = pVVar35->___x_1;
                          local_68.___y_2 = pVVar35->___y_2;
                          local_68.___z_3 = pVVar35->___z_3;
                          local_68.___w_4 = pVVar35->___w_4;
                          pVVar35 = Shader_GetGlobalVector_m2624DC4423F51AC17F8F9E75F7CD060598CB6908
                                              ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)
                                               local_3c,*(int *)((int)
                                                  ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                  ->static_fields + 0xc),(MethodInfo *)0x0);
                          local_3c._0_4_ = pVVar35->___x_1;
                          local_3c._4_4_ = pVVar35->___y_2;
                          fStack_34 = pVVar35->___z_3;
                          fStack_30 = pVVar35->___w_4;
                          iVar24 = *(int *)((int)ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                 ->static_fields + 8);
                          local_b4.___m_Left_0 = 0.0;
                          local_b4.___m_Right_1 = 0.0;
                          local_b4.___m_Top_2 = 0.0;
                          local_b4.___m_Bottom_3 = 0.0;
                          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                                    (&local_b4,2.0,0.5,1.0,4.0,(MethodInfo *)0x0);
                          VVar12.___y_2 = local_b4.___m_Right_1;
                          VVar12.___x_1 = local_b4.___m_Left_0;
                          VVar12.___z_3 = local_b4.___m_Top_2;
                          VVar12.___w_4 = local_b4.___m_Bottom_3;
                          Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                    (iVar24,VVar12,(MethodInfo *)0x0);
                          iVar24 = *(int *)((int)ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                 ->static_fields + 0x10);
                          local_c4.___m_Left_0 = 0.0;
                          local_c4.___m_Right_1 = 0.0;
                          local_c4.___m_Top_2 = 0.0;
                          local_c4.___m_Bottom_3 = 0.0;
                          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                                    (&local_c4,1.0,1.0,0.0,0.0,(MethodInfo *)0x0);
                          VVar13.___y_2 = local_c4.___m_Right_1;
                          VVar13.___x_1 = local_c4.___m_Left_0;
                          VVar13.___z_3 = local_c4.___m_Top_2;
                          VVar13.___w_4 = local_c4.___m_Bottom_3;
                          Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                    (iVar24,VVar13,(MethodInfo *)0x0);
                          iVar24 = *(int *)((int)ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                 ->static_fields + 0xc);
                          local_d4.___m_Left_0 = 0.0;
                          local_d4.___m_Right_1 = 0.0;
                          local_d4.___m_Top_2 = 0.0;
                          local_d4.___m_Bottom_3 = 0.0;
                          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                                    (&local_d4,0.0,1.0,0.0,0.0,(MethodInfo *)0x0);
                          VVar14.___y_2 = local_d4.___m_Right_1;
                          VVar14.___x_1 = local_d4.___m_Left_0;
                          VVar14.___z_3 = local_d4.___m_Top_2;
                          VVar14.___w_4 = local_d4.___m_Bottom_3;
                          Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                    (iVar24,VVar14,(MethodInfo *)0x0);
                          if (param_1->___cam_5 !=
                              (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                            Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596
                                      (param_1->___cam_5,local_14,(MethodInfo *)0x0);
                            if (param_1->___cam_5 !=
                                (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                              Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61
                                        (param_1->___cam_5,(MethodInfo *)0x0);
                              if (param_1->___cam_5 !=
                                  (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                                Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596
                                          (param_1->___cam_5,
                                           (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849
                                            *)0x0,(MethodInfo *)0x0);
                                if ((Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var
                                     ->has_cctor != '\0') &&
                                   (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var
                                    ->cctor_finished == 0)) {
                                  il2cpp_runtime_class_init
                                            (
                                            Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var
                                            );
                                }
                                pRVar26 = local_1c;
                                Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7
                                          ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                                           local_14,local_1c,(MethodInfo *)0x0);
                                VVar15.___y_2 = local_68.___y_2;
                                VVar15.___x_1 = local_68.___x_1;
                                VVar15.___z_3 = local_68.___z_3;
                                VVar15.___w_4 = local_68.___w_4;
                                Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                          (*(int *)((int)
                                                  ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                  ->static_fields + 8),VVar15,(MethodInfo *)0x0);
                                VVar16.___y_2 = (float)VStack_54.___Item1_0;
                                VVar16.___x_1 = local_58;
                                VVar16.___z_3 = (float)VStack_54.___Item2_1;
                                VVar16.___w_4 = (float)VStack_54.___Item3_2;
                                Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                          (*(int *)((int)
                                                  ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                  ->static_fields + 0x10),VVar16,(MethodInfo *)0x0);
                                VVar17.___y_2 = (float)local_3c._4_4_;
                                VVar17.___x_1 = (float)local_3c._0_4_;
                                VVar17.___z_3 = fStack_34;
                                VVar17.___w_4 = fStack_30;
                                Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                          (*(int *)((int)
                                                  ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var
                                                  ->static_fields + 0xc),VVar17,(MethodInfo *)0x0);
                                RenderTexture_SetActive_m044CDBE8E6AF70D0B7E03BCC814C02CFDF82FFC0
                                          (pRVar26,(MethodInfo *)0x0);
                                pTVar23 = param_1->___bigTex_6;
                                iVar24 = (**(code **)(*(int *)pRVar26 + 0xdc))
                                                   (pRVar26,*(undefined4 *)(*(int *)pRVar26 + 0xe0))
                                ;
                                iVar25 = (**(code **)(*(int *)local_1c + 0xec))
                                                   (local_1c,*(undefined4 *)
                                                              (*(int *)local_1c + 0xf0));
                                local_84.___m_Left_0 = 0.0;
                                local_84.___m_Right_1 = 0.0;
                                local_84.___m_Top_2 = 0.0;
                                local_84.___m_Bottom_3 = 0.0;
                                TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                                          (&local_84,0.0,0.0,(float)iVar24,(float)iVar25,
                                           (MethodInfo *)0x0);
                                if (pTVar23 !=
                                    (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
                                  RVar10.___m_YMin_1 = local_84.___m_Right_1;
                                  RVar10.___m_XMin_0 = local_84.___m_Left_0;
                                  RVar10.___m_Width_2 = local_84.___m_Top_2;
                                  RVar10.___m_Height_3 = local_84.___m_Bottom_3;
                                  Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987
                                            (pTVar23,RVar10,0,0,(MethodInfo *)0x0);
                                  if (param_1->___bigTex_6 !=
                                      (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
                                    Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
                                              (param_1->___bigTex_6,(MethodInfo *)0x0);
                                    pBVar36 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641
                                                        (param_1->___bigTex_6,0x5a,(MethodInfo *)0x0
                                                        );
                                    RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4
                                              (local_1c,(MethodInfo *)0x0);
                                    RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4
                                              (local_14,(MethodInfo *)0x0);
                                    return pBVar36;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_109fbd3e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
