// VA 0x141b2cc70, PDB extent 939 bytes
// country_core::systems::render_loop::draw_passes::draw_lists::impl$0::instanced_indexed::draw_fn<country_core::resources::roof_tile_ssbo::RoofSpireSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_lists::impl$0::instanced_indexed::draw_fn<country_core::resources::roof_tile_ssbo::RoofSpireSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
   Extent: 939 */

void pdb_141b2cc70(char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lStack_30;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x70);
    uVar8 = 0x1d6a82b468dfb8a2;
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_2 + 0x78);
      auVar17 = *(undefined1 (*) [16])(lVar5 + uVar8);
      auVar22[0] = -(auVar17[0] == DAT_142e34ec0);
      auVar22[1] = -(auVar17[1] == DAT_142e34ec0._1_1_);
      auVar22[2] = -(auVar17[2] == DAT_142e34ec0._2_1_);
      auVar22[3] = -(auVar17[3] == DAT_142e34ec0._3_1_);
      auVar22[4] = -(auVar17[4] == DAT_142e34ec0._4_1_);
      auVar22[5] = -(auVar17[5] == DAT_142e34ec0._5_1_);
      auVar22[6] = -(auVar17[6] == DAT_142e34ec0._6_1_);
      auVar22[7] = -(auVar17[7] == DAT_142e34ec0._7_1_);
      auVar22[8] = -(auVar17[8] == DAT_142e34ec0._8_1_);
      auVar22[9] = -(auVar17[9] == DAT_142e34ec0._9_1_);
      auVar22[10] = -(auVar17[10] == DAT_142e34ec0._10_1_);
      auVar22[0xb] = -(auVar17[0xb] == DAT_142e34ec0._11_1_);
      auVar22[0xc] = -(auVar17[0xc] == DAT_142e34ec0._12_1_);
      auVar22[0xd] = -(auVar17[0xd] == DAT_142e34ec0._13_1_);
      auVar22[0xe] = -(auVar17[0xe] == DAT_142e34ec0._14_1_);
      auVar22[0xf] = -(auVar17[0xf] == DAT_142e34ec0._15_1_);
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
      uVar10 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar14 = uVar3 + uVar8 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar5 + -0x18 + uVar14 * -0x18);
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
          uVar8 = *(ulonglong *)(lVar5 + uVar14 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar8) ||
             (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 == 0))
          goto LAB_141b2ce66;
          lVar5 = ~uVar8 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar5) == 0) goto LAB_141b2ce66;
          puVar6 = (undefined8 *)
                   pdb_140bf45b0(*(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar5 + 0x10),
                                 &UNK_14331c8a0);
          if ((puVar6 == (undefined8 *)0x0) ||
             (lVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143393210);
          }
          uVar8 = *(ulonglong *)(lVar5 + 8);
          if (uVar8 == 0) {
            return;
          }
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_141b2cfb7;
          lVar5 = *(longlong *)(param_2 + 0x70);
          uVar14 = 0x59a9ebec036a11fe;
          lVar11 = 0;
          goto LAB_141b2cdf5;
        }
        uVar13 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar13);
      }
      auVar19[0] = -(auVar17[0] == -1);
      auVar19[1] = -(auVar17[1] == -1);
      auVar19[2] = -(auVar17[2] == -1);
      auVar19[3] = -(auVar17[3] == -1);
      auVar19[4] = -(auVar17[4] == -1);
      auVar19[5] = -(auVar17[5] == -1);
      auVar19[6] = -(auVar17[6] == -1);
      auVar19[7] = -(auVar17[7] == -1);
      auVar19[8] = -(auVar17[8] == -1);
      auVar19[9] = -(auVar17[9] == -1);
      auVar19[10] = -(auVar17[10] == -1);
      auVar19[0xb] = -(auVar17[0xb] == -1);
      auVar19[0xc] = -(auVar17[0xc] == -1);
      auVar19[0xd] = -(auVar17[0xd] == -1);
      auVar19[0xe] = -(auVar17[0xe] == -1);
      auVar19[0xf] = -(auVar17[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_141b2ce66:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433931f8);
LAB_141b2cdf5:
  uVar14 = uVar14 & *(ulonglong *)(param_2 + 0x78);
  auVar17 = *(undefined1 (*) [16])(lVar5 + uVar14);
  auVar24[0] = -(auVar17[0] == DAT_142e33bd0);
  auVar24[1] = -(auVar17[1] == DAT_142e33bd0._1_1_);
  auVar24[2] = -(auVar17[2] == DAT_142e33bd0._2_1_);
  auVar24[3] = -(auVar17[3] == DAT_142e33bd0._3_1_);
  auVar24[4] = -(auVar17[4] == DAT_142e33bd0._4_1_);
  auVar24[5] = -(auVar17[5] == DAT_142e33bd0._5_1_);
  auVar24[6] = -(auVar17[6] == DAT_142e33bd0._6_1_);
  auVar24[7] = -(auVar17[7] == DAT_142e33bd0._7_1_);
  auVar24[8] = -(auVar17[8] == DAT_142e33bd0._8_1_);
  auVar24[9] = -(auVar17[9] == DAT_142e33bd0._9_1_);
  auVar24[10] = -(auVar17[10] == DAT_142e33bd0._10_1_);
  auVar24[0xb] = -(auVar17[0xb] == DAT_142e33bd0._11_1_);
  auVar24[0xc] = -(auVar17[0xc] == DAT_142e33bd0._12_1_);
  auVar24[0xd] = -(auVar17[0xd] == DAT_142e33bd0._13_1_);
  auVar24[0xe] = -(auVar17[0xe] == DAT_142e33bd0._14_1_);
  auVar24[0xf] = -(auVar17[0xf] == DAT_142e33bd0._15_1_);
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
  uVar10 = (uint)uVar13;
  while (uVar13 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar15 = uVar3 + uVar14 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar5 + -0x18 + uVar15 * -0x18);
    auVar25[0] = -(*pcVar1 == DAT_142e34980);
    auVar25[1] = -(pcVar1[1] == DAT_142e34980._1_1_);
    auVar25[2] = -(pcVar1[2] == DAT_142e34980._2_1_);
    auVar25[3] = -(pcVar1[3] == DAT_142e34980._3_1_);
    auVar25[4] = -(pcVar1[4] == DAT_142e34980._4_1_);
    auVar25[5] = -(pcVar1[5] == DAT_142e34980._5_1_);
    auVar25[6] = -(pcVar1[6] == DAT_142e34980._6_1_);
    auVar25[7] = -(pcVar1[7] == DAT_142e34980._7_1_);
    auVar25[8] = -(pcVar1[8] == DAT_142e34980._8_1_);
    auVar25[9] = -(pcVar1[9] == DAT_142e34980._9_1_);
    auVar25[10] = -(pcVar1[10] == DAT_142e34980._10_1_);
    auVar25[0xb] = -(pcVar1[0xb] == DAT_142e34980._11_1_);
    auVar25[0xc] = -(pcVar1[0xc] == DAT_142e34980._12_1_);
    auVar25[0xd] = -(pcVar1[0xd] == DAT_142e34980._13_1_);
    auVar25[0xe] = -(pcVar1[0xe] == DAT_142e34980._14_1_);
    auVar25[0xf] = -(pcVar1[0xf] == DAT_142e34980._15_1_);
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
      uVar14 = *(ulonglong *)(lVar5 + uVar15 * -0x18 + -8);
      if ((uVar14 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar14 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar14 * 8), uVar14 != 0)) {
        lVar5 = ~uVar14 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar5) != 0) {
          if (*param_1 != '\0') {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143393258,0xf,&UNK_143393268);
          }
          plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x1d8) + lVar5 + 0x10);
          lVar5 = *(longlong *)(param_1 + 8);
          lStack_30 = lVar5;
          if (plVar2[3] != 0) {
            uVar14 = pdb_1400af0a0(plVar2 + 4,&lStack_30);
            lVar11 = *plVar2;
            bVar16 = (byte)(uVar14 >> 0x39);
            auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
            auVar17 = pshuflw(auVar17,auVar17,0);
            lVar9 = 0;
            while( true ) {
              uVar14 = uVar14 & plVar2[1];
              auVar22 = *(undefined1 (*) [16])(lVar11 + uVar14);
              auVar21[0] = -(auVar22[0] == auVar17[0]);
              auVar21[1] = -(auVar22[1] == auVar17[1]);
              auVar21[2] = -(auVar22[2] == auVar17[2]);
              auVar21[3] = -(auVar22[3] == auVar17[3]);
              auVar21[4] = -(auVar22[4] == auVar17[4]);
              auVar21[5] = -(auVar22[5] == auVar17[5]);
              auVar21[6] = -(auVar22[6] == auVar17[6]);
              auVar21[7] = -(auVar22[7] == auVar17[7]);
              auVar21[8] = -(auVar22[8] == auVar17[0]);
              auVar21[9] = -(auVar22[9] == auVar17[1]);
              auVar21[10] = -(auVar22[10] == auVar17[2]);
              auVar21[0xb] = -(auVar22[0xb] == auVar17[3]);
              auVar21[0xc] = -(auVar22[0xc] == auVar17[4]);
              auVar21[0xd] = -(auVar22[0xd] == auVar17[5]);
              auVar21[0xe] = -(auVar22[0xe] == auVar17[6]);
              auVar21[0xf] = -(auVar22[0xf] == auVar17[7]);
              uVar13 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                       (ushort)(auVar21[0xf] >> 7) << 0xf;
              uVar10 = (uint)uVar13;
              while (uVar13 != 0) {
                uVar3 = 0;
                for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                lVar12 = (uVar3 + uVar14 & plVar2[1]) * -0x30;
                if (lVar5 == *(longlong *)(lVar11 + -0x30 + lVar12)) {
                  lVar11 = lVar11 + lVar12;
                  lVar5 = pdb_141a076a0(param_5,lVar11 + -0x28);
                  uVar7 = pdb_140e17290(lVar11 + -0x10,lVar5);
                  *(byte *)(lVar5 + 0x28a) = *(byte *)(lVar5 + 0x28a) | 1;
                  *(undefined8 *)(lVar5 + 200) = uVar7;
                  if (*(char *)(lVar11 + -4) == '\0') {
                    pdb_140e25450(param_5);
                  }
                  else {
                    *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                    *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                    *(undefined1 *)(param_5 + 0x82) = 0;
                  }
                  pdb_140e25490(param_5,*(undefined4 *)(lVar11 + -8),0,uVar8 & 0xffffffff);
                  return;
                }
                uVar13 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar13);
              }
              auVar18[0] = -(auVar22[0] == -1);
              auVar18[1] = -(auVar22[1] == -1);
              auVar18[2] = -(auVar22[2] == -1);
              auVar18[3] = -(auVar22[3] == -1);
              auVar18[4] = -(auVar22[4] == -1);
              auVar18[5] = -(auVar22[5] == -1);
              auVar18[6] = -(auVar22[6] == -1);
              auVar18[7] = -(auVar22[7] == -1);
              auVar18[8] = -(auVar22[8] == -1);
              auVar18[9] = -(auVar22[9] == -1);
              auVar18[10] = -(auVar22[10] == -1);
              auVar18[0xb] = -(auVar22[0xb] == -1);
              auVar18[0xc] = -(auVar22[0xc] == -1);
              auVar18[0xd] = -(auVar22[0xd] == -1);
              auVar18[0xe] = -(auVar22[0xe] == -1);
              auVar18[0xf] = -(auVar22[0xf] == -1);
              if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar18 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
              uVar14 = uVar14 + lVar9 + 0x10;
              lVar9 = lVar9 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143393240);
        }
      }
      goto LAB_141b2cfb7;
    }
    uVar13 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar13);
  }
  auVar20[0] = -(auVar17[0] == -1);
  auVar20[1] = -(auVar17[1] == -1);
  auVar20[2] = -(auVar17[2] == -1);
  auVar20[3] = -(auVar17[3] == -1);
  auVar20[4] = -(auVar17[4] == -1);
  auVar20[5] = -(auVar17[5] == -1);
  auVar20[6] = -(auVar17[6] == -1);
  auVar20[7] = -(auVar17[7] == -1);
  auVar20[8] = -(auVar17[8] == -1);
  auVar20[9] = -(auVar17[9] == -1);
  auVar20[10] = -(auVar17[10] == -1);
  auVar20[0xb] = -(auVar17[0xb] == -1);
  auVar20[0xc] = -(auVar17[0xc] == -1);
  auVar20[0xd] = -(auVar17[0xd] == -1);
  auVar20[0xe] = -(auVar17[0xe] == -1);
  auVar20[0xf] = -(auVar17[0xf] == -1);
  if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') {
LAB_141b2cfb7:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143393228);
  }
  uVar14 = uVar14 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_141b2cdf5;
}

