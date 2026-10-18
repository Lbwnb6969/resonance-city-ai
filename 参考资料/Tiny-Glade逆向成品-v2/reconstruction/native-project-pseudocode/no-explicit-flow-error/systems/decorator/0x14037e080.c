// VA 0x14037e080, PDB extent 29460 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_requests<false>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_requests<false>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 29460 */

void pdb_14037e080(uint *param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,longlong *param_7,undefined8 param_8)

{
  byte *pbVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong *plVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  char *pcVar25;
  undefined8 uVar26;
  uint *puVar27;
  float *pfVar28;
  ulonglong *puVar29;
  longlong lVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  undefined *puVar36;
  longlong lVar37;
  longlong lVar38;
  longlong *plVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  uint *puVar42;
  ushort uVar43;
  undefined *puVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  byte bVar49;
  ulonglong unaff_R14;
  byte bVar50;
  bool bVar51;
  bool bVar52;
  byte bVar53;
  undefined4 uVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar74;
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
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar88;
  uint uVar89;
  uint uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  uint **in_stack_fffffffffffff4a8;
  undefined4 uVar98;
  undefined8 *in_stack_fffffffffffff4b0;
  uint *in_stack_fffffffffffff4b8;
  undefined8 in_stack_fffffffffffff4f8;
  uint *puStack_ac8;
  uint *puStack_ac0;
  uint *puStack_ab8;
  undefined8 *puStack_ab0;
  uint *puStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  uint *puStack_a88;
  uint *puStack_a80;
  uint *puStack_a78;
  undefined8 *puStack_a70;
  uint *puStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
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
  longlong lStack_9b8;
  byte *pbStack_9b0;
  undefined8 uStack_9a8;
  undefined1 auStack_998 [8];
  longlong lStack_990;
  longlong lStack_988;
  undefined8 uStack_980;
  ulonglong uStack_978;
  ulonglong uStack_970;
  longlong lStack_968;
  undefined8 uStack_940;
  undefined8 uStack_938;
  ulonglong uStack_930;
  ulonglong uStack_928;
  longlong lStack_920;
  char cStack_904;
  undefined8 uStack_903;
  undefined7 uStack_8fb;
  undefined1 uStack_8f4;
  undefined3 uStack_8f3;
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
  uint *puStack_858;
  undefined8 uStack_850;
  longlong lStack_848;
  byte *pbStack_840;
  undefined8 uStack_838;
  uint *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  longlong lStack_808;
  undefined8 *puStack_800;
  longlong lStack_7f0;
  uint uStack_7e8;
  uint uStack_7e4;
  longlong lStack_7e0;
  uint uStack_7d8;
  uint uStack_7d4;
  undefined8 *puStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  uint uStack_7b8;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  uint uStack_798;
  uint *puStack_788;
  undefined8 uStack_780;
  uint *puStack_778;
  undefined8 *puStack_770;
  uint *puStack_768;
  uint *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined1 auStack_660 [40];
  undefined8 uStack_638;
  uint *puStack_630;
  uint *puStack_628;
  undefined8 *puStack_620;
  uint *puStack_618;
  uint *puStack_610;
  uint *puStack_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 uStack_5f8;
  uint *puStack_5f0;
  longlong lStack_5e8;
  longlong lStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [16];
  uint *puStack_5c0;
  undefined8 uStack_5b8;
  float *pfStack_5b0;
  ulonglong *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  uint *puStack_588;
  uint *puStack_580;
  uint *puStack_578;
  undefined8 *puStack_570;
  undefined1 auStack_568 [8];
  uint *puStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  ulonglong uStack_548;
  ulonglong uStack_540;
  longlong lStack_538;
  undefined1 auStack_530 [16];
  uint auStack_520 [2];
  longlong lStack_518;
  ulonglong uStack_510;
  undefined8 uStack_508;
  ulonglong uStack_500;
  ulonglong uStack_4f8;
  longlong lStack_4f0;
  undefined1 auStack_4e8 [16];
  uint *puStack_4d8;
  uint *puStack_4d0;
  uint *puStack_4c8;
  undefined8 *puStack_4c0;
  uint *puStack_4b8;
  uint *puStack_4b0;
  uint *puStack_4a8;
  longlong lStack_4a0;
  byte *pbStack_498;
  undefined8 uStack_490;
  longlong lStack_488;
  byte *pbStack_480;
  undefined8 uStack_478;
  uint *puStack_470;
  uint *puStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  ulonglong uStack_454;
  undefined4 uStack_44c;
  undefined8 uStack_448;
  undefined1 auStack_440 [24];
  uint *puStack_428;
  uint *puStack_420;
  uint *puStack_418;
  undefined8 *puStack_410;
  uint *puStack_408;
  uint *puStack_400;
  uint *puStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  float fStack_3d0;
  undefined8 uStack_3c8;
  float fStack_3c0;
  float fStack_3bc;
  uint uStack_3b8;
  undefined4 uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  undefined1 auStack_3a8 [16];
  uint *puStack_398;
  undefined8 uStack_390;
  float *pfStack_388;
  undefined8 uStack_380;
  uint *puStack_378;
  uint *puStack_370;
  undefined8 uStack_368;
  uint *puStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  uint *puStack_2f8;
  uint *puStack_2f0;
  uint *puStack_2e8;
  undefined8 *puStack_2e0;
  uint *puStack_2d8;
  uint *puStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  ulonglong *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  ulonglong uStack_298;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined4 uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  longlong *plStack_248;
  longlong *plStack_240;
  ulonglong uStack_238;
  ulonglong uStack_230;
  uint *puStack_228;
  uint *puStack_220;
  undefined8 uStack_218;
  uint *puStack_210;
  uint *puStack_208;
  uint *puStack_200;
  undefined8 *puStack_1f8;
  undefined4 *puStack_1f0;
  uint *puStack_1e8;
  ulonglong uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  uint *puStack_1b8;
  uint *puStack_1b0;
  uint *puStack_1a8;
  float *pfStack_1a0;
  ulonglong uStack_198;
  uint *puStack_190;
  ulonglong uStack_188;
  uint *puStack_180;
  longlong *plStack_178;
  uint *puStack_170;
  undefined4 uStack_164;
  uint *puStack_160;
  uint *puStack_158;
  undefined1 auStack_150 [16];
  uint *puStack_140;
  uint *puStack_138;
  undefined8 *puStack_130;
  uint *puStack_128;
  uint *puStack_120;
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
  puVar40 = param_2;
  puStack_1f8 = param_4;
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') {
    lStack_3e8 = 0;
LAB_14037e307:
    plVar18 = (longlong *)pdb_140f3bda0();
    if ((char)plVar18[2] == '\x01') {
      lStack_808 = *plVar18;
      puVar40 = (undefined8 *)plVar18[1];
    }
    else {
      lStack_808 = pdb_140f4fd10();
      *plVar18 = lStack_808;
      plVar18[1] = (longlong)puVar40;
      *(undefined1 *)(plVar18 + 2) = 1;
    }
    *plVar18 = lStack_808 + 1;
    uVar10 = _UNK_142f47438;
    uVar9 = _DAT_142f47430;
    uVar8 = _UNK_142f47428;
    puVar17 = _DAT_142f47420;
    uStack_818 = _DAT_142f47430;
    uStack_810 = _UNK_142f47438;
    puStack_828 = _DAT_142f47420;
    uStack_820 = _UNK_142f47428;
    uVar14 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar3 = (undefined4 *)param_7[2];
    *puVar3 = uVar14;
    plStack_178 = (longlong *)*param_7;
    puStack_180 = (uint *)plStack_178[1];
    puStack_120 = (uint *)plStack_178[2];
    plStack_178[2] = 0;
    puStack_108 = (uint *)0x0;
    puVar23 = puStack_180;
    puStack_800 = puVar40;
    while (puStack_120 != puStack_108) {
      puStack_108 = (uint *)((longlong)puStack_108 + 1);
      pdb_14049c6a0(puVar23);
      puVar23 = puVar23 + 0x54;
    }
    puStack_120 = (uint *)*param_5;
    lVar15 = pdb_140a61160();
    puVar23 = *(uint **)(lVar15 + 8);
    lVar15 = *(longlong *)(lVar15 + 0x10);
    pauVar19 = (undefined1 (*) [16])pdb_14008d710(0);
    if (pauVar19 != (undefined1 (*) [16])0x0) {
      auStack_3a8 = *pauVar19;
      *(longlong *)*pauVar19 = *(longlong *)*pauVar19 + 1;
      uStack_3b8 = (uint)_DAT_142e45ae0;
      uStack_3b4 = (undefined4)((ulonglong)_DAT_142e45ae0 >> 0x20);
      uStack_3b0 = (uint)_UNK_142e45ae8;
      uStack_3ac = (uint)((ulonglong)_UNK_142e45ae8 >> 0x20);
      uStack_3c8 = (uint **)_DAT_142e45ad0;
      fStack_3c0 = (float)_UNK_142e45ad8;
      fStack_3bc = (float)((ulonglong)_UNK_142e45ad8 >> 0x20);
      if (lVar15 != 0) {
        pdb_142d81b60(&uStack_3c8,lVar15,auStack_3a8);
      }
      uStack_780 = puVar23 + lVar15 * 10;
      puStack_788 = puVar23;
      puStack_778 = param_1;
      puStack_770 = param_2;
      puStack_768 = param_3;
      pdb_140563f10(&puStack_788,&uStack_3c8);
      uStack_1e0 = CONCAT44(fStack_3bc,fStack_3c0);
      auStack_1d8._4_4_ = uStack_3b4;
      auStack_1d8._0_4_ = uStack_3b8;
      auStack_1d8._8_4_ = uStack_3b0;
      auStack_1d8._12_4_ = uStack_3ac;
      puStack_1e8 = (uint *)uStack_3c8;
      auStack_1c8 = auStack_3a8;
      *puVar3 = uVar14;
      pdb_1405d03a0(&uStack_3c8);
      plVar39 = plStack_178;
      plVar18 = plStack_178 + 3;
      pub_142e32760(auStack_568,plVar18,0x90);
      plStack_248 = plVar18;
      pub_142e32760(plVar18,&uStack_3c8,0x90);
      *puVar3 = uVar14;
      uStack_109 = 1;
      pdb_1405d03a0(&uStack_3c8);
      plVar39 = plVar39 + 0x15;
      pub_142e32760(auStack_998,plVar39,0x90);
      plStack_240 = plVar39;
      pub_142e32760(plVar39,&uStack_3c8,0x90);
      if (lStack_968 != 0) {
        if (uStack_978 == 0) {
          uStack_970 = 0;
        }
        else {
          pub_142e32780(uStack_980,0xff,uStack_978 + 0x11);
          uStack_970 = (uStack_978 + 1 & 0xfffffffffffffff8) - (uStack_978 + 1 >> 3);
          if (uStack_978 < 8) {
            uStack_970 = uStack_978;
          }
        }
        lStack_968 = 0;
      }
      lVar15 = lStack_988;
      lStack_988 = 0;
      if (lVar15 != 0) {
        puVar40 = (undefined8 *)(lStack_990 + 8);
        do {
          if (puVar40[-1] != 0) {
            pub_1406abac0((byte *)*puVar40,puVar40[-1] << 3,4);
          }
          puVar40 = puVar40 + 5;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (lStack_920 != 0) {
        if (uStack_930 == 0) {
          uStack_928 = 0;
        }
        else {
          pub_142e32780(uStack_938,0xff,uStack_930 + 0x11);
          uStack_928 = (uStack_930 + 1 & 0xfffffffffffffff8) - (uStack_930 + 1 >> 3);
          if (uStack_930 < 8) {
            uStack_928 = uStack_930;
          }
        }
        lStack_920 = 0;
      }
      uStack_940 = 0;
      if (lStack_538 != 0) {
        if (uStack_548 == 0) {
          uStack_540 = 0;
        }
        else {
          pub_142e32780(uStack_550,0xff,uStack_548 + 0x11);
          uStack_540 = (uStack_548 + 1 & 0xfffffffffffffff8) - (uStack_548 + 1 >> 3);
          if (uStack_548 < 8) {
            uStack_540 = uStack_548;
          }
        }
        lStack_538 = 0;
      }
      puVar40 = puStack_558;
      puStack_558 = (undefined8 *)0x0;
      if (puVar40 != (undefined8 *)0x0) {
        puVar23 = puStack_560 + 2;
        do {
          if (*(longlong *)(puVar23 + -2) != 0) {
            pub_1406abac0(*(byte **)puVar23,*(longlong *)(puVar23 + -2) << 3,4);
          }
          puVar23 = puVar23 + 10;
          puVar40 = (undefined8 *)((longlong)puVar40 + -1);
        } while (puVar40 != (undefined8 *)0x0);
      }
      if (lStack_4f0 != 0) {
        if (uStack_500 == 0) {
          uStack_4f8 = 0;
        }
        else {
          pub_142e32780(uStack_508,0xff,uStack_500 + 0x11);
          uStack_4f8 = (uStack_500 + 1 & 0xfffffffffffffff8) - (uStack_500 + 1 >> 3);
          if (uStack_500 < 8) {
            uStack_4f8 = uStack_500;
          }
        }
        lStack_4f0 = 0;
      }
      uStack_510 = 0;
      uStack_f6 = 1;
      uStack_f7 = 1;
      puStack_1f0 = puVar3;
      uStack_164 = uVar14;
      lVar15 = pdb_140a61160(puStack_120);
      puVar23 = *(uint **)(lVar15 + 8);
      puStack_1b0 = puVar23 + *(longlong *)(lVar15 + 0x10) * 10;
      puStack_7d0 = param_2;
      puStack_180 = param_1;
      if (puVar23 != puStack_1b0) {
        do {
          uStack_24c = puVar23[8];
          puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,uStack_24c);
          uStack_f6 = 1;
          uStack_f7 = 1;
          lVar38 = pdb_140a61160(puStack_120);
          uStack_3c8 = (uint **)CONCAT44(uStack_3c8._4_4_,(uint)puStack_108);
          unaff_R14 = *(ulonglong *)(lVar38 + 0x10);
          lVar15 = 4;
          if (unaff_R14 == 0) {
LAB_14037e8a0:
            lVar15 = 4;
            lVar38 = 4;
          }
          else if (unaff_R14 == 1) {
            lVar30 = *(longlong *)(lVar38 + 8);
            lVar38 = 4;
            if ((uint)puStack_108 == *(int *)(lVar30 + 0x20)) {
              uVar16 = 0;
LAB_14037e881:
              lVar38 = *(longlong *)(lVar30 + 8 + uVar16 * 0x28);
              lVar15 = lVar38 + *(longlong *)(lVar30 + 0x10 + uVar16 * 0x28) * 8;
            }
          }
          else {
            uVar16 = pdb_1400aede0(lVar38 + 0x38,&uStack_3c8,4);
            uStack_f6 = 1;
            uStack_f7 = 1;
            uVar20 = pdb_140401410(lVar38,uVar16,&uStack_3c8);
            lVar15 = 4;
            if ((uVar20 & 1) == 0) goto LAB_14037e8a0;
            if (unaff_R14 <= uVar16) goto LAB_14038221c;
            lVar30 = *(longlong *)(lVar38 + 8);
            lVar38 = 4;
            if (lVar30 != 0) goto LAB_14037e881;
          }
          uStack_f6 = 1;
          uStack_f7 = 1;
          pdb_14017e410(&uStack_638,lVar38,lVar15);
          puStack_140 = puVar23 + 10;
          puStack_788 = (uint *)0x0;
          uStack_780 = (uint *)0x8;
          puStack_778 = (uint *)0x0;
          puVar24 = puStack_630 + (longlong)puStack_628;
          puStack_138 = puStack_630;
          puVar23 = puStack_140;
          puVar22 = puStack_630;
LAB_14037e90f:
          uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffff4a8 >> 0x20);
          if (puVar22 != puVar24) {
            uVar13 = *puVar22;
            uStack_250 = uVar13;
            if (auStack_1d8._8_8_ != 0) {
              puVar22 = puVar22 + 1;
              uVar20 = pdb_1400aede0(auStack_1c8,&uStack_24c);
              uVar16 = uStack_1e0;
              puVar23 = puStack_1e8;
              bVar53 = (byte)(uVar20 >> 0x39);
              auVar58 = ZEXT216(CONCAT11(bVar53,bVar53));
              auVar58 = pshuflw(auVar58,auVar58,0);
              lVar15 = 0;
              while( true ) {
                uVar20 = uVar20 & uStack_1e0;
                auVar59 = *(undefined1 (*) [16])((longlong)puStack_1e8 + uVar20);
                auVar67[0] = -(auVar59[0] == auVar58[0]);
                auVar67[1] = -(auVar59[1] == auVar58[1]);
                auVar67[2] = -(auVar59[2] == auVar58[2]);
                auVar67[3] = -(auVar59[3] == auVar58[3]);
                auVar67[4] = -(auVar59[4] == auVar58[4]);
                auVar67[5] = -(auVar59[5] == auVar58[5]);
                auVar67[6] = -(auVar59[6] == auVar58[6]);
                auVar67[7] = -(auVar59[7] == auVar58[7]);
                auVar67[8] = -(auVar59[8] == auVar58[0]);
                auVar67[9] = -(auVar59[9] == auVar58[1]);
                auVar67[10] = -(auVar59[10] == auVar58[2]);
                auVar67[0xb] = -(auVar59[0xb] == auVar58[3]);
                auVar67[0xc] = -(auVar59[0xc] == auVar58[4]);
                auVar67[0xd] = -(auVar59[0xd] == auVar58[5]);
                auVar67[0xe] = -(auVar59[0xe] == auVar58[6]);
                auVar67[0xf] = -(auVar59[0xf] == auVar58[7]);
                uVar43 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar67[0xf] >> 7) << 0xf;
                uVar32 = (uint)uVar43;
                while (uVar43 != 0) {
                  uVar34 = 0;
                  for (uVar33 = uVar32; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                    uVar34 = uVar34 + 1;
                  }
                  uVar45 = uVar34 + uVar20 & uStack_1e0;
                  if ((uint)puStack_108 == puStack_1e8[uVar45 * -0xe + -0xe]) {
                    puStack_118 = puStack_1e8 + uVar45 * -0xe + -0xc;
                    uVar20 = pdb_1400aede0(auStack_1c8,&uStack_250);
                    bVar53 = (byte)(uVar20 >> 0x39);
                    auVar58 = ZEXT216(CONCAT11(bVar53,bVar53));
                    auVar58 = pshuflw(auVar58,auVar58,0);
                    lVar15 = 0;
                    goto LAB_14037ea2c;
                  }
                  uVar43 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                  uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar43);
                }
                auVar61[0] = -(auVar59[0] == -1);
                auVar61[1] = -(auVar59[1] == -1);
                auVar61[2] = -(auVar59[2] == -1);
                auVar61[3] = -(auVar59[3] == -1);
                auVar61[4] = -(auVar59[4] == -1);
                auVar61[5] = -(auVar59[5] == -1);
                auVar61[6] = -(auVar59[6] == -1);
                auVar61[7] = -(auVar59[7] == -1);
                auVar61[8] = -(auVar59[8] == -1);
                auVar61[9] = -(auVar59[9] == -1);
                auVar61[10] = -(auVar59[10] == -1);
                auVar61[0xb] = -(auVar59[0xb] == -1);
                auVar61[0xc] = -(auVar59[0xc] == -1);
                auVar61[0xd] = -(auVar59[0xd] == -1);
                auVar61[0xe] = -(auVar59[0xe] == -1);
                auVar61[0xf] = -(auVar59[0xf] == -1);
                if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar61 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar61 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar61 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar61 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar61 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar61 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar61 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar61 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar61 >> 0x5f,0) & 1) != 0) || (SUB161(auVar61 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') break;
                uVar20 = uVar20 + lVar15 + 0x10;
                lVar15 = lVar15 + 0x10;
              }
            }
            pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f470e8);
            goto LAB_140382438;
          }
          pdb_14089e6a0(&uStack_3c8,uStack_780,puStack_778,0);
          puStack_128 = (uint *)uStack_3c8;
          lVar15 = CONCAT44(uStack_3b4,uStack_3b8);
          puVar22 = (uint *)CONCAT44(fStack_3bc,fStack_3c0);
          if (lVar15 != 0) {
            lVar38 = 0;
            puStack_118 = (uint *)CONCAT44(fStack_3bc,fStack_3c0);
            do {
              cVar11 = *(char *)((longlong)puStack_118 + lVar38 + 4);
              puVar22 = puStack_118;
              if (cVar11 == '\x03') break;
              puVar40 = (undefined8 *)((longlong)puStack_118 + lVar38 + 5);
              uStack_903 = *puVar40;
              uVar26 = puVar40[1];
              uStack_8fb = (undefined7)uVar26;
              uStack_8f3 = (undefined3)
                           ((uint)*(undefined4 *)((longlong)puStack_118 + lVar38 + 0x14) >> 8);
              uStack_8f4 = (undefined1)((ulonglong)uVar26 >> 0x38);
              in_stack_fffffffffffff4a8 = (uint **)&cStack_904;
              cStack_904 = cVar11;
              pdb_1405cb4b0(&puStack_4d8,auStack_568,(ulonglong)puStack_108 & 0xffffffff,
                            *(undefined4 *)((longlong)puStack_118 + lVar38),&cStack_904);
              lVar38 = lVar38 + 0x18;
              puVar22 = puStack_118;
            } while (lVar15 * 0x18 != lVar38);
          }
          if (puStack_128 != (uint *)0x0) {
            pub_1406abac0((byte *)puVar22,(longlong)puStack_128 * 0x18,4);
          }
          puVar22 = uStack_780;
          if (puStack_778 != (uint *)0x0) {
            puVar24 = uStack_780 + 4;
            puVar42 = puStack_778;
            do {
              if (*(longlong *)(puVar24 + -2) != 0) {
                pub_1406abac0(*(byte **)puVar24,*(longlong *)(puVar24 + -2) * 0x18,4);
              }
              puVar24 = puVar24 + 8;
              puVar42 = (uint *)((longlong)puVar42 + -1);
            } while (puVar42 != (uint *)0x0);
          }
          if (puStack_788 != (uint *)0x0) {
            pub_1406abac0((byte *)puVar22,(longlong)puStack_788 << 5,8);
          }
          if (uStack_638 != (uint *)0x0) {
            pub_1406abac0((byte *)puStack_138,(longlong)uStack_638 << 2,4);
          }
        } while (puVar23 != puStack_1b0);
      }
      uStack_f6 = 1;
      uStack_f7 = 1;
      pdb_140f33350(auStack_440);
      uVar26 = _DAT_142e3c640;
      auVar58 = _DAT_142e37820;
      puStack_788 = (uint *)0x0;
      uStack_780 = (uint *)0x4;
      puStack_778 = (uint *)0x0;
      puStack_108 = puStack_560;
      puStack_118 = puStack_560 + (longlong)puStack_558 * 10;
      uVar13 = (uint)DAT_142e37820;
      puStack_1b0 = param_3;
      while (puVar40 = puStack_558, puStack_140 = puStack_108, puStack_108 != puStack_118) {
        uVar32 = puStack_108[8];
        uStack_3c8 = (uint **)CONCAT44(uStack_3c8._4_4_,uVar32);
        lVar15 = 4;
        if (puStack_558 == (undefined8 *)0x0) {
          lVar38 = 4;
        }
        else if (puStack_558 == (undefined8 *)0x1) {
          lVar38 = 4;
          if (uVar32 == puStack_560[8]) {
            puVar41 = (undefined8 *)0x0;
LAB_14037eea5:
            lVar38 = *(longlong *)(puStack_560 + (longlong)puVar41 * 10 + 2);
            lVar15 = lVar38 + *(longlong *)(puStack_560 + (longlong)puVar41 * 10 + 4) * 8;
          }
        }
        else {
          puVar41 = (undefined8 *)pdb_1400aede0(auStack_530,&uStack_3c8);
          uVar16 = pdb_140401410(auStack_568,puVar41,&uStack_3c8);
          if ((uVar16 & 1) == 0) {
            lVar38 = 4;
          }
          else {
            if (puVar40 <= puVar41) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(puVar41,puVar40,&UNK_142f77528);
            }
            lVar38 = 4;
            if (puStack_560 != (uint *)0x0) goto LAB_14037eea5;
          }
        }
        puStack_108 = puStack_140 + 10;
        uStack_3c8 = (uint **)auStack_520;
        fStack_3c0 = (float)lVar38;
        fStack_3bc = (float)((ulonglong)lVar38 >> 0x20);
        uStack_3b8 = (uint)lVar15;
        uStack_3b4 = (undefined4)((ulonglong)lVar15 >> 0x20);
        bVar50 = 0;
        bVar49 = 0;
        bVar53 = 0;
        uStack_3b0 = uVar32;
        while (pdb_1405c88a0(&uStack_638), puVar41 = puStack_558, puStack_630 != (uint *)0x0) {
          if ((char)*puStack_630 == '\0') {
            bVar53 = 1;
          }
          else if ((char)*puStack_630 == '\x01') {
            fVar60 = (float)((ulonglong)*(undefined8 *)(puStack_630 + 3) >> 0x20) *
                     (float)*(undefined8 *)(puStack_630 + 1) -
                     (float)*(undefined8 *)(puStack_630 + 3) *
                     (float)((ulonglong)*(undefined8 *)(puStack_630 + 1) >> 0x20);
            if (0.0 < (float)((uint)fVar60 & uVar13 | (uint)uVar26) && !NAN(fVar60)) {
              bVar50 = 1;
            }
            else {
              bVar49 = 1;
            }
          }
        }
        if ((bVar53 & (bVar49 | bVar50)) != 0) {
          uStack_3c8 = (uint **)CONCAT44(uStack_3c8._4_4_,uVar32);
          lVar15 = 4;
          if (puStack_558 == (undefined8 *)0x0) {
LAB_14037f031:
            lVar15 = 4;
            lVar38 = 4;
          }
          else if (puStack_558 == (undefined8 *)0x1) {
            lVar38 = 4;
            if (uVar32 == puStack_560[8]) {
              puVar21 = (undefined8 *)0x0;
LAB_14037f01d:
              lVar38 = *(longlong *)(puStack_560 + (longlong)puVar21 * 10 + 2);
              lVar15 = lVar38 + *(longlong *)(puStack_560 + (longlong)puVar21 * 10 + 4) * 8;
            }
          }
          else {
            puVar21 = (undefined8 *)pdb_1400aede0(auStack_530,&uStack_3c8);
            uVar16 = pdb_140401410(auStack_568,puVar21,&uStack_3c8);
            lVar15 = 4;
            if ((uVar16 & 1) == 0) goto LAB_14037f031;
            if (puVar41 <= puVar21) goto LAB_14038227e;
            lVar38 = 4;
            if (puStack_560 != (uint *)0x0) goto LAB_14037f01d;
          }
          uStack_3c8 = (uint **)auStack_520;
          fStack_3c0 = (float)lVar38;
          fStack_3bc = (float)((ulonglong)lVar38 >> 0x20);
          uStack_3b8 = (uint)lVar15;
          uStack_3b4 = (undefined4)((ulonglong)lVar15 >> 0x20);
          uStack_3b0 = uVar32;
          while (pdb_1405c88a0(&uStack_638), puVar23 = puStack_778, puStack_630 != (uint *)0x0) {
            if ((char)*puStack_630 != '\x02') {
              uVar34 = uStack_638._4_4_;
              if (puStack_778 == puStack_788) {
                pdb_142d7f010(&puStack_788);
              }
              uStack_780[(longlong)puVar23 * 3] = uVar32;
              uStack_780[(longlong)puVar23 * 3 + 1] = uVar34;
              *(byte *)(uStack_780 + (longlong)puVar23 * 3 + 2) = bVar50 * '\x02' | bVar49;
              puStack_778 = (uint *)((longlong)puVar23 + 1);
            }
          }
        }
      }
      puStack_108 = puStack_788;
      puVar23 = uStack_780 + (longlong)puStack_778 * 3;
      puStack_138 = uStack_780;
      puVar22 = uStack_780;
      while (uVar16 = uStack_510, puVar22 != puVar23) {
        uStack_3c8 = *(uint ***)puVar22;
        uVar32 = puVar22[2];
        if (uStack_510 == 1) {
          if ((*puVar22 != *(uint *)(lStack_518 + 8)) || (puVar22[1] != *(uint *)(lStack_518 + 0xc))
             ) goto LAB_14038210b;
          uVar20 = 0;
        }
        else {
          if (uStack_510 == 0) {
LAB_14038210b:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142f470d0);
          }
          uVar20 = pdb_1400af680(auStack_4e8,&uStack_3c8);
          uVar45 = pdb_1404014e0(auStack_520,uVar20,&uStack_3c8);
          if ((uVar45 & 1) == 0) goto LAB_14038210b;
          if (uVar16 <= uVar20) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar20,uVar16,&UNK_142f77540);
          }
        }
        puVar22 = puVar22 + 3;
        cVar11 = *(char *)(lStack_518 + 0x10 + uVar20 * 0x28);
        if (cVar11 != '\x02') {
          lVar15 = lStack_518 + uVar20 * 0x28;
          if (cVar11 == '\x01') {
            *(undefined1 *)(lVar15 + 0x11) = 1;
          }
          else {
            *(byte *)(lVar15 + 0x11) = (byte)uVar32 & 1;
            *(byte *)(lVar15 + 0x12) = (byte)uVar32 >> 1 & 1;
          }
        }
      }
      if (puStack_108 != (uint *)0x0) {
        pub_1406abac0((byte *)puStack_138,(longlong)puStack_108 * 0xc,4);
      }
      puStack_210 = (uint *)0x0;
      puStack_208 = (uint *)0x4;
      puStack_200 = (uint *)0x0;
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      lVar15 = pdb_140a61160(puStack_120);
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      pdb_1404009f0(&puStack_788,lVar15);
      uStack_750 = *(undefined8 **)(lVar15 + 0x38);
      uStack_748 = *(undefined8 *)(lVar15 + 0x40);
      pdb_140400670(&uStack_3c8,lVar15 + 0x48);
      uStack_5b8 = *(undefined8 *)(lVar15 + 0x80);
      pfStack_5b0 = *(float **)(lVar15 + 0x88);
      uStack_638 = puStack_788;
      puStack_630 = uStack_780;
      puStack_628 = puStack_778;
      puStack_620 = puStack_770;
      puStack_618 = puStack_768;
      puStack_610 = puStack_760;
      puStack_608 = uStack_758;
      uStack_600 = (undefined4)uStack_750;
      uStack_5fc = uStack_750._4_4_;
      uStack_5f8 = uStack_748;
      lStack_5e8 = CONCAT44(fStack_3bc,fStack_3c0);
      lStack_5e0 = CONCAT44(uStack_3b4,uStack_3b8);
      uStack_5d8 = CONCAT44(uStack_3ac,uStack_3b0);
      puStack_5f0 = (uint *)uStack_3c8;
      auStack_5d0 = auStack_3a8;
      puStack_5c0 = puStack_398;
      uStack_390 = uStack_5b8;
      pfStack_388 = pfStack_5b0;
      lVar38 = pdb_140a61160(puStack_120);
      lVar15 = *(longlong *)(lVar38 + 0x50);
      lVar38 = *(longlong *)(lVar38 + 0x58) * 0x10 + lVar15;
LAB_14037f3a7:
      if (lVar15 != lVar38) {
        uVar32 = *(uint *)(lVar15 + 8);
        uVar34 = *(uint *)(lVar15 + 0xc);
        uStack_258 = uVar34;
        uStack_254 = uVar32;
        if (auStack_1d8._8_8_ != 0) {
          lVar15 = lVar15 + 0x10;
          uVar20 = pdb_1400aede0(auStack_1c8,&uStack_254);
          uVar16 = uStack_1e0;
          puVar23 = puStack_1e8;
          bVar53 = (byte)(uVar20 >> 0x39);
          auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
          auVar59 = pshuflw(auVar59,auVar59,0);
          lVar30 = 0;
          while( true ) {
            uVar20 = uVar20 & uStack_1e0;
            auVar67 = *(undefined1 (*) [16])((longlong)puStack_1e8 + uVar20);
            auVar78[0] = -(auVar67[0] == auVar59[0]);
            auVar78[1] = -(auVar67[1] == auVar59[1]);
            auVar78[2] = -(auVar67[2] == auVar59[2]);
            auVar78[3] = -(auVar67[3] == auVar59[3]);
            auVar78[4] = -(auVar67[4] == auVar59[4]);
            auVar78[5] = -(auVar67[5] == auVar59[5]);
            auVar78[6] = -(auVar67[6] == auVar59[6]);
            auVar78[7] = -(auVar67[7] == auVar59[7]);
            auVar78[8] = -(auVar67[8] == auVar59[0]);
            auVar78[9] = -(auVar67[9] == auVar59[1]);
            auVar78[10] = -(auVar67[10] == auVar59[2]);
            auVar78[0xb] = -(auVar67[0xb] == auVar59[3]);
            auVar78[0xc] = -(auVar67[0xc] == auVar59[4]);
            auVar78[0xd] = -(auVar67[0xd] == auVar59[5]);
            auVar78[0xe] = -(auVar67[0xe] == auVar59[6]);
            auVar78[0xf] = -(auVar67[0xf] == auVar59[7]);
            uVar43 = (ushort)(SUB161(auVar78 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar78[0xf] >> 7) << 0xf;
            uVar33 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar55 = 0;
              for (uVar88 = uVar33; (uVar88 & 1) == 0; uVar88 = uVar88 >> 1 | 0x80000000) {
                uVar55 = uVar55 + 1;
              }
              uVar45 = uVar55 + uVar20 & uStack_1e0;
              if (uVar32 == puStack_1e8[uVar45 * -0xe + -0xe]) {
                fVar60 = (float)puStack_1e8[uVar45 * -0xe + -5];
                fVar2 = (float)puStack_1e8[uVar45 * -0xe + -3];
                uVar20 = pdb_1400aede0(auStack_1c8,&uStack_258);
                bVar53 = (byte)(uVar20 >> 0x39);
                auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
                auVar59 = pshuflw(auVar59,auVar59,0);
                lVar30 = 0;
                goto LAB_14037f4aa;
              }
              uVar43 = (ushort)(uVar33 - 1) & (ushort)uVar33;
              uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar43);
            }
            auVar63[0] = -(auVar67[0] == -1);
            auVar63[1] = -(auVar67[1] == -1);
            auVar63[2] = -(auVar67[2] == -1);
            auVar63[3] = -(auVar67[3] == -1);
            auVar63[4] = -(auVar67[4] == -1);
            auVar63[5] = -(auVar67[5] == -1);
            auVar63[6] = -(auVar67[6] == -1);
            auVar63[7] = -(auVar67[7] == -1);
            auVar63[8] = -(auVar67[8] == -1);
            auVar63[9] = -(auVar67[9] == -1);
            auVar63[10] = -(auVar67[10] == -1);
            auVar63[0xb] = -(auVar67[0xb] == -1);
            auVar63[0xc] = -(auVar67[0xc] == -1);
            auVar63[0xd] = -(auVar67[0xd] == -1);
            auVar63[0xe] = -(auVar67[0xe] == -1);
            auVar63[0xf] = -(auVar67[0xf] == -1);
            if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar63 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar63 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar63 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
            uVar20 = uVar20 + lVar30 + 0x10;
            lVar30 = lVar30 + 0x10;
          }
        }
        pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f470a0);
        goto LAB_140382438;
      }
      puStack_160 = (uint *)0x0;
      auStack_150 = (undefined1  [16])0x0;
      puStack_158 = (uint *)0x4;
      uStack_198 = 0;
      puStack_190 = (uint *)0x4;
      uStack_188 = 0;
      puStack_140 = (uint *)*param_5;
LAB_14037f5d4:
      if (lStack_5e0 != 0) {
        uVar14 = *(undefined4 *)(lStack_5e8 + 8);
        if (auStack_150._8_8_ != 0) {
          auStack_150._8_8_ = 0;
        }
        auVar59._8_8_ = 0;
        auVar59._0_8_ = auStack_150._8_8_;
        auStack_150 = auVar59 << 0x40;
        pdb_1400de890(auStack_440);
        uStack_188 = 0;
        pdb_1405cb370(&uStack_638,uVar14);
        pdb_140182410(&puStack_160,uVar14);
        pdb_140182410();
        while (auStack_150._8_8_ != 0) {
          puVar23 = (uint *)0x0;
          if (puStack_160 <= (ulonglong)auStack_150._0_8_) {
            puVar23 = puStack_160;
          }
          uVar32 = puStack_158[auStack_150._0_8_ - (longlong)puVar23];
          lVar15 = pdb_140c40010(*(longlong *)puStack_180);
          if ((lVar15 != 0) && (cVar11 = pdb_1409010e0(), cVar11 != '\0')) {
            bVar53 = 1;
            bVar52 = false;
            goto LAB_14037f73e;
          }
          if (auStack_150._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142f46e08);
          }
          puVar22 = (uint *)(auStack_150._8_8_ + auStack_150._0_8_ + -1);
          bVar53 = 0;
          puVar23 = (uint *)0x0;
          if (puStack_160 <= puVar22) {
            puVar23 = puStack_160;
          }
          if (puStack_158[(longlong)puVar22 - (longlong)puVar23] == uVar32) {
            bVar52 = true;
            goto LAB_14037f73e;
          }
          uVar20 = (ulonglong)uVar32;
          uVar16 = pdb_1405cb9e0();
          if (uVar16 == uVar20) break;
          pdb_1405cb370(&uStack_638,uVar32);
          pdb_140181ae0();
        }
        bVar52 = false;
        bVar53 = 0;
LAB_14037f73e:
        do {
          if (auStack_150._8_8_ == 0) goto LAB_14037f825;
          puVar22 = (uint *)(auStack_150._8_8_ + auStack_150._0_8_ + -1);
          puVar23 = (uint *)0x0;
          if (puStack_160 <= puVar22) {
            puVar23 = puStack_160;
          }
          uVar32 = puStack_158[(longlong)puVar22 - (longlong)puVar23];
          lVar15 = pdb_140c40010(*(longlong *)puStack_180);
          if ((lVar15 != 0) && (cVar11 = pdb_1409010e0(lVar15 + 0x10), cVar11 != '\0')) {
            uVar16 = auStack_150._8_8_;
            if (!(bool)(bVar53 & auStack_150._8_8_ == 2)) goto LAB_14037ff23;
            puVar23 = puStack_160;
            if ((ulonglong)auStack_150._0_8_ < puStack_160) {
              puVar23 = (uint *)0x0;
            }
            puVar22 = puStack_160;
            if ((uint *)(auStack_150._0_8_ + 1) < puStack_160) {
              puVar22 = (uint *)0x0;
            }
            uVar32 = puStack_158[auStack_150._0_8_ - (longlong)puVar23];
            uVar34 = puStack_158[auStack_150._0_8_ + (1 - (longlong)puVar22)];
            uVar33 = uVar34;
            if (uVar32 < uVar34) {
              uVar33 = uVar32;
            }
            if (uVar34 < uVar32) {
              uVar34 = uVar32;
            }
            uStack_260 = uVar34;
            uStack_25c = uVar33;
            if (auStack_1d8._8_8_ != 0) {
              uVar20 = pdb_1400aede0(auStack_1c8,&uStack_25c);
              uVar16 = uStack_1e0;
              puVar23 = puStack_1e8;
              bVar53 = (byte)(uVar20 >> 0x39);
              auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
              auVar59 = pshuflw(auVar59,auVar59,0);
              lVar15 = 0;
              while( true ) {
                uVar20 = uVar20 & uStack_1e0;
                auVar67 = *(undefined1 (*) [16])((longlong)puStack_1e8 + uVar20);
                auVar80[0] = -(auVar67[0] == auVar59[0]);
                auVar80[1] = -(auVar67[1] == auVar59[1]);
                auVar80[2] = -(auVar67[2] == auVar59[2]);
                auVar80[3] = -(auVar67[3] == auVar59[3]);
                auVar80[4] = -(auVar67[4] == auVar59[4]);
                auVar80[5] = -(auVar67[5] == auVar59[5]);
                auVar80[6] = -(auVar67[6] == auVar59[6]);
                auVar80[7] = -(auVar67[7] == auVar59[7]);
                auVar80[8] = -(auVar67[8] == auVar59[0]);
                auVar80[9] = -(auVar67[9] == auVar59[1]);
                auVar80[10] = -(auVar67[10] == auVar59[2]);
                auVar80[0xb] = -(auVar67[0xb] == auVar59[3]);
                auVar80[0xc] = -(auVar67[0xc] == auVar59[4]);
                auVar80[0xd] = -(auVar67[0xd] == auVar59[5]);
                auVar80[0xe] = -(auVar67[0xe] == auVar59[6]);
                auVar80[0xf] = -(auVar67[0xf] == auVar59[7]);
                uVar43 = (ushort)(SUB161(auVar80 >> 7,0) & 1) |
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
                uVar32 = (uint)uVar43;
                while (uVar43 != 0) {
                  uVar55 = 0;
                  for (uVar88 = uVar32; (uVar88 & 1) == 0; uVar88 = uVar88 >> 1 | 0x80000000) {
                    uVar55 = uVar55 + 1;
                  }
                  uVar45 = uVar55 + uVar20 & uStack_1e0;
                  if (uVar33 == puStack_1e8[uVar45 * -0xe + -0xe]) {
                    puStack_170 = puStack_1e8 + uVar45 * -0xe + -0xc;
                    uVar20 = pdb_1400aede0(auStack_1c8,&uStack_260);
                    bVar53 = (byte)(uVar20 >> 0x39);
                    auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
                    auVar59 = pshuflw(auVar59,auVar59,0);
                    lVar15 = 0;
                    goto LAB_14037f987;
                  }
                  uVar43 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                  uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar43);
                }
                auVar65[0] = -(auVar67[0] == -1);
                auVar65[1] = -(auVar67[1] == -1);
                auVar65[2] = -(auVar67[2] == -1);
                auVar65[3] = -(auVar67[3] == -1);
                auVar65[4] = -(auVar67[4] == -1);
                auVar65[5] = -(auVar67[5] == -1);
                auVar65[6] = -(auVar67[6] == -1);
                auVar65[7] = -(auVar67[7] == -1);
                auVar65[8] = -(auVar67[8] == -1);
                auVar65[9] = -(auVar67[9] == -1);
                auVar65[10] = -(auVar67[10] == -1);
                auVar65[0xb] = -(auVar67[0xb] == -1);
                auVar65[0xc] = -(auVar67[0xc] == -1);
                auVar65[0xd] = -(auVar67[0xd] == -1);
                auVar65[0xe] = -(auVar67[0xe] == -1);
                auVar65[0xf] = -(auVar67[0xf] == -1);
                if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar65 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar65 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar65 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar65 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar65 >> 0x5f,0) & 1) != 0) || (SUB161(auVar65 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') break;
                uVar20 = uVar20 + lVar15 + 0x10;
                lVar15 = lVar15 + 0x10;
              }
            }
            goto LAB_1403812b2;
          }
          if (auStack_150._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_142f46e20);
          }
          puVar23 = (uint *)0x0;
          if (puStack_160 <= (ulonglong)auStack_150._0_8_) {
            puVar23 = puStack_160;
          }
          uVar16 = auStack_150._8_8_;
          if (puStack_158[auStack_150._0_8_ - (longlong)puVar23] == uVar32) goto LAB_14037ff31;
          uVar20 = (ulonglong)uVar32;
          uVar16 = pdb_1405cb9e0();
          if (uVar16 == uVar20) goto LAB_14037ff1c;
          pdb_1405cb370(&uStack_638,uVar32);
          pdb_140182410();
        } while( true );
      }
      if (uStack_198 != 0) {
        pub_1406abac0((byte *)puStack_190,uStack_198 << 3,4);
      }
      puVar40 = (undefined8 *)0x0;
      if (puStack_160 != (uint *)0x0) {
        puVar40 = (undefined8 *)((longlong)puStack_160 << 2);
        pub_1406abac0((byte *)puStack_158,(ulonglong)puVar40,4);
      }
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      pdb_1404a7820(&uStack_638);
      puStack_140 = (uint *)*param_5;
      uStack_f3 = 1;
      uStack_f4 = 1;
      uStack_f5 = 1;
      lVar15 = pdb_140a61160();
      lVar38 = *(longlong *)(lVar15 + 8);
      lVar15 = lVar38 + *(longlong *)(lVar15 + 0x10) * 0x28;
      puStack_118 = puStack_210;
      puStack_138 = puStack_208 + (longlong)puStack_200 * 2;
      puStack_1b8 = puStack_208;
      puStack_120 = puStack_208;
LAB_1403813c5:
      puVar23 = puStack_140;
      if (lVar38 == 0) {
LAB_140381401:
        if (puStack_120 == puStack_138) {
          if (puStack_118 != (uint *)0x0) {
            puVar40 = (undefined8 *)((longlong)puStack_118 << 3);
            pub_1406abac0((byte *)puStack_1b8,(ulonglong)puVar40,4);
          }
          uStack_f3 = 0;
          uStack_f4 = 1;
          uStack_f5 = 1;
          puStack_768 = (uint *)pdb_140332e50(&UNK_142f47400);
          puStack_778 = (uint *)uVar9;
          puStack_770 = (undefined8 *)uVar10;
          puStack_788 = puVar17;
          uStack_780 = (uint *)uVar8;
          lVar15 = plStack_178[1];
          lVar38 = plStack_178[2];
          lVar30 = lVar15;
          puStack_760 = (uint *)puVar40;
          while (lVar37 = lVar30, lVar37 != lVar38 * 0x150 + lVar15) {
            lVar30 = lVar37 + 0x150;
            if (*(char *)(lVar37 + 0x148) != '\0') {
              uStack_f9 = 1;
              uStack_fa = 1;
              pdb_1403b0de0(&puStack_788,*(undefined4 *)(lVar37 + 0x128));
              uStack_f9 = 1;
              uStack_fa = 1;
              pdb_1403b0de0(&puStack_788,*(undefined4 *)(lVar37 + 300));
            }
          }
          *puStack_1f0 = uStack_164;
          lVar15 = plStack_178[1];
          lVar38 = plStack_178[2];
          lVar30 = lVar15;
LAB_140381f93:
          lVar37 = lVar30;
          if (lVar37 == lVar38 * 0x150 + lVar15) {
            pub_142e32760(&uStack_3c8,auStack_568,0x90);
            *puStack_1f0 = uStack_164;
            pdb_1404ae510(plStack_248);
            pub_142e32760(plStack_248,&uStack_3c8,0x90);
            pub_142e32760(&uStack_3c8,auStack_998,0x90);
            *puStack_1f0 = uStack_164;
            pdb_1404aec10(plStack_240);
            pub_142e32760(plStack_240,&uStack_3c8,0x90);
            uStack_f3 = 0;
            uStack_f4 = 0;
            uStack_f5 = 0;
            pdb_14049a050(&puStack_788);
            pdb_1404b26b0(auStack_440);
            pdb_1404add50(&puStack_1e8);
            pdb_1400db1d0(&puStack_828);
            if (lStack_3e8 == 0) {
              return;
            }
            puStack_788 = (uint *)&uStack_3e0;
            uStack_3c8 = &puStack_788;
            pdb_140336540(&UNK_142f47518,&uStack_3c8);
            return;
          }
          uStack_f9 = 1;
          uStack_fa = 1;
          cVar11 = pdb_1403af690(&puStack_788,lVar37 + 0x128);
          lVar30 = lVar37 + 0x150;
          if (cVar11 == '\0') goto code_r0x000140381fc4;
          goto LAB_140381f8c;
        }
        uVar13 = *puStack_120;
        puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,puStack_120[1]);
        puStack_120 = puStack_120 + 2;
        lVar38 = 0;
      }
      else {
        do {
          if (lVar38 == lVar15) goto LAB_140381401;
          uVar13 = *(uint *)(lVar38 + 0x20);
          uVar26 = pdb_140a61160(puVar23);
          puVar40 = (undefined8 *)(ulonglong)uVar13;
          puVar41 = (undefined8 *)pdb_1405cb9e0(uVar26);
          lVar38 = lVar38 + 0x28;
        } while (puVar41 != puVar40);
        puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,uVar13);
      }
      uStack_270 = (uint)puStack_108;
      uStack_26c = uVar13;
      if (auStack_1d8._8_8_ != 0) {
        uVar20 = pdb_1400aede0(auStack_1c8,&uStack_26c);
        uVar16 = uStack_1e0;
        puVar23 = puStack_1e8;
        bVar53 = (byte)(uVar20 >> 0x39);
        auVar58 = ZEXT216(CONCAT11(bVar53,bVar53));
        auVar58 = pshuflw(auVar58,auVar58,0);
        lVar30 = 0;
        while( true ) {
          uVar20 = uVar20 & uStack_1e0;
          auVar59 = *(undefined1 (*) [16])((longlong)puStack_1e8 + uVar20);
          auVar86[0] = -(auVar59[0] == auVar58[0]);
          auVar86[1] = -(auVar59[1] == auVar58[1]);
          auVar86[2] = -(auVar59[2] == auVar58[2]);
          auVar86[3] = -(auVar59[3] == auVar58[3]);
          auVar86[4] = -(auVar59[4] == auVar58[4]);
          auVar86[5] = -(auVar59[5] == auVar58[5]);
          auVar86[6] = -(auVar59[6] == auVar58[6]);
          auVar86[7] = -(auVar59[7] == auVar58[7]);
          auVar86[8] = -(auVar59[8] == auVar58[0]);
          auVar86[9] = -(auVar59[9] == auVar58[1]);
          auVar86[10] = -(auVar59[10] == auVar58[2]);
          auVar86[0xb] = -(auVar59[0xb] == auVar58[3]);
          auVar86[0xc] = -(auVar59[0xc] == auVar58[4]);
          auVar86[0xd] = -(auVar59[0xd] == auVar58[5]);
          auVar86[0xe] = -(auVar59[0xe] == auVar58[6]);
          auVar86[0xf] = -(auVar59[0xf] == auVar58[7]);
          uVar43 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
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
          uVar32 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar34 = 0;
            for (uVar33 = uVar32; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
              uVar34 = uVar34 + 1;
            }
            uVar45 = uVar34 + uVar20 & uStack_1e0;
            if (uVar13 == puStack_1e8[uVar45 * -0xe + -0xe]) {
              fVar60 = (float)puStack_1e8[uVar45 * -0xe + -5];
              fVar2 = (float)puStack_1e8[uVar45 * -0xe + -4];
              fVar56 = (float)puStack_1e8[uVar45 * -0xe + -3];
              puStack_128 = *(uint **)(puStack_1e8 + uVar45 * -0xe + -0xc);
              puStack_170 = *(uint **)(puStack_1e8 + uVar45 * -0xe + -10);
              uVar32 = puStack_1e8[uVar45 * -0xe + -2];
              uVar34 = puStack_1e8[uVar45 * -0xe + -8];
              puVar22 = *(uint **)(puStack_1e8 + uVar45 * -0xe + -7);
              uVar20 = pdb_1400aede0(auStack_1c8,&uStack_270);
              bVar53 = (byte)(uVar20 >> 0x39);
              auVar58 = ZEXT216(CONCAT11(bVar53,bVar53));
              auVar58 = pshuflw(auVar58,auVar58,0);
              lVar30 = 0;
              goto LAB_14038155f;
            }
            uVar43 = (ushort)(uVar32 - 1) & (ushort)uVar32;
            uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar43);
          }
          auVar72[0] = -(auVar59[0] == -1);
          auVar72[1] = -(auVar59[1] == -1);
          auVar72[2] = -(auVar59[2] == -1);
          auVar72[3] = -(auVar59[3] == -1);
          auVar72[4] = -(auVar59[4] == -1);
          auVar72[5] = -(auVar59[5] == -1);
          auVar72[6] = -(auVar59[6] == -1);
          auVar72[7] = -(auVar59[7] == -1);
          auVar72[8] = -(auVar59[8] == -1);
          auVar72[9] = -(auVar59[9] == -1);
          auVar72[10] = -(auVar59[10] == -1);
          auVar72[0xb] = -(auVar59[0xb] == -1);
          auVar72[0xc] = -(auVar59[0xc] == -1);
          auVar72[0xd] = -(auVar59[0xd] == -1);
          auVar72[0xe] = -(auVar59[0xe] == -1);
          auVar72[0xf] = -(auVar59[0xf] == -1);
          if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 || (SUB161(auVar72 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar72 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar72 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar72 >> 0x2f,0) & 1) != 0) || (SUB161(auVar72 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar72 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar72 >> 0x47,0) & 1) != 0) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') break;
          uVar20 = uVar20 + lVar30 + 0x10;
          lVar30 = lVar30 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47028);
      goto LAB_140382438;
    }
    pdb_142dc7890(&UNK_142f3dc40);
  }
  else {
    lVar38 = 0x74;
    lVar15 = pdb_14038c9a0(0x74);
    puVar41 = (undefined8 *)&UNK_142f474a0;
    if (lVar15 == 1) {
      if ((undefined8 *)0x74 < puVar40) {
LAB_1403821fc:
        uVar16 = 0x74;
        pdb_142dc8070(&UNK_142f474a0,0x74,0);
LAB_14038221c:
        uStack_f6 = 1;
        uStack_f7 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar16,unaff_R14,&UNK_142f77528);
      }
      uVar16 = pdb_14038c9a0(puVar40);
      if ((uVar16 & 1) != 0) {
        if ((undefined *)0x74 < (undefined *)((longlong)puVar40 + 2)) {
          puVar21 = (undefined8 *)0x74;
          pdb_142dc8070(&UNK_142f474a0,0x74,(undefined *)((longlong)puVar40 + 2),0x74,&UNK_142f475b0
                       );
LAB_14038227e:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar21,puVar41,&UNK_142f77528);
        }
        lVar38 = 0x72 - (longlong)puVar40;
        puVar41 = (undefined8 *)((longlong)puVar40 + 0x142f474a2);
      }
    }
    puVar40 = puVar41;
    puVar44 = &UNK_142f46e01;
    puVar36 = &UNK_142f46da5;
    do {
      bVar53 = puVar44[-1];
      uVar13 = (uint)(char)bVar53;
      if ((char)bVar53 < '\0') {
        bVar49 = puVar44[-2];
        if ((char)bVar49 < -0x40) {
          bVar50 = puVar44[-3];
          if ((char)bVar50 < -0x40) {
            pbVar1 = puVar44 + -4;
            puVar44 = puVar44 + -4;
            uVar13 = bVar50 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar44 = puVar44 + -3;
            uVar13 = bVar50 & 0xf;
          }
          uVar13 = bVar49 & 0x3f | uVar13 << 6;
        }
        else {
          puVar44 = puVar44 + -2;
          uVar13 = bVar49 & 0x1f;
        }
        uVar13 = (uint)(bVar53 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_14037e264;
LAB_14037e27d:
        puVar36 = puVar44 + -0x142f46da4;
        if ((undefined *)0x5c < puVar36) {
          pdb_142dc8070(&UNK_142f46da5,0x5c,puVar36,0x5c,&UNK_142f47578);
          goto LAB_1403821fc;
        }
        in_stack_fffffffffffff4a8 = (uint **)(0x5c - (longlong)puVar36);
        puVar36 = puVar44 + 1;
        goto LAB_14037e2a0;
      }
      puVar44 = puVar44 + -1;
      if (uVar13 == 0x5c) goto LAB_14037e27d;
LAB_14037e264:
      if (uVar13 == 0x2f) goto LAB_14037e27d;
    } while (puVar44 != &UNK_142f46da5);
    in_stack_fffffffffffff4a8 = (uint **)0x5c;
LAB_14037e2a0:
    puVar17 = (uint *)pdb_140e97000();
    if (((char)puVar17[0x1a] == '\x01') ||
       (puVar17 = (uint *)pdb_142d7de90(puVar17,0), puVar17 != (uint *)0x0)) {
      if (*(longlong *)puVar17 == 0) {
        puVar17[0] = 0xffffffff;
        puVar17[1] = 0xffffffff;
        in_stack_fffffffffffff4b8 = (uint *)0x0;
        in_stack_fffffffffffff4b0 = (undefined8 *)0x0;
        puStack_108 = puVar17;
        uStack_3e0 = pdb_140e94f10(puVar17 + 2,puVar40,lVar38,puVar36,in_stack_fffffffffffff4a8,1,0)
        ;
        *(longlong *)puStack_108 = *(longlong *)puStack_108 + 1;
        lStack_3e8 = 1;
        goto LAB_14037e307;
      }
    }
    else {
      pdb_142dc7890(&UNK_142f3dc40);
    }
    pdb_142dc8090(&UNK_142f3dcc8);
LAB_1403812b2:
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46e38);
  }
LAB_140382438:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_14037ea2c:
  uVar20 = uVar20 & uVar16;
  auVar59 = *(undefined1 (*) [16])((longlong)puVar23 + uVar20);
  auVar77[0] = -(auVar59[0] == auVar58[0]);
  auVar77[1] = -(auVar59[1] == auVar58[1]);
  auVar77[2] = -(auVar59[2] == auVar58[2]);
  auVar77[3] = -(auVar59[3] == auVar58[3]);
  auVar77[4] = -(auVar59[4] == auVar58[4]);
  auVar77[5] = -(auVar59[5] == auVar58[5]);
  auVar77[6] = -(auVar59[6] == auVar58[6]);
  auVar77[7] = -(auVar59[7] == auVar58[7]);
  auVar77[8] = -(auVar59[8] == auVar58[0]);
  auVar77[9] = -(auVar59[9] == auVar58[1]);
  auVar77[10] = -(auVar59[10] == auVar58[2]);
  auVar77[0xb] = -(auVar59[0xb] == auVar58[3]);
  auVar77[0xc] = -(auVar59[0xc] == auVar58[4]);
  auVar77[0xd] = -(auVar59[0xd] == auVar58[5]);
  auVar77[0xe] = -(auVar59[0xe] == auVar58[6]);
  auVar77[0xf] = -(auVar59[0xf] == auVar58[7]);
  uVar43 = (ushort)(SUB161(auVar77 >> 7,0) & 1) | (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe | (ushort)(auVar77[0xf] >> 7) << 0xf;
  uVar32 = (uint)uVar43;
  while (uVar43 != 0) {
    uVar34 = 0;
    for (uVar33 = uVar32; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
      uVar34 = uVar34 + 1;
    }
    uVar46 = uVar34 + uVar20 & uVar16;
    if (uVar13 == puVar23[uVar46 * -0xe + -0xe]) {
      in_stack_fffffffffffff4b0 = *(undefined8 **)puStack_180;
      in_stack_fffffffffffff4b8 = *(uint **)param_3;
      in_stack_fffffffffffff4a8 =
           (uint **)CONCAT44(uVar14,(float)puVar23[uVar46 * -0xe + -3] -
                                    (float)puVar23[uVar45 * -0xe + -3]);
      pdb_14089b730(&uStack_3c8,puStack_118,puVar23 + uVar46 * -0xe + -0xc,
                    (float)puVar23[uVar46 * -0xe + -5] - (float)puVar23[uVar45 * -0xe + -5],
                    in_stack_fffffffffffff4a8,in_stack_fffffffffffff4b0,in_stack_fffffffffffff4b8);
      puVar23 = puStack_778;
      puStack_118 = (uint *)CONCAT44(uStack_3b4,uStack_3b8);
      if (puStack_118 == (uint *)0x0) {
        puStack_4d8 = (uint *)CONCAT71(puStack_4d8._1_7_,2);
        in_stack_fffffffffffff4a8 = &puStack_4d8;
        pdb_1405cb4b0(&puStack_428,auStack_568,(ulonglong)puStack_108 & 0xffffffff,uVar13,
                      in_stack_fffffffffffff4a8);
        puVar23 = puStack_140;
        if (uStack_3c8 != (uint **)0x0) {
          pub_1406abac0((byte *)CONCAT44(fStack_3bc,fStack_3c0),(longlong)uStack_3c8 * 0x18,4);
        }
      }
      else {
        puStack_128 = (uint *)uStack_3c8;
        puStack_170 = (uint *)CONCAT44(fStack_3bc,fStack_3c0);
        if (puStack_778 == puStack_788) {
          pdb_142d7e6e0(&puStack_788);
        }
        uStack_780[(longlong)puVar23 * 8] = uVar13;
        *(uint **)(uStack_780 + (longlong)puVar23 * 8 + 2) = puStack_128;
        *(uint **)(uStack_780 + (longlong)puVar23 * 8 + 4) = puStack_170;
        *(uint **)(uStack_780 + (longlong)puVar23 * 8 + 6) = puStack_118;
        puStack_778 = (uint *)((longlong)puVar23 + 1);
        puVar23 = puStack_140;
      }
      goto LAB_14037e90f;
    }
    uVar43 = (ushort)(uVar32 - 1) & (ushort)uVar32;
    uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar43);
  }
  auVar62[0] = -(auVar59[0] == -1);
  auVar62[1] = -(auVar59[1] == -1);
  auVar62[2] = -(auVar59[2] == -1);
  auVar62[3] = -(auVar59[3] == -1);
  auVar62[4] = -(auVar59[4] == -1);
  auVar62[5] = -(auVar59[5] == -1);
  auVar62[6] = -(auVar59[6] == -1);
  auVar62[7] = -(auVar59[7] == -1);
  auVar62[8] = -(auVar59[8] == -1);
  auVar62[9] = -(auVar59[9] == -1);
  auVar62[10] = -(auVar59[10] == -1);
  auVar62[0xb] = -(auVar59[0xb] == -1);
  auVar62[0xc] = -(auVar59[0xc] == -1);
  auVar62[0xd] = -(auVar59[0xd] == -1);
  auVar62[0xe] = -(auVar59[0xe] == -1);
  auVar62[0xf] = -(auVar59[0xf] == -1);
  if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar62 >> 0x17,0) & 1) != 0) || (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar62 >> 0x27,0) & 1) != 0) || (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar62 >> 0x37,0) & 1) != 0) || (SUB161(auVar62 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar62 >> 0x47,0) & 1) != 0) || (SUB161(auVar62 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar62 >> 0x57,0) & 1) != 0) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47100);
    goto LAB_140382438;
  }
  uVar20 = uVar20 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_14037ea2c;
LAB_14037f4aa:
  uVar20 = uVar20 & uVar16;
  auVar67 = *(undefined1 (*) [16])((longlong)puVar23 + uVar20);
  auVar79[0] = -(auVar67[0] == auVar59[0]);
  auVar79[1] = -(auVar67[1] == auVar59[1]);
  auVar79[2] = -(auVar67[2] == auVar59[2]);
  auVar79[3] = -(auVar67[3] == auVar59[3]);
  auVar79[4] = -(auVar67[4] == auVar59[4]);
  auVar79[5] = -(auVar67[5] == auVar59[5]);
  auVar79[6] = -(auVar67[6] == auVar59[6]);
  auVar79[7] = -(auVar67[7] == auVar59[7]);
  auVar79[8] = -(auVar67[8] == auVar59[0]);
  auVar79[9] = -(auVar67[9] == auVar59[1]);
  auVar79[10] = -(auVar67[10] == auVar59[2]);
  auVar79[0xb] = -(auVar67[0xb] == auVar59[3]);
  auVar79[0xc] = -(auVar67[0xc] == auVar59[4]);
  auVar79[0xd] = -(auVar67[0xd] == auVar59[5]);
  auVar79[0xe] = -(auVar67[0xe] == auVar59[6]);
  auVar79[0xf] = -(auVar67[0xf] == auVar59[7]);
  uVar43 = (ushort)(SUB161(auVar79 >> 7,0) & 1) | (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
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
  uVar33 = (uint)uVar43;
  while (uVar43 != 0) {
    uVar55 = 0;
    for (uVar88 = uVar33; (uVar88 & 1) == 0; uVar88 = uVar88 >> 1 | 0x80000000) {
      uVar55 = uVar55 + 1;
    }
    uVar45 = uVar55 + uVar20 & uVar16;
    if (uVar34 == puVar23[uVar45 * -0xe + -0xe]) {
      if ((fVar60 == (float)puVar23[uVar45 * -0xe + -5]) &&
         (!NAN(fVar60) && !NAN((float)puVar23[uVar45 * -0xe + -5]))) {
        if ((fVar2 == (float)puVar23[uVar45 * -0xe + -3]) &&
           (!NAN(fVar2) && !NAN((float)puVar23[uVar45 * -0xe + -3]))) {
          pdb_1405cb370(&uStack_638,uVar32,uVar34);
        }
      }
      goto LAB_14037f3a7;
    }
    uVar43 = (ushort)(uVar33 - 1) & (ushort)uVar33;
    uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar43);
  }
  auVar64[0] = -(auVar67[0] == -1);
  auVar64[1] = -(auVar67[1] == -1);
  auVar64[2] = -(auVar67[2] == -1);
  auVar64[3] = -(auVar67[3] == -1);
  auVar64[4] = -(auVar67[4] == -1);
  auVar64[5] = -(auVar67[5] == -1);
  auVar64[6] = -(auVar67[6] == -1);
  auVar64[7] = -(auVar67[7] == -1);
  auVar64[8] = -(auVar67[8] == -1);
  auVar64[9] = -(auVar67[9] == -1);
  auVar64[10] = -(auVar67[10] == -1);
  auVar64[0xb] = -(auVar67[0xb] == -1);
  auVar64[0xc] = -(auVar67[0xc] == -1);
  auVar64[0xd] = -(auVar67[0xd] == -1);
  auVar64[0xe] = -(auVar67[0xe] == -1);
  auVar64[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f470b8);
    goto LAB_140382438;
  }
  uVar20 = uVar20 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto LAB_14037f4aa;
LAB_14037f825:
  uVar16 = 0;
  goto LAB_14037ff23;
LAB_14037f987:
  uVar20 = uVar20 & uVar16;
  auVar67 = *(undefined1 (*) [16])((longlong)puVar23 + uVar20);
  auVar81[0] = -(auVar67[0] == auVar59[0]);
  auVar81[1] = -(auVar67[1] == auVar59[1]);
  auVar81[2] = -(auVar67[2] == auVar59[2]);
  auVar81[3] = -(auVar67[3] == auVar59[3]);
  auVar81[4] = -(auVar67[4] == auVar59[4]);
  auVar81[5] = -(auVar67[5] == auVar59[5]);
  auVar81[6] = -(auVar67[6] == auVar59[6]);
  auVar81[7] = -(auVar67[7] == auVar59[7]);
  auVar81[8] = -(auVar67[8] == auVar59[0]);
  auVar81[9] = -(auVar67[9] == auVar59[1]);
  auVar81[10] = -(auVar67[10] == auVar59[2]);
  auVar81[0xb] = -(auVar67[0xb] == auVar59[3]);
  auVar81[0xc] = -(auVar67[0xc] == auVar59[4]);
  auVar81[0xd] = -(auVar67[0xd] == auVar59[5]);
  auVar81[0xe] = -(auVar67[0xe] == auVar59[6]);
  auVar81[0xf] = -(auVar67[0xf] == auVar59[7]);
  uVar43 = (ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
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
  uVar32 = (uint)uVar43;
  while (uVar43 != 0) {
    uVar55 = 0;
    for (uVar88 = uVar32; (uVar88 & 1) == 0; uVar88 = uVar88 >> 1 | 0x80000000) {
      uVar55 = uVar55 + 1;
    }
    uVar46 = uVar55 + uVar20 & uVar16;
    if (uVar34 == puVar23[uVar46 * -0xe + -0xe]) {
      if (((*(longlong *)(puVar23 + uVar45 * -0xe + -0xc) != 0) ||
          (puStack_138 = puVar23 + uVar46 * -0xe, *(longlong *)(puStack_138 + -0xc) != 0)) ||
         (lVar15 = *(longlong *)(puVar23 + uVar45 * -0xe + -10),
         lVar15 != *(longlong *)(puStack_138 + -10))) goto LAB_14037ff1c;
      puStack_120 = (uint *)pdb_140c3d060(*(longlong *)puStack_180,0,lVar15,
                                          puVar23[uVar45 * -0xe + -2]);
      if (puStack_120 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46e68);
      }
      lVar38 = *(longlong *)(puStack_138 + -0xc);
      lVar30 = *(longlong *)(puStack_138 + -10);
      puStack_118 = (uint *)pdb_140c3d060(*(longlong *)puStack_180,lVar38,lVar30,puStack_138[-2]);
      uVar94 = (undefined4)((ulonglong)in_stack_fffffffffffff4b0 >> 0x20);
      uVar97 = (undefined4)((ulonglong)in_stack_fffffffffffff4b8 >> 0x20);
      uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffff4a8 >> 0x20);
      if (puStack_118 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46e80);
      }
      if ((1 < *(byte *)((longlong)puStack_120 + 0x32)) ||
         (1 < *(byte *)((longlong)puStack_118 + 0x32))) goto LAB_14037ff1c;
      puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,puStack_120[4]);
      puStack_1b8 = (uint *)CONCAT44(puStack_1b8._4_4_,puStack_120[5]);
      pfStack_1a0 = (float *)CONCAT44(pfStack_1a0._4_4_,puStack_118[4]);
      uVar32 = puStack_118[5];
      pdb_140901390(&uStack_878,0,lVar15,uVar33);
      pdb_140901390(&uStack_890,lVar38,lVar30,uVar34);
      uStack_9d8 = uStack_868;
      uStack_9e8 = uStack_878;
      uStack_9e0 = uStack_870;
      uStack_9c0 = uStack_880;
      uStack_9d0 = uStack_890;
      uStack_9c8 = uStack_888;
      pdb_14038c6d0(&uStack_3c8,&puStack_1e8,auStack_568,uVar33,CONCAT44(uVar14,uVar34));
      puVar22 = (uint *)uStack_3c8;
      uVar95 = SUB84(uStack_3c8,0);
      uVar16 = (ulonglong)uStack_3c8 >> 0x20;
      uStack_798 = uStack_3b0;
      uStack_7a8 = CONCAT44(fStack_3bc,fStack_3c0);
      uStack_7a0 = CONCAT44(uStack_3b4,uStack_3b8);
      pdb_14038c6d0(&uStack_3c8,&puStack_1e8,auStack_568,uVar34,uVar33);
      puVar24 = (uint *)uStack_3c8;
      uVar96 = SUB84(uStack_3c8,0);
      uVar20 = (ulonglong)uStack_3c8 >> 0x20;
      uStack_7b8 = uStack_3b0;
      uStack_7c8 = CONCAT44(fStack_3bc,fStack_3c0);
      uStack_7c0 = CONCAT44(uStack_3b4,uStack_3b8);
      uVar54 = pdb_140c016f0(&uStack_7a8);
      auVar59 = auVar67;
      uVar55 = pdb_140c016f0(&uStack_7c8);
      puStack_788 = puVar22;
      uVar14 = auVar67._0_4_;
      uStack_780 = (uint *)CONCAT44(uVar14,uVar54);
      pdb_1405cb750(&uStack_3c8,auStack_998,uVar33,uVar34,&puStack_788);
      puStack_788 = puVar24;
      uStack_780 = (uint *)CONCAT44(auVar59._0_4_,uVar55);
      pdb_1405cb750(&uStack_3c8,auStack_998,uVar34,uVar33,&puStack_788);
      pdb_14089b500(&puStack_788,puStack_120,*(longlong *)puStack_1b0,puStack_140,&uStack_878);
      puVar40 = &uStack_890;
      pdb_14089b500(&uStack_3c8,puStack_118,*(longlong *)puStack_1b0,puStack_140,puVar40);
      uVar98 = (undefined4)((ulonglong)puVar40 >> 0x20);
      puStack_a78 = puStack_778;
      puStack_a70 = puStack_770;
      puStack_a88 = puStack_788;
      puStack_a80 = uStack_780;
      uStack_a60 = CONCAT44(fStack_3bc,fStack_3c0);
      uStack_a58 = CONCAT44(uStack_3b4,uStack_3b8);
      uStack_a50 = CONCAT44(uStack_3ac,uStack_3b0);
      puStack_a68 = (uint *)uStack_3c8;
      uVar26 = pdb_140c413f0(puVar23 + uVar45 * -0xe + -0xc);
      lVar15 = pdb_140b54f80(*(longlong *)puStack_1b0,uVar26,&UNK_142f46e98);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46eb0);
      }
      uVar88 = auVar59._0_4_ ^ uVar13;
      in_stack_fffffffffffff4b8 = (uint *)CONCAT44(uVar97,uVar55 ^ uVar13);
      in_stack_fffffffffffff4b0 = (undefined8 *)CONCAT44(uVar94,uVar14);
      in_stack_fffffffffffff4a8 = (uint **)CONCAT44(uVar98,uVar54);
      in_stack_fffffffffffff4f8 = param_8;
      pdb_140897fe0(&puStack_4d8,lVar15,&uStack_7a8,&uStack_7c8,in_stack_fffffffffffff4a8,
                    in_stack_fffffffffffff4b0,in_stack_fffffffffffff4b8,uVar88,
                    puVar23[uVar45 * -0xe + -1],puStack_138[-1],puStack_130._0_4_,puStack_1b8._0_4_,
                    pfStack_1a0._0_4_,uVar32,param_8);
      uStack_3b8 = (uint)puStack_4a8;
      uStack_3b4 = (undefined4)((ulonglong)puStack_4a8 >> 0x20);
      uStack_3c8 = (uint **)puStack_4b8;
      fStack_3c0 = SUB84(puStack_4b0,0);
      fStack_3bc = (float)((ulonglong)puStack_4b0 >> 0x20);
      uStack_fb = 0;
      pdb_140080c90(&puStack_428,&uStack_3c8,1);
      puVar23 = puStack_200;
      if (SBORROW8(0,(longlong)puStack_428)) {
        if (puStack_200 == puStack_210) {
          uStack_fb = 0;
          pdb_142d8d7f0(&puStack_210);
        }
        puStack_208[(longlong)puVar23 * 2] = uVar33;
        puStack_208[(longlong)puVar23 * 2 + 1] = uVar34;
        puStack_200 = (uint *)((longlong)puVar23 + 1);
        if ((!SBORROW8(0,lStack_4a0)) && (lStack_4a0 != 0)) {
          pub_1406abac0(pbStack_498,lStack_4a0 << 3,4);
        }
        if ((!SBORROW8(0,lStack_488)) && (lStack_488 != 0)) {
          pub_1406abac0(pbStack_480,lStack_488 << 2,4);
        }
        if ((!SBORROW8(0,(longlong)puStack_470)) && (puStack_470 != (uint *)0x0)) {
          pub_1406abac0((byte *)puStack_468,(longlong)puStack_470 << 2,4);
        }
        if ((puStack_4d8 != (uint *)0x0) && ((undefined8 *)0x1 < puStack_4c0)) {
          pub_1406abac0((byte *)puStack_4d0,(longlong)puStack_4c0 << 2,2);
        }
      }
      else {
        in_stack_fffffffffffff4a8 = (uint **)(puStack_138 + -0xc);
        puStack_398 = puStack_3f8;
        auStack_3a8._8_8_ = puStack_400;
        auStack_3a8._0_8_ = puStack_408;
        uStack_3b8 = (uint)puStack_418;
        uStack_3b4 = (undefined4)((ulonglong)puStack_418 >> 0x20);
        uStack_3b0 = (uint)puStack_410;
        uStack_3ac = (uint)((ulonglong)puStack_410 >> 0x20);
        uStack_3c8 = (uint **)puStack_428;
        fStack_3c0 = SUB84(puStack_420,0);
        fStack_3bc = (float)((ulonglong)puStack_420 >> 0x20);
        uStack_9a8 = uStack_490;
        lStack_9b8 = lStack_4a0;
        pbStack_9b0 = pbStack_498;
        uStack_838 = uStack_478;
        lStack_848 = lStack_488;
        pbStack_840 = pbStack_480;
        uStack_218 = uStack_460;
        puStack_228 = puStack_470;
        puStack_220 = puStack_468;
        puStack_578 = puStack_4c8;
        puStack_570 = puStack_4c0;
        puStack_588 = puStack_4d8;
        puStack_580 = puStack_4d0;
        uStack_fb = 1;
        in_stack_fffffffffffff4f8 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffff4f8 >> 0x20),uVar88);
        in_stack_fffffffffffff4b8 = (uint *)&uStack_7c8;
        in_stack_fffffffffffff4b0 = &uStack_7a8;
        pdb_14089bbd0(&puStack_788,&puStack_a88,puStack_1f8,puStack_170,in_stack_fffffffffffff4a8,
                      in_stack_fffffffffffff4b0,in_stack_fffffffffffff4b8,uVar95,(int)uVar16,uVar96,
                      (int)uVar20,uVar54,uVar14,uVar55 ^ uVar13,in_stack_fffffffffffff4f8,
                      &uStack_9e8,&lStack_9b8,&lStack_848,&puStack_228,&puStack_588,&puStack_828,
                      &uStack_3c8);
        *puStack_1f0 = uStack_164;
        pub_142e32760(&uStack_3c8,&puStack_788,0x150);
        lVar15 = plStack_178[2];
        if (lVar15 == *plStack_178) {
          pdb_142d7efa0(plStack_178);
        }
        plVar18 = plStack_178;
        pub_142e32760(lVar15 * 0x150 + plStack_178[1],&puStack_788,0x150);
        plVar18[2] = lVar15 + 1;
      }
      goto LAB_14037f5d4;
    }
    uVar43 = (ushort)(uVar32 - 1) & (ushort)uVar32;
    uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar43);
  }
  auVar66[0] = -(auVar67[0] == -1);
  auVar66[1] = -(auVar67[1] == -1);
  auVar66[2] = -(auVar67[2] == -1);
  auVar66[3] = -(auVar67[3] == -1);
  auVar66[4] = -(auVar67[4] == -1);
  auVar66[5] = -(auVar67[5] == -1);
  auVar66[6] = -(auVar67[6] == -1);
  auVar66[7] = -(auVar67[7] == -1);
  auVar66[8] = -(auVar67[8] == -1);
  auVar66[9] = -(auVar67[9] == -1);
  auVar66[10] = -(auVar67[10] == -1);
  auVar66[0xb] = -(auVar67[0xb] == -1);
  auVar66[0xc] = -(auVar67[0xc] == -1);
  auVar66[0xd] = -(auVar67[0xd] == -1);
  auVar66[0xe] = -(auVar67[0xe] == -1);
  auVar66[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x37,0) & 1) != 0) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46e50);
    goto LAB_140382438;
  }
  uVar20 = uVar20 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_14037f987;
LAB_14037ff1c:
  uVar16 = auStack_150._8_8_;
LAB_14037ff23:
  if (!bVar52) {
    uStack_44c = 0;
    uStack_458 = 0;
    if (uVar16 == 0) {
      lVar15 = 0;
      puVar23 = (uint *)0x0;
LAB_1403801b7:
      lVar38 = 0;
    }
    else {
      puVar23 = (uint *)0x0;
      if (puStack_160 <= (ulonglong)auStack_150._0_8_) {
        puVar23 = puStack_160;
      }
      lVar15 = auStack_150._0_8_ - (longlong)puVar23;
      lVar38 = uVar16 - ((longlong)puStack_160 - lVar15);
      puVar23 = puStack_160;
      if (uVar16 < (ulonglong)((longlong)puStack_160 - lVar15) || lVar38 == 0) {
        puVar23 = (uint *)(uVar16 + lVar15);
        goto LAB_1403801b7;
      }
    }
    puVar22 = puStack_158 + lVar15;
    puVar23 = puStack_158 + (longlong)puVar23;
    puVar24 = puStack_158 + lVar38;
    bVar52 = false;
    puVar42 = puStack_158;
    uVar32 = (uint)puStack_1a8;
LAB_140380201:
    puVar27 = puVar42;
    puVar31 = puVar22;
    if ((puVar22 != puVar23) ||
       (bVar51 = puVar42 != puVar24, puVar23 = puVar24, puVar27 = puVar22, puVar31 = puVar42,
       puVar24 = puVar22, bVar51)) {
      puVar22 = puVar31 + 1;
      uVar34 = *puVar31;
      if (!bVar52) {
        puVar42 = puVar22;
        puVar35 = puVar24;
        if ((puVar22 == puVar23) &&
           (bVar52 = puVar27 == puVar24, puVar42 = puVar27, puVar35 = puVar23, puVar27 = puVar22,
           puVar23 = puVar24, bVar52)) goto LAB_14038068c;
        puVar22 = puVar42 + 1;
        puVar24 = puVar35;
        uVar34 = *puVar42;
        uVar32 = *puVar31;
      }
      uStack_3c8 = (uint **)CONCAT44(uStack_3c8._4_4_,uVar32);
      if (auStack_1d8._8_8_ != 0) {
        uVar16 = pdb_1400aede0(auStack_1c8,&uStack_3c8);
        bVar53 = (byte)(uVar16 >> 0x39);
        auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
        auVar59 = pshuflw(auVar59,auVar59,0);
        lVar15 = 0;
        while( true ) {
          uVar16 = uVar16 & uStack_1e0;
          auVar67 = *(undefined1 (*) [16])((longlong)puStack_1e8 + uVar16);
          auVar83[0] = -(auVar67[0] == auVar59[0]);
          auVar83[1] = -(auVar67[1] == auVar59[1]);
          auVar83[2] = -(auVar67[2] == auVar59[2]);
          auVar83[3] = -(auVar67[3] == auVar59[3]);
          auVar83[4] = -(auVar67[4] == auVar59[4]);
          auVar83[5] = -(auVar67[5] == auVar59[5]);
          auVar83[6] = -(auVar67[6] == auVar59[6]);
          auVar83[7] = -(auVar67[7] == auVar59[7]);
          auVar83[8] = -(auVar67[8] == auVar59[0]);
          auVar83[9] = -(auVar67[9] == auVar59[1]);
          auVar83[10] = -(auVar67[10] == auVar59[2]);
          auVar83[0xb] = -(auVar67[0xb] == auVar59[3]);
          auVar83[0xc] = -(auVar67[0xc] == auVar59[4]);
          auVar83[0xd] = -(auVar67[0xd] == auVar59[5]);
          auVar83[0xe] = -(auVar67[0xe] == auVar59[6]);
          auVar83[0xf] = -(auVar67[0xf] == auVar59[7]);
          uVar43 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar83[0xf] >> 7) << 0xf;
          uVar33 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar55 = 0;
            for (uVar88 = uVar33; (uVar88 & 1) == 0; uVar88 = uVar88 >> 1 | 0x80000000) {
              uVar55 = uVar55 + 1;
            }
            uVar20 = uVar55 + uVar16 & uStack_1e0;
            if (uVar32 == puStack_1e8[uVar20 * -0xe + -0xe]) {
              fVar60 = (float)puStack_1e8[uVar20 * -0xe + -5];
              fVar2 = (float)puStack_1e8[uVar20 * -0xe + -3];
              auVar59 = ZEXT416(puStack_1e8[uVar20 * -0xe + -1]);
              pcVar25 = (char *)pdb_1405cb310(auStack_568,uVar32,uVar34);
              if (pcVar25 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_142f47130);
              }
              cVar11 = *pcVar25;
              uVar26 = *(undefined8 *)(pcVar25 + 4);
              uVar4 = *(undefined8 *)(pcVar25 + 0xc);
              lVar15 = pdb_1405cb310(auStack_568,uVar32,uVar34);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_142f47148);
              }
              fVar56 = (float)pdb_140c01750(lVar15);
              uVar16 = uStack_188;
              if ((uStack_188 == 0) && (cVar11 != '\x02')) {
                uVar14 = (int)uVar4;
                uVar94 = (int)((ulonglong)uVar4 >> 0x20);
                if (cVar11 != '\x01') {
                  uVar14 = (int)uVar26;
                  uVar94 = (int)((ulonglong)uVar26 >> 0x20);
                }
                uStack_448 = CONCAT44(uVar94,uVar14);
                uStack_44c = 1;
              }
              if (uStack_188 == uStack_198) {
                pdb_142db07d0(&uStack_198);
              }
              *(ulonglong *)(puStack_190 + uVar16 * 2) =
                   CONCAT44(auVar59._0_4_ + fVar2,fVar56 + fVar60);
              uStack_188 = uVar16 + 1;
              bVar52 = true;
              puVar42 = puVar27;
              uVar32 = uVar34;
              goto LAB_140380201;
            }
            uVar43 = (ushort)(uVar33 - 1) & (ushort)uVar33;
            uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar43);
          }
          auVar69[0] = -(auVar67[0] == -1);
          auVar69[1] = -(auVar67[1] == -1);
          auVar69[2] = -(auVar67[2] == -1);
          auVar69[3] = -(auVar67[3] == -1);
          auVar69[4] = -(auVar67[4] == -1);
          auVar69[5] = -(auVar67[5] == -1);
          auVar69[6] = -(auVar67[6] == -1);
          auVar69[7] = -(auVar67[7] == -1);
          auVar69[8] = -(auVar67[8] == -1);
          auVar69[9] = -(auVar67[9] == -1);
          auVar69[10] = -(auVar67[10] == -1);
          auVar69[0xb] = -(auVar67[0xb] == -1);
          auVar69[0xc] = -(auVar67[0xc] == -1);
          auVar69[0xd] = -(auVar67[0xd] == -1);
          auVar69[0xe] = -(auVar67[0xe] == -1);
          auVar69[0xf] = -(auVar67[0xf] == -1);
          if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 || (SUB161(auVar69 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar69 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar69 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar69 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar69 >> 0x2f,0) & 1) != 0) || (SUB161(auVar69 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar69 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar69 >> 0x47,0) & 1) != 0) || (SUB161(auVar69 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar69 >> 0x57,0) & 1) != 0) || (SUB161(auVar69 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar69 >> 0x67,0) & 1) != 0) || (SUB161(auVar69 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar69 >> 0x77,0) & 1) != 0) || auVar69[0xf] < '\0') break;
          uVar16 = uVar16 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47118);
      goto LAB_140382438;
    }
LAB_14038068c:
    puStack_1a8 = (uint *)CONCAT44(puStack_1a8._4_4_,uVar32);
    if (auStack_150._8_8_ == 0) {
      puVar23 = (uint *)0x0;
      puVar22 = (uint *)0x0;
LAB_1403806eb:
      if (puVar23 == puVar22) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46ec8);
      }
      bVar52 = false;
      puVar23 = puStack_158 + (longlong)puVar23;
      puVar24 = puStack_158;
    }
    else {
      puVar23 = (uint *)0x0;
      if (puStack_160 <= (ulonglong)auStack_150._0_8_) {
        puVar23 = puStack_160;
      }
      puVar23 = (uint *)(auStack_150._0_8_ - (longlong)puVar23);
      puVar22 = (uint *)(auStack_150._8_8_ - ((longlong)puStack_160 - (longlong)puVar23));
      if ((ulonglong)auStack_150._8_8_ < (ulonglong)((longlong)puStack_160 - (longlong)puVar23) ||
          puVar22 == (uint *)0x0) {
        puVar22 = (uint *)(auStack_150._8_8_ + (longlong)puVar23);
        goto LAB_1403806eb;
      }
      bVar52 = puStack_160 != puVar23;
      puVar24 = puStack_158 + (longlong)puStack_160;
      puVar23 = puStack_158;
    }
    puVar22 = puStack_158 + (longlong)puVar22 + -1;
    if (puVar23 == puVar22 && !bVar52) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f46ee0);
    }
    if (puVar23 != puVar22) {
      puVar24 = puVar22;
    }
    pdb_14038c6d0(&uStack_3c8,&puStack_1e8,auStack_568,*puVar22,puVar24[-1]);
    uVar16 = uStack_188;
    puVar23 = (uint *)uStack_3c8;
    if (fStack_3c0._0_1_ == '\0') {
      uStack_454 = CONCAT44(uStack_3b8,fStack_3bc);
LAB_14038076a:
      uStack_454 = uStack_454 ^ auVar58._0_8_;
      uStack_458 = 1;
    }
    else if (fStack_3c0._0_1_ == '\x01') {
      uStack_454 = CONCAT44(uStack_3b0,uStack_3b4);
      goto LAB_14038076a;
    }
    if (uStack_188 == uStack_198) {
      pdb_142db07d0(&uStack_198);
    }
    *(uint **)(puStack_190 + uVar16 * 2) = puVar23;
    uStack_188 = uVar16 + 1;
    in_stack_fffffffffffff4b0 = (undefined8 *)&uStack_458;
    in_stack_fffffffffffff4a8 = (uint **)&uStack_44c;
    pdb_140dec550(&puStack_588,auStack_440,puStack_190,uStack_188,in_stack_fffffffffffff4a8,
                  in_stack_fffffffffffff4b0);
    goto LAB_1403807f9;
  }
  if (uVar16 == 0) {
    lVar15 = 0;
    puVar23 = (uint *)0x0;
LAB_14037ffc1:
    lVar38 = 0;
  }
  else {
LAB_14037ff31:
    puVar23 = (uint *)0x0;
    if (puStack_160 <= (ulonglong)auStack_150._0_8_) {
      puVar23 = puStack_160;
    }
    lVar15 = auStack_150._0_8_ - (longlong)puVar23;
    lVar38 = uVar16 - ((longlong)puStack_160 - lVar15);
    puVar23 = puStack_160;
    if (uVar16 < (ulonglong)((longlong)puStack_160 - lVar15) || lVar38 == 0) {
      puVar23 = (uint *)(uVar16 + lVar15);
      goto LAB_14037ffc1;
    }
  }
  puVar22 = puStack_158 + lVar15;
  puVar23 = puStack_158 + (longlong)puVar23;
  puVar24 = puStack_158 + lVar38;
  bVar52 = false;
  puVar42 = puStack_158;
  uVar32 = (uint)puStack_128;
LAB_14038000b:
  puVar27 = puVar42;
  puVar31 = puVar22;
  if ((puVar22 != puVar23) ||
     (bVar51 = puVar42 != puVar24, puVar23 = puVar24, puVar27 = puVar22, puVar31 = puVar42,
     puVar24 = puVar22, bVar51)) {
    puVar22 = puVar31 + 1;
    uVar34 = *puVar31;
    if (!bVar52) {
      puVar42 = puVar22;
      puVar35 = puVar24;
      if ((puVar22 == puVar23) &&
         (bVar52 = puVar27 == puVar24, puVar42 = puVar27, puVar35 = puVar23, puVar27 = puVar22,
         puVar23 = puVar24, bVar52)) goto LAB_1403805ed;
      puVar22 = puVar42 + 1;
      puVar24 = puVar35;
      uVar34 = *puVar42;
      uVar32 = *puVar31;
    }
    uStack_3c8 = (uint **)CONCAT44(uStack_3c8._4_4_,uVar32);
    if (auStack_1d8._8_8_ != 0) {
      uVar16 = pdb_1400aede0(auStack_1c8,&uStack_3c8);
      bVar53 = (byte)(uVar16 >> 0x39);
      auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
      auVar59 = pshuflw(auVar59,auVar59,0);
      lVar15 = 0;
      while( true ) {
        uVar16 = uVar16 & uStack_1e0;
        auVar67 = *(undefined1 (*) [16])((longlong)puStack_1e8 + uVar16);
        auVar82[0] = -(auVar67[0] == auVar59[0]);
        auVar82[1] = -(auVar67[1] == auVar59[1]);
        auVar82[2] = -(auVar67[2] == auVar59[2]);
        auVar82[3] = -(auVar67[3] == auVar59[3]);
        auVar82[4] = -(auVar67[4] == auVar59[4]);
        auVar82[5] = -(auVar67[5] == auVar59[5]);
        auVar82[6] = -(auVar67[6] == auVar59[6]);
        auVar82[7] = -(auVar67[7] == auVar59[7]);
        auVar82[8] = -(auVar67[8] == auVar59[0]);
        auVar82[9] = -(auVar67[9] == auVar59[1]);
        auVar82[10] = -(auVar67[10] == auVar59[2]);
        auVar82[0xb] = -(auVar67[0xb] == auVar59[3]);
        auVar82[0xc] = -(auVar67[0xc] == auVar59[4]);
        auVar82[0xd] = -(auVar67[0xd] == auVar59[5]);
        auVar82[0xe] = -(auVar67[0xe] == auVar59[6]);
        auVar82[0xf] = -(auVar67[0xf] == auVar59[7]);
        uVar43 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe | (ushort)(auVar82[0xf] >> 7) << 0xf
        ;
        uVar33 = (uint)uVar43;
        while (uVar43 != 0) {
          uVar55 = 0;
          for (uVar88 = uVar33; (uVar88 & 1) == 0; uVar88 = uVar88 >> 1 | 0x80000000) {
            uVar55 = uVar55 + 1;
          }
          uVar20 = uVar55 + uVar16 & uStack_1e0;
          if (uVar32 == puStack_1e8[uVar20 * -0xe + -0xe]) {
            fVar60 = (float)puStack_1e8[uVar20 * -0xe + -5];
            fVar2 = (float)puStack_1e8[uVar20 * -0xe + -3];
            auVar59 = ZEXT416(puStack_1e8[uVar20 * -0xe + -1]);
            lVar15 = pdb_1405cb310(auStack_568,uVar32,uVar34);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_142f47130);
            }
            lVar15 = pdb_1405cb310(auStack_568,uVar32,uVar34);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_142f47148);
            }
            fVar56 = (float)pdb_140c01750(lVar15);
            uVar16 = uStack_188;
            if (uStack_188 == uStack_198) {
              pdb_142db07d0(&uStack_198);
            }
            *(ulonglong *)(puStack_190 + uVar16 * 2) =
                 CONCAT44(auVar59._0_4_ + fVar2,fVar56 + fVar60);
            uStack_188 = uVar16 + 1;
            bVar52 = true;
            puVar42 = puVar27;
            uVar32 = uVar34;
            goto LAB_14038000b;
          }
          uVar43 = (ushort)(uVar33 - 1) & (ushort)uVar33;
          uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar43);
        }
        auVar68[0] = -(auVar67[0] == -1);
        auVar68[1] = -(auVar67[1] == -1);
        auVar68[2] = -(auVar67[2] == -1);
        auVar68[3] = -(auVar67[3] == -1);
        auVar68[4] = -(auVar67[4] == -1);
        auVar68[5] = -(auVar67[5] == -1);
        auVar68[6] = -(auVar67[6] == -1);
        auVar68[7] = -(auVar67[7] == -1);
        auVar68[8] = -(auVar67[8] == -1);
        auVar68[9] = -(auVar67[9] == -1);
        auVar68[10] = -(auVar67[10] == -1);
        auVar68[0xb] = -(auVar67[0xb] == -1);
        auVar68[0xc] = -(auVar67[0xc] == -1);
        auVar68[0xd] = -(auVar67[0xd] == -1);
        auVar68[0xe] = -(auVar67[0xe] == -1);
        auVar68[0xf] = -(auVar67[0xf] == -1);
        if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar68 >> 0x1f,0) & 1) != 0) || (SUB161(auVar68 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar68 >> 0x37,0) & 1) != 0) || (SUB161(auVar68 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') break;
        uVar16 = uVar16 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47118);
    goto LAB_140382438;
  }
LAB_1403805ed:
  puStack_128 = (uint *)CONCAT44(puStack_128._4_4_,uVar32);
  if (uStack_188 < 3) {
    uStack_3c8 = &puStack_160;
    fStack_3c0 = 2.3773422;
    fStack_3bc = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142f46ef8,&uStack_3c8,&UNK_142f46f20);
  }
  pdb_140debe80(&uStack_3c8,auStack_440,puStack_190);
  uVar16 = uStack_188;
  if (uStack_188 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_142f46f38);
  }
  lVar15 = *(longlong *)puStack_190;
  if (uStack_188 == uStack_198) {
    pdb_142db07d0(&uStack_198);
  }
  *(longlong *)(puStack_190 + uVar16 * 2) = lVar15;
  uStack_188 = uVar16 + 1;
  puStack_580 = (uint *)CONCAT44(fStack_3bc,fStack_3c0);
  puStack_578 = (uint *)CONCAT44(uStack_3b4,uStack_3b8);
  puStack_570 = (undefined8 *)CONCAT44(uStack_3ac,uStack_3b0);
  puStack_588 = (uint *)uStack_3c8;
LAB_1403807f9:
  puStack_120 = puStack_190;
  puStack_118 = puStack_190 + uStack_188 * 2;
  bVar52 = true;
  uVar16 = 0;
  puStack_130 = (undefined8 *)0x0;
  if (puStack_190 != puStack_118) {
LAB_14038083d:
    do {
      puVar23 = puStack_120 + 2;
      puVar22 = puStack_108;
      puVar24 = puVar23;
      puStack_108 = puStack_120;
      if (bVar52) {
        if (puVar23 == puStack_118) {
          puStack_108 = puStack_118;
          break;
        }
        puVar22 = puStack_120;
        puVar24 = puStack_120 + 4;
        puStack_108 = puVar23;
      }
      puStack_120 = puVar24;
      pdb_14089e4b0(&uStack_3c8,&puStack_588,uVar16);
      puVar23 = puStack_108;
      puStack_170 = (uint *)CONCAT44(fStack_3bc,fStack_3c0);
      puStack_138 = (uint *)uStack_3c8;
      if ((ulonglong)auStack_150._8_8_ <= uVar16) {
        uStack_fc = 1;
        pdb_142dc8110(&UNK_142f46af8,0x14,&UNK_142f46f50);
        goto LAB_140382438;
      }
      puVar24 = (uint *)(auStack_150._0_8_ + uVar16);
      uVar16 = uVar16 + 1;
      puVar42 = (uint *)0x0;
      if (puStack_160 <= puVar24) {
        puVar42 = puStack_160;
      }
      if ((ulonglong)auStack_150._8_8_ <= uVar16) {
        uStack_fc = 1;
        pdb_142dc8110(&UNK_142f46af8,0x14,&UNK_142f46f68);
        goto LAB_140382438;
      }
      puStack_778 = (uint *)CONCAT44(uStack_3b4,uStack_3b8);
      puVar27 = (uint *)0x0;
      if (puStack_160 <= (uint *)(auStack_150._0_8_ + uVar16)) {
        puVar27 = puStack_160;
      }
      uVar32 = puStack_158[(longlong)puVar24 - (longlong)puVar42];
      uVar34 = puStack_158[(longlong)(auStack_150._0_8_ + uVar16) - (longlong)puVar27];
      puVar24 = puStack_108;
      uVar55 = uVar34;
      uVar88 = uStack_3b0;
      uVar33 = auStack_3a8._0_4_;
      uVar89 = uStack_3ac;
      uVar90 = auStack_3a8._4_4_;
      if ((uVar34 < uVar32) &&
         (uVar20 = (ulonglong)puStack_778 >> 1, puVar24 = puVar22, puVar22 = puStack_108,
         uVar55 = uVar32, uVar32 = uVar34, uVar88 = auStack_3a8._0_4_, uVar33 = uStack_3b0,
         uVar89 = auStack_3a8._4_4_, uVar90 = uStack_3ac, uVar20 != 0)) {
        if (uVar20 == 1) {
          uVar45 = 0;
        }
        else {
          lVar15 = (longlong)puStack_778 + -1;
          uVar45 = 0;
          do {
            uVar26 = *(undefined8 *)(puStack_170 + uVar45 * 2);
            *(undefined8 *)(puStack_170 + uVar45 * 2) = *(undefined8 *)(puStack_170 + lVar15 * 2);
            *(undefined8 *)(puStack_170 + lVar15 * 2) = uVar26;
            uVar26 = *(undefined8 *)(puStack_170 + uVar45 * 2 + 2);
            *(undefined8 *)(puStack_170 + uVar45 * 2 + 2) =
                 *(undefined8 *)
                  (puStack_170 + (longlong)puStack_778 * 2 + (uVar45 ^ 0x1ffffffffffffffe) * 2);
            *(undefined8 *)
             (puStack_170 + (longlong)puStack_778 * 2 + (uVar45 ^ 0x1ffffffffffffffe) * 2) = uVar26;
            uVar45 = uVar45 + 2;
            lVar15 = lVar15 + -2;
          } while ((uVar20 & 0xfffffffffffffffe) != uVar45);
          if ((uStack_3b8 & 2) == 0) goto LAB_140380a0c;
        }
        uVar26 = *(undefined8 *)(puStack_170 + uVar45 * 2);
        *(undefined8 *)(puStack_170 + uVar45 * 2) =
             *(undefined8 *)(puStack_170 + (longlong)puStack_778 * 2 + ~uVar45 * 2);
        *(undefined8 *)(puStack_170 + (longlong)puStack_778 * 2 + ~uVar45 * 2) = uVar26;
      }
LAB_140380a0c:
      puStack_788 = (uint *)uStack_3c8;
      uStack_fc = 0;
      uStack_780 = puStack_170;
      uStack_268 = uVar55;
      uStack_264 = uVar32;
      pdb_140080c90(&uStack_3c8,&puStack_788,1);
      uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffff4f8 >> 0x20);
      if (!SBORROW8(0,(longlong)uStack_3c8)) {
        puStack_4a8 = puStack_398;
        puStack_4d0 = (uint *)CONCAT44(fStack_3bc,fStack_3c0);
        puStack_4c8 = (uint *)CONCAT44(uStack_3b4,uStack_3b8);
        puStack_4c0 = (undefined8 *)CONCAT44(uStack_3ac,uStack_3b0);
        puStack_4b8 = (uint *)auStack_3a8._0_8_;
        puStack_4b0 = (uint *)auStack_3a8._8_8_;
        puStack_4d8 = (uint *)uStack_3c8;
        lStack_7e0 = *(longlong *)puVar22;
        uVar94 = (undefined4)lStack_7e0;
        uVar20 = (ulonglong)lStack_7e0 >> 0x20;
        lStack_7f0 = *(longlong *)puVar24;
        uVar97 = (undefined4)lStack_7f0;
        uVar45 = (ulonglong)lStack_7f0 >> 0x20;
        uStack_7e8 = uVar33;
        uStack_7e4 = uVar90;
        uStack_7d8 = uVar88;
        uStack_7d4 = uVar89;
        if (auStack_1d8._8_8_ != 0) {
          uVar46 = pdb_1400aede0(auStack_1c8,&uStack_264);
          puVar23 = puStack_1e8;
          puStack_130 = (undefined8 *)uStack_1e0;
          bVar53 = (byte)(uVar46 >> 0x39);
          auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
          auVar59 = pshuflw(auVar59,auVar59,0);
          lVar15 = 0;
          while( true ) {
            uVar46 = uVar46 & uStack_1e0;
            auVar67 = *(undefined1 (*) [16])((longlong)puStack_1e8 + uVar46);
            auVar84[0] = -(auVar67[0] == auVar59[0]);
            auVar84[1] = -(auVar67[1] == auVar59[1]);
            auVar84[2] = -(auVar67[2] == auVar59[2]);
            auVar84[3] = -(auVar67[3] == auVar59[3]);
            auVar84[4] = -(auVar67[4] == auVar59[4]);
            auVar84[5] = -(auVar67[5] == auVar59[5]);
            auVar84[6] = -(auVar67[6] == auVar59[6]);
            auVar84[7] = -(auVar67[7] == auVar59[7]);
            auVar84[8] = -(auVar67[8] == auVar59[0]);
            auVar84[9] = -(auVar67[9] == auVar59[1]);
            auVar84[10] = -(auVar67[10] == auVar59[2]);
            auVar84[0xb] = -(auVar67[0xb] == auVar59[3]);
            auVar84[0xc] = -(auVar67[0xc] == auVar59[4]);
            auVar84[0xd] = -(auVar67[0xd] == auVar59[5]);
            auVar84[0xe] = -(auVar67[0xe] == auVar59[6]);
            auVar84[0xf] = -(auVar67[0xf] == auVar59[7]);
            uVar43 = (ushort)(SUB161(auVar84 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar84[0xf] >> 7) << 0xf;
            uVar34 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar34; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              uVar47 = uVar6 + uVar46 & uStack_1e0;
              if (uVar32 == puStack_1e8[uVar47 * -0xe + -0xe]) {
                pfStack_1a0 = (float *)(puStack_1e8 + uVar47 * -0xe + -0xc);
                uVar46 = pdb_1400aede0(auStack_1c8,&uStack_268);
                bVar53 = (byte)(uVar46 >> 0x39);
                auVar59 = ZEXT216(CONCAT11(bVar53,bVar53));
                auVar59 = pshuflw(auVar59,auVar59,0);
                lVar15 = 0;
                goto LAB_140380be7;
              }
              uVar43 = (ushort)(uVar34 - 1) & (ushort)uVar34;
              uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar43);
            }
            auVar70[0] = -(auVar67[0] == -1);
            auVar70[1] = -(auVar67[1] == -1);
            auVar70[2] = -(auVar67[2] == -1);
            auVar70[3] = -(auVar67[3] == -1);
            auVar70[4] = -(auVar67[4] == -1);
            auVar70[5] = -(auVar67[5] == -1);
            auVar70[6] = -(auVar67[6] == -1);
            auVar70[7] = -(auVar67[7] == -1);
            auVar70[8] = -(auVar67[8] == -1);
            auVar70[9] = -(auVar67[9] == -1);
            auVar70[10] = -(auVar67[10] == -1);
            auVar70[0xb] = -(auVar67[0xb] == -1);
            auVar70[0xc] = -(auVar67[0xc] == -1);
            auVar70[0xd] = -(auVar67[0xd] == -1);
            auVar70[0xe] = -(auVar67[0xe] == -1);
            auVar70[0xf] = -(auVar67[0xf] == -1);
            if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar70 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar70 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar70 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar70 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar70 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar70 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar70 >> 0x3f,0) & 1) != 0) || (SUB161(auVar70 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar70 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar70 >> 0x57,0) & 1) != 0) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar70 >> 0x67,0) & 1) != 0) || (SUB161(auVar70 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar70 >> 0x77,0) & 1) != 0) || auVar70[0xf] < '\0') break;
            uVar46 = uVar46 + lVar15 + 0x10;
            lVar15 = lVar15 + 0x10;
          }
        }
        uStack_f1 = 1;
        pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46f80);
        goto LAB_140382438;
      }
      bVar52 = false;
      puStack_108 = puVar23;
    } while (puStack_120 != puStack_118);
  }
LAB_140381131:
  puVar23 = puStack_200;
  if ((((ulonglong)puStack_130 & 1) == 0) && (auStack_150._8_8_ != 0)) {
    puVar22 = puStack_160;
    if ((ulonglong)auStack_150._0_8_ < puStack_160) {
      puVar22 = (uint *)0x0;
    }
    puVar22 = (uint *)(auStack_150._0_8_ - (longlong)puVar22);
    uVar16 = (longlong)puStack_160 - (longlong)puVar22;
    lVar15 = (auStack_150._8_8_ - uVar16) * 4;
    if ((ulonglong)auStack_150._8_8_ <= uVar16) {
      lVar15 = 0;
    }
    puVar24 = (uint *)((longlong)puVar22 + auStack_150._8_8_);
    if (uVar16 < (ulonglong)auStack_150._8_8_) {
      puVar24 = puStack_160;
    }
    puVar42 = (uint *)((longlong)puStack_158 + lVar15);
    puVar27 = puStack_158 + (longlong)puVar22;
    puVar31 = puStack_158;
    puVar35 = puStack_158 + (longlong)puVar24;
    if ((puVar22 != puVar24) ||
       (puVar27 = puStack_158, puVar31 = puStack_158 + (longlong)puVar22, puVar35 = puVar42,
       puVar42 = puStack_158 + (longlong)puVar24, lVar15 != 0)) {
      uVar32 = *puVar27;
      puVar22 = puVar27 + 1;
      if ((puVar27 + 1 != puVar35) || (puVar22 = puVar31, puVar31 != puVar42)) {
        uVar34 = *puVar22;
        if (puStack_200 == puStack_210) {
          pdb_142d8d7f0(&puStack_210);
        }
        puStack_208[(longlong)puVar23 * 2] = uVar32;
        puStack_208[(longlong)puVar23 * 2 + 1] = uVar34;
        puStack_200 = (uint *)((longlong)puVar23 + 1);
      }
    }
  }
  goto LAB_14037f5d4;
LAB_140380be7:
  uVar46 = uVar46 & (ulonglong)puStack_130;
  auVar67 = *(undefined1 (*) [16])((longlong)puVar23 + uVar46);
  auVar85[0] = -(auVar67[0] == auVar59[0]);
  auVar85[1] = -(auVar67[1] == auVar59[1]);
  auVar85[2] = -(auVar67[2] == auVar59[2]);
  auVar85[3] = -(auVar67[3] == auVar59[3]);
  auVar85[4] = -(auVar67[4] == auVar59[4]);
  auVar85[5] = -(auVar67[5] == auVar59[5]);
  auVar85[6] = -(auVar67[6] == auVar59[6]);
  auVar85[7] = -(auVar67[7] == auVar59[7]);
  auVar85[8] = -(auVar67[8] == auVar59[0]);
  auVar85[9] = -(auVar67[9] == auVar59[1]);
  auVar85[10] = -(auVar67[10] == auVar59[2]);
  auVar85[0xb] = -(auVar67[0xb] == auVar59[3]);
  auVar85[0xc] = -(auVar67[0xc] == auVar59[4]);
  auVar85[0xd] = -(auVar67[0xd] == auVar59[5]);
  auVar85[0xe] = -(auVar67[0xe] == auVar59[6]);
  auVar85[0xf] = -(auVar67[0xf] == auVar59[7]);
  uVar43 = (ushort)(SUB161(auVar85 >> 7,0) & 1) | (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe | (ushort)(auVar85[0xf] >> 7) << 0xf;
  uVar34 = (uint)uVar43;
  while (uVar43 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar34; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar48 = uVar6 + uVar46 & (ulonglong)puStack_130;
    if (uVar55 == puVar23[uVar48 * -0xe + -0xe]) {
      uStack_f1 = 1;
      puStack_130 = (undefined8 *)pdb_1405cb310(auStack_568,uVar32,uVar55);
      if (puStack_130 == (undefined8 *)0x0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46fb0);
      }
      uStack_f1 = 1;
      puStack_1b8 = (uint *)pdb_1405cb310(auStack_568,uVar55,uVar32);
      if (puStack_1b8 == (uint *)0x0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46fc8);
      }
      uVar26 = *(undefined8 *)(puVar23 + uVar47 * -0xe + -0xc);
      uStack_238 = *(ulonglong *)(puVar23 + uVar47 * -0xe + -10);
      uStack_f1 = 1;
      pdb_140901390(&uStack_8a8,uVar26,uStack_238,uVar32);
      uVar4 = *(undefined8 *)(puVar23 + uVar48 * -0xe + -0xc);
      uStack_230 = *(ulonglong *)(puVar23 + uVar48 * -0xe + -10);
      uStack_f1 = 1;
      pdb_140901390(&uStack_8c0,uVar4,uStack_230,uVar55);
      uStack_a08 = uStack_898;
      uStack_a18 = uStack_8a8;
      uStack_a10 = uStack_8a0;
      uStack_9f0 = uStack_8b0;
      uStack_a00 = uStack_8c0;
      uStack_9f8 = uStack_8b8;
      uStack_f1 = 1;
      pdb_1405cb750(&uStack_3c8,auStack_998,uVar32,uVar55,&lStack_7e0);
      uStack_f1 = 1;
      pdb_1405cb750(&uStack_3c8,auStack_998,uVar55,uVar32,&lStack_7f0);
      uStack_f1 = 1;
      lVar15 = pdb_140c3d060(*(longlong *)puStack_180,uVar26,uStack_238,puVar23[uVar47 * -0xe + -2])
      ;
      if (lVar15 == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46fe0);
      }
      uStack_f1 = 1;
      lVar38 = pdb_140c3d060(*(longlong *)puStack_180,uVar4,uStack_230,puVar23[uVar48 * -0xe + -2]);
      if (lVar38 == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f46ff8);
      }
      uStack_f1 = 1;
      pdb_14089b500(&puStack_788,lVar15,*(longlong *)puStack_1b0,puStack_140,&uStack_8a8);
      uStack_f1 = 1;
      pdb_14089b500(&uStack_3c8,lVar38,*(longlong *)puStack_1b0,puStack_140,&uStack_8c0);
      in_stack_fffffffffffff4a8 = (uint **)(puVar23 + uVar48 * -0xe + -0xc);
      puStack_ab8 = puStack_778;
      puStack_ab0 = puStack_770;
      puStack_ac8 = puStack_788;
      puStack_ac0 = uStack_780;
      uStack_aa0 = CONCAT44(fStack_3bc,fStack_3c0);
      uStack_a98 = CONCAT44(uStack_3b4,uStack_3b8);
      uStack_a90 = CONCAT44(uStack_3ac,uStack_3b0);
      puStack_aa8 = (uint *)uStack_3c8;
      lStack_848 = -0x8000000000000000;
      uStack_860 = 0x8000000000000000;
      puStack_428 = (uint *)0x0;
      puStack_398 = puStack_4a8;
      auStack_3a8._8_8_ = puStack_4b0;
      auStack_3a8._0_8_ = puStack_4b8;
      uStack_3b8 = (uint)puStack_4c8;
      uStack_3b4 = (undefined4)((ulonglong)puStack_4c8 >> 0x20);
      uStack_3b0 = (uint)puStack_4c0;
      uStack_3ac = (uint)((ulonglong)puStack_4c0 >> 0x20);
      uStack_3c8 = (uint **)puStack_4d8;
      fStack_3c0 = SUB84(puStack_4d0,0);
      fStack_3bc = (float)((ulonglong)puStack_4d0 >> 0x20);
      puStack_228 = (uint *)0x8000000000000000;
      puStack_220 = puStack_858;
      uStack_218 = uStack_850;
      uStack_f1 = 0;
      in_stack_fffffffffffff4f8 = CONCAT44(uVar14,uVar90 ^ uVar13);
      in_stack_fffffffffffff4b0 = puStack_130;
      in_stack_fffffffffffff4b8 = puStack_1b8;
      pdb_14089bbd0(&puStack_788,&puStack_ac8,puStack_1f8,pfStack_1a0,in_stack_fffffffffffff4a8,
                    puStack_130,puStack_1b8,uVar94,(int)uVar20,uVar97,(int)uVar45,uVar88,uVar89,
                    uVar33 ^ uVar13,in_stack_fffffffffffff4f8,&uStack_a18,&lStack_848,&puStack_228,
                    &uStack_860,&puStack_428,&puStack_828,&uStack_3c8);
      uStack_f8 = 1;
      lVar15 = pdb_140901490(lVar15 + 0x38,&UNK_142f47010);
      uStack_f8 = 1;
      cVar11 = pdb_1408ff980(lVar15 + 0x16);
      if (cVar11 != '\0') {
        uStack_f8 = 1;
        cVar11 = pdb_1403af430(param_6,auStack_660);
        if (cVar11 != '\0') {
          uStack_f8 = 1;
          pdb_14089e970(&puStack_788,puStack_130,puStack_1b8,*puStack_1f8);
        }
      }
      *puStack_1f0 = uStack_164;
      pub_142e32760(&uStack_3c8,&puStack_788,0x150);
      lVar15 = plStack_178[2];
      if (lVar15 == *plStack_178) {
        pdb_142d7efa0(plStack_178);
      }
      plVar18 = plStack_178;
      uVar26 = pub_142e32760(lVar15 * 0x150 + plStack_178[1],&uStack_3c8,0x150);
      plVar18[2] = lVar15 + 1;
      puStack_130 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
      bVar52 = false;
      if (puStack_120 != puStack_118) goto LAB_14038083d;
      goto LAB_140381131;
    }
    uVar43 = (ushort)(uVar34 - 1) & (ushort)uVar34;
    uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar43);
  }
  auVar71[0] = -(auVar67[0] == -1);
  auVar71[1] = -(auVar67[1] == -1);
  auVar71[2] = -(auVar67[2] == -1);
  auVar71[3] = -(auVar67[3] == -1);
  auVar71[4] = -(auVar67[4] == -1);
  auVar71[5] = -(auVar67[5] == -1);
  auVar71[6] = -(auVar67[6] == -1);
  auVar71[7] = -(auVar67[7] == -1);
  auVar71[8] = -(auVar67[8] == -1);
  auVar71[9] = -(auVar67[9] == -1);
  auVar71[10] = -(auVar67[10] == -1);
  auVar71[0xb] = -(auVar67[0xb] == -1);
  auVar71[0xc] = -(auVar67[0xc] == -1);
  auVar71[0xd] = -(auVar67[0xd] == -1);
  auVar71[0xe] = -(auVar67[0xe] == -1);
  auVar71[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 || (SUB161(auVar71 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar71 >> 0x17,0) & 1) != 0) || (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar71 >> 0x27,0) & 1) != 0) || (SUB161(auVar71 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar71 >> 0x37,0) & 1) != 0) || (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar71 >> 0x47,0) & 1) != 0) || (SUB161(auVar71 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar71 >> 0x57,0) & 1) != 0) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') {
    uStack_f1 = 1;
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f46f98);
    goto LAB_140382438;
  }
  uVar46 = uVar46 + lVar15 + 0x10;
  lVar15 = lVar15 + 0x10;
  goto LAB_140380be7;
code_r0x000140381fc4:
  uStack_f9 = 1;
  uStack_fa = 1;
  cVar11 = pdb_1403af690(&puStack_788,lVar37 + 300);
  if (cVar11 != '\0') {
LAB_140381f8c:
    *(undefined1 *)(lVar37 + 0x148) = 1;
  }
  goto LAB_140381f93;
LAB_14038155f:
  uVar20 = uVar20 & uVar16;
  auVar59 = *(undefined1 (*) [16])((longlong)puVar23 + uVar20);
  auVar87[0] = -(auVar59[0] == auVar58[0]);
  auVar87[1] = -(auVar59[1] == auVar58[1]);
  auVar87[2] = -(auVar59[2] == auVar58[2]);
  auVar87[3] = -(auVar59[3] == auVar58[3]);
  auVar87[4] = -(auVar59[4] == auVar58[4]);
  auVar87[5] = -(auVar59[5] == auVar58[5]);
  auVar87[6] = -(auVar59[6] == auVar58[6]);
  auVar87[7] = -(auVar59[7] == auVar58[7]);
  auVar87[8] = -(auVar59[8] == auVar58[0]);
  auVar87[9] = -(auVar59[9] == auVar58[1]);
  auVar87[10] = -(auVar59[10] == auVar58[2]);
  auVar87[0xb] = -(auVar59[0xb] == auVar58[3]);
  auVar87[0xc] = -(auVar59[0xc] == auVar58[4]);
  auVar87[0xd] = -(auVar59[0xd] == auVar58[5]);
  auVar87[0xe] = -(auVar59[0xe] == auVar58[6]);
  auVar87[0xf] = -(auVar59[0xf] == auVar58[7]);
  uVar43 = (ushort)(SUB161(auVar87 >> 7,0) & 1) | (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
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
  uVar33 = (uint)uVar43;
  while (uVar43 != 0) {
    uVar55 = 0;
    for (uVar88 = uVar33; (uVar88 & 1) == 0; uVar88 = uVar88 >> 1 | 0x80000000) {
      uVar55 = uVar55 + 1;
    }
    uVar45 = uVar55 + uVar20 & uVar16;
    if ((uint)puStack_108 == puVar23[uVar45 * -0xe + -0xe]) {
      puStack_1a8 = *(uint **)(puVar23 + uVar45 * -0xe + -0xc);
      puStack_130 = *(undefined8 **)(puVar23 + uVar45 * -0xe + -10);
      if ((uVar34 & 1) == 0) {
        uStack_3c8 = (uint **)puVar22;
        pdb_140df4520(&uStack_3d8,&uStack_3c8);
        fVar57 = _DAT_142e377f0;
        fVar74 = _DAT_142e36f34;
        fVar92 = uStack_3d8._4_4_;
        fVar91 = (float)uStack_3d8;
      }
      else {
        pdb_140c45ec0(&uStack_3c8,*puStack_7d0,uVar32,&UNK_142f47058);
        fVar74 = fStack_3c0 * fStack_3c0;
        fVar75 = fStack_3bc * fStack_3bc;
        fVar76 = uStack_3c8._4_4_ * uStack_3c8._4_4_ + (float)uStack_3c8 * (float)uStack_3c8;
        fVar57 = fStack_3c0 * _UNK_142e37b08 +
                 uStack_3c8._4_4_ * _UNK_142e37b04 + (float)uStack_3c8 * _DAT_142e37b00;
        fVar57 = fVar57 + fVar57;
        fVar93 = fStack_3bc + fStack_3bc;
        fVar91 = fVar93 * (uStack_3c8._4_4_ * _DAT_142f46970 - fStack_3c0 * _DAT_142f46980) +
                 fVar57 * (float)uStack_3c8 + (fVar75 - (fVar76 + fVar74)) * _DAT_142e37b00;
        fVar92 = fVar93 * (fStack_3c0 * _UNK_142f46974 - (float)uStack_3c8 * _UNK_142f46984) +
                 fVar57 * uStack_3c8._4_4_ + (fVar75 - (fVar76 + fVar74)) * _UNK_142e37b04;
        uStack_3d8 = CONCAT44(fVar92,fVar91);
        fStack_3d0 = fVar93 * ((float)uStack_3c8 * _UNK_142f46978 -
                              uStack_3c8._4_4_ * _UNK_142f46988) +
                     fVar57 * fStack_3c0 + (fVar75 - (fVar76 + fVar74)) * _UNK_142e37b08;
        fVar57 = 0.0;
        fVar74 = _DAT_142e36f28;
      }
      fVar75 = fStack_3d0;
      pdb_140901390(&uStack_8d8,puStack_128,puStack_170,uVar13);
      pdb_140901390(&uStack_8f0,puStack_1a8,puStack_130,(ulonglong)puStack_108 & 0xffffffff);
      uStack_a38 = uStack_8c8;
      uStack_a48 = uStack_8d8;
      uStack_a40 = uStack_8d0;
      uStack_a20 = uStack_8e0;
      uStack_a30 = uStack_8f0;
      uStack_a28 = uStack_8e8;
      pdb_14007ee60();
      pfVar28 = (float *)pub_1406abab0(0x10,4);
      if (pfVar28 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x10);
      }
      *pfVar28 = fVar60;
      pfVar28[1] = fVar56;
      *(ulonglong *)(pfVar28 + 2) = CONCAT44(fVar57 + fVar56 + fVar75,fVar57 + fVar60 + fVar91);
      uStack_3c8 = (uint **)0x2;
      fStack_3c0 = SUB84(pfVar28,0);
      fStack_3bc = (float)((ulonglong)pfVar28 >> 0x20);
      uStack_3b8 = 2;
      uStack_3b4 = 0;
      puVar40 = &uStack_3c8;
      pdb_140080c90(&puStack_428,puVar40,1);
      if (SBORROW8(0,(longlong)puStack_428)) goto LAB_1403813c5;
      puStack_4a8 = puStack_3f8;
      puStack_4b8 = puStack_408;
      puStack_4b0 = puStack_400;
      puStack_4c8 = puStack_418;
      puStack_4c0 = puStack_410;
      puStack_4d8 = puStack_428;
      puStack_4d0 = puStack_420;
      pdb_14007ee60();
      pfStack_1a0 = (float *)pub_1406abab0(8,4);
      if (pfStack_1a0 == (float *)0x0) {
        uStack_10a = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,8);
      }
      fVar74 = fVar92 + fVar2 + fVar74;
      *pfStack_1a0 = fVar2;
      pfStack_1a0[1] = fVar74;
      uStack_10b = 1;
      pdb_140174670(&puStack_228);
      uStack_10c = 1;
      pdb_140174530(&puStack_160);
      uStack_ff = 1;
      puVar23 = puStack_4c8;
      uVar12 = pdb_14089b470(puStack_4d0,puStack_4c8,pfStack_1a0,2);
      uStack_238 = CONCAT71(uStack_238._1_7_,uVar12);
      pdb_14007ee60();
      puVar29 = (ulonglong *)pub_1406abab0(8,8);
      if (puVar29 == (ulonglong *)0x0) {
        uStack_ff = 1;
        pdb_142dc7e2a(8,8);
        goto LAB_140382438;
      }
      *puVar29 = 0;
      uStack_598 = 0x10;
      uStack_590 = 1;
      uStack_f2 = 1;
      puStack_5a0 = puVar29;
      fVar60 = (float)pdb_14021fc10(*puStack_1f8);
      uStack_f2 = 1;
      pdb_1400c42e0(puVar29,0x10,0,0,2);
      *puVar29 = (ulonglong)(fVar2 < fVar60 + _DAT_142e3b1d8) | *puVar29 & 0xfffffffffffffffe;
      uStack_f2 = 1;
      fVar60 = (float)pdb_14021fc10(*puStack_1f8);
      uStack_f2 = 1;
      uVar94 = 0x10;
      pdb_1400c42e0(puVar29,0x10,1,0,2);
      *puVar29 = (*puVar29 & 0xfffffffffffffffd) + (ulonglong)(fVar74 < fVar60 + _DAT_142e3b1d8) * 2
      ;
      uStack_f2 = 1;
      uVar14 = pdb_140a61840(&uStack_a48);
      *puStack_1f0 = uStack_164;
      uStack_f2 = 1;
      uStack_3f0 = uVar14;
      uStack_3ec = uVar94;
      lVar30 = pdb_140c3d060(*(longlong *)puStack_180,puStack_128,puStack_170,uVar13);
      if (lVar30 == 0) {
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f47070);
      }
      uStack_f2 = 1;
      pdb_14089b500(&puStack_588,lVar30,*(longlong *)puStack_1b0,puStack_140,&uStack_8d8);
      uStack_f2 = 1;
      lVar30 = pdb_140c3d060(*(longlong *)puStack_180,puStack_1a8,puStack_130,
                             (ulonglong)puStack_108 & 0xffffffff);
      if (lVar30 == 0) {
        uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f47088);
      }
      uStack_f2 = 1;
      pdb_14089b500(&uStack_638,lVar30,*(longlong *)puStack_1b0,puStack_140,&uStack_8f0);
      uVar26 = uStack_218;
      puStack_778 = puStack_578;
      puStack_770 = puStack_570;
      puStack_788 = puStack_588;
      uStack_780 = puStack_580;
      uStack_758 = puStack_628;
      uStack_750 = puStack_620;
      puStack_768 = uStack_638;
      puStack_760 = puStack_630;
      puStack_608 = puStack_3f8;
      puStack_618 = puStack_408;
      puStack_610 = puStack_400;
      puStack_628 = puStack_418;
      puStack_620 = puStack_410;
      uStack_638 = puStack_428;
      puStack_630 = puStack_420;
      puStack_108 = puStack_228;
      puStack_170 = puStack_220;
      puStack_128 = puStack_160;
      puStack_1a8 = puStack_158;
      uVar4 = auStack_150._0_8_;
      uStack_280 = pdb_1403af430(&puStack_828,&uStack_3f0);
      uStack_298 = (uStack_230 & 0xffffffff00000000) +
                   (uStack_238 & 0xff | (ulonglong)(((uint)puVar23 & 0xff) << 8)) + 0x10000;
      uStack_2c8 = (undefined4)uStack_758;
      uStack_2c4 = uStack_758._4_4_;
      uStack_2c0 = (undefined4)uStack_750;
      uStack_2bc = uStack_750._4_4_;
      puStack_2d8 = puStack_768;
      puStack_2d0 = puStack_760;
      puStack_2e8 = puStack_778;
      puStack_2e0 = puStack_770;
      puStack_2f8 = puStack_788;
      puStack_2f0 = uStack_780;
      puStack_398 = puStack_608;
      uStack_3c8 = (uint **)uStack_638;
      fStack_3c0 = SUB84(puStack_630,0);
      fStack_3bc = (float)((ulonglong)puStack_630 >> 0x20);
      uStack_3b8 = (uint)puStack_628;
      uStack_3b4 = (undefined4)((ulonglong)puStack_628 >> 0x20);
      uStack_3b0 = (uint)puStack_620;
      uStack_3ac = (uint)((ulonglong)puStack_620 >> 0x20);
      auStack_3a8._8_8_ = puStack_610;
      auStack_3a8._0_8_ = puStack_618;
      uStack_390 = 2;
      pfStack_388 = pfStack_1a0;
      uStack_380 = 2;
      puStack_378 = puStack_108;
      puStack_370 = puStack_170;
      uStack_368 = uVar26;
      puStack_360 = puStack_128;
      puStack_358 = puStack_1a8;
      uStack_350 = uVar4;
      uStack_2a8 = uStack_590;
      puStack_2b8 = puStack_5a0;
      uStack_2b0 = uStack_598;
      uStack_288 = 1;
      uStack_330 = 0x8000000000000000;
      uStack_348 = 0;
      uStack_340 = 4;
      uStack_338 = 0;
      lVar30 = plStack_178[2];
      uStack_2a0 = uVar14;
      uStack_29c = uVar94;
      uStack_230 = uStack_298;
      if (lVar30 == *plStack_178) {
        pdb_142d7efa0(plStack_178);
      }
      plVar18 = plStack_178;
      puVar40 = &uStack_3c8;
      pub_142e32760(lVar30 * 0x150 + plStack_178[1],puVar40,0x150);
      plVar18[2] = lVar30 + 1;
      goto LAB_1403813c5;
    }
    uVar43 = (ushort)(uVar33 - 1) & (ushort)uVar33;
    uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar43);
  }
  auVar73[0] = -(auVar59[0] == -1);
  auVar73[1] = -(auVar59[1] == -1);
  auVar73[2] = -(auVar59[2] == -1);
  auVar73[3] = -(auVar59[3] == -1);
  auVar73[4] = -(auVar59[4] == -1);
  auVar73[5] = -(auVar59[5] == -1);
  auVar73[6] = -(auVar59[6] == -1);
  auVar73[7] = -(auVar59[7] == -1);
  auVar73[8] = -(auVar59[8] == -1);
  auVar73[9] = -(auVar59[9] == -1);
  auVar73[10] = -(auVar59[10] == -1);
  auVar73[0xb] = -(auVar59[0xb] == -1);
  auVar73[0xc] = -(auVar59[0xc] == -1);
  auVar73[0xd] = -(auVar59[0xd] == -1);
  auVar73[0xe] = -(auVar59[0xe] == -1);
  auVar73[0xf] = -(auVar59[0xf] == -1);
  if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar73 >> 0x17,0) & 1) != 0) || (SUB161(auVar73 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar73 >> 0x27,0) & 1) != 0) || (SUB161(auVar73 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar73 >> 0x37,0) & 1) != 0) || (SUB161(auVar73 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar73 >> 0x47,0) & 1) != 0) || (SUB161(auVar73 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar73 >> 0x67,0) & 1) != 0) || (SUB161(auVar73 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar73 >> 0x77,0) & 1) != 0) || auVar73[0xf] < '\0') {
    pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47040);
    goto LAB_140382438;
  }
  uVar20 = uVar20 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto LAB_14038155f;
}

