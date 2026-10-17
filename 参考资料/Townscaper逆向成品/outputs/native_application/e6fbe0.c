// RVA 0xe6fbe0 | Placemaker.Graphs.Graph$$IterateFocus
// PDB: Graph_IterateFocus_mE682A4A560119B8AEC7F02839C5C3271ACB712A3
// Body: [[10e6fbe0, 10e711f4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10675160 Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
// 10836080 ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
// 108363d0 ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10871c00 AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9
// 10a370d0 Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
// 10a37760 Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
// 10a378d0 Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
// 10a37a50 Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a439d0 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// 10e6bae0 Graph_GetMaxExtents_m6721C88B5586B09C182FE4F400226FCCEA14C037
// 1113cf80 BoxCollider_set_center_m02D745E759A66BBEF405D33CE4ACE34B7E064178
// 1113cfe0 BoxCollider_set_size_mD9153B4AE4C366ACAB9E5F49075D919A89168B2E

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Graph_IterateFocus_mE682A4A560119B8AEC7F02839C5C3271ACB712A3
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *pBVar1;
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
  float fVar13;
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
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  int iVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar76;
  Il2CppClass *pIVar77;
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar78;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar79;
  MonitorData *pMVar80;
  int *piVar81;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar82;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar83;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar84;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar85;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar86;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar87;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar88;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar89;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar90;
  bool bVar91;
  char cVar92;
  int iVar93;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar94;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_01;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_02;
  undefined8 *extraout_EAX_03;
  undefined8 *extraout_EAX_04;
  undefined8 *extraout_EAX_05;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar95;
  undefined8 *extraout_EAX_06;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar96;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_07;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_08;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_09;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_10;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_12;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_14;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_16;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_18;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_20;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX_21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_22;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar97;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar98;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar99;
  Il2CppObject *pIVar100;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *piVar101;
  int iVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *pBVar106;
  undefined8 uVar107;
  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E VVar108;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar109;
  undefined1 local_b0 [36];
  float local_8c;
  float fStack_88;
  Il2CppObject *local_84;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_80;
  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *pBStack_74;
  undefined8 local_68;
  Il2CppClass *local_60;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_50;
  Il2CppClass *local_40;
  Il2CppClass *local_3c;
  undefined8 local_38;
  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *pBStack_30;
  float fStack_2c;
  float fStack_28;
  Il2CppClass *pIStack_24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_20;
  float fStack_14;

  if (DAT_1152282d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1152282d = '\x01';
  }
  local_38 = 0;
  pBStack_30 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)0x0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  pIStack_24 = (Il2CppClass *)0x0;
  cVar92 = param_1->___recalculateHeightBounds_43;
  local_b0._16_4_ = (Il2CppObject *)0x0;
  local_b0._20_4_ = (Il2CppObject *)0x0;
  local_b0._0_4_ = (LinkedList_1_t555E05F2E497A99E81B02BC6149DEFDB20186689 *)0x0;
  local_b0._4_4_ = (LinkedListNode_1_t31224B82477217EC2257F5D5D3CD9B16431A66EC *)0x0;
  local_b0._8_4_ = 0.0;
  local_b0._12_4_ = (Il2CppObject *)0x0;
  if ((bool)cVar92 == false) {
    if (param_1->___recalculateHexBounds_42 == false) {
      if (param_1->___boundsUpdated_41 == false) {
        return false;
      }
      if (DAT_11522828 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        DAT_11522828 = '\x01';
      }
      pOVar76 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___corners_6;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar91 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                         (pOVar76,(MethodInfo *)0x0);
      if (bVar91) {
        if (param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_10e711f0;
        iVar52 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (param_1->___corners_6,(MethodInfo *)0x0);
        bVar91 = 0 < iVar52;
      }
      else {
        bVar91 = false;
      }
      if (bVar91) {
        local_50.___x_1 = (float)(param_1->___bounds_28).___c0_0.___x_0;
        local_50.___y_2 = (float)(param_1->___bounds_28).___c0_0.___y_1;
        piVar81 = &(param_1->___bounds_28).___c0_0.___z_2;
        fVar13 = (float)*piVar81;
        uVar103._0_4_ = (float)(param_1->___bounds_28).___c1_1.___x_0;
        local_50._8_8_ = *(undefined8 *)piVar81;
        iVar52 = param_1->___boundsHeight_27;
        local_68._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
        local_68._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
        if ((Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var);
          fVar13 = local_50.___z_3;
          uVar103._0_4_ = local_50.___w_4;
        }
        iVar83.___c0_0.___y_1 = (int)local_50.___y_2;
        iVar83.___c0_0.___x_0 = (int)local_50.___x_1;
        iVar83.___c0_0.___z_2 = (int)fVar13;
        iVar83.___c1_1.___x_0 = (int)(float)uVar103;
        iVar83.___c1_1.___y_1 = (int)local_68;
        iVar83.___c1_1.___z_2 = (int)((ulonglong)local_68 >> 0x20);
        VVar108 = Graph_GetMaxExtents_m6721C88B5586B09C182FE4F400226FCCEA14C037
                            (iVar83,iVar52,(MethodInfo *)0x0);
        iVar93 = VVar108.___Item1_0;
        param_1->___maxHeight_32 = VVar108.___Item2_1;
        uVar4 = (param_1->___bounds_28).___c0_0.___x_0;
        uVar44 = (param_1->___bounds_28).___c0_0.___y_1;
        iVar102 = iVar93 * 2;
        iVar52 = (param_1->___bounds_28).___c0_0.___z_2;
        (param_1->___border_29).___c1_1.___x_0 = uVar4 + iVar102;
        (param_1->___border_29).___c1_1.___y_1 = uVar44 + iVar102;
        (param_1->___border_29).___c1_1.___z_2 = iVar102 + iVar52;
        iVar52 = (param_1->___bounds_28).___c1_1.___z_2;
        uVar5 = (param_1->___bounds_28).___c1_1.___x_0;
        uVar45 = (param_1->___bounds_28).___c1_1.___y_1;
        (param_1->___border_29).___c0_0.___x_0 = uVar5 + iVar93 * -2;
        (param_1->___border_29).___c0_0.___y_1 = uVar45 + iVar93 * -2;
        (param_1->___border_29).___c0_0.___z_2 = iVar52 + iVar93 * -2;
      }
      else {
        param_1->___maxHeight_32 = 0x100;
        iVar52 = (param_1->___bounds_28).___c0_0.___z_2;
        uVar2 = (param_1->___bounds_28).___c0_0.___x_0;
        uVar42 = (param_1->___bounds_28).___c0_0.___y_1;
        (param_1->___border_29).___c1_1.___x_0 = uVar2 + 0x400;
        (param_1->___border_29).___c1_1.___y_1 = uVar42 + 0x400;
        (param_1->___border_29).___c1_1.___z_2 = iVar52 + 0x400;
        iVar52 = (param_1->___bounds_28).___c1_1.___z_2;
        uVar3 = (param_1->___bounds_28).___c1_1.___x_0;
        uVar43 = (param_1->___bounds_28).___c1_1.___y_1;
        (param_1->___border_29).___c0_0.___x_0 = uVar3 + -0x400;
        (param_1->___border_29).___c0_0.___y_1 = uVar43 + -0x400;
        (param_1->___border_29).___c0_0.___z_2 = iVar52 + -0x400;
      }
      uVar6 = (param_1->___bounds_28).___c0_0.___x_0;
      uVar46 = (param_1->___bounds_28).___c0_0.___y_1;
      iVar52 = (param_1->___bounds_28).___c0_0.___z_2;
      (param_1->___genBounds_30).___c0_0.___x_0 = uVar6 + -0x60;
      (param_1->___genBounds_30).___c0_0.___y_1 = uVar46 + -0x60;
      (param_1->___genBounds_30).___c0_0.___z_2 = iVar52 + -0x60;
      uVar7 = (param_1->___bounds_28).___c1_1.___x_0;
      uVar47 = (param_1->___bounds_28).___c1_1.___y_1;
      iVar52 = (param_1->___bounds_28).___c1_1.___z_2;
      (param_1->___genBounds_30).___c1_1.___x_0 = uVar7 + 0x60;
      (param_1->___genBounds_30).___c1_1.___y_1 = uVar47 + 0x60;
      (param_1->___genBounds_30).___c1_1.___z_2 = iVar52 + 0x60;
      uVar8 = (param_1->___border_29).___c0_0.___x_0;
      uVar48 = (param_1->___border_29).___c0_0.___y_1;
      uVar9 = (param_1->___genBounds_30).___c0_0.___x_0;
      uVar49 = (param_1->___genBounds_30).___c0_0.___y_1;
      iVar52 = (param_1->___genBounds_30).___c0_0.___z_2;
      iVar102 = (param_1->___border_29).___c0_0.___z_2 + -2;
      fVar13 = (float)uVar9;
      if ((int)uVar9 <= uVar8 + -2) {
        fVar13 = (float)(uVar8 + -2);
      }
      iVar93 = uVar49;
      if ((int)uVar49 <= uVar48 + -2) {
        iVar93 = uVar48 + -2;
      }
      if (iVar52 <= iVar102) {
        iVar52 = iVar102;
      }
      (param_1->___genBounds_30).___c0_0.___x_0 = (int)fVar13;
      (param_1->___genBounds_30).___c0_0.___y_1 = iVar93;
      (param_1->___genBounds_30).___c0_0.___z_2 = iVar52;
      uVar10 = (param_1->___border_29).___c1_1.___x_0;
      uVar50 = (param_1->___border_29).___c1_1.___y_1;
      uVar11 = (param_1->___genBounds_30).___c1_1.___x_0;
      uVar51 = (param_1->___genBounds_30).___c1_1.___y_1;
      iVar52 = (param_1->___border_29).___c1_1.___z_2 + 2;
      iVar102 = (param_1->___genBounds_30).___c1_1.___z_2;
      fVar13 = (float)uVar11;
      if (uVar10 + 2 <= (int)uVar11) {
        fVar13 = (float)(uVar10 + 2);
      }
      iVar93 = uVar51;
      if (uVar50 + 2 <= (int)uVar51) {
        iVar93 = uVar50 + 2;
      }
      if (iVar52 <= iVar102) {
        iVar102 = iVar52;
      }
      (param_1->___genBounds_30).___c1_1.___x_0 = (int)fVar13;
      (param_1->___genBounds_30).___c1_1.___y_1 = iVar93;
      (param_1->___genBounds_30).___c1_1.___z_2 = iVar102;
      uVar12 = (param_1->___border_29).___c0_0.___x_0;
      fVar13 = (float)(param_1->___genBounds_30).___c0_0.___x_0;
      iVar52 = (param_1->___genBounds_30).___c0_0.___y_1;
      iVar102 = (param_1->___border_29).___c0_0.___z_2;
      uVar53 = (param_1->___border_29).___c0_0.___y_1;
      iVar93 = (param_1->___genBounds_30).___c0_0.___z_2;
      if ((int)fVar13 <= (int)uVar12) {
        fVar13 = (float)uVar12;
      }
      if (iVar52 <= (int)uVar53) {
        iVar52 = uVar53;
      }
      if (iVar93 <= iVar102) {
        iVar93 = iVar102;
      }
      (param_1->___viewBounds_31).___c0_0.___x_0 = (int)fVar13;
      (param_1->___viewBounds_31).___c0_0.___y_1 = iVar52;
      (param_1->___viewBounds_31).___c0_0.___z_2 = iVar93;
      uVar14 = (param_1->___border_29).___c1_1.___x_0;
      uVar54 = (param_1->___border_29).___c1_1.___y_1;
      pIStack_24 = (Il2CppClass *)(param_1->___border_29).___c1_1.___z_2;
      uVar15 = (param_1->___genBounds_30).___c1_1.___x_0;
      uVar55 = (param_1->___genBounds_30).___c1_1.___y_1;
      local_84 = (Il2CppObject *)(param_1->___genBounds_30).___c1_1.___z_2;
      local_60 = (Il2CppClass *)(param_1->___border_29).___c1_1.___z_2;
      local_68._0_4_ = (param_1->___border_29).___c1_1.___x_0;
      local_68._4_4_ = (param_1->___border_29).___c1_1.___y_1;
      iVar52 = (param_1->___genBounds_30).___c1_1.___z_2;
      uVar16 = (param_1->___border_29).___c1_1.___x_0;
      uVar56 = (param_1->___border_29).___c1_1.___y_1;
      local_20.___x_2 = (float)uVar15;
      if ((int)uVar14 <= (int)uVar15) {
        local_20.___x_2 = (float)uVar14;
      }
      local_20.___y_3 = (float)uVar55;
      if ((int)local_68._4_4_ <= (int)uVar55) {
        local_20.___y_3 = (float)local_68._4_4_;
      }
      if ((int)local_60 <= iVar52) {
        iVar52 = (int)local_60;
      }
      (param_1->___viewBounds_31).___c1_1.___x_0 = (int)local_20.___x_2;
      (param_1->___viewBounds_31).___c1_1.___y_1 = (int)local_20.___y_3;
      (param_1->___viewBounds_31).___c1_1.___z_2 = iVar52;
      local_8c = (float)uVar15;
      fStack_88 = (float)uVar55;
      local_80.___y_3 = (float)uVar16;
      local_80.___z_4 = (float)uVar56;
      fStack_2c = (float)uVar14;
      fStack_28 = (float)uVar54;
      if ((Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        local_20.___z_4 = (float)uVar55;
        fStack_14 = (float)local_84;
        il2cpp_runtime_class_init
                  (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var);
      }
      uVar17 = (param_1->___viewBounds_31).___c0_0.___x_0;
      uVar57 = (param_1->___viewBounds_31).___c0_0.___y_1;
      uVar18 = (param_1->___viewBounds_31).___c0_0.___x_0;
      iVar52 = *(int *)Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->
                       static_fields;
      fStack_14 = (float)(param_1->___viewBounds_31).___c0_0.___z_2;
      local_20.___z_4 = (float)(param_1->___viewBounds_31).___c0_0.___z_2;
      local_20.___y_3 = (float)uVar18;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_20,(float)(int)uVar17,(float)(int)uVar57,local_20.___z_4,(MethodInfo *)0x0);
      pVVar94 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                          (&local_50,*extraout_EAX,(MethodInfo *)0x0);
      Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                (iVar52,*pVVar94,(MethodInfo *)0x0);
      uVar19 = (param_1->___viewBounds_31).___c1_1.___x_0;
      uVar58 = (param_1->___viewBounds_31).___c1_1.___y_1;
      uVar20 = (param_1->___viewBounds_31).___c1_1.___x_0;
      iVar52 = *(int *)((int)Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->
                             static_fields + 4);
      fStack_14 = (float)(param_1->___viewBounds_31).___c1_1.___z_2;
      local_20.___z_4 = (float)(param_1->___viewBounds_31).___c1_1.___z_2;
      local_20.___y_3 = (float)uVar20;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_20,(float)(int)uVar19,(float)(int)uVar58,local_20.___z_4,(MethodInfo *)0x0);
      pVVar94 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                          (&local_50,*extraout_EAX_00,(MethodInfo *)0x0);
      Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                (iVar52,*pVVar94,(MethodInfo *)0x0);
      uVar21 = (param_1->___border_29).___c0_0.___x_0;
      uVar59 = (param_1->___border_29).___c0_0.___y_1;
      uVar22 = (param_1->___border_29).___c0_0.___x_0;
      iVar52 = *(int *)((int)Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->
                             static_fields + 8);
      fStack_14 = (float)(param_1->___border_29).___c0_0.___z_2;
      local_20.___z_4 = (float)(param_1->___border_29).___c0_0.___z_2;
      local_20.___y_3 = (float)uVar22;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_20,(float)(int)uVar21,(float)(int)uVar59,local_20.___z_4,(MethodInfo *)0x0);
      pVVar94 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                          (&local_50,*extraout_EAX_01,(MethodInfo *)0x0);
      Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                (iVar52,*pVVar94,(MethodInfo *)0x0);
      uVar23 = (param_1->___border_29).___c1_1.___x_0;
      uVar60 = (param_1->___border_29).___c1_1.___y_1;
      uVar24 = (param_1->___border_29).___c1_1.___x_0;
      iVar52 = *(int *)((int)Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->
                             static_fields + 0xc);
      fStack_14 = (float)(param_1->___border_29).___c1_1.___z_2;
      local_20.___z_4 = (float)(param_1->___border_29).___c1_1.___z_2;
      local_20.___y_3 = (float)uVar24;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_20,(float)(int)uVar23,(float)(int)uVar60,local_20.___z_4,(MethodInfo *)0x0);
      pVVar94 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                          (&local_50,*extraout_EAX_02,(MethodInfo *)0x0);
      Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                (iVar52,*pVVar94,(MethodInfo *)0x0);
      uVar25 = (param_1->___bounds_28).___c0_0.___x_0;
      uVar61 = (param_1->___bounds_28).___c0_0.___y_1;
      fStack_14 = (float)(param_1->___bounds_28).___c0_0.___z_2;
      uVar26 = (param_1->___bounds_28).___c0_0.___x_0;
      local_20.___z_4 = (float)(param_1->___bounds_28).___c0_0.___z_2;
      local_20.___y_3 = (float)uVar26;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_20,(float)(int)uVar25,(float)(int)uVar61,local_20.___z_4,(MethodInfo *)0x0);
      local_68 = *extraout_EAX_03;
      pIVar77 = *(Il2CppClass **)(extraout_EAX_03 + 1);
      fStack_14 = (float)(param_1->___bounds_28).___c1_1.___z_2;
      fStack_2c = (float)local_68;
      fStack_28 = (float)((ulonglong)local_68 >> 0x20);
      uVar27 = (param_1->___bounds_28).___c1_1.___x_0;
      uVar62 = (param_1->___bounds_28).___c1_1.___y_1;
      uVar28 = (param_1->___bounds_28).___c1_1.___x_0;
      local_20.___z_4 = (float)(param_1->___bounds_28).___c1_1.___z_2;
      local_3c = pIVar77;
      pIStack_24 = pIVar77;
      local_20.___y_3 = (float)uVar28;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_80,(float)(int)uVar27,(float)(int)uVar62,local_20.___z_4,(MethodInfo *)0x0);
      local_40 = *(Il2CppClass **)(extraout_EAX_04 + 1);
      fStack_88 = (float)*extraout_EAX_04;
      local_84 = (Il2CppObject *)((ulonglong)*extraout_EAX_04 >> 0x20);
      local_20.___y_3 = fStack_88;
      local_20.___z_4 = (float)local_84;
      fStack_14 = (float)local_40;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)local_68,
                 (float)((ulonglong)local_68 >> 0x20),(float)pIVar77,(MethodInfo *)0x0);
      uVar103 = *extraout_EAX_05;
      fVar13 = *(float *)(extraout_EAX_05 + 1);
      local_80.___z_4 = (float)uVar103;
      pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)
                   ((ulonglong)uVar103 >> 0x20);
      if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
        uVar103 = CONCAT44(pBStack_74,local_80.___z_4);
      }
      fVar86.___z_2 = fVar13;
      fVar86.___x_0 = (float)(int)uVar103;
      fVar86.___y_1 = (float)(int)((ulonglong)uVar103 >> 0x20);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (fVar86,(MethodInfo *)0x0);
      pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)
                   param_1->___boundsHeight_27;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,
                           (float)(int)pBStack_74,(MethodInfo *)0x0);
      uVar29 = pfVar95->___x_0;
      uVar63 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar29,
                 (float)uVar63,pfVar95->___z_2,(MethodInfo *)0x0);
      fVar13 = *(float *)(extraout_EAX_06 + 1);
      local_80.___z_4 = (float)*extraout_EAX_06;
      pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)
                   ((ulonglong)*extraout_EAX_06 >> 0x20);
      pVVar96 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,
                           (MethodInfo *)0x0);
      VVar84.___y_3 = (float)pBStack_74;
      VVar84.___x_2 = local_80.___z_4;
      VVar84.___z_4 = fVar13;
      Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,VVar84,*pVVar96,
                 (MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)local_68,
                 (float)((ulonglong)local_68 >> 0x20),(float)local_3c,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_07,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar30 = pfVar95->___x_0;
      uVar64 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar30,
                 (float)uVar64,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_08,
                 (MethodInfo *)0x0);
      local_60 = (Il2CppClass *)fStack_14;
      local_80.___x_2 = fStack_2c;
      local_80.___y_3 = 0.0;
      local_80.___z_4 = 0.0;
      pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)0x0;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,fStack_2c,fStack_28,
                 fStack_14,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_09,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar31 = pfVar95->___x_0;
      uVar65 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar31,
                 (float)uVar65,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_10,
                 (MethodInfo *)0x0);
      local_60 = pIStack_24;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,local_80.___x_2,
                 local_20.___z_4,(float)pIStack_24,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_11,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar32 = pfVar95->___x_0;
      uVar66 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar32,
                 (float)uVar66,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_12,
                 (MethodInfo *)0x0);
      local_60 = (Il2CppClass *)fStack_14;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,local_80.___x_2,
                 local_20.___z_4,fStack_14,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_13,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar33 = pfVar95->___x_0;
      uVar67 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar33,
                 (float)uVar67,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_14,
                 (MethodInfo *)0x0);
      local_60 = pIStack_24;
      local_80.___x_2 = local_20.___y_3;
      local_80.___y_3 = 0.0;
      local_80.___z_4 = 0.0;
      pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)0x0;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,local_20.___y_3,
                 fStack_28,(float)pIStack_24,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_15,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar34 = pfVar95->___x_0;
      uVar68 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar34,
                 (float)uVar68,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_16,
                 (MethodInfo *)0x0);
      local_60 = (Il2CppClass *)fStack_14;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,local_80.___x_2,
                 fStack_28,fStack_14,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_17,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar35 = pfVar95->___x_0;
      uVar69 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar35,
                 (float)uVar69,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_18,
                 (MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,local_80.___x_2,
                 local_20.___z_4,(float)pIStack_24,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_19,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar36 = pfVar95->___x_0;
      uVar70 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar36,
                 (float)uVar70,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_20,
                 (MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,fStack_88,
                 (float)local_84,(float)local_40,(MethodInfo *)0x0);
      fVar109 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                          (*extraout_EAX_21,(MethodInfo *)0x0);
      pfVar95 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                          ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,fVar109,0.0
                           ,(MethodInfo *)0x0);
      uVar37 = pfVar95->___x_0;
      uVar71 = pfVar95->___y_1;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,(float)uVar37,
                 (float)uVar71,pfVar95->___z_2,(MethodInfo *)0x0);
      Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,*extraout_EAX_22,
                 (MethodInfo *)0x0);
      pVVar97 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                          ((ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *)&local_50,
                           (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)local_b0,
                           (MethodInfo *)0x0);
      uVar38 = pVVar97->___Item1_0;
      uVar72 = pVVar97->___Item2_1;
      local_84 = pVVar97->___Item3_2;
      uVar39 = pVVar97->___Item1_0;
      uVar73 = pVVar97->___Item2_1;
      fStack_14 = (float)local_84 + __real_40000000;
      VVar87.___y_3 = (float)uVar72 + 0.0;
      VVar87.___x_2 = (float)uVar38 + __real_40000000;
      VVar87.___z_4 = fStack_14;
      local_8c = (float)uVar39;
      fStack_88 = (float)uVar73;
      fStack_2c = (float)uVar38;
      fStack_28 = (float)uVar72;
      pIStack_24 = (Il2CppClass *)local_84;
      local_20.___y_3 = (float)uVar38;
      local_20.___z_4 = (float)uVar72;
      Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89
                ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_b0,VVar87,
                 (MethodInfo *)0x0);
      pBVar1 = &param_1->___shadowMeshBounds_22;
      pBStack_74 = param_1->___groundCollider_33;
      (pBVar1->___m_Center_0).___x_2 = (float)local_b0._0_4_;
      (param_1->___shadowMeshBounds_22).___m_Center_0.___y_3 = (float)local_b0._4_4_;
      (param_1->___shadowMeshBounds_22).___m_Center_0.___z_4 = (float)local_b0._8_4_;
      (param_1->___shadowMeshBounds_22).___m_Extents_1.___x_2 = (float)local_b0._12_4_;
      (param_1->___shadowMeshBounds_22).___m_Extents_1.___y_3 = (float)local_b0._16_4_;
      (param_1->___shadowMeshBounds_22).___m_Extents_1.___z_4 = (float)local_b0._20_4_;
      pVVar96 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,pBVar1,
                           (MethodInfo *)0x0);
      local_40 = (Il2CppClass *)pVVar96->___x_2;
      pVVar96 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,pBVar1,
                           (MethodInfo *)0x0);
      local_20.___z_4 = 2.0;
      uVar40 = pVVar96->___x_2;
      uVar74 = pVVar96->___y_3;
      pIStack_24 = (Il2CppClass *)pVVar96->___z_4;
      local_20.___y_3 = (float)local_40 + ___real_42480000;
      fStack_14 = (float)pIStack_24 + ___real_42480000;
      fStack_2c = (float)uVar40;
      fStack_28 = (float)uVar74;
      if (pBStack_74 != (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)0x0) {
        VVar88.___y_3 = 2.0;
        VVar88.___x_2 = local_20.___y_3;
        VVar88.___z_4 = fStack_14;
        BoxCollider_set_size_mD9153B4AE4C366ACAB9E5F49075D919A89168B2E
                  (pBStack_74,VVar88,(MethodInfo *)0x0);
        pBVar106 = param_1->___groundCollider_33;
        pfVar95 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                  KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                            ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_50,
                             (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)
                             &param_1->___shadowMeshBounds_22,(MethodInfo *)0x0);
        pfVar95 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                            ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_50,*pfVar95,
                             -1.0,(MethodInfo *)0x0);
        if (pBVar106 != (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)0x0) {
          BoxCollider_set_center_m02D745E759A66BBEF405D33CE4ACE34B7E064178
                    (pBVar106,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar95,
                     (MethodInfo *)0x0);
          if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              param_1->___onBoundsUpdated_34 !=
              (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
            OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                      ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                       param_1->___onBoundsUpdated_34,(MethodInfo *)0x0);
            if ((param_1->___master_4 !=
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
               (pAVar78 = param_1->___master_4->___aoBaker_11,
               pAVar78 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) {
              AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9(pAVar78,(MethodInfo *)0x0);
              if ((param_1->___master_4 !=
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                 (pGVar79 = param_1->___master_4->___grid_5,
                 pGVar79 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)) {
                pGVar79->___focusUpdated_15 = true;
                param_1->___boundsUpdated_41 = false;
                return true;
              }
            }
          }
        }
      }
      goto LAB_10e711f0;
    }
LAB_10e70e67:
    if (param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
    goto LAB_10e711f0;
    iVar52 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                       (param_1->___corners_6,(MethodInfo *)0x0);
    if (iVar52 < 1) {
      local_50.___x_1 = (float)(param_1->___bounds_28).___c0_0.___x_0;
      local_50.___y_2 = (float)(param_1->___bounds_28).___c0_0.___y_1;
      local_50.___z_3 = (float)(param_1->___bounds_28).___c0_0.___z_2;
      local_50.___w_4 = (float)(param_1->___bounds_28).___c1_1.___x_0;
      uVar105._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
      uVar105._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
      fStack_88 = (float)(undefined4)uVar105;
      local_84 = (Il2CppObject *)uVar105._4_4_;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        uVar105 = CONCAT44(local_84,fStack_88);
      }
      iVar85.___c0_0.___y_1 = (int)local_50.___y_2;
      iVar85.___c0_0.___x_0 = (int)local_50.___x_1;
      iVar85.___c0_0.___z_2 = (int)local_50.___z_3;
      iVar85.___c1_1.___x_0 = (int)local_50.___w_4;
      iVar85.___c1_1.___y_1 = (int)uVar105;
      iVar85.___c1_1.___z_2 = (int)((ulonglong)uVar105 >> 0x20);
      piVar98 = ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
                          ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_50,iVar85,
                           (MethodInfo *)0x0);
      uVar103._0_4_ = (float)piVar98->___x_0;
      uVar103._4_4_ = (float)piVar98->___y_1;
      pIStack_24 = (Il2CppClass *)piVar98->___z_2;
      local_50.___z_3 = 0.0;
      local_50.___w_4 = 0.0;
      fStack_28 = uVar103._4_4_;
      pBStack_30 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)pIStack_24;
      fStack_2c = (float)uVar103;
      local_38 = uVar103;
LAB_10e70f0b:
      uVar107 = CONCAT44(pIStack_24,fStack_28);
      pBVar106 = pBStack_30;
      fVar13 = fStack_2c;
    }
    else {
      local_20.___x_2 = ___xmm_800000007fffffff7fffffff7fffffff;
      local_20.___y_3 = _UNK_1120f254;
      local_20.___z_4 = (float)_UNK_1120f258;
      fStack_14 = _UNK_1120f25c;
      local_3c = (Il2CppClass *)(iVar52 + -1);
      fStack_28 = -0.0;
      pIStack_24 = (Il2CppClass *)0x80000000;
      local_38 = CONCAT44(_UNK_1120f254,___xmm_800000007fffffff7fffffff7fffffff);
      pBStack_30 = _UNK_1120f258;
      fStack_2c = _UNK_1120f25c;
      uVar103._0_4_ = ___xmm_800000007fffffff7fffffff7fffffff;
      uVar103._4_4_ = _UNK_1120f254;
      if ((int)local_3c < 0) goto LAB_10e70f0b;
      local_80.___z_4 = -0.0;
      pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)0x80000000;
      do {
        if ((param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar99 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (param_1->___corners_6,(int)local_3c,(MethodInfo *)0x0),
           pTVar99 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_10e711f0;
        iVar52 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar99,(MethodInfo *)0x0);
        if (iVar52 < 1) {
          uVar107 = CONCAT44(pBStack_74,local_80.___z_4);
        }
        else {
          pIVar100 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar99,
                                Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                               );
          if (pIVar100 == (Il2CppObject *)0x0) goto LAB_10e711f0;
          pMVar80 = pIVar100[1].monitor;
          local_40 = pIVar100[2].field0_0x0.klass;
          if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
          }
          iVar90.___y_1 = (int)local_40;
          iVar90.___x_0 = (int)pMVar80;
          piVar98 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                              ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_50,iVar90,
                               (MethodInfo *)0x0);
          uVar104._0_4_ = piVar98->___x_0;
          uVar104._4_4_ = piVar98->___y_1;
          iVar52 = piVar98->___z_2;
          fStack_88 = (float)(undefined4)uVar104;
          local_84 = (Il2CppObject *)uVar104._4_4_;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            uVar104 = CONCAT44(local_84,fStack_88);
          }
          iVar82.___c0_0.___y_1 = (int)local_20.___y_3;
          iVar82.___c0_0.___x_0 = (int)local_20.___x_2;
          iVar82.___c0_0.___z_2 = (int)local_20.___z_4;
          iVar82.___c1_1.___x_0 = (int)fStack_14;
          iVar82.___c1_1.___y_1 = (int)local_80.___z_4;
          iVar82.___c1_1.___z_2 = (int)pBStack_74;
          iVar89.___z_2 = iVar52;
          iVar89.___x_0 = (int)uVar104;
          iVar89.___y_1 = (int)((ulonglong)uVar104 >> 0x20);
          piVar101 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                               ((int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *)
                                (local_b0 + 0x18),iVar82,iVar89,(MethodInfo *)0x0);
          local_20.___x_2 = (float)(piVar101->___c0_0).___x_0;
          local_20.___y_3 = (float)(piVar101->___c0_0).___y_1;
          local_38._0_4_ = (piVar101->___c0_0).___x_0;
          local_38._4_4_ = (piVar101->___c0_0).___y_1;
          pBStack_30 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)
                       (piVar101->___c0_0).___z_2;
          fStack_2c = (float)(piVar101->___c1_1).___x_0;
          uVar107._0_4_ = (piVar101->___c1_1).___y_1;
          uVar107._4_4_ = (piVar101->___c1_1).___z_2;
          local_80.___z_4 = (float)(undefined4)uVar107;
          pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)uVar107._4_4_;
          fStack_28 = (float)(undefined4)uVar107;
          pIStack_24 = (Il2CppClass *)uVar107._4_4_;
          local_20.___z_4 = (float)pBStack_30;
          fStack_14 = fStack_2c;
        }
        local_3c = (Il2CppClass *)&local_3c[-1].field_0xbf;
        uVar103._0_4_ = local_20.___x_2;
        uVar103._4_4_ = local_20.___y_3;
        pBVar106 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)local_20.___z_4;
        fVar13 = fStack_14;
      } while (-1 < (int)local_3c);
    }
    if ((((((float)(param_1->___bounds_28).___c0_0.___x_0 != (float)uVar103) ||
          ((float)(param_1->___bounds_28).___c0_0.___y_1 != uVar103._4_4_)) ||
         ((BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)
          (param_1->___bounds_28).___c0_0.___z_2 != pBStack_30)) ||
        (((float)(param_1->___bounds_28).___c1_1.___x_0 != fVar13 ||
         ((float)(param_1->___bounds_28).___c1_1.___y_1 != fStack_28)))) ||
       ((Il2CppClass *)(param_1->___bounds_28).___c1_1.___z_2 != pIStack_24)) {
      (param_1->___bounds_28).___c0_0.___x_0 = (int)(float)uVar103;
      (param_1->___bounds_28).___c0_0.___y_1 = (int)uVar103._4_4_;
      (param_1->___bounds_28).___c0_0.___z_2 = (int)pBVar106;
      (param_1->___bounds_28).___c1_1.___x_0 = (int)fVar13;
      param_1->___boundsUpdated_41 = true;
      (param_1->___bounds_28).___c1_1.___y_1 = (int)uVar107;
      (param_1->___bounds_28).___c1_1.___z_2 = (int)((ulonglong)uVar107 >> 0x20);
    }
    cVar92 = param_1->___recalculateHeightBounds_43;
    param_1->___recalculateHexBounds_42 = false;
  }
  else if (param_1->___recalculateHexBounds_42 != false) goto LAB_10e70e67;
  if (cVar92 == '\0') {
    return true;
  }
  local_3c = (Il2CppClass *)0x0;
  if (param_1->___corners_6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)
                 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (param_1->___corners_6,(MethodInfo *)0x0);
    while( true ) {
      do {
        pBStack_74 = (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)
                     &pBStack_74[-1].field_0xb;
        if ((int)pBStack_74 < 0) {
          iVar52 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                             ((float)local_3c,(MethodInfo *)0x0);
          if (iVar52 != param_1->___boundsHeight_27) {
            param_1->___boundsHeight_27 = iVar52;
            param_1->___boundsUpdated_41 = true;
          }
          param_1->___recalculateHeightBounds_43 = false;
          return true;
        }
        if ((param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pTVar99 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (param_1->___corners_6,(int)pBStack_74,(MethodInfo *)0x0),
           pTVar99 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_10e711f0;
        iVar52 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar99,(MethodInfo *)0x0);
      } while (iVar52 == 0);
      pTVar99 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                          (pTVar99,iVar52 + -1,(MethodInfo *)0x0);
      if ((pTVar99 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pTVar99 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar99,
                               (MethodInfo *)0x0),
         pTVar99 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
      pVVar96 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_50,pTVar99,
                           (MethodInfo *)0x0);
      uVar41 = pVVar96->___x_2;
      uVar75 = pVVar96->___y_3;
      local_20.___y_3 = (float)uVar41;
      local_20.___z_4 = (float)uVar75;
      local_40 = (Il2CppClass *)
                 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                           ((float)local_3c,(float)uVar75,(MethodInfo *)0x0);
      local_3c = local_40;
    }
  }
LAB_10e711f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
