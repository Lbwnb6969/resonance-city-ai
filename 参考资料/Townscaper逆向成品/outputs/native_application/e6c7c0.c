// RVA 0xe6c7c0 | Placemaker.Graphs.Graph$$GetQubeWithContext
// PDB: Graph_GetQubeWithContext_m1AB9E36B533D6589695CA0C585871DD372EB9B2F
// Body: [[10e6c7c0, 10e6d252]]
// Direct callees:
// 100beb90 ValueTuple_7__ctor_mB6BD49B04C9930783235B174E97A2E66AB2E49DC
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10672cf0 Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10836340 ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
// 10836df0 ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
// 10e4eeb0 ValueTuple_7__ctor_mD5CE06969C2B972980939750A238802189A9820D_gshared
// 10e6b8b0 Graph_BinaryTreeSearchSquare_m35DE143B3284AED2665B2799BD3ADE703A885532
// 10e6d276 FUN_10e6d276

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 * __cdecl
Graph_GetQubeWithContext_m1AB9E36B533D6589695CA0C585871DD372EB9B2F
          (ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 *__return_storage_ptr__,
          Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar9;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar10;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar11;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar12;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar13;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar16;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar17;
  char cVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  bool bVar21;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar22;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar23;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar25;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar26;
  int iVar27;
  ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 *pVVar28;
  uint uVar29;
  uint uVar30;
  uint extraout_ECX;
  uint uVar31;
  float fVar32;
  float fVar33;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar34;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar35;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_170;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_160;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_150;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_140 [2];
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_128;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_118;
  float local_110;
  float local_10c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_108;
  float local_100;
  float local_fc;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_f8;
  float local_f0;
  float local_ec;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_e8;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_e0;
  undefined1 local_d8 [36];
  float fStack_b4;
  int iStack_b0;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_a8;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_a0;
  undefined4 local_94;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_90;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_88;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_80;
  undefined8 local_78;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_6c;
  int local_68;
  float local_64;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_60;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_58;
  undefined8 local_50;
  byte local_45;
  int local_44;
  uint local_40;
  uint local_3c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_38;
  uint local_34;
  float local_30;
  undefined1 local_2b [23];
  undefined4 local_14;

  local_2b._7_4_ = &stack0xfffffffc;
  local_14 = 0xffffffff;
  local_2b._19_4_ = &__ehhandler__Graph_GetQubeWithContext_m1AB9E36B533D6589695CA0C585871DD372EB9B2F
  ;
  local_2b._15_4_ = ExceptionList;
  local_2b._11_4_ = &stack0xfffffe80;
  ExceptionList = local_2b + 0xf;
  puVar19 = &stack0xfffffffc;
  puVar20 = &stack0xfffffe80;
  if (DAT_11522842 == '\0') {
    ExceptionList = local_2b + 0xf;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_7__ctor_mB6BD49B04C9930783235B174E97A2E66AB2E49DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3833697E5D425BF8A162C488FC6D6DF04FF287C1);
    DAT_11522842 = '\x01';
    puVar19 = (undefined1 *)local_2b._7_4_;
    puVar20 = (undefined1 *)local_2b._11_4_;
  }
  local_2b._11_4_ = puVar20;
  local_2b._7_4_ = puVar19;
  local_2b[0] = 0;
  memset((uchar *)__return_storage_ptr__,'\0',0x2c);
  local_94 = 0;
  local_e8.___x_0 = 0.0;
  local_e8.___y_1 = 0.0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_2b,
             (MethodInfo *)_stringLiteral3833697E5D425BF8A162C488FC6D6DF04FF287C1);
  local_14 = 0;
  local_80.___y_1 = param_2.___z_4;
  local_80.___x_0 = param_2.___x_2;
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  pfVar22 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                      (&local_128,local_80,(MethodInfo *)0x0);
  local_a8.___x_0 = pfVar22->___x_0;
  local_a8.___y_1 = pfVar22->___y_1;
  fVar32 = pfVar22->___z_2;
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar4 = param_1->___master_4->___graph_7,
     pGVar4 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    uVar2 = (pGVar4->___bounds_28).___c1_1.___y_1;
    uVar3 = (pGVar4->___bounds_28).___c1_1.___z_2;
    iStack_b0 = uVar3 + 0x12;
    local_d8._24_4_ = (pGVar4->___bounds_28).___c0_0.___y_1 + -0x12;
    local_d8._32_4_ = (pGVar4->___bounds_28).___c1_1.___x_0 + 0x12;
    local_d8._28_4_ = (pGVar4->___bounds_28).___c0_0.___z_2 + -0x12;
    fStack_b4 = (float)(uVar2 + 0x12);
    local_d8._20_4_ = (pGVar4->___bounds_28).___c0_0.___x_0 + -0x12;
    local_68 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                         (param_2.___y_3,(MethodInfo *)0x0);
    Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
              (__real_3f000000 - param_2.___y_3,(MethodInfo *)0x0);
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    iVar6.___c0_0.___y_1 = local_d8._24_4_;
    iVar6.___c0_0.___x_0 = local_d8._20_4_;
    iVar6.___c0_0.___z_2 = local_d8._28_4_;
    iVar6.___c1_1.___x_0 = local_d8._32_4_;
    iVar6.___c1_1.___y_1 = (int)fStack_b4;
    iVar6.___c1_1.___z_2 = iStack_b0;
    fVar9.___z_2 = fVar32;
    fVar9.___x_0 = local_a8.___x_0;
    fVar9.___y_1 = local_a8.___y_1;
    bVar21 = ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
                       (iVar6,fVar9,(MethodInfo *)0x0);
    if (bVar21) {
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pGVar4 = param_1->___master_4->___graph_7,
         pGVar4 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_10e6d2ab;
      if ((local_68 <= pGVar4->___boundsHeight_27) && (0.0 <= param_2.___y_3)) {
        local_60 = pGVar4->___squares_8;
        if (local_60 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e6d2ab;
        local_44 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             (local_60,(MethodInfo *)0x0);
        if (local_44 != 0) {
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          local_58 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                               ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D)param_2,
                                (MethodInfo *)0x0);
          local_34 = Graph_BinaryTreeSearchSquare_m35DE143B3284AED2665B2799BD3ADE703A885532
                               (param_1,param_2,(MethodInfo *)0x0);
          if ((int)local_34 < 0) {
            local_34 = ~local_34;
          }
          local_40 = local_34 - 1;
          local_2b[1] = 1;
          local_2b[2] = (int)local_34 < local_44;
          local_3c = local_40 >> 0x1f ^ 1;
          uVar29 = local_3c;
          uVar30 = local_34;
          uVar31 = local_40;
          iVar27 = local_44;
          cVar18 = local_2b[2];
LAB_10e6cae9:
          do {
            if ((char)uVar29 == '\0' && cVar18 == '\0') goto LAB_10e6d1a6;
            local_45 = local_2b[1];
            bVar1 = local_2b[1] ^ 1;
            if (local_2b[1] == 0) {
              local_2b[1] = bVar1;
              if ((char)uVar29 == '\0') goto LAB_10e6cae9;
              local_40 = uVar31 - 1;
              local_3c = CONCAT31(local_3c._1_3_,(byte)(local_40 >> 0x1f)) ^ 1;
              uVar30 = uVar31;
            }
            else {
              local_2b[1] = bVar1;
              if (cVar18 == '\0') goto LAB_10e6cae9;
              local_34 = uVar30 + 1;
              local_2b[2] = (int)local_34 < iVar27;
            }
            local_2b[1] = bVar1;
            pTVar23 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (local_60,uVar30,(MethodInfo *)0x0);
            local_38 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)pTVar23;
            if ((pTVar23 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
               (pTVar24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar23,
                                     (MethodInfo *)0x0),
               pTVar24 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e6d2ab;
            pVVar25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (local_140,pTVar24,(MethodInfo *)0x0);
            local_78._0_4_ = pVVar25->___x_2;
            local_78._4_4_ = pVVar25->___y_3;
            fVar32 = pVVar25->___z_4;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            fVar10.___z_2 = fVar32;
            fVar10.___x_0 = (float)local_78;
            fVar10.___y_1 = local_78._4_4_;
            fVar34 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                               (fVar10,(MethodInfo *)0x0);
            local_e8.___x_0 = local_e0.___x_0 - local_58.___x_0;
            local_e0.___y_1 = fVar34.___y_1;
            local_e8.___y_1 = local_e0.___y_1 - local_58.___y_1;
            uVar30 = local_34;
            uVar31 = local_40;
            iVar27 = local_44;
            local_e0 = fVar34;
            if (local_45 == 0) {
              if (___real_3fb5c28f <
                  (float)((uint)local_e8.___x_0 ^ __xmm_80000000800000008000000080000000)) {
                local_3c = extraout_ECX & 0xffffff00;
                uVar29 = local_3c;
                cVar18 = local_2b[2];
                goto LAB_10e6cae9;
              }
            }
            else if (___real_3fb5c28f < local_e8.___x_0) {
              local_2b[2] = '\0';
              uVar29 = local_3c;
              cVar18 = local_2b[2];
              goto LAB_10e6cae9;
            }
            local_6c = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                       Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
                                 (&local_e8,(MethodInfo *)0x0);
            uVar29 = local_3c;
            uVar30 = local_34;
            uVar31 = local_40;
            iVar27 = local_44;
            cVar18 = local_2b[2];
            if (___real_40066666 < (float)local_6c) goto LAB_10e6cae9;
            pSVar26 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                      Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar23,
                                 Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                                );
            local_6c = pSVar26;
            if (((pSVar26 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) ||
                (pSVar26->___c0_8 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)) ||
               (pTVar23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     pSVar26->___c0_8,(MethodInfo *)0x0),
               pTVar23 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e6d2ab;
            pVVar25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (&local_150,pTVar23,(MethodInfo *)0x0);
            local_78._0_4_ = pVVar25->___x_2;
            local_78._4_4_ = pVVar25->___y_3;
            fVar32 = pVVar25->___z_4;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            fVar11.___z_2 = fVar32;
            fVar11.___x_0 = (float)local_78;
            fVar11.___y_1 = local_78._4_4_;
            local_80 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                 (fVar11,(MethodInfo *)0x0);
            if ((pSVar26->___c1_9 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
               (pTVar23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     pSVar26->___c1_9,(MethodInfo *)0x0),
               pTVar23 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e6d2ab;
            pfVar22 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                      Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (&local_160,pTVar23,(MethodInfo *)0x0);
            local_88 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                 (*pfVar22,(MethodInfo *)0x0);
            local_30 = local_58.___x_0 - local_80.___x_0;
            local_64 = local_80.___x_0;
            local_78 = CONCAT44(local_80.___y_1,(float)local_78);
            local_50 = CONCAT44(local_58.___y_1 - local_80.___y_1,(float)local_50);
            local_f0 = local_88.___x_0 - local_80.___x_0;
            local_ec = local_88.___y_1 - local_80.___y_1;
            VVar35.___y_1 = local_ec;
            VVar35.___x_0 = local_f0;
            VVar35 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                               (VVar35,(MethodInfo *)0x0);
            fVar33 = local_f8.___x_0 * local_30;
            local_f8.___y_1 = VVar35.___y_1;
            fVar32 = local_f8.___y_1 * local_50._4_4_;
            uVar29 = local_3c;
            uVar30 = local_34;
            uVar31 = local_40;
            iVar27 = local_44;
            local_f8 = VVar35;
            cVar18 = local_2b[2];
            if (fVar33 + fVar32 < 0.0) goto LAB_10e6cae9;
            if ((pSVar26->___c2_10 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
               (pTVar23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     pSVar26->___c2_10,(MethodInfo *)0x0),
               pTVar23 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e6d2ab;
            pVVar25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (&local_170,pTVar23,(MethodInfo *)0x0);
            local_50._0_4_ = pVVar25->___x_2;
            local_50._4_4_ = pVVar25->___y_3;
            fVar32 = pVVar25->___z_4;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            fVar12.___z_2 = fVar32;
            fVar12.___x_0 = (float)local_50;
            fVar12.___y_1 = local_50._4_4_;
            local_90 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                 (fVar12,(MethodInfo *)0x0);
            local_50 = CONCAT44(local_58.___x_0 - local_88.___x_0,(float)local_50);
            local_30 = local_58.___y_1 - local_88.___y_1;
            local_100 = local_90.___x_0 - local_88.___x_0;
            local_fc = local_90.___y_1 - local_88.___y_1;
            VVar36.___y_1 = local_fc;
            VVar36.___x_0 = local_100;
            VVar35 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                               (VVar36,(MethodInfo *)0x0);
            fVar33 = local_108.___x_0 * local_50._4_4_;
            local_108.___y_1 = VVar35.___y_1;
            fVar32 = local_108.___y_1 * local_30;
            uVar29 = local_3c;
            uVar30 = local_34;
            uVar31 = local_40;
            iVar27 = local_44;
            local_108 = VVar35;
            cVar18 = local_2b[2];
            if (fVar33 + fVar32 < 0.0) goto LAB_10e6cae9;
            if ((pSVar26->___c3_11 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
               (pTVar23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     pSVar26->___c3_11,(MethodInfo *)0x0),
               pTVar23 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e6d2ab;
            pVVar25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                 (local_d8 + 0x20),pTVar23,(MethodInfo *)0x0);
            local_50._0_4_ = pVVar25->___x_2;
            local_50._4_4_ = pVVar25->___y_3;
            fVar32 = pVVar25->___z_4;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            fVar13.___z_2 = fVar32;
            fVar13.___x_0 = (float)local_50;
            fVar13.___y_1 = local_50._4_4_;
            fVar34 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                               (fVar13,(MethodInfo *)0x0);
            local_50 = CONCAT44(local_58.___x_0 - local_90.___x_0,(float)local_50);
            local_30 = local_58.___y_1 - local_90.___y_1;
            local_a0.___x_0 = fVar34.___x_0;
            local_a0.___y_1 = fVar34.___y_1;
            local_110 = local_a0.___x_0 - local_90.___x_0;
            local_10c = local_a0.___y_1 - local_90.___y_1;
            VVar14.___y_1 = local_10c;
            VVar14.___x_0 = local_110;
            local_a0 = fVar34;
            VVar35 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                               (VVar14,(MethodInfo *)0x0);
            fVar33 = local_118.___x_0 * local_50._4_4_;
            local_118.___y_1 = VVar35.___y_1;
            fVar32 = local_118.___y_1 * local_30;
            uVar29 = local_3c;
            uVar30 = local_34;
            uVar31 = local_40;
            iVar27 = local_44;
            local_118 = VVar35;
            cVar18 = local_2b[2];
            if (fVar33 + fVar32 < 0.0) goto LAB_10e6cae9;
            local_50 = CONCAT44(local_58.___x_0 - local_a0.___x_0,(float)local_50);
            local_30 = local_58.___y_1 - local_a0.___y_1;
            local_128.___y_1 = local_64 - local_a0.___x_0;
            local_128.___z_2 = local_78._4_4_ - local_a0.___y_1;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            VVar15.___y_1 = local_128.___z_2;
            VVar15.___x_0 = local_128.___y_1;
            VVar35 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                               (VVar15,(MethodInfo *)0x0);
            fVar33 = local_a8.___x_0 * local_50._4_4_;
            local_a8.___y_1 = VVar35.___y_1;
            fVar32 = local_a8.___y_1 * local_30;
            uVar29 = local_3c;
            uVar30 = local_34;
            uVar31 = local_40;
            iVar27 = local_44;
            local_a8 = VVar35;
            cVar18 = local_2b[2];
          } while (fVar33 + fVar32 < 0.0);
          iVar27 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_38,
                              (MethodInfo *)0x0);
          if (local_68 < iVar27) {
            pTVar23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_6c,
                                 (MethodInfo *)0x0);
            if ((pTVar23 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
               (pTVar23 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                    (pTVar23,local_68,(MethodInfo *)0x0),
               pTVar23 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
              local_38 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                         Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar23,
                                    Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                   );
              memset(local_d8,'\0',0x2c);
              ValueTuple_7__ctor_mB6BD49B04C9930783235B174E97A2E66AB2E49DC
                        ((ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 *)local_d8,local_38
                         ,local_6c,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_80,
                         (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_88,
                         (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_90,
                         (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar34,local_68,
                         ValueTuple_7__ctor_mB6BD49B04C9930783235B174E97A2E66AB2E49DC_RuntimeMethod_var
                        );
              __return_storage_ptr__->___Item1_0 =
                   (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)local_d8._0_4_;
              __return_storage_ptr__->___Item2_1 =
                   (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)local_d8._4_4_;
              (__return_storage_ptr__->___Item3_2).___x_0 = (float)local_d8._8_4_;
              (__return_storage_ptr__->___Item3_2).___y_1 = (float)local_d8._12_4_;
              (__return_storage_ptr__->___Item4_3).___x_0 = (float)local_d8._16_4_;
              (__return_storage_ptr__->___Item4_3).___y_1 = (float)local_d8._20_4_;
              (__return_storage_ptr__->___Item5_4).___x_0 = (float)local_d8._24_4_;
              (__return_storage_ptr__->___Item5_4).___y_1 = (float)local_d8._28_4_;
              VVar16.___y_1 = fStack_b4;
              VVar16.___x_0 = (float)local_d8._32_4_;
              __return_storage_ptr__->___Item6_5 = VVar16;
              __return_storage_ptr__->___Item7_6 = iStack_b0;
              pVVar28 = (ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 *)FUN_10e6d276();
              return pVVar28;
            }
            goto LAB_10e6d2ab;
          }
        }
      }
    }
LAB_10e6d1a6:
    VVar35 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    VVar36 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    local_30 = VVar36.___y_1;
    local_60 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)VVar36.___x_0;
    VVar36 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    local_64 = VVar36.___y_1;
    local_50 = CONCAT44(local_50._4_4_,VVar36.___x_0);
    VVar36 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    local_38 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)VVar36.___y_1;
    local_78 = CONCAT44(local_78._4_4_,VVar36.___x_0);
    memset(local_d8,'\0',0x2c);
    VVar5.___y_1 = local_30;
    VVar5.___x_0 = (float)local_60;
    VVar7.___y_1 = local_64;
    VVar7.___x_0 = (float)local_50;
    VVar8.___y_1 = (float)local_38;
    VVar8.___x_0 = (float)local_78;
    ValueTuple_7__ctor_mD5CE06969C2B972980939750A238802189A9820D_gshared
              ((ValueTuple_7_t81AEAE9FA1E433C62715573458C55825FF95E765 *)local_d8,
               (Il2CppObject *)0x0,(Il2CppObject *)0x0,VVar35,VVar5,VVar7,VVar8,-1,
               ValueTuple_7__ctor_mB6BD49B04C9930783235B174E97A2E66AB2E49DC_RuntimeMethod_var);
    __return_storage_ptr__->___Item1_0 =
         (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)local_d8._0_4_;
    __return_storage_ptr__->___Item2_1 =
         (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)local_d8._4_4_;
    (__return_storage_ptr__->___Item3_2).___x_0 = (float)local_d8._8_4_;
    (__return_storage_ptr__->___Item3_2).___y_1 = (float)local_d8._12_4_;
    (__return_storage_ptr__->___Item4_3).___x_0 = (float)local_d8._16_4_;
    (__return_storage_ptr__->___Item4_3).___y_1 = (float)local_d8._20_4_;
    (__return_storage_ptr__->___Item5_4).___x_0 = (float)local_d8._24_4_;
    (__return_storage_ptr__->___Item5_4).___y_1 = (float)local_d8._28_4_;
    VVar17.___y_1 = fStack_b4;
    VVar17.___x_0 = (float)local_d8._32_4_;
    __return_storage_ptr__->___Item6_5 = VVar17;
    __return_storage_ptr__->___Item7_6 = iStack_b0;
    pVVar28 = (ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 *)FUN_10e6d276();
    return pVVar28;
  }
LAB_10e6d2ab:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
