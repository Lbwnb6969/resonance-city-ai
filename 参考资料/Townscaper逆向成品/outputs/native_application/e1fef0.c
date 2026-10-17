// RVA 0xe1fef0 | Placemaker.GroundClicker$$BucketClick
// PDB: GroundClicker_BucketClick_m879D4EE8E300222410DFF718FB87E738D4602FCE
// Body: [[10e1fef0, 10e20067] [10e2006b, 10e20166]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102322d0 ClickEffect_ClickBig_m7B6FE43DE96F7FC2C620FACD2F2E4EB30D2B22F9
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103d2040 Maker_EndAction_mA8F951492DAC231BF67B907D967A4C32EAC97B28
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 103e7640 UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e73610 Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924

void __cdecl
GroundClicker_BucketClick_m879D4EE8E300222410DFF718FB87E738D4602FCE
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  char cVar1;
  List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *pLVar2;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar3;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar4;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar5;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar8;
  uint uVar9;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_20;
  int local_10;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_c;
  int local_8;

  if (DAT_1152267c == '\0') {
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
    DAT_1152267c = '\x01';
  }
  param_1->___pressUsed_8 = true;
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pHVar4 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                         (param_1->___master_4,(MethodInfo *)0x0),
     pHVar4 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    if (pHVar4->___validBucket_22 == false) {
      return;
    }
    cVar1 = param_1->___currentVoxelType_5;
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pHVar4 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                            (param_1->___master_4,(MethodInfo *)0x0),
        pHVar4 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
       (pHVar4->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) {
      if (pHVar4->___voxel_9->___type_4 == cVar1) {
        return;
      }
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pMVar5 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                             (param_1->___master_4,(MethodInfo *)0x0),
         pMVar5 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
        Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(pMVar5,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pCVar6 = UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
                               (param_1->___master_4,(MethodInfo *)0x0),
           pCVar6 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0)) {
          ClickEffect_ClickBig_m7B6FE43DE96F7FC2C620FACD2F2E4EB30D2B22F9
                    (pCVar6,cVar1,(MethodInfo *)0x0);
          uVar9 = 0;
          if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              && (pHVar4 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                     (param_1->___master_4,(MethodInfo *)0x0),
                 pHVar4 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
             (pHVar4->___floodVoxels_25 != (List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *)0x0))
          {
            local_10 = pHVar4->___floodVoxels_25->____size_2;
            if (0 < local_10) {
              local_8 = 0x10;
              do {
                if (((param_1->___master_4 ==
                      (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
                    (pHVar4 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                        (param_1->___master_4,(MethodInfo *)0x0),
                    pHVar4 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) ||
                   (pLVar2 = pHVar4->___floodVoxels_25,
                   pLVar2 == (List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *)0x0))
                goto LAB_10e20162;
                if ((uint)pLVar2->____size_2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                pVVar3 = *(Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 **)
                          (pLVar2->____items_1 + local_8);
                if (((pVVar3 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) ||
                    (pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pVVar3,(MethodInfo *)0x0),
                    pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                   (pTVar7 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                       (pTVar7,(MethodInfo *)0x0),
                   pTVar7 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                goto LAB_10e20162;
                local_c = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
                          Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar7,
                                     Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                    );
                if (((param_1->___master_4 ==
                      (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
                    (pMVar5 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                                        (param_1->___master_4,(MethodInfo *)0x0),
                    local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)) ||
                   (pMVar5 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0))
                goto LAB_10e20162;
                Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                          (&local_20,pMVar5,local_c->___hexPos_4,pVVar3->___height_5,
                           pVVar3->___type_4,cVar1,(MethodInfo *)0x0);
                if ((param_1->___master_4 ==
                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
                   (pGVar8 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                                       ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)
                                        param_1->___master_4,(MethodInfo *)0x0),
                   pGVar8 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0))
                goto LAB_10e20162;
                Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
                          (pGVar8,pVVar3,cVar1,local_c,(MethodInfo *)0x0);
                local_8 = local_8 + 4;
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < local_10);
            }
            if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
               && (pMVar5 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                                      (param_1->___master_4,(MethodInfo *)0x0),
                  pMVar5 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
              Maker_EndAction_mA8F951492DAC231BF67B907D967A4C32EAC97B28(pMVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_10e20162:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
