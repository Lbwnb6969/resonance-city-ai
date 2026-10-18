
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140213520(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong unaff_GS_OFFSET;
  longlong alStackX_8 [2];
  undefined1 auStack_458 [32];
  undefined1 auStack_438 [1024];
  
  alStackX_8[0] = func_0x000142a8c93e(0x50);
  lVar8 = 0;
  lVar4 = lVar8;
  if (alStackX_8[0] != 0) {
    lVar4 = FUN_1401280a0(alStackX_8[0],0x143fd3d58,*(undefined1 *)(param_1 + 0x331));
  }
  lVar9 = *(longlong *)(param_1 + 0x2c8);
  if (lVar9 != lVar4) {
    if (lVar9 != 0) {
      FUN_14012cc80(lVar9);
      func_0x000142a8cbe0(lVar9,0x50);
    }
    *(longlong *)(param_1 + 0x2c8) = lVar4;
    lVar9 = lVar4;
  }
  FUN_1401bb540(lVar9);
  *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x28);
  lVar4 = FUN_1402b5050(0);
  FUN_1402b4090(*(undefined8 *)(lVar4 + 0x58));
  lVar4 = FUN_1402b5050(0);
  FUN_1402b0ea0(*(undefined8 *)(lVar4 + 0x58),1);
  lVar4 = FUN_1402b5050(0);
  iVar3 = func_0x0001402aead0(*(undefined8 *)(lVar4 + 0x58));
  *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + iVar3;
  alStackX_8[1] = 0;
  FUN_140151410(*(undefined8 *)(param_1 + 0x2c8),alStackX_8);
  uVar11 = (ulonglong)__tls_index;
  if ((int)alStackX_8[0] != 0) {
    plVar10 = (longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + uVar11 * 8);
    lVar4 = lVar8;
    do {
      cVar2 = FUN_140157df0(*(undefined8 *)(param_1 + 0x2c8),alStackX_8[0]);
      lVar8 = lVar4;
      if (cVar2 == '\0') {
        uVar5 = FUN_140151220(*(undefined8 *)(param_1 + 0x2c8),auStack_458,alStackX_8[0]);
        uVar5 = FUN_14014ee10(uVar5);
        FUN_140142470(auStack_438,0x400,"Skip file %s",uVar5);
        FUN_14012aab0(auStack_458);
        if ((*(int *)(*plVar10 + 0x4d0) < _DAT_143fd4280) &&
           (FUN_142a8cb38(&DAT_143fd4280), _DAT_143fd4280 == -1)) {
          FUN_140126510(&DAT_143fd4250,0,&UNK_142c8f440,0x1a8,"GamCAssetManager::openAllPackages",
                        auStack_438);
          FUN_142a8ce10(&UNK_142be0470);
          FUN_142a8cacc(&DAT_143fd4280);
        }
        LOCK();
        _DAT_143fd4254 = _DAT_143fd4254 + 1;
        UNLOCK();
        if ((_DAT_143fcd430 != 0) && (DAT_143fd4250 != '\0')) {
          iVar3 = FUN_1401758e0(_DAT_143fd4278,&UNK_142c8f440,"GamCAssetManager::openAllPackages",
                                auStack_438,&DAT_143fd4250);
          if (iVar3 == 3) {
            exit(0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (iVar3 == 4) {
            DebugBreak();
          }
        }
        FUN_140159190(_DAT_143fd4278,&UNK_142c8f440,0x1a8,"GamCAssetManager::openAllPackages",
                      auStack_438);
      }
      else {
        uVar5 = FUN_140151220(*(undefined8 *)(param_1 + 0x2c8),auStack_458,alStackX_8[0]);
        cVar2 = FUN_14012eb60(uVar5,&UNK_142c8f8a4);
        FUN_14012aab0(auStack_458);
        if (cVar2 == '\0') {
          uVar5 = FUN_140151220(*(undefined8 *)(param_1 + 0x2c8),auStack_458,alStackX_8[0]);
          cVar2 = FUN_14012eb60(uVar5,"asset");
          FUN_14012aab0(auStack_458);
          lVar8 = alStackX_8[0];
          if (cVar2 == '\0') {
            uVar5 = FUN_140151220(*(undefined8 *)(param_1 + 0x2c8),auStack_458,alStackX_8[0]);
            uVar5 = FUN_14014ee10(uVar5);
            FUN_140142470(auStack_438,0x400,"Skip directory %s (Expect \'enum\' or \'asset\')",uVar5
                         );
            FUN_14012aab0(auStack_458);
            if ((*(int *)(*plVar10 + 0x4d0) < _DAT_143fd4248) &&
               (FUN_142a8cb38(&DAT_143fd4248), _DAT_143fd4248 == -1)) {
              FUN_140126510(&DAT_143fd4218,0,&UNK_142c8f440,0x1a3,
                            "GamCAssetManager::openAllPackages",auStack_438);
              FUN_142a8ce10(&UNK_142be03b0);
              FUN_142a8cacc(&DAT_143fd4248);
            }
            LOCK();
            _DAT_143fd421c = _DAT_143fd421c + 1;
            UNLOCK();
            if ((_DAT_143fcd430 != 0) && (DAT_143fd4218 != '\0')) {
              iVar3 = FUN_1401758e0(_DAT_143fd4240,&UNK_142c8f440,
                                    "GamCAssetManager::openAllPackages",auStack_438,&DAT_143fd4218);
              if (iVar3 == 3) {
                exit(0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if (iVar3 == 4) {
                DebugBreak();
              }
            }
            FUN_140159190(_DAT_143fd4240,&UNK_142c8f440,0x1a3,"GamCAssetManager::openAllPackages",
                          auStack_438);
            lVar8 = lVar4;
          }
        }
        else {
          uVar5 = FUN_1401bb030(1);
          FUN_1401a9830(uVar5,*(undefined8 *)(param_1 + 0x2c8),alStackX_8);
        }
      }
      plVar6 = (longlong *)
               FUN_140151790(*(undefined8 *)(param_1 + 0x2c8),alStackX_8 + 1,alStackX_8[0]);
      alStackX_8[0] = *plVar6;
      lVar4 = lVar8;
    } while ((int)alStackX_8[0] != 0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x4f8);
  uVar7 = FUN_140151340(*(undefined8 *)(param_1 + 0x2c8),alStackX_8,lVar8);
  FUN_140219b80(param_1,*(undefined8 *)(param_1 + 0x2c8),uVar7,uVar5,0x143b00248);
  lVar8 = FUN_1402b5050(0);
  plVar10 = (longlong *)**(longlong **)(lVar8 + 0x58);
  plVar6 = (longlong *)(*(longlong **)(lVar8 + 0x58))[1];
  if (plVar10 != plVar6) {
    lVar8 = *(longlong *)(unaff_GS_OFFSET + 0x58);
    do {
      lVar4 = *plVar10;
      if (*(int *)(lVar4 + 0x20) == 0) {
        lVar9 = *(longlong *)(lVar4 + 0x28);
        if (lVar9 == 0) {
          FUN_140142470(auStack_438,0x400,"Unexpected null pointer assigned to ComCNotNull");
          if ((*(int *)(*(longlong *)(lVar8 + uVar11 * 8) + 0x4d0) < _DAT_143fd4980) &&
             (FUN_142a8cb38(&DAT_143fd4980), _DAT_143fd4980 == -1)) {
            FUN_140126510(&DAT_143fd4950,0,&UNK_142c91190,0xb,
                          "ComCNotNull<class ComCPackage>::ComCNotNull",auStack_438);
            FUN_142a8ce10(&UNK_142be0490);
            FUN_142a8cacc(&DAT_143fd4980);
          }
          LOCK();
          _DAT_143fd4954 = _DAT_143fd4954 + 1;
          UNLOCK();
          if ((_DAT_143fcd430 != 0) && (DAT_143fd4950 != '\0')) {
            iVar3 = FUN_1401758e0(_DAT_143fd4978,&UNK_142c91190,
                                  "ComCNotNull<class ComCPackage>::ComCNotNull",auStack_438,
                                  &DAT_143fd4950);
            if (iVar3 == 3) {
              exit(0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (iVar3 == 4) {
              DebugBreak();
            }
          }
          FUN_140159190(_DAT_143fd4978,&UNK_142c91190,0xb,
                        "ComCNotNull<class ComCPackage>::ComCNotNull",auStack_438);
          uRam0000000000000000 = 0x2a;
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
        uVar5 = FUN_140130650(lVar4 + 0x80,auStack_458,&UNK_142c77230);
        uVar7 = FUN_140151410(lVar9,alStackX_8);
        FUN_140219b80(param_1,lVar9,uVar7,lVar4,uVar5);
        FUN_14012aab0(auStack_458);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar6);
  }
  return;
}

