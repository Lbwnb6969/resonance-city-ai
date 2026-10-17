// RVA 0x300000 | Placemaker.Ui.SunSlider$$SetHover
// PDB: SunSlider_SetHover_m331D762E938E8A43C8799117EF62C06482812CDB
// Body: [[10300000, 10300018]]
// Direct callees:
// 10300210 SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330

void __cdecl
SunSlider_SetHover_m331D762E938E8A43C8799117EF62C06482812CDB
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,bool param_2,
          MethodInfo *param_3)

{
  param_1->___hover_10 = param_2;
  SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330(param_1,(MethodInfo *)0x0);
  return;
}
