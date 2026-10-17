// RVA 0xa037d0 | Placemaker.SaveSystem$$SetSettingsDirty
// PDB: SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// Body: [[10a037d0, 10a037fe]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void __cdecl
SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  float fVar1;

  if (param_1->___settingsChangeTime_11 <= param_1->___settingsSaveTime_12) {
    fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_1->___settingsStartChangeTime_13 = fVar1;
  }
  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___settingsChangeTime_11 = fVar1;
  return;
}
