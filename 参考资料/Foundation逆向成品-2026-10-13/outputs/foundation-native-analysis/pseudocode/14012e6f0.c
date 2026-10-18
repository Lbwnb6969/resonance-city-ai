
undefined8 * FUN_14012e6f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if (param_1 != param_2) {
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
      *param_1 = 0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  param_1[2] = param_2[2];
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  return param_1;
}

