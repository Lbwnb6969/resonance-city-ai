
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140151690(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = *param_1;
  pfVar1 = param_1 + 1;
  fVar2 = param_1[2];
  fVar3 = *pfVar1;
  fVar7 = 0.0;
  pfVar4 = param_1;
  if (fVar6 < fVar3) {
    pfVar4 = pfVar1;
  }
  fVar8 = *pfVar4;
  if (*pfVar4 <= fVar2) {
    fVar8 = fVar2;
  }
  if (fVar3 < fVar6) {
    param_1 = pfVar1;
  }
  fVar9 = *param_1;
  if (fVar2 <= *param_1) {
    fVar9 = fVar2;
  }
  fVar9 = fVar8 - fVar9;
  fVar5 = 0.0;
  if (fVar9 != 0.0) {
    if (fVar8 == fVar6) {
      fVar5 = (fVar3 - fVar2) / fVar9;
    }
    else if (fVar8 == fVar3) {
      fVar5 = (fVar2 - fVar6) / fVar9 + _DAT_142c7d2f8;
    }
    else if (fVar8 == fVar2) {
      fVar5 = (fVar6 - fVar3) / fVar9 + _DAT_142c7d300;
    }
  }
  fVar6 = (float)func_0x000142a93da2(fVar5,_DAT_142c7d314);
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + _DAT_142c7d314;
  }
  if (fVar8 != 0.0) {
    fVar7 = fVar9 / fVar8;
  }
  fVar6 = fVar6 * _DAT_142c7d2b0;
  param_2[1] = fVar7;
  param_2[2] = fVar8;
  *param_2 = fVar6;
  return param_2;
}

