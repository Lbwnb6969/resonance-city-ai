// RVA 0x883800 | Placemaker.Ui.ButtonAudio_Pitch$$Placemaker.Ui.ButtonAudio.IButtonAudioModifier.ModifyAudioData
// PDB: ButtonAudio_Pitch_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m4C63F6C57B64FA3FCC6CD3B38621AF90C084A6D5
// Body: [[10883800, 1088386f]]
// Direct callees:
// 106603a0 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2

void __cdecl
ButtonAudio_Pitch_Placemaker_Ui_ButtonAudio_IButtonAudioModifier_ModifyAudioData_m4C63F6C57B64FA3FCC6CD3B38621AF90C084A6D5
          (ButtonAudio_Pitch_tFE3890E69416B54CE5E545CF1F65E54CA16061BB *param_1,
          AudioData_t6FB0A6033B2BFE5AED3F85B685C9EE7EDCF89373 *param_2,int param_3,
          MethodInfo *param_4)

{
  float fVar1;
  float fVar2;

  if ((param_1->___soundType_4 == 3) || (param_1->___soundType_4 == param_3)) {
    if (param_1->___mode_5 != 0) {
      fVar1 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                        (param_1->___min_6,param_1->___max_7,(MethodInfo *)0x0);
      param_2->___pitch_1 = fVar1;
      return;
    }
    fVar1 = param_2->___pitch_1;
    fVar2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                      (param_1->___min_6,param_1->___max_7,(MethodInfo *)0x0);
    param_2->___pitch_1 = fVar2 + fVar1;
  }
  return;
}
