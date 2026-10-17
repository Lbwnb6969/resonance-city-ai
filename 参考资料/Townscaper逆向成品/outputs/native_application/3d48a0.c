// RVA 0x3d48a0 | Placemaker.Ui.MasterClicker$$UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag
// PDB: MasterClicker_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m0D259A695DDAB17A9768C3F96EAED80415042DD3
// Body: [[103d48a0, 103d4944]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e76a0 UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// 103eff20 VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
// 1040fe40 HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC
// 1074d170 OrbitalCamera_StopRotation_m0A4B4A4BDE61D5F2E728CD82947AB826C0C7B125

void __cdecl
MasterClicker_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m0D259A695DDAB17A9768C3F96EAED80415042DD3
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar2;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar3;

  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (-1 < param_2->___U3CpointerIdU3Ek__BackingField_12) {
      return;
    }
    if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pOVar1 = param_1->___master_7->___orbitalCamera_15,
       pOVar1 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
      OrbitalCamera_StopRotation_m0A4B4A4BDE61D5F2E728CD82947AB826C0C7B125(pOVar1,(MethodInfo *)0x0)
      ;
      if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pVVar2 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                             (param_1->___master_7,(MethodInfo *)0x0),
         pVVar2 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
        VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
                  (pVVar2,0.0,(MethodInfo *)0x0);
        param_1->___bobbing_10 = false;
        param_1->___dragging_12 = true;
        (**(code **)(param_2->_padding_ + 0xe4))(param_2,*(undefined4 *)(param_2->_padding_ + 0xe8))
        ;
        if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                               (param_1->___master_7,(MethodInfo *)0x0),
           pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
          HoverData_ClearHover_m1C5458A14DEB3D303AD18CE212FF6279F73D84AC(pHVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
