
int * FUN_140151340(longlong *param_1,int *param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int aiStackX_8 [2];
  
  puVar2 = (undefined8 *)*param_1;
  param_2[0] = 0;
  param_2[1] = 0;
  puVar2[4] = (ulonglong)param_3;
  _fseeki64(*puVar2,puVar2[3] + (ulonglong)param_3,0);
  puVar2 = (undefined8 *)*param_1;
  lVar4 = fread(aiStackX_8,4,1,*puVar2);
  iVar3 = aiStackX_8[0];
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + lVar4;
  puVar2 = (undefined8 *)*param_1;
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + (ulonglong)(aiStackX_8[0] + 1);
  _fseeki64(*puVar2,(ulonglong)(aiStackX_8[0] + 1),1);
  puVar2 = (undefined8 *)*param_1;
  lVar4 = fread(aiStackX_8,4,1,*puVar2);
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + lVar4;
  if (aiStackX_8[0] != 0) {
    *param_2 = iVar3 + 0xd + param_3;
    param_2[1] = aiStackX_8[0] + -1;
  }
  return param_2;
}

