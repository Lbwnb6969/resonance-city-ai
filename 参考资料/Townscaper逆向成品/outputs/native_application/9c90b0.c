// RVA 0x9c90b0 | Placemaker.Ui.UndoRedoButtons.<>c__DisplayClass16_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__6
// PDB: U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mD62EDF0F36C8212CB125C23E74FDD6E680FC54F6
// Body: [[109c90b0, 109c9109]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d2070 Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6
// 103d20d0 Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__6_mD62EDF0F36C8212CB125C23E74FDD6E680FC54F6
          (U3CU3Ec__DisplayClass16_0_t18FC3433C5842C497F94F76C7C4B411015480C5C *param_1,int param_2,
          float param_3,MethodInfo *param_4)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar2;

  pUVar1 = param_1->___master_3;
  if (___real_00000000 < param_3) {
    if (((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pUVar1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0))
       && (pMVar2 = pUVar1->___worldMaster_5->___maker_6,
          pMVar2 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
      Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6(pMVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else if (((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pUVar1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
           )) && (pMVar2 = pUVar1->___worldMaster_5->___maker_6,
                 pMVar2 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
    Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A(pMVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
