// RVA 0xa02c00 | Placemaker.SaveSystem$$MaybeSaveSettings
// PDB: SaveSystem_MaybeSaveSettings_mF1FD0D97C328223744996634EC08D16CDCD3FD01
// Body: [[10a02c00, 10a02c4d]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a034d0 SaveSystem_SaveSettings_mA12260ACC994B4275980C086DFF5B7EAB9A02B6F

bool __cdecl
SaveSystem_MaybeSaveSettings_mF1FD0D97C328223744996634EC08D16CDCD3FD01
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,float param_2,
          MethodInfo *param_3)

{
  float fVar1;
  float fVar2;

  fVar1 = param_1->___settingsStartChangeTime_13;
  if (param_1->___settingsSaveTime_12 <= fVar1 && fVar1 != param_1->___settingsSaveTime_12) {
    fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    if (fVar1 + param_2 < fVar2) {
      SaveSystem_SaveSettings_mA12260ACC994B4275980C086DFF5B7EAB9A02B6F(param_1,(MethodInfo *)0x0);
      return true;
    }
  }
  return false;
}
