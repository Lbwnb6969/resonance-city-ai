// RVA 0x74cf60 | Placemaker.Ui.OrbitalCamera$$ScrollZoom
// PDB: OrbitalCamera_ScrollZoom_m638E00B2CE53B762BF4C29BFC1BCEC09DF2D5CDA
// Body: [[1074cf60, 1074cfc3]]
// Direct callees:
// 10196f40 _libm_sse2_pow_precise
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B

void __cdecl
OrbitalCamera_ScrollZoom_m638E00B2CE53B762BF4C29BFC1BCEC09DF2D5CDA
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,float param_2,
          MethodInfo *param_3)

{
  double dVar1;
  float fVar2;

  dVar1 = __real_4000000000000000;
  _libm_sse2_pow_precise();
  fVar2 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (param_1->___distMin_31,param_1->___distMax_32,
                     (float)dVar1 * param_1->___nonDollyDist_29,(MethodInfo *)0x0);
  param_1->___zoomTarget_8 = fVar2;
  return;
}
