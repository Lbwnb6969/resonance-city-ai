
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140271d90(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [56];
  
  uVar5 = 0;
  iVar4 = func_0x0001426ca5a0();
  FUN_1426c9a50(param_1,1);
  FUN_1426c9a50(param_1,2);
  FUN_1426c9c00(param_1,1,7);
  FUN_1426c9c00(param_1,2,4);
  plVar6 = (longlong *)FUN_1426cb680(param_1,1);
  lVar1 = *plVar6;
  FUN_140242ca0(auStack_98,param_1,2);
  func_0x0001426caf60(param_1,2);
  lVar2 = _DAT_143fd5f70;
  uVar7 = FUN_140130650(*(longlong *)(_DAT_143fd5f70 + 0x30) + 0x78,auStack_68,&UNK_142c77230);
  uVar7 = FUN_140130320(uVar7,auStack_80,auStack_98);
  uVar7 = func_0x00014012a3e0(auStack_50,uVar7);
  uVar8 = func_0x0001401a36f0(*(undefined8 *)(_DAT_143fd5f70 + 0x30));
  cVar3 = FUN_1402636e0(lVar2,param_1,uVar8,uVar7);
  FUN_14012e030(auStack_50);
  FUN_14012aab0(auStack_80);
  FUN_14012aab0(auStack_68);
  if (cVar3 == '\0') {
    FUN_1426cb370(param_1,0);
    *(undefined1 *)(lVar1 + 0xd9) = 0;
    uVar7 = func_0x0001401a36f0(lVar1);
    uVar8 = FUN_14014ef90(auStack_98);
    FUN_140159350(uVar7,0x143fd5f78,2,&UNK_142c97070,0x142,"GamCLuaManager::s_modDoFile",
                  &UNK_142c97588,uVar8);
  }
  else {
    func_0x0001426ca620(param_1,1);
    FUN_1426caa60(param_1,FUN_140270070,0);
    func_0x0001426ca620(param_1,1);
    FUN_1426cae00(param_1,0xffffd8f0,*(undefined4 *)(lVar1 + 0x35c));
    FUN_1426cb090(param_1,2);
    iVar4 = FUN_1426ca9a0(param_1,iVar4 + -1,0xffffffff,1);
    func_0x0001426caf60(param_1,1);
    if (iVar4 == 0) {
      uVar5 = func_0x0001426ca5a0(param_1);
    }
    else {
      *(undefined1 *)(lVar1 + 0xd9) = 0;
      uVar7 = func_0x0001401a36f0(lVar1);
      uVar8 = FUN_1426cb510(param_1,0xffffffff,0);
      FUN_140159460(uVar7,0x143fd5f78,2,&UNK_142c97070,0x136,"GamCLuaManager::s_modDoFile",
                    "Lua error: %s",uVar8);
      FUN_1426cb370(param_1,0xfffffffe);
    }
  }
  FUN_14012aab0(auStack_98);
  return uVar5;
}

