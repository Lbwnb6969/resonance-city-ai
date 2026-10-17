// RVA 0x8072f0 | Placemaker.Graphs.Qube$$OnDrawGizmosSelected
// PDB: Qube_OnDrawGizmosSelected_m7636A17C319657755D86D546199F17C00404FCF2
// Body: [[108072f0, 10807689] [1080768d, 10808704]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068e20 List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_inline
// 10068e50 List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 10068f80 List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 1074ddf0 Orientation_get_matrix_m17FCAC70C57A585778A04B146C1EE38EA8BB97D8
// 1074e220 OrientedModule_get_isDecor_m25882F19B14AAAC3FA7D76AD25D8482BA176DCAC
// 1074e260 OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
// 10a04800 SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

/* WARNING: Type propagation algorithm not settling */

void __cdecl
Qube_OnDrawGizmosSelected_m7636A17C319657755D86D546199F17C00404FCF2
          (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_1,MethodInfo *param_2)

{
  undefined4 *puVar1;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar2;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar3;
  List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F *pLVar4;
  MonitorData *pMVar5;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar6;
  atomic<unsigned_int> aVar7;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar8;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar9;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  Il2CppObject *pIVar33;
  bool bVar34;
  SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 SVar35;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar36;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar37;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar38;
  int iVar39;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *pOVar40;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar41;
  undefined1 extraout_var;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar42;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar43;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *pOVar44;
  float fVar45;
  float fVar46;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 local_800;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 local_7a0;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 local_740;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_6e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_6a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_690;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_680;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_670;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_660;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_650;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_640;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_630;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_620;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_610;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_600;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_5f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_5e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_5d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_5c0;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_5b0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_5a0;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_590;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_580;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_570;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_560;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_550;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_510;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_4d0;
  float local_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float local_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_450;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_410;
  undefined4 local_3c8;
  undefined4 local_3bc;
  undefined4 local_3b0;
  undefined4 local_3a4;
  float local_398;
  float local_38c;
  undefined4 local_380;
  undefined4 local_374;
  undefined4 local_368;
  undefined4 local_35c;
  undefined4 local_350;
  undefined4 local_344;
  undefined4 local_338;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 local_31c;
  float local_310;
  float fStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  float local_300;
  float fStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  float local_2e4;
  undefined8 local_2e0;
  float local_2d8;
  undefined8 local_2d4;
  float local_2cc;
  undefined8 local_2c8;
  float local_2c0;
  undefined8 local_2bc;
  float local_2b4;
  undefined8 local_2b0;
  undefined8 local_2a4;
  undefined8 local_298;
  undefined8 local_28c;
  undefined8 local_280;
  undefined8 local_274;
  undefined8 local_268;
  undefined8 local_25c;
  undefined8 local_250;
  float local_248;
  undefined8 local_244;
  float local_23c;
  undefined8 local_238;
  float local_230;
  undefined8 local_22c;
  float local_224;
  undefined8 local_220;
  undefined8 local_214;
  undefined8 local_208;
  undefined8 local_1fc;
  undefined8 local_1f0;
  undefined8 local_1e4;
  undefined8 local_1d8;
  undefined8 local_1cc;
  undefined8 local_1c0;
  float local_1b8;
  undefined8 local_1b4;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  undefined8 local_184;
  undefined8 local_178;
  undefined8 local_16c;
  undefined8 local_160;
  undefined8 local_154;
  undefined8 local_148;
  undefined8 local_13c;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  undefined8 local_118;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  undefined8 local_f4;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  List_1_t8DEA33444BDBB4BDE2CE7634D30849EF26C1F391 local_b8;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_90;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_78;
  int local_74;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *local_70;
  int local_6c;
  Il2CppObject *local_68;
  int local_64;
  uint local_60;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_44;
  float local_40;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  byte local_22;
  byte local_21;
  float local_20;
  float local_1c;
  float local_18;
  byte local_11;

  if (DAT_1151f1fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisGraph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_mB752ACC8E2C49E5962A8AABC4BC4FA82A4354430_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m12D0FE00253459E4AE506B4BABA39D4B32F117CD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisWorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_mC9E436E6FE67C0BE8976FA2C2ECA3951FA26210D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mA34713CF5425BA1D250CB83D201B5F8F8D52B86A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m08F9DCC44E75BF40420FAFEE553D080ED98AA85B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m098E7151F3B9E5736C38A336A3AAFE8631EC40E9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m6D92FA65BC8228B91CCB6AD672A9716D8E246E61_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f1fa = '\x01';
  }
  memset((uchar *)&local_510,'\0',0x40);
  memset((uchar *)&local_450,'\0',0x40);
  memset((uchar *)&local_550,'\0',0x40);
  memset((uchar *)&local_410,'\0',0x40);
  local_c4 = 0;
  local_cc = 0;
  local_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_3c.___moduleIndex_0 = 0;
  local_3c.___flags_1 = '\0';
  local_3c._3_1_ = 0;
  memset((uchar *)&local_7a0,'\0',0x5c);
  local_44.___moduleIndex_0 = 0;
  local_44.___flags_1 = '\0';
  local_44._3_1_ = 0;
  memset((uchar *)&local_800,'\0',0x5c);
  memset((uchar *)&local_4d0,'\0',0x40);
  local_68 = Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponentInParent_TisWorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_mC9E436E6FE67C0BE8976FA2C2ECA3951FA26210D_RuntimeMethod_var
                       );
  Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
             Component_GetComponentInParent_TisGraph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_mB752ACC8E2C49E5962A8AABC4BC4FA82A4354430_RuntimeMethod_var
            );
  pOVar36 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
            Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       Component_GetComponentInParent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m12D0FE00253459E4AE506B4BABA39D4B32F117CD_RuntimeMethod_var
                      );
  local_78 = pOVar36;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar34 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar36,(MethodInfo *)0x0);
  if (!bVar34) {
LAB_108086cf:
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar36,(MethodInfo *)0x0);
    return;
  }
  if ((param_1->___lastPropagation_11 & 3) == 1) {
    return;
  }
  local_90.___m_Left_0 = 0.0;
  local_90.___m_Right_1 = 0.0;
  local_90.___m_Top_2 = 0.0;
  local_90.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_90,1.0,1.0,1.0,0.8,(MethodInfo *)0x0);
  CVar14.___g_1 = local_90.___m_Right_1;
  CVar14.___r_0 = local_90.___m_Left_0;
  CVar14.___b_2 = local_90.___m_Top_2;
  CVar14.___a_3._0_1_ = SUB41(local_90.___m_Bottom_3,0);
  CVar14.___a_3._1_1_ = (char)((uint)local_90.___m_Bottom_3 >> 8);
  CVar14.___a_3._2_1_ = (char)((uint)local_90.___m_Bottom_3 >> 0x10);
  CVar14.___a_3._3_1_ = (char)((uint)local_90.___m_Bottom_3 >> 0x18);
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar14,(MethodInfo *)0x0);
  pTVar37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       (MethodInfo *)0x0);
  if (pTVar37 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pMVar38 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                        (&local_6e0,pTVar37,(MethodInfo *)0x0);
    fVar45 = pMVar38->___m33_15;
    MVar9.___m33_15._1_1_ = (char)((uint)fVar45 >> 8);
    MVar9._0_61_ = *(undefined1 (*) [61])pMVar38;
    MVar9.___m33_15._2_1_ = (char)((uint)fVar45 >> 0x10);
    MVar9.___m33_15._3_1_ = (char)((uint)fVar45 >> 0x18);
    Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(MVar9,(MethodInfo *)0x0);
    if (pOVar36 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) {
      local_510.___m00_0 = (float)pOVar36[5]._padding_;
      local_510.___m10_1 = (float)pOVar36[5]._padding_;
      local_510.___m20_2 = (float)pOVar36[5].___m_CachedPtr_0;
      local_510.___m30_3 = (float)pOVar36[6]._padding_;
      local_510.___m01_4 = (float)pOVar36[6]._padding_;
      local_510.___m11_5 = (float)pOVar36[6].___m_CachedPtr_0;
      local_510.___m21_6 = (float)pOVar36[7]._padding_;
      local_510.___m31_7 = (float)pOVar36[7]._padding_;
      local_510.___m02_8 = (float)pOVar36[7].___m_CachedPtr_0;
      local_510.___m12_9 = (float)pOVar36[8]._padding_;
      local_510.___m22_10 = (float)pOVar36[8]._padding_;
      local_510.___m32_11 = (float)pOVar36[8].___m_CachedPtr_0;
      local_510.___m03_12 = (float)pOVar36[9]._padding_;
      local_510.___m13_13 = (float)pOVar36[9]._padding_;
      local_510.___m23_14 = (float)pOVar36[9].___m_CachedPtr_0;
      local_510.___m33_15 = (float)pOVar36[10]._padding_;
      local_450.___m00_0 = (float)pOVar36[10]._padding_;
      local_450.___m10_1 = (float)pOVar36[10].___m_CachedPtr_0;
      local_450.___m20_2 = (float)pOVar36[0xb]._padding_;
      local_450.___m30_3 = (float)pOVar36[0xb]._padding_;
      local_450.___m01_4 = (float)pOVar36[0xb].___m_CachedPtr_0;
      local_450.___m11_5 = (float)pOVar36[0xc]._padding_;
      local_450.___m21_6 = (float)pOVar36[0xc]._padding_;
      local_450.___m31_7 = (float)pOVar36[0xc].___m_CachedPtr_0;
      local_450.___m02_8 = (float)pOVar36[0xd]._padding_;
      local_450.___m12_9 = (float)pOVar36[0xd]._padding_;
      local_450.___m22_10 = (float)pOVar36[0xd].___m_CachedPtr_0;
      local_450.___m32_11 = (float)pOVar36[0xe]._padding_;
      local_450.___m03_12 = (float)pOVar36[0xe]._padding_;
      local_450.___m13_13 = (float)pOVar36[0xe].___m_CachedPtr_0;
      local_450.___m23_14 = (float)pOVar36[0xf]._padding_;
      local_450.___m33_15 = (float)pOVar36[0xf]._padding_;
      local_550.___m00_0 = (float)pOVar36[0xf].___m_CachedPtr_0;
      local_550.___m10_1 = (float)pOVar36[0x10]._padding_;
      local_550.___m20_2 = (float)pOVar36[0x10]._padding_;
      local_550.___m30_3 = (float)pOVar36[0x10].___m_CachedPtr_0;
      local_550.___m01_4 = (float)pOVar36[0x11]._padding_;
      local_550.___m11_5 = (float)pOVar36[0x11]._padding_;
      local_550.___m21_6 = (float)pOVar36[0x11].___m_CachedPtr_0;
      local_550.___m31_7 = (float)pOVar36[0x12]._padding_;
      local_550.___m02_8 = (float)pOVar36[0x12]._padding_;
      local_550.___m12_9 = (float)pOVar36[0x12].___m_CachedPtr_0;
      local_550.___m22_10 = (float)pOVar36[0x13]._padding_;
      local_550.___m32_11 = (float)pOVar36[0x13]._padding_;
      local_550.___m03_12 = (float)pOVar36[0x13].___m_CachedPtr_0;
      local_550.___m13_13 = (float)pOVar36[0x14]._padding_;
      local_550.___m23_14 = (float)pOVar36[0x14]._padding_;
      local_550.___m33_15 = (float)pOVar36[0x14].___m_CachedPtr_0;
      local_410.___m00_0 = (float)pOVar36[0x15]._padding_;
      local_410.___m10_1 = (float)pOVar36[0x15]._padding_;
      local_410.___m20_2 = (float)pOVar36[0x15].___m_CachedPtr_0;
      local_410.___m30_3 = (float)pOVar36[0x16]._padding_;
      local_410.___m01_4 = (float)pOVar36[0x16]._padding_;
      local_410.___m11_5 = (float)pOVar36[0x16].___m_CachedPtr_0;
      local_410.___m21_6 = (float)pOVar36[0x17]._padding_;
      local_410.___m31_7 = (float)pOVar36[0x17]._padding_;
      local_410.___m02_8 = (float)pOVar36[0x17].___m_CachedPtr_0;
      local_410.___m12_9 = (float)pOVar36[0x18]._padding_;
      local_410.___m22_10 = (float)pOVar36[0x18]._padding_;
      local_410.___m32_11 = (float)pOVar36[0x18].___m_CachedPtr_0;
      local_410.___m03_12 = (float)pOVar36[0x19]._padding_;
      local_410.___m13_13 = (float)pOVar36[0x19]._padding_;
      local_410.___m23_14 = (float)pOVar36[0x19].___m_CachedPtr_0;
      local_410.___m33_15 = (float)pOVar36[0x1a]._padding_;
      if (param_1->___possibleModules_18 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
      {
        local_60 = param_1->___possibleModules_18->____size_2 - 1;
        if (-1 < (int)local_60) {
          local_64 = local_60 * 0x1c;
          do {
            pLVar2 = param_1->___possibleModules_18;
            if (pLVar2 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
            goto LAB_10808700;
            if ((uint)pLVar2->____size_2 <= local_60) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pOVar3 = pLVar2->____items_1;
            puVar1 = (undefined4 *)((int)&pOVar3->m_Items[0].___sides_0.___v00_0 + local_64);
            local_dc = *puVar1;
            uStack_d8 = puVar1[1];
            uStack_d4 = puVar1[2];
            uStack_d0 = puVar1[3];
            local_cc = *(undefined8 *)((int)&pOVar3->m_Items[0].___sides_0.___v4_8 + local_64);
            local_c4 = *(undefined4 *)((int)&pOVar3->m_Items[0].___cost_2 + local_64);
            local_11 = OrientedModule_get_isDecor_m25882F19B14AAAC3FA7D76AD25D8482BA176DCAC
                                 ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                                  ((int)&local_cc + 4),(MethodInfo *)0x0);
            local_3c = local_cc._4_4_;
            if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
            }
            pLVar4 = *(List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F **)
                      ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                            ->static_fields + 0x1c);
            iVar39 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                               (&local_3c,(MethodInfo *)0x0);
            if (pLVar4 == (List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F *)0x0)
            goto LAB_10808700;
            pOVar40 = List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_inline
                                (&local_740,pLVar4,iVar39,
                                 List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_RuntimeMethod_var
                                );
            pOVar44 = &local_7a0;
            for (iVar39 = 0x17; iVar39 != 0; iVar39 = iVar39 + -1) {
              (pOVar44->___int4x4_0).___c0_0.___x_0 = (pOVar40->___int4x4_0).___c0_0.___x_0;
              pOVar40 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                        &(pOVar40->___int4x4_0).___c0_0.___y_1;
              pOVar44 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                        &(pOVar44->___int4x4_0).___c0_0.___y_1;
            }
            if (local_68 == (Il2CppObject *)0x0) goto LAB_10808700;
            pMVar5 = local_68[3].monitor;
            if (local_11 == 0) {
              if ((pMVar5 == (MonitorData *)0x0) ||
                 (pMVar5->numThreadsWaitingForSemaphore == (atomic<unsigned_int>)0x0))
              goto LAB_10808700;
              pGVar41 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                  ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                   pMVar5->numThreadsWaitingForSemaphore,(uint)local_3c & 0xffff,
                                   List_1_get_Item_m6D92FA65BC8228B91CCB6AD672A9716D8E246E61_RuntimeMethod_var
                                  );
            }
            else {
              if ((pMVar5 == (MonitorData *)0x0) ||
                 (pLVar6 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                           (pMVar5->flushAcknowledged).m_Event,
                 pLVar6 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0))
              goto LAB_10808700;
              pGVar41 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                  (pLVar6,(uint)local_3c & 0xffff,
                                   List_1_get_Item_m08F9DCC44E75BF40420FAFEE553D080ED98AA85B_RuntimeMethod_var
                                  );
            }
            local_5c = pGVar41;
            pMVar38 = Orientation_get_matrix_m17FCAC70C57A585778A04B146C1EE38EA8BB97D8
                                (&local_6e0,&local_7a0,(MethodInfo *)0x0);
            local_460 = pMVar38->___m00_0;
            fStack_45c = pMVar38->___m10_1;
            fStack_458 = pMVar38->___m20_2;
            fStack_454 = pMVar38->___m30_3;
            local_470 = pMVar38->___m01_4;
            fStack_46c = pMVar38->___m11_5;
            fStack_468 = pMVar38->___m21_6;
            fStack_464 = pMVar38->___m31_7;
            local_480 = pMVar38->___m02_8;
            fStack_47c = pMVar38->___m12_9;
            fStack_478 = pMVar38->___m22_10;
            fStack_474 = pMVar38->___m32_11;
            local_490 = pMVar38->___m03_12;
            fStack_48c = pMVar38->___m13_13;
            fStack_488 = pMVar38->___m23_14;
            fStack_484 = pMVar38->___m33_15;
            local_58 = 0;
            if ((pGVar41 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) ||
               (*(int *)&pGVar41[1].field_0x4 == 0)) goto LAB_10808700;
            local_74 = *(int *)(*(int *)&pGVar41[1].field_0x4 + 0xc);
            if (0 < local_74) {
              do {
                if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)&pGVar41[1].field_0x4 ==
                    (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10808700;
                local_44 = List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_inline
                                     (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
                                       &pGVar41[1].field_0x4,local_58,
                                      List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_RuntimeMethod_var
                                     );
                if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                            );
                }
                pLVar4 = *(List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F **)
                          ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                ->static_fields + 0x1c);
                iVar39 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                   (&local_44,(MethodInfo *)0x0);
                if (pLVar4 == (List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F *)0x0)
                goto LAB_10808700;
                pOVar40 = List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_inline
                                    (&local_740,pLVar4,iVar39,
                                     List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_RuntimeMethod_var
                                    );
                pIVar33 = local_68;
                pOVar44 = &local_800;
                for (iVar39 = 0x17; iVar39 != 0; iVar39 = iVar39 + -1) {
                  (pOVar44->___int4x4_0).___c0_0.___x_0 = (pOVar40->___int4x4_0).___c0_0.___x_0;
                  pOVar40 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                            &(pOVar40->___int4x4_0).___c0_0.___y_1;
                  pOVar44 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                            &(pOVar44->___int4x4_0).___c0_0.___y_1;
                }
                if ((pIVar33[3].monitor == (MonitorData *)0x0) ||
                   (aVar7 = pIVar33[3].monitor[1].owningThreadId, aVar7 == (atomic<unsigned_int>)0x0
                   )) goto LAB_10808700;
                pGVar41 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                    ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)aVar7,
                                     (uint)local_44 & 0xffff,
                                     List_1_get_Item_m098E7151F3B9E5736C38A336A3AAFE8631EC40E9_RuntimeMethod_var
                                    );
                local_70 = pGVar41;
                pMVar38 = Orientation_get_matrix_m17FCAC70C57A585778A04B146C1EE38EA8BB97D8
                                    (&local_6e0,&local_800,(MethodInfo *)0x0);
                fVar45 = pMVar38->___m33_15;
                MVar8.___m10_1 = fStack_45c;
                MVar8.___m00_0 = local_460;
                MVar8.___m20_2 = fStack_458;
                MVar8.___m30_3 = fStack_454;
                MVar8.___m01_4 = local_470;
                MVar8.___m11_5 = fStack_46c;
                MVar8.___m21_6 = fStack_468;
                MVar8.___m31_7 = fStack_464;
                MVar8.___m02_8 = local_480;
                MVar8.___m12_9 = fStack_47c;
                MVar8.___m22_10 = fStack_478;
                MVar8.___m32_11 = fStack_474;
                MVar8.___m03_12 = local_490;
                MVar8.___m13_13 = fStack_48c;
                MVar8.___m23_14 = fStack_488;
                MVar8.___m33_15 = fStack_484;
                MVar10.___m33_15._1_1_ = (char)((uint)fVar45 >> 8);
                MVar10._0_61_ = *(undefined1 (*) [61])pMVar38;
                MVar10.___m33_15._2_1_ = (char)((uint)fVar45 >> 0x10);
                MVar10.___m33_15._3_1_ = (char)((uint)fVar45 >> 0x18);
                pMVar38 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                                    ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                     &local_740.___int4x4_0.___c1_1.___z_2,MVar8,MVar10,
                                     (MethodInfo *)0x0);
                local_54 = 0;
                local_4d0.___m00_0 = pMVar38->___m00_0;
                local_4d0.___m10_1 = pMVar38->___m10_1;
                local_4d0.___m20_2 = pMVar38->___m20_2;
                local_4d0.___m30_3 = pMVar38->___m30_3;
                local_4d0.___m01_4 = pMVar38->___m01_4;
                local_4d0.___m11_5 = pMVar38->___m11_5;
                local_4d0.___m21_6 = pMVar38->___m21_6;
                local_4d0.___m31_7 = pMVar38->___m31_7;
                local_4d0.___m02_8 = pMVar38->___m02_8;
                local_4d0.___m12_9 = pMVar38->___m12_9;
                local_4d0.___m22_10 = pMVar38->___m22_10;
                local_4d0.___m32_11 = pMVar38->___m32_11;
                local_4d0.___m03_12 = pMVar38->___m03_12;
                local_4d0.___m13_13 = pMVar38->___m13_13;
                local_4d0.___m23_14 = pMVar38->___m23_14;
                local_4d0.___m33_15 = pMVar38->___m33_15;
                if ((pGVar41 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) ||
                   (*(int *)(pGVar41 + 3) == 0)) goto LAB_10808700;
                local_6c = *(int *)(*(int *)(pGVar41 + 3) + 0xc);
                if (0 < local_6c) {
                  do {
                    iVar39 = local_54;
                    if (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(pGVar41 + 3) ==
                        (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0) goto LAB_10808700;
                    local_11 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                         (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                                           (pGVar41 + 3),local_54,
                                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                         );
                    if (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(pGVar41 + 3) ==
                        (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0) goto LAB_10808700;
                    local_21 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                         (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                                           (pGVar41 + 3),iVar39 + 1,
                                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                         );
                    if (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(pGVar41 + 3) ==
                        (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0) goto LAB_10808700;
                    local_22 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                         (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                                           (pGVar41 + 3),iVar39 + 2,
                                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                         );
                    if (*(int *)(pGVar41 + 1) == 0) goto LAB_10808700;
                    SVar35 = List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_inline
                                       (&local_b8,*(int *)(pGVar41 + 1),(MethodInfo *)(uint)local_11
                                       );
                    pfVar42 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                        (&local_560,
                                         *(SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *)
                                          CONCAT13(extraout_var,SVar35),(MethodInfo *)0x0);
                    fVar45 = pfVar42->___z_2;
                    VVar15.___z_4._1_1_ = (char)((uint)fVar45 >> 8);
                    VVar15._0_9_ = *(unkbyte9 *)pfVar42;
                    VVar15.___z_4._2_1_ = (char)((uint)fVar45 >> 0x10);
                    VVar15.___z_4._3_1_ = (char)((uint)fVar45 >> 0x18);
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_570,&local_4d0,VVar15,(MethodInfo *)0x0);
                    local_9c._0_4_ = pVVar43->___x_2;
                    local_9c._4_4_ = pVVar43->___y_3;
                    local_94 = pVVar43->___z_4;
                    pVVar43 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                        (&local_580,(MethodInfo *)0x0);
                    local_328._0_4_ = pVVar43->___x_2;
                    local_328._4_4_ = pVVar43->___y_3;
                    local_e0 = pVVar43->___z_4;
                    local_e8._0_4_ = pVVar43->___x_2;
                    local_e8._4_4_ = pVVar43->___y_3;
                    local_2c = (float)(undefined4)local_328 * __real_3f000000 + (float)local_9c;
                    local_1c = (float)local_328._4_4_ * __real_3f000000 + local_9c._4_4_;
                    local_30 = local_e0 * __real_3f000000 + local_94;
                    local_31c = local_328;
                    if (*(int *)(pGVar41 + 1) == 0) goto LAB_10808700;
                    SVar35 = List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_inline
                                       ((List_1_t8DEA33444BDBB4BDE2CE7634D30849EF26C1F391 *)
                                        (local_c0 + 4),*(int *)(pGVar41 + 1),
                                        (MethodInfo *)(uint)local_21);
                    pfVar42 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                        (&local_590,
                                         *(SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *)
                                          CONCAT13(extraout_var_00,SVar35),(MethodInfo *)0x0);
                    fVar45 = pfVar42->___z_2;
                    VVar16.___z_4._1_1_ = (char)((uint)fVar45 >> 8);
                    VVar16._0_9_ = *(unkbyte9 *)pfVar42;
                    VVar16.___z_4._2_1_ = (char)((uint)fVar45 >> 0x10);
                    VVar16.___z_4._3_1_ = (char)((uint)fVar45 >> 0x18);
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_5a0,&local_4d0,VVar16,(MethodInfo *)0x0);
                    local_b8.____version_3 = (int)pVVar43->___x_2;
                    local_b8.____syncRoot_4 = (Il2CppObject *)pVVar43->___y_3;
                    local_a0 = pVVar43->___z_4;
                    pVVar43 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                        (&local_690,(MethodInfo *)0x0);
                    local_100._0_4_ = pVVar43->___x_2;
                    local_100._4_4_ = pVVar43->___y_3;
                    local_104 = pVVar43->___z_4;
                    local_10c._0_4_ = pVVar43->___x_2;
                    local_10c._4_4_ = pVVar43->___y_3;
                    local_34 = (float)(undefined4)local_100 * __real_3f000000 +
                               (float)local_b8.____version_3;
                    local_20 = (float)local_100._4_4_ * __real_3f000000 +
                               (float)local_b8.____syncRoot_4;
                    local_28 = local_104 * __real_3f000000 + local_a0;
                    local_f4 = local_100;
                    if (*(int *)(pGVar41 + 1) == 0) goto LAB_10808700;
                    SVar35 = List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_inline
                                       ((List_1_t8DEA33444BDBB4BDE2CE7634D30849EF26C1F391 *)local_c0
                                        ,*(int *)(pGVar41 + 1),(MethodInfo *)(uint)local_22);
                    pfVar42 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                        (&local_5b0,
                                         *(SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *)
                                          CONCAT13(extraout_var_01,SVar35),(MethodInfo *)0x0);
                    fVar45 = pfVar42->___z_2;
                    VVar17.___z_4._1_1_ = (char)((uint)fVar45 >> 8);
                    VVar17._0_9_ = *(unkbyte9 *)pfVar42;
                    VVar17.___z_4._2_1_ = (char)((uint)fVar45 >> 0x10);
                    VVar17.___z_4._3_1_ = (char)((uint)fVar45 >> 0x18);
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_5c0,&local_4d0,VVar17,(MethodInfo *)0x0);
                    local_b8._padding_ = (int)pVVar43->___x_2;
                    local_b8.____items_1 =
                         (SbyteFloat3U5BU5D_t563FEA0BB78E5CB5807DF9BCBA30C8F9F69B52C7 *)
                         pVVar43->___y_3;
                    local_b8.____size_2 = (int)pVVar43->___z_4;
                    pVVar43 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                        (&local_5d0,(MethodInfo *)0x0);
                    local_124._0_4_ = pVVar43->___x_2;
                    local_124._4_4_ = pVVar43->___y_3;
                    local_128 = pVVar43->___z_4;
                    local_130._0_4_ = pVVar43->___x_2;
                    local_130._4_4_ = pVVar43->___y_3;
                    local_48 = (float)(undefined4)local_124 * __real_3f000000 +
                               (float)local_b8._padding_;
                    local_40 = (float)local_124._4_4_ * __real_3f000000 +
                               (float)local_b8.____items_1;
                    local_4c = local_128 * __real_3f000000 + (float)local_b8.____size_2;
                    local_3b0 = 0;
                    auVar21._4_8_ = 0;
                    auVar21._0_4_ = local_1c;
                    local_118 = local_124;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_5e0,&local_510,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar21 << 0x20),(MethodInfo *)0x0);
                    local_13c._0_4_ = pVVar43->___x_2;
                    local_13c._4_4_ = pVVar43->___y_3;
                    local_194 = pVVar43->___z_4;
                    local_50 = __real_3f800000 - local_2c;
                    local_38 = (__real_3f800000 - local_30) * local_50;
                    local_19c._0_4_ = pVVar43->___x_2;
                    local_19c._4_4_ = pVVar43->___y_3;
                    local_18 = local_2c * (__real_3f800000 - local_30);
                    local_3c8 = 0;
                    auVar22._4_8_ = 0;
                    auVar22._0_4_ = local_1c;
                    local_16c = local_19c;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_5f0,&local_450,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar22 << 0x20),(MethodInfo *)0x0);
                    local_178._0_4_ = pVVar43->___x_2;
                    local_178._4_4_ = pVVar43->___y_3;
                    local_1a0 = pVVar43->___z_4;
                    local_1a8._0_4_ = pVVar43->___x_2;
                    local_1a8._4_4_ = pVVar43->___y_3;
                    local_2c = local_30 * local_2c;
                    local_3bc = 0;
                    auVar23._4_8_ = 0;
                    auVar23._0_4_ = local_1c;
                    local_148 = local_178;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_650,&local_550,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar23 << 0x20),(MethodInfo *)0x0);
                    local_184._0_4_ = pVVar43->___x_2;
                    local_184._4_4_ = pVVar43->___y_3;
                    local_1ac = pVVar43->___z_4;
                    local_1b4._0_4_ = pVVar43->___x_2;
                    local_1b4._4_4_ = pVVar43->___y_3;
                    local_30 = local_30 * local_50;
                    local_3a4 = 0;
                    auVar24._4_8_ = 0;
                    auVar24._0_4_ = local_1c;
                    local_154 = local_184;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_600,&local_410,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar24 << 0x20),(MethodInfo *)0x0);
                    local_190._0_4_ = pVVar43->___x_2;
                    local_190._4_4_ = pVVar43->___y_3;
                    local_1b8 = pVVar43->___z_4;
                    local_1c0._0_4_ = pVVar43->___x_2;
                    local_1c0._4_4_ = pVVar43->___y_3;
                    local_310 = local_38 * (float)local_13c + local_18 * (float)local_148 +
                                local_2c * (float)local_154 +
                                local_30 * (float)(undefined4)local_190;
                    fVar45 = local_178._4_4_ * local_18;
                    fStack_30c = 0.0;
                    uStack_308 = 0.0;
                    uStack_304 = 0;
                    fVar46 = local_38 * local_16c._4_4_;
                    local_38c = local_38 * local_194 + local_1a0 * local_18 + local_1ac * local_2c +
                                local_1b8 * local_30;
                    local_32c = 0;
                    local_1c = __real_3f800000 - local_34;
                    local_18 = __real_3f800000 - local_28;
                    local_38 = local_1c * local_18;
                    auVar25._4_8_ = 0;
                    auVar25._0_4_ = local_20;
                    local_160 = local_190;
                    local_2c = fVar46 + fVar45 + local_184._4_4_ * local_2c +
                               (float)local_190._4_4_ * local_30;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_6a0,&local_510,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar25 << 0x20),(MethodInfo *)0x0);
                    local_208._0_4_ = pVVar43->___x_2;
                    local_208._4_4_ = pVVar43->___y_3;
                    local_230 = pVVar43->___z_4;
                    local_238._0_4_ = pVVar43->___x_2;
                    local_238._4_4_ = pVVar43->___y_3;
                    local_18 = local_34 * local_18;
                    local_338 = 0;
                    auVar26._4_8_ = 0;
                    auVar26._0_4_ = local_20;
                    local_1d8 = local_208;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_680,&local_450,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar26 << 0x20),(MethodInfo *)0x0);
                    local_1fc._0_4_ = pVVar43->___x_2;
                    local_1fc._4_4_ = pVVar43->___y_3;
                    local_224 = pVVar43->___z_4;
                    local_22c._0_4_ = pVVar43->___x_2;
                    local_22c._4_4_ = pVVar43->___y_3;
                    local_34 = local_34 * local_28;
                    local_344 = 0;
                    auVar27._4_8_ = 0;
                    auVar27._0_4_ = local_20;
                    local_1cc = local_1fc;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_610,&local_550,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar27 << 0x20),(MethodInfo *)0x0);
                    local_214._0_4_ = pVVar43->___x_2;
                    local_214._4_4_ = pVVar43->___y_3;
                    local_23c = pVVar43->___z_4;
                    local_244._0_4_ = pVVar43->___x_2;
                    local_244._4_4_ = pVVar43->___y_3;
                    local_1c = local_1c * local_28;
                    local_350 = 0;
                    auVar28._4_8_ = 0;
                    auVar28._0_4_ = local_20;
                    local_1e4 = local_214;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_620,&local_410,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar28 << 0x20),(MethodInfo *)0x0);
                    local_220._0_4_ = pVVar43->___x_2;
                    local_220._4_4_ = pVVar43->___y_3;
                    local_248 = pVVar43->___z_4;
                    local_250._0_4_ = pVVar43->___x_2;
                    local_250._4_4_ = pVVar43->___y_3;
                    local_300 = local_18 * (float)local_1cc + local_38 * (float)local_1d8 +
                                local_34 * (float)local_1e4 +
                                local_1c * (float)(undefined4)local_220;
                    fStack_2fc = 0.0;
                    uStack_2f8 = 0.0;
                    uStack_2f4 = 0;
                    local_50 = local_1fc._4_4_ * local_18 + local_208._4_4_ * local_38 +
                               local_34 * local_214._4_4_ + local_1c * (float)local_220._4_4_;
                    local_2e4 = local_224 * local_18 + local_230 * local_38 + local_34 * local_23c +
                                local_1c * local_248;
                    local_35c = 0;
                    local_28 = __real_3f800000 - local_4c;
                    local_20 = __real_3f800000 - local_48;
                    local_18 = local_28 * local_20;
                    auVar29._4_8_ = 0;
                    auVar29._0_4_ = local_40;
                    local_1f0 = local_220;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_630,&local_510,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar29 << 0x20),(MethodInfo *)0x0);
                    local_298._0_4_ = pVVar43->___x_2;
                    local_298._4_4_ = pVVar43->___y_3;
                    local_2c0 = pVVar43->___z_4;
                    local_2c8._0_4_ = pVVar43->___x_2;
                    local_2c8._4_4_ = pVVar43->___y_3;
                    local_28 = local_28 * local_48;
                    local_368 = 0;
                    auVar30._4_8_ = 0;
                    auVar30._0_4_ = local_40;
                    local_268 = local_298;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_640,&local_450,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar30 << 0x20),(MethodInfo *)0x0);
                    local_28c._0_4_ = pVVar43->___x_2;
                    local_28c._4_4_ = pVVar43->___y_3;
                    local_2b4 = pVVar43->___z_4;
                    local_2bc._0_4_ = pVVar43->___x_2;
                    local_2bc._4_4_ = pVVar43->___y_3;
                    local_38 = local_4c * local_48;
                    local_374 = 0;
                    auVar31._4_8_ = 0;
                    auVar31._0_4_ = local_40;
                    local_25c = local_28c;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_660,&local_550,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar31 << 0x20),(MethodInfo *)0x0);
                    local_2a4._0_4_ = pVVar43->___x_2;
                    local_2a4._4_4_ = pVVar43->___y_3;
                    local_2cc = pVVar43->___z_4;
                    local_2d4._0_4_ = pVVar43->___x_2;
                    local_2d4._4_4_ = pVVar43->___y_3;
                    local_20 = local_20 * local_4c;
                    local_380 = 0;
                    auVar32._4_8_ = 0;
                    auVar32._0_4_ = local_40;
                    local_274 = local_2a4;
                    pVVar43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                        (&local_670,&local_410,
                                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                         (auVar32 << 0x20),(MethodInfo *)0x0);
                    uStack_2f8 = fStack_2fc;
                    uStack_308 = fStack_30c;
                    fVar46 = local_38c;
                    local_2b0._0_4_ = pVVar43->___x_2;
                    local_2b0._4_4_ = pVVar43->___y_3;
                    local_2d8 = pVVar43->___z_4;
                    local_2e0._0_4_ = pVVar43->___x_2;
                    local_2e0._4_4_ = pVVar43->___y_3;
                    local_90.___m_Left_0 =
                         local_28 * (float)local_25c + local_18 * (float)local_268 +
                         local_38 * (float)local_274 + local_20 * (float)(undefined4)local_2b0;
                    local_90.___m_Right_1 = 0.0;
                    local_90.___m_Top_2 = 0.0;
                    local_90.___m_Bottom_3 = 0.0;
                    local_398 = local_28 * local_2b4 + local_2c0 * local_18 + local_38 * local_2cc +
                                local_20 * local_2d8;
                    fStack_2fc = local_50;
                    uStack_2f4 = 0;
                    fStack_30c = local_2c;
                    uStack_304 = 0;
                    VVar11.___y_3 = local_2c;
                    VVar11.___x_2 = local_310;
                    VVar11.___z_4 = local_38c;
                    VVar18.___y_3 = local_50;
                    VVar18.___x_2 = local_300;
                    VVar18.___z_4._0_1_ = SUB41(local_2e4,0);
                    VVar18.___z_4._1_1_ = (char)((uint)local_2e4 >> 8);
                    VVar18.___z_4._2_1_ = (char)((uint)local_2e4 >> 0x10);
                    VVar18.___z_4._3_1_ = (char)((uint)local_2e4 >> 0x18);
                    local_280 = local_2b0;
                    local_18 = local_28 * local_28c._4_4_ + local_298._4_4_ * local_18 +
                               local_38 * local_2a4._4_4_ + local_20 * (float)local_2b0._4_4_;
                    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                              (VVar11,VVar18,(MethodInfo *)0x0);
                    local_90.___m_Top_2 = local_90.___m_Right_1;
                    fVar45 = local_398;
                    local_90.___m_Right_1 = local_18;
                    local_90.___m_Bottom_3 = 0.0;
                    VVar12.___y_3 = fStack_2fc;
                    VVar12.___x_2 = local_300;
                    VVar12.___z_4 = local_2e4;
                    VVar19.___y_3 = local_18;
                    VVar19.___x_2 = local_90.___m_Left_0;
                    VVar19.___z_4._0_1_ = SUB41(local_398,0);
                    VVar19.___z_4._1_1_ = (char)((uint)local_398 >> 8);
                    VVar19.___z_4._2_1_ = (char)((uint)local_398 >> 0x10);
                    VVar19.___z_4._3_1_ = (char)((uint)local_398 >> 0x18);
                    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                              (VVar12,VVar19,(MethodInfo *)0x0);
                    VVar13.___y_3 = local_90.___m_Right_1;
                    VVar13.___x_2 = local_90.___m_Left_0;
                    VVar13.___z_4 = fVar45;
                    VVar20.___y_3 = fStack_30c;
                    VVar20.___x_2 = local_310;
                    VVar20.___z_4._0_1_ = SUB41(fVar46,0);
                    VVar20.___z_4._1_1_ = (char)((uint)fVar46 >> 8);
                    VVar20.___z_4._2_1_ = (char)((uint)fVar46 >> 0x10);
                    VVar20.___z_4._3_1_ = (char)((uint)fVar46 >> 0x18);
                    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                              (VVar13,VVar20,(MethodInfo *)0x0);
                    local_54 = local_54 + 3;
                    pGVar41 = local_70;
                  } while (local_54 < local_6c);
                }
                local_58 = local_58 + 1;
                pGVar41 = local_5c;
              } while (local_58 < local_74);
            }
            local_60 = local_60 - 1;
            local_64 = local_64 + -0x1c;
            pOVar36 = local_78;
          } while (-1 < (int)local_60);
        }
        goto LAB_108086cf;
      }
    }
  }
LAB_10808700:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
