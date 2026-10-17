// RVA 0x3d4110 | Placemaker.Ui.MasterClicker$$MaybeUpdateHover
// PDB: MasterClicker_MaybeUpdateHover_mC50B3FFA52A35B45561A7B28E53AFA93E79F92F3
// Body: [[103d4110, 103d417e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// 10411e50 HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0

void __cdecl
MasterClicker_MaybeUpdateHover_mC50B3FFA52A35B45561A7B28E53AFA93E79F92F3
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,MethodInfo *param_3)

{
  int iVar1;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar2;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar3;

  iVar1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if (iVar1 == param_1->___hoverFrame_22) {
    return;
  }
  iVar1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  param_1->___hoverFrame_22 = iVar1;
  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pHVar2 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                       (param_1->___master_7,(MethodInfo *)0x0);
    if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pMVar3 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                            (param_1->___master_7,(MethodInfo *)0x0),
        pMVar3 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) &&
       (pHVar2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
      HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
                (pHVar2,param_2,pMVar3->___actionId_10,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
