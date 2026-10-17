// RVA 0x3f4470 | Placemaker.WaveFunctionCollapse$$LaterUpdate
// PDB: WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
// Body: [[103f4470, 103f456e] [103f4572, 103f4901]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 10069330 List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
// 10069360 List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 103d7130 ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
// 103f4913 FUN_103f4913
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1074e260 OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
// 1074e270 OrientedModule_op_Equality_mABF1D046329DBB7B3B48A2EE353845D5EE75AEB1
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a437e0 Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar2;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar3;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar4;
  List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *pLVar5;
  List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *pLVar6;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar7;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB OVar8;
  undefined1 *puVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar13;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar14;
  int iVar15;
  Il2CppObject *pIVar16;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar17;
  SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *pSVar18;
  int iVar19;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB local_e4;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB local_90;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  ushort local_60;
  ushort uStack_5e;
  ushort uStack_5c;
  ushort uStack_5a;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OStack_58;
  float fStack_54;
  undefined8 local_4c;
  undefined8 local_44;
  uint local_3c;
  uint local_38;
  int local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_20;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff10;
  ExceptionList = &pvStack_10;
  puVar9 = &stack0xffffff10;
  if (DAT_1151c918 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m0376A84BDB55A88CF166A9B7BF75C7BC18327959_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE71C2B070FD46A88A0B5805D7B43E0769A22F125_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m6D92FA65BC8228B91CCB6AD672A9716D8E246E61_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m77E89752C3DA0F7404540C725413E34437C67664_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralEB4577956E8C06BB23A2020BEAF3FC9BA11AB943);
    DAT_1151c918 = '\x01';
    puVar9 = local_14;
  }
  local_14 = puVar9;
  local_15 = 0;
  local_1c.___moduleIndex_0 = 0;
  local_1c.___flags_1 = '\0';
  local_1c._3_1_ = 0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
             (MethodInfo *)_stringLiteralEB4577956E8C06BB23A2020BEAF3FC9BA11AB943);
  local_8 = 0;
  uVar12 = local_28;
  if (param_1->___qubesToRebuild_18 != (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) {
    local_28 = param_1->___qubesToRebuild_18->____size_2;
    while( true ) {
      uVar12 = local_28 - 1;
      pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___qubesToRebuild_18;
      if ((int)uVar12 < 0) break;
      if (pLVar1 == (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_103f493d;
      if ((uint)pLVar1->____size_2 <= uVar12) {
        local_28 = uVar12;
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pQVar20 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                 ((int)pLVar1->____items_1->m_Items + local_28 * 4 + -4);
      local_20 = pQVar20;
      if (pQVar20 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) goto LAB_103f493d;
      local_28 = uVar12;
      if (pQVar20->___awaitingRebuilding_14 != false) {
        pLVar2 = pQVar20->___possibleModules_18;
        pQVar20->___awaitingRebuilding_14 = false;
        if (pLVar2 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f493d;
        iVar15 = pLVar2->____size_2;
        local_34 = iVar15;
        if (iVar15 != 0) {
          pOVar13 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                              (&local_90,pLVar2,0,
                               List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                              );
          local_44 = *(undefined8 *)&(pOVar13->___sides_0).___v4_8;
          local_24 = pOVar13->___cost_2;
          local_60 = (pOVar13->___sides_0).___v00_0;
          uStack_5e = (pOVar13->___sides_0).___v01_1;
          uStack_5c = (pOVar13->___sides_0).___v10_2;
          uStack_5a = (pOVar13->___sides_0).___v11_3;
          OStack_58 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                       &(pOVar13->___sides_0).___v20_4;
          fStack_54 = *(float *)&(pOVar13->___sides_0).___v30_6;
          fVar21 = local_24;
          uVar26 = local_44;
          uVar22 = _local_60;
          uVar23 = _uStack_5c;
          OVar24 = OStack_58;
          fVar25 = fStack_54;
          if (((1 < iVar15) && (((byte)pQVar20->___lastPropagation_11 & 3) == 1)) &&
             (pQVar20->___lastPropagation_11 != 0)) {
            pTVar14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar20,
                                 (MethodInfo *)0x0);
            uVar12 = local_28;
            if (pTVar14 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_103f493d;
            iVar15 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                               (pTVar14,(MethodInfo *)0x0);
            fVar21 = local_24;
            uVar26 = local_44;
            uVar22 = _local_60;
            uVar23 = _uStack_5c;
            OVar24 = OStack_58;
            fVar25 = fStack_54;
            if (0 < iVar15) {
              pTVar14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pQVar20,
                                   (MethodInfo *)0x0);
              uVar12 = local_28;
              if (((pTVar14 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
                  (pTVar14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                       (pTVar14,0,(MethodInfo *)0x0), uVar12 = local_28,
                  pTVar14 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                 (pIVar16 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pTVar14,
                                       Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
                                      ), uVar12 = local_28, pIVar16 == (Il2CppObject *)0x0))
              goto LAB_103f493d;
              local_1c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                         pIVar16[1].monitor;
              if (((param_1->___master_4 ==
                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                  (pMVar3 = param_1->___master_4->___moduleLibrary_8,
                  pMVar3 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) ||
                 (pLVar4 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)pMVar3->___modules_5,
                 pLVar4 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0))
              goto LAB_103f493d;
              pGVar17 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                  (pLVar4,(uint)local_1c & 0xffff,
                                   List_1_get_Item_m6D92FA65BC8228B91CCB6AD672A9716D8E246E61_RuntimeMethod_var
                                  );
              uVar12 = local_28;
              if (((param_1->___master_4 ==
                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                  (pMVar3 = param_1->___master_4->___moduleLibrary_8,
                  pMVar3 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) ||
                 (pLVar5 = pMVar3->___sideLookups_8,
                 pGVar17 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0))
              goto LAB_103f493d;
              pLVar6 = *(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 **)(pGVar17 + 1);
              iVar15 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                 (&local_1c,(MethodInfo *)0x0);
              uVar12 = local_28;
              if (pLVar6 == (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)0x0)
              goto LAB_103f493d;
              uVar11 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                                 (pLVar6,iVar15,
                                  List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_RuntimeMethod_var
                                 );
              uVar12 = local_28;
              if (pLVar5 == (List_1_t495FF7AE4BE0F47A6E81AD8BCF116BDAEF11196D *)0x0)
              goto LAB_103f493d;
              pSVar18 = List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_inline
                                  ((SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *)
                                   &local_90.___sides_0.___v20_4,pLVar5,(uint)uVar11,
                                   List_1_get_Item_mE651990AD028B092235DF9DBBC28F19A87DF6AE3_RuntimeMethod_var
                                  );
              local_74._0_2_ = pSVar18->___v00_0;
              local_74._2_2_ = pSVar18->___v01_1;
              uStack_70._0_2_ = pSVar18->___v10_2;
              uStack_70._2_2_ = pSVar18->___v11_3;
              uStack_6c._0_2_ = pSVar18->___v20_4;
              uStack_6c._2_2_ = pSVar18->___v21_5;
              uStack_68._0_2_ = pSVar18->___v30_6;
              uStack_68._2_2_ = pSVar18->___v31_7;
              local_3c._0_2_ = pSVar18->___v4_8;
              local_3c._2_2_ = pSVar18->___v5_9;
              local_38 = (uint)local_1c & 0xffff;
              local_2c = __real_7f7fffff;
              for (iVar15 = 0; fVar21 = local_24, pQVar20 = local_20, uVar26 = local_44,
                  uVar22 = _local_60, uVar23 = _uStack_5c, OVar24 = OStack_58, fVar25 = fStack_54,
                  iVar15 < local_34; iVar15 = iVar15 + 1) {
                uVar12 = local_28;
                if (local_20->___possibleModules_18 ==
                    (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) goto LAB_103f493d;
                pOVar13 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                    (&local_e4,local_20->___possibleModules_18,iVar15,
                                     List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                    );
                OVar24 = local_1c;
                local_90.___sides_0.___v30_6 = (pOVar13->___sides_0).___v00_0;
                local_90.___sides_0.___v31_7 = (pOVar13->___sides_0).___v01_1;
                local_90.___sides_0.___v4_8 = (pOVar13->___sides_0).___v10_2;
                local_90.___sides_0.___v5_9 = (pOVar13->___sides_0).___v11_3;
                local_90.___orientedModule_1 =
                     *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                      &(pOVar13->___sides_0).___v20_4;
                local_90.___cost_2 = *(float *)&(pOVar13->___sides_0).___v30_6;
                local_30 = pOVar13->___cost_2;
                local_b8 = *(undefined8 *)&(pOVar13->___sides_0).___v4_8;
                local_ac._0_2_ = (pOVar13->___sides_0).___v00_0;
                local_ac._2_2_ = (pOVar13->___sides_0).___v01_1;
                uStack_a8._0_2_ = (pOVar13->___sides_0).___v10_2;
                uStack_a8._2_2_ = (pOVar13->___sides_0).___v11_3;
                uStack_a4._0_2_ = (pOVar13->___sides_0).___v20_4;
                uStack_a4._2_2_ = (pOVar13->___sides_0).___v21_5;
                uStack_a0._0_2_ = (pOVar13->___sides_0).___v30_6;
                uStack_a0._2_2_ = (pOVar13->___sides_0).___v31_7;
                local_9c = *(undefined8 *)&(pOVar13->___sides_0).___v4_8;
                local_4c = local_b8;
                if ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var
                            );
                }
                bVar10 = OrientedModule_op_Equality_mABF1D046329DBB7B3B48A2EE353845D5EE75AEB1
                                   (local_9c._4_4_,OVar24,(MethodInfo *)0x0);
                fVar21 = local_30;
                pQVar20 = local_20;
                uVar26 = local_4c;
                uVar22 = local_90.___sides_0._12_4_;
                uVar23 = local_90.___sides_0._16_4_;
                OVar24 = local_90.___orientedModule_1;
                fVar25 = local_90.___cost_2;
                if (bVar10) break;
                iVar19 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0
                                   ((uint)local_b8._4_2_ - (local_38 & 0xffff),(MethodInfo *)0x0);
                fVar21 = (float)iVar19;
                if ((ushort)local_74 == local_90.___sides_0.___v30_6) {
                  fVar21 = fVar21 - __real_42c80000;
                }
                if ((ushort)uStack_70 == local_90.___sides_0.___v4_8) {
                  fVar21 = fVar21 - __real_42c80000;
                }
                if ((ushort)uStack_6c == local_90.___orientedModule_1.___moduleIndex_0) {
                  fVar21 = fVar21 - __real_42c80000;
                }
                if ((short)uStack_68 == local_90.___cost_2._0_2_) {
                  fVar21 = fVar21 - __real_42c80000;
                }
                if ((short)local_3c == (short)local_b8) {
                  fVar21 = fVar21 - __real_42c80000;
                }
                if (local_3c >> 0x10 == (uint)local_b8 >> 0x10) {
                  fVar21 = fVar21 - __real_42c80000;
                }
                if (fVar21 < local_2c) {
                  local_60 = local_90.___sides_0.___v30_6;
                  uStack_5e = local_90.___sides_0.___v31_7;
                  uStack_5c = local_90.___sides_0.___v4_8;
                  uStack_5a = local_90.___sides_0.___v5_9;
                  OStack_58 = local_90.___orientedModule_1;
                  fStack_54 = local_90.___cost_2;
                  local_24 = local_30;
                  local_44 = local_4c;
                  local_2c = fVar21;
                }
              }
            }
          }
          uVar12 = local_28;
          if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pMVar7 = param_1->___master_4->___moduleBuilder_16,
                pMVar7 == (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0))
          goto LAB_103f493d;
          uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
          OVar8.___sides_0.___v10_2 = (ushort)uVar23;
          OVar8.___sides_0.___v11_3 = SUB42(uVar23,2);
          OVar8.___sides_0.___v00_0 = (ushort)uVar22;
          OVar8.___sides_0.___v01_1 = SUB42(uVar22,2);
          OVar8.___sides_0._8_4_ = OVar24;
          OVar8.___sides_0._12_4_ = fVar25;
          OVar8.___sides_0.___v4_8 = (short)(int)uVar26;
          OVar8.___sides_0.___v5_9 = (short)((uint)(int)uVar26 >> 0x10);
          OVar8.___orientedModule_1.___moduleIndex_0 = (short)uVar27;
          OVar8.___orientedModule_1.___flags_1 = (char)((uint)uVar27 >> 0x10);
          OVar8.___orientedModule_1._3_1_ = (char)((uint)uVar27 >> 0x18);
          OVar8.___cost_2 = fVar21;
          ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
                    (pMVar7,pQVar20,OVar8,(MethodInfo *)0x0);
        }
      }
    }
    if (pLVar1 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      local_28 = uVar12;
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                (pLVar1,List_1_Clear_m0376A84BDB55A88CF166A9B7BF75C7BC18327959_RuntimeMethod_var);
      FUN_103f4913();
      return;
    }
  }
LAB_103f493d:
  local_28 = uVar12;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
