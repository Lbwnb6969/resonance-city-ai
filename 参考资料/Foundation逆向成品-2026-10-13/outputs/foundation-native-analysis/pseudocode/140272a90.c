
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140272a90(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  FUN_1426cb370(param_1,4);
  FUN_1426c9c00(param_1,1,7);
  FUN_1426c9c00(param_1,2,4);
  FUN_1426c9c00(param_1,3,4);
  puVar3 = (undefined8 *)FUN_1426cb680(param_1,1);
  uVar6 = *puVar3;
  func_0x0001401237e0(auStack_30);
  func_0x0001401237e0(auStack_48);
  cVar1 = FUN_14027a960(_DAT_143fd5f70,param_1,uVar6,2,4,auStack_30);
  cVar2 = FUN_14027a960(_DAT_143fd5f70,param_1,uVar6,3,4,auStack_48);
  FUN_1426cb370(param_1,0xfffffffb);
  if (cVar1 == '\0') {
    uVar4 = func_0x0001401a36f0(uVar6);
    uVar5 = FUN_14014ef90(auStack_30);
    FUN_140159350(uVar4,0x143fd5f78,2,&UNK_142c97070,0x37d,"GamCLuaManager::s_modMoveFile",
                  &UNK_142c97aa0,uVar5);
  }
  if (cVar2 == '\0') {
    uVar6 = func_0x0001401a36f0(uVar6);
    uVar4 = FUN_14014ef90(auStack_48);
    FUN_140159350(uVar6,0x143fd5f78,2,&UNK_142c97070,0x382,"GamCLuaManager::s_modMoveFile",
                  &UNK_142c97b30,uVar4);
  }
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    cVar1 = FUN_14015b820(auStack_30,auStack_48,0);
    if (cVar1 != '\0') {
      uVar6 = 1;
      goto LAB_140272c54;
    }
  }
  uVar6 = 0;
LAB_140272c54:
  func_0x0001426caa30(param_1,uVar6);
  FUN_14012aab0(auStack_48);
  FUN_14012aab0(auStack_30);
  return 1;
}

