// VA 0x140404090, PDB extent 818 bytes
// serde_json::de::Deserializer::parse_number<serde_json::read::StrRead>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::Deserializer::parse_number<serde_json::read::StrRead>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 818 */

void pdb_140404090(undefined8 *param_1,longlong param_2,char param_3,double param_4)

{
  ulonglong uVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char acStack_60 [8];
  double dStack_58;
  undefined8 uStack_50;
  double dStack_48;
  ulonglong uVar7;
  
  uVar12 = *(ulonglong *)(param_2 + 0x20);
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < uVar12) {
    cVar3 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar5);
    if (cVar3 != '.') {
      if ((cVar3 == 'E') || (cVar3 == 'e')) {
        pdb_140404920(&uStack_50,param_2,param_3,param_4,0);
        if ((char)uStack_50 != '\0') {
          param_1[1] = dStack_48;
          *param_1 = 3;
          return;
        }
        uVar8 = 0;
        goto LAB_140404372;
      }
      goto LAB_1404040f8;
    }
    uVar1 = uVar5 + 1;
    *(ulonglong *)(param_2 + 0x28) = uVar1;
    if (uVar12 <= uVar1) {
LAB_14040423d:
      uStack_50 = 5;
LAB_140404340:
      dStack_58 = (double)pdb_142d84ef0(param_2);
LAB_14040431a:
      param_1[1] = dStack_58;
      *param_1 = 3;
      return;
    }
    uVar6 = ((int)uVar5 - (int)uVar12) + 1;
    uVar7 = (ulonglong)uVar6;
    lVar10 = 0;
    do {
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x18) + uVar1 + lVar10);
      bVar9 = bVar4 - 0x30;
      if (9 < bVar9) {
        if ((int)lVar10 == 0) {
          uStack_50 = 0xd;
          goto LAB_140404340;
        }
        if ((bVar4 | 0x20) != 0x65) {
          uVar7 = -lVar10 & 0xffffffff;
          goto LAB_14040424d;
        }
        pdb_140404920(acStack_60,param_2,param_3,param_4,(int)-lVar10);
LAB_140404226:
        dStack_48 = dStack_58;
        if (acStack_60[0] == '\0') goto LAB_140404370;
        goto LAB_14040431a;
      }
      if ((0x1999999999999998 < (ulonglong)param_4) &&
         ((param_4 != 2.353437368264535e-185 || (5 < bVar9)))) {
        pdb_142db8c00(acStack_60,param_2,param_3,param_4,-(int)lVar10);
        goto LAB_140404226;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5 + 2 + lVar10;
      param_4 = (double)((ulonglong)bVar9 + (longlong)param_4 * 10);
      lVar10 = lVar10 + 1;
    } while (~uVar5 + uVar12 != lVar10);
    if (uVar6 == 0) goto LAB_14040423d;
LAB_14040424d:
    auVar14._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar14._0_8_ = param_4;
    auVar14._12_4_ = _UNK_142e42374;
    dStack_48 = (auVar14._8_8_ - _UNK_142e42388) +
                ((double)CONCAT44(_DAT_142e42370,SUB84(param_4,0)) - _DAT_142e42380);
    uVar6 = (uint)uVar7;
    uVar12 = (ulonglong)-uVar6;
    if ((int)-uVar6 < 0) {
      uVar12 = uVar7;
    }
    uVar11 = (uint)uVar12;
    while (0x134 < uVar11) {
      if ((dStack_48 == 0.0) && (!NAN(dStack_48))) goto joined_r0x0001404042fc;
      if (-1 < (int)uVar7) goto LAB_140404388;
      dStack_48 = dStack_48 / _DAT_142f566e0;
      uVar6 = (int)uVar7 + 0x134;
      uVar7 = (ulonglong)uVar6;
      uVar11 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar11 = uVar6;
      }
      uVar12 = (ulonglong)uVar11;
    }
    dVar2 = *(double *)(_DAT_143ca4b10 + uVar12 * 8);
    if ((int)uVar6 < 0) {
      dStack_48 = dStack_48 / dVar2;
    }
    else {
      dStack_48 = dStack_48 * dVar2;
      if (ABS(dStack_48) == INFINITY) {
LAB_140404388:
        uStack_50 = 0xe;
        dStack_58 = (double)pdb_142d855a0(param_2);
        goto LAB_14040431a;
      }
    }
joined_r0x0001404042fc:
    if (param_3 == '\0') {
      dStack_48 = (double)((ulonglong)dStack_48 ^ _DAT_142f566f0);
    }
  }
  else {
LAB_1404040f8:
    uVar8 = 1;
    dStack_48 = param_4;
    if (param_3 != '\0') goto LAB_140404372;
    dStack_48 = (double)-(longlong)param_4;
    if ((longlong)dStack_48 < 0) {
      uVar8 = 2;
      goto LAB_140404372;
    }
    auVar13._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar13._0_8_ = param_4;
    auVar13._12_4_ = _UNK_142e42374;
    dStack_48 = (double)((ulonglong)
                         ((auVar13._8_8_ - _UNK_142e42388) +
                         ((double)CONCAT44(_DAT_142e42370,SUB84(param_4,0)) - _DAT_142e42380)) |
                        0x8000000000000000);
  }
LAB_140404370:
  uVar8 = 0;
LAB_140404372:
  *param_1 = uVar8;
  param_1[1] = dStack_48;
  return;
}

