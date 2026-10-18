// VA 0x14093dcb0, PDB extent 748 bytes
// country_core::systems::ivy::impl$0::add_ivy_events
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::impl$0::add_ivy_events
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/mod.rs
   Extent: 748 */

longlong pdb_14093dcb0(longlong param_1)

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
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x676568800425802f;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar14[0] = -(*pcVar1 == DAT_142e33db0);
      auVar14[1] = -(pcVar1[1] == UNK_142e33db1);
      auVar14[2] = -(pcVar1[2] == UNK_142e33db2);
      auVar14[3] = -(pcVar1[3] == UNK_142e33db3);
      auVar14[4] = -(pcVar1[4] == UNK_142e33db4);
      auVar14[5] = -(pcVar1[5] == UNK_142e33db5);
      auVar14[6] = -(pcVar1[6] == UNK_142e33db6);
      auVar14[7] = -(pcVar1[7] == UNK_142e33db7);
      auVar14[8] = -(pcVar1[8] == UNK_142e33db8);
      auVar14[9] = -(pcVar1[9] == UNK_142e33db9);
      auVar14[10] = -(pcVar1[10] == UNK_142e33dba);
      auVar14[0xb] = -(pcVar1[0xb] == UNK_142e33dbb);
      auVar14[0xc] = -(pcVar1[0xc] == UNK_142e33dbc);
      auVar14[0xd] = -(pcVar1[0xd] == UNK_142e33dbd);
      auVar14[0xe] = -(pcVar1[0xe] == UNK_142e33dbe);
      auVar14[0xf] = -(pcVar1[0xf] == UNK_142e33dbf);
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
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar15[0] = -(*pcVar2 == DAT_143022b90);
        auVar15[1] = -(pcVar2[1] == UNK_143022b91);
        auVar15[2] = -(pcVar2[2] == UNK_143022b92);
        auVar15[3] = -(pcVar2[3] == UNK_143022b93);
        auVar15[4] = -(pcVar2[4] == UNK_143022b94);
        auVar15[5] = -(pcVar2[5] == UNK_143022b95);
        auVar15[6] = -(pcVar2[6] == UNK_143022b96);
        auVar15[7] = -(pcVar2[7] == UNK_143022b97);
        auVar15[8] = -(pcVar2[8] == UNK_143022b98);
        auVar15[9] = -(pcVar2[9] == UNK_143022b99);
        auVar15[10] = -(pcVar2[10] == UNK_143022b9a);
        auVar15[0xb] = -(pcVar2[0xb] == UNK_143022b9b);
        auVar15[0xc] = -(pcVar2[0xc] == UNK_143022b9c);
        auVar15[0xd] = -(pcVar2[0xd] == UNK_143022b9d);
        auVar15[0xe] = -(pcVar2[0xe] == UNK_143022b9e);
        auVar15[0xf] = -(pcVar2[0xf] == UNK_143022b9f);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093dda2;
          goto LAB_14093ddb8;
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
LAB_14093dda2:
  pdb_1418d0600(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093ddb8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0xe5988e904feef6f0;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar16[0] = -(*pcVar1 == DAT_142e33d50);
      auVar16[1] = -(pcVar1[1] == DAT_142e33d50._1_1_);
      auVar16[2] = -(pcVar1[2] == DAT_142e33d50._2_1_);
      auVar16[3] = -(pcVar1[3] == DAT_142e33d50._3_1_);
      auVar16[4] = -(pcVar1[4] == DAT_142e33d50._4_1_);
      auVar16[5] = -(pcVar1[5] == DAT_142e33d50._5_1_);
      auVar16[6] = -(pcVar1[6] == DAT_142e33d50._6_1_);
      auVar16[7] = -(pcVar1[7] == DAT_142e33d50._7_1_);
      auVar16[8] = -(pcVar1[8] == DAT_142e33d50._8_1_);
      auVar16[9] = -(pcVar1[9] == DAT_142e33d50._9_1_);
      auVar16[10] = -(pcVar1[10] == DAT_142e33d50._10_1_);
      auVar16[0xb] = -(pcVar1[0xb] == DAT_142e33d50._11_1_);
      auVar16[0xc] = -(pcVar1[0xc] == DAT_142e33d50._12_1_);
      auVar16[0xd] = -(pcVar1[0xd] == DAT_142e33d50._13_1_);
      auVar16[0xe] = -(pcVar1[0xe] == DAT_142e33d50._14_1_);
      auVar16[0xf] = -(pcVar1[0xf] == DAT_142e33d50._15_1_);
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
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar10 * -0x18);
        auVar17[0] = -(*pcVar2 == DAT_143022ba0);
        auVar17[1] = -(pcVar2[1] == UNK_143022ba1);
        auVar17[2] = -(pcVar2[2] == UNK_143022ba2);
        auVar17[3] = -(pcVar2[3] == UNK_143022ba3);
        auVar17[4] = -(pcVar2[4] == UNK_143022ba4);
        auVar17[5] = -(pcVar2[5] == UNK_143022ba5);
        auVar17[6] = -(pcVar2[6] == UNK_143022ba6);
        auVar17[7] = -(pcVar2[7] == UNK_143022ba7);
        auVar17[8] = -(pcVar2[8] == UNK_143022ba8);
        auVar17[9] = -(pcVar2[9] == UNK_143022ba9);
        auVar17[10] = -(pcVar2[10] == UNK_143022baa);
        auVar17[0xb] = -(pcVar2[0xb] == UNK_143022bab);
        auVar17[0xc] = -(pcVar2[0xc] == UNK_143022bac);
        auVar17[0xd] = -(pcVar2[0xd] == UNK_143022bad);
        auVar17[0xe] = -(pcVar2[0xe] == UNK_143022bae);
        auVar17[0xf] = -(pcVar2[0xf] == UNK_143022baf);
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
          uVar6 = *(ulonglong *)(lVar3 + uVar10 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar6) ||
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) == 0))
          goto LAB_14093de92;
          goto LAB_14093dea8;
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
LAB_14093de92:
  pdb_1418e25f0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_14093dea8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = 0x7b14c2a9ab5e21dd;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar6);
      auVar18[0] = -(*pcVar1 == DAT_142e34460);
      auVar18[1] = -(pcVar1[1] == DAT_142e34460._1_1_);
      auVar18[2] = -(pcVar1[2] == DAT_142e34460._2_1_);
      auVar18[3] = -(pcVar1[3] == DAT_142e34460._3_1_);
      auVar18[4] = -(pcVar1[4] == DAT_142e34460._4_1_);
      auVar18[5] = -(pcVar1[5] == DAT_142e34460._5_1_);
      auVar18[6] = -(pcVar1[6] == DAT_142e34460._6_1_);
      auVar18[7] = -(pcVar1[7] == DAT_142e34460._7_1_);
      auVar18[8] = -(pcVar1[8] == DAT_142e34460._8_1_);
      auVar18[9] = -(pcVar1[9] == DAT_142e34460._9_1_);
      auVar18[10] = -(pcVar1[10] == DAT_142e34460._10_1_);
      auVar18[0xb] = -(pcVar1[0xb] == DAT_142e34460._11_1_);
      auVar18[0xc] = -(pcVar1[0xc] == DAT_142e34460._12_1_);
      auVar18[0xd] = -(pcVar1[0xd] == DAT_142e34460._13_1_);
      auVar18[0xe] = -(pcVar1[0xe] == DAT_142e34460._14_1_);
      auVar18[0xf] = -(pcVar1[0xf] == DAT_142e34460._15_1_);
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
        auVar19[0] = -(*pcVar2 == DAT_142e34560);
        auVar19[1] = -(pcVar2[1] == UNK_142e34561);
        auVar19[2] = -(pcVar2[2] == UNK_142e34562);
        auVar19[3] = -(pcVar2[3] == UNK_142e34563);
        auVar19[4] = -(pcVar2[4] == UNK_142e34564);
        auVar19[5] = -(pcVar2[5] == UNK_142e34565);
        auVar19[6] = -(pcVar2[6] == UNK_142e34566);
        auVar19[7] = -(pcVar2[7] == UNK_142e34567);
        auVar19[8] = -(pcVar2[8] == UNK_142e34568);
        auVar19[9] = -(pcVar2[9] == UNK_142e34569);
        auVar19[10] = -(pcVar2[10] == UNK_142e3456a);
        auVar19[0xb] = -(pcVar2[0xb] == UNK_142e3456b);
        auVar19[0xc] = -(pcVar2[0xc] == UNK_142e3456c);
        auVar19[0xd] = -(pcVar2[0xd] == UNK_142e3456d);
        auVar19[0xe] = -(pcVar2[0xe] == UNK_142e3456e);
        auVar19[0xf] = -(pcVar2[0xf] == UNK_142e3456f);
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
          if (((uVar6 < *(ulonglong *)(param_1 + 0x210)) &&
              (uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar6 * 8), uVar6 != 0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar6 * 0x40) != 0)) {
            return param_1;
          }
          goto LAB_14093df8b;
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
LAB_14093df8b:
  pdb_1418e3df0(param_1);
  return param_1;
}

