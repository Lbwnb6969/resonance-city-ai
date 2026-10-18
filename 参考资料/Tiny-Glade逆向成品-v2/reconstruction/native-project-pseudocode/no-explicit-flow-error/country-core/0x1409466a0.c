// VA 0x1409466a0, PDB extent 6218 bytes
// country_core::systems::wall::shapes::impl$0::add_wall_shape_ux
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::shapes::impl$0::add_wall_shape_ux
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/mod.rs
   Extent: 6218 */

void pdb_1409466a0(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte *pbVar7;
  undefined8 uVar8;
  longlong lVar9;
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
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
  ulonglong uStack_770;
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
  undefined1 auStack_4f8 [32];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 auStack_488 [32];
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  uint uStack_414;
  undefined4 uStack_410;
  uint uStack_40c;
  undefined1 auStack_408 [8];
  undefined8 uStack_400;
  ulonglong uStack_3f8;
  ulonglong uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [16];
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulonglong uStack_380;
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
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
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
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x238,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x238);
  }
  pbVar7[0x100] = 0;
  pbVar7[0x101] = 0;
  pbVar7[0x102] = 0;
  pbVar7[0x103] = 0;
  pbVar7[0x104] = 0;
  pbVar7[0x105] = 0;
  pbVar7[0x106] = 0;
  pbVar7[0x107] = 0x80;
  pbVar7[0x230] = 0;
  pbVar7[0x231] = 0;
  pbVar7[0x232] = 0;
  pbVar7[0x233] = 0;
  pbVar7[0x234] = 0;
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_14337eaf0);
  pdb_1417e40e0(&uStack_108,&uStack_418);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0xe0,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xe0);
  }
  pbVar7[0] = 2;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[0xd8] = 0;
  pbVar7[0xd9] = 0;
  pbVar7[0xda] = 0;
  pbVar7[0xdb] = 0;
  pbVar7[0xdc] = 0;
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_143366d78);
  pdb_1417e40e0(&uStack_98,&uStack_418);
  uStack_418 = (undefined4)CONCAT71(uStack_107,uStack_108);
  uStack_414 = (uint)((uint7)uStack_107 >> 0x18);
  uStack_410 = (undefined4)uStack_100;
  uStack_40c = (uint)((ulonglong)uStack_100 >> 0x20);
  uStack_3f8 = uStack_e8;
  uStack_3f0 = uStack_e0;
  uStack_3e8 = uStack_d8;
  uStack_3d0 = (undefined4)uStack_c0;
  uStack_3cc = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  uStack_3c8 = (undefined4)uStack_b8;
  uStack_3c4 = (undefined4)((ulonglong)uStack_b8 >> 0x20);
  uStack_3c0 = uStack_b0;
  uStack_3b8 = uStack_a8;
  uStack_3b0 = uStack_a0;
  uStack_3a8 = uStack_98;
  uStack_3a0 = uStack_90;
  uStack_398 = uStack_88;
  uStack_390 = uStack_80;
  uStack_388 = uStack_78;
  uStack_380 = uStack_70;
  uStack_378 = uStack_68;
  uStack_370 = uStack_60;
  uStack_368 = uStack_58;
  uStack_360 = uStack_50;
  uStack_358 = uStack_48;
  uStack_350 = uStack_40;
  uStack_348 = uStack_38;
  uStack_340 = uStack_30;
  pdb_1417d6f90(auStack_488,&uStack_418);
  uStack_418 = 0;
  uStack_414 = 0x80000000;
  uStack_1b8 = (ulonglong)uStack_1b8._5_3_ << 0x28;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x268,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x268);
  }
  pub_142e32760(pbVar7,&uStack_418,0x268);
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_143050b10);
  pdb_1417e40e0(auStack_4f8,&uStack_418);
  uStack_418 = 2;
  uStack_414 = 0;
  uStack_258 = (ulonglong)uStack_258._5_3_ << 0x28;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x1d0,0x10);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x1d0);
  }
  pub_142e32760(pbVar7,&uStack_418,0x1d0);
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_14337f0d0);
  pdb_1417e40e0(&uStack_568,&uStack_418);
  uStack_3b0 = 0x8000000000000000;
  uStack_178 = (ulonglong)uStack_178._5_3_ << 0x28;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x2b0,0x10);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x2b0);
  }
  pub_142e32760(pbVar7,&uStack_418,0x2b0);
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_14337cab8);
  pdb_1417e40e0(&uStack_5d8,&uStack_418);
  uStack_418 = 0;
  uStack_414 = 0x80000000;
  uStack_2f8 = (ulonglong)uStack_2f8._5_3_ << 0x28;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x128,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x128);
  }
  pub_142e32760(pbVar7,&uStack_418,0x128);
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_14337f678);
  pdb_1417e40e0(&uStack_648,&uStack_418);
  uStack_418 = 0;
  uStack_414 = 0x80000000;
  uStack_2f8 = uStack_2f8 & 0xffffff0000000000;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x128,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x128);
  }
  pub_142e32760(pbVar7,&uStack_418,0x128);
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_143380548);
  pdb_1417e40e0(&uStack_6b8,&uStack_418);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x1b0,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x1b0);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[0x110] = 0;
  pbVar7[0x111] = 0;
  pbVar7[0x112] = 0;
  pbVar7[0x113] = 0;
  pbVar7[0x114] = 0;
  pbVar7[0x115] = 0;
  pbVar7[0x116] = 0;
  pbVar7[0x117] = 0x80;
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_143380bc8);
  pdb_1417e40e0(&uStack_728,&uStack_418);
  uStack_3b0 = 0x8000000000000000;
  uStack_418 = 0;
  uStack_414 = uStack_414 & 0xffffff00;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0xa0,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xa0);
  }
  pub_142e32760(pbVar7,&uStack_418,0xa0);
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_143381578);
  pdb_1417e40e0(&uStack_108,&uStack_418);
  uStack_328 = 0x8000000000000000;
  uStack_190 = (ulonglong)uStack_190._5_3_ << 0x28;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x290,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x290);
  }
  pub_142e32760(pbVar7,&uStack_418,0x290);
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_14306c208);
  pdb_1417e40e0(&uStack_98,&uStack_418);
  uStack_878 = uStack_728;
  uStack_870 = uStack_720;
  uStack_868 = uStack_718;
  uStack_860 = uStack_710;
  uStack_858 = uStack_708;
  uStack_850 = uStack_700;
  uStack_848 = uStack_6f8;
  uStack_840 = uStack_6f0;
  uStack_838 = uStack_6e8;
  uStack_830 = uStack_6e0;
  uStack_828 = uStack_6d8;
  uStack_820 = uStack_6d0;
  uStack_818 = uStack_6c8;
  uStack_810 = uStack_6c0;
  uStack_800 = uStack_100;
  uStack_7f8 = uStack_f8;
  uStack_7f0 = uStack_f0;
  uStack_7e8 = uStack_e8;
  uStack_7e0 = uStack_e0;
  uStack_7d8 = uStack_d8;
  uStack_7d0 = uStack_d0;
  uStack_7c8 = uStack_c8;
  uStack_7c0 = uStack_c0;
  uStack_7b8 = uStack_b8;
  uStack_7b0 = uStack_b0;
  uStack_7a8 = uStack_a8;
  uStack_7a0 = uStack_a0;
  uStack_738 = uStack_38;
  uStack_730 = uStack_30;
  uStack_748 = uStack_48;
  uStack_740 = uStack_40;
  uStack_758 = uStack_58;
  uStack_750 = uStack_50;
  uStack_768 = uStack_68;
  uStack_760 = uStack_60;
  uStack_778 = uStack_78;
  uStack_770 = uStack_70;
  uStack_788 = uStack_88;
  uStack_780 = uStack_80;
  uStack_798 = uStack_98;
  uStack_790 = uStack_90;
  pdb_1417e9040(&uStack_108,&uStack_878);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x78,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x78);
  }
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[0x68] = 2;
  pbVar7[0x69] = 0;
  pbVar7[0x6a] = 0;
  pbVar7[0x6b] = 0;
  pdb_140ed3cd0(&uStack_418,pbVar7,&UNK_143381c48);
  pdb_1417e40e0(&uStack_98,&uStack_418);
  uStack_418 = (undefined4)auStack_4f8._0_8_;
  uStack_414 = SUB84(auStack_4f8._0_8_,4);
  uStack_410 = (undefined4)auStack_4f8._8_8_;
  uStack_40c = SUB84(auStack_4f8._8_8_,4);
  uStack_3f8 = uStack_4d8;
  uStack_3f0 = uStack_4d0;
  uStack_3e8 = uStack_4c8;
  uStack_3d0 = (undefined4)uStack_4b0;
  uStack_3cc = (undefined4)((ulonglong)uStack_4b0 >> 0x20);
  uStack_3c8 = (undefined4)uStack_4a8;
  uStack_3c4 = (undefined4)((ulonglong)uStack_4a8 >> 0x20);
  uStack_3c0 = uStack_4a0;
  uStack_3b8 = uStack_498;
  uStack_3b0 = uStack_490;
  uStack_3a8 = uStack_568;
  uStack_3a0 = uStack_560;
  uStack_398 = uStack_558;
  uStack_390 = uStack_550;
  uStack_388 = uStack_548;
  uStack_380 = uStack_540;
  uStack_378 = uStack_538;
  uStack_370 = uStack_530;
  uStack_368 = uStack_528;
  uStack_360 = uStack_520;
  uStack_358 = uStack_518;
  uStack_350 = uStack_510;
  uStack_348 = uStack_508;
  uStack_340 = uStack_500;
  uStack_2d8 = uStack_578;
  uStack_2d0 = uStack_570;
  uStack_2e8 = uStack_588;
  uStack_2e0 = uStack_580;
  uStack_2f8 = uStack_598;
  uStack_2f0 = uStack_590;
  uStack_308 = uStack_5a8;
  uStack_300 = uStack_5a0;
  uStack_318 = uStack_5b8;
  uStack_310 = uStack_5b0;
  uStack_328 = uStack_5c8;
  uStack_320 = uStack_5c0;
  uStack_338 = uStack_5d8;
  uStack_330 = uStack_5d0;
  uStack_268 = uStack_5e8;
  uStack_260 = uStack_5e0;
  uStack_278 = uStack_5f8;
  uStack_270 = uStack_5f0;
  uStack_288 = uStack_608;
  uStack_280 = uStack_600;
  uStack_298 = uStack_618;
  uStack_290 = uStack_610;
  uStack_2a8 = uStack_628;
  uStack_2a0 = uStack_620;
  uStack_2b8 = uStack_638;
  uStack_2b0 = uStack_630;
  uStack_2c8 = uStack_648;
  uStack_2c0 = uStack_640;
  uStack_1f8 = uStack_658;
  uStack_1f0 = uStack_650;
  uStack_208 = uStack_668;
  uStack_200 = uStack_660;
  uStack_218 = uStack_678;
  uStack_210 = uStack_670;
  uStack_228 = uStack_688;
  uStack_220 = uStack_680;
  uStack_238 = uStack_698;
  uStack_230 = uStack_690;
  uStack_248 = uStack_6a8;
  uStack_240 = uStack_6a0;
  uStack_258 = uStack_6b8;
  uStack_250 = uStack_6b0;
  uStack_188 = uStack_a8;
  uStack_180 = uStack_a0;
  uStack_198 = uStack_b8;
  uStack_190 = uStack_b0;
  uStack_1a8 = uStack_c8;
  uStack_1a0 = uStack_c0;
  uStack_1b8 = uStack_d8;
  uStack_1b0 = uStack_d0;
  uStack_1c8 = uStack_e8;
  uStack_1c0 = uStack_e0;
  uStack_1d8 = uStack_f8;
  uStack_1d0 = uStack_f0;
  uStack_1e0 = uStack_100;
  uStack_118 = uStack_38;
  uStack_110 = uStack_30;
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
  pdb_1417e6370(&uStack_98,&uStack_418);
  uStack_418 = (undefined4)auStack_488._0_8_;
  uStack_414 = SUB84(auStack_488._0_8_,4);
  uStack_410 = (undefined4)auStack_488._8_8_;
  uStack_40c = SUB84(auStack_488._8_8_,4);
  uStack_3f8 = uStack_468;
  uStack_3f0 = uStack_460;
  uStack_3e8 = uStack_458;
  uStack_3d0 = (undefined4)uStack_440;
  uStack_3cc = (undefined4)((ulonglong)uStack_440 >> 0x20);
  uStack_3c8 = (undefined4)uStack_438;
  uStack_3c4 = (undefined4)((ulonglong)uStack_438 >> 0x20);
  uStack_3c0 = uStack_430;
  uStack_3b8 = uStack_428;
  uStack_3b0 = uStack_420;
  uStack_3a8 = uStack_98;
  uStack_3a0 = uStack_90;
  uStack_398 = uStack_88;
  uStack_390 = uStack_80;
  uStack_388 = uStack_78;
  uStack_380 = uStack_70;
  uStack_378 = uStack_68;
  uStack_370 = uStack_60;
  uStack_368 = uStack_58;
  uStack_360 = uStack_50;
  uStack_358 = uStack_48;
  uStack_350 = uStack_40;
  uStack_348 = uStack_38;
  uStack_340 = uStack_30;
  pdb_140c982c0(&uStack_98,&uStack_418);
  uStack_108 = 0x11;
  uVar8 = pdb_140950ee0(_DAT_143ca8dd0,&uStack_108,&UNK_14305af38);
  pdb_140676be0(&uStack_98,uVar8);
  uStack_3b8 = uStack_38;
  uStack_3b0 = uStack_30;
  uStack_3c8 = (undefined4)uStack_48;
  uStack_3c4 = (undefined4)((ulonglong)uStack_48 >> 0x20);
  uStack_3c0 = uStack_40;
  uStack_3d0 = (undefined4)uStack_50;
  uStack_3cc = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_3e8 = uStack_68;
  uStack_3f8 = uStack_78;
  uStack_3f0 = uStack_70;
  uStack_400 = uStack_80;
  auStack_408 = (undefined1  [8])uStack_88;
  uStack_418 = (undefined4)uStack_98;
  uStack_414 = (uint)((ulonglong)uStack_98 >> 0x20);
  uStack_410 = (undefined4)uStack_90;
  uStack_40c = (uint)((ulonglong)uStack_90 >> 0x20);
  pdb_1417e2600(&uStack_98,&uStack_418);
  pdb_140c95fe0(param_1,&uStack_98);
  uStack_418 = 0;
  uVar8 = pdb_1418fb900(param_1,&uStack_418);
  uStack_418 = 0;
  uStack_410 = 0;
  auStack_3e0 = (undefined1  [16])0x0;
  uStack_3d0 = 0;
  uStack_3e8._0_5_ = CONCAT14(2,(undefined4)uStack_3e8);
  auVar6._12_4_ = 0;
  auVar6._0_12_ = stack0xfffffffffffffbfc;
  _auStack_408 = auVar6 << 0x20;
  uStack_3cc = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uVar8 = pdb_1418fbe60(uVar8,&uStack_418);
  lVar9 = pdb_141913070(uVar8,0);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0xbee6379ca39881b8;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar23[0] = -(*pcVar1 == DAT_142e34e50);
      auVar23[1] = -(pcVar1[1] == DAT_142e34e50._1_1_);
      auVar23[2] = -(pcVar1[2] == DAT_142e34e50._2_1_);
      auVar23[3] = -(pcVar1[3] == DAT_142e34e50._3_1_);
      auVar23[4] = -(pcVar1[4] == DAT_142e34e50._4_1_);
      auVar23[5] = -(pcVar1[5] == DAT_142e34e50._5_1_);
      auVar23[6] = -(pcVar1[6] == DAT_142e34e50._6_1_);
      auVar23[7] = -(pcVar1[7] == DAT_142e34e50._7_1_);
      auVar23[8] = -(pcVar1[8] == DAT_142e34e50._8_1_);
      auVar23[9] = -(pcVar1[9] == DAT_142e34e50._9_1_);
      auVar23[10] = -(pcVar1[10] == DAT_142e34e50._10_1_);
      auVar23[0xb] = -(pcVar1[0xb] == DAT_142e34e50._11_1_);
      auVar23[0xc] = -(pcVar1[0xc] == DAT_142e34e50._12_1_);
      auVar23[0xd] = -(pcVar1[0xd] == DAT_142e34e50._13_1_);
      auVar23[0xe] = -(pcVar1[0xe] == DAT_142e34e50._14_1_);
      auVar23[0xf] = -(pcVar1[0xf] == DAT_142e34e50._15_1_);
      uVar13 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar24[0] = -(*pcVar2 == DAT_143022d60);
        auVar24[1] = -(pcVar2[1] == UNK_143022d61);
        auVar24[2] = -(pcVar2[2] == UNK_143022d62);
        auVar24[3] = -(pcVar2[3] == UNK_143022d63);
        auVar24[4] = -(pcVar2[4] == UNK_143022d64);
        auVar24[5] = -(pcVar2[5] == UNK_143022d65);
        auVar24[6] = -(pcVar2[6] == UNK_143022d66);
        auVar24[7] = -(pcVar2[7] == UNK_143022d67);
        auVar24[8] = -(pcVar2[8] == UNK_143022d68);
        auVar24[9] = -(pcVar2[9] == UNK_143022d69);
        auVar24[10] = -(pcVar2[10] == UNK_143022d6a);
        auVar24[0xb] = -(pcVar2[0xb] == UNK_143022d6b);
        auVar24[0xc] = -(pcVar2[0xc] == UNK_143022d6c);
        auVar24[0xd] = -(pcVar2[0xd] == UNK_143022d6d);
        auVar24[0xe] = -(pcVar2[0xe] == UNK_143022d6e);
        auVar24[0xf] = -(pcVar2[0xf] == UNK_143022d6f);
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
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140947332;
          goto LAB_140947348;
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
LAB_140947332:
  pdb_1418e7ff0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140947348:
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0x3784110e8208c2c6;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar25[0] = -(*pcVar1 == DAT_142e33c30);
      auVar25[1] = -(pcVar1[1] == DAT_142e33c30._1_1_);
      auVar25[2] = -(pcVar1[2] == DAT_142e33c30._2_1_);
      auVar25[3] = -(pcVar1[3] == DAT_142e33c30._3_1_);
      auVar25[4] = -(pcVar1[4] == DAT_142e33c30._4_1_);
      auVar25[5] = -(pcVar1[5] == DAT_142e33c30._5_1_);
      auVar25[6] = -(pcVar1[6] == DAT_142e33c30._6_1_);
      auVar25[7] = -(pcVar1[7] == DAT_142e33c30._7_1_);
      auVar25[8] = -(pcVar1[8] == DAT_142e33c30._8_1_);
      auVar25[9] = -(pcVar1[9] == DAT_142e33c30._9_1_);
      auVar25[10] = -(pcVar1[10] == DAT_142e33c30._10_1_);
      auVar25[0xb] = -(pcVar1[0xb] == DAT_142e33c30._11_1_);
      auVar25[0xc] = -(pcVar1[0xc] == DAT_142e33c30._12_1_);
      auVar25[0xd] = -(pcVar1[0xd] == DAT_142e33c30._13_1_);
      auVar25[0xe] = -(pcVar1[0xe] == DAT_142e33c30._14_1_);
      auVar25[0xf] = -(pcVar1[0xf] == DAT_142e33c30._15_1_);
      uVar13 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_143022d70);
        auVar26[1] = -(pcVar2[1] == UNK_143022d71);
        auVar26[2] = -(pcVar2[2] == UNK_143022d72);
        auVar26[3] = -(pcVar2[3] == UNK_143022d73);
        auVar26[4] = -(pcVar2[4] == UNK_143022d74);
        auVar26[5] = -(pcVar2[5] == UNK_143022d75);
        auVar26[6] = -(pcVar2[6] == UNK_143022d76);
        auVar26[7] = -(pcVar2[7] == UNK_143022d77);
        auVar26[8] = -(pcVar2[8] == UNK_143022d78);
        auVar26[9] = -(pcVar2[9] == UNK_143022d79);
        auVar26[10] = -(pcVar2[10] == UNK_143022d7a);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_143022d7b);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_143022d7c);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_143022d7d);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_143022d7e);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_143022d7f);
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
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140947422;
          goto LAB_140947438;
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
LAB_140947422:
  pdb_1418e61f0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140947438:
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0xc4a7e25a9522dbb9;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar27[0] = -(*pcVar1 == DAT_142e34310);
      auVar27[1] = -(pcVar1[1] == DAT_142e34310._1_1_);
      auVar27[2] = -(pcVar1[2] == DAT_142e34310._2_1_);
      auVar27[3] = -(pcVar1[3] == DAT_142e34310._3_1_);
      auVar27[4] = -(pcVar1[4] == DAT_142e34310._4_1_);
      auVar27[5] = -(pcVar1[5] == DAT_142e34310._5_1_);
      auVar27[6] = -(pcVar1[6] == DAT_142e34310._6_1_);
      auVar27[7] = -(pcVar1[7] == DAT_142e34310._7_1_);
      auVar27[8] = -(pcVar1[8] == DAT_142e34310._8_1_);
      auVar27[9] = -(pcVar1[9] == DAT_142e34310._9_1_);
      auVar27[10] = -(pcVar1[10] == DAT_142e34310._10_1_);
      auVar27[0xb] = -(pcVar1[0xb] == DAT_142e34310._11_1_);
      auVar27[0xc] = -(pcVar1[0xc] == DAT_142e34310._12_1_);
      auVar27[0xd] = -(pcVar1[0xd] == DAT_142e34310._13_1_);
      auVar27[0xe] = -(pcVar1[0xe] == DAT_142e34310._14_1_);
      auVar27[0xf] = -(pcVar1[0xf] == DAT_142e34310._15_1_);
      uVar13 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar28[0] = -(*pcVar2 == DAT_143022d80);
        auVar28[1] = -(pcVar2[1] == UNK_143022d81);
        auVar28[2] = -(pcVar2[2] == UNK_143022d82);
        auVar28[3] = -(pcVar2[3] == UNK_143022d83);
        auVar28[4] = -(pcVar2[4] == UNK_143022d84);
        auVar28[5] = -(pcVar2[5] == UNK_143022d85);
        auVar28[6] = -(pcVar2[6] == UNK_143022d86);
        auVar28[7] = -(pcVar2[7] == UNK_143022d87);
        auVar28[8] = -(pcVar2[8] == UNK_143022d88);
        auVar28[9] = -(pcVar2[9] == UNK_143022d89);
        auVar28[10] = -(pcVar2[10] == UNK_143022d8a);
        auVar28[0xb] = -(pcVar2[0xb] == UNK_143022d8b);
        auVar28[0xc] = -(pcVar2[0xc] == UNK_143022d8c);
        auVar28[0xd] = -(pcVar2[0xd] == UNK_143022d8d);
        auVar28[0xe] = -(pcVar2[0xe] == UNK_143022d8e);
        auVar28[0xf] = -(pcVar2[0xf] == UNK_143022d8f);
        if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                    (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140947512;
          goto LAB_140947528;
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
LAB_140947512:
  pdb_1418d3600(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140947528:
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0x195d5d952fe6494c;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar29[0] = -(*pcVar1 == DAT_142e34620);
      auVar29[1] = -(pcVar1[1] == DAT_142e34620._1_1_);
      auVar29[2] = -(pcVar1[2] == DAT_142e34620._2_1_);
      auVar29[3] = -(pcVar1[3] == DAT_142e34620._3_1_);
      auVar29[4] = -(pcVar1[4] == DAT_142e34620._4_1_);
      auVar29[5] = -(pcVar1[5] == DAT_142e34620._5_1_);
      auVar29[6] = -(pcVar1[6] == DAT_142e34620._6_1_);
      auVar29[7] = -(pcVar1[7] == DAT_142e34620._7_1_);
      auVar29[8] = -(pcVar1[8] == DAT_142e34620._8_1_);
      auVar29[9] = -(pcVar1[9] == DAT_142e34620._9_1_);
      auVar29[10] = -(pcVar1[10] == DAT_142e34620._10_1_);
      auVar29[0xb] = -(pcVar1[0xb] == DAT_142e34620._11_1_);
      auVar29[0xc] = -(pcVar1[0xc] == DAT_142e34620._12_1_);
      auVar29[0xd] = -(pcVar1[0xd] == DAT_142e34620._13_1_);
      auVar29[0xe] = -(pcVar1[0xe] == DAT_142e34620._14_1_);
      auVar29[0xf] = -(pcVar1[0xf] == DAT_142e34620._15_1_);
      uVar13 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar30[0] = -(*pcVar2 == DAT_143022d90);
        auVar30[1] = -(pcVar2[1] == UNK_143022d91);
        auVar30[2] = -(pcVar2[2] == UNK_143022d92);
        auVar30[3] = -(pcVar2[3] == UNK_143022d93);
        auVar30[4] = -(pcVar2[4] == UNK_143022d94);
        auVar30[5] = -(pcVar2[5] == UNK_143022d95);
        auVar30[6] = -(pcVar2[6] == UNK_143022d96);
        auVar30[7] = -(pcVar2[7] == UNK_143022d97);
        auVar30[8] = -(pcVar2[8] == UNK_143022d98);
        auVar30[9] = -(pcVar2[9] == UNK_143022d99);
        auVar30[10] = -(pcVar2[10] == UNK_143022d9a);
        auVar30[0xb] = -(pcVar2[0xb] == UNK_143022d9b);
        auVar30[0xc] = -(pcVar2[0xc] == UNK_143022d9c);
        auVar30[0xd] = -(pcVar2[0xd] == UNK_143022d9d);
        auVar30[0xe] = -(pcVar2[0xe] == UNK_143022d9e);
        auVar30[0xf] = -(pcVar2[0xf] == UNK_143022d9f);
        if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_140947602;
          goto LAB_140947618;
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
LAB_140947602:
  pdb_1418e8bf0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140947618:
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0x51364738effe202a;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar31[0] = -(*pcVar1 == DAT_142e347b0);
      auVar31[1] = -(pcVar1[1] == DAT_142e347b0._1_1_);
      auVar31[2] = -(pcVar1[2] == DAT_142e347b0._2_1_);
      auVar31[3] = -(pcVar1[3] == DAT_142e347b0._3_1_);
      auVar31[4] = -(pcVar1[4] == DAT_142e347b0._4_1_);
      auVar31[5] = -(pcVar1[5] == DAT_142e347b0._5_1_);
      auVar31[6] = -(pcVar1[6] == DAT_142e347b0._6_1_);
      auVar31[7] = -(pcVar1[7] == DAT_142e347b0._7_1_);
      auVar31[8] = -(pcVar1[8] == DAT_142e347b0._8_1_);
      auVar31[9] = -(pcVar1[9] == DAT_142e347b0._9_1_);
      auVar31[10] = -(pcVar1[10] == DAT_142e347b0._10_1_);
      auVar31[0xb] = -(pcVar1[0xb] == DAT_142e347b0._11_1_);
      auVar31[0xc] = -(pcVar1[0xc] == DAT_142e347b0._12_1_);
      auVar31[0xd] = -(pcVar1[0xd] == DAT_142e347b0._13_1_);
      auVar31[0xe] = -(pcVar1[0xe] == DAT_142e347b0._14_1_);
      auVar31[0xf] = -(pcVar1[0xf] == DAT_142e347b0._15_1_);
      uVar13 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar32[0] = -(*pcVar2 == DAT_143022da0);
        auVar32[1] = -(pcVar2[1] == UNK_143022da1);
        auVar32[2] = -(pcVar2[2] == UNK_143022da2);
        auVar32[3] = -(pcVar2[3] == UNK_143022da3);
        auVar32[4] = -(pcVar2[4] == UNK_143022da4);
        auVar32[5] = -(pcVar2[5] == UNK_143022da5);
        auVar32[6] = -(pcVar2[6] == UNK_143022da6);
        auVar32[7] = -(pcVar2[7] == UNK_143022da7);
        auVar32[8] = -(pcVar2[8] == UNK_143022da8);
        auVar32[9] = -(pcVar2[9] == UNK_143022da9);
        auVar32[10] = -(pcVar2[10] == UNK_143022daa);
        auVar32[0xb] = -(pcVar2[0xb] == UNK_143022dab);
        auVar32[0xc] = -(pcVar2[0xc] == UNK_143022dac);
        auVar32[0xd] = -(pcVar2[0xd] == UNK_143022dad);
        auVar32[0xe] = -(pcVar2[0xe] == UNK_143022dae);
        auVar32[0xf] = -(pcVar2[0xf] == UNK_143022daf);
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_1409476f2;
          goto LAB_140947708;
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
LAB_1409476f2:
  pdb_1418de9f0(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_140947708:
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0xa0f91762c34e09c0;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar33[0] = -(*pcVar1 == DAT_142e639d0);
      auVar33[1] = -(pcVar1[1] == DAT_142e639d0._1_1_);
      auVar33[2] = -(pcVar1[2] == DAT_142e639d0._2_1_);
      auVar33[3] = -(pcVar1[3] == DAT_142e639d0._3_1_);
      auVar33[4] = -(pcVar1[4] == DAT_142e639d0._4_1_);
      auVar33[5] = -(pcVar1[5] == DAT_142e639d0._5_1_);
      auVar33[6] = -(pcVar1[6] == DAT_142e639d0._6_1_);
      auVar33[7] = -(pcVar1[7] == DAT_142e639d0._7_1_);
      auVar33[8] = -(pcVar1[8] == DAT_142e639d0._8_1_);
      auVar33[9] = -(pcVar1[9] == DAT_142e639d0._9_1_);
      auVar33[10] = -(pcVar1[10] == DAT_142e639d0._10_1_);
      auVar33[0xb] = -(pcVar1[0xb] == DAT_142e639d0._11_1_);
      auVar33[0xc] = -(pcVar1[0xc] == DAT_142e639d0._12_1_);
      auVar33[0xd] = -(pcVar1[0xd] == DAT_142e639d0._13_1_);
      auVar33[0xe] = -(pcVar1[0xe] == DAT_142e639d0._14_1_);
      auVar33[0xf] = -(pcVar1[0xf] == DAT_142e639d0._15_1_);
      uVar13 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar34[0] = -(*pcVar2 == DAT_143022db0);
        auVar34[1] = -(pcVar2[1] == UNK_143022db1);
        auVar34[2] = -(pcVar2[2] == UNK_143022db2);
        auVar34[3] = -(pcVar2[3] == UNK_143022db3);
        auVar34[4] = -(pcVar2[4] == UNK_143022db4);
        auVar34[5] = -(pcVar2[5] == UNK_143022db5);
        auVar34[6] = -(pcVar2[6] == UNK_143022db6);
        auVar34[7] = -(pcVar2[7] == UNK_143022db7);
        auVar34[8] = -(pcVar2[8] == UNK_143022db8);
        auVar34[9] = -(pcVar2[9] == UNK_143022db9);
        auVar34[10] = -(pcVar2[10] == UNK_143022dba);
        auVar34[0xb] = -(pcVar2[0xb] == UNK_143022dbb);
        auVar34[0xc] = -(pcVar2[0xc] == UNK_143022dbc);
        auVar34[0xd] = -(pcVar2[0xd] == UNK_143022dbd);
        auVar34[0xe] = -(pcVar2[0xe] == UNK_143022dbe);
        auVar34[0xf] = -(pcVar2[0xf] == UNK_143022dbf);
        if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_1409477e2;
          goto LAB_1409477f8;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_1409477e2:
  pdb_1418dae00(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1409477f8:
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0x1ab978da9f34cafd;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar35[0] = -(*pcVar1 == DAT_142e342f0);
      auVar35[1] = -(pcVar1[1] == DAT_142e342f0._1_1_);
      auVar35[2] = -(pcVar1[2] == DAT_142e342f0._2_1_);
      auVar35[3] = -(pcVar1[3] == DAT_142e342f0._3_1_);
      auVar35[4] = -(pcVar1[4] == DAT_142e342f0._4_1_);
      auVar35[5] = -(pcVar1[5] == DAT_142e342f0._5_1_);
      auVar35[6] = -(pcVar1[6] == DAT_142e342f0._6_1_);
      auVar35[7] = -(pcVar1[7] == DAT_142e342f0._7_1_);
      auVar35[8] = -(pcVar1[8] == DAT_142e342f0._8_1_);
      auVar35[9] = -(pcVar1[9] == DAT_142e342f0._9_1_);
      auVar35[10] = -(pcVar1[10] == DAT_142e342f0._10_1_);
      auVar35[0xb] = -(pcVar1[0xb] == DAT_142e342f0._11_1_);
      auVar35[0xc] = -(pcVar1[0xc] == DAT_142e342f0._12_1_);
      auVar35[0xd] = -(pcVar1[0xd] == DAT_142e342f0._13_1_);
      auVar35[0xe] = -(pcVar1[0xe] == DAT_142e342f0._14_1_);
      auVar35[0xf] = -(pcVar1[0xf] == DAT_142e342f0._15_1_);
      uVar13 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar36[0] = -(*pcVar2 == DAT_143022dc0);
        auVar36[1] = -(pcVar2[1] == UNK_143022dc1);
        auVar36[2] = -(pcVar2[2] == UNK_143022dc2);
        auVar36[3] = -(pcVar2[3] == UNK_143022dc3);
        auVar36[4] = -(pcVar2[4] == UNK_143022dc4);
        auVar36[5] = -(pcVar2[5] == UNK_143022dc5);
        auVar36[6] = -(pcVar2[6] == UNK_143022dc6);
        auVar36[7] = -(pcVar2[7] == UNK_143022dc7);
        auVar36[8] = -(pcVar2[8] == UNK_143022dc8);
        auVar36[9] = -(pcVar2[9] == UNK_143022dc9);
        auVar36[10] = -(pcVar2[10] == UNK_143022dca);
        auVar36[0xb] = -(pcVar2[0xb] == UNK_143022dcb);
        auVar36[0xc] = -(pcVar2[0xc] == UNK_143022dcc);
        auVar36[0xd] = -(pcVar2[0xd] == UNK_143022dcd);
        auVar36[0xe] = -(pcVar2[0xe] == UNK_143022dce);
        auVar36[0xf] = -(pcVar2[0xf] == UNK_143022dcf);
        if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_1409478d2;
          goto LAB_1409478e8;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
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
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_1409478d2:
  pdb_1418d9000(lVar9);
  if (*(longlong *)(lVar9 + 0x88) != 0) {
LAB_1409478e8:
    lVar3 = *(longlong *)(lVar9 + 0x70);
    uVar10 = 0x961d57ee90b220e7;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar9 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar10);
      auVar37[0] = -(*pcVar1 == DAT_142e34530);
      auVar37[1] = -(pcVar1[1] == DAT_142e34530._1_1_);
      auVar37[2] = -(pcVar1[2] == DAT_142e34530._2_1_);
      auVar37[3] = -(pcVar1[3] == DAT_142e34530._3_1_);
      auVar37[4] = -(pcVar1[4] == DAT_142e34530._4_1_);
      auVar37[5] = -(pcVar1[5] == DAT_142e34530._5_1_);
      auVar37[6] = -(pcVar1[6] == DAT_142e34530._6_1_);
      auVar37[7] = -(pcVar1[7] == DAT_142e34530._7_1_);
      auVar37[8] = -(pcVar1[8] == DAT_142e34530._8_1_);
      auVar37[9] = -(pcVar1[9] == DAT_142e34530._9_1_);
      auVar37[10] = -(pcVar1[10] == DAT_142e34530._10_1_);
      auVar37[0xb] = -(pcVar1[0xb] == DAT_142e34530._11_1_);
      auVar37[0xc] = -(pcVar1[0xc] == DAT_142e34530._12_1_);
      auVar37[0xd] = -(pcVar1[0xd] == DAT_142e34530._13_1_);
      auVar37[0xe] = -(pcVar1[0xe] == DAT_142e34530._14_1_);
      auVar37[0xf] = -(pcVar1[0xf] == DAT_142e34530._15_1_);
      uVar13 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar10 & *(ulonglong *)(lVar9 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar14 * -0x18);
        auVar38[0] = -(*pcVar2 == DAT_143022dd0);
        auVar38[1] = -(pcVar2[1] == UNK_143022dd1);
        auVar38[2] = -(pcVar2[2] == UNK_143022dd2);
        auVar38[3] = -(pcVar2[3] == UNK_143022dd3);
        auVar38[4] = -(pcVar2[4] == UNK_143022dd4);
        auVar38[5] = -(pcVar2[5] == UNK_143022dd5);
        auVar38[6] = -(pcVar2[6] == UNK_143022dd6);
        auVar38[7] = -(pcVar2[7] == UNK_143022dd7);
        auVar38[8] = -(pcVar2[8] == UNK_143022dd8);
        auVar38[9] = -(pcVar2[9] == UNK_143022dd9);
        auVar38[10] = -(pcVar2[10] == UNK_143022dda);
        auVar38[0xb] = -(pcVar2[0xb] == UNK_143022ddb);
        auVar38[0xc] = -(pcVar2[0xc] == UNK_143022ddc);
        auVar38[0xd] = -(pcVar2[0xd] == UNK_143022ddd);
        auVar38[0xe] = -(pcVar2[0xe] == UNK_143022dde);
        auVar38[0xf] = -(pcVar2[0xf] == UNK_143022ddf);
        if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar3 + uVar14 * -0x18 + -8);
          if (((*(ulonglong *)(lVar9 + 0x210) <= uVar10) ||
              (uVar10 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar10 * 8), uVar10 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + ~uVar10 * 0x40) == 0))
          goto LAB_1409479c2;
          goto LAB_1409479ca;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_1409479c2:
  pdb_1418dba00(lVar9);
LAB_1409479ca:
  auStack_3e0[0] = 2;
  uVar8 = pdb_1418f3f00(lVar9,&uStack_418);
  uStack_418 = 0;
  uStack_414 = 0x80000000;
  uVar8 = pdb_141910280(uVar8,&uStack_418);
  _auStack_408 = ZEXT416(_DAT_142e36f28);
  uStack_3f8 = _DAT_142e37910;
  uStack_3f0 = uStack_3f0 & 0xffffffff00000000;
  uStack_418 = 0;
  uVar8 = pdb_1418f6600(uVar8,&uStack_418);
  uStack_400 = _UNK_143022de8;
  auStack_408 = (undefined1  [8])_DAT_143022de0;
  uStack_3f8 = uStack_3f8 & 0xffffffff00000000;
  uStack_418 = 0;
  uVar8 = pdb_141902f00(uVar8,&uStack_418);
  uStack_410 = 0;
  uStack_40c = uStack_40c & 0xffffff00;
  uStack_418 = 0;
  uStack_414 = 0;
  uVar8 = pdb_141914600(uVar8,&uStack_418);
  uStack_410 = 0;
  uStack_40c = 0;
  uStack_418 = 0;
  pdb_141907cd0(uVar8,&uStack_418);
  return;
}

