// RVA 0x749590 | Placemaker.Ui.OrbitalCamera$$GamepadZoom
// PDB: OrbitalCamera_GamepadZoom_m037ED8CCBF438DC4576F6E338A561406E9818F38
// Body: [[10749590, 10749627]]
// Direct callees:
// 10196230 _libm_sse2_exp_precise
// 10196f40 _libm_sse2_pow_precise
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B

void __cdecl
OrbitalCamera_GamepadZoom_m037ED8CCBF438DC4576F6E338A561406E9818F38
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,float param_2,
          MethodInfo *param_3)

{
  double dVar1;
  float fVar2;

  Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
  _libm_sse2_exp_precise();
  dVar1 = __real_4000000000000000;
  _libm_sse2_pow_precise();
  fVar2 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (param_1->___distMin_31,param_1->___distMax_32,
                     (float)dVar1 * param_1->___nonDollyDist_29,(MethodInfo *)0x0);
  param_1->___zoomTarget_8 = fVar2;
  return;
}
