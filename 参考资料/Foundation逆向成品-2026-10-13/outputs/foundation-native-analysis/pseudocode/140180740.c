
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140180740(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  short *psVar9;
  char *pcVar10;
  short *psVar11;
  uint uVar12;
  
  uVar4 = (ulonglong)param_3;
  lVar1 = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((uint)((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x18) <=
      *(uint *)(lVar2 + lVar1)) {
    if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
      lVar3 = func_0x000142a8c93e(0x150);
      if (lVar3 == 0) {
        _DAT_143fcd428 = 0;
      }
      else {
        _DAT_143fcd428 = FUN_140127e80(lVar3);
      }
    }
    uVar4 = FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c77590,0x28d,
                          "ComCBinarySerializerReader::validate",
                          "bad attribute name id (%d), key count is %d",
                          *(undefined4 *)(lVar2 + lVar1),
                          (int)((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x18)
                         );
    goto LAB_140180b42;
  }
  uVar7 = *(uint *)(lVar2 + 4 + lVar1);
  if (uVar4 < (ulonglong)uVar7 + 0xc) {
    if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
      lVar3 = func_0x000142a8c93e(0x150);
      if (lVar3 == 0) {
        _DAT_143fcd428 = 0;
      }
      else {
        _DAT_143fcd428 = FUN_140127e80(lVar3);
      }
    }
    uVar4 = FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c77590,0x28e,
                          "ComCBinarySerializerReader::validate",
                          "next attribute sibbling id (%d) overflow on next data (%d)",
                          *(undefined4 *)(lVar2 + 4 + lVar1),param_3);
    goto LAB_140180b42;
  }
  if ((uVar7 != 0) && (uVar4 = (ulonglong)param_3, uVar7 < param_3)) {
    uVar4 = (ulonglong)uVar7;
  }
  uVar7 = *(uint *)(lVar2 + 8 + lVar1);
  uVar5 = (ulonglong)uVar7;
  uVar12 = (uint)uVar4;
  switch(uVar5) {
  case 0:
  case 2:
  case 4:
  case 6:
    uVar5 = 0x10;
    break;
  case 1:
  case 3:
  case 5:
  case 9:
  case 0xd:
    uVar5 = 0x14;
    break;
  case 7:
    pcVar10 = (char *)(lVar1 + 0xc + lVar2);
    if (*pcVar10 != '\0') {
      pcVar8 = pcVar10;
      do {
        pcVar8 = pcVar8 + 1;
        if ((char *)(uVar4 + lVar2) <= pcVar8) {
          uVar6 = FUN_140110f80();
          uVar4 = FUN_140159460(uVar6,0x143fcd508,2,&UNK_142c77590,0x2b0,
                                "ComCBinarySerializerReader::validate",&UNK_142c778d8,
                                (int)pcVar8 - (int)pcVar10,*(undefined4 *)(param_1 + 0x38));
          goto LAB_140180b42;
        }
      } while (*pcVar8 != '\0');
    }
    goto code_r0x00014018095e;
  case 8:
  case 0xb:
  case 0xf:
    uVar5 = 0x1c;
    break;
  case 10:
  case 0xe:
    uVar5 = 0x18;
    break;
  case 0xc:
    uVar5 = 0x24;
    break;
  case 0x10:
    if (lVar1 + 0x14U <= uVar4) {
      uVar5 = (ulonglong)(*(int *)(lVar2 + 0xc + lVar1) + 0x14);
      break;
    }
    uVar6 = FUN_140110f80();
    uVar4 = FUN_140159460(uVar6,0x143fcd508,2,&UNK_142c77590,0x2c5,
                          "ComCBinarySerializerReader::validate",&UNK_142c77948,(int)*param_2 + 0x14
                          ,uVar12);
    goto LAB_140180b42;
  case 0x11:
    psVar11 = (short *)(lVar1 + 0xc + lVar2);
    if (*psVar11 == 0) goto code_r0x00014018095e;
    psVar9 = psVar11;
    while (psVar9 = psVar9 + 1, psVar9 < (short *)(uVar4 + lVar2)) {
      if (*psVar9 == 0) {
        return CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
      }
    }
    uVar6 = FUN_140110f80();
    uVar4 = FUN_140159460(uVar6,0x143fcd508,2,&UNK_142c77590,0x2bd,
                          "ComCBinarySerializerReader::validate",&UNK_142c77910,
                          (int)((longlong)psVar9 - (longlong)psVar11 >> 1),
                          *(undefined4 *)(param_1 + 0x38));
    goto LAB_140180b42;
  default:
    uVar6 = FUN_140110f80();
    uVar4 = FUN_140159460(uVar6,0x143fcd508,2,&UNK_142c77590,0x2cc,
                          "ComCBinarySerializerReader::validate","Unknown attribute type: %d",
                          *(undefined4 *)(lVar2 + 8 + lVar1));
    goto LAB_140180b42;
  }
  uVar7 = (int)lVar1 + (int)uVar5;
  if (uVar12 < uVar7) {
    uVar6 = FUN_140110f80();
    uVar4 = FUN_140159460(uVar6,0x143fcd508,2,&UNK_142c77590,0x2d1,
                          "ComCBinarySerializerReader::validate",&UNK_142c779a8,uVar7,uVar12);
LAB_140180b42:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
code_r0x00014018095e:
    uVar4 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  return uVar4;
}

