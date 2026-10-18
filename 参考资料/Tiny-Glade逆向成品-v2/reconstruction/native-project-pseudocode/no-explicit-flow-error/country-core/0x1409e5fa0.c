// VA 0x1409e5fa0, PDB extent 1335 bytes
// country_core::startup::startup_nani::fine_sorted_draw_fn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_nani::fine_sorted_draw_fn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
   Extent: 1335 */

void pdb_1409e5fa0(int *param_1,longlong param_2,ulonglong param_3,uint param_4,longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  byte abStack_68 [20];
  longlong lStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar8 = *(ulonglong *)(param_2 + 0x78);
    uVar17 = 0x59a9ebec036a11fe;
    lVar12 = 0;
    while( true ) {
      uVar17 = uVar17 & uVar8;
      pcVar1 = (char *)(lVar7 + uVar17);
      auVar22[0] = -(*pcVar1 == DAT_142e33bd0);
      auVar22[1] = -(pcVar1[1] == UNK_142e33bd1);
      auVar22[2] = -(pcVar1[2] == UNK_142e33bd2);
      auVar22[3] = -(pcVar1[3] == UNK_142e33bd3);
      auVar22[4] = -(pcVar1[4] == UNK_142e33bd4);
      auVar22[5] = -(pcVar1[5] == UNK_142e33bd5);
      auVar22[6] = -(pcVar1[6] == UNK_142e33bd6);
      auVar22[7] = -(pcVar1[7] == UNK_142e33bd7);
      auVar22[8] = -(pcVar1[8] == UNK_142e33bd8);
      auVar22[9] = -(pcVar1[9] == UNK_142e33bd9);
      auVar22[10] = -(pcVar1[10] == UNK_142e33bda);
      auVar22[0xb] = -(pcVar1[0xb] == UNK_142e33bdb);
      auVar22[0xc] = -(pcVar1[0xc] == UNK_142e33bdc);
      auVar22[0xd] = -(pcVar1[0xd] == UNK_142e33bdd);
      auVar22[0xe] = -(pcVar1[0xe] == UNK_142e33bde);
      auVar22[0xf] = -(pcVar1[0xf] == UNK_142e33bdf);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar14 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar19 = uVar14 + uVar17 & uVar8;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar19 * -0x18);
        auVar28[0] = -(*pcVar2 == DAT_142e34980);
        auVar28[1] = -(pcVar2[1] == UNK_142e34981);
        auVar28[2] = -(pcVar2[2] == UNK_142e34982);
        auVar28[3] = -(pcVar2[3] == UNK_142e34983);
        auVar28[4] = -(pcVar2[4] == UNK_142e34984);
        auVar28[5] = -(pcVar2[5] == UNK_142e34985);
        auVar28[6] = -(pcVar2[6] == UNK_142e34986);
        auVar28[7] = -(pcVar2[7] == UNK_142e34987);
        auVar28[8] = -(pcVar2[8] == UNK_142e34988);
        auVar28[9] = -(pcVar2[9] == UNK_142e34989);
        auVar28[10] = -(pcVar2[10] == UNK_142e3498a);
        auVar28[0xb] = -(pcVar2[0xb] == UNK_142e3498b);
        auVar28[0xc] = -(pcVar2[0xc] == UNK_142e3498c);
        auVar28[0xd] = -(pcVar2[0xd] == UNK_142e3498d);
        auVar28[0xe] = -(pcVar2[0xe] == UNK_142e3498e);
        auVar28[0xf] = -(pcVar2[0xf] == UNK_142e3498f);
        if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
          uVar17 = *(ulonglong *)(lVar7 + uVar19 * -0x18 + -8);
          uVar19 = *(ulonglong *)(param_2 + 0x210);
          if (uVar19 <= uVar17) goto LAB_1409e6204;
          lVar12 = *(longlong *)(param_2 + 0x208);
          uVar17 = *(ulonglong *)(lVar12 + uVar17 * 8);
          if (uVar17 == 0) goto LAB_1409e6204;
          lVar20 = *(longlong *)(param_2 + 0x1d8);
          lVar13 = ~uVar17 * 0x40;
          if (*(longlong *)(lVar20 + 0x20 + lVar13) == 0) goto LAB_1409e6204;
          plVar3 = *(longlong **)(lVar13 + lVar20 + 0x10);
          uVar17 = 0x1d6a82b468dfb8a2;
          lVar13 = 0;
          goto LAB_1409e60cb;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar24[0] = -(*pcVar1 == -1);
      auVar24[1] = -(pcVar1[1] == -1);
      auVar24[2] = -(pcVar1[2] == -1);
      auVar24[3] = -(pcVar1[3] == -1);
      auVar24[4] = -(pcVar1[4] == -1);
      auVar24[5] = -(pcVar1[5] == -1);
      auVar24[6] = -(pcVar1[6] == -1);
      auVar24[7] = -(pcVar1[7] == -1);
      auVar24[8] = -(pcVar1[8] == -1);
      auVar24[9] = -(pcVar1[9] == -1);
      auVar24[10] = -(pcVar1[10] == -1);
      auVar24[0xb] = -(pcVar1[0xb] == -1);
      auVar24[0xc] = -(pcVar1[0xc] == -1);
      auVar24[0xd] = -(pcVar1[0xd] == -1);
      auVar24[0xe] = -(pcVar1[0xe] == -1);
      auVar24[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar17 = uVar17 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_1409e6204:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143031538);
LAB_1409e60cb:
  uVar17 = uVar17 & uVar8;
  pcVar1 = (char *)(lVar7 + uVar17);
  auVar29[0] = -(*pcVar1 == DAT_142e34ec0);
  auVar29[1] = -(pcVar1[1] == DAT_142e34ec0._1_1_);
  auVar29[2] = -(pcVar1[2] == DAT_142e34ec0._2_1_);
  auVar29[3] = -(pcVar1[3] == DAT_142e34ec0._3_1_);
  auVar29[4] = -(pcVar1[4] == DAT_142e34ec0._4_1_);
  auVar29[5] = -(pcVar1[5] == DAT_142e34ec0._5_1_);
  auVar29[6] = -(pcVar1[6] == DAT_142e34ec0._6_1_);
  auVar29[7] = -(pcVar1[7] == DAT_142e34ec0._7_1_);
  auVar29[8] = -(pcVar1[8] == DAT_142e34ec0._8_1_);
  auVar29[9] = -(pcVar1[9] == DAT_142e34ec0._9_1_);
  auVar29[10] = -(pcVar1[10] == DAT_142e34ec0._10_1_);
  auVar29[0xb] = -(pcVar1[0xb] == DAT_142e34ec0._11_1_);
  auVar29[0xc] = -(pcVar1[0xc] == DAT_142e34ec0._12_1_);
  auVar29[0xd] = -(pcVar1[0xd] == DAT_142e34ec0._13_1_);
  auVar29[0xe] = -(pcVar1[0xe] == DAT_142e34ec0._14_1_);
  auVar29[0xf] = -(pcVar1[0xf] == DAT_142e34ec0._15_1_);
  uVar11 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
  uVar10 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar14 = 0;
    for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar18 = uVar14 + uVar17 & uVar8;
    pcVar2 = (char *)(lVar7 + -0x18 + uVar18 * -0x18);
    auVar30[0] = -(*pcVar2 == DAT_142e60e60);
    auVar30[1] = -(pcVar2[1] == DAT_142e60e60._1_1_);
    auVar30[2] = -(pcVar2[2] == DAT_142e60e60._2_1_);
    auVar30[3] = -(pcVar2[3] == DAT_142e60e60._3_1_);
    auVar30[4] = -(pcVar2[4] == DAT_142e60e60._4_1_);
    auVar30[5] = -(pcVar2[5] == DAT_142e60e60._5_1_);
    auVar30[6] = -(pcVar2[6] == DAT_142e60e60._6_1_);
    auVar30[7] = -(pcVar2[7] == DAT_142e60e60._7_1_);
    auVar30[8] = -(pcVar2[8] == DAT_142e60e60._8_1_);
    auVar30[9] = -(pcVar2[9] == DAT_142e60e60._9_1_);
    auVar30[10] = -(pcVar2[10] == DAT_142e60e60._10_1_);
    auVar30[0xb] = -(pcVar2[0xb] == DAT_142e60e60._11_1_);
    auVar30[0xc] = -(pcVar2[0xc] == DAT_142e60e60._12_1_);
    auVar30[0xd] = -(pcVar2[0xd] == DAT_142e60e60._13_1_);
    auVar30[0xe] = -(pcVar2[0xe] == DAT_142e60e60._14_1_);
    auVar30[0xf] = -(pcVar2[0xf] == DAT_142e60e60._15_1_);
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
      uVar17 = *(ulonglong *)(lVar7 + uVar18 * -0x18 + -8);
      if (((uVar19 <= uVar17) || (uVar17 = *(ulonglong *)(lVar12 + uVar17 * 8), uVar17 == 0)) ||
         (lVar13 = ~uVar17 * 0x40, *(longlong *)(lVar20 + 0x20 + lVar13) == 0)) goto LAB_1409e637b;
      uVar4 = *(undefined8 *)(lVar13 + lVar20 + 0x10);
      uVar17 = 0x10a3366b2ce2bcb7;
      lVar13 = 0;
      goto LAB_1409e6196;
    }
    uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
  }
  goto LAB_1409e6120;
LAB_1409e6196:
  uVar17 = uVar17 & uVar8;
  auVar22 = *(undefined1 (*) [16])(lVar7 + uVar17);
  auVar31[0] = -(auVar22[0] == DAT_142e33df0);
  auVar31[1] = -(auVar22[1] == DAT_142e33df0._1_1_);
  auVar31[2] = -(auVar22[2] == DAT_142e33df0._2_1_);
  auVar31[3] = -(auVar22[3] == DAT_142e33df0._3_1_);
  auVar31[4] = -(auVar22[4] == DAT_142e33df0._4_1_);
  auVar31[5] = -(auVar22[5] == DAT_142e33df0._5_1_);
  auVar31[6] = -(auVar22[6] == DAT_142e33df0._6_1_);
  auVar31[7] = -(auVar22[7] == DAT_142e33df0._7_1_);
  auVar31[8] = -(auVar22[8] == DAT_142e33df0._8_1_);
  auVar31[9] = -(auVar22[9] == DAT_142e33df0._9_1_);
  auVar31[10] = -(auVar22[10] == DAT_142e33df0._10_1_);
  auVar31[0xb] = -(auVar22[0xb] == DAT_142e33df0._11_1_);
  auVar31[0xc] = -(auVar22[0xc] == DAT_142e33df0._12_1_);
  auVar31[0xd] = -(auVar22[0xd] == DAT_142e33df0._13_1_);
  auVar31[0xe] = -(auVar22[0xe] == DAT_142e33df0._14_1_);
  auVar31[0xf] = -(auVar22[0xf] == DAT_142e33df0._15_1_);
  uVar11 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar14 = 0;
    for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar18 = uVar14 + uVar17 & uVar8;
    pcVar1 = (char *)(lVar7 + -0x18 + uVar18 * -0x18);
    auVar32[0] = -(*pcVar1 == DAT_142e34190);
    auVar32[1] = -(pcVar1[1] == DAT_142e34190._1_1_);
    auVar32[2] = -(pcVar1[2] == DAT_142e34190._2_1_);
    auVar32[3] = -(pcVar1[3] == DAT_142e34190._3_1_);
    auVar32[4] = -(pcVar1[4] == DAT_142e34190._4_1_);
    auVar32[5] = -(pcVar1[5] == DAT_142e34190._5_1_);
    auVar32[6] = -(pcVar1[6] == DAT_142e34190._6_1_);
    auVar32[7] = -(pcVar1[7] == DAT_142e34190._7_1_);
    auVar32[8] = -(pcVar1[8] == DAT_142e34190._8_1_);
    auVar32[9] = -(pcVar1[9] == DAT_142e34190._9_1_);
    auVar32[10] = -(pcVar1[10] == DAT_142e34190._10_1_);
    auVar32[0xb] = -(pcVar1[0xb] == DAT_142e34190._11_1_);
    auVar32[0xc] = -(pcVar1[0xc] == DAT_142e34190._12_1_);
    auVar32[0xd] = -(pcVar1[0xd] == DAT_142e34190._13_1_);
    auVar32[0xe] = -(pcVar1[0xe] == DAT_142e34190._14_1_);
    auVar32[0xf] = -(pcVar1[0xf] == DAT_142e34190._15_1_);
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar8 = *(ulonglong *)(lVar7 + uVar18 * -0x18 + -8);
      if (((uVar8 < uVar19) && (uVar8 = *(ulonglong *)(lVar12 + uVar8 * 8), uVar8 != 0)) &&
         (lVar7 = ~uVar8 * 0x40, *(longlong *)(lVar20 + 0x20 + lVar7) != 0)) {
        bVar15 = (byte)param_4;
        if (0x1c < bVar15) {
          abStack_68[0] = bVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143032ac0,0x2b,abStack_68,&UNK_143032b10,&UNK_143031580);
        }
        uVar17 = (ulonglong)(param_4 * 4 & 0x7c) |
                 *(ulonglong *)(&UNK_143033078 + (param_3 & 0xff) * 8);
        lVar7 = *(longlong *)(lVar20 + lVar7 + 0x10);
        lVar12 = *(longlong *)(lVar7 + 0x30);
        uVar8 = *(ulonglong *)(lVar12 + 0x38);
        if (uVar8 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar17,uVar8,&UNK_14302d738);
        }
        uVar10 = *(uint *)(*(longlong *)(lVar12 + 0x30) + uVar17 * 4);
        pdb_141526a70(abStack_68,uVar4,param_5);
        pdb_141525a40(&lStack_80,uVar4,param_5);
        uStack_44 = uStack_70;
        lStack_54 = lStack_80;
        uStack_4c = uStack_78;
        if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1430315b0,0xf,&UNK_1430315c0);
        }
        lVar12 = *(longlong *)(param_1 + 2);
        lStack_80 = lVar12;
        if (plVar3[3] != 0) {
          uVar8 = pdb_1400af0a0(plVar3 + 4,&lStack_80);
          lVar20 = *plVar3;
          bVar21 = (byte)(uVar8 >> 0x39);
          auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
          auVar22 = pshuflw(auVar22,auVar22,0);
          lVar13 = 0;
          while( true ) {
            uVar8 = uVar8 & plVar3[1];
            auVar28 = *(undefined1 (*) [16])(lVar20 + uVar8);
            auVar27[0] = -(auVar28[0] == auVar22[0]);
            auVar27[1] = -(auVar28[1] == auVar22[1]);
            auVar27[2] = -(auVar28[2] == auVar22[2]);
            auVar27[3] = -(auVar28[3] == auVar22[3]);
            auVar27[4] = -(auVar28[4] == auVar22[4]);
            auVar27[5] = -(auVar28[5] == auVar22[5]);
            auVar27[6] = -(auVar28[6] == auVar22[6]);
            auVar27[7] = -(auVar28[7] == auVar22[7]);
            auVar27[8] = -(auVar28[8] == auVar22[0]);
            auVar27[9] = -(auVar28[9] == auVar22[1]);
            auVar27[10] = -(auVar28[10] == auVar22[2]);
            auVar27[0xb] = -(auVar28[0xb] == auVar22[3]);
            auVar27[0xc] = -(auVar28[0xc] == auVar22[4]);
            auVar27[0xd] = -(auVar28[0xd] == auVar22[5]);
            auVar27[0xe] = -(auVar28[0xe] == auVar22[6]);
            auVar27[0xf] = -(auVar28[0xf] == auVar22[7]);
            uVar11 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar27[0xf] >> 7) << 0xf;
            uVar14 = (uint)uVar11;
            while (uVar11 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              lVar16 = (uVar5 + uVar8 & plVar3[1]) * -0x30;
              if (lVar12 == *(longlong *)(lVar20 + -0x30 + lVar16)) {
                lVar20 = lVar20 + lVar16;
                lVar12 = pdb_141a076a0(param_5,lVar20 + -0x28);
                uVar9 = pdb_140e17290(lVar20 + -0x10,lVar12);
                *(byte *)(lVar12 + 0x28a) = *(byte *)(lVar12 + 0x28a) | 1;
                *(undefined8 *)(lVar12 + 200) = uVar9;
                if (*(char *)(lVar20 + -4) == '\0') {
                  pdb_140e25450(param_5);
                }
                else {
                  *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                  *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                  *(undefined1 *)(param_5 + 0x82) = 0;
                }
                uVar8 = *(ulonglong *)(lVar7 + 0x1258 + (ulonglong)(param_4 & 0x1f) * 8);
                if ((DAT_143cb2ce8 != '\0') || (uVar19 = 0x400, bVar15 < 2 && DAT_143cb2ce9 == '\0')
                   ) {
                  uVar19 = (ulonglong)((uVar8 & 0x1f) != 0) * 0x20 + uVar8 & 0xffffffffffffffe0;
                }
                pdb_140e24fa0(param_5,&lStack_54,(ulonglong)uVar10 * 0x14,abStack_68,uVar17 << 2,
                              uVar19);
                pdb_141535150(uVar4,param_5);
                pdb_1415353f0(uVar4,param_5);
                return;
              }
              uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
              uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
            }
            auVar23[0] = -(auVar28[0] == -1);
            auVar23[1] = -(auVar28[1] == -1);
            auVar23[2] = -(auVar28[2] == -1);
            auVar23[3] = -(auVar28[3] == -1);
            auVar23[4] = -(auVar28[4] == -1);
            auVar23[5] = -(auVar28[5] == -1);
            auVar23[6] = -(auVar28[6] == -1);
            auVar23[7] = -(auVar28[7] == -1);
            auVar23[8] = -(auVar28[8] == -1);
            auVar23[9] = -(auVar28[9] == -1);
            auVar23[10] = -(auVar28[10] == -1);
            auVar23[0xb] = -(auVar28[0xb] == -1);
            auVar23[0xc] = -(auVar28[0xc] == -1);
            auVar23[0xd] = -(auVar28[0xd] == -1);
            auVar23[0xe] = -(auVar28[0xe] == -1);
            auVar23[0xf] = -(auVar28[0xf] == -1);
            if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
            uVar8 = uVar8 + lVar13 + 0x10;
            lVar13 = lVar13 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143031598);
      }
      goto LAB_1409e63d2;
    }
    uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
  }
  auVar26[0] = -(auVar22[0] == -1);
  auVar26[1] = -(auVar22[1] == -1);
  auVar26[2] = -(auVar22[2] == -1);
  auVar26[3] = -(auVar22[3] == -1);
  auVar26[4] = -(auVar22[4] == -1);
  auVar26[5] = -(auVar22[5] == -1);
  auVar26[6] = -(auVar22[6] == -1);
  auVar26[7] = -(auVar22[7] == -1);
  auVar26[8] = -(auVar22[8] == -1);
  auVar26[9] = -(auVar22[9] == -1);
  auVar26[10] = -(auVar22[10] == -1);
  auVar26[0xb] = -(auVar22[0xb] == -1);
  auVar26[0xc] = -(auVar22[0xc] == -1);
  auVar26[0xd] = -(auVar22[0xd] == -1);
  auVar26[0xe] = -(auVar22[0xe] == -1);
  auVar26[0xf] = -(auVar22[0xf] == -1);
  if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') {
LAB_1409e63d2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143031568);
  }
  uVar17 = uVar17 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409e6196;
LAB_1409e6120:
  auVar25[0] = -(*pcVar1 == -1);
  auVar25[1] = -(pcVar1[1] == -1);
  auVar25[2] = -(pcVar1[2] == -1);
  auVar25[3] = -(pcVar1[3] == -1);
  auVar25[4] = -(pcVar1[4] == -1);
  auVar25[5] = -(pcVar1[5] == -1);
  auVar25[6] = -(pcVar1[6] == -1);
  auVar25[7] = -(pcVar1[7] == -1);
  auVar25[8] = -(pcVar1[8] == -1);
  auVar25[9] = -(pcVar1[9] == -1);
  auVar25[10] = -(pcVar1[10] == -1);
  auVar25[0xb] = -(pcVar1[0xb] == -1);
  auVar25[0xc] = -(pcVar1[0xc] == -1);
  auVar25[0xd] = -(pcVar1[0xd] == -1);
  auVar25[0xe] = -(pcVar1[0xe] == -1);
  auVar25[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
LAB_1409e637b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143031550);
  }
  uVar17 = uVar17 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409e60cb;
}

