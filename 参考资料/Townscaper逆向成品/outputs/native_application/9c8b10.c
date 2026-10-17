// RVA 0x9c8b10 | Placemaker.Ui.SideMenuNavigator.<>c__DisplayClass11_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m99DD0A1C3F60C65B9DB14011DF3753A2D7FB4AC4
// Body: [[109c8b10, 109c8b4d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m99DD0A1C3F60C65B9DB14011DF3753A2D7FB4AC4
          (U3CU3Ec__DisplayClass11_0_t669A9CAEA708B389127A93B5FCEA239A36B16224 *param_1,int param_2,
          int param_3,MethodInfo *param_4)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;

  if (param_1->___U3CU3E4__this_0 !=
      (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *)0x0) {
    pUVar1 = param_1->___U3CU3E4__this_0->___openState_10;
    if (((param_3 & 2U) == 0) || ((param_3 & 0x40U) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = (bool)(~(byte)((uint)param_3 >> 4) & 1);
    }
    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (pUVar1,bVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
