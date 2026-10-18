// VA 0x140b4b1e0, PDB extent 648 bytes
// country_core::systems::wall::snapping::snapping_init::snapping_init
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_init.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::snapping::snapping_init::snapping_init
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_init.rs
   Extent: 648 */

void pdb_140b4b1e0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  float fVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar20 [16];
  ulonglong uVar22;
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  longlong alStack_60 [7];
  
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar4 = (undefined4 *)param_1[2];
  *puVar4 = uVar3;
  puVar5 = (undefined1 *)*param_1;
  *puVar5 = 0;
  if (*(char *)(*param_4 + 0xcd) != '\0') {
    return;
  }
  if (SBORROW8(0,*(longlong *)*param_3)) {
    return;
  }
  param_2 = (longlong *)*param_2;
  lVar6 = ((longlong *)*param_3)[0x10];
  alStack_60[0] = lVar6;
  if (param_2[3] != 0) {
    uVar10 = pdb_1400af0a0(param_2 + 4,alStack_60);
    lVar11 = *param_2;
    bVar16 = (byte)(uVar10 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar12 = 0;
    while( true ) {
      uVar10 = uVar10 & param_2[1];
      pcVar1 = (char *)(lVar11 + uVar10);
      auVar29[0] = -(*pcVar1 == auVar19[0]);
      auVar29[1] = -(pcVar1[1] == auVar19[1]);
      auVar29[2] = -(pcVar1[2] == auVar19[2]);
      auVar29[3] = -(pcVar1[3] == auVar19[3]);
      auVar29[4] = -(pcVar1[4] == auVar19[4]);
      auVar29[5] = -(pcVar1[5] == auVar19[5]);
      auVar29[6] = -(pcVar1[6] == auVar19[6]);
      auVar29[7] = -(pcVar1[7] == auVar19[7]);
      auVar29[8] = -(pcVar1[8] == auVar19[0]);
      auVar29[9] = -(pcVar1[9] == auVar19[1]);
      auVar29[10] = -(pcVar1[10] == auVar19[2]);
      auVar29[0xb] = -(pcVar1[0xb] == auVar19[3]);
      auVar29[0xc] = -(pcVar1[0xc] == auVar19[4]);
      auVar29[0xd] = -(pcVar1[0xd] == auVar19[5]);
      auVar29[0xe] = -(pcVar1[0xe] == auVar19[6]);
      auVar29[0xf] = -(pcVar1[0xf] == auVar19[7]);
      uVar14 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar15 = (uVar8 + uVar10 & param_2[1]) * -0x78;
        if (lVar6 == *(longlong *)(lVar11 + -0x78 + lVar15)) {
          lVar11 = lVar11 + lVar15;
          if (*(float *)(lVar11 + -0x40) <= _DAT_143058d44) {
            return;
          }
          puVar7 = *(ulonglong **)(lVar11 + -0x68);
          uVar10 = *(ulonglong *)(lVar11 + -0x60);
          lVar6 = uVar10 * 8;
          uVar18 = 0;
          uVar22 = 0;
          if (uVar10 < 2) goto LAB_140b4b3ae;
          uVar22 = *puVar7;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar22;
          uVar18 = puVar7[1];
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar18;
          fVar17 = (float)uVar22 - (float)uVar18;
          fVar21 = (float)(uVar22 >> 0x20) - (float)(uVar18 >> 0x20);
          fVar17 = fVar21 * fVar21 + fVar17 * fVar17;
          if (fVar17 <= 0.0) {
            auVar19 = ZEXT416(0);
            auVar27 = ZEXT416(0);
          }
          uVar18 = auVar19._0_8_;
          uVar22 = auVar27._0_8_;
          if (uVar10 == 2) goto LAB_140b4b3ae;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          lVar11 = 0;
          goto LAB_140b4b366;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar26[0] = -(*pcVar1 == -1);
      auVar26[1] = -(pcVar1[1] == -1);
      auVar26[2] = -(pcVar1[2] == -1);
      auVar26[3] = -(pcVar1[3] == -1);
      auVar26[4] = -(pcVar1[4] == -1);
      auVar26[5] = -(pcVar1[5] == -1);
      auVar26[6] = -(pcVar1[6] == -1);
      auVar26[7] = -(pcVar1[7] == -1);
      auVar26[8] = -(pcVar1[8] == -1);
      auVar26[9] = -(pcVar1[9] == -1);
      auVar26[10] = -(pcVar1[10] == -1);
      auVar26[0xb] = -(pcVar1[0xb] == -1);
      auVar26[0xc] = -(pcVar1[0xc] == -1);
      auVar26[0xd] = -(pcVar1[0xd] == -1);
      auVar26[0xe] = -(pcVar1[0xe] == -1);
      auVar26[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar10 = uVar10 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430592e8);
  while( true ) {
    uVar10 = *(ulonglong *)((longlong)puVar7 + lVar11 + 8);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar10;
    uVar2 = *(ulonglong *)((longlong)puVar7 + lVar11 + 0x10);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar2;
    fVar21 = (float)uVar10 - (float)uVar2;
    fVar31 = (float)(uVar10 >> 0x20) - (float)(uVar2 >> 0x20);
    fVar21 = fVar31 * fVar31 + fVar21 * fVar21;
    if (fVar21 <= fVar17) {
      fVar21 = fVar17;
      uVar10 = uVar22;
      uVar2 = uVar18;
      auVar20 = auVar19;
      auVar23 = auVar27;
    }
    auVar27 = auVar23;
    auVar19 = auVar20;
    uVar18 = uVar2;
    uVar22 = uVar10;
    fVar17 = fVar21;
    lVar11 = lVar11 + 8;
    if (lVar6 + -0x10 == lVar11) break;
LAB_140b4b366:
    uVar18 = auVar19._0_8_;
    uVar22 = auVar27._0_8_;
    if ((lVar6 + -8 == lVar11) || (lVar6 + -0x10 == lVar11)) break;
  }
LAB_140b4b3ae:
  fVar21 = (float)(uVar18 >> 0x20);
  fVar31 = (float)uVar22;
  fVar25 = (float)uVar18 - fVar31;
  fVar24 = (float)(uVar22 >> 0x20);
  fVar28 = fVar21 - fVar24;
  fVar17 = fVar28 * fVar28 + fVar25 * fVar25;
  if (fVar17 <= _DAT_143006dc0) {
    fVar17 = _DAT_143006dc0;
  }
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (lVar6 - lVar12 == 0) break;
    fVar30 = (float)*(undefined8 *)((longlong)puVar7 + lVar12);
    fVar32 = (float)((ulonglong)*(undefined8 *)((longlong)puVar7 + lVar12) >> 0x20);
    fVar33 = ((fVar32 - fVar24) * fVar28 + (fVar30 - fVar31) * fVar25) / fVar17;
    fVar30 = fVar30 - (fVar33 * (float)uVar18 + (_DAT_142e36f28 - fVar33) * fVar31);
    fVar32 = fVar32 - (fVar33 * fVar21 + (_DAT_142e36f28 - fVar33) * fVar24);
    lVar11 = lVar12 + 8;
  } while (SQRT(fVar32 * fVar32 + fVar30 * fVar30) <= _DAT_142e37838);
  *puVar4 = uVar3;
  *puVar5 = 1;
  puVar5[1] = lVar6 - lVar12 != 0;
  return;
}

