
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401404e0(uint *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(char *)((longlong)param_1 + 0x19) == '\0') {
    *(ulonglong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + param_3;
    if (param_3 < 0x40) {
      func_0x000142a93ce8((undefined1 *)(param_3 + param_2),0,0x40 - param_3);
      if ((char)param_1[6] == '\0') {
        *(undefined1 *)(param_3 + param_2) = 0x80;
        param_3 = param_3 + 1;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      if (param_3 < 0x39) {
        *(longlong *)(param_2 + 0x38) = *(longlong *)(param_1 + 4) << 3;
        *(undefined1 *)((longlong)param_1 + 0x19) = 1;
      }
    }
    uVar6 = *param_1;
    uVar9 = param_1[2];
    uVar8 = param_1[3];
    uVar1 = 0;
    lVar3 = 0;
    uVar10 = param_1[1];
    do {
      if (uVar1 < 0x10) {
        uVar5 = ~uVar10 & uVar8 | uVar9 & uVar10;
        uVar4 = uVar1;
      }
      else {
        if (uVar1 < 0x20) {
          uVar5 = ~uVar8 & uVar9 | uVar8 & uVar10;
          uVar4 = uVar1 * 5 + 1;
        }
        else if (uVar1 < 0x30) {
          uVar5 = uVar8 ^ uVar9 ^ uVar10;
          uVar4 = uVar1 * 3 + 5;
        }
        else {
          uVar5 = (~uVar8 | uVar10) ^ uVar9;
          uVar4 = uVar1 * 7;
        }
        uVar4 = uVar4 & 0xf;
      }
      uVar6 = uVar5 + *(int *)(param_2 + (ulonglong)uVar4 * 4) + *(int *)(&UNK_142c76ac0 + lVar3) +
              uVar6;
      uVar6 = uVar10 + (uVar6 << ((&UNK_142c769c0)[lVar3] & 0x1f) |
                       uVar6 >> 0x20 - ((&UNK_142c769c0)[lVar3] & 0x1f));
      uVar4 = uVar1 + 2;
      uVar5 = uVar1 + 1;
      if (uVar5 < 0x10) {
        uVar7 = ~uVar6 & uVar9 | uVar10 & uVar6;
      }
      else {
        if (uVar5 < 0x20) {
          uVar7 = ~uVar9 & uVar10 | uVar9 & uVar6;
          uVar5 = uVar1 * 5 + 6;
        }
        else if (uVar5 < 0x30) {
          uVar7 = uVar9 ^ uVar10 ^ uVar6;
          uVar5 = uVar1 * 3 - 8;
        }
        else {
          uVar7 = (~uVar9 | uVar6) ^ uVar10;
          uVar5 = (uVar1 + 1) * 7;
        }
        uVar5 = uVar5 & 0xf;
      }
      uVar8 = uVar7 + *(int *)(param_2 + (ulonglong)uVar5 * 4) + *(int *)(&UNK_142c76ac4 + lVar3) +
              uVar8;
      uVar8 = uVar6 + (uVar8 << ((&UNK_142c769c4)[lVar3] & 0x1f) |
                      uVar8 >> 0x20 - ((&UNK_142c769c4)[lVar3] & 0x1f));
      if (uVar4 < 0x10) {
        uVar5 = ~uVar8 & uVar10 | uVar6 & uVar8;
      }
      else {
        if (uVar4 < 0x20) {
          uVar5 = ~uVar10 & uVar6 | uVar10 & uVar8;
          uVar4 = (uVar1 - 1) * 5;
        }
        else if (uVar4 < 0x30) {
          uVar5 = uVar10 ^ uVar6 ^ uVar8;
          uVar4 = uVar1 * 3 - 5;
        }
        else {
          uVar5 = (~uVar10 | uVar8) ^ uVar6;
          uVar4 = uVar1 * 7 - 2;
        }
        uVar4 = uVar4 & 0xf;
      }
      uVar9 = uVar5 + *(int *)(param_2 + (ulonglong)uVar4 * 4) + *(int *)(&UNK_142c76ac8 + lVar3) +
              uVar9;
      uVar9 = uVar8 + (uVar9 << ((&UNK_142c769c8)[lVar3] & 0x1f) |
                      uVar9 >> 0x20 - ((&UNK_142c769c8)[lVar3] & 0x1f));
      uVar4 = uVar1 + 3;
      if (uVar4 < 0x10) {
        uVar5 = ~uVar9 & uVar6 | uVar8 & uVar9;
      }
      else {
        if (uVar4 < 0x20) {
          uVar5 = ~uVar6 & uVar8 | uVar6 & uVar9;
          uVar4 = uVar1 * 5;
        }
        else if (uVar4 < 0x30) {
          uVar5 = uVar6 ^ uVar8 ^ uVar9;
          uVar4 = uVar1 * 3 - 2;
        }
        else {
          uVar5 = (~uVar6 | uVar9) ^ uVar8;
          uVar4 = uVar1 * 7 + 5;
        }
        uVar4 = uVar4 & 0xf;
      }
      uVar10 = uVar5 + *(int *)(param_2 + (ulonglong)uVar4 * 4) + *(int *)(&UNK_142c76acc + lVar3) +
               uVar10;
      uVar10 = uVar9 + (uVar10 << ((&UNK_142c769cc)[lVar3] & 0x1f) |
                       uVar10 >> 0x20 - ((&UNK_142c769cc)[lVar3] & 0x1f));
      uVar1 = uVar1 + 4;
      lVar3 = lVar3 + 0x10;
    } while (uVar1 < 0x40);
    *param_1 = *param_1 + uVar6;
    param_1[1] = uVar10 + param_1[1];
    param_1[2] = param_1[2] + uVar9;
    param_1[3] = param_1[3] + uVar8;
  }
  else {
    lVar3 = _DAT_143fcd428;
    if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
      lVar2 = func_0x000142a8c93e(0x150);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_140127e80(lVar2);
      }
    }
    _DAT_143fcd428 = lVar3;
    FUN_140159460(_DAT_143fcd428,0x143fcd548,2,&UNK_142c79ed0,0x29,"Md5ChecksumProcessor::addChunk",
                  "End of content already reached, cannot add additional content");
  }
  return;
}

