
ulonglong FUN_14015e420(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140142530(param_1 + 1);
  uVar2 = FUN_140142650(param_1 + 4);
  if (param_1[6] != 0) {
    uVar2 = func_0x000142a8cbe0(param_1[6],1);
    param_1[6] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  if (*param_2 == 0) {
    return uVar2 & 0xffffffffffffff00;
  }
  lVar3 = func_0x000142a8c944(param_2[2]);
  lVar4 = fread(lVar3,1,param_2[2],*param_2);
  param_2[4] = param_2[4] + lVar4;
  bVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar3,param_2[2]);
  if (lVar3 != 0) {
    func_0x000142a8c94a(lVar3);
  }
  return (ulonglong)bVar1;
}

