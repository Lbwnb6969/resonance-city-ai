// RVA 0xe20170 | Placemaker.GroundClicker$$BulldozeClick
// PDB: GroundClicker_BulldozeClick_mBB9D4BA3D51E0274B8875EADADB0A2E36673941C
// Body: [[10e20170, 10e20287] [10e2028b, 10e20374]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103d2040 Maker_EndAction_mA8F951492DAC231BF67B907D967A4C32EAC97B28
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e73950 Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B

void __cdecl
GroundClicker_BulldozeClick_mBB9D4BA3D51E0274B8875EADADB0A2E36673941C
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *pLVar1;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar2;
  GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *pGVar3;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar4;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar7;
  uint uVar8;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_1c;
  int local_c;
  Il2CppObject *local_8;

  pGVar3 = param_1;
  if (DAT_1152267d == '\0') {
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
    DAT_1152267d = '\x01';
  }
  param_1->___pressUsed_8 = true;
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pHVar4 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                         (param_1->___master_4,(MethodInfo *)0x0),
     pHVar4 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    if (pHVar4->___validBucket_22 == false) {
      return;
    }
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pMVar5 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                           (param_1->___master_4,(MethodInfo *)0x0),
       pMVar5 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
      Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(pMVar5,(MethodInfo *)0x0);
      uVar8 = 0;
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         ((pHVar4 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                              (param_1->___master_4,(MethodInfo *)0x0),
          pHVar4 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0 &&
          (pHVar4->___floodVoxels_25 != (List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *)0x0))))
      {
        local_c = pHVar4->___floodVoxels_25->____size_2;
        if (0 < local_c) {
          param_1 = (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *)0x10;
          do {
            if (((pGVar3->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                || (pHVar4 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                       (pGVar3->___master_4,(MethodInfo *)0x0),
                   pHVar4 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) ||
               (pLVar1 = pHVar4->___floodVoxels_25,
               pLVar1 == (List_1_t54CB1D8FAC2544BD7A7CDA6E12B84229F110684A *)0x0))
            goto LAB_10e20370;
            if ((uint)pLVar1->____size_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pVVar2 = *(Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 **)
                      (pLVar1->____items_1 + (int)&param_1->_padding_);
            if (((pVVar2 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) ||
                (pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar2,
                                     (MethodInfo *)0x0),
                pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
               (pTVar6 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                   (pTVar6,(MethodInfo *)0x0),
               pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10e20370;
            local_8 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                                 Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                );
            if (((pGVar3->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                || (pMVar5 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                                       (pGVar3->___master_4,(MethodInfo *)0x0),
                   local_8 == (Il2CppObject *)0x0)) ||
               (pMVar5 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0))
            goto LAB_10e20370;
            Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                      (&local_1c,pMVar5,
                       *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)&local_8[1].monitor,
                       pVVar2->___height_5,pVVar2->___type_4,'\x12',(MethodInfo *)0x0);
            if ((pGVar3->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
               || (pGVar7 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                                      ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)
                                       pGVar3->___master_4,(MethodInfo *)0x0),
                  pGVar7 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0))
            goto LAB_10e20370;
            Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
                      (pGVar7,pVVar2,(MethodInfo *)0x0);
            param_1 = (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *)&param_1->_padding_
            ;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < local_c);
        }
        if ((pGVar3->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pMVar5 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                               (pGVar3->___master_4,(MethodInfo *)0x0),
           pMVar5 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
          Maker_EndAction_mA8F951492DAC231BF67B907D967A4C32EAC97B28(pMVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10e20370:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
