// VA 0x140b39070, PDB extent 871 bytes
// country_core::systems::render_loop::compute_passes::displace_rocky_terrain::displace_rocky_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/displace_rocky_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::displace_rocky_terrain::displace_rocky_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/displace_rocky_terrain.rs
   Extent: 871 */

void pdb_140b39070(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined8 *puStack_188;
  undefined4 uStack_180;
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
    lVar10 = *(longlong *)(param_2 + 0x70);
    uVar3 = *(ulonglong *)(param_2 + 0x78);
    uVar7 = 0x825f859c56b83c1;
    lVar11 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar3;
      pcVar1 = (char *)(lVar10 + uVar7);
      auVar19[0] = -(*pcVar1 == DAT_142e645e0);
      auVar19[1] = -(pcVar1[1] == UNK_142e645e1);
      auVar19[2] = -(pcVar1[2] == UNK_142e645e2);
      auVar19[3] = -(pcVar1[3] == UNK_142e645e3);
      auVar19[4] = -(pcVar1[4] == UNK_142e645e4);
      auVar19[5] = -(pcVar1[5] == UNK_142e645e5);
      auVar19[6] = -(pcVar1[6] == UNK_142e645e6);
      auVar19[7] = -(pcVar1[7] == UNK_142e645e7);
      auVar19[8] = -(pcVar1[8] == UNK_142e645e8);
      auVar19[9] = -(pcVar1[9] == UNK_142e645e9);
      auVar19[10] = -(pcVar1[10] == UNK_142e645ea);
      auVar19[0xb] = -(pcVar1[0xb] == UNK_142e645eb);
      auVar19[0xc] = -(pcVar1[0xc] == UNK_142e645ec);
      auVar19[0xd] = -(pcVar1[0xd] == UNK_142e645ed);
      auVar19[0xe] = -(pcVar1[0xe] == UNK_142e645ee);
      auVar19[0xf] = -(pcVar1[0xf] == UNK_142e645ef);
      uVar13 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar14 = uVar5 + uVar7 & uVar3;
        pcVar2 = (char *)(lVar10 + -0x18 + uVar14 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_143031190);
        auVar20[1] = -(pcVar2[1] == UNK_143031191);
        auVar20[2] = -(pcVar2[2] == UNK_143031192);
        auVar20[3] = -(pcVar2[3] == UNK_143031193);
        auVar20[4] = -(pcVar2[4] == UNK_143031194);
        auVar20[5] = -(pcVar2[5] == UNK_143031195);
        auVar20[6] = -(pcVar2[6] == UNK_143031196);
        auVar20[7] = -(pcVar2[7] == UNK_143031197);
        auVar20[8] = -(pcVar2[8] == UNK_143031198);
        auVar20[9] = -(pcVar2[9] == UNK_143031199);
        auVar20[10] = -(pcVar2[10] == UNK_14303119a);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_14303119b);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_14303119c);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_14303119d);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_14303119e);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_14303119f);
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
          uVar7 = *(ulonglong *)(lVar10 + uVar14 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar7) goto LAB_140b393be;
          uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8);
          if (uVar7 == 0) goto LAB_140b393be;
          lVar11 = *(longlong *)(param_2 + 0x1d8);
          lVar8 = ~uVar7 * 0x40;
          if (*(longlong *)(lVar11 + 0x20 + lVar8) == 0) goto LAB_140b393be;
          uVar7 = **(ulonglong **)(lVar8 + lVar11 + 0x10);
          uVar14 = 0x1d6a82b468dfb8a2;
          lVar8 = 0;
          goto LAB_140b3919f;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar7 = uVar7 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140b393be:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430581d8);
LAB_140b3919f:
  uVar14 = uVar14 & uVar3;
  auVar19 = *(undefined1 (*) [16])(lVar10 + uVar14);
  auVar21[0] = -(auVar19[0] == DAT_142e34ec0);
  auVar21[1] = -(auVar19[1] == DAT_142e34ec0._1_1_);
  auVar21[2] = -(auVar19[2] == DAT_142e34ec0._2_1_);
  auVar21[3] = -(auVar19[3] == DAT_142e34ec0._3_1_);
  auVar21[4] = -(auVar19[4] == DAT_142e34ec0._4_1_);
  auVar21[5] = -(auVar19[5] == DAT_142e34ec0._5_1_);
  auVar21[6] = -(auVar19[6] == DAT_142e34ec0._6_1_);
  auVar21[7] = -(auVar19[7] == DAT_142e34ec0._7_1_);
  auVar21[8] = -(auVar19[8] == DAT_142e34ec0._8_1_);
  auVar21[9] = -(auVar19[9] == DAT_142e34ec0._9_1_);
  auVar21[10] = -(auVar19[10] == DAT_142e34ec0._10_1_);
  auVar21[0xb] = -(auVar19[0xb] == DAT_142e34ec0._11_1_);
  auVar21[0xc] = -(auVar19[0xc] == DAT_142e34ec0._12_1_);
  auVar21[0xd] = -(auVar19[0xd] == DAT_142e34ec0._13_1_);
  auVar21[0xe] = -(auVar19[0xe] == DAT_142e34ec0._14_1_);
  auVar21[0xf] = -(auVar19[0xf] == DAT_142e34ec0._15_1_);
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
  uVar12 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar16 = uVar5 + uVar14 & uVar3;
    pcVar1 = (char *)(lVar10 + -0x18 + uVar16 * -0x18);
    auVar22[0] = -(*pcVar1 == DAT_142e60e60);
    auVar22[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar22[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar22[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar22[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar22[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar22[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar22[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar22[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar22[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar22[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar22[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar22[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar22[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar22[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar22[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar3 = *(ulonglong *)(lVar10 + uVar16 * -0x18 + -8);
      if (((uVar3 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar3 * 8), uVar3 != 0)) &&
         (lVar10 = ~uVar3 * 0x40, *(longlong *)(lVar11 + 0x20 + lVar10) != 0)) {
        uVar4 = *(undefined8 *)(lVar11 + lVar10 + 0x10);
        pdb_14152d970(auStack_178,uVar4,param_1);
        pdb_14152a690(&uStack_c8,uVar4,param_1);
        uStack_154 = uStack_b8;
        uStack_164 = uStack_c8;
        uStack_15c = uStack_c0;
        uStack_1a8 = 0;
        uStack_1a0 = 8;
        uStack_198 = 0;
        uVar9 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330fc2,0x36,&uStack_1a8);
        pdb_140e291c0(&uStack_150,&UNK_143330fc2,0x36,uVar9,param_1);
        uVar15 = (undefined4)(uVar7 / 3);
        puStack_190 = auStack_178;
        puStack_188 = &uStack_164;
        uStack_180 = uVar15;
        pdb_141794160(&uStack_c8,&uStack_150,&puStack_190);
        uStack_148 = 0x100000001;
        uStack_150 = 1;
        uStack_14c = uVar15;
        pdb_140e28810(&uStack_c8,&uStack_150);
        pdb_1417668b0(param_1,&UNK_143058208,0xd,&UNK_143058215,0x3b,auStack_178,&uStack_164);
        pdb_141539780(uVar4,param_1);
        pdb_141537480(uVar4,param_1);
        return;
      }
      goto LAB_140b393ca;
    }
    uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
  }
  auVar18[0] = -(auVar19[0] == -1);
  auVar18[1] = -(auVar19[1] == -1);
  auVar18[2] = -(auVar19[2] == -1);
  auVar18[3] = -(auVar19[3] == -1);
  auVar18[4] = -(auVar19[4] == -1);
  auVar18[5] = -(auVar19[5] == -1);
  auVar18[6] = -(auVar19[6] == -1);
  auVar18[7] = -(auVar19[7] == -1);
  auVar18[8] = -(auVar19[8] == -1);
  auVar18[9] = -(auVar19[9] == -1);
  auVar18[10] = -(auVar19[10] == -1);
  auVar18[0xb] = -(auVar19[0xb] == -1);
  auVar18[0xc] = -(auVar19[0xc] == -1);
  auVar18[0xd] = -(auVar19[0xd] == -1);
  auVar18[0xe] = -(auVar19[0xe] == -1);
  auVar18[0xf] = -(auVar19[0xf] == -1);
  if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') {
LAB_140b393ca:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430581f0);
  }
  uVar14 = uVar14 + lVar8 + 0x10;
  lVar8 = lVar8 + 0x10;
  goto LAB_140b3919f;
}

