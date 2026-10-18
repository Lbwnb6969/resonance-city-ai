
undefined1 FUN_14017ef50(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lStackX_20;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  cVar2 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,&lStackX_20);
  if (cVar2 == '\0') {
    return 0;
  }
  piVar5 = (int *)0x0;
  uStack_28 = 0;
  iVar3 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if (lStackX_20 != 0) {
    uVar4 = func_0x000142a93db4(lStackX_20);
    piVar5 = (int *)FUN_14016ca40(lStackX_20,uVar4,0);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    iVar3 = piVar5[2];
  }
  *(int *)(param_3 + 1) = iVar3;
  if (param_3 != &uStack_28) {
    piVar1 = (int *)*param_3;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        func_0x000142a8c94a();
      }
    }
    *param_3 = piVar5;
    param_3[2] = 0;
    return 1;
  }
  param_3[2] = 0;
  if (piVar5 != (int *)0x0) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      func_0x000142a8c94a();
    }
  }
  return 1;
}

