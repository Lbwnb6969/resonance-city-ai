// RVA 0xe20760 | Placemaker.GroundClicker$$UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag
// PDB: GroundClicker_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m20FEF95B7F5CCEC3FA50901B0ED0C83E328DAE13
// Body: [[10e20760, 10e20841]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103eff20 VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
// 1040fe40 HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC
// 1074d170 OrbitalCamera_StopRotation_m0A4B4A4BDE61D5F2E728CD82947AB826C0C7B125
// 1113f300 Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6

void __cdecl
GroundClicker_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m20FEF95B7F5CCEC3FA50901B0ED0C83E328DAE13
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar3;
  int iVar4;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar5;

  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pOVar1 = param_1->___master_4->___orbitalCamera_15,
     pOVar1 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
    OrbitalCamera_StopRotation_m0A4B4A4BDE61D5F2E728CD82947AB826C0C7B125(pOVar1,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       ((pWVar2 = param_1->___master_4->___worldMaster_5,
        pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
        (pVVar3 = pWVar2->___voxelBobEffect_15,
        pVVar3 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)))) {
      VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
                (pVVar3,0.0,(MethodInfo *)0x0);
      param_1->___bobbing_9 = false;
      iVar4 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6((MethodInfo *)0x0);
      if (iVar4 == 2) {
        param_1->___dragMode_15 = 1;
      }
      else {
        if (param_2 == (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0)
        goto LAB_10e2083d;
        iVar4 = param_2->___U3CpointerIdU3Ek__BackingField_12;
        if (iVar4 < -1) {
          if ((iVar4 == -2) || (iVar4 == -3)) {
            param_1->___dragMode_15 = 3;
          }
        }
        else {
          param_1->___dragMode_15 = 2;
        }
      }
      if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
        (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8))
        ;
        if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          pHVar5 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                             (param_1->___master_4,(MethodInfo *)0x0);
          if (pHVar5 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
            HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC(pHVar5,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
  }
LAB_10e2083d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
