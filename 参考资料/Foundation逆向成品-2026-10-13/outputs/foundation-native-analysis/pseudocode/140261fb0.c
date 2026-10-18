
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140261fb0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong unaff_GS_OFFSET;
  undefined4 auStackX_18 [2];
  longlong lStackX_20;
  undefined1 *in_stack_fffffffffffffaf8;
  undefined4 uVar13;
  undefined1 auStack_4d8 [24];
  longlong lStack_4c0;
  longlong lStack_4b8;
  longlong lStack_4b0;
  undefined1 auStack_4a8 [32];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [1024];
  
  FUN_1401236c0(auStack_488,"table");
  FUN_1401236c0(auStack_470,&UNK_142c97280);
  FUN_1401236c0(auStack_458,"polygon");
  lVar7 = FUN_140109d30(0x48);
  lStack_4b0 = lVar7 + 0x48;
  puVar11 = auStack_488;
  lVar12 = lVar7;
  lStack_4c0 = lVar7;
  do {
    func_0x000140123260(lVar12,puVar11);
    lVar12 = lVar12 + 0x18;
    puVar11 = puVar11 + 0x18;
  } while (puVar11 != auStack_440);
  lStack_4b8 = lVar12;
  FUN_142a8d5d8(auStack_488,0x18,3,FUN_14012aab0);
  if (lVar7 != lVar12) {
    uVar10 = (ulonglong)__tls_index;
    lVar1 = *(longlong *)(unaff_GS_OFFSET + 0x58);
    do {
      uVar9 = *(undefined8 *)(_DAT_143fceea0 + 0x38);
      FUN_1401236c0(auStack_4d8,"scripts/");
      FUN_140131000(auStack_4d8,lVar7);
      uVar8 = FUN_1401301d0(auStack_4d8,auStack_4a8,&UNK_142c97de4);
      uVar9 = FUN_14014c220(uVar9,uVar8);
      FUN_14012aab0(auStack_4a8);
      FUN_14012aab0(auStack_4d8);
      cVar5 = FUN_1402636e0(param_1,*(undefined8 *)(param_1 + 0x10),
                            *(undefined8 *)(_DAT_143fd77d0 + 0x120),uVar9);
      if (cVar5 != '\0') {
        iVar6 = FUN_1426ca9a0(*(undefined8 *)(param_1 + 0x10),0,0xffffffff,0);
        uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffaf8 >> 0x20);
        if (iVar6 == 0) {
          iVar6 = func_0x0001426ca5a0(*(undefined8 *)(param_1 + 0x10));
          if (0 < iVar6) {
            FUN_1426cb370(*(undefined8 *)(param_1 + 0x10),1);
            iVar6 = FUN_1426cb6d0(*(undefined8 *)(param_1 + 0x10),1);
            if (iVar6 == 6) {
              auStackX_18[0] = FUN_1426cfec0(*(undefined8 *)(param_1 + 0x10),0xffffd8f0);
              puVar2 = *(undefined4 **)(param_1 + 200);
              if (puVar2 == *(undefined4 **)(param_1 + 0xd0)) {
                FUN_14023db50(param_1 + 0xc0,puVar2,auStackX_18);
              }
              else {
                *puVar2 = auStackX_18[0];
                *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + 4;
              }
            }
            else {
              FUN_140142470(auStack_438,0x400,
                            "Unexpected engine script return value, expected a function");
              if ((*(int *)(*(longlong *)(lVar1 + uVar10 * 8) + 0x4d0) < _DAT_143fd6328) &&
                 (FUN_142a8cb38(&DAT_143fd6328), _DAT_143fd6328 == -1)) {
                FUN_140126510(&DAT_143fd62f8,0,&UNK_142c97070,0x532,
                              "GamCLuaManager::initEngineScripts",auStack_438);
                FUN_142a8ce10(&UNK_142be11f0);
                FUN_142a8cacc(&DAT_143fd6328);
              }
              LOCK();
              _DAT_143fd62fc = _DAT_143fd62fc + 1;
              UNLOCK();
              if ((_DAT_143fcd430 != 0) && (DAT_143fd62f8 != '\0')) {
                iVar6 = FUN_1401758e0(_DAT_143fd6320,&UNK_142c97070,
                                      "GamCLuaManager::initEngineScripts",auStack_438,&DAT_143fd62f8
                                     );
                if (iVar6 == 3) {
                  exit(0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (iVar6 == 4) {
                  DebugBreak();
                }
              }
              in_stack_fffffffffffffaf8 = auStack_438;
              FUN_140159190(_DAT_143fd6320,&UNK_142c97070,0x532,"GamCLuaManager::initEngineScripts",
                            in_stack_fffffffffffffaf8);
              FUN_1426cb370(*(undefined8 *)(param_1 + 0x10),0xfffffffe);
            }
          }
        }
        else {
          if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
            lStackX_20 = func_0x000142a8c93e(0x150);
            if (lStackX_20 == 0) {
              _DAT_143fcd428 = 0;
            }
            else {
              _DAT_143fcd428 = FUN_140127e80(lStackX_20);
            }
          }
          lVar4 = _DAT_143fcd428;
          uVar9 = FUN_1426cb510(*(undefined8 *)(param_1 + 0x10),0xffffffff,0);
          uVar8 = FUN_14014ee10(lVar7);
          in_stack_fffffffffffffaf8 = (undefined1 *)CONCAT44(uVar13,0x539);
          FUN_140159460(lVar4,0x143fd5f78,2,&UNK_142c97070,in_stack_fffffffffffffaf8,
                        "GamCLuaManager::initEngineScripts","Error when running \'%s.lua\': %s",
                        uVar8,uVar9);
          FUN_1426cb370(*(undefined8 *)(param_1 + 0x10),0xfffffffe);
        }
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar12);
  }
  FUN_14013cd30(&lStack_4c0);
  return;
}

