
void FUN_1401517c7(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int unaff_EBX;
  uint *unaff_RSI;
  longlong *unaff_R14;
  char cStack0000000000000048;
  undefined8 in_stack_00000050;
  
  param_1[4] = param_2;
  _fseeki64(*param_1,param_2 + param_1[3]);
  puVar2 = (undefined8 *)*unaff_R14;
  lVar4 = fread(&stack0x00000048,4,1,*puVar2);
  uVar3 = _cStack0000000000000048;
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + lVar4;
  puVar2 = (undefined8 *)*unaff_R14;
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + (ulonglong)_cStack0000000000000048;
  _fseeki64(*puVar2,(ulonglong)_cStack0000000000000048,1);
  puVar2 = (undefined8 *)*unaff_R14;
  lVar4 = fread(&stack0x00000048,1,1,*puVar2);
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + lVar4;
  if (cStack0000000000000048 == '\0') {
    _cStack0000000000000048 = uVar3 + 0x15 + unaff_EBX;
  }
  else {
    puVar2 = (undefined8 *)*unaff_R14;
    plVar1 = puVar2 + 4;
    *plVar1 = *plVar1 + 4;
    _fseeki64(*puVar2,4,1);
    puVar2 = (undefined8 *)*unaff_R14;
    lVar4 = fread(&stack0x00000048,4,1,*puVar2);
    plVar1 = puVar2 + 4;
    *plVar1 = *plVar1 + lVar4;
  }
  *unaff_RSI = _cStack0000000000000048;
  unaff_RSI[1] = in_stack_00000050._4_4_ - 1;
  return;
}

