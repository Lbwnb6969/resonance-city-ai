// RVA 0x3f12c0 | Placemaker.WaveFunctionCollapse$$FillDecorPossibilities
// PDB: WaveFunctionCollapse_FillDecorPossibilities_m5B05C79E7FAED3CFA103F0200BA815EEDA8E2199
// Body: [[103f12c0, 103f14e6] [103f14ed, 103f1606] [103f160d, 103f1d9e] [103f1dc8, 103f1e19]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 10069330 List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
// 10069360 List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 10195ff0 _CIfmod
// 101d9360 Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 102f54f0 SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
// 102f5590 SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
// 103d9dc0 ModuleMath_MulOrientations_m812958812105624A94320FF8419FA672EC530FAD
// 103f1e34 FUN_103f1e34
// 103f50d0 WaveFunctionCollapse_RemovePossibleDecor_m10FC040245024449331A113C5DEFCEDA9D978EA1
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1074e260 OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
// 1074e340 OrientedModule_set_orientation_m845FBA3E29799AFB91A9B3740007B0C36A3E7DCA
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6c100 Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
// 11030500 List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_gshared
// 11035150 List_1_Insert_m4FCC9DB2367D035F291D9D032CE015498BE04003_gshared
// 1103eb90 List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_gshared

/* WARNING: Removing unreachable block (ram,0x103f1e66) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar __cdecl
WaveFunctionCollapse_FillDecorPossibilities_m5B05C79E7FAED3CFA103F0200BA815EEDA8E2199
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_2,MethodInfo *param_3)

{
  short sVar1;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar2;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar3;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar4;
  List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2 *pLVar5;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar6;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar7;
  List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *pLVar8;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar9;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar10;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar11;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 RVar12;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar13;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar14;
  MappedMaterial_tBB33F3590DC5E0184168C9FEDC54D65657066192 MVar15;
  MappedMaterial_tBB33F3590DC5E0184168C9FEDC54D65657066192 MVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  undefined3 uVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  undefined3 uVar25;
  undefined4 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined1 *puVar31;
  byte bVar32;
  uchar uVar33;
  ushort uVar34;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *pRVar35;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar37;
  int iVar38;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar39;
  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *pSVar40;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar41;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar42;
  uint uVar43;
  uint uVar44;
  float10 extraout_ST0;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 RVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined4 uVar48;
  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 local_184;
  undefined1 local_154 [28];
  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B local_138;
  undefined1 local_124 [16];
  undefined8 local_114;
  float local_10c;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_ec [10];
  ushort uStack_e2;
  ushort uStack_e0;
  ushort uStack_de;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  float local_c0;
  int local_bc [6];
  Il2CppObject *pIStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  float local_94;
  undefined8 local_90;
  float local_88;
  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B local_84;
  undefined1 local_70 [16];
  undefined8 local_60;
  float local_58;
  uint local_54;
  int local_50;
  float local_4c;
  uint local_48;
  int local_44;
  float local_40;
  undefined8 local_3c;
  uint local_34;
  int local_30;
  uint local_2c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_28;
  undefined1 local_21;
  List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *local_20;
  uint local_1c;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 local_18;

  local_18.___U3CU3E4__this_2 =
       (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)0xffffffff;
  local_18.___U3CU3E2__current_1 =
       (Il2CppObject *)
       &
       __ehhandler__WaveFunctionCollapse_FillDecorPossibilities_m5B05C79E7FAED3CFA103F0200BA815EEDA8E2199
  ;
  local_18.___U3CU3E1__state_0 = (int)ExceptionList;
  local_18._padding_ = (int)&stack0xfffffe70;
  ExceptionList = &local_18.___U3CU3E1__state_0;
  puVar31 = &stack0xfffffe70;
  if (DAT_1151c922 == '\0') {
    ExceptionList = &local_18.___U3CU3E1__state_0;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
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
              ((uint *)&List_1_get_Item_m08F9DCC44E75BF40420FAFEE553D080ED98AA85B_RuntimeMethod_var)
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
              ((uint *)&List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2BB08BB0F1E74838BE7DFB9A81E58AFC22C4CC74);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9D1647EABCD7A7040C26D1A577D6DB1E99AD4375);
    DAT_1151c922 = '\x01';
    puVar31 = (undefined1 *)local_18._padding_;
  }
  local_18._padding_ = (int)puVar31;
  local_18._padding_._0_1_ = 0;
  local_9c = 0;
  local_bc[4] = 0;
  local_bc[5] = 0;
  pIStack_a4 = (Il2CppObject *)0x0;
  uStack_a0 = 0;
  local_94 = 0.0;
  memset((uchar *)&local_184,'\0',0x30);
  local_21 = 0;
  local_28.___moduleIndex_0 = 0;
  local_28.___flags_1 = '\0';
  local_28._3_1_ = 0;
  local_70._0_2_ = 0;
  local_70._2_2_ = 0;
  local_70._4_2_ = 0;
  local_70._6_2_ = 0;
  local_70._8_2_ = 0;
  local_70._10_2_ = 0;
  local_70._12_2_ = 0;
  local_70._14_2_ = 0;
  local_58 = 0.0;
  local_60 = 0;
  local_84.___v00_0 = 0;
  local_84.___v01_1 = 0;
  local_84.___v10_2 = 0;
  local_84.___v11_3 = 0;
  local_84.___v20_4 = 0;
  local_84.___v21_5 = 0;
  local_84.___v30_6 = 0;
  local_84.___v31_7 = 0;
  local_84.___v4_8 = 0;
  local_84.___v5_9 = 0;
  local_18._padding_._1_1_ = 0;
  local_d8._0_2_ = 0;
  local_d8._2_2_ = 0;
  local_d8._4_2_ = 0;
  local_d8._6_2_ = 0;
  local_d8._8_2_ = 0;
  local_d8._10_2_ = 0;
  local_d8._12_2_ = 0;
  local_d8._14_2_ = 0;
  local_c0 = 0.0;
  local_c8 = 0;
  local_124._0_2_ = 0;
  local_124._2_2_ = 0;
  local_124._4_2_ = 0;
  local_124._6_2_ = 0;
  local_124._8_2_ = 0;
  local_124._10_2_ = 0;
  local_124._12_2_ = 0;
  local_124._14_2_ = 0;
  local_10c = 0.0;
  local_114 = 0;
  local_bc[3] = 0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (&local_18,(MethodInfo *)_stringLiteral9D1647EABCD7A7040C26D1A577D6DB1E99AD4375);
  local_18.___U3CU3E4__this_2._0_1_ = 0;
  local_18.___U3CU3E4__this_2._1_3_ = 0;
  if ((param_2 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) &&
     (pLVar2 = param_2->___possibleModules_18,
     pLVar2 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)) {
    if (pLVar2->____size_2 == 0) {
      local_1c = local_1c & 0xffffff00;
      uVar33 = FUN_103f1e34();
      return uVar33;
    }
    pOVar3 = pLVar2->____items_1;
    local_bc[4]._0_2_ = pOVar3->m_Items[0].___sides_0.___v00_0;
    local_bc[4]._2_2_ = pOVar3->m_Items[0].___sides_0.___v01_1;
    local_bc[5]._0_2_ = pOVar3->m_Items[0].___sides_0.___v10_2;
    local_bc[5]._2_2_ = pOVar3->m_Items[0].___sides_0.___v11_3;
    pIStack_a4 = *(Il2CppObject **)&pOVar3->m_Items[0].___sides_0.___v20_4;
    uStack_a0._0_2_ = pOVar3->m_Items[0].___sides_0.___v30_6;
    uStack_a0._2_2_ = pOVar3->m_Items[0].___sides_0.___v31_7;
    local_9c = *(undefined8 *)&pOVar3->m_Items[0].___sides_0.___v4_8;
    local_94 = pOVar3->m_Items[0].___cost_2;
    if (pLVar2 != (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar2,
                 List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
      if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pMVar4 = param_1->___master_4->___moduleLibrary_8,
          pMVar4 != (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) &&
         (pLVar5 = pMVar4->___modules_5,
         pLVar5 != (List_1_t956D5C6306CA2DECEC1CAF84DAB8CFDF607148A2 *)0x0)) {
        local_34 = (uint)local_9c._4_2_;
        if ((uint)pLVar5->____size_2 <= local_34) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        if (*(int *)(pLVar5->____items_1 + local_34 * 4 + 0x10) != 0) {
          local_30 = *(int *)(*(int *)(pLVar5->____items_1 + local_34 * 4 + 0x10) + 0x18);
          if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             && (pGVar6 = param_1->___master_4->___graph_7,
                pGVar6 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
            pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                ((Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *)local_154,
                                 pGVar6,param_2,0xff,(MethodInfo *)0x0);
            local_184.___r0_0.___qube_0 = (pRVar35->___r0_0).___qube_0;
            local_184.___r0_0.___indexInOther_1 = (pRVar35->___r0_0).___indexInOther_1;
            local_184.___r0_0._5_3_ = *(undefined3 *)&(pRVar35->___r0_0).field_0x5;
            local_184.___r1_1.___qube_0 = (pRVar35->___r1_1).___qube_0;
            local_184.___r1_1.___indexInOther_1 = (pRVar35->___r1_1).___indexInOther_1;
            local_184.___r1_1._5_3_ = *(undefined3 *)&(pRVar35->___r1_1).field_0x5;
            local_184.___r2_2.___qube_0 = (pRVar35->___r2_2).___qube_0;
            local_184.___r2_2.___indexInOther_1 = (pRVar35->___r2_2).___indexInOther_1;
            local_184.___r2_2._5_3_ = *(undefined3 *)&(pRVar35->___r2_2).field_0x5;
            local_184.___r3_3.___qube_0 = (pRVar35->___r3_3).___qube_0;
            local_184.___r3_3.___indexInOther_1 = (pRVar35->___r3_3).___indexInOther_1;
            local_184.___r3_3._5_3_ = *(undefined3 *)&(pRVar35->___r3_3).field_0x5;
            local_184.___r4_4.___qube_0 = (pRVar35->___r4_4).___qube_0;
            local_184.___r4_4.___indexInOther_1 = (pRVar35->___r4_4).___indexInOther_1;
            local_184.___r4_4._5_3_ = *(undefined3 *)&(pRVar35->___r4_4).field_0x5;
            local_184.___r5_5.___qube_0 = (pRVar35->___r5_5).___qube_0;
            local_184.___r5_5.___indexInOther_1 = (pRVar35->___r5_5).___indexInOther_1;
            local_184.___r5_5._5_3_ = *(undefined3 *)&(pRVar35->___r5_5).field_0x5;
            pTVar36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                 (MethodInfo *)0x0);
            if (pTVar36 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              local_1c = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                                   (pTVar36,(MethodInfo *)0x0);
              local_1c = local_1c & 0xffffff00;
              local_34 = 0;
              local_100 = 0;
              uStack_fc = 0;
              uStack_f8 = 0;
              uStack_f4 = 0;
              local_18._padding_._2_1_ = 0;
              pTVar36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                                   (MethodInfo *)0x0);
              if (pTVar36 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pVVar37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (local_ec + 8),pTVar36,(MethodInfo *)0x0);
                local_48 = 0xffffffff;
                local_2c = 0;
                local_90._0_4_ = pVVar37->___x_2;
                local_90._4_4_ = pVVar37->___y_3;
                local_88 = pVVar37->___z_4;
                local_18._padding_._3_1_ = '\0';
                local_54 = 0xffff;
                local_4c = 0.0;
                if (local_30 != 0) {
                  local_50 = *(int *)(local_30 + 0xc);
                  while (uVar29 = local_9c, (int)local_2c < local_50) {
                    if (*(uint *)(local_30 + 0xc) <= local_2c) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    local_28 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                                (*(int *)(local_30 + 8) + 0x10 + local_2c * 4);
                    local_20 = (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)
                               OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                         ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                           *)((int)&local_9c + 4),(MethodInfo *)0x0);
                    iVar38 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                       (&local_28,(MethodInfo *)0x0);
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
                                       ((int)local_20,iVar38,(MethodInfo *)0x0);
                    OrientedModule_set_orientation_m845FBA3E29799AFB91A9B3740007B0C36A3E7DCA
                              (&local_28,(uint)bVar32,(MethodInfo *)0x0);
                    if ((((param_1->___master_4 ==
                           (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                         (pMVar4 = param_1->___master_4->___moduleLibrary_8,
                         pMVar4 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0))
                        || (pLVar7 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                     pMVar4->___decorModules_6,
                           pLVar7 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)) ||
                       (pGVar39 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                            (pLVar7,(uint)local_28 & 0xffff,
                                             List_1_get_Item_m08F9DCC44E75BF40420FAFEE553D080ED98AA85B_RuntimeMethod_var
                                            ),
                       pGVar39 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0))
                    goto LAB_103f1e61;
                    local_20 = *(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 **)(pGVar39 + 1);
                    iVar38 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                       (&local_28,(MethodInfo *)0x0);
                    if (local_20 == (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0)
                    goto LAB_103f1e61;
                    uVar34 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                                       (local_20,iVar38,
                                        List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_RuntimeMethod_var
                                       );
                    sVar1 = *(short *)&pGVar39->field_0x8;
                    local_20 = (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)(uint)uVar34;
                    if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var)
                      ;
                    }
                    local_3c = (double)(float)((uint)(((float)(int)local_2c + (float)local_90 +
                                                       local_88 + local_90._4_4_) * ___real_40490fdb
                                                     * ___real_41880000) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff);
                    _CIfmod();
                    local_3c = (double)extraout_ST0;
                    uVar43 = (uint)local_20 & 0xffff;
                    local_40 = (float)(int)sVar1 + (float)extraout_ST0;
                    if ((local_54 == uVar43) && (local_54 != 0)) {
                      if ((local_18._padding_._3_1_ != '\0') && (local_40 < local_4c)) {
                        if ((param_1->___master_4 ==
                             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                           ((pMVar4 = param_1->___master_4->___moduleLibrary_8,
                            pMVar4 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0
                            || (pLVar8 = pMVar4->___sideLookups_8,
                               pLVar8 == (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *)0x0))))
                        goto LAB_103f1e61;
                        pSVar40 = List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
                                            ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                              *)local_ec,pLVar8,uVar43,
                                             List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var
                                            );
                        uVar48._0_2_ = pSVar40->___v4_8;
                        uVar48._2_2_ = pSVar40->___v5_9;
                        local_70._0_2_ = pSVar40->___v00_0;
                        local_70._2_2_ = pSVar40->___v01_1;
                        local_70._4_2_ = pSVar40->___v10_2;
                        local_70._6_2_ = pSVar40->___v11_3;
                        uVar17 = pSVar40->___v00_0;
                        uVar18 = pSVar40->___v01_1;
                        uVar19 = pSVar40->___v10_2;
                        OVar13.___sides_0.___v10_2 = uVar19;
                        OVar13.___sides_0.___v01_1 = uVar18;
                        OVar13.___sides_0.___v00_0 = uVar17;
                        local_70._8_2_ = pSVar40->___v20_4;
                        local_70._10_2_ = pSVar40->___v21_5;
                        local_70._12_2_ = pSVar40->___v30_6;
                        local_70._14_2_ = pSVar40->___v31_7;
                        local_60 = CONCAT44(local_28,uVar48);
                        local_58 = local_40;
                        if (param_2->___possibleModules_18 ==
                            (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                        goto LAB_103f1e61;
                        OVar13.___sides_0.___v11_3 = local_70._6_2_;
                        OVar13.___sides_0.___v20_4 = local_70._8_2_;
                        OVar13.___sides_0.___v21_5 = local_70._10_2_;
                        OVar13.___sides_0.___v30_6 = local_70._12_2_;
                        OVar13.___sides_0.___v31_7 = local_70._14_2_;
                        OVar13.___sides_0.___v4_8 = (undefined2)uVar48;
                        OVar13.___sides_0.___v5_9 = uVar48._2_2_;
                        OVar13.___orientedModule_1 = local_28;
                        OVar13.___cost_2 = local_40;
                        List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_gshared
                                  (param_2->___possibleModules_18,local_48,OVar13,
                                   List_1_set_Item_m20AE6234755C77EB8B2C13535C71EB5D41AE3EFF_RuntimeMethod_var
                                  );
LAB_103f1b1d:
                        local_4c = local_40;
                      }
                      local_2c = local_2c + 1;
                    }
                    else {
                      if ((param_1->___master_4 ==
                           (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                         ((pMVar4 = param_1->___master_4->___moduleLibrary_8,
                          pMVar4 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0
                          || (pLVar8 = pMVar4->___sideLookups_8,
                             pLVar8 == (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *)0x0))))
                      goto LAB_103f1e61;
                      local_54 = uVar43;
                      pSVar40 = List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
                                          (&local_138,pLVar8,uVar43,
                                           List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var
                                          );
                      local_18._padding_._3_1_ = '\x01';
                      local_84.___v00_0 = pSVar40->___v00_0;
                      local_84.___v01_1 = pSVar40->___v01_1;
                      local_84.___v10_2 = pSVar40->___v10_2;
                      local_84.___v11_3 = pSVar40->___v11_3;
                      local_84.___v20_4 = pSVar40->___v20_4;
                      local_84.___v21_5 = pSVar40->___v21_5;
                      local_84.___v30_6 = pSVar40->___v30_6;
                      local_84.___v31_7 = pSVar40->___v31_7;
                      local_84.___v4_8 = pSVar40->___v4_8;
                      local_84.___v5_9 = pSVar40->___v5_9;
                      local_44 = 0;
                      while( true ) {
                        local_ec._6_2_ = local_84.___v01_1;
                        local_ec._4_2_ = local_84.___v00_0;
                        uStack_e2 = local_84.___v11_3;
                        local_ec._8_2_ = local_84.___v10_2;
                        uStack_de = local_84.___v21_5;
                        uStack_e0 = local_84.___v20_4;
                        uStack_dc._2_2_ = local_84.___v31_7;
                        uStack_dc._0_2_ = local_84.___v30_6;
                        if (5 < local_44) break;
                        RVar45 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                                           (&local_184,local_44,(MethodInfo *)0x0);
                        local_20 = RVar45._4_4_;
                        pQVar41 = RVar45.___qube_0;
                        uVar34 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                           (&local_84,local_44,(MethodInfo *)0x0);
                        local_3c = (double)(ulonglong)CONCAT24(uVar34,(undefined4)local_3c);
                        uStack_dc._0_2_ = 0;
                        uStack_dc._2_2_ = 0;
                        if ((char)local_20 == -1) {
                          if (uVar34 != 0) {
                            local_18._padding_._3_1_ = '\0';
                            local_ec._6_2_ = local_84.___v01_1;
                            local_ec._4_2_ = local_84.___v00_0;
                            uStack_e2 = local_84.___v11_3;
                            local_ec._8_2_ = local_84.___v10_2;
                            uStack_de = local_84.___v21_5;
                            uStack_e0 = local_84.___v20_4;
                            uStack_dc._2_2_ = local_84.___v31_7;
                            uStack_dc._0_2_ = local_84.___v30_6;
                            goto LAB_103f1a61;
                          }
LAB_103f199c:
                          local_44 = local_44 + 1;
                        }
                        else {
                          if ((uVar34 == 0) || (local_18._padding_._3_1_ == '\0'))
                          goto LAB_103f199c;
                          if (pQVar41 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                          goto LAB_103f1e61;
                          if (pQVar41->___lastPropagation_11 < param_2->___lastPropagation_11)
                          goto LAB_103f199c;
                          local_18._padding_._3_1_ = '\0';
                          if (pQVar41->___possibleModules_18 ==
                              (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                          goto LAB_103f1e61;
                          iVar38 = pQVar41->___possibleModules_18->____size_2;
                          do {
                            iVar38 = iVar38 + -1;
                            if (iVar38 < 1) goto LAB_103f199c;
                            if (pQVar41->___possibleModules_18 ==
                                (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                            goto LAB_103f1e61;
                            pOVar42 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                                ((OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                                  *)(local_154 + 0x14),
                                                 pQVar41->___possibleModules_18,iVar38,
                                                 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                                );
                            local_70._0_2_ = (pOVar42->___sides_0).___v00_0;
                            local_70._2_2_ = (pOVar42->___sides_0).___v01_1;
                            local_70._4_2_ = (pOVar42->___sides_0).___v10_2;
                            local_70._6_2_ = (pOVar42->___sides_0).___v11_3;
                            local_70._8_2_ = (pOVar42->___sides_0).___v20_4;
                            local_70._10_2_ = (pOVar42->___sides_0).___v21_5;
                            local_70._12_2_ = (pOVar42->___sides_0).___v30_6;
                            local_70._14_2_ = (pOVar42->___sides_0).___v31_7;
                            local_60 = *(undefined8 *)&(pOVar42->___sides_0).___v4_8;
                            local_58 = pOVar42->___cost_2;
                            uVar34 = SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
                                               ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                                 *)local_70,(int)(char)local_20,(MethodInfo *)0x0);
                          } while (uVar34 != (ushort)((ulonglong)local_3c >> 0x20));
                          local_44 = local_44 + 1;
                          local_18._padding_._3_1_ = '\x01';
                        }
                      }
                      if (local_84.___v00_0 != (ushort)local_100) {
                        local_1c = local_1c | 1;
                      }
                      uVar43 = (uint)(byte)((byte)local_1c | 2);
                      if (local_84.___v10_2 == (ushort)uStack_fc) {
                        uVar43 = local_1c & 0xff;
                      }
                      uVar44 = (uint)(byte)((byte)uVar43 | 4);
                      if (local_84.___v20_4 == (ushort)uStack_f8) {
                        uVar44 = uVar43;
                      }
                      local_3c = (double)(ulonglong)
                                         (CONCAT14((byte)uVar44,SUB84(local_3c,0)) | 0x800000000);
                      uVar43 = (uint)(byte)((byte)uVar44 | 8);
                      if (local_84.___v30_6 == (ushort)uStack_f4) {
                        uVar43 = uVar44;
                      }
                      local_1c = (uint)(byte)((byte)uVar43 | 0x10);
                      if (local_84.___v4_8 == (short)local_34) {
                        local_1c = uVar43;
                      }
                      local_18._padding_._2_1_ = (undefined1)local_1c;
                      if (local_84.___v5_9 != (short)(local_34 >> 0x10)) {
                        local_1c = local_1c | 0x20;
                        local_18._padding_._2_1_ = (undefined1)local_1c;
                      }
LAB_103f1a61:
                      fVar30 = local_40;
                      local_100 = CONCAT22(local_84.___v01_1,local_84.___v00_0);
                      uStack_fc = CONCAT22(local_84.___v11_3,local_84.___v10_2);
                      uStack_f8 = CONCAT22(local_84.___v21_5,local_84.___v20_4);
                      uStack_f4 = CONCAT22(local_84.___v31_7,local_84.___v30_6);
                      local_34 = local_84._16_4_;
                      if (local_18._padding_._3_1_ != '\0') {
                        local_18._padding_._3_1_ = '\x01';
                        local_58 = local_40;
                        local_60 = CONCAT44(local_28,local_84._16_4_);
                        local_3c = (double)CONCAT44(local_28,local_84._16_4_);
                        local_70._2_2_ = local_84.___v01_1;
                        local_70._0_2_ = local_84.___v00_0;
                        local_70._6_2_ = local_84.___v11_3;
                        local_70._4_2_ = local_84.___v10_2;
                        local_70._10_2_ = local_84.___v21_5;
                        local_70._8_2_ = local_84.___v20_4;
                        local_70._14_2_ = local_84.___v31_7;
                        local_70._12_2_ = local_84.___v30_6;
                        if (param_2->___possibleModules_18 !=
                            (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) {
                          OVar14.___sides_0.___v01_1 = local_84.___v01_1;
                          OVar14.___sides_0.___v00_0 = local_84.___v00_0;
                          OVar14.___sides_0.___v10_2 = local_84.___v10_2;
                          OVar14.___sides_0.___v11_3 = local_84.___v11_3;
                          OVar14.___sides_0.___v20_4 = local_84.___v20_4;
                          OVar14.___sides_0.___v21_5 = local_84.___v21_5;
                          OVar14.___sides_0.___v30_6 = local_84.___v30_6;
                          OVar14.___sides_0.___v31_7 = local_84.___v31_7;
                          OVar14.___sides_0.___v4_8 = local_84.___v4_8;
                          OVar14.___sides_0.___v5_9 = local_84.___v5_9;
                          OVar14.___orientedModule_1 = local_28;
                          OVar14.___cost_2 = local_40;
                          local_48 = List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_gshared
                                               (param_2->___possibleModules_18,OVar14,
                                                List_1_BinarySearch_m1C72B081592D14FBA6BCF2BD3586B50DFF8F03D7_RuntimeMethod_var
                                               );
                          if ((int)local_48 < 0) {
                            local_48 = ~local_48;
                          }
                          if ((List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)
                              param_2->___possibleModules_18 !=
                              (List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)0x0) {
                            uVar48 = SUB84(local_3c,0);
                            MVar15.___targetMaterial_1._0_2_ = (ushort)stack0xffffff1c;
                            MVar15.___srcName_0 = (String_t *)local_ec._4_4_;
                            MVar15.___targetMaterial_1._2_2_ = SUB42(stack0xffffff1c,2);
                            MVar15.___replaceableColor_2 = (bool)(char)(ushort)_uStack_e0;
                            MVar15.___cantTouchOtherColor_3 = (bool)(char)((ushort)_uStack_e0 >> 8);
                            MVar15.___reallyCantTouchOtherColor_4 = (bool)(char)SUB42(_uStack_e0,2);
                            MVar15.___softNormalsInTangent_5 =
                                 (bool)(char)(SUB42(_uStack_e0,2) >> 8);
                            MVar15.___edgeProfile_6 = (bool)(char)(ushort)uStack_dc;
                            MVar15.___onlyMergeAdjecent_7 = (bool)(char)((ushort)uStack_dc >> 8);
                            MVar15.___attachment_8 = (bool)(char)SUB42(uStack_dc,2);
                            MVar15.___attachee_9 = (bool)(char)(SUB42(uStack_dc,2) >> 8);
                            MVar15.___outputMesh_10 = (bool)(char)uVar48;
                            MVar15.___blocker_11 = (bool)(char)((uint)uVar48 >> 8);
                            MVar15.___combineBlocker_12 = (bool)(char)((uint)uVar48 >> 0x10);
                            MVar15.___outlineUvs_13 = (bool)(char)((uint)uVar48 >> 0x18);
                            MVar15.___normalSideMultiplier_14 =
                                 (float)(int)((ulonglong)local_3c >> 0x20);
                            MVar15._24_4_ = fVar30;
                            List_1_Insert_m4FCC9DB2367D035F291D9D032CE015498BE04003_gshared
                                      ((List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)
                                       param_2->___possibleModules_18,local_48,MVar15,
                                       List_1_Insert_mD8DA61036349D15BBC1DD565AAD78E169E57E30F_RuntimeMethod_var
                                      );
                            goto LAB_103f1b1d;
                          }
                        }
                        goto LAB_103f1e61;
                      }
                      local_2c = local_2c + 1;
                      local_18._padding_._3_1_ = '\0';
                    }
                  }
                  if ((List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)
                      param_2->___possibleModules_18 !=
                      (List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)0x0) {
                    uVar46 = (undefined2)((uint)pIStack_a4 >> 0x10);
                    uVar47 = (undefined2)((uint)uStack_a0 >> 0x10);
                    MVar16.___targetMaterial_1._0_2_ = (short)local_bc[5];
                    MVar16.___srcName_0 = (String_t *)local_bc[4];
                    MVar16.___targetMaterial_1._2_2_ = (short)((uint)local_bc[5] >> 0x10);
                    MVar16.___replaceableColor_2 = (bool)(char)(short)pIStack_a4;
                    MVar16.___cantTouchOtherColor_3 = (bool)(char)((ushort)(short)pIStack_a4 >> 8);
                    MVar16.___reallyCantTouchOtherColor_4 = (bool)(char)uVar46;
                    MVar16.___softNormalsInTangent_5 = (bool)(char)((ushort)uVar46 >> 8);
                    MVar16.___edgeProfile_6 = (bool)(char)(short)uStack_a0;
                    MVar16.___onlyMergeAdjecent_7 = (bool)(char)((ushort)(short)uStack_a0 >> 8);
                    MVar16.___attachment_8 = (bool)(char)uVar47;
                    MVar16.___attachee_9 = (bool)(char)((ushort)uVar47 >> 8);
                    MVar16.___outputMesh_10 = (bool)(undefined1)local_9c;
                    MVar16.___blocker_11 = (bool)local_9c._1_1_;
                    MVar16.___combineBlocker_12 = (bool)local_9c._2_1_;
                    MVar16.___outlineUvs_13 = (bool)local_9c._3_1_;
                    MVar16.___normalSideMultiplier_14 = (float)local_9c._4_4_;
                    MVar16._24_4_ = local_94;
                    local_9c = uVar29;
                    List_1_Insert_m4FCC9DB2367D035F291D9D032CE015498BE04003_gshared
                              ((List_1_tA8589C1F6073F07618194BA1571C729C642ECEB3 *)
                               param_2->___possibleModules_18,0,MVar16,
                               List_1_Insert_mD8DA61036349D15BBC1DD565AAD78E169E57E30F_RuntimeMethod_var
                              );
                    param_2->___decorSideVariationMask_6 = (uchar)local_1c;
                    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                               ((int)&local_18._padding_ + 1),
                               (MethodInfo *)_stringLiteral2BB08BB0F1E74838BE7DFB9A81E58AFC22C4CC74)
                    ;
                    local_18.___U3CU3E4__this_2._0_1_ = 1;
                    uVar43 = 0;
                    do {
                      local_2c = uVar43;
                      if (5 < (int)uVar43) {
                        local_bc[0] = 0x4ef;
                        local_18.___U3CU3E4__this_2 =
                             (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)
                             ((uint)local_18.___U3CU3E4__this_2._1_3_ << 8);
                        local_bc[3] = 1;
                        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                                  ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                                   ((int)&local_18._padding_ + 1),(MethodInfo *)0x0);
                        local_bc[local_bc[0] != 0x4ef] = 0x503;
                        uVar33 = FUN_103f1e34();
                        return uVar33;
                      }
                      RVar45 = Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
                                         (&local_184,uVar43,(MethodInfo *)0x0);
                      local_50 = RVar45._4_4_;
                      pQVar41 = RVar45.___qube_0;
                      if (RVar45.___indexInOther_1 != -1) {
                        if (pQVar41 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
                        if (param_2->___lastPropagation_11 <= pQVar41->___lastPropagation_11) {
                          if (pQVar41->___possibleModules_18 ==
                              (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) break;
                          local_30 = pQVar41->___possibleModules_18->____size_2;
LAB_103f1bf4:
                          local_30 = local_30 + -1;
                          uVar43 = local_2c;
                          if (0 < local_30) {
                            if ((pQVar41 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                               || (pQVar41->___possibleModules_18 ==
                                   (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)) break;
                            pOVar42 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                                ((OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                                  *)(local_154 + 0x14),
                                                 pQVar41->___possibleModules_18,local_30,
                                                 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                                );
                            local_d8._0_2_ = (pOVar42->___sides_0).___v00_0;
                            local_d8._2_2_ = (pOVar42->___sides_0).___v01_1;
                            local_d8._4_2_ = (pOVar42->___sides_0).___v10_2;
                            local_d8._6_2_ = (pOVar42->___sides_0).___v11_3;
                            local_d8._8_2_ = (pOVar42->___sides_0).___v20_4;
                            local_d8._10_2_ = (pOVar42->___sides_0).___v21_5;
                            local_d8._12_2_ = (pOVar42->___sides_0).___v30_6;
                            local_d8._14_2_ = (pOVar42->___sides_0).___v31_7;
                            local_c8 = *(undefined8 *)&(pOVar42->___sides_0).___v4_8;
                            local_c0 = pOVar42->___cost_2;
                            uVar34 = SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
                                               ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                                 *)local_d8,(int)(char)local_50,(MethodInfo *)0x0);
                            local_3c = (double)(ulonglong)CONCAT24(uVar34,(undefined4)local_3c);
                            if (uVar34 != 0) {
                              if (param_2->___possibleModules_18 ==
                                  (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) break;
                              iVar38 = param_2->___possibleModules_18->____size_2;
                              do {
                                iVar38 = iVar38 + -1;
                                if (iVar38 < 1) {
                                  if ((param_1->___master_4 ==
                                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
                                     || (pGVar6 = param_1->___master_4->___graph_7,
                                        pQVar41 ==
                                        (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
                                  goto LAB_103f1e61;
                                  local_34 = CONCAT31(local_34._1_3_,
                                                      pQVar41->___decorSideVariationMask_6);
                                  if (pGVar6 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)
                                                0x0) goto LAB_103f1e61;
                                  pRVar35 = Graph_GetQubeRelation6_m8FE25DE15ACFDB01964A99C5C6D0E1E8F6461294
                                                      ((
                                                  Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8
                                                  *)local_154,pGVar6,pQVar41,
                                                  pQVar41->___decorSideVariationMask_6,
                                                  (MethodInfo *)0x0);
                                  uVar29 = local_c8;
                                  uVar20 = (pRVar35->___r0_0).___qube_0;
                                  uVar21 = (pRVar35->___r0_0).___indexInOther_1;
                                  uVar22 = *(undefined3 *)&(pRVar35->___r0_0).field_0x5;
                                  RVar12.___r0_0._5_3_ = uVar22;
                                  RVar12.___r0_0.___indexInOther_1 = uVar21;
                                  RVar12.___r0_0.___qube_0 =
                                       (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)uVar20;
                                  uVar23 = (pRVar35->___r1_1).___qube_0;
                                  uVar24 = (pRVar35->___r1_1).___indexInOther_1;
                                  uVar25 = *(undefined3 *)&(pRVar35->___r1_1).field_0x5;
                                  RVar12.___r1_1._5_3_ = uVar25;
                                  RVar12.___r1_1.___indexInOther_1 = uVar24;
                                  RVar12.___r1_1.___qube_0 =
                                       (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)uVar23;
                                  uVar26 = (pRVar35->___r2_2).___qube_0;
                                  uVar27 = (pRVar35->___r2_2).___indexInOther_1;
                                  uVar28 = (pRVar35->___r2_2).field_0x5;
                                  RVar12.___r2_2._5_1_ = uVar28;
                                  RVar12.___r2_2.___indexInOther_1 = uVar27;
                                  RVar12.___r2_2.___qube_0 =
                                       (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)uVar26;
                                  pQVar9 = (pRVar35->___r3_3).___qube_0;
                                  uVar48 = *(undefined4 *)&(pRVar35->___r3_3).___indexInOther_1;
                                  pQVar10 = (pRVar35->___r4_4).___qube_0;
                                  OVar11.___sides_0.___v10_2 = local_d8._4_2_;
                                  OVar11.___sides_0.___v11_3 = local_d8._6_2_;
                                  OVar11.___sides_0.___v00_0 = local_d8._0_2_;
                                  OVar11.___sides_0.___v01_1 = local_d8._2_2_;
                                  OVar11.___sides_0.___v20_4 = local_d8._8_2_;
                                  OVar11.___sides_0.___v21_5 = local_d8._10_2_;
                                  OVar11.___sides_0.___v30_6 = local_d8._12_2_;
                                  OVar11.___sides_0.___v31_7 = local_d8._14_2_;
                                  OVar11.___sides_0.___v4_8 = (ushort)local_c8;
                                  OVar11.___sides_0.___v5_9 = local_c8._2_2_;
                                  OVar11.___orientedModule_1.___moduleIndex_0 = local_c8._4_2_;
                                  OVar11.___orientedModule_1.___flags_1 = local_c8._6_1_;
                                  OVar11.___orientedModule_1._3_1_ = local_c8._7_1_;
                                  OVar11.___cost_2 = local_c0;
                                  RVar12.___r2_2._6_2_ =
                                       (short)((uint)*(undefined4 *)
                                                      &(pRVar35->___r2_2).___indexInOther_1 >> 0x10)
                                  ;
                                  RVar12.___r3_3.___qube_0._0_2_ = (short)pQVar9;
                                  RVar12.___r3_3.___qube_0._2_2_ = (short)((uint)pQVar9 >> 0x10);
                                  RVar12.___r3_3._4_2_ = (short)uVar48;
                                  RVar12.___r3_3._6_2_ = (short)((uint)uVar48 >> 0x10);
                                  RVar12.___r4_4.___qube_0._0_2_ = (short)pQVar10;
                                  RVar12.___r4_4.___qube_0._2_2_ = (short)((uint)pQVar10 >> 0x10);
                                  RVar12.___r4_4.___indexInOther_1 =
                                       (pRVar35->___r4_4).___indexInOther_1;
                                  RVar12.___r4_4._5_3_ =
                                       *(undefined3 *)&(pRVar35->___r4_4).field_0x5;
                                  RVar12.___r5_5.___qube_0 = (pRVar35->___r5_5).___qube_0;
                                  RVar12.___r5_5.___indexInOther_1 =
                                       (pRVar35->___r5_5).___indexInOther_1;
                                  RVar12.___r5_5._5_3_ =
                                       *(undefined3 *)&(pRVar35->___r5_5).field_0x5;
                                  local_c8 = uVar29;
                                  WaveFunctionCollapse_RemovePossibleDecor_m10FC040245024449331A113C5DEFCEDA9D978EA1
                                            (param_1,pQVar41,OVar11,local_30,RVar12,
                                             (MethodInfo *)0x0);
                                  break;
                                }
                                if (param_2->___possibleModules_18 ==
                                    (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
                                goto LAB_103f1e61;
                                pOVar42 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                                    ((
                                                  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB
                                                  *)(local_154 + 0x14),
                                                  param_2->___possibleModules_18,iVar38,
                                                  List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                                  );
                                local_124._0_2_ = (pOVar42->___sides_0).___v00_0;
                                local_124._2_2_ = (pOVar42->___sides_0).___v01_1;
                                local_124._4_2_ = (pOVar42->___sides_0).___v10_2;
                                local_124._6_2_ = (pOVar42->___sides_0).___v11_3;
                                local_124._8_2_ = (pOVar42->___sides_0).___v20_4;
                                local_124._10_2_ = (pOVar42->___sides_0).___v21_5;
                                local_124._12_2_ = (pOVar42->___sides_0).___v30_6;
                                local_124._14_2_ = (pOVar42->___sides_0).___v31_7;
                                local_114 = *(undefined8 *)&(pOVar42->___sides_0).___v4_8;
                                local_10c = pOVar42->___cost_2;
                                uVar34 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                                                   ((
                                                  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B
                                                  *)local_124,local_2c,(MethodInfo *)0x0);
                              } while ((ushort)((ulonglong)local_3c >> 0x20) != uVar34);
                            }
                            goto LAB_103f1bf4;
                          }
                        }
                      }
                      uVar43 = uVar43 + 1;
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_103f1e61:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
