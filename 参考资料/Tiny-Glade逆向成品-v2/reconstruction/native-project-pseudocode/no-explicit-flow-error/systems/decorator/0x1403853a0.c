// VA 0x1403853a0, PDB extent 29476 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_requests<true>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_requests<true>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 29476 */

void pdb_1403853a0(uint *param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,longlong *param_7,undefined8 param_8)

{
  byte *pbVar1;
  float fVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong *plVar19;
  undefined1 (*pauVar20) [16];
  undefined8 *puVar21;
  uint *puVar22;
  uint *puVar23;
  char *pcVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  uint *puVar27;
  undefined8 uVar28;
  float *pfVar29;
  ulonglong *puVar30;
  longlong lVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  undefined *puVar37;
  longlong lVar38;
  longlong lVar39;
  longlong *plVar40;
  undefined8 *puVar41;
  byte bVar42;
  undefined8 *puVar43;
  uint *puVar44;
  ushort uVar45;
  undefined *puVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  byte bVar51;
  byte bVar52;
  bool bVar53;
  bool bVar54;
  byte bVar55;
  undefined4 uVar56;
  uint uVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar76;
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
  undefined1 auVar75 [16];
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  uint uVar90;
  uint uVar91;
  uint uVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  uint **in_stack_fffffffffffff4b8;
  undefined4 uVar100;
  float *in_stack_fffffffffffff4c0;
  undefined8 *in_stack_fffffffffffff4c8;
  undefined8 in_stack_fffffffffffff508;
  uint *puStack_ab8;
  uint *puStack_ab0;
  uint *puStack_aa8;
  undefined8 *puStack_aa0;
  uint *puStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  uint *puStack_a78;
  uint *puStack_a70;
  uint *puStack_a68;
  undefined8 *puStack_a60;
  uint *puStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  longlong lStack_9a8;
  byte *pbStack_9a0;
  undefined8 uStack_998;
  undefined1 auStack_988 [8];
  longlong lStack_980;
  longlong lStack_978;
  undefined8 uStack_970;
  ulonglong uStack_968;
  ulonglong uStack_960;
  longlong lStack_958;
  undefined8 uStack_930;
  undefined8 uStack_928;
  ulonglong uStack_920;
  ulonglong uStack_918;
  longlong lStack_910;
  char cStack_8f4;
  undefined8 uStack_8f3;
  undefined7 uStack_8eb;
  undefined1 uStack_8e4;
  undefined3 uStack_8e3;
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
  uint *puStack_848;
  undefined8 uStack_840;
  longlong lStack_838;
  byte *pbStack_830;
  undefined8 uStack_828;
  uint *puStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  longlong lStack_7f8;
  undefined8 *puStack_7f0;
  longlong lStack_7e8;
  uint uStack_7e0;
  uint uStack_7dc;
  longlong lStack_7d8;
  uint uStack_7d0;
  uint uStack_7cc;
  undefined8 *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  uint uStack_7a8;
  undefined8 uStack_798;
  undefined8 uStack_790;
  uint uStack_788;
  uint *puStack_778;
  undefined8 uStack_770;
  uint *puStack_768;
  undefined8 *puStack_760;
  uint *puStack_758;
  uint *puStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined1 auStack_650 [40];
  undefined8 uStack_628;
  uint *puStack_620;
  uint *puStack_618;
  undefined8 *puStack_610;
  uint *puStack_608;
  uint *puStack_600;
  uint *puStack_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 uStack_5e8;
  uint *puStack_5e0;
  longlong lStack_5d8;
  longlong lStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [16];
  uint *puStack_5b0;
  undefined8 uStack_5a8;
  float *pfStack_5a0;
  ulonglong *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  uint *puStack_578;
  uint *puStack_570;
  uint *puStack_568;
  undefined8 *puStack_560;
  undefined1 auStack_558 [8];
  uint *puStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  ulonglong uStack_538;
  ulonglong uStack_530;
  longlong lStack_528;
  undefined1 auStack_520 [16];
  uint auStack_510 [2];
  longlong lStack_508;
  ulonglong uStack_500;
  undefined8 uStack_4f8;
  ulonglong uStack_4f0;
  ulonglong uStack_4e8;
  longlong lStack_4e0;
  undefined1 auStack_4d8 [16];
  uint *puStack_4c8;
  uint *puStack_4c0;
  uint *puStack_4b8;
  undefined8 *puStack_4b0;
  uint *puStack_4a8;
  uint *puStack_4a0;
  uint *puStack_498;
  longlong lStack_490;
  byte *pbStack_488;
  undefined8 uStack_480;
  longlong lStack_478;
  byte *pbStack_470;
  undefined8 uStack_468;
  uint *puStack_460;
  uint *puStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  ulonglong uStack_444;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  undefined1 auStack_430 [24];
  uint *puStack_418;
  uint *puStack_410;
  uint *puStack_408;
  undefined8 *puStack_400;
  uint *puStack_3f8;
  uint *puStack_3f0;
  uint *puStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  longlong lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  float fStack_3c0;
  undefined8 uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  uint uStack_3a8;
  undefined4 uStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  undefined1 auStack_398 [16];
  uint *puStack_388;
  undefined8 uStack_380;
  float *pfStack_378;
  undefined8 uStack_370;
  uint *puStack_368;
  uint *puStack_360;
  undefined8 uStack_358;
  uint *puStack_350;
  uint *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  uint *puStack_2e8;
  uint *puStack_2e0;
  uint *puStack_2d8;
  undefined8 *puStack_2d0;
  uint *puStack_2c8;
  uint *puStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulonglong *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  ulonglong uStack_288;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined4 uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  longlong *plStack_240;
  longlong *plStack_238;
  ulonglong uStack_230;
  uint *puStack_228;
  uint *puStack_220;
  undefined8 uStack_218;
  uint *puStack_210;
  uint *puStack_208;
  uint *puStack_200;
  undefined8 *puStack_1f8;
  uint *puStack_1f0;
  undefined4 *puStack_1e8;
  uint *puStack_1e0;
  uint *puStack_1d8;
  float *pfStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined8 *puStack_1a8;
  uint *puStack_1a0;
  ulonglong uStack_198;
  uint *puStack_190;
  ulonglong uStack_188;
  uint *puStack_180;
  uint *puStack_178;
  undefined4 uStack_16c;
  longlong *plStack_168;
  uint *puStack_160;
  uint *puStack_158;
  uint *puStack_150;
  undefined1 auStack_148 [16];
  uint *puStack_138;
  uint *puStack_130;
  uint *puStack_128;
  float *pfStack_120;
  uint *puStack_118;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  uint *puStack_108;
  undefined1 uStack_ff;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 != '\0') {
    return;
  }
  puVar41 = param_2;
  puStack_1f8 = param_4;
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') {
    lStack_3d8 = 0;
LAB_140385627:
    plVar19 = (longlong *)pdb_140f3bda0();
    if ((char)plVar19[2] == '\x01') {
      lStack_7f8 = *plVar19;
      puVar41 = (undefined8 *)plVar19[1];
    }
    else {
      lStack_7f8 = pdb_140f4fd10();
      *plVar19 = lStack_7f8;
      plVar19[1] = (longlong)puVar41;
      *(undefined1 *)(plVar19 + 2) = 1;
    }
    *plVar19 = lStack_7f8 + 1;
    uVar10 = _UNK_142f47438;
    uVar9 = _DAT_142f47430;
    uVar8 = _UNK_142f47428;
    puVar7 = _DAT_142f47420;
    uStack_808 = _DAT_142f47430;
    uStack_800 = _UNK_142f47438;
    puStack_818 = _DAT_142f47420;
    uStack_810 = _UNK_142f47428;
    plStack_168 = (longlong *)*param_7;
    lVar16 = plStack_168[1];
    lVar39 = plStack_168[2];
    plVar19 = plStack_168;
    lVar31 = lVar16;
    puStack_7f0 = puVar41;
    while (lVar38 = lVar31, lVar38 != lVar39 * 0x150 + lVar16) {
      lVar31 = lVar38 + 0x150;
      if (*(char *)(lVar38 + 0x148) != '\0') {
        pdb_1403afce0(&puStack_818,*(undefined4 *)(lVar38 + 0x128),*(undefined4 *)(lVar38 + 300));
        plVar19 = plStack_168;
      }
    }
    uVar15 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar3 = (undefined4 *)param_7[2];
    *puVar3 = uVar15;
    puStack_180 = (uint *)plVar19[1];
    puStack_130 = (uint *)plVar19[2];
    plVar19[2] = 0;
    puStack_108 = (uint *)0x0;
    puVar18 = puStack_180;
    while (puStack_130 != puStack_108) {
      puStack_108 = (uint *)((longlong)puStack_108 + 1);
      pdb_14049c6a0(puVar18);
      puVar18 = puVar18 + 0x54;
    }
    puStack_130 = (uint *)*param_5;
    lVar16 = pdb_140a61160();
    puVar18 = *(uint **)(lVar16 + 8);
    lVar16 = *(longlong *)(lVar16 + 0x10);
    pauVar20 = (undefined1 (*) [16])pdb_14008d710(0);
    if (pauVar20 != (undefined1 (*) [16])0x0) {
      auStack_398 = *pauVar20;
      *(longlong *)*pauVar20 = *(longlong *)*pauVar20 + 1;
      uStack_3a8 = (uint)_DAT_142e45ae0;
      uStack_3a4 = (undefined4)((ulonglong)_DAT_142e45ae0 >> 0x20);
      uStack_3a0 = (uint)_UNK_142e45ae8;
      uStack_39c = (uint)((ulonglong)_UNK_142e45ae8 >> 0x20);
      uStack_3b8 = (uint **)_DAT_142e45ad0;
      fStack_3b0 = (float)_UNK_142e45ad8;
      fStack_3ac = (float)((ulonglong)_UNK_142e45ad8 >> 0x20);
      if (lVar16 != 0) {
        pdb_142d81b60(&uStack_3b8,lVar16,auStack_398);
      }
      uStack_770 = puVar18 + lVar16 * 10;
      puStack_778 = puVar18;
      puStack_768 = param_1;
      puStack_760 = param_2;
      puStack_758 = param_3;
      pdb_140563f10(&puStack_778,&uStack_3b8);
      pfStack_1d0 = (float *)CONCAT44(fStack_3ac,fStack_3b0);
      auStack_1c8._4_4_ = uStack_3a4;
      auStack_1c8._0_4_ = uStack_3a8;
      auStack_1c8._8_4_ = uStack_3a0;
      auStack_1c8._12_4_ = uStack_39c;
      puStack_1d8 = (uint *)uStack_3b8;
      auStack_1b8 = auStack_398;
      *puVar3 = uVar15;
      pdb_1405d03a0(&uStack_3b8);
      plVar40 = plStack_168;
      plVar19 = plStack_168 + 3;
      pub_142e32760(auStack_558,plVar19,0x90);
      plStack_240 = plVar19;
      pub_142e32760(plVar19,&uStack_3b8,0x90);
      *puVar3 = uVar15;
      uStack_109 = 1;
      pdb_1405d03a0(&uStack_3b8);
      plVar40 = plVar40 + 0x15;
      pub_142e32760(auStack_988,plVar40,0x90);
      plStack_238 = plVar40;
      pub_142e32760(plVar40,&uStack_3b8,0x90);
      if (lStack_958 != 0) {
        if (uStack_968 == 0) {
          uStack_960 = 0;
        }
        else {
          pub_142e32780(uStack_970,0xff,uStack_968 + 0x11);
          uStack_960 = (uStack_968 + 1 & 0xfffffffffffffff8) - (uStack_968 + 1 >> 3);
          if (uStack_968 < 8) {
            uStack_960 = uStack_968;
          }
        }
        lStack_958 = 0;
      }
      lVar16 = lStack_978;
      lStack_978 = 0;
      if (lVar16 != 0) {
        puVar41 = (undefined8 *)(lStack_980 + 8);
        do {
          if (puVar41[-1] != 0) {
            pub_1406abac0((byte *)*puVar41,puVar41[-1] << 3,4);
          }
          puVar41 = puVar41 + 5;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (lStack_910 != 0) {
        if (uStack_920 == 0) {
          uStack_918 = 0;
        }
        else {
          pub_142e32780(uStack_928,0xff,uStack_920 + 0x11);
          uStack_918 = (uStack_920 + 1 & 0xfffffffffffffff8) - (uStack_920 + 1 >> 3);
          if (uStack_920 < 8) {
            uStack_918 = uStack_920;
          }
        }
        lStack_910 = 0;
      }
      uStack_930 = 0;
      if (lStack_528 != 0) {
        if (uStack_538 == 0) {
          uStack_530 = 0;
        }
        else {
          pub_142e32780(uStack_540,0xff,uStack_538 + 0x11);
          uStack_530 = (uStack_538 + 1 & 0xfffffffffffffff8) - (uStack_538 + 1 >> 3);
          if (uStack_538 < 8) {
            uStack_530 = uStack_538;
          }
        }
        lStack_528 = 0;
      }
      puVar41 = puStack_548;
      puStack_548 = (undefined8 *)0x0;
      if (puVar41 != (undefined8 *)0x0) {
        puVar18 = puStack_550 + 2;
        do {
          if (*(longlong *)(puVar18 + -2) != 0) {
            pub_1406abac0(*(byte **)puVar18,*(longlong *)(puVar18 + -2) << 3,4);
          }
          puVar18 = puVar18 + 10;
          puVar41 = (undefined8 *)((longlong)puVar41 + -1);
        } while (puVar41 != (undefined8 *)0x0);
      }
      if (lStack_4e0 != 0) {
        if (uStack_4f0 == 0) {
          uStack_4e8 = 0;
        }
        else {
          pub_142e32780(uStack_4f8,0xff,uStack_4f0 + 0x11);
          uStack_4e8 = (uStack_4f0 + 1 & 0xfffffffffffffff8) - (uStack_4f0 + 1 >> 3);
          if (uStack_4f0 < 8) {
            uStack_4e8 = uStack_4f0;
          }
        }
        lStack_4e0 = 0;
      }
      uStack_500 = 0;
      uStack_f6 = 1;
      uStack_f7 = 1;
      puStack_7c8 = param_2;
      puStack_180 = param_1;
      uStack_16c = uVar15;
      lVar16 = pdb_140a61160(puStack_130);
      puVar22 = *(uint **)(lVar16 + 8);
      puStack_1a0 = puVar22 + *(longlong *)(lVar16 + 0x10) * 10;
      puStack_1e8 = puVar3;
      if (puVar22 != puStack_1a0) {
        do {
          uStack_244 = puVar22[8];
          puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,uStack_244);
          uStack_f6 = 1;
          uStack_f7 = 1;
          lVar39 = pdb_140a61160(puStack_130);
          uStack_3b8 = (uint **)CONCAT44(uStack_3b8._4_4_,(uint)puStack_108);
          param_1 = *(uint **)(lVar39 + 0x10);
          lVar16 = 4;
          if (param_1 == (uint *)0x0) {
LAB_140385c00:
            lVar16 = 4;
            lVar39 = 4;
          }
          else if (param_1 == (uint *)0x1) {
            lVar31 = *(longlong *)(lVar39 + 8);
            lVar39 = 4;
            if ((uint)puStack_108 == *(int *)(lVar31 + 0x20)) {
              puVar18 = (uint *)0x0;
LAB_140385be2:
              lVar39 = *(longlong *)(lVar31 + 8 + (longlong)puVar18 * 0x28);
              lVar16 = lVar39 + *(longlong *)(lVar31 + 0x10 + (longlong)puVar18 * 0x28) * 8;
            }
          }
          else {
            puVar18 = (uint *)pdb_1400aede0(lVar39 + 0x38,&uStack_3b8,4);
            uStack_f6 = 1;
            uStack_f7 = 1;
            uVar17 = pdb_140401410(lVar39,puVar18,&uStack_3b8);
            lVar16 = 4;
            if ((uVar17 & 1) == 0) goto LAB_140385c00;
            if (param_1 <= puVar18) goto LAB_14038954b;
            lVar31 = *(longlong *)(lVar39 + 8);
            lVar39 = 4;
            if (lVar31 != 0) goto LAB_140385be2;
          }
          uStack_f6 = 1;
          uStack_f7 = 1;
          pdb_14017e410(&uStack_628,lVar39,lVar16);
          puVar22 = puVar22 + 10;
          puStack_778 = (uint *)0x0;
          uStack_770 = (uint *)0x8;
          puStack_768 = (uint *)0x0;
          puStack_128 = puStack_620;
          puVar18 = puStack_620 + (longlong)puStack_618;
          puVar23 = puStack_620;
LAB_140385c61:
          uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffff4b8 >> 0x20);
          if (puVar23 != puVar18) {
            uVar14 = *puVar23;
            uStack_248 = uVar14;
            if (auStack_1c8._8_8_ != 0) {
              puVar23 = puVar23 + 1;
              uVar17 = pdb_1400aede0(auStack_1b8,&uStack_244);
              pfVar29 = pfStack_1d0;
              puVar44 = puStack_1d8;
              bVar55 = (byte)(uVar17 >> 0x39);
              auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
              auVar60 = pshuflw(auVar60,auVar60,0);
              lVar16 = 0;
              while( true ) {
                uVar17 = uVar17 & (ulonglong)pfStack_1d0;
                auVar61 = *(undefined1 (*) [16])((longlong)puStack_1d8 + uVar17);
                auVar69[0] = -(auVar61[0] == auVar60[0]);
                auVar69[1] = -(auVar61[1] == auVar60[1]);
                auVar69[2] = -(auVar61[2] == auVar60[2]);
                auVar69[3] = -(auVar61[3] == auVar60[3]);
                auVar69[4] = -(auVar61[4] == auVar60[4]);
                auVar69[5] = -(auVar61[5] == auVar60[5]);
                auVar69[6] = -(auVar61[6] == auVar60[6]);
                auVar69[7] = -(auVar61[7] == auVar60[7]);
                auVar69[8] = -(auVar61[8] == auVar60[0]);
                auVar69[9] = -(auVar61[9] == auVar60[1]);
                auVar69[10] = -(auVar61[10] == auVar60[2]);
                auVar69[0xb] = -(auVar61[0xb] == auVar60[3]);
                auVar69[0xc] = -(auVar61[0xc] == auVar60[4]);
                auVar69[0xd] = -(auVar61[0xd] == auVar60[5]);
                auVar69[0xe] = -(auVar61[0xe] == auVar60[6]);
                auVar69[0xf] = -(auVar61[0xf] == auVar60[7]);
                uVar45 = (ushort)(SUB161(auVar69 >> 7,0) & 1) |
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
                uVar33 = (uint)uVar45;
                while (uVar45 != 0) {
                  uVar35 = 0;
                  for (uVar34 = uVar33; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
                    uVar35 = uVar35 + 1;
                  }
                  uVar47 = uVar35 + uVar17 & (ulonglong)pfStack_1d0;
                  puStack_138 = puVar18;
                  if ((uint)puStack_108 == puStack_1d8[uVar47 * -0xe + -0xe]) {
                    puStack_118 = puStack_1d8 + uVar47 * -0xe + -0xc;
                    uVar17 = pdb_1400aede0(auStack_1b8,&uStack_248);
                    bVar55 = (byte)(uVar17 >> 0x39);
                    auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
                    auVar60 = pshuflw(auVar60,auVar60,0);
                    lVar16 = 0;
                    goto LAB_140385d7c;
                  }
                  uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
                  uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
                }
                auVar63[0] = -(auVar61[0] == -1);
                auVar63[1] = -(auVar61[1] == -1);
                auVar63[2] = -(auVar61[2] == -1);
                auVar63[3] = -(auVar61[3] == -1);
                auVar63[4] = -(auVar61[4] == -1);
                auVar63[5] = -(auVar61[5] == -1);
                auVar63[6] = -(auVar61[6] == -1);
                auVar63[7] = -(auVar61[7] == -1);
                auVar63[8] = -(auVar61[8] == -1);
                auVar63[9] = -(auVar61[9] == -1);
                auVar63[10] = -(auVar61[10] == -1);
                auVar63[0xb] = -(auVar61[0xb] == -1);
                auVar63[0xc] = -(auVar61[0xc] == -1);
                auVar63[0xd] = -(auVar61[0xd] == -1);
                auVar63[0xe] = -(auVar61[0xe] == -1);
                auVar63[0xf] = -(auVar61[0xf] == -1);
                if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar63 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar63 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar63 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar63 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar63 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || (SUB161(auVar63 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
                uVar17 = uVar17 + lVar16 + 0x10;
                lVar16 = lVar16 + 0x10;
              }
            }
            pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f470e8);
            goto LAB_140389767;
          }
          pdb_14089e6a0(&uStack_3b8,uStack_770,puStack_768,0);
          puStack_118 = (uint *)uStack_3b8;
          lVar16 = CONCAT44(uStack_3a4,uStack_3a8);
          puVar18 = (uint *)CONCAT44(fStack_3ac,fStack_3b0);
          if (lVar16 != 0) {
            lVar39 = 0;
            puStack_138 = (uint *)CONCAT44(fStack_3ac,fStack_3b0);
            do {
              cVar12 = *(char *)((longlong)puStack_138 + lVar39 + 4);
              puVar18 = puStack_138;
              if (cVar12 == '\x03') break;
              puVar41 = (undefined8 *)((longlong)puStack_138 + lVar39 + 5);
              uStack_8f3 = *puVar41;
              uVar26 = puVar41[1];
              uStack_8eb = (undefined7)uVar26;
              uStack_8e3 = (undefined3)
                           ((uint)*(undefined4 *)((longlong)puStack_138 + lVar39 + 0x14) >> 8);
              uStack_8e4 = (undefined1)((ulonglong)uVar26 >> 0x38);
              in_stack_fffffffffffff4b8 = (uint **)&cStack_8f4;
              cStack_8f4 = cVar12;
              pdb_1405cb4b0(&puStack_4c8,auStack_558,(ulonglong)puStack_108 & 0xffffffff,
                            *(undefined4 *)((longlong)puStack_138 + lVar39),&cStack_8f4);
              lVar39 = lVar39 + 0x18;
              puVar18 = puStack_138;
            } while (lVar16 * 0x18 != lVar39);
          }
          if (puStack_118 != (uint *)0x0) {
            pub_1406abac0((byte *)puVar18,(longlong)puStack_118 * 0x18,4);
          }
          puVar18 = uStack_770;
          if (puStack_768 != (uint *)0x0) {
            puVar23 = uStack_770 + 4;
            puVar44 = puStack_768;
            do {
              if (*(longlong *)(puVar23 + -2) != 0) {
                pub_1406abac0(*(byte **)puVar23,*(longlong *)(puVar23 + -2) * 0x18,4);
              }
              puVar23 = puVar23 + 8;
              puVar44 = (uint *)((longlong)puVar44 + -1);
            } while (puVar44 != (uint *)0x0);
          }
          if (puStack_778 != (uint *)0x0) {
            pub_1406abac0((byte *)puVar18,(longlong)puStack_778 << 5,8);
          }
          if (uStack_628 != (uint *)0x0) {
            pub_1406abac0((byte *)puStack_128,(longlong)uStack_628 << 2,4);
          }
        } while (puVar22 != puStack_1a0);
      }
      uStack_f6 = 1;
      uStack_f7 = 1;
      pdb_140f33350(auStack_430);
      uVar26 = _DAT_142e3c640;
      auVar60 = _DAT_142e37820;
      puStack_778 = (uint *)0x0;
      uStack_770 = (uint *)0x4;
      puStack_768 = (uint *)0x0;
      puStack_108 = puStack_550;
      puStack_118 = puStack_550 + (longlong)puStack_548 * 10;
      uVar14 = (uint)DAT_142e37820;
      puStack_1a0 = param_3;
      while (puVar41 = puStack_548, puStack_138 = puStack_108, puStack_108 != puStack_118) {
        uVar33 = puStack_108[8];
        uStack_3b8 = (uint **)CONCAT44(uStack_3b8._4_4_,uVar33);
        lVar16 = 4;
        if (puStack_548 == (undefined8 *)0x0) {
          lVar39 = 4;
        }
        else if (puStack_548 == (undefined8 *)0x1) {
          lVar39 = 4;
          if (uVar33 == puStack_550[8]) {
            puVar43 = (undefined8 *)0x0;
LAB_1403861e5:
            lVar39 = *(longlong *)(puStack_550 + (longlong)puVar43 * 10 + 2);
            lVar16 = lVar39 + *(longlong *)(puStack_550 + (longlong)puVar43 * 10 + 4) * 8;
          }
        }
        else {
          puVar43 = (undefined8 *)pdb_1400aede0(auStack_520,&uStack_3b8);
          uVar17 = pdb_140401410(auStack_558,puVar43,&uStack_3b8);
          if ((uVar17 & 1) == 0) {
            lVar39 = 4;
          }
          else {
            if (puVar41 <= puVar43) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(puVar43,puVar41,&UNK_142f77528);
            }
            lVar39 = 4;
            if (puStack_550 != (uint *)0x0) goto LAB_1403861e5;
          }
        }
        puStack_108 = puStack_138 + 10;
        uStack_3b8 = (uint **)auStack_510;
        fStack_3b0 = (float)lVar39;
        fStack_3ac = (float)((ulonglong)lVar39 >> 0x20);
        uStack_3a8 = (uint)lVar16;
        uStack_3a4 = (undefined4)((ulonglong)lVar16 >> 0x20);
        bVar51 = 0;
        bVar42 = 0;
        bVar55 = 0;
        bVar52 = 0;
        uStack_3a0 = uVar33;
        while (pdb_1405c88a0(&uStack_628), puVar43 = puStack_548, puStack_620 != (uint *)0x0) {
          if ((char)*puStack_620 == '\0') {
            bVar42 = 1;
          }
          else if ((char)*puStack_620 == '\x01') {
            fVar62 = (float)((ulonglong)*(undefined8 *)(puStack_620 + 3) >> 0x20) *
                     (float)*(undefined8 *)(puStack_620 + 1) -
                     (float)*(undefined8 *)(puStack_620 + 3) *
                     (float)((ulonglong)*(undefined8 *)(puStack_620 + 1) >> 0x20);
            if (0.0 < (float)((uint)fVar62 & uVar14 | (uint)uVar26) && !NAN(fVar62)) {
              bVar51 = 1;
              bVar55 = bVar52;
            }
            else {
              bVar55 = 1;
              bVar52 = bVar55;
            }
          }
        }
        if ((bVar42 & (bVar55 | bVar51)) != 0) {
          uStack_3b8 = (uint **)CONCAT44(uStack_3b8._4_4_,uVar33);
          lVar16 = 4;
          if (puStack_548 == (undefined8 *)0x0) {
LAB_140386371:
            lVar16 = 4;
            lVar39 = 4;
          }
          else if (puStack_548 == (undefined8 *)0x1) {
            lVar39 = 4;
            if (uVar33 == puStack_550[8]) {
              puVar21 = (undefined8 *)0x0;
LAB_14038635d:
              lVar39 = *(longlong *)(puStack_550 + (longlong)puVar21 * 10 + 2);
              lVar16 = lVar39 + *(longlong *)(puStack_550 + (longlong)puVar21 * 10 + 4) * 8;
            }
          }
          else {
            puVar21 = (undefined8 *)pdb_1400aede0(auStack_520,&uStack_3b8);
            uVar17 = pdb_140401410(auStack_558,puVar21,&uStack_3b8);
            lVar16 = 4;
            if ((uVar17 & 1) == 0) goto LAB_140386371;
            if (puVar43 <= puVar21) goto LAB_1403895ad;
            lVar39 = 4;
            if (puStack_550 != (uint *)0x0) goto LAB_14038635d;
          }
          uStack_3b8 = (uint **)auStack_510;
          fStack_3b0 = (float)lVar39;
          fStack_3ac = (float)((ulonglong)lVar39 >> 0x20);
          uStack_3a8 = (uint)lVar16;
          uStack_3a4 = (undefined4)((ulonglong)lVar16 >> 0x20);
          uStack_3a0 = uVar33;
          while (pdb_1405c88a0(&uStack_628), puVar18 = puStack_768, puStack_620 != (uint *)0x0) {
            if ((char)*puStack_620 != '\x02') {
              uVar35 = uStack_628._4_4_;
              if (puStack_768 == puStack_778) {
                pdb_142d7f010(&puStack_778);
              }
              uStack_770[(longlong)puVar18 * 3] = uVar33;
              uStack_770[(longlong)puVar18 * 3 + 1] = uVar35;
              *(byte *)(uStack_770 + (longlong)puVar18 * 3 + 2) = bVar51 * '\x02' | bVar55;
              puStack_768 = (uint *)((longlong)puVar18 + 1);
            }
          }
        }
      }
      puStack_108 = puStack_778;
      puVar18 = uStack_770 + (longlong)puStack_768 * 3;
      puStack_128 = uStack_770;
      puVar22 = uStack_770;
      while (uVar17 = uStack_500, puVar22 != puVar18) {
        uStack_3b8 = *(uint ***)puVar22;
        uVar33 = puVar22[2];
        if (uStack_500 == 1) {
          if ((*puVar22 != *(uint *)(lStack_508 + 8)) || (puVar22[1] != *(uint *)(lStack_508 + 0xc))
             ) goto LAB_14038943a;
          uVar47 = 0;
        }
        else {
          if (uStack_500 == 0) {
LAB_14038943a:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142f470d0);
          }
          uVar47 = pdb_1400af680(auStack_4d8,&uStack_3b8);
          uVar48 = pdb_1404014e0(auStack_510,uVar47,&uStack_3b8);
          if ((uVar48 & 1) == 0) goto LAB_14038943a;
          if (uVar17 <= uVar47) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar47,uVar17,&UNK_142f77540);
          }
        }
        puVar22 = puVar22 + 3;
        cVar12 = *(char *)(lStack_508 + 0x10 + uVar47 * 0x28);
        if (cVar12 != '\x02') {
          lVar16 = lStack_508 + uVar47 * 0x28;
          if (cVar12 == '\x01') {
            *(undefined1 *)(lVar16 + 0x11) = 1;
          }
          else {
            *(byte *)(lVar16 + 0x11) = (byte)uVar33 & 1;
            *(byte *)(lVar16 + 0x12) = (byte)uVar33 >> 1 & 1;
          }
        }
      }
      if (puStack_108 != (uint *)0x0) {
        pub_1406abac0((byte *)puStack_128,(longlong)puStack_108 * 0xc,4);
      }
      puStack_210 = (uint *)0x0;
      puStack_208 = (uint *)0x4;
      puStack_200 = (uint *)0x0;
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      lVar16 = pdb_140a61160(puStack_130);
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      pdb_1404009f0(&puStack_778,lVar16);
      uStack_740 = *(undefined8 **)(lVar16 + 0x38);
      uStack_738 = *(undefined8 *)(lVar16 + 0x40);
      pdb_140400670(&uStack_3b8,lVar16 + 0x48);
      uStack_5a8 = *(undefined8 *)(lVar16 + 0x80);
      pfStack_5a0 = *(float **)(lVar16 + 0x88);
      uStack_628 = puStack_778;
      puStack_620 = uStack_770;
      puStack_618 = puStack_768;
      puStack_610 = puStack_760;
      puStack_608 = puStack_758;
      puStack_600 = puStack_750;
      puStack_5f8 = uStack_748;
      uStack_5f0 = (undefined4)uStack_740;
      uStack_5ec = uStack_740._4_4_;
      uStack_5e8 = uStack_738;
      lStack_5d8 = CONCAT44(fStack_3ac,fStack_3b0);
      lStack_5d0 = CONCAT44(uStack_3a4,uStack_3a8);
      uStack_5c8 = CONCAT44(uStack_39c,uStack_3a0);
      puStack_5e0 = (uint *)uStack_3b8;
      auStack_5c0 = auStack_398;
      puStack_5b0 = puStack_388;
      uStack_380 = uStack_5a8;
      pfStack_378 = pfStack_5a0;
      lVar39 = pdb_140a61160(puStack_130);
      lVar16 = *(longlong *)(lVar39 + 0x50);
      lVar39 = *(longlong *)(lVar39 + 0x58) * 0x10 + lVar16;
LAB_1403866e0:
      if (lVar16 != lVar39) {
        uVar33 = *(uint *)(lVar16 + 8);
        uVar35 = *(uint *)(lVar16 + 0xc);
        uStack_250 = uVar35;
        uStack_24c = uVar33;
        if (auStack_1c8._8_8_ != 0) {
          lVar16 = lVar16 + 0x10;
          uVar17 = pdb_1400aede0(auStack_1b8,&uStack_24c);
          pfVar29 = pfStack_1d0;
          puVar18 = puStack_1d8;
          bVar55 = (byte)(uVar17 >> 0x39);
          auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar61 = pshuflw(auVar61,auVar61,0);
          lVar31 = 0;
          while( true ) {
            uVar17 = uVar17 & (ulonglong)pfStack_1d0;
            auVar69 = *(undefined1 (*) [16])((longlong)puStack_1d8 + uVar17);
            auVar80[0] = -(auVar69[0] == auVar61[0]);
            auVar80[1] = -(auVar69[1] == auVar61[1]);
            auVar80[2] = -(auVar69[2] == auVar61[2]);
            auVar80[3] = -(auVar69[3] == auVar61[3]);
            auVar80[4] = -(auVar69[4] == auVar61[4]);
            auVar80[5] = -(auVar69[5] == auVar61[5]);
            auVar80[6] = -(auVar69[6] == auVar61[6]);
            auVar80[7] = -(auVar69[7] == auVar61[7]);
            auVar80[8] = -(auVar69[8] == auVar61[0]);
            auVar80[9] = -(auVar69[9] == auVar61[1]);
            auVar80[10] = -(auVar69[10] == auVar61[2]);
            auVar80[0xb] = -(auVar69[0xb] == auVar61[3]);
            auVar80[0xc] = -(auVar69[0xc] == auVar61[4]);
            auVar80[0xd] = -(auVar69[0xd] == auVar61[5]);
            auVar80[0xe] = -(auVar69[0xe] == auVar61[6]);
            auVar80[0xf] = -(auVar69[0xf] == auVar61[7]);
            uVar45 = (ushort)(SUB161(auVar80 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar80[0xf] >> 7) << 0xf;
            uVar34 = (uint)uVar45;
            while (uVar45 != 0) {
              uVar57 = 0;
              for (uVar90 = uVar34; (uVar90 & 1) == 0; uVar90 = uVar90 >> 1 | 0x80000000) {
                uVar57 = uVar57 + 1;
              }
              uVar47 = uVar57 + uVar17 & (ulonglong)pfStack_1d0;
              if (uVar33 == puStack_1d8[uVar47 * -0xe + -0xe]) {
                fVar62 = (float)puStack_1d8[uVar47 * -0xe + -5];
                fVar2 = (float)puStack_1d8[uVar47 * -0xe + -3];
                uVar17 = pdb_1400aede0(auStack_1b8,&uStack_250);
                bVar55 = (byte)(uVar17 >> 0x39);
                auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
                auVar61 = pshuflw(auVar61,auVar61,0);
                lVar31 = 0;
                goto LAB_1403867e3;
              }
              uVar45 = (ushort)(uVar34 - 1) & (ushort)uVar34;
              uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar45);
            }
            auVar65[0] = -(auVar69[0] == -1);
            auVar65[1] = -(auVar69[1] == -1);
            auVar65[2] = -(auVar69[2] == -1);
            auVar65[3] = -(auVar69[3] == -1);
            auVar65[4] = -(auVar69[4] == -1);
            auVar65[5] = -(auVar69[5] == -1);
            auVar65[6] = -(auVar69[6] == -1);
            auVar65[7] = -(auVar69[7] == -1);
            auVar65[8] = -(auVar69[8] == -1);
            auVar65[9] = -(auVar69[9] == -1);
            auVar65[10] = -(auVar69[10] == -1);
            auVar65[0xb] = -(auVar69[0xb] == -1);
            auVar65[0xc] = -(auVar69[0xc] == -1);
            auVar65[0xd] = -(auVar69[0xd] == -1);
            auVar65[0xe] = -(auVar69[0xe] == -1);
            auVar65[0xf] = -(auVar69[0xf] == -1);
            if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar65 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar65 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar65 >> 0x3f,0) & 1) != 0) || (SUB161(auVar65 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') break;
            uVar17 = uVar17 + lVar31 + 0x10;
            lVar31 = lVar31 + 0x10;
          }
        }
        pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f470a0);
        goto LAB_140389767;
      }
      puStack_158 = (uint *)0x0;
      auStack_148 = (undefined1  [16])0x0;
      puStack_150 = (uint *)0x4;
      uStack_198 = 0;
      puStack_190 = (uint *)0x4;
      uStack_188 = 0;
      puStack_138 = (uint *)*param_5;
LAB_14038690d:
      if (lStack_5d0 != 0) {
        uVar15 = *(undefined4 *)(lStack_5d8 + 8);
        if (auStack_148._8_8_ != 0) {
          auStack_148._8_8_ = 0;
        }
        auVar61._8_8_ = 0;
        auVar61._0_8_ = auStack_148._8_8_;
        auStack_148 = auVar61 << 0x40;
        pdb_1400de890(auStack_430);
        uStack_188 = 0;
        pdb_1405cb370(&uStack_628,uVar15);
        pdb_140182410(&puStack_158,uVar15);
        pdb_140182410();
        while (auStack_148._8_8_ != 0) {
          puVar18 = (uint *)0x0;
          if (puStack_158 <= (ulonglong)auStack_148._0_8_) {
            puVar18 = puStack_158;
          }
          uVar33 = puStack_150[auStack_148._0_8_ - (longlong)puVar18];
          lVar16 = pdb_140c40010(*(longlong *)puStack_180);
          if ((lVar16 != 0) && (cVar12 = pdb_1409010e0(), cVar12 != '\0')) {
            bVar55 = 1;
            bVar54 = false;
            goto LAB_140386a77;
          }
          if (auStack_148._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142f46e08);
          }
          puVar22 = (uint *)(auStack_148._8_8_ + auStack_148._0_8_ + -1);
          bVar55 = 0;
          puVar18 = (uint *)0x0;
          if (puStack_158 <= puVar22) {
            puVar18 = puStack_158;
          }
          if (puStack_150[(longlong)puVar22 - (longlong)puVar18] == uVar33) {
            bVar54 = true;
            goto LAB_140386a77;
          }
          uVar47 = (ulonglong)uVar33;
          uVar17 = pdb_1405cb9e0();
          if (uVar17 == uVar47) break;
          pdb_1405cb370(&uStack_628,uVar33);
          pdb_140181ae0();
        }
        bVar54 = false;
        bVar55 = 0;
LAB_140386a77:
        do {
          if (auStack_148._8_8_ == 0) goto LAB_140386b5e;
          puVar22 = (uint *)(auStack_148._8_8_ + auStack_148._0_8_ + -1);
          puVar18 = (uint *)0x0;
          if (puStack_158 <= puVar22) {
            puVar18 = puStack_158;
          }
          uVar33 = puStack_150[(longlong)puVar22 - (longlong)puVar18];
          lVar16 = pdb_140c40010(*(longlong *)puStack_180);
          if ((lVar16 != 0) && (cVar12 = pdb_1409010e0(lVar16 + 0x10), cVar12 != '\0')) {
            uVar17 = auStack_148._8_8_;
            if (!(bool)(bVar55 & auStack_148._8_8_ == 2)) goto LAB_14038725c;
            puVar18 = puStack_158;
            if ((ulonglong)auStack_148._0_8_ < puStack_158) {
              puVar18 = (uint *)0x0;
            }
            puVar22 = puStack_158;
            if ((uint *)(auStack_148._0_8_ + 1) < puStack_158) {
              puVar22 = (uint *)0x0;
            }
            uVar33 = puStack_150[auStack_148._0_8_ - (longlong)puVar18];
            uVar35 = puStack_150[auStack_148._0_8_ + (1 - (longlong)puVar22)];
            uVar34 = uVar35;
            if (uVar33 < uVar35) {
              uVar34 = uVar33;
            }
            if (uVar35 < uVar33) {
              uVar35 = uVar33;
            }
            uStack_258 = uVar35;
            uStack_254 = uVar34;
            if (auStack_1c8._8_8_ != 0) {
              uVar17 = pdb_1400aede0(auStack_1b8,&uStack_254);
              pfVar29 = pfStack_1d0;
              puVar18 = puStack_1d8;
              bVar55 = (byte)(uVar17 >> 0x39);
              auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
              auVar61 = pshuflw(auVar61,auVar61,0);
              lVar16 = 0;
              while( true ) {
                uVar17 = uVar17 & (ulonglong)pfStack_1d0;
                auVar69 = *(undefined1 (*) [16])((longlong)puStack_1d8 + uVar17);
                auVar82[0] = -(auVar69[0] == auVar61[0]);
                auVar82[1] = -(auVar69[1] == auVar61[1]);
                auVar82[2] = -(auVar69[2] == auVar61[2]);
                auVar82[3] = -(auVar69[3] == auVar61[3]);
                auVar82[4] = -(auVar69[4] == auVar61[4]);
                auVar82[5] = -(auVar69[5] == auVar61[5]);
                auVar82[6] = -(auVar69[6] == auVar61[6]);
                auVar82[7] = -(auVar69[7] == auVar61[7]);
                auVar82[8] = -(auVar69[8] == auVar61[0]);
                auVar82[9] = -(auVar69[9] == auVar61[1]);
                auVar82[10] = -(auVar69[10] == auVar61[2]);
                auVar82[0xb] = -(auVar69[0xb] == auVar61[3]);
                auVar82[0xc] = -(auVar69[0xc] == auVar61[4]);
                auVar82[0xd] = -(auVar69[0xd] == auVar61[5]);
                auVar82[0xe] = -(auVar69[0xe] == auVar61[6]);
                auVar82[0xf] = -(auVar69[0xf] == auVar61[7]);
                uVar45 = (ushort)(SUB161(auVar82 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar82[0xf] >> 7) << 0xf;
                uVar33 = (uint)uVar45;
                while (uVar45 != 0) {
                  uVar57 = 0;
                  for (uVar90 = uVar33; (uVar90 & 1) == 0; uVar90 = uVar90 >> 1 | 0x80000000) {
                    uVar57 = uVar57 + 1;
                  }
                  uVar47 = uVar57 + uVar17 & (ulonglong)pfStack_1d0;
                  if (uVar34 == puStack_1d8[uVar47 * -0xe + -0xe]) {
                    puStack_178 = puStack_1d8 + uVar47 * -0xe + -0xc;
                    uVar17 = pdb_1400aede0(auStack_1b8,&uStack_258);
                    bVar55 = (byte)(uVar17 >> 0x39);
                    auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
                    auVar61 = pshuflw(auVar61,auVar61,0);
                    lVar16 = 0;
                    goto LAB_140386cc0;
                  }
                  uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
                  uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
                }
                auVar67[0] = -(auVar69[0] == -1);
                auVar67[1] = -(auVar69[1] == -1);
                auVar67[2] = -(auVar69[2] == -1);
                auVar67[3] = -(auVar69[3] == -1);
                auVar67[4] = -(auVar69[4] == -1);
                auVar67[5] = -(auVar69[5] == -1);
                auVar67[6] = -(auVar69[6] == -1);
                auVar67[7] = -(auVar69[7] == -1);
                auVar67[8] = -(auVar69[8] == -1);
                auVar67[9] = -(auVar69[9] == -1);
                auVar67[10] = -(auVar69[10] == -1);
                auVar67[0xb] = -(auVar69[0xb] == -1);
                auVar67[0xc] = -(auVar69[0xc] == -1);
                auVar67[0xd] = -(auVar69[0xd] == -1);
                auVar67[0xe] = -(auVar69[0xe] == -1);
                auVar67[0xf] = -(auVar69[0xf] == -1);
                if ((((((((((((((((SUB161(auVar67 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar67 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar67 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar67 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar67 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar67 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar67 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar67 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar67 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar67 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar67 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar67 >> 0x5f,0) & 1) != 0) || (SUB161(auVar67 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar67 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar67 >> 0x77,0) & 1) != 0) || auVar67[0xf] < '\0') break;
                uVar17 = uVar17 + lVar16 + 0x10;
                lVar16 = lVar16 + 0x10;
              }
            }
            goto LAB_1403885f1;
          }
          if (auStack_148._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142f46e20);
          }
          puVar18 = (uint *)0x0;
          if (puStack_158 <= (ulonglong)auStack_148._0_8_) {
            puVar18 = puStack_158;
          }
          uVar17 = auStack_148._8_8_;
          if (puStack_150[auStack_148._0_8_ - (longlong)puVar18] == uVar33) goto LAB_14038726a;
          uVar47 = (ulonglong)uVar33;
          uVar17 = pdb_1405cb9e0();
          if (uVar17 == uVar47) goto LAB_140387255;
          pdb_1405cb370(&uStack_628,uVar33);
          pdb_140182410();
        } while( true );
      }
      if (uStack_198 != 0) {
        pub_1406abac0((byte *)puStack_190,uStack_198 << 3,4);
      }
      puVar41 = (undefined8 *)0x0;
      if (puStack_158 != (uint *)0x0) {
        puVar41 = (undefined8 *)((longlong)puStack_158 << 2);
        pub_1406abac0((byte *)puStack_150,(ulonglong)puVar41,4);
      }
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      pdb_1404a7820(&uStack_628);
      uVar26 = *param_5;
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      lVar16 = pdb_140a61160(uVar26);
      lVar39 = *(longlong *)(lVar16 + 8);
      lVar16 = lVar39 + *(longlong *)(lVar16 + 0x10) * 0x28;
      puStack_138 = puStack_210;
      puStack_118 = puStack_208 + (longlong)puStack_200 * 2;
      puStack_1e0 = puStack_208;
      puStack_130 = puStack_208;
LAB_140388700:
      if (lVar39 == 0) {
LAB_140388736:
        if (puStack_130 == puStack_118) {
          if (puStack_138 != (uint *)0x0) {
            puVar41 = (undefined8 *)((longlong)puStack_138 << 3);
            pub_1406abac0((byte *)puStack_1e0,(ulonglong)puVar41,4);
          }
          uStack_f3 = 0;
          uStack_f4 = 1;
          uStack_f5 = 1;
          puStack_758 = (uint *)pdb_140332e50(&UNK_142f47400);
          puStack_768 = (uint *)uVar9;
          puStack_760 = (undefined8 *)uVar10;
          puStack_778 = puVar7;
          uStack_770 = (uint *)uVar8;
          lVar16 = plStack_168[1];
          lVar39 = plStack_168[2];
          lVar31 = lVar16;
          puStack_750 = (uint *)puVar41;
          while (lVar38 = lVar31, lVar38 != lVar39 * 0x150 + lVar16) {
            lVar31 = lVar38 + 0x150;
            if (*(char *)(lVar38 + 0x148) != '\0') {
              uStack_f9 = 1;
              uStack_fa = 1;
              pdb_1403b0de0(&puStack_778,*(undefined4 *)(lVar38 + 0x128));
              uStack_f9 = 1;
              uStack_fa = 1;
              pdb_1403b0de0(&puStack_778,*(undefined4 *)(lVar38 + 300));
            }
          }
          *puStack_1e8 = uStack_16c;
          lVar16 = plStack_168[1];
          lVar39 = plStack_168[2];
          lVar31 = lVar16;
LAB_1403892c2:
          lVar38 = lVar31;
          if (lVar38 == lVar39 * 0x150 + lVar16) {
            pub_142e32760(&uStack_3b8,auStack_558,0x90);
            *puStack_1e8 = uStack_16c;
            pdb_1404ae510(plStack_240);
            pub_142e32760(plStack_240,&uStack_3b8,0x90);
            pub_142e32760(&uStack_3b8,auStack_988,0x90);
            *puStack_1e8 = uStack_16c;
            pdb_1404aec10(plStack_238);
            pub_142e32760(plStack_238,&uStack_3b8,0x90);
            uStack_f3 = 0;
            uStack_f4 = 0;
            uStack_f5 = 0;
            pdb_14049a050(&puStack_778);
            pdb_1404b26b0(auStack_430);
            pdb_1404add50(&puStack_1d8);
            pdb_1400db1d0(&puStack_818);
            if (lStack_3d8 == 0) {
              return;
            }
            puStack_778 = (uint *)&uStack_3d0;
            uStack_3b8 = &puStack_778;
            pdb_140336540(&UNK_142f47518,&uStack_3b8);
            return;
          }
          uStack_f9 = 1;
          uStack_fa = 1;
          cVar12 = pdb_1403af690(&puStack_778,lVar38 + 0x128);
          lVar31 = lVar38 + 0x150;
          if (cVar12 == '\0') goto code_r0x0001403892f3;
          goto LAB_1403892bb;
        }
        uVar14 = *puStack_130;
        puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,puStack_130[1]);
        puStack_130 = puStack_130 + 2;
        lVar39 = 0;
      }
      else {
        do {
          if (lVar39 == lVar16) goto LAB_140388736;
          uVar14 = *(uint *)(lVar39 + 0x20);
          uVar28 = pdb_140a61160(uVar26);
          puVar41 = (undefined8 *)(ulonglong)uVar14;
          puVar43 = (undefined8 *)pdb_1405cb9e0(uVar28);
          lVar39 = lVar39 + 0x28;
        } while (puVar43 != puVar41);
        puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,uVar14);
      }
      uStack_268 = (uint)puStack_108;
      uStack_264 = uVar14;
      if (auStack_1c8._8_8_ != 0) {
        uVar17 = pdb_1400aede0(auStack_1b8,&uStack_264);
        pfVar29 = pfStack_1d0;
        puVar18 = puStack_1d8;
        bVar55 = (byte)(uVar17 >> 0x39);
        auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar31 = 0;
        while( true ) {
          uVar17 = uVar17 & (ulonglong)pfStack_1d0;
          auVar61 = *(undefined1 (*) [16])((longlong)puStack_1d8 + uVar17);
          auVar88[0] = -(auVar61[0] == auVar60[0]);
          auVar88[1] = -(auVar61[1] == auVar60[1]);
          auVar88[2] = -(auVar61[2] == auVar60[2]);
          auVar88[3] = -(auVar61[3] == auVar60[3]);
          auVar88[4] = -(auVar61[4] == auVar60[4]);
          auVar88[5] = -(auVar61[5] == auVar60[5]);
          auVar88[6] = -(auVar61[6] == auVar60[6]);
          auVar88[7] = -(auVar61[7] == auVar60[7]);
          auVar88[8] = -(auVar61[8] == auVar60[0]);
          auVar88[9] = -(auVar61[9] == auVar60[1]);
          auVar88[10] = -(auVar61[10] == auVar60[2]);
          auVar88[0xb] = -(auVar61[0xb] == auVar60[3]);
          auVar88[0xc] = -(auVar61[0xc] == auVar60[4]);
          auVar88[0xd] = -(auVar61[0xd] == auVar60[5]);
          auVar88[0xe] = -(auVar61[0xe] == auVar60[6]);
          auVar88[0xf] = -(auVar61[0xf] == auVar60[7]);
          uVar45 = (ushort)(SUB161(auVar88 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar88 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar88 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar88 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar88 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar88 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar88 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar88 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar88 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar88 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar88 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar88 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar88[0xf] >> 7) << 0xf;
          uVar33 = (uint)uVar45;
          while (uVar45 != 0) {
            uVar35 = 0;
            for (uVar34 = uVar33; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
              uVar35 = uVar35 + 1;
            }
            uVar47 = uVar35 + uVar17 & (ulonglong)pfStack_1d0;
            if (uVar14 == puStack_1d8[uVar47 * -0xe + -0xe]) {
              fVar62 = (float)puStack_1d8[uVar47 * -0xe + -5];
              fVar2 = (float)puStack_1d8[uVar47 * -0xe + -4];
              fVar58 = (float)puStack_1d8[uVar47 * -0xe + -3];
              puStack_128 = *(uint **)(puStack_1d8 + uVar47 * -0xe + -0xc);
              puStack_160 = *(uint **)(puStack_1d8 + uVar47 * -0xe + -10);
              pfStack_120 = (float *)CONCAT44(pfStack_120._4_4_,puStack_1d8[uVar47 * -0xe + -2]);
              uVar33 = puStack_1d8[uVar47 * -0xe + -8];
              puVar22 = *(uint **)(puStack_1d8 + uVar47 * -0xe + -7);
              uVar17 = pdb_1400aede0(auStack_1b8,&uStack_268);
              bVar55 = (byte)(uVar17 >> 0x39);
              auVar60 = ZEXT216(CONCAT11(bVar55,bVar55));
              auVar60 = pshuflw(auVar60,auVar60,0);
              lVar31 = 0;
              goto LAB_14038889b;
            }
            uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
            uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
          }
          auVar74[0] = -(auVar61[0] == -1);
          auVar74[1] = -(auVar61[1] == -1);
          auVar74[2] = -(auVar61[2] == -1);
          auVar74[3] = -(auVar61[3] == -1);
          auVar74[4] = -(auVar61[4] == -1);
          auVar74[5] = -(auVar61[5] == -1);
          auVar74[6] = -(auVar61[6] == -1);
          auVar74[7] = -(auVar61[7] == -1);
          auVar74[8] = -(auVar61[8] == -1);
          auVar74[9] = -(auVar61[9] == -1);
          auVar74[10] = -(auVar61[10] == -1);
          auVar74[0xb] = -(auVar61[0xb] == -1);
          auVar74[0xc] = -(auVar61[0xc] == -1);
          auVar74[0xd] = -(auVar61[0xd] == -1);
          auVar74[0xe] = -(auVar61[0xe] == -1);
          auVar74[0xf] = -(auVar61[0xf] == -1);
          if ((((((((((((((((SUB161(auVar74 >> 7,0) & 1) != 0 || (SUB161(auVar74 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar74 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar74 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar74 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar74 >> 0x2f,0) & 1) != 0) || (SUB161(auVar74 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar74 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar74 >> 0x47,0) & 1) != 0) || (SUB161(auVar74 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar74 >> 0x57,0) & 1) != 0) || (SUB161(auVar74 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar74 >> 0x67,0) & 1) != 0) || (SUB161(auVar74 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar74 >> 0x77,0) & 1) != 0) || auVar74[0xf] < '\0') break;
          uVar17 = uVar17 + lVar31 + 0x10;
          lVar31 = lVar31 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47028);
      goto LAB_140389767;
    }
    pdb_142dc7890(&UNK_142f3dc40);
  }
  else {
    lVar39 = 0x74;
    lVar16 = pdb_14038c9a0(0x74);
    puVar43 = (undefined8 *)&UNK_142f474a0;
    if (lVar16 == 1) {
      if ((undefined8 *)0x74 < puVar41) {
LAB_14038952b:
        puVar18 = (uint *)0x74;
        pdb_142dc8070(&UNK_142f474a0,0x74,0);
LAB_14038954b:
        uStack_f6 = 1;
        uStack_f7 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(puVar18,param_1,&UNK_142f77528);
      }
      uVar17 = pdb_14038c9a0(puVar41);
      if ((uVar17 & 1) != 0) {
        if ((undefined *)0x74 < (undefined *)((longlong)puVar41 + 2)) {
          puVar21 = (undefined8 *)0x74;
          pdb_142dc8070(&UNK_142f474a0,0x74,(undefined *)((longlong)puVar41 + 2),0x74,&UNK_142f475b0
                       );
LAB_1403895ad:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar21,puVar43,&UNK_142f77528);
        }
        lVar39 = 0x72 - (longlong)puVar41;
        puVar43 = (undefined8 *)((longlong)puVar41 + 0x142f474a2);
      }
    }
    puVar41 = puVar43;
    puVar46 = &UNK_142f46e01;
    puVar37 = &UNK_142f46da5;
    do {
      bVar55 = puVar46[-1];
      uVar14 = (uint)(char)bVar55;
      if ((char)bVar55 < '\0') {
        bVar52 = puVar46[-2];
        if ((char)bVar52 < -0x40) {
          bVar42 = puVar46[-3];
          if ((char)bVar42 < -0x40) {
            pbVar1 = puVar46 + -4;
            puVar46 = puVar46 + -4;
            uVar14 = bVar42 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar46 = puVar46 + -3;
            uVar14 = bVar42 & 0xf;
          }
          uVar14 = bVar52 & 0x3f | uVar14 << 6;
        }
        else {
          puVar46 = puVar46 + -2;
          uVar14 = bVar52 & 0x1f;
        }
        uVar14 = (uint)(bVar55 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_140385584;
LAB_14038559d:
        puVar37 = puVar46 + -0x142f46da4;
        if ((undefined *)0x5c < puVar37) {
          pdb_142dc8070(&UNK_142f46da5,0x5c,puVar37,0x5c,&UNK_142f47578);
          goto LAB_14038952b;
        }
        in_stack_fffffffffffff4b8 = (uint **)(0x5c - (longlong)puVar37);
        puVar37 = puVar46 + 1;
        goto LAB_1403855c0;
      }
      puVar46 = puVar46 + -1;
      if (uVar14 == 0x5c) goto LAB_14038559d;
LAB_140385584:
      if (uVar14 == 0x2f) goto LAB_14038559d;
    } while (puVar46 != &UNK_142f46da5);
    in_stack_fffffffffffff4b8 = (uint **)0x5c;
LAB_1403855c0:
    puVar18 = (uint *)pdb_140e97000();
    if (((char)puVar18[0x1a] == '\x01') ||
       (puVar18 = (uint *)pdb_142d7de90(puVar18,0), puVar18 != (uint *)0x0)) {
      if (*(longlong *)puVar18 == 0) {
        puVar18[0] = 0xffffffff;
        puVar18[1] = 0xffffffff;
        in_stack_fffffffffffff4c8 = (undefined8 *)0x0;
        in_stack_fffffffffffff4c0 = (float *)0x0;
        puStack_108 = puVar18;
        uStack_3d0 = pdb_140e94f10(puVar18 + 2,puVar41,lVar39,puVar37,in_stack_fffffffffffff4b8,1,0)
        ;
        *(longlong *)puStack_108 = *(longlong *)puStack_108 + 1;
        lStack_3d8 = 1;
        goto LAB_140385627;
      }
    }
    else {
      pdb_142dc7890(&UNK_142f3dc40);
    }
    pdb_142dc8090(&UNK_142f3dcc8);
LAB_1403885f1:
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46e38);
  }
LAB_140389767:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
LAB_140385d7c:
  uVar17 = uVar17 & (ulonglong)pfVar29;
  auVar61 = *(undefined1 (*) [16])((longlong)puVar44 + uVar17);
  auVar79[0] = -(auVar61[0] == auVar60[0]);
  auVar79[1] = -(auVar61[1] == auVar60[1]);
  auVar79[2] = -(auVar61[2] == auVar60[2]);
  auVar79[3] = -(auVar61[3] == auVar60[3]);
  auVar79[4] = -(auVar61[4] == auVar60[4]);
  auVar79[5] = -(auVar61[5] == auVar60[5]);
  auVar79[6] = -(auVar61[6] == auVar60[6]);
  auVar79[7] = -(auVar61[7] == auVar60[7]);
  auVar79[8] = -(auVar61[8] == auVar60[0]);
  auVar79[9] = -(auVar61[9] == auVar60[1]);
  auVar79[10] = -(auVar61[10] == auVar60[2]);
  auVar79[0xb] = -(auVar61[0xb] == auVar60[3]);
  auVar79[0xc] = -(auVar61[0xc] == auVar60[4]);
  auVar79[0xd] = -(auVar61[0xd] == auVar60[5]);
  auVar79[0xe] = -(auVar61[0xe] == auVar60[6]);
  auVar79[0xf] = -(auVar61[0xf] == auVar60[7]);
  uVar45 = (ushort)(SUB161(auVar79 >> 7,0) & 1) | (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe | (ushort)(auVar79[0xf] >> 7) << 0xf;
  uVar33 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar35 = 0;
    for (uVar34 = uVar33; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
      uVar35 = uVar35 + 1;
    }
    uVar48 = uVar35 + uVar17 & (ulonglong)pfVar29;
    if (uVar14 == puVar44[uVar48 * -0xe + -0xe]) {
      in_stack_fffffffffffff4c0 = *(float **)puStack_180;
      in_stack_fffffffffffff4c8 = *(undefined8 **)param_3;
      in_stack_fffffffffffff4b8 =
           (uint **)CONCAT44(uVar15,(float)puVar44[uVar48 * -0xe + -3] -
                                    (float)puVar44[uVar47 * -0xe + -3]);
      pdb_14089b730(&uStack_3b8,puStack_118,puVar44 + uVar48 * -0xe + -0xc,
                    (float)puVar44[uVar48 * -0xe + -5] - (float)puVar44[uVar47 * -0xe + -5],
                    in_stack_fffffffffffff4b8,in_stack_fffffffffffff4c0,in_stack_fffffffffffff4c8);
      puVar18 = puStack_768;
      puStack_118 = (uint *)CONCAT44(uStack_3a4,uStack_3a8);
      if (puStack_118 == (uint *)0x0) {
        puStack_4c8 = (uint *)CONCAT71(puStack_4c8._1_7_,2);
        in_stack_fffffffffffff4b8 = &puStack_4c8;
        pdb_1405cb4b0(&puStack_418,auStack_558,(ulonglong)puStack_108 & 0xffffffff,uVar14,
                      in_stack_fffffffffffff4b8);
        puVar18 = puStack_138;
        if (uStack_3b8 != (uint **)0x0) {
          pub_1406abac0((byte *)CONCAT44(fStack_3ac,fStack_3b0),(longlong)uStack_3b8 * 0x18,4);
        }
      }
      else {
        puStack_160 = (uint *)uStack_3b8;
        puStack_178 = (uint *)CONCAT44(fStack_3ac,fStack_3b0);
        if (puStack_768 == puStack_778) {
          pdb_142d7e6e0(&puStack_778);
        }
        uStack_770[(longlong)puVar18 * 8] = uVar14;
        *(uint **)(uStack_770 + (longlong)puVar18 * 8 + 2) = puStack_160;
        *(uint **)(uStack_770 + (longlong)puVar18 * 8 + 4) = puStack_178;
        *(uint **)(uStack_770 + (longlong)puVar18 * 8 + 6) = puStack_118;
        puStack_768 = (uint *)((longlong)puVar18 + 1);
        puVar18 = puStack_138;
      }
      goto LAB_140385c61;
    }
    uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
    uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
  }
  auVar64[0] = -(auVar61[0] == -1);
  auVar64[1] = -(auVar61[1] == -1);
  auVar64[2] = -(auVar61[2] == -1);
  auVar64[3] = -(auVar61[3] == -1);
  auVar64[4] = -(auVar61[4] == -1);
  auVar64[5] = -(auVar61[5] == -1);
  auVar64[6] = -(auVar61[6] == -1);
  auVar64[7] = -(auVar61[7] == -1);
  auVar64[8] = -(auVar61[8] == -1);
  auVar64[9] = -(auVar61[9] == -1);
  auVar64[10] = -(auVar61[10] == -1);
  auVar64[0xb] = -(auVar61[0xb] == -1);
  auVar64[0xc] = -(auVar61[0xc] == -1);
  auVar64[0xd] = -(auVar61[0xd] == -1);
  auVar64[0xe] = -(auVar61[0xe] == -1);
  auVar64[0xf] = -(auVar61[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47100);
    goto LAB_140389767;
  }
  uVar17 = uVar17 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140385d7c;
LAB_1403867e3:
  uVar17 = uVar17 & (ulonglong)pfVar29;
  auVar69 = *(undefined1 (*) [16])((longlong)puVar18 + uVar17);
  auVar81[0] = -(auVar69[0] == auVar61[0]);
  auVar81[1] = -(auVar69[1] == auVar61[1]);
  auVar81[2] = -(auVar69[2] == auVar61[2]);
  auVar81[3] = -(auVar69[3] == auVar61[3]);
  auVar81[4] = -(auVar69[4] == auVar61[4]);
  auVar81[5] = -(auVar69[5] == auVar61[5]);
  auVar81[6] = -(auVar69[6] == auVar61[6]);
  auVar81[7] = -(auVar69[7] == auVar61[7]);
  auVar81[8] = -(auVar69[8] == auVar61[0]);
  auVar81[9] = -(auVar69[9] == auVar61[1]);
  auVar81[10] = -(auVar69[10] == auVar61[2]);
  auVar81[0xb] = -(auVar69[0xb] == auVar61[3]);
  auVar81[0xc] = -(auVar69[0xc] == auVar61[4]);
  auVar81[0xd] = -(auVar69[0xd] == auVar61[5]);
  auVar81[0xe] = -(auVar69[0xe] == auVar61[6]);
  auVar81[0xf] = -(auVar69[0xf] == auVar61[7]);
  uVar45 = (ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe | (ushort)(auVar81[0xf] >> 7) << 0xf;
  uVar34 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar57 = 0;
    for (uVar90 = uVar34; (uVar90 & 1) == 0; uVar90 = uVar90 >> 1 | 0x80000000) {
      uVar57 = uVar57 + 1;
    }
    uVar47 = uVar57 + uVar17 & (ulonglong)pfVar29;
    if (uVar35 == puVar18[uVar47 * -0xe + -0xe]) {
      if ((fVar62 == (float)puVar18[uVar47 * -0xe + -5]) &&
         (!NAN(fVar62) && !NAN((float)puVar18[uVar47 * -0xe + -5]))) {
        if ((fVar2 == (float)puVar18[uVar47 * -0xe + -3]) &&
           (!NAN(fVar2) && !NAN((float)puVar18[uVar47 * -0xe + -3]))) {
          pdb_1405cb370(&uStack_628,uVar33,uVar35);
        }
      }
      goto LAB_1403866e0;
    }
    uVar45 = (ushort)(uVar34 - 1) & (ushort)uVar34;
    uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar45);
  }
  auVar66[0] = -(auVar69[0] == -1);
  auVar66[1] = -(auVar69[1] == -1);
  auVar66[2] = -(auVar69[2] == -1);
  auVar66[3] = -(auVar69[3] == -1);
  auVar66[4] = -(auVar69[4] == -1);
  auVar66[5] = -(auVar69[5] == -1);
  auVar66[6] = -(auVar69[6] == -1);
  auVar66[7] = -(auVar69[7] == -1);
  auVar66[8] = -(auVar69[8] == -1);
  auVar66[9] = -(auVar69[9] == -1);
  auVar66[10] = -(auVar69[10] == -1);
  auVar66[0xb] = -(auVar69[0xb] == -1);
  auVar66[0xc] = -(auVar69[0xc] == -1);
  auVar66[0xd] = -(auVar69[0xd] == -1);
  auVar66[0xe] = -(auVar69[0xe] == -1);
  auVar66[0xf] = -(auVar69[0xf] == -1);
  if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x37,0) & 1) != 0) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f470b8);
    goto LAB_140389767;
  }
  uVar17 = uVar17 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_1403867e3;
LAB_140386b5e:
  uVar17 = 0;
  goto LAB_14038725c;
LAB_140386cc0:
  uVar17 = uVar17 & (ulonglong)pfVar29;
  auVar69 = *(undefined1 (*) [16])((longlong)puVar18 + uVar17);
  auVar83[0] = -(auVar69[0] == auVar61[0]);
  auVar83[1] = -(auVar69[1] == auVar61[1]);
  auVar83[2] = -(auVar69[2] == auVar61[2]);
  auVar83[3] = -(auVar69[3] == auVar61[3]);
  auVar83[4] = -(auVar69[4] == auVar61[4]);
  auVar83[5] = -(auVar69[5] == auVar61[5]);
  auVar83[6] = -(auVar69[6] == auVar61[6]);
  auVar83[7] = -(auVar69[7] == auVar61[7]);
  auVar83[8] = -(auVar69[8] == auVar61[0]);
  auVar83[9] = -(auVar69[9] == auVar61[1]);
  auVar83[10] = -(auVar69[10] == auVar61[2]);
  auVar83[0xb] = -(auVar69[0xb] == auVar61[3]);
  auVar83[0xc] = -(auVar69[0xc] == auVar61[4]);
  auVar83[0xd] = -(auVar69[0xd] == auVar61[5]);
  auVar83[0xe] = -(auVar69[0xe] == auVar61[6]);
  auVar83[0xf] = -(auVar69[0xf] == auVar61[7]);
  uVar45 = (ushort)(SUB161(auVar83 >> 7,0) & 1) | (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe | (ushort)(auVar83[0xf] >> 7) << 0xf;
  uVar33 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar57 = 0;
    for (uVar90 = uVar33; (uVar90 & 1) == 0; uVar90 = uVar90 >> 1 | 0x80000000) {
      uVar57 = uVar57 + 1;
    }
    uVar48 = uVar57 + uVar17 & (ulonglong)pfVar29;
    if (uVar35 == puVar18[uVar48 * -0xe + -0xe]) {
      if (((*(longlong *)(puVar18 + uVar47 * -0xe + -0xc) != 0) ||
          (puStack_128 = puVar18 + uVar48 * -0xe, *(longlong *)(puStack_128 + -0xc) != 0)) ||
         (lVar16 = *(longlong *)(puVar18 + uVar47 * -0xe + -10),
         lVar16 != *(longlong *)(puStack_128 + -10))) goto LAB_140387255;
      puStack_130 = (uint *)pdb_140c3d060(*(longlong *)puStack_180,0,lVar16,
                                          puVar18[uVar47 * -0xe + -2]);
      if (puStack_130 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46e68);
      }
      lVar39 = *(longlong *)(puStack_128 + -0xc);
      lVar31 = *(longlong *)(puStack_128 + -10);
      puStack_118 = (uint *)pdb_140c3d060(*(longlong *)puStack_180,lVar39,lVar31,puStack_128[-2]);
      uVar96 = (undefined4)((ulonglong)in_stack_fffffffffffff4c0 >> 0x20);
      uVar99 = (undefined4)((ulonglong)in_stack_fffffffffffff4c8 >> 0x20);
      uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffff4b8 >> 0x20);
      if (puStack_118 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46e80);
      }
      if ((1 < *(byte *)((longlong)puStack_130 + 0x32)) ||
         (1 < *(byte *)((longlong)puStack_118 + 0x32))) goto LAB_140387255;
      pfStack_120 = (float *)CONCAT44(pfStack_120._4_4_,puStack_130[4]);
      puStack_1a8 = (undefined8 *)CONCAT44(puStack_1a8._4_4_,puStack_130[5]);
      puStack_1f0 = (uint *)CONCAT44(puStack_1f0._4_4_,puStack_118[4]);
      uVar33 = puStack_118[5];
      pdb_140901390(&uStack_868,0,lVar16,uVar34);
      pdb_140901390(&uStack_880,lVar39,lVar31,uVar35);
      uStack_9c8 = uStack_858;
      uStack_9d8 = uStack_868;
      uStack_9d0 = uStack_860;
      uStack_9b0 = uStack_870;
      uStack_9c0 = uStack_880;
      uStack_9b8 = uStack_878;
      pdb_14038c6d0(&uStack_3b8,&puStack_1d8,auStack_558,uVar34,CONCAT44(uVar15,uVar35));
      puVar22 = (uint *)uStack_3b8;
      uVar97 = SUB84(uStack_3b8,0);
      uVar17 = (ulonglong)uStack_3b8 >> 0x20;
      uStack_788 = uStack_3a0;
      uStack_798 = CONCAT44(fStack_3ac,fStack_3b0);
      uStack_790 = CONCAT44(uStack_3a4,uStack_3a8);
      pdb_14038c6d0(&uStack_3b8,&puStack_1d8,auStack_558,uVar35,uVar34);
      puVar23 = (uint *)uStack_3b8;
      uVar98 = SUB84(uStack_3b8,0);
      uVar48 = (ulonglong)uStack_3b8 >> 0x20;
      uStack_7a8 = uStack_3a0;
      uStack_7b8 = CONCAT44(fStack_3ac,fStack_3b0);
      uStack_7b0 = CONCAT44(uStack_3a4,uStack_3a8);
      uVar56 = pdb_140c016f0(&uStack_798);
      auVar61 = auVar69;
      uVar57 = pdb_140c016f0(&uStack_7b8);
      puStack_778 = puVar22;
      uVar15 = auVar69._0_4_;
      uStack_770 = (uint *)CONCAT44(uVar15,uVar56);
      pdb_1405cb750(&uStack_3b8,auStack_988,uVar34,uVar35,&puStack_778);
      puStack_778 = puVar23;
      uStack_770 = (uint *)CONCAT44(auVar61._0_4_,uVar57);
      pdb_1405cb750(&uStack_3b8,auStack_988,uVar35,uVar34,&puStack_778);
      pdb_14089b500(&puStack_778,puStack_130,*(longlong *)puStack_1a0,puStack_138,&uStack_868);
      puVar41 = &uStack_880;
      pdb_14089b500(&uStack_3b8,puStack_118,*(longlong *)puStack_1a0,puStack_138,puVar41);
      uVar100 = (undefined4)((ulonglong)puVar41 >> 0x20);
      puStack_a68 = puStack_768;
      puStack_a60 = puStack_760;
      puStack_a78 = puStack_778;
      puStack_a70 = uStack_770;
      uStack_a50 = CONCAT44(fStack_3ac,fStack_3b0);
      uStack_a48 = CONCAT44(uStack_3a4,uStack_3a8);
      uStack_a40 = CONCAT44(uStack_39c,uStack_3a0);
      puStack_a58 = (uint *)uStack_3b8;
      uVar26 = pdb_140c413f0(puVar18 + uVar47 * -0xe + -0xc);
      lVar16 = pdb_140b54f80(*(longlong *)puStack_1a0,uVar26,&UNK_142f46e98);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46eb0);
      }
      uVar90 = auVar61._0_4_ ^ uVar14;
      in_stack_fffffffffffff4c8 = (undefined8 *)CONCAT44(uVar99,uVar57 ^ uVar14);
      in_stack_fffffffffffff4c0 = (float *)CONCAT44(uVar96,uVar15);
      in_stack_fffffffffffff4b8 = (uint **)CONCAT44(uVar100,uVar56);
      in_stack_fffffffffffff508 = param_8;
      pdb_140897fe0(&puStack_4c8,lVar16,&uStack_798,&uStack_7b8,in_stack_fffffffffffff4b8,
                    in_stack_fffffffffffff4c0,in_stack_fffffffffffff4c8,uVar90,
                    puVar18[uVar47 * -0xe + -1],puStack_128[-1],pfStack_120._0_4_,puStack_1a8._0_4_,
                    puStack_1f0._0_4_,uVar33,param_8);
      uStack_3a8 = (uint)puStack_498;
      uStack_3a4 = (undefined4)((ulonglong)puStack_498 >> 0x20);
      uStack_3b8 = (uint **)puStack_4a8;
      fStack_3b0 = SUB84(puStack_4a0,0);
      fStack_3ac = (float)((ulonglong)puStack_4a0 >> 0x20);
      uStack_fb = 0;
      pdb_140080c90(&puStack_418,&uStack_3b8,1);
      puVar18 = puStack_200;
      if (SBORROW8(0,(longlong)puStack_418)) {
        if (puStack_200 == puStack_210) {
          uStack_fb = 0;
          pdb_142d8d7f0(&puStack_210);
        }
        puStack_208[(longlong)puVar18 * 2] = uVar34;
        puStack_208[(longlong)puVar18 * 2 + 1] = uVar35;
        puStack_200 = (uint *)((longlong)puVar18 + 1);
        if ((!SBORROW8(0,lStack_490)) && (lStack_490 != 0)) {
          pub_1406abac0(pbStack_488,lStack_490 << 3,4);
        }
        if ((!SBORROW8(0,lStack_478)) && (lStack_478 != 0)) {
          pub_1406abac0(pbStack_470,lStack_478 << 2,4);
        }
        if ((!SBORROW8(0,(longlong)puStack_460)) && (puStack_460 != (uint *)0x0)) {
          pub_1406abac0((byte *)puStack_458,(longlong)puStack_460 << 2,4);
        }
        if ((puStack_4c8 != (uint *)0x0) && ((undefined8 *)0x1 < puStack_4b0)) {
          pub_1406abac0((byte *)puStack_4c0,(longlong)puStack_4b0 << 2,2);
        }
      }
      else {
        in_stack_fffffffffffff4b8 = (uint **)(puStack_128 + -0xc);
        puStack_388 = puStack_3e8;
        auStack_398._8_8_ = puStack_3f0;
        auStack_398._0_8_ = puStack_3f8;
        uStack_3a8 = (uint)puStack_408;
        uStack_3a4 = (undefined4)((ulonglong)puStack_408 >> 0x20);
        uStack_3a0 = (uint)puStack_400;
        uStack_39c = (uint)((ulonglong)puStack_400 >> 0x20);
        uStack_3b8 = (uint **)puStack_418;
        fStack_3b0 = SUB84(puStack_410,0);
        fStack_3ac = (float)((ulonglong)puStack_410 >> 0x20);
        uStack_998 = uStack_480;
        lStack_9a8 = lStack_490;
        pbStack_9a0 = pbStack_488;
        uStack_828 = uStack_468;
        lStack_838 = lStack_478;
        pbStack_830 = pbStack_470;
        uStack_218 = uStack_450;
        puStack_228 = puStack_460;
        puStack_220 = puStack_458;
        puStack_568 = puStack_4b8;
        puStack_560 = puStack_4b0;
        puStack_578 = puStack_4c8;
        puStack_570 = puStack_4c0;
        uStack_fb = 1;
        in_stack_fffffffffffff508 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffff508 >> 0x20),uVar90);
        in_stack_fffffffffffff4c8 = &uStack_7b8;
        in_stack_fffffffffffff4c0 = (float *)&uStack_798;
        pdb_14089bbd0(&puStack_778,&puStack_a78,puStack_1f8,puStack_178,in_stack_fffffffffffff4b8,
                      in_stack_fffffffffffff4c0,in_stack_fffffffffffff4c8,uVar97,(int)uVar17,uVar98,
                      (int)uVar48,uVar56,uVar15,uVar57 ^ uVar14,in_stack_fffffffffffff508,
                      &uStack_9d8,&lStack_9a8,&lStack_838,&puStack_228,&puStack_578,&puStack_818,
                      &uStack_3b8);
        *puStack_1e8 = uStack_16c;
        pub_142e32760(&uStack_3b8,&puStack_778,0x150);
        lVar16 = plStack_168[2];
        if (lVar16 == *plStack_168) {
          pdb_142d7efa0(plStack_168);
        }
        plVar19 = plStack_168;
        pub_142e32760(lVar16 * 0x150 + plStack_168[1],&puStack_778,0x150);
        plVar19[2] = lVar16 + 1;
      }
      goto LAB_14038690d;
    }
    uVar45 = (ushort)(uVar33 - 1) & (ushort)uVar33;
    uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar45);
  }
  auVar68[0] = -(auVar69[0] == -1);
  auVar68[1] = -(auVar69[1] == -1);
  auVar68[2] = -(auVar69[2] == -1);
  auVar68[3] = -(auVar69[3] == -1);
  auVar68[4] = -(auVar69[4] == -1);
  auVar68[5] = -(auVar69[5] == -1);
  auVar68[6] = -(auVar69[6] == -1);
  auVar68[7] = -(auVar69[7] == -1);
  auVar68[8] = -(auVar69[8] == -1);
  auVar68[9] = -(auVar69[9] == -1);
  auVar68[10] = -(auVar69[10] == -1);
  auVar68[0xb] = -(auVar69[0xb] == -1);
  auVar68[0xc] = -(auVar69[0xc] == -1);
  auVar68[0xd] = -(auVar69[0xd] == -1);
  auVar68[0xe] = -(auVar69[0xe] == -1);
  auVar68[0xf] = -(auVar69[0xf] == -1);
  if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar68 >> 0x17,0) & 1) != 0) || (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar68 >> 0x27,0) & 1) != 0) || (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar68 >> 0x37,0) & 1) != 0) || (SUB161(auVar68 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46e50);
    goto LAB_140389767;
  }
  uVar17 = uVar17 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140386cc0;
LAB_140387255:
  uVar17 = auStack_148._8_8_;
LAB_14038725c:
  if (!bVar54) {
    uStack_43c = 0;
    uStack_448 = 0;
    if (uVar17 == 0) {
      lVar16 = 0;
      puVar18 = (uint *)0x0;
LAB_1403874f0:
      lVar39 = 0;
    }
    else {
      puVar18 = (uint *)0x0;
      if (puStack_158 <= (ulonglong)auStack_148._0_8_) {
        puVar18 = puStack_158;
      }
      lVar16 = auStack_148._0_8_ - (longlong)puVar18;
      lVar39 = uVar17 - ((longlong)puStack_158 - lVar16);
      puVar18 = puStack_158;
      if (uVar17 < (ulonglong)((longlong)puStack_158 - lVar16) || lVar39 == 0) {
        puVar18 = (uint *)(uVar17 + lVar16);
        goto LAB_1403874f0;
      }
    }
    puVar22 = puStack_150 + lVar16;
    puVar18 = puStack_150 + (longlong)puVar18;
    puVar23 = puStack_150 + lVar39;
    bVar54 = false;
    puVar44 = puStack_150;
    uVar33 = (uint)puStack_1e0;
LAB_14038753a:
    puVar27 = puVar44;
    puVar32 = puVar22;
    if ((puVar22 != puVar18) ||
       (bVar53 = puVar44 != puVar23, puVar18 = puVar23, puVar27 = puVar22, puVar32 = puVar44,
       puVar23 = puVar22, bVar53)) {
      puVar22 = puVar32 + 1;
      uVar35 = *puVar32;
      if (!bVar54) {
        puVar44 = puVar22;
        puVar36 = puVar23;
        if ((puVar22 == puVar18) &&
           (bVar54 = puVar27 == puVar23, puVar44 = puVar27, puVar36 = puVar18, puVar27 = puVar22,
           puVar18 = puVar23, bVar54)) goto LAB_1403879c5;
        puVar22 = puVar44 + 1;
        puVar23 = puVar36;
        uVar35 = *puVar44;
        uVar33 = *puVar32;
      }
      uStack_3b8 = (uint **)CONCAT44(uStack_3b8._4_4_,uVar33);
      if (auStack_1c8._8_8_ != 0) {
        uVar17 = pdb_1400aede0(auStack_1b8,&uStack_3b8);
        bVar55 = (byte)(uVar17 >> 0x39);
        auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
        auVar61 = pshuflw(auVar61,auVar61,0);
        lVar16 = 0;
        while( true ) {
          uVar17 = uVar17 & (ulonglong)pfStack_1d0;
          auVar69 = *(undefined1 (*) [16])((longlong)puStack_1d8 + uVar17);
          auVar85[0] = -(auVar69[0] == auVar61[0]);
          auVar85[1] = -(auVar69[1] == auVar61[1]);
          auVar85[2] = -(auVar69[2] == auVar61[2]);
          auVar85[3] = -(auVar69[3] == auVar61[3]);
          auVar85[4] = -(auVar69[4] == auVar61[4]);
          auVar85[5] = -(auVar69[5] == auVar61[5]);
          auVar85[6] = -(auVar69[6] == auVar61[6]);
          auVar85[7] = -(auVar69[7] == auVar61[7]);
          auVar85[8] = -(auVar69[8] == auVar61[0]);
          auVar85[9] = -(auVar69[9] == auVar61[1]);
          auVar85[10] = -(auVar69[10] == auVar61[2]);
          auVar85[0xb] = -(auVar69[0xb] == auVar61[3]);
          auVar85[0xc] = -(auVar69[0xc] == auVar61[4]);
          auVar85[0xd] = -(auVar69[0xd] == auVar61[5]);
          auVar85[0xe] = -(auVar69[0xe] == auVar61[6]);
          auVar85[0xf] = -(auVar69[0xf] == auVar61[7]);
          uVar45 = (ushort)(SUB161(auVar85 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar85[0xf] >> 7) << 0xf;
          uVar34 = (uint)uVar45;
          while (uVar45 != 0) {
            uVar57 = 0;
            for (uVar90 = uVar34; (uVar90 & 1) == 0; uVar90 = uVar90 >> 1 | 0x80000000) {
              uVar57 = uVar57 + 1;
            }
            uVar47 = uVar57 + uVar17 & (ulonglong)pfStack_1d0;
            if (uVar33 == puStack_1d8[uVar47 * -0xe + -0xe]) {
              fVar62 = (float)puStack_1d8[uVar47 * -0xe + -5];
              fVar2 = (float)puStack_1d8[uVar47 * -0xe + -3];
              auVar61 = ZEXT416(puStack_1d8[uVar47 * -0xe + -1]);
              pcVar24 = (char *)pdb_1405cb310(auStack_558,uVar33,uVar35);
              if (pcVar24 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_142f47130);
              }
              cVar12 = *pcVar24;
              uVar26 = *(undefined8 *)(pcVar24 + 4);
              uVar28 = *(undefined8 *)(pcVar24 + 0xc);
              lVar16 = pdb_1405cb310(auStack_558,uVar33,uVar35);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_142f47148);
              }
              fVar58 = (float)pdb_140c01750(lVar16);
              uVar17 = uStack_188;
              if ((uStack_188 == 0) && (cVar12 != '\x02')) {
                uVar15 = (int)uVar28;
                uVar96 = (int)((ulonglong)uVar28 >> 0x20);
                if (cVar12 != '\x01') {
                  uVar15 = (int)uVar26;
                  uVar96 = (int)((ulonglong)uVar26 >> 0x20);
                }
                uStack_438 = CONCAT44(uVar96,uVar15);
                uStack_43c = 1;
              }
              if (uStack_188 == uStack_198) {
                pdb_142db07d0(&uStack_198);
              }
              *(ulonglong *)(puStack_190 + uVar17 * 2) =
                   CONCAT44(auVar61._0_4_ + fVar2,fVar58 + fVar62);
              uStack_188 = uVar17 + 1;
              bVar54 = true;
              puVar44 = puVar27;
              uVar33 = uVar35;
              goto LAB_14038753a;
            }
            uVar45 = (ushort)(uVar34 - 1) & (ushort)uVar34;
            uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar45);
          }
          auVar71[0] = -(auVar69[0] == -1);
          auVar71[1] = -(auVar69[1] == -1);
          auVar71[2] = -(auVar69[2] == -1);
          auVar71[3] = -(auVar69[3] == -1);
          auVar71[4] = -(auVar69[4] == -1);
          auVar71[5] = -(auVar69[5] == -1);
          auVar71[6] = -(auVar69[6] == -1);
          auVar71[7] = -(auVar69[7] == -1);
          auVar71[8] = -(auVar69[8] == -1);
          auVar71[9] = -(auVar69[9] == -1);
          auVar71[10] = -(auVar69[10] == -1);
          auVar71[0xb] = -(auVar69[0xb] == -1);
          auVar71[0xc] = -(auVar69[0xc] == -1);
          auVar71[0xd] = -(auVar69[0xd] == -1);
          auVar71[0xe] = -(auVar69[0xe] == -1);
          auVar71[0xf] = -(auVar69[0xf] == -1);
          if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 || (SUB161(auVar71 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar71 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar71 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar71 >> 0x2f,0) & 1) != 0) || (SUB161(auVar71 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar71 >> 0x47,0) & 1) != 0) || (SUB161(auVar71 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar71 >> 0x57,0) & 1) != 0) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') break;
          uVar17 = uVar17 + lVar16 + 0x10;
          lVar16 = lVar16 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47118);
      goto LAB_140389767;
    }
LAB_1403879c5:
    puStack_1e0 = (uint *)CONCAT44(puStack_1e0._4_4_,uVar33);
    if (auStack_148._8_8_ == 0) {
      puVar18 = (uint *)0x0;
      puVar22 = (uint *)0x0;
LAB_140387a24:
      if (puVar18 == puVar22) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46ec8);
      }
      bVar54 = false;
      puVar18 = puStack_150 + (longlong)puVar18;
      puVar23 = puStack_150;
    }
    else {
      puVar18 = (uint *)0x0;
      if (puStack_158 <= (ulonglong)auStack_148._0_8_) {
        puVar18 = puStack_158;
      }
      puVar18 = (uint *)(auStack_148._0_8_ - (longlong)puVar18);
      puVar22 = (uint *)(auStack_148._8_8_ - ((longlong)puStack_158 - (longlong)puVar18));
      if ((ulonglong)auStack_148._8_8_ < (ulonglong)((longlong)puStack_158 - (longlong)puVar18) ||
          puVar22 == (uint *)0x0) {
        puVar22 = (uint *)(auStack_148._8_8_ + (longlong)puVar18);
        goto LAB_140387a24;
      }
      bVar54 = puStack_158 != puVar18;
      puVar23 = puStack_150 + (longlong)puStack_158;
      puVar18 = puStack_150;
    }
    puVar22 = puStack_150 + (longlong)puVar22 + -1;
    if (puVar18 == puVar22 && !bVar54) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f46ee0);
    }
    if (puVar18 != puVar22) {
      puVar23 = puVar22;
    }
    pdb_14038c6d0(&uStack_3b8,&puStack_1d8,auStack_558,*puVar22,puVar23[-1]);
    uVar17 = uStack_188;
    puVar18 = (uint *)uStack_3b8;
    if (fStack_3b0._0_1_ == '\0') {
      uStack_444 = CONCAT44(uStack_3a8,fStack_3ac);
LAB_140387aa3:
      uStack_444 = uStack_444 ^ auVar60._0_8_;
      uStack_448 = 1;
    }
    else if (fStack_3b0._0_1_ == '\x01') {
      uStack_444 = CONCAT44(uStack_3a0,uStack_3a4);
      goto LAB_140387aa3;
    }
    if (uStack_188 == uStack_198) {
      pdb_142db07d0(&uStack_198);
    }
    *(uint **)(puStack_190 + uVar17 * 2) = puVar18;
    uStack_188 = uVar17 + 1;
    in_stack_fffffffffffff4c0 = (float *)&uStack_448;
    in_stack_fffffffffffff4b8 = (uint **)&uStack_43c;
    pdb_140dec550(&puStack_578,auStack_430,puStack_190,uStack_188,in_stack_fffffffffffff4b8,
                  in_stack_fffffffffffff4c0);
    goto LAB_140387b32;
  }
  if (uVar17 == 0) {
    lVar16 = 0;
    puVar18 = (uint *)0x0;
LAB_1403872fa:
    lVar39 = 0;
  }
  else {
LAB_14038726a:
    puVar18 = (uint *)0x0;
    if (puStack_158 <= (ulonglong)auStack_148._0_8_) {
      puVar18 = puStack_158;
    }
    lVar16 = auStack_148._0_8_ - (longlong)puVar18;
    lVar39 = uVar17 - ((longlong)puStack_158 - lVar16);
    puVar18 = puStack_158;
    if (uVar17 < (ulonglong)((longlong)puStack_158 - lVar16) || lVar39 == 0) {
      puVar18 = (uint *)(uVar17 + lVar16);
      goto LAB_1403872fa;
    }
  }
  puVar22 = puStack_150 + lVar16;
  puVar18 = puStack_150 + (longlong)puVar18;
  puVar23 = puStack_150 + lVar39;
  bVar54 = false;
  puVar44 = puStack_150;
  uVar33 = (uint)puStack_160;
LAB_140387344:
  puVar27 = puVar44;
  puVar32 = puVar22;
  if ((puVar22 != puVar18) ||
     (bVar53 = puVar44 != puVar23, puVar18 = puVar23, puVar27 = puVar22, puVar32 = puVar44,
     puVar23 = puVar22, bVar53)) {
    puVar22 = puVar32 + 1;
    uVar35 = *puVar32;
    if (!bVar54) {
      puVar44 = puVar22;
      puVar36 = puVar23;
      if ((puVar22 == puVar18) &&
         (bVar54 = puVar27 == puVar23, puVar44 = puVar27, puVar36 = puVar18, puVar27 = puVar22,
         puVar18 = puVar23, bVar54)) goto LAB_140387926;
      puVar22 = puVar44 + 1;
      puVar23 = puVar36;
      uVar35 = *puVar44;
      uVar33 = *puVar32;
    }
    uStack_3b8 = (uint **)CONCAT44(uStack_3b8._4_4_,uVar33);
    if (auStack_1c8._8_8_ != 0) {
      uVar17 = pdb_1400aede0(auStack_1b8,&uStack_3b8);
      bVar55 = (byte)(uVar17 >> 0x39);
      auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
      auVar61 = pshuflw(auVar61,auVar61,0);
      lVar16 = 0;
      while( true ) {
        uVar17 = uVar17 & (ulonglong)pfStack_1d0;
        auVar69 = *(undefined1 (*) [16])((longlong)puStack_1d8 + uVar17);
        auVar84[0] = -(auVar69[0] == auVar61[0]);
        auVar84[1] = -(auVar69[1] == auVar61[1]);
        auVar84[2] = -(auVar69[2] == auVar61[2]);
        auVar84[3] = -(auVar69[3] == auVar61[3]);
        auVar84[4] = -(auVar69[4] == auVar61[4]);
        auVar84[5] = -(auVar69[5] == auVar61[5]);
        auVar84[6] = -(auVar69[6] == auVar61[6]);
        auVar84[7] = -(auVar69[7] == auVar61[7]);
        auVar84[8] = -(auVar69[8] == auVar61[0]);
        auVar84[9] = -(auVar69[9] == auVar61[1]);
        auVar84[10] = -(auVar69[10] == auVar61[2]);
        auVar84[0xb] = -(auVar69[0xb] == auVar61[3]);
        auVar84[0xc] = -(auVar69[0xc] == auVar61[4]);
        auVar84[0xd] = -(auVar69[0xd] == auVar61[5]);
        auVar84[0xe] = -(auVar69[0xe] == auVar61[6]);
        auVar84[0xf] = -(auVar69[0xf] == auVar61[7]);
        uVar45 = (ushort)(SUB161(auVar84 >> 7,0) & 1) | (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe | (ushort)(auVar84[0xf] >> 7) << 0xf
        ;
        uVar34 = (uint)uVar45;
        while (uVar45 != 0) {
          uVar57 = 0;
          for (uVar90 = uVar34; (uVar90 & 1) == 0; uVar90 = uVar90 >> 1 | 0x80000000) {
            uVar57 = uVar57 + 1;
          }
          uVar47 = uVar57 + uVar17 & (ulonglong)pfStack_1d0;
          if (uVar33 == puStack_1d8[uVar47 * -0xe + -0xe]) {
            fVar62 = (float)puStack_1d8[uVar47 * -0xe + -5];
            fVar2 = (float)puStack_1d8[uVar47 * -0xe + -3];
            auVar61 = ZEXT416(puStack_1d8[uVar47 * -0xe + -1]);
            lVar16 = pdb_1405cb310(auStack_558,uVar33,uVar35);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_142f47130);
            }
            lVar16 = pdb_1405cb310(auStack_558,uVar33,uVar35);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_142f47148);
            }
            fVar58 = (float)pdb_140c01750(lVar16);
            uVar17 = uStack_188;
            if (uStack_188 == uStack_198) {
              pdb_142db07d0(&uStack_198);
            }
            *(ulonglong *)(puStack_190 + uVar17 * 2) =
                 CONCAT44(auVar61._0_4_ + fVar2,fVar58 + fVar62);
            uStack_188 = uVar17 + 1;
            bVar54 = true;
            puVar44 = puVar27;
            uVar33 = uVar35;
            goto LAB_140387344;
          }
          uVar45 = (ushort)(uVar34 - 1) & (ushort)uVar34;
          uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar45);
        }
        auVar70[0] = -(auVar69[0] == -1);
        auVar70[1] = -(auVar69[1] == -1);
        auVar70[2] = -(auVar69[2] == -1);
        auVar70[3] = -(auVar69[3] == -1);
        auVar70[4] = -(auVar69[4] == -1);
        auVar70[5] = -(auVar69[5] == -1);
        auVar70[6] = -(auVar69[6] == -1);
        auVar70[7] = -(auVar69[7] == -1);
        auVar70[8] = -(auVar69[8] == -1);
        auVar70[9] = -(auVar69[9] == -1);
        auVar70[10] = -(auVar69[10] == -1);
        auVar70[0xb] = -(auVar69[0xb] == -1);
        auVar70[0xc] = -(auVar69[0xc] == -1);
        auVar70[0xd] = -(auVar69[0xd] == -1);
        auVar70[0xe] = -(auVar69[0xe] == -1);
        auVar70[0xf] = -(auVar69[0xf] == -1);
        if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 || (SUB161(auVar70 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar70 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar70 >> 0x1f,0) & 1) != 0) || (SUB161(auVar70 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar70 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar70 >> 0x37,0) & 1) != 0) || (SUB161(auVar70 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar70 >> 0x47,0) & 1) != 0) || (SUB161(auVar70 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar70 >> 0x57,0) & 1) != 0) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar70 >> 0x67,0) & 1) != 0) || (SUB161(auVar70 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar70 >> 0x77,0) & 1) != 0) || auVar70[0xf] < '\0') break;
        uVar17 = uVar17 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47118);
    goto LAB_140389767;
  }
LAB_140387926:
  puStack_160 = (uint *)CONCAT44(puStack_160._4_4_,uVar33);
  if (uStack_188 < 3) {
    uStack_3b8 = &puStack_158;
    fStack_3b0 = 2.3773422;
    fStack_3ac = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142f46ef8,&uStack_3b8,&UNK_142f46f20);
  }
  pdb_140debe80(&uStack_3b8,auStack_430,puStack_190);
  uVar17 = uStack_188;
  if (uStack_188 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_142f46f38);
  }
  lVar16 = *(longlong *)puStack_190;
  if (uStack_188 == uStack_198) {
    pdb_142db07d0(&uStack_198);
  }
  *(longlong *)(puStack_190 + uVar17 * 2) = lVar16;
  uStack_188 = uVar17 + 1;
  puStack_570 = (uint *)CONCAT44(fStack_3ac,fStack_3b0);
  puStack_568 = (uint *)CONCAT44(uStack_3a4,uStack_3a8);
  puStack_560 = (undefined8 *)CONCAT44(uStack_39c,uStack_3a0);
  puStack_578 = (uint *)uStack_3b8;
LAB_140387b32:
  puStack_130 = puStack_190;
  puStack_118 = puStack_190 + uStack_188 * 2;
  bVar54 = true;
  uVar17 = 0;
  pfStack_120 = (float *)0x0;
  if (puStack_190 != puStack_118) {
LAB_140387b76:
    do {
      puVar18 = puStack_130 + 2;
      puVar22 = puStack_108;
      puVar23 = puVar18;
      puStack_108 = puStack_130;
      if (bVar54) {
        if (puVar18 == puStack_118) {
          puStack_108 = puStack_118;
          break;
        }
        puVar22 = puStack_130;
        puVar23 = puStack_130 + 4;
        puStack_108 = puVar18;
      }
      puStack_130 = puVar23;
      pdb_14089e4b0(&uStack_3b8,&puStack_578,uVar17);
      puVar18 = puStack_108;
      puStack_178 = (uint *)CONCAT44(fStack_3ac,fStack_3b0);
      puStack_128 = (uint *)uStack_3b8;
      if ((ulonglong)auStack_148._8_8_ <= uVar17) {
        uStack_fc = 1;
        pdb_142dc8110(&UNK_142f46af8,0x14,&UNK_142f46f50);
        goto LAB_140389767;
      }
      puVar23 = (uint *)(auStack_148._0_8_ + uVar17);
      uVar17 = uVar17 + 1;
      puVar44 = (uint *)0x0;
      if (puStack_158 <= puVar23) {
        puVar44 = puStack_158;
      }
      if ((ulonglong)auStack_148._8_8_ <= uVar17) {
        uStack_fc = 1;
        pdb_142dc8110(&UNK_142f46af8,0x14,&UNK_142f46f68);
        goto LAB_140389767;
      }
      puStack_768 = (uint *)CONCAT44(uStack_3a4,uStack_3a8);
      puVar27 = (uint *)0x0;
      if (puStack_158 <= (uint *)(auStack_148._0_8_ + uVar17)) {
        puVar27 = puStack_158;
      }
      uVar33 = puStack_150[(longlong)puVar23 - (longlong)puVar44];
      uVar35 = puStack_150[(longlong)(auStack_148._0_8_ + uVar17) - (longlong)puVar27];
      puVar23 = puStack_108;
      uVar57 = uVar35;
      uVar90 = uStack_3a0;
      uVar34 = auStack_398._0_4_;
      uVar91 = uStack_39c;
      uVar92 = auStack_398._4_4_;
      if ((uVar35 < uVar33) &&
         (uVar47 = (ulonglong)puStack_768 >> 1, puVar23 = puVar22, puVar22 = puStack_108,
         uVar57 = uVar33, uVar33 = uVar35, uVar90 = auStack_398._0_4_, uVar34 = uStack_3a0,
         uVar91 = auStack_398._4_4_, uVar92 = uStack_39c, uVar47 != 0)) {
        if (uVar47 == 1) {
          uVar48 = 0;
        }
        else {
          lVar16 = (longlong)puStack_768 + -1;
          uVar48 = 0;
          do {
            uVar26 = *(undefined8 *)(puStack_178 + uVar48 * 2);
            *(undefined8 *)(puStack_178 + uVar48 * 2) = *(undefined8 *)(puStack_178 + lVar16 * 2);
            *(undefined8 *)(puStack_178 + lVar16 * 2) = uVar26;
            uVar26 = *(undefined8 *)(puStack_178 + uVar48 * 2 + 2);
            *(undefined8 *)(puStack_178 + uVar48 * 2 + 2) =
                 *(undefined8 *)
                  (puStack_178 + (longlong)puStack_768 * 2 + (uVar48 ^ 0x1ffffffffffffffe) * 2);
            *(undefined8 *)
             (puStack_178 + (longlong)puStack_768 * 2 + (uVar48 ^ 0x1ffffffffffffffe) * 2) = uVar26;
            uVar48 = uVar48 + 2;
            lVar16 = lVar16 + -2;
          } while ((uVar47 & 0xfffffffffffffffe) != uVar48);
          if ((uStack_3a8 & 2) == 0) goto LAB_140387d45;
        }
        uVar26 = *(undefined8 *)(puStack_178 + uVar48 * 2);
        *(undefined8 *)(puStack_178 + uVar48 * 2) =
             *(undefined8 *)(puStack_178 + (longlong)puStack_768 * 2 + ~uVar48 * 2);
        *(undefined8 *)(puStack_178 + (longlong)puStack_768 * 2 + ~uVar48 * 2) = uVar26;
      }
LAB_140387d45:
      puStack_778 = (uint *)uStack_3b8;
      uStack_fc = 0;
      uStack_770 = puStack_178;
      uStack_260 = uVar57;
      uStack_25c = uVar33;
      pdb_140080c90(&uStack_3b8,&puStack_778,1);
      uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffff508 >> 0x20);
      if (!SBORROW8(0,(longlong)uStack_3b8)) {
        puStack_498 = puStack_388;
        puStack_4c0 = (uint *)CONCAT44(fStack_3ac,fStack_3b0);
        puStack_4b8 = (uint *)CONCAT44(uStack_3a4,uStack_3a8);
        puStack_4b0 = (undefined8 *)CONCAT44(uStack_39c,uStack_3a0);
        puStack_4a8 = (uint *)auStack_398._0_8_;
        puStack_4a0 = (uint *)auStack_398._8_8_;
        puStack_4c8 = (uint *)uStack_3b8;
        lStack_7d8 = *(longlong *)puVar22;
        uVar96 = (undefined4)lStack_7d8;
        uVar47 = (ulonglong)lStack_7d8 >> 0x20;
        lStack_7e8 = *(longlong *)puVar23;
        uVar99 = (undefined4)lStack_7e8;
        uVar48 = (ulonglong)lStack_7e8 >> 0x20;
        uStack_7e0 = uVar34;
        uStack_7dc = uVar92;
        uStack_7d0 = uVar90;
        uStack_7cc = uVar91;
        if (auStack_1c8._8_8_ != 0) {
          uVar25 = pdb_1400aede0(auStack_1b8,&uStack_25c);
          puVar18 = puStack_1d8;
          pfStack_120 = pfStack_1d0;
          bVar55 = (byte)(uVar25 >> 0x39);
          auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
          auVar61 = pshuflw(auVar61,auVar61,0);
          lVar16 = 0;
          while( true ) {
            uVar25 = uVar25 & (ulonglong)pfStack_1d0;
            auVar69 = *(undefined1 (*) [16])((longlong)puStack_1d8 + uVar25);
            auVar86[0] = -(auVar69[0] == auVar61[0]);
            auVar86[1] = -(auVar69[1] == auVar61[1]);
            auVar86[2] = -(auVar69[2] == auVar61[2]);
            auVar86[3] = -(auVar69[3] == auVar61[3]);
            auVar86[4] = -(auVar69[4] == auVar61[4]);
            auVar86[5] = -(auVar69[5] == auVar61[5]);
            auVar86[6] = -(auVar69[6] == auVar61[6]);
            auVar86[7] = -(auVar69[7] == auVar61[7]);
            auVar86[8] = -(auVar69[8] == auVar61[0]);
            auVar86[9] = -(auVar69[9] == auVar61[1]);
            auVar86[10] = -(auVar69[10] == auVar61[2]);
            auVar86[0xb] = -(auVar69[0xb] == auVar61[3]);
            auVar86[0xc] = -(auVar69[0xc] == auVar61[4]);
            auVar86[0xd] = -(auVar69[0xd] == auVar61[5]);
            auVar86[0xe] = -(auVar69[0xe] == auVar61[6]);
            auVar86[0xf] = -(auVar69[0xf] == auVar61[7]);
            uVar45 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar86[0xf] >> 7) << 0xf;
            uVar35 = (uint)uVar45;
            while (uVar45 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar49 = uVar5 + uVar25 & (ulonglong)pfStack_1d0;
              if (uVar33 == puStack_1d8[uVar49 * -0xe + -0xe]) {
                puStack_1f0 = puStack_1d8 + uVar49 * -0xe + -0xc;
                uVar25 = pdb_1400aede0(auStack_1b8,&uStack_260);
                bVar55 = (byte)(uVar25 >> 0x39);
                auVar61 = ZEXT216(CONCAT11(bVar55,bVar55));
                auVar61 = pshuflw(auVar61,auVar61,0);
                lVar16 = 0;
                goto LAB_140387f23;
              }
              uVar45 = (ushort)(uVar35 - 1) & (ushort)uVar35;
              uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar45);
            }
            auVar72[0] = -(auVar69[0] == -1);
            auVar72[1] = -(auVar69[1] == -1);
            auVar72[2] = -(auVar69[2] == -1);
            auVar72[3] = -(auVar69[3] == -1);
            auVar72[4] = -(auVar69[4] == -1);
            auVar72[5] = -(auVar69[5] == -1);
            auVar72[6] = -(auVar69[6] == -1);
            auVar72[7] = -(auVar69[7] == -1);
            auVar72[8] = -(auVar69[8] == -1);
            auVar72[9] = -(auVar69[9] == -1);
            auVar72[10] = -(auVar69[10] == -1);
            auVar72[0xb] = -(auVar69[0xb] == -1);
            auVar72[0xc] = -(auVar69[0xc] == -1);
            auVar72[0xd] = -(auVar69[0xd] == -1);
            auVar72[0xe] = -(auVar69[0xe] == -1);
            auVar72[0xf] = -(auVar69[0xf] == -1);
            if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar72 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar72 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar72 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar72 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar72 >> 0x3f,0) & 1) != 0) || (SUB161(auVar72 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') break;
            uVar25 = uVar25 + lVar16 + 0x10;
            lVar16 = lVar16 + 0x10;
          }
        }
        uStack_f1 = 1;
        pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46f80);
        goto LAB_140389767;
      }
      bVar54 = false;
      puStack_108 = puVar18;
    } while (puStack_130 != puStack_118);
  }
LAB_140388470:
  puVar18 = puStack_200;
  if ((((ulonglong)pfStack_120 & 1) == 0) && (auStack_148._8_8_ != 0)) {
    puVar22 = puStack_158;
    if ((ulonglong)auStack_148._0_8_ < puStack_158) {
      puVar22 = (uint *)0x0;
    }
    puVar22 = (uint *)(auStack_148._0_8_ - (longlong)puVar22);
    uVar17 = (longlong)puStack_158 - (longlong)puVar22;
    lVar16 = (auStack_148._8_8_ - uVar17) * 4;
    if ((ulonglong)auStack_148._8_8_ <= uVar17) {
      lVar16 = 0;
    }
    puVar23 = (uint *)((longlong)puVar22 + auStack_148._8_8_);
    if (uVar17 < (ulonglong)auStack_148._8_8_) {
      puVar23 = puStack_158;
    }
    puVar44 = (uint *)((longlong)puStack_150 + lVar16);
    puVar27 = puStack_150 + (longlong)puVar22;
    puVar32 = puStack_150;
    puVar36 = puStack_150 + (longlong)puVar23;
    if ((puVar22 != puVar23) ||
       (puVar27 = puStack_150, puVar32 = puStack_150 + (longlong)puVar22, puVar36 = puVar44,
       puVar44 = puStack_150 + (longlong)puVar23, lVar16 != 0)) {
      uVar33 = *puVar27;
      puVar22 = puVar27 + 1;
      if ((puVar27 + 1 != puVar36) || (puVar22 = puVar32, puVar32 != puVar44)) {
        uVar35 = *puVar22;
        if (puStack_200 == puStack_210) {
          pdb_142d8d7f0(&puStack_210);
        }
        puStack_208[(longlong)puVar18 * 2] = uVar33;
        puStack_208[(longlong)puVar18 * 2 + 1] = uVar35;
        puStack_200 = (uint *)((longlong)puVar18 + 1);
      }
    }
  }
  goto LAB_14038690d;
LAB_140387f23:
  uVar25 = uVar25 & (ulonglong)pfStack_120;
  auVar69 = *(undefined1 (*) [16])((longlong)puVar18 + uVar25);
  auVar87[0] = -(auVar69[0] == auVar61[0]);
  auVar87[1] = -(auVar69[1] == auVar61[1]);
  auVar87[2] = -(auVar69[2] == auVar61[2]);
  auVar87[3] = -(auVar69[3] == auVar61[3]);
  auVar87[4] = -(auVar69[4] == auVar61[4]);
  auVar87[5] = -(auVar69[5] == auVar61[5]);
  auVar87[6] = -(auVar69[6] == auVar61[6]);
  auVar87[7] = -(auVar69[7] == auVar61[7]);
  auVar87[8] = -(auVar69[8] == auVar61[0]);
  auVar87[9] = -(auVar69[9] == auVar61[1]);
  auVar87[10] = -(auVar69[10] == auVar61[2]);
  auVar87[0xb] = -(auVar69[0xb] == auVar61[3]);
  auVar87[0xc] = -(auVar69[0xc] == auVar61[4]);
  auVar87[0xd] = -(auVar69[0xd] == auVar61[5]);
  auVar87[0xe] = -(auVar69[0xe] == auVar61[6]);
  auVar87[0xf] = -(auVar69[0xf] == auVar61[7]);
  uVar45 = (ushort)(SUB161(auVar87 >> 7,0) & 1) | (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar87 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar87 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar87 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar87 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar87 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar87 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar87 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar87 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar87 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar87 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar87 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar87 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe | (ushort)(auVar87[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar50 = uVar5 + uVar25 & (ulonglong)pfStack_120;
    if (uVar57 == puVar18[uVar50 * -0xe + -0xe]) {
      uStack_f1 = 1;
      pfStack_120 = (float *)pdb_1405cb310(auStack_558,uVar33,uVar57);
      if (pfStack_120 == (float *)0x0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46fb0);
      }
      uStack_f1 = 1;
      puStack_1a8 = (undefined8 *)pdb_1405cb310(auStack_558,uVar57,uVar33);
      if (puStack_1a8 == (undefined8 *)0x0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46fc8);
      }
      uVar26 = *(undefined8 *)(puVar18 + uVar49 * -0xe + -0xc);
      uStack_230 = *(ulonglong *)(puVar18 + uVar49 * -0xe + -10);
      uStack_f1 = 1;
      pdb_140901390(&uStack_898,uVar26,uStack_230,uVar33);
      uVar28 = *(undefined8 *)(puVar18 + uVar50 * -0xe + -0xc);
      uStack_7c0 = *(undefined8 *)(puVar18 + uVar50 * -0xe + -10);
      uStack_f1 = 1;
      pdb_140901390(&uStack_8b0,uVar28,uStack_7c0,uVar57);
      uStack_9f8 = uStack_888;
      uStack_a08 = uStack_898;
      uStack_a00 = uStack_890;
      uStack_9e0 = uStack_8a0;
      uStack_9f0 = uStack_8b0;
      uStack_9e8 = uStack_8a8;
      uStack_f1 = 1;
      pdb_1405cb750(&uStack_3b8,auStack_988,uVar33,uVar57,&lStack_7d8);
      uStack_f1 = 1;
      pdb_1405cb750(&uStack_3b8,auStack_988,uVar57,uVar33,&lStack_7e8);
      uStack_f1 = 1;
      lVar16 = pdb_140c3d060(*(longlong *)puStack_180,uVar26,uStack_230,puVar18[uVar49 * -0xe + -2])
      ;
      if (lVar16 == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46fe0);
      }
      uStack_f1 = 1;
      lVar39 = pdb_140c3d060(*(longlong *)puStack_180,uVar28,uStack_7c0,puVar18[uVar50 * -0xe + -2])
      ;
      if (lVar39 == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46ff8);
      }
      uStack_f1 = 1;
      pdb_14089b500(&puStack_778,lVar16,*(longlong *)puStack_1a0,puStack_138,&uStack_898);
      uStack_f1 = 1;
      pdb_14089b500(&uStack_3b8,lVar39,*(longlong *)puStack_1a0,puStack_138,&uStack_8b0);
      in_stack_fffffffffffff4b8 = (uint **)(puVar18 + uVar50 * -0xe + -0xc);
      puStack_aa8 = puStack_768;
      puStack_aa0 = puStack_760;
      puStack_ab8 = puStack_778;
      puStack_ab0 = uStack_770;
      uStack_a90 = CONCAT44(fStack_3ac,fStack_3b0);
      uStack_a88 = CONCAT44(uStack_3a4,uStack_3a8);
      uStack_a80 = CONCAT44(uStack_39c,uStack_3a0);
      puStack_a98 = (uint *)uStack_3b8;
      lStack_838 = -0x8000000000000000;
      uStack_850 = 0x8000000000000000;
      puStack_418 = (uint *)0x0;
      puStack_388 = puStack_498;
      auStack_398._8_8_ = puStack_4a0;
      auStack_398._0_8_ = puStack_4a8;
      uStack_3a8 = (uint)puStack_4b8;
      uStack_3a4 = (undefined4)((ulonglong)puStack_4b8 >> 0x20);
      uStack_3a0 = (uint)puStack_4b0;
      uStack_39c = (uint)((ulonglong)puStack_4b0 >> 0x20);
      uStack_3b8 = (uint **)puStack_4c8;
      fStack_3b0 = SUB84(puStack_4c0,0);
      fStack_3ac = (float)((ulonglong)puStack_4c0 >> 0x20);
      puStack_228 = (uint *)0x8000000000000000;
      puStack_220 = puStack_848;
      uStack_218 = uStack_840;
      uStack_f1 = 0;
      in_stack_fffffffffffff508 = CONCAT44(uVar15,uVar92 ^ uVar14);
      in_stack_fffffffffffff4c0 = pfStack_120;
      in_stack_fffffffffffff4c8 = puStack_1a8;
      pdb_14089bbd0(&puStack_778,&puStack_ab8,puStack_1f8,puStack_1f0,in_stack_fffffffffffff4b8,
                    pfStack_120,puStack_1a8,uVar96,(int)uVar47,uVar99,(int)uVar48,uVar90,uVar91,
                    uVar34 ^ uVar14,in_stack_fffffffffffff508,&uStack_a08,&lStack_838,&puStack_228,
                    &uStack_850,&puStack_418,&puStack_818,&uStack_3b8);
      uStack_f8 = 1;
      lVar16 = pdb_140901490(lVar16 + 0x38,&UNK_142f47010);
      uStack_f8 = 1;
      cVar12 = pdb_1408ff980(lVar16 + 0x16);
      if (cVar12 != '\0') {
        uStack_f8 = 1;
        cVar12 = pdb_1403af430(param_6,auStack_650);
        if (cVar12 != '\0') {
          uStack_f8 = 1;
          pdb_14089e970(&puStack_778,pfStack_120,puStack_1a8,*puStack_1f8);
        }
      }
      *puStack_1e8 = uStack_16c;
      pub_142e32760(&uStack_3b8,&puStack_778,0x150);
      lVar16 = plStack_168[2];
      if (lVar16 == *plStack_168) {
        pdb_142d7efa0(plStack_168);
      }
      plVar19 = plStack_168;
      uVar26 = pub_142e32760(lVar16 * 0x150 + plStack_168[1],&uStack_3b8,0x150);
      plVar19[2] = lVar16 + 1;
      pfStack_120 = (float *)CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
      bVar54 = false;
      if (puStack_130 != puStack_118) goto LAB_140387b76;
      goto LAB_140388470;
    }
    uVar45 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar45);
  }
  auVar73[0] = -(auVar69[0] == -1);
  auVar73[1] = -(auVar69[1] == -1);
  auVar73[2] = -(auVar69[2] == -1);
  auVar73[3] = -(auVar69[3] == -1);
  auVar73[4] = -(auVar69[4] == -1);
  auVar73[5] = -(auVar69[5] == -1);
  auVar73[6] = -(auVar69[6] == -1);
  auVar73[7] = -(auVar69[7] == -1);
  auVar73[8] = -(auVar69[8] == -1);
  auVar73[9] = -(auVar69[9] == -1);
  auVar73[10] = -(auVar69[10] == -1);
  auVar73[0xb] = -(auVar69[0xb] == -1);
  auVar73[0xc] = -(auVar69[0xc] == -1);
  auVar73[0xd] = -(auVar69[0xd] == -1);
  auVar73[0xe] = -(auVar69[0xe] == -1);
  auVar73[0xf] = -(auVar69[0xf] == -1);
  if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar73 >> 0x17,0) & 1) != 0) || (SUB161(auVar73 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar73 >> 0x27,0) & 1) != 0) || (SUB161(auVar73 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar73 >> 0x37,0) & 1) != 0) || (SUB161(auVar73 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar73 >> 0x47,0) & 1) != 0) || (SUB161(auVar73 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar73 >> 0x67,0) & 1) != 0) || (SUB161(auVar73 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar73 >> 0x77,0) & 1) != 0) || auVar73[0xf] < '\0') {
    uStack_f1 = 1;
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46f98);
    goto LAB_140389767;
  }
  uVar25 = uVar25 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140387f23;
code_r0x0001403892f3:
  uStack_f9 = 1;
  uStack_fa = 1;
  cVar12 = pdb_1403af690(&puStack_778,lVar38 + 300);
  if (cVar12 != '\0') {
LAB_1403892bb:
    *(undefined1 *)(lVar38 + 0x148) = 1;
  }
  goto LAB_1403892c2;
LAB_14038889b:
  uVar17 = uVar17 & (ulonglong)pfVar29;
  auVar61 = *(undefined1 (*) [16])((longlong)puVar18 + uVar17);
  auVar89[0] = -(auVar61[0] == auVar60[0]);
  auVar89[1] = -(auVar61[1] == auVar60[1]);
  auVar89[2] = -(auVar61[2] == auVar60[2]);
  auVar89[3] = -(auVar61[3] == auVar60[3]);
  auVar89[4] = -(auVar61[4] == auVar60[4]);
  auVar89[5] = -(auVar61[5] == auVar60[5]);
  auVar89[6] = -(auVar61[6] == auVar60[6]);
  auVar89[7] = -(auVar61[7] == auVar60[7]);
  auVar89[8] = -(auVar61[8] == auVar60[0]);
  auVar89[9] = -(auVar61[9] == auVar60[1]);
  auVar89[10] = -(auVar61[10] == auVar60[2]);
  auVar89[0xb] = -(auVar61[0xb] == auVar60[3]);
  auVar89[0xc] = -(auVar61[0xc] == auVar60[4]);
  auVar89[0xd] = -(auVar61[0xd] == auVar60[5]);
  auVar89[0xe] = -(auVar61[0xe] == auVar60[6]);
  auVar89[0xf] = -(auVar61[0xf] == auVar60[7]);
  uVar45 = (ushort)(SUB161(auVar89 >> 7,0) & 1) | (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe | (ushort)(auVar89[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar34 = 0;
    for (uVar57 = uVar35; (uVar57 & 1) == 0; uVar57 = uVar57 >> 1 | 0x80000000) {
      uVar34 = uVar34 + 1;
    }
    uVar47 = uVar34 + uVar17 & (ulonglong)pfVar29;
    if ((uint)puStack_108 == puVar18[uVar47 * -0xe + -0xe]) {
      uVar28 = *(undefined8 *)(puVar18 + uVar47 * -0xe + -0xc);
      puStack_178 = *(uint **)(puVar18 + uVar47 * -0xe + -10);
      if ((uVar33 & 1) == 0) {
        uStack_3b8 = (uint **)puVar22;
        pdb_140df4520(&uStack_3c8,&uStack_3b8);
        fVar59 = _DAT_142e377f0;
        fVar76 = _DAT_142e36f34;
        fVar94 = uStack_3c8._4_4_;
        fVar93 = (float)uStack_3c8;
      }
      else {
        pdb_140c45ec0(&uStack_3b8,*puStack_7c8,(ulonglong)pfStack_120 & 0xffffffff,&UNK_142f47058);
        fVar76 = fStack_3b0 * fStack_3b0;
        fVar77 = fStack_3ac * fStack_3ac;
        fVar78 = uStack_3b8._4_4_ * uStack_3b8._4_4_ + (float)uStack_3b8 * (float)uStack_3b8;
        fVar59 = fStack_3b0 * _UNK_142e37b08 +
                 uStack_3b8._4_4_ * _UNK_142e37b04 + (float)uStack_3b8 * _DAT_142e37b00;
        fVar59 = fVar59 + fVar59;
        fVar95 = fStack_3ac + fStack_3ac;
        fVar93 = fVar95 * (uStack_3b8._4_4_ * _DAT_142f46970 - fStack_3b0 * _DAT_142f46980) +
                 fVar59 * (float)uStack_3b8 + (fVar77 - (fVar78 + fVar76)) * _DAT_142e37b00;
        fVar94 = fVar95 * (fStack_3b0 * _UNK_142f46974 - (float)uStack_3b8 * _UNK_142f46984) +
                 fVar59 * uStack_3b8._4_4_ + (fVar77 - (fVar78 + fVar76)) * _UNK_142e37b04;
        uStack_3c8 = CONCAT44(fVar94,fVar93);
        fStack_3c0 = fVar95 * ((float)uStack_3b8 * _UNK_142f46978 -
                              uStack_3b8._4_4_ * _UNK_142f46988) +
                     fVar59 * fStack_3b0 + (fVar77 - (fVar78 + fVar76)) * _UNK_142e37b08;
        fVar59 = 0.0;
        fVar76 = _DAT_142e36f28;
      }
      fVar77 = fStack_3c0;
      pdb_140901390(&uStack_8c8,puStack_128,puStack_160,uVar14);
      pdb_140901390(&uStack_8e0,uVar28,puStack_178,(ulonglong)puStack_108 & 0xffffffff);
      uStack_a28 = uStack_8b8;
      uStack_a38 = uStack_8c8;
      uStack_a30 = uStack_8c0;
      uStack_a10 = uStack_8d0;
      uStack_a20 = uStack_8e0;
      uStack_a18 = uStack_8d8;
      pdb_14007ee60();
      pfVar29 = (float *)pub_1406abab0(0x10,4);
      if (pfVar29 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x10);
      }
      *pfVar29 = fVar62;
      pfVar29[1] = fVar58;
      *(ulonglong *)(pfVar29 + 2) = CONCAT44(fVar59 + fVar58 + fVar77,fVar59 + fVar62 + fVar93);
      uStack_3b8 = (uint **)0x2;
      fStack_3b0 = SUB84(pfVar29,0);
      fStack_3ac = (float)((ulonglong)pfVar29 >> 0x20);
      uStack_3a8 = 2;
      uStack_3a4 = 0;
      puVar41 = &uStack_3b8;
      pdb_140080c90(&puStack_418,puVar41,1);
      if (SBORROW8(0,(longlong)puStack_418)) goto LAB_140388700;
      puStack_498 = puStack_3e8;
      puStack_4a8 = puStack_3f8;
      puStack_4a0 = puStack_3f0;
      puStack_4b8 = puStack_408;
      puStack_4b0 = puStack_400;
      puStack_4c8 = puStack_418;
      puStack_4c0 = puStack_410;
      pdb_14007ee60();
      pfStack_120 = (float *)pub_1406abab0(8,4);
      if (pfStack_120 == (float *)0x0) {
        uStack_10a = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,8);
      }
      fVar76 = fVar94 + fVar2 + fVar76;
      *pfStack_120 = fVar2;
      pfStack_120[1] = fVar76;
      uStack_10b = 1;
      pdb_140174670(&puStack_228);
      uStack_10c = 1;
      pdb_140174530(&puStack_158);
      uStack_ff = 1;
      puVar18 = puStack_4b8;
      uVar13 = pdb_14089b470(puStack_4c0,puStack_4b8,pfStack_120,2);
      puStack_1a8 = (undefined8 *)CONCAT71(puStack_1a8._1_7_,uVar13);
      puStack_1f0 = (uint *)CONCAT71(puStack_1f0._1_7_,(char)puVar18);
      pdb_14007ee60();
      puVar30 = (ulonglong *)pub_1406abab0(8,8);
      if (puVar30 == (ulonglong *)0x0) {
        uStack_ff = 1;
        pdb_142dc7e2a(8,8);
        goto LAB_140389767;
      }
      *puVar30 = 0;
      uStack_588 = 0x10;
      uStack_580 = 1;
      uStack_f2 = 1;
      puStack_590 = puVar30;
      fVar62 = (float)pdb_14021fc10(*puStack_1f8);
      uStack_f2 = 1;
      pdb_1400c42e0(puVar30,0x10,0,0,2);
      *puVar30 = (ulonglong)(fVar2 < fVar62 + _DAT_142e3b1d8) | *puVar30 & 0xfffffffffffffffe;
      uStack_f2 = 1;
      fVar62 = (float)pdb_14021fc10(*puStack_1f8);
      uStack_f2 = 1;
      uVar96 = 0x10;
      pdb_1400c42e0(puVar30,0x10,1,0,2);
      *puVar30 = (*puVar30 & 0xfffffffffffffffd) + (ulonglong)(fVar76 < fVar62 + _DAT_142e3b1d8) * 2
      ;
      uStack_f2 = 1;
      uVar15 = pdb_140a61840(&uStack_a38);
      *puStack_1e8 = uStack_16c;
      uStack_f2 = 1;
      uStack_3e0 = uVar15;
      uStack_3dc = uVar96;
      lVar31 = pdb_140c3d060(*(longlong *)puStack_180,puStack_128,puStack_160,uVar14);
      if (lVar31 == 0) {
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f47070);
      }
      uStack_f2 = 1;
      pdb_14089b500(&puStack_578,lVar31,*(longlong *)puStack_1a0,uVar26,&uStack_8c8);
      uStack_f2 = 1;
      lVar31 = pdb_140c3d060(*(longlong *)puStack_180,uVar28,puStack_178,
                             (ulonglong)puStack_108 & 0xffffffff);
      if (lVar31 == 0) {
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f47088);
      }
      uStack_f2 = 1;
      pdb_14089b500(&uStack_628,lVar31,*(longlong *)puStack_1a0,uVar26,&uStack_8e0);
      uVar28 = uStack_218;
      puStack_768 = puStack_568;
      puStack_760 = puStack_560;
      puStack_778 = puStack_578;
      uStack_770 = puStack_570;
      uStack_748 = puStack_618;
      uStack_740 = puStack_610;
      puStack_758 = uStack_628;
      puStack_750 = puStack_620;
      puStack_5f8 = puStack_3e8;
      puStack_608 = puStack_3f8;
      puStack_600 = puStack_3f0;
      puStack_618 = puStack_408;
      puStack_610 = puStack_400;
      uStack_628 = puStack_418;
      puStack_620 = puStack_410;
      puStack_108 = puStack_228;
      puStack_160 = puStack_220;
      puStack_128 = puStack_158;
      puStack_178 = puStack_150;
      uVar11 = auStack_148._0_8_;
      uStack_270 = pdb_1403af430(&puStack_818,&uStack_3e0);
      uStack_288 = (uStack_230 & 0xffffffff00000000) +
                   (ulonglong)CONCAT11(puStack_1f0._0_1_,puStack_1a8._0_1_) + 0x10000;
      uStack_2b8 = (undefined4)uStack_748;
      uStack_2b4 = uStack_748._4_4_;
      uStack_2b0 = (undefined4)uStack_740;
      uStack_2ac = uStack_740._4_4_;
      puStack_2c8 = puStack_758;
      puStack_2c0 = puStack_750;
      puStack_2d8 = puStack_768;
      puStack_2d0 = puStack_760;
      puStack_2e8 = puStack_778;
      puStack_2e0 = uStack_770;
      puStack_388 = puStack_5f8;
      uStack_3b8 = (uint **)uStack_628;
      fStack_3b0 = SUB84(puStack_620,0);
      fStack_3ac = (float)((ulonglong)puStack_620 >> 0x20);
      uStack_3a8 = (uint)puStack_618;
      uStack_3a4 = (undefined4)((ulonglong)puStack_618 >> 0x20);
      uStack_3a0 = (uint)puStack_610;
      uStack_39c = (uint)((ulonglong)puStack_610 >> 0x20);
      auStack_398._8_8_ = puStack_600;
      auStack_398._0_8_ = puStack_608;
      uStack_380 = 2;
      pfStack_378 = pfStack_120;
      uStack_370 = 2;
      puStack_368 = puStack_108;
      puStack_360 = puStack_160;
      uStack_358 = uVar28;
      puStack_350 = puStack_128;
      puStack_348 = puStack_178;
      uStack_340 = uVar11;
      uStack_298 = uStack_580;
      puStack_2a8 = puStack_590;
      uStack_2a0 = uStack_588;
      uStack_278 = 1;
      uStack_320 = 0x8000000000000000;
      uStack_338 = 0;
      uStack_330 = 4;
      uStack_328 = 0;
      lVar31 = plStack_168[2];
      uStack_290 = uVar15;
      uStack_28c = uVar96;
      uStack_230 = uStack_288;
      if (lVar31 == *plStack_168) {
        pdb_142d7efa0(plStack_168);
      }
      plVar19 = plStack_168;
      puVar41 = &uStack_3b8;
      pub_142e32760(lVar31 * 0x150 + plStack_168[1],puVar41,0x150);
      plVar19[2] = lVar31 + 1;
      goto LAB_140388700;
    }
    uVar45 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar45);
  }
  auVar75[0] = -(auVar61[0] == -1);
  auVar75[1] = -(auVar61[1] == -1);
  auVar75[2] = -(auVar61[2] == -1);
  auVar75[3] = -(auVar61[3] == -1);
  auVar75[4] = -(auVar61[4] == -1);
  auVar75[5] = -(auVar61[5] == -1);
  auVar75[6] = -(auVar61[6] == -1);
  auVar75[7] = -(auVar61[7] == -1);
  auVar75[8] = -(auVar61[8] == -1);
  auVar75[9] = -(auVar61[9] == -1);
  auVar75[10] = -(auVar61[10] == -1);
  auVar75[0xb] = -(auVar61[0xb] == -1);
  auVar75[0xc] = -(auVar61[0xc] == -1);
  auVar75[0xd] = -(auVar61[0xd] == -1);
  auVar75[0xe] = -(auVar61[0xe] == -1);
  auVar75[0xf] = -(auVar61[0xf] == -1);
  if ((((((((((((((((SUB161(auVar75 >> 7,0) & 1) != 0 || (SUB161(auVar75 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar75 >> 0x17,0) & 1) != 0) || (SUB161(auVar75 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar75 >> 0x27,0) & 1) != 0) || (SUB161(auVar75 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar75 >> 0x37,0) & 1) != 0) || (SUB161(auVar75 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar75 >> 0x47,0) & 1) != 0) || (SUB161(auVar75 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar75 >> 0x57,0) & 1) != 0) || (SUB161(auVar75 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar75 >> 0x67,0) & 1) != 0) || (SUB161(auVar75 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar75 >> 0x77,0) & 1) != 0) || auVar75[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47040);
    goto LAB_140389767;
  }
  uVar17 = uVar17 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_14038889b;
}

