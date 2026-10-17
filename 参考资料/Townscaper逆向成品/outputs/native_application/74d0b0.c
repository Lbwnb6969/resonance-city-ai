// RVA 0x74d0b0 | Placemaker.Ui.OrbitalCamera$$SetRotationSpeed
// PDB: OrbitalCamera_SetRotationSpeed_m4E9D701C0CA3721B1C92C22B5E2FE4274575E512
// Body: [[1074d0b0, 1074d167]]
// Direct callees:
// 10197a90 _libm_sse2_asin_precise
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
OrbitalCamera_SetRotationSpeed_m4E9D701C0CA3721B1C92C22B5E2FE4274575E512
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_2,MethodInfo *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;

  fVar3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                    ((param_1->___panHeightCurrent_14 * param_1->___heightCurrent_22) /
                     (float)((uint)param_1->___currentDist_28 ^
                            __xmm_80000000800000008000000080000000),-0.95,(MethodInfo *)0x0);
  dVar1 = (double)fVar3;
  _libm_sse2_asin_precise();
  fVar3 = __real_3f800000;
  fVar2 = __real_42b00000 - (float)dVar1 * __real_42652ee1;
  param_1->___rotationSpeedY_19 = param_2.___x_0 * ___real_3b360b61;
  param_1->___rotationSpeedX_18 = (fVar3 / fVar2) * param_2.___y_1;
  if (param_1->___rotationY_10 <= 0.0 && param_1->___rotationY_10 != 0.0) {
    do {
      fVar2 = param_1->___rotationY_10 + fVar3;
      param_1->___rotationY_10 = fVar2;
    } while (fVar2 < 0.0);
  }
  return;
}
