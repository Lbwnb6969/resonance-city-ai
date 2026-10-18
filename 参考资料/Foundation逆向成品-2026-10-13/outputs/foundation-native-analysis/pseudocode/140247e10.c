
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140247e10(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  longlong unaff_GS_OFFSET;
  char *pcStack_508;
  code *pcStack_500;
  longlong lStack_4e8;
  longlong lStack_4e0;
  longlong lStack_4d8;
  undefined1 auStack_4d0 [24];
  longlong lStack_4b8;
  longlong lStack_4b0;
  longlong lStack_4a8;
  undefined1 auStack_4a0 [24];
  undefined1 uStack_488;
  longlong lStack_480;
  longlong lStack_478;
  char acStack_468 [24];
  undefined1 auStack_450 [24];
  char acStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [544];
  
  puVar9 = (undefined8 *)0x0;
  FUN_14012a0a0(param_1,"LUA Manager",0);
  *param_1 = &UNK_142c96418;
  param_1[2] = 0;
  iVar3 = rand();
  param_1[3] = (longlong)iVar3;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  func_0x0001401237e0(param_1 + 7);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar4 = func_0x000142a8c93e(0x20);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  param_1[0xb] = lVar4;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 7;
  param_1[0x11] = 8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  FUN_140137300(param_1 + 0xd,0x10,param_1[0xb]);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar6 = param_1 + 0x15;
  *puVar6 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar5 = _time64(0);
  param_1[3] = uVar5;
  lVar4 = FUN_1426cfc30();
  param_1[2] = lVar4;
  if (lVar4 == 0) {
    FUN_140142470(acStack_438,0x400,"fail to create LUA VM");
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 0x4d0) < _DAT_143fd6280) && (FUN_142a8cb38(&DAT_143fd6280), _DAT_143fd6280 == -1)
       ) {
      FUN_140126510(&DAT_143fd6250,0,&UNK_142c97070,0x5d,"GamCLuaManager::GamCLuaManager",
                    acStack_438);
      FUN_142a8ce10(&UNK_142be0fd0);
      FUN_142a8cacc(&DAT_143fd6280);
    }
    LOCK();
    _DAT_143fd6254 = _DAT_143fd6254 + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143fd6250 != '\0')) {
      iVar3 = FUN_1401758e0(_DAT_143fd6278,&UNK_142c97070,"GamCLuaManager::GamCLuaManager",
                            acStack_438,&DAT_143fd6250);
      if (iVar3 == 3) {
        exit(0);
        pcVar2 = (code *)swi(3);
        puVar6 = (undefined8 *)(*pcVar2)();
        return puVar6;
      }
      if (iVar3 == 4) {
        DebugBreak();
      }
    }
    FUN_140159190(_DAT_143fd6278,&UNK_142c97070,0x5d,"GamCLuaManager::GamCLuaManager",acStack_438);
  }
  FUN_1426d2480(param_1[2]);
  FUN_1426ca120(param_1[2],0,1);
  FUN_1426caa60(param_1[2],FUN_140270430,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"createMod");
  FUN_1426caa60(param_1[2],FUN_1402703c0,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"createData");
  FUN_1426caa60(param_1[2],FUN_140270350,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"createAsset");
  FUN_1426caa60(param_1[2],FUN_140270720,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"findAsset");
  FUN_1426caa60(param_1[2],FUN_140270b70,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"findGameObject");
  FUN_1426caa60(param_1[2],FUN_140271080,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"isDlcEnabled");
  FUN_1426caa60(param_1[2],FUN_1402711d0,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"isModEnabled");
  FUN_1426caa60(param_1[2],FUN_140271320,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"isModLoaded");
  FUN_1426caa60(param_1[2],FUN_140270cc0,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"getModVersion");
  FUN_1426caa60(param_1[2],FUN_140270c10,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"getGameVersion");
  FUN_1426caa60(param_1[2],FUN_140271470,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"localize");
  FUN_1426cb110(param_1[2],0xffffd8ee,"foundation");
  FUN_1426ca120(param_1[2],0,0);
  FUN_1426caa60(param_1[2],FUN_140264300,0);
  FUN_1426cb110(param_1[2],0xfffffffe,&UNK_142c971d4);
  FUN_1426cb110(param_1[2],0xffffd8ee,"version");
  FUN_1426ca120(param_1[2],0,1);
  FUN_1426caa60(param_1[2],FUN_1401f6f00,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"fromNumber");
  FUN_1426caa60(param_1[2],FUN_1401f7210,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"toNumber");
  FUN_1426caa60(param_1[2],FUN_1401f7340,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"toString");
  FUN_1426cb110(param_1[2],0xffffd8ee,&UNK_142c8f8a4);
  FUN_1426ca120(param_1[2],0,1);
  FUN_1426caa60(param_1[2],FUN_1401f7480,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"register");
  FUN_1426caa60(param_1[2],FUN_1401f75e0,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"unregister");
  FUN_1426caa60(param_1[2],FUN_1401f6e10,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"clear");
  FUN_1426cb110(param_1[2],0xffffd8ee,"event");
  FUN_1426caa60(param_1[2],FUN_140264240,0);
  FUN_1426cb110(param_1[2],0xffffd8ee,"tostring");
  FUN_1426ca3f0(param_1[2],0xffffd8ee,"table");
  FUN_1426caa60(param_1[2],FUN_140263f10,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"_HURRICANE_TABLE_INSERT");
  FUN_1426caa60(param_1[2],FUN_140264090,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"_HURRICANE_TABLE_REMOVE");
  FUN_1426cb370(param_1[2],0xfffffffe);
  FUN_1426ca3f0(param_1[2],0xffffd8ee,&UNK_142c97280);
  FUN_1426caa60(param_1[2],FUN_140273760,0);
  FUN_1426cb110(param_1[2],0xfffffffe,"random");
  FUN_1426cb370(param_1[2],0xfffffffe);
  lVar4 = func_0x000142a8c93e(0x20);
  puVar7 = puVar9;
  if (lVar4 != 0) {
    uVar5 = FUN_140227270(&lStack_480);
    uVar5 = FUN_140130650(uVar5,auStack_4a0,&UNK_142c97290);
    puVar9 = (undefined8 *)0x3;
    puVar7 = (undefined8 *)FUN_14018b050(lVar4,uVar5);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != puVar7) {
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[4] = puVar7;
  }
  if (((ulonglong)puVar9 & 2) != 0) {
    puVar9 = (undefined8 *)(ulonglong)((uint)puVar9 & 0xfffffffd);
    FUN_14012aab0(auStack_4a0);
  }
  if (((ulonglong)puVar9 & 1) != 0) {
    FUN_14012aab0(&lStack_480);
  }
  FUN_1401236c0(acStack_438,"_VERSION");
  FUN_1401236c0(auStack_420,"assert");
  FUN_1401236c0(auStack_408,"error");
  FUN_1401236c0(auStack_3f0,"getmetatable");
  FUN_1401236c0(auStack_3d8,"ipairs");
  FUN_1401236c0(auStack_3c0,&UNK_142c972d8);
  FUN_1401236c0(auStack_3a8,"pairs");
  FUN_1401236c0(auStack_390,"pcall");
  FUN_1401236c0(auStack_378,"print");
  FUN_1401236c0(auStack_360,"select");
  FUN_1401236c0(auStack_348,"setmetatable");
  FUN_1401236c0(auStack_330,"tonumber");
  FUN_1401236c0(auStack_318,"tostring");
  FUN_1401236c0(auStack_300,&UNK_142c84ce8);
  FUN_1401236c0(auStack_2e8,"unpack");
  FUN_1401236c0(auStack_2d0,&UNK_142c9731c);
  FUN_1401236c0(auStack_2b8,&UNK_142c8f8a4);
  FUN_1401236c0(auStack_2a0,"event");
  FUN_1401236c0(auStack_288,"version");
  FUN_1401236c0(auStack_270,"foundation");
  pcStack_500 = (code *)auStack_258;
  pcStack_508 = acStack_438;
  FUN_140245cd0(&lStack_480,&pcStack_508);
  FUN_142a8d5d8(acStack_438,0x18,0x14,FUN_14012aab0);
  for (lVar4 = lStack_480; lVar4 != lStack_478; lVar4 = lVar4 + 0x18) {
    func_0x000140123260(auStack_4a0,lVar4);
    uStack_488 = 0;
    lVar8 = param_1[0x13];
    if (lVar8 == param_1[0x14]) {
      FUN_14023dcd0(param_1 + 0x12,lVar8,auStack_4a0);
    }
    else {
      func_0x000140123230(lVar8,auStack_4a0);
      *(undefined1 *)(lVar8 + 0x18) = uStack_488;
      param_1[0x13] = param_1[0x13] + 0x20;
    }
    FUN_14012aab0(auStack_4a0);
  }
  FUN_1401236c0(auStack_4a0,&UNK_142c97320);
  lVar8 = FUN_140109d30(0x18);
  lVar4 = lVar8 + 0x18;
  lStack_4e8 = lVar8;
  lStack_4d8 = lVar4;
  func_0x000140123260(lVar8,auStack_4a0);
  lStack_4e0 = lVar4;
  FUN_1401236c0(&pcStack_508,"string");
  func_0x000140123230(auStack_4d0,&pcStack_508);
  lStack_4d8 = 0;
  lStack_4e0 = 0;
  lStack_4e8 = 0;
  lStack_4b8 = lVar8;
  lStack_4b0 = lVar4;
  lStack_4a8 = lVar4;
  FUN_14024ebe0(puVar6,auStack_4d0);
  lVar8 = lStack_4b0;
  lVar4 = lStack_4b8;
  if (lStack_4b8 != 0) {
    for (; lVar4 != lVar8; lVar4 = lVar4 + 0x18) {
      FUN_14012aab0(lVar4);
    }
    lVar4 = lStack_4b8;
    if ((0xfff < (ulonglong)(((lStack_4a8 - lStack_4b8) / 0x18) * 0x18)) &&
       (lVar4 = *(longlong *)(lStack_4b8 + -8), 0x1f < (lStack_4b8 - lVar4) - 8U)) {
      _invoke_watson(0,0,0,0,0);
      pcVar2 = (code *)swi(3);
      puVar6 = (undefined8 *)(*pcVar2)();
      return puVar6;
    }
    func_0x000142a8cbe0(lVar4);
    lStack_4b8 = 0;
    lStack_4b0 = 0;
    lStack_4a8 = 0;
  }
  FUN_14012aab0(auStack_4d0);
  FUN_14012aab0(&pcStack_508);
  FUN_142a8d5d8(auStack_4a0,0x18,1,FUN_14012aab0);
  FUN_1401236c0(acStack_468,"foreach");
  FUN_1401236c0(auStack_450,"foreachi");
  lVar8 = FUN_140109d30(0x30);
  pcVar10 = acStack_468;
  lVar4 = lVar8;
  lStack_4e8 = lVar8;
  lStack_4d8 = lVar8 + 0x30;
  do {
    func_0x000140123260(lVar4,pcVar10);
    lVar4 = lVar4 + 0x18;
    pcVar10 = pcVar10 + 0x18;
  } while (pcVar10 != acStack_438);
  lStack_4e0 = lVar4;
  FUN_1401236c0(auStack_4a0,"table");
  func_0x000140123230(auStack_4d0,auStack_4a0);
  lStack_4d8 = 0;
  lStack_4e0 = 0;
  lStack_4e8 = 0;
  lStack_4b8 = lVar8;
  lStack_4b0 = lVar4;
  lStack_4a8 = lVar8 + 0x30;
  FUN_14024ebe0(puVar6,auStack_4d0);
  lVar8 = lStack_4b0;
  lVar4 = lStack_4b8;
  if (lStack_4b8 != 0) {
    for (; lVar4 != lVar8; lVar4 = lVar4 + 0x18) {
      FUN_14012aab0(lVar4);
    }
    lVar4 = lStack_4b8;
    if ((0xfff < (ulonglong)(((lStack_4a8 - lStack_4b8) / 0x18) * 0x18)) &&
       (lVar4 = *(longlong *)(lStack_4b8 + -8), 0x1f < (lStack_4b8 - lVar4) - 8U)) {
      _invoke_watson(0,0,0,0,0);
      pcVar2 = (code *)swi(3);
      puVar6 = (undefined8 *)(*pcVar2)();
      return puVar6;
    }
    func_0x000142a8cbe0(lVar4);
    lStack_4b8 = 0;
    lStack_4b0 = 0;
    lStack_4a8 = 0;
  }
  FUN_14012aab0(auStack_4d0);
  FUN_14012aab0(auStack_4a0);
  FUN_142a8d5d8(acStack_468,0x18,2,FUN_14012aab0);
  FUN_1401236c0(&pcStack_508,"randomseed");
  lVar8 = FUN_140109d30(0x18);
  lVar4 = lVar8 + 0x18;
  lStack_4e8 = lVar8;
  lStack_4d8 = lVar4;
  func_0x000140123260(lVar8,&pcStack_508);
  lStack_4e0 = lVar4;
  FUN_1401236c0(auStack_4a0,&UNK_142c97280);
  func_0x000140123230(auStack_4d0,auStack_4a0);
  lStack_4d8 = 0;
  lStack_4e0 = 0;
  lStack_4e8 = 0;
  lStack_4b8 = lVar8;
  lStack_4b0 = lVar4;
  lStack_4a8 = lVar4;
  FUN_14024ebe0(puVar6,auStack_4d0);
  lVar8 = lStack_4b0;
  lVar4 = lStack_4b8;
  if (lStack_4b8 != 0) {
    for (; lVar4 != lVar8; lVar4 = lVar4 + 0x18) {
      FUN_14012aab0(lVar4);
    }
    lVar4 = lStack_4b8;
    if ((0xfff < (ulonglong)(((lStack_4a8 - lStack_4b8) / 0x18) * 0x18)) &&
       (lVar4 = *(longlong *)(lStack_4b8 + -8), 0x1f < (lStack_4b8 - lVar4) - 8U)) {
      _invoke_watson(0,0,0,0,0);
      pcVar2 = (code *)swi(3);
      puVar6 = (undefined8 *)(*pcVar2)();
      return puVar6;
    }
    func_0x000142a8cbe0(lVar4);
    lStack_4b8 = 0;
    lStack_4b0 = 0;
    lStack_4a8 = 0;
  }
  FUN_14012aab0(auStack_4d0);
  FUN_14012aab0(auStack_4a0);
  FUN_142a8d5d8(&pcStack_508,0x18,1,FUN_14012aab0);
  pcStack_508 = "register";
  pcStack_500 = FUN_1402730b0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerAsset";
  pcStack_500 = FUN_140273110;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "override";
  pcStack_500 = FUN_140272db0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "overrideAsset";
  pcStack_500 = FUN_140272e10;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerBehaviorTree";
  pcStack_500 = FUN_1402732b0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerBehaviorTreeNode";
  pcStack_500 = FUN_140273330;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerClass";
  pcStack_500 = FUN_1402733b0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerAssetId";
  pcStack_500 = FUN_140273190;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerPrefabChild";
  pcStack_500 = FUN_1402734c0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerPrefabComponent";
  pcStack_500 = FUN_140273550;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerAssetProcessor";
  pcStack_500 = FUN_140273220;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "registerEnumValue";
  pcStack_500 = FUN_140273430;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "configurePrefabFlagList";
  pcStack_500 = FUN_140271800;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "overrideTexture";
  pcStack_500 = FUN_140272e90;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "dofile";
  pcStack_500 = FUN_140271d90;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "log";
  pcStack_500 = FUN_140272190;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "logWarning";
  pcStack_500 = FUN_140272610;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "logError";
  pcStack_500 = FUN_1402723d0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "msgBox";
  pcStack_500 = FUN_140272ca0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "fileExists";
  pcStack_500 = FUN_140272050;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "directoryExists";
  pcStack_500 = FUN_140271c50;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "readFileAsString";
  pcStack_500 = FUN_140272f30;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "writeFileAsString";
  pcStack_500 = FUN_1402735e0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "createDirectory";
  pcStack_500 = FUN_140271890;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "moveFile";
  pcStack_500 = FUN_140272a90;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "deleteFile";
  pcStack_500 = FUN_140271b10;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  pcStack_508 = "deleteDirectory";
  pcStack_500 = FUN_1402719d0;
  FUN_140242730(param_1 + 10,&lStack_4e8,&pcStack_508);
  FUN_140261a30(param_1[2]);
  FUN_14013cd30(&lStack_480);
  return param_1;
}

