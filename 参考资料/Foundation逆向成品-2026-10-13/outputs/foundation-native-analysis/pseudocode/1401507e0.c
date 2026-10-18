
undefined8 * FUN_1401507e0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uStackX_8;
  undefined4 uStackX_c;
  
  puVar3 = (undefined8 *)*param_1;
  puVar3[4] = (ulonglong)param_3;
  _fseeki64(*puVar3,puVar3[3] + (ulonglong)param_3,0);
  puVar3 = (undefined8 *)*param_1;
  lVar4 = fread(&uStackX_8,4,1,*puVar3);
  plVar1 = puVar3 + 4;
  *plVar1 = *plVar1 + lVar4;
  puVar3 = (undefined8 *)*param_1;
  plVar1 = puVar3 + 4;
  *plVar1 = *plVar1 + (ulonglong)uStackX_8;
  _fseeki64(*puVar3,(ulonglong)uStackX_8,1);
  puVar3 = (undefined8 *)*param_1;
  lVar4 = fread(&uStackX_8,1,1,*puVar3);
  plVar1 = puVar3 + 4;
  *plVar1 = *plVar1 + lVar4;
  if ((char)uStackX_8 != '\0') {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    return param_2;
  }
  puVar3 = (undefined8 *)*param_1;
  lVar4 = fread(&uStackX_8,8,1,*puVar3);
  plVar1 = puVar3 + 4;
  *plVar1 = *plVar1 + lVar4;
  puVar3 = (undefined8 *)*param_1;
  uVar2 = *(uint *)((longlong)param_1 + 0x24);
  lVar4 = CONCAT44(uStackX_c,uStackX_8);
  lVar5 = fread(&uStackX_8,8,1,*puVar3);
  plVar1 = puVar3 + 4;
  *plVar1 = *plVar1 + lVar5;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[6] = 0;
  param_2[5] = (ulonglong)uVar2 + lVar4;
  param_2[4] = CONCAT44(uStackX_c,uStackX_8);
  param_2[3] = param_1;
  return param_2;
}

