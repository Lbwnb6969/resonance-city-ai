
undefined8 FUN_14017fba0(longlong param_1,longlong param_2,uint **param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puStack_88;
  undefined4 uStack_80;
  uint *puStack_78;
  uint *puStack_70;
  uint uStack_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  longlong alStack_40 [3];
  ulonglong uStack_28;
  
  puVar4 = (uint *)0x0;
  param_2 = *(longlong *)(param_1 + 0x30) + param_2;
  uVar6 = 0;
  if (*(int *)(param_2 + 8) == 0x11) {
    param_2 = param_2 + 0xc;
    puStack_58 = (uint *)0x0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (param_2 != 0) {
      uVar3 = func_0x000142a93dba(param_2);
      puVar4 = (uint *)FUN_14016cad0(param_2,uVar3,0);
      if (puVar4 != (uint *)0x0) {
        LOCK();
        *puVar4 = *puVar4 + 1;
        UNLOCK();
      }
      uVar6 = puVar4[2];
    }
    *(uint *)(param_3 + 1) = uVar6;
    if (param_3 != &puStack_58) {
      puVar1 = *param_3;
      if (puVar1 != (uint *)0x0) {
        LOCK();
        uVar6 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar6 == 1) {
          func_0x000142a8c94a();
        }
      }
      *param_3 = puVar4;
      param_3[2] = (uint *)0x0;
      return 1;
    }
    param_3[2] = (uint *)0x0;
  }
  else {
    if (*(int *)(param_2 + 8) != 7) {
      return 0;
    }
    param_2 = param_2 + 0xc;
    puStack_70 = (uint *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (param_2 != 0) {
      uVar3 = func_0x000142a93db4(param_2);
      puVar4 = (uint *)FUN_14016ca40(param_2,uVar3,0);
      if (puStack_70 != (uint *)0x0) {
        LOCK();
        uVar6 = *puStack_70;
        *puStack_70 = *puStack_70 - 1;
        UNLOCK();
        if (uVar6 == 1) {
          func_0x000142a8c94a();
        }
      }
      if (puVar4 != (uint *)0x0) {
        LOCK();
        *puVar4 = *puVar4 + 1;
        UNLOCK();
      }
      uStack_68 = puVar4[2];
      puStack_70 = puVar4;
    }
    uVar5 = FUN_1401493d0(&puStack_70,alStack_40);
    FUN_140123a80(&puStack_88,uVar5);
    if (7 < uStack_28) {
      if ((0xfff < uStack_28 * 2 + 2) &&
         (0x1f < (alStack_40[0] - *(longlong *)(alStack_40[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      func_0x000142a8cbe0();
    }
    *(undefined4 *)(param_3 + 1) = uStack_80;
    if (param_3 != &puStack_88) {
      puVar4 = *param_3;
      if (puVar4 != (uint *)0x0) {
        LOCK();
        uVar6 = *puVar4;
        *puVar4 = *puVar4 - 1;
        UNLOCK();
        if (uVar6 == 1) {
          func_0x000142a8c94a();
        }
      }
      *param_3 = puStack_88;
      puStack_88 = (uint *)0x0;
    }
    param_3[2] = puStack_78;
    uStack_80 = 0;
    puStack_78 = (uint *)0x0;
    if (puStack_88 != (uint *)0x0) {
      LOCK();
      uVar6 = *puStack_88;
      *puStack_88 = *puStack_88 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    puStack_88 = (uint *)0x0;
    puStack_78 = (uint *)0x0;
    puVar4 = puStack_70;
  }
  if (puVar4 != (uint *)0x0) {
    LOCK();
    uVar6 = *puVar4;
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    if (uVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  return 1;
}

