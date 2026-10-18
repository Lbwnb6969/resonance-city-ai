// VA 0x140c89700, PDB extent 2798 bytes
// country_core::systems::garden::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::garden::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden.rs
   Extent: 2798 */

void pdb_140c89700(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0xb8,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xb8);
  }
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[0xa8] = 4;
  pdb_140ed3cd0(&uStack_428,pbVar6,&UNK_143075898);
  uStack_a0._0_1_ = 0x10;
  puVar9 = &uStack_a0;
  uVar7 = pdb_140950ee0(_DAT_143ca8dd0,puVar9,&UNK_14305af38);
  pdb_140676be0(&uStack_428,uVar7,puVar9);
  uStack_b8 = uStack_3c8;
  uStack_b0 = uStack_3c0;
  uStack_c8 = uStack_3d8;
  uStack_c0 = uStack_3d0;
  uStack_d8 = uStack_3e8;
  uStack_d0 = uStack_3e0;
  uStack_e8 = uStack_3f8;
  uStack_e0 = uStack_3f0;
  uStack_f8 = uStack_408;
  uStack_f0 = uStack_400;
  uStack_108 = uStack_418;
  uStack_100 = uStack_410;
  uStack_118 = uStack_428;
  uStack_110 = uStack_420;
  pdb_1409aa760(&uStack_498,0x10,&UNK_143075ed8);
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x78,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x78);
  }
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0x80;
  pbVar6[0x70] = 0;
  pbVar6[0x71] = 0;
  pbVar6[0x72] = 0;
  pbVar6[0x73] = 0;
  pbVar6[0x74] = 0;
  pdb_140ed3cd0(&uStack_428,pbVar6,&UNK_1430757f0);
  uStack_a0 = CONCAT71(uStack_a0._1_7_,0x10);
  puVar9 = &uStack_a0;
  uVar7 = pdb_140950ee0(_DAT_143ca8dd0,puVar9,&UNK_14305af38);
  pdb_140676be0(&uStack_428,uVar7,puVar9);
  uStack_128 = uStack_3c8;
  uStack_120 = uStack_3c0;
  uStack_138 = uStack_3d8;
  uStack_130 = uStack_3d0;
  uStack_148 = uStack_3e8;
  uStack_140 = uStack_3e0;
  uStack_158 = uStack_3f8;
  uStack_150 = uStack_3f0;
  uStack_168 = uStack_408;
  uStack_160 = uStack_400;
  uStack_178 = uStack_418;
  uStack_170 = uStack_410;
  uStack_188 = uStack_428;
  uStack_180 = uStack_420;
  pdb_1414df140(&uStack_508,0x22,&UNK_143075ef0);
  pdb_141a75810(&uStack_a0,0x22);
  uStack_3c8 = uStack_b8;
  uStack_3c0 = uStack_b0;
  uStack_3d8 = uStack_c8;
  uStack_3d0 = uStack_c0;
  uStack_3e8 = uStack_d8;
  uStack_3e0 = uStack_d0;
  uStack_3f8 = uStack_e8;
  uStack_3f0 = uStack_e0;
  uStack_408 = uStack_f8;
  uStack_400 = uStack_f0;
  uStack_418 = uStack_108;
  uStack_410 = uStack_100;
  uStack_428 = uStack_118;
  uStack_420 = uStack_110;
  uStack_3b8 = uStack_498;
  uStack_3b0 = uStack_490;
  uStack_3a8 = uStack_488;
  uStack_3a0 = uStack_480;
  uStack_398 = uStack_478;
  uStack_390 = uStack_470;
  uStack_388 = uStack_468;
  uStack_380 = uStack_460;
  uStack_378 = uStack_458;
  uStack_370 = uStack_450;
  uStack_368 = uStack_448;
  uStack_360 = uStack_440;
  uStack_358 = uStack_438;
  uStack_350 = uStack_430;
  uStack_2e8 = uStack_128;
  uStack_2e0 = uStack_120;
  uStack_2f8 = uStack_138;
  uStack_2f0 = uStack_130;
  uStack_308 = uStack_148;
  uStack_300 = uStack_140;
  uStack_318 = uStack_158;
  uStack_310 = uStack_150;
  uStack_328 = uStack_168;
  uStack_320 = uStack_160;
  uStack_338 = uStack_178;
  uStack_330 = uStack_170;
  uStack_348 = uStack_188;
  uStack_340 = uStack_180;
  uStack_2d8 = uStack_508;
  uStack_2d0 = uStack_500;
  uStack_2c8 = uStack_4f8;
  uStack_2c0 = uStack_4f0;
  uStack_2b8 = uStack_4e8;
  uStack_2b0 = uStack_4e0;
  uStack_2a8 = uStack_4d8;
  uStack_2a0 = uStack_4d0;
  uStack_298 = uStack_4c8;
  uStack_290 = uStack_4c0;
  uStack_288 = uStack_4b8;
  uStack_280 = uStack_4b0;
  uStack_278 = uStack_4a8;
  uStack_270 = uStack_4a0;
  uStack_208 = uStack_40;
  uStack_200 = uStack_38;
  uStack_218 = uStack_50;
  uStack_210 = uStack_48;
  uStack_228 = uStack_60;
  uStack_220 = uStack_58;
  uStack_238 = uStack_70;
  uStack_230 = uStack_68;
  uStack_248 = uStack_80;
  uStack_240 = uStack_78;
  uStack_258 = uStack_90;
  uStack_250 = uStack_88;
  uStack_268 = uStack_a0;
  uStack_260 = uStack_98;
  pdb_140c976e0(param_2,&uStack_428);
  uStack_a0 = 0;
  uStack_98 = 8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 8;
  uStack_78 = 0;
  uStack_70 = 0;
  pdb_140a77de0(&uStack_428,&uStack_a0);
  uVar7 = pdb_1418f4ed0(param_2,&uStack_428);
  uStack_a0 = 0;
  uStack_98 = 8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 8;
  uStack_78 = 0;
  uStack_70 = 0;
  pdb_140a77de0(&uStack_428,&uStack_a0);
  uVar7 = pdb_141912ab0(uVar7,&uStack_428);
  pdb_140a86d50(&uStack_428);
  lVar8 = pdb_1419184e0(uVar7,&uStack_428);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar10 = 0xc1508a11dff4db5c;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar20[0] = -(*pcVar1 == DAT_142e34810);
      auVar20[1] = -(pcVar1[1] == DAT_142e34810._1_1_);
      auVar20[2] = -(pcVar1[2] == DAT_142e34810._2_1_);
      auVar20[3] = -(pcVar1[3] == DAT_142e34810._3_1_);
      auVar20[4] = -(pcVar1[4] == DAT_142e34810._4_1_);
      auVar20[5] = -(pcVar1[5] == DAT_142e34810._5_1_);
      auVar20[6] = -(pcVar1[6] == DAT_142e34810._6_1_);
      auVar20[7] = -(pcVar1[7] == DAT_142e34810._7_1_);
      auVar20[8] = -(pcVar1[8] == DAT_142e34810._8_1_);
      auVar20[9] = -(pcVar1[9] == DAT_142e34810._9_1_);
      auVar20[10] = -(pcVar1[10] == DAT_142e34810._10_1_);
      auVar20[0xb] = -(pcVar1[0xb] == DAT_142e34810._11_1_);
      auVar20[0xc] = -(pcVar1[0xc] == DAT_142e34810._12_1_);
      auVar20[0xd] = -(pcVar1[0xd] == DAT_142e34810._13_1_);
      auVar20[0xe] = -(pcVar1[0xe] == DAT_142e34810._14_1_);
      auVar20[0xf] = -(pcVar1[0xf] == DAT_142e34810._15_1_);
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar21[0] = -(*pcVar2 == DAT_143075420);
        auVar21[1] = -(pcVar2[1] == UNK_143075421);
        auVar21[2] = -(pcVar2[2] == UNK_143075422);
        auVar21[3] = -(pcVar2[3] == UNK_143075423);
        auVar21[4] = -(pcVar2[4] == UNK_143075424);
        auVar21[5] = -(pcVar2[5] == UNK_143075425);
        auVar21[6] = -(pcVar2[6] == UNK_143075426);
        auVar21[7] = -(pcVar2[7] == UNK_143075427);
        auVar21[8] = -(pcVar2[8] == UNK_143075428);
        auVar21[9] = -(pcVar2[9] == UNK_143075429);
        auVar21[10] = -(pcVar2[10] == UNK_14307542a);
        auVar21[0xb] = -(pcVar2[0xb] == UNK_14307542b);
        auVar21[0xc] = -(pcVar2[0xc] == UNK_14307542c);
        auVar21[0xd] = -(pcVar2[0xd] == UNK_14307542d);
        auVar21[0xe] = -(pcVar2[0xe] == UNK_14307542e);
        auVar21[0xf] = -(pcVar2[0xf] == UNK_14307542f);
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
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140c89c92;
          goto LAB_140c89ca8;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140c89c92:
  pdb_1418cd600(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_140c89ca8:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar10 = 0x6cd68afd4c7d7318;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar22[0] = -(*pcVar1 == DAT_142e34500);
      auVar22[1] = -(pcVar1[1] == DAT_142e34500._1_1_);
      auVar22[2] = -(pcVar1[2] == DAT_142e34500._2_1_);
      auVar22[3] = -(pcVar1[3] == DAT_142e34500._3_1_);
      auVar22[4] = -(pcVar1[4] == DAT_142e34500._4_1_);
      auVar22[5] = -(pcVar1[5] == DAT_142e34500._5_1_);
      auVar22[6] = -(pcVar1[6] == DAT_142e34500._6_1_);
      auVar22[7] = -(pcVar1[7] == DAT_142e34500._7_1_);
      auVar22[8] = -(pcVar1[8] == DAT_142e34500._8_1_);
      auVar22[9] = -(pcVar1[9] == DAT_142e34500._9_1_);
      auVar22[10] = -(pcVar1[10] == DAT_142e34500._10_1_);
      auVar22[0xb] = -(pcVar1[0xb] == DAT_142e34500._11_1_);
      auVar22[0xc] = -(pcVar1[0xc] == DAT_142e34500._12_1_);
      auVar22[0xd] = -(pcVar1[0xd] == DAT_142e34500._13_1_);
      auVar22[0xe] = -(pcVar1[0xe] == DAT_142e34500._14_1_);
      auVar22[0xf] = -(pcVar1[0xf] == DAT_142e34500._15_1_);
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar23[0] = -(*pcVar2 == DAT_143075430);
        auVar23[1] = -(pcVar2[1] == UNK_143075431);
        auVar23[2] = -(pcVar2[2] == UNK_143075432);
        auVar23[3] = -(pcVar2[3] == UNK_143075433);
        auVar23[4] = -(pcVar2[4] == UNK_143075434);
        auVar23[5] = -(pcVar2[5] == UNK_143075435);
        auVar23[6] = -(pcVar2[6] == UNK_143075436);
        auVar23[7] = -(pcVar2[7] == UNK_143075437);
        auVar23[8] = -(pcVar2[8] == UNK_143075438);
        auVar23[9] = -(pcVar2[9] == UNK_143075439);
        auVar23[10] = -(pcVar2[10] == UNK_14307543a);
        auVar23[0xb] = -(pcVar2[0xb] == UNK_14307543b);
        auVar23[0xc] = -(pcVar2[0xc] == UNK_14307543c);
        auVar23[0xd] = -(pcVar2[0xd] == UNK_14307543d);
        auVar23[0xe] = -(pcVar2[0xe] == UNK_14307543e);
        auVar23[0xf] = -(pcVar2[0xf] == UNK_14307543f);
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
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140c89d82;
          goto LAB_140c89d98;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140c89d82:
  pdb_1418cfa00(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_140c89d98:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar10 = 0x4a24f819e9d267d3;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar24[0] = -(*pcVar1 == DAT_142e34d60);
      auVar24[1] = -(pcVar1[1] == DAT_142e34d60._1_1_);
      auVar24[2] = -(pcVar1[2] == DAT_142e34d60._2_1_);
      auVar24[3] = -(pcVar1[3] == DAT_142e34d60._3_1_);
      auVar24[4] = -(pcVar1[4] == DAT_142e34d60._4_1_);
      auVar24[5] = -(pcVar1[5] == DAT_142e34d60._5_1_);
      auVar24[6] = -(pcVar1[6] == DAT_142e34d60._6_1_);
      auVar24[7] = -(pcVar1[7] == DAT_142e34d60._7_1_);
      auVar24[8] = -(pcVar1[8] == DAT_142e34d60._8_1_);
      auVar24[9] = -(pcVar1[9] == DAT_142e34d60._9_1_);
      auVar24[10] = -(pcVar1[10] == DAT_142e34d60._10_1_);
      auVar24[0xb] = -(pcVar1[0xb] == DAT_142e34d60._11_1_);
      auVar24[0xc] = -(pcVar1[0xc] == DAT_142e34d60._12_1_);
      auVar24[0xd] = -(pcVar1[0xd] == DAT_142e34d60._13_1_);
      auVar24[0xe] = -(pcVar1[0xe] == DAT_142e34d60._14_1_);
      auVar24[0xf] = -(pcVar1[0xf] == DAT_142e34d60._15_1_);
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar25[0] = -(*pcVar2 == DAT_143075440);
        auVar25[1] = -(pcVar2[1] == UNK_143075441);
        auVar25[2] = -(pcVar2[2] == UNK_143075442);
        auVar25[3] = -(pcVar2[3] == UNK_143075443);
        auVar25[4] = -(pcVar2[4] == UNK_143075444);
        auVar25[5] = -(pcVar2[5] == UNK_143075445);
        auVar25[6] = -(pcVar2[6] == UNK_143075446);
        auVar25[7] = -(pcVar2[7] == UNK_143075447);
        auVar25[8] = -(pcVar2[8] == UNK_143075448);
        auVar25[9] = -(pcVar2[9] == UNK_143075449);
        auVar25[10] = -(pcVar2[10] == UNK_14307544a);
        auVar25[0xb] = -(pcVar2[0xb] == UNK_14307544b);
        auVar25[0xc] = -(pcVar2[0xc] == UNK_14307544c);
        auVar25[0xd] = -(pcVar2[0xd] == UNK_14307544d);
        auVar25[0xe] = -(pcVar2[0xe] == UNK_14307544e);
        auVar25[0xf] = -(pcVar2[0xf] == UNK_14307544f);
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140c89e72;
          goto LAB_140c89e88;
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140c89e72:
  pdb_1418e73f0(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_140c89e88:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar10 = 0x5d1acf6be87e7160;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar26[0] = -(*pcVar1 == DAT_142f9ff20);
      auVar26[1] = -(pcVar1[1] == DAT_142f9ff20._1_1_);
      auVar26[2] = -(pcVar1[2] == DAT_142f9ff20._2_1_);
      auVar26[3] = -(pcVar1[3] == DAT_142f9ff20._3_1_);
      auVar26[4] = -(pcVar1[4] == DAT_142f9ff20._4_1_);
      auVar26[5] = -(pcVar1[5] == DAT_142f9ff20._5_1_);
      auVar26[6] = -(pcVar1[6] == DAT_142f9ff20._6_1_);
      auVar26[7] = -(pcVar1[7] == DAT_142f9ff20._7_1_);
      auVar26[8] = -(pcVar1[8] == DAT_142f9ff20._8_1_);
      auVar26[9] = -(pcVar1[9] == DAT_142f9ff20._9_1_);
      auVar26[10] = -(pcVar1[10] == DAT_142f9ff20._10_1_);
      auVar26[0xb] = -(pcVar1[0xb] == DAT_142f9ff20._11_1_);
      auVar26[0xc] = -(pcVar1[0xc] == DAT_142f9ff20._12_1_);
      auVar26[0xd] = -(pcVar1[0xd] == DAT_142f9ff20._13_1_);
      auVar26[0xe] = -(pcVar1[0xe] == DAT_142f9ff20._14_1_);
      auVar26[0xf] = -(pcVar1[0xf] == DAT_142f9ff20._15_1_);
      uVar13 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar27[0] = -(*pcVar2 == DAT_143075450);
        auVar27[1] = -(pcVar2[1] == UNK_143075451);
        auVar27[2] = -(pcVar2[2] == UNK_143075452);
        auVar27[3] = -(pcVar2[3] == UNK_143075453);
        auVar27[4] = -(pcVar2[4] == UNK_143075454);
        auVar27[5] = -(pcVar2[5] == UNK_143075455);
        auVar27[6] = -(pcVar2[6] == UNK_143075456);
        auVar27[7] = -(pcVar2[7] == UNK_143075457);
        auVar27[8] = -(pcVar2[8] == UNK_143075458);
        auVar27[9] = -(pcVar2[9] == UNK_143075459);
        auVar27[10] = -(pcVar2[10] == UNK_14307545a);
        auVar27[0xb] = -(pcVar2[0xb] == UNK_14307545b);
        auVar27[0xc] = -(pcVar2[0xc] == UNK_14307545c);
        auVar27[0xd] = -(pcVar2[0xd] == UNK_14307545d);
        auVar27[0xe] = -(pcVar2[0xe] == UNK_14307545e);
        auVar27[0xf] = -(pcVar2[0xf] == UNK_14307545f);
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
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar8 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140c89f62;
          goto LAB_140c89f78;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140c89f62:
  pdb_1418da200(lVar8);
  if (*(longlong *)(lVar8 + 0x88) != 0) {
LAB_140c89f78:
    lVar3 = *(longlong *)(lVar8 + 0x70);
    uVar10 = 0xf44e2f761fdbe980;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar8 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar28[0] = -(*pcVar1 == DAT_142e33fb0);
      auVar28[1] = -(pcVar1[1] == DAT_142e33fb0._1_1_);
      auVar28[2] = -(pcVar1[2] == DAT_142e33fb0._2_1_);
      auVar28[3] = -(pcVar1[3] == DAT_142e33fb0._3_1_);
      auVar28[4] = -(pcVar1[4] == DAT_142e33fb0._4_1_);
      auVar28[5] = -(pcVar1[5] == DAT_142e33fb0._5_1_);
      auVar28[6] = -(pcVar1[6] == DAT_142e33fb0._6_1_);
      auVar28[7] = -(pcVar1[7] == DAT_142e33fb0._7_1_);
      auVar28[8] = -(pcVar1[8] == DAT_142e33fb0._8_1_);
      auVar28[9] = -(pcVar1[9] == DAT_142e33fb0._9_1_);
      auVar28[10] = -(pcVar1[10] == DAT_142e33fb0._10_1_);
      auVar28[0xb] = -(pcVar1[0xb] == DAT_142e33fb0._11_1_);
      auVar28[0xc] = -(pcVar1[0xc] == DAT_142e33fb0._12_1_);
      auVar28[0xd] = -(pcVar1[0xd] == DAT_142e33fb0._13_1_);
      auVar28[0xe] = -(pcVar1[0xe] == DAT_142e33fb0._14_1_);
      auVar28[0xf] = -(pcVar1[0xf] == DAT_142e33fb0._15_1_);
      uVar13 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar8 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar29[0] = -(*pcVar2 == DAT_143075460);
        auVar29[1] = -(pcVar2[1] == UNK_143075461);
        auVar29[2] = -(pcVar2[2] == UNK_143075462);
        auVar29[3] = -(pcVar2[3] == UNK_143075463);
        auVar29[4] = -(pcVar2[4] == UNK_143075464);
        auVar29[5] = -(pcVar2[5] == UNK_143075465);
        auVar29[6] = -(pcVar2[6] == UNK_143075466);
        auVar29[7] = -(pcVar2[7] == UNK_143075467);
        auVar29[8] = -(pcVar2[8] == UNK_143075468);
        auVar29[9] = -(pcVar2[9] == UNK_143075469);
        auVar29[10] = -(pcVar2[10] == UNK_14307546a);
        auVar29[0xb] = -(pcVar2[0xb] == UNK_14307546b);
        auVar29[0xc] = -(pcVar2[0xc] == UNK_14307546c);
        auVar29[0xd] = -(pcVar2[0xd] == UNK_14307546d);
        auVar29[0xe] = -(pcVar2[0xe] == UNK_14307546e);
        auVar29[0xf] = -(pcVar2[0xf] == UNK_14307546f);
        if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((uVar10 < *(ulonglong *)(lVar8 + 0x210)) &&
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x208) + uVar10 * 8), uVar10 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x1d8) + 0x20 + ~uVar10 * 0x40) != 0)) {
            return;
          }
          goto LAB_140c8a052;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140c8a052:
  pdb_1418e0df0(lVar8);
  return;
}

