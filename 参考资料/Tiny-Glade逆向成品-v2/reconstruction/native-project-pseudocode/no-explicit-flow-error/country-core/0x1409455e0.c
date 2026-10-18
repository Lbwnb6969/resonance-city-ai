// VA 0x1409455e0, PDB extent 1468 bytes
// country_core::systems::terrain::impl$0::add_terrain_events
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::terrain::impl$0::add_terrain_events
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/mod.rs
   Extent: 1468 */

longlong pdb_1409455e0(longlong param_1)

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
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xf65b32068a54ebb5;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar17[0] = -(*pcVar1 == DAT_142e34950);
      auVar17[1] = -(pcVar1[1] == UNK_142e34951);
      auVar17[2] = -(pcVar1[2] == UNK_142e34952);
      auVar17[3] = -(pcVar1[3] == UNK_142e34953);
      auVar17[4] = -(pcVar1[4] == UNK_142e34954);
      auVar17[5] = -(pcVar1[5] == UNK_142e34955);
      auVar17[6] = -(pcVar1[6] == UNK_142e34956);
      auVar17[7] = -(pcVar1[7] == UNK_142e34957);
      auVar17[8] = -(pcVar1[8] == UNK_142e34958);
      auVar17[9] = -(pcVar1[9] == UNK_142e34959);
      auVar17[10] = -(pcVar1[10] == UNK_142e3495a);
      auVar17[0xb] = -(pcVar1[0xb] == UNK_142e3495b);
      auVar17[0xc] = -(pcVar1[0xc] == UNK_142e3495c);
      auVar17[0xd] = -(pcVar1[0xd] == UNK_142e3495d);
      auVar17[0xe] = -(pcVar1[0xe] == UNK_142e3495e);
      auVar17[0xf] = -(pcVar1[0xf] == UNK_142e3495f);
      uVar9 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_143022ce0);
        auVar18[1] = -(pcVar2[1] == UNK_143022ce1);
        auVar18[2] = -(pcVar2[2] == UNK_143022ce2);
        auVar18[3] = -(pcVar2[3] == UNK_143022ce3);
        auVar18[4] = -(pcVar2[4] == UNK_143022ce4);
        auVar18[5] = -(pcVar2[5] == UNK_143022ce5);
        auVar18[6] = -(pcVar2[6] == UNK_143022ce6);
        auVar18[7] = -(pcVar2[7] == UNK_143022ce7);
        auVar18[8] = -(pcVar2[8] == UNK_143022ce8);
        auVar18[9] = -(pcVar2[9] == UNK_143022ce9);
        auVar18[10] = -(pcVar2[10] == UNK_143022cea);
        auVar18[0xb] = -(pcVar2[0xb] == UNK_143022ceb);
        auVar18[0xc] = -(pcVar2[0xc] == UNK_143022cec);
        auVar18[0xd] = -(pcVar2[0xd] == UNK_143022ced);
        auVar18[0xe] = -(pcVar2[0xe] == UNK_143022cee);
        auVar18[0xf] = -(pcVar2[0xf] == UNK_143022cef);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_1409456d2;
          goto LAB_1409456e8;
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
LAB_1409456d2:
  pdb_1418d0000(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_1409456e8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xe261b5963f7b552d;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar19[0] = -(*pcVar1 == DAT_142e344d0);
      auVar19[1] = -(pcVar1[1] == DAT_142e344d0._1_1_);
      auVar19[2] = -(pcVar1[2] == DAT_142e344d0._2_1_);
      auVar19[3] = -(pcVar1[3] == DAT_142e344d0._3_1_);
      auVar19[4] = -(pcVar1[4] == DAT_142e344d0._4_1_);
      auVar19[5] = -(pcVar1[5] == DAT_142e344d0._5_1_);
      auVar19[6] = -(pcVar1[6] == DAT_142e344d0._6_1_);
      auVar19[7] = -(pcVar1[7] == DAT_142e344d0._7_1_);
      auVar19[8] = -(pcVar1[8] == DAT_142e344d0._8_1_);
      auVar19[9] = -(pcVar1[9] == DAT_142e344d0._9_1_);
      auVar19[10] = -(pcVar1[10] == DAT_142e344d0._10_1_);
      auVar19[0xb] = -(pcVar1[0xb] == DAT_142e344d0._11_1_);
      auVar19[0xc] = -(pcVar1[0xc] == DAT_142e344d0._12_1_);
      auVar19[0xd] = -(pcVar1[0xd] == DAT_142e344d0._13_1_);
      auVar19[0xe] = -(pcVar1[0xe] == DAT_142e344d0._14_1_);
      auVar19[0xf] = -(pcVar1[0xf] == DAT_142e344d0._15_1_);
      uVar9 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_143022cf0);
        auVar20[1] = -(pcVar2[1] == UNK_143022cf1);
        auVar20[2] = -(pcVar2[2] == UNK_143022cf2);
        auVar20[3] = -(pcVar2[3] == UNK_143022cf3);
        auVar20[4] = -(pcVar2[4] == UNK_143022cf4);
        auVar20[5] = -(pcVar2[5] == UNK_143022cf5);
        auVar20[6] = -(pcVar2[6] == UNK_143022cf6);
        auVar20[7] = -(pcVar2[7] == UNK_143022cf7);
        auVar20[8] = -(pcVar2[8] == UNK_143022cf8);
        auVar20[9] = -(pcVar2[9] == UNK_143022cf9);
        auVar20[10] = -(pcVar2[10] == UNK_143022cfa);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_143022cfb);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_143022cfc);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_143022cfd);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_143022cfe);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_143022cff);
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_1409457c2;
          goto LAB_1409457d8;
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
LAB_1409457c2:
  pdb_1418d8400(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_1409457d8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xad361d203023790;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar21[0] = -(*pcVar1 == DAT_142e34910);
      auVar21[1] = -(pcVar1[1] == DAT_142e34910._1_1_);
      auVar21[2] = -(pcVar1[2] == DAT_142e34910._2_1_);
      auVar21[3] = -(pcVar1[3] == DAT_142e34910._3_1_);
      auVar21[4] = -(pcVar1[4] == DAT_142e34910._4_1_);
      auVar21[5] = -(pcVar1[5] == DAT_142e34910._5_1_);
      auVar21[6] = -(pcVar1[6] == DAT_142e34910._6_1_);
      auVar21[7] = -(pcVar1[7] == DAT_142e34910._7_1_);
      auVar21[8] = -(pcVar1[8] == DAT_142e34910._8_1_);
      auVar21[9] = -(pcVar1[9] == DAT_142e34910._9_1_);
      auVar21[10] = -(pcVar1[10] == DAT_142e34910._10_1_);
      auVar21[0xb] = -(pcVar1[0xb] == DAT_142e34910._11_1_);
      auVar21[0xc] = -(pcVar1[0xc] == DAT_142e34910._12_1_);
      auVar21[0xd] = -(pcVar1[0xd] == DAT_142e34910._13_1_);
      auVar21[0xe] = -(pcVar1[0xe] == DAT_142e34910._14_1_);
      auVar21[0xf] = -(pcVar1[0xf] == DAT_142e34910._15_1_);
      uVar9 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_14301dff0);
        auVar22[1] = -(pcVar2[1] == UNK_14301dff1);
        auVar22[2] = -(pcVar2[2] == UNK_14301dff2);
        auVar22[3] = -(pcVar2[3] == UNK_14301dff3);
        auVar22[4] = -(pcVar2[4] == UNK_14301dff4);
        auVar22[5] = -(pcVar2[5] == UNK_14301dff5);
        auVar22[6] = -(pcVar2[6] == UNK_14301dff6);
        auVar22[7] = -(pcVar2[7] == UNK_14301dff7);
        auVar22[8] = -(pcVar2[8] == UNK_14301dff8);
        auVar22[9] = -(pcVar2[9] == UNK_14301dff9);
        auVar22[10] = -(pcVar2[10] == UNK_14301dffa);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_14301dffb);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_14301dffc);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_14301dffd);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_14301dffe);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_14301dfff);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_1409458b2;
          goto LAB_1409458c8;
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
LAB_1409458b2:
  pdb_1418d1800(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_1409458c8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xd1d45189b47d6e84;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar23[0] = -(*pcVar1 == DAT_143022d00);
      auVar23[1] = -(pcVar1[1] == DAT_143022d00._1_1_);
      auVar23[2] = -(pcVar1[2] == DAT_143022d00._2_1_);
      auVar23[3] = -(pcVar1[3] == DAT_143022d00._3_1_);
      auVar23[4] = -(pcVar1[4] == DAT_143022d00._4_1_);
      auVar23[5] = -(pcVar1[5] == DAT_143022d00._5_1_);
      auVar23[6] = -(pcVar1[6] == DAT_143022d00._6_1_);
      auVar23[7] = -(pcVar1[7] == DAT_143022d00._7_1_);
      auVar23[8] = -(pcVar1[8] == DAT_143022d00._8_1_);
      auVar23[9] = -(pcVar1[9] == DAT_143022d00._9_1_);
      auVar23[10] = -(pcVar1[10] == DAT_143022d00._10_1_);
      auVar23[0xb] = -(pcVar1[0xb] == DAT_143022d00._11_1_);
      auVar23[0xc] = -(pcVar1[0xc] == DAT_143022d00._12_1_);
      auVar23[0xd] = -(pcVar1[0xd] == DAT_143022d00._13_1_);
      auVar23[0xe] = -(pcVar1[0xe] == DAT_143022d00._14_1_);
      auVar23[0xf] = -(pcVar1[0xf] == DAT_143022d00._15_1_);
      uVar9 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_143022d10);
        auVar24[1] = -(pcVar2[1] == UNK_143022d11);
        auVar24[2] = -(pcVar2[2] == UNK_143022d12);
        auVar24[3] = -(pcVar2[3] == UNK_143022d13);
        auVar24[4] = -(pcVar2[4] == UNK_143022d14);
        auVar24[5] = -(pcVar2[5] == UNK_143022d15);
        auVar24[6] = -(pcVar2[6] == UNK_143022d16);
        auVar24[7] = -(pcVar2[7] == UNK_143022d17);
        auVar24[8] = -(pcVar2[8] == UNK_143022d18);
        auVar24[9] = -(pcVar2[9] == UNK_143022d19);
        auVar24[10] = -(pcVar2[10] == UNK_143022d1a);
        auVar24[0xb] = -(pcVar2[0xb] == UNK_143022d1b);
        auVar24[0xc] = -(pcVar2[0xc] == UNK_143022d1c);
        auVar24[0xd] = -(pcVar2[0xd] == UNK_143022d1d);
        auVar24[0xe] = -(pcVar2[0xe] == UNK_143022d1e);
        auVar24[0xf] = -(pcVar2[0xf] == UNK_143022d1f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_1409459a2;
          goto LAB_1409459b8;
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
LAB_1409459a2:
  pdb_1418d4e00(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_1409459b8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x877078f3db02f9da;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar25[0] = -(*pcVar1 == DAT_142e34d90);
      auVar25[1] = -(pcVar1[1] == DAT_142e34d90._1_1_);
      auVar25[2] = -(pcVar1[2] == DAT_142e34d90._2_1_);
      auVar25[3] = -(pcVar1[3] == DAT_142e34d90._3_1_);
      auVar25[4] = -(pcVar1[4] == DAT_142e34d90._4_1_);
      auVar25[5] = -(pcVar1[5] == DAT_142e34d90._5_1_);
      auVar25[6] = -(pcVar1[6] == DAT_142e34d90._6_1_);
      auVar25[7] = -(pcVar1[7] == DAT_142e34d90._7_1_);
      auVar25[8] = -(pcVar1[8] == DAT_142e34d90._8_1_);
      auVar25[9] = -(pcVar1[9] == DAT_142e34d90._9_1_);
      auVar25[10] = -(pcVar1[10] == DAT_142e34d90._10_1_);
      auVar25[0xb] = -(pcVar1[0xb] == DAT_142e34d90._11_1_);
      auVar25[0xc] = -(pcVar1[0xc] == DAT_142e34d90._12_1_);
      auVar25[0xd] = -(pcVar1[0xd] == DAT_142e34d90._13_1_);
      auVar25[0xe] = -(pcVar1[0xe] == DAT_142e34d90._14_1_);
      auVar25[0xf] = -(pcVar1[0xf] == DAT_142e34d90._15_1_);
      uVar9 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_143022d20);
        auVar26[1] = -(pcVar2[1] == UNK_143022d21);
        auVar26[2] = -(pcVar2[2] == UNK_143022d22);
        auVar26[3] = -(pcVar2[3] == UNK_143022d23);
        auVar26[4] = -(pcVar2[4] == UNK_143022d24);
        auVar26[5] = -(pcVar2[5] == UNK_143022d25);
        auVar26[6] = -(pcVar2[6] == UNK_143022d26);
        auVar26[7] = -(pcVar2[7] == UNK_143022d27);
        auVar26[8] = -(pcVar2[8] == UNK_143022d28);
        auVar26[9] = -(pcVar2[9] == UNK_143022d29);
        auVar26[10] = -(pcVar2[10] == UNK_143022d2a);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_143022d2b);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_143022d2c);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_143022d2d);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_143022d2e);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_143022d2f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_140945a92;
          goto LAB_140945aa8;
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
LAB_140945a92:
  pdb_1418deff0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_140945aa8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xb4963465624b7ad1;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar27[0] = -(*pcVar1 == DAT_142e34990);
      auVar27[1] = -(pcVar1[1] == DAT_142e34990._1_1_);
      auVar27[2] = -(pcVar1[2] == DAT_142e34990._2_1_);
      auVar27[3] = -(pcVar1[3] == DAT_142e34990._3_1_);
      auVar27[4] = -(pcVar1[4] == DAT_142e34990._4_1_);
      auVar27[5] = -(pcVar1[5] == DAT_142e34990._5_1_);
      auVar27[6] = -(pcVar1[6] == DAT_142e34990._6_1_);
      auVar27[7] = -(pcVar1[7] == DAT_142e34990._7_1_);
      auVar27[8] = -(pcVar1[8] == DAT_142e34990._8_1_);
      auVar27[9] = -(pcVar1[9] == DAT_142e34990._9_1_);
      auVar27[10] = -(pcVar1[10] == DAT_142e34990._10_1_);
      auVar27[0xb] = -(pcVar1[0xb] == DAT_142e34990._11_1_);
      auVar27[0xc] = -(pcVar1[0xc] == DAT_142e34990._12_1_);
      auVar27[0xd] = -(pcVar1[0xd] == DAT_142e34990._13_1_);
      auVar27[0xe] = -(pcVar1[0xe] == DAT_142e34990._14_1_);
      auVar27[0xf] = -(pcVar1[0xf] == DAT_142e34990._15_1_);
      uVar9 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar28[0] = -(*pcVar2 == DAT_143022d30);
        auVar28[1] = -(pcVar2[1] == UNK_143022d31);
        auVar28[2] = -(pcVar2[2] == UNK_143022d32);
        auVar28[3] = -(pcVar2[3] == UNK_143022d33);
        auVar28[4] = -(pcVar2[4] == UNK_143022d34);
        auVar28[5] = -(pcVar2[5] == UNK_143022d35);
        auVar28[6] = -(pcVar2[6] == UNK_143022d36);
        auVar28[7] = -(pcVar2[7] == UNK_143022d37);
        auVar28[8] = -(pcVar2[8] == UNK_143022d38);
        auVar28[9] = -(pcVar2[9] == UNK_143022d39);
        auVar28[10] = -(pcVar2[10] == UNK_143022d3a);
        auVar28[0xb] = -(pcVar2[0xb] == UNK_143022d3b);
        auVar28[0xc] = -(pcVar2[0xc] == UNK_143022d3c);
        auVar28[0xd] = -(pcVar2[0xd] == UNK_143022d3d);
        auVar28[0xe] = -(pcVar2[0xe] == UNK_143022d3e);
        auVar28[0xf] = -(pcVar2[0xf] == UNK_143022d3f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((uVar6 < *(ulonglong *)(param_1 + 0x210)) &&
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 != 0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) != 0)) {
            return param_1;
          }
          goto LAB_140945b8b;
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
LAB_140945b8b:
  pdb_1418d5a00(param_1);
  return param_1;
}

