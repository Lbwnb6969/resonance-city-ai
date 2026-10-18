
undefined8 * FUN_140151410(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  int aiStackX_8 [2];
  
  uVar2 = *(uint *)(param_1 + 4);
  *param_2 = 0;
  puVar3 = (undefined8 *)*param_1;
  lVar5 = 0x2c;
  if (uVar2 < 2) {
    lVar5 = 0xc;
  }
  puVar3[4] = lVar5;
  _fseeki64(*puVar3,puVar3[3] + lVar5,0);
  puVar3 = (undefined8 *)*param_1;
  lVar5 = fread(aiStackX_8,4,1,*puVar3);
  plVar1 = puVar3 + 4;
  *plVar1 = *plVar1 + lVar5;
  if (aiStackX_8[0] != 0) {
    uVar4 = 0x30;
    if (uVar2 < 2) {
      uVar4 = 0x10;
    }
    *(undefined4 *)param_2 = uVar4;
    *(int *)((longlong)param_2 + 4) = aiStackX_8[0] + -1;
  }
  return param_2;
}

