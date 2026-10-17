// RVA 0x1e0330 | Placemaker.Ui.LanguageButtons.<>c__DisplayClass6_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mEC6628BA60D0282C2C59B4BB8CC29A503FBBB3BB
// Body: [[101e0330, 101e0378]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
// 10873f30 BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28

void __cdecl
U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mEC6628BA60D0282C2C59B4BB8CC29A503FBBB3BB
          (U3CU3Ec__DisplayClass6_0_t38BC4FC546AE22FDBE61EC02CDEE324CD34B775B *param_1,
          MethodInfo *param_2)

{
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;

  if ((param_1->___U3CU3E4__this_0 !=
       (LanguageButtons_t9A4ECA21F7C2216092FC318A31A8492996DE2564 *)0x0) &&
     (pBVar1 = param_1->___U3CU3E4__this_0->___rightArrow_7,
     pBVar1 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)) {
    BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28(pBVar1,(MethodInfo *)0x0);
    if ((param_1->___rightStandard_1 !=
         (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) &&
       (pUVar2 = param_1->___rightStandard_1->___scaleXY_5,
       pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
      UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                (pUVar2,0.95,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
