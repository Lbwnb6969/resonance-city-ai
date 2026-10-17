// RVA 0x749a50 | Placemaker.Ui.OrbitalCamera$$LateUpdate
// PDB: OrbitalCamera_LateUpdate_mCF37396A3E4AC2F9F385AA61ECBD945616CCDAE0
// Body: [[10749a50, 1074ae3c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10195ff0 _CIfmod
// 10196010 _libm_sse2_sqrt_precise
// 10196230 _libm_sse2_exp_precise
// 10197a90 _libm_sse2_asin_precise
// 10197fe0 _libm_sse2_tan_precise
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 1040ddd0 HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10660030 Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
// 10662c90 Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10836d30 ExtraMath_Pow2_m01BC9BF14976CD4E7BDC4C39639490264804087F
// 1083e0e0 GameViewRect_GetRelativeRect_mEA9B8EFD3CC4C906F89BE22E75793674DA8463F9
// 10a387e0 Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41
// 10a38820 Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43e60 Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10c10fb0 Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// 10e79e40 Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
OrbitalCamera_LateUpdate_mCF37396A3E4AC2F9F385AA61ECBD945616CCDAE0
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,MethodInfo *param_2)

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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar14;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar24;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar25;
  GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *pGVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar29;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar30;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar31;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar32;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar33;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar35;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar37;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar38;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar39;
  char cVar40;
  bool bVar41;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar42;
  undefined8 *extraout_EAX;
  undefined8 *extraout_EAX_00;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_01;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar43;
  undefined8 *extraout_EAX_02;
  int iVar44;
  int iVar45;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar46;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar47;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar48;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar49;
  float10 extraout_ST0;
  float fVar50;
  double dVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar57;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar58;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float local_e8;
  float fStack_e4;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_c8;
  float fStack_c4;
  float fStack_a8;
  float local_a0;
  float local_94;
  float fStack_90;
  float local_88;
  float fStack_84;
  float local_7c;
  float fStack_78;
  float local_70;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_60;
  undefined8 local_50;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [8];
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_20;

  if (DAT_1151ebd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ebd3 = '\x01';
  }
  local_30 = 0.0;
  fStack_2c = 0.0;
  uStack_28 = 0;
  uStack_24 = 0;
  cVar40 = param_1->___snap_26;
  if ((bool)cVar40 == false) {
    fVar53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
    if (`float___cdecl_math_exp_m73F09480463BE26326F55F0D181CCE8F7EF97668_inline(float,MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
      `float___cdecl_math_exp_m73F09480463BE26326F55F0D181CCE8F7EF97668_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    fVar53 = (float)((uint)fVar53 ^ __xmm_80000000800000008000000080000000) * __real_41200000;
    if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    }
    dVar51 = (double)fVar53;
    _libm_sse2_exp_precise();
    cVar40 = param_1->___snap_26;
    fVar53 = (float)dVar51;
  }
  else {
    fVar53 = 0.0;
  }
  fVar60 = local_30;
  if (cVar40 == '\0') {
    fVar60 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
    if (`float___cdecl_math_exp_m73F09480463BE26326F55F0D181CCE8F7EF97668_inline(float,MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
      `float___cdecl_math_exp_m73F09480463BE26326F55F0D181CCE8F7EF97668_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    fVar60 = (float)((uint)fVar60 ^ __xmm_80000000800000008000000080000000) * ___real_41a00000;
    if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    }
    dVar51 = (double)fVar60;
    _libm_sse2_exp_precise();
    fVar60 = (float)dVar51;
  }
  param_1->___heightCurrent_22 =
       (param_1->___heightCurrent_22 - param_1->___heightTarget_23) * fVar53 +
       param_1->___heightTarget_23;
  uVar1 = (param_1->___boundsTarget_21).___c0_0.___x_0;
  uVar2 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  uVar3 = (param_1->___boundsTarget_21).___c0_0.___x_0;
  uVar15 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  uVar16 = (param_1->___boundsTarget_21).___c0_0.___y_1;
  fVar61 = (param_1->___boundsCurrent_20).___c0_0.___z_2;
  fVar62 = (param_1->___boundsTarget_21).___c0_0.___z_2;
  local_40._4_4_ = (param_1->___boundsTarget_21).___c0_0.___y_1;
  (param_1->___boundsCurrent_20).___c0_0.___x_0 =
       ((float)uVar2 - (float)uVar3) * fVar53 + (float)uVar1;
  (param_1->___boundsCurrent_20).___c0_0.___y_1 =
       ((float)uVar15 - (float)uVar16) * fVar53 + (float)local_40._4_4_;
  (param_1->___boundsCurrent_20).___c0_0.___z_2 = (fVar61 - fVar62) * fVar53 + fVar62;
  uVar4 = (param_1->___boundsTarget_21).___c1_1.___x_0;
  uVar5 = (param_1->___boundsCurrent_20).___c1_1.___x_0;
  uVar6 = (param_1->___boundsTarget_21).___c1_1.___x_0;
  fVar29 = (param_1->___boundsCurrent_20).___c1_1;
  local_50._0_4_ = (param_1->___boundsTarget_21).___c1_1.___x_0;
  local_50._4_4_ = (param_1->___boundsTarget_21).___c1_1.___y_1;
  local_40._0_4_ = fVar29.___x_0;
  local_40._4_4_ = fVar29.___y_1;
  fStack_38 = fVar29.___z_2;
  auVar52 = _local_40;
  fStack_48 = (param_1->___boundsTarget_21).___c1_1.___z_2;
  fVar61 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
  uVar17 = (param_1->___boundsTarget_21).___c1_1.___y_1;
  local_40._4_4_ = fVar29.___y_1;
  fVar62 = (param_1->___boundsTarget_21).___c1_1.___z_2;
  (param_1->___boundsCurrent_20).___c1_1.___x_0 =
       ((float)uVar5 - (float)uVar6) * fVar53 + (float)uVar4;
  (param_1->___boundsCurrent_20).___c1_1.___y_1 =
       ((float)local_40._4_4_ - (float)local_50._4_4_) * fVar53 + (float)uVar17;
  (param_1->___boundsCurrent_20).___c1_1.___z_2 = (fVar61 - fVar62) * fVar53 + fVar62;
  param_1->___panHexCurrentX_12 =
       (param_1->___panHexCurrentX_12 - param_1->___panHexTargetX_15) * fVar53 +
       param_1->___panHexTargetX_15;
  param_1->___panHexCurrentY_13 =
       (param_1->___panHexCurrentY_13 - param_1->___panHexTargetY_16) * fVar53 +
       param_1->___panHexTargetY_16;
  param_1->___panHeightCurrent_14 =
       (param_1->___panHeightCurrent_14 - param_1->___panHeightTarget_17) * fVar53 +
       param_1->___panHeightTarget_17;
  param_1->___zoomCurrent_9 =
       (param_1->___zoomCurrent_9 - param_1->___zoomTarget_8) * fVar60 + param_1->___zoomTarget_8;
  _local_40 = auVar52;
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pGVar42 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                          ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                           (MethodInfo *)0x0),
     pGVar42 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    bVar41 = Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD
                       (pGVar42,(MethodInfo *)0x0);
    param_1->___anyVoxelsCurrent_24 =
         (param_1->___anyVoxelsCurrent_24 - (float)bVar41) * fVar53 + (float)bVar41;
    if ((param_1->___rotationSpeedY_19 != local_30) || (param_1->___rotationSpeedX_18 != local_30))
    {
      if (param_1->___snap_26 == false) {
        fVar53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
        if (`float___cdecl_math_exp_m73F09480463BE26326F55F0D181CCE8F7EF97668_inline(float,MethodInfo_const*)'
            ::__l2::s_Il2CppMethodInitialized == false) {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
          `float___cdecl_math_exp_m73F09480463BE26326F55F0D181CCE8F7EF97668_inline(float,MethodInfo_const*)'
          ::__l2::s_Il2CppMethodInitialized = true;
        }
        fVar53 = (float)((uint)fVar53 ^ __xmm_80000000800000008000000080000000) * __real_40800000;
        if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished ==
               0)) {
          il2cpp_runtime_class_init
                    (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
        }
        dVar51 = (double)fVar53;
        _libm_sse2_exp_precise();
        local_dc = (float)dVar51;
      }
      else {
        local_dc = 0.0;
      }
      fVar53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
      local_dc = local_dc - fVar53 * __real_3ecccccd;
      fVar53 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                         (0.0,param_1->___rotationSpeedY_19,local_dc,(MethodInfo *)0x0);
      param_1->___rotationSpeedY_19 = fVar53;
      Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
      _CIfmod();
      param_1->___rotationY_10 = (float)extraout_ST0;
      fVar60 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                         (0.0,param_1->___rotationSpeedX_18,local_dc,(MethodInfo *)0x0);
      fVar53 = param_1->___rotationX_11;
      param_1->___rotationSpeedX_18 = fVar60;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      fVar61 = ExtraMath_Pow2_m01BC9BF14976CD4E7BDC4C39639490264804087F
                         ((fVar53 + fVar53) - __real_3f800000,(MethodInfo *)0x0);
      fVar53 = param_1->___rotationX_11;
      fVar60 = param_1->___rotationSpeedX_18;
      fVar62 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
      fVar53 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                         (fVar62 * fVar60 * (__real_3f800000 - fVar61) + fVar53,(MethodInfo *)0x0);
      param_1->___rotationX_11 = fVar53;
    }
    uVar27 = param_1->___panHexCurrentX_12;
    uVar28 = param_1->___panHexCurrentY_13;
    fVar53 = (param_1->___boundsCurrent_20).___c0_0.___z_2;
    uVar7 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
    uVar18 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_60,(float)uVar27,
               (float)uVar28,0.0,(MethodInfo *)0x0);
    fStack_38 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
    uVar8 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
    uVar14._0_4_ = (param_1->___boundsCurrent_20).___c1_1.___x_0;
    uVar14._4_4_ = (param_1->___boundsCurrent_20).___c1_1.___y_1;
    local_40 = (undefined1  [8])uVar14;
    local_50._0_4_ = (param_1->___boundsCurrent_20).___c0_0.___x_0;
    local_50._4_4_ = (param_1->___boundsCurrent_20).___c0_0.___y_1;
    local_70 = (float)*extraout_EAX;
    fStack_48 = (param_1->___boundsCurrent_20).___c0_0.___z_2;
    fStack_e4 = (float)((ulonglong)*extraout_EAX >> 0x20);
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_60,
               ((float)(undefined4)uVar14 - (float)uVar8) * local_70 + (float)uVar7,
               ((float)uVar14._4_4_ - (float)local_50._4_4_) * fStack_e4 + (float)uVar18,
               ((param_1->___boundsCurrent_20).___c1_1.___z_2 - fStack_48) *
               *(float *)(extraout_EAX + 1) + fVar53,(MethodInfo *)0x0);
    local_7c = (float)*extraout_EAX_00;
    fStack_d4 = (float)((ulonglong)*extraout_EAX_00 >> 0x20);
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_60,local_7c,fStack_d4,
               (float)((uint)local_7c ^ __xmm_80000000800000008000000080000000) - fStack_d4,
               (MethodInfo *)0x0);
    fVar29 = *extraout_EAX_01;
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    }
    fVar57 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                       (fVar29,(MethodInfo *)0x0);
    fVar53 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                       (0.0,param_1->___heightCurrent_22,param_1->___panHeightCurrent_14,
                        (MethodInfo *)0x0);
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    pfVar43 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                        ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_60,fVar57,fVar53
                         ,(MethodInfo *)0x0);
    uVar9 = pfVar43->___x_0;
    uVar19 = pfVar43->___y_1;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_60,(float)uVar9,
               (float)uVar19,pfVar43->___z_2,(MethodInfo *)0x0);
    uVar14 = *extraout_EAX_02;
    fVar60 = *(float *)(extraout_EAX_02 + 1);
    uVar10 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
    uVar20 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
    fVar61 = (float)uVar20 * __real_3df925fe;
    fVar62 = (param_1->___boundsCurrent_20).___c0_0.___z_2 * __real_3df925fe;
    uVar11 = (param_1->___boundsCurrent_20).___c1_1.___x_0;
    uVar21 = (param_1->___boundsCurrent_20).___c1_1.___y_1;
    local_60.___m_XMin_0 = (float)uVar11 * __real_3df925fe;
    fVar54 = (float)uVar10 * __real_3df925fe;
    fVar56 = (float)uVar21 * __real_3df925fe;
    fVar55 = (param_1->___boundsCurrent_20).___c1_1.___z_2 * __real_3df925fe;
    local_60.___m_YMin_1 = 0.0;
    local_60.___m_Width_2 = 0.0;
    local_60.___m_Height_3 = 0.0;
    fVar53 = param_1->___minRadius_25;
    if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    }
    fVar29.___y_1 = fVar56;
    fVar29.___x_0 = fVar54;
    fVar29.___z_2 = fVar55;
    fVar57 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar29,(MethodInfo *)0x0);
    fVar30.___y_1 = fVar61;
    fVar30.___x_0 = local_60.___m_XMin_0;
    fVar30.___z_2 = fVar62;
    fVar58 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar30,(MethodInfo *)0x0);
    local_88 = fVar57.___x_0;
    fStack_84 = fVar57.___y_1;
    fStack_c4 = fVar58.___y_1;
    if (`float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
      `float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    }
    dVar51 = (double)((fStack_84 - fStack_c4) * (fStack_84 - fStack_c4) +
                     (local_88 - fVar54) * (local_88 - fVar54));
    _libm_sse2_sqrt_precise();
    fVar50 = (float)dVar51 * __real_3f000000;
    bVar41 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(fVar50,(MethodInfo *)0x0);
    if ((bVar41) || (fVar50 < fVar53)) {
      fVar50 = fVar53;
    }
    fVar31.___y_1 = fVar61;
    fVar31.___x_0 = local_60.___m_XMin_0;
    fVar31.___z_2 = fVar55;
    fVar57 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar31,(MethodInfo *)0x0);
    fVar32.___y_1 = fVar56;
    fVar32.___x_0 = fVar54;
    fVar32.___z_2 = fVar62;
    fVar58 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar32,(MethodInfo *)0x0);
    local_c8 = fVar57.___x_0;
    fStack_c4 = fVar57.___y_1;
    fStack_a8 = fVar58.___y_1;
    if (`float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
      `float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    }
    dVar51 = (double)((local_c8 - fVar53) * (local_c8 - fVar53) +
                     (fStack_c4 - fStack_a8) * (fStack_c4 - fStack_a8));
    _libm_sse2_sqrt_precise();
    fVar53 = (float)dVar51 * __real_3f000000;
    bVar41 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(fVar53,(MethodInfo *)0x0);
    if ((bVar41) || (fVar53 < fVar50)) {
      fVar53 = fVar50;
    }
    fVar33.___y_1 = fVar56;
    fVar33.___x_0 = local_60.___m_XMin_0;
    fVar33.___z_2 = fVar62;
    fVar57 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar33,(MethodInfo *)0x0);
    fVar34.___y_1 = fVar61;
    fVar34.___x_0 = fVar54;
    fVar34.___z_2 = fVar55;
    fVar58 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar34,(MethodInfo *)0x0);
    local_c8 = fVar57.___x_0;
    fStack_c4 = fVar57.___y_1;
    fStack_e4 = fVar58.___y_1;
    if (`float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
      `float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    }
    dVar51 = (double)((local_c8 - fVar55) * (local_c8 - fVar55) +
                     (fStack_c4 - fStack_e4) * (fStack_c4 - fStack_e4));
    _libm_sse2_sqrt_precise();
    local_dc = (float)dVar51 * __real_3f000000;
    bVar41 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(local_dc,(MethodInfo *)0x0);
    if ((bVar41) || (local_dc < fVar53)) {
      local_dc = fVar53;
    }
    fVar53 = param_1->___heightCurrent_22 * __real_3f000000;
    if (`float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized == false) {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
      `float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized = true;
    }
    if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    }
    dVar51 = (double)(fVar53 * fVar53 + local_dc * local_dc);
    _libm_sse2_sqrt_precise();
    iVar44 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
    iVar45 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    fVar53 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                       (local_dc * ((float)iVar44 / (float)iVar45),local_dc,(MethodInfo *)0x0);
    fVar53 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                       (fVar53,(float)dVar51,(MethodInfo *)0x0);
    fVar61 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                       (35.0,16.0,param_1->___zoomCurrent_9,(MethodInfo *)0x0);
    fVar53 = fVar53 * ___real_3fd9999a;
    param_1->___distMin_31 = 2.0;
    param_1->___distMax_32 = fVar53;
    fVar53 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(fVar53,4.0,(MethodInfo *)0x0);
    param_1->___distMax_32 = fVar53;
    fVar62 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                       (1.4,1.0,param_1->___anyVoxelsCurrent_24,(MethodInfo *)0x0);
    param_1->___distMax_32 = fVar62 * fVar53;
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pDVar24 = param_1->___master_4->___dim_10,
        pDVar24 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) &&
       (pUVar25 = pDVar24->___alphaState_5,
       pUVar25 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
      fVar62 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                         (1.0,1.03,pUVar25->____current_0,(MethodInfo *)0x0);
      fVar53 = param_1->___distMax_32 * fVar62;
      fVar62 = param_1->___distMin_31 * fVar62;
      param_1->___distMax_32 = fVar53;
      param_1->___distMin_31 = fVar62;
      fVar53 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                         (fVar62,fVar53,param_1->___zoomCurrent_9,(MethodInfo *)0x0);
      param_1->___nonDollyDist_29 = fVar53;
      auVar52._0_8_ = (double)(fVar61 * __real_3c8efa35);
      auVar52._8_8_ = 0;
      _libm_sse2_tan_precise();
      register0x00001204 = auVar52._4_12_;
      local_40._0_4_ = (undefined4)auVar52._0_8_;
      fVar53 = (__real_40000000 / (float)local_40._0_4_) * fVar53;
      fStack_78 = (float)((ulonglong)uVar14 >> 0x20);
      param_1->___currentDist_28 = fVar53;
      fVar53 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                         (fStack_78 / (float)((uint)fVar53 ^ __xmm_80000000800000008000000080000000)
                          ,-0.95,(MethodInfo *)0x0);
      dVar51 = (double)fVar53;
      _libm_sse2_asin_precise();
      fVar62 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                         ((float)dVar51 * __real_42652ee1,88.0,param_1->___rotationX_11,
                          (MethodInfo *)0x0);
      pQVar46 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)&local_60,fVar62,
                           param_1->___rotationY_10 * __real_43b40000,0.0,(MethodInfo *)0x0);
      QVar39 = *pQVar46;
      QVar38 = *pQVar46;
      VVar35.___y_3 = local_30;
      VVar35.___x_2 = local_30;
      VVar35.___z_4 =
           (float)((uint)param_1->___currentDist_28 ^ __xmm_80000000800000008000000080000000);
      pVVar47 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_60,*pQVar46,
                           VVar35,(MethodInfo *)0x0);
      uVar12 = pVVar47->___x_2;
      uVar22 = pVVar47->___y_3;
      fStack_78 = (float)uVar22 + fStack_78;
      local_7c = (float)uVar14;
      local_30 = (float)uVar12 + local_7c;
      fVar60 = pVVar47->___z_4 + fVar60;
      local_50 = (ulonglong)(uint)local_30;
      fStack_48 = 0.0;
      uStack_44 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      fStack_2c = fStack_78;
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pGVar26 = param_1->___master_4->___gameViewRect_11,
         pGVar26 != (GameViewRect_t46BA7BAF98A4C179A873F7F4EC271EAEBF06B045 *)0x0)) {
        pRVar48 = GameViewRect_GetRelativeRect_mEA9B8EFD3CC4C906F89BE22E75793674DA8463F9
                            (&local_60,pGVar26,(MethodInfo *)0x0);
        local_20.___m_XMin_0 = pRVar48->___m_XMin_0;
        local_20.___m_YMin_1 = pRVar48->___m_YMin_1;
        local_20.___m_Width_2 = pRVar48->___m_Width_2;
        local_20.___m_Height_3 = pRVar48->___m_Height_3;
        VVar59 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707
                           (&local_20,(MethodInfo *)0x0);
        local_c8 = SUB84((double)fVar53,0);
        local_c8 = local_c8 - __real_3f000000;
        fStack_c4 = VVar59.___y_1;
        fStack_c4 = fStack_c4 - __real_3f000000;
        if (__real_2edbe6fe <= fStack_c4 * fStack_c4 + local_c8 * local_c8) {
          VVar36.___y_3 = fStack_c4;
          VVar36.___x_2 =
               (((float)local_40._0_4_ * param_1->___currentDist_28 * __real_3f000000) /
               ((float)iVar44 / (float)iVar45)) * local_c8;
          VVar36.___z_4 = 0.0;
          pVVar47 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_60,QVar38
                               ,VVar36,(MethodInfo *)0x0);
          uVar13 = pVVar47->___x_2;
          uVar23 = pVVar47->___y_3;
          fStack_2c = fStack_78 - (float)uVar23;
          fVar60 = fVar60 - pVVar47->___z_4;
          local_30 = (float)local_50 - (float)uVar13;
        }
        if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_5 !=
             (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
           (pTVar49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___cam_5,(MethodInfo *)0x0),
           pTVar49 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          VVar37.___y_3 = fStack_2c;
          VVar37.___x_2 = local_30;
          VVar37.___z_4 = fVar60;
          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                    (pTVar49,VVar37,(MethodInfo *)0x0);
          if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_5 !=
               (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
             (pTVar49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   param_1->___cam_5,(MethodInfo *)0x0),
             pTVar49 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
            Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                      (pTVar49,QVar39,(MethodInfo *)0x0);
            if (param_1->___cam_5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
              Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49
                        (param_1->___cam_5,fVar61,(MethodInfo *)0x0);
              if (param_1->___cam_5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41
                          (param_1->___cam_5,param_1->___currentDist_28 + ___real_447a0000,
                           (MethodInfo *)0x0);
                param_1->___snap_26 = false;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
