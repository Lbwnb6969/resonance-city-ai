
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140180bb0(longlong *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lStackX_8;
  undefined1 auStackX_10 [8];
  
  puVar8 = (uint *)(param_1[6] + *param_2);
  uVar7 = (ulonglong)param_3;
  uVar1 = puVar8[1];
  if ((uVar1 != 0) && (uVar7 = (ulonglong)param_3, uVar1 < param_3)) {
    uVar7 = (ulonglong)uVar1;
  }
  uVar2 = puVar8[2];
  uVar6 = uVar7;
  if ((uVar2 != 0) && (uVar2 < (uint)uVar7)) {
    uVar6 = (ulonglong)uVar2;
  }
  if (*puVar8 < (uint)((param_1[2] - param_1[1]) / 0x18)) {
    if ((ulonglong)param_3 < (ulonglong)uVar1 + 0x10) {
      if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
        lStackX_8 = func_0x000142a8c93e(0x150);
        if (lStackX_8 == 0) {
          _DAT_143fcd428 = 0;
        }
        else {
          _DAT_143fcd428 = FUN_140127e80(lStackX_8);
        }
      }
      FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c77590,0x271,
                    "ComCBinarySerializerReader::validate",
                    "next node sibbling id (%d) overflow on next data (%d)",puVar8[1],param_3);
      uVar4 = 0;
    }
    else if (uVar7 < (ulonglong)uVar2 + 0x10) {
      uVar4 = FUN_140110f80();
      FUN_140159460(uVar4,0x143fcd508,2,&UNK_142c77590,0x272,"ComCBinarySerializerReader::validate",
                    "first child id (%d) overflow on next data (%d)",puVar8[2],(uint)uVar7);
      uVar4 = 0;
    }
    else if (uVar6 < (ulonglong)puVar8[3] + 0xc) {
      uVar4 = FUN_140110f80();
      FUN_140159460(uVar4,0x143fcd508,2,&UNK_142c77590,0x273,"ComCBinarySerializerReader::validate",
                    "first attribute id (%d) overflow on next data (%d)",puVar8[3],(int)uVar6);
      uVar4 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x70))(param_1,&lStackX_8,*param_2);
      while (lStackX_8 != 0) {
        cVar3 = FUN_140180740(param_1,&lStackX_8,uVar6);
        if (cVar3 == '\0') goto LAB_140180cd2;
        plVar5 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,auStackX_10,lStackX_8);
        lStackX_8 = *plVar5;
      }
      (**(code **)(*param_1 + 0x90))(param_1,&lStackX_8,*param_2);
      while (lStackX_8 != 0) {
        cVar3 = FUN_140180bb0(param_1,&lStackX_8,uVar7);
        if (cVar3 == '\0') goto LAB_140180cd2;
        plVar5 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,auStackX_10,lStackX_8);
        lStackX_8 = *plVar5;
      }
      uVar4 = 1;
    }
  }
  else {
    if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
      lStackX_8 = func_0x000142a8c93e(0x150);
      if (lStackX_8 == 0) {
        _DAT_143fcd428 = 0;
      }
      else {
        _DAT_143fcd428 = FUN_140127e80(lStackX_8);
      }
    }
    FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c77590,0x270,
                  "ComCBinarySerializerReader::validate","bad node name id (%d), key count is %d",
                  *puVar8,(int)((param_1[2] - param_1[1]) / 0x18));
LAB_140180cd2:
    uVar4 = 0;
  }
  return uVar4;
}

