
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14020a630(undefined8 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_408 [1024];
  
  if (param_2 == 0) {
    lVar3 = func_0x000142a8c93e(0x10);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = FUN_140129d30(lVar3);
    }
    return uVar4;
  }
  if (param_2 == 1) {
    lVar3 = func_0x000142a8c93e(0x58);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = FUN_140126a20(lVar3);
    }
    return uVar4;
  }
  FUN_140142470(auStack_408,0x400,"Unknown serializer");
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
              0x4d0) < _DAT_143fd44b0) {
    FUN_142a8cb38(&DAT_143fd44b0);
    if (_DAT_143fd44b0 == -1) {
      FUN_140126510(&DAT_143fd4480,0,&UNK_142c8f440,0x404,"GamCAssetManager::buildSerializer",
                    auStack_408);
      FUN_142a8ce10(&UNK_142be0360);
      FUN_142a8cacc(&DAT_143fd44b0);
    }
  }
  LOCK();
  _DAT_143fd4484 = _DAT_143fd4484 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143fd4480 != '\0')) {
    iVar2 = FUN_1401758e0(_DAT_143fd44a8,&UNK_142c8f440,"GamCAssetManager::buildSerializer",
                          auStack_408,&DAT_143fd4480);
    if (iVar2 == 3) {
      exit(0);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    if (iVar2 == 4) {
      DebugBreak();
    }
  }
  FUN_140159190(_DAT_143fd44a8,&UNK_142c8f440,0x404,"GamCAssetManager::buildSerializer",auStack_408)
  ;
  return 0;
}

