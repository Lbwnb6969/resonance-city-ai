// RVA 0xe1fe70 | Placemaker.GroundClicker$$AddClick
// PDB: GroundClicker_AddClick_m5212BA6470B73DF33089FC6C1A48DFD7092A3BFF
// Body: [[10e1fe70, 10e1fee4]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10233000 ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
// 103d19a0 Maker_AddClick_mB1DF8C033FA5F3ED953C866DA3A3FC3539A92894

void __cdecl
GroundClicker_AddClick_m5212BA6470B73DF33089FC6C1A48DFD7092A3BFF
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar2;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar3;

  param_1->___pressUsed_8 = true;
  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pHVar2 = pWVar1->___hoverData_18,
     pHVar2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    if (pHVar2->___validAdd_20 == false) {
      return;
    }
    if (pWVar1->___maker_6 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) {
      pVVar3 = Maker_AddClick_mB1DF8C033FA5F3ED953C866DA3A3FC3539A92894
                         (pWVar1->___maker_6,pHVar2,param_1->___currentVoxelType_5,(MethodInfo *)0x0
                         );
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar1 = param_1->___master_4->___worldMaster_5,
          pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         (pWVar1->___clickEffect_14 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0)
         ) {
        ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
                  (pWVar1->___clickEffect_14,pWVar1->___hoverData_18,true,pVVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
