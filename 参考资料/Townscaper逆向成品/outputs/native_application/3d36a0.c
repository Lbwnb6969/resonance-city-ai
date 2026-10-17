// RVA 0x3d36a0 | Placemaker.Ui.MasterClicker$$AddClick
// PDB: MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588
// Body: [[103d36a0, 103d3966]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10233000 ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103e7640 UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// 103efd90 Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 103f8b50 WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
// 10411350 HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e125c0 GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
// 10e6ae80 Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
// 10e6f930 Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5

Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 * __cdecl
MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  float fVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;
  float fVar8;
  bool bVar9;
  schar sVar10;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar11;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar12;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar14;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar15;
  int iVar16;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar17;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar18;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_384;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_1d4;
  undefined1 local_24 [16];
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *local_14;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *local_10;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *local_c;
  schar local_5;

  if (DAT_1151c85f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c85f = '\x01';
  }
  if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_103d3962;
  pHVar11 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                      (param_1->___master_7,(MethodInfo *)0x0);
  if (pHVar11 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) goto LAB_103d3962;
  if ((pHVar11->___validAdd_20 == false) || (param_1->___dragging_12 != false)) {
    return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
  }
  if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_103d3962;
  pMVar12 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                      (param_1->___master_7,(MethodInfo *)0x0);
  local_10 = pMVar12;
  if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_103d3962;
  pHVar11 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                      (param_1->___master_7,(MethodInfo *)0x0);
  local_14 = pHVar11;
  if (pMVar12 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) goto LAB_103d3962;
  local_5 = param_1->___currentVoxelType_8;
  if (pMVar12->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
  goto LAB_103d3962;
  WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
            (pMVar12->___master_4,(MethodInfo *)0x0);
  if (pHVar11 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) goto LAB_103d3962;
  local_c = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)pHVar11->___dstHeight_11;
  pVVar13 = &pHVar11->___dstVert_8;
  pVVar18 = &local_1d4;
  for (iVar16 = 0x6c; iVar16 != 0; iVar16 = iVar16 + -1) {
    (pVVar18->___hexPos_0).___x_0 = (pVVar13->___hexPos_0).___x_0;
    pVVar13 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar13->___hexPos_0).___y_1;
    pVVar18 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar18->___hexPos_0).___y_1;
  }
  bVar9 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_1d4,(MethodInfo *)0x0);
  if (!bVar9) {
    if ((local_10->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar1 = local_10->___master_4->___grid_5,
       pGVar1 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)) goto LAB_103d3962;
    iVar6.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar6.___x_0 = local_1d4.___hexPos_0.___x_0;
    pVVar13 = GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
                        (&local_384,pGVar1,iVar6,
                         (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0,(MethodInfo *)0x0);
    pVVar18 = &local_1d4;
    for (iVar16 = 0x6c; iVar16 != 0; iVar16 = iVar16 + -1) {
      (pVVar18->___hexPos_0).___x_0 = (pVVar13->___hexPos_0).___x_0;
      pVVar13 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar13->___hexPos_0).___y_1;
      pVVar18 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar18->___hexPos_0).___y_1;
    }
  }
  bVar9 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_1d4,(MethodInfo *)0x0);
  pMVar12 = local_10;
  if (bVar9) {
    if ((local_10->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar2 = local_10->___master_4->___graph_7,
       pGVar2 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_103d3962;
    iVar7.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar7.___x_0 = local_1d4.___hexPos_0.___x_0;
    bVar9 = Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
                      (pGVar2,iVar7,(int)local_c,(MethodInfo *)0x0);
    if (!bVar9) goto LAB_103d38e2;
    Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(pMVar12,(MethodInfo *)0x0);
    pVVar17 = local_c;
    sVar10 = local_5;
    if (local_c == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
      sVar10 = '\x0f';
    }
    local_c = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)CONCAT31(local_c._1_3_,sVar10);
    if ((pMVar12->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar2 = pMVar12->___master_4->___graph_7,
       pGVar2 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_103d3962;
    iVar5.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar5.___x_0 = local_1d4.___hexPos_0.___x_0;
    local_c = Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
                        (pGVar2,iVar5,(uchar)pVVar17,sVar10,true,(MethodInfo *)0x0);
    pMVar12->___lastAddedVoxel_12 = local_c;
    pVVar14 = HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_24 + 4),
                         local_14,(MethodInfo *)0x0);
    fVar8 = pVVar14->___y_3;
    fVar3 = pVVar14->___z_4;
    (pMVar12->___lastActionPos_13).___x_2 = pVVar14->___x_2;
    (pMVar12->___lastActionPos_13).___y_3 = fVar8;
    (pMVar12->___lastActionPos_13).___z_4 = fVar3;
    iVar4.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar4.___x_0 = local_1d4.___hexPos_0.___x_0;
    Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
              ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)local_24,pMVar12,iVar4,
               (uchar)pVVar17,'\x12',sVar10,(MethodInfo *)0x0);
    if (pMVar12->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
    goto LAB_103d3962;
    WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
              (pMVar12->___master_4,(MethodInfo *)0x0);
    pVVar17 = local_c;
  }
  else {
LAB_103d38e2:
    pVVar17 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar17,(MethodInfo *)0x0);
  if (!bVar9) {
    return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
  }
  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pCVar15 = UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
                        (param_1->___master_7,(MethodInfo *)0x0);
    if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      pHVar11 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                          (param_1->___master_7,(MethodInfo *)0x0);
      if (pCVar15 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0) {
        ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
                  (pCVar15,pHVar11,true,pVVar17,(MethodInfo *)0x0);
        return pVVar17;
      }
    }
  }
LAB_103d3962:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
