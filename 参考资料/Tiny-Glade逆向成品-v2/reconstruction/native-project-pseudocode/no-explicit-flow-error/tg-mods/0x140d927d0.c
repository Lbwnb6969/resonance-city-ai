// VA 0x140d927d0, PDB extent 534 bytes
// tg_mods::overlay::Mod::matches_recorded_entry
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::Mod::matches_recorded_entry
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 534 */

bool pdb_140d927d0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  ulonglong uStack_40;
  byte *pbStack_38;
  longlong lStack_30;
  
  puVar3 = *(uint **)(param_2 + 8);
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  if (((3 < uVar4) &&
      (uVar9 = *puVar3,
      uVar6 = _DAT_1433964aa >> 0x18 | (_DAT_1433964aa & 0xff0000) >> 8 |
              (_DAT_1433964aa & 0xff00) << 8 | _DAT_1433964aa << 0x18,
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18,
      (uVar6 >= uVar9 && uVar6 != uVar9) == uVar6 < uVar9)) &&
     (pdb_141b4aca0(&uStack_40,puVar3 + 1,uVar4 - 4), !SBORROW8(0,uStack_40))) {
    if (*(longlong *)(param_1 + 0x20) == lStack_30) {
      iVar7 = pub_142e32750(*(undefined8 *)(param_1 + 0x18),pbStack_38);
      bVar11 = iVar7 == 0;
    }
    else {
      bVar11 = false;
    }
    if (uStack_40 != 0) {
      pub_1406abac0(pbStack_38,uStack_40,1);
      return bVar11;
    }
    return bVar11;
  }
  if (*(ulonglong *)(param_1 + 0x38) == uVar4) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (uVar4 < 0x10) {
      uVar8 = 0;
      do {
        if (uVar4 == uVar8) {
          return true;
        }
        pbVar1 = (byte *)(lVar5 + uVar8);
        pbVar2 = (byte *)((longlong)puVar3 + uVar8);
        uVar8 = uVar8 + 1;
      } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
               (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
      return false;
    }
    uVar8 = uVar4 >> 4;
    lVar10 = 0;
    do {
      pbVar1 = (byte *)(lVar5 + lVar10);
      bVar13 = *pbVar1 + DAT_142f5f760;
      bVar15 = pbVar1[1] + UNK_142f5f761;
      bVar17 = pbVar1[2] + UNK_142f5f762;
      bVar19 = pbVar1[3] + UNK_142f5f763;
      bVar21 = pbVar1[4] + UNK_142f5f764;
      bVar23 = pbVar1[5] + UNK_142f5f765;
      bVar25 = pbVar1[6] + UNK_142f5f766;
      bVar27 = pbVar1[7] + UNK_142f5f767;
      bVar29 = pbVar1[8] + UNK_142f5f768;
      bVar31 = pbVar1[9] + UNK_142f5f769;
      bVar33 = pbVar1[10] + UNK_142f5f76a;
      bVar35 = pbVar1[0xb] + UNK_142f5f76b;
      bVar37 = pbVar1[0xc] + UNK_142f5f76c;
      bVar39 = pbVar1[0xd] + UNK_142f5f76d;
      bVar41 = pbVar1[0xe] + UNK_142f5f76e;
      bVar43 = pbVar1[0xf] + UNK_142f5f76f;
      pbVar2 = (byte *)((longlong)puVar3 + lVar10);
      bVar14 = *pbVar2 + DAT_142f5f760;
      bVar16 = pbVar2[1] + UNK_142f5f761;
      bVar18 = pbVar2[2] + UNK_142f5f762;
      bVar20 = pbVar2[3] + UNK_142f5f763;
      bVar22 = pbVar2[4] + UNK_142f5f764;
      bVar24 = pbVar2[5] + UNK_142f5f765;
      bVar26 = pbVar2[6] + UNK_142f5f766;
      bVar28 = pbVar2[7] + UNK_142f5f767;
      bVar30 = pbVar2[8] + UNK_142f5f768;
      bVar32 = pbVar2[9] + UNK_142f5f769;
      bVar34 = pbVar2[10] + UNK_142f5f76a;
      bVar36 = pbVar2[0xb] + UNK_142f5f76b;
      bVar38 = pbVar2[0xc] + UNK_142f5f76c;
      bVar40 = pbVar2[0xd] + UNK_142f5f76d;
      bVar42 = pbVar2[0xe] + UNK_142f5f76e;
      bVar44 = pbVar2[0xf] + UNK_142f5f76f;
      auVar45[0] = -((byte)(-((byte)((DAT_142e42340 < bVar14) * DAT_142e42340 |
                                    (DAT_142e42340 >= bVar14) * bVar14) == bVar14) & DAT_142e346d0 |
                           *pbVar2) ==
                    (byte)(-((byte)((DAT_142e42340 < bVar13) * DAT_142e42340 |
                                   (DAT_142e42340 >= bVar13) * bVar13) == bVar13) & DAT_142e346d0 |
                          *pbVar1));
      auVar45[1] = -((byte)(-((byte)((UNK_142e42341 < bVar16) * UNK_142e42341 |
                                    (UNK_142e42341 >= bVar16) * bVar16) == bVar16) & UNK_142e346d1 |
                           pbVar2[1]) ==
                    (byte)(-((byte)((UNK_142e42341 < bVar15) * UNK_142e42341 |
                                   (UNK_142e42341 >= bVar15) * bVar15) == bVar15) & UNK_142e346d1 |
                          pbVar1[1]));
      auVar45[2] = -((byte)(-((byte)((UNK_142e42342 < bVar18) * UNK_142e42342 |
                                    (UNK_142e42342 >= bVar18) * bVar18) == bVar18) & UNK_142e346d2 |
                           pbVar2[2]) ==
                    (byte)(-((byte)((UNK_142e42342 < bVar17) * UNK_142e42342 |
                                   (UNK_142e42342 >= bVar17) * bVar17) == bVar17) & UNK_142e346d2 |
                          pbVar1[2]));
      auVar45[3] = -((byte)(-((byte)((UNK_142e42343 < bVar20) * UNK_142e42343 |
                                    (UNK_142e42343 >= bVar20) * bVar20) == bVar20) & UNK_142e346d3 |
                           pbVar2[3]) ==
                    (byte)(-((byte)((UNK_142e42343 < bVar19) * UNK_142e42343 |
                                   (UNK_142e42343 >= bVar19) * bVar19) == bVar19) & UNK_142e346d3 |
                          pbVar1[3]));
      auVar45[4] = -((byte)(-((byte)((UNK_142e42344 < bVar22) * UNK_142e42344 |
                                    (UNK_142e42344 >= bVar22) * bVar22) == bVar22) & UNK_142e346d4 |
                           pbVar2[4]) ==
                    (byte)(-((byte)((UNK_142e42344 < bVar21) * UNK_142e42344 |
                                   (UNK_142e42344 >= bVar21) * bVar21) == bVar21) & UNK_142e346d4 |
                          pbVar1[4]));
      auVar45[5] = -((byte)(-((byte)((UNK_142e42345 < bVar24) * UNK_142e42345 |
                                    (UNK_142e42345 >= bVar24) * bVar24) == bVar24) & UNK_142e346d5 |
                           pbVar2[5]) ==
                    (byte)(-((byte)((UNK_142e42345 < bVar23) * UNK_142e42345 |
                                   (UNK_142e42345 >= bVar23) * bVar23) == bVar23) & UNK_142e346d5 |
                          pbVar1[5]));
      auVar45[6] = -((byte)(-((byte)((UNK_142e42346 < bVar26) * UNK_142e42346 |
                                    (UNK_142e42346 >= bVar26) * bVar26) == bVar26) & UNK_142e346d6 |
                           pbVar2[6]) ==
                    (byte)(-((byte)((UNK_142e42346 < bVar25) * UNK_142e42346 |
                                   (UNK_142e42346 >= bVar25) * bVar25) == bVar25) & UNK_142e346d6 |
                          pbVar1[6]));
      auVar45[7] = -((byte)(-((byte)((UNK_142e42347 < bVar28) * UNK_142e42347 |
                                    (UNK_142e42347 >= bVar28) * bVar28) == bVar28) & UNK_142e346d7 |
                           pbVar2[7]) ==
                    (byte)(-((byte)((UNK_142e42347 < bVar27) * UNK_142e42347 |
                                   (UNK_142e42347 >= bVar27) * bVar27) == bVar27) & UNK_142e346d7 |
                          pbVar1[7]));
      auVar45[8] = -((byte)(-((byte)((UNK_142e42348 < bVar30) * UNK_142e42348 |
                                    (UNK_142e42348 >= bVar30) * bVar30) == bVar30) & UNK_142e346d8 |
                           pbVar2[8]) ==
                    (byte)(-((byte)((UNK_142e42348 < bVar29) * UNK_142e42348 |
                                   (UNK_142e42348 >= bVar29) * bVar29) == bVar29) & UNK_142e346d8 |
                          pbVar1[8]));
      auVar45[9] = -((byte)(-((byte)((UNK_142e42349 < bVar32) * UNK_142e42349 |
                                    (UNK_142e42349 >= bVar32) * bVar32) == bVar32) & UNK_142e346d9 |
                           pbVar2[9]) ==
                    (byte)(-((byte)((UNK_142e42349 < bVar31) * UNK_142e42349 |
                                   (UNK_142e42349 >= bVar31) * bVar31) == bVar31) & UNK_142e346d9 |
                          pbVar1[9]));
      auVar45[10] = -((byte)(-((byte)((UNK_142e4234a < bVar34) * UNK_142e4234a |
                                     (UNK_142e4234a >= bVar34) * bVar34) == bVar34) & UNK_142e346da
                            | pbVar2[10]) ==
                     (byte)(-((byte)((UNK_142e4234a < bVar33) * UNK_142e4234a |
                                    (UNK_142e4234a >= bVar33) * bVar33) == bVar33) & UNK_142e346da |
                           pbVar1[10]));
      auVar45[0xb] = -((byte)(-((byte)((UNK_142e4234b < bVar36) * UNK_142e4234b |
                                      (UNK_142e4234b >= bVar36) * bVar36) == bVar36) & UNK_142e346db
                             | pbVar2[0xb]) ==
                      (byte)(-((byte)((UNK_142e4234b < bVar35) * UNK_142e4234b |
                                     (UNK_142e4234b >= bVar35) * bVar35) == bVar35) & UNK_142e346db
                            | pbVar1[0xb]));
      auVar45[0xc] = -((byte)(-((byte)((UNK_142e4234c < bVar38) * UNK_142e4234c |
                                      (UNK_142e4234c >= bVar38) * bVar38) == bVar38) & UNK_142e346dc
                             | pbVar2[0xc]) ==
                      (byte)(-((byte)((UNK_142e4234c < bVar37) * UNK_142e4234c |
                                     (UNK_142e4234c >= bVar37) * bVar37) == bVar37) & UNK_142e346dc
                            | pbVar1[0xc]));
      auVar45[0xd] = -((byte)(-((byte)((UNK_142e4234d < bVar40) * UNK_142e4234d |
                                      (UNK_142e4234d >= bVar40) * bVar40) == bVar40) & UNK_142e346dd
                             | pbVar2[0xd]) ==
                      (byte)(-((byte)((UNK_142e4234d < bVar39) * UNK_142e4234d |
                                     (UNK_142e4234d >= bVar39) * bVar39) == bVar39) & UNK_142e346dd
                            | pbVar1[0xd]));
      auVar45[0xe] = -((byte)(-((byte)((UNK_142e4234e < bVar42) * UNK_142e4234e |
                                      (UNK_142e4234e >= bVar42) * bVar42) == bVar42) & UNK_142e346de
                             | pbVar2[0xe]) ==
                      (byte)(-((byte)((UNK_142e4234e < bVar41) * UNK_142e4234e |
                                     (UNK_142e4234e >= bVar41) * bVar41) == bVar41) & UNK_142e346de
                            | pbVar1[0xe]));
      auVar45[0xf] = -((byte)(-((byte)((UNK_142e4234f < bVar44) * UNK_142e4234f |
                                      (UNK_142e4234f >= bVar44) * bVar44) == bVar44) & UNK_142e346df
                             | pbVar2[0xf]) ==
                      (byte)(-((byte)((UNK_142e4234f < bVar43) * UNK_142e4234f |
                                     (UNK_142e4234f >= bVar43) * bVar43) == bVar43) & UNK_142e346df
                            | pbVar1[0xf]));
      if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar45[0xf] >> 7) << 0xf) != 0xffff) {
        return false;
      }
      lVar10 = lVar10 + 0x10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if ((uVar4 & 0xf) == 0) {
      return true;
    }
    pbVar1 = (byte *)(lVar5 + -0x10 + uVar4);
    bVar29 = *pbVar1 + DAT_142f5f760;
    bVar30 = pbVar1[1] + UNK_142f5f761;
    bVar31 = pbVar1[2] + UNK_142f5f762;
    bVar32 = pbVar1[3] + UNK_142f5f763;
    bVar33 = pbVar1[4] + UNK_142f5f764;
    bVar34 = pbVar1[5] + UNK_142f5f765;
    bVar35 = pbVar1[6] + UNK_142f5f766;
    bVar36 = pbVar1[7] + UNK_142f5f767;
    bVar37 = pbVar1[8] + UNK_142f5f768;
    bVar38 = pbVar1[9] + UNK_142f5f769;
    bVar39 = pbVar1[10] + UNK_142f5f76a;
    bVar40 = pbVar1[0xb] + UNK_142f5f76b;
    bVar41 = pbVar1[0xc] + UNK_142f5f76c;
    bVar42 = pbVar1[0xd] + UNK_142f5f76d;
    bVar43 = pbVar1[0xe] + UNK_142f5f76e;
    bVar44 = pbVar1[0xf] + UNK_142f5f76f;
    pbVar2 = (byte *)((longlong)puVar3 + (uVar4 - 0x10));
    bVar13 = DAT_142f5f760 + *pbVar2;
    bVar14 = UNK_142f5f761 + pbVar2[1];
    bVar15 = UNK_142f5f762 + pbVar2[2];
    bVar16 = UNK_142f5f763 + pbVar2[3];
    bVar17 = UNK_142f5f764 + pbVar2[4];
    bVar18 = UNK_142f5f765 + pbVar2[5];
    bVar19 = UNK_142f5f766 + pbVar2[6];
    bVar20 = UNK_142f5f767 + pbVar2[7];
    bVar21 = UNK_142f5f768 + pbVar2[8];
    bVar22 = UNK_142f5f769 + pbVar2[9];
    bVar23 = UNK_142f5f76a + pbVar2[10];
    bVar24 = UNK_142f5f76b + pbVar2[0xb];
    bVar25 = UNK_142f5f76c + pbVar2[0xc];
    bVar26 = UNK_142f5f76d + pbVar2[0xd];
    bVar27 = UNK_142f5f76e + pbVar2[0xe];
    bVar28 = UNK_142f5f76f + pbVar2[0xf];
    auVar12[0] = -((byte)(-((byte)((bVar13 < DAT_142e42340) * bVar13 |
                                  (bVar13 >= DAT_142e42340) * DAT_142e42340) == bVar13) &
                          DAT_142e346d0 | *pbVar2) ==
                  (byte)(-((byte)((DAT_142e42340 < bVar29) * DAT_142e42340 |
                                 (DAT_142e42340 >= bVar29) * bVar29) == bVar29) & DAT_142e346d0 |
                        *pbVar1));
    auVar12[1] = -((byte)(-((byte)((bVar14 < UNK_142e42341) * bVar14 |
                                  (bVar14 >= UNK_142e42341) * UNK_142e42341) == bVar14) &
                          UNK_142e346d1 | pbVar2[1]) ==
                  (byte)(-((byte)((UNK_142e42341 < bVar30) * UNK_142e42341 |
                                 (UNK_142e42341 >= bVar30) * bVar30) == bVar30) & UNK_142e346d1 |
                        pbVar1[1]));
    auVar12[2] = -((byte)(-((byte)((bVar15 < UNK_142e42342) * bVar15 |
                                  (bVar15 >= UNK_142e42342) * UNK_142e42342) == bVar15) &
                          UNK_142e346d2 | pbVar2[2]) ==
                  (byte)(-((byte)((UNK_142e42342 < bVar31) * UNK_142e42342 |
                                 (UNK_142e42342 >= bVar31) * bVar31) == bVar31) & UNK_142e346d2 |
                        pbVar1[2]));
    auVar12[3] = -((byte)(-((byte)((bVar16 < UNK_142e42343) * bVar16 |
                                  (bVar16 >= UNK_142e42343) * UNK_142e42343) == bVar16) &
                          UNK_142e346d3 | pbVar2[3]) ==
                  (byte)(-((byte)((UNK_142e42343 < bVar32) * UNK_142e42343 |
                                 (UNK_142e42343 >= bVar32) * bVar32) == bVar32) & UNK_142e346d3 |
                        pbVar1[3]));
    auVar12[4] = -((byte)(-((byte)((bVar17 < UNK_142e42344) * bVar17 |
                                  (bVar17 >= UNK_142e42344) * UNK_142e42344) == bVar17) &
                          UNK_142e346d4 | pbVar2[4]) ==
                  (byte)(-((byte)((UNK_142e42344 < bVar33) * UNK_142e42344 |
                                 (UNK_142e42344 >= bVar33) * bVar33) == bVar33) & UNK_142e346d4 |
                        pbVar1[4]));
    auVar12[5] = -((byte)(-((byte)((bVar18 < UNK_142e42345) * bVar18 |
                                  (bVar18 >= UNK_142e42345) * UNK_142e42345) == bVar18) &
                          UNK_142e346d5 | pbVar2[5]) ==
                  (byte)(-((byte)((UNK_142e42345 < bVar34) * UNK_142e42345 |
                                 (UNK_142e42345 >= bVar34) * bVar34) == bVar34) & UNK_142e346d5 |
                        pbVar1[5]));
    auVar12[6] = -((byte)(-((byte)((bVar19 < UNK_142e42346) * bVar19 |
                                  (bVar19 >= UNK_142e42346) * UNK_142e42346) == bVar19) &
                          UNK_142e346d6 | pbVar2[6]) ==
                  (byte)(-((byte)((UNK_142e42346 < bVar35) * UNK_142e42346 |
                                 (UNK_142e42346 >= bVar35) * bVar35) == bVar35) & UNK_142e346d6 |
                        pbVar1[6]));
    auVar12[7] = -((byte)(-((byte)((bVar20 < UNK_142e42347) * bVar20 |
                                  (bVar20 >= UNK_142e42347) * UNK_142e42347) == bVar20) &
                          UNK_142e346d7 | pbVar2[7]) ==
                  (byte)(-((byte)((UNK_142e42347 < bVar36) * UNK_142e42347 |
                                 (UNK_142e42347 >= bVar36) * bVar36) == bVar36) & UNK_142e346d7 |
                        pbVar1[7]));
    auVar12[8] = -((byte)(-((byte)((bVar21 < UNK_142e42348) * bVar21 |
                                  (bVar21 >= UNK_142e42348) * UNK_142e42348) == bVar21) &
                          UNK_142e346d8 | pbVar2[8]) ==
                  (byte)(-((byte)((UNK_142e42348 < bVar37) * UNK_142e42348 |
                                 (UNK_142e42348 >= bVar37) * bVar37) == bVar37) & UNK_142e346d8 |
                        pbVar1[8]));
    auVar12[9] = -((byte)(-((byte)((bVar22 < UNK_142e42349) * bVar22 |
                                  (bVar22 >= UNK_142e42349) * UNK_142e42349) == bVar22) &
                          UNK_142e346d9 | pbVar2[9]) ==
                  (byte)(-((byte)((UNK_142e42349 < bVar38) * UNK_142e42349 |
                                 (UNK_142e42349 >= bVar38) * bVar38) == bVar38) & UNK_142e346d9 |
                        pbVar1[9]));
    auVar12[10] = -((byte)(-((byte)((bVar23 < UNK_142e4234a) * bVar23 |
                                   (bVar23 >= UNK_142e4234a) * UNK_142e4234a) == bVar23) &
                           UNK_142e346da | pbVar2[10]) ==
                   (byte)(-((byte)((UNK_142e4234a < bVar39) * UNK_142e4234a |
                                  (UNK_142e4234a >= bVar39) * bVar39) == bVar39) & UNK_142e346da |
                         pbVar1[10]));
    auVar12[0xb] = -((byte)(-((byte)((bVar24 < UNK_142e4234b) * bVar24 |
                                    (bVar24 >= UNK_142e4234b) * UNK_142e4234b) == bVar24) &
                            UNK_142e346db | pbVar2[0xb]) ==
                    (byte)(-((byte)((UNK_142e4234b < bVar40) * UNK_142e4234b |
                                   (UNK_142e4234b >= bVar40) * bVar40) == bVar40) & UNK_142e346db |
                          pbVar1[0xb]));
    auVar12[0xc] = -((byte)(-((byte)((bVar25 < UNK_142e4234c) * bVar25 |
                                    (bVar25 >= UNK_142e4234c) * UNK_142e4234c) == bVar25) &
                            UNK_142e346dc | pbVar2[0xc]) ==
                    (byte)(-((byte)((UNK_142e4234c < bVar41) * UNK_142e4234c |
                                   (UNK_142e4234c >= bVar41) * bVar41) == bVar41) & UNK_142e346dc |
                          pbVar1[0xc]));
    auVar12[0xd] = -((byte)(-((byte)((bVar26 < UNK_142e4234d) * bVar26 |
                                    (bVar26 >= UNK_142e4234d) * UNK_142e4234d) == bVar26) &
                            UNK_142e346dd | pbVar2[0xd]) ==
                    (byte)(-((byte)((UNK_142e4234d < bVar42) * UNK_142e4234d |
                                   (UNK_142e4234d >= bVar42) * bVar42) == bVar42) & UNK_142e346dd |
                          pbVar1[0xd]));
    auVar12[0xe] = -((byte)(-((byte)((bVar27 < UNK_142e4234e) * bVar27 |
                                    (bVar27 >= UNK_142e4234e) * UNK_142e4234e) == bVar27) &
                            UNK_142e346de | pbVar2[0xe]) ==
                    (byte)(-((byte)((UNK_142e4234e < bVar43) * UNK_142e4234e |
                                   (UNK_142e4234e >= bVar43) * bVar43) == bVar43) & UNK_142e346de |
                          pbVar1[0xe]));
    auVar12[0xf] = -((byte)(-((byte)((bVar28 < UNK_142e4234f) * bVar28 |
                                    (bVar28 >= UNK_142e4234f) * UNK_142e4234f) == bVar28) &
                            UNK_142e346df | pbVar2[0xf]) ==
                    (byte)(-((byte)((UNK_142e4234f < bVar44) * UNK_142e4234f |
                                   (UNK_142e4234f >= bVar44) * bVar44) == bVar44) & UNK_142e346df |
                          pbVar1[0xf]));
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return true;
    }
  }
  return false;
}

