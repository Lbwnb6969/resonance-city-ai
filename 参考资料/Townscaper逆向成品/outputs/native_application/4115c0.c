// RVA 0x4115c0 | Placemaker.HoverData$$Iterate
// PDB: HoverData_Iterate_mEA1F52E92A6ED7C4FFF5D02B092B885D8B464578
// Body: [[104115c0, 104116cc] [104116d0, 10411738] [1041173c, 10411ad5]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 10068f80 List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 1022f760 ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
// 102fb3b0 Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
// 103d9a40 ModuleMath_GetCornerLinkIndex_mD8452E1EC3B602C8301D4911AE63113CB0ED1F14
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1074e260 OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6b990 Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11030e80 List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared

bool __cdecl
HoverData_Iterate_mEA1F52E92A6ED7C4FFF5D02B092B885D8B464578
          (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,MethodInfo *param_2)

{
  List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *pLVar1;
  Il2CppClass *pIVar2;
  ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *pMVar3;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar4;
  List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F *pLVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Il2CppObject *pIVar10;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar11;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *pOVar12;
  uint uVar13;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar15;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar21;
  Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 local_12c;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB local_d0;
  int local_b4 [16];
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_74;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 local_6c [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OStack_44;
  int local_3c;
  int local_38;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *local_34;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *local_30;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_2c;
  int local_28;
  uint local_24;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_20;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_1c;
  int local_18;
  int local_14;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_10;
  uint local_c;
  byte local_5;

  if (DAT_1151ca97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m54E3E2B6B272C090271464FA6F62C3508B76A5AA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m00E74FEB0C17C8E9608EA287F5A42340D9CE7C45_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Contains_m77250866D78124C44DE377FF524BF12F30188AC6_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m216C8B8C4FE3E41DEF9880282F3E87C21A251680_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m6D92FA65BC8228B91CCB6AD672A9716D8E246E61_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE0FEBC84392DB02610B7365E95DD39AA73A49E08_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ca97 = '\x01';
  }
  local_1c.___moduleIndex_0 = 0;
  local_1c.___flags_1 = '\0';
  local_1c._3_1_ = 0;
  memset((uchar *)local_b4,'\0',0x5c);
  pLVar1 = param_1->___floodVoxels_25;
  if (pLVar1 != (List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *)0x0) {
    uVar13 = param_1->___floodIndex_24;
    if (pLVar1->____size_2 <= (int)uVar13) {
      return false;
    }
    param_1->___floodIndex_24 = uVar13 + 1;
    if ((uint)pLVar1->____size_2 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    local_2c = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                (pLVar1->____items_1 + uVar13 * 4 + 0x10);
    if (local_2c != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      local_10 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                           (local_2c,
                            Component_GetComponentInParent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m54E3E2B6B272C090271464FA6F62C3508B76A5AA_RuntimeMethod_var
                           );
      local_24 = 0;
      if ((local_10 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) &&
         (local_10[1].___m_CachedPtr_0 != 0)) {
        local_3c = *(int *)(local_10[1].___m_CachedPtr_0 + 0xc);
        if (0 < local_3c) {
          local_28 = 0x10;
          do {
            iVar18 = local_10[1].___m_CachedPtr_0;
            if (iVar18 == 0) goto LAB_10411ad1;
            if (*(uint *)(iVar18 + 0xc) <= local_24) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pSVar21 = *(Square_tD1B7B6748B35059E198069769341DA3192352B8F **)
                       (local_28 + *(int *)(iVar18 + 8));
            local_20 = pSVar21;
            if (pSVar21 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0)
            goto LAB_10411ad1;
            pCVar14 = pSVar21->___c0_8;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                              ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pCVar14,local_10,
                               (MethodInfo *)0x0);
            if (bVar7) {
              local_14 = 0;
            }
            else {
              pCVar14 = pSVar21->___c1_9;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pCVar14,
                                 local_10,(MethodInfo *)0x0);
              if (bVar7) {
                local_14 = 1;
              }
              else {
                pCVar14 = pSVar21->___c2_10;
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                  ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pCVar14,
                                   local_10,(MethodInfo *)0x0);
                local_14 = 3 - (uint)bVar7;
              }
            }
            local_18 = 0;
            do {
              iVar18 = (uint)(byte)local_2c[1].field_0x1 + local_18;
              local_38 = iVar18;
              pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pSVar21,
                                  (MethodInfo *)0x0);
              if ((((pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
                   (pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                       (pTVar9,iVar18,(MethodInfo *)0x0),
                   pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                  (pIVar10 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        pTVar9,
                                        Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                       ), pIVar10 == (Il2CppObject *)0x0)) ||
                 (pIVar2 = pIVar10[6].field0_0x0.klass, pIVar2 == (Il2CppClass *)0x0))
              goto LAB_10411ad1;
              if (pIVar2->namespaze != (char *)0x0) {
                pOVar11 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                    (&local_d0,
                                     (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)pIVar2,0,
                                     List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                    );
                local_58._0_2_ = (pOVar11->___sides_0).___v00_0;
                local_58._2_2_ = (pOVar11->___sides_0).___v01_1;
                uStack_54._0_2_ = (pOVar11->___sides_0).___v10_2;
                uStack_54._2_2_ = (pOVar11->___sides_0).___v11_3;
                uStack_50._0_2_ = (pOVar11->___sides_0).___v20_4;
                uStack_50._2_2_ = (pOVar11->___sides_0).___v21_5;
                uStack_4c._0_2_ = (pOVar11->___sides_0).___v30_6;
                uStack_4c._2_2_ = (pOVar11->___sides_0).___v31_7;
                local_48._0_2_ = (pOVar11->___sides_0).___v4_8;
                local_48._2_2_ = (pOVar11->___sides_0).___v5_9;
                OStack_44 = pOVar11->___orientedModule_1;
                local_1c = OStack_44;
                if (((param_1->___master_4 ==
                      (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                    (pMVar3 = param_1->___master_4->___moduleLibrary_8,
                    pMVar3 == (ModuleLibrary_tA9594D369D9806033EAF0CC489599A44D547BC52 *)0x0)) ||
                   (pLVar4 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                             pMVar3->___modules_5,
                   pLVar4 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0))
                goto LAB_10411ad1;
                local_30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                     (pLVar4,(uint)OStack_44 & 0xffff,
                                      List_1_get_Item_m6D92FA65BC8228B91CCB6AD672A9716D8E246E61_RuntimeMethod_var
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
                pLVar5 = *(List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F **)
                          ((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                ->static_fields + 0x1c);
                iVar18 = OrientedModule_get_orientation_m37DCE9344C2BB47B6F75AB647A1A07555A133CDA
                                   (&local_1c,(MethodInfo *)0x0);
                if (pLVar5 == (List_1_t38F47D75920465C103ED955F9FFD3E07D4AB542F *)0x0)
                goto LAB_10411ad1;
                pOVar12 = List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_inline
                                    (&local_12c,pLVar5,iVar18,
                                     List_1_get_Item_mEBD55FA825076FEC374FC8A3B77BE129E482B20A_RuntimeMethod_var
                                    );
                iVar18 = local_18;
                piVar20 = local_b4;
                for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
                  *piVar20 = (pOVar12->___int4x4_0).___c0_0.___x_0;
                  pOVar12 = (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *)
                            &(pOVar12->___int4x4_0).___c0_0.___y_1;
                  piVar20 = piVar20 + 1;
                }
                bVar8 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                                  (&local_74,local_14 + iVar18 * -4 + 4,(MethodInfo *)0x0);
                uVar13 = (uint)bVar8;
                uVar19 = 0;
                local_c = uVar13;
                do {
                  if (uVar19 != uVar13) {
                    if (local_30 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
                    goto LAB_10411ad1;
                    uVar6 = *(uint *)&local_30[2].field_0x4;
                    if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var
                                );
                    }
                    iVar18 = ModuleMath_GetCornerLinkIndex_mD8452E1EC3B602C8301D4911AE63113CB0ED1F14
                                       (local_c,uVar19,(MethodInfo *)0x0);
                    uVar13 = local_c;
                    if ((uVar6 & 1 << ((byte)iVar18 & 0x1f)) != 0) {
                      local_5 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                                          (local_6c,uVar19,(MethodInfo *)0x0);
                      pCVar14 = Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
                                          (local_20,local_5 & 3,(MethodInfo *)0x0);
                      if (pCVar14 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                      goto LAB_10411ad1;
                      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          pCVar14,(MethodInfo *)0x0);
                      if (param_1->___master_4 ==
                          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
                      goto LAB_10411ad1;
                      local_34 = param_1->___master_4->___graph_7;
                      pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pCVar14,(MethodInfo *)0x0);
                      if (((local_34 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) ||
                          (iVar18 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                                              (local_34,pTVar15,(uint)(local_5 >> 2) + local_38 + -1
                                               ,(MethodInfo *)0x0),
                          pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                         (pTVar9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                             (pTVar9,iVar18,(MethodInfo *)0x0),
                         pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                      goto LAB_10411ad1;
                      OVar16 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                          pTVar9,
                                          Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                                         );
                      if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                          param_1->___floodVoxels_25 ==
                          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)
                      goto LAB_10411ad1;
                      bVar7 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                                        ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                                         param_1->___floodVoxels_25,(Il2CppObject *)OVar16,
                                         List_1_Contains_m77250866D78124C44DE377FF524BF12F30188AC6_RuntimeMethod_var
                                        );
                      uVar13 = local_c;
                      if (!bVar7) {
                        if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                            param_1->___floodVoxels_25 ==
                            (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                        goto LAB_10411ad1;
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   param_1->___floodVoxels_25,OVar16,
                                   List_1_Add_m00E74FEB0C17C8E9608EA287F5A42340D9CE7C45_RuntimeMethod_var
                                  );
                        uVar13 = local_c;
                      }
                    }
                  }
                  uVar19 = uVar19 + 1;
                  pSVar21 = local_20;
                } while ((int)uVar19 < 8);
              }
              local_18 = local_18 + 1;
            } while (local_18 < 2);
            local_24 = local_24 + 1;
            local_28 = local_28 + 4;
          } while ((int)local_24 < local_3c);
        }
        return true;
      }
    }
  }
LAB_10411ad1:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
