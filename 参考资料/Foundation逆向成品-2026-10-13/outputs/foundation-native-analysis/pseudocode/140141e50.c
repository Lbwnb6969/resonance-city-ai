
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140141e50(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 uStack_88;
  uint uStack_80;
  longlong lStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar7 = (ulonglong)param_3;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = (int)param_4[1] - (int)*param_4;
    FUN_14016c200(param_4,uVar2 + 4);
    *(uint *)((ulonglong)uVar2 + *param_4) = param_3;
    if (param_3 == 0) {
      return 1;
    }
    uVar2 = (int)param_4[1] - (int)*param_4;
    FUN_14016c200(param_4,uVar2 + param_3);
    func_0x000142a93cdc((ulonglong)uVar2 + *param_4,param_2,uVar7);
    return 1;
  }
  lVar3 = func_0x000142a8c944(uVar7);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_88 = param_2;
  uStack_80 = param_3;
  lStack_78 = lVar3;
  uStack_70 = param_3;
  iVar1 = FUN_141eda4a0(&uStack_88,1,"1.3.1",0x58);
  lVar4 = lVar3;
  if (-1 < iVar1) {
    do {
      iVar1 = FUN_141ed9680(&uStack_88,4);
      lVar4 = lVar3;
      if (iVar1 < 0) goto LAB_140141f87;
      bVar8 = uStack_70 == 0;
      if (uStack_70 == 0) {
        lVar4 = func_0x000142a8c944(uStack_6c + uVar7);
        func_0x000142a93cdc(lVar4,lVar3,uStack_6c);
        lStack_78 = (ulonglong)uStack_6c + lVar4;
        uStack_70 = param_3;
        if (lVar3 != 0) {
          func_0x000142a8c94a(lVar3);
        }
      }
      lVar3 = lVar4;
    } while (bVar8);
    iVar1 = FUN_141eda100(&uStack_88);
    uVar7 = (ulonglong)uStack_6c;
    if (-1 < iVar1) {
      iVar1 = 0;
      goto LAB_140141f8e;
    }
  }
LAB_140141f87:
  iVar1 = func_0x000140157cc0(iVar1);
LAB_140141f8e:
  *(int *)(param_5 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (int)param_4[1] - (int)*param_4;
    FUN_14016c200(param_4,uVar2 + 4);
    *(int *)((ulonglong)uVar2 + *param_4) = (int)uVar7;
    if (uVar7 != 0) {
      uVar2 = (int)param_4[1] - (int)*param_4;
      FUN_14016c200(param_4,uVar2 + 4);
      *(uint *)((ulonglong)uVar2 + *param_4) = param_3;
      uVar2 = (int)param_4[1] - (int)*param_4;
      FUN_14016c200(param_4,uVar2 + (int)uVar7);
      func_0x000142a93cdc((ulonglong)uVar2 + *param_4,lVar4,uVar7);
    }
    if (lVar4 != 0) {
      func_0x000142a8c94a(lVar4);
    }
    return 1;
  }
  lVar3 = _DAT_143fcd428;
  if (((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) &&
     (lVar5 = func_0x000142a8c93e(0x150), lVar3 = 0, lVar5 != 0)) {
    lVar3 = FUN_140127e80(lVar5);
  }
  _DAT_143fcd428 = lVar3;
  switch(*(undefined4 *)(param_5 + 4)) {
  case 0:
    pcVar6 = "OK";
    break;
  case 1:
    pcVar6 = "ERRNO";
    break;
  case 2:
    pcVar6 = "STREAM_ERROR";
    break;
  case 3:
    pcVar6 = "DATA_ERROR";
    break;
  case 4:
    pcVar6 = "MEM_ERROR";
    break;
  case 5:
    pcVar6 = "BUF_ERROR";
    break;
  case 6:
    pcVar6 = "VERSION_ERROR";
    break;
  default:
    pcVar6 = "UNKNOWN";
  }
  FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c77d30,0x20b,
                "ComCBinarySerializerWriter::appendSerializedDataBuffer",
                "Serialize compression failed: %s",pcVar6);
  if (lVar4 != 0) {
    func_0x000142a8c94a(lVar4);
  }
  return 0;
}

