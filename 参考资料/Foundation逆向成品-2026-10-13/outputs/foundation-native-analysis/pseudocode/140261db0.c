
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140261db0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [64];
  
  uVar1 = FUN_140227270(auStack_d8);
  FUN_140130650(uVar1,auStack_a8,&UNK_142c97e78);
  FUN_14012aab0(auStack_d8);
  FUN_140123200(auStack_c0,auStack_a8);
  func_0x0001401423d0(auStack_c0,&lStackX_10);
  func_0x00014014a790(auStack_c0,&lStackX_18);
  if (lStackX_10 != lStackX_18) {
    do {
      lVar4 = lStackX_10;
      uVar1 = FUN_140130650(lStackX_10 + 8,auStack_90,&UNK_142c77230);
      FUN_140130320(uVar1,auStack_d8,lVar4 + 0x20);
      FUN_14012aab0(auStack_90);
      func_0x00014012a3e0(auStack_78,auStack_d8);
      FUN_14012aab0(auStack_d8);
      cVar5 = FUN_1402636e0(param_1,*(undefined8 *)(param_1 + 0x10),
                            *(undefined8 *)(_DAT_143fd77d0 + 0x120),auStack_78);
      if ((cVar5 != '\0') &&
         (iVar6 = FUN_1426ca9a0(*(undefined8 *)(param_1 + 0x10),0,0,0), iVar6 != 0)) {
        if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
          lStackX_20 = func_0x000142a8c93e(0x150);
          if (lStackX_20 == 0) {
            _DAT_143fcd428 = 0;
          }
          else {
            _DAT_143fcd428 = FUN_140127e80(lStackX_20);
          }
        }
        lVar3 = _DAT_143fcd428;
        uVar1 = FUN_1426cb510(*(undefined8 *)(param_1 + 0x10),0xffffffff,0);
        uVar2 = FUN_14014ef90(lVar4 + 0x20);
        FUN_140159350(lVar3,0x143fd5f78,2,&UNK_142c97070,0x54c,
                      "GamCLuaManager::initDebuggingScripts",&UNK_142c97e88,uVar2,uVar1);
        FUN_1426cb370(*(undefined8 *)(param_1 + 0x10),0xfffffffe);
      }
      FUN_14012e030(auStack_78);
      lStackX_10 = lStackX_10 + 0x48;
    } while (lStackX_10 != lStackX_18);
  }
  func_0x00014012a810(auStack_c0);
  FUN_14012aab0(auStack_a8);
  return;
}

