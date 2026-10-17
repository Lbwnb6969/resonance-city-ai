// RVA 0x414020 | Placemaker.HoverHightlight$$<Draw>g__AddQube|5_0
// PDB: HoverHightlight_U3CDrawU3Eg__AddQubeU7C5_0_m1C7356DFCD0087DA1408AC2C3865DB0611B66144
// Body: [[10414020, 104141fc] [10414200, 104145f9] [104145fd, 1041463b] [10414642, 10414cdd] [10414cf5, 10414d55]]
// Direct callees:
// 10068e50 List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 10068f80 List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 103d8920 ModuleBuilder_GetTs_m1A7BC1970FA6EA3FE1AB7D1CE412DC962A8A5271
// 103d8dc0 ModuleBuilder_MultiplyPoint_m115DCC249253236A86D2A25CFA90AE820A806866
// 103d8fd0 ModuleBuilder_MultiplyVector_mBA4ACACA37F5D18331013ADB06BC4F745E13D98D
// 103d9dc0 ModuleMath_MulOrientations_m812958812105624A94320FF8419FA672EC530FAD
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 1074dc70 Orientation_MultiplyPoint_m1AB97C83FC6A82B8558D33E2EEB8C0739C2C84B5
// 1074dd30 Orientation_MultiplyVector_m13EF1028919F5114771AFCF98D25A15AF4B2812C
// 1074e260 OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a04800 SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44d70 Matrix4x4_LookAt_m10D4F2BE36B20AA1E6FD9373F74A49338F66356C
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
// 10a44f60 Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
// 10a45f00 Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared

void __cdecl
HoverHightlight_U3CDrawU3Eg__AddQubeU7C5_0_m1C7356DFCD0087DA1408AC2C3865DB0611B66144
          (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,
          Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_3,int param_4,int param_5,
          int param_6,U3CU3Ec__DisplayClass5_0_tA18142E8300B89FEC61715E147F0A2D8F7FAA003 *param_7,
          MethodInfo *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar5;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar6;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar7;
  List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2 *pLVar8;
  List_1_tF141C4F883AC5C4EBC64559EB11AEDA279A5058A *pLVar9;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar10;
  MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *pMVar11;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar12;
  List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F *pLVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar23;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar24;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar25;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar26;
  SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 SVar27;
  SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 SVar28;
  U3CU3Ec__DisplayClass5_0_tA18142E8300B89FEC61715E147F0A2D8F7FAA003 *pUVar29;
  undefined1 *puVar30;
  bool bVar31;
  byte bVar32;
  SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 SVar33;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar35;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar36;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar37;
  int iVar38;
  int iVar39;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *pOVar40;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar41;
  Exception_t *pEVar42;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  int *piVar43;
  MethodInfo *pMVar44;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 local_2b4;
  int local_258 [22];
  char local_200;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_1fc;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1e4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1d8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1cc;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c0;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_1b4;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_1a8;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_168;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VStack_10c;
  undefined8 local_fc;
  undefined8 local_f0;
  undefined8 local_e4;
  float local_dc;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_d8;
  undefined8 local_cc;
  float local_c4;
  undefined1 local_bc [8];
  undefined1 local_b4 [28];
  float fStack_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  Exception_t *local_80;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_7c;
  int local_78;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_74;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_70;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float local_50;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *local_4c;
  float local_48;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_44;
  float fStack_40;
  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *local_3c;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  int local_20;
  undefined1 local_19 [21];

  local_19._17_4_ = 0xffffffff;
  local_19._13_4_ =
       &
       __ehhandler__HoverHightlight_U3CDrawU3Eg__AddQubeU7C5_0_m1C7356DFCD0087DA1408AC2C3865DB0611B66144
  ;
  local_19._9_4_ = ExceptionList;
  local_19._5_4_ = &stack0xfffffd40;
  ExceptionList = local_19 + 9;
  puVar30 = &stack0xfffffd40;
  if (DAT_1151ca9b == '\0') {
    ExceptionList = local_19 + 9;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m5BCF8DCFBE4E074D9E00548E35EDD20797D0601C_RuntimeMethod_var
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
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral348432C195365978290F69F48AE541F818A52E36);
    DAT_1151ca9b = '\x01';
    puVar30 = (undefined1 *)local_19._5_4_;
  }
  local_19._5_4_ = puVar30;
  local_19[0] = 0;
  local_7c.___moduleIndex_0 = 0;
  local_7c.___flags_1 = '\0';
  local_7c._3_1_ = 0;
  memset((uchar *)&local_168,'\0',0x40);
  memset((uchar *)&local_1a8,'\0',0x40);
  local_74.___moduleIndex_0 = 0;
  local_74.___flags_1 = '\0';
  local_74._3_1_ = 0;
  memset((uchar *)local_258,'\0',0x5c);
  local_80 = (Exception_t *)0x0;
  local_88 = 0.0;
  fStack_84 = 0.0;
  local_90 = 0.0;
  fStack_8c = 0.0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_19,
             (MethodInfo *)_stringLiteral348432C195365978290F69F48AE541F818A52E36);
  local_19._17_4_ = 0;
  if ((param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
     (pLVar5 = param_2->___possibleModules_18,
     pLVar5 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)) {
    if (pLVar5->____size_2 == 0) {
LAB_10414cf5:
      local_19._17_4_ = 0xffffffff;
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_19,
                 (MethodInfo *)0x0);
      if (local_80 == (Exception_t *)0x0) {
        ExceptionList = (void *)local_19._9_4_;
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(local_80,(MethodInfo *)0x0);
    }
    pOVar6 = pLVar5->____items_1;
    local_118._0_2_ = pOVar6->m_Items[0].___sides_0.___v00_0;
    local_118._2_2_ = pOVar6->m_Items[0].___sides_0.___v01_1;
    uStack_114._0_2_ = pOVar6->m_Items[0].___sides_0.___v10_2;
    uStack_114._2_2_ = pOVar6->m_Items[0].___sides_0.___v11_3;
    uStack_110._0_2_ = pOVar6->m_Items[0].___sides_0.___v20_4;
    uStack_110._2_2_ = pOVar6->m_Items[0].___sides_0.___v21_5;
    VStack_10c.___x_1 = *(float *)&pOVar6->m_Items[0].___sides_0.___v30_6;
    VStack_10c._4_8_ = *(undefined8 *)&pOVar6->m_Items[0].___sides_0.___v4_8;
    VStack_10c.___w_4 = pOVar6->m_Items[0].___cost_2;
    local_7c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)VStack_10c.___z_3;
    if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
        (pMVar7 = param_1->___master_4->___moduleLibrary_8,
        pMVar7 != (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) &&
       (pLVar8 = pMVar7->___modules_5,
       pLVar8 != (List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2 *)0x0)) {
      if ((uint)pLVar8->____size_2 <= ((uint)VStack_10c.___z_3 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      local_b4._16_4_ =
           *(undefined4 *)(pLVar8->____items_1 + (uint)VStack_10c.___z_3._0_2_ * 4 + 0x10);
      if ((local_b4._16_4_ != 0) && (*(int *)(local_b4._16_4_ + 0x10) != 0)) {
        local_b4._20_4_ = *(int *)(*(int *)(local_b4._16_4_ + 0x10) + 0xc);
        if (local_b4._20_4_ == 0) goto LAB_10414cf5;
        pTVar34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                             (MethodInfo *)0x0);
        if (pTVar34 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_70,
                               pTVar34,(MethodInfo *)0x0);
          local_b4._4_4_ = pVVar35->___x_2;
          local_b4._8_4_ = pVVar35->___y_3;
          local_b4._12_4_ = pVVar35->___z_4;
          if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor
               != '\0') &&
             (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
          }
          iVar38 = *(int *)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                           ->static_fields;
          if (iVar38 != 0) {
            if (*(uint *)(iVar38 + 0xc) <= (uint)param_4) {
              pEVar42 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar42,(MethodInfo *)0x0);
            }
            iVar38 = iVar38 + param_4 * 2;
            SVar33.___z_4 = *(schar *)(param_4 + 0x12 + iVar38);
            SVar33._0_2_ = *(undefined2 *)(param_4 + 0x10 + iVar38);
            pfVar36 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                (&local_70,SVar33,(MethodInfo *)0x0);
            local_2c._0_4_ = pfVar36->___x_0;
            local_2c._4_4_ = pfVar36->___y_1;
            local_24 = pfVar36->___z_2;
            pVVar35 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_70,
                                 (MethodInfo *)0x0);
            local_64 = *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)pVVar35;
            local_5c = pVVar35->___z_4;
            local_58._0_4_ = pVVar35->___x_2;
            local_58._4_4_ = pVVar35->___y_3;
            local_38._0_4_ = (float)local_64;
            param_2 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                      ((float)local_38 * __real_3f000000 + (float)local_2c);
            local_48 = local_2c._4_4_ + local_64._4_4_ * __real_3f000000;
            local_4c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                       (local_24 + local_5c * __real_3f000000);
            iVar38 = *(int *)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                             ->static_fields;
            local_50 = local_5c;
            local_44 = param_2;
            fStack_40 = local_48;
            local_3c = local_4c;
            local_38 = local_64;
            local_30 = local_5c;
            if (iVar38 != 0) {
              if (*(uint *)(iVar38 + 0xc) <= (uint)param_5) {
                pEVar42 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar42,(MethodInfo *)0x0);
              }
              iVar38 = iVar38 + param_5 * 2;
              SVar27.___z_4 = *(schar *)(param_5 + 0x12 + iVar38);
              SVar27._0_2_ = *(undefined2 *)(param_5 + 0x10 + iVar38);
              pfVar36 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                  (&local_70,SVar27,(MethodInfo *)0x0);
              local_2c._0_4_ = pfVar36->___x_0;
              local_2c._4_4_ = pfVar36->___y_1;
              local_24 = pfVar36->___z_2;
              pVVar35 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_70,
                                   (MethodInfo *)0x0);
              local_64 = *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)pVVar35;
              local_5c = pVVar35->___z_4;
              local_58._0_4_ = pVVar35->___x_2;
              local_58._4_4_ = pVVar35->___y_3;
              local_38._0_4_ = (float)local_64;
              local_38._4_4_ = local_2c._4_4_ + local_64._4_4_ * __real_3f000000;
              local_38._0_4_ = (float)local_38 * __real_3f000000 + (float)local_2c;
              local_30 = local_24 + local_5c * __real_3f000000;
              iVar38 = *(int *)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                               ->static_fields;
              local_50 = local_5c;
              if (iVar38 != 0) {
                if (*(uint *)(iVar38 + 0xc) <= (uint)param_6) {
                  pEVar42 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                  il2cpp_codegen_raise_exception(pEVar42,(MethodInfo *)0x0);
                }
                iVar38 = iVar38 + param_6 * 2;
                SVar28.___z_4 = *(schar *)(param_6 + 0x12 + iVar38);
                SVar28._0_2_ = *(undefined2 *)(param_6 + 0x10 + iVar38);
                pfVar36 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                    (&local_70,SVar28,(MethodInfo *)0x0);
                local_2c._0_4_ = pfVar36->___x_0;
                local_2c._4_4_ = pfVar36->___y_1;
                local_24 = pfVar36->___z_2;
                pVVar35 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_70,
                                     (MethodInfo *)0x0);
                unique0x0000a400 = *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)pVVar35;
                local_5c = pVVar35->___z_4;
                local_58._0_4_ = pVVar35->___x_2;
                local_58._4_4_ = pVVar35->___y_3;
                local_64._4_4_ = local_b4._28_4_;
                local_70.___z_2 = (local_24 + local_5c * __real_3f000000) - (float)local_4c;
                VVar14.___y_3 = fStack_40;
                VVar14.___x_2 = (float)local_44;
                VVar14.___z_4 = (float)local_3c;
                VVar16.___z_4 = local_30;
                VVar16._0_8_ = local_38;
                VVar17.___y_3 = (local_2c._4_4_ + local_64._4_4_ * __real_3f000000) - local_48;
                VVar17.___x_2 =
                     ((float)local_b4._24_4_ * __real_3f000000 + (float)local_2c) - (float)param_2;
                VVar17.___z_4._0_1_ = SUB41(local_70.___z_2,0);
                VVar17.___z_4._1_1_ = (char)((uint)local_70.___z_2 >> 8);
                VVar17.___z_4._2_1_ = (char)((uint)local_70.___z_2 >> 0x10);
                VVar17.___z_4._3_1_ = (char)((uint)local_70.___z_2 >> 0x18);
                local_64 = unique0x0000a400;
                local_50 = local_5c;
                pMVar37 = Matrix4x4_LookAt_m10D4F2BE36B20AA1E6FD9373F74A49338F66356C
                                    ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                     &local_2b4.___int4x4_0.___c1_1.___w_3,VVar14,VVar16,VVar17,
                                     (MethodInfo *)0x0);
                local_1a8.___m00_0 = pMVar37->___m00_0;
                local_1a8.___m10_1 = pMVar37->___m10_1;
                local_1a8.___m20_2 = pMVar37->___m20_2;
                local_1a8.___m30_3 = pMVar37->___m30_3;
                local_1a8.___m01_4 = pMVar37->___m01_4;
                local_1a8.___m11_5 = pMVar37->___m11_5;
                local_1a8.___m21_6 = pMVar37->___m21_6;
                local_1a8.___m31_7 = pMVar37->___m31_7;
                local_1a8.___m02_8 = pMVar37->___m02_8;
                local_1a8.___m12_9 = pMVar37->___m12_9;
                local_1a8.___m22_10 = pMVar37->___m22_10;
                local_1a8.___m32_11 = pMVar37->___m32_11;
                local_1a8.___m03_12 = pMVar37->___m03_12;
                local_1a8.___m13_13 = pMVar37->___m13_13;
                local_1a8.___m23_14 = pMVar37->___m23_14;
                local_1a8.___m33_15 = pMVar37->___m33_15;
                pMVar37 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225
                                    ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                     &local_2b4.___int4x4_0.___c1_1.___w_3,&local_1a8,
                                     (MethodInfo *)0x0);
                local_168.___m00_0 = pMVar37->___m00_0;
                local_168.___m10_1 = pMVar37->___m10_1;
                local_168.___m20_2 = pMVar37->___m20_2;
                local_168.___m30_3 = pMVar37->___m30_3;
                local_168.___m01_4 = pMVar37->___m01_4;
                local_168.___m11_5 = pMVar37->___m11_5;
                local_168.___m21_6 = pMVar37->___m21_6;
                local_168.___m31_7 = pMVar37->___m31_7;
                local_168.___m02_8 = pMVar37->___m02_8;
                local_168.___m12_9 = pMVar37->___m12_9;
                local_168.___m22_10 = pMVar37->___m22_10;
                local_168.___m32_11 = pMVar37->___m32_11;
                local_168.___m03_12 = pMVar37->___m03_12;
                local_168.___m13_13 = pMVar37->___m13_13;
                local_168.___m23_14 = pMVar37->___m23_14;
                local_168.___m33_15 = pMVar37->___m33_15;
                for (local_48 = 0.0; (int)local_48 < (int)local_b4._20_4_;
                    local_48 = (float)((int)local_48 + 1)) {
                  iVar38 = *(int *)(local_b4._16_4_ + 0x10);
                  if (iVar38 == 0) goto LAB_10414d49;
                  if ((uint)*(float *)(iVar38 + 0xc) <= (uint)local_48) {
                    /* WARNING: Subroutine does not return */
                    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                              ((MethodInfo *)0x0);
                  }
                  local_74 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                              (*(int *)(iVar38 + 8) + 0x10 + (int)local_48 * 4);
                  if (((param_1->___master_4 ==
                        (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                      (pMVar7 = param_1->___master_4->___moduleLibrary_8,
                      pMVar7 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) ||
                     (pLVar9 = pMVar7->___moduleMeshes_9,
                     pLVar9 == (List_1_tF141C4F883AC5C4EBC64559EB11AEDA279A5058A *)0x0))
                  goto LAB_10414d49;
                  if ((uint)pLVar9->____size_2 <= ((uint)local_74 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
                    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                              ((MethodInfo *)0x0);
                  }
                  local_20 = *(int *)(pLVar9->____items_1 + ((uint)local_74 & 0xffff) * 4 + 0x10);
                  if (local_20 == 0) goto LAB_10414d49;
                  pOVar10 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(local_20 + 8);
                  if ((param_1->___master_4 ==
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                     (pMVar11 = param_1->___master_4->___materialMaster_13,
                     pMVar11 == (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0))
                  goto LAB_10414d49;
                  pOVar12 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                            pMVar11->___houseMaterial_7;
                  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)
                    ;
                  }
                  bVar31 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                     (pOVar10,pOVar12,(MethodInfo *)0x0);
                  if (!bVar31) {
                    iVar38 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                       (&local_7c,(MethodInfo *)0x0);
                    iVar39 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                       (&local_74,(MethodInfo *)0x0);
                    if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                );
                    }
                    bVar32 = ModuleMath_MulOrientations_m812958812105624A94320FF8419FA672EC530FAD
                                       (iVar38,iVar39,(MethodInfo *)0x0);
                    pLVar13 = *(List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F **)
                               ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                     ->static_fields + 0x1c);
                    if (pLVar13 == (List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F *)0x0)
                    goto LAB_10414d49;
                    pOVar40 = List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_inline
                                        (&local_2b4,pLVar13,(uint)bVar32,
                                         List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_RuntimeMethod_var
                                        );
                    pUVar29 = param_7;
                    piVar43 = local_258;
                    for (iVar38 = 0x17; iVar38 != 0; iVar38 = iVar38 + -1) {
                      *piVar43 = (pOVar40->___int4x4_0).___c0_0.___x_0;
                      pOVar40 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                                &(pOVar40->___int4x4_0).___c0_0.___y_1;
                      piVar43 = piVar43 + 1;
                    }
                    if (*(int *)(local_20 + 0xc) == 0) goto LAB_10414d49;
                    local_4c = *(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
                                (*(int *)(local_20 + 0xc) + 0xc);
                    if (*(int *)(local_20 + 0x24) == 0) goto LAB_10414d49;
                    local_78 = *(int *)(*(int *)(local_20 + 0x24) + 0xc);
                    for (pMVar44 = (MethodInfo *)0x0; (int)pMVar44 < (int)local_4c;
                        pMVar44 = (MethodInfo *)((int)&pMVar44->methodPointer + 1)) {
                      if (*(int *)(local_20 + 0xc) == 0) goto LAB_10414d49;
                      SVar33 = List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_inline
                                         ((List_1_t8DEA33444BDBB4BDE2CE7634D30849EF26C1F391 *)
                                          &param_2,*(int *)(local_20 + 0xc),pMVar44);
                      SVar33 = Orientation_MultiplyPoint_m1AB97C83FC6A82B8558D33E2EEB8C0739C2C84B5
                                         ((Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                                          local_b4,SUB43(local_258,0),
                                          (MethodInfo *)
                                          CONCAT13(extraout_var_03,
                                                   *(undefined3 *)CONCAT13(extraout_var,SVar33)));
                      pfVar36 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                          (&local_1b4,
                                           *(SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *
                                            )CONCAT13(extraout_var_00,SVar33),(MethodInfo *)0x0);
                      local_58._0_4_ = pfVar36->___x_0;
                      local_58._4_4_ = pfVar36->___y_1;
                      local_50 = pfVar36->___z_2;
                      pVVar35 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                          (&local_1c0,(MethodInfo *)0x0);
                      local_d8 = *(ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *)pVVar35;
                      local_c4 = pVVar35->___z_4;
                      local_cc._0_4_ = pVVar35->___x_2;
                      local_cc._4_4_ = pVVar35->___y_3;
                      fStack_98 = local_d8._4_4_;
                      local_38._4_4_ = local_58._4_4_ + fStack_98 * __real_3f000000;
                      local_38._0_4_ = (float)local_d8._0_4_ * __real_3f000000 + (float)local_58;
                      local_30 = local_50 + local_c4 * __real_3f000000;
                      unique0x10001630 = local_d8;
                      if (*(int *)(local_20 + 0x14) == 0) goto LAB_10414d49;
                      SVar33 = List_1_get_Item_m11C1967E2364CEC48AB55CC789B93281B4A7D50D_inline
                                         ((List_1_t8DEA33444BDBB4BDE2CE7634D30849EF26C1F391 *)
                                          local_bc,*(int *)(local_20 + 0x14),pMVar44);
                      SVar33 = Orientation_MultiplyVector_m13EF1028919F5114771AFCF98D25A15AF4B2812C
                                         ((Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                                          (local_bc + 4),SUB43(local_258,0),
                                          (MethodInfo *)
                                          CONCAT13(extraout_var_04,
                                                   *(undefined3 *)CONCAT13(extraout_var_01,SVar33)))
                      ;
                      pfVar36 = SbyteFloat3_op_Explicit_m635D35DCF9E805EC0D9E9053CB1F943278B78D38
                                          (&local_1fc,
                                           *(SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *
                                            )CONCAT13(extraout_var_02,SVar33),(MethodInfo *)0x0);
                      uVar1 = pfVar36->___x_0;
                      uVar3 = pfVar36->___y_1;
                      local_19._1_4_ = pfVar36->___z_2;
                      VVar18.___z_4._0_1_ = SUB41(local_30,0);
                      VVar18._0_8_ = local_38;
                      VVar18.___z_4._1_1_ = (char)((uint)local_30 >> 8);
                      VVar18.___z_4._2_1_ = (char)((uint)local_30 >> 0x10);
                      VVar18.___z_4._3_1_ = (char)((uint)local_30 >> 0x18);
                      fStack_40 = (float)uVar1;
                      local_3c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)uVar3;
                      pVVar35 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                          (&local_1cc,&local_168,VVar18,(MethodInfo *)0x0);
                      local_2c._0_4_ = pVVar35->___x_2;
                      local_2c._4_4_ = pVVar35->___y_3;
                      local_24 = pVVar35->___z_4;
                      VVar19.___y_3 = (float)local_3c;
                      VVar19.___x_2 = fStack_40;
                      VVar19.___z_4._0_1_ = (char)local_19._1_4_;
                      VVar19.___z_4._1_1_ = SUB41(local_19._1_4_,1);
                      VVar19.___z_4._2_1_ = SUB41(local_19._1_4_,2);
                      VVar19.___z_4._3_1_ = SUB41(local_19._1_4_,3);
                      pVVar35 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                                          (&local_1d8,&local_168,VVar19,(MethodInfo *)0x0);
                      local_e4._0_4_ = pVVar35->___x_2;
                      local_e4._4_4_ = pVVar35->___y_3;
                      local_dc = pVVar35->___z_4;
                      fStack_8c = local_dc + local_dc;
                      if (((float)local_2c == 0.0) && (local_2c._4_4_ == 0.0)) {
                        pUVar29->___zOffset_0 = local_24;
                      }
                      local_88 = (float)local_2c;
                      fStack_84 = local_2c._4_4_;
                      local_90 = local_24;
                      VVar20.___z_4._0_1_ = SUB41(local_30,0);
                      VVar20._0_8_ = local_38;
                      VVar20.___z_4._1_1_ = (char)((uint)local_30 >> 8);
                      VVar20.___z_4._2_1_ = (char)((uint)local_30 >> 0x10);
                      VVar20.___z_4._3_1_ = (char)((uint)local_30 >> 0x18);
                      pVVar41 = ModuleBuilder_GetTs_m1A7BC1970FA6EA3FE1AB7D1CE412DC962A8A5271
                                          (&VStack_10c,VVar20,(MethodInfo *)0x0);
                      local_128 = pVVar41->___x_1;
                      fStack_124 = pVVar41->___y_2;
                      fStack_120 = pVVar41->___z_3;
                      fStack_11c = pVVar41->___w_4;
                      VVar21.___z_4._0_1_ = SUB41(local_30,0);
                      VVar21._0_8_ = local_38;
                      VVar21.___z_4._1_1_ = (char)((uint)local_30 >> 8);
                      VVar21.___z_4._2_1_ = (char)((uint)local_30 >> 0x10);
                      VVar21.___z_4._3_1_ = (char)((uint)local_30 >> 0x18);
                      pVVar35 = ModuleBuilder_MultiplyPoint_m115DCC249253236A86D2A25CFA90AE820A806866
                                          (&local_1e4,param_3,*pVVar41,VVar21,(MethodInfo *)0x0);
                      local_fc._0_4_ = pVVar35->___x_2;
                      local_fc._4_4_ = pVVar35->___y_3;
                      local_70.___z_2 = pVVar35->___z_4;
                      local_70.___x_0 = pVVar35->___x_2;
                      local_70.___y_1 = pVVar35->___y_3;
                      local_64._4_4_ = (float)local_b4._8_4_ + (float)local_fc._4_4_;
                      local_64._0_4_ = (float)local_b4._4_4_ + (float)(undefined4)local_fc;
                      local_5c = (float)local_b4._12_4_ + local_70.___z_2;
                      VVar15.___y_2 = fStack_124;
                      VVar15.___x_1 = local_128;
                      VVar15.___z_3 = fStack_120;
                      VVar15.___w_4 = fStack_11c;
                      VVar22.___y_3 = (float)local_3c;
                      VVar22.___x_2 = fStack_40;
                      VVar22.___z_4._0_1_ = (char)local_19._1_4_;
                      VVar22.___z_4._1_1_ = SUB41(local_19._1_4_,1);
                      VVar22.___z_4._2_1_ = SUB41(local_19._1_4_,2);
                      VVar22.___z_4._3_1_ = SUB41(local_19._1_4_,3);
                      local_f0 = local_fc;
                      pVVar35 = ModuleBuilder_MultiplyVector_mBA4ACACA37F5D18331013ADB06BC4F745E13D98D
                                          (&local_1f0,param_3,VVar15,VVar22,(MethodInfo *)0x0);
                      uVar2 = pVVar35->___x_2;
                      uVar4 = pVVar35->___y_3;
                      local_19._1_4_ = pVVar35->___z_4;
                      fStack_40 = (float)uVar2;
                      local_3c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)uVar4;
                      if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pUVar29->___verts_1 ==
                          (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                      goto LAB_10414d49;
                      lVar23.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_1_ = SUB41(local_5c,0);
                      lVar23._0_8_ = local_64;
                      lVar23.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._1_1_ = (char)((uint)local_5c >> 8);
                      lVar23.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_1_ = (char)((uint)local_5c >> 0x10)
                      ;
                      lVar23.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._3_1_ = (char)((uint)local_5c >> 0x18)
                      ;
                      List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                                ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                 pUVar29->___verts_1,lVar23,
                                 List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var
                                );
                      if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pUVar29->___normals_2
                          == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                      goto LAB_10414d49;
                      lVar24.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = (int)local_3c;
                      lVar24.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (int)fStack_40;
                      lVar24.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_1_ = (char)local_19._1_4_;
                      lVar24.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._1_1_ = SUB41(local_19._1_4_,1);
                      lVar24.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_1_ = SUB41(local_19._1_4_,2);
                      lVar24.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._3_1_ = SUB41(local_19._1_4_,3);
                      List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                                ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                 pUVar29->___normals_2,lVar24,
                                 List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var
                                );
                      if ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pUVar29->___uvs_3 ==
                          (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0)
                      goto LAB_10414d49;
                      fVar25.___y_1._0_1_ = SUB41(fStack_84,0);
                      fVar25.___x_0 = local_88;
                      fVar25.___y_1._1_1_ = (char)((uint)fStack_84 >> 8);
                      fVar25.___y_1._2_1_ = (char)((uint)fStack_84 >> 0x10);
                      fVar25.___y_1._3_1_ = (char)((uint)fStack_84 >> 0x18);
                      List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                                ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                                 pUVar29->___uvs_3,fVar25,
                                 List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var
                                );
                      if ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pUVar29->___uv2s_4 ==
                          (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0)
                      goto LAB_10414d49;
                      fVar26.___y_1._0_1_ = SUB41(fStack_8c,0);
                      fVar26.___x_0 = local_90;
                      fVar26.___y_1._1_1_ = (char)((uint)fStack_8c >> 8);
                      fVar26.___y_1._2_1_ = (char)((uint)fStack_8c >> 0x10);
                      fVar26.___y_1._3_1_ = (char)((uint)fStack_8c >> 0x18);
                      List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                                ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                                 pUVar29->___uv2s_4,fVar26,
                                 List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var
                                );
                    }
                    iVar38 = 0;
                    if (local_200 == '\0') {
                      for (; iVar38 < local_78; iVar38 = iVar38 + 3) {
                        local_3c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   pUVar29->___tris_5;
                        local_19._1_4_ = pUVar29->___startVertIndex_6;
                        if (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(local_20 + 0x24)
                            == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                        goto LAB_10414d49;
                        bVar32 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                           (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                                             (local_20 + 0x24),iVar38 + 2,
                                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                           );
                        if (local_3c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                        goto LAB_10414d49;
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  (local_3c,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                             )((int)(int *)local_19._1_4_ + (uint)bVar32),
                                   List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                  );
                        local_3c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   pUVar29->___tris_5;
                        local_19._1_4_ = pUVar29->___startVertIndex_6;
                        if (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(local_20 + 0x24)
                            == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                        goto LAB_10414d49;
                        bVar32 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                           (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                                             (local_20 + 0x24),iVar38 + 1,
                                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                           );
                        if (local_3c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                        goto LAB_10414d49;
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  (local_3c,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                             )((int)(int *)local_19._1_4_ + (uint)bVar32),
                                   List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                  );
                        local_3c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   pUVar29->___tris_5;
                        local_19._1_4_ = pUVar29->___startVertIndex_6;
                        if (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(local_20 + 0x24)
                            == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                        goto LAB_10414d49;
                        bVar32 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                           (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                                             (local_20 + 0x24),iVar38,
                                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                           );
                        if (local_3c == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                        goto LAB_10414d49;
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  (local_3c,(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                             )((int)(int *)local_19._1_4_ + (uint)bVar32),
                                   List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                  );
                      }
                    }
                    else {
                      for (; iVar38 < local_78; iVar38 = iVar38 + 1) {
                        local_19._1_4_ = pUVar29->___tris_5;
                        local_3c = (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   pUVar29->___startVertIndex_6;
                        if (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(local_20 + 0x24)
                            == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                        goto LAB_10414d49;
                        bVar32 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                           (*(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)
                                             (local_20 + 0x24),iVar38,
                                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                           );
                        if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_19._1_4_ ==
                            (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                        goto LAB_10414d49;
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   local_19._1_4_,
                                   (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                   ((int)&local_3c->_padding_ + (uint)bVar32),
                                   List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                  );
                      }
                    }
                    pUVar29->___startVertIndex_6 =
                         (int)&local_4c->_padding_ + pUVar29->___startVertIndex_6;
                  }
                }
                goto LAB_10414cf5;
              }
            }
          }
        }
      }
    }
  }
LAB_10414d49:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
