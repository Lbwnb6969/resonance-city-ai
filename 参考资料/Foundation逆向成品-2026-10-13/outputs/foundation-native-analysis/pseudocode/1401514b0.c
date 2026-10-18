
longlong * FUN_1401514b0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uStack_10;
  
  uStack_10 = 0x1401514ca;
  lVar4 = FUN_142a8d2f0();
  lVar4 = -lVar4;
  *(undefined8 *)((longlong)&uStack_10 + lVar4) = 0x1401514da;
  uVar5 = FUN_14014ef90(param_2);
  *(undefined8 *)((longlong)&uStack_10 + lVar4) = 0x1401514f0;
  GetFullPathNameW(uVar5,0x1000,&stack0x00000028 + lVar4,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)&uStack_10 + lVar4) = 0x140151504;
  uVar3 = func_0x000142a93dba(&stack0x00000028 + lVar4);
  *(undefined8 *)((longlong)&uStack_10 + lVar4) = 0x140151513;
  piVar6 = (int *)FUN_14016cad0(&stack0x00000028 + lVar4,uVar3,0);
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *(undefined8 *)((longlong)&uStack_10 + lVar4) = 0x140151531;
      func_0x000142a8c94a();
    }
    *param_1 = 0;
  }
  *param_1 = (longlong)piVar6;
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*param_1 + 8);
  return param_1;
}

