
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a9a80(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong unaff_GS_OFFSET;
  undefined8 in_stack_fffffffffffffbb8;
  undefined4 uVar7;
  undefined1 auStack_438 [32];
  undefined1 auStack_418 [1024];
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffbb8 >> 0x20);
  piVar6 = (int *)0x0;
  uVar3 = FUN_14020e3a0(*(undefined8 *)(param_1 + 8));
  lVar4 = FUN_1404c1ac0(*(longlong *)(param_1 + 8) + 0x98,uVar3,param_1 + 0x20,0xffffffff);
  lVar5 = *(longlong *)(param_1 + 0x90);
  if (lVar5 != lVar4) {
    if (lVar5 != 0) {
      FUN_140191b90(lVar5);
      func_0x000142a8cbe0(lVar5,0x68);
    }
    *(longlong *)(param_1 + 0x90) = lVar4;
  }
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
    FUN_140142470(auStack_418,0x400,
                  "Package model version (%d) does not match expected version (%d)",
                  *(int *)(param_1 + 0x20),CONCAT44(uVar7,*(int *)(param_1 + 0x24)));
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 0x4d0) < _DAT_143fcfa48) && (FUN_142a8cb38(&DAT_143fcfa48), _DAT_143fcfa48 == -1)
       ) {
      FUN_140126510(&DAT_143fcfa18,0,&UNK_142c7f600,0x3e,"GamCFbxImportProcessor::loadFromPackage",
                    auStack_418);
      FUN_142a8ce10(&UNK_142bde6d0);
      FUN_142a8cacc(&DAT_143fcfa48);
    }
    LOCK();
    _DAT_143fcfa1c = _DAT_143fcfa1c + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143fcfa18 != '\0')) {
      iVar2 = FUN_1401758e0(_DAT_143fcfa40,&UNK_142c7f600,"GamCFbxImportProcessor::loadFromPackage",
                            auStack_418,&DAT_143fcfa18);
      if (iVar2 == 3) {
        exit(0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (iVar2 == 4) {
        DebugBreak();
      }
    }
    FUN_140159190(_DAT_143fcfa40,&UNK_142c7f600,0x3e,"GamCFbxImportProcessor::loadFromPackage",
                  auStack_418);
  }
  lVar5 = func_0x000142a8c93e(0x48);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    FUN_140123c40(auStack_438,&UNK_142c7f6b0);
    uVar3 = FUN_1401cd500(uVar3,auStack_438);
    piVar6 = (int *)FUN_1404b6d40(lVar5,uVar3);
  }
  FUN_140199740(param_1 + 0xa0);
  *(int **)(param_1 + 0xa0) = piVar6;
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  if (lVar5 != 0) {
    FUN_14012aab0(auStack_438);
  }
  *(undefined4 *)(param_1 + 0xb8) = 1;
  return;
}

