
longlong * FUN_140151ff0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  piVar3 = (int *)FUN_14016ca40("Windows Unknown",0xf,0);
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
  *param_1 = (longlong)piVar3;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*param_1 + 8);
  return param_1;
}

