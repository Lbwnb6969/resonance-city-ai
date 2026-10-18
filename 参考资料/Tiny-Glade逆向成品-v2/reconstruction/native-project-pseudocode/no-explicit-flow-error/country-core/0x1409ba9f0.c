// VA 0x1409ba9f0, PDB extent 1192 bytes
// country_core::systems::ui::signifiers::draw_opacity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui::signifiers::draw_opacity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 1192 */

void pdb_1409ba9f0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  ulonglong in_R10;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_R15;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong alStack_50 [5];
  
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (*(longlong *)(lVar3 + 0x68) != 0) {
    unaff_R15 = (ulonglong)*(uint *)(param_2 + 0x14);
    lVar6 = *(longlong *)(lVar3 + 0x50);
    uVar8 = 0x4954ea5d052a63b3;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar3 + 0x58);
      auVar16 = *(undefined1 (*) [16])(lVar6 + uVar8);
      auVar23[0] = -(auVar16[0] == DAT_142e342d0);
      auVar23[1] = -(auVar16[1] == DAT_142e342d0._1_1_);
      auVar23[2] = -(auVar16[2] == DAT_142e342d0._2_1_);
      auVar23[3] = -(auVar16[3] == DAT_142e342d0._3_1_);
      auVar23[4] = -(auVar16[4] == DAT_142e342d0._4_1_);
      auVar23[5] = -(auVar16[5] == DAT_142e342d0._5_1_);
      auVar23[6] = -(auVar16[6] == DAT_142e342d0._6_1_);
      auVar23[7] = -(auVar16[7] == DAT_142e342d0._7_1_);
      auVar23[8] = -(auVar16[8] == DAT_142e342d0._8_1_);
      auVar23[9] = -(auVar16[9] == DAT_142e342d0._9_1_);
      auVar23[10] = -(auVar16[10] == DAT_142e342d0._10_1_);
      auVar23[0xb] = -(auVar16[0xb] == DAT_142e342d0._11_1_);
      auVar23[0xc] = -(auVar16[0xc] == DAT_142e342d0._12_1_);
      auVar23[0xd] = -(auVar16[0xd] == DAT_142e342d0._13_1_);
      auVar23[0xe] = -(auVar16[0xe] == DAT_142e342d0._14_1_);
      auVar23[0xf] = -(auVar16[0xf] == DAT_142e342d0._15_1_);
      uVar11 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (ulonglong)uVar11;
      while (unaff_RSI = param_1, uVar11 != 0) {
        uVar10 = 0;
        for (uVar4 = (uint)uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar13 = uVar10 + uVar8 & *(ulonglong *)(lVar3 + 0x58);
        in_R10 = uVar13 * -3;
        pcVar1 = (char *)(lVar6 + -0x18 + uVar13 * -0x18);
        auVar24[0] = -(*pcVar1 == DAT_14302a7d0);
        auVar24[1] = -(pcVar1[1] == DAT_14302a7d0._1_1_);
        auVar24[2] = -(pcVar1[2] == DAT_14302a7d0._2_1_);
        auVar24[3] = -(pcVar1[3] == DAT_14302a7d0._3_1_);
        auVar24[4] = -(pcVar1[4] == DAT_14302a7d0._4_1_);
        auVar24[5] = -(pcVar1[5] == DAT_14302a7d0._5_1_);
        auVar24[6] = -(pcVar1[6] == DAT_14302a7d0._6_1_);
        auVar24[7] = -(pcVar1[7] == DAT_14302a7d0._7_1_);
        auVar24[8] = -(pcVar1[8] == DAT_14302a7d0._8_1_);
        auVar24[9] = -(pcVar1[9] == DAT_14302a7d0._9_1_);
        auVar24[10] = -(pcVar1[10] == DAT_14302a7d0._10_1_);
        auVar24[0xb] = -(pcVar1[0xb] == DAT_14302a7d0._11_1_);
        auVar24[0xc] = -(pcVar1[0xc] == DAT_14302a7d0._12_1_);
        auVar24[0xd] = -(pcVar1[0xd] == DAT_14302a7d0._13_1_);
        auVar24[0xe] = -(pcVar1[0xe] == DAT_14302a7d0._14_1_);
        auVar24[0xf] = -(pcVar1[0xf] == DAT_14302a7d0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                    (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
          if (*(ulonglong *)(lVar3 + 0x1a8) <= unaff_R15) goto LAB_1409baba4;
          unaff_RBX = unaff_R15 * 0x48;
          lVar6 = pdb_140eff5a0(*(longlong *)(lVar3 + 0x1a0) + unaff_RBX,
                                *(undefined8 *)(lVar6 + uVar13 * -0x18 + -8));
          if (lVar6 == 0) goto LAB_1409baba4;
          if (*(longlong *)(lVar3 + 0x68) == 0) {
            return;
          }
          lVar6 = *(longlong *)(lVar3 + 0x50);
          uVar8 = 0xb261692245189725;
          lVar9 = 0;
          goto LAB_1409bab37;
        }
        iVar12 = (uint)uVar14 - 1;
        uVar11 = (ushort)iVar12 & (ushort)uVar14;
        uVar14 = (ulonglong)CONCAT22((short)((uint)iVar12 >> 0x10),uVar11);
        in_R10 = uVar14;
      }
      auVar18[0] = -(auVar16[0] == -1);
      auVar18[1] = -(auVar16[1] == -1);
      auVar18[2] = -(auVar16[2] == -1);
      auVar18[3] = -(auVar16[3] == -1);
      auVar18[4] = -(auVar16[4] == -1);
      auVar18[5] = -(auVar16[5] == -1);
      auVar18[6] = -(auVar16[6] == -1);
      auVar18[7] = -(auVar16[7] == -1);
      auVar18[8] = -(auVar16[8] == -1);
      auVar18[9] = -(auVar16[9] == -1);
      auVar18[10] = -(auVar16[10] == -1);
      auVar18[0xb] = -(auVar16[0xb] == -1);
      auVar18[0xc] = -(auVar16[0xc] == -1);
      auVar18[0xd] = -(auVar16[0xd] == -1);
      auVar18[0xe] = -(auVar16[0xe] == -1);
      auVar18[0xf] = -(auVar16[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1409baba4:
  lVar6 = pdb_142dc8110(&UNK_14302af81,0x27);
  param_1 = unaff_RSI;
LAB_1409babbc:
  if ((*(ulonglong *)(lVar3 + 0x1a8) <= unaff_R15) ||
     ((lVar6 = pdb_140eff5a0(*(longlong *)(lVar3 + 0x1a0) + unaff_RBX,
                             *(undefined8 *)(lVar6 + in_R10 * 8 + -8)), lVar6 == 0 &&
      (*(longlong *)(lVar3 + 0x68) != 0)))) {
LAB_1409babf3:
    lVar6 = *(longlong *)(lVar3 + 0x50);
    uVar8 = 0x8780fef2d003c9e4;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar3 + 0x58);
      auVar16 = *(undefined1 (*) [16])(lVar6 + uVar8);
      auVar26[0] = -(auVar16[0] == DAT_142e34d90);
      auVar26[1] = -(auVar16[1] == DAT_142e34d90._1_1_);
      auVar26[2] = -(auVar16[2] == DAT_142e34d90._2_1_);
      auVar26[3] = -(auVar16[3] == DAT_142e34d90._3_1_);
      auVar26[4] = -(auVar16[4] == DAT_142e34d90._4_1_);
      auVar26[5] = -(auVar16[5] == DAT_142e34d90._5_1_);
      auVar26[6] = -(auVar16[6] == DAT_142e34d90._6_1_);
      auVar26[7] = -(auVar16[7] == DAT_142e34d90._7_1_);
      auVar26[8] = -(auVar16[8] == DAT_142e34d90._8_1_);
      auVar26[9] = -(auVar16[9] == DAT_142e34d90._9_1_);
      auVar26[10] = -(auVar16[10] == DAT_142e34d90._10_1_);
      auVar26[0xb] = -(auVar16[0xb] == DAT_142e34d90._11_1_);
      auVar26[0xc] = -(auVar16[0xc] == DAT_142e34d90._12_1_);
      auVar26[0xd] = -(auVar16[0xd] == DAT_142e34d90._13_1_);
      auVar26[0xe] = -(auVar16[0xe] == DAT_142e34d90._14_1_);
      auVar26[0xf] = -(auVar16[0xf] == DAT_142e34d90._15_1_);
      uVar11 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar8 & *(ulonglong *)(lVar3 + 0x58);
        pcVar1 = (char *)(lVar6 + -0x18 + uVar14 * -0x18);
        auVar27[0] = -(*pcVar1 == DAT_14302a7f0);
        auVar27[1] = -(pcVar1[1] == DAT_14302a7f0._1_1_);
        auVar27[2] = -(pcVar1[2] == DAT_14302a7f0._2_1_);
        auVar27[3] = -(pcVar1[3] == DAT_14302a7f0._3_1_);
        auVar27[4] = -(pcVar1[4] == DAT_14302a7f0._4_1_);
        auVar27[5] = -(pcVar1[5] == DAT_14302a7f0._5_1_);
        auVar27[6] = -(pcVar1[6] == DAT_14302a7f0._6_1_);
        auVar27[7] = -(pcVar1[7] == DAT_14302a7f0._7_1_);
        auVar27[8] = -(pcVar1[8] == DAT_14302a7f0._8_1_);
        auVar27[9] = -(pcVar1[9] == DAT_14302a7f0._9_1_);
        auVar27[10] = -(pcVar1[10] == DAT_14302a7f0._10_1_);
        auVar27[0xb] = -(pcVar1[0xb] == DAT_14302a7f0._11_1_);
        auVar27[0xc] = -(pcVar1[0xc] == DAT_14302a7f0._12_1_);
        auVar27[0xd] = -(pcVar1[0xd] == DAT_14302a7f0._13_1_);
        auVar27[0xe] = -(pcVar1[0xe] == DAT_14302a7f0._14_1_);
        auVar27[0xf] = -(pcVar1[0xf] == DAT_14302a7f0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
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
                    (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
          if (*(ulonglong *)(lVar3 + 0x1a8) <= unaff_R15) {
            return;
          }
          plVar7 = (longlong *)
                   pdb_140eff5a0(unaff_RBX + *(longlong *)(lVar3 + 0x1a0),
                                 *(undefined8 *)(lVar6 + uVar14 * -0x18 + -8));
          if (plVar7 == (longlong *)0x0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_1409bae5d;
          lVar3 = *plVar7;
          lVar6 = *(longlong *)(param_1 + 0x70);
          uVar8 = 0x5013f31aa2c5fb1f;
          lVar9 = 0;
          goto LAB_1409bacf7;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar20[0] = -(auVar16[0] == -1);
      auVar20[1] = -(auVar16[1] == -1);
      auVar20[2] = -(auVar16[2] == -1);
      auVar20[3] = -(auVar16[3] == -1);
      auVar20[4] = -(auVar16[4] == -1);
      auVar20[5] = -(auVar16[5] == -1);
      auVar20[6] = -(auVar16[6] == -1);
      auVar20[7] = -(auVar16[7] == -1);
      auVar20[8] = -(auVar16[8] == -1);
      auVar20[9] = -(auVar16[9] == -1);
      auVar20[10] = -(auVar16[10] == -1);
      auVar20[0xb] = -(auVar16[0xb] == -1);
      auVar20[0xc] = -(auVar16[0xc] == -1);
      auVar20[0xd] = -(auVar16[0xd] == -1);
      auVar20[0xe] = -(auVar16[0xe] == -1);
      auVar20[0xf] = -(auVar16[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  return;
LAB_1409bab37:
  uVar8 = uVar8 & *(ulonglong *)(lVar3 + 0x58);
  pcVar1 = (char *)(lVar6 + uVar8);
  auVar16[0] = -(*pcVar1 == DAT_142e34020);
  auVar16[1] = -(pcVar1[1] == DAT_142e34020._1_1_);
  auVar16[2] = -(pcVar1[2] == DAT_142e34020._2_1_);
  auVar16[3] = -(pcVar1[3] == DAT_142e34020._3_1_);
  auVar16[4] = -(pcVar1[4] == DAT_142e34020._4_1_);
  auVar16[5] = -(pcVar1[5] == DAT_142e34020._5_1_);
  auVar16[6] = -(pcVar1[6] == DAT_142e34020._6_1_);
  auVar16[7] = -(pcVar1[7] == DAT_142e34020._7_1_);
  auVar16[8] = -(pcVar1[8] == DAT_142e34020._8_1_);
  auVar16[9] = -(pcVar1[9] == DAT_142e34020._9_1_);
  auVar16[10] = -(pcVar1[10] == DAT_142e34020._10_1_);
  auVar16[0xb] = -(pcVar1[0xb] == DAT_142e34020._11_1_);
  auVar16[0xc] = -(pcVar1[0xc] == DAT_142e34020._12_1_);
  auVar16[0xd] = -(pcVar1[0xd] == DAT_142e34020._13_1_);
  auVar16[0xe] = -(pcVar1[0xe] == DAT_142e34020._14_1_);
  auVar16[0xf] = -(pcVar1[0xf] == DAT_142e34020._15_1_);
  uVar11 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar14 = uVar4 + uVar8 & *(ulonglong *)(lVar3 + 0x58);
    in_R10 = uVar14 * -3;
    pcVar2 = (char *)(lVar6 + -0x18 + uVar14 * -0x18);
    auVar25[0] = -(*pcVar2 == DAT_14302a7e0);
    auVar25[1] = -(pcVar2[1] == UNK_14302a7e1);
    auVar25[2] = -(pcVar2[2] == UNK_14302a7e2);
    auVar25[3] = -(pcVar2[3] == UNK_14302a7e3);
    auVar25[4] = -(pcVar2[4] == UNK_14302a7e4);
    auVar25[5] = -(pcVar2[5] == UNK_14302a7e5);
    auVar25[6] = -(pcVar2[6] == UNK_14302a7e6);
    auVar25[7] = -(pcVar2[7] == UNK_14302a7e7);
    auVar25[8] = -(pcVar2[8] == UNK_14302a7e8);
    auVar25[9] = -(pcVar2[9] == UNK_14302a7e9);
    auVar25[10] = -(pcVar2[10] == UNK_14302a7ea);
    auVar25[0xb] = -(pcVar2[0xb] == UNK_14302a7eb);
    auVar25[0xc] = -(pcVar2[0xc] == UNK_14302a7ec);
    auVar25[0xd] = -(pcVar2[0xd] == UNK_14302a7ed);
    auVar25[0xe] = -(pcVar2[0xe] == UNK_14302a7ee);
    auVar25[0xf] = -(pcVar2[0xf] == UNK_14302a7ef);
    if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf
                ) == 0xffff) goto LAB_1409babbc;
    uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
  }
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
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_1409babf3;
  uVar8 = uVar8 + lVar9 + 0x10;
  lVar9 = lVar9 + 0x10;
  goto LAB_1409bab37;
LAB_1409bacf7:
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x78);
  auVar16 = *(undefined1 (*) [16])(lVar6 + uVar8);
  auVar28[0] = -(auVar16[0] == DAT_142e347b0);
  auVar28[1] = -(auVar16[1] == DAT_142e347b0._1_1_);
  auVar28[2] = -(auVar16[2] == DAT_142e347b0._2_1_);
  auVar28[3] = -(auVar16[3] == DAT_142e347b0._3_1_);
  auVar28[4] = -(auVar16[4] == DAT_142e347b0._4_1_);
  auVar28[5] = -(auVar16[5] == DAT_142e347b0._5_1_);
  auVar28[6] = -(auVar16[6] == DAT_142e347b0._6_1_);
  auVar28[7] = -(auVar16[7] == DAT_142e347b0._7_1_);
  auVar28[8] = -(auVar16[8] == DAT_142e347b0._8_1_);
  auVar28[9] = -(auVar16[9] == DAT_142e347b0._9_1_);
  auVar28[10] = -(auVar16[10] == DAT_142e347b0._10_1_);
  auVar28[0xb] = -(auVar16[0xb] == DAT_142e347b0._11_1_);
  auVar28[0xc] = -(auVar16[0xc] == DAT_142e347b0._12_1_);
  auVar28[0xd] = -(auVar16[0xd] == DAT_142e347b0._13_1_);
  auVar28[0xe] = -(auVar16[0xe] == DAT_142e347b0._14_1_);
  auVar28[0xf] = -(auVar16[0xf] == DAT_142e347b0._15_1_);
  uVar11 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar14 = uVar4 + uVar8 & *(ulonglong *)(param_1 + 0x78);
    pcVar1 = (char *)(lVar6 + -0x18 + uVar14 * -0x18);
    auVar29[0] = -(*pcVar1 == DAT_14302a800);
    auVar29[1] = -(pcVar1[1] == DAT_14302a800._1_1_);
    auVar29[2] = -(pcVar1[2] == DAT_14302a800._2_1_);
    auVar29[3] = -(pcVar1[3] == DAT_14302a800._3_1_);
    auVar29[4] = -(pcVar1[4] == DAT_14302a800._4_1_);
    auVar29[5] = -(pcVar1[5] == DAT_14302a800._5_1_);
    auVar29[6] = -(pcVar1[6] == DAT_14302a800._6_1_);
    auVar29[7] = -(pcVar1[7] == DAT_14302a800._7_1_);
    auVar29[8] = -(pcVar1[8] == DAT_14302a800._8_1_);
    auVar29[9] = -(pcVar1[9] == DAT_14302a800._9_1_);
    auVar29[10] = -(pcVar1[10] == DAT_14302a800._10_1_);
    auVar29[0xb] = -(pcVar1[0xb] == DAT_14302a800._11_1_);
    auVar29[0xc] = -(pcVar1[0xc] == DAT_14302a800._12_1_);
    auVar29[0xd] = -(pcVar1[0xd] == DAT_14302a800._13_1_);
    auVar29[0xe] = -(pcVar1[0xe] == DAT_14302a800._14_1_);
    auVar29[0xf] = -(pcVar1[0xf] == DAT_14302a800._15_1_);
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar8 = *(ulonglong *)(lVar6 + uVar14 * -0x18 + -8);
      if ((uVar8 < *(ulonglong *)(param_1 + 0x210)) &&
         (uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar8 * 8), uVar8 != 0)) {
        lVar6 = ~uVar8 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar6) != 0) {
          plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x1d8) + lVar6 + 0x10);
          if (plVar7[3] == 0) {
            return;
          }
          alStack_50[0] = lVar3;
          uVar8 = pdb_1400af0a0(plVar7 + 4,alStack_50);
          bVar15 = (byte)(uVar8 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar6 = 0;
          do {
            uVar8 = uVar8 & plVar7[1];
            pcVar1 = (char *)(*plVar7 + uVar8);
            auVar22[0] = -(*pcVar1 == auVar16[0]);
            auVar22[1] = -(pcVar1[1] == auVar16[1]);
            auVar22[2] = -(pcVar1[2] == auVar16[2]);
            auVar22[3] = -(pcVar1[3] == auVar16[3]);
            auVar22[4] = -(pcVar1[4] == auVar16[4]);
            auVar22[5] = -(pcVar1[5] == auVar16[5]);
            auVar22[6] = -(pcVar1[6] == auVar16[6]);
            auVar22[7] = -(pcVar1[7] == auVar16[7]);
            auVar22[8] = -(pcVar1[8] == auVar16[0]);
            auVar22[9] = -(pcVar1[9] == auVar16[1]);
            auVar22[10] = -(pcVar1[10] == auVar16[2]);
            auVar22[0xb] = -(pcVar1[0xb] == auVar16[3]);
            auVar22[0xc] = -(pcVar1[0xc] == auVar16[4]);
            auVar22[0xd] = -(pcVar1[0xd] == auVar16[5]);
            auVar22[0xe] = -(pcVar1[0xe] == auVar16[6]);
            auVar22[0xf] = -(pcVar1[0xf] == auVar16[7]);
            uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
            uVar10 = (uint)uVar11;
            while (uVar11 != 0) {
              uVar4 = 0;
              for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar4 = uVar4 + 1;
              }
              if (lVar3 == *(longlong *)(*plVar7 + (uVar4 + uVar8 & plVar7[1]) * -0x10 + -0x10)) {
                return;
              }
              uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
              uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
            }
            auVar17[0] = -(*pcVar1 == -1);
            auVar17[1] = -(pcVar1[1] == -1);
            auVar17[2] = -(pcVar1[2] == -1);
            auVar17[3] = -(pcVar1[3] == -1);
            auVar17[4] = -(pcVar1[4] == -1);
            auVar17[5] = -(pcVar1[5] == -1);
            auVar17[6] = -(pcVar1[6] == -1);
            auVar17[7] = -(pcVar1[7] == -1);
            auVar17[8] = -(pcVar1[8] == -1);
            auVar17[9] = -(pcVar1[9] == -1);
            auVar17[10] = -(pcVar1[10] == -1);
            auVar17[0xb] = -(pcVar1[0xb] == -1);
            auVar17[0xc] = -(pcVar1[0xc] == -1);
            auVar17[0xd] = -(pcVar1[0xd] == -1);
            auVar17[0xe] = -(pcVar1[0xe] == -1);
            auVar17[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') {
              return;
            }
            uVar8 = uVar8 + lVar6 + 0x10;
            lVar6 = lVar6 + 0x10;
          } while( true );
        }
      }
      goto LAB_1409bae5d;
    }
    uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
  }
  auVar21[0] = -(auVar16[0] == -1);
  auVar21[1] = -(auVar16[1] == -1);
  auVar21[2] = -(auVar16[2] == -1);
  auVar21[3] = -(auVar16[3] == -1);
  auVar21[4] = -(auVar16[4] == -1);
  auVar21[5] = -(auVar16[5] == -1);
  auVar21[6] = -(auVar16[6] == -1);
  auVar21[7] = -(auVar16[7] == -1);
  auVar21[8] = -(auVar16[8] == -1);
  auVar21[9] = -(auVar16[9] == -1);
  auVar21[10] = -(auVar16[10] == -1);
  auVar21[0xb] = -(auVar16[0xb] == -1);
  auVar21[0xc] = -(auVar16[0xc] == -1);
  auVar21[0xd] = -(auVar16[0xd] == -1);
  auVar21[0xe] = -(auVar16[0xe] == -1);
  auVar21[0xf] = -(auVar16[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
LAB_1409bae5d:
    pdb_142dc8110(&UNK_14302aff8,0x18,&UNK_14302b010);
    return;
  }
  uVar8 = uVar8 + lVar9 + 0x10;
  lVar9 = lVar9 + 0x10;
  goto LAB_1409bacf7;
}

