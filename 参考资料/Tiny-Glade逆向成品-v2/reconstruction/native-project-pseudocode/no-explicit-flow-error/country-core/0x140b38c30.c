// VA 0x140b38c30, PDB extent 1086 bytes
// country_core::systems::render_loop::compute_passes::leaf_particles::leaf_particles_compute
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/leaf_particles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::leaf_particles::leaf_particles_compute
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/leaf_particles.rs
   Extent: 1086 */

void pdb_140b38c30(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [20];
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar11 = *(ulonglong *)(param_2 + 0x78);
    uVar10 = 0x8478cda68354bc3c;
    lVar12 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar11;
      pcVar1 = (char *)(lVar7 + uVar10);
      auVar20[0] = -(*pcVar1 == DAT_142e33ea0);
      auVar20[1] = -(pcVar1[1] == UNK_142e33ea1);
      auVar20[2] = -(pcVar1[2] == UNK_142e33ea2);
      auVar20[3] = -(pcVar1[3] == UNK_142e33ea3);
      auVar20[4] = -(pcVar1[4] == UNK_142e33ea4);
      auVar20[5] = -(pcVar1[5] == UNK_142e33ea5);
      auVar20[6] = -(pcVar1[6] == UNK_142e33ea6);
      auVar20[7] = -(pcVar1[7] == UNK_142e33ea7);
      auVar20[8] = -(pcVar1[8] == UNK_142e33ea8);
      auVar20[9] = -(pcVar1[9] == UNK_142e33ea9);
      auVar20[10] = -(pcVar1[10] == UNK_142e33eaa);
      auVar20[0xb] = -(pcVar1[0xb] == UNK_142e33eab);
      auVar20[0xc] = -(pcVar1[0xc] == UNK_142e33eac);
      auVar20[0xd] = -(pcVar1[0xd] == UNK_142e33ead);
      auVar20[0xe] = -(pcVar1[0xe] == UNK_142e33eae);
      auVar20[0xf] = -(pcVar1[0xf] == UNK_142e33eaf);
      uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar9 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar14 = uVar5 + uVar10 & uVar11;
        pcVar2 = (char *)(lVar7 + -0x18 + uVar14 * -0x18);
        auVar21[0] = -(*pcVar2 == DAT_142e33eb0);
        auVar21[1] = -(pcVar2[1] == UNK_142e33eb1);
        auVar21[2] = -(pcVar2[2] == UNK_142e33eb2);
        auVar21[3] = -(pcVar2[3] == UNK_142e33eb3);
        auVar21[4] = -(pcVar2[4] == UNK_142e33eb4);
        auVar21[5] = -(pcVar2[5] == UNK_142e33eb5);
        auVar21[6] = -(pcVar2[6] == UNK_142e33eb6);
        auVar21[7] = -(pcVar2[7] == UNK_142e33eb7);
        auVar21[8] = -(pcVar2[8] == UNK_142e33eb8);
        auVar21[9] = -(pcVar2[9] == UNK_142e33eb9);
        auVar21[10] = -(pcVar2[10] == UNK_142e33eba);
        auVar21[0xb] = -(pcVar2[0xb] == UNK_142e33ebb);
        auVar21[0xc] = -(pcVar2[0xc] == UNK_142e33ebc);
        auVar21[0xd] = -(pcVar2[0xd] == UNK_142e33ebd);
        auVar21[0xe] = -(pcVar2[0xe] == UNK_142e33ebe);
        auVar21[0xf] = -(pcVar2[0xf] == UNK_142e33ebf);
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
          uVar10 = *(ulonglong *)(lVar7 + uVar14 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar10) goto LAB_140b38de2;
          uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar10 * 8);
          if (uVar10 == 0) goto LAB_140b38de2;
          lVar12 = *(longlong *)(param_2 + 0x1d8);
          lVar15 = ~uVar10 * 0x40;
          if (*(longlong *)(lVar12 + 0x20 + lVar15) == 0) goto LAB_140b38de2;
          uVar10 = **(ulonglong **)(lVar15 + lVar12 + 0x10);
          if (uVar10 == 0) {
            return;
          }
          uVar14 = 0x340;
          if (uVar10 < 0x340) {
            uVar14 = uVar10;
          }
          uVar10 = 0x1d6a82b468dfb8a2;
          lVar15 = 0;
          goto LAB_140b38d79;
        }
        uVar13 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_140b38de2:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143058138);
LAB_140b38d79:
  uVar10 = uVar10 & uVar11;
  auVar20 = *(undefined1 (*) [16])(lVar7 + uVar10);
  auVar22[0] = -(auVar20[0] == DAT_142e34ec0);
  auVar22[1] = -(auVar20[1] == DAT_142e34ec0._1_1_);
  auVar22[2] = -(auVar20[2] == DAT_142e34ec0._2_1_);
  auVar22[3] = -(auVar20[3] == DAT_142e34ec0._3_1_);
  auVar22[4] = -(auVar20[4] == DAT_142e34ec0._4_1_);
  auVar22[5] = -(auVar20[5] == DAT_142e34ec0._5_1_);
  auVar22[6] = -(auVar20[6] == DAT_142e34ec0._6_1_);
  auVar22[7] = -(auVar20[7] == DAT_142e34ec0._7_1_);
  auVar22[8] = -(auVar20[8] == DAT_142e34ec0._8_1_);
  auVar22[9] = -(auVar20[9] == DAT_142e34ec0._9_1_);
  auVar22[10] = -(auVar20[10] == DAT_142e34ec0._10_1_);
  auVar22[0xb] = -(auVar20[0xb] == DAT_142e34ec0._11_1_);
  auVar22[0xc] = -(auVar20[0xc] == DAT_142e34ec0._12_1_);
  auVar22[0xd] = -(auVar20[0xd] == DAT_142e34ec0._13_1_);
  auVar22[0xe] = -(auVar20[0xe] == DAT_142e34ec0._14_1_);
  auVar22[0xf] = -(auVar20[0xf] == DAT_142e34ec0._15_1_);
  uVar13 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
  uVar9 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar16 = uVar5 + uVar10 & uVar11;
    pcVar1 = (char *)(lVar7 + -0x18 + uVar16 * -0x18);
    auVar23[0] = -(*pcVar1 == DAT_142e60e60);
    auVar23[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar23[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar23[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar23[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar23[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar23[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar23[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar23[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar23[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar23[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar23[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar23[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar23[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar23[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar23[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar11 = *(ulonglong *)(lVar7 + uVar16 * -0x18 + -8);
      if (((*(ulonglong *)(param_2 + 0x210) <= uVar11) ||
          (uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar11 * 8), uVar11 == 0)) ||
         (lVar7 = ~uVar11 * 0x40, *(longlong *)(lVar12 + 0x20 + lVar7) == 0)) goto LAB_140b39055;
      uVar4 = *(undefined8 *)(lVar12 + lVar7 + 0x10);
      pdb_141528ad0(auStack_178,uVar4,param_1);
      pdb_141529d50(&uStack_c8,uVar4,param_1);
      uStack_154 = uStack_b8;
      uStack_164 = uStack_c8;
      uStack_15c = uStack_c0;
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140b39061;
      lVar7 = *(longlong *)(param_2 + 0x70);
      uVar11 = 0x4e4d9a3cc2fcf140;
      lVar12 = 0;
      goto LAB_140b38eb1;
    }
    uVar13 = (ushort)(uVar9 - 1) & (ushort)uVar9;
    uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar13);
  }
  goto LAB_140b38dc5;
LAB_140b38eb1:
  uVar11 = uVar11 & *(ulonglong *)(param_2 + 0x78);
  auVar20 = *(undefined1 (*) [16])(lVar7 + uVar11);
  auVar24[0] = -(auVar20[0] == DAT_142e3d9d0);
  auVar24[1] = -(auVar20[1] == DAT_142e3d9d0._1_1_);
  auVar24[2] = -(auVar20[2] == DAT_142e3d9d0._2_1_);
  auVar24[3] = -(auVar20[3] == DAT_142e3d9d0._3_1_);
  auVar24[4] = -(auVar20[4] == DAT_142e3d9d0._4_1_);
  auVar24[5] = -(auVar20[5] == DAT_142e3d9d0._5_1_);
  auVar24[6] = -(auVar20[6] == DAT_142e3d9d0._6_1_);
  auVar24[7] = -(auVar20[7] == DAT_142e3d9d0._7_1_);
  auVar24[8] = -(auVar20[8] == DAT_142e3d9d0._8_1_);
  auVar24[9] = -(auVar20[9] == DAT_142e3d9d0._9_1_);
  auVar24[10] = -(auVar20[10] == DAT_142e3d9d0._10_1_);
  auVar24[0xb] = -(auVar20[0xb] == DAT_142e3d9d0._11_1_);
  auVar24[0xc] = -(auVar20[0xc] == DAT_142e3d9d0._12_1_);
  auVar24[0xd] = -(auVar20[0xd] == DAT_142e3d9d0._13_1_);
  auVar24[0xe] = -(auVar20[0xe] == DAT_142e3d9d0._14_1_);
  auVar24[0xf] = -(auVar20[0xf] == DAT_142e3d9d0._15_1_);
  uVar13 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
  uVar9 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar10 = uVar5 + uVar11 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar7 + -0x18 + uVar10 * -0x18);
    auVar25[0] = -(*pcVar1 == DAT_142e64600);
    auVar25[1] = -(pcVar1[1] == DAT_142e64600._1_1_);
    auVar25[2] = -(pcVar1[2] == DAT_142e64600._2_1_);
    auVar25[3] = -(pcVar1[3] == DAT_142e64600._3_1_);
    auVar25[4] = -(pcVar1[4] == DAT_142e64600._4_1_);
    auVar25[5] = -(pcVar1[5] == DAT_142e64600._5_1_);
    auVar25[6] = -(pcVar1[6] == DAT_142e64600._6_1_);
    auVar25[7] = -(pcVar1[7] == DAT_142e64600._7_1_);
    auVar25[8] = -(pcVar1[8] == DAT_142e64600._8_1_);
    auVar25[9] = -(pcVar1[9] == DAT_142e64600._9_1_);
    auVar25[10] = -(pcVar1[10] == DAT_142e64600._10_1_);
    auVar25[0xb] = -(pcVar1[0xb] == DAT_142e64600._11_1_);
    auVar25[0xc] = -(pcVar1[0xc] == DAT_142e64600._12_1_);
    auVar25[0xd] = -(pcVar1[0xd] == DAT_142e64600._13_1_);
    auVar25[0xe] = -(pcVar1[0xe] == DAT_142e64600._14_1_);
    auVar25[0xf] = -(pcVar1[0xf] == DAT_142e64600._15_1_);
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
                ) == 0xffff) {
      uVar11 = *(ulonglong *)(lVar7 + uVar10 * -0x18 + -8);
      if ((uVar11 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar11 * 8), uVar11 != 0)) {
        lVar7 = ~uVar11 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) != 0) {
          uVar3 = **(undefined4 **)(*(longlong *)(param_2 + 0x1d8) + lVar7 + 0x10);
          uStack_190 = 0;
          uStack_188 = 8;
          uStack_180 = 0;
          uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333160d,0x20,&uStack_190);
          pdb_140e291c0(&uStack_150,&UNK_14333160d,0x20,uVar8,param_1);
          puStack_1a8 = auStack_178;
          puStack_1a0 = &uStack_164;
          uStack_198 = uVar3;
          uStack_194 = (int)uVar14;
          pdb_1417885b0(&uStack_c8,&uStack_150,&puStack_1a8);
          uStack_148 = 0x100000001;
          uStack_150 = 1;
          uStack_14c = (int)uVar14;
          pdb_140e28810(&uStack_c8,&uStack_150);
          pdb_14153a180(uVar4,param_1);
          pdb_14153a540(uVar4,param_1);
          return;
        }
      }
      goto LAB_140b39061;
    }
    uVar13 = (ushort)(uVar9 - 1) & (ushort)uVar9;
    uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar13);
  }
  auVar19[0] = -(auVar20[0] == -1);
  auVar19[1] = -(auVar20[1] == -1);
  auVar19[2] = -(auVar20[2] == -1);
  auVar19[3] = -(auVar20[3] == -1);
  auVar19[4] = -(auVar20[4] == -1);
  auVar19[5] = -(auVar20[5] == -1);
  auVar19[6] = -(auVar20[6] == -1);
  auVar19[7] = -(auVar20[7] == -1);
  auVar19[8] = -(auVar20[8] == -1);
  auVar19[9] = -(auVar20[9] == -1);
  auVar19[10] = -(auVar20[10] == -1);
  auVar19[0xb] = -(auVar20[0xb] == -1);
  auVar19[0xc] = -(auVar20[0xc] == -1);
  auVar19[0xd] = -(auVar20[0xd] == -1);
  auVar19[0xe] = -(auVar20[0xe] == -1);
  auVar19[0xf] = -(auVar20[0xf] == -1);
  if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
LAB_140b39061:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143058168);
  }
  uVar11 = uVar11 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_140b38eb1;
LAB_140b38dc5:
  auVar18[0] = -(auVar20[0] == -1);
  auVar18[1] = -(auVar20[1] == -1);
  auVar18[2] = -(auVar20[2] == -1);
  auVar18[3] = -(auVar20[3] == -1);
  auVar18[4] = -(auVar20[4] == -1);
  auVar18[5] = -(auVar20[5] == -1);
  auVar18[6] = -(auVar20[6] == -1);
  auVar18[7] = -(auVar20[7] == -1);
  auVar18[8] = -(auVar20[8] == -1);
  auVar18[9] = -(auVar20[9] == -1);
  auVar18[10] = -(auVar20[10] == -1);
  auVar18[0xb] = -(auVar20[0xb] == -1);
  auVar18[0xc] = -(auVar20[0xc] == -1);
  auVar18[0xd] = -(auVar20[0xd] == -1);
  auVar18[0xe] = -(auVar20[0xe] == -1);
  auVar18[0xf] = -(auVar20[0xf] == -1);
  if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') {
LAB_140b39055:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143058150);
  }
  uVar10 = uVar10 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_140b38d79;
}

