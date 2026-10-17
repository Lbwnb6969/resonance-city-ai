// RVA 0x1dc980 | Placemaker.Ui.Dim.<>c__DisplayClass11_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>g__CamSettings|2
// PDB: U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CamSettingsU7C2_m27F540794FB110E0B65FEED6BF5FB469579C80F1
// Body: [[101dc980, 101dca06]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CamSettingsU7C2_m27F540794FB110E0B65FEED6BF5FB469579C80F1
          (U3CU3Ec__DisplayClass11_0_t9081E9D92E6D5B7EA3A447DD584F333F49712933 *param_1,
          float param_2,MethodInfo *param_3)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar2;
  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *pBVar3;
  bool bVar4;

  pDVar1 = param_1->___U3CU3E4__this_1;
  if ((pDVar1 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) &&
     (pDVar1->___dimOrDark_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    if (__real_3f733333 < pDVar1->___dimOrDark_6->____current_0) {
      if (pDVar1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_101dca02;
      bVar4 = __real_3f733333 < pDVar1->___alphaState_5->____current_0;
    }
    else {
      bVar4 = false;
    }
    if ((param_1->___master_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pOVar2 = param_1->___master_2->___orbitalCamera_15,
       pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pOVar2,(bool)(bVar4 ^ 1U),
                 (MethodInfo *)0x0);
      if ((param_1->___master_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         ((pOVar2 = param_1->___master_2->___orbitalCamera_15,
          pOVar2 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0 &&
          (pBVar3 = (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pOVar2->___cam_5,
          pBVar3 != (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0)))) {
        Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                  (pBVar3,(bool)(bVar4 ^ 1U),(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_101dca02:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
