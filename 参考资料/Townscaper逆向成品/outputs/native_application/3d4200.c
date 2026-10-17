// RVA 0x3d4200 | Placemaker.Ui.MasterClicker$$PaintClick
// PDB: MasterClicker_PaintClick_m391B26ED20EBEAF9FAF0B616B2BB48500770402F
// Body: [[103d4200, 103d438d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10233000 ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103e7640 UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 103f8b50 WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
// 104131f0 HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
// 10e73610 Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924

void __cdecl
MasterClicker_PaintClick_m391B26ED20EBEAF9FAF0B616B2BB48500770402F
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  char cVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar3;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar4;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar5;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_18;
  int local_8;

  if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                         (param_1->___master_7,(MethodInfo *)0x0),
     pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    if (pHVar3->___validPaint_19 == false) {
      return;
    }
    if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      pMVar4 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                         (param_1->___master_7,(MethodInfo *)0x0);
      if ((((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                               (param_1->___master_7,(MethodInfo *)0x0),
           pMVar4 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) &&
          (pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
         (pHVar3->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) {
        cVar1 = param_1->___currentVoxelType_8;
        if (pHVar3->___voxel_9->___type_4 != cVar1) {
          if (pMVar4->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          goto LAB_103d4389;
          WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
                    (pMVar4->___master_4,(MethodInfo *)0x0);
          Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(pMVar4,(MethodInfo *)0x0);
          iVar7 = HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
                            (pHVar3,(MethodInfo *)0x0);
          local_8 = iVar7.___x_0;
          if (pHVar3->___voxel_9 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)
          goto LAB_103d4389;
          Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                    (&local_18,pMVar4,iVar7,(uchar)pHVar3->___srcHeight_10,
                     pHVar3->___voxel_9->___type_4,cVar1,(MethodInfo *)0x0);
          if ((pMVar4->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pGVar2 = pMVar4->___master_4->___graph_7,
                pGVar2 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0))
          goto LAB_103d4389;
          Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
                    (pGVar2,pHVar3->___voxel_9,cVar1,
                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0,(MethodInfo *)0x0);
          if (pMVar4->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          goto LAB_103d4389;
          WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                    (pMVar4->___master_4,(MethodInfo *)0x0);
        }
        if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          pCVar5 = UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
                             (param_1->___master_7,(MethodInfo *)0x0);
          if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                               (param_1->___master_7,(MethodInfo *)0x0);
            if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                && (pHVar6 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                       (param_1->___master_7,(MethodInfo *)0x0),
                   pHVar6 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
               (pCVar5 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0)) {
              ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
                        (pCVar5,pHVar3,true,pHVar6->___voxel_9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_103d4389:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
