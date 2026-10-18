
void FUN_140263d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  int *piStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  undefined4 uStack_20;
  char cStack_1c;
  
  FUN_1402491b0(auStack_50,param_1);
  func_0x0001401237e0(&piStack_80);
  if (piStack_80 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_80;
    *piStack_80 = *piStack_80 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00014016cb60();
    }
  }
  piStack_80 = (int *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  func_0x0001401237e0(&piStack_98);
  if (piStack_98 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_98;
    *piStack_98 = *piStack_98 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00014016cb60();
    }
  }
  piStack_98 = (int *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (cStack_1c != '\0') {
    uVar2 = FUN_14014ee10(auStack_50);
    uVar2 = FUN_14014e0f0(auStack_68,"%s(%d): ",uVar2,uStack_20);
    FUN_14012e6f0(&piStack_98,uVar2);
    FUN_14012aab0(auStack_68);
  }
  uVar2 = FUN_14012fa30(&piStack_98,auStack_68,param_3);
  FUN_14012e6f0(&piStack_80,uVar2);
  FUN_14012aab0(auStack_68);
  FUN_14012aab0(&piStack_98);
  uVar2 = FUN_14014ee10(&piStack_80);
  FUN_140159460(param_2,0x143fd5f78,1,&UNK_142c97070,0x64e,"GamCLuaManager::logWarning",uVar2);
  FUN_14012aab0(&piStack_80);
  FUN_14012aab0(auStack_38);
  FUN_14012aab0(auStack_50);
  return;
}

