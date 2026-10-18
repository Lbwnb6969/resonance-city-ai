// VA 0x140b03610, PDB extent 580 bytes
// country_core::systems::render_loop::draw_passes::feedback_report_bg::render_feedback_report_bg
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/feedback_report_bg.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::feedback_report_bg::render_feedback_report_bg
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/feedback_report_bg.rs
   Extent: 580 */

void pdb_140b03610(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined1 auStack_40 [24];
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar3 = *(ulonglong *)(param_2 + 0x78);
    uVar12 = 0xf1335775cdf5bf9c;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar3;
      pcVar1 = (char *)(lVar7 + uVar12);
      auVar16[0] = -(*pcVar1 == DAT_142e34070);
      auVar16[1] = -(pcVar1[1] == UNK_142e34071);
      auVar16[2] = -(pcVar1[2] == UNK_142e34072);
      auVar16[3] = -(pcVar1[3] == UNK_142e34073);
      auVar16[4] = -(pcVar1[4] == UNK_142e34074);
      auVar16[5] = -(pcVar1[5] == UNK_142e34075);
      auVar16[6] = -(pcVar1[6] == UNK_142e34076);
      auVar16[7] = -(pcVar1[7] == UNK_142e34077);
      auVar16[8] = -(pcVar1[8] == UNK_142e34078);
      auVar16[9] = -(pcVar1[9] == UNK_142e34079);
      auVar16[10] = -(pcVar1[10] == UNK_142e3407a);
      auVar16[0xb] = -(pcVar1[0xb] == UNK_142e3407b);
      auVar16[0xc] = -(pcVar1[0xc] == UNK_142e3407c);
      auVar16[0xd] = -(pcVar1[0xd] == UNK_142e3407d);
      auVar16[0xe] = -(pcVar1[0xe] == UNK_142e3407e);
      auVar16[0xf] = -(pcVar1[0xf] == UNK_142e3407f);
      uVar10 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar11 = uVar5 + uVar12 & uVar3;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar11 * -0x18);
        auVar17[0] = -(*pcVar2 == DAT_142e34080);
        auVar17[1] = -(pcVar2[1] == UNK_142e34081);
        auVar17[2] = -(pcVar2[2] == UNK_142e34082);
        auVar17[3] = -(pcVar2[3] == UNK_142e34083);
        auVar17[4] = -(pcVar2[4] == UNK_142e34084);
        auVar17[5] = -(pcVar2[5] == UNK_142e34085);
        auVar17[6] = -(pcVar2[6] == UNK_142e34086);
        auVar17[7] = -(pcVar2[7] == UNK_142e34087);
        auVar17[8] = -(pcVar2[8] == UNK_142e34088);
        auVar17[9] = -(pcVar2[9] == UNK_142e34089);
        auVar17[10] = -(pcVar2[10] == UNK_142e3408a);
        auVar17[0xb] = -(pcVar2[0xb] == UNK_142e3408b);
        auVar17[0xc] = -(pcVar2[0xc] == UNK_142e3408c);
        auVar17[0xd] = -(pcVar2[0xd] == UNK_142e3408d);
        auVar17[0xe] = -(pcVar2[0xe] == UNK_142e3408e);
        auVar17[0xf] = -(pcVar2[0xf] == UNK_142e3408f);
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
          uVar12 = *(ulonglong *)(lVar7 + uVar11 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar12) goto LAB_140b0379b;
          uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8);
          if (uVar12 == 0) goto LAB_140b0379b;
          lVar13 = *(longlong *)(param_2 + 0x1d8);
          lVar9 = ~uVar12 * 0x40;
          if (*(longlong *)(lVar13 + 0x20 + lVar9) == 0) goto LAB_140b0379b;
          if (**(int **)(lVar9 + lVar13 + 0x10) != 8) {
            return;
          }
          uVar12 = 0x5ac1a3b2248b9333;
          lVar9 = 0;
          goto LAB_140b03733;
        }
        uVar10 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar10);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_140b0379b:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143053200);
LAB_140b03733:
  uVar12 = uVar12 & uVar3;
  auVar16 = *(undefined1 (*) [16])(lVar7 + uVar12);
  auVar18[0] = -(auVar16[0] == DAT_142e343a0);
  auVar18[1] = -(auVar16[1] == DAT_142e343a0._1_1_);
  auVar18[2] = -(auVar16[2] == DAT_142e343a0._2_1_);
  auVar18[3] = -(auVar16[3] == DAT_142e343a0._3_1_);
  auVar18[4] = -(auVar16[4] == DAT_142e343a0._4_1_);
  auVar18[5] = -(auVar16[5] == DAT_142e343a0._5_1_);
  auVar18[6] = -(auVar16[6] == DAT_142e343a0._6_1_);
  auVar18[7] = -(auVar16[7] == DAT_142e343a0._7_1_);
  auVar18[8] = -(auVar16[8] == DAT_142e343a0._8_1_);
  auVar18[9] = -(auVar16[9] == DAT_142e343a0._9_1_);
  auVar18[10] = -(auVar16[10] == DAT_142e343a0._10_1_);
  auVar18[0xb] = -(auVar16[0xb] == DAT_142e343a0._11_1_);
  auVar18[0xc] = -(auVar16[0xc] == DAT_142e343a0._12_1_);
  auVar18[0xd] = -(auVar16[0xd] == DAT_142e343a0._13_1_);
  auVar18[0xe] = -(auVar16[0xe] == DAT_142e343a0._14_1_);
  auVar18[0xf] = -(auVar16[0xf] == DAT_142e343a0._15_1_);
  uVar10 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
  uVar8 = (uint)uVar10;
  while (uVar10 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar11 = uVar5 + uVar12 & uVar3;
    pcVar1 = (char *)(lVar7 + -0x18 + uVar11 * -0x18);
    auVar19[0] = -(*pcVar1 == DAT_142e34720);
    auVar19[1] = -(pcVar1[1] == DAT_142e34720._1_1_);
    auVar19[2] = -(pcVar1[2] == DAT_142e34720._2_1_);
    auVar19[3] = -(pcVar1[3] == DAT_142e34720._3_1_);
    auVar19[4] = -(pcVar1[4] == DAT_142e34720._4_1_);
    auVar19[5] = -(pcVar1[5] == DAT_142e34720._5_1_);
    auVar19[6] = -(pcVar1[6] == DAT_142e34720._6_1_);
    auVar19[7] = -(pcVar1[7] == DAT_142e34720._7_1_);
    auVar19[8] = -(pcVar1[8] == DAT_142e34720._8_1_);
    auVar19[9] = -(pcVar1[9] == DAT_142e34720._9_1_);
    auVar19[10] = -(pcVar1[10] == DAT_142e34720._10_1_);
    auVar19[0xb] = -(pcVar1[0xb] == DAT_142e34720._11_1_);
    auVar19[0xc] = -(pcVar1[0xc] == DAT_142e34720._12_1_);
    auVar19[0xd] = -(pcVar1[0xd] == DAT_142e34720._13_1_);
    auVar19[0xe] = -(pcVar1[0xe] == DAT_142e34720._14_1_);
    auVar19[0xf] = -(pcVar1[0xf] == DAT_142e34720._15_1_);
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar7 + uVar11 * -0x18 + -8);
      if (((uVar12 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 != 0)) &&
         (lVar7 = ~uVar12 * 0x40, *(longlong *)(lVar13 + 0x20 + lVar7) != 0)) {
        piVar4 = *(int **)(lVar13 + lVar7 + 0x10);
        if (((char)piVar4[7] == '\x01') && (*piVar4 == 2)) {
          pdb_140e1ea30(auStack_40,*(undefined8 *)(piVar4 + 2),param_1,
                        CONCAT71((int7)(uVar3 >> 8),0x23),&UNK_143330ab0);
          auStack_60[0] = 2;
          uStack_58 = param_3;
          pdb_14175d0b0(param_1,&UNK_143053230,0x12,auStack_60,auStack_40);
        }
        return;
      }
      goto LAB_140b03847;
    }
    uVar10 = (ushort)(uVar8 - 1) & (ushort)uVar8;
    uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar10);
  }
  auVar15[0] = -(auVar16[0] == -1);
  auVar15[1] = -(auVar16[1] == -1);
  auVar15[2] = -(auVar16[2] == -1);
  auVar15[3] = -(auVar16[3] == -1);
  auVar15[4] = -(auVar16[4] == -1);
  auVar15[5] = -(auVar16[5] == -1);
  auVar15[6] = -(auVar16[6] == -1);
  auVar15[7] = -(auVar16[7] == -1);
  auVar15[8] = -(auVar16[8] == -1);
  auVar15[9] = -(auVar16[9] == -1);
  auVar15[10] = -(auVar16[10] == -1);
  auVar15[0xb] = -(auVar16[0xb] == -1);
  auVar15[0xc] = -(auVar16[0xc] == -1);
  auVar15[0xd] = -(auVar16[0xd] == -1);
  auVar15[0xe] = -(auVar16[0xe] == -1);
  auVar15[0xf] = -(auVar16[0xf] == -1);
  if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') {
LAB_140b03847:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143053218);
  }
  uVar12 = uVar12 + lVar9 + 0x10;
  lVar9 = lVar9 + 0x10;
  goto LAB_140b03733;
}

