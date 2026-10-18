
undefined8 * FUN_140151220(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 auStackX_8 [2];
  undefined8 *puStackX_10;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = (ulonglong)param_3;
  puVar1[4] = uVar3;
  puStackX_10 = param_2;
  _fseeki64(*puVar1,puVar1[3] + uVar3,0,uVar3,0);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = fread(auStackX_8,4,1,*puVar1,1);
  puVar1[4] = puVar1[4] + lVar2;
  FUN_140167800(puVar1,param_2,auStackX_8[0]);
  return param_2;
}

