
bool FUN_140157df0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint auStackX_8 [2];
  
  puVar2 = (undefined8 *)*param_1;
  puVar2[4] = (ulonglong)param_2;
  _fseeki64(*puVar2,puVar2[3] + (ulonglong)param_2,0);
  puVar2 = (undefined8 *)*param_1;
  lVar3 = fread(auStackX_8,4,1,*puVar2);
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + lVar3;
  puVar2 = (undefined8 *)*param_1;
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + (ulonglong)auStackX_8[0];
  _fseeki64(*puVar2,(ulonglong)auStackX_8[0],1);
  puVar2 = (undefined8 *)*param_1;
  lVar3 = fread(auStackX_8,1,1,*puVar2);
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + lVar3;
  return (char)auStackX_8[0] != '\0';
}

