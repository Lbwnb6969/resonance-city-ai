
undefined8
FUN_140326c40(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lStackX_20;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  if (((int)param_4[0xb] == 0) && (lVar1 = param_4[10], lVar1 != 0)) {
    lVar4 = func_0x000140113ba0();
    if (lVar1 == lVar4) {
LAB_140326ca1:
      plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
      (**(code **)(*plVar2 + 0x60))(plVar2,&lStackX_20,param_6,0x143fd1960,8);
      puVar5 = (undefined4 *)func_0x00014016cda0(auStack_28);
      uVar7 = 1;
      uStack_38 = *puVar5;
      uStack_34 = puVar5[1];
      uStack_30 = puVar5[2];
      uStack_2c = puVar5[3];
      if (lStackX_20 == 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x60);
        uVar6 = FUN_14014ee10(param_4 + 1);
        FUN_140159460(uVar3,0x143fcd508,1,&UNK_142cb92f0,0xbc,
                      "GamCPrimitivePropertySerializer<class ComCGuid>::read",
                      "missing value for property \'%s\'",uVar6);
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
        (**(code **)(*plVar2 + 0x110))(plVar2,lStackX_20,&uStack_38);
        uVar7 = 2;
      }
      (**(code **)(*param_4 + 0x80))(param_4,param_3,&uStack_38);
      return uVar7;
    }
    for (lVar1 = *(longlong *)(lVar1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if (lVar1 == lVar4) goto LAB_140326ca1;
    }
  }
  return 0;
}

