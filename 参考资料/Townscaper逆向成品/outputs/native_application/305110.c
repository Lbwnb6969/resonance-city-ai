// RVA 0x305110 | Placemaker.Ui.ToggleButton$$Placemaker.Ui.ButtonAudio.IButtonAudioModifier.ModifyAudioData
// PDB: ToggleButton_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m4735911D5FA8DC4DEA6A6FC3A371F4160786BCC9
// Body: [[10305110, 1030514d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F

void __cdecl
ToggleButton_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m4735911D5FA8DC4DEA6A6FC3A371F4160786BCC9
          (ToggleButton_t0028E2EF6E2D8992A3D68C313C828C517C5D9C41 *param_1,
          AudioData_t6FB0A6033B2BFE5AED3F85B685C9EE7EDCF89373 *param_2,int param_3,
          MethodInfo *param_4)

{
  bool bVar1;

  if (param_3 == 2) {
    if (param_1->___enabledState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    bVar1 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___enabledState_5,(MethodInfo *)0x0);
    if (bVar1) {
      param_2->___clip_0 = param_1->___offClip_8;
      return;
    }
    param_2->___clip_0 = param_1->___onClip_7;
  }
  return;
}
