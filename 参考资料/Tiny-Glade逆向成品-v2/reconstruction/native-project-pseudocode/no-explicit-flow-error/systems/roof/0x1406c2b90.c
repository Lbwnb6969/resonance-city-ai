// VA 0x1406c2b90, PDB extent 3438 bytes
// system_roof::impl$0::add_roof_systems
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::impl$0::add_roof_systems
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/lib.rs
   Extent: 3438 */

longlong pdb_1406c2b90(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
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
  undefined8 uStack_2d8;
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
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_118;
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
  undefined8 uStack_a8;
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
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar8 = 0x78a43b0acbde8919;
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar17[0] = -(*pcVar1 == DAT_142e34c50);
      auVar17[1] = -(pcVar1[1] == UNK_142e34c51);
      auVar17[2] = -(pcVar1[2] == UNK_142e34c52);
      auVar17[3] = -(pcVar1[3] == UNK_142e34c53);
      auVar17[4] = -(pcVar1[4] == UNK_142e34c54);
      auVar17[5] = -(pcVar1[5] == UNK_142e34c55);
      auVar17[6] = -(pcVar1[6] == UNK_142e34c56);
      auVar17[7] = -(pcVar1[7] == UNK_142e34c57);
      auVar17[8] = -(pcVar1[8] == UNK_142e34c58);
      auVar17[9] = -(pcVar1[9] == UNK_142e34c59);
      auVar17[10] = -(pcVar1[10] == UNK_142e34c5a);
      auVar17[0xb] = -(pcVar1[0xb] == UNK_142e34c5b);
      auVar17[0xc] = -(pcVar1[0xc] == UNK_142e34c5c);
      auVar17[0xd] = -(pcVar1[0xd] == UNK_142e34c5d);
      auVar17[0xe] = -(pcVar1[0xe] == UNK_142e34c5e);
      auVar17[0xf] = -(pcVar1[0xf] == UNK_142e34c5f);
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar8 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_142f98ee0);
        auVar18[1] = -(pcVar2[1] == UNK_142f98ee1);
        auVar18[2] = -(pcVar2[2] == UNK_142f98ee2);
        auVar18[3] = -(pcVar2[3] == UNK_142f98ee3);
        auVar18[4] = -(pcVar2[4] == UNK_142f98ee4);
        auVar18[5] = -(pcVar2[5] == UNK_142f98ee5);
        auVar18[6] = -(pcVar2[6] == UNK_142f98ee6);
        auVar18[7] = -(pcVar2[7] == UNK_142f98ee7);
        auVar18[8] = -(pcVar2[8] == UNK_142f98ee8);
        auVar18[9] = -(pcVar2[9] == UNK_142f98ee9);
        auVar18[10] = -(pcVar2[10] == UNK_142f98eea);
        auVar18[0xb] = -(pcVar2[0xb] == UNK_142f98eeb);
        auVar18[0xc] = -(pcVar2[0xc] == UNK_142f98eec);
        auVar18[0xd] = -(pcVar2[0xd] == UNK_142f98eed);
        auVar18[0xe] = -(pcVar2[0xe] == UNK_142f98eee);
        auVar18[0xf] = -(pcVar2[0xf] == UNK_142f98eef);
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
          uVar8 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c2c92;
          goto LAB_1406c2ca8;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406c2c92:
  pdb_140fce5c0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_1406c2ca8:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar8 = 0x64f028799c30e3b8;
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar19[0] = -(*pcVar1 == DAT_142e33f30);
      auVar19[1] = -(pcVar1[1] == DAT_142e33f30._1_1_);
      auVar19[2] = -(pcVar1[2] == DAT_142e33f30._2_1_);
      auVar19[3] = -(pcVar1[3] == DAT_142e33f30._3_1_);
      auVar19[4] = -(pcVar1[4] == DAT_142e33f30._4_1_);
      auVar19[5] = -(pcVar1[5] == DAT_142e33f30._5_1_);
      auVar19[6] = -(pcVar1[6] == DAT_142e33f30._6_1_);
      auVar19[7] = -(pcVar1[7] == DAT_142e33f30._7_1_);
      auVar19[8] = -(pcVar1[8] == DAT_142e33f30._8_1_);
      auVar19[9] = -(pcVar1[9] == DAT_142e33f30._9_1_);
      auVar19[10] = -(pcVar1[10] == DAT_142e33f30._10_1_);
      auVar19[0xb] = -(pcVar1[0xb] == DAT_142e33f30._11_1_);
      auVar19[0xc] = -(pcVar1[0xc] == DAT_142e33f30._12_1_);
      auVar19[0xd] = -(pcVar1[0xd] == DAT_142e33f30._13_1_);
      auVar19[0xe] = -(pcVar1[0xe] == DAT_142e33f30._14_1_);
      auVar19[0xf] = -(pcVar1[0xf] == DAT_142e33f30._15_1_);
      uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar8 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_142f98ef0);
        auVar20[1] = -(pcVar2[1] == UNK_142f98ef1);
        auVar20[2] = -(pcVar2[2] == UNK_142f98ef2);
        auVar20[3] = -(pcVar2[3] == UNK_142f98ef3);
        auVar20[4] = -(pcVar2[4] == UNK_142f98ef4);
        auVar20[5] = -(pcVar2[5] == UNK_142f98ef5);
        auVar20[6] = -(pcVar2[6] == UNK_142f98ef6);
        auVar20[7] = -(pcVar2[7] == UNK_142f98ef7);
        auVar20[8] = -(pcVar2[8] == UNK_142f98ef8);
        auVar20[9] = -(pcVar2[9] == UNK_142f98ef9);
        auVar20[10] = -(pcVar2[10] == UNK_142f98efa);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_142f98efb);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_142f98efc);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_142f98efd);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_142f98efe);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_142f98eff);
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
          uVar8 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c2d82;
          goto LAB_1406c2d98;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406c2d82:
  pdb_140fcebc0(param_1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
LAB_1406c2d98:
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar8 = 0x88456b397e0eecdf;
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar8);
      auVar21[0] = -(*pcVar1 == DAT_142e342a0);
      auVar21[1] = -(pcVar1[1] == DAT_142e342a0._1_1_);
      auVar21[2] = -(pcVar1[2] == DAT_142e342a0._2_1_);
      auVar21[3] = -(pcVar1[3] == DAT_142e342a0._3_1_);
      auVar21[4] = -(pcVar1[4] == DAT_142e342a0._4_1_);
      auVar21[5] = -(pcVar1[5] == DAT_142e342a0._5_1_);
      auVar21[6] = -(pcVar1[6] == DAT_142e342a0._6_1_);
      auVar21[7] = -(pcVar1[7] == DAT_142e342a0._7_1_);
      auVar21[8] = -(pcVar1[8] == DAT_142e342a0._8_1_);
      auVar21[9] = -(pcVar1[9] == DAT_142e342a0._9_1_);
      auVar21[10] = -(pcVar1[10] == DAT_142e342a0._10_1_);
      auVar21[0xb] = -(pcVar1[0xb] == DAT_142e342a0._11_1_);
      auVar21[0xc] = -(pcVar1[0xc] == DAT_142e342a0._12_1_);
      auVar21[0xd] = -(pcVar1[0xd] == DAT_142e342a0._13_1_);
      auVar21[0xe] = -(pcVar1[0xe] == DAT_142e342a0._14_1_);
      auVar21[0xf] = -(pcVar1[0xf] == DAT_142e342a0._15_1_);
      uVar12 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar8 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_142f98f00);
        auVar22[1] = -(pcVar2[1] == UNK_142f98f01);
        auVar22[2] = -(pcVar2[2] == UNK_142f98f02);
        auVar22[3] = -(pcVar2[3] == UNK_142f98f03);
        auVar22[4] = -(pcVar2[4] == UNK_142f98f04);
        auVar22[5] = -(pcVar2[5] == UNK_142f98f05);
        auVar22[6] = -(pcVar2[6] == UNK_142f98f06);
        auVar22[7] = -(pcVar2[7] == UNK_142f98f07);
        auVar22[8] = -(pcVar2[8] == UNK_142f98f08);
        auVar22[9] = -(pcVar2[9] == UNK_142f98f09);
        auVar22[10] = -(pcVar2[10] == UNK_142f98f0a);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_142f98f0b);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_142f98f0c);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_142f98f0d);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_142f98f0e);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_142f98f0f);
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
          uVar8 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(param_1 + 0x210) <= uVar8) ||
              (uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar8 * 8), uVar8 == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar8 * 0x40) == 0))
          goto LAB_1406c2e72;
          goto LAB_1406c2e7a;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1406c2e72:
  pdb_140fd21c0(param_1);
LAB_1406c2e7a:
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x148,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x148);
  }
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[0x100] = 0;
  pbVar6[0x101] = 0;
  pbVar6[0x102] = 0;
  pbVar6[0x103] = 0;
  pbVar6[0x104] = 0;
  pbVar6[0x105] = 0;
  pbVar6[0x106] = 0;
  pbVar6[0x107] = 0x80;
  pdb_140ed3cd0(&uStack_5e8,pbVar6,&UNK_14326b120);
  pdb_140fd47e0(&uStack_a8,&uStack_5e8);
  pdb_140fd8210(&uStack_658,&uStack_a8,0x11,&UNK_142f98fa0);
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x1b0,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x1b0);
  }
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[0x100] = 0;
  pbVar6[0x101] = 0;
  pbVar6[0x102] = 0;
  pbVar6[0x103] = 0;
  pbVar6[0x104] = 0;
  pbVar6[0x105] = 0;
  pbVar6[0x106] = 0;
  pbVar6[0x107] = 0x80;
  pdb_140ed3cd0(&uStack_5e8,pbVar6,&UNK_14326be40);
  pdb_140fd47e0(&uStack_118,&uStack_5e8);
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x180,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x180);
  }
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[0x100] = 0;
  pbVar6[0x101] = 0;
  pbVar6[0x102] = 0;
  pbVar6[0x103] = 0;
  pbVar6[0x104] = 0;
  pbVar6[0x105] = 0;
  pbVar6[0x106] = 0;
  pbVar6[0x107] = 0x80;
  pdb_140ed3cd0(&uStack_5e8,pbVar6,&UNK_14326c220);
  pdb_140fd47e0(&uStack_a8,&uStack_5e8);
  uStack_5e8 = uStack_118;
  uStack_5e0 = uStack_110;
  uStack_5d8 = uStack_108;
  uStack_5d0 = uStack_100;
  uStack_5c8 = uStack_f8;
  uStack_5c0 = uStack_f0;
  uStack_5b8 = uStack_e8;
  uStack_5b0 = uStack_e0;
  uStack_5a8 = uStack_d8;
  uStack_5a0 = uStack_d0;
  uStack_598 = uStack_c8;
  uStack_590 = uStack_c0;
  uStack_588 = uStack_b8;
  uStack_580 = uStack_b0;
  uStack_578 = uStack_a8;
  uStack_570 = uStack_a0;
  uStack_568 = uStack_98;
  uStack_560 = uStack_90;
  uStack_558 = uStack_88;
  uStack_550 = uStack_80;
  uStack_548 = uStack_78;
  uStack_540 = uStack_70;
  uStack_538 = uStack_68;
  uStack_530 = uStack_60;
  uStack_528 = uStack_58;
  uStack_520 = uStack_50;
  uStack_518 = uStack_48;
  uStack_510 = uStack_40;
  pdb_140fd7bb0(&uStack_a8,&uStack_5e8);
  uStack_5e8 = CONCAT71(uStack_5e8._1_7_,0x12);
  puVar9 = &uStack_5e8;
  uVar7 = pdb_140fdc4c0(_DAT_143ca8dd0,puVar9,&UNK_14326c818);
  pdb_140676be0(&uStack_a8,uVar7,puVar9);
  uStack_128 = uStack_48;
  uStack_120 = uStack_40;
  uStack_138 = uStack_58;
  uStack_130 = uStack_50;
  uStack_148 = uStack_68;
  uStack_140 = uStack_60;
  uStack_158 = uStack_78;
  uStack_150 = uStack_70;
  uStack_168 = uStack_88;
  uStack_160 = uStack_80;
  uStack_178 = uStack_98;
  uStack_170 = uStack_90;
  uStack_188 = uStack_a8;
  uStack_180 = uStack_a0;
  pdb_140fddd80(&uStack_5e8);
  uStack_48 = uStack_588;
  uStack_40 = uStack_580;
  uStack_58 = uStack_598;
  uStack_50 = uStack_590;
  uStack_68 = uStack_5a8;
  uStack_60 = uStack_5a0;
  uStack_78 = uStack_5b8;
  uStack_70 = uStack_5b0;
  uStack_88 = uStack_5c8;
  uStack_80 = uStack_5c0;
  uStack_98 = uStack_5d8;
  uStack_90 = uStack_5d0;
  uStack_a8 = uStack_5e8;
  uStack_a0 = uStack_5e0;
  pdb_140fd5120(&uStack_5e8,&uStack_a8);
  uStack_a8 = uStack_5e8;
  uStack_a0 = uStack_5e0;
  uStack_98 = uStack_5d8;
  uStack_90 = uStack_5d0;
  uStack_88 = uStack_5c8;
  uStack_80 = uStack_5c0;
  uStack_78 = uStack_5b8;
  uStack_70 = uStack_5b0;
  uStack_68 = uStack_5a8;
  uStack_60 = uStack_5a0;
  uStack_58 = uStack_598;
  uStack_50 = uStack_590;
  uStack_48 = uStack_588;
  uStack_40 = uStack_580;
  pdb_140fd55c0(&uStack_5e8,&uStack_a8);
  uStack_a8 = CONCAT71(uStack_a8._1_7_,0x14);
  puVar9 = &uStack_a8;
  uVar7 = pdb_140fdc4c0(_DAT_143ca8dd0,puVar9,&UNK_14326c818);
  pdb_140676be0(&uStack_5e8,uVar7,puVar9);
  uStack_198 = uStack_588;
  uStack_190 = uStack_580;
  uStack_1a8 = uStack_598;
  uStack_1a0 = uStack_590;
  uStack_1b8 = uStack_5a8;
  uStack_1b0 = uStack_5a0;
  uStack_1c8 = uStack_5b8;
  uStack_1c0 = uStack_5b0;
  uStack_1d8 = uStack_5c8;
  uStack_1d0 = uStack_5c0;
  uStack_1e8 = uStack_5d8;
  uStack_1e0 = uStack_5d0;
  uStack_1f8 = uStack_5e8;
  uStack_1f0 = uStack_5e0;
  pdb_140fded70(&uStack_6c8,0x1d,&UNK_142f98fb8);
  pdb_140fde230(&uStack_738,0x15,&UNK_142f98fd0);
  pdb_140fdfde0(&uStack_7a8,0x28,&UNK_142f98fe8);
  pdb_140fe0590(&uStack_818,0x22,&UNK_142f99000);
  pdb_140fdc360(&uStack_118,0x22,&UNK_142f99018);
  pdb_140fe0ca0(&uStack_a8,0x2c,&UNK_142f99030);
  uStack_588 = uStack_5f8;
  uStack_580 = uStack_5f0;
  uStack_598 = uStack_608;
  uStack_590 = uStack_600;
  uStack_5a8 = uStack_618;
  uStack_5a0 = uStack_610;
  uStack_5b8 = uStack_628;
  uStack_5b0 = uStack_620;
  uStack_5c8 = uStack_638;
  uStack_5c0 = uStack_630;
  uStack_5d8 = uStack_648;
  uStack_5d0 = uStack_640;
  uStack_5e8 = uStack_658;
  uStack_5e0 = uStack_650;
  uStack_578 = uStack_188;
  uStack_570 = uStack_180;
  uStack_568 = uStack_178;
  uStack_560 = uStack_170;
  uStack_558 = uStack_168;
  uStack_550 = uStack_160;
  uStack_548 = uStack_158;
  uStack_540 = uStack_150;
  uStack_538 = uStack_148;
  uStack_530 = uStack_140;
  uStack_528 = uStack_138;
  uStack_520 = uStack_130;
  uStack_518 = uStack_128;
  uStack_510 = uStack_120;
  uStack_4a8 = uStack_198;
  uStack_4a0 = uStack_190;
  uStack_4b8 = uStack_1a8;
  uStack_4b0 = uStack_1a0;
  uStack_4c8 = uStack_1b8;
  uStack_4c0 = uStack_1b0;
  uStack_4d8 = uStack_1c8;
  uStack_4d0 = uStack_1c0;
  uStack_4e8 = uStack_1d8;
  uStack_4e0 = uStack_1d0;
  uStack_4f8 = uStack_1e8;
  uStack_4f0 = uStack_1e0;
  uStack_508 = uStack_1f8;
  uStack_500 = uStack_1f0;
  uStack_438 = uStack_668;
  uStack_430 = uStack_660;
  uStack_448 = uStack_678;
  uStack_440 = uStack_670;
  uStack_458 = uStack_688;
  uStack_450 = uStack_680;
  uStack_468 = uStack_698;
  uStack_460 = uStack_690;
  uStack_478 = uStack_6a8;
  uStack_470 = uStack_6a0;
  uStack_488 = uStack_6b8;
  uStack_480 = uStack_6b0;
  uStack_498 = uStack_6c8;
  uStack_490 = uStack_6c0;
  uStack_3c8 = uStack_6d8;
  uStack_3c0 = uStack_6d0;
  uStack_3d8 = uStack_6e8;
  uStack_3d0 = uStack_6e0;
  uStack_3e8 = uStack_6f8;
  uStack_3e0 = uStack_6f0;
  uStack_3f8 = uStack_708;
  uStack_3f0 = uStack_700;
  uStack_408 = uStack_718;
  uStack_400 = uStack_710;
  uStack_418 = uStack_728;
  uStack_410 = uStack_720;
  uStack_428 = uStack_738;
  uStack_420 = uStack_730;
  uStack_358 = uStack_748;
  uStack_350 = uStack_740;
  uStack_368 = uStack_758;
  uStack_360 = uStack_750;
  uStack_378 = uStack_768;
  uStack_370 = uStack_760;
  uStack_388 = uStack_778;
  uStack_380 = uStack_770;
  uStack_398 = uStack_788;
  uStack_390 = uStack_780;
  uStack_3a8 = uStack_798;
  uStack_3a0 = uStack_790;
  uStack_3b8 = uStack_7a8;
  uStack_3b0 = uStack_7a0;
  uStack_2e8 = uStack_7b8;
  uStack_2e0 = uStack_7b0;
  uStack_2f8 = uStack_7c8;
  uStack_2f0 = uStack_7c0;
  uStack_308 = uStack_7d8;
  uStack_300 = uStack_7d0;
  uStack_318 = uStack_7e8;
  uStack_310 = uStack_7e0;
  uStack_328 = uStack_7f8;
  uStack_320 = uStack_7f0;
  uStack_338 = uStack_808;
  uStack_330 = uStack_800;
  uStack_348 = uStack_818;
  uStack_340 = uStack_810;
  uStack_278 = uStack_b8;
  uStack_270 = uStack_b0;
  uStack_288 = uStack_c8;
  uStack_280 = uStack_c0;
  uStack_298 = uStack_d8;
  uStack_290 = uStack_d0;
  uStack_2a8 = uStack_e8;
  uStack_2a0 = uStack_e0;
  uStack_2b8 = uStack_f8;
  uStack_2b0 = uStack_f0;
  uStack_2c8 = uStack_108;
  uStack_2c0 = uStack_100;
  uStack_2d8 = uStack_118;
  uStack_2d0 = uStack_110;
  uStack_208 = uStack_48;
  uStack_200 = uStack_40;
  uStack_218 = uStack_58;
  uStack_210 = uStack_50;
  uStack_228 = uStack_68;
  uStack_220 = uStack_60;
  uStack_238 = uStack_78;
  uStack_230 = uStack_70;
  uStack_248 = uStack_88;
  uStack_240 = uStack_80;
  uStack_258 = uStack_98;
  uStack_250 = uStack_90;
  uStack_268 = uStack_a8;
  uStack_260 = uStack_a0;
  pdb_140fe1a40(param_1,&uStack_5e8);
  return param_1;
}

