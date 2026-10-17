// RVA 0x3f1e80 | Placemaker.WaveFunctionCollapse$$FillQubePossibilities
// PDB: WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
// Body: [[103f1e80, 103f202d] [103f2031, 103f2173] [103f217d, 103f21b7] [103f21bb, 103f21f3] [103f21f7, 103f29f8] [103f2a15, 103f2a9f]]
// Direct callees:
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 10069360 List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10195ff0 _CIfmod
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 102f54f0 SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
// 102f5590 SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
// 103f52d0 WaveFunctionCollapse_RemovePossibleModule_m20B67AFC733875C1F0E90CC6D12A344E1CDEE7AB
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1074e260 OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
// 10809850 Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D
// 10809860 Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6c100 Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
// 11030500 List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_gshared
// 11035150 List_1_Insert_m4FCC9DB2367D035F291D9D032CE015498BE04003_gshared
// 1103eb90 List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_gshared
// 11080ce0 List_1_Contains_m793EB605F2702C16DE665C690BFA9B9675529D94_gshared

/* WARNING: Removing unreachable block (ram,0x103f2a98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar __cdecl
WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,MethodInfo *param_3)

{
  short sVar1;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar2;
  List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3 *pLVar3;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar4;
  List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2 *pLVar5;
  List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *pLVar6;
  List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *pLVar7;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar8;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar9;
  MappedMaterial_tBB33F3590DC5E0184168C9FEDC54D65657066192 MVar10;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 *puVar14;
  bool bVar15;
  char cVar16;
  ushort uVar17;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *pRVar18;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar20;
  uint uVar21;
  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *pSVar22;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar23;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar24;
  byte bVar25;
  byte bVar26;
  int iVar27;
  int iVar28;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar29;
  undefined4 uVar30;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_158;
  undefined1 local_128 [28];
  undefined1 local_10c [4];
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_108;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OStack_104;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  float local_e0;
  undefined1 local_dc [16];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_cc;
  undefined1 local_bc [16];
  undefined8 local_ac;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  undefined1 local_94 [4];
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_90;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OStack_8c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_88;
  undefined8 local_84;
  float local_7c;
  undefined1 local_78 [4];
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_74;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OStack_70;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQStack_6c;
  undefined4 local_68;
  int local_64;
  uint local_60;
  float local_5c;
  uint local_58;
  undefined4 local_54;
  undefined8 local_50;
  uint local_48;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_44;
  float local_40;
  ushort local_3a;
  undefined8 local_38;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  undefined1 local_19 [17];
  undefined4 local_8;

  local_8 = 0xffffffff;
  local_19._13_4_ =
       &
       __ehhandler__WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
  ;
  local_19._9_4_ = ExceptionList;
  local_19._5_4_ = &stack0xfffffe9c;
  ExceptionList = local_19 + 9;
  puVar14 = &stack0xfffffe9c;
  if (DAT_1151c921 == '\0') {
    ExceptionList = local_19 + 9;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Contains_mC571B31DBE9B69E6140E5CD901110DC3778F0133_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_mD8DA61036349D15BBC1DD565AAD78E169E57E30F_RuntimeMethod_var);
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
              ((uint *)&List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m6D92FA65BC8228B91CCB6AD672A9716D8E246E61_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD334E70A7DCC51237ACD9BB569BDD4B10D2F36A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralAF8DB4C60E3224638FBF7D3A5BD21958FB5FE41C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralECED549A86813770495E49F32079C7149070AE47);
    DAT_1151c921 = '\x01';
    puVar14 = (undefined1 *)local_19._5_4_;
  }
  local_19._5_4_ = puVar14;
  local_44.___moduleIndex_0 = 0;
  local_44.___flags_1 = '\0';
  local_44._3_1_ = 0;
  local_84 = 0;
  local_7c = 0.0;
  local_68._0_2_ = 0;
  local_68._2_2_ = 0;
  local_19[0] = 0;
  local_ac = 0;
  local_a4 = 0.0;
  local_e8 = 0;
  local_e0 = 0.0;
  local_94._0_2_ = 0;
  local_94._2_2_ = 0;
  pQStack_90 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  OStack_8c.___moduleIndex_0 = 0;
  OStack_8c.___flags_1 = '\0';
  OStack_8c._3_1_ = 0;
  pQStack_88 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  local_78._0_2_ = 0;
  local_78._2_2_ = 0;
  pQStack_74 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  OStack_70.___moduleIndex_0 = 0;
  OStack_70.___flags_1 = '\0';
  OStack_70._3_1_ = 0;
  pQStack_6c = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
  local_bc._0_2_ = 0;
  local_bc._2_2_ = 0;
  local_bc._4_2_ = 0;
  local_bc._6_2_ = 0;
  local_bc._8_2_ = 0;
  local_bc._10_2_ = 0;
  local_bc._12_2_ = 0;
  local_bc._14_2_ = 0;
  local_f8._0_2_ = 0;
  local_f8._2_2_ = 0;
  local_f8._4_2_ = 0;
  local_f8._6_2_ = 0;
  local_f8._8_2_ = 0;
  local_f8._10_2_ = 0;
  local_f8._12_2_ = 0;
  local_f8._14_2_ = 0;
  if ((param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
     (param_2->___possibleModules_18 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)) {
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2->___possibleModules_18,
               List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
    bVar15 = Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D(param_2,(MethodInfo *)0x0);
    if (bVar15) {
      ExceptionList = (void *)local_19._9_4_;
      return '\0';
    }
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pMVar2 = param_1->___master_4->___moduleLibrary_8,
       pMVar2 != (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) {
      pLVar3 = pMVar2->___cornerLookups_7;
      if (pLVar3 != (List_1_tDF39F0070295AEA28704D5911074570BAA2FA4F3 *)0x0) {
        if ((uint)pLVar3->____size_2 <= (uint)param_2->___possibleModuleListIndex_8) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        if (*(int *)(pLVar3->____items_1 + param_2->___possibleModuleListIndex_8 * 4 + 0x10) != 0) {
          local_2c = *(int *)(*(int *)(pLVar3->____items_1 +
                                      param_2->___possibleModuleListIndex_8 * 4 + 0x10) + 0x10);
          if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             && (pGVar4 = param_1->___master_4->___graph_7,
                pGVar4 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
            pRVar18 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)local_128,
                                 pGVar4,param_2,0xff,(MethodInfo *)0x0);
            local_158.___r0_0.___qube_0 = (pRVar18->___r0_0).___qube_0;
            local_158.___r0_0.___indexInOther_1 = (pRVar18->___r0_0).___indexInOther_1;
            local_158.___r0_0._5_3_ = *(undefined3 *)&(pRVar18->___r0_0).field_0x5;
            local_158.___r1_1.___qube_0 = (pRVar18->___r1_1).___qube_0;
            local_158.___r1_1.___indexInOther_1 = (pRVar18->___r1_1).___indexInOther_1;
            local_158.___r1_1._5_3_ = *(undefined3 *)&(pRVar18->___r1_1).field_0x5;
            local_158.___r2_2.___qube_0 = (pRVar18->___r2_2).___qube_0;
            local_158.___r2_2.___indexInOther_1 = (pRVar18->___r2_2).___indexInOther_1;
            local_158.___r2_2._5_3_ = *(undefined3 *)&(pRVar18->___r2_2).field_0x5;
            local_158.___r3_3.___qube_0 = (pRVar18->___r3_3).___qube_0;
            local_158.___r3_3.___indexInOther_1 = (pRVar18->___r3_3).___indexInOther_1;
            local_158.___r3_3._5_3_ = *(undefined3 *)&(pRVar18->___r3_3).field_0x5;
            local_158.___r4_4.___qube_0 = (pRVar18->___r4_4).___qube_0;
            local_158.___r4_4.___indexInOther_1 = (pRVar18->___r4_4).___indexInOther_1;
            local_158.___r4_4._5_3_ = *(undefined3 *)&(pRVar18->___r4_4).field_0x5;
            local_158.___r5_5.___qube_0 = (pRVar18->___r5_5).___qube_0;
            local_158.___r5_5.___indexInOther_1 = (pRVar18->___r5_5).___indexInOther_1;
            local_158.___r5_5._5_3_ = *(undefined3 *)&(pRVar18->___r5_5).field_0x5;
            pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                 (MethodInfo *)0x0);
            if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              local_20 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                                   (pTVar19,(MethodInfo *)0x0);
              local_19[2] = local_20 == 0;
              local_54._0_2_ = 0;
              local_54._2_2_ = 0;
              local_20 = local_20 & 0xffffff00;
              local_10c._0_2_ = 0;
              local_10c._2_2_ = 0;
              pQStack_108 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
              OStack_104.___moduleIndex_0 = 0;
              OStack_104.___flags_1 = '\0';
              OStack_104._3_1_ = 0;
              pQStack_100 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
              local_19[3] = 0;
              pTVar19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                   (MethodInfo *)0x0);
              if (pTVar19 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pVVar20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                    (&VStack_cc,pTVar19,(MethodInfo *)0x0);
                local_58 = 0xffffffff;
                local_19[4] = '\0';
                local_a0._0_4_ = pVVar20->___x_2;
                local_a0._4_4_ = pVVar20->___y_3;
                local_98 = pVVar20->___z_4;
                local_24 = 0xffff;
                local_5c = 0.0;
                local_19[1] = '\0';
                local_38 = (double)CONCAT44(__real_7f7fffff,(undefined4)local_38);
                param_2->___cost_12 = 3.4028235e+38;
                local_64 = 0;
                local_60 = 0;
                if (local_2c != 0) {
                  local_50 = (double)CONCAT44(*(int *)(local_2c + 0xc),(undefined4)local_50);
                  if (0 < *(int *)(local_2c + 0xc)) {
                    local_28 = 0x10;
                    do {
                      if (*(uint *)(local_2c + 0xc) <= local_60) {
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      local_44 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                                  (local_28 + *(int *)(local_2c + 8));
                      if (((param_1->___master_4 ==
                            (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                          (pMVar2 = param_1->___master_4->___moduleLibrary_8,
                          pMVar2 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0))
                         || (pLVar5 = pMVar2->___modules_5,
                            pLVar5 == (List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2 *)0x0))
                      goto LAB_103f2a93;
                      if ((uint)pLVar5->____size_2 <= ((uint)local_44 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      local_48 = *(uint *)(pLVar5->____items_1 +
                                          ((uint)local_44 & 0xffff) * 4 + 0x10);
                      if (local_48 == 0) goto LAB_103f2a93;
                      iVar27 = *(int *)(local_48 + 0xc);
                      uVar21 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                         (&local_44,(MethodInfo *)0x0);
                      if (iVar27 == 0) goto LAB_103f2a93;
                      if (*(uint *)(iVar27 + 0xc) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      uVar17 = *(ushort *)(*(int *)(iVar27 + 8) + 0x10 + uVar21 * 2);
                      uVar21 = (uint)uVar17;
                      sVar1 = *(short *)(local_48 + 8);
                      if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var
                                  );
                      }
                      local_38 = (double)(float)((uint)(((float)(int)local_60 + (float)local_a0 +
                                                         local_98 + local_a0._4_4_) *
                                                        ___real_40490fdb * ___real_41880000) &
                                                __xmm_7fffffff7fffffff7fffffff7fffffff);
                      _CIfmod();
                      local_38._0_4_ = SUB84((double)extraout_ST0,0);
                      local_38 = (double)(ulonglong)CONCAT24(uVar17,(undefined4)local_38);
                      local_40 = (float)(int)sVar1 + (float)extraout_ST0;
                      if (local_24 == uVar21) {
                        if ((local_19[4] != '\0') && (local_40 < local_5c)) {
                          if ((param_1->___master_4 ==
                               (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                             ((pMVar2 = param_1->___master_4->___moduleLibrary_8,
                              pMVar2 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)
                                        0x0 ||
                              (pLVar6 = pMVar2->___sideLookups_8,
                              pLVar6 == (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *)0x0))))
                          goto LAB_103f2a93;
                          pSVar22 = List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
                                              ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                                *)(local_dc + 8),pLVar6,uVar21,
                                               List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var
                                              );
                          local_94._0_2_ = pSVar22->___v00_0;
                          local_94._2_2_ = pSVar22->___v01_1;
                          pQStack_90 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                                        &pSVar22->___v10_2;
                          OStack_8c = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                                       &pSVar22->___v20_4;
                          pQStack_88 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                                        &pSVar22->___v30_6;
                          uVar30._0_2_ = pSVar22->___v4_8;
                          uVar30._2_2_ = pSVar22->___v5_9;
                          local_84 = CONCAT44(local_44,uVar30);
                          local_7c = local_40;
                          if (param_2->___possibleModules_18 ==
                              (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                          goto LAB_103f2a93;
                          OVar11.___orientedModule_1 = local_44;
                          OVar11.___sides_0 = *pSVar22;
                          OVar11.___cost_2 = local_40;
                          List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_gshared
                                    (param_2->___possibleModules_18,local_58,OVar11,
                                     List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_RuntimeMethod_var
                                    );
                          local_5c = local_40;
                        }
                      }
                      else {
                        if (((param_1->___master_4 ==
                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                            (pMVar2 = param_1->___master_4->___moduleLibrary_8,
                            pMVar2 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0
                            )) || (pLVar6 = pMVar2->___sideLookups_8,
                                  pLVar6 == (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *)0x0)
                           ) goto LAB_103f2a93;
                        pSVar22 = List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
                                            ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                              *)(local_dc + 8),pLVar6,uVar21,
                                             List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var
                                            );
                        local_19[4] = '\x01';
                        local_24 = 0;
                        local_78._0_2_ = pSVar22->___v00_0;
                        local_78._2_2_ = pSVar22->___v01_1;
                        pQStack_74 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                                      &pSVar22->___v10_2;
                        OStack_70 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                                     &pSVar22->___v20_4;
                        pQStack_6c = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                                      &pSVar22->___v30_6;
                        local_68._0_2_ = pSVar22->___v4_8;
                        local_68._2_2_ = pSVar22->___v5_9;
                        do {
                          uVar21 = local_24;
                          RVar29 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                                             (&local_158,local_24,(MethodInfo *)0x0);
                          local_30 = RVar29._4_4_;
                          pQVar23 = RVar29.___qube_0;
                          local_3a = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                               ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                                 *)local_78,uVar21,(MethodInfo *)0x0);
                          uVar21 = (uint)local_3a;
                          VStack_cc.___z_4 = 0.0;
                          if ((char)local_30 == -1) {
                            if (local_19[2] == '\0') {
                              bVar15 = local_3a == 0;
                            }
                            else if (local_24 < 4) {
                              if (((param_1->___master_4 ==
                                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                                  (pMVar2 = param_1->___master_4->___moduleLibrary_8,
                                  pMVar2 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52
                                             *)0x0)) ||
                                 (pLVar7 = pMVar2->___waterSides_4,
                                 pLVar7 == (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)0x0))
                              goto LAB_103f2a93;
                              bVar15 = List_1_Contains_m793EB605F2702C16DE665C690BFA9B9675529D94_gshared
                                                 ((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A
                                                   *)pLVar7,uVar21,
                                                  List_1_Contains_mC571B31DBE9B69E6140E5CD901110DC3778F0133_RuntimeMethod_var
                                                 );
                            }
                            else if (local_24 == 4) {
                              bVar15 = uVar21 == 1;
                            }
                            else {
                              if (local_24 != 5) goto LAB_103f248f;
                              bVar15 = local_3a == 0;
                            }
                            if (bVar15 == false) {
                              local_19[4] = '\0';
                              goto LAB_103f258e;
                            }
                          }
                          else {
                            if (pQVar23 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                            goto LAB_103f2a93;
                            bVar15 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                                               (pQVar23,(MethodInfo *)0x0);
                            if (bVar15) {
                              if (local_3a != 1) {
                                local_24 = (uint)local_38._4_4_;
                                local_54._0_2_ = (ushort)local_68;
                                local_54._2_2_ = local_68._2_2_;
                                goto LAB_103f25b1;
                              }
                            }
                            else if ((local_19[4] != '\0') &&
                                    (param_2->___lastPropagation_11 <=
                                     pQVar23->___lastPropagation_11)) {
                              if (pQVar23->___possibleModules_18 ==
                                  (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                              goto LAB_103f2a93;
                              iVar27 = pQVar23->___possibleModules_18->____size_2;
                              if (iVar27 < 1) {
                                local_19[4] = uVar21 < 2;
                              }
                              else {
                                local_19[4] = '\0';
                                do {
                                  iVar27 = iVar27 + -1;
                                  if (iVar27 < 0) goto LAB_103f248f;
                                  if (pQVar23->___possibleModules_18 ==
                                      (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                                  goto LAB_103f2a93;
                                  pOVar24 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                                      ((
                                                  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                                  *)local_dc,pQVar23->___possibleModules_18,iVar27,
                                                  List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                                  );
                                  local_94._0_2_ = (pOVar24->___sides_0).___v00_0;
                                  local_94._2_2_ = (pOVar24->___sides_0).___v01_1;
                                  pQStack_90 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                                                &(pOVar24->___sides_0).___v10_2;
                                  OStack_8c = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                *)&(pOVar24->___sides_0).___v20_4;
                                  pQStack_88 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                                                &(pOVar24->___sides_0).___v30_6;
                                  local_84 = *(ulonglong *)&(pOVar24->___sides_0).___v4_8;
                                  local_7c = pOVar24->___cost_2;
                                  uVar17 = SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
                                                     ((
                                                  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                                  *)local_94,(int)(char)local_30,(MethodInfo *)0x0);
                                } while (uVar17 != local_3a);
                                local_19[4] = '\x01';
                              }
                            }
                          }
LAB_103f248f:
                          local_24 = local_24 + 1;
                        } while ((int)local_24 < 6);
                        if (local_19[1] == '\0') {
                          local_19[1] = '\x01';
                        }
                        else {
                          bVar25 = (byte)local_20;
                          if (local_78._0_2_ != local_10c._0_2_) {
                            bVar25 = bVar25 | 1;
                          }
                          bVar26 = bVar25 | 2;
                          if ((ushort)pQStack_74 == (ushort)pQStack_108) {
                            bVar26 = bVar25;
                          }
                          bVar25 = bVar26 | 4;
                          if (OStack_70.___moduleIndex_0 == OStack_104.___moduleIndex_0) {
                            bVar25 = bVar26;
                          }
                          local_30 = (uint)(bVar25 | 8);
                          bVar26 = bVar25 | 8;
                          if ((ushort)pQStack_6c == (ushort)pQStack_100) {
                            bVar26 = bVar25;
                          }
                          local_19[3] = bVar26 | 0x10;
                          if ((ushort)local_68 == (ushort)local_54) {
                            local_19[3] = bVar26;
                          }
                          local_20 = (uint)local_19[3];
                          if (SUB42(local_68,2) != SUB42(local_54,2)) {
                            local_20 = local_20 | 0x20;
                            local_19[3] = (byte)local_20;
                          }
                        }
                        if (local_40 < param_2->___cost_12) {
                          param_2->___cost_12 = (float)(int)*(short *)(local_48 + 8);
                        }
LAB_103f258e:
                        fVar13 = local_40;
                        local_24 = (uint)local_38._4_4_;
                        local_dc._12_4_ = local_78;
                        VStack_cc.___x_2 = (float)pQStack_74;
                        VStack_cc.___y_3 = (float)OStack_70;
                        VStack_cc.___z_4 = (float)pQStack_6c;
                        local_10c = local_78;
                        pQStack_108 = pQStack_74;
                        OStack_104 = OStack_70;
                        pQStack_100 = pQStack_6c;
                        local_54 = local_68;
                        if (local_19[4] == '\0') {
LAB_103f25b1:
                          local_19[4] = '\0';
                          local_10c = local_78;
                          pQStack_108 = pQStack_74;
                          OStack_104 = OStack_70;
                          pQStack_100 = pQStack_6c;
                          local_68 = local_54;
                        }
                        else {
                          local_19[4] = '\x01';
                          local_84 = CONCAT44(local_44,local_68);
                          local_38 = (double)local_84;
                          local_94 = local_78;
                          pQStack_90 = pQStack_74;
                          OStack_8c = OStack_70;
                          pQStack_88 = pQStack_6c;
                          local_7c = local_40;
                          if (param_2->___possibleModules_18 ==
                              (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                          goto LAB_103f2a93;
                          OVar9.___sides_0._4_4_ = pQStack_74;
                          OVar9.___sides_0.___v00_0 = local_78._0_2_;
                          OVar9.___sides_0.___v01_1 = local_78._2_2_;
                          OVar9.___sides_0._8_4_ = OStack_70;
                          OVar9.___sides_0._12_4_ = pQStack_6c;
                          OVar9.___sides_0.___v4_8 = (ushort)local_68;
                          OVar9.___sides_0.___v5_9 = local_68._2_2_;
                          OVar9.___orientedModule_1 = local_44;
                          OVar9.___cost_2 = local_40;
                          local_58 = List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_gshared
                                               (param_2->___possibleModules_18,OVar9,
                                                List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_RuntimeMethod_var
                                               );
                          if ((int)local_58 < 0) {
                            local_58 = ~local_58;
                          }
                          if ((List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)
                              param_2->___possibleModules_18 ==
                              (List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)0x0)
                          goto LAB_103f2a93;
                          uVar30 = SUB84(local_38,0);
                          MVar10.___targetMaterial_1 =
                               (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
                               VStack_cc.___x_2;
                          MVar10.___srcName_0 = (String_t *)local_dc._12_4_;
                          MVar10._8_4_ = VStack_cc.___y_3;
                          MVar10._12_4_ = VStack_cc.___z_4;
                          MVar10.___outputMesh_10 = (bool)(char)uVar30;
                          MVar10.___blocker_11 = (bool)(char)((uint)uVar30 >> 8);
                          MVar10.___combineBlocker_12 = (bool)(char)((uint)uVar30 >> 0x10);
                          MVar10.___outlineUvs_13 = (bool)(char)((uint)uVar30 >> 0x18);
                          MVar10.___normalSideMultiplier_14 =
                               (float)(int)((ulonglong)local_38 >> 0x20);
                          MVar10._24_4_ = fVar13;
                          List_1_Insert_m4FCC9DB2367D035F291D9D032CE015498BE04003_gshared
                                    ((List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)
                                     param_2->___possibleModules_18,local_58,MVar10,
                                     List_1_Insert_mD8DA61036349D15BBC1DD565AAD78E169E57E30F_RuntimeMethod_var
                                    );
                          local_5c = local_40;
                          local_64 = local_64 + 1;
                        }
                      }
                      local_60 = local_60 + 1;
                      local_28 = local_28 + 4;
                    } while ((int)local_60 < local_50._4_4_);
                    local_38 = (double)CONCAT44(param_2->___cost_12,(undefined4)local_38);
                  }
                  param_2->___sideVariationMask_5 = (uchar)local_20;
                  if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor
                       != '\0') &&
                     (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
                  }
                  local_50 = (double)(float)((uint)((local_98 + (float)local_a0 + local_a0._4_4_) *
                                                    ___real_40490fdb * ___real_40e00000) &
                                            __xmm_7fffffff7fffffff7fffffff7fffffff);
                  _CIfmod();
                  local_50 = (double)extraout_ST0_00;
                  param_2->___cost_12 = (float)extraout_ST0_00 + local_38._4_4_;
                  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                             local_19,(MethodInfo *)
                                      _stringLiteralECED549A86813770495E49F32079C7149070AE47);
                  local_8 = 0;
                  for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
                    RVar29 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                                       (&local_158,local_28,(MethodInfo *)0x0);
                    pQVar23 = RVar29.___qube_0;
                    local_50 = (double)CONCAT44(RVar29._4_4_,(undefined4)local_50);
                    if (RVar29.___indexInOther_1 != -1) {
                      if (pQVar23 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                      goto LAB_103f2a93;
                      if (param_2->___lastPropagation_11 <= pQVar23->___lastPropagation_11) {
                        if (pQVar23->___possibleModules_18 ==
                            (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                        goto LAB_103f2a93;
                        iVar27 = pQVar23->___possibleModules_18->____size_2;
                        while (iVar27 = iVar27 + -1, local_2c = iVar27, -1 < iVar27) {
                          if ((pQVar23 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
                             (pQVar23->___possibleModules_18 ==
                              (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0))
                          goto LAB_103f2a93;
                          pOVar24 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                              ((OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                                *)(local_128 + 0x14),pQVar23->___possibleModules_18,
                                               iVar27,
                                               List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                              );
                          local_bc._0_2_ = (pOVar24->___sides_0).___v00_0;
                          local_bc._2_2_ = (pOVar24->___sides_0).___v01_1;
                          local_bc._4_2_ = (pOVar24->___sides_0).___v10_2;
                          local_bc._6_2_ = (pOVar24->___sides_0).___v11_3;
                          local_bc._8_2_ = (pOVar24->___sides_0).___v20_4;
                          local_bc._10_2_ = (pOVar24->___sides_0).___v21_5;
                          local_bc._12_2_ = (pOVar24->___sides_0).___v30_6;
                          local_bc._14_2_ = (pOVar24->___sides_0).___v31_7;
                          local_ac = *(undefined8 *)&(pOVar24->___sides_0).___v4_8;
                          local_a4 = pOVar24->___cost_2;
                          local_48 = (uint)(char)((ulonglong)local_50 >> 0x20);
                          uVar17 = SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
                                             ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                               *)local_bc,local_48,(MethodInfo *)0x0);
                          local_38 = (double)(ulonglong)CONCAT24(uVar17,(undefined4)local_38);
                          if (local_64 < 1) {
                            cVar16 = uVar17 < 2;
LAB_103f2948:
                            if (cVar16 == '\0') {
                              if (((param_1->___master_4 ==
                                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                                  (pGVar4 = param_1->___master_4->___graph_7,
                                  pQVar23 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
                                 || (pGVar4 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)
                                               0x0)) goto LAB_103f2a93;
                              pRVar18 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                                  ((
                                                  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8
                                                  *)local_128,pGVar4,pQVar23,
                                                  pQVar23->___sideVariationMask_5 &
                                                  ~(byte)(1 << (local_48 & 0x1f)),(MethodInfo *)0x0)
                              ;
                              uVar12 = local_ac;
                              OVar8.___sides_0.___v10_2 = local_bc._4_2_;
                              OVar8.___sides_0.___v11_3 = local_bc._6_2_;
                              OVar8.___sides_0.___v00_0 = local_bc._0_2_;
                              OVar8.___sides_0.___v01_1 = local_bc._2_2_;
                              OVar8.___sides_0.___v20_4 = local_bc._8_2_;
                              OVar8.___sides_0.___v21_5 = local_bc._10_2_;
                              OVar8.___sides_0.___v30_6 = local_bc._12_2_;
                              OVar8.___sides_0.___v31_7 = local_bc._14_2_;
                              OVar8.___sides_0.___v4_8 = (ushort)local_ac;
                              OVar8.___sides_0.___v5_9 = local_ac._2_2_;
                              OVar8.___orientedModule_1.___moduleIndex_0 = local_ac._4_2_;
                              OVar8.___orientedModule_1.___flags_1 = local_ac._6_1_;
                              OVar8.___orientedModule_1._3_1_ = local_ac._7_1_;
                              OVar8.___cost_2 = local_a4;
                              local_ac = uVar12;
                              WaveFunctionCollapse_RemovePossibleModule_m20B67AFC733875C1F0E90CC6D12A344E1CDEE7AB
                                        (param_1,pQVar23,OVar8,iVar27,*pRVar18,(MethodInfo *)0x0);
                            }
                          }
                          else {
                            local_19[2] = '\0';
                            iVar28 = local_64;
                            do {
                              iVar28 = iVar28 + -1;
                              iVar27 = local_2c;
                              cVar16 = local_19[2];
                              if (iVar28 < 0) goto LAB_103f2948;
                              if (param_2->___possibleModules_18 ==
                                  (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                              goto LAB_103f2a93;
                              pOVar24 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                                  ((
                                                  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                                  *)(local_128 + 0x14),
                                                  param_2->___possibleModules_18,iVar28,
                                                  List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                                  );
                              local_f8._0_2_ = (pOVar24->___sides_0).___v00_0;
                              local_f8._2_2_ = (pOVar24->___sides_0).___v01_1;
                              local_f8._4_2_ = (pOVar24->___sides_0).___v10_2;
                              local_f8._6_2_ = (pOVar24->___sides_0).___v11_3;
                              local_f8._8_2_ = (pOVar24->___sides_0).___v20_4;
                              local_f8._10_2_ = (pOVar24->___sides_0).___v21_5;
                              local_f8._12_2_ = (pOVar24->___sides_0).___v30_6;
                              local_f8._14_2_ = (pOVar24->___sides_0).___v31_7;
                              local_e8 = *(undefined8 *)&(pOVar24->___sides_0).___v4_8;
                              local_e0 = pOVar24->___cost_2;
                              uVar17 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                                 ((
                                                  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                                  *)local_f8,local_28,(MethodInfo *)0x0);
                              iVar27 = local_2c;
                            } while ((ushort)((ulonglong)local_38 >> 0x20) != uVar17);
                          }
                        }
                      }
                    }
                  }
                  local_8 = 0xffffffff;
                  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                             local_19,(MethodInfo *)0x0);
                  if (param_2->___possibleModules_18 !=
                      (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                    if (param_2->___possibleModules_18->____size_2 == 0) {
                      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                  );
                      }
                      Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                                ((Il2CppObject *)
                                 _stringLiteralAF8DB4C60E3224638FBF7D3A5BD21958FB5FE41C,
                                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                                 (MethodInfo *)0x0);
                    }
                    ExceptionList = (void *)local_19._9_4_;
                    return (uchar)local_20;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_103f2a93:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
