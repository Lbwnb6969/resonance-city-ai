
int FUN_1401518b0(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  while( true ) {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    uVar5 = (ulonglong)uVar1;
    lVar2 = param_1[2];
    if (lVar2 == 0) {
      if ((*param_1 == 0) || (*(uint *)(param_1 + 1) <= uVar1)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(uVar5 + 0xc + *param_1);
      }
    }
    else {
      cVar4 = *(char *)(uVar5 + lVar2);
    }
    if (cVar4 == param_2) break;
    if (lVar2 == 0) {
      if ((*param_1 == 0) || (*(uint *)(param_1 + 1) <= uVar1)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(uVar5 + 0xc + *param_1);
      }
    }
    else {
      cVar4 = *(char *)(uVar5 + lVar2);
    }
    iVar3 = isdigit((int)cVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return ~uVar1 + (int)param_1[1];
}

