
uint * FUN_140151790(longlong *param_1,uint *param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint auStackX_10 [2];
  undefined8 uStackX_18;
  
  param_2[0] = 0;
  param_2[1] = 0;
  if ((int)(param_3 >> 0x20) != 0) {
    puVar2 = (undefined8 *)*param_1;
    puVar2[4] = param_3 & 0xffffffff;
    uStackX_18 = param_3;
    _fseeki64(*puVar2,(param_3 & 0xffffffff) + puVar2[3],0);
    puVar2 = (undefined8 *)*param_1;
    lVar4 = fread(auStackX_10,4,1,*puVar2);
    uVar3 = auStackX_10[0];
    plVar1 = puVar2 + 4;
    *plVar1 = *plVar1 + lVar4;
    puVar2 = (undefined8 *)*param_1;
    plVar1 = puVar2 + 4;
    *plVar1 = *plVar1 + (ulonglong)auStackX_10[0];
    _fseeki64(*puVar2,(ulonglong)auStackX_10[0],1);
    puVar2 = (undefined8 *)*param_1;
    lVar4 = fread(auStackX_10,1,1,*puVar2);
    plVar1 = puVar2 + 4;
    *plVar1 = *plVar1 + lVar4;
    if ((char)auStackX_10[0] == '\0') {
      auStackX_10[0] = uVar3 + 0x15 + (int)param_3;
    }
    else {
      puVar2 = (undefined8 *)*param_1;
      plVar1 = puVar2 + 4;
      *plVar1 = *plVar1 + 4;
      _fseeki64(*puVar2,4,1);
      puVar2 = (undefined8 *)*param_1;
      lVar4 = fread(auStackX_10,4,1,*puVar2);
      plVar1 = puVar2 + 4;
      *plVar1 = *plVar1 + lVar4;
    }
    *param_2 = auStackX_10[0];
    param_2[1] = uStackX_18._4_4_ - 1;
  }
  return param_2;
}

