// RVA 0xa02fc0 | Placemaker.SaveSystem$$OnApplicationQuit
// PDB: SaveSystem_OnApplicationQuit_m482370A0CFA4F360A88D1EA4F23336023359F94C
// Body: [[10a02fc0, 10a03012]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a02b40 SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
// 10a034d0 SaveSystem_SaveSettings_mA12260ACC994B4275980C086DFF5B7EAB9A02B6F

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SaveSystem_OnApplicationQuit_m482370A0CFA4F360A88D1EA4F23336023359F94C
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;

  SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3(param_1,(MethodInfo *)0x0);
  fVar1 = param_1->___settingsStartChangeTime_13;
  if (param_1->___settingsSaveTime_12 <= fVar1 && fVar1 != param_1->___settingsSaveTime_12) {
    fVar1 = fVar1 + ___real_00000000;
    fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    if (fVar1 < fVar2) {
      SaveSystem_SaveSettings_mA12260ACC994B4275980C086DFF5B7EAB9A02B6F(param_1,(MethodInfo *)0x0);
    }
  }
  return;
}
