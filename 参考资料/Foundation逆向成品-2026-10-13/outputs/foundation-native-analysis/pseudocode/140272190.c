
undefined8 FUN_140272190(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piStack_8c8;
  undefined4 uStack_8c0;
  undefined8 uStack_8b8;
  int *piStack_8b0;
  undefined4 uStack_8a8;
  undefined8 uStack_8a0;
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined4 uStack_850;
  char cStack_84c;
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [24];
  char acStack_818 [2048];
  
  FUN_1426cb370(param_1,2);
  FUN_1426c9c00(param_1,1,7);
  FUN_1426c9a50(param_1,2);
  acStack_818[0] = '\0';
  puVar2 = (undefined8 *)FUN_1426cb680(param_1,0xfffffffe);
  uVar4 = *puVar2;
  uVar3 = FUN_140279c60(auStack_830,param_1,2,acStack_818);
  uVar3 = FUN_14017a870(uVar3,auStack_848);
  uVar4 = func_0x0001401a36f0(uVar4);
  FUN_1402491b0(auStack_880,param_1);
  func_0x0001401237e0(&piStack_8b0);
  if (piStack_8b0 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_8b0;
    *piStack_8b0 = *piStack_8b0 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00014016cb60();
    }
  }
  piStack_8b0 = (int *)0x0;
  uStack_8a0 = 0;
  uStack_8a8 = 0;
  func_0x0001401237e0(&piStack_8c8);
  if (piStack_8c8 != (int *)0x0) {
    LOCK();
    iVar1 = *piStack_8c8;
    *piStack_8c8 = *piStack_8c8 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      func_0x00014016cb60();
    }
  }
  piStack_8c8 = (int *)0x0;
  uStack_8b8 = 0;
  uStack_8c0 = 0;
  if (cStack_84c != '\0') {
    uVar5 = FUN_14014ee10(auStack_880);
    uVar5 = FUN_14014e0f0(auStack_898,"%s(%d): ",uVar5,uStack_850);
    FUN_14012e6f0(&piStack_8c8,uVar5);
    FUN_14012aab0(auStack_898);
  }
  uVar3 = FUN_14012fa30(&piStack_8c8,auStack_898,uVar3);
  FUN_14012e6f0(&piStack_8b0,uVar3);
  FUN_14012aab0(auStack_898);
  FUN_14012aab0(&piStack_8c8);
  uVar3 = FUN_14014ee10(&piStack_8b0);
  FUN_140159460(uVar4,0x143fd5f78,0,&UNK_142c97070,0x646,"GamCLuaManager::log",uVar3);
  FUN_14012aab0(&piStack_8b0);
  FUN_14012aab0(auStack_868);
  FUN_14012aab0(auStack_880);
  FUN_14012aab0(auStack_848);
  FUN_14012aab0(auStack_830);
  if (acStack_818[0] == '\0') {
    FUN_1426cb370(param_1,0xfffffffd);
  }
  else {
    FUN_1426cc500(param_1,acStack_818);
  }
  return 0;
}

