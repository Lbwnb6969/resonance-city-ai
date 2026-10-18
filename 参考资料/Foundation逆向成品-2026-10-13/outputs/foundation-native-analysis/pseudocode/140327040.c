
undefined8
FUN_140327040(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStackX_20 [8];
  undefined1 auStack_28 [8];
  longlong lStack_20;
  
  if (((int)param_4[0xb] == 0) && (lVar1 = param_4[10], lVar1 != 0)) {
    lVar5 = func_0x000140113bd0();
    if (lVar1 == lVar5) {
LAB_14032709e:
      plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
      (**(code **)(*plVar2 + 0x60))(plVar2,&lStack_20,param_6,0x143fd1960,6);
      uVar7 = 1;
      auStackX_20[0] = 0;
      if (lStack_20 == 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x60);
        uVar6 = FUN_14014ee10(param_4 + 1);
        FUN_140159460(uVar3,0x143fcd508,1,&UNK_142cb92f0,0xbc,
                      "GamCPrimitivePropertySerializer<bool>::read",
                      "missing value for property \'%s\'",uVar6);
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
        cVar4 = (**(code **)(*plVar2 + 0xf0))(plVar2,lStack_20,auStack_28);
        uVar7 = 2;
        auStackX_20[0] = 0;
        if (cVar4 != '\0') {
          auStackX_20[0] = auStack_28[0];
        }
      }
      (**(code **)(*param_4 + 0x80))(param_4,param_3,auStackX_20);
      return uVar7;
    }
    for (lVar1 = *(longlong *)(lVar1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if (lVar1 == lVar5) goto LAB_14032709e;
    }
  }
  return 0;
}

