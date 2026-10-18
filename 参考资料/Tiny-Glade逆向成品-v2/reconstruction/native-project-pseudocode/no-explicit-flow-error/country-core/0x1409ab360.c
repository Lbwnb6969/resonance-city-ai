// VA 0x1409ab360, PDB extent 816 bytes
// country_core::systems::render_loop::draw_passes::logo_overlay::render_logo_overlay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/logo_overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::logo_overlay::render_logo_overlay
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/logo_overlay.rs
   Extent: 816 */

void pdb_1409ab360(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x70);
    uVar3 = *(ulonglong *)(param_2 + 0x78);
    uVar15 = 0x7057b4358e925fdb;
    lVar16 = 0;
    while( true ) {
      uVar15 = uVar15 & uVar3;
      pcVar1 = (char *)(lVar10 + uVar15);
      auVar21[0] = -(*pcVar1 == DAT_142e33d90);
      auVar21[1] = -(pcVar1[1] == UNK_142e33d91);
      auVar21[2] = -(pcVar1[2] == UNK_142e33d92);
      auVar21[3] = -(pcVar1[3] == UNK_142e33d93);
      auVar21[4] = -(pcVar1[4] == UNK_142e33d94);
      auVar21[5] = -(pcVar1[5] == UNK_142e33d95);
      auVar21[6] = -(pcVar1[6] == UNK_142e33d96);
      auVar21[7] = -(pcVar1[7] == UNK_142e33d97);
      auVar21[8] = -(pcVar1[8] == UNK_142e33d98);
      auVar21[9] = -(pcVar1[9] == UNK_142e33d99);
      auVar21[10] = -(pcVar1[10] == UNK_142e33d9a);
      auVar21[0xb] = -(pcVar1[0xb] == UNK_142e33d9b);
      auVar21[0xc] = -(pcVar1[0xc] == UNK_142e33d9c);
      auVar21[0xd] = -(pcVar1[0xd] == UNK_142e33d9d);
      auVar21[0xe] = -(pcVar1[0xe] == UNK_142e33d9e);
      auVar21[0xf] = -(pcVar1[0xf] == UNK_142e33d9f);
      uVar13 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar14 = uVar7 + uVar15 & uVar3;
        pcVar2 = (char *)(lVar10 + -0x18 + uVar14 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_142e34350);
        auVar22[1] = -(pcVar2[1] == UNK_142e34351);
        auVar22[2] = -(pcVar2[2] == UNK_142e34352);
        auVar22[3] = -(pcVar2[3] == UNK_142e34353);
        auVar22[4] = -(pcVar2[4] == UNK_142e34354);
        auVar22[5] = -(pcVar2[5] == UNK_142e34355);
        auVar22[6] = -(pcVar2[6] == UNK_142e34356);
        auVar22[7] = -(pcVar2[7] == UNK_142e34357);
        auVar22[8] = -(pcVar2[8] == UNK_142e34358);
        auVar22[9] = -(pcVar2[9] == UNK_142e34359);
        auVar22[10] = -(pcVar2[10] == UNK_142e3435a);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_142e3435b);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_142e3435c);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_142e3435d);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_142e3435e);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_142e3435f);
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                    (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
          uVar15 = *(ulonglong *)(lVar10 + uVar14 * -0x18 + -8);
          uVar14 = *(ulonglong *)(param_2 + 0x210);
          if (uVar14 <= uVar15) goto LAB_1409ab5b3;
          lVar16 = *(longlong *)(param_2 + 0x208);
          uVar15 = *(ulonglong *)(lVar16 + uVar15 * 8);
          if (uVar15 == 0) goto LAB_1409ab5b3;
          lVar4 = *(longlong *)(param_2 + 0x1d8);
          lVar12 = ~uVar15 * 0x40;
          if (*(longlong *)(lVar4 + 0x20 + lVar12) == 0) goto LAB_1409ab5b3;
          uVar5 = *(undefined8 *)(lVar12 + lVar4 + 0x10);
          uVar15 = 0x23a50ae5eb259f3f;
          lVar12 = 0;
          goto LAB_1409ab47a;
        }
        uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar15 = uVar15 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_1409ab5b3:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143029208);
LAB_1409ab47a:
  uVar15 = uVar15 & uVar3;
  pcVar1 = (char *)(lVar10 + uVar15);
  auVar23[0] = -(*pcVar1 == DAT_142e33cd0);
  auVar23[1] = -(pcVar1[1] == DAT_142e33cd0._1_1_);
  auVar23[2] = -(pcVar1[2] == DAT_142e33cd0._2_1_);
  auVar23[3] = -(pcVar1[3] == DAT_142e33cd0._3_1_);
  auVar23[4] = -(pcVar1[4] == DAT_142e33cd0._4_1_);
  auVar23[5] = -(pcVar1[5] == DAT_142e33cd0._5_1_);
  auVar23[6] = -(pcVar1[6] == DAT_142e33cd0._6_1_);
  auVar23[7] = -(pcVar1[7] == DAT_142e33cd0._7_1_);
  auVar23[8] = -(pcVar1[8] == DAT_142e33cd0._8_1_);
  auVar23[9] = -(pcVar1[9] == DAT_142e33cd0._9_1_);
  auVar23[10] = -(pcVar1[10] == DAT_142e33cd0._10_1_);
  auVar23[0xb] = -(pcVar1[0xb] == DAT_142e33cd0._11_1_);
  auVar23[0xc] = -(pcVar1[0xc] == DAT_142e33cd0._12_1_);
  auVar23[0xd] = -(pcVar1[0xd] == DAT_142e33cd0._13_1_);
  auVar23[0xe] = -(pcVar1[0xe] == DAT_142e33cd0._14_1_);
  auVar23[0xf] = -(pcVar1[0xf] == DAT_142e33cd0._15_1_);
  uVar13 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar17 = uVar7 + uVar15 & uVar3;
    pcVar2 = (char *)(lVar10 + -0x18 + uVar17 * -0x18);
    auVar24[0] = -(*pcVar2 == DAT_142e33ce0);
    auVar24[1] = -(pcVar2[1] == DAT_142e33ce0._1_1_);
    auVar24[2] = -(pcVar2[2] == DAT_142e33ce0._2_1_);
    auVar24[3] = -(pcVar2[3] == DAT_142e33ce0._3_1_);
    auVar24[4] = -(pcVar2[4] == DAT_142e33ce0._4_1_);
    auVar24[5] = -(pcVar2[5] == DAT_142e33ce0._5_1_);
    auVar24[6] = -(pcVar2[6] == DAT_142e33ce0._6_1_);
    auVar24[7] = -(pcVar2[7] == DAT_142e33ce0._7_1_);
    auVar24[8] = -(pcVar2[8] == DAT_142e33ce0._8_1_);
    auVar24[9] = -(pcVar2[9] == DAT_142e33ce0._9_1_);
    auVar24[10] = -(pcVar2[10] == DAT_142e33ce0._10_1_);
    auVar24[0xb] = -(pcVar2[0xb] == DAT_142e33ce0._11_1_);
    auVar24[0xc] = -(pcVar2[0xc] == DAT_142e33ce0._12_1_);
    auVar24[0xd] = -(pcVar2[0xd] == DAT_142e33ce0._13_1_);
    auVar24[0xe] = -(pcVar2[0xe] == DAT_142e33ce0._14_1_);
    auVar24[0xf] = -(pcVar2[0xf] == DAT_142e33ce0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar15 = *(ulonglong *)(lVar10 + uVar17 * -0x18 + -8);
      if (((uVar14 <= uVar15) || (uVar15 = *(ulonglong *)(lVar16 + uVar15 * 8), uVar15 == 0)) ||
         (lVar12 = ~uVar15 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar12) == 0)) goto LAB_1409ab677;
      plVar6 = *(longlong **)(lVar12 + lVar4 + 0x10);
      uVar15 = 0x7ccef76ae1cb1049;
      lVar12 = 0;
      goto LAB_1409ab546;
    }
    uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
  }
  goto LAB_1409ab4d0;
LAB_1409ab546:
  uVar15 = uVar15 & uVar3;
  auVar21 = *(undefined1 (*) [16])(lVar10 + uVar15);
  auVar25[0] = -(auVar21[0] == DAT_142e34280);
  auVar25[1] = -(auVar21[1] == DAT_142e34280._1_1_);
  auVar25[2] = -(auVar21[2] == DAT_142e34280._2_1_);
  auVar25[3] = -(auVar21[3] == DAT_142e34280._3_1_);
  auVar25[4] = -(auVar21[4] == DAT_142e34280._4_1_);
  auVar25[5] = -(auVar21[5] == DAT_142e34280._5_1_);
  auVar25[6] = -(auVar21[6] == DAT_142e34280._6_1_);
  auVar25[7] = -(auVar21[7] == DAT_142e34280._7_1_);
  auVar25[8] = -(auVar21[8] == DAT_142e34280._8_1_);
  auVar25[9] = -(auVar21[9] == DAT_142e34280._9_1_);
  auVar25[10] = -(auVar21[10] == DAT_142e34280._10_1_);
  auVar25[0xb] = -(auVar21[0xb] == DAT_142e34280._11_1_);
  auVar25[0xc] = -(auVar21[0xc] == DAT_142e34280._12_1_);
  auVar25[0xd] = -(auVar21[0xd] == DAT_142e34280._13_1_);
  auVar25[0xe] = -(auVar21[0xe] == DAT_142e34280._14_1_);
  auVar25[0xf] = -(auVar21[0xf] == DAT_142e34280._15_1_);
  uVar13 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
  uVar11 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar17 = uVar7 + uVar15 & uVar3;
    pcVar1 = (char *)(lVar10 + -0x18 + uVar17 * -0x18);
    auVar26[0] = -(*pcVar1 == DAT_142e646a0);
    auVar26[1] = -(pcVar1[1] == DAT_142e646a0._1_1_);
    auVar26[2] = -(pcVar1[2] == DAT_142e646a0._2_1_);
    auVar26[3] = -(pcVar1[3] == DAT_142e646a0._3_1_);
    auVar26[4] = -(pcVar1[4] == DAT_142e646a0._4_1_);
    auVar26[5] = -(pcVar1[5] == DAT_142e646a0._5_1_);
    auVar26[6] = -(pcVar1[6] == DAT_142e646a0._6_1_);
    auVar26[7] = -(pcVar1[7] == DAT_142e646a0._7_1_);
    auVar26[8] = -(pcVar1[8] == DAT_142e646a0._8_1_);
    auVar26[9] = -(pcVar1[9] == DAT_142e646a0._9_1_);
    auVar26[10] = -(pcVar1[10] == DAT_142e646a0._10_1_);
    auVar26[0xb] = -(pcVar1[0xb] == DAT_142e646a0._11_1_);
    auVar26[0xc] = -(pcVar1[0xc] == DAT_142e646a0._12_1_);
    auVar26[0xd] = -(pcVar1[0xd] == DAT_142e646a0._13_1_);
    auVar26[0xe] = -(pcVar1[0xe] == DAT_142e646a0._14_1_);
    auVar26[0xf] = -(pcVar1[0xf] == DAT_142e646a0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar3 = *(ulonglong *)(lVar10 + uVar17 * -0x18 + -8);
      if (((uVar3 < uVar14) && (uVar3 = *(ulonglong *)(lVar16 + uVar3 * 8), uVar3 != 0)) &&
         (lVar10 = ~uVar3 * 0x40, *(longlong *)(lVar4 + 0x20 + lVar10) != 0)) {
        if ((*(char *)(*plVar6 + 0x10) == '\0') && (*(char *)(plVar6[1] + 0x10) == '\0')) {
          cVar9 = pdb_14092cd20(*(undefined8 *)(lVar4 + lVar10 + 0x10));
          uStack_5c = 1;
          if (cVar9 == '\0') goto LAB_1409ab630;
        }
        uStack_5c = 2;
LAB_1409ab630:
        auStack_58[0] = 0;
        uStack_50 = param_3;
        pdb_141752310(param_1,&UNK_143029250,0xc,auStack_58,uVar5,&uStack_5c);
        return;
      }
      goto LAB_1409ab683;
    }
    uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
  }
  auVar20[0] = -(auVar21[0] == -1);
  auVar20[1] = -(auVar21[1] == -1);
  auVar20[2] = -(auVar21[2] == -1);
  auVar20[3] = -(auVar21[3] == -1);
  auVar20[4] = -(auVar21[4] == -1);
  auVar20[5] = -(auVar21[5] == -1);
  auVar20[6] = -(auVar21[6] == -1);
  auVar20[7] = -(auVar21[7] == -1);
  auVar20[8] = -(auVar21[8] == -1);
  auVar20[9] = -(auVar21[9] == -1);
  auVar20[10] = -(auVar21[10] == -1);
  auVar20[0xb] = -(auVar21[0xb] == -1);
  auVar20[0xc] = -(auVar21[0xc] == -1);
  auVar20[0xd] = -(auVar21[0xd] == -1);
  auVar20[0xe] = -(auVar21[0xe] == -1);
  auVar20[0xf] = -(auVar21[0xf] == -1);
  if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') {
LAB_1409ab683:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029238);
  }
  uVar15 = uVar15 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_1409ab546;
LAB_1409ab4d0:
  auVar19[0] = -(*pcVar1 == -1);
  auVar19[1] = -(pcVar1[1] == -1);
  auVar19[2] = -(pcVar1[2] == -1);
  auVar19[3] = -(pcVar1[3] == -1);
  auVar19[4] = -(pcVar1[4] == -1);
  auVar19[5] = -(pcVar1[5] == -1);
  auVar19[6] = -(pcVar1[6] == -1);
  auVar19[7] = -(pcVar1[7] == -1);
  auVar19[8] = -(pcVar1[8] == -1);
  auVar19[9] = -(pcVar1[9] == -1);
  auVar19[10] = -(pcVar1[10] == -1);
  auVar19[0xb] = -(pcVar1[0xb] == -1);
  auVar19[0xc] = -(pcVar1[0xc] == -1);
  auVar19[0xd] = -(pcVar1[0xd] == -1);
  auVar19[0xe] = -(pcVar1[0xe] == -1);
  auVar19[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
LAB_1409ab677:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029220);
  }
  uVar15 = uVar15 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_1409ab47a;
}

