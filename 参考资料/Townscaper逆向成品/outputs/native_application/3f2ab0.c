// RVA 0x3f2ab0 | Placemaker.WaveFunctionCollapse$$Iterate0
// PDB: WaveFunctionCollapse_Iterate0_m0EE168F3B6682BA0A80DC8DEAC638C37D5A94548
// Body: [[103f2ab0, 103f2baf] [103f2bb6, 103f2c36] [103f2c3d, 103f2e5a] [103f2e61, 103f2f0d] [103f2f11, 103f2ff9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1022f8a0 ByteQube_op_Inequality_mD1DB83CED148C40918925E2AEF1870E24DABE03F
// 102f54f0 SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
// 103d8b80 ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
// 103d9b00 ModuleMath_GetIndexedMaterials_m97899D05A4DFEF3B4F6518E9A04350DA8EAB426C
// 103d9ca0 ModuleMath_MarkHiddenCornersAmbigous_m9A66E82A25B83A84948141B8F0DCD880AA647CA8
// 103f1e80 WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
// 103f4950 WaveFunctionCollapse_MaybeQueueQubeForRebuilding_m20704DC06BBB45F41FE6250CB7B34088F31F84E9
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 105d1f60 List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10809860 Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10880610 Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

bool __cdecl
WaveFunctionCollapse_Iterate0_m0EE168F3B6682BA0A80DC8DEAC638C37D5A94548
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar11;
  undefined1 uVar12;
  List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *pLVar3;
  uint uVar4;
  undefined1 uVar13;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar5;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar6;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar7;
  KeyValuePair_2U5BU5D_t7A55D2FEB3F9BBFE7CC9322E7E8F00A4D1C77D4D *pKVar8;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar9;
  OrientedModuleSidesU5BU5D_tDCD82EB3D22B340E576C01C556E41FC7886DB69E *pOVar10;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar14;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar15;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar16;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar17;
  byte bVar18;
  bool bVar19;
  uchar uVar20;
  ushort uVar21;
  ushort uVar22;
  Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA *pPVar23;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar24;
  int iVar25;
  ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *pMVar26;
  Il2CppObject *pIVar27;
  MethodInfo *unaff_EDI;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar28;
  undefined1 local_60 [8];
  Il2CppObject *pIStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B local_4c;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_2c;
  undefined8 uStack_28;
  float fStack_20;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *local_1c;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *local_18;
  Il2CppObject *local_14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_10;
  uint local_9;
  byte local_5;

  if (DAT_1151c91a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m0302590BAD51751E398450703294DECD8CCF9A6E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mDBFFC2F10BE878B4B2BD1C8A7ED360E021270E56_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5E6AE49A253142418262384B43F7C4D8AAB97FAB_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151c91a = '\x01';
  }
  local_60._0_2_ = 0;
  local_60._2_2_ = 0;
  local_60._4_2_ = 0;
  local_60._6_2_ = 0;
  pIStack_58 = (Il2CppObject *)0x0;
  uStack_54._0_2_ = 0;
  uStack_54._2_2_ = 0;
  local_50._0_2_ = 0;
  local_50._2_2_ = 0;
  local_9 = local_9 & 0xffffff00;
  local_14 = (Il2CppObject *)0x0;
  local_4c.___v00_0 = 0;
  local_4c.___v01_1 = 0;
  local_4c.___v10_2 = 0;
  local_4c.___v11_3 = 0;
  local_4c.___v20_4 = 0;
  local_4c.___v21_5 = 0;
  local_4c.___v30_6 = 0;
  local_4c.___v31_7 = 0;
  local_4c.___v4_8 = 0;
  local_4c.___v5_9 = 0;
  if (param_1->___propagationCounter_5 != param_1->___lastStartedPropagation_6) {
    param_1->___lastStartedPropagation_6 = param_1->___propagationCounter_5;
    return true;
  }
  pLVar3 = param_1->___updates_8;
  if (pLVar3 == (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) goto LAB_103f2ff5;
  uVar4 = pLVar3->____size_2;
  if ((int)uVar4 < 1) {
    pLVar3 = param_1->___removeNeighbors_7;
    if (pLVar3 == (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) goto LAB_103f2ff5;
    uVar4 = pLVar3->____size_2;
    if ((int)uVar4 < 1) {
      return false;
    }
    if (uVar4 <= uVar4 - 1) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pPVar23 = pLVar3->____items_1->m_Items + (uVar4 - 1);
    local_2c = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                &((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&pPVar23->___qube_0)->
                 ___dateData_44;
    uStack_28._0_2_ = pPVar23->___propagationIndex_1;
    uStack_28._2_2_ = *(undefined2 *)&pPVar23->field_0x6;
    uStack_28._4_4_ = pPVar23->___existanceIndex_2;
    fStack_20 = *(float *)&pPVar23->___sideVariationMask_3;
    if ((pLVar3 == (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) ||
       (List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar3,uVar4 - 1,
                   List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var),
       local_2c == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)) goto LAB_103f2ff5;
    if ((ushort)uStack_28 != local_2c->___lastPropagation_11) {
      return true;
    }
    if (uStack_28._4_4_ != local_2c->___existanceIndex_9) {
      return true;
    }
    uStack_28 = CONCAT62(uStack_28._2_6_,(ushort)uStack_28 + 1);
    local_2c->___lastPropagation_11 = local_2c->___lastPropagation_11 + 1;
    bVar18 = WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
                       (param_1,local_2c,(MethodInfo *)0x0);
    fStack_20 = (float)CONCAT31(fStack_20._1_3_,fStack_20._0_1_ & bVar18);
  }
  else {
    if (uVar4 <= uVar4 - 1) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pPVar23 = pLVar3->____items_1->m_Items + (uVar4 - 1);
    local_2c = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                &((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&pPVar23->___qube_0)->
                 ___dateData_44;
    uStack_28._0_2_ = pPVar23->___propagationIndex_1;
    uStack_28._2_2_ = *(undefined2 *)&pPVar23->field_0x6;
    uStack_28._4_4_ = pPVar23->___existanceIndex_2;
    fStack_20 = *(float *)&pPVar23->___sideVariationMask_3;
    if ((pLVar3 == (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) ||
       (List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pLVar3,uVar4 - 1,
                   List_1_RemoveAt_mE525163C7D5BDEC94FED1A369D9725924289DAF0_RuntimeMethod_var),
       pQVar17 = local_2c, local_2c == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
    goto LAB_103f2ff5;
    if ((ushort)uStack_28 != local_2c->___lastPropagation_11) {
      return true;
    }
    if (uStack_28._4_4_ != local_2c->___existanceIndex_9) {
      return true;
    }
    local_1c = *(ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 **)
                &local_2c->___cornerValues_13;
    local_18 = *(WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A **)
                &(local_2c->___cornerValues_13).___v4_4;
    if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    }
    uVar1._0_4_ = *(undefined4 *)
                   ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                         static_fields + 0x40);
    local_10 = *(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)
                ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                      static_fields + 0x44);
    if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    }
    BVar28._4_4_ = local_18;
    BVar28._0_4_ = local_1c;
    BVar15._4_4_ = local_10;
    BVar15._0_4_ = (undefined4)uVar1;
    bVar19 = ByteQube_op_Inequality_mD1DB83CED148C40918925E2AEF1870E24DABE03F
                       (BVar28,BVar15,(MethodInfo *)0x0);
    if (bVar19) {
      local_1c = *(ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 **)
                  &(pQVar17->___cornerValues_13).___v4_4;
      uVar2 = (pQVar17->___cornerValues_13).___v0_0;
      uVar11 = (pQVar17->___cornerValues_13).___v1_1;
      uVar12 = (pQVar17->___cornerValues_13).___v2_2;
      uVar13 = (pQVar17->___cornerValues_13).___v3_3;
      BVar16.___v3_3 = uVar13;
      BVar16.___v2_2 = uVar12;
      BVar16.___v1_1 = uVar11;
      BVar16.___v0_0 = uVar2;
      if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
      }
      BVar16._4_4_ = local_1c;
      BVar28 = ModuleMath_MarkHiddenCornersAmbigous_m9A66E82A25B83A84948141B8F0DCD880AA647CA8
                         (BVar16,(MethodInfo *)0x0);
      BVar28 = ModuleMath_GetIndexedMaterials_m97899D05A4DFEF3B4F6518E9A04350DA8EAB426C
                         (BVar28,(MethodInfo *)0x0);
      if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
          (pMVar5 = param_1->___master_4->___moduleLibrary_8,
          pMVar5 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) ||
         (pDVar6 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   pMVar5->___cornerDict_13,
         pDVar6 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0))
      goto LAB_103f2ff5;
      bVar19 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                         (pDVar6,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar28,&local_14,
                          Dictionary_2_TryGetValue_m0302590BAD51751E398450703294DECD8CCF9A6E_RuntimeMethod_var
                         );
      pIVar27 = local_14;
      if (!bVar19) {
        pIVar27 = (Il2CppObject *)0xffffffff;
      }
      pQVar17->___possibleModuleListIndex_8 = (int)pIVar27;
    }
    else {
      pQVar17->___possibleModuleListIndex_8 = -1;
    }
    pTVar24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar17,
                         (MethodInfo *)0x0);
    local_10 = pTVar24;
    if ((pQVar17->___voxelCount_4 == '\0') ||
       (bVar19 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                           (pQVar17,(MethodInfo *)0x0), bVar19)) {
      if (pTVar24 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_103f2ff5;
      iVar25 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (pTVar24,(MethodInfo *)0x0);
      pTVar24 = local_10;
      while (iVar25 = iVar25 + -1, local_10 = pTVar24, -1 < iVar25) {
        if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
        goto LAB_103f2ff5;
        local_1c = param_1->___master_4->___moduleBuilder_16;
        pTVar24 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar24,iVar25,(MethodInfo *)0x0);
        if ((pTVar24 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
           (pMVar26 = (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)
                      Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar24,
                                 Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
                                ),
           local_1c == (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0))
        goto LAB_103f2ff5;
        ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
                  (local_1c,pMVar26,(MethodInfo *)0x0);
        pTVar24 = local_10;
      }
    }
    bVar19 = Qube_get_fullyCovered_m493EE79CD759479589794818C3E2CEA59827B873
                       (pQVar17,(MethodInfo *)0x0);
    pMVar7 = (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)
             pQVar17->___possibleModules_18;
    if (bVar19) {
      if (pMVar7 != (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0) {
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pMVar7,
                   List_1_Clear_m122B2EBD8A132127043C12DCC48372E85C1165F9_RuntimeMethod_var);
        return true;
      }
      goto LAB_103f2ff5;
    }
    local_1c = pMVar7;
    if (pMVar7 == (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0) goto LAB_103f2ff5;
    local_18 = pMVar7->___master_4;
    if ((int)local_18 < 1) {
      local_60._0_2_ = 0;
      local_60._2_2_ = 0;
      local_60._4_2_ = 0;
      local_60._6_2_ = 0;
      pIStack_58 = (Il2CppObject *)0x0;
      uStack_54._0_2_ = 0;
      uStack_54._2_2_ = 0;
      uVar1._0_2_ = 0;
      uVar1._2_2_ = 0;
    }
    else {
      if (local_18 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pKVar8 = (KeyValuePair_2U5BU5D_t7A55D2FEB3F9BBFE7CC9322E7E8F00A4D1C77D4D *)pMVar7->_padding_;
      uVar1._0_4_ = pKVar8[1]._padding_;
      uVar1._4_4_ = pKVar8[1]._padding_;
      local_60._0_4_ = *(undefined4 *)&pKVar8->m_Items[0].___key_0.___dateData_44;
      local_60._4_4_ = *(undefined4 *)((int)&pKVar8->m_Items[0].___key_0.___dateData_44 + 4);
      pIStack_58 = pKVar8->m_Items[0].___value_1;
      uStack_54._0_2_ = *(ushort *)&pKVar8->m_Items[0].field_0xc;
      uStack_54._2_2_ = *(ushort *)&pKVar8->m_Items[0].field_0xe;
      fStack_20 = (float)pKVar8[1]._padding_;
      uStack_28 = uVar1;
    }
    local_5 = pQVar17->___sideVariationMask_5;
    pQVar17->___lastPropagation_11 = param_1->___propagationCounter_5 + 1;
    local_50 = (undefined4)uVar1;
    uVar20 = WaveFunctionCollapse_FillQubePossibilities_mB7DBFC2A68B8C6C967A1CCFA6BAED5EAC5BE284F
                       (param_1,pQVar17,(MethodInfo *)0x0);
    local_9 = CONCAT31(local_9._1_3_,uVar20);
    WaveFunctionCollapse_MaybeQueueQubeForRebuilding_m20704DC06BBB45F41FE6250CB7B34088F31F84E9
              (param_1,pQVar17,(MethodInfo *)0x0);
    if ((int)local_18 < 1) {
      if (pTVar24 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_103f2ff5;
      iVar25 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                         (pTVar24,(MethodInfo *)0x0);
      if (iVar25 == 0) {
        local_9 = local_9 | 0xf;
      }
    }
    else {
      if (pQVar17->___possibleModules_18 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0)
      goto LAB_103f2ff5;
      if (0 < pQVar17->___possibleModules_18->____size_2) {
        local_9 = CONCAT31(local_9._1_3_,(byte)local_9 | local_5);
        pLVar9 = pQVar17->___possibleModules_18;
        if (pLVar9 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f2ff5;
        if (pLVar9->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pOVar10 = pLVar9->____items_1;
        iVar25 = 0;
        local_4c.___v4_8 = pOVar10->m_Items[0].___sides_0.___v4_8;
        local_4c.___v5_9 = pOVar10->m_Items[0].___sides_0.___v5_9;
        uStack_28 = *(longlong *)&pOVar10->m_Items[0].___sides_0.___v4_8;
        local_4c.___v00_0 = pOVar10->m_Items[0].___sides_0.___v00_0;
        local_4c.___v01_1 = pOVar10->m_Items[0].___sides_0.___v01_1;
        local_4c.___v10_2 = pOVar10->m_Items[0].___sides_0.___v10_2;
        local_4c.___v11_3 = pOVar10->m_Items[0].___sides_0.___v11_3;
        local_4c.___v20_4 = pOVar10->m_Items[0].___sides_0.___v20_4;
        local_4c.___v21_5 = pOVar10->m_Items[0].___sides_0.___v21_5;
        local_4c.___v30_6 = pOVar10->m_Items[0].___sides_0.___v30_6;
        local_4c.___v31_7 = pOVar10->m_Items[0].___sides_0.___v31_7;
        fStack_20 = pOVar10->m_Items[0].___cost_2;
        do {
          bVar19 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                             ((uchar)local_9,iVar25,(MethodInfo *)0x0);
          if (!bVar19) {
            uVar21 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                               (&local_4c,iVar25,(MethodInfo *)0x0);
            uVar22 = SideProfile_Get0_mB5B53CD9500AC30BC8D35482327C3106683FA43C
                               ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)local_60,
                                iVar25,(MethodInfo *)0x0);
            if (uVar21 != uVar22) {
              Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
                        ((uchar *)&local_9,iVar25,true,(MethodInfo *)0x0);
            }
          }
          iVar25 = iVar25 + 1;
        } while (iVar25 < 6);
      }
    }
    uStack_28 = (ulonglong)pQVar17->___existanceIndex_9 << 0x20;
    uStack_28 = CONCAT62(uStack_28._2_6_,pQVar17->___lastPropagation_11);
    fStack_20 = (float)(local_9 & 0xff);
    local_2c = pQVar17;
  }
  if (param_1->___propagations_9 != (List_1_tBA1C0F33226FF5217F175C563096EEB54FFE152C *)0x0) {
    KVar14.___value_1 = (Il2CppObject *)fStack_20;
    KVar14.___key_0.___dateData_44 = uStack_28;
    KVar14._12_4_ = List_1_Add_m528F413DBBF0B32C9A6414A25B65BA2704A01409_RuntimeMethod_var;
    List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___propagations_9,KVar14
               ,unaff_EDI);
    return true;
  }
LAB_103f2ff5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
