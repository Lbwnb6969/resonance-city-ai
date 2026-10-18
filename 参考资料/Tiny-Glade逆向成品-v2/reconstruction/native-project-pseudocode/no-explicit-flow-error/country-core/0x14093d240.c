// VA 0x14093d240, PDB extent 2667 bytes
// country_core::startup::impl$0::add_game_startup_systems
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::impl$0::add_game_startup_systems
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod.rs
   Extent: 2667 */

longlong pdb_14093d240(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulonglong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulonglong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_250;
  ulonglong uStack_248;
  ulonglong uStack_240;
  ulonglong uStack_238;
  ulonglong uStack_230;
  ulonglong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_1418f22d0();
  pdb_140c96750(param_1);
  pdb_141a1c4e0(&uStack_268,&UNK_143023698);
  pdb_141a215f0(&uStack_a8,&uStack_268);
  pdb_140c973d0(param_1,&uStack_a8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x70);
    uVar10 = 0x585e208cfc0005ca;
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar6 + uVar10);
      auVar21[0] = -(*pcVar1 == DAT_142e33bd0);
      auVar21[1] = -(pcVar1[1] == DAT_142e33bd0._1_1_);
      auVar21[2] = -(pcVar1[2] == DAT_142e33bd0._2_1_);
      auVar21[3] = -(pcVar1[3] == DAT_142e33bd0._3_1_);
      auVar21[4] = -(pcVar1[4] == DAT_142e33bd0._4_1_);
      auVar21[5] = -(pcVar1[5] == DAT_142e33bd0._5_1_);
      auVar21[6] = -(pcVar1[6] == DAT_142e33bd0._6_1_);
      auVar21[7] = -(pcVar1[7] == DAT_142e33bd0._7_1_);
      auVar21[8] = -(pcVar1[8] == DAT_142e33bd0._8_1_);
      auVar21[9] = -(pcVar1[9] == DAT_142e33bd0._9_1_);
      auVar21[10] = -(pcVar1[10] == DAT_142e33bd0._10_1_);
      auVar21[0xb] = -(pcVar1[0xb] == DAT_142e33bd0._11_1_);
      auVar21[0xc] = -(pcVar1[0xc] == DAT_142e33bd0._12_1_);
      auVar21[0xd] = -(pcVar1[0xd] == DAT_142e33bd0._13_1_);
      auVar21[0xe] = -(pcVar1[0xe] == DAT_142e33bd0._14_1_);
      auVar21[0xf] = -(pcVar1[0xf] == DAT_142e33bd0._15_1_);
      uVar16 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar10 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar6 + -0x18 + uVar17 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_142e33be0);
        auVar22[1] = -(pcVar2[1] == UNK_142e33be1);
        auVar22[2] = -(pcVar2[2] == UNK_142e33be2);
        auVar22[3] = -(pcVar2[3] == UNK_142e33be3);
        auVar22[4] = -(pcVar2[4] == UNK_142e33be4);
        auVar22[5] = -(pcVar2[5] == UNK_142e33be5);
        auVar22[6] = -(pcVar2[6] == UNK_142e33be6);
        auVar22[7] = -(pcVar2[7] == UNK_142e33be7);
        auVar22[8] = -(pcVar2[8] == UNK_142e33be8);
        auVar22[9] = -(pcVar2[9] == UNK_142e33be9);
        auVar22[10] = -(pcVar2[10] == UNK_142e33bea);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_142e33beb);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_142e33bec);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_142e33bed);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_142e33bee);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_142e33bef);
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
          uVar10 = *(ulonglong *)(lVar6 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar10 * 8), uVar10 == 0))
             || (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_14093d382;
          goto LAB_14093d38a;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_14093d382:
  pdb_1418d6600(param_1);
LAB_14093d38a:
  uVar5 = pdb_1418f17e0(param_1);
  lVar6 = pdb_1418f0cc0(uVar5);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
    lVar13 = *(longlong *)(lVar6 + 0x70);
    uVar10 = 0xc1fae99bc0b86f9d;
    lVar14 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar10);
      auVar23[0] = -(*pcVar1 == DAT_142e34810);
      auVar23[1] = -(pcVar1[1] == DAT_142e34810._1_1_);
      auVar23[2] = -(pcVar1[2] == DAT_142e34810._2_1_);
      auVar23[3] = -(pcVar1[3] == DAT_142e34810._3_1_);
      auVar23[4] = -(pcVar1[4] == DAT_142e34810._4_1_);
      auVar23[5] = -(pcVar1[5] == DAT_142e34810._5_1_);
      auVar23[6] = -(pcVar1[6] == DAT_142e34810._6_1_);
      auVar23[7] = -(pcVar1[7] == DAT_142e34810._7_1_);
      auVar23[8] = -(pcVar1[8] == DAT_142e34810._8_1_);
      auVar23[9] = -(pcVar1[9] == DAT_142e34810._9_1_);
      auVar23[10] = -(pcVar1[10] == DAT_142e34810._10_1_);
      auVar23[0xb] = -(pcVar1[0xb] == DAT_142e34810._11_1_);
      auVar23[0xc] = -(pcVar1[0xc] == DAT_142e34810._12_1_);
      auVar23[0xd] = -(pcVar1[0xd] == DAT_142e34810._13_1_);
      auVar23[0xe] = -(pcVar1[0xe] == DAT_142e34810._14_1_);
      auVar23[0xf] = -(pcVar1[0xf] == DAT_142e34810._15_1_);
      uVar16 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar10 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_143022b70);
        auVar24[1] = -(pcVar2[1] == UNK_143022b71);
        auVar24[2] = -(pcVar2[2] == UNK_143022b72);
        auVar24[3] = -(pcVar2[3] == UNK_143022b73);
        auVar24[4] = -(pcVar2[4] == UNK_143022b74);
        auVar24[5] = -(pcVar2[5] == UNK_143022b75);
        auVar24[6] = -(pcVar2[6] == UNK_143022b76);
        auVar24[7] = -(pcVar2[7] == UNK_143022b77);
        auVar24[8] = -(pcVar2[8] == UNK_143022b78);
        auVar24[9] = -(pcVar2[9] == UNK_143022b79);
        auVar24[10] = -(pcVar2[10] == UNK_143022b7a);
        auVar24[0xb] = -(pcVar2[0xb] == UNK_143022b7b);
        auVar24[0xc] = -(pcVar2[0xc] == UNK_143022b7c);
        auVar24[0xd] = -(pcVar2[0xd] == UNK_143022b7d);
        auVar24[0xe] = -(pcVar2[0xe] == UNK_143022b7e);
        auVar24[0xf] = -(pcVar2[0xf] == UNK_143022b7f);
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
          uVar10 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_14093d482;
          goto LAB_14093d498;
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
      uVar10 = uVar10 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_14093d482:
  pdb_1418d9600(lVar6);
  if (*(longlong *)(lVar6 + 0x88) != 0) {
LAB_14093d498:
    lVar13 = *(longlong *)(lVar6 + 0x70);
    uVar10 = 0xa3838516b15bb667;
    lVar14 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar6 + 0x78);
      pcVar1 = (char *)(lVar13 + uVar10);
      auVar25[0] = -(*pcVar1 == DAT_142e33ee0);
      auVar25[1] = -(pcVar1[1] == DAT_142e33ee0._1_1_);
      auVar25[2] = -(pcVar1[2] == DAT_142e33ee0._2_1_);
      auVar25[3] = -(pcVar1[3] == DAT_142e33ee0._3_1_);
      auVar25[4] = -(pcVar1[4] == DAT_142e33ee0._4_1_);
      auVar25[5] = -(pcVar1[5] == DAT_142e33ee0._5_1_);
      auVar25[6] = -(pcVar1[6] == DAT_142e33ee0._6_1_);
      auVar25[7] = -(pcVar1[7] == DAT_142e33ee0._7_1_);
      auVar25[8] = -(pcVar1[8] == DAT_142e33ee0._8_1_);
      auVar25[9] = -(pcVar1[9] == DAT_142e33ee0._9_1_);
      auVar25[10] = -(pcVar1[10] == DAT_142e33ee0._10_1_);
      auVar25[0xb] = -(pcVar1[0xb] == DAT_142e33ee0._11_1_);
      auVar25[0xc] = -(pcVar1[0xc] == DAT_142e33ee0._12_1_);
      auVar25[0xd] = -(pcVar1[0xd] == DAT_142e33ee0._13_1_);
      auVar25[0xe] = -(pcVar1[0xe] == DAT_142e33ee0._14_1_);
      auVar25[0xf] = -(pcVar1[0xf] == DAT_142e33ee0._15_1_);
      uVar16 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar3 + uVar10 & *(ulonglong *)(lVar6 + 0x78);
        pcVar2 = (char *)(lVar13 + -0x18 + uVar17 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_143022b80);
        auVar26[1] = -(pcVar2[1] == UNK_143022b81);
        auVar26[2] = -(pcVar2[2] == UNK_143022b82);
        auVar26[3] = -(pcVar2[3] == UNK_143022b83);
        auVar26[4] = -(pcVar2[4] == UNK_143022b84);
        auVar26[5] = -(pcVar2[5] == UNK_143022b85);
        auVar26[6] = -(pcVar2[6] == UNK_143022b86);
        auVar26[7] = -(pcVar2[7] == UNK_143022b87);
        auVar26[8] = -(pcVar2[8] == UNK_143022b88);
        auVar26[9] = -(pcVar2[9] == UNK_143022b89);
        auVar26[10] = -(pcVar2[10] == UNK_143022b8a);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_143022b8b);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_143022b8c);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_143022b8d);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_143022b8e);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_143022b8f);
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
          uVar10 = *(ulonglong *)(lVar13 + uVar17 * -0x18 + -8);
          if (((*(ulonglong *)(lVar6 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar6 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_14093d572;
          goto LAB_14093d57a;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
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
      uVar10 = uVar10 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_14093d572:
  pdb_1418e13f0(lVar6);
LAB_14093d57a:
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0xa0,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xa0);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[0x98] = 0;
  pbVar7[0x99] = 0;
  pbVar7[0x9a] = 0;
  pbVar7[0x9b] = 0;
  pbVar7[0x9c] = 0;
  pdb_140ed3cd0(&uStack_268,pbVar7,&UNK_1433657d0);
  pdb_1417e3000(&uStack_2d8,&uStack_268);
  uStack_268 = 0x8000000000000000;
  uStack_220 = (ulonglong)uStack_220._5_3_ << 0x28;
  pdb_14007ee60();
  puVar8 = (ulonglong *)pub_1406abab0(0x50,8);
  if (puVar8 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x50);
  }
  puVar8[8] = uStack_228;
  puVar8[9] = uStack_220;
  puVar8[6] = uStack_238;
  puVar8[7] = uStack_230;
  puVar8[4] = uStack_248;
  puVar8[5] = uStack_240;
  puVar8[2] = uStack_258;
  puVar8[3] = uStack_250;
  *puVar8 = uStack_268;
  puVar8[1] = uStack_260;
  pdb_140ed3cd0(&uStack_268,puVar8,&UNK_1430524a8);
  pdb_1417e3d20(&uStack_a8,&uStack_268);
  pdb_1417e46d0(&uStack_348,&uStack_a8,1);
  uStack_268 = uStack_2d8;
  uStack_260 = uStack_2d0;
  uStack_258 = uStack_2c8;
  uStack_250 = uStack_2c0;
  uStack_248 = uStack_2b8;
  uStack_240 = uStack_2b0;
  uStack_238 = uStack_2a8;
  uStack_230 = uStack_2a0;
  uStack_228 = uStack_298;
  uStack_220 = uStack_290;
  uStack_218 = uStack_288;
  uStack_210 = uStack_280;
  uStack_208 = uStack_278;
  uStack_200 = uStack_270;
  uStack_1f8 = uStack_348;
  uStack_1f0 = uStack_340;
  uStack_1e8 = uStack_338;
  uStack_1e0 = uStack_330;
  uStack_1d8 = uStack_328;
  uStack_1d0 = uStack_320;
  uStack_1c8 = uStack_318;
  uStack_1c0 = uStack_310;
  uStack_1b8 = uStack_308;
  uStack_1b0 = uStack_300;
  uStack_1a8 = uStack_2f8;
  uStack_1a0 = uStack_2f0;
  uStack_198 = uStack_2e8;
  uStack_190 = uStack_2e0;
  pdb_140c971f0(lVar6,&uStack_268);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x80,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x80);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[0x78] = 0;
  pbVar7[0x79] = 0;
  pbVar7[0x7a] = 0;
  pbVar7[0x7b] = 0;
  pbVar7[0x7c] = 0;
  pdb_140ed3cd0(&uStack_268,pbVar7,&UNK_143052550);
  pdb_1417e2c40(&uStack_a8,&uStack_268);
  pdb_1417e46d0(&uStack_268,&uStack_a8,1);
  pdb_140c95cd0(lVar6,&uStack_268);
  pdb_140afe6e0(&uStack_268);
  pdb_140c961b0(lVar6,1,&uStack_268);
  uVar5 = _DAT_143ca8dd0;
  puVar12 = &uStack_31;
  puVar11 = puVar12;
  uVar9 = pdb_140950ee0(_DAT_143ca8dd0,puVar12,&UNK_143364748);
  pdb_140ed18b0(&uStack_268,uVar9,puVar11);
  uVar5 = pdb_140950ee0(uVar5,puVar12,&UNK_143364908);
  pdb_1406769e0(&uStack_268,uVar5,puVar12);
  uStack_48 = uStack_208;
  uStack_40 = uStack_200;
  uStack_58 = uStack_218;
  uStack_50 = uStack_210;
  uStack_68 = uStack_228;
  uStack_60 = uStack_220;
  uStack_78 = uStack_238;
  uStack_70 = uStack_230;
  uStack_88 = uStack_248;
  uStack_80 = uStack_240;
  uStack_98 = uStack_258;
  uStack_90 = uStack_250;
  uStack_a8 = uStack_268;
  uStack_a0 = uStack_260;
  pdb_140c980c0(lVar6,1,&uStack_a8,&UNK_1430236b0);
  pdb_141a1c700(&uStack_3b8,&UNK_1430236c8);
  uStack_1f8 = 0x8000000000000000;
  uStack_268 = uStack_268 & 0xffffff0000000000;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0xa8,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xa8);
  }
  pub_142e32760(pbVar7,&uStack_268,0xa8);
  pdb_140ed3cd0(&uStack_268,pbVar7,&UNK_14329b318);
  pdb_1417e35a0(&uStack_2d8,&uStack_268);
  pdb_141a1c5f0(&uStack_348,&UNK_1430236e0);
  pdb_141a2e450(&uStack_a8);
  uStack_208 = uStack_358;
  uStack_200 = uStack_350;
  uStack_218 = uStack_368;
  uStack_210 = uStack_360;
  uStack_228 = uStack_378;
  uStack_220 = uStack_370;
  uStack_238 = uStack_388;
  uStack_230 = uStack_380;
  uStack_248 = uStack_398;
  uStack_240 = uStack_390;
  uStack_258 = uStack_3a8;
  uStack_250 = uStack_3a0;
  uStack_268 = uStack_3b8;
  uStack_260 = uStack_3b0;
  uStack_1f8 = uStack_2d8;
  uStack_1f0 = uStack_2d0;
  uStack_1e8 = uStack_2c8;
  uStack_1e0 = uStack_2c0;
  uStack_1d8 = uStack_2b8;
  uStack_1d0 = uStack_2b0;
  uStack_1c8 = uStack_2a8;
  uStack_1c0 = uStack_2a0;
  uStack_1b8 = uStack_298;
  uStack_1b0 = uStack_290;
  uStack_1a8 = uStack_288;
  uStack_1a0 = uStack_280;
  uStack_198 = uStack_278;
  uStack_190 = uStack_270;
  uStack_128 = uStack_2e8;
  uStack_120 = uStack_2e0;
  uStack_138 = uStack_2f8;
  uStack_130 = uStack_2f0;
  uStack_148 = uStack_308;
  uStack_140 = uStack_300;
  uStack_158 = uStack_318;
  uStack_150 = uStack_310;
  uStack_168 = uStack_328;
  uStack_160 = uStack_320;
  uStack_178 = uStack_338;
  uStack_170 = uStack_330;
  uStack_188 = uStack_348;
  uStack_180 = uStack_340;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_40;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_d8 = uStack_68;
  uStack_d0 = uStack_60;
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_f8 = uStack_88;
  uStack_f0 = uStack_80;
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  uStack_118 = uStack_a8;
  uStack_110 = uStack_a0;
  pdb_1417e97a0(&uStack_a8,&uStack_268);
  pdb_140c961b0(lVar6,1,&uStack_a8);
  pdb_140bfbfd0(&uStack_268);
  pdb_140c97010(lVar6,1,&uStack_268);
  pdb_140c96890(lVar6);
  pdb_140c95730(lVar6);
  return lVar6;
}

