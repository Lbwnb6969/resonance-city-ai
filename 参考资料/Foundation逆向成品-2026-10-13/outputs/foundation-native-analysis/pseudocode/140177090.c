
void FUN_140177090(undefined8 *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uStackX_8;
  
  uStackX_8 = _ftelli64(*param_1);
  puVar1 = (ulonglong *)param_1[5];
  if (puVar1 == (ulonglong *)param_1[6]) {
    FUN_140117130(param_1 + 4,puVar1,&uStackX_8);
  }
  else {
    *puVar1 = uStackX_8;
    param_1[5] = param_1[5] + 8;
  }
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  FUN_14013d720(param_1 + 7,&uStackX_8);
  uStackX_8 = uStackX_8 & 0xffffffff00000000;
  if (*(int *)(param_1 + 1) == 0) {
    _set_errno(0);
    lVar2 = fwrite(&uStackX_8,4,1,*param_1);
    if (lVar2 != 4) {
      puVar3 = (undefined4 *)_errno();
      *(undefined4 *)(param_1 + 1) = *puVar3;
    }
  }
  return;
}

