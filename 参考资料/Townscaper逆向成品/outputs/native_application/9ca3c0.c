// RVA 0x9ca3c0 | Placemaker.Ui.SunButtonGamepad.<>c__DisplayClass7_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m73B4334365D73F0A8146CE15E9B42F6256D4B007
// Body: [[109ca3c0, 109ca3ed]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m73B4334365D73F0A8146CE15E9B42F6256D4B007
          (U3CU3Ec__DisplayClass7_0_tE1B7E85DE1C82BBCE84EA5F9E435D6B8201357E1 *param_1,int param_2,
          float param_3,MethodInfo *param_4)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (param_2 != 0) {
    if ((param_1->___U3CU3E4__this_0 ==
         (SunButtonGamepad_tCDC81D6FE61C37B5713FFE96C01FD96152CAFE07 *)0x0) ||
       (pUVar1 = param_1->___U3CU3E4__this_0->___focusedState_5,
       pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,true,(MethodInfo *)0x0);
  }
  return;
}
