// RVA 0x9c8df0 | Placemaker.Ui.UndoRedoButtons.<>c__DisplayClass16_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5D11A9E7CD80AD3BBBD203CC70AA4CC4D53DEE72
// Body: [[109c8df0, 109c8e6a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9560 UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5

void __cdecl
U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5D11A9E7CD80AD3BBBD203CC70AA4CC4D53DEE72
          (U3CU3Ec__DisplayClass16_0_t18FC3433C5842C497F94F76C7C4B411015480C5C *param_1,
          MethodInfo *param_2)

{
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;

  if ((param_1->___U3CU3E4__this_0 !=
       (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *)0x0) &&
     (pBVar1 = param_1->___U3CU3E4__this_0->___undoButton_7,
     pBVar1 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)) {
    if (pBVar1->____disabled_9 != false) {
      return;
    }
    if ((param_1->___undoB_1 != (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) &&
       (pUVar2 = param_1->___undoB_1->___scaleXY_5,
       pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
      UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                (pUVar2,pUVar2->____current_0 * __real_3f733333,(MethodInfo *)0x0);
      if ((param_1->___undoB_1 != (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0)
         && (pUVar2 = param_1->___undoB_1->___scaleZ_4,
            pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
        UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
                  (pUVar2,pUVar2->____current_0 * __real_3f733333,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
