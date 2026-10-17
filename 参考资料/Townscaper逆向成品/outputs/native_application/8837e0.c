// RVA 0x8837e0 | Placemaker.Ui.ButtonAudio_Clip$$Placemaker.Ui.ButtonAudio.IButtonAudioModifier.ModifyAudioData
// PDB: ButtonAudio_Clip_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m1EF28F3868588A3B31035F829D1D18ADA91F1F32
// Body: [[108837e0, 108837fc]]
// Direct callees:

void __cdecl
ButtonAudio_Clip_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m1EF28F3868588A3B31035F829D1D18ADA91F1F32
          (ButtonAudio_Clip_t79AF84A1A210E1D12D57A221996E891436B878BB *param_1,
          AudioData_t6FB0A6033B2BFE5AED3F85B685C9EE7EDCF89373 *param_2,int param_3,
          MethodInfo *param_4)

{
  if ((param_1->___soundType_5 == 3) || (param_1->___soundType_5 == param_3)) {
    param_2->___clip_0 = param_1->___clip_4;
  }
  return;
}
