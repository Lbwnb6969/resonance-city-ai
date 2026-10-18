
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140271c50(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [32];
  
  FUN_1426cb370(param_1,3);
  FUN_1426c9c00(param_1,1,7);
  FUN_1426c9c00(param_1,2,4);
  puVar2 = (undefined8 *)FUN_1426cb680(param_1,1);
  uVar3 = *puVar2;
  func_0x0001401237e0(auStack_28);
  cVar1 = FUN_14027a960(_DAT_143fd5f70,param_1,uVar3,2,3,auStack_28);
  FUN_1426cb370(param_1,0xfffffffc);
  if (cVar1 == '\0') {
    uVar3 = func_0x0001401a36f0(uVar3);
    uVar4 = FUN_14014ef90(auStack_28);
    FUN_140159350(uVar3,0x143fd5f78,2,&UNK_142c97070,0x311,"GamCLuaManager::s_modDirectoryExists",
                  &UNK_142c97820,uVar4);
  }
  else {
    cVar1 = FUN_140149ed0(auStack_28);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_140271d47;
    }
  }
  uVar3 = 0;
LAB_140271d47:
  func_0x0001426caa30(param_1,uVar3);
  FUN_14012aab0(auStack_28);
  return 1;
}

