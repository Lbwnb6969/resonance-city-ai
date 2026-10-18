// VA 0x140c35e90, PDB extent 23413 bytes
// country_core::systems::wall::eraser::archivist::WallEraserArchivist::finish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::archivist::WallEraserArchivist::finish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
   Extent: 23413 */

void pdb_140c35e90(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 param_3,byte *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  int7 iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined1 (*pauVar24) [16];
  ulonglong *puVar25;
  byte **ppbVar26;
  int iVar27;
  uint uVar28;
  undefined1 (*pauVar29) [16];
  ulonglong uVar30;
  undefined4 *puVar31;
  ulonglong *puVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  byte *pbVar37;
  undefined8 uVar38;
  undefined1 (*pauVar39) [16];
  ushort uVar40;
  ulonglong uVar41;
  byte *pbVar42;
  byte *pbVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  undefined4 uVar47;
  uint uVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  longlong lVar51;
  undefined1 (*pauVar52) [16];
  byte bVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined *puVar82;
  byte *pbStack_768;
  longlong lStack_760;
  undefined8 *puStack_758;
  undefined8 uStack_750;
  byte *pbStack_748;
  byte *pbStack_740;
  byte *pbStack_738;
  byte *pbStack_730;
  byte *pbStack_728;
  longlong lStack_720;
  ulonglong *puStack_718;
  longlong lStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  longlong lStack_6f8;
  longlong lStack_6f0;
  longlong lStack_6e8;
  longlong lStack_6e0;
  byte *pbStack_6d8;
  byte *pbStack_6d0;
  longlong lStack_6c8;
  undefined1 auStack_6b8 [16];
  undefined1 auStack_6a8 [16];
  undefined1 auStack_698 [16];
  uint uStack_688;
  undefined4 uStack_684;
  uint uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  byte *pbStack_660;
  byte *pbStack_658;
  undefined8 uStack_650;
  byte *pbStack_648;
  byte *pbStack_640;
  ulonglong *puStack_638;
  byte *pbStack_630;
  ulonglong *puStack_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  uint uStack_618;
  undefined4 uStack_614;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  byte *pbStack_5e8;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  ulonglong uStack_5a8;
  undefined1 (*pauStack_5a0) [16];
  byte *pbStack_598;
  byte *pbStack_590;
  byte *pbStack_580;
  byte *pbStack_578;
  byte *pbStack_570;
  longlong lStack_568;
  longlong lStack_560;
  longlong lStack_558;
  longlong lStack_550;
  longlong lStack_548;
  longlong lStack_540;
  longlong lStack_538;
  longlong lStack_530;
  longlong lStack_528;
  longlong lStack_520;
  longlong lStack_518;
  longlong lStack_510;
  undefined4 uStack_504;
  undefined4 uStack_500;
  uint uStack_4fc;
  undefined1 (*pauStack_4f8) [16];
  byte *pbStack_4f0;
  undefined1 (*pauStack_4e8) [16];
  ulonglong *puStack_4e0;
  longlong lStack_4d8;
  longlong lStack_4d0;
  longlong lStack_4c8;
  byte *pbStack_4c0;
  longlong *plStack_4b8;
  ulonglong *puStack_4b0;
  byte *pbStack_4a8;
  byte *pbStack_4a0;
  byte *pbStack_498;
  ulonglong *puStack_490;
  byte *pbStack_488;
  ulonglong *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  longlong lStack_468;
  longlong lStack_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  byte *pbStack_440;
  longlong lStack_438;
  longlong lStack_430;
  longlong lStack_428;
  longlong lStack_420;
  undefined1 (*pauStack_418) [16];
  ulonglong *puStack_410;
  longlong lStack_408;
  byte *pbStack_400;
  byte *pbStack_3f8;
  undefined1 auStack_3f0 [16];
  ulonglong *puStack_3e0;
  undefined8 uStack_3d8;
  uint uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  byte *pbStack_398;
  undefined1 (*pauStack_390) [16];
  byte *pbStack_388;
  undefined1 (*pauStack_378) [16];
  undefined1 (*pauStack_370) [16];
  byte *pbStack_368;
  undefined1 (*pauStack_360) [16];
  longlong lStack_358;
  undefined8 uStack_350;
  ulonglong uStack_348;
  ulonglong uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  uint uStack_324;
  byte *pbStack_320;
  byte *pbStack_318;
  undefined1 (*pauStack_310) [16];
  byte *pbStack_308;
  undefined1 auStack_2f8 [8];
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  byte *pbStack_268;
  ulonglong *puStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  uint uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte *pbStack_220;
  byte *pbStack_218;
  undefined4 uStack_210;
  float fStack_20c;
  float fStack_208;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  undefined8 *puStack_1b0;
  ulonglong *puStack_1a8;
  undefined1 uStack_199;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  ulonglong *puStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  undefined1 (*pauStack_168) [16];
  undefined8 uStack_160;
  undefined8 *puStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  uint uStack_12c;
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  byte *pbStack_118;
  ulonglong *puStack_110;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  byte bStack_102;
  undefined1 uStack_101;
  byte *pbStack_100;
  undefined1 uStack_f6;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar50 = _UNK_143077fc8;
  uVar38 = _DAT_143077fc0;
  uStack_f0 = 0xfffffffffffffffe;
  pbStack_580 = (byte *)0x0;
  pbStack_578 = (byte *)0x10;
  pbStack_570 = (byte *)0x0;
  lStack_568 = 0;
  lStack_560 = 0x10;
  lStack_558 = 0;
  lStack_550 = 0;
  lStack_548 = 0x10;
  lStack_540 = 0;
  lStack_538 = 0;
  lStack_530 = 0x10;
  lStack_528 = 0;
  lStack_520 = 0;
  lStack_518 = 0x10;
  lStack_510 = 0;
  puStack_758 = param_1 + 6;
  pauVar39 = (undefined1 (*) [16])param_1[6];
  pbStack_368 = *pauVar39 + param_1[7] + 1;
  auVar3 = *pauVar39;
  uVar48 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
  pauVar52 = pauVar39 + 1;
  lVar51 = param_1[9];
  uStack_350 = param_1[6];
  uStack_348 = param_1[7];
  uStack_340 = param_1[8];
  uStack_338 = param_1[9];
  param_1[6] = _DAT_143077fc0;
  param_1[7] = uVar50;
  uVar12 = _UNK_143077fd8;
  uVar11 = _DAT_143077fd0;
  param_1[8] = _DAT_143077fd0;
  param_1[9] = uVar12;
  uStack_750 = param_3;
  puStack_5b8 = param_1;
  pauStack_378 = pauVar39;
  pauStack_370 = pauVar52;
  lStack_358 = lVar51;
  puStack_330 = puStack_758;
  pauStack_168 = (undefined1 (*) [16])param_4;
  pauStack_120 = param_2;
  pauStack_360._0_2_ = (short)uVar48;
  if (lVar51 != 0) {
    pbStack_100 = (byte *)0x10;
    do {
      pbVar22 = pbStack_570;
      if ((short)uVar48 == 0) {
        do {
          auVar3 = *pauVar52;
          pauVar39 = pauVar39 + -0xe8;
          pauVar52 = pauVar52 + 1;
          uVar48 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          pauStack_378 = pauVar39;
          pauStack_370 = pauVar52;
        } while (uVar48 == 0);
      }
      uVar28 = 0;
      for (uVar33 = uVar48; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
        uVar28 = uVar28 + 1;
      }
      uVar48 = uVar48 - 1 & uVar48;
      pauStack_360._0_2_ = (ushort)uVar48;
      lVar20 = (ulonglong)uVar28 * -0xe8;
      lVar51 = lVar51 + -1;
      pbVar23 = *(byte **)((longlong)pauVar39 + lVar20 + -0xe8);
      pbVar37 = *(byte **)((longlong)pauVar39 + lVar20 + -0xe0);
      lStack_358 = lVar51;
      pub_142e32760(auStack_6b8,(longlong)pauVar39 + lVar20 + -0xd8,0xd8);
      if (SBORROW8(0,(longlong)pbVar37)) break;
      pbStack_6d0 = pbStack_658;
      lStack_6e0 = CONCAT44(uStack_664,uStack_668);
      pbStack_6d8 = pbStack_660;
      lStack_6f0 = CONCAT44(uStack_674,uStack_678);
      lStack_6e8 = CONCAT44(uStack_66c,uStack_670);
      pbStack_730 = (byte *)auStack_6b8._0_8_;
      pbStack_728 = (byte *)auStack_6b8._8_8_;
      lStack_720 = auStack_6a8._0_8_;
      puStack_718 = (ulonglong *)auStack_6a8._8_8_;
      lStack_710 = auStack_698._0_8_;
      uStack_708 = (ulonglong *)auStack_698._8_8_;
      uStack_700 = CONCAT44(uStack_684,uStack_688);
      lStack_6f8 = CONCAT44(uStack_67c,uStack_680);
      pbStack_440 = pbStack_5e8;
      uStack_448 = (undefined4)uStack_5f0;
      uStack_444 = (undefined4)((ulonglong)uStack_5f0 >> 0x20);
      uStack_458 = (undefined4)uStack_600;
      uStack_454 = (undefined4)((ulonglong)uStack_600 >> 0x20);
      uStack_450 = (undefined4)uStack_5f8;
      uStack_44c = (undefined4)((ulonglong)uStack_5f8 >> 0x20);
      lStack_468 = uStack_610;
      lStack_460 = uStack_608;
      pbStack_4a8 = uStack_650;
      pbStack_4a0 = pbStack_648;
      pbStack_498 = pbStack_640;
      puStack_490 = puStack_638;
      pbStack_488 = pbStack_630;
      puStack_480 = puStack_628;
      uStack_478 = (ulonglong *)CONCAT44(uStack_61c,uStack_620);
      uStack_470 = CONCAT44(uStack_614,uStack_618);
      pbStack_738 = pbVar37;
      if (auStack_6b8._8_8_ == 0) {
        pbStack_100 = (byte *)auStack_6b8._8_8_;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14306caa8,0x30,&UNK_14306cad8);
      }
      uStack_298 = pbStack_660;
      uStack_290 = pbStack_658;
      uStack_2a8 = uStack_670;
      uStack_2a4 = uStack_66c;
      uStack_2a0 = uStack_668;
      uStack_29c = uStack_664;
      uStack_2b8 = uStack_680;
      uStack_2b4 = uStack_67c;
      uStack_2b0 = uStack_678;
      uStack_2ac = uStack_674;
      uStack_2c8 = (ulonglong *)auStack_698._8_8_;
      uStack_2c0 = uStack_688;
      uStack_2bc = uStack_684;
      auStack_2d8._8_8_ = auStack_698._0_8_;
      auStack_2d8._0_8_ = auStack_6a8._8_8_;
      auStack_2e8._8_8_ = auStack_6a8._0_8_;
      auStack_2e8._0_8_ = auStack_6b8._8_8_;
      uStack_2f0 = (undefined1 (*) [16])auStack_6b8._0_8_;
      auStack_2f8 = (undefined1  [8])pbVar37;
      pbStack_220 = pbStack_5e8;
      uStack_248 = (undefined4)uStack_610;
      uStack_244 = (undefined4)((ulonglong)uStack_610 >> 0x20);
      uStack_240 = (undefined4)uStack_608;
      uStack_23c = (undefined4)((ulonglong)uStack_608 >> 0x20);
      pbStack_288 = uStack_650;
      pbStack_280 = pbStack_648;
      uStack_278 = pbStack_640;
      uStack_270 = puStack_638;
      pbStack_268 = pbStack_630;
      puStack_260 = puStack_628;
      uStack_258 = uStack_620;
      uStack_254 = uStack_61c;
      uStack_250 = uStack_618;
      uStack_24c = uStack_614;
      uStack_210 = 2;
      uStack_238 = uStack_458;
      uStack_234 = uStack_454;
      uStack_230 = uStack_450;
      uStack_22c = uStack_44c;
      uStack_228 = uStack_448;
      uStack_224 = uStack_444;
      pbStack_218 = pbVar23;
      if (pbVar22 == pbStack_580) {
        pbStack_100 = (byte *)auStack_6b8._8_8_;
        pdb_142d92040(&pbStack_580);
        pbStack_100 = pbStack_578;
      }
      pub_142e32760(pbStack_100 + (longlong)pbVar22 * 0x100,auStack_2f8,0x100);
      pbStack_570 = pbVar22 + 1;
    } while (lVar51 != 0);
  }
  uStack_f2 = 1;
  pdb_140ca7cf0(&pauStack_378);
  pauVar52 = pauStack_168;
  uVar21 = uStack_348;
  puVar35 = puStack_5b8;
  if (uStack_348 == 0) {
    uVar44 = 0;
  }
  else {
    pub_142e32780(uStack_350,0xff,uStack_348 + 0x11);
    uVar44 = (uVar21 + 1 & 0xfffffffffffffff8) - (uVar21 + 1 >> 3);
    if (uVar21 < 8) {
      uVar44 = uVar21;
    }
  }
  *puStack_330 = uStack_350;
  puStack_330[1] = uStack_348;
  puStack_330[2] = uVar44;
  puStack_330[3] = 0;
  puVar49 = puVar35 + 0xc;
  pauStack_378 = (undefined1 (*) [16])puVar35[0xc];
  pbStack_368 = *pauStack_378 + puVar35[0xd] + 1;
  auVar3 = *pauStack_378;
  lStack_358 = puVar35[0xf];
  uStack_350 = puVar35[0xc];
  uStack_348 = puVar35[0xd];
  uStack_340 = puVar35[0xe];
  uStack_338 = puVar35[0xf];
  puVar35[0xc] = uVar38;
  puVar35[0xd] = uVar50;
  puVar35[0xe] = uVar11;
  puVar35[0xf] = uVar12;
  pauStack_370 = pauStack_378 + 1;
  pauStack_360 = (undefined1 (*) [16])
                 CONCAT62(pauStack_360._2_6_,
                          ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf));
  lStack_4d8 = *(longlong *)((longlong)pauVar52 + 0x18);
  pbStack_4c0 = (byte *)((longlong)pauVar52 + 0x20);
  lStack_1d0 = *(longlong *)pauVar52;
  uStack_1c8 = *(ulonglong *)((longlong)pauVar52 + 8);
  pauVar52 = (undefined1 (*) [16])((longlong)pauVar52 + 0x30);
  lStack_4d0 = param_6[3];
  plStack_4b8 = param_6 + 4;
  lStack_1c0 = *param_6;
  uStack_1b8 = param_6[1];
  pbVar22 = (byte *)(param_6 + 6);
  pbStack_320 = (byte *)param_5[3];
  puStack_5b0 = param_5 + 4;
  pauStack_128 = (undefined1 (*) [16])*param_5;
  auVar3 = *(undefined1 (*) [16])(param_5 + 4);
  pbStack_140 = (byte *)param_5[1];
  param_5 = param_5 + 6;
  auVar78._0_8_ = auVar3._0_8_;
  auVar78._8_4_ = auVar3._0_4_;
  auVar78._12_4_ = auVar3._4_4_;
  auVar78 = auVar78 ^ _DAT_142e378a0;
  auVar79._0_8_ = auVar3._8_8_;
  auVar79._8_4_ = auVar3._8_4_;
  auVar79._12_4_ = auVar3._12_4_;
  auVar79 = auVar79 ^ _DAT_142e378b0;
  auVar4 = pauStack_120[2];
  auVar80._0_8_ = auVar4._0_8_;
  auVar80._8_4_ = auVar4._0_4_;
  auVar80._12_4_ = auVar4._4_4_;
  auVar80 = auVar80 ^ _DAT_142e378a0;
  auVar81._0_8_ = auVar4._8_8_;
  auVar81._8_4_ = auVar4._8_4_;
  auVar81._12_4_ = auVar4._12_4_;
  auVar81 = auVar81 ^ _DAT_142e378b0;
  lStack_760 = *(longlong *)(pauStack_120[1] + 8);
  lStack_4c8 = *(longlong *)*pauStack_120;
  uStack_5a8 = *(ulonglong *)(*pauStack_120 + 8);
  fVar77 = _DAT_142e36f28;
  puStack_330 = puVar49;
  puStack_1b0 = param_5;
LAB_140c36499:
  if (lStack_358 != 0) {
    uVar48 = (uint)(ushort)pauStack_360;
    if ((ushort)pauStack_360 == 0) {
      do {
        auVar54 = *pauStack_370;
        pauStack_378 = pauStack_378 + -0x90;
        pauStack_370 = pauStack_370 + 1;
        uVar48 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar48 == 0);
    }
    uVar40 = (ushort)uVar48;
    uVar28 = 0;
    for (; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
      uVar28 = uVar28 + 1;
    }
    uVar21 = (ulonglong)uVar28;
    pauStack_360 = (undefined1 (*) [16])CONCAT62(pauStack_360._2_6_,uVar40 - 1 & uVar40);
    lVar20 = uVar21 * -0x90;
    lStack_358 = lStack_358 + -1;
    pbStack_100 = *(byte **)(pauStack_378 + -9)[uVar21 * -9];
    lVar51 = *(longlong *)(pauStack_378[-9] + 8 + lVar20);
    pbStack_6d8 = *(byte **)(pauStack_378 + -2)[uVar21 * -9];
    lStack_6e8 = *(longlong *)(pauStack_378 + -3)[uVar21 * -9];
    lStack_6e0 = *(longlong *)((pauStack_378 + -3)[uVar21 * -9] + 8);
    lStack_6f8 = *(longlong *)(pauStack_378 + -4)[uVar21 * -9];
    lStack_6f0 = *(longlong *)((pauStack_378 + -4)[uVar21 * -9] + 8);
    uStack_708 = *(ulonglong **)(pauStack_378 + -5)[uVar21 * -9];
    uVar38 = *(undefined8 *)((pauStack_378 + -5)[uVar21 * -9] + 8);
    puStack_718 = *(ulonglong **)(pauStack_378 + -6)[uVar21 * -9];
    lStack_710 = *(longlong *)((pauStack_378 + -6)[uVar21 * -9] + 8);
    pauVar39 = pauStack_378 + -7 + uVar21 * -9;
    pbStack_728 = *(byte **)*pauVar39;
    lStack_720 = *(longlong *)(*pauVar39 + 8);
    auVar54 = *pauVar39;
    pbStack_738 = *(byte **)(pauStack_378 + -8)[uVar21 * -9];
    pbStack_730 = *(byte **)((pauStack_378 + -8)[uVar21 * -9] + 8);
    uStack_700 = uVar38;
    if (!SBORROW8(0,lVar51)) {
      lVar46 = *(longlong *)(pauStack_378[-2] + 8 + lVar20);
      puVar2 = *(ulonglong **)(pauStack_378 + -1)[uVar21 * -9];
      fVar75 = SUB84(puVar2,0);
      fVar76 = (float)((ulonglong)puVar2 >> 0x20);
      uVar48 = *(uint *)(pauStack_378[-1] + 8 + lVar20);
      uVar28 = *(uint *)(pauStack_378[-1] + 0xc + lVar20);
      uStack_3b0 = (undefined4)lStack_6e8;
      uStack_3ac = (undefined4)((ulonglong)lStack_6e8 >> 0x20);
      uStack_3a8 = (undefined4)lStack_6e0;
      uStack_3a4 = (undefined4)((ulonglong)lStack_6e0 >> 0x20);
      uStack_3c0 = (undefined4)lStack_6f8;
      uStack_3bc = (undefined4)((ulonglong)lStack_6f8 >> 0x20);
      uStack_3b8 = (undefined4)lStack_6f0;
      uStack_3b4 = (undefined4)((ulonglong)lStack_6f0 >> 0x20);
      uStack_708._4_4_ = (undefined4)((ulonglong)uStack_708 >> 0x20);
      uStack_700._0_4_ = (undefined4)uVar38;
      uStack_700._4_4_ = (undefined4)((ulonglong)uVar38 >> 0x20);
      uStack_3d0 = (uint)uStack_708;
      uStack_3cc = uStack_708._4_4_;
      uStack_3c8 = (undefined4)uStack_700;
      uStack_3c4 = uStack_700._4_4_;
      uStack_3d8._0_4_ = (float)lStack_710;
      lStack_408 = lVar51;
      pbStack_400 = pbStack_738;
      pbStack_3f8 = pbStack_730;
      auStack_3f0 = auVar54;
      puStack_3e0 = puStack_718;
      uStack_3d8 = lStack_710;
      uStack_3a0 = pbStack_6d8;
      if (!SBORROW8(0,lVar46)) {
        puStack_4e0 = puVar2;
        lStack_420 = lVar46;
        if ((pbStack_730 < (byte *)0x2) || ((float)uStack_3d8 <= 0.0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14306c8a0,0x36,&UNK_14306c8d8);
        }
        pauStack_120 = (undefined1 (*) [16])CONCAT44(uVar28,uVar48);
        auStack_2f8 = (undefined1  [8])&uStack_199;
        if ((undefined1 (*) [16])0x1 < pauStack_120) {
          if (pauStack_120 < (undefined1 (*) [16])0x15) {
            pdb_14151a640(puVar2,pauStack_120,1,auStack_2f8);
          }
          else {
            pdb_140c764a0(puVar2);
          }
        }
        uVar5 = uStack_3b4;
        pbVar37 = pbStack_3f8;
        pbVar23 = pbStack_400;
        puStack_4b0 = puVar2 + (longlong)pauStack_120 * 2;
        uVar21 = 0;
LAB_140c367f0:
        if (((ulonglong)uVar48 << 4 | (ulonglong)uVar28 << 0x24) != uVar21)
        goto code_r0x000140c367f5;
        uVar21 = (longlong)pbStack_3f8 * 8;
        if (0x7ffffffffffffffc < uVar21 || (ulonglong)pbStack_3f8 >> 0x3d != 0) {
          uVar38 = 0;
          puStack_150 = puVar49;
LAB_140c38dd4:
          pdb_142dc7e2a(uVar38,uVar21);
          goto LAB_140c397b3;
        }
        if (uVar21 == 0) {
          pbVar42 = (byte *)0x4;
          pauStack_168 = (undefined1 (*) [16])0x0;
          pbStack_138 = pbVar22;
          puStack_150 = puVar49;
          pauVar39 = pauStack_168;
        }
        else {
          puStack_150 = puVar49;
          pbStack_138 = pbVar22;
          pdb_14007ee60();
          uVar38 = 4;
          pbVar42 = pub_1406abab0(uVar21,4);
          pauVar39 = (undefined1 (*) [16])pbVar37;
          if (pbVar42 == (byte *)0x0) goto LAB_140c38dd4;
        }
        pauStack_168 = pauVar39;
        if (pbVar37 != (byte *)0x0) {
          pub_142e32760(pbVar42,pbVar23);
        }
        uVar21 = (longlong)puStack_3e0 * 4;
        pbStack_1e8 = pbVar42;
        if (0x7ffffffffffffffc < uVar21 || (ulonglong)puStack_3e0 >> 0x3e != 0) {
          uVar38 = 0;
LAB_140c38e54:
          pdb_142dc7e2a(uVar38,uVar21);
          goto LAB_140c397b3;
        }
        puStack_110 = puStack_3e0;
        if (uVar21 == 0) {
          pbVar22 = (byte *)0x4;
          goto LAB_140c3886a;
        }
        uVar50 = auStack_3f0._8_8_;
        pdb_14007ee60();
        uVar38 = 4;
        pbVar22 = pub_1406abab0(uVar21,4);
        if (pbVar22 == (byte *)0x0) goto LAB_140c38e54;
        pbVar42 = pbStack_1e8;
        if (puStack_110 == (ulonglong *)0x0) goto LAB_140c3886a;
        puVar32 = (ulonglong *)((longlong)puStack_110 - 1U);
        if (puStack_110 < (ulonglong *)((longlong)puStack_110 - 1U)) {
          puVar32 = puStack_110;
        }
        if (puVar32 < (ulonglong *)0x8) {
          lVar51 = 0;
          puVar32 = puStack_110;
          puVar31 = (undefined4 *)uVar50;
        }
        else {
          uVar44 = (longlong)puVar32 + 1;
          uVar21 = (ulonglong)((uint)uVar44 & 7);
          if ((uVar44 & 7) == 0) {
            uVar21 = 8;
          }
          lVar51 = uVar44 - uVar21;
          puVar32 = (ulonglong *)((longlong)puStack_110 - lVar51);
          puVar31 = (undefined4 *)(uVar50 + lVar51 * 4);
          lVar20 = 0;
          do {
            uVar38 = ((undefined8 *)(uVar50 + lVar20 * 4))[1];
            auVar54 = *(undefined1 (*) [16])(uVar50 + (lVar20 + 4) * 4);
            *(undefined8 *)(pbVar22 + lVar20 * 4) = *(undefined8 *)(uVar50 + lVar20 * 4);
            *(undefined8 *)(pbVar22 + lVar20 * 4 + 8) = uVar38;
            *(undefined1 (*) [16])(pbVar22 + lVar20 * 4 + 0x10) = auVar54;
            lVar20 = lVar20 + 8;
          } while (lVar51 != lVar20);
        }
        pbVar23 = pbVar22 + lVar51 * 4;
        do {
          if (puVar31 == (undefined4 *)(uVar50 + puStack_110 * 4)) break;
          uVar47 = *puVar31;
          puVar31 = puVar31 + 1;
          *(undefined4 *)pbVar23 = uVar47;
          pbVar23 = pbVar23 + 4;
          puVar32 = (ulonglong *)((longlong)puVar32 + -1);
        } while (puVar32 != (ulonglong *)0x0);
LAB_140c3886a:
        auVar54 = auStack_6a8;
        iVar27 = uStack_3d0 - 2;
        if (uStack_3d0 < 2) {
          iVar27 = 2;
        }
        uVar48 = 2;
        if (iVar27 != 0) {
          if (iVar27 == 1) {
            uVar48 = 3;
          }
          else {
            auStack_6a8._4_4_ = uStack_3b8;
            auStack_6a8._0_4_ = uStack_3bc;
            auStack_6a8._8_8_ = auVar54._8_8_;
            auStack_6b8._4_4_ = uStack_3c8;
            auStack_6b8._0_4_ = uStack_3cc;
            auStack_6b8._12_4_ = uStack_3c0;
            auStack_6b8._8_4_ = uStack_3c4;
            uVar48 = uStack_3d0;
          }
        }
        uVar28 = (uint)(float)uStack_3d8;
        pbStack_198 = (byte *)CONCAT44(pbStack_198._4_4_,uStack_3b4);
        pbStack_1e8 = uStack_3a0;
        uStack_1e0 = 0;
        pbVar23 = (byte *)CONCAT44(uStack_3ac,uStack_3b0);
        pbVar13 = (byte *)CONCAT44(uStack_3a4,uStack_3a8);
        pbStack_4a8 = (byte *)auStack_6b8._0_8_;
        pbStack_4a0 = (byte *)auStack_6b8._8_8_;
        pbStack_498 = (byte *)auStack_6a8._0_8_;
        if (uStack_3a0._2_1_ == '\0') {
          auStack_6b8._0_8_ = pbStack_100;
          pbVar43 = (byte *)pauVar52;
          if (lStack_4d8 != 0) {
            uVar21 = pdb_1400af0a0(pbStack_4c0,auStack_6b8);
            bVar53 = (byte)(uVar21 >> 0x39);
            auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
            auVar54 = pshuflw(auVar54,auVar54,0);
            lVar51 = 0;
            while( true ) {
              uVar21 = uVar21 & uStack_1c8;
              auVar70 = *(undefined1 (*) [16])(lStack_1d0 + uVar21);
              auVar73[0] = -(auVar70[0] == auVar54[0]);
              auVar73[1] = -(auVar70[1] == auVar54[1]);
              auVar73[2] = -(auVar70[2] == auVar54[2]);
              auVar73[3] = -(auVar70[3] == auVar54[3]);
              auVar73[4] = -(auVar70[4] == auVar54[4]);
              auVar73[5] = -(auVar70[5] == auVar54[5]);
              auVar73[6] = -(auVar70[6] == auVar54[6]);
              auVar73[7] = -(auVar70[7] == auVar54[7]);
              auVar73[8] = -(auVar70[8] == auVar54[0]);
              auVar73[9] = -(auVar70[9] == auVar54[1]);
              auVar73[10] = -(auVar70[10] == auVar54[2]);
              auVar73[0xb] = -(auVar70[0xb] == auVar54[3]);
              auVar73[0xc] = -(auVar70[0xc] == auVar54[4]);
              auVar73[0xd] = -(auVar70[0xd] == auVar54[5]);
              auVar73[0xe] = -(auVar70[0xe] == auVar54[6]);
              auVar73[0xf] = -(auVar70[0xf] == auVar54[7]);
              uVar40 = (ushort)(SUB161(auVar73 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar73[0xf] >> 7) << 0xf;
              uVar33 = (uint)uVar40;
              while (uVar40 != 0) {
                uVar8 = 0;
                for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                lVar20 = lStack_1d0 + (uVar8 + uVar21 & uStack_1c8) * -0x10;
                if (pbStack_100 == *(byte **)(lVar20 + -0x10)) goto LAB_140c38a97;
                uVar40 = (ushort)(uVar33 - 1) & (ushort)uVar33;
                uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar40);
              }
              auVar63[0] = -(auVar70[0] == -1);
              auVar63[1] = -(auVar70[1] == -1);
              auVar63[2] = -(auVar70[2] == -1);
              auVar63[3] = -(auVar70[3] == -1);
              auVar63[4] = -(auVar70[4] == -1);
              auVar63[5] = -(auVar70[5] == -1);
              auVar63[6] = -(auVar70[6] == -1);
              auVar63[7] = -(auVar70[7] == -1);
              auVar63[8] = -(auVar70[8] == -1);
              auVar63[9] = -(auVar70[9] == -1);
              auVar63[10] = -(auVar70[10] == -1);
              auVar63[0xb] = -(auVar70[0xb] == -1);
              auVar63[0xc] = -(auVar70[0xc] == -1);
              auVar63[0xd] = -(auVar70[0xd] == -1);
              auVar63[0xe] = -(auVar70[0xe] == -1);
              auVar63[0xf] = -(auVar70[0xf] == -1);
              if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar63 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar63 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar63 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar63 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar63 >> 0x4f,0) & 1) != 0) || (SUB161(auVar63 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
              uVar21 = uVar21 + lVar51 + 0x10;
              lVar51 = lVar51 + 0x10;
            }
          }
        }
        else {
          auStack_6b8._0_8_ = pbStack_100;
          pbVar43 = pbStack_138;
          if (lStack_4d0 != 0) {
            uVar21 = pdb_1400af0a0(plStack_4b8,auStack_6b8);
            bVar53 = (byte)(uVar21 >> 0x39);
            auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
            auVar54 = pshuflw(auVar54,auVar54,0);
            lVar51 = 0;
            while( true ) {
              uVar21 = uVar21 & uStack_1b8;
              auVar70 = *(undefined1 (*) [16])(lStack_1c0 + uVar21);
              auVar72[0] = -(auVar70[0] == auVar54[0]);
              auVar72[1] = -(auVar70[1] == auVar54[1]);
              auVar72[2] = -(auVar70[2] == auVar54[2]);
              auVar72[3] = -(auVar70[3] == auVar54[3]);
              auVar72[4] = -(auVar70[4] == auVar54[4]);
              auVar72[5] = -(auVar70[5] == auVar54[5]);
              auVar72[6] = -(auVar70[6] == auVar54[6]);
              auVar72[7] = -(auVar70[7] == auVar54[7]);
              auVar72[8] = -(auVar70[8] == auVar54[0]);
              auVar72[9] = -(auVar70[9] == auVar54[1]);
              auVar72[10] = -(auVar70[10] == auVar54[2]);
              auVar72[0xb] = -(auVar70[0xb] == auVar54[3]);
              auVar72[0xc] = -(auVar70[0xc] == auVar54[4]);
              auVar72[0xd] = -(auVar70[0xd] == auVar54[5]);
              auVar72[0xe] = -(auVar70[0xe] == auVar54[6]);
              auVar72[0xf] = -(auVar70[0xf] == auVar54[7]);
              uVar40 = (ushort)(SUB161(auVar72 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar72[0xf] >> 7) << 0xf;
              uVar33 = (uint)uVar40;
              while (uVar40 != 0) {
                uVar8 = 0;
                for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                lVar20 = lStack_1c0 + (uVar8 + uVar21 & uStack_1b8) * -0x10;
                if (pbStack_100 == *(byte **)(lVar20 + -0x10)) goto LAB_140c38a97;
                uVar40 = (ushort)(uVar33 - 1) & (ushort)uVar33;
                uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar40);
              }
              auVar62[0] = -(auVar70[0] == -1);
              auVar62[1] = -(auVar70[1] == -1);
              auVar62[2] = -(auVar70[2] == -1);
              auVar62[3] = -(auVar70[3] == -1);
              auVar62[4] = -(auVar70[4] == -1);
              auVar62[5] = -(auVar70[5] == -1);
              auVar62[6] = -(auVar70[6] == -1);
              auVar62[7] = -(auVar70[7] == -1);
              auVar62[8] = -(auVar70[8] == -1);
              auVar62[9] = -(auVar70[9] == -1);
              auVar62[10] = -(auVar70[10] == -1);
              auVar62[0xb] = -(auVar70[0xb] == -1);
              auVar62[0xc] = -(auVar70[0xc] == -1);
              auVar62[0xd] = -(auVar70[0xd] == -1);
              auVar62[0xe] = -(auVar70[0xe] == -1);
              auVar62[0xf] = -(auVar70[0xf] == -1);
              pbVar43 = pbStack_138;
              if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar62 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar62 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x4f,0) & 1) != 0) || (SUB161(auVar62 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') break;
              uVar21 = uVar21 + lVar51 + 0x10;
              lVar51 = lVar51 + 0x10;
            }
          }
        }
        goto LAB_140c38ab0;
      }
      if ((((uVar48 & 1) == 0) && (fVar75 == 0.0)) && (!NAN(fVar75))) {
        if ((fVar76 == fVar77) && (!NAN(fVar76) && !NAN(fVar77))) {
          if ((float)uStack_3d8 <= _DAT_142e3787c) {
            uStack_3d8._0_4_ = _DAT_142e3787c;
          }
          if (_DAT_142e3787c / (float)uStack_3d8 <= 0.0) {
            uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14306c6e8,0x29,&UNK_14306c718);
          }
          fVar76 = (_DAT_142e3787c / (float)uStack_3d8) * _DAT_142e36f50;
          fVar75 = _DAT_142e36f50 - fVar76;
          if (fVar75 <= 0.0) {
            fVar75 = 0.0;
          }
          auStack_6b8._0_4_ = fVar75;
          if (fVar77 < fVar75) {
            uStack_2f0 = (undefined1 (*) [16])pdb_140f70fc0;
            auStack_2f8 = (undefined1  [8])auStack_6b8;
            uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14335ec38,auStack_2f8,&UNK_14306c730);
          }
          fVar76 = fVar76 + _DAT_142e36f50;
          if (fVar77 <= fVar76) {
            fVar76 = fVar77;
          }
          auStack_6b8._0_4_ = fVar76;
          if (fVar77 < fVar76) {
            uStack_2f0 = (undefined1 (*) [16])pdb_140f70fc0;
            auStack_2f8 = (undefined1  [8])auStack_6b8;
            uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14335ec38,auStack_2f8,&UNK_14306c748);
          }
        }
      }
      lStack_420 = CONCAT44(lStack_420._4_4_,uStack_3b4);
      uStack_3a0._2_1_ = (char)((ulonglong)pbStack_6d8 >> 0x10);
      auStack_2f8 = (undefined1  [8])pbStack_100;
      if (uStack_3a0._2_1_ == '\0') {
        pbVar23 = (byte *)pauVar52;
        if (lStack_4d8 != 0) {
          uVar21 = pdb_1400af0a0(pbStack_4c0,auStack_2f8);
          bVar53 = (byte)(uVar21 >> 0x39);
          auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
          auVar54 = pshuflw(auVar54,auVar54,0);
          lVar51 = 0;
          while( true ) {
            uVar21 = uVar21 & uStack_1c8;
            pcVar1 = (char *)(lStack_1d0 + uVar21);
            auVar66[0] = -(*pcVar1 == auVar54[0]);
            auVar66[1] = -(pcVar1[1] == auVar54[1]);
            auVar66[2] = -(pcVar1[2] == auVar54[2]);
            auVar66[3] = -(pcVar1[3] == auVar54[3]);
            auVar66[4] = -(pcVar1[4] == auVar54[4]);
            auVar66[5] = -(pcVar1[5] == auVar54[5]);
            auVar66[6] = -(pcVar1[6] == auVar54[6]);
            auVar66[7] = -(pcVar1[7] == auVar54[7]);
            auVar66[8] = -(pcVar1[8] == auVar54[0]);
            auVar66[9] = -(pcVar1[9] == auVar54[1]);
            auVar66[10] = -(pcVar1[10] == auVar54[2]);
            auVar66[0xb] = -(pcVar1[0xb] == auVar54[3]);
            auVar66[0xc] = -(pcVar1[0xc] == auVar54[4]);
            auVar66[0xd] = -(pcVar1[0xd] == auVar54[5]);
            auVar66[0xe] = -(pcVar1[0xe] == auVar54[6]);
            auVar66[0xf] = -(pcVar1[0xf] == auVar54[7]);
            uVar40 = (ushort)(SUB161(auVar66 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar66[0xf] >> 7) << 0xf;
            uVar48 = (uint)uVar40;
            while (uVar40 != 0) {
              uVar28 = 0;
              for (uVar33 = uVar48; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                uVar28 = uVar28 + 1;
              }
              lVar20 = lStack_1d0 + (uVar28 + uVar21 & uStack_1c8) * -0x10;
              if (pbStack_100 == *(byte **)(lVar20 + -0x10)) goto LAB_140c36a74;
              uVar40 = (ushort)(uVar48 - 1) & (ushort)uVar48;
              uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar40);
            }
            auVar56[0] = -(*pcVar1 == -1);
            auVar56[1] = -(pcVar1[1] == -1);
            auVar56[2] = -(pcVar1[2] == -1);
            auVar56[3] = -(pcVar1[3] == -1);
            auVar56[4] = -(pcVar1[4] == -1);
            auVar56[5] = -(pcVar1[5] == -1);
            auVar56[6] = -(pcVar1[6] == -1);
            auVar56[7] = -(pcVar1[7] == -1);
            auVar56[8] = -(pcVar1[8] == -1);
            auVar56[9] = -(pcVar1[9] == -1);
            auVar56[10] = -(pcVar1[10] == -1);
            auVar56[0xb] = -(pcVar1[0xb] == -1);
            auVar56[0xc] = -(pcVar1[0xc] == -1);
            auVar56[0xd] = -(pcVar1[0xd] == -1);
            auVar56[0xe] = -(pcVar1[0xe] == -1);
            auVar56[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x3f,0) & 1) != 0) || (SUB161(auVar56 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') break;
            uVar21 = uVar21 + lVar51 + 0x10;
            lVar51 = lVar51 + 0x10;
          }
        }
      }
      else {
        pbVar23 = pbVar22;
        if (lStack_4d0 != 0) {
          uVar21 = pdb_1400af0a0(plStack_4b8,auStack_2f8);
          bVar53 = (byte)(uVar21 >> 0x39);
          auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
          auVar54 = pshuflw(auVar54,auVar54,0);
          lVar51 = 0;
          while( true ) {
            uVar21 = uVar21 & uStack_1b8;
            pcVar1 = (char *)(lStack_1c0 + uVar21);
            auVar65[0] = -(*pcVar1 == auVar54[0]);
            auVar65[1] = -(pcVar1[1] == auVar54[1]);
            auVar65[2] = -(pcVar1[2] == auVar54[2]);
            auVar65[3] = -(pcVar1[3] == auVar54[3]);
            auVar65[4] = -(pcVar1[4] == auVar54[4]);
            auVar65[5] = -(pcVar1[5] == auVar54[5]);
            auVar65[6] = -(pcVar1[6] == auVar54[6]);
            auVar65[7] = -(pcVar1[7] == auVar54[7]);
            auVar65[8] = -(pcVar1[8] == auVar54[0]);
            auVar65[9] = -(pcVar1[9] == auVar54[1]);
            auVar65[10] = -(pcVar1[10] == auVar54[2]);
            auVar65[0xb] = -(pcVar1[0xb] == auVar54[3]);
            auVar65[0xc] = -(pcVar1[0xc] == auVar54[4]);
            auVar65[0xd] = -(pcVar1[0xd] == auVar54[5]);
            auVar65[0xe] = -(pcVar1[0xe] == auVar54[6]);
            auVar65[0xf] = -(pcVar1[0xf] == auVar54[7]);
            uVar40 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar65[0xf] >> 7) << 0xf;
            uVar48 = (uint)uVar40;
            while (uVar40 != 0) {
              uVar28 = 0;
              for (uVar33 = uVar48; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                uVar28 = uVar28 + 1;
              }
              lVar20 = lStack_1c0 + (uVar28 + uVar21 & uStack_1b8) * -0x10;
              if (pbStack_100 == *(byte **)(lVar20 + -0x10)) goto LAB_140c36a74;
              uVar40 = (ushort)(uVar48 - 1) & (ushort)uVar48;
              uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar40);
            }
            auVar55[0] = -(*pcVar1 == -1);
            auVar55[1] = -(pcVar1[1] == -1);
            auVar55[2] = -(pcVar1[2] == -1);
            auVar55[3] = -(pcVar1[3] == -1);
            auVar55[4] = -(pcVar1[4] == -1);
            auVar55[5] = -(pcVar1[5] == -1);
            auVar55[6] = -(pcVar1[6] == -1);
            auVar55[7] = -(pcVar1[7] == -1);
            auVar55[8] = -(pcVar1[8] == -1);
            auVar55[9] = -(pcVar1[9] == -1);
            auVar55[10] = -(pcVar1[10] == -1);
            auVar55[0xb] = -(pcVar1[0xb] == -1);
            auVar55[0xc] = -(pcVar1[0xc] == -1);
            auVar55[0xd] = -(pcVar1[0xd] == -1);
            auVar55[0xe] = -(pcVar1[0xe] == -1);
            auVar55[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x3f,0) & 1) != 0) || (SUB161(auVar55 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
            uVar21 = uVar21 + lVar51 + 0x10;
            lVar51 = lVar51 + 0x10;
          }
        }
      }
      goto LAB_140c36a90;
    }
  }
  uStack_f2 = 1;
  pdb_140ca7e20(&pauStack_378);
  uVar21 = uStack_348;
  if (uStack_348 == 0) {
    uStack_340 = 0;
  }
  else {
    pub_142e32780(uStack_350,0xff,uStack_348 + 0x11);
    uStack_340 = (uVar21 + 1 & 0xfffffffffffffff8) - (uVar21 + 1 >> 3);
    if (uVar21 < 8) {
      uStack_340 = uVar21;
    }
  }
  puStack_150 = puVar49;
  uStack_338 = 0;
  puStack_330[2] = uStack_340;
  puStack_330[3] = 0;
  *puStack_330 = uStack_350;
  puStack_330[1] = uStack_348;
  pbStack_318 = (byte *)0x0;
  pauStack_310 = (undefined1 (*) [16])0x8;
  pbStack_308 = (byte *)0x0;
  pbStack_738 = pbStack_580;
  pbStack_730 = pbStack_578;
  pbStack_728 = pbStack_570;
  lStack_720 = lStack_568;
  puStack_718 = (ulonglong *)lStack_560;
  lStack_710 = lStack_558;
  uStack_708 = (ulonglong *)lStack_550;
  uStack_700 = lStack_548;
  lStack_6f8 = lStack_540;
  lStack_6f0 = lStack_538;
  lStack_6e8 = lStack_530;
  lStack_6e0 = lStack_528;
  lStack_6c8 = lStack_510;
  pbStack_6d8 = (byte *)lStack_520;
  pbStack_6d0 = (byte *)lStack_518;
  pbStack_4a0 = (byte *)0x5;
  ppbVar26 = &pbStack_498;
  pbStack_498 = pbStack_580;
  puStack_490 = (ulonglong *)pbStack_578;
  pbStack_488 = pbStack_570;
  puStack_480 = (ulonglong *)lStack_568;
  uStack_478 = (ulonglong *)lStack_560;
  uStack_470 = lStack_558;
  lStack_468 = lStack_550;
  lStack_460 = lStack_548;
  uStack_458 = (undefined4)lStack_540;
  uStack_454 = (undefined4)((ulonglong)lStack_540 >> 0x20);
  uStack_450 = (undefined4)lStack_538;
  uStack_44c = (undefined4)((ulonglong)lStack_538 >> 0x20);
  uStack_448 = (undefined4)lStack_530;
  uStack_444 = (undefined4)((ulonglong)lStack_530 >> 0x20);
  pbStack_440 = (byte *)lStack_528;
  lStack_438 = lStack_520;
  lStack_430 = lStack_518;
  lStack_428 = lStack_510;
  pbStack_4a8 = (byte *)0x1;
  if (SBORROW8(0,(longlong)pbStack_580)) {
    pbVar23 = (byte *)0x1;
  }
  else {
    pbVar22 = pbStack_580;
    do {
      pbVar23 = pbStack_308;
      pbStack_398 = pbVar22;
      pauStack_390 = (undefined1 (*) [16])ppbVar26[1];
      pbStack_388 = ppbVar26[2];
      _auStack_2f8 = ZEXT816(8) << 0x40;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auStack_2e8._8_8_;
      auStack_2e8 = auVar3 << 0x40;
      if (pbStack_308 == pbStack_318) {
        pdb_142d7e830(&pbStack_318);
      }
      *(undefined8 *)((longlong)pauStack_310 + 0x10 + (longlong)pbVar23 * 0x18) = auStack_2e8._0_8_;
      puVar35 = (undefined8 *)((longlong)pauStack_310 + (longlong)pbVar23 * 0x18);
      *puVar35 = auStack_2f8;
      puVar35[1] = uStack_2f0;
      pbStack_308 = pbVar23 + 1;
      lVar51 = (longlong)pbStack_388 * 0x100;
      pauStack_168 = pauStack_390 + (longlong)pbStack_388 * 0x10;
      pauStack_378 = pauStack_390;
      pauStack_370 = pauStack_390;
      pbStack_140 = pbVar22;
      pbStack_368 = pbVar22;
      pauStack_360 = pauStack_168;
      pauStack_128 = pauStack_390;
      pbStack_320 = pbStack_388;
      pauVar52 = pauStack_390;
      if (pbStack_388 != (byte *)0x0) {
        lVar20 = (longlong)pbStack_308 * 0x18 + (longlong)pauStack_310;
        pauStack_120 = (undefined1 (*) [16])
                       CONCAT71(pauStack_120._1_7_,lVar20 + -0x18 == 0 || pbStack_308 == (byte *)0x0
                               );
        pauVar39 = pauStack_390;
        do {
          pauVar52 = pauVar39 + 0x10;
          pauStack_370 = pauVar52;
          if (*(longlong *)*pauVar39 == -0x7fffffffffffffec) break;
          auStack_6b8._0_8_ = *(longlong *)*pauVar39;
          pub_142e32760(auStack_6b8 + 8,*pauVar39 + 8,0xf8);
          if ((char)pauStack_120 != '\0') {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1430372e0);
          }
          pub_142e32760(auStack_2e8,auStack_6b8,0x100);
          auStack_2f8 = (undefined1  [8])0x1;
          uStack_2f0 = (undefined1 (*) [16])0x1;
          pdb_14007ee60();
          pbVar22 = pub_1406abab0(0x110,0x10);
          if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(0x10,0x110);
          }
          pub_142e32760(pbVar22,auStack_2f8,0x110);
          auStack_2f8 = (undefined1  [8])pbVar22;
          lVar46 = *(longlong *)(lVar20 + -8);
          pbStack_100 = pbVar22;
          if (lVar46 == *(longlong *)(lVar20 + -0x18)) {
            pdb_142d7e8a0(lVar20 + -0x18);
          }
          *(byte **)(*(longlong *)(lVar20 + -0x10) + lVar46 * 8) = pbStack_100;
          *(longlong *)(lVar20 + -8) = lVar46 + 1;
          lVar51 = lVar51 + -0x100;
          pauVar39 = pauVar52;
        } while (lVar51 != 0);
      }
      pauStack_168 = (undefined1 (*) [16])
                     ((ulonglong)((longlong)pauStack_168 - (longlong)pauVar52) >> 8);
      pauStack_120 = pauVar52;
      pbStack_100 = (byte *)0x0;
      while (pauStack_168 != (undefined1 (*) [16])pbStack_100) {
        pbStack_100 = pbStack_100 + 1;
        pdb_1409a0f40(pauVar52);
        pauVar52 = pauVar52 + 0x10;
      }
      if (pbStack_140 != (byte *)0x0) {
        pub_1406abac0((byte *)pauStack_128,(longlong)pbStack_140 << 8,0x10);
      }
      pbVar23 = pbStack_4a0;
      if (pbStack_4a0 == pbStack_4a8) break;
      pbVar23 = pbStack_4a8 + 1;
      ppbVar26 = &pbStack_498 + (longlong)pbStack_4a8 * 3;
      pbVar22 = (&pbStack_498)[(longlong)pbStack_4a8 * 3];
      pbStack_4a8 = pbVar23;
    } while (!SBORROW8(0,(longlong)pbVar22));
  }
  uStack_f4 = 1;
  pdb_140b25d00(&pbStack_498,pbVar23,pbStack_4a0);
  pbStack_4a8 = (byte *)0x0;
  pbStack_4a0 = (byte *)0x8;
  pbStack_498 = (byte *)0x0;
  auStack_2e8._8_8_ = (longlong)pauStack_310 + (longlong)pbStack_308 * 0x18;
  uStack_2f0 = pauStack_310;
  auStack_2f8 = (undefined1  [8])pauStack_310;
  auStack_2e8._0_8_ = pbStack_318;
  pauVar52 = pauStack_310;
  uStack_2f0 = (undefined1 (*) [16])pdb_140c69b60(auStack_2f8);
  puVar49 = puStack_150;
  puVar35 = puStack_5b8;
  auStack_2e8._0_8_ = pauVar52;
  auStack_2f8 = (undefined1  [8])0x7;
  uStack_f2 = 0;
  pdb_140ae5180(uStack_750,auStack_2f8,&UNK_14306ca90);
  if (puVar35[3] != 0) {
    uVar21 = puVar35[1];
    if (uVar21 == 0) {
      uVar44 = 0;
    }
    else {
      pub_142e32780(*puVar35,0xff,uVar21 + 0x11);
      uVar44 = (uVar21 + 1 & 0xfffffffffffffff8) - (uVar21 + 1 >> 3);
      if (uVar21 < 8) {
        uVar44 = uVar21;
      }
    }
    puVar35[3] = 0;
    puVar35[2] = uVar44;
  }
  uStack_f2 = 0;
  pdb_140cac680(puStack_758);
  uStack_f2 = 0;
  pdb_140cabf70(puVar49);
  return;
code_r0x000140c367f5:
  puVar32 = (ulonglong *)((longlong)puVar2 + uVar21);
  uVar21 = uVar21 + 0x10;
  if ((byte *)*puVar32 == pbStack_100) goto code_r0x000140c36807;
  goto LAB_140c367f0;
code_r0x000140c36807:
  if ((undefined1 (*) [16])0x124924924924924 < pauStack_120) goto LAB_140c38dba;
LAB_140c36821:
  pauVar39 = pauStack_120;
  pbVar23 = (byte *)((longlong)pauStack_120 * 0x70);
  pbStack_138 = pbVar22;
  if (pbVar23 == (byte *)0x0) {
    pbVar22 = (byte *)0x8;
    pauVar29 = (undefined1 (*) [16])0x0;
LAB_140c36e9c:
    pauStack_4e8 = (undefined1 (*) [16])0x0;
    pauVar39 = (undefined1 (*) [16])(pauVar39[-1] + 0xf);
    pauVar24 = (undefined1 (*) [16])0x0;
    fVar77 = _DAT_142e36f28;
    pbStack_748 = pbVar22;
    pauStack_5a0 = pauVar39;
    pauStack_4f8 = pauVar29;
    pbStack_4f0 = pbVar22;
    puStack_110 = puVar2;
    if (puVar2 != puStack_4b0) {
LAB_140c36ee2:
      puVar32 = puStack_110;
      if (pauVar24 == (undefined1 (*) [16])0x0) {
        fVar75 = 0.0;
      }
      else {
        if (pauStack_120 <= (undefined1 (*) [16])(pauVar24[-1] + 0xf)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14306c8f0);
        }
        fVar75 = *(float *)(puStack_110 + 1) * _DAT_142e36f50 +
                 *(float *)((longlong)puVar2 + (longlong)(pauVar24[-1] + 0xf) * 0x10 + 0xc) *
                 _DAT_142e36f50;
        auStack_6b8._0_4_ = fVar75;
        if ((fVar75 < 0.0) || (fVar77 < fVar75)) {
          uStack_2f0 = (undefined1 (*) [16])pdb_140f70fc0;
          auStack_2f8 = (undefined1  [8])auStack_6b8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,auStack_2f8,&UNK_14306c908);
        }
      }
      pauStack_418 = (undefined1 (*) [16])(*pauVar24 + 1);
      fVar76 = fVar77;
      if (pauVar24 != pauVar39) {
        if (pauStack_120 <= pauStack_418) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14306c920);
        }
        fVar76 = *(float *)(puVar2 + (longlong)pauStack_418 * 2 + 1) * _DAT_142e36f50 +
                 *(float *)((longlong)puStack_110 + 0xc) * _DAT_142e36f50;
        auStack_6b8._0_4_ = fVar76;
        if ((fVar76 < 0.0) || (fVar77 < fVar76)) {
          uStack_2f0 = (undefined1 (*) [16])pdb_140f70fc0;
          auStack_2f8 = (undefined1  [8])auStack_6b8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,auStack_2f8,&UNK_14306c938);
        }
      }
      if (fVar76 <= fVar75) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14306c950,0x37,&UNK_14306c988);
      }
      puVar82 = &UNK_14306c9a0;
      pdb_1419a77d0(&pbStack_4a8,&lStack_408);
      auVar54 = auStack_2e8;
      pbVar23 = pbStack_400;
      pbVar22 = (byte *)*puVar32;
      if (pbVar22 == pbStack_100) {
        iVar27 = uStack_3d0 - 2;
        if (uStack_3d0 < 2) {
          iVar27 = 2;
        }
        uStack_12c = 2;
        if (iVar27 != 0) {
          if (iVar27 == 1) {
            uStack_12c = 3;
          }
          else {
            auStack_2e8._4_4_ = uStack_3b8;
            auStack_2e8._0_4_ = uStack_3bc;
            auStack_2e8._8_8_ = auVar54._8_8_;
            auStack_2f8._4_4_ = uStack_3c8;
            auStack_2f8._0_4_ = uStack_3cc;
            uStack_2f0._4_4_ = uStack_3c0;
            uStack_2f0._0_4_ = uStack_3c4;
            uStack_12c = uStack_3d0;
          }
        }
        bStack_102 = uStack_3a0._6_1_;
      }
      else {
        bStack_102 = uStack_3a0._6_1_ == 1;
        uStack_12c = 2;
      }
      pbVar37 = (byte *)CONCAT44(uStack_3ac,uStack_3b0);
      uStack_101 = (undefined1)uStack_3a0;
      pbStack_148 = (byte *)CONCAT44(pbStack_148._4_4_,uStack_3b4);
      uStack_107 = uStack_3a0._1_1_;
      uStack_106 = uStack_3a0._2_1_;
      uStack_108 = uStack_3a0._7_1_;
      uStack_105 = uStack_3a0._3_1_;
      pauStack_168 = (undefined1 (*) [16])CONCAT44(uStack_3a4,uStack_3a8);
      uStack_160 = 0;
      uStack_104 = uStack_3a0._4_1_;
      uStack_103 = uStack_3a0._5_1_;
      pbStack_190 = pbStack_4a8;
      pbStack_198 = pbStack_4a0;
      pbStack_178 = pbStack_498;
      puStack_410 = puStack_490;
      puStack_1a8 = puStack_480;
      uStack_324 = (uint)uStack_478;
      uStack_504 = uStack_478._4_4_;
      pbStack_318 = (byte *)auStack_2f8;
      pauStack_310 = uStack_2f0;
      pbStack_308 = (byte *)auStack_2e8._0_8_;
      pbStack_1e8 = pbStack_488;
      pbVar42 = (byte *)0x0;
      if (pbVar22 == pbStack_100) goto LAB_140c3718d;
      uVar21 = (longlong)pbStack_3f8 * 8;
      if (uVar21 < 0x7ffffffffffffffd && (ulonglong)pbStack_3f8 >> 0x3d == 0) {
        pbStack_118 = pbStack_3f8;
        pbStack_740 = pbVar22;
        if (uVar21 == 0) {
          pbStack_188 = (byte *)0x4;
          pbStack_170 = (byte *)0x0;
        }
        else {
          pdb_14007ee60();
          uVar38 = 4;
          pbStack_188 = pub_1406abab0(uVar21,4);
          if (pbStack_188 == (byte *)0x0) goto LAB_140c38e68;
          pbStack_170 = pbStack_118;
        }
        if (pbStack_118 != (byte *)0x0) {
          pub_142e32760(pbStack_188,pbVar23,uVar21,pbStack_118,puVar82);
        }
        uVar21 = (longlong)puStack_3e0 * 4;
        if (uVar21 < 0x7ffffffffffffffd && (ulonglong)puStack_3e0 >> 0x3e == 0) {
          puStack_180 = puStack_3e0;
          if (uVar21 == 0) {
            pbVar22 = (byte *)0x4;
          }
          else {
            uVar38 = auStack_3f0._8_8_;
            pdb_14007ee60();
            uVar50 = 4;
            pbVar22 = pub_1406abab0(uVar21,4);
            if (pbVar22 == (byte *)0x0) goto LAB_140c39314;
            if (puStack_180 != (ulonglong *)0x0) {
              puVar32 = (ulonglong *)((longlong)puStack_180 - 1U);
              if (puStack_180 < (ulonglong *)((longlong)puStack_180 - 1U)) {
                puVar32 = puStack_180;
              }
              if (puVar32 < (ulonglong *)0x8) {
                lVar51 = 0;
                puVar32 = puStack_180;
                puVar31 = (undefined4 *)uVar38;
              }
              else {
                uVar44 = (longlong)puVar32 + 1;
                uVar21 = (ulonglong)((uint)uVar44 & 7);
                if ((uVar44 & 7) == 0) {
                  uVar21 = 8;
                }
                lVar51 = uVar44 - uVar21;
                puVar32 = (ulonglong *)((longlong)puStack_180 - lVar51);
                puVar31 = (undefined4 *)(uVar38 + lVar51 * 4);
                lVar20 = 0;
                do {
                  uVar50 = ((undefined8 *)(uVar38 + lVar20 * 4))[1];
                  uVar11 = *(undefined8 *)(uVar38 + (lVar20 + 4) * 4);
                  uVar12 = ((undefined8 *)(uVar38 + (lVar20 + 4) * 4))[1];
                  *(undefined8 *)(pbVar22 + lVar20 * 4) = *(undefined8 *)(uVar38 + lVar20 * 4);
                  *(undefined8 *)(pbVar22 + lVar20 * 4 + 8) = uVar50;
                  *(undefined8 *)(pbVar22 + lVar20 * 4 + 0x10) = uVar11;
                  *(undefined8 *)(pbVar22 + lVar20 * 4 + 0x10 + 8) = uVar12;
                  lVar20 = lVar20 + 8;
                } while (lVar51 != lVar20);
              }
              pbVar23 = pbVar22 + lVar51 * 4;
              do {
                if (puVar31 == (undefined4 *)(uVar38 + puStack_180 * 4)) break;
                uVar5 = *puVar31;
                puVar31 = puVar31 + 1;
                *(undefined4 *)pbVar23 = uVar5;
                pbVar23 = pbVar23 + 4;
                puVar32 = (ulonglong *)((longlong)puVar32 + -1);
              } while (puVar32 != (ulonglong *)0x0);
            }
          }
          pbVar23 = uStack_3a0;
          uVar16 = uStack_3a4;
          uVar15 = uStack_3a8;
          uVar47 = uStack_3ac;
          uVar5 = uStack_3b0;
          auVar54 = auStack_6a8;
          iVar27 = uStack_3d0 - 2;
          if (uStack_3d0 < 2) {
            iVar27 = 2;
          }
          uVar48 = 2;
          if (iVar27 != 0) {
            if (iVar27 == 1) {
              uVar48 = 3;
            }
            else {
              auStack_6a8._4_4_ = uStack_3b8;
              auStack_6a8._0_4_ = uStack_3bc;
              auStack_6a8._8_8_ = auVar54._8_8_;
              auStack_6b8._4_4_ = uStack_3c8;
              auStack_6b8._0_4_ = uStack_3cc;
              auStack_6b8._12_4_ = uStack_3c0;
              auStack_6b8._8_4_ = uStack_3c4;
              uVar48 = uStack_3d0;
            }
          }
          pbStack_590 = (byte *)0x0;
          uStack_4fc = (uint)(float)uStack_3d8;
          uStack_500 = uStack_3b4;
          pbStack_398 = (byte *)auStack_6b8._0_8_;
          pauStack_390 = (undefined1 (*) [16])auStack_6b8._8_8_;
          pbStack_388 = (byte *)auStack_6a8._0_8_;
          pbStack_598 = pbVar37;
          if (uStack_3a0._2_1_ == '\0') {
            auStack_6b8._0_8_ = pbStack_100;
            pbVar37 = (byte *)pauVar52;
            if (lStack_4d8 != 0) {
              uVar21 = pdb_1400af0a0(pbStack_4c0,auStack_6b8);
              bVar53 = (byte)(uVar21 >> 0x39);
              auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
              auVar54 = pshuflw(auVar54,auVar54,0);
              lVar51 = 0;
              while( true ) {
                uVar21 = uVar21 & uStack_1c8;
                pcVar1 = (char *)(lStack_1d0 + uVar21);
                auVar70[0] = -(*pcVar1 == auVar54[0]);
                auVar70[1] = -(pcVar1[1] == auVar54[1]);
                auVar70[2] = -(pcVar1[2] == auVar54[2]);
                auVar70[3] = -(pcVar1[3] == auVar54[3]);
                auVar70[4] = -(pcVar1[4] == auVar54[4]);
                auVar70[5] = -(pcVar1[5] == auVar54[5]);
                auVar70[6] = -(pcVar1[6] == auVar54[6]);
                auVar70[7] = -(pcVar1[7] == auVar54[7]);
                auVar70[8] = -(pcVar1[8] == auVar54[0]);
                auVar70[9] = -(pcVar1[9] == auVar54[1]);
                auVar70[10] = -(pcVar1[10] == auVar54[2]);
                auVar70[0xb] = -(pcVar1[0xb] == auVar54[3]);
                auVar70[0xc] = -(pcVar1[0xc] == auVar54[4]);
                auVar70[0xd] = -(pcVar1[0xd] == auVar54[5]);
                auVar70[0xe] = -(pcVar1[0xe] == auVar54[6]);
                auVar70[0xf] = -(pcVar1[0xf] == auVar54[7]);
                uVar40 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar70[0xf] >> 7) << 0xf;
                uVar28 = (uint)uVar40;
                while (uVar40 != 0) {
                  uVar33 = 0;
                  for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar33 = uVar33 + 1;
                  }
                  lVar20 = lStack_1d0 + (uVar33 + uVar21 & uStack_1c8) * -0x10;
                  if (pbStack_100 == *(byte **)(lVar20 + -0x10)) goto LAB_140c37c97;
                  uVar40 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                  uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar40);
                }
                auVar60[0] = -(*pcVar1 == -1);
                auVar60[1] = -(pcVar1[1] == -1);
                auVar60[2] = -(pcVar1[2] == -1);
                auVar60[3] = -(pcVar1[3] == -1);
                auVar60[4] = -(pcVar1[4] == -1);
                auVar60[5] = -(pcVar1[5] == -1);
                auVar60[6] = -(pcVar1[6] == -1);
                auVar60[7] = -(pcVar1[7] == -1);
                auVar60[8] = -(pcVar1[8] == -1);
                auVar60[9] = -(pcVar1[9] == -1);
                auVar60[10] = -(pcVar1[10] == -1);
                auVar60[0xb] = -(pcVar1[0xb] == -1);
                auVar60[0xc] = -(pcVar1[0xc] == -1);
                auVar60[0xd] = -(pcVar1[0xd] == -1);
                auVar60[0xe] = -(pcVar1[0xe] == -1);
                auVar60[0xf] = -(pcVar1[0xf] == -1);
                if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar60 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar60 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar60 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar60 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar60 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar60 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar60 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar60 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar60 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar60 >> 0x5f,0) & 1) != 0) || (SUB161(auVar60 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') break;
                uVar21 = uVar21 + lVar51 + 0x10;
                lVar51 = lVar51 + 0x10;
              }
            }
          }
          else {
            auStack_6b8._0_8_ = pbStack_100;
            pbVar37 = pbStack_138;
            if (lStack_4d0 != 0) {
              uVar21 = pdb_1400af0a0(plStack_4b8,auStack_6b8);
              bVar53 = (byte)(uVar21 >> 0x39);
              auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
              auVar54 = pshuflw(auVar54,auVar54,0);
              lVar51 = 0;
              while( true ) {
                uVar21 = uVar21 & uStack_1b8;
                pcVar1 = (char *)(lStack_1c0 + uVar21);
                auVar69[0] = -(*pcVar1 == auVar54[0]);
                auVar69[1] = -(pcVar1[1] == auVar54[1]);
                auVar69[2] = -(pcVar1[2] == auVar54[2]);
                auVar69[3] = -(pcVar1[3] == auVar54[3]);
                auVar69[4] = -(pcVar1[4] == auVar54[4]);
                auVar69[5] = -(pcVar1[5] == auVar54[5]);
                auVar69[6] = -(pcVar1[6] == auVar54[6]);
                auVar69[7] = -(pcVar1[7] == auVar54[7]);
                auVar69[8] = -(pcVar1[8] == auVar54[0]);
                auVar69[9] = -(pcVar1[9] == auVar54[1]);
                auVar69[10] = -(pcVar1[10] == auVar54[2]);
                auVar69[0xb] = -(pcVar1[0xb] == auVar54[3]);
                auVar69[0xc] = -(pcVar1[0xc] == auVar54[4]);
                auVar69[0xd] = -(pcVar1[0xd] == auVar54[5]);
                auVar69[0xe] = -(pcVar1[0xe] == auVar54[6]);
                auVar69[0xf] = -(pcVar1[0xf] == auVar54[7]);
                uVar40 = (ushort)(SUB161(auVar69 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar69[0xf] >> 7) << 0xf;
                uVar28 = (uint)uVar40;
                while (uVar40 != 0) {
                  uVar33 = 0;
                  for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar33 = uVar33 + 1;
                  }
                  lVar20 = lStack_1c0 + (uVar33 + uVar21 & uStack_1b8) * -0x10;
                  if (pbStack_100 == *(byte **)(lVar20 + -0x10)) goto LAB_140c37c97;
                  uVar40 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                  uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar40);
                }
                auVar59[0] = -(*pcVar1 == -1);
                auVar59[1] = -(pcVar1[1] == -1);
                auVar59[2] = -(pcVar1[2] == -1);
                auVar59[3] = -(pcVar1[3] == -1);
                auVar59[4] = -(pcVar1[4] == -1);
                auVar59[5] = -(pcVar1[5] == -1);
                auVar59[6] = -(pcVar1[6] == -1);
                auVar59[7] = -(pcVar1[7] == -1);
                auVar59[8] = -(pcVar1[8] == -1);
                auVar59[9] = -(pcVar1[9] == -1);
                auVar59[10] = -(pcVar1[10] == -1);
                auVar59[0xb] = -(pcVar1[0xb] == -1);
                auVar59[0xc] = -(pcVar1[0xc] == -1);
                auVar59[0xd] = -(pcVar1[0xd] == -1);
                auVar59[0xe] = -(pcVar1[0xe] == -1);
                auVar59[0xf] = -(pcVar1[0xf] == -1);
                pbVar37 = pbStack_138;
                if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar59 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x5f,0) & 1) != 0) || (SUB161(auVar59 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
                uVar21 = uVar21 + lVar51 + 0x10;
                lVar51 = lVar51 + 0x10;
              }
            }
          }
          goto LAB_140c37cc8;
        }
        uVar50 = 0;
LAB_140c39314:
        pdb_142dc7e2a(uVar50,uVar21);
      }
      else {
        uVar38 = 0;
LAB_140c38e68:
        uStack_f1 = 1;
        pdb_142dc7e2a(uVar38,uVar21);
      }
      goto LAB_140c397b3;
    }
LAB_140c383f9:
    param_5 = puStack_1b0;
    pbVar22 = pbStack_4f0;
    if (pauStack_4e8 != (undefined1 (*) [16])0x0) {
      pbVar23 = pbStack_4f0 + 0x20;
      pauVar39 = pauStack_4e8;
      do {
        if (*(longlong *)(pbVar23 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar23 + -0x18),*(longlong *)(pbVar23 + -0x20) << 3,4);
        }
        if (*(longlong *)(pbVar23 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar23,*(longlong *)(pbVar23 + -8) << 2,4);
        }
        pbVar23 = pbVar23 + 0x70;
        pauVar39 = (undefined1 (*) [16])(pauVar39[-1] + 0xf);
      } while (pauVar39 != (undefined1 (*) [16])0x0);
    }
    if (pauStack_4f8 != (undefined1 (*) [16])0x0) {
      pub_1406abac0(pbVar22,(longlong)pauStack_4f8 * 0x70,8);
    }
    if (lStack_420 != 0) {
      pub_1406abac0((byte *)puStack_4e0,lStack_420 << 4,8);
    }
    pbVar22 = pbStack_138;
    if (lStack_408 != 0) {
      pub_1406abac0(pbStack_400,lStack_408 << 3,4);
    }
    if (auStack_3f0._0_8_ != 0) {
      pub_1406abac0((byte *)auStack_3f0._8_8_,auStack_3f0._0_8_ << 2,4);
    }
    goto LAB_140c36499;
  }
  pdb_14007ee60();
  uVar38 = 8;
  pbVar22 = pub_1406abab0((ulonglong)pbVar23,8);
  pauVar29 = pauVar39;
  if (pbVar22 != (byte *)0x0) goto LAB_140c36e9c;
  goto LAB_140c38dc0;
LAB_140c37c97:
  pbVar37 = (byte *)(lVar20 - 8);
LAB_140c37cc8:
  uVar6 = *(undefined4 *)pbVar37;
  puVar35 = puStack_1b0;
  if (pbStack_320 != (byte *)0x0) {
    uStack_688 = 0;
    uStack_684 = 0;
    uStack_680 = 0;
    uStack_67c = 0;
    uStack_678 = 0;
    uStack_674 = 0;
    pbStack_768 = pbStack_100;
    auStack_6b8 = auVar78;
    auStack_6a8 = auVar79;
    auStack_698 = auVar3;
    pdb_1400b0640(auStack_6b8,&pbStack_768,8);
    uVar45 = CONCAT44(uStack_684,uStack_688) << 0x38 | CONCAT44(uStack_67c,uStack_680);
    uVar44 = auStack_6a8._8_8_ ^ uVar45;
    uVar41 = auStack_6b8._0_8_ + auStack_6a8._0_8_;
    uVar21 = (auStack_6a8._0_8_ << 0xd | (ulonglong)auStack_6a8._0_8_ >> 0x33) ^ uVar41;
    uVar30 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ auStack_6b8._8_8_ + uVar44;
    uVar34 = auStack_6b8._8_8_ + uVar44 + uVar21;
    uVar41 = (uVar41 << 0x20 | uVar41 >> 0x20) + uVar30;
    uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar34;
    uVar44 = (uVar30 << 0x15 | uVar30 >> 0x2b) ^ uVar41;
    uVar41 = (uVar41 ^ uVar45) + uVar21;
    uVar30 = ((uVar34 << 0x20 | uVar34 >> 0x20) ^ 0xff) + uVar44;
    uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar41;
    uVar44 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ uVar30;
    uVar30 = uVar30 + uVar21;
    uVar34 = (uVar41 << 0x20 | uVar41 >> 0x20) + uVar44;
    uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar30;
    uVar44 = (uVar44 << 0x15 | uVar44 >> 0x2b) ^ uVar34;
    uVar34 = uVar34 + uVar21;
    uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) + uVar44;
    uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar34;
    uVar44 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ uVar30;
    uVar30 = uVar30 + uVar21;
    uVar34 = (uVar34 << 0x20 | uVar34 >> 0x20) + uVar44;
    uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar30;
    uVar44 = (uVar44 << 0x15 | uVar44 >> 0x2b) ^ uVar34;
    uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) + uVar44;
    uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar34 + uVar21;
    uVar44 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ uVar30;
    uVar30 = uVar30 + uVar21;
    uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) ^ (uVar21 << 0x11 | uVar21 >> 0x2f) ^
             (uVar44 << 0x15 | uVar44 >> 0x2b) ^ uVar30;
    bVar53 = (byte)(uVar30 >> 0x39);
    auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
    auVar54 = pshuflw(auVar54,auVar54,0);
    lVar51 = 0;
    while( true ) {
      uVar30 = uVar30 & (ulonglong)pbStack_140;
      pcVar1 = *pauStack_128 + uVar30;
      auVar71[0] = -(*pcVar1 == auVar54[0]);
      auVar71[1] = -(pcVar1[1] == auVar54[1]);
      auVar71[2] = -(pcVar1[2] == auVar54[2]);
      auVar71[3] = -(pcVar1[3] == auVar54[3]);
      auVar71[4] = -(pcVar1[4] == auVar54[4]);
      auVar71[5] = -(pcVar1[5] == auVar54[5]);
      auVar71[6] = -(pcVar1[6] == auVar54[6]);
      auVar71[7] = -(pcVar1[7] == auVar54[7]);
      auVar71[8] = -(pcVar1[8] == auVar54[0]);
      auVar71[9] = -(pcVar1[9] == auVar54[1]);
      auVar71[10] = -(pcVar1[10] == auVar54[2]);
      auVar71[0xb] = -(pcVar1[0xb] == auVar54[3]);
      auVar71[0xc] = -(pcVar1[0xc] == auVar54[4]);
      auVar71[0xd] = -(pcVar1[0xd] == auVar54[5]);
      auVar71[0xe] = -(pcVar1[0xe] == auVar54[6]);
      auVar71[0xf] = -(pcVar1[0xf] == auVar54[7]);
      uVar40 = (ushort)(SUB161(auVar71 >> 7,0) & 1) | (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe | (ushort)(auVar71[0xf] >> 7) << 0xf;
      uVar28 = (uint)uVar40;
      while (uVar40 != 0) {
        uVar33 = 0;
        for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar33 = uVar33 + 1;
        }
        uVar21 = uVar33 + uVar30 & (ulonglong)pbStack_140;
        if (pbStack_100 == *(byte **)pauStack_128[-1 - uVar21]) {
          puVar35 = (undefined8 *)(pauStack_128[-1 - uVar21] + 8);
          goto LAB_140c37ede;
        }
        uVar40 = (ushort)(uVar28 - 1) & (ushort)uVar28;
        uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar40);
      }
      auVar61[0] = -(*pcVar1 == -1);
      auVar61[1] = -(pcVar1[1] == -1);
      auVar61[2] = -(pcVar1[2] == -1);
      auVar61[3] = -(pcVar1[3] == -1);
      auVar61[4] = -(pcVar1[4] == -1);
      auVar61[5] = -(pcVar1[5] == -1);
      auVar61[6] = -(pcVar1[6] == -1);
      auVar61[7] = -(pcVar1[7] == -1);
      auVar61[8] = -(pcVar1[8] == -1);
      auVar61[9] = -(pcVar1[9] == -1);
      auVar61[10] = -(pcVar1[10] == -1);
      auVar61[0xb] = -(pcVar1[0xb] == -1);
      auVar61[0xc] = -(pcVar1[0xc] == -1);
      auVar61[0xd] = -(pcVar1[0xd] == -1);
      auVar61[0xe] = -(pcVar1[0xe] == -1);
      auVar61[0xf] = -(pcVar1[0xf] == -1);
      puVar35 = puStack_1b0;
      if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar61 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar61 >> 0x3f,0) & 1) != 0) || (SUB161(auVar61 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar61 >> 0x4f,0) & 1) != 0) || (SUB161(auVar61 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar61 >> 0x5f,0) & 1) != 0) || (SUB161(auVar61 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar61 >> 0x6f,0) & 1) != 0) || (SUB161(auVar61 >> 0x77,0) & 1) != 0) ||
          auVar61[0xf] < '\0') break;
      uVar30 = uVar30 + lVar51 + 0x10;
      lVar51 = lVar51 + 0x10;
    }
  }
LAB_140c37ede:
  lVar51 = lStack_540;
  pbStack_280 = pbStack_740;
  uStack_278 = (byte *)CONCAT44(uVar5,(int)pbStack_148);
  auStack_2e8._8_8_ = pbStack_118;
  auStack_2e8._0_8_ = pbStack_188;
  auStack_2d8._8_8_ = pbVar22;
  auStack_2d8._0_8_ = puStack_180;
  uStack_2c0 = uStack_4fc;
  uStack_2a4 = SUB84(pbStack_388,0);
  uStack_2a0 = (undefined4)((ulonglong)pbStack_388 >> 0x20);
  uStack_2b4 = SUB84(pbStack_398,0);
  uStack_2b0 = (undefined4)((ulonglong)pbStack_398 >> 0x20);
  uStack_2ac = SUB84(pauStack_390,0);
  uStack_2a8 = (undefined4)((ulonglong)pauStack_390 >> 0x20);
  uStack_29c = uStack_500;
  uStack_298 = (byte *)CONCAT44(uVar47,uVar5);
  uStack_290 = (byte *)CONCAT44(uVar16,uVar15);
  pbStack_288 = pbVar23;
  uStack_270 = (ulonglong *)CONCAT44(*(undefined4 *)puVar35,uVar6);
  uStack_2f0 = (undefined1 (*) [16])pbStack_170;
  auStack_2f8 = (undefined1  [8])0x8000000000000000;
  uStack_2c8 = puStack_180;
  uStack_2b8 = uVar48;
  if (lStack_540 == lStack_550) {
    pdb_142d92040(&lStack_550);
  }
  pub_142e32760(lVar51 * 0x100 + lStack_548,auStack_2f8,0x100);
  lStack_540 = lVar51 + 1;
  puVar32 = puStack_110;
  pbVar37 = pbStack_598;
  pbVar42 = pbStack_590;
LAB_140c3718d:
  uStack_f1 = 1;
  pbStack_598 = pbVar37;
  pbStack_590 = pbVar42;
  fVar75 = (float)pdb_140de8220();
  if (NAN(fVar75)) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_14306c9b8);
  }
  if (ABS(fVar75) == INFINITY) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_14306c9b8);
  }
  uStack_f1 = 1;
  fVar76 = (float)pdb_140de8220();
  fVar77 = _DAT_142e36f28;
  if (NAN(fVar76)) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_14306c9d0);
  }
  if (ABS(fVar76) == INFINITY) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_14306c9d0);
  }
  fVar10 = 0.0;
  if (0.0 <= fVar75) {
    fVar10 = fVar75;
  }
  fVar75 = _DAT_142e36f28;
  if (fVar10 <= _DAT_142e36f28) {
    fVar75 = fVar10;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar76) {
    fVar10 = fVar76;
  }
  fVar76 = _DAT_142e36f28;
  if (fVar10 <= _DAT_142e36f28) {
    fVar76 = fVar10;
  }
  if (fVar76 < fVar75) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c9e8,0x2a,&UNK_14306ca18);
  }
  if (lStack_760 == 0) {
LAB_140c38e80:
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14306ca30);
  }
  pbVar22 = (byte *)*puVar32;
  uStack_2c8 = (ulonglong *)0x0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  auStack_6b8._0_8_ = pbVar22;
  _auStack_2f8 = auVar80;
  auStack_2e8 = auVar81;
  auStack_2d8 = auVar4;
  pdb_1400b0640(auStack_2f8,auStack_6b8,8);
  pbVar23 = pbStack_1e8;
  uVar45 = (longlong)uStack_2c8 << 0x38 | CONCAT44(uStack_2bc,uStack_2c0);
  uVar44 = auStack_2e8._8_8_ ^ uVar45;
  uVar41 = (longlong)auStack_2f8 + auStack_2e8._0_8_;
  uVar21 = (auStack_2e8._0_8_ << 0xd | (ulonglong)auStack_2e8._0_8_ >> 0x33) ^ uVar41;
  uVar30 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ (longlong)uStack_2f0 + uVar44;
  uVar34 = (longlong)uStack_2f0 + uVar44 + uVar21;
  uVar41 = (uVar41 << 0x20 | uVar41 >> 0x20) + uVar30;
  uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar34;
  uVar44 = (uVar30 << 0x15 | uVar30 >> 0x2b) ^ uVar41;
  uVar41 = (uVar41 ^ uVar45) + uVar21;
  uVar30 = ((uVar34 << 0x20 | uVar34 >> 0x20) ^ 0xff) + uVar44;
  uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar41;
  uVar44 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ uVar30;
  uVar30 = uVar30 + uVar21;
  uVar34 = (uVar41 << 0x20 | uVar41 >> 0x20) + uVar44;
  uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar30;
  uVar44 = (uVar44 << 0x15 | uVar44 >> 0x2b) ^ uVar34;
  uVar34 = uVar34 + uVar21;
  uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) + uVar44;
  uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar34;
  uVar44 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ uVar30;
  uVar30 = uVar30 + uVar21;
  uVar34 = (uVar34 << 0x20 | uVar34 >> 0x20) + uVar44;
  uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar30;
  uVar44 = (uVar44 << 0x15 | uVar44 >> 0x2b) ^ uVar34;
  uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) + uVar44;
  uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar34 + uVar21;
  uVar44 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ uVar30;
  uVar30 = uVar30 + uVar21;
  uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) ^ (uVar21 << 0x11 | uVar21 >> 0x2f) ^
           (uVar44 << 0x15 | uVar44 >> 0x2b) ^ uVar30;
  bVar53 = (byte)(uVar30 >> 0x39);
  auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
  auVar54 = pshuflw(auVar54,auVar54,0);
  lVar51 = 0;
  while( true ) {
    uVar30 = uVar30 & uStack_5a8;
    auVar70 = *(undefined1 (*) [16])(lStack_4c8 + uVar30);
    auVar68[0] = -(auVar70[0] == auVar54[0]);
    auVar68[1] = -(auVar70[1] == auVar54[1]);
    auVar68[2] = -(auVar70[2] == auVar54[2]);
    auVar68[3] = -(auVar70[3] == auVar54[3]);
    auVar68[4] = -(auVar70[4] == auVar54[4]);
    auVar68[5] = -(auVar70[5] == auVar54[5]);
    auVar68[6] = -(auVar70[6] == auVar54[6]);
    auVar68[7] = -(auVar70[7] == auVar54[7]);
    auVar68[8] = -(auVar70[8] == auVar54[0]);
    auVar68[9] = -(auVar70[9] == auVar54[1]);
    auVar68[10] = -(auVar70[10] == auVar54[2]);
    auVar68[0xb] = -(auVar70[0xb] == auVar54[3]);
    auVar68[0xc] = -(auVar70[0xc] == auVar54[4]);
    auVar68[0xd] = -(auVar70[0xd] == auVar54[5]);
    auVar68[0xe] = -(auVar70[0xe] == auVar54[6]);
    auVar68[0xf] = -(auVar70[0xf] == auVar54[7]);
    uVar40 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
    uVar48 = (uint)uVar40;
    if (uVar40 != 0) break;
LAB_140c37418:
    auVar58[0] = -(auVar70[0] == -1);
    auVar58[1] = -(auVar70[1] == -1);
    auVar58[2] = -(auVar70[2] == -1);
    auVar58[3] = -(auVar70[3] == -1);
    auVar58[4] = -(auVar70[4] == -1);
    auVar58[5] = -(auVar70[5] == -1);
    auVar58[6] = -(auVar70[6] == -1);
    auVar58[7] = -(auVar70[7] == -1);
    auVar58[8] = -(auVar70[8] == -1);
    auVar58[9] = -(auVar70[9] == -1);
    auVar58[10] = -(auVar70[10] == -1);
    auVar58[0xb] = -(auVar70[0xb] == -1);
    auVar58[0xc] = -(auVar70[0xc] == -1);
    auVar58[0xd] = -(auVar70[0xd] == -1);
    auVar58[0xe] = -(auVar70[0xe] == -1);
    auVar58[0xf] = -(auVar70[0xf] == -1);
    if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') goto LAB_140c38e80;
    uVar30 = uVar30 + lVar51 + 0x10;
    lVar51 = lVar51 + 0x10;
  }
LAB_140c373d9:
  uVar28 = 0;
  for (uVar33 = uVar48; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
    uVar28 = uVar28 + 1;
  }
  lVar20 = (uVar28 + uVar30 & uStack_5a8) * -0x78;
  pbStack_188 = pbVar22;
  puStack_150 = puVar49;
  if (pbVar22 != *(byte **)(lStack_4c8 + -0x78 + lVar20)) goto code_r0x000140c37400;
  if (pbStack_178 == (byte *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306ca48,0x30,&UNK_14306ca78);
  }
  pbVar22 = (byte *)((longlong)pbStack_178 * 8);
  pdb_14007ee60();
  puVar25 = (ulonglong *)pub_1406abab0((ulonglong)pbVar22,4);
  if (puVar25 == (ulonglong *)0x0) {
    uStack_f1 = 1;
    pdb_142dc7e2a(4,pbVar22);
    goto LAB_140c397b3;
  }
  pbStack_118 = pbVar22;
  puStack_110 = puVar25;
  pub_142e32760(puVar25,pbStack_198,pbVar22);
  uVar21 = (longlong)puStack_1a8 * 4;
  if (0x7ffffffffffffffc < uVar21 || (ulonglong)puStack_1a8 >> 0x3e != 0) {
    uVar38 = 0;
LAB_140c38e9b:
    pdb_142dc7e2a(uVar38,uVar21);
    goto LAB_140c397b3;
  }
  if (uVar21 == 0) {
    pbVar22 = (byte *)0x4;
    goto LAB_140c3775b;
  }
  pdb_14007ee60();
  uVar38 = 4;
  pbVar22 = pub_1406abab0(uVar21,4);
  if (pbVar22 == (byte *)0x0) goto LAB_140c38e9b;
  if (puStack_1a8 == (ulonglong *)0x0) goto LAB_140c3775b;
  puVar25 = (ulonglong *)((longlong)puStack_1a8 - 1U);
  if (puStack_1a8 < (ulonglong *)((longlong)puStack_1a8 - 1U)) {
    puVar25 = puStack_1a8;
  }
  if (puVar25 < (ulonglong *)0x8) {
    lVar51 = 0;
    puVar25 = puStack_1a8;
    pbVar37 = pbVar23;
  }
  else {
    uVar44 = (longlong)puVar25 + 1;
    uVar21 = (ulonglong)((uint)uVar44 & 7);
    if ((uVar44 & 7) == 0) {
      uVar21 = 8;
    }
    lVar51 = uVar44 - uVar21;
    puVar25 = (ulonglong *)((longlong)puStack_1a8 - lVar51);
    pbVar37 = pbVar23 + lVar51 * 4;
    lVar46 = 0;
    do {
      uVar38 = *(undefined8 *)(pbVar23 + lVar46 * 4 + 8);
      uVar50 = *(undefined8 *)(pbVar23 + lVar46 * 4 + 0x10);
      uVar11 = *(undefined8 *)(pbVar23 + lVar46 * 4 + 0x10 + 8);
      *(undefined8 *)(pbVar22 + lVar46 * 4) = *(undefined8 *)(pbVar23 + lVar46 * 4);
      *(undefined8 *)(pbVar22 + lVar46 * 4 + 8) = uVar38;
      *(undefined8 *)(pbVar22 + lVar46 * 4 + 0x10) = uVar50;
      *(undefined8 *)(pbVar22 + lVar46 * 4 + 0x10 + 8) = uVar11;
      lVar46 = lVar46 + 8;
    } while (lVar51 != lVar46);
  }
  pbVar42 = pbVar22 + lVar51 * 4;
  do {
    if (pbVar37 == pbVar23 + (longlong)puStack_1a8 * 4) break;
    uVar5 = *(undefined4 *)pbVar37;
    pbVar37 = pbVar37 + 4;
    *(undefined4 *)pbVar42 = uVar5;
    pbVar42 = pbVar42 + 4;
    puVar25 = (ulonglong *)((longlong)puVar25 + -1);
  } while (puVar25 != (ulonglong *)0x0);
LAB_140c3775b:
  iVar27 = uStack_12c - 2;
  if (uStack_12c < 2) {
    iVar27 = 2;
  }
  uStack_680 = 2;
  if (iVar27 != 0) {
    if (iVar27 == 1) {
      uStack_680 = 3;
    }
    else {
      pbStack_388 = pbStack_308;
      pbStack_398 = pbStack_318;
      pauStack_390 = pauStack_310;
      uStack_680 = uStack_12c;
    }
  }
  lVar20 = lVar20 + lStack_4c8;
  auStack_6b8._8_8_ = puStack_110;
  auStack_6b8._0_8_ = pbStack_178;
  auStack_6a8._8_8_ = puStack_1a8;
  auStack_6a8._0_8_ = pbStack_178;
  auStack_698._8_8_ = puStack_1a8;
  auStack_698._0_8_ = pbVar22;
  uStack_688 = uStack_324;
  uStack_664 = pbStack_148._0_4_;
  uStack_66c = SUB84(pbStack_388,0);
  uStack_668 = (undefined4)((ulonglong)pbStack_388 >> 0x20);
  uStack_67c = SUB84(pbStack_398,0);
  uStack_678 = (undefined4)((ulonglong)pbStack_398 >> 0x20);
  uStack_674 = SUB84(pauStack_390,0);
  uStack_670 = (undefined4)((ulonglong)pauStack_390 >> 0x20);
  uStack_650._0_7_ = (uint7)bStack_102 << 0x30;
  iVar14 = (int7)uStack_650;
  uStack_650._0_3_ = CONCAT12(uStack_106,CONCAT11(uStack_107,uStack_101));
  uStack_650 = (byte *)CONCAT17(uStack_108,
                                CONCAT43((int)((uint7)iVar14 >> 0x18),(undefined3)uStack_650));
  uVar38 = uStack_650;
  uStack_650._6_2_ = SUB82(uVar38,6);
  uStack_650._0_6_ =
       CONCAT15(uStack_103,CONCAT14(uStack_104,CONCAT13(uStack_105,(undefined3)uStack_650)));
  pbStack_590 = (byte *)pauStack_168;
  pbStack_660 = pbStack_598;
  pbStack_658 = (byte *)pauStack_168;
  pbVar22 = *(byte **)(lVar20 + -0x60);
  uVar21 = (longlong)pbVar22 * 8;
  if (0x7ffffffffffffffc < uVar21 || (ulonglong)pbVar22 >> 0x3d != 0) {
    uVar38 = 0;
LAB_140c39328:
    pdb_142dc7e2a(uVar38,uVar21);
    goto LAB_140c397b3;
  }
  uVar50 = *(undefined8 *)(lVar20 + -0x68);
  puStack_110 = puVar32 + 2;
  if (uVar21 == 0) {
    pbStack_118 = (byte *)0x4;
    pbStack_170 = (byte *)0x0;
    pbVar23 = pbStack_170;
  }
  else {
    pdb_14007ee60();
    uVar38 = 4;
    pbStack_118 = pub_1406abab0(uVar21,4);
    pbVar23 = pbVar22;
    if (pbStack_118 == (byte *)0x0) goto LAB_140c39328;
  }
  pbStack_170 = pbVar23;
  if (pbVar22 != (byte *)0x0) {
    pub_142e32760(pbStack_118,uVar50,uVar21);
  }
  puVar32 = *(ulonglong **)(lVar20 + -0x48);
  uVar21 = (longlong)puVar32 * 4;
  if (0x7ffffffffffffffc < uVar21 || (ulonglong)puVar32 >> 0x3e != 0) {
    uVar38 = 0;
LAB_140c394d3:
    pdb_142dc7e2a(uVar38,uVar21);
    goto LAB_140c397b3;
  }
  if (uVar21 == 0) {
    pbVar23 = (byte *)0x4;
  }
  else {
    puVar31 = *(undefined4 **)(lVar20 + -0x50);
    pauStack_168 = pauVar52;
    pdb_14007ee60();
    uVar38 = 4;
    pbVar23 = pub_1406abab0(uVar21,4);
    if (pbVar23 == (byte *)0x0) goto LAB_140c394d3;
    pauVar52 = pauStack_168;
    if (puVar32 != (ulonglong *)0x0) {
      puVar25 = (ulonglong *)((longlong)puVar32 - 1U);
      if (puVar32 < (ulonglong *)((longlong)puVar32 - 1U)) {
        puVar25 = puVar32;
      }
      if (puVar25 < (ulonglong *)0x8) {
        lVar51 = 0;
        puVar25 = puVar32;
        puVar36 = puVar31;
      }
      else {
        uVar44 = (longlong)puVar25 + 1;
        uVar21 = (ulonglong)((uint)uVar44 & 7);
        if ((uVar44 & 7) == 0) {
          uVar21 = 8;
        }
        lVar51 = uVar44 - uVar21;
        puVar25 = (ulonglong *)((longlong)puVar32 - lVar51);
        puVar36 = puVar31 + lVar51;
        lVar46 = 0;
        do {
          uVar38 = *(undefined8 *)((longlong)(puVar31 + lVar46) + 8);
          uVar50 = *(undefined8 *)(puVar31 + lVar46 + 4);
          uVar11 = *(undefined8 *)((longlong)(puVar31 + lVar46 + 4) + 8);
          *(undefined8 *)(pbVar23 + lVar46 * 4) = *(undefined8 *)(puVar31 + lVar46);
          *(undefined8 *)(pbVar23 + lVar46 * 4 + 8) = uVar38;
          *(undefined8 *)(pbVar23 + lVar46 * 4 + 0x10) = uVar50;
          *(undefined8 *)(pbVar23 + lVar46 * 4 + 0x10 + 8) = uVar11;
          lVar46 = lVar46 + 8;
        } while (lVar51 != lVar46);
      }
      pbVar37 = pbVar23 + lVar51 * 4;
      do {
        if (puVar36 == puVar31 + (longlong)puVar32) break;
        uVar5 = *puVar36;
        puVar36 = puVar36 + 1;
        *(undefined4 *)pbVar37 = uVar5;
        pbVar37 = pbVar37 + 4;
        puVar25 = (ulonglong *)((longlong)puVar25 + -1);
      } while (puVar25 != (ulonglong *)0x0);
    }
  }
  lVar51 = lStack_528;
  pauVar39 = pauStack_5a0;
  uStack_258 = *(undefined4 *)(lVar20 + -0x40);
  uStack_234 = *(undefined4 *)(lVar20 + -0x1c);
  uVar48 = *(uint *)(lVar20 + -0x38);
  iVar27 = uVar48 - 2;
  if (uVar48 < 2) {
    iVar27 = 2;
  }
  uStack_250 = 2;
  if (iVar27 != 0) {
    if (iVar27 == 1) {
      uStack_250 = 3;
    }
    else {
      pbStack_388 = *(byte **)(lVar20 + -0x24);
      pbStack_398 = *(byte **)(lVar20 + -0x34);
      pauStack_390 = *(undefined1 (**) [16])(lVar20 + -0x2c);
      uStack_250 = uVar48;
    }
  }
  pbStack_280 = pbStack_118;
  uStack_23c = SUB84(pbStack_388,0);
  uStack_238 = (undefined4)((ulonglong)pbStack_388 >> 0x20);
  uStack_24c = SUB84(pbStack_398,0);
  uStack_248 = (undefined4)((ulonglong)pbStack_398 >> 0x20);
  uStack_244 = SUB84(pauStack_390,0);
  uStack_240 = (undefined4)((ulonglong)pauStack_390 >> 0x20);
  pbStack_218 = pbStack_188;
  uStack_210 = 1;
  pbStack_220 = *(byte **)(lVar20 + -8);
  uStack_298 = pbStack_658;
  uStack_290 = uStack_650;
  uStack_2a8 = uStack_668;
  uStack_2a4 = uStack_664;
  uStack_2a0 = SUB84(pbStack_660,0);
  uStack_29c = (undefined4)((ulonglong)pbStack_660 >> 0x20);
  uStack_2b8 = uStack_678;
  uStack_2b4 = uStack_674;
  uStack_2b0 = uStack_670;
  uStack_2ac = uStack_66c;
  uStack_2c8 = (ulonglong *)CONCAT44(uStack_684,uStack_688);
  uStack_2c0 = uStack_680;
  uStack_2bc = uStack_67c;
  auStack_2d8._0_8_ = auStack_698._0_8_;
  auStack_2d8._8_8_ = auStack_698._8_8_;
  auStack_2e8._0_8_ = auStack_6a8._0_8_;
  auStack_2e8._8_8_ = auStack_6a8._8_8_;
  _auStack_2f8 = auStack_6b8;
  uStack_230 = (undefined4)*(undefined8 *)(lVar20 + -0x18);
  uStack_22c = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + -0x18) >> 0x20);
  uStack_228 = (undefined4)*(undefined8 *)(lVar20 + -0x10);
  uStack_224 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + -0x10) >> 0x20);
  pbStack_288 = pbStack_170;
  uStack_278 = pbVar22;
  uStack_270 = puVar32;
  pbStack_268 = pbVar23;
  puStack_260 = puVar32;
  fStack_20c = fVar75;
  fStack_208 = fVar76;
  if (lStack_528 == lStack_538) {
    pdb_142d92040(&lStack_538);
  }
  pub_142e32760(lVar51 * 0x100 + lStack_530,auStack_2f8,0x100);
  puVar49 = puStack_150;
  pauVar29 = pauStack_4e8;
  lStack_528 = lVar51 + 1;
  uStack_2f0 = (undefined1 (*) [16])pbStack_198;
  auStack_2f8 = (undefined1  [8])pbStack_190;
  auStack_2e8._8_8_ = puStack_410;
  auStack_2e8._0_8_ = pbStack_178;
  auStack_2d8._8_8_ = puStack_1a8;
  auStack_2d8._0_8_ = pbStack_1e8;
  uStack_2c8 = (ulonglong *)CONCAT44(uStack_504,uStack_324);
  uStack_2c0 = uStack_12c;
  uStack_2ac = SUB84(pbStack_308,0);
  uStack_2a8 = (undefined4)((ulonglong)pbStack_308 >> 0x20);
  uStack_2bc = SUB84(pbStack_318,0);
  uStack_2b8 = (uint)((ulonglong)pbStack_318 >> 0x20);
  uStack_2b4 = SUB84(pauStack_310,0);
  uStack_2b0 = (undefined4)((ulonglong)pauStack_310 >> 0x20);
  uStack_2a4 = pbStack_148._0_4_;
  uStack_2a0 = SUB84(pbStack_598,0);
  uStack_29c = (undefined4)((ulonglong)pbStack_598 >> 0x20);
  uStack_298 = pbStack_590;
  uStack_290 = (byte *)CONCAT17(uStack_108,
                                CONCAT16(bStack_102,
                                         CONCAT15(uStack_103,
                                                  CONCAT14(uStack_104,
                                                           CONCAT13(uStack_105,
                                                                    CONCAT12(uStack_106,
                                                                             CONCAT11(uStack_107,
                                                                                      uStack_101))))
                                                 )));
  if (pauStack_4e8 == pauStack_4f8) {
    pdb_142d8a810(&pauStack_4f8);
  }
  lVar51 = (longlong)pauVar29 * 0x70;
  *(byte **)(pbStack_4f0 + lVar51 + 0x60) = uStack_298;
  *(byte **)((longlong)(pbStack_4f0 + lVar51 + 0x60) + 8) = uStack_290;
  *(ulonglong *)(pbStack_4f0 + lVar51 + 0x50) = CONCAT44(uStack_2a4,uStack_2a8);
  *(ulonglong *)(pbStack_4f0 + lVar51 + 0x50 + 8) = CONCAT44(uStack_29c,uStack_2a0);
  *(ulonglong *)(pbStack_4f0 + lVar51 + 0x40) = CONCAT44(uStack_2b4,uStack_2b8);
  *(ulonglong *)(pbStack_4f0 + lVar51 + 0x40 + 8) = CONCAT44(uStack_2ac,uStack_2b0);
  *(ulonglong **)(pbStack_4f0 + lVar51 + 0x30) = uStack_2c8;
  *(ulonglong *)(pbStack_4f0 + lVar51 + 0x30 + 8) = CONCAT44(uStack_2bc,uStack_2c0);
  *(undefined8 *)(pbStack_4f0 + lVar51 + 0x20) = auStack_2d8._0_8_;
  *(undefined8 *)(pbStack_4f0 + lVar51 + 0x20 + 8) = auStack_2d8._8_8_;
  *(undefined1 (*) [16])(pbStack_4f0 + lVar51 + 0x10) = auStack_2e8;
  *(undefined1 (*) [16])(pbStack_4f0 + lVar51) = _auStack_2f8;
  pauStack_4e8 = (undefined1 (*) [16])(*pauVar29 + 1);
  pauVar24 = pauStack_418;
  if (puStack_110 == puStack_4b0) goto LAB_140c383f9;
  goto LAB_140c36ee2;
code_r0x000140c37400:
  uVar40 = (ushort)(uVar48 - 1) & (ushort)uVar48;
  uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar40);
  if (uVar40 == 0) goto LAB_140c37418;
  goto LAB_140c373d9;
LAB_140c36a74:
  pbVar23 = (byte *)(lVar20 - 8);
LAB_140c36a90:
  uVar5 = *(undefined4 *)pbVar23;
  auStack_2f8 = (undefined1  [8])pbStack_100;
  if (pbStack_320 != (byte *)0x0) {
    uVar21 = pdb_1400af0a0(puStack_5b0,auStack_2f8);
    bVar53 = (byte)(uVar21 >> 0x39);
    auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
    auVar54 = pshuflw(auVar54,auVar54,0);
    lVar51 = 0;
    while( true ) {
      uVar21 = uVar21 & (ulonglong)pbStack_140;
      pcVar1 = *pauStack_128 + uVar21;
      auVar67[0] = -(*pcVar1 == auVar54[0]);
      auVar67[1] = -(pcVar1[1] == auVar54[1]);
      auVar67[2] = -(pcVar1[2] == auVar54[2]);
      auVar67[3] = -(pcVar1[3] == auVar54[3]);
      auVar67[4] = -(pcVar1[4] == auVar54[4]);
      auVar67[5] = -(pcVar1[5] == auVar54[5]);
      auVar67[6] = -(pcVar1[6] == auVar54[6]);
      auVar67[7] = -(pcVar1[7] == auVar54[7]);
      auVar67[8] = -(pcVar1[8] == auVar54[0]);
      auVar67[9] = -(pcVar1[9] == auVar54[1]);
      auVar67[10] = -(pcVar1[10] == auVar54[2]);
      auVar67[0xb] = -(pcVar1[0xb] == auVar54[3]);
      auVar67[0xc] = -(pcVar1[0xc] == auVar54[4]);
      auVar67[0xd] = -(pcVar1[0xd] == auVar54[5]);
      auVar67[0xe] = -(pcVar1[0xe] == auVar54[6]);
      auVar67[0xf] = -(pcVar1[0xf] == auVar54[7]);
      uVar40 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
      uVar48 = (uint)uVar40;
      while (uVar40 != 0) {
        uVar28 = 0;
        for (uVar33 = uVar48; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar44 = uVar28 + uVar21 & (ulonglong)pbStack_140;
        if (pbStack_100 == *(byte **)pauStack_128[-1 - uVar44]) {
          param_5 = (undefined8 *)(pauStack_128[-1 - uVar44] + 8);
          goto LAB_140c36b60;
        }
        uVar40 = (ushort)(uVar48 - 1) & (ushort)uVar48;
        uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar40);
      }
      auVar57[0] = -(*pcVar1 == -1);
      auVar57[1] = -(pcVar1[1] == -1);
      auVar57[2] = -(pcVar1[2] == -1);
      auVar57[3] = -(pcVar1[3] == -1);
      auVar57[4] = -(pcVar1[4] == -1);
      auVar57[5] = -(pcVar1[5] == -1);
      auVar57[6] = -(pcVar1[6] == -1);
      auVar57[7] = -(pcVar1[7] == -1);
      auVar57[8] = -(pcVar1[8] == -1);
      auVar57[9] = -(pcVar1[9] == -1);
      auVar57[10] = -(pcVar1[10] == -1);
      auVar57[0xb] = -(pcVar1[0xb] == -1);
      auVar57[0xc] = -(pcVar1[0xc] == -1);
      auVar57[0xd] = -(pcVar1[0xd] == -1);
      auVar57[0xe] = -(pcVar1[0xe] == -1);
      auVar57[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') break;
      uVar21 = uVar21 + lVar51 + 0x10;
      lVar51 = lVar51 + 0x10;
    }
  }
LAB_140c36b60:
  uVar47 = *(undefined4 *)param_5;
  uStack_f3 = 1;
  pauStack_168 = pauVar52;
  pdb_1419a77d0(auStack_2f8,&lStack_408,param_5,fVar76,&UNK_14306c760);
  uVar18 = uStack_3a4;
  uVar17 = uStack_3a8;
  uVar6 = uStack_3ac;
  uVar16 = uStack_3b0;
  uVar15 = uStack_3b4;
  pbVar23 = (byte *)uStack_2f0;
  uVar38 = auStack_2e8._0_8_;
  pbStack_4a8 = (byte *)auStack_2f8;
  pbStack_4a0 = (byte *)uStack_2f0;
  pbStack_498 = (byte *)auStack_2e8._0_8_;
  puStack_490 = (ulonglong *)auStack_2e8._8_8_;
  pbStack_488 = (byte *)auStack_2d8._0_8_;
  puStack_480 = (ulonglong *)auStack_2d8._8_8_;
  uStack_478 = uStack_2c8;
  uStack_470 = CONCAT44(uStack_470._4_4_,2);
  uVar19 = uStack_3a0._5_1_;
  uStack_454 = uStack_3b4;
  uStack_450 = uStack_3b0;
  uStack_44c = uStack_3ac;
  uStack_448 = uStack_3a8;
  pbStack_440 = (byte *)CONCAT26(CONCAT11(uStack_3a0._7_1_,uStack_3a0._6_1_ == '\x01'),
                                 (int6)uStack_3a0);
  uStack_444 = uStack_3a4;
  pauStack_120 = (undefined1 (*) [16])CONCAT71(pauStack_120._1_7_,pbStack_3f8 == (byte *)0x0);
  if (pbStack_3f8 == (byte *)0x0) {
    uStack_f6 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c778,0x2f,&UNK_14306c7a8);
  }
  pauStack_418 = (undefined1 (*) [16])CONCAT71(pauStack_418._1_7_,uStack_3a0._4_1_);
  puStack_1a8 = (ulonglong *)CONCAT71(puStack_1a8._1_7_,uStack_3a0._3_1_);
  pbStack_178 = (byte *)CONCAT71(pbStack_178._1_7_,(undefined1)uStack_3a0);
  pbStack_198 = (byte *)CONCAT71(pbStack_198._1_7_,uStack_3a0._2_1_);
  pbStack_1e8 = (byte *)CONCAT71(pbStack_1e8._1_7_,uStack_3a0._1_1_);
  puStack_110 = (ulonglong *)CONCAT71(puStack_110._1_7_,uStack_3a0._7_1_);
  puStack_4b0 = (ulonglong *)CONCAT71(puStack_4b0._1_7_,uStack_3a0._6_1_ == '\x01');
  puStack_410 = (ulonglong *)CONCAT44(puStack_410._4_4_,uVar5);
  pbStack_658 = (byte *)CONCAT44(uStack_3a4,uStack_3a8);
  uStack_650 = uStack_3a0;
  pbStack_660 = (byte *)CONCAT44(uStack_3ac,uStack_3b0);
  uStack_668 = uStack_3b8;
  uStack_664 = uStack_3b4;
  uStack_678 = uStack_3c8;
  uStack_674 = uStack_3c4;
  uStack_670 = uStack_3c0;
  uStack_66c = uStack_3bc;
  uStack_688 = (uint)(float)uStack_3d8;
  uStack_684 = uStack_3d8._4_4_;
  uStack_680 = uStack_3d0;
  uStack_67c = uStack_3cc;
  auStack_698._8_8_ = puStack_3e0;
  auStack_698._0_8_ = auStack_3f0._8_8_;
  auStack_6a8._8_8_ = auStack_3f0._0_8_;
  auStack_6a8._0_8_ = pbStack_3f8;
  auStack_6b8._8_8_ = pbStack_400;
  auStack_6b8._0_8_ = lStack_408;
  uVar21 = auStack_2e8._0_8_ * 8;
  if (uVar21 < 0x7ffffffffffffffd && (ulonglong)auStack_2e8._0_8_ >> 0x3d == 0) {
    if (uVar21 == 0) {
      pbStack_190 = (byte *)0x4;
      pbStack_148 = (byte *)0x0;
      pbStack_138 = pbVar22;
      pbVar22 = pbStack_148;
    }
    else {
      pbStack_138 = pbVar22;
      pdb_14007ee60();
      uVar50 = 4;
      pbStack_190 = pub_1406abab0(uVar21,4);
      pbVar22 = (byte *)uVar38;
      if (pbStack_190 == (byte *)0x0) goto LAB_140c38da9;
    }
    pbStack_148 = pbVar22;
    if ((byte *)uVar38 != (byte *)0x0) {
      pub_142e32760(pbStack_190,pbVar23,uVar21);
    }
    puVar2 = puStack_480;
    pbVar22 = pbStack_488;
    uVar21 = (longlong)puStack_480 * 4;
    if (uVar21 < 0x7ffffffffffffffd && (ulonglong)puStack_480 >> 0x3e == 0) {
      if (uVar21 == 0) {
        pbVar23 = (byte *)0x4;
LAB_140c3851b:
        pbVar22 = pbStack_138;
        lVar51 = lStack_528;
        pbStack_280 = pbStack_190;
        uStack_278 = (byte *)uVar38;
        uStack_270 = puVar2;
        puStack_260 = puVar2;
        pbStack_218 = pbStack_100;
        uStack_210 = 1;
        uStack_2c8 = (ulonglong *)CONCAT44(uStack_684,uStack_688);
        _auStack_2f8 = auStack_6b8;
        auStack_2e8 = auStack_6a8;
        auStack_2d8 = auStack_698;
        uStack_2c0 = uStack_680;
        uStack_2bc = uStack_67c;
        uStack_2b8 = uStack_678;
        uStack_2b4 = uStack_674;
        uStack_2b0 = uStack_670;
        uStack_2ac = uStack_66c;
        uStack_2a8 = uStack_668;
        uStack_2a4 = uStack_664;
        uStack_2a0 = SUB84(pbStack_660,0);
        uStack_29c = (undefined4)((ulonglong)pbStack_660 >> 0x20);
        uStack_298 = pbStack_658;
        uStack_290 = uStack_650;
        uStack_258 = (uint)uStack_478;
        uStack_250 = 2;
        uStack_234 = uVar15;
        uStack_230 = uVar16;
        uStack_22c = uVar6;
        uStack_228 = uVar17;
        uStack_224 = uVar18;
        pbStack_220 = (byte *)CONCAT17(puStack_110._0_1_,
                                       CONCAT16(puStack_4b0._0_1_,
                                                CONCAT15(uVar19,CONCAT14(pauStack_418._0_1_,
                                                                         CONCAT13(puStack_1a8._0_1_,
                                                                                  CONCAT12(
                                                  pbStack_198._0_1_,
                                                  CONCAT11(pbStack_1e8._0_1_,(char)pbStack_178))))))
                                      );
        pbStack_288 = pbStack_148;
        pbStack_268 = pbVar23;
        fStack_20c = fVar75;
        fStack_208 = fVar76;
        if (lStack_528 == lStack_538) {
          pdb_142d92040(&lStack_538);
        }
        pub_142e32760(lVar51 * 0x100 + lStack_530,auStack_2f8,0x100);
        pauVar52 = pauStack_168;
        param_5 = puStack_1b0;
        lVar20 = lStack_510;
        lStack_528 = lVar51 + 1;
        uStack_290 = (byte *)CONCAT44(uStack_444,uStack_448);
        pbStack_288 = pbStack_440;
        uStack_298 = (byte *)CONCAT44(uStack_44c,uStack_450);
        uStack_2a0 = uStack_458;
        uStack_29c = uStack_454;
        uStack_2b0 = (undefined4)lStack_468;
        uStack_2ac = (undefined4)((ulonglong)lStack_468 >> 0x20);
        uStack_2a8 = (undefined4)lStack_460;
        uStack_2a4 = (undefined4)((ulonglong)lStack_460 >> 0x20);
        uStack_2c0 = (uint)uStack_478;
        uStack_2bc = uStack_478._4_4_;
        uStack_2b8 = (uint)uStack_470;
        uStack_2b4 = uStack_470._4_4_;
        uStack_2c8 = puStack_480;
        auStack_2d8._8_8_ = pbStack_488;
        auStack_2d8._0_8_ = puStack_490;
        auStack_2e8._8_8_ = pbStack_498;
        auStack_2e8._0_8_ = pbStack_4a0;
        pbStack_280 = pbStack_100;
        uStack_278 = (byte *)CONCAT44(puStack_410._0_4_,(int)lStack_420);
        uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,uVar47);
        uStack_2f0 = (undefined1 (*) [16])pbStack_4a8;
        auStack_2f8 = (undefined1  [8])0x8000000000000001;
        if (lStack_510 == lStack_520) {
          pdb_142d92040(&lStack_520);
        }
        pub_142e32760(lVar20 * 0x100 + lStack_518,auStack_2f8,0x100);
        lStack_510 = lVar20 + 1;
        fVar77 = _DAT_142e36f28;
        goto LAB_140c36499;
      }
      puStack_150 = puVar49;
      pdb_14007ee60();
      uVar50 = 4;
      pbVar23 = pub_1406abab0(uVar21,4);
      if (pbVar23 != (byte *)0x0) {
        puVar49 = puStack_150;
        if (puVar2 != (ulonglong *)0x0) {
          puVar32 = (ulonglong *)((longlong)puVar2 - 1U);
          if (puVar2 < (ulonglong *)((longlong)puVar2 - 1U)) {
            puVar32 = puVar2;
          }
          if (puVar32 < (ulonglong *)0x8) {
            lVar51 = 0;
            puVar32 = puVar2;
            pbVar37 = pbVar22;
          }
          else {
            uVar44 = (longlong)puVar32 + 1;
            uVar21 = (ulonglong)((uint)uVar44 & 7);
            if ((uVar44 & 7) == 0) {
              uVar21 = 8;
            }
            lVar51 = uVar44 - uVar21;
            puVar32 = (ulonglong *)((longlong)puVar2 - lVar51);
            pbVar37 = pbVar22 + lVar51 * 4;
            lVar20 = 0;
            do {
              uVar50 = *(undefined8 *)(pbVar22 + lVar20 * 4 + 8);
              uVar11 = *(undefined8 *)(pbVar22 + lVar20 * 4 + 0x10);
              uVar12 = *(undefined8 *)(pbVar22 + lVar20 * 4 + 0x10 + 8);
              *(undefined8 *)(pbVar23 + lVar20 * 4) = *(undefined8 *)(pbVar22 + lVar20 * 4);
              *(undefined8 *)(pbVar23 + lVar20 * 4 + 8) = uVar50;
              *(undefined8 *)(pbVar23 + lVar20 * 4 + 0x10) = uVar11;
              *(undefined8 *)(pbVar23 + lVar20 * 4 + 0x10 + 8) = uVar12;
              lVar20 = lVar20 + 8;
            } while (lVar51 != lVar20);
          }
          pbVar42 = pbVar23 + lVar51 * 4;
          do {
            if (pbVar37 == pbVar22 + (longlong)puVar2 * 4) break;
            uVar5 = *(undefined4 *)pbVar37;
            pbVar37 = pbVar37 + 4;
            *(undefined4 *)pbVar42 = uVar5;
            pbVar42 = pbVar42 + 4;
            puVar32 = (ulonglong *)((longlong)puVar32 + -1);
          } while (puVar32 != (ulonglong *)0x0);
        }
        goto LAB_140c3851b;
      }
    }
    else {
      uVar50 = 0;
    }
    pdb_142dc7e2a(uVar50,uVar21);
  }
  else {
    uVar50 = 0;
LAB_140c38da9:
    pdb_142dc7e2a(uVar50,uVar21);
  }
  goto LAB_140c397b3;
LAB_140c38a97:
  pbVar43 = (byte *)(lVar20 - 8);
LAB_140c38ab0:
  auStack_6b8._0_8_ = pbStack_100;
  puVar35 = puStack_1b0;
  uVar47 = *(undefined4 *)pbVar43;
  if (pbStack_320 != (byte *)0x0) {
    pbStack_178 = (byte *)CONCAT44(pbStack_178._4_4_,*(undefined4 *)pbVar43);
    uVar21 = pdb_1400af0a0(puStack_5b0,auStack_6b8);
    bVar53 = (byte)(uVar21 >> 0x39);
    auVar54 = ZEXT216(CONCAT11(bVar53,bVar53));
    auVar54 = pshuflw(auVar54,auVar54,0);
    lVar51 = 0;
    while( true ) {
      uVar21 = uVar21 & (ulonglong)pbStack_140;
      auVar70 = *(undefined1 (*) [16])(*pauStack_128 + uVar21);
      auVar74[0] = -(auVar70[0] == auVar54[0]);
      auVar74[1] = -(auVar70[1] == auVar54[1]);
      auVar74[2] = -(auVar70[2] == auVar54[2]);
      auVar74[3] = -(auVar70[3] == auVar54[3]);
      auVar74[4] = -(auVar70[4] == auVar54[4]);
      auVar74[5] = -(auVar70[5] == auVar54[5]);
      auVar74[6] = -(auVar70[6] == auVar54[6]);
      auVar74[7] = -(auVar70[7] == auVar54[7]);
      auVar74[8] = -(auVar70[8] == auVar54[0]);
      auVar74[9] = -(auVar70[9] == auVar54[1]);
      auVar74[10] = -(auVar70[10] == auVar54[2]);
      auVar74[0xb] = -(auVar70[0xb] == auVar54[3]);
      auVar74[0xc] = -(auVar70[0xc] == auVar54[4]);
      auVar74[0xd] = -(auVar70[0xd] == auVar54[5]);
      auVar74[0xe] = -(auVar70[0xe] == auVar54[6]);
      auVar74[0xf] = -(auVar70[0xf] == auVar54[7]);
      uVar40 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf;
      uVar33 = (uint)uVar40;
      while (uVar47 = pbStack_178._0_4_, uVar40 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar33; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar44 = uVar8 + uVar21 & (ulonglong)pbStack_140;
        if (pbStack_100 == *(byte **)pauStack_128[-1 - uVar44]) {
          puVar35 = (undefined8 *)(pauStack_128[-1 - uVar44] + 8);
          goto LAB_140c38ba8;
        }
        uVar40 = (ushort)(uVar33 - 1) & (ushort)uVar33;
        uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar40);
      }
      auVar64[0] = -(auVar70[0] == -1);
      auVar64[1] = -(auVar70[1] == -1);
      auVar64[2] = -(auVar70[2] == -1);
      auVar64[3] = -(auVar70[3] == -1);
      auVar64[4] = -(auVar70[4] == -1);
      auVar64[5] = -(auVar70[5] == -1);
      auVar64[6] = -(auVar70[6] == -1);
      auVar64[7] = -(auVar70[7] == -1);
      auVar64[8] = -(auVar70[8] == -1);
      auVar64[9] = -(auVar70[9] == -1);
      auVar64[10] = -(auVar70[10] == -1);
      auVar64[0xb] = -(auVar70[0xb] == -1);
      auVar64[0xc] = -(auVar70[0xc] == -1);
      auVar64[0xd] = -(auVar70[0xd] == -1);
      auVar64[0xe] = -(auVar70[0xe] == -1);
      auVar64[0xf] = -(auVar70[0xf] == -1);
      puVar35 = puStack_1b0;
      if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar64 >> 0x3f,0) & 1) != 0) || (SUB161(auVar64 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar64 >> 0x4f,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar64 >> 0x5f,0) & 1) != 0) || (SUB161(auVar64 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar64 >> 0x6f,0) & 1) != 0) || (SUB161(auVar64 >> 0x77,0) & 1) != 0) ||
          auVar64[0xf] < '\0') break;
      uVar21 = uVar21 + lVar51 + 0x10;
      lVar51 = lVar51 + 0x10;
    }
  }
LAB_140c38ba8:
  lVar51 = lStack_558;
  pbStack_280 = pbStack_100;
  auStack_2e8._8_8_ = pbVar37;
  auStack_2e8._0_8_ = pbVar42;
  auStack_2d8._8_8_ = pbVar22;
  auStack_2d8._0_8_ = puStack_110;
  uStack_2c0 = uVar28;
  uStack_2a4 = SUB84(pbStack_498,0);
  uStack_2a0 = (undefined4)((ulonglong)pbStack_498 >> 0x20);
  uStack_2b4 = SUB84(pbStack_4a8,0);
  uStack_2b0 = (undefined4)((ulonglong)pbStack_4a8 >> 0x20);
  uStack_2ac = SUB84(pbStack_4a0,0);
  uStack_2a8 = (undefined4)((ulonglong)pbStack_4a0 >> 0x20);
  uStack_29c = pbStack_198._0_4_;
  pbStack_288 = pbStack_1e8;
  uStack_278 = (byte *)CONCAT44(uVar47,uVar5);
  uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,*(undefined4 *)puVar35);
  uStack_2f0 = pauStack_168;
  auStack_2f8 = (undefined1  [8])0x8000000000000001;
  uStack_2c8 = puStack_110;
  uStack_2b8 = uVar48;
  uStack_298 = pbVar23;
  uStack_290 = pbVar13;
  if (lStack_558 == lStack_568) {
    pdb_142d92040(&lStack_568);
  }
  pub_142e32760(lVar51 * 0x100 + lStack_560,auStack_2f8,0x100);
  lStack_558 = lVar51 + 1;
  pbVar22 = pbStack_138;
  puVar49 = puStack_150;
  if (pauStack_120 < (undefined1 (*) [16])0x124924924924925) goto LAB_140c36821;
LAB_140c38dba:
  uVar38 = 0;
  pbVar23 = pbStack_748;
LAB_140c38dc0:
  pdb_142dc7e2a(uVar38,pbVar23);
LAB_140c397b3:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

