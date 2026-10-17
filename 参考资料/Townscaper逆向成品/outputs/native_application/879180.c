// RVA 0x879180 | Placemaker.Life.BirdFlock$$CalculateOptimalLandings
// PDB: BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
// Body: [[10879180, 108792bb]]
// Direct callees:
// 10196010 _libm_sse2_sqrt_precise
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775

void __cdecl
BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,MethodInfo *param_2)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MethodInfo *pMVar6;
  uchar local_c;

  if (param_1->___optimalBirdCountDirty_25 != false) {
    param_1->___optimalBirdCountDirty_25 = false;
    if (param_1->___birdLandingCount_18 < 1) {
      param_1->___minBirdCount_23 = '\0';
      param_1->___idealBirdCount_24 = '\0';
      param_1->___maxBirdCount_22 = '\0';
      return;
    }
    pMVar6 = (MethodInfo *)0x0;
    dVar2 = (double)param_1->___birdLandingCount_18;
    fVar5 = 64.0;
    fVar4 = 0.0;
    _libm_sse2_sqrt_precise();
    fVar5 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                      ((float)dVar2 - __real_40c00000,fVar4,fVar5,pMVar6);
    iVar1 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(fVar5,(MethodInfo *)0x0);
    fVar4 = fVar5 * __real_3f666666;
    param_1->___idealBirdCount_24 = (uchar)iVar1;
    fVar3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                      (0.0,fVar4 - __real_40000000,(MethodInfo *)0x0);
    fVar4 = fVar5 * __real_3f8ccccd + __real_40000000;
    local_c = (uchar)(int)ROUND(fVar3);
    param_1->___minBirdCount_23 = local_c;
    fVar4 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(0.0,fVar4,(MethodInfo *)0x0);
    local_c = (uchar)(int)ROUND(fVar4);
    param_1->___maxBirdCount_22 = local_c;
  }
  return;
}
