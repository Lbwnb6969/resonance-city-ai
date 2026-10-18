// VA 0x140942a60, PDB extent 1708 bytes
// country_core::systems::backend::impl$0::add_backend_events
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::backend::impl$0::add_backend_events
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/mod.rs
   Extent: 1708 */

longlong pdb_140942a60(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xde45433703958e6b;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar18[0] = -(*pcVar1 == DAT_142e34c80);
      auVar18[1] = -(pcVar1[1] == UNK_142e34c81);
      auVar18[2] = -(pcVar1[2] == UNK_142e34c82);
      auVar18[3] = -(pcVar1[3] == UNK_142e34c83);
      auVar18[4] = -(pcVar1[4] == UNK_142e34c84);
      auVar18[5] = -(pcVar1[5] == UNK_142e34c85);
      auVar18[6] = -(pcVar1[6] == UNK_142e34c86);
      auVar18[7] = -(pcVar1[7] == UNK_142e34c87);
      auVar18[8] = -(pcVar1[8] == UNK_142e34c88);
      auVar18[9] = -(pcVar1[9] == UNK_142e34c89);
      auVar18[10] = -(pcVar1[10] == UNK_142e34c8a);
      auVar18[0xb] = -(pcVar1[0xb] == UNK_142e34c8b);
      auVar18[0xc] = -(pcVar1[0xc] == UNK_142e34c8c);
      auVar18[0xd] = -(pcVar1[0xd] == UNK_142e34c8d);
      auVar18[0xe] = -(pcVar1[0xe] == UNK_142e34c8e);
      auVar18[0xf] = -(pcVar1[0xf] == UNK_142e34c8f);
      uVar9 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar19[0] = -(*pcVar2 == DAT_142e42390);
        auVar19[1] = -(pcVar2[1] == UNK_142e42391);
        auVar19[2] = -(pcVar2[2] == UNK_142e42392);
        auVar19[3] = -(pcVar2[3] == UNK_142e42393);
        auVar19[4] = -(pcVar2[4] == UNK_142e42394);
        auVar19[5] = -(pcVar2[5] == UNK_142e42395);
        auVar19[6] = -(pcVar2[6] == UNK_142e42396);
        auVar19[7] = -(pcVar2[7] == UNK_142e42397);
        auVar19[8] = -(pcVar2[8] == UNK_142e42398);
        auVar19[9] = -(pcVar2[9] == UNK_142e42399);
        auVar19[10] = -(pcVar2[10] == UNK_142e4239a);
        auVar19[0xb] = -(pcVar2[0xb] == UNK_142e4239b);
        auVar19[0xc] = -(pcVar2[0xc] == UNK_142e4239c);
        auVar19[0xd] = -(pcVar2[0xd] == UNK_142e4239d);
        auVar19[0xe] = -(pcVar2[0xe] == UNK_142e4239e);
        auVar19[0xf] = -(pcVar2[0xf] == UNK_142e4239f);
        if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_140942b52;
          goto LAB_140942b68;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar11[0] = -(*pcVar1 == -1);
      auVar11[1] = -(pcVar1[1] == -1);
      auVar11[2] = -(pcVar1[2] == -1);
      auVar11[3] = -(pcVar1[3] == -1);
      auVar11[4] = -(pcVar1[4] == -1);
      auVar11[5] = -(pcVar1[5] == -1);
      auVar11[6] = -(pcVar1[6] == -1);
      auVar11[7] = -(pcVar1[7] == -1);
      auVar11[8] = -(pcVar1[8] == -1);
      auVar11[9] = -(pcVar1[9] == -1);
      auVar11[10] = -(pcVar1[10] == -1);
      auVar11[0xb] = -(pcVar1[0xb] == -1);
      auVar11[0xc] = -(pcVar1[0xc] == -1);
      auVar11[0xd] = -(pcVar1[0xd] == -1);
      auVar11[0xe] = -(pcVar1[0xe] == -1);
      auVar11[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar11 >> 0x17,0) & 1) != 0) || (SUB161(auVar11 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar11 >> 0x27,0) & 1) != 0) || (SUB161(auVar11 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar11 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar11 >> 0x3f,0) & 1) != 0) || (SUB161(auVar11 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar11 >> 0x4f,0) & 1) != 0) || (SUB161(auVar11 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar11 >> 0x5f,0) & 1) != 0) || (SUB161(auVar11 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar11 >> 0x6f,0) & 1) != 0) || (SUB161(auVar11 >> 0x77,0) & 1) != 0) ||
          auVar11[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140942b52:
  pdb_1418d3000(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140942b68:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xfb5a1c27c54d80d1;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar20[0] = -(*pcVar1 == DAT_142e33ec0);
      auVar20[1] = -(pcVar1[1] == DAT_142e33ec0._1_1_);
      auVar20[2] = -(pcVar1[2] == DAT_142e33ec0._2_1_);
      auVar20[3] = -(pcVar1[3] == DAT_142e33ec0._3_1_);
      auVar20[4] = -(pcVar1[4] == DAT_142e33ec0._4_1_);
      auVar20[5] = -(pcVar1[5] == DAT_142e33ec0._5_1_);
      auVar20[6] = -(pcVar1[6] == DAT_142e33ec0._6_1_);
      auVar20[7] = -(pcVar1[7] == DAT_142e33ec0._7_1_);
      auVar20[8] = -(pcVar1[8] == DAT_142e33ec0._8_1_);
      auVar20[9] = -(pcVar1[9] == DAT_142e33ec0._9_1_);
      auVar20[10] = -(pcVar1[10] == DAT_142e33ec0._10_1_);
      auVar20[0xb] = -(pcVar1[0xb] == DAT_142e33ec0._11_1_);
      auVar20[0xc] = -(pcVar1[0xc] == DAT_142e33ec0._12_1_);
      auVar20[0xd] = -(pcVar1[0xd] == DAT_142e33ec0._13_1_);
      auVar20[0xe] = -(pcVar1[0xe] == DAT_142e33ec0._14_1_);
      auVar20[0xf] = -(pcVar1[0xf] == DAT_142e33ec0._15_1_);
      uVar9 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar21[0] = -(*pcVar2 == DAT_142e63aa0);
        auVar21[1] = -(pcVar2[1] == UNK_142e63aa1);
        auVar21[2] = -(pcVar2[2] == UNK_142e63aa2);
        auVar21[3] = -(pcVar2[3] == UNK_142e63aa3);
        auVar21[4] = -(pcVar2[4] == UNK_142e63aa4);
        auVar21[5] = -(pcVar2[5] == UNK_142e63aa5);
        auVar21[6] = -(pcVar2[6] == UNK_142e63aa6);
        auVar21[7] = -(pcVar2[7] == UNK_142e63aa7);
        auVar21[8] = -(pcVar2[8] == UNK_142e63aa8);
        auVar21[9] = -(pcVar2[9] == UNK_142e63aa9);
        auVar21[10] = -(pcVar2[10] == UNK_142e63aaa);
        auVar21[0xb] = -(pcVar2[0xb] == UNK_142e63aab);
        auVar21[0xc] = -(pcVar2[0xc] == UNK_142e63aac);
        auVar21[0xd] = -(pcVar2[0xd] == UNK_142e63aad);
        auVar21[0xe] = -(pcVar2[0xe] == UNK_142e63aae);
        auVar21[0xf] = -(pcVar2[0xf] == UNK_142e63aaf);
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_140942c42;
          goto LAB_140942c58;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar12[0] = -(*pcVar1 == -1);
      auVar12[1] = -(pcVar1[1] == -1);
      auVar12[2] = -(pcVar1[2] == -1);
      auVar12[3] = -(pcVar1[3] == -1);
      auVar12[4] = -(pcVar1[4] == -1);
      auVar12[5] = -(pcVar1[5] == -1);
      auVar12[6] = -(pcVar1[6] == -1);
      auVar12[7] = -(pcVar1[7] == -1);
      auVar12[8] = -(pcVar1[8] == -1);
      auVar12[9] = -(pcVar1[9] == -1);
      auVar12[10] = -(pcVar1[10] == -1);
      auVar12[0xb] = -(pcVar1[0xb] == -1);
      auVar12[0xc] = -(pcVar1[0xc] == -1);
      auVar12[0xd] = -(pcVar1[0xd] == -1);
      auVar12[0xe] = -(pcVar1[0xe] == -1);
      auVar12[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140942c42:
  pdb_1418cf400(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140942c58:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x2d844729cc9b4b16;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar22[0] = -(*pcVar1 == DAT_142e34c00);
      auVar22[1] = -(pcVar1[1] == DAT_142e34c00._1_1_);
      auVar22[2] = -(pcVar1[2] == DAT_142e34c00._2_1_);
      auVar22[3] = -(pcVar1[3] == DAT_142e34c00._3_1_);
      auVar22[4] = -(pcVar1[4] == DAT_142e34c00._4_1_);
      auVar22[5] = -(pcVar1[5] == DAT_142e34c00._5_1_);
      auVar22[6] = -(pcVar1[6] == DAT_142e34c00._6_1_);
      auVar22[7] = -(pcVar1[7] == DAT_142e34c00._7_1_);
      auVar22[8] = -(pcVar1[8] == DAT_142e34c00._8_1_);
      auVar22[9] = -(pcVar1[9] == DAT_142e34c00._9_1_);
      auVar22[10] = -(pcVar1[10] == DAT_142e34c00._10_1_);
      auVar22[0xb] = -(pcVar1[0xb] == DAT_142e34c00._11_1_);
      auVar22[0xc] = -(pcVar1[0xc] == DAT_142e34c00._12_1_);
      auVar22[0xd] = -(pcVar1[0xd] == DAT_142e34c00._13_1_);
      auVar22[0xe] = -(pcVar1[0xe] == DAT_142e34c00._14_1_);
      auVar22[0xf] = -(pcVar1[0xf] == DAT_142e34c00._15_1_);
      uVar9 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar23[0] = -(*pcVar2 == DAT_142e63a10);
        auVar23[1] = -(pcVar2[1] == UNK_142e63a11);
        auVar23[2] = -(pcVar2[2] == UNK_142e63a12);
        auVar23[3] = -(pcVar2[3] == UNK_142e63a13);
        auVar23[4] = -(pcVar2[4] == UNK_142e63a14);
        auVar23[5] = -(pcVar2[5] == UNK_142e63a15);
        auVar23[6] = -(pcVar2[6] == UNK_142e63a16);
        auVar23[7] = -(pcVar2[7] == UNK_142e63a17);
        auVar23[8] = -(pcVar2[8] == UNK_142e63a18);
        auVar23[9] = -(pcVar2[9] == UNK_142e63a19);
        auVar23[10] = -(pcVar2[10] == UNK_142e63a1a);
        auVar23[0xb] = -(pcVar2[0xb] == UNK_142e63a1b);
        auVar23[0xc] = -(pcVar2[0xc] == UNK_142e63a1c);
        auVar23[0xd] = -(pcVar2[0xd] == UNK_142e63a1d);
        auVar23[0xe] = -(pcVar2[0xe] == UNK_142e63a1e);
        auVar23[0xf] = -(pcVar2[0xf] == UNK_142e63a1f);
        if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                    (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_140942d32;
          goto LAB_140942d48;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140942d32:
  pdb_1418e5bf0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140942d48:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x573f3641d338b0d0;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar24[0] = -(*pcVar1 == DAT_142e63b10);
      auVar24[1] = -(pcVar1[1] == DAT_142e63b10._1_1_);
      auVar24[2] = -(pcVar1[2] == DAT_142e63b10._2_1_);
      auVar24[3] = -(pcVar1[3] == DAT_142e63b10._3_1_);
      auVar24[4] = -(pcVar1[4] == DAT_142e63b10._4_1_);
      auVar24[5] = -(pcVar1[5] == DAT_142e63b10._5_1_);
      auVar24[6] = -(pcVar1[6] == DAT_142e63b10._6_1_);
      auVar24[7] = -(pcVar1[7] == DAT_142e63b10._7_1_);
      auVar24[8] = -(pcVar1[8] == DAT_142e63b10._8_1_);
      auVar24[9] = -(pcVar1[9] == DAT_142e63b10._9_1_);
      auVar24[10] = -(pcVar1[10] == DAT_142e63b10._10_1_);
      auVar24[0xb] = -(pcVar1[0xb] == DAT_142e63b10._11_1_);
      auVar24[0xc] = -(pcVar1[0xc] == DAT_142e63b10._12_1_);
      auVar24[0xd] = -(pcVar1[0xd] == DAT_142e63b10._13_1_);
      auVar24[0xe] = -(pcVar1[0xe] == DAT_142e63b10._14_1_);
      auVar24[0xf] = -(pcVar1[0xf] == DAT_142e63b10._15_1_);
      uVar9 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar25[0] = -(*pcVar2 == DAT_142e63b20);
        auVar25[1] = -(pcVar2[1] == UNK_142e63b21);
        auVar25[2] = -(pcVar2[2] == UNK_142e63b22);
        auVar25[3] = -(pcVar2[3] == UNK_142e63b23);
        auVar25[4] = -(pcVar2[4] == UNK_142e63b24);
        auVar25[5] = -(pcVar2[5] == UNK_142e63b25);
        auVar25[6] = -(pcVar2[6] == UNK_142e63b26);
        auVar25[7] = -(pcVar2[7] == UNK_142e63b27);
        auVar25[8] = -(pcVar2[8] == UNK_142e63b28);
        auVar25[9] = -(pcVar2[9] == UNK_142e63b29);
        auVar25[10] = -(pcVar2[10] == UNK_142e63b2a);
        auVar25[0xb] = -(pcVar2[0xb] == UNK_142e63b2b);
        auVar25[0xc] = -(pcVar2[0xc] == UNK_142e63b2c);
        auVar25[0xd] = -(pcVar2[0xd] == UNK_142e63b2d);
        auVar25[0xe] = -(pcVar2[0xe] == UNK_142e63b2e);
        auVar25[0xf] = -(pcVar2[0xf] == UNK_142e63b2f);
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                    (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_140942e22;
          goto LAB_140942e38;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140942e22:
  pdb_1418dcc00(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140942e38:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x54a370674283c60c;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar26[0] = -(*pcVar1 == DAT_142e33fd0);
      auVar26[1] = -(pcVar1[1] == DAT_142e33fd0._1_1_);
      auVar26[2] = -(pcVar1[2] == DAT_142e33fd0._2_1_);
      auVar26[3] = -(pcVar1[3] == DAT_142e33fd0._3_1_);
      auVar26[4] = -(pcVar1[4] == DAT_142e33fd0._4_1_);
      auVar26[5] = -(pcVar1[5] == DAT_142e33fd0._5_1_);
      auVar26[6] = -(pcVar1[6] == DAT_142e33fd0._6_1_);
      auVar26[7] = -(pcVar1[7] == DAT_142e33fd0._7_1_);
      auVar26[8] = -(pcVar1[8] == DAT_142e33fd0._8_1_);
      auVar26[9] = -(pcVar1[9] == DAT_142e33fd0._9_1_);
      auVar26[10] = -(pcVar1[10] == DAT_142e33fd0._10_1_);
      auVar26[0xb] = -(pcVar1[0xb] == DAT_142e33fd0._11_1_);
      auVar26[0xc] = -(pcVar1[0xc] == DAT_142e33fd0._12_1_);
      auVar26[0xd] = -(pcVar1[0xd] == DAT_142e33fd0._13_1_);
      auVar26[0xe] = -(pcVar1[0xe] == DAT_142e33fd0._14_1_);
      auVar26[0xf] = -(pcVar1[0xf] == DAT_142e33fd0._15_1_);
      uVar9 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar27[0] = -(*pcVar2 == DAT_143022cb0);
        auVar27[1] = -(pcVar2[1] == UNK_143022cb1);
        auVar27[2] = -(pcVar2[2] == UNK_143022cb2);
        auVar27[3] = -(pcVar2[3] == UNK_143022cb3);
        auVar27[4] = -(pcVar2[4] == UNK_143022cb4);
        auVar27[5] = -(pcVar2[5] == UNK_143022cb5);
        auVar27[6] = -(pcVar2[6] == UNK_143022cb6);
        auVar27[7] = -(pcVar2[7] == UNK_143022cb7);
        auVar27[8] = -(pcVar2[8] == UNK_143022cb8);
        auVar27[9] = -(pcVar2[9] == UNK_143022cb9);
        auVar27[10] = -(pcVar2[10] == UNK_143022cba);
        auVar27[0xb] = -(pcVar2[0xb] == UNK_143022cbb);
        auVar27[0xc] = -(pcVar2[0xc] == UNK_143022cbc);
        auVar27[0xd] = -(pcVar2[0xd] == UNK_143022cbd);
        auVar27[0xe] = -(pcVar2[0xe] == UNK_143022cbe);
        auVar27[0xf] = -(pcVar2[0xf] == UNK_143022cbf);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_140942f12;
          goto LAB_140942f28;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140942f12:
  pdb_1418e55f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140942f28:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x7af121eaa7da735b;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar28[0] = -(*pcVar1 == DAT_142e34460);
      auVar28[1] = -(pcVar1[1] == DAT_142e34460._1_1_);
      auVar28[2] = -(pcVar1[2] == DAT_142e34460._2_1_);
      auVar28[3] = -(pcVar1[3] == DAT_142e34460._3_1_);
      auVar28[4] = -(pcVar1[4] == DAT_142e34460._4_1_);
      auVar28[5] = -(pcVar1[5] == DAT_142e34460._5_1_);
      auVar28[6] = -(pcVar1[6] == DAT_142e34460._6_1_);
      auVar28[7] = -(pcVar1[7] == DAT_142e34460._7_1_);
      auVar28[8] = -(pcVar1[8] == DAT_142e34460._8_1_);
      auVar28[9] = -(pcVar1[9] == DAT_142e34460._9_1_);
      auVar28[10] = -(pcVar1[10] == DAT_142e34460._10_1_);
      auVar28[0xb] = -(pcVar1[0xb] == DAT_142e34460._11_1_);
      auVar28[0xc] = -(pcVar1[0xc] == DAT_142e34460._12_1_);
      auVar28[0xd] = -(pcVar1[0xd] == DAT_142e34460._13_1_);
      auVar28[0xe] = -(pcVar1[0xe] == DAT_142e34460._14_1_);
      auVar28[0xf] = -(pcVar1[0xf] == DAT_142e34460._15_1_);
      uVar9 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar29[0] = -(*pcVar2 == DAT_142e63a60);
        auVar29[1] = -(pcVar2[1] == UNK_142e63a61);
        auVar29[2] = -(pcVar2[2] == UNK_142e63a62);
        auVar29[3] = -(pcVar2[3] == UNK_142e63a63);
        auVar29[4] = -(pcVar2[4] == UNK_142e63a64);
        auVar29[5] = -(pcVar2[5] == UNK_142e63a65);
        auVar29[6] = -(pcVar2[6] == UNK_142e63a66);
        auVar29[7] = -(pcVar2[7] == UNK_142e63a67);
        auVar29[8] = -(pcVar2[8] == UNK_142e63a68);
        auVar29[9] = -(pcVar2[9] == UNK_142e63a69);
        auVar29[10] = -(pcVar2[10] == UNK_142e63a6a);
        auVar29[0xb] = -(pcVar2[0xb] == UNK_142e63a6b);
        auVar29[0xc] = -(pcVar2[0xc] == UNK_142e63a6c);
        auVar29[0xd] = -(pcVar2[0xd] == UNK_142e63a6d);
        auVar29[0xe] = -(pcVar2[0xe] == UNK_142e63a6e);
        auVar29[0xf] = -(pcVar2[0xf] == UNK_142e63a6f);
        if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_140943002;
          goto LAB_140943018;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140943002:
  pdb_1418e91f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140943018:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x8a51563d559bda7c;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar30[0] = -(*pcVar1 == DAT_142e64660);
      auVar30[1] = -(pcVar1[1] == DAT_142e64660._1_1_);
      auVar30[2] = -(pcVar1[2] == DAT_142e64660._2_1_);
      auVar30[3] = -(pcVar1[3] == DAT_142e64660._3_1_);
      auVar30[4] = -(pcVar1[4] == DAT_142e64660._4_1_);
      auVar30[5] = -(pcVar1[5] == DAT_142e64660._5_1_);
      auVar30[6] = -(pcVar1[6] == DAT_142e64660._6_1_);
      auVar30[7] = -(pcVar1[7] == DAT_142e64660._7_1_);
      auVar30[8] = -(pcVar1[8] == DAT_142e64660._8_1_);
      auVar30[9] = -(pcVar1[9] == DAT_142e64660._9_1_);
      auVar30[10] = -(pcVar1[10] == DAT_142e64660._10_1_);
      auVar30[0xb] = -(pcVar1[0xb] == DAT_142e64660._11_1_);
      auVar30[0xc] = -(pcVar1[0xc] == DAT_142e64660._12_1_);
      auVar30[0xd] = -(pcVar1[0xd] == DAT_142e64660._13_1_);
      auVar30[0xe] = -(pcVar1[0xe] == DAT_142e64660._14_1_);
      auVar30[0xf] = -(pcVar1[0xf] == DAT_142e64660._15_1_);
      uVar9 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar31[0] = -(*pcVar2 == DAT_143022cc0);
        auVar31[1] = -(pcVar2[1] == UNK_143022cc1);
        auVar31[2] = -(pcVar2[2] == UNK_143022cc2);
        auVar31[3] = -(pcVar2[3] == UNK_143022cc3);
        auVar31[4] = -(pcVar2[4] == UNK_143022cc4);
        auVar31[5] = -(pcVar2[5] == UNK_143022cc5);
        auVar31[6] = -(pcVar2[6] == UNK_143022cc6);
        auVar31[7] = -(pcVar2[7] == UNK_143022cc7);
        auVar31[8] = -(pcVar2[8] == UNK_143022cc8);
        auVar31[9] = -(pcVar2[9] == UNK_143022cc9);
        auVar31[10] = -(pcVar2[10] == UNK_143022cca);
        auVar31[0xb] = -(pcVar2[0xb] == UNK_143022ccb);
        auVar31[0xc] = -(pcVar2[0xc] == UNK_143022ccc);
        auVar31[0xd] = -(pcVar2[0xd] == UNK_143022ccd);
        auVar31[0xe] = -(pcVar2[0xe] == UNK_143022cce);
        auVar31[0xf] = -(pcVar2[0xf] == UNK_143022ccf);
        if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((uVar6 < *(ulonglong *)(param_1 + 0x210)) &&
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 != 0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) != 0)) {
            return param_1;
          }
          goto LAB_1409430fb;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
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
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_1409430fb:
  pdb_1418e9df0(param_1);
  return param_1;
}

