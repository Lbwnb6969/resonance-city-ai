// RVA 0xe20650 | Placemaker.GroundClicker$$PaintClick
// PDB: GroundClicker_PaintClick_m9FE020B620F81FDCE4C2F55BE1BE00B0D2CB0AE1
// Body: [[10e20650, 10e206c8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10233000 ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
// 103d2130 Maker_PaintClick_mA0D25C5EF9B2B1C715B388DE1A3E7990E727B05C

void __cdecl
GroundClicker_PaintClick_m9FE020B620F81FDCE4C2F55BE1BE00B0D2CB0AE1
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar2;

  param_1->___pressUsed_8 = true;
  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pHVar2 = pWVar1->___hoverData_18,
     pHVar2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    if (pHVar2->___validPaint_19 == false) {
      return;
    }
    if (pWVar1->___maker_6 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) {
      Maker_PaintClick_mA0D25C5EF9B2B1C715B388DE1A3E7990E727B05C
                (pWVar1->___maker_6,pHVar2,param_1->___currentVoxelType_5,(MethodInfo *)0x0);
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar1 = param_1->___master_4->___worldMaster_5,
          pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         ((pHVar2 = pWVar1->___hoverData_18,
          pHVar2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0 &&
          (pWVar1->___clickEffect_14 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0
          )))) {
        ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
                  (pWVar1->___clickEffect_14,pHVar2,true,pHVar2->___voxel_9,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
