// VA 0x1409e64e0, PDB extent 1476 bytes
// country_core::startup::startup_nani::coarse_sorted_draw_fn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_nani::coarse_sorted_draw_fn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
   Extent: 1476 */

void pdb_1409e64e0(int *param_1,longlong param_2,ulonglong param_3,uint param_4,longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte abStack_74 [20];
  longlong lStack_60;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x70);
    uVar7 = *(ulonglong *)(param_2 + 0x78);
    uVar17 = 0x59a9ebec036a11fe;
    lVar12 = 0;
    while( true ) {
      uVar17 = uVar17 & uVar7;
      pcVar1 = (char *)(lVar6 + uVar17);
      auVar20[0] = -(*pcVar1 == DAT_142e33bd0);
      auVar20[1] = -(pcVar1[1] == UNK_142e33bd1);
      auVar20[2] = -(pcVar1[2] == UNK_142e33bd2);
      auVar20[3] = -(pcVar1[3] == UNK_142e33bd3);
      auVar20[4] = -(pcVar1[4] == UNK_142e33bd4);
      auVar20[5] = -(pcVar1[5] == UNK_142e33bd5);
      auVar20[6] = -(pcVar1[6] == UNK_142e33bd6);
      auVar20[7] = -(pcVar1[7] == UNK_142e33bd7);
      auVar20[8] = -(pcVar1[8] == UNK_142e33bd8);
      auVar20[9] = -(pcVar1[9] == UNK_142e33bd9);
      auVar20[10] = -(pcVar1[10] == UNK_142e33bda);
      auVar20[0xb] = -(pcVar1[0xb] == UNK_142e33bdb);
      auVar20[0xc] = -(pcVar1[0xc] == UNK_142e33bdc);
      auVar20[0xd] = -(pcVar1[0xd] == UNK_142e33bdd);
      auVar20[0xe] = -(pcVar1[0xe] == UNK_142e33bde);
      auVar20[0xf] = -(pcVar1[0xf] == UNK_142e33bdf);
      uVar10 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar16 = 0;
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar11 = uVar16 + uVar17 & uVar7;
        pcVar2 = (char *)(lVar6 + -0x18 + uVar11 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_142e34980);
        auVar26[1] = -(pcVar2[1] == UNK_142e34981);
        auVar26[2] = -(pcVar2[2] == UNK_142e34982);
        auVar26[3] = -(pcVar2[3] == UNK_142e34983);
        auVar26[4] = -(pcVar2[4] == UNK_142e34984);
        auVar26[5] = -(pcVar2[5] == UNK_142e34985);
        auVar26[6] = -(pcVar2[6] == UNK_142e34986);
        auVar26[7] = -(pcVar2[7] == UNK_142e34987);
        auVar26[8] = -(pcVar2[8] == UNK_142e34988);
        auVar26[9] = -(pcVar2[9] == UNK_142e34989);
        auVar26[10] = -(pcVar2[10] == UNK_142e3498a);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_142e3498b);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_142e3498c);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_142e3498d);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_142e3498e);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_142e3498f);
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
          uVar17 = *(ulonglong *)(lVar6 + uVar11 * -0x18 + -8);
          uVar11 = *(ulonglong *)(param_2 + 0x210);
          if (uVar11 <= uVar17) goto LAB_1409e674b;
          lVar12 = *(longlong *)(param_2 + 0x208);
          uVar17 = *(ulonglong *)(lVar12 + uVar17 * 8);
          if (uVar17 == 0) goto LAB_1409e674b;
          lVar9 = *(longlong *)(param_2 + 0x1d8);
          lVar13 = ~uVar17 * 0x40;
          if (*(longlong *)(lVar9 + 0x20 + lVar13) == 0) goto LAB_1409e674b;
          plVar3 = *(longlong **)(lVar13 + lVar9 + 0x10);
          uVar17 = 0x1d6a82b468dfb8a2;
          lVar13 = 0;
          goto LAB_1409e660a;
        }
        uVar10 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar10);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar17 = uVar17 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1409e674b:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430315d8);
LAB_1409e660a:
  uVar17 = uVar17 & uVar7;
  pcVar1 = (char *)(lVar6 + uVar17);
  auVar27[0] = -(*pcVar1 == DAT_142e34ec0);
  auVar27[1] = -(pcVar1[1] == DAT_142e34ec0._1_1_);
  auVar27[2] = -(pcVar1[2] == DAT_142e34ec0._2_1_);
  auVar27[3] = -(pcVar1[3] == DAT_142e34ec0._3_1_);
  auVar27[4] = -(pcVar1[4] == DAT_142e34ec0._4_1_);
  auVar27[5] = -(pcVar1[5] == DAT_142e34ec0._5_1_);
  auVar27[6] = -(pcVar1[6] == DAT_142e34ec0._6_1_);
  auVar27[7] = -(pcVar1[7] == DAT_142e34ec0._7_1_);
  auVar27[8] = -(pcVar1[8] == DAT_142e34ec0._8_1_);
  auVar27[9] = -(pcVar1[9] == DAT_142e34ec0._9_1_);
  auVar27[10] = -(pcVar1[10] == DAT_142e34ec0._10_1_);
  auVar27[0xb] = -(pcVar1[0xb] == DAT_142e34ec0._11_1_);
  auVar27[0xc] = -(pcVar1[0xc] == DAT_142e34ec0._12_1_);
  auVar27[0xd] = -(pcVar1[0xd] == DAT_142e34ec0._13_1_);
  auVar27[0xe] = -(pcVar1[0xe] == DAT_142e34ec0._14_1_);
  auVar27[0xf] = -(pcVar1[0xf] == DAT_142e34ec0._15_1_);
  uVar10 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar10;
  while (uVar10 != 0) {
    uVar16 = 0;
    for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar18 = uVar16 + uVar17 & uVar7;
    pcVar2 = (char *)(lVar6 + -0x18 + uVar18 * -0x18);
    auVar28[0] = -(*pcVar2 == DAT_142e60e60);
    auVar28[1] = -(pcVar2[1] == DAT_142e60e60._1_1_);
    auVar28[2] = -(pcVar2[2] == DAT_142e60e60._2_1_);
    auVar28[3] = -(pcVar2[3] == DAT_142e60e60._3_1_);
    auVar28[4] = -(pcVar2[4] == DAT_142e60e60._4_1_);
    auVar28[5] = -(pcVar2[5] == DAT_142e60e60._5_1_);
    auVar28[6] = -(pcVar2[6] == DAT_142e60e60._6_1_);
    auVar28[7] = -(pcVar2[7] == DAT_142e60e60._7_1_);
    auVar28[8] = -(pcVar2[8] == DAT_142e60e60._8_1_);
    auVar28[9] = -(pcVar2[9] == DAT_142e60e60._9_1_);
    auVar28[10] = -(pcVar2[10] == DAT_142e60e60._10_1_);
    auVar28[0xb] = -(pcVar2[0xb] == DAT_142e60e60._11_1_);
    auVar28[0xc] = -(pcVar2[0xc] == DAT_142e60e60._12_1_);
    auVar28[0xd] = -(pcVar2[0xd] == DAT_142e60e60._13_1_);
    auVar28[0xe] = -(pcVar2[0xe] == DAT_142e60e60._14_1_);
    auVar28[0xf] = -(pcVar2[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar17 = *(ulonglong *)(lVar6 + uVar18 * -0x18 + -8);
      if (((uVar11 <= uVar17) || (uVar17 = *(ulonglong *)(lVar12 + uVar17 * 8), uVar17 == 0)) ||
         (lVar13 = ~uVar17 * 0x40, *(longlong *)(lVar9 + 0x20 + lVar13) == 0)) goto LAB_1409e67d5;
      puStack_50 = *(ulonglong **)(lVar13 + lVar9 + 0x10);
      uVar17 = 0x10a3366b2ce2bcb7;
      lVar13 = 0;
      goto LAB_1409e66dc;
    }
    uVar10 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar10);
  }
  goto LAB_1409e6660;
LAB_1409e66dc:
  uVar17 = uVar17 & uVar7;
  auVar20 = *(undefined1 (*) [16])(lVar6 + uVar17);
  auVar29[0] = -(auVar20[0] == DAT_142e33df0);
  auVar29[1] = -(auVar20[1] == DAT_142e33df0._1_1_);
  auVar29[2] = -(auVar20[2] == DAT_142e33df0._2_1_);
  auVar29[3] = -(auVar20[3] == DAT_142e33df0._3_1_);
  auVar29[4] = -(auVar20[4] == DAT_142e33df0._4_1_);
  auVar29[5] = -(auVar20[5] == DAT_142e33df0._5_1_);
  auVar29[6] = -(auVar20[6] == DAT_142e33df0._6_1_);
  auVar29[7] = -(auVar20[7] == DAT_142e33df0._7_1_);
  auVar29[8] = -(auVar20[8] == DAT_142e33df0._8_1_);
  auVar29[9] = -(auVar20[9] == DAT_142e33df0._9_1_);
  auVar29[10] = -(auVar20[10] == DAT_142e33df0._10_1_);
  auVar29[0xb] = -(auVar20[0xb] == DAT_142e33df0._11_1_);
  auVar29[0xc] = -(auVar20[0xc] == DAT_142e33df0._12_1_);
  auVar29[0xd] = -(auVar20[0xd] == DAT_142e33df0._13_1_);
  auVar29[0xe] = -(auVar20[0xe] == DAT_142e33df0._14_1_);
  auVar29[0xf] = -(auVar20[0xf] == DAT_142e33df0._15_1_);
  uVar10 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
  uVar14 = (uint)uVar10;
  uVar8 = (undefined8)DAT_142e34190;
  while (uVar10 != 0) {
    uVar16 = 0;
    for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar18 = uVar16 + uVar17 & uVar7;
    pcVar1 = (char *)(lVar6 + -0x18 + uVar18 * -0x18);
    auVar30[0] = -(*pcVar1 == DAT_142e34190);
    auVar30[1] = -(pcVar1[1] == DAT_142e34190._1_1_);
    auVar30[2] = -(pcVar1[2] == DAT_142e34190._2_1_);
    auVar30[3] = -(pcVar1[3] == DAT_142e34190._3_1_);
    auVar30[4] = -(pcVar1[4] == DAT_142e34190._4_1_);
    auVar30[5] = -(pcVar1[5] == DAT_142e34190._5_1_);
    auVar30[6] = -(pcVar1[6] == DAT_142e34190._6_1_);
    auVar30[7] = -(pcVar1[7] == DAT_142e34190._7_1_);
    auVar30[8] = -(pcVar1[8] == DAT_142e34190._8_1_);
    auVar30[9] = -(pcVar1[9] == DAT_142e34190._9_1_);
    auVar30[10] = -(pcVar1[10] == DAT_142e34190._10_1_);
    auVar30[0xb] = -(pcVar1[0xb] == DAT_142e34190._11_1_);
    auVar30[0xc] = -(pcVar1[0xc] == DAT_142e34190._12_1_);
    auVar30[0xd] = -(pcVar1[0xd] == DAT_142e34190._13_1_);
    auVar30[0xe] = -(pcVar1[0xe] == DAT_142e34190._14_1_);
    auVar30[0xf] = -(pcVar1[0xf] == DAT_142e34190._15_1_);
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar7 = *(ulonglong *)(lVar6 + uVar18 * -0x18 + -8);
      if (((uVar7 < uVar11) && (uVar7 = *(ulonglong *)(lVar12 + uVar7 * 8), uVar7 != 0)) &&
         (lVar6 = ~uVar7 * 0x40, *(longlong *)(lVar9 + 0x20 + lVar6) != 0)) {
        abStack_74[0] = (byte)param_4;
        if (0x1c < abStack_74[0]) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143032ac0,0x2b,abStack_74,&UNK_143032b10,&UNK_143031620);
        }
        lVar12 = *(longlong *)(lVar9 + lVar6 + 0x10);
        uVar7 = (ulonglong)((param_4 & 0x1f) * 0xa0);
        lVar6 = lVar12 + uVar7;
        puVar15 = (ulonglong *)(lVar6 + 0x38);
        uVar7 = *(ulonglong *)(lVar12 + 0x38 + uVar7);
        if (uVar7 < 0xfffffffffffffff0 && (char)(((uint)uVar7 & 8) >> 3) == '\0') {
          LOCK();
          uVar17 = *puVar15;
          if (uVar7 == uVar17) {
            *puVar15 = uVar7 + 0x10;
          }
          UNLOCK();
          if (uVar7 == uVar17) goto LAB_1409e67f8;
        }
        pdb_142dbb5f0(puVar15,0,uVar8,1000000000);
LAB_1409e67f8:
        pdb_140e9a150(puVar15);
        pdb_140e9a150((ulonglong)puVar15 | 1);
        if (*(longlong *)(lVar6 + 0x40) == -0x7fffffffffffffff) {
          puStack_50 = puVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14302d660);
        }
        lVar9 = lVar6 + 0xc0;
        if (SBORROW8(0,*(longlong *)(lVar6 + 0x40))) {
          lVar9 = lVar6 + 0x48;
        }
        uStack_58 = *(undefined8 *)(lVar9 + 8);
        pdb_140e9a350(puVar15);
        pdb_140e9a350((ulonglong)puVar15 | 1);
        LOCK();
        uVar7 = *puVar15;
        *puVar15 = *puVar15 - 0x10;
        UNLOCK();
        if ((uVar7 & 0xfffffffffffffff2) == 0x12) {
          pdb_142dbbf50(puVar15);
        }
        puVar15 = puStack_50;
        uVar17 = (ulonglong)((param_4 & 0x1f) << 2) |
                 *(ulonglong *)(&UNK_143033078 + (param_3 & 0xff) * 8);
        uVar7 = *(ulonglong *)(*(longlong *)(lVar12 + 0x30) + 0x38);
        if (uVar17 < uVar7) {
          uVar14 = *(uint *)(*(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x30) + uVar17 * 4);
          pdb_141525a40(abStack_74,puStack_50,param_5);
          if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_1430315b0,0xf,&UNK_143031650);
          }
          lVar6 = *(longlong *)(param_1 + 2);
          lStack_60 = lVar6;
          if (plVar3[3] != 0) {
            uVar7 = pdb_1400af0a0(plVar3 + 4,&lStack_60);
            lVar12 = *plVar3;
            bVar19 = (byte)(uVar7 >> 0x39);
            auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
            auVar20 = pshuflw(auVar20,auVar20,0);
            lVar9 = 0;
            while( true ) {
              uVar7 = uVar7 & plVar3[1];
              auVar26 = *(undefined1 (*) [16])(lVar12 + uVar7);
              auVar25[0] = -(auVar26[0] == auVar20[0]);
              auVar25[1] = -(auVar26[1] == auVar20[1]);
              auVar25[2] = -(auVar26[2] == auVar20[2]);
              auVar25[3] = -(auVar26[3] == auVar20[3]);
              auVar25[4] = -(auVar26[4] == auVar20[4]);
              auVar25[5] = -(auVar26[5] == auVar20[5]);
              auVar25[6] = -(auVar26[6] == auVar20[6]);
              auVar25[7] = -(auVar26[7] == auVar20[7]);
              auVar25[8] = -(auVar26[8] == auVar20[0]);
              auVar25[9] = -(auVar26[9] == auVar20[1]);
              auVar25[10] = -(auVar26[10] == auVar20[2]);
              auVar25[0xb] = -(auVar26[0xb] == auVar20[3]);
              auVar25[0xc] = -(auVar26[0xc] == auVar20[4]);
              auVar25[0xd] = -(auVar26[0xd] == auVar20[5]);
              auVar25[0xe] = -(auVar26[0xe] == auVar20[6]);
              auVar25[0xf] = -(auVar26[0xf] == auVar20[7]);
              uVar10 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar25[0xf] >> 7) << 0xf;
              uVar16 = (uint)uVar10;
              while (uVar10 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                lVar13 = (uVar4 + uVar7 & plVar3[1]) * -0x30;
                if (lVar6 == *(longlong *)(lVar12 + -0x30 + lVar13)) {
                  lVar12 = lVar12 + lVar13;
                  lVar6 = pdb_141a076a0(param_5,lVar12 + -0x28);
                  uVar8 = pdb_140e17290(lVar12 + -0x10,lVar6);
                  *(byte *)(lVar6 + 0x28a) = *(byte *)(lVar6 + 0x28a) | 1;
                  *(undefined8 *)(lVar6 + 200) = uVar8;
                  if (*(char *)(lVar12 + -4) == '\0') {
                    pdb_140e25450(param_5);
                  }
                  else {
                    *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                    *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                    *(undefined1 *)(param_5 + 0x82) = 0;
                  }
                  pdb_140e24cb0(param_5,abStack_74,(ulonglong)uVar14 * 0x14,uStack_58);
                  pdb_1415353f0(puVar15,param_5);
                  return;
                }
                uVar10 = (ushort)(uVar16 - 1) & (ushort)uVar16;
                uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar10);
              }
              auVar21[0] = -(auVar26[0] == -1);
              auVar21[1] = -(auVar26[1] == -1);
              auVar21[2] = -(auVar26[2] == -1);
              auVar21[3] = -(auVar26[3] == -1);
              auVar21[4] = -(auVar26[4] == -1);
              auVar21[5] = -(auVar26[5] == -1);
              auVar21[6] = -(auVar26[6] == -1);
              auVar21[7] = -(auVar26[7] == -1);
              auVar21[8] = -(auVar26[8] == -1);
              auVar21[9] = -(auVar26[9] == -1);
              auVar21[10] = -(auVar26[10] == -1);
              auVar21[0xb] = -(auVar26[0xb] == -1);
              auVar21[0xc] = -(auVar26[0xc] == -1);
              auVar21[0xd] = -(auVar26[0xd] == -1);
              auVar21[0xe] = -(auVar26[0xe] == -1);
              auVar21[0xf] = -(auVar26[0xf] == -1);
              if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
              uVar7 = uVar7 + lVar9 + 0x10;
              lVar9 = lVar9 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143031638);
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar17,uVar7,&UNK_14302d738);
      }
      goto LAB_1409e67e1;
    }
    uVar10 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar10);
  }
  auVar24[0] = -(auVar20[0] == -1);
  auVar24[1] = -(auVar20[1] == -1);
  auVar24[2] = -(auVar20[2] == -1);
  auVar24[3] = -(auVar20[3] == -1);
  auVar24[4] = -(auVar20[4] == -1);
  auVar24[5] = -(auVar20[5] == -1);
  auVar24[6] = -(auVar20[6] == -1);
  auVar24[7] = -(auVar20[7] == -1);
  auVar24[8] = -(auVar20[8] == -1);
  auVar24[9] = -(auVar20[9] == -1);
  auVar24[10] = -(auVar20[10] == -1);
  auVar24[0xb] = -(auVar20[0xb] == -1);
  auVar24[0xc] = -(auVar20[0xc] == -1);
  auVar24[0xd] = -(auVar20[0xd] == -1);
  auVar24[0xe] = -(auVar20[0xe] == -1);
  auVar24[0xf] = -(auVar20[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_1409e67e1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143031608);
  }
  uVar17 = uVar17 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409e66dc;
LAB_1409e6660:
  auVar23[0] = -(*pcVar1 == -1);
  auVar23[1] = -(pcVar1[1] == -1);
  auVar23[2] = -(pcVar1[2] == -1);
  auVar23[3] = -(pcVar1[3] == -1);
  auVar23[4] = -(pcVar1[4] == -1);
  auVar23[5] = -(pcVar1[5] == -1);
  auVar23[6] = -(pcVar1[6] == -1);
  auVar23[7] = -(pcVar1[7] == -1);
  auVar23[8] = -(pcVar1[8] == -1);
  auVar23[9] = -(pcVar1[9] == -1);
  auVar23[10] = -(pcVar1[10] == -1);
  auVar23[0xb] = -(pcVar1[0xb] == -1);
  auVar23[0xc] = -(pcVar1[0xc] == -1);
  auVar23[0xd] = -(pcVar1[0xd] == -1);
  auVar23[0xe] = -(pcVar1[0xe] == -1);
  auVar23[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') {
LAB_1409e67d5:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430315f0);
  }
  uVar17 = uVar17 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409e660a;
}

