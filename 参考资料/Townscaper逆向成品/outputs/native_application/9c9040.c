// RVA 0x9c9040 | Placemaker.Ui.UndoRedoButtons.<>c__DisplayClass16_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__5
// PDB: U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m5CD0B25CD456384E7E3170CA7B15C0EF9C58FCAF
// Body: [[109c9040, 109c90a5]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 103d2200 Maker_RedoCommand_m560E274202638F4A2C59683DE219C4B0F3576C70
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58

void __cdecl
U3CU3Ec__DisplayClass16_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m5CD0B25CD456384E7E3170CA7B15C0EF9C58FCAF
          (U3CU3Ec__DisplayClass16_0_t18FC3433C5842C497F94F76C7C4B411015480C5C *param_1,
          MethodInfo *param_2)

{
  UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *pUVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  bool bVar3;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar4;

  pUVar1 = param_1->___U3CU3E4__this_0;
  if (pUVar1 != (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *)0x0) {
    if ((pUVar1->___isRedoDown_10 != false) && (pUVar1->___hasRedone_17 != false)) {
      return;
    }
    if ((param_1->___master_3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pMVar4 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                           (param_1->___master_3,(MethodInfo *)0x0),
       pMVar4 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
      bVar3 = Maker_RedoCommand_m560E274202638F4A2C59683DE219C4B0F3576C70(pMVar4,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if ((param_1->___U3CU3E4__this_0 !=
           (UndoRedoButtons_tE1CE0FC31595AAB34C0E78372FFAE375232149F3 *)0x0) &&
         (pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___U3CU3E4__this_0->___redoDown_12,
         pOVar2 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  (pOVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
