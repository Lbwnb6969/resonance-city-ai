// RVA 0x1e0610 | Placemaker.Ui.DisableableButton.<>c__DisplayClass7_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m7078DC3213EF25B8B3CCD5E3956D3DF86FC0F5CD
// Body: [[101e0610, 101e0646]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m7078DC3213EF25B8B3CCD5E3956D3DF86FC0F5CD
          (U3CU3Ec__DisplayClass7_0_t2D2D5F44546698252BBD5E1151B6BEC677BE60FF *param_1,uchar param_2
          ,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (((param_1->___U3CU3E4__this_0 !=
        (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *)0x0) &&
      (param_1->___baseButton_1 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)) &&
     (pUVar1 = param_1->___U3CU3E4__this_0->___disabledState_7,
     pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,param_1->___baseButton_1->____disabled_9,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
