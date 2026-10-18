// VA 0x140734650, PDB extent 1099 bytes
// toolbar::menu::report_bug::impl$15::toggle_icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::report_bug::impl$15::toggle_icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 1099 */

longlong *
pdb_140734650(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte *param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3;
  uStack_20 = param_4;
  pdb_14116ec20(&lStack_48,param_2,param_3,param_4,&uStack_28,param_5);
  lVar10 = lStack_48;
  if (*(longlong *)(lStack_48 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lStack_48 + 0x1d0,&lStack_40);
    lVar9 = *(longlong *)(lVar10 + 0x1b0);
    uVar7 = *(ulonglong *)(lVar10 + 0x1b8);
    bVar15 = (byte)(uVar6 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar10 = 0;
    while( true ) {
      uVar6 = uVar6 & uVar7;
      auVar2 = *(undefined1 (*) [16])(lVar9 + uVar6);
      auVar21[0] = -(auVar2[0] == auVar16[0]);
      auVar21[1] = -(auVar2[1] == auVar16[1]);
      auVar21[2] = -(auVar2[2] == auVar16[2]);
      auVar21[3] = -(auVar2[3] == auVar16[3]);
      auVar21[4] = -(auVar2[4] == auVar16[4]);
      auVar21[5] = -(auVar2[5] == auVar16[5]);
      auVar21[6] = -(auVar2[6] == auVar16[6]);
      auVar21[7] = -(auVar2[7] == auVar16[7]);
      auVar21[8] = -(auVar2[8] == auVar16[0]);
      auVar21[9] = -(auVar2[9] == auVar16[1]);
      auVar21[10] = -(auVar2[10] == auVar16[2]);
      auVar21[0xb] = -(auVar2[0xb] == auVar16[3]);
      auVar21[0xc] = -(auVar2[0xc] == auVar16[4]);
      auVar21[0xd] = -(auVar2[0xd] == auVar16[5]);
      auVar21[0xe] = -(auVar2[0xe] == auVar16[6]);
      auVar21[0xf] = -(auVar2[0xf] == auVar16[7]);
      uVar12 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar13 = (uVar4 + uVar6 & uVar7) * -0xd8;
        if (lStack_40 == *(longlong *)(lVar9 + -0xd8 + lVar13)) {
          lVar9 = lVar9 + lVar13;
          *(undefined1 (*) [16])(lVar9 + -0x9c) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar9 + -0xa8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar9 + -0xb8) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar9 + -0x8c) = 0x42340000;
          *(undefined4 *)(lVar9 + -0x84) = 0x42200000;
          *(undefined8 *)(lVar9 + -0x80) = 0;
          *(undefined8 *)(lVar9 + -0x7a) = 0;
          *(undefined2 *)(lVar9 + -0x72) = 0x102;
          lStack_58 = lStack_38;
          lStack_68 = lStack_48;
          lStack_60 = lStack_40;
          if (*(longlong *)(lStack_48 + 0x1c8) != 0) {
            uVar7 = pdb_1400af0a0(lStack_48 + 0x1d0,&lStack_60);
            lVar9 = lStack_68;
            lVar10 = *(longlong *)(lStack_48 + 0x1b0);
            bVar15 = (byte)(uVar7 >> 0x39);
            auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
            auVar16 = pshuflw(auVar16,auVar16,0);
            lVar13 = 0;
            while( true ) {
              uVar7 = uVar7 & *(ulonglong *)(lStack_48 + 0x1b8);
              auVar2 = *(undefined1 (*) [16])(lVar10 + uVar7);
              auVar22[0] = -(auVar2[0] == auVar16[0]);
              auVar22[1] = -(auVar2[1] == auVar16[1]);
              auVar22[2] = -(auVar2[2] == auVar16[2]);
              auVar22[3] = -(auVar2[3] == auVar16[3]);
              auVar22[4] = -(auVar2[4] == auVar16[4]);
              auVar22[5] = -(auVar2[5] == auVar16[5]);
              auVar22[6] = -(auVar2[6] == auVar16[6]);
              auVar22[7] = -(auVar2[7] == auVar16[7]);
              auVar22[8] = -(auVar2[8] == auVar16[0]);
              auVar22[9] = -(auVar2[9] == auVar16[1]);
              auVar22[10] = -(auVar2[10] == auVar16[2]);
              auVar22[0xb] = -(auVar2[0xb] == auVar16[3]);
              auVar22[0xc] = -(auVar2[0xc] == auVar16[4]);
              auVar22[0xd] = -(auVar2[0xd] == auVar16[5]);
              auVar22[0xe] = -(auVar2[0xe] == auVar16[6]);
              auVar22[0xf] = -(auVar2[0xf] == auVar16[7]);
              uVar12 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar22[0xf] >> 7) << 0xf;
              uVar11 = (uint)uVar12;
              while (uVar12 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                lVar14 = (uVar4 + uVar7 & *(ulonglong *)(lStack_48 + 0x1b8)) * -0xd8;
                if (lStack_60 == *(longlong *)(lVar10 + -0xd8 + lVar14)) {
                  pbVar1 = (byte *)(lVar10 + lVar14 + -5);
                  *pbVar1 = *pbVar1 | 0x20;
                  lStack_38 = lStack_58;
                  lStack_48 = lStack_68;
                  lStack_40 = lStack_60;
                  if (*(longlong *)(lStack_68 + 0x1c8) != 0) {
                    uVar6 = pdb_1400af0a0(lStack_68 + 0x1d0,&lStack_40);
                    lVar13 = lStack_48;
                    lVar10 = *(longlong *)(lVar9 + 0x1b0);
                    uVar7 = *(ulonglong *)(lVar9 + 0x1b8);
                    bVar15 = (byte)(uVar6 >> 0x39);
                    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
                    auVar16 = pshuflw(auVar16,auVar16,0);
                    lVar9 = 0;
                    while( true ) {
                      uVar6 = uVar6 & uVar7;
                      auVar2 = *(undefined1 (*) [16])(lVar10 + uVar6);
                      auVar23[0] = -(auVar2[0] == auVar16[0]);
                      auVar23[1] = -(auVar2[1] == auVar16[1]);
                      auVar23[2] = -(auVar2[2] == auVar16[2]);
                      auVar23[3] = -(auVar2[3] == auVar16[3]);
                      auVar23[4] = -(auVar2[4] == auVar16[4]);
                      auVar23[5] = -(auVar2[5] == auVar16[5]);
                      auVar23[6] = -(auVar2[6] == auVar16[6]);
                      auVar23[7] = -(auVar2[7] == auVar16[7]);
                      auVar23[8] = -(auVar2[8] == auVar16[0]);
                      auVar23[9] = -(auVar2[9] == auVar16[1]);
                      auVar23[10] = -(auVar2[10] == auVar16[2]);
                      auVar23[0xb] = -(auVar2[0xb] == auVar16[3]);
                      auVar23[0xc] = -(auVar2[0xc] == auVar16[4]);
                      auVar23[0xd] = -(auVar2[0xd] == auVar16[5]);
                      auVar23[0xe] = -(auVar2[0xe] == auVar16[6]);
                      auVar23[0xf] = -(auVar2[0xf] == auVar16[7]);
                      uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar23[0xf] >> 7) << 0xf;
                      uVar11 = (uint)uVar12;
                      while (uVar12 != 0) {
                        uVar4 = 0;
                        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                          uVar4 = uVar4 + 1;
                        }
                        lVar14 = (uVar4 + uVar6 & uVar7) * -0xd8;
                        if (lStack_40 == *(longlong *)(lVar10 + -0xd8 + lVar14)) {
                          *(undefined2 *)(lVar10 + lVar14 + -8) = 0x200;
                          lStack_58 = lStack_38;
                          lStack_68 = lStack_48;
                          lStack_60 = lStack_40;
                          if (*(longlong *)(lStack_48 + 0x1c8) != 0) {
                            uVar6 = pdb_1400af0a0(lStack_48 + 0x1d0,&lStack_60);
                            lVar10 = *(longlong *)(lVar13 + 0x1b0);
                            uVar7 = *(ulonglong *)(lVar13 + 0x1b8);
                            bVar15 = (byte)(uVar6 >> 0x39);
                            auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
                            auVar16 = pshuflw(auVar16,auVar16,0);
                            lVar9 = 0;
                            while( true ) {
                              uVar6 = uVar6 & uVar7;
                              auVar2 = *(undefined1 (*) [16])(lVar10 + uVar6);
                              auVar24[0] = -(auVar2[0] == auVar16[0]);
                              auVar24[1] = -(auVar2[1] == auVar16[1]);
                              auVar24[2] = -(auVar2[2] == auVar16[2]);
                              auVar24[3] = -(auVar2[3] == auVar16[3]);
                              auVar24[4] = -(auVar2[4] == auVar16[4]);
                              auVar24[5] = -(auVar2[5] == auVar16[5]);
                              auVar24[6] = -(auVar2[6] == auVar16[6]);
                              auVar24[7] = -(auVar2[7] == auVar16[7]);
                              auVar24[8] = -(auVar2[8] == auVar16[0]);
                              auVar24[9] = -(auVar2[9] == auVar16[1]);
                              auVar24[10] = -(auVar2[10] == auVar16[2]);
                              auVar24[0xb] = -(auVar2[0xb] == auVar16[3]);
                              auVar24[0xc] = -(auVar2[0xc] == auVar16[4]);
                              auVar24[0xd] = -(auVar2[0xd] == auVar16[5]);
                              auVar24[0xe] = -(auVar2[0xe] == auVar16[6]);
                              auVar24[0xf] = -(auVar2[0xf] == auVar16[7]);
                              uVar12 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(auVar24[0xf] >> 7) << 0xf;
                              uVar11 = (uint)uVar12;
                              while (uVar12 != 0) {
                                uVar4 = 0;
                                for (uVar5 = uVar11; (uVar5 & 1) == 0;
                                    uVar5 = uVar5 >> 1 | 0x80000000) {
                                  uVar4 = uVar4 + 1;
                                }
                                lVar13 = (uVar4 + uVar6 & uVar7) * -0xd8;
                                if (lStack_60 == *(longlong *)(lVar10 + -0xd8 + lVar13)) {
                                  if ((*(byte *)(lVar10 + lVar13 + -6) & 0x30) != 0) {
                                    bVar15 = *param_5;
                                    *param_5 = bVar15 ^ 1;
                                    lVar10 = pdb_14116e2e0(&lStack_68);
                                    *(byte *)(lVar10 + 0x28) = bVar15 ^ 1;
                                  }
                                  param_1[2] = lStack_58;
                                  *param_1 = lStack_68;
                                  param_1[1] = lStack_60;
                                  return param_1;
                                }
                                uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                                uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
                              }
                              auVar20[0] = -(auVar2[0] == -1);
                              auVar20[1] = -(auVar2[1] == -1);
                              auVar20[2] = -(auVar2[2] == -1);
                              auVar20[3] = -(auVar2[3] == -1);
                              auVar20[4] = -(auVar2[4] == -1);
                              auVar20[5] = -(auVar2[5] == -1);
                              auVar20[6] = -(auVar2[6] == -1);
                              auVar20[7] = -(auVar2[7] == -1);
                              auVar20[8] = -(auVar2[8] == -1);
                              auVar20[9] = -(auVar2[9] == -1);
                              auVar20[10] = -(auVar2[10] == -1);
                              auVar20[0xb] = -(auVar2[0xb] == -1);
                              auVar20[0xc] = -(auVar2[0xc] == -1);
                              auVar20[0xd] = -(auVar2[0xd] == -1);
                              auVar20[0xe] = -(auVar2[0xe] == -1);
                              auVar20[0xf] = -(auVar2[0xf] == -1);
                              if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                                               (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                                              (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                                             (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                                            (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                                           (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                                          (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                                         (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                                        (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
                                       (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
                                      (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
                                     (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
                                    (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
                                   (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
                                  (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0')
                              break;
                              uVar6 = uVar6 + lVar9 + 0x10;
                              lVar9 = lVar9 + 0x10;
                            }
                          }
                          pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                          pcVar3 = (code *)swi(3);
                          plVar8 = (longlong *)(*pcVar3)();
                          return plVar8;
                        }
                        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
                      }
                      auVar19[0] = -(auVar2[0] == -1);
                      auVar19[1] = -(auVar2[1] == -1);
                      auVar19[2] = -(auVar2[2] == -1);
                      auVar19[3] = -(auVar2[3] == -1);
                      auVar19[4] = -(auVar2[4] == -1);
                      auVar19[5] = -(auVar2[5] == -1);
                      auVar19[6] = -(auVar2[6] == -1);
                      auVar19[7] = -(auVar2[7] == -1);
                      auVar19[8] = -(auVar2[8] == -1);
                      auVar19[9] = -(auVar2[9] == -1);
                      auVar19[10] = -(auVar2[10] == -1);
                      auVar19[0xb] = -(auVar2[0xb] == -1);
                      auVar19[0xc] = -(auVar2[0xc] == -1);
                      auVar19[0xd] = -(auVar2[0xd] == -1);
                      auVar19[0xe] = -(auVar2[0xe] == -1);
                      auVar19[0xf] = -(auVar2[0xf] == -1);
                      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 ||
                                       (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                                     (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                                    (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                                   (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                                  (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
                                (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
                               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
                              (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
                             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
                            (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
                           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
                          (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
                      uVar6 = uVar6 + lVar9 + 0x10;
                      lVar9 = lVar9 + 0x10;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_142fa6b48);
                }
                uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
              }
              auVar18[0] = -(auVar2[0] == -1);
              auVar18[1] = -(auVar2[1] == -1);
              auVar18[2] = -(auVar2[2] == -1);
              auVar18[3] = -(auVar2[3] == -1);
              auVar18[4] = -(auVar2[4] == -1);
              auVar18[5] = -(auVar2[5] == -1);
              auVar18[6] = -(auVar2[6] == -1);
              auVar18[7] = -(auVar2[7] == -1);
              auVar18[8] = -(auVar2[8] == -1);
              auVar18[9] = -(auVar2[9] == -1);
              auVar18[10] = -(auVar2[10] == -1);
              auVar18[0xb] = -(auVar2[0xb] == -1);
              auVar18[0xc] = -(auVar2[0xc] == -1);
              auVar18[0xd] = -(auVar2[0xd] == -1);
              auVar18[0xe] = -(auVar2[0xe] == -1);
              auVar18[0xf] = -(auVar2[0xf] == -1);
              if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar18 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
              uVar7 = uVar7 + lVar13 + 0x10;
              lVar13 = lVar13 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142fa6b60);
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar17[0] = -(auVar2[0] == -1);
      auVar17[1] = -(auVar2[1] == -1);
      auVar17[2] = -(auVar2[2] == -1);
      auVar17[3] = -(auVar2[3] == -1);
      auVar17[4] = -(auVar2[4] == -1);
      auVar17[5] = -(auVar2[5] == -1);
      auVar17[6] = -(auVar2[6] == -1);
      auVar17[7] = -(auVar2[7] == -1);
      auVar17[8] = -(auVar2[8] == -1);
      auVar17[9] = -(auVar2[9] == -1);
      auVar17[10] = -(auVar2[10] == -1);
      auVar17[0xb] = -(auVar2[0xb] == -1);
      auVar17[0xc] = -(auVar2[0xc] == -1);
      auVar17[0xd] = -(auVar2[0xd] == -1);
      auVar17[0xe] = -(auVar2[0xe] == -1);
      auVar17[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

