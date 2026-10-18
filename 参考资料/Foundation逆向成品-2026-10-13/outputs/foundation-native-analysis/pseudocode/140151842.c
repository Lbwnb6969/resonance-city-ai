
void FUN_140151842(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *unaff_RSI;
  longlong *unaff_R14;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar2 = (undefined8 *)*unaff_R14;
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + 4;
  _fseeki64(*puVar2,4,1);
  puVar2 = (undefined8 *)*unaff_R14;
  lVar3 = fread(&stack0x00000048,4,1,*puVar2);
  plVar1 = puVar2 + 4;
  *plVar1 = *plVar1 + lVar3;
  *unaff_RSI = in_stack_00000048;
  unaff_RSI[1] = in_stack_00000050._4_4_ + -1;
  return;
}

