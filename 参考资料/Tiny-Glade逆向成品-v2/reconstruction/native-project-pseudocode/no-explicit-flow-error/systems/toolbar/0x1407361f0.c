// VA 0x1407361f0, PDB extent 4174 bytes
// toolbar::menu::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mod.rs
   Extent: 4174 */

void pdb_1407361f0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
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
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
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
  undefined1 auStack_5e8 [8];
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
  uStack_578 = 2;
  uVar6 = pdb_1411a7740(param_2,&uStack_578);
  uStack_578 = 0xc;
  uVar6 = pdb_1411a7d00(uVar6,&uStack_578);
  uStack_578 = 0xc;
  uVar6 = pdb_1411a6640(uVar6,&uStack_578);
  uVar6 = pdb_1411a8880(uVar6,0);
  uVar6 = pdb_1411a6c00(uVar6,1);
  lVar7 = pdb_1411a5b70(uVar6,1);
  uStack_578 = 0x8000000000000000;
  uStack_4c8 = (ulonglong)uStack_4c8._5_3_ << 0x28;
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0xb8,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xb8);
  }
  pub_142e32760(pbVar8,&uStack_578,0xb8);
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432aa978);
  pdb_1411acdf0(&uStack_658,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x70,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x70);
  }
  pbVar8[0] = 1;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0x80;
  pbVar8[0x68] = 0;
  pbVar8[0x69] = 0;
  pbVar8[0x6a] = 0;
  pbVar8[0x6b] = 0;
  pbVar8[0x6c] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432aad68);
  pdb_1411acdf0(&uStack_6c8,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x1d0,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x1d0);
  }
  pbVar8[0] = 0xc;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x1c8] = 0;
  pbVar8[0x1c9] = 0;
  pbVar8[0x1ca] = 0;
  pbVar8[0x1cb] = 0;
  pbVar8[0x1cc] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ab1a8);
  pdb_1411acdf0(&uStack_738,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x110,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x110);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0x80;
  pbVar8[0x108] = 0;
  pbVar8[0x109] = 0;
  pbVar8[0x10a] = 0;
  pbVar8[0x10b] = 0;
  pbVar8[0x10c] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ab588);
  pdb_1411acdf0(&uStack_7a8,&uStack_578,1);
  uStack_578 = 0x8000000000000003;
  uStack_4c0 = (ulonglong)uStack_4c0._5_3_ << 0x28;
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0xc0,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xc0);
  }
  pub_142e32760(pbVar8,&uStack_578,0xc0);
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ab968);
  pdb_1411acdf0(&uStack_818,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x68,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x68);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x60] = 0;
  pbVar8[0x61] = 0;
  pbVar8[0x62] = 0;
  pbVar8[99] = 0;
  pbVar8[100] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432abe18);
  pdb_1411acdf0(&uStack_888,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x58,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x58);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x50] = 0;
  pbVar8[0x51] = 0;
  pbVar8[0x52] = 0;
  pbVar8[0x53] = 0;
  pbVar8[0x54] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ac1f8);
  pdb_1411acdf0(&uStack_8f8,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x68,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x68);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x60] = 0;
  pbVar8[0x61] = 0;
  pbVar8[0x62] = 0;
  pbVar8[99] = 0;
  pbVar8[100] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ac5e8);
  pdb_1411acdf0(&uStack_968,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x30,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pbVar8[8] = 2;
  pbVar8[0x28] = 0;
  pbVar8[0x29] = 0;
  pbVar8[0x2a] = 0;
  pbVar8[0x2b] = 0;
  pbVar8[0x2c] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ac9c8);
  pdb_1411acdf0(&uStack_9d8,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x58,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x58);
  }
  pbVar8[0] = 2;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x50] = 0;
  pbVar8[0x51] = 0;
  pbVar8[0x52] = 0;
  pbVar8[0x53] = 0;
  pbVar8[0x54] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432acda8);
  pdb_1411acdf0(auStack_5e8,&uStack_578,1);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x40,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x40);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[0x38] = 1;
  pbVar8[0x39] = 0xca;
  pbVar8[0x3a] = 0x9a;
  pbVar8[0x3b] = 0x3b;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ad188);
  pdb_1411acdf0(&uStack_a0,&uStack_578,1);
  uStack_578 = uStack_658;
  uStack_570 = uStack_650;
  uStack_568 = uStack_648;
  uStack_560 = uStack_640;
  uStack_558 = uStack_638;
  uStack_550 = uStack_630;
  uStack_548 = uStack_628;
  uStack_540 = uStack_620;
  uStack_538 = uStack_618;
  uStack_530 = uStack_610;
  uStack_528 = uStack_608;
  uStack_520 = uStack_600;
  uStack_518 = uStack_5f8;
  uStack_510 = uStack_5f0;
  uStack_508 = uStack_6c8;
  uStack_500 = uStack_6c0;
  uStack_4f8 = uStack_6b8;
  uStack_4f0 = uStack_6b0;
  uStack_4e8 = uStack_6a8;
  uStack_4e0 = uStack_6a0;
  uStack_4d8 = uStack_698;
  uStack_4d0 = uStack_690;
  uStack_4c8 = uStack_688;
  uStack_4c0 = uStack_680;
  uStack_4b8 = uStack_678;
  uStack_4b0 = uStack_670;
  uStack_4a8 = uStack_668;
  uStack_4a0 = uStack_660;
  uStack_438 = uStack_6d8;
  uStack_430 = uStack_6d0;
  uStack_448 = uStack_6e8;
  uStack_440 = uStack_6e0;
  uStack_458 = uStack_6f8;
  uStack_450 = uStack_6f0;
  uStack_468 = uStack_708;
  uStack_460 = uStack_700;
  uStack_478 = uStack_718;
  uStack_470 = uStack_710;
  uStack_488 = uStack_728;
  uStack_480 = uStack_720;
  uStack_498 = uStack_738;
  uStack_490 = uStack_730;
  uStack_428 = uStack_7a8;
  uStack_420 = uStack_7a0;
  uStack_418 = uStack_798;
  uStack_410 = uStack_790;
  uStack_408 = uStack_788;
  uStack_400 = uStack_780;
  uStack_3f8 = uStack_778;
  uStack_3f0 = uStack_770;
  uStack_3e8 = uStack_768;
  uStack_3e0 = uStack_760;
  uStack_3d8 = uStack_758;
  uStack_3d0 = uStack_750;
  uStack_3c8 = uStack_748;
  uStack_3c0 = uStack_740;
  uStack_358 = uStack_7b8;
  uStack_350 = uStack_7b0;
  uStack_368 = uStack_7c8;
  uStack_360 = uStack_7c0;
  uStack_378 = uStack_7d8;
  uStack_370 = uStack_7d0;
  uStack_388 = uStack_7e8;
  uStack_380 = uStack_7e0;
  uStack_398 = uStack_7f8;
  uStack_390 = uStack_7f0;
  uStack_3a8 = uStack_808;
  uStack_3a0 = uStack_800;
  uStack_3b8 = uStack_818;
  uStack_3b0 = uStack_810;
  uStack_2e8 = uStack_828;
  uStack_2e0 = uStack_820;
  uStack_2f8 = uStack_838;
  uStack_2f0 = uStack_830;
  uStack_308 = uStack_848;
  uStack_300 = uStack_840;
  uStack_318 = uStack_858;
  uStack_310 = uStack_850;
  uStack_328 = uStack_868;
  uStack_320 = uStack_860;
  uStack_338 = uStack_878;
  uStack_330 = uStack_870;
  uStack_348 = uStack_888;
  uStack_340 = uStack_880;
  uStack_278 = uStack_898;
  uStack_270 = uStack_890;
  uStack_288 = uStack_8a8;
  uStack_280 = uStack_8a0;
  uStack_298 = uStack_8b8;
  uStack_290 = uStack_8b0;
  uStack_2a8 = uStack_8c8;
  uStack_2a0 = uStack_8c0;
  uStack_2b8 = uStack_8d8;
  uStack_2b0 = uStack_8d0;
  uStack_2c8 = uStack_8e8;
  uStack_2c0 = uStack_8e0;
  uStack_2d8 = uStack_8f8;
  uStack_2d0 = uStack_8f0;
  uStack_208 = uStack_908;
  uStack_200 = uStack_900;
  uStack_218 = uStack_918;
  uStack_210 = uStack_910;
  uStack_228 = uStack_928;
  uStack_220 = uStack_920;
  uStack_238 = uStack_938;
  uStack_230 = uStack_930;
  uStack_248 = uStack_948;
  uStack_240 = uStack_940;
  uStack_258 = uStack_958;
  uStack_250 = uStack_950;
  uStack_268 = uStack_968;
  uStack_260 = uStack_960;
  uStack_198 = uStack_978;
  uStack_190 = uStack_970;
  uStack_1a8 = uStack_988;
  uStack_1a0 = uStack_980;
  uStack_1b8 = uStack_998;
  uStack_1b0 = uStack_990;
  uStack_1c8 = uStack_9a8;
  uStack_1c0 = uStack_9a0;
  uStack_1d8 = uStack_9b8;
  uStack_1d0 = uStack_9b0;
  uStack_1e8 = uStack_9c8;
  uStack_1e0 = uStack_9c0;
  uStack_1f8 = uStack_9d8;
  uStack_1f0 = uStack_9d0;
  uStack_128 = uStack_588;
  uStack_120 = uStack_580;
  uStack_138 = uStack_598;
  uStack_130 = uStack_590;
  uStack_148 = uStack_5a8;
  uStack_140 = uStack_5a0;
  uStack_158 = uStack_5b8;
  uStack_150 = uStack_5b0;
  uStack_168 = uStack_5c8;
  uStack_160 = uStack_5c0;
  uStack_178 = uStack_5d8;
  uStack_170 = uStack_5d0;
  uStack_180 = uStack_5e0;
  uStack_b8 = uStack_40;
  uStack_b0 = uStack_38;
  uStack_c8 = uStack_50;
  uStack_c0 = uStack_48;
  uStack_d8 = uStack_60;
  uStack_d0 = uStack_58;
  uStack_e8 = uStack_70;
  uStack_e0 = uStack_68;
  uStack_f8 = uStack_80;
  uStack_f0 = uStack_78;
  uStack_108 = uStack_90;
  uStack_100 = uStack_88;
  uStack_118 = uStack_a0;
  uStack_110 = uStack_98;
  pdb_1411ad000(&uStack_a0,&uStack_578,0x24,&UNK_142fa7178);
  pdb_1411a9300(lVar7,&uStack_a0);
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x48,8);
  if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x48);
  }
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x40] = 0;
  pbVar8[0x41] = 0;
  pbVar8[0x42] = 0;
  pbVar8[0x43] = 0;
  pbVar8[0x44] = 0;
  pdb_140ed3cd0(&uStack_578,pbVar8,&UNK_1432ad548);
  pdb_1411acc10(&uStack_a0,&uStack_578);
  auStack_5e8[0] = 10;
  uVar6 = pdb_1411ac1a0(_DAT_143ca8dd0,auStack_5e8,&UNK_1432a7688);
  pdb_140676be0(&uStack_a0,uVar6);
  uStack_518 = uStack_40;
  uStack_510 = uStack_38;
  uStack_528 = uStack_50;
  uStack_520 = uStack_48;
  uStack_538 = uStack_60;
  uStack_530 = uStack_58;
  uStack_548 = uStack_70;
  uStack_540 = uStack_68;
  uStack_558 = uStack_80;
  uStack_550 = uStack_78;
  uStack_568 = uStack_90;
  uStack_560 = uStack_88;
  uStack_578 = uStack_a0;
  uStack_570 = uStack_98;
  pdb_1411a9300(lVar7,&uStack_578);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0xb49a0622b05d9ad4;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar17[0] = -(*pcVar1 == DAT_142e34990);
      auVar17[1] = -(pcVar1[1] == DAT_142e34990._1_1_);
      auVar17[2] = -(pcVar1[2] == DAT_142e34990._2_1_);
      auVar17[3] = -(pcVar1[3] == DAT_142e34990._3_1_);
      auVar17[4] = -(pcVar1[4] == DAT_142e34990._4_1_);
      auVar17[5] = -(pcVar1[5] == DAT_142e34990._5_1_);
      auVar17[6] = -(pcVar1[6] == DAT_142e34990._6_1_);
      auVar17[7] = -(pcVar1[7] == DAT_142e34990._7_1_);
      auVar17[8] = -(pcVar1[8] == DAT_142e34990._8_1_);
      auVar17[9] = -(pcVar1[9] == DAT_142e34990._9_1_);
      auVar17[10] = -(pcVar1[10] == DAT_142e34990._10_1_);
      auVar17[0xb] = -(pcVar1[0xb] == DAT_142e34990._11_1_);
      auVar17[0xc] = -(pcVar1[0xc] == DAT_142e34990._12_1_);
      auVar17[0xd] = -(pcVar1[0xd] == DAT_142e34990._13_1_);
      auVar17[0xe] = -(pcVar1[0xe] == DAT_142e34990._14_1_);
      auVar17[0xf] = -(pcVar1[0xf] == DAT_142e34990._15_1_);
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
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar18[0] = -(*pcVar2 == DAT_142fa7120);
        auVar18[1] = -(pcVar2[1] == UNK_142fa7121);
        auVar18[2] = -(pcVar2[2] == UNK_142fa7122);
        auVar18[3] = -(pcVar2[3] == UNK_142fa7123);
        auVar18[4] = -(pcVar2[4] == UNK_142fa7124);
        auVar18[5] = -(pcVar2[5] == UNK_142fa7125);
        auVar18[6] = -(pcVar2[6] == UNK_142fa7126);
        auVar18[7] = -(pcVar2[7] == UNK_142fa7127);
        auVar18[8] = -(pcVar2[8] == UNK_142fa7128);
        auVar18[9] = -(pcVar2[9] == UNK_142fa7129);
        auVar18[10] = -(pcVar2[10] == UNK_142fa712a);
        auVar18[0xb] = -(pcVar2[0xb] == UNK_142fa712b);
        auVar18[0xc] = -(pcVar2[0xc] == UNK_142fa712c);
        auVar18[0xd] = -(pcVar2[0xd] == UNK_142fa712d);
        auVar18[0xe] = -(pcVar2[0xe] == UNK_142fa712e);
        auVar18[0xf] = -(pcVar2[0xf] == UNK_142fa712f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_140736cf2;
          goto LAB_140736d08;
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140736cf2:
  pdb_1411be530(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_140736d08:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0xf7d4949e22b19877;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar19[0] = -(*pcVar1 == DAT_142e34950);
      auVar19[1] = -(pcVar1[1] == DAT_142e34950._1_1_);
      auVar19[2] = -(pcVar1[2] == DAT_142e34950._2_1_);
      auVar19[3] = -(pcVar1[3] == DAT_142e34950._3_1_);
      auVar19[4] = -(pcVar1[4] == DAT_142e34950._4_1_);
      auVar19[5] = -(pcVar1[5] == DAT_142e34950._5_1_);
      auVar19[6] = -(pcVar1[6] == DAT_142e34950._6_1_);
      auVar19[7] = -(pcVar1[7] == DAT_142e34950._7_1_);
      auVar19[8] = -(pcVar1[8] == DAT_142e34950._8_1_);
      auVar19[9] = -(pcVar1[9] == DAT_142e34950._9_1_);
      auVar19[10] = -(pcVar1[10] == DAT_142e34950._10_1_);
      auVar19[0xb] = -(pcVar1[0xb] == DAT_142e34950._11_1_);
      auVar19[0xc] = -(pcVar1[0xc] == DAT_142e34950._12_1_);
      auVar19[0xd] = -(pcVar1[0xd] == DAT_142e34950._13_1_);
      auVar19[0xe] = -(pcVar1[0xe] == DAT_142e34950._14_1_);
      auVar19[0xf] = -(pcVar1[0xf] == DAT_142e34950._15_1_);
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
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar20[0] = -(*pcVar2 == DAT_142fa7130);
        auVar20[1] = -(pcVar2[1] == UNK_142fa7131);
        auVar20[2] = -(pcVar2[2] == UNK_142fa7132);
        auVar20[3] = -(pcVar2[3] == UNK_142fa7133);
        auVar20[4] = -(pcVar2[4] == UNK_142fa7134);
        auVar20[5] = -(pcVar2[5] == UNK_142fa7135);
        auVar20[6] = -(pcVar2[6] == UNK_142fa7136);
        auVar20[7] = -(pcVar2[7] == UNK_142fa7137);
        auVar20[8] = -(pcVar2[8] == UNK_142fa7138);
        auVar20[9] = -(pcVar2[9] == UNK_142fa7139);
        auVar20[10] = -(pcVar2[10] == UNK_142fa713a);
        auVar20[0xb] = -(pcVar2[0xb] == UNK_142fa713b);
        auVar20[0xc] = -(pcVar2[0xc] == UNK_142fa713c);
        auVar20[0xd] = -(pcVar2[0xd] == UNK_142fa713d);
        auVar20[0xe] = -(pcVar2[0xe] == UNK_142fa713e);
        auVar20[0xf] = -(pcVar2[0xf] == UNK_142fa713f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((*(ulonglong *)(lVar7 + 0x210) <= uVar9) ||
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) == 0))
          goto LAB_140736de2;
          goto LAB_140736df8;
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140736de2:
  pdb_1411beb30(lVar7);
  if (*(longlong *)(lVar7 + 0x88) != 0) {
LAB_140736df8:
    lVar3 = *(longlong *)(lVar7 + 0x70);
    uVar9 = 0x6f292b9145185a59;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(lVar7 + 0x78);
      pcVar1 = (char *)(lVar3 + uVar9);
      auVar21[0] = -(*pcVar1 == DAT_142e34cf0);
      auVar21[1] = -(pcVar1[1] == DAT_142e34cf0._1_1_);
      auVar21[2] = -(pcVar1[2] == DAT_142e34cf0._2_1_);
      auVar21[3] = -(pcVar1[3] == DAT_142e34cf0._3_1_);
      auVar21[4] = -(pcVar1[4] == DAT_142e34cf0._4_1_);
      auVar21[5] = -(pcVar1[5] == DAT_142e34cf0._5_1_);
      auVar21[6] = -(pcVar1[6] == DAT_142e34cf0._6_1_);
      auVar21[7] = -(pcVar1[7] == DAT_142e34cf0._7_1_);
      auVar21[8] = -(pcVar1[8] == DAT_142e34cf0._8_1_);
      auVar21[9] = -(pcVar1[9] == DAT_142e34cf0._9_1_);
      auVar21[10] = -(pcVar1[10] == DAT_142e34cf0._10_1_);
      auVar21[0xb] = -(pcVar1[0xb] == DAT_142e34cf0._11_1_);
      auVar21[0xc] = -(pcVar1[0xc] == DAT_142e34cf0._12_1_);
      auVar21[0xd] = -(pcVar1[0xd] == DAT_142e34cf0._13_1_);
      auVar21[0xe] = -(pcVar1[0xe] == DAT_142e34cf0._14_1_);
      auVar21[0xf] = -(pcVar1[0xf] == DAT_142e34cf0._15_1_);
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
        uVar13 = uVar4 + uVar9 & *(ulonglong *)(lVar7 + 0x78);
        pcVar2 = (char *)(lVar3 + -0x18 + uVar13 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_142fa7140);
        auVar22[1] = -(pcVar2[1] == UNK_142fa7141);
        auVar22[2] = -(pcVar2[2] == UNK_142fa7142);
        auVar22[3] = -(pcVar2[3] == UNK_142fa7143);
        auVar22[4] = -(pcVar2[4] == UNK_142fa7144);
        auVar22[5] = -(pcVar2[5] == UNK_142fa7145);
        auVar22[6] = -(pcVar2[6] == UNK_142fa7146);
        auVar22[7] = -(pcVar2[7] == UNK_142fa7147);
        auVar22[8] = -(pcVar2[8] == UNK_142fa7148);
        auVar22[9] = -(pcVar2[9] == UNK_142fa7149);
        auVar22[10] = -(pcVar2[10] == UNK_142fa714a);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_142fa714b);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_142fa714c);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_142fa714d);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_142fa714e);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_142fa714f);
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
          uVar9 = *(ulonglong *)(lVar3 + uVar13 * -0x18 + -8);
          if (((uVar9 < *(ulonglong *)(lVar7 + 0x210)) &&
              (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x208) + uVar9 * 8), uVar9 != 0)) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x1d8) + 0x20 + ~uVar9 * 0x40) != 0)) {
            return;
          }
          goto LAB_140736ed2;
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_140736ed2:
  pdb_1411c1530(lVar7);
  return;
}

