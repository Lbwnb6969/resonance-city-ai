// RVA 0x74b8a0 | Placemaker.Ui.OrbitalCamera$$PanCamera
// PDB: OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
// Body: [[1074b8a0, 1074c6a7]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 103f8b00 WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
// 1040da30 HexMath_HexClamp_m353980FFEA59E5119D6BEC5D1D8C07BFA6CE03DB
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 1065c330 Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24
// 1065c5d0 Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67
// 1065c650 Plane__ctor_m6D48D57827430EC6C89277695BF035DC3FFC1BF1
// 10660540 Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10a37e30 Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a3be80 Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF
// 10a3c0c0 Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
// 10e77fa0 Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
// 10e79e40 Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD

void __cdecl
OrbitalCamera_PanCamera_m3404926FA753D2FB06235BAA04A5047C9007E6EE
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_3,MethodInfo *param_4)

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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar25;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar27;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 RVar28;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 RVar29;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 RVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar31;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar32;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar33;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar34;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar35;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar37;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar38;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar39;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar41;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar42;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar43;
  bool bVar44;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar45;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *pRVar46;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar47;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar48;
  undefined8 *extraout_EAX;
  undefined8 *extraout_EAX_00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_01;
  undefined8 *extraout_EAX_02;
  undefined8 *extraout_EAX_03;
  undefined8 *extraout_EAX_04;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar49;
  undefined8 *extraout_EAX_05;
  undefined8 *extraout_EAX_06;
  undefined8 *extraout_EAX_07;
  undefined8 *extraout_EAX_08;
  undefined8 *extraout_EAX_09;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *extraout_EAX_10;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar50;
  int iVar51;
  int iVar52;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar53;
  float fVar54;
  float fVar55;
  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 local_198;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 local_188;
  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 local_170;
  undefined8 local_160;
  float local_158;
  undefined8 local_154;
  undefined8 local_148;
  undefined8 local_13c;
  undefined1 local_130 [12];
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 local_108;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_f0;
  undefined4 uStack_e4;
  undefined8 local_d4;
  undefined8 local_c8;
  float local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float local_84;
  undefined8 local_80;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_74;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_68;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_40;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_30;
  float local_28;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_20;

  if (DAT_1151ebd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ebd8 = '\x01';
  }
  local_b0 = 0.0;
  local_170.___m_Normal_1.___x_2 = 0.0;
  local_170.___m_Normal_1.___y_3 = 0.0;
  local_170.___m_Normal_1.___z_4 = 0.0;
  local_170.___m_Distance_2 = 0.0;
  local_b4 = 0.0;
  local_198.___m_Normal_1.___x_2 = 0.0;
  local_198.___m_Normal_1.___y_3 = 0.0;
  local_198.___m_Normal_1.___z_4 = 0.0;
  local_198.___m_Distance_2 = 0.0;
  local_ac = 0.0;
  pCVar45 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
  local_30 = param_2;
  local_28 = 0.0;
  if (pCVar45 == (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
LAB_1074c6a3:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  VVar36.___z_4 = 0.0;
  VVar36._0_8_ = param_2;
  pRVar46 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB
                      ((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)local_130,pCVar45,VVar36,
                       (MethodInfo *)0x0);
  local_188.___m_Origin_0.___x_2 = (pRVar46->___m_Origin_0).___x_2;
  local_188.___m_Origin_0.___y_3 = (pRVar46->___m_Origin_0).___y_3;
  local_188.___m_Origin_0.___z_4 = (pRVar46->___m_Origin_0).___z_4;
  local_188.___m_Direction_1.___x_2 = (pRVar46->___m_Direction_1).___x_2;
  local_188.___m_Direction_1.___y_3 = (pRVar46->___m_Direction_1).___y_3;
  local_188.___m_Direction_1.___z_4 = (pRVar46->___m_Direction_1).___z_4;
  local_20.___z_2 = 0.0;
  VVar37.___y_3 = param_3.___y_1 + param_2.___y_1;
  VVar37.___x_2 = param_3.___x_0 + param_2.___x_0;
  VVar37.___z_4 = 0.0;
  pRVar46 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB
                      ((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)local_130,pCVar45,VVar37,
                       (MethodInfo *)0x0);
  local_108.___m_Origin_0.___x_2 = (pRVar46->___m_Origin_0).___x_2;
  local_108.___m_Origin_0.___y_3 = (pRVar46->___m_Origin_0).___y_3;
  local_108.___m_Origin_0.___z_4 = (pRVar46->___m_Origin_0).___z_4;
  local_108.___m_Direction_1.___x_2 = (pRVar46->___m_Direction_1).___x_2;
  local_108.___m_Direction_1.___y_3 = (pRVar46->___m_Direction_1).___y_3;
  local_108.___m_Direction_1.___z_4 = (pRVar46->___m_Direction_1).___z_4;
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pGVar47 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                          ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                           (MethodInfo *)0x0),
     pGVar47 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1074c6a3;
  bVar44 = Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD(pGVar47,(MethodInfo *)0x0);
  if (!bVar44) {
    pVVar48 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,
                         (MethodInfo *)0x0);
    Plane__ctor_m6D48D57827430EC6C89277695BF035DC3FFC1BF1(&local_170,*pVVar48,0.0,(MethodInfo *)0x0)
    ;
    RVar29.___m_Origin_0.___y_3 = local_188.___m_Origin_0.___y_3;
    RVar29.___m_Origin_0.___x_2 = local_188.___m_Origin_0.___x_2;
    RVar29.___m_Origin_0.___z_4 = local_188.___m_Origin_0.___z_4;
    RVar29.___m_Direction_1.___x_2 = local_188.___m_Direction_1.___x_2;
    RVar29.___m_Direction_1.___y_3 = local_188.___m_Direction_1.___y_3;
    RVar29.___m_Direction_1.___z_4 = local_188.___m_Direction_1.___z_4;
    bVar44 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24
                       (&local_170,RVar29,&local_b0,(MethodInfo *)0x0);
    if (!bVar44) {
      return;
    }
    RVar30.___m_Origin_0.___y_3 = local_108.___m_Origin_0.___y_3;
    RVar30.___m_Origin_0.___x_2 = local_108.___m_Origin_0.___x_2;
    RVar30.___m_Origin_0.___z_4 = local_108.___m_Origin_0.___z_4;
    RVar30.___m_Direction_1.___x_2 = local_108.___m_Direction_1.___x_2;
    RVar30.___m_Direction_1.___y_3 = local_108.___m_Direction_1.___y_3;
    RVar30.___m_Direction_1.___z_4 = local_108.___m_Direction_1.___z_4;
    bVar44 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24
                       (&local_170,RVar30,&local_b4,(MethodInfo *)0x0);
    if (!bVar44) {
      return;
    }
    pVVar48 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,&local_188,
                         local_b0,(MethodInfo *)0x0);
    uVar6 = pVVar48->___x_2;
    uVar18 = pVVar48->___y_3;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)uVar6,
               (float)uVar18,pVVar48->___z_4,(MethodInfo *)0x0);
    local_68._0_8_ = *extraout_EAX_07;
    local_68.___z_2 = *(float *)(extraout_EAX_07 + 1);
    local_98 = CONCAT44(local_68.___z_2,(undefined4)local_98);
    local_30 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_68._0_8_;
    pVVar48 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,&local_108,
                         local_b4,(MethodInfo *)0x0);
    uVar7 = pVVar48->___x_2;
    uVar19 = pVVar48->___y_3;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              (&local_f0,(float)uVar7,(float)uVar19,pVVar48->___z_4,(MethodInfo *)0x0);
    local_74._0_8_ = *extraout_EAX_08;
    local_74.___z_2 = *(float *)(extraout_EAX_08 + 1);
    local_40._0_8_ = *extraout_EAX_08;
    local_20.___x_0 = local_74.___x_0;
    local_a8 = CONCAT44(local_68.___y_1 - local_74.___y_1,local_68.___x_0 - local_20.___x_0);
    local_a0 = local_68.___z_2 - local_74.___z_2;
    local_40.___z_2 = local_74.___z_2;
    local_20._0_8_ = local_74._0_8_;
    local_20.___z_2 = local_74.___z_2;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    fVar42.___z_2 = local_a0;
    fVar42.___x_0 = (float)(undefined4)local_a8;
    fVar42.___y_1 = (float)local_a8._4_4_;
    fVar53 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                       (fVar42,(MethodInfo *)0x0);
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    }
    pfVar49 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                        (&local_20,fVar53,(MethodInfo *)0x0);
    uVar8 = pfVar49->___x_0;
    uVar20 = pfVar49->___y_1;
    local_48 = pfVar49->___z_2;
    local_50 = (float)uVar8;
    fStack_4c = (float)uVar20;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,local_30.___x_0,
               local_30.___y_1,local_98._4_4_,(MethodInfo *)0x0);
    local_68._0_8_ = *extraout_EAX_09;
    fVar54 = *(float *)(extraout_EAX_09 + 1);
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)local_a8,
               (float)((ulonglong)local_a8 >> 0x20),local_a0,(MethodInfo *)0x0);
    local_30 = *extraout_EAX_10;
    fVar55 = extraout_EAX_10[1].___x_0;
    pCVar50 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
                        ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(local_130 + 8),
                         (MethodInfo *)0x0);
    local_130._8_4_ = pCVar50->___r_0;
    fStack_124 = pCVar50->___g_1;
    fStack_120 = pCVar50->___b_2;
    fStack_11c = pCVar50->___a_3;
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    VVar25.___z_4 = fVar54;
    VVar25.___x_2 = local_68.___x_0;
    VVar25.___y_3 = local_68.___y_1;
    VVar27.___z_4 = fVar55;
    VVar27.___x_2 = local_30.___x_0;
    VVar27.___y_3 = local_30.___y_1;
    CVar35.___g_1 = fStack_124;
    CVar35.___r_0 = (float)local_130._8_4_;
    CVar35.___b_2 = fStack_120;
    CVar35.___a_3 = fStack_11c;
    Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60
              (VVar25,VVar27,CVar35,1.0,(MethodInfo *)0x0);
    uVar9 = (param_1->___boundsTarget_21).___c0_0.___x_0;
    uVar21 = (param_1->___boundsTarget_21).___c0_0.___y_1;
    fVar54 = (param_1->___boundsTarget_21).___c0_0.___z_2;
    (param_1->___boundsTarget_21).___c0_0.___x_0 = (float)uVar9 + local_50;
    (param_1->___boundsTarget_21).___c0_0.___y_1 = (float)uVar21 + fStack_4c;
    (param_1->___boundsTarget_21).___c0_0.___z_2 = fVar54 + local_48;
    uVar10 = (param_1->___boundsTarget_21).___c1_1.___x_0;
    uVar22 = (param_1->___boundsTarget_21).___c1_1.___y_1;
    fVar54 = (param_1->___boundsTarget_21).___c1_1.___z_2;
    (param_1->___boundsTarget_21).___c1_1.___x_0 = (float)uVar10 + local_50;
    (param_1->___boundsTarget_21).___c1_1.___y_1 = (float)uVar22 + fStack_4c;
    (param_1->___boundsTarget_21).___c1_1.___z_2 = fVar54 + local_48;
    uVar11 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
    uVar23 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
    fVar54 = (param_1->___boundsCurrent_20).___c0_0.___z_2;
    (param_1->___boundsCurrent_20).___c0_0.___x_0 = (float)uVar11 + local_50;
    (param_1->___boundsCurrent_20).___c0_0.___y_1 = (float)uVar23 + fStack_4c;
    (param_1->___boundsCurrent_20).___c0_0.___z_2 = fVar54 + local_48;
    local_40.___x_0 = (param_1->___boundsCurrent_20).___c1_1.___x_0;
    local_40.___y_1 = (param_1->___boundsCurrent_20).___c1_1.___y_1;
    local_74.___z_2 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
    local_74.___x_0 = (param_1->___boundsCurrent_20).___c1_1.___x_0;
    local_74.___y_1 = (param_1->___boundsCurrent_20).___c1_1.___y_1;
    (param_1->___boundsCurrent_20).___c1_1.___x_0 = local_40.___x_0 + local_50;
    (param_1->___boundsCurrent_20).___c1_1.___y_1 = local_40.___y_1 + fStack_4c;
    (param_1->___boundsCurrent_20).___c1_1.___z_2 = local_74.___z_2 + local_48;
    local_20._0_8_ = local_40._0_8_;
    iVar51 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                       (((param_1->___boundsTarget_21).___c1_1.___x_0 +
                        (param_1->___boundsTarget_21).___c0_0.___x_0) * __real_3f000000,
                        (MethodInfo *)0x0);
    iVar52 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                       (((param_1->___boundsTarget_21).___c1_1.___y_1 +
                        (param_1->___boundsTarget_21).___c0_0.___y_1) * __real_3f000000,
                        (MethodInfo *)0x0);
    local_80 = CONCAT44(iVar52,(undefined4)local_80);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pGVar47 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                            ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4
                             ,(MethodInfo *)0x0),
       pGVar47 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
      if (iVar51 == (pGVar47->___bounds_28).___c0_0.___x_0) {
        if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pGVar47 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                                ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)
                                 param_1->___master_4,(MethodInfo *)0x0),
           pGVar47 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1074c6a3;
        if (local_80._4_4_ == (float)(pGVar47->___bounds_28).___c0_0.___y_1) {
          return;
        }
      }
      else {
      }
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar24 = param_1->___master_4->___worldMaster_5,
          pWVar24 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         (pGVar47 = pWVar24->___graph_7,
         pGVar47 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
        iVar43.___y_1 = (int)local_80._4_4_;
        iVar43.___x_0 = iVar51;
        Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
                  (pGVar47,iVar43,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pWVar24 = param_1->___master_4->___worldMaster_5,
           pWVar24 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
          WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
                    (pWVar24,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto LAB_1074c6a3;
  }
  if (param_1->___heightCurrent_22 == 0.0) {
    return;
  }
  pVVar48 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,&local_188,
                       param_1->___currentDist_28,(MethodInfo *)0x0);
  uVar1 = pVVar48->___x_2;
  uVar12 = pVVar48->___y_3;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)uVar1,
             (float)uVar12,pVVar48->___z_4,(MethodInfo *)0x0);
  local_68._0_8_ = *extraout_EAX;
  local_68.___z_2 = *(float *)(extraout_EAX + 1);
  pVVar48 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,&local_108,
                       param_1->___currentDist_28,(MethodInfo *)0x0);
  uVar2 = pVVar48->___x_2;
  uVar13 = pVVar48->___y_3;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)uVar2,
             (float)uVar13,pVVar48->___z_4,(MethodInfo *)0x0);
  local_d4 = *extraout_EAX_00;
  local_90 = *extraout_EAX_00;
  local_c8._4_4_ = (float)((ulonglong)local_90 >> 0x20);
  local_54 = local_68.___y_1 - local_c8._4_4_;
  local_c0 = *(float *)(extraout_EAX_00 + 1);
  local_98 = CONCAT44(local_c0,(undefined4)local_98);
  local_48 = local_54 / param_1->___heightCurrent_22;
  local_c8 = local_90;
  local_a8 = local_d4;
  local_88 = local_c0;
  local_30 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_d4;
  local_28 = local_c0;
  fVar54 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                     (param_1->___panHeightCurrent_14 + local_48,(MethodInfo *)0x0);
  fVar54 = fVar54 - param_1->___panHeightCurrent_14;
  param_1->___panHeightCurrent_14 = param_1->___panHeightCurrent_14 + fVar54;
  local_84 = (local_68.___x_0 - (float)local_d4) + local_30.___x_0;
  local_54 = (__real_3f800000 - fVar54 / local_48) * local_54 + local_30.___y_1;
  local_c0 = (local_68.___z_2 - local_88) + local_28;
  local_80 = CONCAT44(local_c0,(undefined4)local_80);
  pVVar48 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,
                       (MethodInfo *)0x0);
  uVar3 = pVVar48->___x_2;
  uVar14 = pVVar48->___y_3;
  fVar54 = pVVar48->___z_4;
  local_130._0_4_ = local_84;
  local_130._4_4_ = local_54;
  local_130._8_4_ = 0.0;
  fStack_124 = 0.0;
  local_50 = (float)uVar3;
  fStack_4c = (float)uVar14;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,local_84,local_54,
             local_c0,(MethodInfo *)0x0);
  VVar31.___y_3 = fStack_4c;
  VVar31.___x_2 = local_50;
  VVar31.___z_4 = fVar54;
  Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67
            (&local_198,VVar31,*extraout_EAX_01,(MethodInfo *)0x0);
  RVar28.___m_Origin_0.___y_3 = local_108.___m_Origin_0.___y_3;
  RVar28.___m_Origin_0.___x_2 = local_108.___m_Origin_0.___x_2;
  RVar28.___m_Origin_0.___z_4 = local_108.___m_Origin_0.___z_4;
  RVar28.___m_Direction_1.___x_2 = local_108.___m_Direction_1.___x_2;
  RVar28.___m_Direction_1.___y_3 = local_108.___m_Direction_1.___y_3;
  RVar28.___m_Direction_1.___z_4 = local_108.___m_Direction_1.___z_4;
  bVar44 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24
                     (&local_198,RVar28,&local_ac,(MethodInfo *)0x0);
  if (bVar44) {
    pVVar48 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,&local_108,
                         local_ac,(MethodInfo *)0x0);
    uVar4 = pVVar48->___x_2;
    uVar15 = pVVar48->___y_3;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)uVar4,
               (float)uVar15,pVVar48->___z_4,(MethodInfo *)0x0);
    local_a8 = *extraout_EAX_02;
    fVar54 = *(float *)(extraout_EAX_02 + 1);
    local_30 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_a8;
    local_28 = fVar54;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)local_130._0_4_
               ,(float)local_130._4_4_,local_c0,(MethodInfo *)0x0);
    local_68._0_8_ = *extraout_EAX_03;
    local_48 = *(float *)(extraout_EAX_03 + 1);
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)local_a8,
               (float)((ulonglong)local_a8 >> 0x20),fVar54,(MethodInfo *)0x0);
    local_98 = *extraout_EAX_04;
    local_54 = *(float *)(extraout_EAX_04 + 1);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    VVar32.___z_4 = local_48;
    VVar32.___x_2 = local_68.___x_0;
    VVar32.___y_3 = local_68.___y_1;
    VVar38.___z_4 = local_54;
    VVar38.___x_2 = (float)(undefined4)local_98;
    VVar38.___y_3 = local_98._4_4_;
    Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF(VVar32,VVar38,(MethodInfo *)0x0);
  }
  else {
    fVar54 = local_98._4_4_;
  }
  local_84 = local_84 - local_30.___x_0;
  local_54 = (param_1->___boundsCurrent_20).___c0_0.___z_2;
  local_88 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
  local_98 = CONCAT44(local_88,(undefined4)local_98);
  local_80 = CONCAT44(local_80._4_4_ - local_28,(undefined4)local_80);
  local_74.___x_0 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  local_74.___y_1 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  local_68.___x_0 = (param_1->___boundsCurrent_20).___c1_1.___x_0;
  local_68.___y_1 = (param_1->___boundsCurrent_20).___c1_1.___y_1;
  local_30 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_74._0_8_;
  local_20._0_8_ = local_68._0_8_;
  if ((param_1->___boundsCurrent_20).___c0_0.___x_0 == local_68.___x_0) {
    uVar16 = (param_1->___boundsCurrent_20).___c1_1.___y_1;
    local_88 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
    if ((param_1->___boundsCurrent_20).___c0_0.___y_1 == (float)uVar16) {
      local_90._0_4_ = (param_1->___boundsCurrent_20).___c1_1.___x_0;
      local_90._4_4_ = (param_1->___boundsCurrent_20).___c1_1.___y_1;
      local_88 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
      if ((param_1->___boundsCurrent_20).___c0_0.___z_2 == local_88) goto LAB_1074c0b9;
    }
  }
  uVar5 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  uVar17 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  local_90._0_4_ = (param_1->___boundsCurrent_20).___c1_1.___x_0;
  local_90._4_4_ = (param_1->___boundsCurrent_20).___c1_1.___y_1;
  local_48 = (param_1->___boundsCurrent_20).___c0_0.___z_2;
  local_d4._0_4_ = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  local_d4._4_4_ = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  local_13c._0_4_ = (param_1->___boundsCurrent_20).___c1_1.___x_0;
  local_13c._4_4_ = (param_1->___boundsCurrent_20).___c1_1.___y_1;
  local_148._0_4_ = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  local_148._4_4_ = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  local_160._0_4_ = (param_1->___boundsCurrent_20).___c1_1.___x_0;
  local_160._4_4_ = (param_1->___boundsCurrent_20).___c1_1.___y_1;
  local_158 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
  local_154._0_4_ = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  local_154._4_4_ = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  local_f0.___x_2 =
       ((float)(undefined4)local_90 - (float)local_d4) * param_1->___panHexCurrentX_12 +
       (float)uVar5;
  local_40.___x_0 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  local_40.___y_1 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  local_f0.___y_3 =
       ((float)local_13c._4_4_ - (float)local_148._4_4_) * param_1->___panHexCurrentY_13 +
       (float)local_154._4_4_;
  local_40.___z_2 =
       (float)((uint)local_f0.___x_2 ^ __xmm_80000000800000008000000080000000) - local_f0.___y_3;
  local_f0.___z_4 = 0.0;
  uStack_e4 = 0;
  fVar55 = local_f0.___y_3;
  local_50 = (float)uVar5;
  fStack_4c = (float)uVar17;
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    fVar55 = local_f0.___y_3;
  }
  fVar39.___y_1 = fVar55;
  fVar39.___x_0 = local_f0.___x_2;
  fVar39.___z_2 = local_40.___z_2;
  fVar53 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                     (fVar39,(MethodInfo *)0x0);
  local_48 = local_80._4_4_ + local_48;
  fStack_4c = fVar53.___x_0;
  fStack_4c = local_84 + fStack_4c;
  fVar53.___y_1 = local_48;
  fVar53.___x_0 = fStack_4c;
  pfVar49 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                      (&local_40,fVar53,(MethodInfo *)0x0);
  local_80._0_4_ = pfVar49->___x_0;
  local_80._4_4_ = pfVar49->___y_1;
  local_48 = pfVar49->___z_2;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar26.___z_2 = local_48;
  fVar26.___x_0 = (float)(undefined4)local_80;
  fVar26.___y_1 = local_80._4_4_;
  fVar33.___z_2 = local_54;
  fVar33.___x_0 = local_30.___x_0;
  fVar33.___y_1 = local_30.___y_1;
  fVar40.___z_2 = local_98._4_4_;
  fVar40.___x_0 = local_68.___x_0;
  fVar40.___y_1 = local_68.___y_1;
  pfVar49 = HexMath_HexClamp_m353980FFEA59E5119D6BEC5D1D8C07BFA6CE03DB
                      (&local_40,fVar26,fVar33,fVar40,(MethodInfo *)0x0);
  local_30.___x_0 = pfVar49->___x_0;
  local_30.___y_1 = pfVar49->___y_1;
  if ((local_74.___x_0 != local_20.___x_0) &&
     ((param_1->___boundsTarget_21).___c0_0.___x_0 != (param_1->___boundsTarget_21).___c1_1.___x_0))
  {
    fVar55 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (local_74.___x_0,local_20.___x_0,local_30.___x_0,(MethodInfo *)0x0);
    param_1->___panHexCurrentX_12 = fVar55;
  }
  if ((local_74.___y_1 != local_20.___y_1) &&
     ((param_1->___boundsTarget_21).___c0_0.___y_1 != (param_1->___boundsTarget_21).___c1_1.___y_1))
  {
    fVar55 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (local_74.___y_1,local_20.___y_1,local_30.___y_1,(MethodInfo *)0x0);
    param_1->___panHexCurrentY_13 = fVar55;
  }
LAB_1074c0b9:
  param_1->___panHexTargetX_15 = param_1->___panHexCurrentX_12;
  param_1->___panHexTargetY_16 = param_1->___panHexCurrentY_13;
  param_1->___panHeightTarget_17 = param_1->___panHeightCurrent_14;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)local_130._0_4_,
             (float)local_130._4_4_,local_c0,(MethodInfo *)0x0);
  local_68._0_8_ = *extraout_EAX_05;
  fVar55 = *(float *)(extraout_EAX_05 + 1);
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)local_a8,
             (float)((ulonglong)local_a8 >> 0x20),fVar54,(MethodInfo *)0x0);
  local_30 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)*extraout_EAX_06;
  fVar54 = *(float *)(extraout_EAX_06 + 1);
  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
  }
  VVar34.___z_4 = fVar55;
  VVar34.___x_2 = local_68.___x_0;
  VVar34.___y_3 = local_68.___y_1;
  VVar41.___z_4 = fVar54;
  VVar41.___x_2 = local_30.___x_0;
  VVar41.___y_3 = local_30.___y_1;
  Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF(VVar34,VVar41,(MethodInfo *)0x0);
  return;
}
