// RVA 0x874640 | Placemaker.Ui.BaseButton$$get_timeHeld
// PDB: BaseButton_get_timeHeld_mE17A0F7A69E7F16A8A308FE0FD52AB985A79C664
// Body: [[10874640, 1087465d]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

float __cdecl
BaseButton_get_timeHeld_mE17A0F7A69E7F16A8A308FE0FD52AB985A79C664
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,MethodInfo *param_2)

{
  float fVar1;

  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  return fVar1 - param_1->___holdTime_7;
}
