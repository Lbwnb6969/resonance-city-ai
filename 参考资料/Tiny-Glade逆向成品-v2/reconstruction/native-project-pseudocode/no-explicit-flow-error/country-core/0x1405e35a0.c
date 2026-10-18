// VA 0x1405e35a0, PDB extent 1418 bytes
// country_core::systems::render_loop::compute_passes::upload_world_raster::upload_raster_staging_to_texture<country_core::resources::world_raster_defs::PlantExemplarRaster>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/upload_world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::upload_world_raster::upload_raster_staging_to_texture<country_core::resources::world_raster_defs::PlantExemplarRaster>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/upload_world_raster.rs
   Extent: 1418 */

longlong pdb_1405e35a0(longlong param_1,longlong param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_1d8 [136];
  undefined1 auStack_150 [22];
  undefined1 uStack_13a;
  undefined1 auStack_c4 [20];
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 *puStack_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *plStack_58;
  undefined4 uStack_50;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    uVar11 = (ulonglong)param_3;
    lVar9 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0x3c9831b2a5015fba;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar9 + uVar12);
      auVar22[0] = -(*pcVar1 == DAT_142e34b70);
      auVar22[1] = -(pcVar1[1] == DAT_142e34b70._1_1_);
      auVar22[2] = -(pcVar1[2] == DAT_142e34b70._2_1_);
      auVar22[3] = -(pcVar1[3] == DAT_142e34b70._3_1_);
      auVar22[4] = -(pcVar1[4] == DAT_142e34b70._4_1_);
      auVar22[5] = -(pcVar1[5] == DAT_142e34b70._5_1_);
      auVar22[6] = -(pcVar1[6] == DAT_142e34b70._6_1_);
      auVar22[7] = -(pcVar1[7] == DAT_142e34b70._7_1_);
      auVar22[8] = -(pcVar1[8] == DAT_142e34b70._8_1_);
      auVar22[9] = -(pcVar1[9] == DAT_142e34b70._9_1_);
      auVar22[10] = -(pcVar1[10] == DAT_142e34b70._10_1_);
      auVar22[0xb] = -(pcVar1[0xb] == DAT_142e34b70._11_1_);
      auVar22[0xc] = -(pcVar1[0xc] == DAT_142e34b70._12_1_);
      auVar22[0xd] = -(pcVar1[0xd] == DAT_142e34b70._13_1_);
      auVar22[0xe] = -(pcVar1[0xe] == DAT_142e34b70._14_1_);
      auVar22[0xf] = -(pcVar1[0xf] == DAT_142e34b70._15_1_);
      uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar17 = uVar5 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar9 + -0x18 + uVar17 * -0x18);
        auVar23[0] = -(*pcVar2 == DAT_142e34b80);
        auVar23[1] = -(pcVar2[1] == DAT_142e34b80._1_1_);
        auVar23[2] = -(pcVar2[2] == DAT_142e34b80._2_1_);
        auVar23[3] = -(pcVar2[3] == DAT_142e34b80._3_1_);
        auVar23[4] = -(pcVar2[4] == DAT_142e34b80._4_1_);
        auVar23[5] = -(pcVar2[5] == DAT_142e34b80._5_1_);
        auVar23[6] = -(pcVar2[6] == DAT_142e34b80._6_1_);
        auVar23[7] = -(pcVar2[7] == DAT_142e34b80._7_1_);
        auVar23[8] = -(pcVar2[8] == DAT_142e34b80._8_1_);
        auVar23[9] = -(pcVar2[9] == DAT_142e34b80._9_1_);
        auVar23[10] = -(pcVar2[10] == DAT_142e34b80._10_1_);
        auVar23[0xb] = -(pcVar2[0xb] == DAT_142e34b80._11_1_);
        auVar23[0xc] = -(pcVar2[0xc] == DAT_142e34b80._12_1_);
        auVar23[0xd] = -(pcVar2[0xd] == DAT_142e34b80._13_1_);
        auVar23[0xe] = -(pcVar2[0xe] == DAT_142e34b80._14_1_);
        auVar23[0xf] = -(pcVar2[0xf] == DAT_142e34b80._15_1_);
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
          uVar12 = *(ulonglong *)(lVar9 + uVar17 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
             (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
          goto LAB_1405e3878;
          lVar9 = ~uVar12 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar9) == 0) goto LAB_1405e3878;
          lVar9 = *(longlong *)(param_2 + 0x1d8) + lVar9;
          uVar10 = *(undefined8 *)(lVar9 + 0x10);
          uStack_50 = *(undefined4 *)(param_2 + 0x5a8);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1405e3a91;
          lVar13 = *(longlong *)(param_2 + 0x70);
          uVar12 = 0x1d6a82b468dfb8a2;
          lVar14 = 0;
          goto LAB_1405e370d;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
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
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1405e3878:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f72bb8);
LAB_1405e370d:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  pcVar1 = (char *)(lVar13 + uVar12);
  auVar24[0] = -(*pcVar1 == DAT_142e34ec0);
  auVar24[1] = -(pcVar1[1] == DAT_142e34ec0._1_1_);
  auVar24[2] = -(pcVar1[2] == DAT_142e34ec0._2_1_);
  auVar24[3] = -(pcVar1[3] == DAT_142e34ec0._3_1_);
  auVar24[4] = -(pcVar1[4] == DAT_142e34ec0._4_1_);
  auVar24[5] = -(pcVar1[5] == DAT_142e34ec0._5_1_);
  auVar24[6] = -(pcVar1[6] == DAT_142e34ec0._6_1_);
  auVar24[7] = -(pcVar1[7] == DAT_142e34ec0._7_1_);
  auVar24[8] = -(pcVar1[8] == DAT_142e34ec0._8_1_);
  auVar24[9] = -(pcVar1[9] == DAT_142e34ec0._9_1_);
  auVar24[10] = -(pcVar1[10] == DAT_142e34ec0._10_1_);
  auVar24[0xb] = -(pcVar1[0xb] == DAT_142e34ec0._11_1_);
  auVar24[0xc] = -(pcVar1[0xc] == DAT_142e34ec0._12_1_);
  auVar24[0xd] = -(pcVar1[0xd] == DAT_142e34ec0._13_1_);
  auVar24[0xe] = -(pcVar1[0xe] == DAT_142e34ec0._14_1_);
  auVar24[0xf] = -(pcVar1[0xf] == DAT_142e34ec0._15_1_);
  uVar16 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
  uVar15 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar17 = uVar5 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
    auVar25[0] = -(*pcVar2 == DAT_142e60e60);
    auVar25[1] = -(pcVar2[1] == DAT_142e60e60._1_1_);
    auVar25[2] = -(pcVar2[2] == DAT_142e60e60._2_1_);
    auVar25[3] = -(pcVar2[3] == DAT_142e60e60._3_1_);
    auVar25[4] = -(pcVar2[4] == DAT_142e60e60._4_1_);
    auVar25[5] = -(pcVar2[5] == DAT_142e60e60._5_1_);
    auVar25[6] = -(pcVar2[6] == DAT_142e60e60._6_1_);
    auVar25[7] = -(pcVar2[7] == DAT_142e60e60._7_1_);
    auVar25[8] = -(pcVar2[8] == DAT_142e60e60._8_1_);
    auVar25[9] = -(pcVar2[9] == DAT_142e60e60._9_1_);
    auVar25[10] = -(pcVar2[10] == DAT_142e60e60._10_1_);
    auVar25[0xb] = -(pcVar2[0xb] == DAT_142e60e60._11_1_);
    auVar25[0xc] = -(pcVar2[0xc] == DAT_142e60e60._12_1_);
    auVar25[0xd] = -(pcVar2[0xd] == DAT_142e60e60._13_1_);
    auVar25[0xe] = -(pcVar2[0xe] == DAT_142e60e60._14_1_);
    auVar25[0xf] = -(pcVar2[0xf] == DAT_142e60e60._15_1_);
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
      uVar12 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar12) ||
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 == 0))
      goto LAB_1405e3a91;
      lVar13 = ~uVar12 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar13) == 0) goto LAB_1405e3a91;
      uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar13 + 0x10);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1405e3a9d;
      lVar13 = *(longlong *)(param_2 + 0x70);
      uVar12 = 0x7057b4358e925fdb;
      lVar14 = 0;
      goto LAB_1405e3806;
    }
    uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
  }
  goto LAB_1405e3760;
LAB_1405e3806:
  uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
  auVar22 = *(undefined1 (*) [16])(lVar13 + uVar12);
  auVar26[0] = -(auVar22[0] == DAT_142e33d90);
  auVar26[1] = -(auVar22[1] == DAT_142e33d90._1_1_);
  auVar26[2] = -(auVar22[2] == DAT_142e33d90._2_1_);
  auVar26[3] = -(auVar22[3] == DAT_142e33d90._3_1_);
  auVar26[4] = -(auVar22[4] == DAT_142e33d90._4_1_);
  auVar26[5] = -(auVar22[5] == DAT_142e33d90._5_1_);
  auVar26[6] = -(auVar22[6] == DAT_142e33d90._6_1_);
  auVar26[7] = -(auVar22[7] == DAT_142e33d90._7_1_);
  auVar26[8] = -(auVar22[8] == DAT_142e33d90._8_1_);
  auVar26[9] = -(auVar22[9] == DAT_142e33d90._9_1_);
  auVar26[10] = -(auVar22[10] == DAT_142e33d90._10_1_);
  auVar26[0xb] = -(auVar22[0xb] == DAT_142e33d90._11_1_);
  auVar26[0xc] = -(auVar22[0xc] == DAT_142e33d90._12_1_);
  auVar26[0xd] = -(auVar22[0xd] == DAT_142e33d90._13_1_);
  auVar26[0xe] = -(auVar22[0xe] == DAT_142e33d90._14_1_);
  auVar26[0xf] = -(auVar22[0xf] == DAT_142e33d90._15_1_);
  uVar16 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
  uVar15 = (uint)uVar16;
  while (uVar16 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar17 = uVar5 + uVar12 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
    auVar27[0] = -(*pcVar1 == DAT_142e34350);
    auVar27[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar27[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar27[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar27[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar27[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar27[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar27[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar27[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar27[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar27[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar27[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar27[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar27[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar27[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar27[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar12 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
      if ((uVar12 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar12 * 8), uVar12 != 0)) {
        lVar13 = ~uVar12 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar13) != 0) {
          uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar13 + 0x10);
          lVar13 = pdb_1406d0830(uVar10);
          cVar8 = *(char *)(lVar13 + 0x29a);
          plStack_58 = (longlong *)pdb_140a2e6e0(uVar4,uVar11,&UNK_142f72c00);
          if (cVar8 != '\0') {
            pdb_140aae2d0(auStack_150,param_3);
            *(undefined4 *)(lVar9 + 0x3c) = uStack_50;
            lVar9 = pdb_1406d0830(uVar10);
            *(undefined2 *)(lVar9 + 0x29a) = 0x100;
            pdb_1405e0530(auStack_c4,uVar3,param_1);
            cVar8 = pdb_1405e5d20(uStack_13a);
            if (cVar8 == '*') {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_142f730d0,0x2b,&uStack_49,&UNK_142f730b0,&UNK_142f72c18);
            }
            uStack_5c = CONCAT31(uStack_5c._1_3_,cVar8);
            uStack_60 = 0x200;
            puStack_70 = auStack_c4;
            uStack_68 = uVar11;
            pdb_140649af0(auStack_b0,&puStack_70);
            uVar10 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f71640,0x23,auStack_b0);
            pdb_140e291c0(auStack_150,&UNK_142f71640,0x23,uVar10,param_1);
            uStack_88 = CONCAT44(uStack_5c,uStack_60);
            uStack_98 = SUB84(puStack_70,0);
            uStack_94 = (undefined4)((ulonglong)puStack_70 >> 0x20);
            uStack_90 = (undefined4)uStack_68;
            uStack_8c = (undefined4)(uStack_68 >> 0x20);
            pdb_1400b8c50(auStack_1d8,auStack_150,&uStack_98);
            pub_142e32760(auStack_150,auStack_1d8,0x88);
            uStack_94 = 0x80;
            uStack_90 = 0x200;
            uStack_8c = 1;
            uStack_98 = 1;
            pdb_140e28810(auStack_150,&uStack_98);
            pdb_1405e31b0(uVar3,param_1);
          }
          plVar7 = plStack_58;
          pdb_140e9a350(plStack_58);
          pdb_140e9a350();
          LOCK();
          lVar9 = *plVar7;
          bVar18 = lVar9 == 8;
          if (bVar18) {
            *plVar7 = 0;
            lVar9 = 8;
          }
          UNLOCK();
          if (!bVar18) {
            lVar9 = pdb_142dbca40(plVar7,0);
          }
          return lVar9;
        }
      }
      goto LAB_1405e3a9d;
    }
    uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
  }
  auVar21[0] = -(auVar22[0] == -1);
  auVar21[1] = -(auVar22[1] == -1);
  auVar21[2] = -(auVar22[2] == -1);
  auVar21[3] = -(auVar22[3] == -1);
  auVar21[4] = -(auVar22[4] == -1);
  auVar21[5] = -(auVar22[5] == -1);
  auVar21[6] = -(auVar22[6] == -1);
  auVar21[7] = -(auVar22[7] == -1);
  auVar21[8] = -(auVar22[8] == -1);
  auVar21[9] = -(auVar22[9] == -1);
  auVar21[10] = -(auVar22[10] == -1);
  auVar21[0xb] = -(auVar22[0xb] == -1);
  auVar21[0xc] = -(auVar22[0xc] == -1);
  auVar21[0xd] = -(auVar22[0xd] == -1);
  auVar21[0xe] = -(auVar22[0xe] == -1);
  auVar21[0xf] = -(auVar22[0xf] == -1);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
LAB_1405e3a9d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f72be8);
  }
  uVar12 = uVar12 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1405e3806;
LAB_1405e3760:
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
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') {
LAB_1405e3a91:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f72bd0);
  }
  uVar12 = uVar12 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_1405e370d;
}

