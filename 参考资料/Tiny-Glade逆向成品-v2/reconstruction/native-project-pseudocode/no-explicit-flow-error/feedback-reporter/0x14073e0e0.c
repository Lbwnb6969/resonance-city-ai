// VA 0x14073e0e0, PDB extent 500 bytes
// feedback_reporter::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: feedback_reporter::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
   Extent: 500 */

longlong pdb_14073e0e0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
  undefined1 uStack_19;
  undefined1 *puStack_18;
  code *pcStack_10;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x70);
    uVar6 = 0x1d9b45c6028994;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar5 + uVar6);
      auVar14[0] = -(*pcVar1 == '\0');
      auVar14[1] = -(pcVar1[1] == '\0');
      auVar14[2] = -(pcVar1[2] == '\0');
      auVar14[3] = -(pcVar1[3] == '\0');
      auVar14[4] = -(pcVar1[4] == '\0');
      auVar14[5] = -(pcVar1[5] == '\0');
      auVar14[6] = -(pcVar1[6] == '\0');
      auVar14[7] = -(pcVar1[7] == '\0');
      auVar14[8] = -(pcVar1[8] == '\0');
      auVar14[9] = -(pcVar1[9] == '\0');
      auVar14[10] = -(pcVar1[10] == '\0');
      auVar14[0xb] = -(pcVar1[0xb] == '\0');
      auVar14[0xc] = -(pcVar1[0xc] == '\0');
      auVar14[0xd] = -(pcVar1[0xd] == '\0');
      auVar14[0xe] = -(pcVar1[0xe] == '\0');
      auVar14[0xf] = -(pcVar1[0xf] == '\0');
      uVar9 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar10 = uVar3 + uVar6 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar5 + -0x18 + uVar10 * -0x18);
        auVar15[0] = -(*pcVar2 == DAT_142fa74c0);
        auVar15[1] = -(pcVar2[1] == UNK_142fa74c1);
        auVar15[2] = -(pcVar2[2] == UNK_142fa74c2);
        auVar15[3] = -(pcVar2[3] == UNK_142fa74c3);
        auVar15[4] = -(pcVar2[4] == UNK_142fa74c4);
        auVar15[5] = -(pcVar2[5] == UNK_142fa74c5);
        auVar15[6] = -(pcVar2[6] == UNK_142fa74c6);
        auVar15[7] = -(pcVar2[7] == UNK_142fa74c7);
        auVar15[8] = -(pcVar2[8] == UNK_142fa74c8);
        auVar15[9] = -(pcVar2[9] == UNK_142fa74c9);
        auVar15[10] = -(pcVar2[10] == UNK_142fa74ca);
        auVar15[0xb] = -(pcVar2[0xb] == UNK_142fa74cb);
        auVar15[0xc] = -(pcVar2[0xc] == UNK_142fa74cc);
        auVar15[0xd] = -(pcVar2[0xd] == UNK_142fa74cd);
        auVar15[0xe] = -(pcVar2[0xe] == UNK_142fa74ce);
        auVar15[0xf] = -(pcVar2[0xf] == UNK_142fa74cf);
        if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar5 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14073e1c2;
          goto LAB_14073e1d8;
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
LAB_14073e1c2:
  pdb_1411f13c0(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_14073e1d8:
    lVar5 = *(longlong *)(param_2 + 0x70);
    uVar6 = 0x1ca473e83ddbaa61;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar5 + uVar6);
      auVar16[0] = -(*pcVar1 == DAT_142e34ec0);
      auVar16[1] = -(pcVar1[1] == DAT_142e34ec0._1_1_);
      auVar16[2] = -(pcVar1[2] == DAT_142e34ec0._2_1_);
      auVar16[3] = -(pcVar1[3] == DAT_142e34ec0._3_1_);
      auVar16[4] = -(pcVar1[4] == DAT_142e34ec0._4_1_);
      auVar16[5] = -(pcVar1[5] == DAT_142e34ec0._5_1_);
      auVar16[6] = -(pcVar1[6] == DAT_142e34ec0._6_1_);
      auVar16[7] = -(pcVar1[7] == DAT_142e34ec0._7_1_);
      auVar16[8] = -(pcVar1[8] == DAT_142e34ec0._8_1_);
      auVar16[9] = -(pcVar1[9] == DAT_142e34ec0._9_1_);
      auVar16[10] = -(pcVar1[10] == DAT_142e34ec0._10_1_);
      auVar16[0xb] = -(pcVar1[0xb] == DAT_142e34ec0._11_1_);
      auVar16[0xc] = -(pcVar1[0xc] == DAT_142e34ec0._12_1_);
      auVar16[0xd] = -(pcVar1[0xd] == DAT_142e34ec0._13_1_);
      auVar16[0xe] = -(pcVar1[0xe] == DAT_142e34ec0._14_1_);
      auVar16[0xf] = -(pcVar1[0xf] == DAT_142e34ec0._15_1_);
      uVar9 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar10 = uVar3 + uVar6 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar5 + -0x18 + uVar10 * -0x18);
        auVar17[0] = -(*pcVar2 == DAT_142fa74d0);
        auVar17[1] = -(pcVar2[1] == UNK_142fa74d1);
        auVar17[2] = -(pcVar2[2] == UNK_142fa74d2);
        auVar17[3] = -(pcVar2[3] == UNK_142fa74d3);
        auVar17[4] = -(pcVar2[4] == UNK_142fa74d4);
        auVar17[5] = -(pcVar2[5] == UNK_142fa74d5);
        auVar17[6] = -(pcVar2[6] == UNK_142fa74d6);
        auVar17[7] = -(pcVar2[7] == UNK_142fa74d7);
        auVar17[8] = -(pcVar2[8] == UNK_142fa74d8);
        auVar17[9] = -(pcVar2[9] == UNK_142fa74d9);
        auVar17[10] = -(pcVar2[10] == UNK_142fa74da);
        auVar17[0xb] = -(pcVar2[0xb] == UNK_142fa74db);
        auVar17[0xc] = -(pcVar2[0xc] == UNK_142fa74dc);
        auVar17[0xd] = -(pcVar2[0xd] == UNK_142fa74dd);
        auVar17[0xe] = -(pcVar2[0xe] == UNK_142fa74de);
        auVar17[0xf] = -(pcVar2[0xf] == UNK_142fa74df);
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
          uVar6 = *(ulonglong *)(lVar5 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14073e2bf;
          goto pdb_1411f1e50;
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
LAB_14073e2bf:
  pdb_1411f1900(param_2);
pdb_1411f1e50:
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x70);
    uVar6 = 0x51f059ef4072646d;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_2 + 0x78);
      auVar14 = *(undefined1 (*) [16])(lVar5 + uVar6);
      auVar18[0] = -(auVar14[0] == DAT_142e347b0);
      auVar18[1] = -(auVar14[1] == DAT_142e347b0._1_1_);
      auVar18[2] = -(auVar14[2] == DAT_142e347b0._2_1_);
      auVar18[3] = -(auVar14[3] == DAT_142e347b0._3_1_);
      auVar18[4] = -(auVar14[4] == DAT_142e347b0._4_1_);
      auVar18[5] = -(auVar14[5] == DAT_142e347b0._5_1_);
      auVar18[6] = -(auVar14[6] == DAT_142e347b0._6_1_);
      auVar18[7] = -(auVar14[7] == DAT_142e347b0._7_1_);
      auVar18[8] = -(auVar14[8] == DAT_142e347b0._8_1_);
      auVar18[9] = -(auVar14[9] == DAT_142e347b0._9_1_);
      auVar18[10] = -(auVar14[10] == DAT_142e347b0._10_1_);
      auVar18[0xb] = -(auVar14[0xb] == DAT_142e347b0._11_1_);
      auVar18[0xc] = -(auVar14[0xc] == DAT_142e347b0._12_1_);
      auVar18[0xd] = -(auVar14[0xd] == DAT_142e347b0._13_1_);
      auVar18[0xe] = -(auVar14[0xe] == DAT_142e347b0._14_1_);
      auVar18[0xf] = -(auVar14[0xf] == DAT_142e347b0._15_1_);
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
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar10 = uVar3 + uVar6 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar5 + -0x18 + uVar10 * -0x18);
        auVar19[0] = -(*pcVar1 == UNK_142f62700);
        auVar19[1] = -(pcVar1[1] == UNK_142f62700._1_1_);
        auVar19[2] = -(pcVar1[2] == UNK_142f62700._2_1_);
        auVar19[3] = -(pcVar1[3] == UNK_142f62700._3_1_);
        auVar19[4] = -(pcVar1[4] == UNK_142f62700._4_1_);
        auVar19[5] = -(pcVar1[5] == UNK_142f62700._5_1_);
        auVar19[6] = -(pcVar1[6] == UNK_142f62700._6_1_);
        auVar19[7] = -(pcVar1[7] == UNK_142f62700._7_1_);
        auVar19[8] = -(pcVar1[8] == UNK_142f62700._8_1_);
        auVar19[9] = -(pcVar1[9] == UNK_142f62700._9_1_);
        auVar19[10] = -(pcVar1[10] == UNK_142f62700._10_1_);
        auVar19[0xb] = -(pcVar1[0xb] == UNK_142f62700._11_1_);
        auVar19[0xc] = -(pcVar1[0xc] == UNK_142f62700._12_1_);
        auVar19[0xd] = -(pcVar1[0xd] == UNK_142f62700._13_1_);
        auVar19[0xe] = -(pcVar1[0xe] == UNK_142f62700._14_1_);
        auVar19[0xf] = -(pcVar1[0xf] == UNK_142f62700._15_1_);
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
          uVar6 = *(ulonglong *)(lVar5 + uVar10 * -0x18 + -8);
          if ((uVar6 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar6 * 8), uVar6 != 0)) {
            lVar5 = ~uVar6 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar5) != 0) {
              lVar5 = *(longlong *)(param_2 + 0x1d8) + lVar5;
              *(undefined4 *)(lVar5 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
              pdb_1423ae900(*(undefined8 *)(lVar5 + 0x10));
              return param_2;
            }
          }
          goto code_r0x0001411f1f58;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar13[0] = -(auVar14[0] == -1);
      auVar13[1] = -(auVar14[1] == -1);
      auVar13[2] = -(auVar14[2] == -1);
      auVar13[3] = -(auVar14[3] == -1);
      auVar13[4] = -(auVar14[4] == -1);
      auVar13[5] = -(auVar14[5] == -1);
      auVar13[6] = -(auVar14[6] == -1);
      auVar13[7] = -(auVar14[7] == -1);
      auVar13[8] = -(auVar14[8] == -1);
      auVar13[9] = -(auVar14[9] == -1);
      auVar13[10] = -(auVar14[10] == -1);
      auVar13[0xb] = -(auVar14[0xb] == -1);
      auVar13[0xc] = -(auVar14[0xc] == -1);
      auVar13[0xd] = -(auVar14[0xd] == -1);
      auVar13[0xe] = -(auVar14[0xe] == -1);
      auVar13[0xf] = -(auVar14[0xf] == -1);
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
code_r0x0001411f1f58:
  puStack_18 = &uStack_19;
  pcStack_10 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1432b17c0,&puStack_18,&UNK_1432b17a8);
}

