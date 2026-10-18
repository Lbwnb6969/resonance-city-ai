// VA 0x1406685e0, PDB extent 1311 bytes
// tiny_glade::run_game::impl$9::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::run_game::impl$9::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 1311 */

void pdb_1406685e0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
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
  undefined1 auStack_80 [112];
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0xfa82adc16bf51d69;
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar6 + uVar7);
      auVar18[0] = -(*pcVar1 == DAT_142e33ec0);
      auVar18[1] = -(pcVar1[1] == UNK_142e33ec1);
      auVar18[2] = -(pcVar1[2] == UNK_142e33ec2);
      auVar18[3] = -(pcVar1[3] == UNK_142e33ec3);
      auVar18[4] = -(pcVar1[4] == UNK_142e33ec4);
      auVar18[5] = -(pcVar1[5] == UNK_142e33ec5);
      auVar18[6] = -(pcVar1[6] == UNK_142e33ec6);
      auVar18[7] = -(pcVar1[7] == UNK_142e33ec7);
      auVar18[8] = -(pcVar1[8] == UNK_142e33ec8);
      auVar18[9] = -(pcVar1[9] == UNK_142e33ec9);
      auVar18[10] = -(pcVar1[10] == UNK_142e33eca);
      auVar18[0xb] = -(pcVar1[0xb] == UNK_142e33ecb);
      auVar18[0xc] = -(pcVar1[0xc] == UNK_142e33ecc);
      auVar18[0xd] = -(pcVar1[0xd] == UNK_142e33ecd);
      auVar18[0xe] = -(pcVar1[0xe] == UNK_142e33ece);
      auVar18[0xf] = -(pcVar1[0xf] == UNK_142e33ecf);
      uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar12 = uVar3 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar6 + -0x18 + uVar12 * -0x18);
        auVar19[0] = -(*pcVar2 == DAT_142e33ed0);
        auVar19[1] = -(pcVar2[1] == UNK_142e33ed1);
        auVar19[2] = -(pcVar2[2] == UNK_142e33ed2);
        auVar19[3] = -(pcVar2[3] == UNK_142e33ed3);
        auVar19[4] = -(pcVar2[4] == UNK_142e33ed4);
        auVar19[5] = -(pcVar2[5] == UNK_142e33ed5);
        auVar19[6] = -(pcVar2[6] == UNK_142e33ed6);
        auVar19[7] = -(pcVar2[7] == UNK_142e33ed7);
        auVar19[8] = -(pcVar2[8] == UNK_142e33ed8);
        auVar19[9] = -(pcVar2[9] == UNK_142e33ed9);
        auVar19[10] = -(pcVar2[10] == UNK_142e33eda);
        auVar19[0xb] = -(pcVar2[0xb] == UNK_142e33edb);
        auVar19[0xc] = -(pcVar2[0xc] == UNK_142e33edc);
        auVar19[0xd] = -(pcVar2[0xd] == UNK_142e33edd);
        auVar19[0xe] = -(pcVar2[0xe] == UNK_142e33ede);
        auVar19[0xf] = -(pcVar2[0xf] == UNK_142e33edf);
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
          uVar7 = *(ulonglong *)(lVar6 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1406686d2;
          goto LAB_1406686e8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
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
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_1406686d2:
  pdb_14023b7a0(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1406686e8:
    lVar6 = *(longlong *)(param_2 + 0x70);
    uVar7 = 0x6a25f5d40ec1de5c;
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar6 + uVar7);
      auVar20[0] = -(*pcVar1 == DAT_142e343c0);
      auVar20[1] = -(pcVar1[1] == DAT_142e343c0._1_1_);
      auVar20[2] = -(pcVar1[2] == DAT_142e343c0._2_1_);
      auVar20[3] = -(pcVar1[3] == DAT_142e343c0._3_1_);
      auVar20[4] = -(pcVar1[4] == DAT_142e343c0._4_1_);
      auVar20[5] = -(pcVar1[5] == DAT_142e343c0._5_1_);
      auVar20[6] = -(pcVar1[6] == DAT_142e343c0._6_1_);
      auVar20[7] = -(pcVar1[7] == DAT_142e343c0._7_1_);
      auVar20[8] = -(pcVar1[8] == DAT_142e343c0._8_1_);
      auVar20[9] = -(pcVar1[9] == DAT_142e343c0._9_1_);
      auVar20[10] = -(pcVar1[10] == DAT_142e343c0._10_1_);
      auVar20[0xb] = -(pcVar1[0xb] == DAT_142e343c0._11_1_);
      auVar20[0xc] = -(pcVar1[0xc] == DAT_142e343c0._12_1_);
      auVar20[0xd] = -(pcVar1[0xd] == DAT_142e343c0._13_1_);
      auVar20[0xe] = -(pcVar1[0xe] == DAT_142e343c0._14_1_);
      auVar20[0xf] = -(pcVar1[0xf] == DAT_142e343c0._15_1_);
      uVar11 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar12 = uVar3 + uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar6 + -0x18 + uVar12 * -0x18);
        auVar21[0] = -(*pcVar2 == DAT_142e343d0);
        auVar21[1] = -(pcVar2[1] == UNK_142e343d1);
        auVar21[2] = -(pcVar2[2] == UNK_142e343d2);
        auVar21[3] = -(pcVar2[3] == UNK_142e343d3);
        auVar21[4] = -(pcVar2[4] == UNK_142e343d4);
        auVar21[5] = -(pcVar2[5] == UNK_142e343d5);
        auVar21[6] = -(pcVar2[6] == UNK_142e343d6);
        auVar21[7] = -(pcVar2[7] == UNK_142e343d7);
        auVar21[8] = -(pcVar2[8] == UNK_142e343d8);
        auVar21[9] = -(pcVar2[9] == UNK_142e343d9);
        auVar21[10] = -(pcVar2[10] == UNK_142e343da);
        auVar21[0xb] = -(pcVar2[0xb] == UNK_142e343db);
        auVar21[0xc] = -(pcVar2[0xc] == UNK_142e343dc);
        auVar21[0xd] = -(pcVar2[0xd] == UNK_142e343dd);
        auVar21[0xe] = -(pcVar2[0xe] == UNK_142e343de);
        auVar21[0xf] = -(pcVar2[0xf] == UNK_142e343df);
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
          uVar7 = *(ulonglong *)(lVar6 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1406687c2;
          goto LAB_1406687ca;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
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
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_1406687c2:
  pdb_14024b990(param_2);
LAB_1406687ca:
  uVar5 = pdb_14026ec30(param_2);
  lVar6 = pdb_14026e660(uVar5);
  pdb_1403fac50(auStack_80,&UNK_142f8e8b0);
  pdb_1405e74c0(lVar6,auStack_80);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
    lVar8 = *(longlong *)(lVar6 + 0x70);
    uVar7 = 0x241decfc58b12a8d;
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar8 + uVar7);
      auVar22[0] = -(*pcVar1 == DAT_142e34090);
      auVar22[1] = -(pcVar1[1] == DAT_142e34090._1_1_);
      auVar22[2] = -(pcVar1[2] == DAT_142e34090._2_1_);
      auVar22[3] = -(pcVar1[3] == DAT_142e34090._3_1_);
      auVar22[4] = -(pcVar1[4] == DAT_142e34090._4_1_);
      auVar22[5] = -(pcVar1[5] == DAT_142e34090._5_1_);
      auVar22[6] = -(pcVar1[6] == DAT_142e34090._6_1_);
      auVar22[7] = -(pcVar1[7] == DAT_142e34090._7_1_);
      auVar22[8] = -(pcVar1[8] == DAT_142e34090._8_1_);
      auVar22[9] = -(pcVar1[9] == DAT_142e34090._9_1_);
      auVar22[10] = -(pcVar1[10] == DAT_142e34090._10_1_);
      auVar22[0xb] = -(pcVar1[0xb] == DAT_142e34090._11_1_);
      auVar22[0xc] = -(pcVar1[0xc] == DAT_142e34090._12_1_);
      auVar22[0xd] = -(pcVar1[0xd] == DAT_142e34090._13_1_);
      auVar22[0xe] = -(pcVar1[0xe] == DAT_142e34090._14_1_);
      auVar22[0xf] = -(pcVar1[0xf] == DAT_142e34090._15_1_);
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
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar12 = uVar3 + uVar7 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar8 + -0x18 + uVar12 * -0x18);
        auVar23[0] = -(*pcVar2 == DAT_142e344f0);
        auVar23[1] = -(pcVar2[1] == UNK_142e344f1);
        auVar23[2] = -(pcVar2[2] == UNK_142e344f2);
        auVar23[3] = -(pcVar2[3] == UNK_142e344f3);
        auVar23[4] = -(pcVar2[4] == UNK_142e344f4);
        auVar23[5] = -(pcVar2[5] == UNK_142e344f5);
        auVar23[6] = -(pcVar2[6] == UNK_142e344f6);
        auVar23[7] = -(pcVar2[7] == UNK_142e344f7);
        auVar23[8] = -(pcVar2[8] == UNK_142e344f8);
        auVar23[9] = -(pcVar2[9] == UNK_142e344f9);
        auVar23[10] = -(pcVar2[10] == UNK_142e344fa);
        auVar23[0xb] = -(pcVar2[0xb] == UNK_142e344fb);
        auVar23[0xc] = -(pcVar2[0xc] == UNK_142e344fc);
        auVar23[0xd] = -(pcVar2[0xd] == UNK_142e344fd);
        auVar23[0xe] = -(pcVar2[0xe] == UNK_142e344fe);
        auVar23[0xf] = -(pcVar2[0xf] == UNK_142e344ff);
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
          uVar7 = *(ulonglong *)(lVar8 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1406688e2;
          goto LAB_1406688f8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
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
      uVar7 = uVar7 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406688e2:
  pdb_140249590(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406688f8:
    lVar8 = *(longlong *)(lVar6 + 0x70);
    uVar7 = 0x65879b0588232baf;
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar8 + uVar7);
      auVar24[0] = -(*pcVar1 == DAT_142e33f30);
      auVar24[1] = -(pcVar1[1] == DAT_142e33f30._1_1_);
      auVar24[2] = -(pcVar1[2] == DAT_142e33f30._2_1_);
      auVar24[3] = -(pcVar1[3] == DAT_142e33f30._3_1_);
      auVar24[4] = -(pcVar1[4] == DAT_142e33f30._4_1_);
      auVar24[5] = -(pcVar1[5] == DAT_142e33f30._5_1_);
      auVar24[6] = -(pcVar1[6] == DAT_142e33f30._6_1_);
      auVar24[7] = -(pcVar1[7] == DAT_142e33f30._7_1_);
      auVar24[8] = -(pcVar1[8] == DAT_142e33f30._8_1_);
      auVar24[9] = -(pcVar1[9] == DAT_142e33f30._9_1_);
      auVar24[10] = -(pcVar1[10] == DAT_142e33f30._10_1_);
      auVar24[0xb] = -(pcVar1[0xb] == DAT_142e33f30._11_1_);
      auVar24[0xc] = -(pcVar1[0xc] == DAT_142e33f30._12_1_);
      auVar24[0xd] = -(pcVar1[0xd] == DAT_142e33f30._13_1_);
      auVar24[0xe] = -(pcVar1[0xe] == DAT_142e33f30._14_1_);
      auVar24[0xf] = -(pcVar1[0xf] == DAT_142e33f30._15_1_);
      uVar11 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar12 = uVar3 + uVar7 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar8 + -0x18 + uVar12 * -0x18);
        auVar25[0] = -(*pcVar2 == DAT_142e63a30);
        auVar25[1] = -(pcVar2[1] == UNK_142e63a31);
        auVar25[2] = -(pcVar2[2] == UNK_142e63a32);
        auVar25[3] = -(pcVar2[3] == UNK_142e63a33);
        auVar25[4] = -(pcVar2[4] == UNK_142e63a34);
        auVar25[5] = -(pcVar2[5] == UNK_142e63a35);
        auVar25[6] = -(pcVar2[6] == UNK_142e63a36);
        auVar25[7] = -(pcVar2[7] == UNK_142e63a37);
        auVar25[8] = -(pcVar2[8] == UNK_142e63a38);
        auVar25[9] = -(pcVar2[9] == UNK_142e63a39);
        auVar25[10] = -(pcVar2[10] == UNK_142e63a3a);
        auVar25[0xb] = -(pcVar2[0xb] == UNK_142e63a3b);
        auVar25[0xc] = -(pcVar2[0xc] == UNK_142e63a3c);
        auVar25[0xd] = -(pcVar2[0xd] == UNK_142e63a3d);
        auVar25[0xe] = -(pcVar2[0xe] == UNK_142e63a3e);
        auVar25[0xf] = -(pcVar2[0xf] == UNK_142e63a3f);
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
          uVar7 = *(ulonglong *)(lVar8 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_1406689d2;
          goto LAB_1406689e8;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
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
      uVar7 = uVar7 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_1406689d2:
  pdb_140245f90(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_1406689e8:
    lVar8 = *(longlong *)(lVar6 + 0x70);
    uVar7 = 0x4a47a72101259511;
    lVar9 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar8 + uVar7);
      auVar26[0] = -(*pcVar1 == DAT_142e34d60);
      auVar26[1] = -(pcVar1[1] == DAT_142e34d60._1_1_);
      auVar26[2] = -(pcVar1[2] == DAT_142e34d60._2_1_);
      auVar26[3] = -(pcVar1[3] == DAT_142e34d60._3_1_);
      auVar26[4] = -(pcVar1[4] == DAT_142e34d60._4_1_);
      auVar26[5] = -(pcVar1[5] == DAT_142e34d60._5_1_);
      auVar26[6] = -(pcVar1[6] == DAT_142e34d60._6_1_);
      auVar26[7] = -(pcVar1[7] == DAT_142e34d60._7_1_);
      auVar26[8] = -(pcVar1[8] == DAT_142e34d60._8_1_);
      auVar26[9] = -(pcVar1[9] == DAT_142e34d60._9_1_);
      auVar26[10] = -(pcVar1[10] == DAT_142e34d60._10_1_);
      auVar26[0xb] = -(pcVar1[0xb] == DAT_142e34d60._11_1_);
      auVar26[0xc] = -(pcVar1[0xc] == DAT_142e34d60._12_1_);
      auVar26[0xd] = -(pcVar1[0xd] == DAT_142e34d60._13_1_);
      auVar26[0xe] = -(pcVar1[0xe] == DAT_142e34d60._14_1_);
      auVar26[0xf] = -(pcVar1[0xf] == DAT_142e34d60._15_1_);
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
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar12 = uVar3 + uVar7 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar8 + -0x18 + uVar12 * -0x18);
        auVar27[0] = -(*pcVar2 == DAT_142e63a90);
        auVar27[1] = -(pcVar2[1] == UNK_142e63a91);
        auVar27[2] = -(pcVar2[2] == UNK_142e63a92);
        auVar27[3] = -(pcVar2[3] == UNK_142e63a93);
        auVar27[4] = -(pcVar2[4] == UNK_142e63a94);
        auVar27[5] = -(pcVar2[5] == UNK_142e63a95);
        auVar27[6] = -(pcVar2[6] == UNK_142e63a96);
        auVar27[7] = -(pcVar2[7] == UNK_142e63a97);
        auVar27[8] = -(pcVar2[8] == UNK_142e63a98);
        auVar27[9] = -(pcVar2[9] == UNK_142e63a99);
        auVar27[10] = -(pcVar2[10] == UNK_142e63a9a);
        auVar27[0xb] = -(pcVar2[0xb] == UNK_142e63a9b);
        auVar27[0xc] = -(pcVar2[0xc] == UNK_142e63a9c);
        auVar27[0xd] = -(pcVar2[0xd] == UNK_142e63a9d);
        auVar27[0xe] = -(pcVar2[0xe] == UNK_142e63a9e);
        auVar27[0xf] = -(pcVar2[0xf] == UNK_142e63a9f);
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
          uVar7 = *(ulonglong *)(lVar8 + uVar12 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar7) ||
              (uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar7 * 8), uVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar7 * 0x40) == 0))
          goto LAB_140668ac2;
          goto LAB_140668aca;
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
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar7 = uVar7 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_140668ac2:
  pdb_14024c590(lVar6);
LAB_140668aca:
  uVar5 = pdb_14026f200(lVar6);
  pdb_1403aca70(auStack_80,&UNK_142f8e8c8);
  pdb_1405e74c0(uVar5,auStack_80);
  return;
}

