
undefined8
FUN_140327dd0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 auStackX_20 [2];
  undefined4 auStack_38 [2];
  longlong alStack_30 [3];
  
  if (((int)param_4[0xb] == 0) && (lVar1 = param_4[10], lVar1 != 0)) {
    lVar5 = func_0x000140113af0();
    if (lVar1 == lVar5) {
LAB_140327e31:
      plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
      (**(code **)(*plVar2 + 0x60))(plVar2,alStack_30,param_6,0x143fd1960,4);
      uVar7 = 1;
      auStackX_20[0] = 0;
      if (alStack_30[0] == 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x60);
        uVar6 = FUN_14014ee10(param_4 + 1);
        FUN_140159460(uVar3,0x143fcd508,1,&UNK_142cb8550,0x1a,"GamCFloatPropertySerializer::read",
                      "missing value for property \'%s\'",uVar6);
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
        cVar4 = (**(code **)(*plVar2 + 0xe0))(plVar2,alStack_30[0],auStack_38);
        auStackX_20[0] = 0;
        if (cVar4 != '\0') {
          auStackX_20[0] = auStack_38[0];
        }
        uVar7 = 2;
      }
      (**(code **)(*param_4 + 0x80))(param_4,param_3,auStackX_20);
      return uVar7;
    }
    for (lVar1 = *(longlong *)(lVar1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if (lVar1 == lVar5) goto LAB_140327e31;
    }
  }
  return 0;
}

