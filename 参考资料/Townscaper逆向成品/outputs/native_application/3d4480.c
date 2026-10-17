// RVA 0x3d4480 | Placemaker.Ui.MasterClicker$$RemoveClick
// PDB: MasterClicker_RemoveClick_mA593CB9066569DCB72B58C9B4E292EB71AF83DEA
// Body: [[103d4480, 103d4616]]
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
// 10411420 HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
// 104131f0 HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
// 10e73950 Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B

bool __cdecl
MasterClicker_RemoveClick_mA593CB9066569DCB72B58C9B4E292EB71AF83DEA
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  float fVar1;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  float fVar4;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar5;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar6;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar7;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar9;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar10;
  undefined1 local_14 [16];

  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                       (param_1->___master_7,(MethodInfo *)0x0);
    if (pHVar5 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
      if ((pHVar5->___validRemove_21 == false) || (param_1->___dragging_12 != false)) {
        return false;
      }
      if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pCVar6 = UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
                           (param_1->___master_7,(MethodInfo *)0x0);
        if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                             (param_1->___master_7,(MethodInfo *)0x0);
          if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            pHVar7 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                               (param_1->___master_7,(MethodInfo *)0x0);
            if ((pHVar7 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) &&
               (pCVar6 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0)) {
              ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
                        (pCVar6,pHVar5,false,pHVar7->___voxel_9,(MethodInfo *)0x0);
              if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              {
                pMVar8 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                                   (param_1->___master_7,(MethodInfo *)0x0);
                if (param_1->___master_7 !=
                    (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
                  pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                     (param_1->___master_7,(MethodInfo *)0x0);
                  if ((pMVar8 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) &&
                     (pMVar8->___master_4 !=
                      (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
                    WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
                              (pMVar8->___master_4,(MethodInfo *)0x0);
                    Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
                              (pMVar8,(MethodInfo *)0x0);
                    if (pHVar5 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
                      pVVar9 = HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
                                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                          (local_14 + 4),pHVar5,(MethodInfo *)0x0);
                      fVar4 = pVVar9->___y_3;
                      fVar1 = pVVar9->___z_4;
                      (pMVar8->___lastActionPos_13).___x_2 = pVVar9->___x_2;
                      (pMVar8->___lastActionPos_13).___y_3 = fVar4;
                      (pMVar8->___lastActionPos_13).___z_4 = fVar1;
                      pVVar2 = pHVar5->___voxel_9;
                      iVar10 = HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
                                         (pHVar5,(MethodInfo *)0x0);
                      if (pVVar2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
                        Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                                  ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)local_14,
                                   pMVar8,iVar10,pVVar2->___height_5,pVVar2->___type_4,'\x12',
                                   (MethodInfo *)0x0);
                        if ((pMVar8->___master_4 !=
                             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                           (pGVar3 = pMVar8->___master_4->___graph_7,
                           pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
                          Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
                                    (pGVar3,pVVar2,(MethodInfo *)0x0);
                          if (pMVar8->___master_4 !=
                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
                            WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                                      (pMVar8->___master_4,(MethodInfo *)0x0);
                            return true;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
