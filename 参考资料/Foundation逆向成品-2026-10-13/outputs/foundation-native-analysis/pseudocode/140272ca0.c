
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140272ca0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [32];
  
  FUN_1426cb370(param_1,2);
  FUN_1426c9c00(param_1,0xfffffffe,7);
  FUN_1426c9c00(param_1,0xffffffff,4);
  plVar2 = (longlong *)FUN_1426cb680(param_1,0xfffffffe);
  lVar1 = *plVar2;
  if (*(char *)(_DAT_143fd5f70 + 0x28) == '\0') {
    uVar3 = func_0x0001401a36f0(lVar1);
    uVar4 = FUN_1426cb510(param_1,0xffffffff,0);
    FUN_140159460(uVar3,0x143fcf1f0,0,&UNK_142c97070,0x2e3,"GamCLuaManager::s_modMsgBox",uVar4);
  }
  else {
    uVar3 = FUN_1426cb510(param_1,0xffffffff,0);
    FUN_1401236c0(auStack_28,uVar3);
    FUN_14015b5c0(auStack_28,lVar1 + 0x90,0x40);
    FUN_14012aab0(auStack_28);
  }
  FUN_1426cb370(param_1,0xfffffffd);
  return 0;
}

