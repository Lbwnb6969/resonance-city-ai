// RVA 0x3d3970 | Placemaker.Ui.MasterClicker$$BucketClick
// PDB: MasterClicker_BucketClick_m9B995DA5B869A7840F376FD0F47D2E78BD95F216
// Body: [[103d3970, 103d3ae7] [103d3aeb, 103d3c5b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102322d0 ClickEffect_ClickBig_m7B6FE43DE96F7FC2C620FACD2F2E4EB30D2B22F9
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 103e7640 UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10871ac0 Action__ctor_m376F0C3C467175ED64CD18A600A02B8B771F6658
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e73610 Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924

void __cdecl
MasterClicker_BucketClick_m9B995DA5B869A7840F376FD0F47D2E78BD95F216
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  char cVar1;
  List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *pLVar2;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar5;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar6;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar7;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar10;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar11;
  uint uVar12;
  MethodInfo *unaff_EDI;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_34;
  int local_24;
  uchar local_20;
  undefined3 uStack_1f;
  schar local_1c;
  undefined3 uStack_1b;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  char local_8;
  undefined3 uStack_7;

  if (DAT_1151c861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m216C8B8C4FE3E41DEF9880282F3E87C21A251680_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE0FEBC84392DB02610B7365E95DD39AA73A49E08_RuntimeMethod_var)
    ;
    DAT_1151c861 = '\x01';
  }
  if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pHVar6 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                         (param_1->___master_7,(MethodInfo *)0x0),
     pHVar6 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    if (pHVar6->___validBucket_22 == false) {
      return;
    }
    cVar1 = param_1->___currentVoxelType_8;
    _local_8 = CONCAT31(uStack_7,cVar1);
    if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pHVar6 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                            (param_1->___master_7,(MethodInfo *)0x0),
        pHVar6 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
       (pHVar6->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) {
      if (pHVar6->___voxel_9->___type_4 == cVar1) {
        return;
      }
      if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pMVar7 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                             (param_1->___master_7,(MethodInfo *)0x0),
         pMVar7 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
        Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(pMVar7,(MethodInfo *)0x0);
        if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pCVar8 = UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
                               (param_1->___master_7,(MethodInfo *)0x0),
           pCVar8 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0)) {
          ClickEffect_ClickBig_m7B6FE43DE96F7FC2C620FACD2F2E4EB30D2B22F9
                    (pCVar8,(schar)_local_8,(MethodInfo *)0x0);
          uVar12 = 0;
          local_10 = 0;
          if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pHVar6 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                     (param_1->___master_7,(MethodInfo *)0x0),
                 pHVar6 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
             (pHVar6->___floodVoxels_25 != (List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *)0x0))
          {
            local_24 = pHVar6->___floodVoxels_25->____size_2;
            if (0 < local_24) {
              local_c = 0x10;
              do {
                if (((param_1->___master_7 ==
                      (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
                    (pHVar6 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                        (param_1->___master_7,(MethodInfo *)0x0),
                    pHVar6 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) ||
                   (pLVar2 = pHVar6->___floodVoxels_25,
                   pLVar2 == (List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *)0x0))
                goto LAB_103d3c57;
                if ((uint)pLVar2->____size_2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                pVVar3 = *(Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 **)
                          (pLVar2->____items_1 + local_c);
                if (((pVVar3 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) ||
                    (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pVVar3,(MethodInfo *)0x0),
                    pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                   (pTVar9 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                       (pTVar9,(MethodInfo *)0x0),
                   pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                goto LAB_103d3c57;
                pCVar10 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                          Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar9,
                                     Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                    );
                if ((param_1->___master_7 ==
                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
                   (pMVar7 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                                       (param_1->___master_7,(MethodInfo *)0x0),
                   pCVar10 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0))
                goto LAB_103d3c57;
                _local_20 = CONCAT31(uStack_1f,pVVar3->___height_5);
                _local_1c = CONCAT31(uStack_1b,pVVar3->___type_4);
                if (pMVar7 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)
                goto LAB_103d3c57;
                local_14 = (pCVar10->___hexPos_4).___x_0;
                local_18 = (pCVar10->___hexPos_4).___y_1;
                if (DAT_1151c851 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            ((uint *)&
                                     List_1_Add_m2B27ACB1E9BADC8339D8742B4049377C3EE4E960_RuntimeMethod_var
                            );
                  DAT_1151c851 = '\x01';
                }
                local_34.___hexPos_0.___x_0 = 0;
                local_34.___hexPos_0.___y_1 = 0;
                local_34.___height_1 = '\0';
                local_34.___inType_2 = '\0';
                local_34.___outType_3 = '\0';
                local_34._11_1_ = 0;
                local_34.___actionId_4 = 0;
                iVar4.___y_1 = local_18;
                iVar4.___x_0 = local_14;
                Action__ctor_m376F0C3C467175ED64CD18A600A02B8B771F6658
                          (&local_34,iVar4,(uchar)_local_20,(schar)_local_1c,(schar)_local_8,
                           pMVar7->___actionId_10,(MethodInfo *)0x0);
                if (pMVar7->___actions_5 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
                goto LAB_103d3c57;
                KVar5.___key_0.___dateData_44._4_1_ = local_34.___height_1;
                KVar5.___key_0.___dateData_44._5_1_ = local_34.___inType_2;
                KVar5.___key_0.___dateData_44._6_1_ = local_34.___outType_3;
                KVar5.___key_0.___dateData_44._7_1_ = local_34._11_1_;
                KVar5.___key_0.___dateData_44._0_4_ = local_34.___hexPos_0.___y_1;
                KVar5.___value_1 = (Il2CppObject *)local_34.___actionId_4;
                KVar5._12_4_ =
                List_1_Add_m2B27ACB1E9BADC8339D8742B4049377C3EE4E960_RuntimeMethod_var;
                List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pMVar7->___actions_5,
                           KVar5,unaff_EDI);
                pMVar7->___actionIndex_6 = pMVar7->___actionIndex_6 + 1;
                if ((param_1->___master_7 ==
                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
                   (pGVar11 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                                        ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)
                                         param_1->___master_7,(MethodInfo *)0x0),
                   pGVar11 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0))
                goto LAB_103d3c57;
                Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
                          (pGVar11,pVVar3,(schar)_local_8,pCVar10,(MethodInfo *)0x0);
                local_c = local_c + 4;
                uVar12 = local_10 + 1;
                local_10 = uVar12;
              } while ((int)uVar12 < local_24);
            }
            if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                && (pMVar7 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                                       (param_1->___master_7,(MethodInfo *)0x0),
                   pMVar7 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) &&
               (pMVar7->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
               ) {
              WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                        (pMVar7->___master_4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_103d3c57:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
