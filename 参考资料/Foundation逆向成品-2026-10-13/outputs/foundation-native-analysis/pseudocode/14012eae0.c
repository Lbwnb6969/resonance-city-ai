
undefined8 FUN_14012eae0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) {
    return 0;
  }
  pcVar3 = (char *)FUN_14014ee10();
  lVar4 = FUN_14014ee10(param_2);
  uVar5 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    lVar4 = lVar4 - (longlong)pcVar3;
    do {
      cVar2 = *pcVar3;
      pcVar1 = pcVar3 + lVar4;
      pcVar3 = pcVar3 + 1;
      if (cVar2 != *pcVar1) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  return 1;
}

