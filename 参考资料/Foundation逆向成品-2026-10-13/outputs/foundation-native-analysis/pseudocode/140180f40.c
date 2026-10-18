
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140180f40(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  undefined1 auStackX_20 [8];
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  (**(code **)(*param_1 + 0x80))(param_1,&lStackX_18);
  while( true ) {
    if (lStackX_18 == 0) {
      return 1;
    }
    uVar11 = *(uint *)(param_1 + 7);
    puVar7 = (uint *)(param_1[6] + lStackX_18);
    uVar10 = puVar7[1];
    uVar6 = uVar11;
    if ((uVar10 != 0) && (uVar10 < uVar11)) {
      uVar6 = uVar10;
    }
    uVar5 = (ulonglong)uVar6;
    uVar1 = puVar7[2];
    if ((uVar1 != 0) && (uVar1 < uVar6)) {
      uVar5 = (ulonglong)uVar1;
    }
    if ((uint)((param_1[2] - param_1[1]) / 0x18) <= *puVar7) break;
    if ((ulonglong)uVar11 < (ulonglong)uVar10 + 0x10) {
      if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
        lStackX_8 = func_0x000142a8c93e(0x150);
        if (lStackX_8 == 0) {
          _DAT_143fcd428 = 0;
        }
        else {
          _DAT_143fcd428 = FUN_140127e80(lStackX_8);
        }
      }
      uVar10 = puVar7[1];
      pcVar9 = "next node sibbling id (%d) overflow on next data (%d)";
      uVar8 = 0x271;
      lVar4 = _DAT_143fcd428;
      goto LAB_140181283;
    }
    if ((ulonglong)uVar6 < (ulonglong)uVar1 + 0x10) {
      lVar4 = FUN_140110f80();
      uVar10 = puVar7[2];
      pcVar9 = "first child id (%d) overflow on next data (%d)";
      uVar8 = 0x272;
      uVar11 = uVar6;
      goto LAB_140181283;
    }
    if (uVar5 < (ulonglong)puVar7[3] + 0xc) {
      lVar4 = FUN_140110f80();
      uVar10 = puVar7[3];
      pcVar9 = "first attribute id (%d) overflow on next data (%d)";
      uVar8 = 0x273;
      uVar11 = (uint)uVar5;
      goto LAB_140181283;
    }
    (**(code **)(*param_1 + 0x70))(param_1,&lStackX_8);
    while (lStackX_8 != 0) {
      cVar2 = FUN_140180740(param_1,&lStackX_8,uVar5);
      if (cVar2 == '\0') {
        return 0;
      }
      plVar3 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,auStackX_20,lStackX_8);
      lStackX_8 = *plVar3;
    }
    (**(code **)(*param_1 + 0x90))(param_1,&lStackX_10,lStackX_18);
    while (lStackX_10 != 0) {
      cVar2 = FUN_140180bb0(param_1,&lStackX_10,uVar6);
      if (cVar2 == '\0') {
        return 0;
      }
      plVar3 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,auStack_48,lStackX_10);
      lStackX_10 = *plVar3;
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,auStack_40,lStackX_18);
    lStackX_18 = *plVar3;
  }
  if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
    lStackX_8 = func_0x000142a8c93e(0x150);
    if (lStackX_8 == 0) {
      _DAT_143fcd428 = 0;
    }
    else {
      _DAT_143fcd428 = FUN_140127e80(lStackX_8);
    }
  }
  uVar11 = (uint)((param_1[2] - param_1[1]) / 0x18);
  uVar10 = *puVar7;
  pcVar9 = "bad node name id (%d), key count is %d";
  uVar8 = 0x270;
  lVar4 = _DAT_143fcd428;
LAB_140181283:
  FUN_140159460(lVar4,0x143fcd508,2,&UNK_142c77590,uVar8,"ComCBinarySerializerReader::validate",
                pcVar9,uVar10,uVar11);
  return 0;
}

