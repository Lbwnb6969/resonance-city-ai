
undefined8 FUN_1401280a0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *apiStack_48 [3];
  longlong alStack_30 [3];
  ulonglong uStack_18;
  
  uVar3 = FUN_1401493d0(param_2,alStack_30);
  FUN_140123a80(apiStack_48,uVar3);
  if (7 < uStack_18) {
    if (0xfff < uStack_18 * 2 + 2) {
      if (0x1f < (alStack_30[0] - *(longlong *)(alStack_30[0] + -8)) - 8U) {
        _invoke_watson(0,0,0,0,0);
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
    }
    func_0x000142a8cbe0();
  }
  FUN_140128170(param_1,apiStack_48,param_3);
  if (apiStack_48[0] != (int *)0x0) {
    LOCK();
    iVar1 = *apiStack_48[0];
    *apiStack_48[0] = *apiStack_48[0] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x000142a8c94a();
    }
  }
  return param_1;
}

