
undefined8
FUN_1401805c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulonglong *param_4)

{
  int iVar1;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = (undefined4)*param_4;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  iVar1 = func_0x000141edd010(&uStack_68,"1.3.1",0x58);
  if ((-1 < iVar1) && (iVar1 = FUN_141edb460(&uStack_68,0), -1 < iVar1)) {
    iVar1 = FUN_141edcd00(&uStack_68);
    *param_4 = (ulonglong)uStack_4c;
    if (-1 < iVar1) {
      return 0;
    }
  }
  switch(iVar1) {
  case -6:
    return 6;
  case -5:
    return 5;
  case -4:
    return 4;
  case -3:
    return 3;
  case -2:
    return 2;
  case -1:
    return 1;
  default:
    return 7;
  }
}

