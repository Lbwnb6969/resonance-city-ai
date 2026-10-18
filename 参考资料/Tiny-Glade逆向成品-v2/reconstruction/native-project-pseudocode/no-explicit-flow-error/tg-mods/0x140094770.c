// VA 0x140094770, PDB extent 19 bytes
// camino::impl$3::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: camino::impl$3::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 19 */

ulonglong pdb_140094770(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 auStack_88 [3];
  byte bStack_7c;
  byte bStack_7b;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  code *pcStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  lVar9 = *(longlong *)(param_1 + 8);
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  uVar8 = *param_2;
  lVar12 = param_2[1];
  pcVar10 = *(code **)(lVar12 + 0x20);
  cVar3 = (*pcVar10)(uVar8,0x22);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar3 == '\0') {
    if (uVar5 == 0) {
      uVar14 = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      lVar13 = 0;
      uVar14 = uVar5;
      lStack_68 = lVar12;
      pcStack_60 = pcVar10;
      lStack_58 = lVar9;
      uStack_50 = uVar5;
      uStack_48 = uVar8;
      do {
        lVar12 = lVar9 + uVar14;
        uVar15 = 0;
        while (((cVar3 = *(char *)(lVar9 + uVar15), 0xa0 < (byte)(cVar3 + 0x81U) && (cVar3 != '\"'))
               && (cVar3 != '\\'))) {
          uVar15 = uVar15 + 1;
          if (uVar14 == uVar15) {
            uVar14 = lVar13 + uVar14;
            if (uVar11 <= uVar14) goto code_r0x000140f7306d;
            goto code_r0x000140f73104;
          }
        }
        bVar2 = *(byte *)(lVar9 + uVar15);
        uVar4 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar6 = *(byte *)(lVar9 + 1 + uVar15) & 0x3f;
          if (bVar2 < 0xe0) {
            lVar9 = lVar9 + uVar15 + 2;
            uVar4 = (uVar4 & 0x1f) << 6 | uVar6;
          }
          else {
            uVar6 = *(byte *)(lVar9 + 2 + uVar15) & 0x3f | uVar6 << 6;
            if (bVar2 < 0xf0) {
              lVar9 = lVar9 + uVar15 + 3;
              uVar4 = uVar6 | (uVar4 & 0x1f) << 0xc;
            }
            else {
              lVar1 = lVar9 + 3;
              lVar9 = lVar9 + uVar15 + 4;
              uVar4 = *(byte *)(lVar1 + uVar15) & 0x3f | uVar6 << 6 | (uVar4 & 7) << 0x12;
            }
          }
        }
        else {
          lVar9 = lVar9 + uVar15 + 1;
        }
        uVar14 = lVar13 + uVar15;
        lStack_78 = lVar12;
        lStack_70 = lVar13;
        pdb_140f63680(auStack_88,uVar4,0x10001);
        bVar2 = bStack_7b;
        uVar7 = (ulonglong)bStack_7c;
        if ((byte)(bStack_7b - bStack_7c) != '\x01') {
          if (uVar14 < uVar11) goto code_r0x000140f7311b;
          if (uVar11 != 0) {
            if (uVar11 < uStack_50) {
              if (*(char *)(lStack_58 + uVar11) < -0x40) goto code_r0x000140f7311b;
            }
            else if (uVar11 != uStack_50) goto code_r0x000140f7311b;
          }
          if (uVar14 != 0) {
            if (uVar14 < uStack_50) {
              if (*(char *)(uVar15 + lStack_58 + lStack_70) < -0x40) goto code_r0x000140f7311b;
            }
            else if (uVar14 != uVar5) goto code_r0x000140f7311b;
          }
          pcVar10 = *(code **)(lStack_68 + 0x18);
          cVar3 = (*pcVar10)(uStack_48,uVar11 + lStack_58,(lStack_70 - uVar11) + uVar15);
          if (cVar3 == '\0') {
            if (bVar2 < 0x81) {
              cVar3 = (*pcVar10)(uStack_48,(longlong)auStack_88 + uVar7,bVar2 - uVar7);
            }
            else {
              cVar3 = (*pcStack_60)(uStack_48,auStack_88[0]);
            }
            if (cVar3 == '\0') {
              lVar12 = 1;
              if ((0x7f < uVar4) && (lVar12 = 2, 0x7ff < uVar4)) {
                lVar12 = 4 - (ulonglong)(uVar4 < 0x10000);
              }
              uVar11 = lVar12 + uVar14;
              goto code_r0x000140f7301a;
            }
          }
          uVar7 = 1;
          goto code_r0x000140f730dd;
        }
code_r0x000140f7301a:
        lVar12 = 1;
        if ((0x7f < uVar4) && (lVar12 = 2, 0x7ff < uVar4)) {
          lVar12 = 4 - (ulonglong)(uVar4 < 0x10000);
        }
        lVar13 = uVar14 + lVar12;
        uVar14 = lStack_78 - lVar9;
      } while (uVar14 != 0);
      uVar14 = lVar12 + lStack_70 + uVar15;
      if (uVar14 < uVar11) goto code_r0x000140f73104;
code_r0x000140f7306d:
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else if (uVar11 < uStack_50) {
        if (*(char *)(lStack_58 + uVar11) < -0x40) goto code_r0x000140f73104;
      }
      else if (uVar11 != uStack_50) goto code_r0x000140f73104;
      uVar8 = uStack_48;
      pcVar10 = pcStack_60;
      lVar12 = lStack_68;
      lVar9 = lStack_58;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (uVar14 < uStack_50) {
        if (*(char *)(lStack_58 + uVar14) < -0x40) {
code_r0x000140f73104:
          pdb_142dc8070(lStack_58,uStack_50,uVar11,uVar14,&UNK_143250248);
code_r0x000140f7311b:
          pdb_142dc8070();
          pcVar10 = (code *)swi(3);
          uVar5 = (*pcVar10)();
          return uVar5;
        }
      }
      else if (uVar14 != uStack_50) goto code_r0x000140f73104;
    }
    cVar3 = (**(code **)(lVar12 + 0x18))(uVar8,lVar9 + uVar11,uVar14 - uVar11);
    if (cVar3 == '\0') {
      uVar4 = (*pcVar10)(uVar8,0x22);
      uVar7 = (ulonglong)uVar4;
    }
  }
code_r0x000140f730dd:
  return uVar7 & 0xffffffff;
}

