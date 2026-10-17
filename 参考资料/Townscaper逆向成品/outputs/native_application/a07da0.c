// RVA 0xa07da0 | Placemaker.Ui.ScreenshotSwitch$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__22_3
// PDB: ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_3_m19CD0B5BCF7D430FFCA3A5A39E997961410DFEC9
// Body: [[10a07da0, 10a07de9]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
ScreenshotSwitch_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__22_3_m19CD0B5BCF7D430FFCA3A5A39E997961410DFEC9
          (ScreenshotSwitch_t30DE06810CA11EC175DDE16D672DF0D80E0FD901 *param_1,uchar param_2,
          MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  pUVar1 = param_1->___frameState_9;
  if (param_2 == '\x02') {
    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (pUVar1,true,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
