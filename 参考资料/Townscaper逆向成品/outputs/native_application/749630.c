// RVA 0x749630 | Placemaker.Ui.OrbitalCamera$$GetMinAngle
// PDB: OrbitalCamera_GetMinAngle_mF7ACB968DCBCEA0222636F8F5DC94557894FF99C
// Body: [[10749630, 10749686]]
// Direct callees:
// 10197a90 _libm_sse2_asin_precise
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775

float __cdecl
OrbitalCamera_GetMinAngle_mF7ACB968DCBCEA0222636F8F5DC94557894FF99C
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,float param_2,
          MethodInfo *param_3)

{
  double dVar1;
  float fVar2;

  fVar2 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                    ((param_1->___panHeightCurrent_14 * param_1->___heightCurrent_22) / param_2,
                     -0.95,(MethodInfo *)0x0);
  dVar1 = (double)fVar2;
  _libm_sse2_asin_precise();
  return (float)dVar1 * __real_42652ee1;
}
