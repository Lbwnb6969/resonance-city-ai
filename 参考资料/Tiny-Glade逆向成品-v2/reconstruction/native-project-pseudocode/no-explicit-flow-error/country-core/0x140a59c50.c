// VA 0x140a59c50, PDB extent 10812 bytes
// country_core::startup::startup_sheep::startup_sheep
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_sheep::startup_sheep
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_sheep.rs
   Extent: 10812 */

void pdb_140a59c50(undefined8 *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,undefined8 param_8)

{
  ulonglong uVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte *pbVar18;
  longlong lVar19;
  byte *pbVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  byte *pbVar25;
  longlong lVar26;
  longlong lVar27;
  ushort uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte bVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 unaff_XMM7_Ba;
  char cVar47;
  undefined1 unaff_XMM7_Bb;
  char cVar48;
  undefined1 unaff_XMM7_Bc;
  char cVar49;
  undefined1 unaff_XMM7_Bd;
  char cVar50;
  undefined1 unaff_XMM7_Be;
  char cVar51;
  undefined1 unaff_XMM7_Bf;
  char cVar52;
  undefined1 unaff_XMM7_Bg;
  char cVar53;
  undefined1 unaff_XMM7_Bh;
  char cVar54;
  undefined1 unaff_XMM7_Bi;
  char cVar55;
  undefined1 unaff_XMM7_Bj;
  char cVar56;
  undefined1 unaff_XMM7_Bk;
  char cVar57;
  undefined1 unaff_XMM7_Bl;
  char cVar58;
  undefined1 unaff_XMM7_Bm;
  char cVar59;
  undefined1 unaff_XMM7_Bn;
  char cVar60;
  undefined1 unaff_XMM7_Bo;
  char cVar61;
  undefined1 unaff_XMM7_Bp;
  char cVar62;
  float fVar63;
  float fVar64;
  undefined8 uStack_b98;
  undefined4 auStack_b90 [118];
  undefined8 uStack_9b8;
  undefined4 auStack_9b0 [114];
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 auStack_7d8 [80];
  byte *pbStack_788;
  byte *pbStack_780;
  byte *pbStack_778;
  byte *pbStack_770;
  ulonglong uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  longlong lStack_750;
  ulonglong uStack_748;
  ulonglong uStack_740;
  ulonglong uStack_738;
  ulonglong uStack_730;
  ulonglong uStack_728;
  ulonglong uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 auStack_708 [144];
  undefined4 uStack_678;
  undefined8 uStack_670;
  byte *pbStack_668;
  byte *pbStack_660;
  undefined8 uStack_658;
  undefined4 uStack_650;
  undefined8 uStack_64c;
  undefined4 uStack_644;
  ulonglong uStack_638;
  ulonglong uStack_630;
  ulonglong uStack_628;
  ulonglong uStack_620;
  ulonglong uStack_618;
  ulonglong uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  byte *pbStack_5e8;
  byte *pbStack_5e0;
  float fStack_5d8;
  undefined4 uStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  byte *pbStack_5b8;
  byte *pbStack_5b0;
  byte *pbStack_5a8;
  byte *pbStack_5a0;
  ulonglong uStack_598;
  undefined8 uStack_590;
  ulonglong uStack_588;
  undefined4 uStack_580;
  undefined4 uStack_578;
  undefined4 uStack_570;
  undefined4 uStack_568;
  ulonglong uStack_560;
  undefined8 uStack_558;
  undefined1 uStack_550;
  undefined4 uStack_54c;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  undefined4 uStack_538;
  float fStack_534;
  undefined4 uStack_530;
  float fStack_52c;
  undefined8 uStack_528;
  undefined1 uStack_520;
  undefined4 uStack_518;
  undefined4 uStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  float fStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulonglong uStack_3a8;
  ulonglong uStack_3a0;
  ulonglong uStack_398;
  ulonglong uStack_390;
  ulonglong uStack_388;
  ulonglong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined8 uStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  byte *pbStack_338;
  byte *pbStack_330;
  ulonglong uStack_328;
  undefined1 uStack_320;
  undefined4 uStack_31f;
  undefined2 uStack_31b;
  undefined1 uStack_319;
  ulonglong uStack_310;
  ulonglong uStack_308;
  ulonglong uStack_300;
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  undefined8 uStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  ulonglong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  longlong lStack_2a0;
  ulonglong uStack_298;
  ulonglong uStack_290;
  ulonglong uStack_288;
  ulonglong uStack_280;
  ulonglong uStack_278;
  ulonglong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  ulonglong uStack_228;
  undefined8 uStack_220;
  ulonglong uStack_218;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  ulonglong uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  byte *pbStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  byte *pbStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar21 = *param_3;
  pbVar25 = &UNK_14303e628;
  lVar19 = pdb_140a2c860(uVar21,&UNK_14303e628,10);
  pbStack_110 = pbVar25;
  if (lVar19 == 1) {
LAB_140a59cf7:
    uVar8 = *param_6;
    pdb_140a596f0(&uStack_3a8,uVar8,&UNK_14303e710,0x12,&UNK_14303e728);
    pdb_141b241d0(&pbStack_788,&UNK_14303e740,0x1e);
    if (SBORROW8(0,(longlong)pbStack_788)) {
      pbStack_208 = pbStack_780;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303f138,0x2b,&pbStack_208,&UNK_14303f118,&UNK_14303e760);
    }
    uStack_198 = uStack_718;
    uStack_190 = uStack_710;
    uStack_1a8 = uStack_728;
    uStack_1a0 = uStack_720;
    uStack_1b8 = uStack_738;
    uStack_1b0 = uStack_730;
    uStack_1c8 = uStack_748;
    uStack_1c0 = uStack_740;
    uStack_1d8 = (undefined4)uStack_758;
    uStack_1d4 = (undefined4)((ulonglong)uStack_758 >> 0x20);
    lStack_1d0 = lStack_750;
    uStack_1e8 = uStack_768;
    uStack_1e0 = (undefined4)uStack_760;
    uStack_1dc = (undefined4)((ulonglong)uStack_760 >> 0x20);
    pbStack_1f8 = pbStack_778;
    pbStack_1f0 = pbStack_770;
    pbStack_208 = pbStack_788;
    pbStack_200 = pbStack_780;
    uVar9 = *param_4;
    pdb_140b08d00(&pbStack_208,&UNK_14303e778,0xb,uVar9,uVar21);
    pdb_141b241d0(&pbStack_788,&UNK_14303e783,0x1b);
    if (SBORROW8(0,(longlong)pbStack_788)) {
      pbStack_208 = pbStack_780;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303f138,0x2b,&pbStack_208,&UNK_14303f118,&UNK_14303e7a0);
    }
    uStack_198 = uStack_718;
    uStack_190 = uStack_710;
    uStack_1a8 = uStack_728;
    uStack_1a0 = uStack_720;
    uStack_1b8 = uStack_738;
    uStack_1b0 = uStack_730;
    uStack_1c8 = uStack_748;
    uStack_1c0 = uStack_740;
    uStack_1d8 = (undefined4)uStack_758;
    uStack_1d4 = (undefined4)((ulonglong)uStack_758 >> 0x20);
    lStack_1d0 = lStack_750;
    uStack_1e8 = uStack_768;
    uStack_1e0 = (undefined4)uStack_760;
    uStack_1dc = (undefined4)((ulonglong)uStack_760 >> 0x20);
    pbStack_1f8 = pbStack_778;
    pbStack_1f0 = pbStack_770;
    pbStack_208 = pbStack_788;
    pbStack_200 = pbStack_780;
    pbStack_160 = (byte *)pdb_140b08d00(&pbStack_208,&UNK_14303e7b8,0xd,uVar9,uVar21);
    pdb_141b241d0(&pbStack_788,&UNK_14303e7c5,0x1a);
    if (SBORROW8(0,(longlong)pbStack_788)) {
      pbStack_208 = pbStack_780;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303f138,0x2b,&pbStack_208,&UNK_14303f118,&UNK_14303e7e0);
    }
    uStack_198 = uStack_718;
    uStack_190 = uStack_710;
    uStack_1a8 = uStack_728;
    uStack_1a0 = uStack_720;
    uStack_1b8 = uStack_738;
    uStack_1b0 = uStack_730;
    uStack_1c8 = uStack_748;
    uStack_1c0 = uStack_740;
    uStack_1d8 = (undefined4)uStack_758;
    uStack_1d4 = (undefined4)((ulonglong)uStack_758 >> 0x20);
    lStack_1d0 = lStack_750;
    uStack_1e8 = uStack_768;
    uStack_1e0 = (undefined4)uStack_760;
    uStack_1dc = (undefined4)((ulonglong)uStack_760 >> 0x20);
    pbStack_1f8 = pbStack_778;
    pbStack_1f0 = pbStack_770;
    pbStack_208 = pbStack_788;
    pbStack_200 = pbStack_780;
    uStack_158 = pdb_140b08d00(&pbStack_208,&UNK_14303e7f8,0xc,uVar9,uVar21);
    pdb_140a596f0(&uStack_310,uVar8,&UNK_14303e804,0x1f,&UNK_14303e828);
    fVar17 = _DAT_14303e470;
    fVar16 = _DAT_142f3e558;
    pbVar3 = _UNK_142e4e658;
    pbVar25 = _DAT_142e4e650;
    fVar15 = _DAT_142e36f38;
    uStack_360 = _DAT_14303e450;
    uStack_358 = 0x3f266666;
    uStack_370 = _DAT_142f6e3c0;
    uStack_368 = 0x3f800000;
    uStack_250 = 0x16e5c;
    plStack_108 = (longlong *)*param_1;
    puStack_170 = (undefined8 *)
                  CONCAT44(puStack_170._4_4_,*(undefined4 *)((longlong)param_7 + 0x1c));
    lVar19 = *param_7;
    puStack_168 = (undefined8 *)param_7[2];
    plStack_100 = *(longlong **)param_2;
    uVar31 = 0;
    fVar63 = (float)_DAT_14303e460;
    uVar22 = (ulonglong)_DAT_14303e460 >> 0x20;
    uStack_350 = uVar8;
    uStack_150 = uVar21;
    while( true ) {
      fVar64 = *(float *)((longlong)&uStack_360 + uVar31 * 4) * _DAT_142e3c670;
      if (*plStack_108 == 0) {
        pdb_14007ee60();
        pbVar20 = pub_1406abab0(0x15,1);
        uVar21 = _UNK_14303e860;
        if (pbVar20 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x15);
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        *(undefined8 *)pbVar20 = _DAT_14303e858;
        *(undefined8 *)(pbVar20 + 8) = uVar21;
        pbVar20[0xd] = 0x65;
        pbVar20[0xe] = 0x65;
        pbVar20[0xf] = 0x70;
        pbVar20[0x10] = 0x2f;
        pbVar20[0x11] = 0x42;
        pbVar20[0x12] = 0x61;
        pbVar20[0x13] = 0x61;
        pbVar20[0x14] = 0x68;
        pbStack_788 = (byte *)0x0;
        pbStack_778 = (byte *)0x15;
        uStack_768 = 0x15;
        uStack_760 = CONCAT71(uStack_760._1_7_,2);
        pbStack_770 = pbVar20;
      }
      else {
        pdb_140a8b180(&pbStack_788,*plStack_108 + 0x10,&DAT_14303e858,0x15);
        if ((int)pbStack_788 == 2) {
          pbStack_208 = pbStack_780;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14303f138,0x2b,&pbStack_208,&UNK_14303f118,&UNK_14303e870);
        }
      }
      uStack_328 = uStack_768;
      uStack_320 = (undefined1)uStack_760;
      uStack_31f = uStack_760._1_4_;
      uStack_31b = uStack_760._5_2_;
      uStack_319 = uStack_760._7_1_;
      pbStack_338 = pbStack_778;
      pbStack_330 = pbStack_770;
      pbStack_348 = pbStack_788;
      pbStack_340 = pbStack_780;
      uVar24 = *(uint *)((longlong)&uStack_370 + uVar31 * 4);
      uStack_f2 = 1;
      pdb_140a8e730(&pbStack_348,&UNK_14303e888,5);
      uStack_f2 = 1;
      fVar33 = (float)pdb_140e02880(&uStack_250);
      uStack_f2 = 1;
      fVar34 = (float)pdb_140e02880(&uStack_250);
      fVar46 = (fVar33 + fVar15) * fVar16;
      fVar33 = (fVar34 + fVar15) * fVar63;
      fVar34 = fVar64 * (float)uVar22;
      *(undefined4 *)puStack_168 = puStack_170._0_4_;
      iVar7 = *(int *)(lVar19 + 8);
      *(int *)(lVar19 + 8) = iVar7 + 1;
      pdb_14007ee60();
      pbVar20 = pub_1406abab0(0x18,8);
      if (pbVar20 == (byte *)0x0) break;
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      *(float *)(pbVar20 + 8) = fVar46;
      pbVar20[0xc] = 0;
      pbVar20[0xd] = 0;
      pbVar20[0xe] = 0;
      pbVar20[0xf] = 0;
      *(float *)(pbVar20 + 0x10) = fVar33;
      *(int *)(pbVar20 + 0x14) = iVar7;
      pbStack_788 = (byte *)0x1;
      pbStack_778 = (byte *)0x1;
      uStack_f2 = 1;
      pbStack_780 = pbVar20;
      pdb_141162f00(&uStack_3c0,lVar19,&pbStack_788);
      uStack_f5 = 1;
      uStack_f6 = 1;
      pdb_140df4940(&pbStack_788);
      pbVar18 = pbStack_780;
      pbVar20 = pbStack_788;
      LOCK();
      piVar2 = (int *)((uStack_3a0 & 0xffffffffffffffc0) + 0x10 +
                      (ulonglong)((uint)uStack_3a0 & 0x3f) * 4);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (uStack_398 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_398 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_398 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_390 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_390 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_390 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_388 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_388 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_388 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_380 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_380 & 0xfffffffffffffffc) + 0x10 +
                        (ulonglong)((uint)uStack_380 & 3) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      pbStack_2d8 = (byte *)((ulonglong)pbStack_2d8 & 0xffffffff00000000);
      pbStack_2d0 = pbStack_110;
      uStack_298 = uStack_3a8;
      uStack_290 = uStack_3a0;
      uStack_288 = uStack_398;
      uStack_280 = uStack_390;
      uStack_278 = uStack_388;
      uStack_270 = uStack_380;
      uStack_268 = uStack_378;
      pbStack_2c8 = pbStack_788;
      pbStack_2c0 = pbStack_780;
      uStack_2b8 = (ulonglong)(uint)fVar46;
      uStack_2b0 = CONCAT44(fVar34,fVar33);
      uStack_2a8 = CONCAT44(fVar34,fVar34);
      uStack_260 = 0;
      uStack_220 = CONCAT17(uStack_319,CONCAT25(uStack_31b,CONCAT41(uStack_31f,uStack_320)));
      uStack_228 = uStack_328;
      pbStack_238 = pbStack_338;
      pbStack_230 = pbStack_330;
      pbStack_248 = pbStack_348;
      pbStack_240 = pbStack_340;
      uStack_218 = (ulonglong)uVar24;
      LOCK();
      piVar2 = (int *)((uStack_308 & 0xffffffffffffffc0) + 0x10 +
                      (ulonglong)((uint)uStack_308 & 0x3f) * 4);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (uStack_300 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_300 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_300 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_2f8 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_2f8 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_2f8 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_2f0 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_2f0 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_2f0 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_2e8 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_2e8 & 0xfffffffffffffffc) + 0x10 +
                        (ulonglong)((uint)uStack_2e8 & 3) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      uStack_148 = uStack_310;
      uStack_140 = uStack_308;
      uStack_138 = uStack_300;
      uStack_130 = uStack_2f8;
      uStack_128 = uStack_2f0;
      uStack_120 = uStack_2e8;
      uStack_118 = uStack_2e0;
      uStack_190 = pdb_141992d00(&uStack_310,*plStack_100 + 0x10,0,0);
      pbStack_208 = (byte *)((ulonglong)pbStack_208 & 0xffffffff00000000);
      pbStack_200 = pbStack_160;
      uStack_198 = uStack_118;
      uStack_1a8 = uStack_128;
      uStack_1a0 = uStack_120;
      uStack_1b8 = uStack_138;
      uStack_1b0 = uStack_130;
      uStack_1c8 = uStack_148;
      uStack_1c0 = uStack_140;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      pbStack_1f8 = pbVar25;
      pbStack_1f0 = pbVar3;
      uStack_1dc = 0x3f800000;
      uStack_1d8 = 0x3f800000;
      uStack_1d4 = 0x3f800000;
      uStack_188 = 0;
      LOCK();
      piVar2 = (int *)((uStack_308 & 0xffffffffffffffc0) + 0x10 +
                      (ulonglong)((uint)uStack_308 & 0x3f) * 4);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (uStack_300 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_300 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_300 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_2f8 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_2f8 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_2f8 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_2f0 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_2f0 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_2f0 & 0x3f) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (uStack_2e8 != 0) {
        LOCK();
        piVar2 = (int *)((uStack_2e8 & 0xfffffffffffffffc) + 0x10 +
                        (ulonglong)((uint)uStack_2e8 & 3) * 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      uStack_148 = uStack_310;
      uStack_140 = uStack_308;
      uStack_138 = uStack_300;
      uStack_130 = uStack_2f8;
      uStack_128 = uStack_2f0;
      uStack_120 = uStack_2e8;
      uStack_118 = uStack_2e0;
      uVar21 = pdb_141992d00(&uStack_310,*plStack_100 + 0x10,0,0);
      uStack_678 = 0;
      uStack_670 = uStack_158;
      uStack_608 = uStack_118;
      uStack_618 = uStack_128;
      uStack_610 = uStack_120;
      uStack_628 = uStack_138;
      uStack_620 = uStack_130;
      uStack_638 = uStack_148;
      uStack_630 = uStack_140;
      uStack_650 = 0;
      uStack_658 = 0;
      uStack_4c8 = uStack_3b0;
      uStack_4d8 = uStack_3c0;
      uStack_4d0 = uStack_3b8;
      pbStack_788 = pbStack_2d8;
      pbStack_780 = pbStack_2d0;
      pbStack_778 = pbStack_2c8;
      pbStack_770 = pbStack_2c0;
      uStack_768 = uStack_2b8;
      uStack_760 = uStack_2b0;
      uStack_758 = uStack_2a8;
      lStack_750 = lStack_2a0;
      uStack_748 = uStack_298;
      uStack_740 = uStack_290;
      uStack_738 = uStack_288;
      uStack_730 = uStack_280;
      uStack_728 = uStack_278;
      uStack_720 = uStack_270;
      uStack_718 = uStack_268;
      uStack_710 = uStack_260;
      pbStack_5e8 = pbVar20;
      pbStack_5e0 = pbVar18;
      uStack_5d4 = 0;
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_570 = 0;
      uStack_568 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      uStack_54c = 0;
      uStack_538 = 0;
      uStack_530 = 0;
      uStack_528 = 0;
      uStack_520 = 1;
      uStack_588 = uStack_218;
      uStack_598 = uStack_228;
      uStack_590 = uStack_220;
      pbStack_5a8 = pbStack_238;
      pbStack_5a0 = pbStack_230;
      pbStack_5b8 = pbStack_248;
      pbStack_5b0 = pbStack_240;
      uStack_518 = 0;
      uStack_508 = 2;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4f4 = 0x3c23d70a;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4e4 = 0x3f800000;
      fStack_5d8 = fVar46;
      fStack_5d0 = fVar33;
      fStack_5cc = fVar64;
      fStack_5c8 = fVar64;
      fStack_5c4 = fVar64;
      uStack_560 = uVar31;
      fStack_544 = fVar64;
      fStack_540 = fVar64;
      fStack_53c = fVar64;
      fStack_534 = fVar46;
      fStack_52c = fVar33;
      fStack_4e0 = fVar64 * fVar17;
      pub_142e32760(auStack_708,&pbStack_208,0x90);
      pbStack_668 = pbVar25;
      pbStack_660 = pbVar3;
      uStack_64c = 0x3f8000003f800000;
      uStack_644 = 0x3f800000;
      uStack_5f8 = 0;
      uStack_f5 = 0;
      uStack_f6 = 0;
      uStack_600 = uVar21;
      pdb_14161f770(&pbStack_208,param_8,&pbStack_788,&UNK_14303e890);
      uVar31 = uVar31 + 1;
      if (2 < uVar31) {
        pdb_140bfe500(auStack_7d8,uStack_150,uStack_350,param_8);
        pdb_14161d200(&pbStack_788,param_8,auStack_7d8,&UNK_14303e840);
        pdb_1409694c0(&uStack_310);
        pdb_1409694c0(&uStack_3a8);
        return;
      }
    }
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pdb_141b241d0(&pbStack_788,&UNK_14303e632,0x24);
  if (SBORROW8(0,(longlong)pbStack_788)) {
    pbStack_208 = pbStack_780;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303f138,0x2b,&pbStack_208,&UNK_14303f118,&UNK_14303e688);
  }
  uStack_268 = uStack_718;
  uStack_260 = uStack_710;
  uStack_278 = uStack_728;
  uStack_270 = uStack_720;
  uStack_288 = uStack_738;
  uStack_280 = uStack_730;
  uStack_298 = uStack_748;
  uStack_290 = uStack_740;
  uStack_2a8 = uStack_758;
  lStack_2a0 = lStack_750;
  uStack_2b8 = uStack_768;
  uStack_2b0 = uStack_760;
  pbStack_2c8 = pbStack_778;
  pbStack_2c0 = pbStack_770;
  pbStack_2d8 = pbStack_788;
  pbStack_2d0 = pbStack_780;
  uStack_f3 = 1;
  pdb_141b241d0(&pbStack_788,&UNK_14303e6a0,0x2c);
  if (SBORROW8(0,(longlong)pbStack_788)) {
    pbStack_208 = pbStack_780;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303f138,0x2b,&pbStack_208,&UNK_14303f118,&UNK_14303e6d0);
  }
  uStack_198 = uStack_718;
  uStack_190 = uStack_710;
  uStack_1a8 = uStack_728;
  uStack_1a0 = uStack_720;
  uStack_1b8 = uStack_738;
  uStack_1b0 = uStack_730;
  uStack_1c8 = uStack_748;
  uStack_1c0 = uStack_740;
  uStack_1d8 = (undefined4)uStack_758;
  uStack_1d4 = (undefined4)((ulonglong)uStack_758 >> 0x20);
  lStack_1d0 = lStack_750;
  uStack_1e8 = uStack_768;
  uStack_1e0 = (undefined4)uStack_760;
  uStack_1dc = (undefined4)((ulonglong)uStack_760 >> 0x20);
  pbStack_1f8 = pbStack_778;
  pbStack_1f0 = pbStack_770;
  pbStack_208 = pbStack_788;
  pbStack_200 = pbStack_780;
  if (uStack_288 != 0) {
    uVar22 = pdb_1400af950(&uStack_280,&UNK_14303e6e8,0xf);
    bVar32 = (byte)(uVar22 >> 0x39);
    auVar35 = ZEXT216(CONCAT11(bVar32,bVar32));
    auVar35 = pshuflw(auVar35,auVar35,0);
    lVar19 = 0;
    do {
      uVar22 = uVar22 & uStack_298;
      auVar6 = *(undefined1 (*) [16])(lStack_2a0 + uVar22);
      auVar45[0] = -(auVar6[0] == auVar35[0]);
      auVar45[1] = -(auVar6[1] == auVar35[1]);
      auVar45[2] = -(auVar6[2] == auVar35[2]);
      auVar45[3] = -(auVar6[3] == auVar35[3]);
      auVar45[4] = -(auVar6[4] == auVar35[4]);
      auVar45[5] = -(auVar6[5] == auVar35[5]);
      auVar45[6] = -(auVar6[6] == auVar35[6]);
      auVar45[7] = -(auVar6[7] == auVar35[7]);
      auVar45[8] = -(auVar6[8] == auVar35[0]);
      auVar45[9] = -(auVar6[9] == auVar35[1]);
      auVar45[10] = -(auVar6[10] == auVar35[2]);
      auVar45[0xb] = -(auVar6[0xb] == auVar35[3]);
      auVar45[0xc] = -(auVar6[0xc] == auVar35[4]);
      auVar45[0xd] = -(auVar6[0xd] == auVar35[5]);
      auVar45[0xe] = -(auVar6[0xe] == auVar35[6]);
      auVar45[0xf] = -(auVar6[0xf] == auVar35[7]);
      uVar28 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar13 = 0;
        for (uVar14 = uVar24; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        lVar29 = (uVar13 + uVar22 & uStack_298) * -0x38;
        if ((*(longlong *)(lStack_2a0 + -0x28 + lVar29) == 0xf) &&
           (lVar29 = lVar29 + lStack_2a0, plVar10 = *(longlong **)(lVar29 + -0x30),
           *(longlong *)((longlong)plVar10 + 7) == 0x6e6f697469736f50 &&
           *plVar10 == 0x505f786574726556)) {
          pbStack_110 = *(byte **)(lVar29 + -8);
          pbStack_248 = (byte *)0x0;
          pbStack_240 = (byte *)0x4;
          pbStack_238 = (byte *)0x0;
          pbStack_788 = (byte *)0x1;
          pbStack_780 = (byte *)0x1e;
          pbStack_778 = (byte *)((ulonglong)pbStack_778 & 0xffffffffffffff00);
          uStack_f4 = 1;
          pdb_1415fb3a0(&uStack_148,&pbStack_788);
          iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                   CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                         CONCAT13(unaff_XMM7_Bd,
                                  CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
          cVar47 = (char)iVar7;
          cVar48 = (char)((uint)iVar7 >> 8);
          cVar49 = (char)((uint)iVar7 >> 0x10);
          cVar50 = (char)((uint)iVar7 >> 0x18);
          iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                   CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                         CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
          cVar51 = (char)iVar7;
          cVar52 = (char)((uint)iVar7 >> 8);
          cVar53 = (char)((uint)iVar7 >> 0x10);
          cVar54 = (char)((uint)iVar7 >> 0x18);
          iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                   CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                         CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
          cVar55 = (char)iVar7;
          cVar56 = (char)((uint)iVar7 >> 8);
          cVar57 = (char)((uint)iVar7 >> 0x10);
          cVar58 = (char)((uint)iVar7 >> 0x18);
          iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                   CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                         CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
          cVar59 = (char)iVar7;
          cVar60 = (char)((uint)iVar7 >> 8);
          cVar61 = (char)((uint)iVar7 >> 0x10);
          cVar62 = (char)((uint)iVar7 >> 0x18);
          uVar22 = 0;
          if (pbStack_110 != (byte *)0x0) {
LAB_140a5ad0b:
            uStack_7e8 = 0;
            uStack_7e0 = 0;
            puStack_170 = param_1;
            puStack_168 = param_4;
            pbStack_160 = param_2;
            uStack_150 = uVar21;
            pub_142e32780(&uStack_b98,0,0x1e0);
            uStack_158 = uVar22 + 1;
            plStack_100 = (longlong *)uVar22;
            pub_142e32780(&uStack_9b8,0,0x1d0);
            uVar31 = uStack_138;
            uVar22 = uStack_140;
            uVar30 = 0;
LAB_140a5ad71:
            if (uVar30 == uVar31) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar31,uVar31,&UNK_14303e958);
            }
            if (*(longlong *)(uVar22 + 0x50 + uVar30 * 0x80) != 0) {
              uVar1 = uVar30 + 1;
              lVar26 = uVar30 * 0x80 + uVar22;
              uVar23 = pdb_1400af950(lVar26 + 0x58,&UNK_14303e6e8,0xf);
              lVar19 = *(longlong *)(lVar26 + 0x38);
              uVar11 = *(ulonglong *)(lVar26 + 0x40);
              bVar32 = (byte)(uVar23 >> 0x39);
              auVar35 = ZEXT216(CONCAT11(bVar32,bVar32));
              auVar35 = pshuflw(auVar35,auVar35,0);
              lVar29 = 0;
              while( true ) {
                uVar23 = uVar23 & uVar11;
                auVar6 = *(undefined1 (*) [16])(lVar19 + uVar23);
                auVar41[0] = -(auVar6[0] == auVar35[0]);
                auVar41[1] = -(auVar6[1] == auVar35[1]);
                auVar41[2] = -(auVar6[2] == auVar35[2]);
                auVar41[3] = -(auVar6[3] == auVar35[3]);
                auVar41[4] = -(auVar6[4] == auVar35[4]);
                auVar41[5] = -(auVar6[5] == auVar35[5]);
                auVar41[6] = -(auVar6[6] == auVar35[6]);
                auVar41[7] = -(auVar6[7] == auVar35[7]);
                auVar41[8] = -(auVar6[8] == auVar35[0]);
                auVar41[9] = -(auVar6[9] == auVar35[1]);
                auVar41[10] = -(auVar6[10] == auVar35[2]);
                auVar41[0xb] = -(auVar6[0xb] == auVar35[3]);
                auVar41[0xc] = -(auVar6[0xc] == auVar35[4]);
                auVar41[0xd] = -(auVar6[0xd] == auVar35[5]);
                auVar41[0xe] = -(auVar6[0xe] == auVar35[6]);
                auVar41[0xf] = -(auVar6[0xf] == auVar35[7]);
                uVar28 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar41[0xf] >> 7) << 0xf;
                uVar24 = (uint)uVar28;
                while (uVar28 != 0) {
                  uVar13 = 0;
                  for (uVar14 = uVar24; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                    uVar13 = uVar13 + 1;
                  }
                  lVar27 = (uVar13 + uVar23 & uVar11) * -0x38;
                  if ((*(longlong *)(lVar19 + -0x28 + lVar27) == 0xf) &&
                     (lVar27 = lVar27 + lVar19,
                     *(longlong *)((longlong)*(longlong **)(lVar27 + -0x30) + 7) ==
                     0x6e6f697469736f50 && **(longlong **)(lVar27 + -0x30) == 0x505f786574726556)) {
                    if (*(int *)(lVar27 + -0x20) != 4) {
                      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83b0(&UNK_14303e918,0xe,&UNK_14303e9e8);
                    }
                    if (*(ulonglong *)(lVar27 + -8) <= plStack_100) {
                      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(plStack_100,*(ulonglong *)(lVar27 + -8),&UNK_14303e988);
                    }
                    plStack_108 = (longlong *)((longlong)plStack_100 * 3);
                    uVar4 = *(undefined4 *)
                             (*(longlong *)(lVar27 + -0x10) + 8 + (longlong)plStack_100 * 0xc);
                    (&uStack_b98)[uVar30 * 2] =
                         *(undefined8 *)
                          (*(longlong *)(lVar27 + -0x10) + (longlong)plStack_100 * 0xc);
                    auStack_b90[uVar30 * 4] = uVar4;
                    auStack_b90[uVar30 * 4 + 1] = 0;
                    uVar23 = pdb_1400af950(lVar26 + 0x58,&UNK_14303e8d8,0xd);
                    param_4 = puStack_168;
                    param_1 = puStack_170;
                    bVar32 = (byte)(uVar23 >> 0x39);
                    auVar35 = ZEXT216(CONCAT11(bVar32,bVar32));
                    auVar35 = pshuflw(auVar35,auVar35,0);
                    lVar29 = 0;
                    goto LAB_140a5aee4;
                  }
                  uVar28 = (ushort)(uVar24 - 1) & (ushort)uVar24;
                  uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar28);
                }
                auVar36[0] = -(auVar6[0] == cVar47);
                auVar36[1] = -(auVar6[1] == cVar48);
                auVar36[2] = -(auVar6[2] == cVar49);
                auVar36[3] = -(auVar6[3] == cVar50);
                auVar36[4] = -(auVar6[4] == cVar51);
                auVar36[5] = -(auVar6[5] == cVar52);
                auVar36[6] = -(auVar6[6] == cVar53);
                auVar36[7] = -(auVar6[7] == cVar54);
                auVar36[8] = -(auVar6[8] == cVar55);
                auVar36[9] = -(auVar6[9] == cVar56);
                auVar36[10] = -(auVar6[10] == cVar57);
                auVar36[0xb] = -(auVar6[0xb] == cVar58);
                auVar36[0xc] = -(auVar6[0xc] == cVar59);
                auVar36[0xd] = -(auVar6[0xd] == cVar60);
                auVar36[0xe] = -(auVar6[0xe] == cVar61);
                auVar36[0xf] = -(auVar6[0xf] == cVar62);
                if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
                uVar23 = uVar23 + lVar29 + 0x10;
                lVar29 = lVar29 + 0x10;
              }
            }
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14303e970);
          }
LAB_140a5b2d0:
          uStack_f1 = 1;
          pdb_14152fbc0(*param_5,**(longlong **)param_2 + 0x10,pbStack_240,pbStack_238);
          uStack_718 = uStack_268;
          uStack_710 = uStack_260;
          uStack_728 = uStack_278;
          uStack_720 = uStack_270;
          uStack_738 = uStack_288;
          uStack_730 = uStack_280;
          uStack_748 = uStack_298;
          uStack_740 = uStack_290;
          uStack_758 = uStack_2a8;
          lStack_750 = lStack_2a0;
          uStack_768 = uStack_2b8;
          uStack_760 = uStack_2b0;
          pbStack_778 = pbStack_2c8;
          pbStack_770 = pbStack_2c0;
          pbStack_788 = pbStack_2d8;
          pbStack_780 = pbStack_2d0;
          uStack_f1 = 0;
          pbStack_110 = (byte *)pdb_140b08d00(&pbStack_788,&UNK_14303e628,10,*param_4,uVar21);
          uStack_f4 = 0;
          pdb_140997c20(&uStack_148);
          if (pbStack_248 != (byte *)0x0) {
            pub_1406abac0(pbStack_240,(longlong)pbStack_248 * 0x3e0,4);
          }
          uStack_f3 = 0;
          pdb_14098a960(&pbStack_208);
          goto LAB_140a59cf7;
        }
        uVar28 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar28);
      }
      auVar40[0] = -(auVar6[0] == -1);
      auVar40[1] = -(auVar6[1] == -1);
      auVar40[2] = -(auVar6[2] == -1);
      auVar40[3] = -(auVar6[3] == -1);
      auVar40[4] = -(auVar6[4] == -1);
      auVar40[5] = -(auVar6[5] == -1);
      auVar40[6] = -(auVar6[6] == -1);
      auVar40[7] = -(auVar6[7] == -1);
      auVar40[8] = -(auVar6[8] == -1);
      auVar40[9] = -(auVar6[9] == -1);
      auVar40[10] = -(auVar6[10] == -1);
      auVar40[0xb] = -(auVar6[0xb] == -1);
      auVar40[0xc] = -(auVar6[0xc] == -1);
      auVar40[0xd] = -(auVar6[0xd] == -1);
      auVar40[0xe] = -(auVar6[0xe] == -1);
      auVar40[0xf] = -(auVar6[0xf] == -1);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar22 = uVar22 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    } while( true );
  }
  uStack_f7 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14303e6f8);
LAB_140a5aee4:
  uVar23 = uVar23 & uVar11;
  auVar6 = *(undefined1 (*) [16])(lVar19 + uVar23);
  auVar42[0] = -(auVar6[0] == auVar35[0]);
  auVar42[1] = -(auVar6[1] == auVar35[1]);
  auVar42[2] = -(auVar6[2] == auVar35[2]);
  auVar42[3] = -(auVar6[3] == auVar35[3]);
  auVar42[4] = -(auVar6[4] == auVar35[4]);
  auVar42[5] = -(auVar6[5] == auVar35[5]);
  auVar42[6] = -(auVar6[6] == auVar35[6]);
  auVar42[7] = -(auVar6[7] == auVar35[7]);
  auVar42[8] = -(auVar6[8] == auVar35[0]);
  auVar42[9] = -(auVar6[9] == auVar35[1]);
  auVar42[10] = -(auVar6[10] == auVar35[2]);
  auVar42[0xb] = -(auVar6[0xb] == auVar35[3]);
  auVar42[0xc] = -(auVar6[0xc] == auVar35[4]);
  auVar42[0xd] = -(auVar6[0xd] == auVar35[5]);
  auVar42[0xe] = -(auVar6[0xe] == auVar35[6]);
  auVar42[0xf] = -(auVar6[0xf] == auVar35[7]);
  uVar28 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar13 = 0;
    for (uVar14 = uVar24; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    lVar26 = (uVar13 + uVar23 & uVar11) * -0x38;
    if ((*(longlong *)(lVar19 + -0x28 + lVar26) == 0xd) &&
       (lVar26 = lVar26 + lVar19,
       *(longlong *)((longlong)*(longlong **)(lVar26 + -0x30) + 5) == 0x6c616d726f4e5f78 &&
       **(longlong **)(lVar26 + -0x30) == 0x4e5f786574726556)) {
      if (*(int *)(lVar26 + -0x20) != 4) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14303e918,0xe,&UNK_14303e9d0);
      }
      if (*(ulonglong *)(lVar26 + -8) <= plStack_100) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(plStack_100,*(ulonglong *)(lVar26 + -8),&UNK_14303e9b8);
      }
      uVar4 = *(undefined4 *)(*(longlong *)(lVar26 + -0x10) + 8 + (longlong)plStack_108 * 4);
      (&uStack_9b8)[uVar30 * 2] =
           *(undefined8 *)(*(longlong *)(lVar26 + -0x10) + (longlong)plStack_108 * 4);
      auStack_9b0[uVar30 * 4] = uVar4;
      auStack_9b0[uVar30 * 4 + 1] = 0;
      uVar30 = uVar1;
      if (uVar1 != 0x1e) goto LAB_140a5ad71;
      if (uStack_1b8 == 0) goto LAB_140a5b49f;
      uVar31 = pdb_1400af950(&uStack_1b0,&UNK_14303e6e8,0xf);
      uVar22 = uStack_1c8;
      lVar19 = lStack_1d0;
      bVar32 = (byte)(uVar31 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar32,bVar32));
      auVar35 = pshuflw(auVar35,auVar35,0);
      lVar29 = 0;
      goto LAB_140a5b033;
    }
    uVar28 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar28);
  }
  auVar37[0] = -(auVar6[0] == cVar47);
  auVar37[1] = -(auVar6[1] == cVar48);
  auVar37[2] = -(auVar6[2] == cVar49);
  auVar37[3] = -(auVar6[3] == cVar50);
  auVar37[4] = -(auVar6[4] == cVar51);
  auVar37[5] = -(auVar6[5] == cVar52);
  auVar37[6] = -(auVar6[6] == cVar53);
  auVar37[7] = -(auVar6[7] == cVar54);
  auVar37[8] = -(auVar6[8] == cVar55);
  auVar37[9] = -(auVar6[9] == cVar56);
  auVar37[10] = -(auVar6[10] == cVar57);
  auVar37[0xb] = -(auVar6[0xb] == cVar58);
  auVar37[0xc] = -(auVar6[0xc] == cVar59);
  auVar37[0xd] = -(auVar6[0xd] == cVar60);
  auVar37[0xe] = -(auVar6[0xe] == cVar61);
  auVar37[0xf] = -(auVar6[0xf] == cVar62);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14303e9a0);
  }
  uVar23 = uVar23 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_140a5aee4;
LAB_140a5b033:
  uVar31 = uVar31 & uStack_1c8;
  auVar6 = *(undefined1 (*) [16])(lStack_1d0 + uVar31);
  auVar43[0] = -(auVar6[0] == auVar35[0]);
  auVar43[1] = -(auVar6[1] == auVar35[1]);
  auVar43[2] = -(auVar6[2] == auVar35[2]);
  auVar43[3] = -(auVar6[3] == auVar35[3]);
  auVar43[4] = -(auVar6[4] == auVar35[4]);
  auVar43[5] = -(auVar6[5] == auVar35[5]);
  auVar43[6] = -(auVar6[6] == auVar35[6]);
  auVar43[7] = -(auVar6[7] == auVar35[7]);
  auVar43[8] = -(auVar6[8] == auVar35[0]);
  auVar43[9] = -(auVar6[9] == auVar35[1]);
  auVar43[10] = -(auVar6[10] == auVar35[2]);
  auVar43[0xb] = -(auVar6[0xb] == auVar35[3]);
  auVar43[0xc] = -(auVar6[0xc] == auVar35[4]);
  auVar43[0xd] = -(auVar6[0xd] == auVar35[5]);
  auVar43[0xe] = -(auVar6[0xe] == auVar35[6]);
  auVar43[0xf] = -(auVar6[0xf] == auVar35[7]);
  uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar13 = 0;
    for (uVar14 = uVar24; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    lVar26 = (uVar13 + uVar31 & uStack_1c8) * -0x38;
    if ((*(longlong *)(lStack_1d0 + -0x28 + lVar26) == 0xf) &&
       (lVar26 = lVar26 + lStack_1d0,
       *(longlong *)((longlong)*(longlong **)(lVar26 + -0x30) + 7) == 0x6e6f697469736f50 &&
       **(longlong **)(lVar26 + -0x30) == 0x505f786574726556)) {
      if (*(int *)(lVar26 + -0x20) != 4) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14303e918,0xe,&UNK_14303e940);
      }
      if (*(ulonglong *)(lVar26 + -8) <= plStack_100) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(plStack_100,*(ulonglong *)(lVar26 + -8),&UNK_14303e8c0);
      }
      uVar8 = *(undefined8 *)(*(longlong *)(lVar26 + -0x10) + (longlong)plStack_108 * 4);
      uVar4 = *(undefined4 *)(*(longlong *)(lVar26 + -0x10) + 8 + (longlong)plStack_108 * 4);
      uVar31 = pdb_1400af950(&uStack_1b0,&UNK_14303e8d8,0xd);
      bVar32 = (byte)(uVar31 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar32,bVar32));
      auVar35 = pshuflw(auVar35,auVar35,0);
      lVar29 = 0;
      goto LAB_140a5b123;
    }
    uVar28 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar28);
  }
  auVar38[0] = -(auVar6[0] == cVar47);
  auVar38[1] = -(auVar6[1] == cVar48);
  auVar38[2] = -(auVar6[2] == cVar49);
  auVar38[3] = -(auVar6[3] == cVar50);
  auVar38[4] = -(auVar6[4] == cVar51);
  auVar38[5] = -(auVar6[5] == cVar52);
  auVar38[6] = -(auVar6[6] == cVar53);
  auVar38[7] = -(auVar6[7] == cVar54);
  auVar38[8] = -(auVar6[8] == cVar55);
  auVar38[9] = -(auVar6[9] == cVar56);
  auVar38[10] = -(auVar6[10] == cVar57);
  auVar38[0xb] = -(auVar6[0xb] == cVar58);
  auVar38[0xc] = -(auVar6[0xc] == cVar59);
  auVar38[0xd] = -(auVar6[0xd] == cVar60);
  auVar38[0xe] = -(auVar6[0xe] == cVar61);
  auVar38[0xf] = -(auVar6[0xf] == cVar62);
  if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') {
LAB_140a5b49f:
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14303e8a8);
  }
  uVar31 = uVar31 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_140a5b033;
LAB_140a5b123:
  uVar31 = uVar31 & uVar22;
  auVar6 = *(undefined1 (*) [16])(lVar19 + uVar31);
  auVar44[0] = -(auVar6[0] == auVar35[0]);
  auVar44[1] = -(auVar6[1] == auVar35[1]);
  auVar44[2] = -(auVar6[2] == auVar35[2]);
  auVar44[3] = -(auVar6[3] == auVar35[3]);
  auVar44[4] = -(auVar6[4] == auVar35[4]);
  auVar44[5] = -(auVar6[5] == auVar35[5]);
  auVar44[6] = -(auVar6[6] == auVar35[6]);
  auVar44[7] = -(auVar6[7] == auVar35[7]);
  auVar44[8] = -(auVar6[8] == auVar35[0]);
  auVar44[9] = -(auVar6[9] == auVar35[1]);
  auVar44[10] = -(auVar6[10] == auVar35[2]);
  auVar44[0xb] = -(auVar6[0xb] == auVar35[3]);
  auVar44[0xc] = -(auVar6[0xc] == auVar35[4]);
  auVar44[0xd] = -(auVar6[0xd] == auVar35[5]);
  auVar44[0xe] = -(auVar6[0xe] == auVar35[6]);
  auVar44[0xf] = -(auVar6[0xf] == auVar35[7]);
  uVar28 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar13 = 0;
    for (uVar14 = uVar24; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    lVar26 = (uVar13 + uVar31 & uVar22) * -0x38;
    if ((*(longlong *)(lVar19 + -0x28 + lVar26) == 0xd) &&
       (lVar26 = lVar26 + lVar19,
       *(longlong *)((longlong)*(longlong **)(lVar26 + -0x30) + 5) == 0x6c616d726f4e5f78 &&
       **(longlong **)(lVar26 + -0x30) == 0x4e5f786574726556)) {
      if (*(int *)(lVar26 + -0x20) != 4) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14303e918,0xe,&UNK_14303e928);
      }
      if (*(ulonglong *)(lVar26 + -8) <= plStack_100) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(plStack_100,*(ulonglong *)(lVar26 + -8),&UNK_14303e900);
      }
      uVar9 = *(undefined8 *)(*(longlong *)(lVar26 + -0x10) + (longlong)plStack_108 * 4);
      uVar5 = *(undefined4 *)(*(longlong *)(lVar26 + -0x10) + 8 + (longlong)plStack_108 * 4);
      pub_142e32760(&pbStack_788,&uStack_b98,0x1e0);
      pub_142e32760(&pbStack_5a8,&uStack_9b8,0x1e0);
      uVar21 = uStack_150;
      param_2 = pbStack_160;
      pbVar25 = pbStack_238;
      if (pbStack_238 == pbStack_248) {
        uStack_f1 = 1;
        pdb_142d91d30(&pbStack_248);
      }
      pbVar20 = pbStack_240;
      lVar19 = (longlong)pbVar25 * 0x3e0;
      pub_142e32760(pbStack_240 + lVar19,&pbStack_788,0x3c0);
      *(undefined8 *)(pbVar20 + lVar19 + 0x3c0) = uVar8;
      *(undefined4 *)(pbVar20 + lVar19 + 0x3c8) = uVar4;
      pbVar3 = pbVar20 + lVar19 + 0x3cc;
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      *(undefined8 *)(pbVar20 + lVar19 + 0x3d0) = uVar9;
      *(undefined4 *)(pbVar20 + lVar19 + 0x3d8) = uVar5;
      pbVar20 = pbVar20 + lVar19 + 0x3dc;
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      pbStack_238 = pbVar25 + 1;
      uVar22 = uStack_158;
      if (pbStack_110 <= uStack_158) goto LAB_140a5b2d0;
      goto LAB_140a5ad0b;
    }
    uVar28 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar28);
  }
  auVar39[0] = -(auVar6[0] == cVar47);
  auVar39[1] = -(auVar6[1] == cVar48);
  auVar39[2] = -(auVar6[2] == cVar49);
  auVar39[3] = -(auVar6[3] == cVar50);
  auVar39[4] = -(auVar6[4] == cVar51);
  auVar39[5] = -(auVar6[5] == cVar52);
  auVar39[6] = -(auVar6[6] == cVar53);
  auVar39[7] = -(auVar6[7] == cVar54);
  auVar39[8] = -(auVar6[8] == cVar55);
  auVar39[9] = -(auVar6[9] == cVar56);
  auVar39[10] = -(auVar6[10] == cVar57);
  auVar39[0xb] = -(auVar6[0xb] == cVar58);
  auVar39[0xc] = -(auVar6[0xc] == cVar59);
  auVar39[0xd] = -(auVar6[0xd] == cVar60);
  auVar39[0xe] = -(auVar6[0xe] == cVar61);
  auVar39[0xf] = -(auVar6[0xf] == cVar62);
  if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14303e8e8);
  }
  uVar31 = uVar31 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_140a5b123;
}

