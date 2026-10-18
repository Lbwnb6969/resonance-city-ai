// VA 0x140723ff0, PDB extent 1441 bytes
// system_critters::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/lib.rs
   Extent: 1441 */

void pdb_140723ff0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  pdb_14115a5e0(&lStack_108);
  pdb_14115b200(&lStack_178,&lStack_108);
  pdb_14115d010(&lStack_108,&lStack_178,0x24,&UNK_142fa5ac8);
  pdb_14115d420(param_2,&lStack_108);
  pdb_14115a8f0(&lStack_108,0x2c);
  pdb_14115d420(param_2,&lStack_108);
  pdb_14115d5f0(param_2,1);
  uVar9 = pdb_14115f3c0(param_2,0xc0df);
  lStack_f8 = 0;
  uStack_f0 = 0;
  lStack_108 = 0;
  lStack_100 = 4;
  uStack_e8 = 8;
  uStack_e0 = 0;
  uStack_d8 = 0x8000000000000000;
  uVar9 = pdb_14115d730(uVar9,&lStack_108);
  uVar10 = pdb_141166490();
  uVar9 = pdb_14115e2e0(uVar9,uVar10);
  uStack_f0 = 8;
  uStack_e8 = 0;
  lStack_108 = 0x66e610699;
  lStack_100 = 0;
  lStack_f8 = 0;
  uVar9 = pdb_14115edf0(uVar9,&lStack_108);
  pdb_141167d60(&lStack_108);
  uVar9 = pdb_14115f910(uVar9,&lStack_108);
  pdb_14007ee60();
  pbVar11 = pub_1406abab0(0x30,8);
  if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pbVar11[0] = 1;
  pbVar11[1] = 0;
  pbVar11[2] = 0;
  pbVar11[3] = 0;
  pbVar11[4] = 0;
  pbVar11[5] = 0;
  pbVar11[6] = 0;
  pbVar11[7] = 0;
  pbVar11[8] = 1;
  pbVar11[9] = 0;
  pbVar11[10] = 0;
  pbVar11[0xb] = 0;
  pbVar11[0xc] = 0;
  pbVar11[0xd] = 0;
  pbVar11[0xe] = 0;
  pbVar11[0xf] = 0;
  pbVar11[0x10] = 0;
  pbVar11[0x18] = 0;
  pbVar11[0x19] = 0;
  pbVar11[0x1a] = 0;
  pbVar11[0x1b] = 0;
  pbVar11[0x1c] = 0;
  pbVar11[0x1d] = 0;
  pbVar11[0x1e] = 0;
  pbVar11[0x1f] = 0;
  pbVar11[0x20] = 8;
  pbVar11[0x21] = 0;
  pbVar11[0x22] = 0;
  pbVar11[0x23] = 0;
  pbVar11[0x24] = 0;
  pbVar11[0x25] = 0;
  pbVar11[0x26] = 0;
  pbVar11[0x27] = 0;
  pbVar11[0x28] = 0;
  pbVar11[0x29] = 0;
  pbVar11[0x2a] = 0;
  pbVar11[0x2b] = 0;
  pbVar11[0x2c] = 0;
  pbVar11[0x2d] = 0;
  pbVar11[0x2e] = 0;
  pbVar11[0x2f] = 0;
  uVar9 = pdb_14115e820(uVar9,pbVar11);
  lStack_f8 = 0;
  uStack_f0 = 0;
  lStack_108 = 0;
  lStack_100 = 4;
  uStack_e8 = 8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uVar9 = pdb_14115dd10(uVar9,&lStack_108);
  fVar7 = _DAT_142f895e0;
  fVar6 = _DAT_142f57bc4;
  fVar5 = _DAT_142e36f28;
  lStack_108 = 0;
  lStack_100 = 4;
  lStack_f8 = 0;
  lVar17 = 0;
  do {
    fVar25 = (float)lVar17;
    lVar17 = lVar17 + 1;
    fVar25 = fVar25 / fVar6;
    lVar18 = lStack_f8 * 0xc;
    lVar16 = 0;
    do {
      lVar8 = lStack_f8;
      fVar26 = (float)lVar16 / fVar6;
      if (lStack_f8 == lStack_108) {
        pdb_142d7f010(&lStack_108);
      }
      lVar16 = lVar16 + 1;
      *(float *)(lStack_100 + lVar18) = fVar25 * fVar7 - (fVar5 - fVar25) * fVar7;
      *(float *)(lStack_100 + 4 + lVar18) = fVar26 * fVar7 - (fVar5 - fVar26) * fVar7;
      *(undefined1 *)(lStack_100 + 8 + lVar18) = 0;
      lStack_168 = lVar8 + 1;
      lVar18 = lVar18 + 0xc;
      lStack_f8 = lStack_168;
    } while (lVar16 != 0x19);
  } while (lVar17 != 0x19);
  lStack_178 = lStack_108;
  lStack_170 = lStack_100;
  lVar17 = pdb_14115fef0(uVar9,&lStack_178);
  if (*(longlong *)(lVar17 + 0x88) != 0) {
    lVar18 = *(longlong *)(lVar17 + 0x70);
    uVar12 = 0xdf90768cbbcfb3d8;
    lVar16 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(lVar17 + 0x78);
      pcVar1 = (char *)(lVar18 + uVar12);
      auVar21[0] = -(*pcVar1 == DAT_142e34c80);
      auVar21[1] = -(pcVar1[1] == DAT_142e34c80._1_1_);
      auVar21[2] = -(pcVar1[2] == DAT_142e34c80._2_1_);
      auVar21[3] = -(pcVar1[3] == DAT_142e34c80._3_1_);
      auVar21[4] = -(pcVar1[4] == DAT_142e34c80._4_1_);
      auVar21[5] = -(pcVar1[5] == DAT_142e34c80._5_1_);
      auVar21[6] = -(pcVar1[6] == DAT_142e34c80._6_1_);
      auVar21[7] = -(pcVar1[7] == DAT_142e34c80._7_1_);
      auVar21[8] = -(pcVar1[8] == DAT_142e34c80._8_1_);
      auVar21[9] = -(pcVar1[9] == DAT_142e34c80._9_1_);
      auVar21[10] = -(pcVar1[10] == DAT_142e34c80._10_1_);
      auVar21[0xb] = -(pcVar1[0xb] == DAT_142e34c80._11_1_);
      auVar21[0xc] = -(pcVar1[0xc] == DAT_142e34c80._12_1_);
      auVar21[0xd] = -(pcVar1[0xd] == DAT_142e34c80._13_1_);
      auVar21[0xe] = -(pcVar1[0xe] == DAT_142e34c80._14_1_);
      auVar21[0xf] = -(pcVar1[0xf] == DAT_142e34c80._15_1_);
      uVar14 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar15 = uVar3 + uVar12 & *(ulonglong *)(lVar17 + 0x78);
        pcVar2 = (char *)(lVar18 + -0x18 + uVar15 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_142fa5a80);
        auVar22[1] = -(pcVar2[1] == UNK_142fa5a81);
        auVar22[2] = -(pcVar2[2] == UNK_142fa5a82);
        auVar22[3] = -(pcVar2[3] == UNK_142fa5a83);
        auVar22[4] = -(pcVar2[4] == UNK_142fa5a84);
        auVar22[5] = -(pcVar2[5] == UNK_142fa5a85);
        auVar22[6] = -(pcVar2[6] == UNK_142fa5a86);
        auVar22[7] = -(pcVar2[7] == UNK_142fa5a87);
        auVar22[8] = -(pcVar2[8] == UNK_142fa5a88);
        auVar22[9] = -(pcVar2[9] == UNK_142fa5a89);
        auVar22[10] = -(pcVar2[10] == UNK_142fa5a8a);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_142fa5a8b);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_142fa5a8c);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_142fa5a8d);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_142fa5a8e);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_142fa5a8f);
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
          uVar12 = *(ulonglong *)(lVar18 + uVar15 * -0x18 + -8);
          if (((*(ulonglong *)(lVar17 + 0x210) <= uVar12) ||
              (uVar12 = *(ulonglong *)(*(longlong *)(lVar17 + 0x208) + uVar12 * 8), uVar12 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + 0x20 + ~uVar12 * 0x40) == 0))
          goto LAB_1407243c2;
          goto LAB_1407243d8;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar12 = uVar12 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_1407243c2:
  pdb_141168750(lVar17);
  if (*(longlong *)(lVar17 + 0x88) != 0) {
LAB_1407243d8:
    lVar18 = *(longlong *)(lVar17 + 0x70);
    uVar12 = 0x979a773c0ac3d91e;
    lVar16 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(lVar17 + 0x78);
      pcVar1 = (char *)(lVar18 + uVar12);
      auVar23[0] = -(*pcVar1 == DAT_142e34530);
      auVar23[1] = -(pcVar1[1] == DAT_142e34530._1_1_);
      auVar23[2] = -(pcVar1[2] == DAT_142e34530._2_1_);
      auVar23[3] = -(pcVar1[3] == DAT_142e34530._3_1_);
      auVar23[4] = -(pcVar1[4] == DAT_142e34530._4_1_);
      auVar23[5] = -(pcVar1[5] == DAT_142e34530._5_1_);
      auVar23[6] = -(pcVar1[6] == DAT_142e34530._6_1_);
      auVar23[7] = -(pcVar1[7] == DAT_142e34530._7_1_);
      auVar23[8] = -(pcVar1[8] == DAT_142e34530._8_1_);
      auVar23[9] = -(pcVar1[9] == DAT_142e34530._9_1_);
      auVar23[10] = -(pcVar1[10] == DAT_142e34530._10_1_);
      auVar23[0xb] = -(pcVar1[0xb] == DAT_142e34530._11_1_);
      auVar23[0xc] = -(pcVar1[0xc] == DAT_142e34530._12_1_);
      auVar23[0xd] = -(pcVar1[0xd] == DAT_142e34530._13_1_);
      auVar23[0xe] = -(pcVar1[0xe] == DAT_142e34530._14_1_);
      auVar23[0xf] = -(pcVar1[0xf] == DAT_142e34530._15_1_);
      uVar14 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar15 = uVar3 + uVar12 & *(ulonglong *)(lVar17 + 0x78);
        pcVar2 = (char *)(lVar18 + -0x18 + uVar15 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_142fa5a90);
        auVar24[1] = -(pcVar2[1] == UNK_142fa5a91);
        auVar24[2] = -(pcVar2[2] == UNK_142fa5a92);
        auVar24[3] = -(pcVar2[3] == UNK_142fa5a93);
        auVar24[4] = -(pcVar2[4] == UNK_142fa5a94);
        auVar24[5] = -(pcVar2[5] == UNK_142fa5a95);
        auVar24[6] = -(pcVar2[6] == UNK_142fa5a96);
        auVar24[7] = -(pcVar2[7] == UNK_142fa5a97);
        auVar24[8] = -(pcVar2[8] == UNK_142fa5a98);
        auVar24[9] = -(pcVar2[9] == UNK_142fa5a99);
        auVar24[10] = -(pcVar2[10] == UNK_142fa5a9a);
        auVar24[0xb] = -(pcVar2[0xb] == UNK_142fa5a9b);
        auVar24[0xc] = -(pcVar2[0xc] == UNK_142fa5a9c);
        auVar24[0xd] = -(pcVar2[0xd] == UNK_142fa5a9d);
        auVar24[0xe] = -(pcVar2[0xe] == UNK_142fa5a9e);
        auVar24[0xf] = -(pcVar2[0xf] == UNK_142fa5a9f);
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
          uVar12 = *(ulonglong *)(lVar18 + uVar15 * -0x18 + -8);
          if (((uVar12 < *(ulonglong *)(lVar17 + 0x210)) &&
              (uVar12 = *(ulonglong *)(*(longlong *)(lVar17 + 0x208) + uVar12 * 8), uVar12 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + 0x20 + ~uVar12 * 0x40) != 0)) {
            return;
          }
          goto LAB_1407244b2;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
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
      uVar12 = uVar12 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
LAB_1407244b2:
  pdb_141168d50(lVar17);
  return;
}

