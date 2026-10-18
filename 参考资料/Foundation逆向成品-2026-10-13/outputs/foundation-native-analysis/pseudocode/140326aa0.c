
undefined8
FUN_140326aa0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lStackX_20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [32];
  
  if (((int)param_4[0xb] == 0) && (lVar1 = param_4[10], lVar1 != 0)) {
    lVar5 = func_0x000140113b20();
    if (lVar1 == lVar5) {
LAB_140326b09:
      plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
      (**(code **)(*plVar2 + 0x60))(plVar2,&lStackX_20,param_6,0x143fd1960,0x11);
      func_0x0001401237e0(auStack_38);
      uVar7 = 1;
      if (lStackX_20 == 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x60);
        uVar6 = FUN_14014ee10(param_4 + 1);
        FUN_140159460(uVar3,0x143fcd508,1,&UNK_142cb92f0,0xbc,
                      "GamCPrimitivePropertySerializer<class ComCGenericString<wchar_t> >::read",
                      "missing value for property \'%s\'",uVar6);
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
        func_0x0001401237e0(auStack_68);
        cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2,lStackX_20,auStack_68);
        if (cVar4 == '\0') {
          func_0x000140123260(auStack_50,0x143b00248);
        }
        else {
          func_0x000140123230(auStack_50,auStack_68);
        }
        FUN_14012aab0(auStack_68);
        FUN_14012e6f0(auStack_38,auStack_50);
        FUN_14012aab0(auStack_50);
        uVar7 = 2;
      }
      (**(code **)(*param_4 + 0x80))(param_4,param_3,auStack_38);
      FUN_14012aab0(auStack_38);
      return uVar7;
    }
    for (lVar1 = *(longlong *)(lVar1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if (lVar1 == lVar5) goto LAB_140326b09;
    }
  }
  return 0;
}

