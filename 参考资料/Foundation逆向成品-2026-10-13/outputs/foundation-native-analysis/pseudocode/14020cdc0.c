
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14020cdc0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  longlong unaff_GS_OFFSET;
  double dVar10;
  undefined4 auStackX_10 [2];
  longlong lStackX_18;
  longlong lStackX_20;
  undefined4 *in_stack_fffffffffffff6d8;
  undefined4 uVar11;
  undefined1 auStack_908 [8];
  undefined1 auStack_900 [56];
  undefined1 auStack_8c8 [24];
  undefined1 auStack_8b0 [72];
  undefined8 uStack_868;
  undefined1 auStack_838 [2048];
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffff6d8 >> 0x20);
  if (*(longlong *)(param_2 + 0xf0) == 0) {
    uVar5 = FUN_14020e3a0();
    uVar6 = FUN_14014ef90(param_2 + 0x80);
    FUN_140159350(uVar5,0x143fd1080,2,&UNK_142c8f240,CONCAT44(uVar11,0x56),
                  "GamCAssetLoader::finalizeLoadFile",&UNK_142c7ecf8,uVar6);
    return;
  }
  cVar3 = func_0x0001401cfae0(param_2,*(undefined8 *)(_DAT_143fd3ce0 + 0x4f8));
  plVar2 = _DAT_143fd1008;
  if (cVar3 == '\0') goto LAB_14020d222;
  iVar4 = *(int *)(param_2 + 0xa0);
  if ((iVar4 == 0) && (*(int *)(param_1 + 0x170) == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  lStackX_18 = 0;
  auStackX_10[0] = 0;
  lStackX_20 = _time64(0);
  if (iVar4 == 0) {
LAB_14020cf0f:
    if (lStackX_18 != 0) {
      func_0x000142a8c94a();
    }
    lStackX_18 = 0;
    auStackX_10[0] = 0;
    uVar5 = FUN_14012a320(auStack_900,param_2 + 0x98);
    uVar6 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffff6d8 >> 8),uVar8);
    cVar3 = FUN_1401cbf10(plVar2,uVar5,&lStackX_18,auStackX_10,uVar6);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_14012e030(auStack_900);
    if (cVar3 == '\0') goto LAB_14020cfb1;
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*plVar2 + 0x50);
      uVar5 = FUN_140150e80(auStack_908,param_2 + 0x98);
      (*pcVar1)(plVar2,0x143fd3d28,param_2 + 0x35,lStackX_18,CONCAT44(uVar11,auStackX_10[0]),uVar5);
      goto LAB_14020cfb1;
    }
LAB_14020cfb9:
    if (*(int *)(param_1 + 0x170) == 0) goto LAB_14020d0b7;
    if (*(int *)(param_1 + 0x170) == 1) {
      lStackX_20 = func_0x000142a8c93e(0x58);
      uVar5 = 0;
      if (lStackX_20 != 0) {
        uVar5 = FUN_140126a20(lStackX_20);
      }
      goto LAB_14020d0d6;
    }
    FUN_140142470(auStack_838,0x400,"Unknown serializer");
    uVar9 = (ulonglong)__tls_index;
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + uVar9 * 8) + 0x4d0) <
         _DAT_143fd44b0) && (FUN_142a8cb38(&DAT_143fd44b0), _DAT_143fd44b0 == -1)) {
      FUN_140126510(&DAT_143fd4480,0,&UNK_142c8f440,0x404,"GamCAssetManager::buildSerializer",
                    auStack_838);
      FUN_142a8ce10(&UNK_142be0360);
      FUN_142a8cacc(&DAT_143fd44b0);
    }
    LOCK();
    _DAT_143fd4484 = _DAT_143fd4484 + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143fd4480 != '\0')) {
      iVar4 = FUN_1401758e0(_DAT_143fd44a8,&UNK_142c8f440,"GamCAssetManager::buildSerializer",
                            auStack_838,&DAT_143fd4480);
      if (iVar4 == 3) {
        exit(0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (iVar4 == 4) {
        DebugBreak();
      }
    }
    FUN_140159190(_DAT_143fd44a8,&UNK_142c8f440,0x404,"GamCAssetManager::buildSerializer",
                  auStack_838);
    uVar5 = 0;
  }
  else {
    in_stack_fffffffffffff6d8 = auStackX_10;
    cVar3 = (**(code **)(*plVar2 + 0x40))
                      (plVar2,0x143fd3d28,param_2 + 0x35,&lStackX_18,in_stack_fffffffffffff6d8,
                       &lStackX_20);
    if (cVar3 == '\0') goto LAB_14020cf0f;
    puVar7 = (undefined8 *)FUN_140150e80(auStack_908,param_2 + 0x98);
    dVar10 = (double)_difftime64(lStackX_20,*puVar7);
    if (dVar10 != 0.0) goto LAB_14020cf0f;
LAB_14020cfb1:
    if (iVar4 == 0) goto LAB_14020cfb9;
LAB_14020d0b7:
    lStackX_20 = func_0x000142a8c93e(0x10);
    uVar5 = 0;
    if (lStackX_20 != 0) {
      uVar5 = FUN_140129d30(lStackX_20);
    }
LAB_14020d0d6:
    uVar9 = (ulonglong)__tls_index;
  }
  FUN_1403134d0(auStack_8c8,uVar5,1);
  uStack_868 = FUN_14020e3a0(param_2);
  FUN_14012ea60(auStack_8b0,param_2 + 0x98);
  cVar3 = FUN_1403140e0(auStack_8c8,lStackX_18,auStackX_10[0],*(undefined8 *)(param_2 + 0xf0),0);
  if (cVar3 == '\0') {
    uVar5 = FUN_14014ef90(param_2 + 0x80);
    FUN_1401424d0(auStack_838,0x400,&UNK_142c7ee28,uVar5);
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + uVar9 * 8) + 0x4d0) <
         _DAT_143fd4130) && (FUN_142a8cb38(&DAT_143fd4130), _DAT_143fd4130 == -1)) {
      FUN_140126470(&DAT_143fd4100,0,&UNK_142c8f240,0x6d,"GamCAssetLoader::finalizeLoadFile",
                    auStack_838);
      FUN_142a8ce10(&UNK_142be0380);
      FUN_142a8cacc(&DAT_143fd4130);
    }
    LOCK();
    _DAT_143fd4104 = _DAT_143fd4104 + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143fd4100 != '\0')) {
      iVar4 = FUN_1401757d0(_DAT_143fd4128,&UNK_142c8f240,"GamCAssetLoader::finalizeLoadFile",
                            auStack_838,&DAT_143fd4100);
      if (iVar4 == 3) {
        exit(0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (iVar4 == 4) {
        DebugBreak();
      }
    }
    FUN_140159030(_DAT_143fd4128,&UNK_142c8f240,0x6d,"GamCAssetLoader::finalizeLoadFile",auStack_838
                 );
  }
  func_0x000140313650(auStack_8c8);
  if (lStackX_18 != 0) {
    func_0x000142a8c94a();
  }
LAB_14020d222:
  (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x60))();
  return;
}

