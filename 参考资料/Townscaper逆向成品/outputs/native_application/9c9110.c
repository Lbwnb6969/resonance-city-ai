// RVA 0x9c9110 | Placemaker.Ui.UndoRedoButtons.<>c__DisplayClass16_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__7
// PDB: U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_mD1E630ED6D2E3C326FDA2BB039A3DE1330F8C9B0
// Body: [[109c9110, 109c913f]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d25b0 Maker_UndoCommand_mD2A0B548192F8ECFC559C3EF04020AC14D7096CF

void __cdecl
U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__7_mD1E630ED6D2E3C326FDA2BB039A3DE1330F8C9B0
          (U3CU3Ec__DisplayClass16_0_t18FC3433C5842C497F94F76C7C4B411015480C5C *param_1,
          MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar2;

  if (((param_1->___master_3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar1 = param_1->___master_3->___worldMaster_5,
      pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pMVar2 = pWVar1->___maker_6, pMVar2 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)
     ) {
    Maker_UndoCommand_mD2A0B548192F8ECFC559C3EF04020AC14D7096CF(pMVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
