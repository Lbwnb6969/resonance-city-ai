
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402735e0(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStackX_10 [8];
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [24];
  
  FUN_1426cb370(param_1,4);
  FUN_1426c9c00(param_1,1,7);
  FUN_1426c9c00(param_1,2,4);
  FUN_1426c9c00(param_1,3,4);
  puVar2 = (undefined8 *)FUN_1426cb680(param_1,1);
  uVar4 = *puVar2;
  uVar3 = FUN_1426cb510(param_1,3,0);
  FUN_1401236c0(auStack_20,uVar3);
  func_0x0001401237e0(auStack_38);
  cVar1 = FUN_14027a960(_DAT_143fd5f70,param_1,uVar4,2,4,auStack_38);
  FUN_1426cb370(param_1,0xfffffffb);
  if (cVar1 == '\0') {
    uVar4 = func_0x0001401a36f0(uVar4);
    uVar3 = FUN_14014ef90(auStack_38);
    FUN_140159350(uVar4,0x143fd5f78,2,&UNK_142c97070,0x34c,"GamCLuaManager::s_modWriteFileAsString",
                  &UNK_142c97960,uVar3);
  }
  else {
    cVar1 = FUN_1401815b0(auStack_38,auStack_20,auStackX_10);
    if (cVar1 != '\0') {
      uVar4 = 1;
      goto LAB_140273708;
    }
  }
  uVar4 = 0;
LAB_140273708:
  func_0x0001426caa30(param_1,uVar4);
  FUN_14012aab0(auStack_38);
  FUN_14012aab0(auStack_20);
  return 1;
}

