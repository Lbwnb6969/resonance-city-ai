
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140250720(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_428 [24];
  undefined1 uStack_410;
  undefined1 auStack_408 [1024];
  
  plVar1 = (longlong *)(param_1 + 0x90);
  uVar8 = 0;
  uVar9 = (uint)(*(longlong *)(param_1 + 0x98) - *plVar1 >> 5);
  if (uVar9 != 0) {
    do {
      cVar4 = FUN_14012eae0(uVar8 * 0x20 + *plVar1,param_2);
      if (cVar4 != '\0') {
        if ((int)uVar8 != -1) {
          uVar6 = FUN_14014ee10(param_2);
          FUN_140142470(auStack_408,0x400,"Global whitelist already contains name \'%s\'",uVar6);
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                       0x4d0) < _DAT_143fd6360) &&
             (FUN_142a8cb38(&DAT_143fd6360), _DAT_143fd6360 == -1)) {
            FUN_140126510(&DAT_143fd6330,0,&UNK_142c97070,0x61c,
                          "GamCLuaManager::addWhitelistGlobalFromReflection",auStack_408);
            FUN_142a8ce10(&UNK_142be1240);
            FUN_142a8cacc(&DAT_143fd6360);
          }
          LOCK();
          _DAT_143fd6334 = _DAT_143fd6334 + 1;
          UNLOCK();
          if ((_DAT_143fcd430 != 0) && (DAT_143fd6330 != '\0')) {
            iVar5 = FUN_1401758e0(_DAT_143fd6358,&UNK_142c97070,
                                  "GamCLuaManager::addWhitelistGlobalFromReflection",auStack_408,
                                  &DAT_143fd6330);
            if (iVar5 == 3) {
              exit(0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (iVar5 == 4) {
              DebugBreak();
            }
          }
          FUN_140159190(_DAT_143fd6358,&UNK_142c97070,0x61c,
                        "GamCLuaManager::addWhitelistGlobalFromReflection",auStack_408);
          return;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < uVar9);
  }
  func_0x000140123260(auStack_428,param_2);
  uStack_410 = 1;
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 == *(longlong *)(param_1 + 0xa0)) {
    FUN_14023dcd0(plVar1,lVar2,auStack_428);
  }
  else {
    func_0x000140123230(lVar2,auStack_428);
    *(undefined1 *)(lVar2 + 0x18) = uStack_410;
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0x20;
  }
  FUN_14012aab0(auStack_428);
  return;
}

