
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140270f00(void)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_408 [1024];
  
  if (_DAT_143fd5f70 != 0) {
    FUN_140142470(auStack_408,0x400,"GamCLuaManager already intialized");
    if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                0x4d0) < _DAT_143fd62b8) {
      FUN_142a8cb38(&DAT_143fd62b8);
      if (_DAT_143fd62b8 == -1) {
        FUN_140126510(&DAT_143fd6288,0,&UNK_142c97070,0x111,"GamCLuaManager::s_init",auStack_408);
        FUN_142a8ce10(&UNK_142be1080);
        FUN_142a8cacc(&DAT_143fd62b8);
      }
    }
    LOCK();
    _DAT_143fd628c = _DAT_143fd628c + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143fd6288 != '\0')) {
      iVar2 = FUN_1401758e0(_DAT_143fd62b0,&UNK_142c97070,"GamCLuaManager::s_init",auStack_408,
                            &DAT_143fd6288);
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
    FUN_140159190(_DAT_143fd62b0,&UNK_142c97070,0x111,"GamCLuaManager::s_init",auStack_408);
  }
  lVar3 = func_0x000142a8c93e(0xd8);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = FUN_140247e10(lVar3);
  }
  _DAT_143fd5f70 = uVar4;
  return;
}

