// VA 0x140b31c80, PDB extent 2378 bytes
// country_core::systems::render_loop::compute_passes::compute_water::water_rasterize_from_cpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_water.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::compute_water::water_rasterize_from_cpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_water.rs
   Extent: 2378 */

longlong pdb_140b31c80(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1c0 [136];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined4 uStack_116;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined *puStack_110;
  undefined8 uStack_108;
  longlong *plStack_98;
  ulonglong *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x70);
    uVar13 = 0x4e5765fa5edf4150;
    lVar14 = 0;
    while( true ) {
      uVar13 = uVar13 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar9 + uVar13);
      auVar23[0] = -(*pcVar1 == DAT_142e3d9d0);
      auVar23[1] = -(pcVar1[1] == DAT_142e3d9d0._1_1_);
      auVar23[2] = -(pcVar1[2] == DAT_142e3d9d0._2_1_);
      auVar23[3] = -(pcVar1[3] == DAT_142e3d9d0._3_1_);
      auVar23[4] = -(pcVar1[4] == DAT_142e3d9d0._4_1_);
      auVar23[5] = -(pcVar1[5] == DAT_142e3d9d0._5_1_);
      auVar23[6] = -(pcVar1[6] == DAT_142e3d9d0._6_1_);
      auVar23[7] = -(pcVar1[7] == DAT_142e3d9d0._7_1_);
      auVar23[8] = -(pcVar1[8] == DAT_142e3d9d0._8_1_);
      auVar23[9] = -(pcVar1[9] == DAT_142e3d9d0._9_1_);
      auVar23[10] = -(pcVar1[10] == DAT_142e3d9d0._10_1_);
      auVar23[0xb] = -(pcVar1[0xb] == DAT_142e3d9d0._11_1_);
      auVar23[0xc] = -(pcVar1[0xc] == DAT_142e3d9d0._12_1_);
      auVar23[0xd] = -(pcVar1[0xd] == DAT_142e3d9d0._13_1_);
      auVar23[0xe] = -(pcVar1[0xe] == DAT_142e3d9d0._14_1_);
      auVar23[0xf] = -(pcVar1[0xf] == DAT_142e3d9d0._15_1_);
      uVar17 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar18 = uVar5 + uVar13 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar9 + -0x18 + uVar18 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_142e60e40);
        auVar24[1] = -(pcVar2[1] == DAT_142e60e40._1_1_);
        auVar24[2] = -(pcVar2[2] == DAT_142e60e40._2_1_);
        auVar24[3] = -(pcVar2[3] == DAT_142e60e40._3_1_);
        auVar24[4] = -(pcVar2[4] == DAT_142e60e40._4_1_);
        auVar24[5] = -(pcVar2[5] == DAT_142e60e40._5_1_);
        auVar24[6] = -(pcVar2[6] == DAT_142e60e40._6_1_);
        auVar24[7] = -(pcVar2[7] == DAT_142e60e40._7_1_);
        auVar24[8] = -(pcVar2[8] == DAT_142e60e40._8_1_);
        auVar24[9] = -(pcVar2[9] == DAT_142e60e40._9_1_);
        auVar24[10] = -(pcVar2[10] == DAT_142e60e40._10_1_);
        auVar24[0xb] = -(pcVar2[0xb] == DAT_142e60e40._11_1_);
        auVar24[0xc] = -(pcVar2[0xc] == DAT_142e60e40._12_1_);
        auVar24[0xd] = -(pcVar2[0xd] == DAT_142e60e40._13_1_);
        auVar24[0xe] = -(pcVar2[0xe] == DAT_142e60e40._14_1_);
        auVar24[0xf] = -(pcVar2[0xf] == DAT_142e60e40._15_1_);
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
          uVar13 = *(ulonglong *)(lVar9 + uVar18 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar13) ||
             (uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8), uVar13 == 0))
          goto LAB_140b31f58;
          lVar9 = ~uVar13 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar9) == 0) goto LAB_140b31f58;
          lVar9 = *(longlong *)(param_2 + 0x1d8) + lVar9;
          lVar14 = *(longlong *)(lVar9 + 0x10);
          uVar3 = *(undefined4 *)(param_2 + 0x5a8);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140b32511;
          lVar10 = *(longlong *)(param_2 + 0x70);
          uVar13 = 0x7057b4358e925fdb;
          lVar15 = 0;
          goto LAB_140b31de6;
        }
        uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
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
      uVar13 = uVar13 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_140b31f58:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143057ab8);
LAB_140b31de6:
  uVar13 = uVar13 & *(ulonglong *)(param_2 + 0x78);
  pcVar1 = (char *)(lVar10 + uVar13);
  auVar25[0] = -(*pcVar1 == DAT_142e33d90);
  auVar25[1] = -(pcVar1[1] == DAT_142e33d90._1_1_);
  auVar25[2] = -(pcVar1[2] == DAT_142e33d90._2_1_);
  auVar25[3] = -(pcVar1[3] == DAT_142e33d90._3_1_);
  auVar25[4] = -(pcVar1[4] == DAT_142e33d90._4_1_);
  auVar25[5] = -(pcVar1[5] == DAT_142e33d90._5_1_);
  auVar25[6] = -(pcVar1[6] == DAT_142e33d90._6_1_);
  auVar25[7] = -(pcVar1[7] == DAT_142e33d90._7_1_);
  auVar25[8] = -(pcVar1[8] == DAT_142e33d90._8_1_);
  auVar25[9] = -(pcVar1[9] == DAT_142e33d90._9_1_);
  auVar25[10] = -(pcVar1[10] == DAT_142e33d90._10_1_);
  auVar25[0xb] = -(pcVar1[0xb] == DAT_142e33d90._11_1_);
  auVar25[0xc] = -(pcVar1[0xc] == DAT_142e33d90._12_1_);
  auVar25[0xd] = -(pcVar1[0xd] == DAT_142e33d90._13_1_);
  auVar25[0xe] = -(pcVar1[0xe] == DAT_142e33d90._14_1_);
  auVar25[0xf] = -(pcVar1[0xf] == DAT_142e33d90._15_1_);
  uVar17 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar18 = uVar5 + uVar13 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar10 + -0x18 + uVar18 * -0x18);
    auVar26[0] = -(*pcVar2 == DAT_142e34350);
    auVar26[1] = -(pcVar2[1] == DAT_142e34350._1_1_);
    auVar26[2] = -(pcVar2[2] == DAT_142e34350._2_1_);
    auVar26[3] = -(pcVar2[3] == DAT_142e34350._3_1_);
    auVar26[4] = -(pcVar2[4] == DAT_142e34350._4_1_);
    auVar26[5] = -(pcVar2[5] == DAT_142e34350._5_1_);
    auVar26[6] = -(pcVar2[6] == DAT_142e34350._6_1_);
    auVar26[7] = -(pcVar2[7] == DAT_142e34350._7_1_);
    auVar26[8] = -(pcVar2[8] == DAT_142e34350._8_1_);
    auVar26[9] = -(pcVar2[9] == DAT_142e34350._9_1_);
    auVar26[10] = -(pcVar2[10] == DAT_142e34350._10_1_);
    auVar26[0xb] = -(pcVar2[0xb] == DAT_142e34350._11_1_);
    auVar26[0xc] = -(pcVar2[0xc] == DAT_142e34350._12_1_);
    auVar26[0xd] = -(pcVar2[0xd] == DAT_142e34350._13_1_);
    auVar26[0xe] = -(pcVar2[0xe] == DAT_142e34350._14_1_);
    auVar26[0xf] = -(pcVar2[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar13 = *(ulonglong *)(lVar10 + uVar18 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar13) ||
         (uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8), uVar13 == 0))
      goto LAB_140b32511;
      lVar10 = ~uVar13 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar10) == 0) goto LAB_140b32511;
      uVar11 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar10 + 0x10);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140b3251d;
      lVar10 = *(longlong *)(param_2 + 0x70);
      uVar13 = 0x1d6a82b468dfb8a2;
      lVar15 = 0;
      goto LAB_140b31ee6;
    }
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
  }
  goto LAB_140b31e40;
LAB_140b31ee6:
  uVar13 = uVar13 & *(ulonglong *)(param_2 + 0x78);
  auVar23 = *(undefined1 (*) [16])(lVar10 + uVar13);
  auVar27[0] = -(auVar23[0] == DAT_142e34ec0);
  auVar27[1] = -(auVar23[1] == DAT_142e34ec0._1_1_);
  auVar27[2] = -(auVar23[2] == DAT_142e34ec0._2_1_);
  auVar27[3] = -(auVar23[3] == DAT_142e34ec0._3_1_);
  auVar27[4] = -(auVar23[4] == DAT_142e34ec0._4_1_);
  auVar27[5] = -(auVar23[5] == DAT_142e34ec0._5_1_);
  auVar27[6] = -(auVar23[6] == DAT_142e34ec0._6_1_);
  auVar27[7] = -(auVar23[7] == DAT_142e34ec0._7_1_);
  auVar27[8] = -(auVar23[8] == DAT_142e34ec0._8_1_);
  auVar27[9] = -(auVar23[9] == DAT_142e34ec0._9_1_);
  auVar27[10] = -(auVar23[10] == DAT_142e34ec0._10_1_);
  auVar27[0xb] = -(auVar23[0xb] == DAT_142e34ec0._11_1_);
  auVar27[0xc] = -(auVar23[0xc] == DAT_142e34ec0._12_1_);
  auVar27[0xd] = -(auVar23[0xd] == DAT_142e34ec0._13_1_);
  auVar27[0xe] = -(auVar23[0xe] == DAT_142e34ec0._14_1_);
  auVar27[0xf] = -(auVar23[0xf] == DAT_142e34ec0._15_1_);
  uVar17 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
  uVar16 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar18 = uVar5 + uVar13 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar10 + -0x18 + uVar18 * -0x18);
    auVar28[0] = -(*pcVar1 == DAT_142e60e60);
    auVar28[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar28[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar28[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar28[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar28[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar28[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar28[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar28[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar28[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar28[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar28[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar28[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar28[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar28[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar28[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar13 = *(ulonglong *)(lVar10 + uVar18 * -0x18 + -8);
      if ((uVar13 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8), uVar13 != 0)) {
        lVar10 = ~uVar13 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar10) != 0) {
          uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar10 + 0x10);
          uVar12 = CONCAT71((int7)((ulonglong)param_2 >> 8),0x12);
          plStack_98 = (longlong *)pdb_140a2e6e0(uVar11,uVar12,&UNK_143057b00);
          uStack_70 = uVar12;
          pdb_141524320(&uStack_120,uVar4,param_1);
          uVar12 = 0x19;
          puStack_90 = (ulonglong *)pdb_140a2db30(uVar11);
          pdb_1417677b0(param_1,&UNK_143057b52,0xb,&UNK_143057b5d,0x28,&uStack_120,uVar12);
          puVar8 = puStack_90;
          pdb_140e9a350(puStack_90);
          pdb_140e9a350((ulonglong)puVar8 | 1);
          LOCK();
          uVar13 = *puVar8;
          *puVar8 = *puVar8 - 0x10;
          UNLOCK();
          if ((uVar13 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar8);
          }
          pdb_141534580(uVar4,param_1);
          if (*(char *)(lVar14 + 0x29b) == '\x01') {
            *(undefined4 *)(lVar9 + 0x3c) = uVar3;
            *(undefined1 *)(lVar14 + 0x29b) = 0;
            pub_142e32780(lVar14 + 0x98,0,0x200);
            uStack_120 = 0;
            uStack_11e = 0x200;
            uStack_11c = 0x10200;
            uStack_118 = 1;
            uStack_116 = 0x2016101;
            uStack_112 = 0;
            puStack_110 = &UNK_143057b18;
            uStack_108 = 0xf;
            uStack_11c = pdb_140e2b4e0(param_1,&uStack_120);
            uStack_118 = 0x200;
            uStack_116 = 0x10200;
            uStack_112 = 1;
            uStack_111 = 0;
            puStack_110 = (undefined *)CONCAT35(puStack_110._5_3_,0x2016101);
            uStack_120 = 0;
            uStack_11e = 0;
            if (*(char *)(param_1 + 0x24c) == '\x01') {
              pdb_140e19620(&uStack_120,param_1);
            }
            uStack_128 = puStack_110;
            uStack_138 = CONCAT22(uStack_11e,uStack_120);
            uStack_134 = uStack_11c;
            uStack_130 = CONCAT17(uStack_111,CONCAT16(uStack_112,CONCAT42(uStack_116,uStack_118)));
            uStack_88 = 0;
            uStack_80 = 8;
            uStack_78 = 0;
            uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333199f,0x21,&uStack_88);
            pdb_140e291c0(&uStack_120,&UNK_14333199f,0x21,uVar11,param_1);
            uStack_68._0_4_ = (undefined4)uStack_70;
            uStack_68._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            uStack_58 = 0x4120000000000001;
            uStack_50 = 1;
            uStack_60 = &uStack_138;
            pdb_141784290(auStack_1c0,&uStack_120,&uStack_68);
            pub_142e32760(&uStack_120,auStack_1c0,0x88);
            uStack_68._4_4_ = 0x200;
            uStack_60._0_4_ = 0x200;
            uStack_60._4_4_ = 1;
            uStack_68._0_4_ = 1;
            pdb_140e28810(&uStack_120,&uStack_68);
            uStack_88 = 0;
            uStack_80 = 8;
            uStack_78 = 0;
            uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333199f,0x21,&uStack_88);
            pdb_140e291c0(&uStack_120,&UNK_14333199f,0x21,uVar11,param_1);
            uStack_60._0_4_ = (undefined4)uStack_70;
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            uStack_58 = 0x4120000000000001;
            uStack_50 = 0;
            uStack_68 = &uStack_138;
            pdb_141784290(auStack_1c0,&uStack_120,&uStack_68);
            pub_142e32760(&uStack_120,auStack_1c0,0x88);
            uStack_68._4_4_ = 0x200;
            uStack_60._0_4_ = 0x200;
            uStack_60._4_4_ = 1;
            uStack_68._0_4_ = 1;
            pdb_140e28810(&uStack_120,&uStack_68);
            uStack_88 = 0;
            uStack_80 = 8;
            uStack_78 = 0;
            uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333199f,0x21,&uStack_88);
            pdb_140e291c0(&uStack_120,&UNK_14333199f,0x21,uVar11,param_1);
            uStack_68._0_4_ = (undefined4)uStack_70;
            uStack_68._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            uStack_58 = 0x41f0000000000002;
            uStack_50 = 1;
            uStack_60 = &uStack_138;
            pdb_141784290(auStack_1c0,&uStack_120,&uStack_68);
            pub_142e32760(&uStack_120,auStack_1c0,0x88);
            uStack_68._4_4_ = 0x200;
            uStack_60._0_4_ = 0x200;
            uStack_60._4_4_ = 1;
            uStack_68._0_4_ = 1;
            pdb_140e28810(&uStack_120,&uStack_68);
            uStack_88 = 0;
            uStack_80 = 8;
            uStack_78 = 0;
            uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333199f,0x21,&uStack_88);
            pdb_140e291c0(&uStack_120,&UNK_14333199f,0x21,uVar11,param_1);
            uStack_60._0_4_ = (undefined4)uStack_70;
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            uStack_58 = 0x41f0000000000002;
            uStack_50 = 0;
            uStack_68 = &uStack_138;
            pdb_141784290(auStack_1c0,&uStack_120,&uStack_68);
            pub_142e32760(&uStack_120,auStack_1c0,0x88);
            uStack_68._4_4_ = 0x200;
            uStack_60._0_4_ = 0x200;
            uStack_60._4_4_ = 1;
            uStack_68._0_4_ = 1;
            pdb_140e28810(&uStack_120,&uStack_68);
          }
          pdb_141764a70(param_1,&UNK_143057b27,10,&UNK_143057b31,0x21,uStack_70);
          plVar7 = plStack_98;
          pdb_140e9a350(plStack_98);
          pdb_140e9a350();
          LOCK();
          lVar9 = *plVar7;
          bVar19 = lVar9 == 8;
          if (bVar19) {
            *plVar7 = 0;
            lVar9 = 8;
          }
          UNLOCK();
          if (!bVar19) {
            lVar9 = pdb_142dbca40(plVar7,0);
          }
          return lVar9;
        }
      }
      goto LAB_140b3251d;
    }
    uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
  }
  auVar22[0] = -(auVar23[0] == -1);
  auVar22[1] = -(auVar23[1] == -1);
  auVar22[2] = -(auVar23[2] == -1);
  auVar22[3] = -(auVar23[3] == -1);
  auVar22[4] = -(auVar23[4] == -1);
  auVar22[5] = -(auVar23[5] == -1);
  auVar22[6] = -(auVar23[6] == -1);
  auVar22[7] = -(auVar23[7] == -1);
  auVar22[8] = -(auVar23[8] == -1);
  auVar22[9] = -(auVar23[9] == -1);
  auVar22[10] = -(auVar23[10] == -1);
  auVar22[0xb] = -(auVar23[0xb] == -1);
  auVar22[0xc] = -(auVar23[0xc] == -1);
  auVar22[0xd] = -(auVar23[0xd] == -1);
  auVar22[0xe] = -(auVar23[0xe] == -1);
  auVar22[0xf] = -(auVar23[0xf] == -1);
  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') {
LAB_140b3251d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143057ae8);
  }
  uVar13 = uVar13 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_140b31ee6;
LAB_140b31e40:
  auVar21[0] = -(*pcVar1 == -1);
  auVar21[1] = -(pcVar1[1] == -1);
  auVar21[2] = -(pcVar1[2] == -1);
  auVar21[3] = -(pcVar1[3] == -1);
  auVar21[4] = -(pcVar1[4] == -1);
  auVar21[5] = -(pcVar1[5] == -1);
  auVar21[6] = -(pcVar1[6] == -1);
  auVar21[7] = -(pcVar1[7] == -1);
  auVar21[8] = -(pcVar1[8] == -1);
  auVar21[9] = -(pcVar1[9] == -1);
  auVar21[10] = -(pcVar1[10] == -1);
  auVar21[0xb] = -(pcVar1[0xb] == -1);
  auVar21[0xc] = -(pcVar1[0xc] == -1);
  auVar21[0xd] = -(pcVar1[0xd] == -1);
  auVar21[0xe] = -(pcVar1[0xe] == -1);
  auVar21[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
LAB_140b32511:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143057ad0);
  }
  uVar13 = uVar13 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_140b31de6;
}

