
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14019d6b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong unaff_GS_OFFSET;
  undefined8 *puStackX_8;
  undefined8 in_stack_fffffffffffffa38;
  undefined4 uVar15;
  undefined1 *puVar14;
  longlong alStack_598 [2];
  undefined1 auStack_588 [24];
  undefined1 auStack_570 [24];
  undefined1 auStack_558 [8];
  int iStack_550;
  longlong lStack_540;
  longlong lStack_528;
  undefined1 auStack_520 [8];
  int iStack_518;
  longlong lStack_508;
  longlong lStack_4f0;
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [32];
  undefined1 auStack_498 [96];
  undefined1 auStack_438 [1024];
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffa38 >> 0x20);
  piVar13 = (int *)0x0;
  uVar1 = *(uint *)(param_1 + 0xa8);
  if ((((uVar1 & 2) == 0) || ((uVar1 & 0x10) != 0)) || (*(int *)(param_1 + 0xbc) == 2)) {
    lVar9 = (ulonglong)(uint3)(uVar1 >> 8) << 8;
  }
  else {
    piVar7 = _DAT_143fcd428;
    if (((_DAT_143fcd428 == (int *)0x0) && (DAT_143fcd3f6 == '\0')) &&
       (puStackX_8 = (undefined8 *)func_0x000142a8c93e(0x150), piVar7 = piVar13,
       puStackX_8 != (undefined8 *)0x0)) {
      piVar7 = (int *)FUN_140127e80(puStackX_8);
    }
    _DAT_143fcd428 = piVar7;
    piVar7 = _DAT_143fcd428;
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar8 = FUN_14014ef90(*(longlong *)(param_1 + 8) + 0x80);
    FUN_140159350(piVar7,0x143fd1080,0,&UNK_142c7f600,CONCAT44(uVar15,0x268),
                  "GamCFbxImportProcessor::downloadCacheFromServer",&UNK_142c7fb60,uVar8,uVar2);
    FUN_14014e0f0(auStack_4e8,"fbx-%d-%d",1,*(undefined4 *)(param_1 + 0x24));
    lVar9 = func_0x0001402186c0();
    uVar8 = FUN_14017ae70(*(longlong *)(param_1 + 8) + 0x35,auStack_4b8);
    uVar8 = FUN_140130320(lVar9 + 0x318,auStack_4d0,uVar8);
    FUN_140130650(uVar8,auStack_570,&UNK_142c7fc20);
    FUN_14012aab0(auStack_4d0);
    FUN_14012aab0(auStack_4b8);
    FUN_140149ab0(auStack_570);
    uVar8 = FUN_1401bae50();
    uVar10 = FUN_1401a2a00(param_1,param_4);
    puVar14 = auStack_570;
    cVar5 = FUN_1403d09e0(uVar8,param_2,uVar10,auStack_4e8,puVar14);
    uVar15 = (undefined4)((ulonglong)puVar14 >> 0x20);
    if ((cVar5 == '\0') && (*(int *)(param_1 + 0x24) != _DAT_142cf63cc)) {
      uVar8 = FUN_140110f80();
      iVar6 = _DAT_142cf63cc;
      uVar10 = FUN_14014ef90(*(longlong *)(param_1 + 8) + 0x80);
      FUN_140159350(uVar8,0x143fd1080,0,&UNK_142c7f600,CONCAT44(uVar15,0x273),
                    "GamCFbxImportProcessor::downloadCacheFromServer",&UNK_142c7fb60,uVar10,iVar6);
      FUN_14014e0f0(auStack_588,"fbx-%d-%d",1,_DAT_142cf63cc);
      uVar8 = FUN_1401bae50();
      uVar10 = FUN_1401a2a00(param_1,param_4);
      cVar5 = FUN_1403d09e0(uVar8,param_2,uVar10,auStack_588,auStack_570);
      if (cVar5 != '\0') {
        *(int *)(param_1 + 0x24) = _DAT_142cf63cc;
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x48) = _DAT_142cf63cc;
        func_0x0001401cc9c0(*(undefined8 *)(param_1 + 8));
      }
      FUN_14012aab0(auStack_588);
    }
    lVar9 = 0;
    if (cVar5 != '\0') {
      FUN_140127060(auStack_498,auStack_570);
      func_0x00014012a430(auStack_520);
      func_0x00014012a430(auStack_558);
      cVar5 = func_0x0001401580a0(auStack_498);
      if (cVar5 != '\0') {
        FUN_1401236c0(auStack_588,&UNK_142c7fc34);
        uVar8 = FUN_14014c220(auStack_498,auStack_588);
        FUN_14012ea60(auStack_520,uVar8);
        FUN_14012aab0(auStack_588);
        FUN_1401236c0(auStack_588,"data.xbin");
        uVar8 = FUN_14014c220(auStack_498,auStack_588);
        FUN_14012ea60(auStack_558,uVar8);
        FUN_14012aab0(auStack_588);
      }
      if ((((iStack_518 != 0) || (lStack_508 != 0)) || (lStack_4f0 != 0)) &&
         (((iStack_550 != 0 || (lStack_540 != 0)) || (lStack_528 != 0)))) {
        plVar3 = *(longlong **)(param_1 + 0x28);
        alStack_598[1] = 0;
        lVar11 = *(longlong *)(param_1 + 8);
        alStack_598[0] = 0;
        puStackX_8 = (undefined8 *)((ulonglong)puStackX_8 & 0xffffffff00000000);
        cVar5 = FUN_1401cbf10(plVar3,auStack_520,alStack_598,&puStackX_8,1);
        if (cVar5 != '\0') {
          (**(code **)(*plVar3 + 0x50))
                    (plVar3,0x143fcf100,lVar11 + 0x35,alStack_598[0],
                     (ulonglong)puStackX_8 & 0xffffffff,alStack_598 + 1);
        }
        if (alStack_598[0] != 0) {
          func_0x000142a8c94a();
        }
        plVar3 = *(longlong **)(param_1 + 0x28);
        alStack_598[1] = 0;
        lVar11 = *(longlong *)(param_1 + 8);
        alStack_598[0] = 0;
        puStackX_8 = (undefined8 *)((ulonglong)puStackX_8 & 0xffffffff00000000);
        cVar5 = FUN_1401cbf10(plVar3,auStack_558,alStack_598,&puStackX_8,1);
        if (cVar5 != '\0') {
          (**(code **)(*plVar3 + 0x50))
                    (plVar3,0x143fcf118,lVar11 + 0x35,alStack_598[0],
                     (ulonglong)puStackX_8 & 0xffffffff,alStack_598 + 1);
        }
        if (alStack_598[0] != 0) {
          func_0x000142a8c94a();
        }
        if ((*(byte *)(param_1 + 0xa8) & 0x80) != 0) {
          FUN_1401236c0(auStack_588,&UNK_142c7fc4c);
          lVar11 = FUN_14014c220(auStack_498,auStack_588);
          FUN_14012aab0(auStack_588);
          if (((*(int *)(lVar11 + 8) != 0) || (*(longlong *)(lVar11 + 0x18) != 0)) ||
             (*(longlong *)(lVar11 + 0x30) != 0)) {
            puStackX_8 = (undefined8 *)0x0;
            FUN_14018a440(*(undefined8 *)(param_1 + 0x28),0x143fcf148,
                          *(longlong *)(param_1 + 8) + 0x35,lVar11,1,&puStackX_8);
          }
        }
        uVar8 = FUN_14020e3a0(*(undefined8 *)(param_1 + 8));
        uVar8 = FUN_1404c1ac0(auStack_520,uVar8,param_1 + 0x20,0xffffffff);
        FUN_1401ba0d0(param_1 + 0x90,uVar8);
        if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
          FUN_140142470(auStack_438,0x400,
                        "Cache server version (%d) does not match expected version (%d)",
                        *(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24));
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                       0x4d0) < _DAT_143fcfbd0) &&
             (FUN_142a8cb38(&DAT_143fcfbd0), _DAT_143fcfbd0 == -1)) {
            FUN_140126510(&DAT_143fcfba0,0,&UNK_142c7f600,0x29a,
                          "GamCFbxImportProcessor::downloadCacheFromServer",auStack_438);
            FUN_142a8ce10(&UNK_142bdea60);
            FUN_142a8cacc(&DAT_143fcfbd0);
          }
          LOCK();
          _DAT_143fcfba4 = _DAT_143fcfba4 + 1;
          UNLOCK();
          if ((_DAT_143fcd430 != 0) && (DAT_143fcfba0 != '\0')) {
            iVar6 = FUN_1401758e0(_DAT_143fcfbc8,&UNK_142c7f600,
                                  "GamCFbxImportProcessor::downloadCacheFromServer",auStack_438,
                                  &DAT_143fcfba0);
            if (iVar6 == 3) {
              exit(0);
              pcVar4 = (code *)swi(3);
              lVar9 = (*pcVar4)();
              return lVar9;
            }
            if (iVar6 == 4) {
              DebugBreak();
            }
          }
          FUN_140159190(_DAT_143fcfbc8,&UNK_142c7f600,0x29a,
                        "GamCFbxImportProcessor::downloadCacheFromServer",auStack_438);
        }
        if (*(longlong *)(param_1 + 0x90) != 0) {
          lVar9 = 1;
          puStackX_8 = (undefined8 *)func_0x000142a8c93e();
          piVar7 = piVar13;
          if (puStackX_8 != (undefined8 *)0x0) {
            *puStackX_8 = 0;
            puStackX_8[1] = 0;
            puStackX_8[2] = 0;
            puStackX_8[3] = 0;
            puStackX_8[4] = 0;
            puStackX_8[5] = 0;
            puStackX_8[6] = 0;
            puStackX_8[7] = 0;
            puStackX_8[8] = 0;
            puStackX_8[9] = 0;
            puStackX_8[10] = 0;
            puStackX_8[0xb] = 0;
            puStackX_8[0xc] = 0;
            piVar7 = (int *)FUN_14018e410(puStackX_8);
          }
          FUN_1401ba120(param_1 + 0x98,piVar7);
          FUN_14019f6d0(param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4);
          FUN_1401bc0a0(param_1);
          puVar12 = (undefined8 *)func_0x000142a8c93e(0x48);
          puStackX_8 = puVar12;
          if (puVar12 != (undefined8 *)0x0) {
            uVar8 = FUN_1404c2040(auStack_558);
            piVar13 = (int *)FUN_1404b6d70(puVar12,uVar8);
          }
          FUN_140199740(param_1 + 0xa0);
          *(int **)(param_1 + 0xa0) = piVar13;
          if (piVar13 != (int *)0x0) {
            *piVar13 = *piVar13 + 1;
          }
          cVar5 = FUN_14012eae0(param_2,*(longlong *)(param_1 + 0x10) + 0x30);
          if (cVar5 == '\0') {
            FUN_14012e760(*(longlong *)(param_1 + 0x10) + 0x30,param_2);
            func_0x0001401cc9c0(*(undefined8 *)(param_1 + 8));
          }
        }
      }
      FUN_14012e030(auStack_558);
      FUN_14012e030(auStack_520);
      FUN_14012c2d0(auStack_498);
    }
    FUN_140149ab0(auStack_570);
    FUN_14012aab0(auStack_570);
    FUN_14012aab0(auStack_4e8);
  }
  return lVar9;
}

