// VA 0x1409c16a0, PDB extent 1847 bytes
// country_core::systems::render_loop::lut_gallery::render_photomode_lut_gallery
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/lut_gallery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::lut_gallery::render_photomode_lut_gallery
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/lut_gallery.rs
   Extent: 1847 */

undefined8 pdb_1409c16a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c != '\0') {
    return 1;
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x70);
    uVar4 = *(ulonglong *)(param_2 + 0x78);
    uVar15 = 0xc473d25527169139;
    lVar17 = 0;
    while( true ) {
      uVar15 = uVar15 & uVar4;
      pcVar1 = (char *)(lVar10 + uVar15);
      auVar25[0] = -(*pcVar1 == DAT_142e34310);
      auVar25[1] = -(pcVar1[1] == UNK_142e34311);
      auVar25[2] = -(pcVar1[2] == UNK_142e34312);
      auVar25[3] = -(pcVar1[3] == UNK_142e34313);
      auVar25[4] = -(pcVar1[4] == UNK_142e34314);
      auVar25[5] = -(pcVar1[5] == UNK_142e34315);
      auVar25[6] = -(pcVar1[6] == UNK_142e34316);
      auVar25[7] = -(pcVar1[7] == UNK_142e34317);
      auVar25[8] = -(pcVar1[8] == UNK_142e34318);
      auVar25[9] = -(pcVar1[9] == UNK_142e34319);
      auVar25[10] = -(pcVar1[10] == UNK_142e3431a);
      auVar25[0xb] = -(pcVar1[0xb] == UNK_142e3431b);
      auVar25[0xc] = -(pcVar1[0xc] == UNK_142e3431c);
      auVar25[0xd] = -(pcVar1[0xd] == UNK_142e3431d);
      auVar25[0xe] = -(pcVar1[0xe] == UNK_142e3431e);
      auVar25[0xf] = -(pcVar1[0xf] == UNK_142e3431f);
      uVar11 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar12 = uVar7 + uVar15 & uVar4;
        pcVar2 = (char *)(lVar10 + -0x18 + uVar12 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_142e34e10);
        auVar26[1] = -(pcVar2[1] == UNK_142e34e11);
        auVar26[2] = -(pcVar2[2] == UNK_142e34e12);
        auVar26[3] = -(pcVar2[3] == UNK_142e34e13);
        auVar26[4] = -(pcVar2[4] == UNK_142e34e14);
        auVar26[5] = -(pcVar2[5] == UNK_142e34e15);
        auVar26[6] = -(pcVar2[6] == UNK_142e34e16);
        auVar26[7] = -(pcVar2[7] == UNK_142e34e17);
        auVar26[8] = -(pcVar2[8] == UNK_142e34e18);
        auVar26[9] = -(pcVar2[9] == UNK_142e34e19);
        auVar26[10] = -(pcVar2[10] == UNK_142e34e1a);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_142e34e1b);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_142e34e1c);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_142e34e1d);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_142e34e1e);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_142e34e1f);
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
          uVar15 = *(ulonglong *)(lVar10 + uVar12 * -0x18 + -8);
          uVar12 = *(ulonglong *)(param_2 + 0x210);
          if (uVar12 <= uVar15) goto LAB_1409c1946;
          lVar17 = *(longlong *)(param_2 + 0x208);
          uVar15 = *(ulonglong *)(lVar17 + uVar15 * 8);
          if (uVar15 == 0) goto LAB_1409c1946;
          lVar16 = *(longlong *)(param_2 + 0x1d8);
          lVar13 = ~uVar15 * 0x40;
          if (*(longlong *)(lVar16 + 0x20 + lVar13) == 0) goto LAB_1409c1946;
          plStack_50 = *(longlong **)(lVar13 + lVar16 + 0x10);
          uVar15 = 0xf1335775cdf5bf9c;
          lVar13 = 0;
          goto LAB_1409c17f7;
        }
        uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
      }
      auVar20[0] = -(*pcVar1 == -1);
      auVar20[1] = -(pcVar1[1] == -1);
      auVar20[2] = -(pcVar1[2] == -1);
      auVar20[3] = -(pcVar1[3] == -1);
      auVar20[4] = -(pcVar1[4] == -1);
      auVar20[5] = -(pcVar1[5] == -1);
      auVar20[6] = -(pcVar1[6] == -1);
      auVar20[7] = -(pcVar1[7] == -1);
      auVar20[8] = -(pcVar1[8] == -1);
      auVar20[9] = -(pcVar1[9] == -1);
      auVar20[10] = -(pcVar1[10] == -1);
      auVar20[0xb] = -(pcVar1[0xb] == -1);
      auVar20[0xc] = -(pcVar1[0xc] == -1);
      auVar20[0xd] = -(pcVar1[0xd] == -1);
      auVar20[0xe] = -(pcVar1[0xe] == -1);
      auVar20[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar15 = uVar15 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
LAB_1409c1946:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302bbe0);
LAB_1409c17f7:
  uVar15 = uVar15 & uVar4;
  pcVar1 = (char *)(lVar10 + uVar15);
  auVar27[0] = -(*pcVar1 == DAT_142e34070);
  auVar27[1] = -(pcVar1[1] == DAT_142e34070._1_1_);
  auVar27[2] = -(pcVar1[2] == DAT_142e34070._2_1_);
  auVar27[3] = -(pcVar1[3] == DAT_142e34070._3_1_);
  auVar27[4] = -(pcVar1[4] == DAT_142e34070._4_1_);
  auVar27[5] = -(pcVar1[5] == DAT_142e34070._5_1_);
  auVar27[6] = -(pcVar1[6] == DAT_142e34070._6_1_);
  auVar27[7] = -(pcVar1[7] == DAT_142e34070._7_1_);
  auVar27[8] = -(pcVar1[8] == DAT_142e34070._8_1_);
  auVar27[9] = -(pcVar1[9] == DAT_142e34070._9_1_);
  auVar27[10] = -(pcVar1[10] == DAT_142e34070._10_1_);
  auVar27[0xb] = -(pcVar1[0xb] == DAT_142e34070._11_1_);
  auVar27[0xc] = -(pcVar1[0xc] == DAT_142e34070._12_1_);
  auVar27[0xd] = -(pcVar1[0xd] == DAT_142e34070._13_1_);
  auVar27[0xe] = -(pcVar1[0xe] == DAT_142e34070._14_1_);
  auVar27[0xf] = -(pcVar1[0xf] == DAT_142e34070._15_1_);
  uVar11 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
  uVar14 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar18 = uVar7 + uVar15 & uVar4;
    pcVar2 = (char *)(lVar10 + -0x18 + uVar18 * -0x18);
    auVar28[0] = -(*pcVar2 == DAT_142e34080);
    auVar28[1] = -(pcVar2[1] == DAT_142e34080._1_1_);
    auVar28[2] = -(pcVar2[2] == DAT_142e34080._2_1_);
    auVar28[3] = -(pcVar2[3] == DAT_142e34080._3_1_);
    auVar28[4] = -(pcVar2[4] == DAT_142e34080._4_1_);
    auVar28[5] = -(pcVar2[5] == DAT_142e34080._5_1_);
    auVar28[6] = -(pcVar2[6] == DAT_142e34080._6_1_);
    auVar28[7] = -(pcVar2[7] == DAT_142e34080._7_1_);
    auVar28[8] = -(pcVar2[8] == DAT_142e34080._8_1_);
    auVar28[9] = -(pcVar2[9] == DAT_142e34080._9_1_);
    auVar28[10] = -(pcVar2[10] == DAT_142e34080._10_1_);
    auVar28[0xb] = -(pcVar2[0xb] == DAT_142e34080._11_1_);
    auVar28[0xc] = -(pcVar2[0xc] == DAT_142e34080._12_1_);
    auVar28[0xd] = -(pcVar2[0xd] == DAT_142e34080._13_1_);
    auVar28[0xe] = -(pcVar2[0xe] == DAT_142e34080._14_1_);
    auVar28[0xf] = -(pcVar2[0xf] == DAT_142e34080._15_1_);
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
      uVar15 = *(ulonglong *)(lVar10 + uVar18 * -0x18 + -8);
      if (((uVar12 <= uVar15) || (uVar15 = *(ulonglong *)(lVar17 + uVar15 * 8), uVar15 == 0)) ||
         (lVar13 = ~uVar15 * 0x40, *(longlong *)(lVar16 + 0x20 + lVar13) == 0)) goto LAB_1409c1952;
      piVar5 = *(int **)(lVar13 + lVar16 + 0x10);
      if (*piVar5 != 0xb) {
        return 1;
      }
      if ((char)piVar5[2] != '\x01') {
        return 1;
      }
      uVar15 = 0x7057b4358e925fdb;
      lVar13 = 0;
      goto LAB_1409c18d5;
    }
    uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
  }
  goto LAB_1409c184b;
LAB_1409c18d5:
  uVar15 = uVar15 & uVar4;
  auVar25 = *(undefined1 (*) [16])(lVar10 + uVar15);
  auVar29[0] = -(auVar25[0] == DAT_142e33d90);
  auVar29[1] = -(auVar25[1] == DAT_142e33d90._1_1_);
  auVar29[2] = -(auVar25[2] == DAT_142e33d90._2_1_);
  auVar29[3] = -(auVar25[3] == DAT_142e33d90._3_1_);
  auVar29[4] = -(auVar25[4] == DAT_142e33d90._4_1_);
  auVar29[5] = -(auVar25[5] == DAT_142e33d90._5_1_);
  auVar29[6] = -(auVar25[6] == DAT_142e33d90._6_1_);
  auVar29[7] = -(auVar25[7] == DAT_142e33d90._7_1_);
  auVar29[8] = -(auVar25[8] == DAT_142e33d90._8_1_);
  auVar29[9] = -(auVar25[9] == DAT_142e33d90._9_1_);
  auVar29[10] = -(auVar25[10] == DAT_142e33d90._10_1_);
  auVar29[0xb] = -(auVar25[0xb] == DAT_142e33d90._11_1_);
  auVar29[0xc] = -(auVar25[0xc] == DAT_142e33d90._12_1_);
  auVar29[0xd] = -(auVar25[0xd] == DAT_142e33d90._13_1_);
  auVar29[0xe] = -(auVar25[0xe] == DAT_142e33d90._14_1_);
  auVar29[0xf] = -(auVar25[0xf] == DAT_142e33d90._15_1_);
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
  uVar14 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar18 = uVar7 + uVar15 & uVar4;
    pcVar1 = (char *)(lVar10 + -0x18 + uVar18 * -0x18);
    auVar30[0] = -(*pcVar1 == DAT_142e34350);
    auVar30[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar30[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar30[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar30[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar30[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar30[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar30[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar30[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar30[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar30[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar30[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar30[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar30[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar30[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar30[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
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
      uVar4 = *(ulonglong *)(lVar10 + uVar18 * -0x18 + -8);
      if (((uVar12 <= uVar4) || (uVar4 = *(ulonglong *)(lVar17 + uVar4 * 8), uVar4 == 0)) ||
         (lVar10 = ~uVar4 * 0x40, *(longlong *)(lVar16 + 0x20 + lVar10) == 0)) goto LAB_1409c1a9d;
      lVar17 = plStack_50[1];
      if (lVar17 == 0) {
        return 0;
      }
      uVar6 = *(undefined8 *)(lVar16 + lVar10 + 0x10);
      pcVar1 = (char *)(lVar17 + 0x10);
      LOCK();
      bVar19 = *(char *)(lVar17 + 0x10) == '\0';
      if (bVar19) {
        *(char *)(lVar17 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar19) {
        pdb_142dbd1a0(pcVar1,plStack_50,1000000000);
      }
      pdb_140e9a150(pcVar1);
      if (*(longlong *)(lVar17 + 0x18) == 0) {
        pdb_140e9a350();
        LOCK();
        cVar3 = *pcVar1;
        if (cVar3 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar3 == '\x01') {
          return 0;
        }
        pdb_142dbcef0(pcVar1,0);
        return 0;
      }
      pcStack_58 = pcVar1;
      pdb_140e1ea30(auStack_f0,*(longlong *)(lVar17 + 0x18),param_1,0x23,&UNK_143330ab0);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409c1cff;
      lVar10 = *(longlong *)(param_2 + 0x70);
      uVar4 = *(ulonglong *)(param_2 + 0x78);
      uVar15 = 0x5a2668da2504810c;
      lVar17 = 0;
      goto LAB_1409c1a2c;
    }
    uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
  }
  goto LAB_1409c1927;
LAB_1409c1a2c:
  uVar15 = uVar15 & uVar4;
  pcVar1 = (char *)(lVar10 + uVar15);
  auVar31[0] = -(*pcVar1 == DAT_142e343a0);
  auVar31[1] = -(pcVar1[1] == DAT_142e343a0._1_1_);
  auVar31[2] = -(pcVar1[2] == DAT_142e343a0._2_1_);
  auVar31[3] = -(pcVar1[3] == DAT_142e343a0._3_1_);
  auVar31[4] = -(pcVar1[4] == DAT_142e343a0._4_1_);
  auVar31[5] = -(pcVar1[5] == DAT_142e343a0._5_1_);
  auVar31[6] = -(pcVar1[6] == DAT_142e343a0._6_1_);
  auVar31[7] = -(pcVar1[7] == DAT_142e343a0._7_1_);
  auVar31[8] = -(pcVar1[8] == DAT_142e343a0._8_1_);
  auVar31[9] = -(pcVar1[9] == DAT_142e343a0._9_1_);
  auVar31[10] = -(pcVar1[10] == DAT_142e343a0._10_1_);
  auVar31[0xb] = -(pcVar1[0xb] == DAT_142e343a0._11_1_);
  auVar31[0xc] = -(pcVar1[0xc] == DAT_142e343a0._12_1_);
  auVar31[0xd] = -(pcVar1[0xd] == DAT_142e343a0._13_1_);
  auVar31[0xe] = -(pcVar1[0xe] == DAT_142e343a0._14_1_);
  auVar31[0xf] = -(pcVar1[0xf] == DAT_142e343a0._15_1_);
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
  uVar14 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar12 = uVar7 + uVar15 & uVar4;
    pcVar2 = (char *)(lVar10 + -0x18 + uVar12 * -0x18);
    auVar32[0] = -(*pcVar2 == DAT_142e64940);
    auVar32[1] = -(pcVar2[1] == UNK_142e64941);
    auVar32[2] = -(pcVar2[2] == UNK_142e64942);
    auVar32[3] = -(pcVar2[3] == UNK_142e64943);
    auVar32[4] = -(pcVar2[4] == UNK_142e64944);
    auVar32[5] = -(pcVar2[5] == UNK_142e64945);
    auVar32[6] = -(pcVar2[6] == UNK_142e64946);
    auVar32[7] = -(pcVar2[7] == UNK_142e64947);
    auVar32[8] = -(pcVar2[8] == UNK_142e64948);
    auVar32[9] = -(pcVar2[9] == UNK_142e64949);
    auVar32[10] = -(pcVar2[10] == UNK_142e6494a);
    auVar32[0xb] = -(pcVar2[0xb] == UNK_142e6494b);
    auVar32[0xc] = -(pcVar2[0xc] == UNK_142e6494c);
    auVar32[0xd] = -(pcVar2[0xd] == UNK_142e6494d);
    auVar32[0xe] = -(pcVar2[0xe] == UNK_142e6494e);
    auVar32[0xf] = -(pcVar2[0xf] == UNK_142e6494f);
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
      uVar15 = *(ulonglong *)(lVar10 + uVar12 * -0x18 + -8);
      if (*(ulonglong *)(param_2 + 0x210) <= uVar15) goto LAB_1409c1cff;
      uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar15 * 8);
      if (uVar15 == 0) goto LAB_1409c1cff;
      lVar17 = *(longlong *)(param_2 + 0x1d8);
      lVar16 = ~uVar15 * 0x40;
      if (*(longlong *)(lVar17 + 0x20 + lVar16) == 0) goto LAB_1409c1cff;
      lVar16 = *(longlong *)(lVar16 + lVar17 + 0x10);
      uVar15 = 0x7c89f70d388ca3e;
      lVar13 = 0;
      goto LAB_1409c1b1e;
    }
    uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
  }
  goto LAB_1409c1a7e;
LAB_1409c1b1e:
  uVar15 = uVar15 & uVar4;
  auVar25 = *(undefined1 (*) [16])(lVar10 + uVar15);
  auVar33[0] = -(auVar25[0] == DAT_142e343e0);
  auVar33[1] = -(auVar25[1] == DAT_142e343e0._1_1_);
  auVar33[2] = -(auVar25[2] == DAT_142e343e0._2_1_);
  auVar33[3] = -(auVar25[3] == DAT_142e343e0._3_1_);
  auVar33[4] = -(auVar25[4] == DAT_142e343e0._4_1_);
  auVar33[5] = -(auVar25[5] == DAT_142e343e0._5_1_);
  auVar33[6] = -(auVar25[6] == DAT_142e343e0._6_1_);
  auVar33[7] = -(auVar25[7] == DAT_142e343e0._7_1_);
  auVar33[8] = -(auVar25[8] == DAT_142e343e0._8_1_);
  auVar33[9] = -(auVar25[9] == DAT_142e343e0._9_1_);
  auVar33[10] = -(auVar25[10] == DAT_142e343e0._10_1_);
  auVar33[0xb] = -(auVar25[0xb] == DAT_142e343e0._11_1_);
  auVar33[0xc] = -(auVar25[0xc] == DAT_142e343e0._12_1_);
  auVar33[0xd] = -(auVar25[0xd] == DAT_142e343e0._13_1_);
  auVar33[0xe] = -(auVar25[0xe] == DAT_142e343e0._14_1_);
  auVar33[0xf] = -(auVar25[0xf] == DAT_142e343e0._15_1_);
  uVar11 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar12 = uVar7 + uVar15 & uVar4;
    pcVar1 = (char *)(lVar10 + -0x18 + uVar12 * -0x18);
    auVar34[0] = -(*pcVar1 == DAT_142e343f0);
    auVar34[1] = -(pcVar1[1] == DAT_142e343f0._1_1_);
    auVar34[2] = -(pcVar1[2] == DAT_142e343f0._2_1_);
    auVar34[3] = -(pcVar1[3] == DAT_142e343f0._3_1_);
    auVar34[4] = -(pcVar1[4] == DAT_142e343f0._4_1_);
    auVar34[5] = -(pcVar1[5] == DAT_142e343f0._5_1_);
    auVar34[6] = -(pcVar1[6] == DAT_142e343f0._6_1_);
    auVar34[7] = -(pcVar1[7] == DAT_142e343f0._7_1_);
    auVar34[8] = -(pcVar1[8] == DAT_142e343f0._8_1_);
    auVar34[9] = -(pcVar1[9] == DAT_142e343f0._9_1_);
    auVar34[10] = -(pcVar1[10] == DAT_142e343f0._10_1_);
    auVar34[0xb] = -(pcVar1[0xb] == DAT_142e343f0._11_1_);
    auVar34[0xc] = -(pcVar1[0xc] == DAT_142e343f0._12_1_);
    auVar34[0xd] = -(pcVar1[0xd] == DAT_142e343f0._13_1_);
    auVar34[0xe] = -(pcVar1[0xe] == DAT_142e343f0._14_1_);
    auVar34[0xf] = -(pcVar1[0xf] == DAT_142e343f0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar4 = *(ulonglong *)(lVar10 + uVar12 * -0x18 + -8);
      if (((uVar4 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar4 * 8), uVar4 != 0)) &&
         (lVar10 = ~uVar4 * 0x40, *(longlong *)(lVar17 + 0x20 + lVar10) != 0)) {
        lVar17 = lVar17 + lVar10;
        lVar10 = *(longlong *)(lVar17 + 0x10);
        lVar13 = *plStack_50;
        pcVar1 = (char *)(lVar13 + 0x10);
        LOCK();
        bVar19 = *(char *)(lVar13 + 0x10) == '\0';
        if (bVar19) {
          *(char *)(lVar13 + 0x10) = '\x01';
        }
        UNLOCK();
        if (!bVar19) {
          pdb_142dbd1a0(pcVar1,lVar17,1000000000);
        }
        pdb_140e9a150(pcVar1);
        uStack_d8 = *(undefined8 *)(lVar16 + 8);
        uStack_d0 = *(undefined8 *)(lVar16 + 0x10);
        puStack_c8 = &uStack_d8;
        pcStack_c0 = pdb_1402ed400;
        plStack_50 = (longlong *)pcVar1;
        pdb_140f60760(&uStack_78,&UNK_143068d54,&puStack_c8);
        lStack_90 = lVar13 + 0x14;
        uStack_b0 = *(undefined4 *)(lVar16 + 0x18);
        lStack_a8 = *(longlong *)(lVar10 + 8);
        lStack_a0 = *(longlong *)(lVar10 + 0x10) * 0x20 + lStack_a8;
        uStack_78 = 1;
        uStack_74 = (undefined4)_DAT_142f6cd20;
        uStack_70 = (undefined4)((ulonglong)_DAT_142f6cd20 >> 0x20);
        uStack_6c = (undefined4)_UNK_142f6cd28;
        uStack_68 = (undefined4)((ulonglong)_UNK_142f6cd28 >> 0x20);
        puStack_88 = auStack_f0;
        lStack_98 = lVar16;
        uStack_80 = uVar6;
        uStack_60 = param_3;
        pdb_141750b90(param_1,&UNK_14302bc58,0xd,&uStack_78,&puStack_c8);
        plVar9 = plStack_50;
        pdb_140e9a350();
        LOCK();
        bVar19 = (char)*plVar9 == '\x01';
        if (bVar19) {
          *(char *)plVar9 = '\0';
        }
        UNLOCK();
        if (!bVar19) {
          pdb_142dbcef0(plVar9,0);
        }
        pcVar1 = pcStack_58;
        pdb_140e9a350();
        LOCK();
        cVar3 = *pcVar1;
        if (cVar3 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar3 != '\x01') {
          pdb_142dbcef0(pcVar1,0);
        }
        return 1;
      }
      goto LAB_1409c1d0e;
    }
    uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
  }
  auVar24[0] = -(auVar25[0] == -1);
  auVar24[1] = -(auVar25[1] == -1);
  auVar24[2] = -(auVar25[2] == -1);
  auVar24[3] = -(auVar25[3] == -1);
  auVar24[4] = -(auVar25[4] == -1);
  auVar24[5] = -(auVar25[5] == -1);
  auVar24[6] = -(auVar25[6] == -1);
  auVar24[7] = -(auVar25[7] == -1);
  auVar24[8] = -(auVar25[8] == -1);
  auVar24[9] = -(auVar25[9] == -1);
  auVar24[10] = -(auVar25[10] == -1);
  auVar24[0xb] = -(auVar25[0xb] == -1);
  auVar24[0xc] = -(auVar25[0xc] == -1);
  auVar24[0xd] = -(auVar25[0xd] == -1);
  auVar24[0xe] = -(auVar25[0xe] == -1);
  auVar24[0xf] = -(auVar25[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_1409c1d0e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302bc40);
  }
  uVar15 = uVar15 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409c1b1e;
LAB_1409c1a7e:
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
LAB_1409c1cff:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302bc28);
  }
  uVar15 = uVar15 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_1409c1a2c;
LAB_1409c1927:
  auVar22[0] = -(auVar25[0] == -1);
  auVar22[1] = -(auVar25[1] == -1);
  auVar22[2] = -(auVar25[2] == -1);
  auVar22[3] = -(auVar25[3] == -1);
  auVar22[4] = -(auVar25[4] == -1);
  auVar22[5] = -(auVar25[5] == -1);
  auVar22[6] = -(auVar25[6] == -1);
  auVar22[7] = -(auVar25[7] == -1);
  auVar22[8] = -(auVar25[8] == -1);
  auVar22[9] = -(auVar25[9] == -1);
  auVar22[10] = -(auVar25[10] == -1);
  auVar22[0xb] = -(auVar25[0xb] == -1);
  auVar22[0xc] = -(auVar25[0xc] == -1);
  auVar22[0xd] = -(auVar25[0xd] == -1);
  auVar22[0xe] = -(auVar25[0xe] == -1);
  auVar22[0xf] = -(auVar25[0xf] == -1);
  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') {
LAB_1409c1a9d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302bc10);
  }
  uVar15 = uVar15 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409c18d5;
LAB_1409c184b:
  auVar21[0] = -(*pcVar1 == -1);
  auVar21[1] = -(pcVar1[1] == -1);
  auVar21[2] = -(pcVar1[2] == -1);
  auVar21[3] = -(pcVar1[3] == -1);
  auVar21[4] = -(pcVar1[4] == -1);
  auVar21[5] = -(pcVar1[5] == -1);
  auVar21[6] = -(pcVar1[6] == -1);
  auVar21[7] = -(pcVar1[7] == -1);
  auVar21[8] = -(pcVar1[8] == -1);
  auVar21[9] = -(pcVar1[9] == -1);
  auVar21[10] = -(pcVar1[10] == -1);
  auVar21[0xb] = -(pcVar1[0xb] == -1);
  auVar21[0xc] = -(pcVar1[0xc] == -1);
  auVar21[0xd] = -(pcVar1[0xd] == -1);
  auVar21[0xe] = -(pcVar1[0xe] == -1);
  auVar21[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
LAB_1409c1952:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302bbf8);
  }
  uVar15 = uVar15 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_1409c17f7;
}

