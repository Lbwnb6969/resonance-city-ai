// RVA 0x1df420 | Placemaker.Ui.SaveMenu.<>c__DisplayClass44_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>g__CheckFocusGamepad|3
// PDB: U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFocusGamepadU7C3_m3C2756B8FD778C7E074A7EAC30A90F1B2AAA48EA
// Body: [[101df420, 101df490]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eg__CheckFocusGamepadU7C3_m3C2756B8FD778C7E074A7EAC30A90F1B2AAA48EA
          (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *param_1,
          float param_2,MethodInfo *param_3)

{
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar3;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar4;
  bool bVar5;

  pSVar1 = param_1->___U3CU3E4__this_0;
  if (pSVar1 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) {
    pUVar2 = pSVar1->___focusGamepadState_33;
    if (pSVar1->___focusCardState_30 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
       ) {
      bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                        (pSVar1->___focusCardState_30,(MethodInfo *)0x0);
      if (bVar5) {
        if (((param_1->___master_1 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
            (pIVar3 = param_1->___master_1->___inputModeManager_19,
            pIVar3 == (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) ||
           (pUVar4 = pIVar3->___gamepadState_6,
           pUVar4 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
        goto LAB_101df48c;
        bVar5 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                          (pUVar4,(MethodInfo *)0x0);
      }
      else {
        bVar5 = false;
      }
      if (pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (pUVar2,bVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_101df48c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
