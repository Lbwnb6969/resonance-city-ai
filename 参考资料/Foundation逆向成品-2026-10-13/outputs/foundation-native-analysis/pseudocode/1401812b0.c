
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401812b0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  longlong lStackX_8;
  longlong lStack_30;
  int *apiStack_28 [4];
  
  puVar2 = (undefined8 *)*param_1;
  puVar2[4] = 0x24;
  _fseeki64(*puVar2,puVar2[3] + 0x24,0);
  lStack_30 = 0;
  QueryPerformanceCounter(&lStack_30);
  uVar3 = FUN_14015a8e0(apiStack_28,*param_1);
  FUN_14012e6f0(param_2,uVar3);
  if (apiStack_28[0] != (int *)0x0) {
    LOCK();
    iVar1 = *apiStack_28[0];
    *apiStack_28[0] = *apiStack_28[0] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x000142a8c94a();
    }
  }
  lVar4 = 0;
  if (lStack_30 != 0) {
    QueryPerformanceCounter(&lStackX_8);
    lVar4 = lStackX_8 - lStack_30;
  }
  dVar6 = (double)(((float)lVar4 * _DAT_142c7d320) / (float)_DAT_143fcd408) * _DAT_142c7d2e8;
  if (dVar6 <= 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)(((double)*(ulonglong *)(*param_1 + 0x10) * _DAT_142c7d2c8) / dVar6);
  }
  *(float *)(param_1 + 9) = fVar5;
  FUN_14012eae0(param_1 + 6,param_2);
  return;
}

