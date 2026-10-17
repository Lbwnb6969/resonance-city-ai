// RVA 0x74cd50 | Placemaker.Ui.OrbitalCamera$$RotateCamera
// PDB: OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
// Body: [[1074cd50, 1074ce47]]
// Direct callees:
// 10195ff0 _CIfmod
// 10197a90 _libm_sse2_asin_precise
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_2,MethodInfo *param_3)

{
  float fVar1;
  float10 extraout_ST0;
  double dVar2;
  float fVar3;

  fVar3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                    ((param_1->___panHeightCurrent_14 * param_1->___heightCurrent_22) /
                     (float)((uint)param_1->___currentDist_28 ^
                            __xmm_80000000800000008000000080000000),-0.95,(MethodInfo *)0x0);
  dVar2 = (double)fVar3;
  _libm_sse2_asin_precise();
  fVar3 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                    ((__real_3f800000 / (__real_42b00000 - (float)dVar2 * __real_42652ee1)) *
                     param_2.___y_1 + param_1->___rotationX_11,(MethodInfo *)0x0);
  param_1->___rotationX_11 = fVar3;
  _CIfmod();
  fVar3 = (float)extraout_ST0;
  param_1->___rotationY_10 = fVar3;
  fVar1 = __real_3f800000;
  while (fVar3 < 0.0) {
    fVar3 = param_1->___rotationY_10 + fVar1;
    param_1->___rotationY_10 = fVar3;
  }
  return;
}
