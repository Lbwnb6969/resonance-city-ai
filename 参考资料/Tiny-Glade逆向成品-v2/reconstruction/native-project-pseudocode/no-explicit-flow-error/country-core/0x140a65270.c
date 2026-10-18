// VA 0x140a65270, PDB extent 3066 bytes
// country_core::systems::render_loop::compute_passes::rasterize_buildings::rasterize_buildings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/rasterize_buildings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::rasterize_buildings::rasterize_buildings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/rasterize_buildings.rs
   Extent: 3066 */

void pdb_140a65270(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_230;
  ulonglong uStack_228;
  undefined1 uStack_21a;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_138;
  byte *pbStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong *plStack_120;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined2 uStack_110;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  ushort uStack_10c;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140aae2d0(&uStack_118,0x16);
  uVar6 = uStack_10c;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    uVar5 = CONCAT11(uStack_109,uStack_10a);
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar13 = 0xb2e4b375c614bf54;
    lVar18 = 0;
    while( true ) {
      uVar13 = uVar13 & *(ulonglong *)(param_2 + 0x78);
      auVar28 = *(undefined1 (*) [16])(lVar8 + uVar13);
      auVar26[0] = -(auVar28[0] == DAT_142e34020);
      auVar26[1] = -(auVar28[1] == DAT_142e34020._1_1_);
      auVar26[2] = -(auVar28[2] == DAT_142e34020._2_1_);
      auVar26[3] = -(auVar28[3] == DAT_142e34020._3_1_);
      auVar26[4] = -(auVar28[4] == DAT_142e34020._4_1_);
      auVar26[5] = -(auVar28[5] == DAT_142e34020._5_1_);
      auVar26[6] = -(auVar28[6] == DAT_142e34020._6_1_);
      auVar26[7] = -(auVar28[7] == DAT_142e34020._7_1_);
      auVar26[8] = -(auVar28[8] == DAT_142e34020._8_1_);
      auVar26[9] = -(auVar28[9] == DAT_142e34020._9_1_);
      auVar26[10] = -(auVar28[10] == DAT_142e34020._10_1_);
      auVar26[0xb] = -(auVar28[0xb] == DAT_142e34020._11_1_);
      auVar26[0xc] = -(auVar28[0xc] == DAT_142e34020._12_1_);
      auVar26[0xd] = -(auVar28[0xd] == DAT_142e34020._13_1_);
      auVar26[0xe] = -(auVar28[0xe] == DAT_142e34020._14_1_);
      auVar26[0xf] = -(auVar28[0xf] == DAT_142e34020._15_1_);
      uVar19 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
      uVar17 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar20 = uVar3 + uVar13 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar8 + -0x18 + uVar20 * -0x18);
        auVar27[0] = -(*pcVar1 == DAT_142e645a0);
        auVar27[1] = -(pcVar1[1] == DAT_142e645a0._1_1_);
        auVar27[2] = -(pcVar1[2] == DAT_142e645a0._2_1_);
        auVar27[3] = -(pcVar1[3] == DAT_142e645a0._3_1_);
        auVar27[4] = -(pcVar1[4] == DAT_142e645a0._4_1_);
        auVar27[5] = -(pcVar1[5] == DAT_142e645a0._5_1_);
        auVar27[6] = -(pcVar1[6] == DAT_142e645a0._6_1_);
        auVar27[7] = -(pcVar1[7] == DAT_142e645a0._7_1_);
        auVar27[8] = -(pcVar1[8] == DAT_142e645a0._8_1_);
        auVar27[9] = -(pcVar1[9] == DAT_142e645a0._9_1_);
        auVar27[10] = -(pcVar1[10] == DAT_142e645a0._10_1_);
        auVar27[0xb] = -(pcVar1[0xb] == DAT_142e645a0._11_1_);
        auVar27[0xc] = -(pcVar1[0xc] == DAT_142e645a0._12_1_);
        auVar27[0xd] = -(pcVar1[0xd] == DAT_142e645a0._13_1_);
        auVar27[0xe] = -(pcVar1[0xe] == DAT_142e645a0._14_1_);
        auVar27[0xf] = -(pcVar1[0xf] == DAT_142e645a0._15_1_);
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
          uVar13 = *(ulonglong *)(lVar8 + uVar20 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar13) ||
             (uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8), uVar13 == 0))
          goto LAB_140a65596;
          lVar8 = ~uVar13 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0) goto LAB_140a65596;
          puVar9 = *(undefined8 **)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10);
          pauVar12 = (undefined1 (*) [16])*puVar9;
          uStack_108 = *pauVar12 + puVar9[1] + 1;
          auVar28 = *pauVar12;
          uStack_f8 = puVar9[3];
          uStack_118 = SUB82(pauVar12,0);
          uStack_116 = (undefined2)((ulonglong)pauVar12 >> 0x10);
          uStack_114 = (undefined4)((ulonglong)pauVar12 >> 0x20);
          pauVar12 = pauVar12 + 1;
          uStack_110 = SUB82(pauVar12,0);
          uStack_10e = (undefined1)((ulonglong)pauVar12 >> 0x10);
          uStack_10d = (undefined1)((ulonglong)pauVar12 >> 0x18);
          uStack_10c = (ushort)((ulonglong)pauVar12 >> 0x20);
          uStack_10a = (undefined1)((ulonglong)pauVar12 >> 0x30);
          uStack_109 = (undefined1)((ulonglong)pauVar12 >> 0x38);
          uStack_100 = CONCAT62(uStack_100._2_6_,
                                ~((ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar28[0xf] >> 7) << 0xf));
          pdb_141605140(&lStack_138,&uStack_118);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140a65c34;
          lVar8 = *(longlong *)(param_2 + 0x70);
          uVar13 = *(ulonglong *)(param_2 + 0x78);
          uVar20 = 0x1d6a82b468dfb8a2;
          lVar18 = 0;
          goto LAB_140a65448;
        }
        uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
      }
      auVar23[0] = -(auVar28[0] == -1);
      auVar23[1] = -(auVar28[1] == -1);
      auVar23[2] = -(auVar28[2] == -1);
      auVar23[3] = -(auVar28[3] == -1);
      auVar23[4] = -(auVar28[4] == -1);
      auVar23[5] = -(auVar28[5] == -1);
      auVar23[6] = -(auVar28[6] == -1);
      auVar23[7] = -(auVar28[7] == -1);
      auVar23[8] = -(auVar28[8] == -1);
      auVar23[9] = -(auVar28[9] == -1);
      auVar23[10] = -(auVar28[10] == -1);
      auVar23[0xb] = -(auVar28[0xb] == -1);
      auVar23[0xc] = -(auVar28[0xc] == -1);
      auVar23[0xd] = -(auVar28[0xd] == -1);
      auVar23[0xe] = -(auVar28[0xe] == -1);
      auVar23[0xf] = -(auVar28[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar13 = uVar13 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_140a65596:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430404c8);
LAB_140a65448:
  uVar20 = uVar20 & uVar13;
  pcVar1 = (char *)(lVar8 + uVar20);
  auVar28[0] = -(*pcVar1 == DAT_142e34ec0);
  auVar28[1] = -(pcVar1[1] == DAT_142e34ec0._1_1_);
  auVar28[2] = -(pcVar1[2] == DAT_142e34ec0._2_1_);
  auVar28[3] = -(pcVar1[3] == DAT_142e34ec0._3_1_);
  auVar28[4] = -(pcVar1[4] == DAT_142e34ec0._4_1_);
  auVar28[5] = -(pcVar1[5] == DAT_142e34ec0._5_1_);
  auVar28[6] = -(pcVar1[6] == DAT_142e34ec0._6_1_);
  auVar28[7] = -(pcVar1[7] == DAT_142e34ec0._7_1_);
  auVar28[8] = -(pcVar1[8] == DAT_142e34ec0._8_1_);
  auVar28[9] = -(pcVar1[9] == DAT_142e34ec0._9_1_);
  auVar28[10] = -(pcVar1[10] == DAT_142e34ec0._10_1_);
  auVar28[0xb] = -(pcVar1[0xb] == DAT_142e34ec0._11_1_);
  auVar28[0xc] = -(pcVar1[0xc] == DAT_142e34ec0._12_1_);
  auVar28[0xd] = -(pcVar1[0xd] == DAT_142e34ec0._13_1_);
  auVar28[0xe] = -(pcVar1[0xe] == DAT_142e34ec0._14_1_);
  auVar28[0xf] = -(pcVar1[0xf] == DAT_142e34ec0._15_1_);
  uVar19 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar21 = uVar3 + uVar20 & uVar13;
    pcVar2 = (char *)(lVar8 + -0x18 + uVar21 * -0x18);
    auVar29[0] = -(*pcVar2 == DAT_142e60e60);
    auVar29[1] = -(pcVar2[1] == UNK_142e60e61);
    auVar29[2] = -(pcVar2[2] == UNK_142e60e62);
    auVar29[3] = -(pcVar2[3] == UNK_142e60e63);
    auVar29[4] = -(pcVar2[4] == UNK_142e60e64);
    auVar29[5] = -(pcVar2[5] == UNK_142e60e65);
    auVar29[6] = -(pcVar2[6] == UNK_142e60e66);
    auVar29[7] = -(pcVar2[7] == UNK_142e60e67);
    auVar29[8] = -(pcVar2[8] == UNK_142e60e68);
    auVar29[9] = -(pcVar2[9] == UNK_142e60e69);
    auVar29[10] = -(pcVar2[10] == UNK_142e60e6a);
    auVar29[0xb] = -(pcVar2[0xb] == UNK_142e60e6b);
    auVar29[0xc] = -(pcVar2[0xc] == UNK_142e60e6c);
    auVar29[0xd] = -(pcVar2[0xd] == UNK_142e60e6d);
    auVar29[0xe] = -(pcVar2[0xe] == UNK_142e60e6e);
    auVar29[0xf] = -(pcVar2[0xf] == UNK_142e60e6f);
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar20 = *(ulonglong *)(lVar8 + uVar21 * -0x18 + -8);
      if (*(ulonglong *)(param_2 + 0x210) <= uVar20) goto LAB_140a65c34;
      uVar20 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar20 * 8);
      if (uVar20 == 0) goto LAB_140a65c34;
      lVar18 = *(longlong *)(param_2 + 0x1d8);
      lVar22 = ~uVar20 * 0x40;
      if (*(longlong *)(lVar18 + 0x20 + lVar22) == 0) goto LAB_140a65c34;
      uVar11 = *(undefined8 *)(lVar22 + lVar18 + 0x10);
      uVar20 = 0x7057b4358e925fdb;
      lVar22 = 0;
      goto LAB_140a6552d;
    }
    uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
  }
  goto LAB_140a654a0;
LAB_140a6552d:
  uVar20 = uVar20 & uVar13;
  auVar28 = *(undefined1 (*) [16])(lVar8 + uVar20);
  auVar30[0] = -(auVar28[0] == DAT_142e33d90);
  auVar30[1] = -(auVar28[1] == DAT_142e33d90._1_1_);
  auVar30[2] = -(auVar28[2] == DAT_142e33d90._2_1_);
  auVar30[3] = -(auVar28[3] == DAT_142e33d90._3_1_);
  auVar30[4] = -(auVar28[4] == DAT_142e33d90._4_1_);
  auVar30[5] = -(auVar28[5] == DAT_142e33d90._5_1_);
  auVar30[6] = -(auVar28[6] == DAT_142e33d90._6_1_);
  auVar30[7] = -(auVar28[7] == DAT_142e33d90._7_1_);
  auVar30[8] = -(auVar28[8] == DAT_142e33d90._8_1_);
  auVar30[9] = -(auVar28[9] == DAT_142e33d90._9_1_);
  auVar30[10] = -(auVar28[10] == DAT_142e33d90._10_1_);
  auVar30[0xb] = -(auVar28[0xb] == DAT_142e33d90._11_1_);
  auVar30[0xc] = -(auVar28[0xc] == DAT_142e33d90._12_1_);
  auVar30[0xd] = -(auVar28[0xd] == DAT_142e33d90._13_1_);
  auVar30[0xe] = -(auVar28[0xe] == DAT_142e33d90._14_1_);
  auVar30[0xf] = -(auVar28[0xf] == DAT_142e33d90._15_1_);
  uVar19 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar21 = uVar3 + uVar20 & uVar13;
    pcVar1 = (char *)(lVar8 + -0x18 + uVar21 * -0x18);
    auVar31[0] = -(*pcVar1 == DAT_142e34350);
    auVar31[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar31[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar31[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar31[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar31[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar31[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar31[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar31[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar31[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar31[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar31[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar31[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar31[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar31[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar31[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar13 = *(ulonglong *)(lVar8 + uVar21 * -0x18 + -8);
      if (((uVar13 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8), uVar13 != 0)) &&
         (lVar8 = ~uVar13 * 0x40, *(longlong *)(lVar18 + 0x20 + lVar8) != 0)) {
        uVar10 = *(undefined8 *)(lVar18 + lVar8 + 0x10);
        plVar14 = (longlong *)&UNK_14331c958;
        puVar9 = (undefined8 *)pdb_140bf45b0(uVar11,&UNK_14331c958);
        if ((puVar9 != (undefined8 *)0x0) &&
           (lVar8 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar8 != 0)) {
          uVar13 = CONCAT44(uStack_124,uStack_128);
          if (4999 < uVar13) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143040510,0x5d,&UNK_143040540);
          }
          if (uVar13 != 0) {
            plStack_70 = *(longlong **)(param_1 + 0x1e8);
            pbStack_78 = pbStack_130;
            lVar18 = pdb_140e17350(lVar8);
            uVar20 = uVar13 << 5;
            if (*(uint *)(lVar18 + 0x10) < uVar20) {
              lVar18 = 0xb;
LAB_140a65cdf:
              uStack_118 = (undefined2)lVar18;
              uStack_116 = (undefined2)((ulonglong)lVar18 >> 0x10);
              uStack_114 = (undefined4)((ulonglong)lVar18 >> 0x20);
              uStack_110 = (undefined2)uStack_1a8;
              uStack_10e = (undefined1)((ulonglong)uStack_1a8 >> 0x10);
              uStack_10d = (undefined1)((ulonglong)uStack_1a8 >> 0x18);
              uStack_10c = (ushort)((ulonglong)uStack_1a8 >> 0x20);
              uStack_10a = (undefined1)((ulonglong)uStack_1a8 >> 0x30);
              uStack_109 = (undefined1)((ulonglong)uStack_1a8 >> 0x38);
              uStack_108 = puStack_1a0;
              uStack_100 = uStack_198;
              uStack_f8 = uStack_190;
              uStack_f0 = uStack_188;
              uStack_e8 = uStack_180;
              uStack_e0 = uStack_178;
              uStack_d8 = uStack_170;
              uStack_d0 = uStack_168;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143040d68,0x2b,&uStack_118,&UNK_143040d48,&UNK_143040558);
            }
            uStack_230 = 0;
            plVar14 = plStack_70;
            uStack_228 = uVar20;
            pdb_140e55470(&uStack_118,plStack_70,lVar8,pbStack_78,uVar20,&uStack_230,1,0);
            lVar18 = CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
            if (lVar18 != 0xb) {
              uStack_168 = uStack_d0;
              uStack_1a8 = CONCAT17(uStack_109,
                                    CONCAT16(uStack_10a,
                                             CONCAT24(uStack_10c,
                                                      CONCAT13(uStack_10d,
                                                               CONCAT12(uStack_10e,uStack_110)))));
              uStack_178 = uStack_e0;
              uStack_170 = uStack_d8;
              uStack_188 = uStack_f0;
              uStack_180 = uStack_e8;
              uStack_198 = uStack_100;
              uStack_190 = uStack_f8;
              puStack_1a0 = uStack_108;
              goto LAB_140a65cdf;
            }
          }
          *(ulonglong *)(lVar8 + 8) = uVar13;
        }
        uVar15 = CONCAT71((int7)((ulonglong)plVar14 >> 8),0x16);
        plStack_70 = (longlong *)pdb_140a2e6e0(uVar10,uVar15,&UNK_143040570);
        uVar16 = CONCAT71((int7)((ulonglong)uVar15 >> 8),0x17);
        plStack_120 = (longlong *)pdb_140a2e6e0(uVar10,uVar16,&UNK_143040588);
        pbStack_78 = (byte *)uVar16;
        pdb_1415247c0(&uStack_158,uVar11,param_1);
        uStack_90 = 0;
        uStack_88 = 8;
        uStack_80 = 0;
        uVar10 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333144e,0x25,&uStack_90);
        pdb_140e291c0(&uStack_118,&UNK_14333144e,0x25,uVar10,param_1);
        lStack_58 = (longlong)pbStack_78;
        uStack_50 = uStack_128;
        uStack_68 = (undefined4 *)uVar15;
        uStack_60 = &uStack_158;
        pdb_141792100(&uStack_230,&uStack_118,&uStack_68);
        pub_142e32760(&uStack_118,&uStack_230,0x88);
        uStack_60 = (undefined4 *)CONCAT44(1,(uint)uVar5);
        uStack_68 = (undefined4 *)CONCAT44((uint)uVar6,1);
        pdb_140e28810(&uStack_118,&uStack_68);
        pdb_141536500(uVar11,param_1);
        pdb_140aae2d0(&uStack_230,0x16);
        uStack_118 = 0;
        uStack_116 = 0x200;
        uStack_114 = 0x10200;
        uStack_110 = 1;
        uStack_10e = 1;
        uStack_10d = uStack_21a;
        uStack_10c = 0x201;
        uStack_10a = 0;
        uStack_108 = &UNK_1430405a0;
        uStack_100 = 0x13;
        uStack_114 = pdb_140e2b4e0(param_1,&uStack_118);
        puVar7 = uStack_108;
        uStack_110 = 0x200;
        uStack_10e = 0;
        uStack_10d = 2;
        uStack_10c = 1;
        uStack_10a = 1;
        uStack_109 = 0;
        uStack_108._5_3_ = SUB83(puVar7,5);
        uStack_108._0_5_ = (uint5)CONCAT22(0x201,CONCAT11(uStack_21a,1));
        uStack_118 = 0;
        uStack_116 = 0;
        if (*(char *)(param_1 + 0x24c) == '\x01') {
          pdb_140e19620(&uStack_118,param_1);
        }
        uStack_148 = uStack_108;
        uStack_158 = CONCAT22(uStack_116,uStack_118);
        uStack_154 = uStack_114;
        uStack_150 = CONCAT17(uStack_109,
                              CONCAT16(uStack_10a,
                                       CONCAT24(uStack_10c,
                                                CONCAT13(uStack_10d,CONCAT12(uStack_10e,uStack_110))
                                               )));
        uStack_90 = 0;
        uStack_88 = 8;
        uStack_80 = 0;
        uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331528,0x2a,&uStack_90);
        pdb_140e291c0(&uStack_118,&UNK_143331528,0x2a,uVar11,param_1);
        lStack_58._0_1_ = 1;
        uStack_68 = (undefined4 *)uVar15;
        uStack_60 = &uStack_158;
        pdb_141784880(&uStack_230,&uStack_118,&uStack_68);
        pub_142e32760(&uStack_118,&uStack_230,0x88);
        uStack_60 = (undefined4 *)CONCAT44(1,(uint)uVar5);
        uStack_68 = (undefined4 *)CONCAT44((uint)uVar6,1);
        pdb_140e28810(&uStack_118,&uStack_68);
        uStack_90 = 0;
        uStack_88 = 8;
        uStack_80 = 0;
        uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331528,0x2a,&uStack_90);
        pdb_140e291c0(&uStack_118,&UNK_143331528,0x2a,uVar11,param_1);
        lStack_58 = (ulonglong)lStack_58._1_7_ << 8;
        uStack_68 = &uStack_158;
        uStack_60 = (undefined4 *)uVar15;
        pdb_141784880(&uStack_230,&uStack_118,&uStack_68);
        pub_142e32760(&uStack_118,&uStack_230,0x88);
        uStack_60 = (undefined4 *)CONCAT44(1,(uint)uVar5);
        uStack_68 = (undefined4 *)CONCAT44((uint)uVar6,1);
        pdb_140e28810(&uStack_118,&uStack_68);
        uStack_68 = (undefined4 *)0x0;
        uStack_60 = (undefined4 *)0x8;
        lStack_58 = 0;
        uVar11 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433312af,0x2d,&uStack_68);
        pdb_140e291c0(&uStack_118,&UNK_1433312af,0x2d,uVar11,param_1);
        pdb_141783cb0(&uStack_230,&uStack_118,uVar15);
        pub_142e32760(&uStack_118,&uStack_230,0x88);
        uStack_60 = (undefined4 *)CONCAT44(1,(uint)uVar5);
        uStack_68 = (undefined4 *)CONCAT44((uint)uVar6,1);
        pdb_140e28810(&uStack_118,&uStack_68);
        pdb_141764f50(param_1,&UNK_1430405b3,0xd,&UNK_1430405c0,0x24,uVar15,pbStack_78);
        plVar14 = plStack_120;
        pdb_140e9a350(plStack_120);
        pdb_140e9a350();
        LOCK();
        lVar8 = *plVar14;
        if (lVar8 == 8) {
          *plVar14 = 0;
        }
        UNLOCK();
        if (lVar8 != 8) {
          pdb_142dbca40(plVar14,0);
        }
        plVar14 = plStack_70;
        pdb_140e9a350(plStack_70);
        pdb_140e9a350();
        LOCK();
        lVar8 = *plVar14;
        if (lVar8 == 8) {
          *plVar14 = 0;
        }
        UNLOCK();
        if (lVar8 != 8) {
          pdb_142dbca40(plVar14,0);
        }
        if (lStack_138 != 0) {
          pub_1406abac0(pbStack_130,lStack_138 << 5,4);
        }
        return;
      }
      goto LAB_140a65c46;
    }
    uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
  }
  auVar25[0] = -(auVar28[0] == -1);
  auVar25[1] = -(auVar28[1] == -1);
  auVar25[2] = -(auVar28[2] == -1);
  auVar25[3] = -(auVar28[3] == -1);
  auVar25[4] = -(auVar28[4] == -1);
  auVar25[5] = -(auVar28[5] == -1);
  auVar25[6] = -(auVar28[6] == -1);
  auVar25[7] = -(auVar28[7] == -1);
  auVar25[8] = -(auVar28[8] == -1);
  auVar25[9] = -(auVar28[9] == -1);
  auVar25[10] = -(auVar28[10] == -1);
  auVar25[0xb] = -(auVar28[0xb] == -1);
  auVar25[0xc] = -(auVar28[0xc] == -1);
  auVar25[0xd] = -(auVar28[0xd] == -1);
  auVar25[0xe] = -(auVar28[0xe] == -1);
  auVar25[0xf] = -(auVar28[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
LAB_140a65c46:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430404f8);
  }
  uVar20 = uVar20 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140a6552d;
LAB_140a654a0:
  auVar24[0] = -(*pcVar1 == -1);
  auVar24[1] = -(pcVar1[1] == -1);
  auVar24[2] = -(pcVar1[2] == -1);
  auVar24[3] = -(pcVar1[3] == -1);
  auVar24[4] = -(pcVar1[4] == -1);
  auVar24[5] = -(pcVar1[5] == -1);
  auVar24[6] = -(pcVar1[6] == -1);
  auVar24[7] = -(pcVar1[7] == -1);
  auVar24[8] = -(pcVar1[8] == -1);
  auVar24[9] = -(pcVar1[9] == -1);
  auVar24[10] = -(pcVar1[10] == -1);
  auVar24[0xb] = -(pcVar1[0xb] == -1);
  auVar24[0xc] = -(pcVar1[0xc] == -1);
  auVar24[0xd] = -(pcVar1[0xd] == -1);
  auVar24[0xe] = -(pcVar1[0xe] == -1);
  auVar24[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_140a65c34:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430404e0);
  }
  uVar20 = uVar20 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_140a65448;
}

