
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140270720(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_GS_OFFSET;
  undefined4 auStackX_10 [2];
  longlong alStackX_18 [2];
  undefined1 auStack_c78 [24];
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  undefined4 uStack_c58;
  undefined4 uStack_c54;
  undefined1 auStack_c50 [24];
  undefined1 auStack_c38 [1024];
  char acStack_838 [2048];
  
  FUN_1426cb370(param_1,1);
  acStack_838[0] = '\0';
  FUN_1426c9c00(param_1,1,4);
  uVar4 = FUN_1426cb510(param_1,1,0);
  FUN_1401236c0(auStack_c78,uVar4);
  FUN_1426cb370(param_1,0xfffffffe);
  uVar4 = func_0x0001402186c0();
  plVar5 = (longlong *)FUN_14020d7c0(uVar4,auStack_c78,0x143ff28e0);
  lVar9 = *plVar5;
  if (lVar9 == 0) {
    puVar6 = (undefined4 *)func_0x00014016cda0(auStack_c50);
    uStack_c60 = *puVar6;
    uStack_c5c = puVar6[1];
    uStack_c58 = puVar6[2];
    uStack_c54 = puVar6[3];
    cVar2 = FUN_140148030(auStack_c78,&uStack_c60);
    if (cVar2 != '\0') {
      uVar4 = func_0x0001402186c0();
      plVar5 = (longlong *)FUN_14020d660(uVar4,&uStack_c60);
      lVar9 = *plVar5;
      if (lVar9 != 0) goto LAB_140270812;
    }
    uVar4 = func_0x0001402186c0();
    plVar5 = (longlong *)FUN_14020d750(uVar4,auStack_c78);
    lVar9 = *plVar5;
    if (lVar9 == 0) goto LAB_140270b02;
  }
LAB_140270812:
  uVar4 = func_0x0001402186c0();
  lVar7 = FUN_1401a1a80(uVar4,lVar9 + 0x14);
  uVar10 = (ulonglong)__tls_index;
  if (lVar7 == 0) {
    FUN_140142470(auStack_c38,0x400,"Unexpected null pointer assigned to ComCNotNull");
    if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + uVar10 * 8) + 0x4d0) <
        _DAT_143fd6600) {
      FUN_142a8cb38(&DAT_143fd6600);
      if (_DAT_143fd6600 == -1) {
        FUN_140126510(&DAT_143fd65d0,0,&UNK_142c91190,0xb,
                      "ComCNotNull<class GamIAssetNode const >::ComCNotNull",auStack_c38);
        FUN_142a8ce10(&UNK_142be1230);
        FUN_142a8cacc(&DAT_143fd6600);
      }
    }
    LOCK();
    _DAT_143fd65d4 = _DAT_143fd65d4 + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143fd65d0 != '\0')) {
      iVar3 = FUN_1401758e0(_DAT_143fd65f8,&UNK_142c91190,
                            "ComCNotNull<class GamIAssetNode const >::ComCNotNull",auStack_c38,
                            &DAT_143fd65d0);
      if (iVar3 == 3) {
        exit(0);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      if (iVar3 == 4) {
        DebugBreak();
      }
    }
    FUN_140159190(_DAT_143fd65f8,&UNK_142c91190,0xb,
                  "ComCNotNull<class GamIAssetNode const >::ComCNotNull",auStack_c38);
    uRam0000000000000000 = 0x2a;
  }
  lVar7 = FUN_1401cd480(lVar7);
  if (lVar7 != 0) {
    uVar4 = FUN_1402b5050(0);
    plVar5 = (longlong *)FUN_1402af360(uVar4,lVar7 + 0xe8);
    if (*plVar5 == 0) {
      uVar4 = FUN_14014ee10(lVar7 + 0xe8);
      FUN_140142470(auStack_c38,0x400,
                    "Failed to check if extension for DLC %s is enabled, extension not found",uVar4)
      ;
      if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + uVar10 * 8) + 0x4d0) <
          _DAT_143fd62f0) {
        FUN_142a8cb38(&DAT_143fd62f0);
        if (_DAT_143fd62f0 == -1) {
          FUN_140126510(&DAT_143fd62c0,0,&UNK_142c97070,0x400,"GamCLuaManager::s_findAsset",
                        auStack_c38);
          FUN_142a8ce10(&UNK_142be11e0);
          FUN_142a8cacc(&DAT_143fd62f0);
        }
      }
      LOCK();
      _DAT_143fd62c4 = _DAT_143fd62c4 + 1;
      UNLOCK();
      if ((_DAT_143fcd430 != 0) && (DAT_143fd62c0 != '\0')) {
        iVar3 = FUN_1401758e0(_DAT_143fd62e8,&UNK_142c97070,"GamCLuaManager::s_findAsset",
                              auStack_c38,&DAT_143fd62c0);
        if (iVar3 == 3) {
          exit(0);
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        if (iVar3 == 4) {
          DebugBreak();
        }
      }
      FUN_140159190(_DAT_143fd62e8,&UNK_142c97070,0x400,"GamCLuaManager::s_findAsset",auStack_c38);
    }
    uVar4 = FUN_1402b5050(0);
    cVar2 = func_0x0001402b1130(uVar4,plVar5);
    if (cVar2 == '\0') {
      uVar4 = FUN_14014ee10(*plVar5 + 0x58);
      uVar8 = FUN_14014ee10(auStack_c78);
      uVar4 = FUN_14014e0f0(auStack_c50,
                            "Cannot find asset \'%s\', it is part of disabled DLC \'%s\'",uVar8,
                            uVar4);
      FUN_1401fd700(acStack_838,uVar4,0);
      FUN_14012aab0(auStack_c50);
    }
  }
LAB_140270b02:
  auStackX_10[0] = 0;
  alStackX_18[0] = lVar9;
  FUN_1401f3c40(param_1,alStackX_18,auStackX_10);
  FUN_14012aab0(auStack_c78);
  if (acStack_838[0] != '\0') {
    FUN_1426cc500(param_1,acStack_838);
  }
  return 1;
}

