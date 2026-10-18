
undefined8
FUN_1403279d0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fStackX_20;
  undefined4 uStackX_24;
  double dStack_38;
  longlong alStack_30 [3];
  
  if (((int)param_4[0xb] == 0) && (lVar1 = param_4[10], lVar1 != 0)) {
    lVar4 = func_0x000140113b00();
    if (lVar1 == lVar4) {
LAB_140327a31:
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
      (**(code **)(*plVar5 + 0x60))(plVar5,alStack_30,param_6,0x143fd1960,5);
      uVar7 = 2;
      dStack_38 = 0.0;
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
      if (alStack_30[0] == 0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x60))(plVar5,&fStackX_20,param_6,0x143fd1960,4)
        ;
        alStack_30[0] = *plVar5;
        if (alStack_30[0] == 0) {
          uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x60);
          uVar6 = FUN_14014ee10(param_4 + 1);
          uVar7 = 1;
          FUN_140159460(uVar2,0x143fcd508,1,&UNK_142cb82d0,0x26,"GamCDoublePropertySerializer::read"
                        ,"missing value for property \'%s\'",uVar6);
        }
        else {
          plVar5 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
          cVar3 = (**(code **)(*plVar5 + 0xe0))(plVar5,alStack_30[0],&fStackX_20);
          if (cVar3 == '\0') {
            dStack_38 = 0.0;
          }
          else {
            dStack_38 = (double)fStackX_20;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar5 + 0xe8))(plVar5,alStack_30[0],&fStackX_20);
        fVar8 = 0.0;
        uVar9 = 0;
        if (cVar3 != '\0') {
          fVar8 = fStackX_20;
          uVar9 = uStackX_24;
        }
        dStack_38 = (double)CONCAT44(uVar9,fVar8);
      }
      (**(code **)(*param_4 + 0x80))(param_4,param_3,&dStack_38);
      return uVar7;
    }
    for (lVar1 = *(longlong *)(lVar1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if (lVar1 == lVar4) goto LAB_140327a31;
    }
  }
  return 0;
}

