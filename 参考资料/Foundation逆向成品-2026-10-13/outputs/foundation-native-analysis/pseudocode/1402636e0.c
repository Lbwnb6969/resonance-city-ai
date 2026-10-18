
undefined1 FUN_1402636e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [8];
  int iStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_38 [32];
  
  func_0x0001401237e0(auStack_68);
  if (*(int *)(param_4 + 8) == 0) {
    uVar4 = FUN_14017b160(param_4,auStack_80);
    FUN_14012e6f0(auStack_68,uVar4);
    FUN_14012aab0(auStack_80);
  }
  else if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_14012e760(auStack_68,param_4);
  }
  else {
    FUN_140150250(auStack_98,*(longlong *)(param_1 + 0x30) + 0x78);
    FUN_1401796d0(param_4,auStack_80,iStack_90 + 1,*(int *)(param_4 + 8) - (iStack_90 + 1));
    FUN_14012e6f0(auStack_68,auStack_80);
    FUN_14012aab0(auStack_80);
    FUN_14012aab0(auStack_98);
  }
  if (*(int *)(param_4 + 8) == 0) {
LAB_140263934:
    func_0x0001401237e0(auStack_50);
    cVar1 = FUN_1401648e0(param_4,auStack_50);
    if (cVar1 == '\0') {
      uVar4 = FUN_14014ef90(auStack_68);
      FUN_140159350(param_3,0x143fd5f78,2,&UNK_142c97070,0x5d1,"GamCLuaManager::loadLuaFile",
                    &UNK_142c8e098,uVar4);
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_14017a870(auStack_68,auStack_38);
      uVar4 = FUN_14014ee10(uVar4);
      uVar5 = FUN_14014ee10(auStack_50);
      uVar2 = FUN_140263620(param_1,param_2,param_3,uVar5,uStack_48,uVar4);
      FUN_14012aab0(auStack_38);
    }
    puVar6 = auStack_50;
  }
  else {
    cVar1 = FUN_14014b6d0(param_4);
    if (cVar1 == '\0') {
      uVar4 = FUN_14014ef90(param_4);
      FUN_140159350(param_3,0x143fd5f78,2,&UNK_142c97070,0x5a7,"GamCLuaManager::loadLuaFile",
                    &UNK_142c97ef0,uVar4);
      uVar2 = 0;
      goto LAB_1402639ed;
    }
    func_0x0001401237e0(auStack_98);
    cVar1 = func_0x000140144540(param_4);
    if (cVar1 == '\0') {
      uVar4 = FUN_14017a870(param_4,auStack_80);
      FUN_14012e6f0(auStack_98,uVar4);
      FUN_14012aab0(auStack_80);
    }
    else {
      FUN_140152bf0(auStack_80,param_4);
      cVar1 = func_0x000140144540(auStack_80);
      if (cVar1 == '\0') {
        uVar4 = FUN_14017a870(auStack_80,auStack_38);
        FUN_14012e6f0(auStack_98,uVar4);
        FUN_14012aab0(auStack_38);
      }
      FUN_14012aab0(auStack_80);
    }
    if (iStack_90 == 0) {
      FUN_14012aab0(auStack_98);
      goto LAB_140263934;
    }
    uVar4 = FUN_14014ee10(auStack_98);
    iVar3 = func_0x0001426d0d10(param_2,uVar4);
    if (iVar3 != 0) {
      uVar4 = FUN_1426cb510(param_2,0xffffffff,0);
      uVar5 = FUN_14014ee10(auStack_98);
      FUN_140159460(param_3,0x143fd5f78,2,&UNK_142c97070,0x5c5,"GamCLuaManager::loadLuaFile",
                    "Failed to load lua script %s: %s",uVar5,uVar4);
      FUN_1426cb370(param_2,0xfffffffe);
    }
    uVar2 = iVar3 == 0;
    puVar6 = auStack_98;
  }
  FUN_14012aab0(puVar6);
LAB_1402639ed:
  FUN_14012aab0(auStack_68);
  return uVar2;
}

