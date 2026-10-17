// RVA 0xe20570 | Placemaker.GroundClicker$$MaybeUpdateHover
// PDB: GroundClicker_MaybeUpdateHover_m32CA79F19E4D417388DFEC905D3716F00FC96E1C
// Body: [[10e20570, 10e205ca]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10411e50 HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0

void __cdecl
GroundClicker_MaybeUpdateHover_m32CA79F19E4D417388DFEC905D3716F00FC96E1C
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  int iVar2;

  iVar2 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if (iVar2 != param_1->___hoverFrame_17) {
    iVar2 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
    param_1->___hoverFrame_17 = iVar2;
    if ((((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pWVar1 = param_1->___master_4->___worldMaster_5,
         pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
        (pWVar1->___maker_6 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) ||
       (pWVar1->___hoverData_18 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
              (pWVar1->___hoverData_18,param_2,pWVar1->___maker_6->___actionId_10,(MethodInfo *)0x0)
    ;
  }
  return;
}
