// RVA 0x83ddd0 | Placemaker.Ui.FullscreenButton$$Button_Toggle0
// PDB: FullscreenButton_Button_Toggle0_m5A9E1AA222724C6D5C097A27BC4D67310DB116AC
// Body: [[1083ddd0, 1083de1e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 106677c0 Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A
// 106678b0 Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB
// 10880690 BootMaster_DoFullscreen_mF68B1F89BDDB49B46CFBDB4FED9AD9704FB9EA8A

void __cdecl
FullscreenButton_Button_Toggle0_m5A9E1AA222724C6D5C097A27BC4D67310DB116AC
          (FullscreenButton_t0AAFDBD51779A2F9B36D0D6C8E87A9D26DEBB018 *param_1,MethodInfo *param_2)

{
  bool bVar1;

  bVar1 = Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A((MethodInfo *)0x0);
  if (bVar1) {
    Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB(false,(MethodInfo *)0x0);
  }
  else {
    BootMaster_DoFullscreen_mF68B1F89BDDB49B46CFBDB4FED9AD9704FB9EA8A((MethodInfo *)0x0);
  }
  if (param_1->___state_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___state_6,!bVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
