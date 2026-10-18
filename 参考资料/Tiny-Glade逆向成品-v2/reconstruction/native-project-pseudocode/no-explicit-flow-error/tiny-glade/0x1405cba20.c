// VA 0x1405cba20, PDB extent 18807 bytes
// tiny_glade::decorator_plugin::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/decorator_plugin.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::decorator_plugin::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/decorator_plugin.rs
   Extent: 18807 */

void pdb_1405cba20(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined8 uVar85;
  longlong *plVar86;
  undefined8 uVar87;
  ulonglong uVar88;
  undefined1 *puVar89;
  longlong lVar90;
  undefined1 *puVar91;
  ulonglong *puVar92;
  longlong lVar93;
  uint uVar94;
  ushort uVar95;
  ulonglong uVar96;
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined4 uStack_784;
  undefined4 uStack_75c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  ulonglong uStack_730;
  longlong lStack_728;
  undefined1 *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  ulonglong uStack_6d8;
  ulonglong uStack_6d0;
  undefined8 uStack_6c8;
  ulonglong uStack_6c0;
  longlong lStack_6b8;
  undefined1 *puStack_6b0;
  undefined8 uStack_6a8;
  ulonglong uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  ulonglong uStack_668;
  ulonglong uStack_660;
  undefined8 uStack_658;
  ulonglong uStack_650;
  longlong lStack_648;
  undefined1 *puStack_640;
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
  longlong lStack_5d8;
  undefined1 *puStack_5d0;
  undefined8 uStack_5c8;
  ulonglong uStack_5c0;
  undefined8 uStack_5b8;
  ulonglong uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  ulonglong uStack_598;
  ulonglong uStack_590;
  undefined8 uStack_588;
  ulonglong uStack_580;
  longlong lStack_578;
  undefined1 *puStack_570;
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
  undefined8 uStack_4d8;
  undefined1 uStack_448;
  ulonglong uStack_438;
  ulonglong uStack_430;
  undefined8 uStack_428;
  ulonglong uStack_420;
  longlong lStack_418;
  undefined1 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined1 uStack_3c7;
  undefined1 uStack_3c6;
  undefined1 uStack_3c5;
  undefined1 uStack_3c4;
  undefined1 uStack_3c3;
  undefined1 uStack_3c2;
  undefined1 uStack_3c1;
  undefined1 uStack_3c0;
  undefined1 uStack_3bf;
  undefined1 uStack_3be;
  undefined1 uStack_3bd;
  undefined1 uStack_3bc;
  undefined1 uStack_3bb;
  undefined1 uStack_3ba;
  undefined1 uStack_3b9;
  undefined1 uStack_3b8;
  undefined1 uStack_3b7;
  undefined1 uStack_3b6;
  undefined1 uStack_3b5;
  undefined1 uStack_3b4;
  undefined1 uStack_3b3;
  undefined1 uStack_3b2;
  undefined1 uStack_3b1;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined1 uStack_3a7;
  undefined1 uStack_3a6;
  undefined1 uStack_3a5;
  undefined4 uStack_3a4;
  undefined1 uStack_3a0;
  undefined1 uStack_39f;
  undefined1 uStack_39e;
  undefined1 uStack_39d;
  undefined1 uStack_39c;
  undefined1 uStack_39b;
  undefined1 uStack_39a;
  undefined1 uStack_399;
  undefined1 uStack_398;
  undefined1 uStack_397;
  undefined1 uStack_396;
  undefined1 uStack_395;
  undefined1 uStack_394;
  undefined1 uStack_393;
  undefined1 uStack_392;
  undefined1 uStack_391;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 uStack_388;
  undefined1 uStack_387;
  undefined1 uStack_386;
  undefined1 uStack_385;
  undefined1 uStack_384;
  undefined1 uStack_383;
  undefined1 uStack_382;
  undefined1 uStack_381;
  undefined1 uStack_380;
  undefined1 uStack_37f;
  undefined1 uStack_37e;
  undefined1 uStack_37d;
  undefined1 uStack_37c;
  undefined1 uStack_37b;
  undefined1 uStack_37a;
  undefined1 uStack_379;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 uStack_368;
  undefined1 uStack_367;
  undefined1 uStack_366;
  undefined1 uStack_365;
  undefined1 uStack_364;
  undefined1 uStack_363;
  undefined1 uStack_362;
  undefined1 uStack_361;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  undefined1 uStack_35c;
  undefined1 uStack_35b;
  undefined1 uStack_35a;
  undefined1 uStack_359;
  undefined1 uStack_358;
  undefined1 uStack_357;
  undefined1 uStack_356;
  undefined1 uStack_355;
  undefined1 uStack_354;
  undefined1 uStack_353;
  undefined1 uStack_352;
  undefined1 uStack_351;
  undefined1 uStack_350;
  undefined1 uStack_34f;
  undefined1 uStack_34e;
  undefined1 uStack_34d;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  undefined1 uStack_34a;
  undefined1 uStack_349;
  undefined1 uStack_348;
  undefined1 uStack_347;
  undefined1 uStack_346;
  undefined1 uStack_345;
  undefined1 uStack_344;
  undefined1 uStack_343;
  undefined1 uStack_342;
  undefined1 uStack_341;
  undefined1 uStack_340;
  undefined1 uStack_33f;
  undefined1 uStack_33e;
  undefined1 uStack_33d;
  undefined1 uStack_33c;
  undefined1 uStack_33b;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  ulonglong uStack_328;
  ulonglong uStack_320;
  longlong lStack_318;
  undefined1 *puStack_310;
  ulonglong uStack_308;
  undefined1 *puStack_300;
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  undefined1 *puStack_2e0;
  ulonglong uStack_2d8;
  undefined1 *puStack_2d0;
  ulonglong uStack_2c8;
  undefined1 *puStack_2c0;
  longlong lStack_2b8;
  undefined1 *puStack_2b0;
  ulonglong uStack_2a8;
  undefined1 *puStack_2a0;
  ulonglong uStack_298;
  ulonglong uStack_290;
  ulonglong uStack_288;
  undefined1 *puStack_280;
  ulonglong uStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  undefined1 *puStack_250;
  ulonglong uStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  ulonglong uStack_230;
  ulonglong uStack_228;
  undefined1 *puStack_220;
  ulonglong uStack_218;
  longlong lStack_210;
  undefined1 *apuStack_208 [2];
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  longlong lStack_1d8;
  undefined1 *puStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined1 uStack_1b2;
  undefined1 uStack_1b1;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  longlong lStack_1a8;
  undefined1 *puStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  undefined8 uStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined1 uStack_146;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0x12c4d72f765613cc;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar106[0] = -(*pcVar1 == DAT_142e347d0);
      auVar106[1] = -(pcVar1[1] == UNK_142e347d1);
      auVar106[2] = -(pcVar1[2] == UNK_142e347d2);
      auVar106[3] = -(pcVar1[3] == UNK_142e347d3);
      auVar106[4] = -(pcVar1[4] == UNK_142e347d4);
      auVar106[5] = -(pcVar1[5] == UNK_142e347d5);
      auVar106[6] = -(pcVar1[6] == UNK_142e347d6);
      auVar106[7] = -(pcVar1[7] == UNK_142e347d7);
      auVar106[8] = -(pcVar1[8] == UNK_142e347d8);
      auVar106[9] = -(pcVar1[9] == UNK_142e347d9);
      auVar106[10] = -(pcVar1[10] == UNK_142e347da);
      auVar106[0xb] = -(pcVar1[0xb] == UNK_142e347db);
      auVar106[0xc] = -(pcVar1[0xc] == UNK_142e347dc);
      auVar106[0xd] = -(pcVar1[0xd] == UNK_142e347dd);
      auVar106[0xe] = -(pcVar1[0xe] == UNK_142e347de);
      auVar106[0xf] = -(pcVar1[0xf] == UNK_142e347df);
      uVar95 = (ushort)(SUB161(auVar106 >> 7,0) & 1) | (ushort)(SUB161(auVar106 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar106 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar106 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar106 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar106 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar106 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar106 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar106 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar106 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar106 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar106 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar106 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar106 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar106 >> 0x77,0) & 1) << 0xe | (ushort)(auVar106[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar107[0] = -(*pcVar2 == DAT_142e63ae0);
        auVar107[1] = -(pcVar2[1] == UNK_142e63ae1);
        auVar107[2] = -(pcVar2[2] == UNK_142e63ae2);
        auVar107[3] = -(pcVar2[3] == UNK_142e63ae3);
        auVar107[4] = -(pcVar2[4] == UNK_142e63ae4);
        auVar107[5] = -(pcVar2[5] == UNK_142e63ae5);
        auVar107[6] = -(pcVar2[6] == UNK_142e63ae6);
        auVar107[7] = -(pcVar2[7] == UNK_142e63ae7);
        auVar107[8] = -(pcVar2[8] == UNK_142e63ae8);
        auVar107[9] = -(pcVar2[9] == UNK_142e63ae9);
        auVar107[10] = -(pcVar2[10] == UNK_142e63aea);
        auVar107[0xb] = -(pcVar2[0xb] == UNK_142e63aeb);
        auVar107[0xc] = -(pcVar2[0xc] == UNK_142e63aec);
        auVar107[0xd] = -(pcVar2[0xd] == UNK_142e63aed);
        auVar107[0xe] = -(pcVar2[0xe] == UNK_142e63aee);
        auVar107[0xf] = -(pcVar2[0xf] == UNK_142e63aef);
        if ((ushort)((ushort)(SUB161(auVar107 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar107 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar107 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar107 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar107 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar107 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar107 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar107 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar107 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar107 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar107 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar107 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar107 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar107 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar107 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar107[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cbb52;
          goto LAB_1405cbb68;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar97[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar97[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar97[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar97[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar97[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar97[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar97[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar97[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar97[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar97[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar97[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar97[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar97[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar97[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar97[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar97[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar97 >> 7,0) & 1) != 0 || (SUB161(auVar97 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar97 >> 0x17,0) & 1) != 0) || (SUB161(auVar97 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar97 >> 0x27,0) & 1) != 0) || (SUB161(auVar97 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar97 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar97 >> 0x3f,0) & 1) != 0) || (SUB161(auVar97 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar97 >> 0x4f,0) & 1) != 0) || (SUB161(auVar97 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar97 >> 0x5f,0) & 1) != 0) || (SUB161(auVar97 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar97 >> 0x6f,0) & 1) != 0) || (SUB161(auVar97 >> 0x77,0) & 1) != 0) ||
          auVar97[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cbb52:
  pdb_140252b90(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cbb68:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0x44621c1a77f0bb43;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar108[0] = -(*pcVar1 == DAT_142e33d10);
      auVar108[1] = -(pcVar1[1] == DAT_142e33d10._1_1_);
      auVar108[2] = -(pcVar1[2] == DAT_142e33d10._2_1_);
      auVar108[3] = -(pcVar1[3] == DAT_142e33d10._3_1_);
      auVar108[4] = -(pcVar1[4] == DAT_142e33d10._4_1_);
      auVar108[5] = -(pcVar1[5] == DAT_142e33d10._5_1_);
      auVar108[6] = -(pcVar1[6] == DAT_142e33d10._6_1_);
      auVar108[7] = -(pcVar1[7] == DAT_142e33d10._7_1_);
      auVar108[8] = -(pcVar1[8] == DAT_142e33d10._8_1_);
      auVar108[9] = -(pcVar1[9] == DAT_142e33d10._9_1_);
      auVar108[10] = -(pcVar1[10] == DAT_142e33d10._10_1_);
      auVar108[0xb] = -(pcVar1[0xb] == DAT_142e33d10._11_1_);
      auVar108[0xc] = -(pcVar1[0xc] == DAT_142e33d10._12_1_);
      auVar108[0xd] = -(pcVar1[0xd] == DAT_142e33d10._13_1_);
      auVar108[0xe] = -(pcVar1[0xe] == DAT_142e33d10._14_1_);
      auVar108[0xf] = -(pcVar1[0xf] == DAT_142e33d10._15_1_);
      uVar95 = (ushort)(SUB161(auVar108 >> 7,0) & 1) | (ushort)(SUB161(auVar108 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar108 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar108 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar108 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar108 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar108 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar108 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar108 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar108 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar108 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar108 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar108 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar108 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar108 >> 0x77,0) & 1) << 0xe | (ushort)(auVar108[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar109[0] = -(*pcVar2 == DAT_142e33d20);
        auVar109[1] = -(pcVar2[1] == UNK_142e33d21);
        auVar109[2] = -(pcVar2[2] == UNK_142e33d22);
        auVar109[3] = -(pcVar2[3] == UNK_142e33d23);
        auVar109[4] = -(pcVar2[4] == UNK_142e33d24);
        auVar109[5] = -(pcVar2[5] == UNK_142e33d25);
        auVar109[6] = -(pcVar2[6] == UNK_142e33d26);
        auVar109[7] = -(pcVar2[7] == UNK_142e33d27);
        auVar109[8] = -(pcVar2[8] == UNK_142e33d28);
        auVar109[9] = -(pcVar2[9] == UNK_142e33d29);
        auVar109[10] = -(pcVar2[10] == UNK_142e33d2a);
        auVar109[0xb] = -(pcVar2[0xb] == UNK_142e33d2b);
        auVar109[0xc] = -(pcVar2[0xc] == UNK_142e33d2c);
        auVar109[0xd] = -(pcVar2[0xd] == UNK_142e33d2d);
        auVar109[0xe] = -(pcVar2[0xe] == UNK_142e33d2e);
        auVar109[0xf] = -(pcVar2[0xf] == UNK_142e33d2f);
        if ((ushort)((ushort)(SUB161(auVar109 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar109 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar109 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar109 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar109 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar109 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar109 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar109 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar109 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar109 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar109 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar109 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar109 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar109 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar109 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar109[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cbc42;
          goto LAB_1405cbc58;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar98[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar98[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar98[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar98[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar98[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar98[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar98[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar98[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar98[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar98[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar98[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar98[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar98[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar98[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar98[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar98[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar98 >> 7,0) & 1) != 0 || (SUB161(auVar98 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar98 >> 0x17,0) & 1) != 0) || (SUB161(auVar98 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar98 >> 0x27,0) & 1) != 0) || (SUB161(auVar98 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar98 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar98 >> 0x3f,0) & 1) != 0) || (SUB161(auVar98 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar98 >> 0x4f,0) & 1) != 0) || (SUB161(auVar98 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar98 >> 0x5f,0) & 1) != 0) || (SUB161(auVar98 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar98 >> 0x6f,0) & 1) != 0) || (SUB161(auVar98 >> 0x77,0) & 1) != 0) ||
          auVar98[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cbc42:
  pdb_14024e390(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cbc58:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0x9b6e16d89dac62d0;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar110[0] = -(*pcVar1 == DAT_142e33e30);
      auVar110[1] = -(pcVar1[1] == DAT_142e33e30._1_1_);
      auVar110[2] = -(pcVar1[2] == DAT_142e33e30._2_1_);
      auVar110[3] = -(pcVar1[3] == DAT_142e33e30._3_1_);
      auVar110[4] = -(pcVar1[4] == DAT_142e33e30._4_1_);
      auVar110[5] = -(pcVar1[5] == DAT_142e33e30._5_1_);
      auVar110[6] = -(pcVar1[6] == DAT_142e33e30._6_1_);
      auVar110[7] = -(pcVar1[7] == DAT_142e33e30._7_1_);
      auVar110[8] = -(pcVar1[8] == DAT_142e33e30._8_1_);
      auVar110[9] = -(pcVar1[9] == DAT_142e33e30._9_1_);
      auVar110[10] = -(pcVar1[10] == DAT_142e33e30._10_1_);
      auVar110[0xb] = -(pcVar1[0xb] == DAT_142e33e30._11_1_);
      auVar110[0xc] = -(pcVar1[0xc] == DAT_142e33e30._12_1_);
      auVar110[0xd] = -(pcVar1[0xd] == DAT_142e33e30._13_1_);
      auVar110[0xe] = -(pcVar1[0xe] == DAT_142e33e30._14_1_);
      auVar110[0xf] = -(pcVar1[0xf] == DAT_142e33e30._15_1_);
      uVar95 = (ushort)(SUB161(auVar110 >> 7,0) & 1) | (ushort)(SUB161(auVar110 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar110 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar110 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar110 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar110 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar110 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar110 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar110 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar110 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar110 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar110 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar110 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar110 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar110 >> 0x77,0) & 1) << 0xe | (ushort)(auVar110[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar111[0] = -(*pcVar2 == DAT_142e33e40);
        auVar111[1] = -(pcVar2[1] == UNK_142e33e41);
        auVar111[2] = -(pcVar2[2] == UNK_142e33e42);
        auVar111[3] = -(pcVar2[3] == UNK_142e33e43);
        auVar111[4] = -(pcVar2[4] == UNK_142e33e44);
        auVar111[5] = -(pcVar2[5] == UNK_142e33e45);
        auVar111[6] = -(pcVar2[6] == UNK_142e33e46);
        auVar111[7] = -(pcVar2[7] == UNK_142e33e47);
        auVar111[8] = -(pcVar2[8] == UNK_142e33e48);
        auVar111[9] = -(pcVar2[9] == UNK_142e33e49);
        auVar111[10] = -(pcVar2[10] == UNK_142e33e4a);
        auVar111[0xb] = -(pcVar2[0xb] == UNK_142e33e4b);
        auVar111[0xc] = -(pcVar2[0xc] == UNK_142e33e4c);
        auVar111[0xd] = -(pcVar2[0xd] == UNK_142e33e4d);
        auVar111[0xe] = -(pcVar2[0xe] == UNK_142e33e4e);
        auVar111[0xf] = -(pcVar2[0xf] == UNK_142e33e4f);
        if ((ushort)((ushort)(SUB161(auVar111 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar111 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar111 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar111 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar111 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar111 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar111 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar111 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar111 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar111 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar111 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar111 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar111 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar111 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar111 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar111[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cbd32;
          goto LAB_1405cbd48;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar99[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar99[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar99[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar99[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar99[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar99[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar99[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar99[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar99[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar99[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar99[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar99[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar99[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar99[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar99[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar99[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar99 >> 7,0) & 1) != 0 || (SUB161(auVar99 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar99 >> 0x17,0) & 1) != 0) || (SUB161(auVar99 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar99 >> 0x27,0) & 1) != 0) || (SUB161(auVar99 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar99 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar99 >> 0x3f,0) & 1) != 0) || (SUB161(auVar99 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar99 >> 0x4f,0) & 1) != 0) || (SUB161(auVar99 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar99 >> 0x5f,0) & 1) != 0) || (SUB161(auVar99 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar99 >> 0x6f,0) & 1) != 0) || (SUB161(auVar99 >> 0x77,0) & 1) != 0) ||
          auVar99[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cbd32:
  pdb_14023ffa0(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cbd48:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0xb0217f7865ca8bc;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar112[0] = -(*pcVar1 == DAT_142e34910);
      auVar112[1] = -(pcVar1[1] == DAT_142e34910._1_1_);
      auVar112[2] = -(pcVar1[2] == DAT_142e34910._2_1_);
      auVar112[3] = -(pcVar1[3] == DAT_142e34910._3_1_);
      auVar112[4] = -(pcVar1[4] == DAT_142e34910._4_1_);
      auVar112[5] = -(pcVar1[5] == DAT_142e34910._5_1_);
      auVar112[6] = -(pcVar1[6] == DAT_142e34910._6_1_);
      auVar112[7] = -(pcVar1[7] == DAT_142e34910._7_1_);
      auVar112[8] = -(pcVar1[8] == DAT_142e34910._8_1_);
      auVar112[9] = -(pcVar1[9] == DAT_142e34910._9_1_);
      auVar112[10] = -(pcVar1[10] == DAT_142e34910._10_1_);
      auVar112[0xb] = -(pcVar1[0xb] == DAT_142e34910._11_1_);
      auVar112[0xc] = -(pcVar1[0xc] == DAT_142e34910._12_1_);
      auVar112[0xd] = -(pcVar1[0xd] == DAT_142e34910._13_1_);
      auVar112[0xe] = -(pcVar1[0xe] == DAT_142e34910._14_1_);
      auVar112[0xf] = -(pcVar1[0xf] == DAT_142e34910._15_1_);
      uVar95 = (ushort)(SUB161(auVar112 >> 7,0) & 1) | (ushort)(SUB161(auVar112 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar112 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar112 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar112 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar112 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar112 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar112 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar112 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar112 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar112 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar112 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar112 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar112 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar112 >> 0x77,0) & 1) << 0xe | (ushort)(auVar112[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar113[0] = -(*pcVar2 == DAT_142e63a80);
        auVar113[1] = -(pcVar2[1] == UNK_142e63a81);
        auVar113[2] = -(pcVar2[2] == UNK_142e63a82);
        auVar113[3] = -(pcVar2[3] == UNK_142e63a83);
        auVar113[4] = -(pcVar2[4] == UNK_142e63a84);
        auVar113[5] = -(pcVar2[5] == UNK_142e63a85);
        auVar113[6] = -(pcVar2[6] == UNK_142e63a86);
        auVar113[7] = -(pcVar2[7] == UNK_142e63a87);
        auVar113[8] = -(pcVar2[8] == UNK_142e63a88);
        auVar113[9] = -(pcVar2[9] == UNK_142e63a89);
        auVar113[10] = -(pcVar2[10] == UNK_142e63a8a);
        auVar113[0xb] = -(pcVar2[0xb] == UNK_142e63a8b);
        auVar113[0xc] = -(pcVar2[0xc] == UNK_142e63a8c);
        auVar113[0xd] = -(pcVar2[0xd] == UNK_142e63a8d);
        auVar113[0xe] = -(pcVar2[0xe] == UNK_142e63a8e);
        auVar113[0xf] = -(pcVar2[0xf] == UNK_142e63a8f);
        if ((ushort)((ushort)(SUB161(auVar113 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar113 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar113 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar113 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar113 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar113 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar113 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar113 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar113 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar113 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar113 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar113 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar113 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar113 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar113 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar113[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cbe22;
          goto LAB_1405cbe38;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar100[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar100[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar100[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar100[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar100[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar100[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar100[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar100[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar100[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar100[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar100[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar100[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar100[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar100[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar100[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar100[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar100 >> 7,0) & 1) != 0 || (SUB161(auVar100 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar100 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar100 >> 0x1f,0) & 1) != 0) || (SUB161(auVar100 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar100 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar100 >> 0x37,0) & 1) != 0) || (SUB161(auVar100 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar100 >> 0x47,0) & 1) != 0) || (SUB161(auVar100 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar100 >> 0x57,0) & 1) != 0) || (SUB161(auVar100 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar100 >> 0x67,0) & 1) != 0) || (SUB161(auVar100 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar100 >> 0x77,0) & 1) != 0) || auVar100[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cbe22:
  pdb_14024b390(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cbe38:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0x75567998daa860b0;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar114[0] = -(*pcVar1 == DAT_142e33c50);
      auVar114[1] = -(pcVar1[1] == DAT_142e33c50._1_1_);
      auVar114[2] = -(pcVar1[2] == DAT_142e33c50._2_1_);
      auVar114[3] = -(pcVar1[3] == DAT_142e33c50._3_1_);
      auVar114[4] = -(pcVar1[4] == DAT_142e33c50._4_1_);
      auVar114[5] = -(pcVar1[5] == DAT_142e33c50._5_1_);
      auVar114[6] = -(pcVar1[6] == DAT_142e33c50._6_1_);
      auVar114[7] = -(pcVar1[7] == DAT_142e33c50._7_1_);
      auVar114[8] = -(pcVar1[8] == DAT_142e33c50._8_1_);
      auVar114[9] = -(pcVar1[9] == DAT_142e33c50._9_1_);
      auVar114[10] = -(pcVar1[10] == DAT_142e33c50._10_1_);
      auVar114[0xb] = -(pcVar1[0xb] == DAT_142e33c50._11_1_);
      auVar114[0xc] = -(pcVar1[0xc] == DAT_142e33c50._12_1_);
      auVar114[0xd] = -(pcVar1[0xd] == DAT_142e33c50._13_1_);
      auVar114[0xe] = -(pcVar1[0xe] == DAT_142e33c50._14_1_);
      auVar114[0xf] = -(pcVar1[0xf] == DAT_142e33c50._15_1_);
      uVar95 = (ushort)(SUB161(auVar114 >> 7,0) & 1) | (ushort)(SUB161(auVar114 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar114 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar114 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar114 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar114 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar114 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar114 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar114 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar114 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar114 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar114 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar114 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar114 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar114 >> 0x77,0) & 1) << 0xe | (ushort)(auVar114[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar115[0] = -(*pcVar2 == DAT_142e34400);
        auVar115[1] = -(pcVar2[1] == UNK_142e34401);
        auVar115[2] = -(pcVar2[2] == UNK_142e34402);
        auVar115[3] = -(pcVar2[3] == UNK_142e34403);
        auVar115[4] = -(pcVar2[4] == UNK_142e34404);
        auVar115[5] = -(pcVar2[5] == UNK_142e34405);
        auVar115[6] = -(pcVar2[6] == UNK_142e34406);
        auVar115[7] = -(pcVar2[7] == UNK_142e34407);
        auVar115[8] = -(pcVar2[8] == UNK_142e34408);
        auVar115[9] = -(pcVar2[9] == UNK_142e34409);
        auVar115[10] = -(pcVar2[10] == UNK_142e3440a);
        auVar115[0xb] = -(pcVar2[0xb] == UNK_142e3440b);
        auVar115[0xc] = -(pcVar2[0xc] == UNK_142e3440c);
        auVar115[0xd] = -(pcVar2[0xd] == UNK_142e3440d);
        auVar115[0xe] = -(pcVar2[0xe] == UNK_142e3440e);
        auVar115[0xf] = -(pcVar2[0xf] == UNK_142e3440f);
        if ((ushort)((ushort)(SUB161(auVar115 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar115 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar115 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar115 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar115 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar115 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar115 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar115 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar115 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar115 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar115 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar115 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar115 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar115 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar115 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar115[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cbf12;
          goto LAB_1405cbf28;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar101[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar101[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar101[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar101[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar101[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar101[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar101[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar101[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar101[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar101[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar101[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar101[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar101[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar101[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar101[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar101[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar101 >> 7,0) & 1) != 0 || (SUB161(auVar101 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar101 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar101 >> 0x1f,0) & 1) != 0) || (SUB161(auVar101 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar101 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar101 >> 0x37,0) & 1) != 0) || (SUB161(auVar101 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar101 >> 0x47,0) & 1) != 0) || (SUB161(auVar101 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar101 >> 0x57,0) & 1) != 0) || (SUB161(auVar101 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar101 >> 0x67,0) & 1) != 0) || (SUB161(auVar101 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar101 >> 0x77,0) & 1) != 0) || auVar101[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cbf12:
  pdb_140243b90(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cbf28:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0x71813f83dc0969c9;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar116[0] = -(*pcVar1 == DAT_142e33d90);
      auVar116[1] = -(pcVar1[1] == DAT_142e33d90._1_1_);
      auVar116[2] = -(pcVar1[2] == DAT_142e33d90._2_1_);
      auVar116[3] = -(pcVar1[3] == DAT_142e33d90._3_1_);
      auVar116[4] = -(pcVar1[4] == DAT_142e33d90._4_1_);
      auVar116[5] = -(pcVar1[5] == DAT_142e33d90._5_1_);
      auVar116[6] = -(pcVar1[6] == DAT_142e33d90._6_1_);
      auVar116[7] = -(pcVar1[7] == DAT_142e33d90._7_1_);
      auVar116[8] = -(pcVar1[8] == DAT_142e33d90._8_1_);
      auVar116[9] = -(pcVar1[9] == DAT_142e33d90._9_1_);
      auVar116[10] = -(pcVar1[10] == DAT_142e33d90._10_1_);
      auVar116[0xb] = -(pcVar1[0xb] == DAT_142e33d90._11_1_);
      auVar116[0xc] = -(pcVar1[0xc] == DAT_142e33d90._12_1_);
      auVar116[0xd] = -(pcVar1[0xd] == DAT_142e33d90._13_1_);
      auVar116[0xe] = -(pcVar1[0xe] == DAT_142e33d90._14_1_);
      auVar116[0xf] = -(pcVar1[0xf] == DAT_142e33d90._15_1_);
      uVar95 = (ushort)(SUB161(auVar116 >> 7,0) & 1) | (ushort)(SUB161(auVar116 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar116 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar116 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar116 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar116 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar116 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar116 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar116 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar116 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar116 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar116 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar116 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar116 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar116 >> 0x77,0) & 1) << 0xe | (ushort)(auVar116[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar117[0] = -(*pcVar2 == DAT_142e344c0);
        auVar117[1] = -(pcVar2[1] == UNK_142e344c1);
        auVar117[2] = -(pcVar2[2] == UNK_142e344c2);
        auVar117[3] = -(pcVar2[3] == UNK_142e344c3);
        auVar117[4] = -(pcVar2[4] == UNK_142e344c4);
        auVar117[5] = -(pcVar2[5] == UNK_142e344c5);
        auVar117[6] = -(pcVar2[6] == UNK_142e344c6);
        auVar117[7] = -(pcVar2[7] == UNK_142e344c7);
        auVar117[8] = -(pcVar2[8] == UNK_142e344c8);
        auVar117[9] = -(pcVar2[9] == UNK_142e344c9);
        auVar117[10] = -(pcVar2[10] == UNK_142e344ca);
        auVar117[0xb] = -(pcVar2[0xb] == UNK_142e344cb);
        auVar117[0xc] = -(pcVar2[0xc] == UNK_142e344cc);
        auVar117[0xd] = -(pcVar2[0xd] == UNK_142e344cd);
        auVar117[0xe] = -(pcVar2[0xe] == UNK_142e344ce);
        auVar117[0xf] = -(pcVar2[0xf] == UNK_142e344cf);
        if ((ushort)((ushort)(SUB161(auVar117 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar117 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar117 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar117 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar117 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar117 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar117 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar117 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar117 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar117 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar117 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar117 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar117 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar117 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar117 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar117[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cc002;
          goto LAB_1405cc018;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar102[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar102[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar102[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar102[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar102[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar102[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar102[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar102[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar102[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar102[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar102[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar102[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar102[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar102[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar102[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar102[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar102 >> 7,0) & 1) != 0 || (SUB161(auVar102 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar102 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar102 >> 0x1f,0) & 1) != 0) || (SUB161(auVar102 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar102 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar102 >> 0x37,0) & 1) != 0) || (SUB161(auVar102 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar102 >> 0x47,0) & 1) != 0) || (SUB161(auVar102 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar102 >> 0x57,0) & 1) != 0) || (SUB161(auVar102 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar102 >> 0x67,0) & 1) != 0) || (SUB161(auVar102 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar102 >> 0x77,0) & 1) != 0) || auVar102[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cc002:
  pdb_140253790(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cc018:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0xf8aef70252f0b2fe;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar118[0] = -(*pcVar1 == DAT_142e346a0);
      auVar118[1] = -(pcVar1[1] == DAT_142e346a0._1_1_);
      auVar118[2] = -(pcVar1[2] == DAT_142e346a0._2_1_);
      auVar118[3] = -(pcVar1[3] == DAT_142e346a0._3_1_);
      auVar118[4] = -(pcVar1[4] == DAT_142e346a0._4_1_);
      auVar118[5] = -(pcVar1[5] == DAT_142e346a0._5_1_);
      auVar118[6] = -(pcVar1[6] == DAT_142e346a0._6_1_);
      auVar118[7] = -(pcVar1[7] == DAT_142e346a0._7_1_);
      auVar118[8] = -(pcVar1[8] == DAT_142e346a0._8_1_);
      auVar118[9] = -(pcVar1[9] == DAT_142e346a0._9_1_);
      auVar118[10] = -(pcVar1[10] == DAT_142e346a0._10_1_);
      auVar118[0xb] = -(pcVar1[0xb] == DAT_142e346a0._11_1_);
      auVar118[0xc] = -(pcVar1[0xc] == DAT_142e346a0._12_1_);
      auVar118[0xd] = -(pcVar1[0xd] == DAT_142e346a0._13_1_);
      auVar118[0xe] = -(pcVar1[0xe] == DAT_142e346a0._14_1_);
      auVar118[0xf] = -(pcVar1[0xf] == DAT_142e346a0._15_1_);
      uVar95 = (ushort)(SUB161(auVar118 >> 7,0) & 1) | (ushort)(SUB161(auVar118 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar118 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar118 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar118 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar118 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar118 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar118 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar118 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar118 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar118 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar118 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar118 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar118 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar118 >> 0x77,0) & 1) << 0xe | (ushort)(auVar118[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar119[0] = -(*pcVar2 == DAT_142e639a0);
        auVar119[1] = -(pcVar2[1] == UNK_142e639a1);
        auVar119[2] = -(pcVar2[2] == UNK_142e639a2);
        auVar119[3] = -(pcVar2[3] == UNK_142e639a3);
        auVar119[4] = -(pcVar2[4] == UNK_142e639a4);
        auVar119[5] = -(pcVar2[5] == UNK_142e639a5);
        auVar119[6] = -(pcVar2[6] == UNK_142e639a6);
        auVar119[7] = -(pcVar2[7] == UNK_142e639a7);
        auVar119[8] = -(pcVar2[8] == UNK_142e639a8);
        auVar119[9] = -(pcVar2[9] == UNK_142e639a9);
        auVar119[10] = -(pcVar2[10] == UNK_142e639aa);
        auVar119[0xb] = -(pcVar2[0xb] == UNK_142e639ab);
        auVar119[0xc] = -(pcVar2[0xc] == UNK_142e639ac);
        auVar119[0xd] = -(pcVar2[0xd] == UNK_142e639ad);
        auVar119[0xe] = -(pcVar2[0xe] == UNK_142e639ae);
        auVar119[0xf] = -(pcVar2[0xf] == UNK_142e639af);
        if ((ushort)((ushort)(SUB161(auVar119 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar119 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar119 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar119 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar119 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar119 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar119 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar119 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar119 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar119 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar119 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar119 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar119 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar119 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar119 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar119[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cc0f2;
          goto LAB_1405cc108;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar103[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar103[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar103[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar103[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar103[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar103[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar103[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar103[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar103[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar103[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar103[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar103[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar103[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar103[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar103[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar103[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar103 >> 7,0) & 1) != 0 || (SUB161(auVar103 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar103 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar103 >> 0x1f,0) & 1) != 0) || (SUB161(auVar103 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar103 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar103 >> 0x37,0) & 1) != 0) || (SUB161(auVar103 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar103 >> 0x47,0) & 1) != 0) || (SUB161(auVar103 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar103 >> 0x57,0) & 1) != 0) || (SUB161(auVar103 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar103 >> 0x67,0) & 1) != 0) || (SUB161(auVar103 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar103 >> 0x77,0) & 1) != 0) || auVar103[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cc0f2:
  pdb_140239fa0(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cc108:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0x4cf20624ca580fcb;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    in_XMM1_Ba = (char)iVar6;
    in_XMM1_Bb = (char)((uint)iVar6 >> 8);
    in_XMM1_Bc = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bd = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    in_XMM1_Be = (char)iVar6;
    in_XMM1_Bf = (char)((uint)iVar6 >> 8);
    in_XMM1_Bg = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bh = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    in_XMM1_Bi = (char)iVar6;
    in_XMM1_Bj = (char)((uint)iVar6 >> 8);
    in_XMM1_Bk = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bl = (char)((uint)iVar6 >> 0x18);
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    in_XMM1_Bm = (char)iVar6;
    in_XMM1_Bn = (char)((uint)iVar6 >> 8);
    in_XMM1_Bo = (char)((uint)iVar6 >> 0x10);
    in_XMM1_Bp = (char)((uint)iVar6 >> 0x18);
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar120[0] = -(*pcVar1 == DAT_142e63b50);
      auVar120[1] = -(pcVar1[1] == DAT_142e63b50._1_1_);
      auVar120[2] = -(pcVar1[2] == DAT_142e63b50._2_1_);
      auVar120[3] = -(pcVar1[3] == DAT_142e63b50._3_1_);
      auVar120[4] = -(pcVar1[4] == DAT_142e63b50._4_1_);
      auVar120[5] = -(pcVar1[5] == DAT_142e63b50._5_1_);
      auVar120[6] = -(pcVar1[6] == DAT_142e63b50._6_1_);
      auVar120[7] = -(pcVar1[7] == DAT_142e63b50._7_1_);
      auVar120[8] = -(pcVar1[8] == DAT_142e63b50._8_1_);
      auVar120[9] = -(pcVar1[9] == DAT_142e63b50._9_1_);
      auVar120[10] = -(pcVar1[10] == DAT_142e63b50._10_1_);
      auVar120[0xb] = -(pcVar1[0xb] == DAT_142e63b50._11_1_);
      auVar120[0xc] = -(pcVar1[0xc] == DAT_142e63b50._12_1_);
      auVar120[0xd] = -(pcVar1[0xd] == DAT_142e63b50._13_1_);
      auVar120[0xe] = -(pcVar1[0xe] == DAT_142e63b50._14_1_);
      auVar120[0xf] = -(pcVar1[0xf] == DAT_142e63b50._15_1_);
      uVar95 = (ushort)(SUB161(auVar120 >> 7,0) & 1) | (ushort)(SUB161(auVar120 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar120 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar120 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar120 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar120 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar120 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar120 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar120 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar120 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar120 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar120 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar120 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar120 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar120 >> 0x77,0) & 1) << 0xe | (ushort)(auVar120[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar121[0] = -(*pcVar2 == DAT_142e63b60);
        auVar121[1] = -(pcVar2[1] == UNK_142e63b61);
        auVar121[2] = -(pcVar2[2] == UNK_142e63b62);
        auVar121[3] = -(pcVar2[3] == UNK_142e63b63);
        auVar121[4] = -(pcVar2[4] == UNK_142e63b64);
        auVar121[5] = -(pcVar2[5] == UNK_142e63b65);
        auVar121[6] = -(pcVar2[6] == UNK_142e63b66);
        auVar121[7] = -(pcVar2[7] == UNK_142e63b67);
        auVar121[8] = -(pcVar2[8] == UNK_142e63b68);
        auVar121[9] = -(pcVar2[9] == UNK_142e63b69);
        auVar121[10] = -(pcVar2[10] == UNK_142e63b6a);
        auVar121[0xb] = -(pcVar2[0xb] == UNK_142e63b6b);
        auVar121[0xc] = -(pcVar2[0xc] == UNK_142e63b6c);
        auVar121[0xd] = -(pcVar2[0xd] == UNK_142e63b6d);
        auVar121[0xe] = -(pcVar2[0xe] == UNK_142e63b6e);
        auVar121[0xf] = -(pcVar2[0xf] == UNK_142e63b6f);
        if ((ushort)((ushort)(SUB161(auVar121 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar121 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar121 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar121 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar121 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar121 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar121 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar121 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar121 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar121 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar121 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar121 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar121 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar121 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar121 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar121[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cc1e2;
          goto LAB_1405cc1f8;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar104[0] = -(*pcVar1 == in_XMM1_Ba);
      auVar104[1] = -(pcVar1[1] == in_XMM1_Bb);
      auVar104[2] = -(pcVar1[2] == in_XMM1_Bc);
      auVar104[3] = -(pcVar1[3] == in_XMM1_Bd);
      auVar104[4] = -(pcVar1[4] == in_XMM1_Be);
      auVar104[5] = -(pcVar1[5] == in_XMM1_Bf);
      auVar104[6] = -(pcVar1[6] == in_XMM1_Bg);
      auVar104[7] = -(pcVar1[7] == in_XMM1_Bh);
      auVar104[8] = -(pcVar1[8] == in_XMM1_Bi);
      auVar104[9] = -(pcVar1[9] == in_XMM1_Bj);
      auVar104[10] = -(pcVar1[10] == in_XMM1_Bk);
      auVar104[0xb] = -(pcVar1[0xb] == in_XMM1_Bl);
      auVar104[0xc] = -(pcVar1[0xc] == in_XMM1_Bm);
      auVar104[0xd] = -(pcVar1[0xd] == in_XMM1_Bn);
      auVar104[0xe] = -(pcVar1[0xe] == in_XMM1_Bo);
      auVar104[0xf] = -(pcVar1[0xf] == in_XMM1_Bp);
      if ((((((((((((((((SUB161(auVar104 >> 7,0) & 1) != 0 || (SUB161(auVar104 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar104 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar104 >> 0x1f,0) & 1) != 0) || (SUB161(auVar104 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar104 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar104 >> 0x37,0) & 1) != 0) || (SUB161(auVar104 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar104 >> 0x47,0) & 1) != 0) || (SUB161(auVar104 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar104 >> 0x57,0) & 1) != 0) || (SUB161(auVar104 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar104 >> 0x67,0) & 1) != 0) || (SUB161(auVar104 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar104 >> 0x77,0) & 1) != 0) || auVar104[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cc1e2:
  pdb_14025f190(param_2);
  if (*(longlong *)(param_2 + 0x88) != 0) {
LAB_1405cc1f8:
    lVar90 = *(longlong *)(param_2 + 0x70);
    uVar88 = 0xf3e5830ebfacdb3c;
    lVar93 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar9 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar88 = uVar88 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar90 + uVar88);
      auVar122[0] = -(*pcVar1 == DAT_142e33cf0);
      auVar122[1] = -(pcVar1[1] == DAT_142e33cf0._1_1_);
      auVar122[2] = -(pcVar1[2] == DAT_142e33cf0._2_1_);
      auVar122[3] = -(pcVar1[3] == DAT_142e33cf0._3_1_);
      auVar122[4] = -(pcVar1[4] == DAT_142e33cf0._4_1_);
      auVar122[5] = -(pcVar1[5] == DAT_142e33cf0._5_1_);
      auVar122[6] = -(pcVar1[6] == DAT_142e33cf0._6_1_);
      auVar122[7] = -(pcVar1[7] == DAT_142e33cf0._7_1_);
      auVar122[8] = -(pcVar1[8] == DAT_142e33cf0._8_1_);
      auVar122[9] = -(pcVar1[9] == DAT_142e33cf0._9_1_);
      auVar122[10] = -(pcVar1[10] == DAT_142e33cf0._10_1_);
      auVar122[0xb] = -(pcVar1[0xb] == DAT_142e33cf0._11_1_);
      auVar122[0xc] = -(pcVar1[0xc] == DAT_142e33cf0._12_1_);
      auVar122[0xd] = -(pcVar1[0xd] == DAT_142e33cf0._13_1_);
      auVar122[0xe] = -(pcVar1[0xe] == DAT_142e33cf0._14_1_);
      auVar122[0xf] = -(pcVar1[0xf] == DAT_142e33cf0._15_1_);
      uVar95 = (ushort)(SUB161(auVar122 >> 7,0) & 1) | (ushort)(SUB161(auVar122 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar122 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar122 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar122 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar122 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar122 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar122 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar122 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar122 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar122 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar122 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar122 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar122 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar122 >> 0x77,0) & 1) << 0xe | (ushort)(auVar122[0xf] >> 7) << 0xf
      ;
      uVar94 = (uint)uVar95;
      while (uVar95 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar94; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar96 = uVar4 + uVar88 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar90 + -0x18 + uVar96 * -0x18);
        auVar123[0] = -(*pcVar2 == DAT_142e33d00);
        auVar123[1] = -(pcVar2[1] == UNK_142e33d01);
        auVar123[2] = -(pcVar2[2] == UNK_142e33d02);
        auVar123[3] = -(pcVar2[3] == UNK_142e33d03);
        auVar123[4] = -(pcVar2[4] == UNK_142e33d04);
        auVar123[5] = -(pcVar2[5] == UNK_142e33d05);
        auVar123[6] = -(pcVar2[6] == UNK_142e33d06);
        auVar123[7] = -(pcVar2[7] == UNK_142e33d07);
        auVar123[8] = -(pcVar2[8] == UNK_142e33d08);
        auVar123[9] = -(pcVar2[9] == UNK_142e33d09);
        auVar123[10] = -(pcVar2[10] == UNK_142e33d0a);
        auVar123[0xb] = -(pcVar2[0xb] == UNK_142e33d0b);
        auVar123[0xc] = -(pcVar2[0xc] == UNK_142e33d0c);
        auVar123[0xd] = -(pcVar2[0xd] == UNK_142e33d0d);
        auVar123[0xe] = -(pcVar2[0xe] == UNK_142e33d0e);
        auVar123[0xf] = -(pcVar2[0xf] == UNK_142e33d0f);
        if ((ushort)((ushort)(SUB161(auVar123 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar123 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar123 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar123 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar123 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar123 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar123 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar123 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar123 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar123 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar123 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar123 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar123 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar123 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar123 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar123[0xf] >> 7) << 0xf) == 0xffff) {
          uVar88 = *(ulonglong *)(lVar90 + uVar96 * -0x18 + -8);
          if (((*(ulonglong *)(param_2 + 0x210) <= uVar88) ||
              (uVar88 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar88 * 8), uVar88 == 0))
             || (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar88 * 0x40) == 0))
          goto LAB_1405cc2d2;
          goto LAB_1405cc2da;
        }
        uVar95 = (ushort)(uVar94 - 1) & (ushort)uVar94;
        uVar94 = CONCAT22((short)(uVar94 - 1 >> 0x10),uVar95);
      }
      auVar105[0] = -(*pcVar1 == (char)iVar6);
      auVar105[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
      auVar105[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
      auVar105[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
      auVar105[4] = -(pcVar1[4] == (char)iVar7);
      auVar105[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
      auVar105[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
      auVar105[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
      auVar105[8] = -(pcVar1[8] == (char)iVar8);
      auVar105[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
      auVar105[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
      auVar105[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
      auVar105[0xc] = -(pcVar1[0xc] == (char)iVar9);
      auVar105[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
      auVar105[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
      auVar105[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar105 >> 7,0) & 1) != 0 || (SUB161(auVar105 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar105 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar105 >> 0x1f,0) & 1) != 0) || (SUB161(auVar105 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar105 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar105 >> 0x37,0) & 1) != 0) || (SUB161(auVar105 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar105 >> 0x47,0) & 1) != 0) || (SUB161(auVar105 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar105 >> 0x57,0) & 1) != 0) || (SUB161(auVar105 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar105 >> 0x67,0) & 1) != 0) || (SUB161(auVar105 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar105 >> 0x77,0) & 1) != 0) || auVar105[0xf] < '\0') break;
      uVar88 = uVar88 + lVar93 + 0x10;
      lVar93 = lVar93 + 0x10;
    }
  }
LAB_1405cc2d2:
  pdb_140257390(param_2);
LAB_1405cc2da:
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c6 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c3 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  uStack_3c0 = 0;
  uStack_3bf = 0;
  uStack_3be = 0;
  uStack_3bd = 0;
  uStack_3bc = 0;
  uStack_3bb = 0;
  uStack_3ba = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 8;
  uStack_3b7 = 0;
  uStack_3b6 = 0;
  uStack_3b5 = 0;
  uStack_3b4 = 0;
  uStack_3b3 = 0;
  uStack_3b2 = 0;
  uStack_3b1 = 0;
  uStack_3b0 = 0;
  puVar89 = &uStack_3c8;
  uVar85 = pdb_14027c570(param_2);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_108 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar86 = lStack_108;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_108 + 1;
  uVar14 = _UNK_142f70768;
  uVar87 = _DAT_142f70760;
  uVar96 = _UNK_142f70758;
  uVar88 = _DAT_142f70750;
  uStack_118 = _DAT_142f70760;
  uStack_110 = _UNK_142f70768;
  uStack_128 = _DAT_142f70750;
  uStack_120 = _UNK_142f70758;
  puStack_100 = puVar89;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_5d8 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lStack_5d8 = pdb_140f4fd10();
    *plVar86 = lStack_5d8;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_5d8 + 1;
  uStack_5e8 = uVar87;
  uStack_5e0 = uVar14;
  uStack_5f8 = uVar88;
  uStack_5f0 = uVar96;
  puStack_5d0 = puVar89;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_3a8 = (undefined1)lStack_108;
  uStack_3a7 = (undefined1)((ulonglong)lStack_108 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lStack_108 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lStack_108 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lStack_108 >> 0x20);
  uStack_3a0 = SUB81(puStack_100,0);
  uStack_39f = (undefined1)((ulonglong)puStack_100 >> 8);
  uStack_39e = (undefined1)((ulonglong)puStack_100 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puStack_100 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puStack_100 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puStack_100 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puStack_100 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puStack_100 >> 0x38);
  uStack_3b8 = (undefined1)uStack_118;
  uStack_3b7 = (undefined1)((ulonglong)uStack_118 >> 8);
  uStack_3b6 = (undefined1)((ulonglong)uStack_118 >> 0x10);
  uStack_3b5 = (undefined1)((ulonglong)uStack_118 >> 0x18);
  uStack_3b4 = (undefined1)((ulonglong)uStack_118 >> 0x20);
  uStack_3b3 = (undefined1)((ulonglong)uStack_118 >> 0x28);
  uStack_3b2 = (undefined1)((ulonglong)uStack_118 >> 0x30);
  uStack_3b1 = (undefined1)((ulonglong)uStack_118 >> 0x38);
  uStack_3b0 = uStack_110;
  uStack_3c8 = (undefined1)uStack_128;
  uStack_3c7 = (undefined1)(uStack_128 >> 8);
  uStack_3c6 = (undefined1)(uStack_128 >> 0x10);
  uStack_3c5 = (undefined1)(uStack_128 >> 0x18);
  uStack_3c4 = (undefined1)(uStack_128 >> 0x20);
  uStack_3c3 = (undefined1)(uStack_128 >> 0x28);
  uStack_3c2 = (undefined1)(uStack_128 >> 0x30);
  uStack_3c1 = (undefined1)(uStack_128 >> 0x38);
  uStack_3c0 = (undefined1)uStack_120;
  uStack_3bf = (undefined1)(uStack_120 >> 8);
  uStack_3be = (undefined1)(uStack_120 >> 0x10);
  uStack_3bd = (undefined1)(uStack_120 >> 0x18);
  uStack_3bc = (undefined1)(uStack_120 >> 0x20);
  uStack_3bb = (undefined1)(uStack_120 >> 0x28);
  uStack_3ba = (undefined1)(uStack_120 >> 0x30);
  uStack_3b9 = (undefined1)(uStack_120 >> 0x38);
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_2a8 = 0;
  uStack_398 = (undefined1)uStack_5f8;
  uStack_397 = (undefined1)(uStack_5f8 >> 8);
  uStack_396 = (undefined1)(uStack_5f8 >> 0x10);
  uStack_395 = (undefined1)(uStack_5f8 >> 0x18);
  uStack_394 = (undefined1)(uStack_5f8 >> 0x20);
  uStack_393 = (undefined1)(uStack_5f8 >> 0x28);
  uStack_392 = (undefined1)(uStack_5f8 >> 0x30);
  uStack_391 = (undefined1)(uStack_5f8 >> 0x38);
  uStack_390 = (undefined4)uStack_5f0;
  uStack_38c = (undefined4)(uStack_5f0 >> 0x20);
  uStack_388 = (undefined1)uStack_5e8;
  uStack_387 = uStack_5e8._1_1_;
  uStack_386 = uStack_5e8._2_1_;
  uStack_385 = uStack_5e8._3_1_;
  uStack_384 = uStack_5e8._4_1_;
  uStack_383 = uStack_5e8._5_1_;
  uStack_382 = uStack_5e8._6_1_;
  uStack_381 = uStack_5e8._7_1_;
  uStack_380 = (undefined1)uStack_5e0;
  uStack_37f = uStack_5e0._1_1_;
  uStack_37e = uStack_5e0._2_1_;
  uStack_37d = uStack_5e0._3_1_;
  uStack_37c = uStack_5e0._4_1_;
  uStack_37b = uStack_5e0._5_1_;
  uStack_37a = uStack_5e0._6_1_;
  uStack_379 = uStack_5e0._7_1_;
  uStack_378 = (undefined4)lStack_5d8;
  uStack_374 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
  uStack_370 = SUB84(puStack_5d0,0);
  uStack_36c = (undefined4)((ulonglong)puStack_5d0 >> 0x20);
  uStack_368 = (undefined1)uVar88;
  uVar51 = uStack_368;
  uStack_367 = (undefined1)(uVar88 >> 8);
  uVar52 = uStack_367;
  uStack_366 = (undefined1)(uVar88 >> 0x10);
  uVar53 = uStack_366;
  uStack_365 = (undefined1)(uVar88 >> 0x18);
  uVar54 = uStack_365;
  uStack_364 = (undefined1)(uVar88 >> 0x20);
  uVar55 = uStack_364;
  uStack_363 = (undefined1)(uVar88 >> 0x28);
  uVar56 = uStack_363;
  uStack_362 = (undefined1)(uVar88 >> 0x30);
  uVar57 = uStack_362;
  uStack_361 = (undefined1)(uVar88 >> 0x38);
  uVar58 = uStack_361;
  uStack_360 = (undefined1)uVar96;
  uVar59 = uStack_360;
  uStack_35f = (undefined1)(uVar96 >> 8);
  uVar60 = uStack_35f;
  uStack_35e = (undefined1)(uVar96 >> 0x10);
  uVar61 = uStack_35e;
  uStack_35d = (undefined1)(uVar96 >> 0x18);
  uVar62 = uStack_35d;
  uStack_35c = (undefined1)(uVar96 >> 0x20);
  uVar63 = uStack_35c;
  uStack_35b = (undefined1)(uVar96 >> 0x28);
  uVar64 = uStack_35b;
  uStack_35a = (undefined1)(uVar96 >> 0x30);
  uVar65 = uStack_35a;
  uStack_359 = (undefined1)(uVar96 >> 0x38);
  uVar66 = uStack_359;
  uStack_358 = (undefined1)uVar87;
  uVar67 = uStack_358;
  uStack_357 = (undefined1)((ulonglong)uVar87 >> 8);
  uVar68 = uStack_357;
  uStack_356 = (undefined1)((ulonglong)uVar87 >> 0x10);
  uVar69 = uStack_356;
  uStack_355 = (undefined1)((ulonglong)uVar87 >> 0x18);
  uVar70 = uStack_355;
  uStack_354 = (undefined1)((ulonglong)uVar87 >> 0x20);
  uVar71 = uStack_354;
  uStack_353 = (undefined1)((ulonglong)uVar87 >> 0x28);
  uVar72 = uStack_353;
  uStack_352 = (undefined1)((ulonglong)uVar87 >> 0x30);
  uVar73 = uStack_352;
  uStack_351 = (undefined1)((ulonglong)uVar87 >> 0x38);
  uVar74 = uStack_351;
  uStack_350 = (undefined1)uVar14;
  uVar75 = uStack_350;
  uStack_34f = (undefined1)(uVar14 >> 8);
  uVar76 = uStack_34f;
  uStack_34e = (undefined1)(uVar14 >> 0x10);
  uVar77 = uStack_34e;
  uStack_34d = (undefined1)(uVar14 >> 0x18);
  uVar78 = uStack_34d;
  uStack_34c = (undefined1)(uVar14 >> 0x20);
  uVar79 = uStack_34c;
  uStack_34b = (undefined1)(uVar14 >> 0x28);
  uVar80 = uStack_34b;
  uStack_34a = (undefined1)(uVar14 >> 0x30);
  uVar81 = uStack_34a;
  uStack_349 = (undefined1)(uVar14 >> 0x38);
  uVar82 = uStack_349;
  uStack_348 = (undefined1)lVar90;
  uStack_347 = (undefined1)((ulonglong)lVar90 >> 8);
  uStack_346 = (undefined1)((ulonglong)lVar90 >> 0x10);
  uStack_345 = (undefined1)((ulonglong)lVar90 >> 0x18);
  uStack_344 = (undefined1)((ulonglong)lVar90 >> 0x20);
  uStack_343 = (undefined1)((ulonglong)lVar90 >> 0x28);
  uStack_342 = (undefined1)((ulonglong)lVar90 >> 0x30);
  uStack_341 = (undefined1)((ulonglong)lVar90 >> 0x38);
  uStack_340 = SUB81(puVar89,0);
  uStack_33f = (undefined1)((ulonglong)puVar89 >> 8);
  uStack_33e = (undefined1)((ulonglong)puVar89 >> 0x10);
  uStack_33d = (undefined1)((ulonglong)puVar89 >> 0x18);
  uStack_33c = (undefined1)((ulonglong)puVar89 >> 0x20);
  uStack_33b = (undefined1)((ulonglong)puVar89 >> 0x28);
  uStack_33a = (undefined1)((ulonglong)puVar89 >> 0x30);
  uStack_339 = (undefined1)((ulonglong)puVar89 >> 0x38);
  uStack_218 = uStack_218 & 0xffffffffffffff00;
  uVar85 = pdb_140282500(uVar85,&uStack_3c8);
  puVar89 = &uStack_3c8;
  pdb_1405cacc0(puVar89);
  uVar85 = pdb_14028eb10(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c6 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c3 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  uStack_3c0 = 8;
  uStack_3bf = 0;
  uStack_3be = 0;
  uStack_3bd = 0;
  uStack_3bc = 0;
  uStack_3bb = 0;
  uStack_3ba = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 0;
  uStack_3b7 = 0;
  uStack_3b6 = 0;
  uStack_3b5 = 0;
  uStack_3b4 = 0;
  uStack_3b3 = 0;
  uStack_3b2 = 0;
  uStack_3b1 = 0;
  uStack_3b0 = uVar88;
  uStack_3a4 = (undefined4)(uVar96 >> 0x20);
  uVar19 = uStack_3a4;
  uStack_390 = (undefined4)lVar90;
  uStack_38c = (undefined4)((ulonglong)lVar90 >> 0x20);
  uStack_388 = SUB81(puVar89,0);
  uStack_387 = (undefined1)((ulonglong)puVar89 >> 8);
  uStack_386 = (undefined1)((ulonglong)puVar89 >> 0x10);
  uStack_385 = (undefined1)((ulonglong)puVar89 >> 0x18);
  uStack_384 = (undefined1)((ulonglong)puVar89 >> 0x20);
  uStack_383 = (undefined1)((ulonglong)puVar89 >> 0x28);
  uStack_382 = (undefined1)((ulonglong)puVar89 >> 0x30);
  uStack_381 = (undefined1)((ulonglong)puVar89 >> 0x38);
  uStack_380 = 0;
  puVar89 = &uStack_3c8;
  uStack_3a8 = uVar59;
  uStack_3a7 = uVar60;
  uStack_3a6 = uVar61;
  uStack_3a5 = uVar62;
  uStack_3a0 = uVar67;
  uStack_39f = uVar68;
  uStack_39e = uVar69;
  uStack_39d = uVar70;
  uStack_39c = uVar71;
  uStack_39b = uVar72;
  uStack_39a = uVar73;
  uStack_399 = uVar74;
  uStack_398 = uVar75;
  uStack_397 = uVar76;
  uStack_396 = uVar77;
  uStack_395 = uVar78;
  uStack_394 = uVar79;
  uStack_393 = uVar80;
  uStack_392 = uVar81;
  uStack_391 = uVar82;
  uVar85 = pdb_14029b2d0(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_5d8 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lStack_5d8 = pdb_140f4fd10();
    *plVar86 = lStack_5d8;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_5d8 + 1;
  uStack_5e8 = uVar87;
  uStack_5e0 = uVar14;
  uStack_5f8 = uVar88;
  uStack_5f0 = uVar96;
  puStack_5d0 = puVar89;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_390 = (undefined4)lStack_5d8;
  uStack_38c = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
  uStack_388 = SUB81(puStack_5d0,0);
  uStack_387 = (undefined1)((ulonglong)puStack_5d0 >> 8);
  uStack_386 = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
  uStack_385 = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
  uStack_384 = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
  uStack_383 = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
  uStack_382 = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
  uStack_381 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
  uStack_3a0 = (undefined1)uStack_5e8;
  uStack_39f = uStack_5e8._1_1_;
  uStack_39e = uStack_5e8._2_1_;
  uStack_39d = uStack_5e8._3_1_;
  uStack_39c = uStack_5e8._4_1_;
  uStack_39b = uStack_5e8._5_1_;
  uStack_39a = uStack_5e8._6_1_;
  uStack_399 = uStack_5e8._7_1_;
  uStack_398 = (undefined1)uStack_5e0;
  uStack_397 = uStack_5e0._1_1_;
  uStack_396 = uStack_5e0._2_1_;
  uStack_395 = uStack_5e0._3_1_;
  uStack_394 = uStack_5e0._4_1_;
  uStack_393 = uStack_5e0._5_1_;
  uStack_392 = uStack_5e0._6_1_;
  uStack_391 = uStack_5e0._7_1_;
  uStack_3b0 = uStack_5f8;
  uStack_3a8 = (undefined1)uStack_5f0;
  uStack_3a7 = (undefined1)(uStack_5f0 >> 8);
  uStack_3a6 = (undefined1)(uStack_5f0 >> 0x10);
  uStack_3a5 = (undefined1)(uStack_5f0 >> 0x18);
  uStack_3a4 = (undefined4)(uStack_5f0 >> 0x20);
  uStack_378 = (undefined4)uVar96;
  uVar48 = uStack_378;
  uStack_370 = (undefined4)uVar87;
  uVar49 = uStack_370;
  uStack_36c = (undefined4)((ulonglong)uVar87 >> 0x20);
  uVar50 = uStack_36c;
  uStack_360 = (undefined1)lVar90;
  uStack_35f = (undefined1)((ulonglong)lVar90 >> 8);
  uStack_35e = (undefined1)((ulonglong)lVar90 >> 0x10);
  uStack_35d = (undefined1)((ulonglong)lVar90 >> 0x18);
  uStack_35c = (undefined1)((ulonglong)lVar90 >> 0x20);
  uStack_35b = (undefined1)((ulonglong)lVar90 >> 0x28);
  uStack_35a = (undefined1)((ulonglong)lVar90 >> 0x30);
  uStack_359 = (undefined1)((ulonglong)lVar90 >> 0x38);
  uStack_358 = SUB81(puVar89,0);
  uStack_357 = (undefined1)((ulonglong)puVar89 >> 8);
  uStack_356 = (undefined1)((ulonglong)puVar89 >> 0x10);
  uStack_355 = (undefined1)((ulonglong)puVar89 >> 0x18);
  uStack_354 = (undefined1)((ulonglong)puVar89 >> 0x20);
  uStack_353 = (undefined1)((ulonglong)puVar89 >> 0x28);
  uStack_352 = (undefined1)((ulonglong)puVar89 >> 0x30);
  uStack_351 = (undefined1)((ulonglong)puVar89 >> 0x38);
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c6 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c3 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  uStack_3c0 = 0x10;
  uStack_3bf = 0;
  uStack_3be = 0;
  uStack_3bd = 0;
  uStack_3bc = 0;
  uStack_3bb = 0;
  uStack_3ba = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 0;
  uStack_3b7 = 0;
  uStack_3b6 = 0;
  uStack_3b5 = 0;
  uStack_3b4 = 0;
  uStack_3b3 = 0;
  uStack_3b2 = 0;
  uStack_3b1 = 0;
  puVar89 = &uStack_3c8;
  uStack_380 = uVar51;
  uStack_37f = uVar52;
  uStack_37e = uVar53;
  uStack_37d = uVar54;
  uStack_37c = uVar55;
  uStack_37b = uVar56;
  uStack_37a = uVar57;
  uStack_379 = uVar58;
  uStack_374 = uVar19;
  uStack_368 = uVar75;
  uStack_367 = uVar76;
  uStack_366 = uVar77;
  uStack_365 = uVar78;
  uStack_364 = uVar79;
  uStack_363 = uVar80;
  uStack_362 = uVar81;
  uStack_361 = uVar82;
  uVar85 = pdb_140273850(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_3b0 = uVar14;
  uStack_3a8 = (undefined1)lVar90;
  uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
  uStack_3a0 = SUB81(puVar89,0);
  uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
  uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
  uStack_3c8 = uVar51;
  uStack_3c7 = uVar52;
  uStack_3c6 = uVar53;
  uStack_3c5 = uVar54;
  uStack_3c4 = uVar55;
  uStack_3c3 = uVar56;
  uStack_3c2 = uVar57;
  uStack_3c1 = uVar58;
  uStack_3c0 = uVar59;
  uStack_3bf = uVar60;
  uStack_3be = uVar61;
  uStack_3bd = uVar62;
  uStack_3bc = uVar63;
  uStack_3bb = uVar64;
  uStack_3ba = uVar65;
  uStack_3b9 = uVar66;
  uStack_3b8 = uVar67;
  uStack_3b7 = uVar68;
  uStack_3b6 = uVar69;
  uStack_3b5 = uVar70;
  uStack_3b4 = uVar71;
  uStack_3b3 = uVar72;
  uStack_3b2 = uVar73;
  uStack_3b1 = uVar74;
  uVar85 = pdb_140299ba0(uVar85,&uStack_3c8);
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c6 = 0;
  uStack_3c5 = 0;
  uStack_3b8 = 0;
  uStack_3b7 = 0;
  uStack_3b6 = 0;
  uStack_3b5 = 0;
  uVar85 = pdb_14028a910(uVar85,&uStack_3c8);
  uVar84 = pdb_14007fac0();
  uVar85 = pdb_1402716b0(uVar85,uVar84);
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c6 = 0;
  uStack_3c5 = 0;
  uStack_3c0 = 0;
  uStack_3bf = 0;
  uStack_3be = 0;
  uStack_3bd = 0;
  uStack_3bc = 0;
  uStack_3bb = 0;
  uStack_3ba = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 0;
  uStack_3b7 = 0;
  uStack_3b6 = 0;
  uVar85 = pdb_1402a12c0(uVar85,&uStack_3c8);
  lVar90 = 3;
  uVar85 = pdb_1402886f0(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_418 = *plVar86;
    lVar90 = plVar86[1];
  }
  else {
    lStack_418 = pdb_140f4fd10();
    *plVar86 = lStack_418;
    plVar86[1] = lVar90;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_418 + 1;
  uStack_428 = uVar87;
  uStack_420 = uVar14;
  uStack_438 = uVar88;
  uStack_430 = uVar96;
  puStack_410 = (undefined1 *)lVar90;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_108 = *plVar86;
    lVar90 = plVar86[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar86 = lStack_108;
    plVar86[1] = lVar90;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_108 + 1;
  uStack_118 = uVar87;
  uStack_110 = uVar14;
  uStack_128 = uVar88;
  uStack_120 = uVar96;
  puStack_100 = (undefined1 *)lVar90;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_5d8 = *plVar86;
    lVar90 = plVar86[1];
  }
  else {
    lStack_5d8 = pdb_140f4fd10();
    *plVar86 = lStack_5d8;
    plVar86[1] = lVar90;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_5d8 + 1;
  uStack_5e8 = uVar87;
  uStack_5e0 = uVar14;
  uStack_5f8 = uVar88;
  uStack_5f0 = uVar96;
  puStack_5d0 = (undefined1 *)lVar90;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_318 = *plVar86;
    lVar90 = plVar86[1];
  }
  else {
    lStack_318 = pdb_140f4fd10();
    *plVar86 = lStack_318;
    plVar86[1] = lVar90;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_318 + 1;
  uStack_3a8 = (undefined1)lStack_418;
  uStack_3a7 = (undefined1)((ulonglong)lStack_418 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lStack_418 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lStack_418 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lStack_418 >> 0x20);
  uStack_3a0 = SUB81(puStack_410,0);
  uStack_39f = (undefined1)((ulonglong)puStack_410 >> 8);
  uStack_39e = (undefined1)((ulonglong)puStack_410 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puStack_410 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puStack_410 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puStack_410 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puStack_410 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puStack_410 >> 0x38);
  uStack_3b8 = (undefined1)uStack_428;
  uStack_3b7 = (undefined1)((ulonglong)uStack_428 >> 8);
  uStack_3b6 = (undefined1)((ulonglong)uStack_428 >> 0x10);
  uStack_3b5 = (undefined1)((ulonglong)uStack_428 >> 0x18);
  uStack_3b4 = (undefined1)((ulonglong)uStack_428 >> 0x20);
  uStack_3b3 = (undefined1)((ulonglong)uStack_428 >> 0x28);
  uStack_3b2 = (undefined1)((ulonglong)uStack_428 >> 0x30);
  uStack_3b1 = (undefined1)((ulonglong)uStack_428 >> 0x38);
  uStack_3b0 = uStack_420;
  uStack_3c8 = (undefined1)uStack_438;
  uStack_3c7 = (undefined1)(uStack_438 >> 8);
  uStack_3c6 = (undefined1)(uStack_438 >> 0x10);
  uStack_3c5 = (undefined1)(uStack_438 >> 0x18);
  uStack_3c4 = (undefined1)(uStack_438 >> 0x20);
  uStack_3c3 = (undefined1)(uStack_438 >> 0x28);
  uStack_3c2 = (undefined1)(uStack_438 >> 0x30);
  uStack_3c1 = (undefined1)(uStack_438 >> 0x38);
  uStack_3c0 = (undefined1)uStack_430;
  uStack_3bf = (undefined1)(uStack_430 >> 8);
  uStack_3be = (undefined1)(uStack_430 >> 0x10);
  uStack_3bd = (undefined1)(uStack_430 >> 0x18);
  uStack_3bc = (undefined1)(uStack_430 >> 0x20);
  uStack_3bb = (undefined1)(uStack_430 >> 0x28);
  uStack_3ba = (undefined1)(uStack_430 >> 0x30);
  uStack_3b9 = (undefined1)(uStack_430 >> 0x38);
  uStack_398 = (undefined1)uStack_128;
  uStack_397 = (undefined1)(uStack_128 >> 8);
  uStack_396 = (undefined1)(uStack_128 >> 0x10);
  uStack_395 = (undefined1)(uStack_128 >> 0x18);
  uStack_394 = (undefined1)(uStack_128 >> 0x20);
  uStack_393 = (undefined1)(uStack_128 >> 0x28);
  uStack_392 = (undefined1)(uStack_128 >> 0x30);
  uStack_391 = (undefined1)(uStack_128 >> 0x38);
  uStack_390 = (undefined4)uStack_120;
  uStack_38c = (undefined4)(uStack_120 >> 0x20);
  uStack_388 = (undefined1)uStack_118;
  uStack_387 = (undefined1)((ulonglong)uStack_118 >> 8);
  uStack_386 = (undefined1)((ulonglong)uStack_118 >> 0x10);
  uStack_385 = (undefined1)((ulonglong)uStack_118 >> 0x18);
  uStack_384 = (undefined1)((ulonglong)uStack_118 >> 0x20);
  uStack_383 = (undefined1)((ulonglong)uStack_118 >> 0x28);
  uStack_382 = (undefined1)((ulonglong)uStack_118 >> 0x30);
  uStack_381 = (undefined1)((ulonglong)uStack_118 >> 0x38);
  uStack_380 = (undefined1)uStack_110;
  uStack_37f = (undefined1)(uStack_110 >> 8);
  uStack_37e = (undefined1)(uStack_110 >> 0x10);
  uStack_37d = (undefined1)(uStack_110 >> 0x18);
  uStack_37c = (undefined1)(uStack_110 >> 0x20);
  uStack_37b = (undefined1)(uStack_110 >> 0x28);
  uStack_37a = (undefined1)(uStack_110 >> 0x30);
  uStack_379 = (undefined1)(uStack_110 >> 0x38);
  uStack_378 = (undefined4)lStack_108;
  uStack_374 = (undefined4)((ulonglong)lStack_108 >> 0x20);
  uStack_370 = SUB84(puStack_100,0);
  uStack_36c = (undefined4)((ulonglong)puStack_100 >> 0x20);
  uStack_368 = (undefined1)uStack_5f8;
  uStack_367 = (undefined1)(uStack_5f8 >> 8);
  uStack_366 = (undefined1)(uStack_5f8 >> 0x10);
  uStack_365 = (undefined1)(uStack_5f8 >> 0x18);
  uStack_364 = (undefined1)(uStack_5f8 >> 0x20);
  uStack_363 = (undefined1)(uStack_5f8 >> 0x28);
  uStack_362 = (undefined1)(uStack_5f8 >> 0x30);
  uStack_361 = (undefined1)(uStack_5f8 >> 0x38);
  uStack_360 = (undefined1)uStack_5f0;
  uStack_35f = (undefined1)(uStack_5f0 >> 8);
  uStack_35e = (undefined1)(uStack_5f0 >> 0x10);
  uStack_35d = (undefined1)(uStack_5f0 >> 0x18);
  uStack_35c = (undefined1)(uStack_5f0 >> 0x20);
  uStack_35b = (undefined1)(uStack_5f0 >> 0x28);
  uStack_35a = (undefined1)(uStack_5f0 >> 0x30);
  uStack_359 = (undefined1)(uStack_5f0 >> 0x38);
  uStack_358 = (undefined1)uStack_5e8;
  uStack_357 = uStack_5e8._1_1_;
  uStack_356 = uStack_5e8._2_1_;
  uStack_355 = uStack_5e8._3_1_;
  uStack_354 = uStack_5e8._4_1_;
  uStack_353 = uStack_5e8._5_1_;
  uStack_352 = uStack_5e8._6_1_;
  uStack_351 = uStack_5e8._7_1_;
  uStack_350 = (undefined1)uStack_5e0;
  uStack_34f = uStack_5e0._1_1_;
  uStack_34e = uStack_5e0._2_1_;
  uStack_34d = uStack_5e0._3_1_;
  uStack_34c = uStack_5e0._4_1_;
  uStack_34b = uStack_5e0._5_1_;
  uStack_34a = uStack_5e0._6_1_;
  uStack_349 = uStack_5e0._7_1_;
  uStack_348 = (undefined1)lStack_5d8;
  uStack_347 = (undefined1)((ulonglong)lStack_5d8 >> 8);
  uStack_346 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
  uStack_345 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
  uStack_344 = (undefined1)((ulonglong)lStack_5d8 >> 0x20);
  uStack_343 = (undefined1)((ulonglong)lStack_5d8 >> 0x28);
  uStack_342 = (undefined1)((ulonglong)lStack_5d8 >> 0x30);
  uStack_341 = (undefined1)((ulonglong)lStack_5d8 >> 0x38);
  uStack_340 = SUB81(puStack_5d0,0);
  uStack_33f = (undefined1)((ulonglong)puStack_5d0 >> 8);
  uStack_33e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
  uStack_33d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
  uStack_33c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
  uStack_33b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
  uStack_33a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
  uStack_339 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
  uStack_328 = uVar87;
  uStack_320 = uVar14;
  uStack_338 = (undefined4)uVar88;
  uVar84 = uStack_338;
  uStack_334 = (undefined4)(uVar88 >> 0x20);
  uVar83 = uStack_334;
  puVar89 = &uStack_3c8;
  uStack_330 = uVar48;
  uStack_32c = uVar19;
  puStack_310 = (undefined1 *)lVar90;
  uVar85 = pdb_140281a00(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_398 = 0;
  uStack_3b0 = uVar14;
  uStack_3a8 = (undefined1)lVar90;
  uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
  uStack_3a0 = SUB81(puVar89,0);
  uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
  uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
  uStack_3c8 = uVar51;
  uStack_3c7 = uVar52;
  uStack_3c6 = uVar53;
  uStack_3c5 = uVar54;
  uStack_3c4 = uVar55;
  uStack_3c3 = uVar56;
  uStack_3c2 = uVar57;
  uStack_3c1 = uVar58;
  uStack_3c0 = uVar59;
  uStack_3bf = uVar60;
  uStack_3be = uVar61;
  uStack_3bd = uVar62;
  uStack_3bc = uVar63;
  uStack_3bb = uVar64;
  uStack_3ba = uVar65;
  uStack_3b9 = uVar66;
  uStack_3b8 = uVar67;
  uStack_3b7 = uVar68;
  uStack_3b6 = uVar69;
  uStack_3b5 = uVar70;
  uStack_3b4 = uVar71;
  uStack_3b3 = uVar72;
  uStack_3b2 = uVar73;
  uStack_3b1 = uVar74;
  uVar85 = pdb_140275fe0(uVar85,&uStack_3c8);
  uStack_3c0 = 0;
  uStack_3bf = 0;
  uStack_3be = 0;
  uStack_3bd = 0;
  uStack_3bc = 0;
  uStack_3bb = 0;
  uStack_3ba = 0;
  uStack_3b9 = 0;
  uStack_3c8 = 6;
  uStack_3c7 = 0;
  uStack_3c6 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c3 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  puVar89 = &uStack_3c8;
  uVar85 = pdb_140288c40(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_3b0 = uVar14;
  uStack_3a8 = (undefined1)lVar90;
  uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
  uStack_3a0 = SUB81(puVar89,0);
  uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
  uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
  puVar89 = &uStack_3c8;
  uStack_3c8 = uVar51;
  uStack_3c7 = uVar52;
  uStack_3c6 = uVar53;
  uStack_3c5 = uVar54;
  uStack_3c4 = uVar55;
  uStack_3c3 = uVar56;
  uStack_3c2 = uVar57;
  uStack_3c1 = uVar58;
  uStack_3c0 = uVar59;
  uStack_3bf = uVar60;
  uStack_3be = uVar61;
  uStack_3bd = uVar62;
  uStack_3bc = uVar63;
  uStack_3bb = uVar64;
  uStack_3ba = uVar65;
  uStack_3b9 = uVar66;
  uStack_3b8 = uVar67;
  uStack_3b7 = uVar68;
  uStack_3b6 = uVar69;
  uStack_3b5 = uVar70;
  uStack_3b4 = uVar71;
  uStack_3b3 = uVar72;
  uStack_3b2 = uVar73;
  uStack_3b1 = uVar74;
  uVar85 = pdb_140293be0(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_418 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lStack_418 = pdb_140f4fd10();
    *plVar86 = lStack_418;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_418 + 1;
  uStack_428 = uVar87;
  uStack_420 = uVar14;
  uStack_438 = uVar88;
  uStack_430 = uVar96;
  puStack_410 = puVar89;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_108 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar86 = lStack_108;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_108 + 1;
  uStack_118 = uVar87;
  uStack_110 = uVar14;
  uStack_128 = uVar88;
  uStack_120 = uVar96;
  puStack_100 = puVar89;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_5d8 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lStack_5d8 = pdb_140f4fd10();
    *plVar86 = lStack_5d8;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_5d8 + 1;
  uStack_5e8 = uVar87;
  uStack_5e0 = uVar14;
  uStack_5f8 = uVar88;
  uStack_5f0 = uVar96;
  puStack_5d0 = puVar89;
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lStack_318 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lStack_318 = pdb_140f4fd10();
    *plVar86 = lStack_318;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lStack_318 + 1;
  uStack_3a8 = (undefined1)lStack_418;
  uStack_3a7 = (undefined1)((ulonglong)lStack_418 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lStack_418 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lStack_418 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lStack_418 >> 0x20);
  uStack_3a0 = SUB81(puStack_410,0);
  uStack_39f = (undefined1)((ulonglong)puStack_410 >> 8);
  uStack_39e = (undefined1)((ulonglong)puStack_410 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puStack_410 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puStack_410 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puStack_410 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puStack_410 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puStack_410 >> 0x38);
  uStack_3b8 = (undefined1)uStack_428;
  uStack_3b7 = (undefined1)((ulonglong)uStack_428 >> 8);
  uStack_3b6 = (undefined1)((ulonglong)uStack_428 >> 0x10);
  uStack_3b5 = (undefined1)((ulonglong)uStack_428 >> 0x18);
  uStack_3b4 = (undefined1)((ulonglong)uStack_428 >> 0x20);
  uStack_3b3 = (undefined1)((ulonglong)uStack_428 >> 0x28);
  uStack_3b2 = (undefined1)((ulonglong)uStack_428 >> 0x30);
  uStack_3b1 = (undefined1)((ulonglong)uStack_428 >> 0x38);
  uStack_3b0 = uStack_420;
  uStack_3c8 = (undefined1)uStack_438;
  uStack_3c7 = (undefined1)(uStack_438 >> 8);
  uStack_3c6 = (undefined1)(uStack_438 >> 0x10);
  uStack_3c5 = (undefined1)(uStack_438 >> 0x18);
  uStack_3c4 = (undefined1)(uStack_438 >> 0x20);
  uStack_3c3 = (undefined1)(uStack_438 >> 0x28);
  uStack_3c2 = (undefined1)(uStack_438 >> 0x30);
  uStack_3c1 = (undefined1)(uStack_438 >> 0x38);
  uStack_3c0 = (undefined1)uStack_430;
  uStack_3bf = (undefined1)(uStack_430 >> 8);
  uStack_3be = (undefined1)(uStack_430 >> 0x10);
  uStack_3bd = (undefined1)(uStack_430 >> 0x18);
  uStack_3bc = (undefined1)(uStack_430 >> 0x20);
  uStack_3bb = (undefined1)(uStack_430 >> 0x28);
  uStack_3ba = (undefined1)(uStack_430 >> 0x30);
  uStack_3b9 = (undefined1)(uStack_430 >> 0x38);
  uStack_398 = (undefined1)uStack_128;
  uStack_397 = (undefined1)(uStack_128 >> 8);
  uStack_396 = (undefined1)(uStack_128 >> 0x10);
  uStack_395 = (undefined1)(uStack_128 >> 0x18);
  uStack_394 = (undefined1)(uStack_128 >> 0x20);
  uStack_393 = (undefined1)(uStack_128 >> 0x28);
  uStack_392 = (undefined1)(uStack_128 >> 0x30);
  uStack_391 = (undefined1)(uStack_128 >> 0x38);
  uStack_390 = (undefined4)uStack_120;
  uStack_38c = (undefined4)(uStack_120 >> 0x20);
  uStack_388 = (undefined1)uStack_118;
  uStack_387 = (undefined1)((ulonglong)uStack_118 >> 8);
  uStack_386 = (undefined1)((ulonglong)uStack_118 >> 0x10);
  uStack_385 = (undefined1)((ulonglong)uStack_118 >> 0x18);
  uStack_384 = (undefined1)((ulonglong)uStack_118 >> 0x20);
  uStack_383 = (undefined1)((ulonglong)uStack_118 >> 0x28);
  uStack_382 = (undefined1)((ulonglong)uStack_118 >> 0x30);
  uStack_381 = (undefined1)((ulonglong)uStack_118 >> 0x38);
  uStack_380 = (undefined1)uStack_110;
  uStack_37f = (undefined1)(uStack_110 >> 8);
  uStack_37e = (undefined1)(uStack_110 >> 0x10);
  uStack_37d = (undefined1)(uStack_110 >> 0x18);
  uStack_37c = (undefined1)(uStack_110 >> 0x20);
  uStack_37b = (undefined1)(uStack_110 >> 0x28);
  uStack_37a = (undefined1)(uStack_110 >> 0x30);
  uStack_379 = (undefined1)(uStack_110 >> 0x38);
  uStack_378 = (undefined4)lStack_108;
  uStack_374 = (undefined4)((ulonglong)lStack_108 >> 0x20);
  uStack_370 = SUB84(puStack_100,0);
  uStack_36c = (undefined4)((ulonglong)puStack_100 >> 0x20);
  uStack_368 = (undefined1)uStack_5f8;
  uStack_367 = (undefined1)(uStack_5f8 >> 8);
  uStack_366 = (undefined1)(uStack_5f8 >> 0x10);
  uStack_365 = (undefined1)(uStack_5f8 >> 0x18);
  uStack_364 = (undefined1)(uStack_5f8 >> 0x20);
  uStack_363 = (undefined1)(uStack_5f8 >> 0x28);
  uStack_362 = (undefined1)(uStack_5f8 >> 0x30);
  uStack_361 = (undefined1)(uStack_5f8 >> 0x38);
  uStack_360 = (undefined1)uStack_5f0;
  uStack_35f = (undefined1)(uStack_5f0 >> 8);
  uStack_35e = (undefined1)(uStack_5f0 >> 0x10);
  uStack_35d = (undefined1)(uStack_5f0 >> 0x18);
  uStack_35c = (undefined1)(uStack_5f0 >> 0x20);
  uStack_35b = (undefined1)(uStack_5f0 >> 0x28);
  uStack_35a = (undefined1)(uStack_5f0 >> 0x30);
  uStack_359 = (undefined1)(uStack_5f0 >> 0x38);
  uStack_358 = (undefined1)uStack_5e8;
  uStack_357 = uStack_5e8._1_1_;
  uStack_356 = uStack_5e8._2_1_;
  uStack_355 = uStack_5e8._3_1_;
  uStack_354 = uStack_5e8._4_1_;
  uStack_353 = uStack_5e8._5_1_;
  uStack_352 = uStack_5e8._6_1_;
  uStack_351 = uStack_5e8._7_1_;
  uStack_350 = (undefined1)uStack_5e0;
  uStack_34f = uStack_5e0._1_1_;
  uStack_34e = uStack_5e0._2_1_;
  uStack_34d = uStack_5e0._3_1_;
  uStack_34c = uStack_5e0._4_1_;
  uStack_34b = uStack_5e0._5_1_;
  uStack_34a = uStack_5e0._6_1_;
  uStack_349 = uStack_5e0._7_1_;
  uStack_348 = (undefined1)lStack_5d8;
  uStack_347 = (undefined1)((ulonglong)lStack_5d8 >> 8);
  uStack_346 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
  uStack_345 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
  uStack_344 = (undefined1)((ulonglong)lStack_5d8 >> 0x20);
  uStack_343 = (undefined1)((ulonglong)lStack_5d8 >> 0x28);
  uStack_342 = (undefined1)((ulonglong)lStack_5d8 >> 0x30);
  uStack_341 = (undefined1)((ulonglong)lStack_5d8 >> 0x38);
  uStack_340 = SUB81(puStack_5d0,0);
  uStack_33f = (undefined1)((ulonglong)puStack_5d0 >> 8);
  uStack_33e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
  uStack_33d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
  uStack_33c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
  uStack_33b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
  uStack_33a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
  uStack_339 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
  uStack_328 = uVar87;
  uStack_320 = uVar14;
  puVar91 = &uStack_3c8;
  uStack_338 = uVar84;
  uStack_334 = uVar83;
  uStack_330 = uVar48;
  uStack_32c = uVar19;
  puStack_310 = puVar89;
  uVar85 = pdb_140283650(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar91 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar91;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_3b0 = uVar14;
  uStack_3a8 = (undefined1)lVar90;
  uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
  uStack_3a0 = SUB81(puVar91,0);
  uStack_39f = (undefined1)((ulonglong)puVar91 >> 8);
  uStack_39e = (undefined1)((ulonglong)puVar91 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puVar91 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puVar91 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puVar91 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puVar91 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puVar91 >> 0x38);
  puVar89 = &uStack_3c8;
  uStack_3c8 = uVar51;
  uStack_3c7 = uVar52;
  uStack_3c6 = uVar53;
  uStack_3c5 = uVar54;
  uStack_3c4 = uVar55;
  uStack_3c3 = uVar56;
  uStack_3c2 = uVar57;
  uStack_3c1 = uVar58;
  uStack_3c0 = uVar59;
  uStack_3bf = uVar60;
  uStack_3be = uVar61;
  uStack_3bd = uVar62;
  uStack_3bc = uVar63;
  uStack_3bb = uVar64;
  uStack_3ba = uVar65;
  uStack_3b9 = uVar66;
  uStack_3b8 = uVar67;
  uStack_3b7 = uVar68;
  uStack_3b6 = uVar69;
  uStack_3b5 = uVar70;
  uStack_3b4 = uVar71;
  uStack_3b3 = uVar72;
  uStack_3b2 = uVar73;
  uStack_3b1 = uVar74;
  uVar85 = pdb_14029a170(uVar85);
  plVar86 = (longlong *)pdb_140f3bda0();
  if ((char)plVar86[2] == '\x01') {
    lVar90 = *plVar86;
    puVar89 = (undefined1 *)plVar86[1];
  }
  else {
    lVar90 = pdb_140f4fd10();
    *plVar86 = lVar90;
    plVar86[1] = (longlong)puVar89;
    *(undefined1 *)(plVar86 + 2) = 1;
  }
  *plVar86 = lVar90 + 1;
  uStack_3b0 = uVar14;
  uStack_3a8 = (undefined1)lVar90;
  uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
  uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
  uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
  uStack_3a0 = SUB81(puVar89,0);
  uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
  uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
  uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
  uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
  uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
  uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
  uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
  uStack_3c8 = uVar51;
  uStack_3c7 = uVar52;
  uStack_3c6 = uVar53;
  uStack_3c5 = uVar54;
  uStack_3c4 = uVar55;
  uStack_3c3 = uVar56;
  uStack_3c2 = uVar57;
  uStack_3c1 = uVar58;
  uStack_3c0 = uVar59;
  uStack_3bf = uVar60;
  uStack_3be = uVar61;
  uStack_3bd = uVar62;
  uStack_3bc = uVar63;
  uStack_3bb = uVar64;
  uStack_3ba = uVar65;
  uStack_3b9 = uVar66;
  uStack_3b8 = uVar67;
  uStack_3b7 = uVar68;
  uStack_3b6 = uVar69;
  uStack_3b5 = uVar70;
  uStack_3b4 = uVar71;
  uStack_3b3 = uVar72;
  uStack_3b2 = uVar73;
  uStack_3b1 = uVar74;
  uVar85 = pdb_14027cb50(uVar85,&uStack_3c8);
  plVar86 = (longlong *)pdb_14008d710(0);
  if (plVar86 == (longlong *)0x0) {
LAB_1405cead8:
    pdb_142dc7890(&UNK_142f3dc40);
  }
  else {
    lStack_5d8 = *plVar86;
    puStack_5d0 = (undefined1 *)plVar86[1];
    *plVar86 = *plVar86 + 1;
    uVar18 = _UNK_142f72578;
    uVar17 = _DAT_142f72570;
    uVar16 = _UNK_142f72568;
    uVar15 = _DAT_142f72560;
    uStack_5e8 = _DAT_142f72570;
    uStack_5e0 = _UNK_142f72578;
    uStack_5f8 = _DAT_142f72560;
    uStack_5f0 = _UNK_142f72568;
    plVar86 = (longlong *)pdb_14008d710(0);
    if (plVar86 != (longlong *)0x0) {
      lVar90 = *plVar86;
      *plVar86 = *plVar86 + 1;
      uStack_3a8 = (undefined1)lStack_5d8;
      uStack_3a7 = (undefined1)((ulonglong)lStack_5d8 >> 8);
      uStack_3a6 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
      uStack_3a5 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
      uStack_3a4 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
      uStack_3a0 = SUB81(puStack_5d0,0);
      uStack_39f = (undefined1)((ulonglong)puStack_5d0 >> 8);
      uStack_39e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
      uStack_39d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
      uStack_39c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
      uStack_39b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
      uStack_39a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
      uStack_399 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
      uStack_3b8 = (undefined1)uStack_5e8;
      uStack_3b7 = (undefined1)((ulonglong)uStack_5e8 >> 8);
      uStack_3b6 = (undefined1)((ulonglong)uStack_5e8 >> 0x10);
      uStack_3b5 = (undefined1)((ulonglong)uStack_5e8 >> 0x18);
      uStack_3b4 = (undefined1)((ulonglong)uStack_5e8 >> 0x20);
      uStack_3b3 = (undefined1)((ulonglong)uStack_5e8 >> 0x28);
      uStack_3b2 = (undefined1)((ulonglong)uStack_5e8 >> 0x30);
      uStack_3b1 = (undefined1)((ulonglong)uStack_5e8 >> 0x38);
      uStack_3b0 = uStack_5e0;
      uStack_3c8 = (undefined1)uStack_5f8;
      uStack_3c7 = uStack_5f8._1_1_;
      uStack_3c6 = uStack_5f8._2_1_;
      uStack_3c5 = uStack_5f8._3_1_;
      uStack_3c4 = uStack_5f8._4_1_;
      uStack_3c3 = uStack_5f8._5_1_;
      uStack_3c2 = uStack_5f8._6_1_;
      uStack_3c1 = uStack_5f8._7_1_;
      uStack_3c0 = (undefined1)uStack_5f0;
      uStack_3bf = uStack_5f0._1_1_;
      uStack_3be = uStack_5f0._2_1_;
      uStack_3bd = uStack_5f0._3_1_;
      uStack_3bc = uStack_5f0._4_1_;
      uStack_3bb = uStack_5f0._5_1_;
      uStack_3ba = uStack_5f0._6_1_;
      uStack_3b9 = uStack_5f0._7_1_;
      uStack_398 = (undefined1)uVar15;
      uStack_397 = (undefined1)(uVar15 >> 8);
      uStack_396 = (undefined1)(uVar15 >> 0x10);
      uStack_395 = (undefined1)(uVar15 >> 0x18);
      uStack_394 = (undefined1)(uVar15 >> 0x20);
      uStack_393 = (undefined1)(uVar15 >> 0x28);
      uStack_392 = (undefined1)(uVar15 >> 0x30);
      uStack_391 = (undefined1)(uVar15 >> 0x38);
      uStack_390 = (undefined4)uVar16;
      uVar28 = uStack_390;
      uStack_38c = (undefined4)(uVar16 >> 0x20);
      uVar30 = uStack_38c;
      uStack_388 = (undefined1)uVar17;
      uStack_387 = (undefined1)((ulonglong)uVar17 >> 8);
      uStack_386 = (undefined1)((ulonglong)uVar17 >> 0x10);
      uStack_385 = (undefined1)((ulonglong)uVar17 >> 0x18);
      uStack_384 = (undefined1)((ulonglong)uVar17 >> 0x20);
      uStack_383 = (undefined1)((ulonglong)uVar17 >> 0x28);
      uStack_382 = (undefined1)((ulonglong)uVar17 >> 0x30);
      uStack_381 = (undefined1)((ulonglong)uVar17 >> 0x38);
      uStack_380 = (undefined1)uVar18;
      uStack_37f = (undefined1)(uVar18 >> 8);
      uStack_37e = (undefined1)(uVar18 >> 0x10);
      uStack_37d = (undefined1)(uVar18 >> 0x18);
      uStack_37c = (undefined1)(uVar18 >> 0x20);
      uStack_37b = (undefined1)(uVar18 >> 0x28);
      uStack_37a = (undefined1)(uVar18 >> 0x30);
      uStack_379 = (undefined1)(uVar18 >> 0x38);
      uStack_378 = (undefined4)lVar90;
      uStack_374 = (undefined4)((ulonglong)lVar90 >> 0x20);
      uStack_370 = (undefined4)plVar86[1];
      uStack_36c = (undefined4)((ulonglong)plVar86[1] >> 0x20);
      puVar89 = &uStack_3c8;
      uVar85 = pdb_140292a80(uVar85);
      plVar86 = (longlong *)pdb_140f3bda0();
      if ((char)plVar86[2] == '\x01') {
        lStack_108 = *plVar86;
        puVar89 = (undefined1 *)plVar86[1];
      }
      else {
        lStack_108 = pdb_140f4fd10();
        *plVar86 = lStack_108;
        plVar86[1] = (longlong)puVar89;
        *(undefined1 *)(plVar86 + 2) = 1;
      }
      *plVar86 = lStack_108 + 1;
      uStack_118 = uVar87;
      uStack_110 = uVar14;
      uStack_128 = uVar88;
      uStack_120 = uVar96;
      puStack_100 = puVar89;
      plVar86 = (longlong *)pdb_140f3bda0();
      if ((char)plVar86[2] == '\x01') {
        lVar90 = *plVar86;
        puVar89 = (undefined1 *)plVar86[1];
      }
      else {
        lVar90 = pdb_140f4fd10();
        *plVar86 = lVar90;
        plVar86[1] = (longlong)puVar89;
        *(undefined1 *)(plVar86 + 2) = 1;
      }
      *plVar86 = lVar90 + 1;
      uStack_3b0 = uVar14;
      uStack_3a8 = (undefined1)lVar90;
      uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
      uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
      uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
      uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
      uStack_3a0 = SUB81(puVar89,0);
      uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
      uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
      uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
      uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
      uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
      uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
      uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
      uStack_3c8 = uVar51;
      uStack_3c7 = uVar52;
      uStack_3c6 = uVar53;
      uStack_3c5 = uVar54;
      uStack_3c4 = uVar55;
      uStack_3c3 = uVar56;
      uStack_3c2 = uVar57;
      uStack_3c1 = uVar58;
      uStack_3c0 = uVar59;
      uStack_3bf = uVar60;
      uStack_3be = uVar61;
      uStack_3bd = uVar62;
      uStack_3bc = uVar63;
      uStack_3bb = uVar64;
      uStack_3ba = uVar65;
      uStack_3b9 = uVar66;
      uStack_3b8 = uVar67;
      uStack_3b7 = uVar68;
      uStack_3b6 = uVar69;
      uStack_3b5 = uVar70;
      uStack_3b4 = uVar71;
      uStack_3b3 = uVar72;
      uStack_3b2 = uVar73;
      uStack_3b1 = uVar74;
      plVar86 = (longlong *)pdb_140f3bda0();
      if ((char)plVar86[2] == '\x01') {
        lStack_578 = *plVar86;
        puVar89 = (undefined1 *)plVar86[1];
      }
      else {
        lStack_578 = pdb_140f4fd10();
        *plVar86 = lStack_578;
        plVar86[1] = (longlong)puVar89;
        *(undefined1 *)(plVar86 + 2) = 1;
      }
      *plVar86 = lStack_578 + 1;
      lStack_5d8 = lStack_108;
      puStack_5d0 = puStack_100;
      uStack_5e8 = uStack_118;
      uStack_5e0 = uStack_110;
      uStack_5f8 = uStack_128;
      uStack_5f0 = uStack_120;
      uStack_568 = 0;
      uStack_4d8 = 0;
      uStack_5c8 = CONCAT17(uStack_3c1,
                            CONCAT16(uStack_3c2,
                                     CONCAT15(uStack_3c3,
                                              CONCAT14(uStack_3c4,
                                                       CONCAT13(uStack_3c5,
                                                                CONCAT12(uStack_3c6,
                                                                         CONCAT11(uStack_3c7,
                                                                                  uStack_3c8)))))));
      uStack_5c0 = CONCAT17(uStack_3b9,
                            CONCAT16(uStack_3ba,
                                     CONCAT15(uStack_3bb,
                                              CONCAT14(uStack_3bc,
                                                       CONCAT13(uStack_3bd,
                                                                CONCAT12(uStack_3be,
                                                                         CONCAT11(uStack_3bf,
                                                                                  uStack_3c0)))))));
      uStack_5a8 = CONCAT44(uStack_3a4,
                            CONCAT13(uStack_3a5,CONCAT12(uStack_3a6,CONCAT11(uStack_3a7,uStack_3a8))
                                    ));
      uStack_5a0 = CONCAT17(uStack_399,
                            CONCAT16(uStack_39a,
                                     CONCAT15(uStack_39b,
                                              CONCAT14(uStack_39c,
                                                       CONCAT13(uStack_39d,
                                                                CONCAT12(uStack_39e,
                                                                         CONCAT11(uStack_39f,
                                                                                  uStack_3a0)))))));
      uStack_5b8 = CONCAT17(uStack_3b1,
                            CONCAT16(uStack_3b2,
                                     CONCAT15(uStack_3b3,
                                              CONCAT14(uStack_3b4,
                                                       CONCAT13(uStack_3b5,
                                                                CONCAT12(uStack_3b6,
                                                                         CONCAT11(uStack_3b7,
                                                                                  uStack_3b8)))))));
      uStack_5b0 = uStack_3b0;
      uStack_598 = uVar88;
      uStack_590 = uVar96;
      uStack_588 = uVar87;
      uStack_580 = uVar14;
      uStack_448 = 0;
      puStack_570 = puVar89;
      plVar86 = (longlong *)pdb_140f3bda0();
      if ((char)plVar86[2] == '\x01') {
        lStack_418 = *plVar86;
        puVar89 = (undefined1 *)plVar86[1];
      }
      else {
        lStack_418 = pdb_140f4fd10();
        *plVar86 = lStack_418;
        plVar86[1] = (longlong)puVar89;
        *(undefined1 *)(plVar86 + 2) = 1;
      }
      *plVar86 = lStack_418 + 1;
      uStack_428 = uVar87;
      uStack_420 = uVar14;
      uStack_438 = uVar88;
      uStack_430 = uVar96;
      puStack_410 = puVar89;
      plVar86 = (longlong *)pdb_140f3bda0();
      if ((char)plVar86[2] == '\x01') {
        lStack_108 = *plVar86;
        puVar89 = (undefined1 *)plVar86[1];
      }
      else {
        lStack_108 = pdb_140f4fd10();
        *plVar86 = lStack_108;
        plVar86[1] = (longlong)puVar89;
        *(undefined1 *)(plVar86 + 2) = 1;
      }
      *plVar86 = lStack_108 + 1;
      uStack_118 = uVar87;
      uStack_110 = uVar14;
      uStack_128 = uVar88;
      uStack_120 = uVar96;
      puStack_100 = puVar89;
      plVar86 = (longlong *)pdb_140f3bda0();
      if ((char)plVar86[2] == '\x01') {
        lStack_178 = *plVar86;
        puVar89 = (undefined1 *)plVar86[1];
      }
      else {
        lStack_178 = pdb_140f4fd10();
        *plVar86 = lStack_178;
        plVar86[1] = (longlong)puVar89;
        *(undefined1 *)(plVar86 + 2) = 1;
      }
      *plVar86 = lStack_178 + 1;
      uStack_168 = 0;
      uStack_160 = 0;
      pub_142e32760(&uStack_3b0,&uStack_5f8,0x1b8);
      uStack_1f8 = uStack_438;
      uStack_1f0 = uStack_430;
      uStack_1e8 = uStack_428;
      uStack_1e0 = uStack_420;
      lStack_1d8 = lStack_418;
      puStack_1d0 = puStack_410;
      uStack_1c8 = uStack_128;
      uStack_1c0 = uStack_120;
      uStack_1b8 = (undefined1)uStack_118;
      uStack_1b7 = uStack_118._1_1_;
      uStack_1b6 = uStack_118._2_1_;
      uStack_1b5 = uStack_118._3_1_;
      uStack_1b4 = uStack_118._4_1_;
      uStack_1b3 = uStack_118._5_1_;
      uStack_1b2 = uStack_118._6_1_;
      uStack_1b1 = uStack_118._7_1_;
      uStack_1b0 = (undefined1)uStack_110;
      uStack_1af = uStack_110._1_1_;
      uStack_1ae = uStack_110._2_1_;
      uStack_1ad = uStack_110._3_1_;
      uStack_1ac = uStack_110._4_1_;
      uStack_1ab = uStack_110._5_1_;
      uStack_1aa = uStack_110._6_1_;
      uStack_1a9 = uStack_110._7_1_;
      lStack_1a8 = lStack_108;
      puStack_1a0 = puStack_100;
      uStack_198 = uVar88;
      uStack_190 = uVar96;
      uStack_188 = uVar87;
      uStack_180 = uVar14;
      uStack_158 = 8;
      uStack_150 = 0;
      uStack_3c8 = 0;
      uStack_3c7 = 0;
      uStack_3c6 = 0;
      uStack_3c5 = 0;
      uStack_3c4 = 0;
      uStack_3c3 = 0;
      uStack_3c2 = 0;
      uStack_3c1 = 0;
      uStack_3c0 = 8;
      uStack_3bf = 0;
      uStack_3be = 0;
      uStack_3bd = 0;
      uStack_3bc = 0;
      uStack_3bb = 0;
      uStack_3ba = 0;
      uStack_3b9 = 0;
      uStack_3b8 = 0;
      uStack_3b7 = 0;
      uStack_3b6 = 0;
      uStack_3b5 = 0;
      uStack_3b4 = 0;
      uStack_3b3 = 0;
      uStack_3b2 = 0;
      uStack_3b1 = 0;
      uStack_146 = 0;
      uStack_148 = 0;
      puVar91 = &uStack_3c8;
      puStack_170 = puVar89;
      uVar85 = pdb_140295320(uVar85);
      plVar86 = (longlong *)pdb_140f3bda0();
      if ((char)plVar86[2] == '\x01') {
        lVar90 = *plVar86;
        puVar91 = (undefined1 *)plVar86[1];
      }
      else {
        lVar90 = pdb_140f4fd10();
        *plVar86 = lVar90;
        plVar86[1] = (longlong)puVar91;
        *(undefined1 *)(plVar86 + 2) = 1;
      }
      *plVar86 = lVar90 + 1;
      uStack_3b0 = uVar14;
      uStack_3a8 = (undefined1)lVar90;
      uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
      uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
      uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
      uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
      uStack_3a0 = SUB81(puVar91,0);
      uStack_39f = (undefined1)((ulonglong)puVar91 >> 8);
      uStack_39e = (undefined1)((ulonglong)puVar91 >> 0x10);
      uStack_39d = (undefined1)((ulonglong)puVar91 >> 0x18);
      uStack_39c = (undefined1)((ulonglong)puVar91 >> 0x20);
      uStack_39b = (undefined1)((ulonglong)puVar91 >> 0x28);
      uStack_39a = (undefined1)((ulonglong)puVar91 >> 0x30);
      uStack_399 = (undefined1)((ulonglong)puVar91 >> 0x38);
      uStack_3c8 = uVar51;
      uStack_3c7 = uVar52;
      uStack_3c6 = uVar53;
      uStack_3c5 = uVar54;
      uStack_3c4 = uVar55;
      uStack_3c3 = uVar56;
      uStack_3c2 = uVar57;
      uStack_3c1 = uVar58;
      uStack_3c0 = uVar59;
      uStack_3bf = uVar60;
      uStack_3be = uVar61;
      uStack_3bd = uVar62;
      uStack_3bc = uVar63;
      uStack_3bb = uVar64;
      uStack_3ba = uVar65;
      uStack_3b9 = uVar66;
      uStack_3b8 = uVar67;
      uStack_3b7 = uVar68;
      uStack_3b6 = uVar69;
      uStack_3b5 = uVar70;
      uStack_3b4 = uVar71;
      uStack_3b3 = uVar72;
      uStack_3b2 = uVar73;
      uStack_3b1 = uVar74;
      uVar85 = pdb_140279e50(uVar85,&uStack_3c8);
      plVar86 = (longlong *)pdb_14008d710(0);
      if (plVar86 != (longlong *)0x0) {
        lStack_5d8 = *plVar86;
        puStack_5d0 = (undefined1 *)plVar86[1];
        *plVar86 = *plVar86 + 1;
        uVar13 = _UNK_142f43c68;
        uVar12 = _DAT_142f43c60;
        uVar11 = _UNK_142f43c58;
        uVar10 = _DAT_142f43c50;
        uStack_5e8 = _DAT_142f43c60;
        uStack_5e0 = _UNK_142f43c68;
        uStack_5f8 = _DAT_142f43c50;
        uStack_5f0 = _UNK_142f43c58;
        plVar86 = (longlong *)pdb_14008d710(0);
        if (plVar86 == (longlong *)0x0) {
          pdb_142dc7890(&UNK_142f3dc40);
          goto LAB_1405ceb3d;
        }
        lVar90 = *plVar86;
        *plVar86 = *plVar86 + 1;
        uStack_3a8 = (undefined1)lStack_5d8;
        uStack_3a7 = (undefined1)((ulonglong)lStack_5d8 >> 8);
        uStack_3a6 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
        uStack_3a5 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
        uStack_3a4 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
        uStack_3a0 = SUB81(puStack_5d0,0);
        uStack_39f = (undefined1)((ulonglong)puStack_5d0 >> 8);
        uStack_39e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
        uStack_39d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
        uStack_39c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
        uStack_39b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
        uStack_39a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
        uStack_399 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
        uStack_3b8 = (undefined1)uStack_5e8;
        uStack_3b7 = (undefined1)((ulonglong)uStack_5e8 >> 8);
        uStack_3b6 = (undefined1)((ulonglong)uStack_5e8 >> 0x10);
        uStack_3b5 = (undefined1)((ulonglong)uStack_5e8 >> 0x18);
        uStack_3b4 = (undefined1)((ulonglong)uStack_5e8 >> 0x20);
        uStack_3b3 = (undefined1)((ulonglong)uStack_5e8 >> 0x28);
        uStack_3b2 = (undefined1)((ulonglong)uStack_5e8 >> 0x30);
        uStack_3b1 = (undefined1)((ulonglong)uStack_5e8 >> 0x38);
        uStack_3b0 = uStack_5e0;
        uStack_3c8 = (undefined1)uStack_5f8;
        uStack_3c7 = uStack_5f8._1_1_;
        uStack_3c6 = uStack_5f8._2_1_;
        uStack_3c5 = uStack_5f8._3_1_;
        uStack_3c4 = uStack_5f8._4_1_;
        uStack_3c3 = uStack_5f8._5_1_;
        uStack_3c2 = uStack_5f8._6_1_;
        uStack_3c1 = uStack_5f8._7_1_;
        uStack_3c0 = (undefined1)uStack_5f0;
        uStack_3bf = uStack_5f0._1_1_;
        uStack_3be = uStack_5f0._2_1_;
        uStack_3bd = uStack_5f0._3_1_;
        uStack_3bc = uStack_5f0._4_1_;
        uStack_3bb = uStack_5f0._5_1_;
        uStack_3ba = uStack_5f0._6_1_;
        uStack_3b9 = uStack_5f0._7_1_;
        uStack_398 = (undefined1)uVar10;
        uVar20 = uStack_398;
        uStack_397 = (undefined1)(uVar10 >> 8);
        uVar21 = uStack_397;
        uStack_396 = (undefined1)(uVar10 >> 0x10);
        uVar22 = uStack_396;
        uStack_395 = (undefined1)(uVar10 >> 0x18);
        uVar23 = uStack_395;
        uStack_394 = (undefined1)(uVar10 >> 0x20);
        uVar24 = uStack_394;
        uStack_393 = (undefined1)(uVar10 >> 0x28);
        uVar25 = uStack_393;
        uStack_392 = (undefined1)(uVar10 >> 0x30);
        uVar26 = uStack_392;
        uStack_391 = (undefined1)(uVar10 >> 0x38);
        uVar27 = uStack_391;
        uStack_390 = (undefined4)uVar11;
        uVar29 = uStack_390;
        uStack_38c = (undefined4)(uVar11 >> 0x20);
        uVar31 = uStack_38c;
        uStack_388 = (undefined1)uVar12;
        uVar32 = uStack_388;
        uStack_387 = (undefined1)((ulonglong)uVar12 >> 8);
        uVar33 = uStack_387;
        uStack_386 = (undefined1)((ulonglong)uVar12 >> 0x10);
        uVar34 = uStack_386;
        uStack_385 = (undefined1)((ulonglong)uVar12 >> 0x18);
        uVar35 = uStack_385;
        uStack_384 = (undefined1)((ulonglong)uVar12 >> 0x20);
        uVar36 = uStack_384;
        uStack_383 = (undefined1)((ulonglong)uVar12 >> 0x28);
        uVar37 = uStack_383;
        uStack_382 = (undefined1)((ulonglong)uVar12 >> 0x30);
        uVar38 = uStack_382;
        uStack_381 = (undefined1)((ulonglong)uVar12 >> 0x38);
        uVar39 = uStack_381;
        uStack_380 = (undefined1)uVar13;
        uVar40 = uStack_380;
        uStack_37f = (undefined1)(uVar13 >> 8);
        uVar41 = uStack_37f;
        uStack_37e = (undefined1)(uVar13 >> 0x10);
        uVar42 = uStack_37e;
        uStack_37d = (undefined1)(uVar13 >> 0x18);
        uVar43 = uStack_37d;
        uStack_37c = (undefined1)(uVar13 >> 0x20);
        uVar44 = uStack_37c;
        uStack_37b = (undefined1)(uVar13 >> 0x28);
        uVar45 = uStack_37b;
        uStack_37a = (undefined1)(uVar13 >> 0x30);
        uVar46 = uStack_37a;
        uStack_379 = (undefined1)(uVar13 >> 0x38);
        uVar47 = uStack_379;
        uStack_378 = (undefined4)lVar90;
        uStack_374 = (undefined4)((ulonglong)lVar90 >> 0x20);
        uStack_370 = (undefined4)plVar86[1];
        uStack_36c = (undefined4)((ulonglong)plVar86[1] >> 0x20);
        uVar85 = pdb_14027bf90(uVar85,&uStack_3c8);
        plVar86 = (longlong *)pdb_14008d710(0);
        if (plVar86 != (longlong *)0x0) {
          lStack_5d8 = *plVar86;
          puStack_5d0 = (undefined1 *)plVar86[1];
          *plVar86 = *plVar86 + 1;
          uStack_5e8 = uVar12;
          uStack_5e0 = uVar13;
          uStack_5f8 = uVar10;
          uStack_5f0 = uVar11;
          plVar86 = (longlong *)pdb_14008d710(0);
          if (plVar86 == (longlong *)0x0) {
            pdb_142dc7890(&UNK_142f3dc40);
            goto LAB_1405ceb3d;
          }
          lVar90 = *plVar86;
          *plVar86 = *plVar86 + 1;
          uStack_3a8 = (undefined1)lStack_5d8;
          uStack_3a7 = (undefined1)((ulonglong)lStack_5d8 >> 8);
          uStack_3a6 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
          uStack_3a5 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
          uStack_3a4 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
          uStack_3a0 = SUB81(puStack_5d0,0);
          uStack_39f = (undefined1)((ulonglong)puStack_5d0 >> 8);
          uStack_39e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
          uStack_39d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
          uStack_39c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
          uStack_39b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
          uStack_39a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
          uStack_399 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
          uStack_3b8 = (undefined1)uStack_5e8;
          uStack_3b7 = (undefined1)((ulonglong)uStack_5e8 >> 8);
          uStack_3b6 = (undefined1)((ulonglong)uStack_5e8 >> 0x10);
          uStack_3b5 = (undefined1)((ulonglong)uStack_5e8 >> 0x18);
          uStack_3b4 = (undefined1)((ulonglong)uStack_5e8 >> 0x20);
          uStack_3b3 = (undefined1)((ulonglong)uStack_5e8 >> 0x28);
          uStack_3b2 = (undefined1)((ulonglong)uStack_5e8 >> 0x30);
          uStack_3b1 = (undefined1)((ulonglong)uStack_5e8 >> 0x38);
          uStack_3b0 = uStack_5e0;
          uStack_3c8 = (undefined1)uStack_5f8;
          uStack_3c7 = uStack_5f8._1_1_;
          uStack_3c6 = uStack_5f8._2_1_;
          uStack_3c5 = uStack_5f8._3_1_;
          uStack_3c4 = uStack_5f8._4_1_;
          uStack_3c3 = uStack_5f8._5_1_;
          uStack_3c2 = uStack_5f8._6_1_;
          uStack_3c1 = uStack_5f8._7_1_;
          uStack_3c0 = (undefined1)uStack_5f0;
          uStack_3bf = uStack_5f0._1_1_;
          uStack_3be = uStack_5f0._2_1_;
          uStack_3bd = uStack_5f0._3_1_;
          uStack_3bc = uStack_5f0._4_1_;
          uStack_3bb = uStack_5f0._5_1_;
          uStack_3ba = uStack_5f0._6_1_;
          uStack_3b9 = uStack_5f0._7_1_;
          uStack_378 = (undefined4)lVar90;
          uStack_374 = (undefined4)((ulonglong)lVar90 >> 0x20);
          uStack_370 = (undefined4)plVar86[1];
          uStack_36c = (undefined4)((ulonglong)plVar86[1] >> 0x20);
          puVar89 = &uStack_3c8;
          uStack_398 = uVar20;
          uStack_397 = uVar21;
          uStack_396 = uVar22;
          uStack_395 = uVar23;
          uStack_394 = uVar24;
          uStack_393 = uVar25;
          uStack_392 = uVar26;
          uStack_391 = uVar27;
          uStack_390 = uVar29;
          uStack_38c = uVar31;
          uStack_388 = uVar32;
          uStack_387 = uVar33;
          uStack_386 = uVar34;
          uStack_385 = uVar35;
          uStack_384 = uVar36;
          uStack_383 = uVar37;
          uStack_382 = uVar38;
          uStack_381 = uVar39;
          uStack_380 = uVar40;
          uStack_37f = uVar41;
          uStack_37e = uVar42;
          uStack_37d = uVar43;
          uStack_37c = uVar44;
          uStack_37b = uVar45;
          uStack_37a = uVar46;
          uStack_379 = uVar47;
          uVar85 = pdb_140291910(uVar85);
          uStack_6d8 = 0;
          uStack_6d0 = 8;
          uStack_6c8 = 0;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lStack_648 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lStack_648 = pdb_140f4fd10();
            *plVar86 = lStack_648;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lStack_648 + 1;
          uStack_658 = uVar87;
          uStack_650 = uVar14;
          uStack_668 = uVar88;
          uStack_660 = uVar96;
          puStack_640 = puVar89;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lVar90 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lVar90 = pdb_140f4fd10();
            *plVar86 = lVar90;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lVar90 + 1;
          uStack_3c8 = 0;
          uStack_3c7 = 0;
          uStack_3c6 = 0;
          uStack_3c5 = 0;
          uStack_3c4 = 0;
          uStack_3c3 = 0;
          uStack_3c2 = 0;
          uStack_3c1 = 0;
          uStack_3c0 = 8;
          uStack_3bf = 0;
          uStack_3be = 0;
          uStack_3bd = 0;
          uStack_3bc = 0;
          uStack_3bb = 0;
          uStack_3ba = 0;
          uStack_3b9 = 0;
          uStack_3b8 = 0;
          uStack_3b7 = 0;
          uStack_3b6 = 0;
          uStack_3b5 = 0;
          uStack_3b4 = 0;
          uStack_3b3 = 0;
          uStack_3b2 = 0;
          uStack_3b1 = 0;
          uStack_3b0 = uVar88;
          uStack_390 = (undefined4)lVar90;
          uStack_38c = (undefined4)((ulonglong)lVar90 >> 0x20);
          uStack_388 = SUB81(puVar89,0);
          uStack_387 = (undefined1)((ulonglong)puVar89 >> 8);
          uStack_386 = (undefined1)((ulonglong)puVar89 >> 0x10);
          uStack_385 = (undefined1)((ulonglong)puVar89 >> 0x18);
          uStack_384 = (undefined1)((ulonglong)puVar89 >> 0x20);
          uStack_383 = (undefined1)((ulonglong)puVar89 >> 0x28);
          uStack_382 = (undefined1)((ulonglong)puVar89 >> 0x30);
          uStack_381 = (undefined1)((ulonglong)puVar89 >> 0x38);
          uStack_3a8 = uVar59;
          uStack_3a7 = uVar60;
          uStack_3a6 = uVar61;
          uStack_3a5 = uVar62;
          uStack_3a4 = uVar19;
          uStack_3a0 = uVar67;
          uStack_39f = uVar68;
          uStack_39e = uVar69;
          uStack_39d = uVar70;
          uStack_39c = uVar71;
          uStack_39b = uVar72;
          uStack_39a = uVar73;
          uStack_399 = uVar74;
          uStack_398 = uVar75;
          uStack_397 = uVar76;
          uStack_396 = uVar77;
          uStack_395 = uVar78;
          uStack_394 = uVar79;
          uStack_393 = uVar80;
          uStack_392 = uVar81;
          uStack_391 = uVar82;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lStack_a8 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lStack_a8 = pdb_140f4fd10();
            *plVar86 = lStack_a8;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lStack_a8 + 1;
          uStack_e8 = CONCAT17(uStack_381,
                               CONCAT16(uStack_382,
                                        CONCAT15(uStack_383,
                                                 CONCAT14(uStack_384,
                                                          CONCAT13(uStack_385,
                                                                   CONCAT12(uStack_386,
                                                                            CONCAT11(uStack_387,
                                                                                     uStack_388)))))
                                       ));
          uStack_128 = CONCAT17(uStack_3c1,
                                CONCAT16(uStack_3c2,
                                         CONCAT15(uStack_3c3,
                                                  CONCAT14(uStack_3c4,
                                                           CONCAT13(uStack_3c5,
                                                                    CONCAT12(uStack_3c6,
                                                                             CONCAT11(uStack_3c7,
                                                                                      uStack_3c8))))
                                                 )));
          uStack_120 = CONCAT17(uStack_3b9,
                                CONCAT16(uStack_3ba,
                                         CONCAT15(uStack_3bb,
                                                  CONCAT14(uStack_3bc,
                                                           CONCAT13(uStack_3bd,
                                                                    CONCAT12(uStack_3be,
                                                                             CONCAT11(uStack_3bf,
                                                                                      uStack_3c0))))
                                                 )));
          lStack_108 = CONCAT44(uStack_3a4,
                                CONCAT13(uStack_3a5,
                                         CONCAT12(uStack_3a6,CONCAT11(uStack_3a7,uStack_3a8))));
          puStack_100 = (undefined1 *)
                        CONCAT17(uStack_399,
                                 CONCAT16(uStack_39a,
                                          CONCAT15(uStack_39b,
                                                   CONCAT14(uStack_39c,
                                                            CONCAT13(uStack_39d,
                                                                     CONCAT12(uStack_39e,
                                                                              CONCAT11(uStack_39f,
                                                                                       uStack_3a0)))
                                                           ))));
          uStack_f8 = CONCAT17(uStack_391,
                               CONCAT16(uStack_392,
                                        CONCAT15(uStack_393,
                                                 CONCAT14(uStack_394,
                                                          CONCAT13(uStack_395,
                                                                   CONCAT12(uStack_396,
                                                                            CONCAT11(uStack_397,
                                                                                     uStack_398)))))
                                       ));
          uStack_f0 = CONCAT44(uStack_38c,uStack_390);
          uStack_118 = CONCAT17(uStack_3b1,
                                CONCAT16(uStack_3b2,
                                         CONCAT15(uStack_3b3,
                                                  CONCAT14(uStack_3b4,
                                                           CONCAT13(uStack_3b5,
                                                                    CONCAT12(uStack_3b6,
                                                                             CONCAT11(uStack_3b7,
                                                                                      uStack_3b8))))
                                                 )));
          uStack_110 = uStack_3b0;
          uStack_e0 = 0;
          uStack_d8 = 8;
          uStack_d0 = 0;
          uStack_c8 = uVar88;
          uStack_c0 = uVar96;
          uStack_b8 = uVar87;
          uStack_b0 = uVar14;
          puStack_a0 = puVar89;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lVar90 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lVar90 = pdb_140f4fd10();
            *plVar86 = lVar90;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lVar90 + 1;
          uStack_3c8 = 0;
          uStack_3c7 = 0;
          uStack_3c6 = 0;
          uStack_3c5 = 0;
          uStack_3c4 = 0;
          uStack_3c3 = 0;
          uStack_3c2 = 0;
          uStack_3c1 = 0;
          uStack_3c0 = 8;
          uStack_3bf = 0;
          uStack_3be = 0;
          uStack_3bd = 0;
          uStack_3bc = 0;
          uStack_3bb = 0;
          uStack_3ba = 0;
          uStack_3b9 = 0;
          uStack_3b8 = 0;
          uStack_3b7 = 0;
          uStack_3b6 = 0;
          uStack_3b5 = 0;
          uStack_3b4 = 0;
          uStack_3b3 = 0;
          uStack_3b2 = 0;
          uStack_3b1 = 0;
          uStack_3b0 = uVar88;
          uStack_390 = (undefined4)lVar90;
          uStack_38c = (undefined4)((ulonglong)lVar90 >> 0x20);
          uStack_388 = SUB81(puVar89,0);
          uStack_387 = (undefined1)((ulonglong)puVar89 >> 8);
          uStack_386 = (undefined1)((ulonglong)puVar89 >> 0x10);
          uStack_385 = (undefined1)((ulonglong)puVar89 >> 0x18);
          uStack_384 = (undefined1)((ulonglong)puVar89 >> 0x20);
          uStack_383 = (undefined1)((ulonglong)puVar89 >> 0x28);
          uStack_382 = (undefined1)((ulonglong)puVar89 >> 0x30);
          uStack_381 = (undefined1)((ulonglong)puVar89 >> 0x38);
          uStack_3a8 = uVar59;
          uStack_3a7 = uVar60;
          uStack_3a6 = uVar61;
          uStack_3a5 = uVar62;
          uStack_3a4 = uVar19;
          uStack_3a0 = uVar67;
          uStack_39f = uVar68;
          uStack_39e = uVar69;
          uStack_39d = uVar70;
          uStack_39c = uVar71;
          uStack_39b = uVar72;
          uStack_39a = uVar73;
          uStack_399 = uVar74;
          uStack_398 = uVar75;
          uStack_397 = uVar76;
          uStack_396 = uVar77;
          uStack_395 = uVar78;
          uStack_394 = uVar79;
          uStack_393 = uVar80;
          uStack_392 = uVar81;
          uStack_391 = uVar82;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lStack_578 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lStack_578 = pdb_140f4fd10();
            *plVar86 = lStack_578;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lStack_578 + 1;
          uStack_5b8 = CONCAT17(uStack_381,
                                CONCAT16(uStack_382,
                                         CONCAT15(uStack_383,
                                                  CONCAT14(uStack_384,
                                                           CONCAT13(uStack_385,
                                                                    CONCAT12(uStack_386,
                                                                             CONCAT11(uStack_387,
                                                                                      uStack_388))))
                                                 )));
          uStack_5f8 = CONCAT17(uStack_3c1,
                                CONCAT16(uStack_3c2,
                                         CONCAT15(uStack_3c3,
                                                  CONCAT14(uStack_3c4,
                                                           CONCAT13(uStack_3c5,
                                                                    CONCAT12(uStack_3c6,
                                                                             CONCAT11(uStack_3c7,
                                                                                      uStack_3c8))))
                                                 )));
          uStack_5f0 = CONCAT17(uStack_3b9,
                                CONCAT16(uStack_3ba,
                                         CONCAT15(uStack_3bb,
                                                  CONCAT14(uStack_3bc,
                                                           CONCAT13(uStack_3bd,
                                                                    CONCAT12(uStack_3be,
                                                                             CONCAT11(uStack_3bf,
                                                                                      uStack_3c0))))
                                                 )));
          lStack_5d8 = CONCAT44(uStack_3a4,
                                CONCAT13(uStack_3a5,
                                         CONCAT12(uStack_3a6,CONCAT11(uStack_3a7,uStack_3a8))));
          puStack_5d0 = (undefined1 *)
                        CONCAT17(uStack_399,
                                 CONCAT16(uStack_39a,
                                          CONCAT15(uStack_39b,
                                                   CONCAT14(uStack_39c,
                                                            CONCAT13(uStack_39d,
                                                                     CONCAT12(uStack_39e,
                                                                              CONCAT11(uStack_39f,
                                                                                       uStack_3a0)))
                                                           ))));
          uStack_5c8 = CONCAT17(uStack_391,
                                CONCAT16(uStack_392,
                                         CONCAT15(uStack_393,
                                                  CONCAT14(uStack_394,
                                                           CONCAT13(uStack_395,
                                                                    CONCAT12(uStack_396,
                                                                             CONCAT11(uStack_397,
                                                                                      uStack_398))))
                                                 )));
          uStack_5c0 = CONCAT44(uStack_38c,uStack_390);
          uStack_5e8._0_2_ = CONCAT11(uStack_3b7,uStack_3b8);
          uStack_5e8._0_3_ = CONCAT12(uStack_3b6,(undefined2)uStack_5e8);
          uStack_5e8._0_4_ = CONCAT13(uStack_3b5,(undefined3)uStack_5e8);
          uStack_5e8._0_5_ = CONCAT14(uStack_3b4,(undefined4)uStack_5e8);
          uStack_5e8._0_6_ = CONCAT15(uStack_3b3,(undefined5)uStack_5e8);
          uStack_5e8._0_7_ = CONCAT16(uStack_3b2,(undefined6)uStack_5e8);
          uStack_5e8 = CONCAT17(uStack_3b1,(undefined7)uStack_5e8);
          uStack_5e0 = uStack_3b0;
          uStack_5b0 = 0;
          uStack_5a8 = 8;
          uStack_5a0 = 0;
          uStack_598 = uVar88;
          uStack_590 = uVar96;
          uStack_588 = uVar87;
          uStack_580 = uVar14;
          puStack_570 = puVar89;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lStack_418 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lStack_418 = pdb_140f4fd10();
            *plVar86 = lStack_418;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lStack_418 + 1;
          uStack_428 = uVar87;
          uStack_420 = uVar14;
          uStack_438 = uVar88;
          uStack_430 = uVar96;
          puStack_410 = puVar89;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lStack_210 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lStack_210 = pdb_140f4fd10();
            *plVar86 = lStack_210;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lStack_210 + 1;
          uStack_3b8 = (undefined1)uStack_6c8;
          uStack_3b7 = (undefined1)((ulonglong)uStack_6c8 >> 8);
          uStack_3b6 = (undefined1)((ulonglong)uStack_6c8 >> 0x10);
          uStack_3b5 = (undefined1)((ulonglong)uStack_6c8 >> 0x18);
          uStack_3b4 = (undefined1)((ulonglong)uStack_6c8 >> 0x20);
          uStack_3b3 = (undefined1)((ulonglong)uStack_6c8 >> 0x28);
          uStack_3b2 = (undefined1)((ulonglong)uStack_6c8 >> 0x30);
          uStack_3b1 = (undefined1)((ulonglong)uStack_6c8 >> 0x38);
          uStack_3c8 = (undefined1)uStack_6d8;
          uStack_3c7 = (undefined1)(uStack_6d8 >> 8);
          uStack_3c6 = (undefined1)(uStack_6d8 >> 0x10);
          uStack_3c5 = (undefined1)(uStack_6d8 >> 0x18);
          uStack_3c4 = (undefined1)(uStack_6d8 >> 0x20);
          uStack_3c3 = (undefined1)(uStack_6d8 >> 0x28);
          uStack_3c2 = (undefined1)(uStack_6d8 >> 0x30);
          uStack_3c1 = (undefined1)(uStack_6d8 >> 0x38);
          uStack_3c0 = (undefined1)uStack_6d0;
          uStack_3bf = (undefined1)(uStack_6d0 >> 8);
          uStack_3be = (undefined1)(uStack_6d0 >> 0x10);
          uStack_3bd = (undefined1)(uStack_6d0 >> 0x18);
          uStack_3bc = (undefined1)(uStack_6d0 >> 0x20);
          uStack_3bb = (undefined1)(uStack_6d0 >> 0x28);
          uStack_3ba = (undefined1)(uStack_6d0 >> 0x30);
          uStack_3b9 = (undefined1)(uStack_6d0 >> 0x38);
          uStack_290 = uStack_668;
          uStack_288 = uStack_660;
          puStack_280 = (undefined1 *)uStack_658;
          uStack_278 = uStack_650;
          puStack_270 = (undefined1 *)lStack_648;
          puStack_268 = puStack_640;
          pub_142e32760(&uStack_3b0,&uStack_128,0x90);
          pub_142e32760(&uStack_320,&uStack_5f8,0x90);
          uStack_260 = uStack_438;
          uStack_258 = uStack_430;
          puStack_250 = (undefined1 *)uStack_428;
          uStack_248 = uStack_420;
          puStack_240 = (undefined1 *)lStack_418;
          puStack_238 = puStack_410;
          uStack_230 = uVar88;
          uStack_228 = uVar96;
          puStack_220 = (undefined1 *)uVar87;
          uStack_218 = uVar14;
          apuStack_208[0] = puVar89;
          uVar85 = pdb_1402941b0(uVar85,&uStack_3c8);
          uStack_3c8 = 0;
          uStack_3c7 = 0;
          uStack_3c6 = 0;
          uStack_3c5 = 0;
          uStack_3c4 = 0;
          uStack_3c3 = 0;
          uStack_3c2 = 0;
          uStack_3c1 = 0;
          uStack_3c0 = 8;
          uStack_3bf = 0;
          uStack_3be = 0;
          uStack_3bd = 0;
          uStack_3bc = 0;
          uStack_3bb = 0;
          uStack_3ba = 0;
          uStack_3b9 = 0;
          uStack_3b8 = 0;
          uStack_3b7 = 0;
          uStack_3b6 = 0;
          uStack_3b5 = 0;
          uStack_3b4 = 0;
          uStack_3b3 = 0;
          uStack_3b2 = 0;
          uStack_3b1 = 0;
          uVar85 = pdb_140286fc0(uVar85,&uStack_3c8);
          uStack_3c8 = 0;
          uStack_3c7 = 0;
          uStack_3c6 = 0;
          uStack_3c5 = 0;
          uStack_3c4 = 0;
          uStack_3c3 = 0;
          uStack_3c2 = 0;
          uStack_3c1 = 0;
          uStack_3c0 = 8;
          uStack_3bf = 0;
          uStack_3be = 0;
          uStack_3bd = 0;
          uStack_3bc = 0;
          uStack_3bb = 0;
          uStack_3ba = 0;
          uStack_3b9 = 0;
          uStack_3b8 = 0;
          uStack_3b7 = 0;
          uStack_3b6 = 0;
          uStack_3b5 = 0;
          uStack_3b4 = 0;
          uStack_3b3 = 0;
          uStack_3b2 = 0;
          uStack_3b1 = 0;
          uVar85 = pdb_1402721b0(uVar85,&uStack_3c8);
          uStack_3c8 = 0;
          uStack_3c7 = 0;
          uStack_3c6 = 0;
          uStack_3c5 = 0;
          uStack_3c4 = 0;
          uStack_3c3 = 0;
          uStack_3c2 = 0;
          uStack_3c1 = 0;
          uStack_3c0 = 8;
          uStack_3bf = 0;
          uStack_3be = 0;
          uStack_3bd = 0;
          uStack_3bc = 0;
          uStack_3bb = 0;
          uStack_3ba = 0;
          uStack_3b9 = 0;
          uStack_3b8 = 0;
          uStack_3b7 = 0;
          uStack_3b6 = 0;
          uStack_3b5 = 0;
          uStack_3b4 = 0;
          uStack_3b3 = 0;
          uStack_3b2 = 0;
          uStack_3b1 = 0;
          uStack_3b0 = 0;
          uStack_3a8 = 8;
          uStack_3a7 = 0;
          uStack_3a6 = 0;
          uStack_3a5 = 0;
          uStack_3a4 = 0;
          uStack_3a0 = 0;
          uStack_39f = 0;
          uStack_39e = 0;
          uStack_39d = 0;
          uStack_39c = 0;
          uStack_39b = 0;
          uStack_39a = 0;
          uStack_399 = 0;
          uVar85 = pdb_140270540(uVar85,&uStack_3c8);
          uStack_3c8 = 0;
          uStack_3c7 = 0;
          uStack_3c6 = 0;
          uStack_3c5 = 0;
          uStack_3c4 = 0;
          uStack_3c3 = 0;
          uStack_3c2 = 0;
          uStack_3c1 = 0;
          uStack_3c0 = 8;
          uStack_3bf = 0;
          uStack_3be = 0;
          uStack_3bd = 0;
          uStack_3bc = 0;
          uStack_3bb = 0;
          uStack_3ba = 0;
          uStack_3b9 = 0;
          uStack_3b8 = 0;
          uStack_3b7 = 0;
          uStack_3b6 = 0;
          uStack_3b5 = 0;
          uStack_3b4 = 0;
          uStack_3b3 = 0;
          uStack_3b2 = 0;
          uStack_3b1 = 0;
          puVar89 = &uStack_3c8;
          uVar85 = pdb_1402901f0(uVar85);
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lStack_5d8 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lStack_5d8 = pdb_140f4fd10();
            *plVar86 = lStack_5d8;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lStack_5d8 + 1;
          uStack_5e8 = uVar87;
          uStack_5e0 = uVar14;
          uStack_5f8 = uVar88;
          uStack_5f0 = uVar96;
          puStack_5d0 = puVar89;
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lVar90 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lVar90 = pdb_140f4fd10();
            *plVar86 = lVar90;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lVar90 + 1;
          uStack_3a8 = (undefined1)lStack_5d8;
          uStack_3a7 = (undefined1)((ulonglong)lStack_5d8 >> 8);
          uStack_3a6 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
          uStack_3a5 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
          uStack_3a4 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
          uStack_3a0 = SUB81(puStack_5d0,0);
          uStack_39f = (undefined1)((ulonglong)puStack_5d0 >> 8);
          uStack_39e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
          uStack_39d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
          uStack_39c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
          uStack_39b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
          uStack_39a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
          uStack_399 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
          uStack_3b8 = (undefined1)uStack_5e8;
          uStack_3b7 = uStack_5e8._1_1_;
          uStack_3b6 = uStack_5e8._2_1_;
          uStack_3b5 = uStack_5e8._3_1_;
          uStack_3b4 = uStack_5e8._4_1_;
          uStack_3b3 = uStack_5e8._5_1_;
          uStack_3b2 = uStack_5e8._6_1_;
          uStack_3b1 = uStack_5e8._7_1_;
          uStack_3b0 = uStack_5e0;
          uStack_3c8 = (undefined1)uStack_5f8;
          uStack_3c7 = (undefined1)(uStack_5f8 >> 8);
          uStack_3c6 = (undefined1)(uStack_5f8 >> 0x10);
          uStack_3c5 = (undefined1)(uStack_5f8 >> 0x18);
          uStack_3c4 = (undefined1)(uStack_5f8 >> 0x20);
          uStack_3c3 = (undefined1)(uStack_5f8 >> 0x28);
          uStack_3c2 = (undefined1)(uStack_5f8 >> 0x30);
          uStack_3c1 = (undefined1)(uStack_5f8 >> 0x38);
          uStack_3c0 = (undefined1)uStack_5f0;
          uStack_3bf = (undefined1)(uStack_5f0 >> 8);
          uStack_3be = (undefined1)(uStack_5f0 >> 0x10);
          uStack_3bd = (undefined1)(uStack_5f0 >> 0x18);
          uStack_3bc = (undefined1)(uStack_5f0 >> 0x20);
          uStack_3bb = (undefined1)(uStack_5f0 >> 0x28);
          uStack_3ba = (undefined1)(uStack_5f0 >> 0x30);
          uStack_3b9 = (undefined1)(uStack_5f0 >> 0x38);
          uStack_378 = (undefined4)lVar90;
          uStack_374 = (undefined4)((ulonglong)lVar90 >> 0x20);
          uStack_370 = SUB84(puVar89,0);
          uStack_36c = (undefined4)((ulonglong)puVar89 >> 0x20);
          puVar89 = &uStack_3c8;
          uStack_398 = uVar51;
          uStack_397 = uVar52;
          uStack_396 = uVar53;
          uStack_395 = uVar54;
          uStack_394 = uVar55;
          uStack_393 = uVar56;
          uStack_392 = uVar57;
          uStack_391 = uVar58;
          uStack_390 = uVar48;
          uStack_38c = uVar19;
          uStack_388 = uVar67;
          uStack_387 = uVar68;
          uStack_386 = uVar69;
          uStack_385 = uVar70;
          uStack_384 = uVar71;
          uStack_383 = uVar72;
          uStack_382 = uVar73;
          uStack_381 = uVar74;
          uStack_380 = uVar75;
          uStack_37f = uVar76;
          uStack_37e = uVar77;
          uStack_37d = uVar78;
          uStack_37c = uVar79;
          uStack_37b = uVar80;
          uStack_37a = uVar81;
          uStack_379 = uVar82;
          uVar85 = pdb_14029eaf0(uVar85);
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lVar90 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lVar90 = pdb_140f4fd10();
            *plVar86 = lVar90;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lVar90 + 1;
          uStack_3b0 = uVar14;
          uStack_3a8 = (undefined1)lVar90;
          uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
          uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
          uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
          uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
          uStack_3a0 = SUB81(puVar89,0);
          uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
          uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
          uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
          uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
          uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
          uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
          uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
          uStack_3c8 = uVar51;
          uStack_3c7 = uVar52;
          uStack_3c6 = uVar53;
          uStack_3c5 = uVar54;
          uStack_3c4 = uVar55;
          uStack_3c3 = uVar56;
          uStack_3c2 = uVar57;
          uStack_3c1 = uVar58;
          uStack_3c0 = uVar59;
          uStack_3bf = uVar60;
          uStack_3be = uVar61;
          uStack_3bd = uVar62;
          uStack_3bc = uVar63;
          uStack_3bb = uVar64;
          uStack_3ba = uVar65;
          uStack_3b9 = uVar66;
          uStack_3b8 = uVar67;
          uStack_3b7 = uVar68;
          uStack_3b6 = uVar69;
          uStack_3b5 = uVar70;
          uStack_3b4 = uVar71;
          uStack_3b3 = uVar72;
          uStack_3b2 = uVar73;
          uStack_3b1 = uVar74;
          uVar85 = pdb_140291ef0(uVar85,&uStack_3c8);
          puVar89 = &uStack_3c8;
          pdb_1405c83f0(puVar89);
          uVar85 = pdb_140297ff0(uVar85);
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lVar90 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lVar90 = pdb_140f4fd10();
            *plVar86 = lVar90;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lVar90 + 1;
          uStack_3b0 = uVar14;
          uStack_3a8 = (undefined1)lVar90;
          uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
          uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
          uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
          uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
          uStack_3a0 = SUB81(puVar89,0);
          uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
          uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
          uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
          uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
          uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
          uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
          uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
          puVar89 = &uStack_3c8;
          uStack_3c8 = uVar51;
          uStack_3c7 = uVar52;
          uStack_3c6 = uVar53;
          uStack_3c5 = uVar54;
          uStack_3c4 = uVar55;
          uStack_3c3 = uVar56;
          uStack_3c2 = uVar57;
          uStack_3c1 = uVar58;
          uStack_3c0 = uVar59;
          uStack_3bf = uVar60;
          uStack_3be = uVar61;
          uStack_3bd = uVar62;
          uStack_3bc = uVar63;
          uStack_3bb = uVar64;
          uStack_3ba = uVar65;
          uStack_3b9 = uVar66;
          uStack_3b8 = uVar67;
          uStack_3b7 = uVar68;
          uStack_3b6 = uVar69;
          uStack_3b5 = uVar70;
          uStack_3b4 = uVar71;
          uStack_3b3 = uVar72;
          uStack_3b2 = uVar73;
          uStack_3b1 = uVar74;
          uVar85 = pdb_140288120(uVar85);
          plVar86 = (longlong *)pdb_140f3bda0();
          if ((char)plVar86[2] == '\x01') {
            lVar90 = *plVar86;
            puVar89 = (undefined1 *)plVar86[1];
          }
          else {
            lVar90 = pdb_140f4fd10();
            *plVar86 = lVar90;
            plVar86[1] = (longlong)puVar89;
            *(undefined1 *)(plVar86 + 2) = 1;
          }
          *plVar86 = lVar90 + 1;
          uStack_3b0 = uVar14;
          uStack_3a8 = (undefined1)lVar90;
          uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
          uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
          uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
          uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
          uStack_3a0 = SUB81(puVar89,0);
          uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
          uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
          uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
          uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
          uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
          uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
          uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
          uStack_398 = 0;
          uStack_3c8 = uVar51;
          uStack_3c7 = uVar52;
          uStack_3c6 = uVar53;
          uStack_3c5 = uVar54;
          uStack_3c4 = uVar55;
          uStack_3c3 = uVar56;
          uStack_3c2 = uVar57;
          uStack_3c1 = uVar58;
          uStack_3c0 = uVar59;
          uStack_3bf = uVar60;
          uStack_3be = uVar61;
          uStack_3bd = uVar62;
          uStack_3bc = uVar63;
          uStack_3bb = uVar64;
          uStack_3ba = uVar65;
          uStack_3b9 = uVar66;
          uStack_3b8 = uVar67;
          uStack_3b7 = uVar68;
          uStack_3b6 = uVar69;
          uStack_3b5 = uVar70;
          uStack_3b4 = uVar71;
          uStack_3b3 = uVar72;
          uStack_3b2 = uVar73;
          uStack_3b1 = uVar74;
          uVar85 = pdb_140296480(uVar85,&uStack_3c8);
          plVar86 = (longlong *)pdb_14008d710(0);
          if (plVar86 != (longlong *)0x0) {
            lStack_418 = *plVar86;
            puStack_410 = (undefined1 *)plVar86[1];
            *plVar86 = *plVar86 + 1;
            uStack_428 = uVar17;
            uStack_420 = uVar18;
            uStack_438 = uVar15;
            uStack_430 = uVar16;
            plVar86 = (longlong *)pdb_14008d710(0);
            if (plVar86 == (longlong *)0x0) {
              pdb_142dc7890(&UNK_142f3dc40);
            }
            else {
              lStack_108 = *plVar86;
              puStack_100 = (undefined1 *)plVar86[1];
              *plVar86 = *plVar86 + 1;
              uStack_118 = uVar17;
              uStack_110 = uVar18;
              uStack_128 = uVar15;
              uStack_120 = uVar16;
              plVar86 = (longlong *)pdb_14008d710(0);
              if (plVar86 == (longlong *)0x0) {
                pdb_142dc7890(&UNK_142f3dc40);
              }
              else {
                lStack_5d8 = *plVar86;
                puStack_5d0 = (undefined1 *)plVar86[1];
                *plVar86 = *plVar86 + 1;
                uStack_5e8 = uVar17;
                uStack_5e0 = uVar18;
                uStack_5f8 = uVar15;
                uStack_5f0 = uVar16;
                plVar86 = (longlong *)pdb_14008d710(0);
                if (plVar86 != (longlong *)0x0) {
                  lStack_318 = *plVar86;
                  puStack_310 = (undefined1 *)plVar86[1];
                  *plVar86 = *plVar86 + 1;
                  uStack_3a8 = (undefined1)lStack_418;
                  uStack_3a7 = (undefined1)((ulonglong)lStack_418 >> 8);
                  uStack_3a6 = (undefined1)((ulonglong)lStack_418 >> 0x10);
                  uStack_3a5 = (undefined1)((ulonglong)lStack_418 >> 0x18);
                  uStack_3a4 = (undefined4)((ulonglong)lStack_418 >> 0x20);
                  uStack_3a0 = SUB81(puStack_410,0);
                  uStack_39f = (undefined1)((ulonglong)puStack_410 >> 8);
                  uStack_39e = (undefined1)((ulonglong)puStack_410 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)puStack_410 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)puStack_410 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)puStack_410 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)puStack_410 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)puStack_410 >> 0x38);
                  uStack_3b8 = (undefined1)uStack_428;
                  uStack_3b7 = (undefined1)((ulonglong)uStack_428 >> 8);
                  uStack_3b6 = (undefined1)((ulonglong)uStack_428 >> 0x10);
                  uStack_3b5 = (undefined1)((ulonglong)uStack_428 >> 0x18);
                  uStack_3b4 = (undefined1)((ulonglong)uStack_428 >> 0x20);
                  uStack_3b3 = (undefined1)((ulonglong)uStack_428 >> 0x28);
                  uStack_3b2 = (undefined1)((ulonglong)uStack_428 >> 0x30);
                  uStack_3b1 = (undefined1)((ulonglong)uStack_428 >> 0x38);
                  uStack_3b0 = uStack_420;
                  uStack_3c8 = (undefined1)uStack_438;
                  uStack_3c7 = (undefined1)(uStack_438 >> 8);
                  uStack_3c6 = (undefined1)(uStack_438 >> 0x10);
                  uStack_3c5 = (undefined1)(uStack_438 >> 0x18);
                  uStack_3c4 = (undefined1)(uStack_438 >> 0x20);
                  uStack_3c3 = (undefined1)(uStack_438 >> 0x28);
                  uStack_3c2 = (undefined1)(uStack_438 >> 0x30);
                  uStack_3c1 = (undefined1)(uStack_438 >> 0x38);
                  uStack_3c0 = (undefined1)uStack_430;
                  uStack_3bf = (undefined1)(uStack_430 >> 8);
                  uStack_3be = (undefined1)(uStack_430 >> 0x10);
                  uStack_3bd = (undefined1)(uStack_430 >> 0x18);
                  uStack_3bc = (undefined1)(uStack_430 >> 0x20);
                  uStack_3bb = (undefined1)(uStack_430 >> 0x28);
                  uStack_3ba = (undefined1)(uStack_430 >> 0x30);
                  uStack_3b9 = (undefined1)(uStack_430 >> 0x38);
                  uStack_398 = (undefined1)uStack_128;
                  uStack_397 = (undefined1)(uStack_128 >> 8);
                  uStack_396 = (undefined1)(uStack_128 >> 0x10);
                  uStack_395 = (undefined1)(uStack_128 >> 0x18);
                  uStack_394 = (undefined1)(uStack_128 >> 0x20);
                  uStack_393 = (undefined1)(uStack_128 >> 0x28);
                  uStack_392 = (undefined1)(uStack_128 >> 0x30);
                  uStack_391 = (undefined1)(uStack_128 >> 0x38);
                  uStack_390 = (undefined4)uStack_120;
                  uStack_38c = (undefined4)(uStack_120 >> 0x20);
                  uStack_388 = (undefined1)uStack_118;
                  uStack_387 = (undefined1)((ulonglong)uStack_118 >> 8);
                  uStack_386 = (undefined1)((ulonglong)uStack_118 >> 0x10);
                  uStack_385 = (undefined1)((ulonglong)uStack_118 >> 0x18);
                  uStack_384 = (undefined1)((ulonglong)uStack_118 >> 0x20);
                  uStack_383 = (undefined1)((ulonglong)uStack_118 >> 0x28);
                  uStack_382 = (undefined1)((ulonglong)uStack_118 >> 0x30);
                  uStack_381 = (undefined1)((ulonglong)uStack_118 >> 0x38);
                  uStack_380 = (undefined1)uStack_110;
                  uStack_37f = (undefined1)(uStack_110 >> 8);
                  uStack_37e = (undefined1)(uStack_110 >> 0x10);
                  uStack_37d = (undefined1)(uStack_110 >> 0x18);
                  uStack_37c = (undefined1)(uStack_110 >> 0x20);
                  uStack_37b = (undefined1)(uStack_110 >> 0x28);
                  uStack_37a = (undefined1)(uStack_110 >> 0x30);
                  uStack_379 = (undefined1)(uStack_110 >> 0x38);
                  uStack_378 = (undefined4)lStack_108;
                  uStack_374 = (undefined4)((ulonglong)lStack_108 >> 0x20);
                  uStack_370 = SUB84(puStack_100,0);
                  uStack_36c = (undefined4)((ulonglong)puStack_100 >> 0x20);
                  uStack_368 = (undefined1)uStack_5f8;
                  uStack_367 = uStack_5f8._1_1_;
                  uStack_366 = uStack_5f8._2_1_;
                  uStack_365 = uStack_5f8._3_1_;
                  uStack_364 = uStack_5f8._4_1_;
                  uStack_363 = uStack_5f8._5_1_;
                  uStack_362 = uStack_5f8._6_1_;
                  uStack_361 = uStack_5f8._7_1_;
                  uStack_360 = (undefined1)uStack_5f0;
                  uStack_35f = uStack_5f0._1_1_;
                  uStack_35e = uStack_5f0._2_1_;
                  uStack_35d = uStack_5f0._3_1_;
                  uStack_35c = uStack_5f0._4_1_;
                  uStack_35b = uStack_5f0._5_1_;
                  uStack_35a = uStack_5f0._6_1_;
                  uStack_359 = uStack_5f0._7_1_;
                  uStack_358 = (undefined1)uStack_5e8;
                  uStack_357 = (undefined1)((ulonglong)uStack_5e8 >> 8);
                  uStack_356 = (undefined1)((ulonglong)uStack_5e8 >> 0x10);
                  uStack_355 = (undefined1)((ulonglong)uStack_5e8 >> 0x18);
                  uStack_354 = (undefined1)((ulonglong)uStack_5e8 >> 0x20);
                  uStack_353 = (undefined1)((ulonglong)uStack_5e8 >> 0x28);
                  uStack_352 = (undefined1)((ulonglong)uStack_5e8 >> 0x30);
                  uStack_351 = (undefined1)((ulonglong)uStack_5e8 >> 0x38);
                  uStack_350 = (undefined1)uStack_5e0;
                  uStack_34f = (undefined1)(uStack_5e0 >> 8);
                  uStack_34e = (undefined1)(uStack_5e0 >> 0x10);
                  uStack_34d = (undefined1)(uStack_5e0 >> 0x18);
                  uStack_34c = (undefined1)(uStack_5e0 >> 0x20);
                  uStack_34b = (undefined1)(uStack_5e0 >> 0x28);
                  uStack_34a = (undefined1)(uStack_5e0 >> 0x30);
                  uStack_349 = (undefined1)(uStack_5e0 >> 0x38);
                  uStack_348 = (undefined1)lStack_5d8;
                  uStack_347 = (undefined1)((ulonglong)lStack_5d8 >> 8);
                  uStack_346 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
                  uStack_345 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
                  uStack_344 = (undefined1)((ulonglong)lStack_5d8 >> 0x20);
                  uStack_343 = (undefined1)((ulonglong)lStack_5d8 >> 0x28);
                  uStack_342 = (undefined1)((ulonglong)lStack_5d8 >> 0x30);
                  uStack_341 = (undefined1)((ulonglong)lStack_5d8 >> 0x38);
                  uStack_340 = SUB81(puStack_5d0,0);
                  uStack_33f = (undefined1)((ulonglong)puStack_5d0 >> 8);
                  uStack_33e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
                  uStack_33d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
                  uStack_33c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
                  uStack_33b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
                  uStack_33a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
                  uStack_339 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
                  uStack_328 = uVar17;
                  uStack_320 = uVar18;
                  uStack_338 = (undefined4)uVar15;
                  uStack_334 = (undefined4)(uVar15 >> 0x20);
                  puVar89 = &uStack_3c8;
                  uStack_330 = uVar28;
                  uStack_32c = uVar30;
                  uVar85 = pdb_140279890(uVar85);
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lVar90 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lVar90 = pdb_140f4fd10();
                    *plVar86 = lVar90;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lVar90 + 1;
                  uStack_3b0 = uVar14;
                  uStack_3a8 = (undefined1)lVar90;
                  uStack_3a7 = (undefined1)((ulonglong)lVar90 >> 8);
                  uStack_3a6 = (undefined1)((ulonglong)lVar90 >> 0x10);
                  uStack_3a5 = (undefined1)((ulonglong)lVar90 >> 0x18);
                  uStack_3a4 = (undefined4)((ulonglong)lVar90 >> 0x20);
                  uStack_3a0 = SUB81(puVar89,0);
                  uStack_39f = (undefined1)((ulonglong)puVar89 >> 8);
                  uStack_39e = (undefined1)((ulonglong)puVar89 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)puVar89 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)puVar89 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)puVar89 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)puVar89 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)puVar89 >> 0x38);
                  puVar89 = &uStack_3c8;
                  uStack_3c8 = uVar51;
                  uStack_3c7 = uVar52;
                  uStack_3c6 = uVar53;
                  uStack_3c5 = uVar54;
                  uStack_3c4 = uVar55;
                  uStack_3c3 = uVar56;
                  uStack_3c2 = uVar57;
                  uStack_3c1 = uVar58;
                  uStack_3c0 = uVar59;
                  uStack_3bf = uVar60;
                  uStack_3be = uVar61;
                  uStack_3bd = uVar62;
                  uStack_3bc = uVar63;
                  uStack_3bb = uVar64;
                  uStack_3ba = uVar65;
                  uStack_3b9 = uVar66;
                  uStack_3b8 = uVar67;
                  uStack_3b7 = uVar68;
                  uStack_3b6 = uVar69;
                  uStack_3b5 = uVar70;
                  uStack_3b4 = uVar71;
                  uStack_3b3 = uVar72;
                  uStack_3b2 = uVar73;
                  uStack_3b1 = uVar74;
                  uVar85 = pdb_140280340(uVar85);
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_6b8 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_6b8 = pdb_140f4fd10();
                    *plVar86 = lStack_6b8;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_6b8 + 1;
                  uStack_6c8 = uVar87;
                  uStack_6c0 = uVar14;
                  uStack_6d8 = uVar88;
                  uStack_6d0 = uVar96;
                  puStack_6b0 = puVar89;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_648 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_648 = pdb_140f4fd10();
                    *plVar86 = lStack_648;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_648 + 1;
                  uStack_658 = uVar87;
                  uStack_650 = uVar14;
                  uStack_668 = uVar88;
                  uStack_660 = uVar96;
                  puStack_640 = puVar89;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_418 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_418 = pdb_140f4fd10();
                    *plVar86 = lStack_418;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_418 + 1;
                  uStack_428 = uVar87;
                  uStack_420 = uVar14;
                  uStack_438 = uVar88;
                  uStack_430 = uVar96;
                  puStack_410 = puVar89;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_108 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_108 = pdb_140f4fd10();
                    *plVar86 = lStack_108;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_108 + 1;
                  uStack_118 = uVar87;
                  uStack_110 = uVar14;
                  uStack_128 = uVar88;
                  uStack_120 = uVar96;
                  uStack_5f0 = 0;
                  uStack_5e8 = 0;
                  uStack_5e0 = 0;
                  lStack_5d8 = 0;
                  puStack_5d0 = (undefined1 *)0x0;
                  uStack_744 = 0;
                  uStack_740 = 0;
                  uStack_73c = 0;
                  uStack_738 = 0;
                  puStack_100 = puVar89;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    uStack_248 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    uStack_248 = pdb_140f4fd10();
                    *plVar86 = uStack_248;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = uStack_248 + 1;
                  uStack_308 = lStack_6b8;
                  puStack_300 = puStack_6b0;
                  lStack_318 = uStack_6c8;
                  puStack_310 = (undefined1 *)uStack_6c0;
                  uStack_328 = uStack_6d8;
                  uStack_320 = uStack_6d0;
                  uStack_2f8 = uStack_668;
                  uStack_2f0 = uStack_660;
                  uStack_2e8 = uStack_658;
                  puStack_2e0 = (undefined1 *)uStack_650;
                  uStack_2d8 = lStack_648;
                  puStack_2d0 = puStack_640;
                  uStack_2c8 = uStack_438;
                  puStack_2c0 = (undefined1 *)uStack_430;
                  lStack_2b8 = uStack_428;
                  puStack_2b0 = (undefined1 *)uStack_420;
                  uStack_2a8 = lStack_418;
                  puStack_2a0 = puStack_410;
                  uStack_278 = lStack_108;
                  puStack_270 = puStack_100;
                  uStack_288 = uStack_118;
                  puStack_280 = (undefined1 *)uStack_110;
                  uStack_298 = uStack_128;
                  uStack_290 = uStack_120;
                  uStack_3c8 = 0;
                  uStack_3c7 = 0;
                  uStack_3c6 = 0;
                  uStack_3c5 = 0;
                  uStack_3c4 = (undefined1)uStack_5f8;
                  uStack_3c3 = (undefined1)(uStack_5f8 >> 8);
                  uStack_3c2 = (undefined1)(uStack_5f8 >> 0x10);
                  uStack_3c1 = (undefined1)(uStack_5f8 >> 0x18);
                  uStack_3c0 = (undefined1)(uStack_5f8 >> 0x20);
                  uStack_3bf = (undefined1)(uStack_5f8 >> 0x28);
                  uStack_3be = (undefined1)(uStack_5f8 >> 0x30);
                  uStack_3bd = (undefined1)(uStack_5f8 >> 0x38);
                  uStack_3bc = (undefined1)uStack_5f0;
                  uStack_3bb = (undefined1)(uStack_5f0 >> 8);
                  uStack_3ba = (undefined1)(uStack_5f0 >> 0x10);
                  uStack_3b9 = (undefined1)(uStack_5f0 >> 0x18);
                  uStack_3b8 = (undefined1)(uStack_5f0 >> 0x20);
                  uStack_3b7 = (undefined1)(uStack_5f0 >> 0x28);
                  uStack_3b6 = (undefined1)(uStack_5f0 >> 0x30);
                  uStack_3b5 = (undefined1)(uStack_5f0 >> 0x38);
                  uStack_3b4 = (undefined1)uStack_5e8;
                  uStack_3b3 = uStack_5e8._1_1_;
                  uStack_3b2 = uStack_5e8._2_1_;
                  uStack_3b1 = uStack_5e8._3_1_;
                  uStack_3b0 = CONCAT17(uStack_5e0._3_1_,
                                        CONCAT16(uStack_5e0._2_1_,
                                                 CONCAT15(uStack_5e0._1_1_,
                                                          CONCAT14((undefined1)uStack_5e0,
                                                                   (int)((ulonglong)uStack_5e8 >>
                                                                        0x20)))));
                  uStack_3a8 = uStack_5e0._4_1_;
                  uStack_3a7 = uStack_5e0._5_1_;
                  uStack_3a6 = uStack_5e0._6_1_;
                  uStack_3a5 = uStack_5e0._7_1_;
                  uStack_3a4 = (undefined4)lStack_5d8;
                  uStack_3a0 = (undefined1)((ulonglong)lStack_5d8 >> 0x20);
                  uStack_39f = (undefined1)((ulonglong)lStack_5d8 >> 0x28);
                  uStack_39e = (undefined1)((ulonglong)lStack_5d8 >> 0x30);
                  uStack_39d = (undefined1)((ulonglong)lStack_5d8 >> 0x38);
                  uStack_39c = SUB81(puStack_5d0,0);
                  uStack_39b = (undefined1)((ulonglong)puStack_5d0 >> 8);
                  uStack_39a = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
                  uStack_399 = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
                  uStack_398 = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
                  uStack_397 = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
                  uStack_396 = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
                  uStack_395 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
                  uStack_394 = 0;
                  uStack_393 = 0;
                  uStack_392 = 0;
                  uStack_391 = 0;
                  uStack_38c = 0;
                  uStack_388 = 0;
                  uStack_387 = 0;
                  uStack_386 = 0;
                  uStack_385 = 0;
                  uStack_384 = (undefined1)uStack_75c;
                  uStack_383 = (undefined1)((uint)uStack_75c >> 8);
                  uStack_382 = (undefined1)((uint)uStack_75c >> 0x10);
                  uStack_381 = (undefined1)((uint)uStack_75c >> 0x18);
                  uStack_380 = 0;
                  uStack_37f = 0;
                  uStack_37e = 0;
                  uStack_37d = 0;
                  uStack_37c = 0;
                  uStack_37b = 0;
                  uStack_37a = 0;
                  uStack_379 = 0;
                  uStack_378 = 0;
                  uStack_374 = 0;
                  uStack_370 = 0;
                  uStack_35c = 0;
                  uStack_35b = 0;
                  uStack_35a = 0;
                  uStack_359 = 0;
                  uStack_368 = 0;
                  uStack_367 = 0;
                  uStack_366 = 0;
                  uStack_365 = 0;
                  uStack_364 = 0;
                  uStack_363 = 0;
                  uStack_362 = 0;
                  uStack_361 = 0;
                  uStack_360 = 0;
                  uStack_35f = 0;
                  uStack_35e = 0;
                  uStack_35d = 0;
                  uStack_358 = 0;
                  uStack_357 = 0;
                  uStack_356 = 0;
                  uStack_355 = 0;
                  uStack_344 = 0;
                  uStack_343 = 0;
                  uStack_342 = 0;
                  uStack_341 = 0;
                  uStack_354 = (undefined1)uStack_784;
                  uStack_353 = (undefined1)((uint)uStack_784 >> 8);
                  uStack_352 = (undefined1)((uint)uStack_784 >> 0x10);
                  uStack_351 = (undefined1)((uint)uStack_784 >> 0x18);
                  uStack_350 = 0;
                  uStack_34f = 0;
                  uStack_34e = 0;
                  uStack_34d = 0;
                  uStack_34c = 0;
                  uStack_34b = 0;
                  uStack_34a = 0;
                  uStack_349 = 0;
                  uStack_348 = 0;
                  uStack_347 = 0;
                  uStack_346 = 0;
                  uStack_345 = 0;
                  uStack_340 = 0;
                  uStack_33f = 0;
                  uStack_33e = 0;
                  uStack_33d = 0;
                  uStack_32c = uStack_738;
                  uStack_33c = (undefined1)uStack_748;
                  uStack_33b = (undefined1)((uint)uStack_748 >> 8);
                  uStack_33a = (undefined1)((uint)uStack_748 >> 0x10);
                  uStack_339 = (undefined1)((uint)uStack_748 >> 0x18);
                  uStack_338 = uStack_744;
                  uStack_334 = uStack_740;
                  uStack_330 = uStack_73c;
                  uStack_258 = uVar87;
                  puStack_250 = (undefined1 *)uVar14;
                  puStack_268 = (undefined1 *)uVar88;
                  uStack_260 = uVar96;
                  puVar91 = &uStack_3c8;
                  puStack_240 = puVar89;
                  uVar85 = pdb_1402958e0(uVar85);
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lVar90 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lVar90 = pdb_140f4fd10();
                    *plVar86 = lVar90;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lVar90 + 1;
                  uStack_3c8 = 0;
                  uStack_3c7 = 0;
                  uStack_3c6 = 0;
                  uStack_3c5 = 0;
                  uStack_3c4 = 0;
                  uStack_3c3 = 0;
                  uStack_3c2 = 0;
                  uStack_3c1 = 0;
                  uStack_3c0 = 8;
                  uStack_3bf = 0;
                  uStack_3be = 0;
                  uStack_3bd = 0;
                  uStack_3bc = 0;
                  uStack_3bb = 0;
                  uStack_3ba = 0;
                  uStack_3b9 = 0;
                  uStack_3b8 = 0;
                  uStack_3b7 = 0;
                  uStack_3b6 = 0;
                  uStack_3b5 = 0;
                  uStack_3b4 = 0;
                  uStack_3b3 = 0;
                  uStack_3b2 = 0;
                  uStack_3b1 = 0;
                  uStack_3b0 = uVar88;
                  uStack_390 = (undefined4)lVar90;
                  uStack_38c = (undefined4)((ulonglong)lVar90 >> 0x20);
                  uStack_388 = SUB81(puVar91,0);
                  uStack_387 = (undefined1)((ulonglong)puVar91 >> 8);
                  uStack_386 = (undefined1)((ulonglong)puVar91 >> 0x10);
                  uStack_385 = (undefined1)((ulonglong)puVar91 >> 0x18);
                  uStack_384 = (undefined1)((ulonglong)puVar91 >> 0x20);
                  uStack_383 = (undefined1)((ulonglong)puVar91 >> 0x28);
                  uStack_382 = (undefined1)((ulonglong)puVar91 >> 0x30);
                  uStack_381 = (undefined1)((ulonglong)puVar91 >> 0x38);
                  uStack_3a8 = uVar59;
                  uStack_3a7 = uVar60;
                  uStack_3a6 = uVar61;
                  uStack_3a5 = uVar62;
                  uStack_3a4 = uVar19;
                  uStack_3a0 = uVar67;
                  uStack_39f = uVar68;
                  uStack_39e = uVar69;
                  uStack_39d = uVar70;
                  uStack_39c = uVar71;
                  uStack_39b = uVar72;
                  uStack_39a = uVar73;
                  uStack_399 = uVar74;
                  uStack_398 = uVar75;
                  uStack_397 = uVar76;
                  uStack_396 = uVar77;
                  uStack_395 = uVar78;
                  uStack_394 = uVar79;
                  uStack_393 = uVar80;
                  uStack_392 = uVar81;
                  uStack_391 = uVar82;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_578 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_578 = pdb_140f4fd10();
                    *plVar86 = lStack_578;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_578 + 1;
                  uStack_5b8 = CONCAT17(uStack_381,
                                        CONCAT16(uStack_382,
                                                 CONCAT15(uStack_383,
                                                          CONCAT14(uStack_384,
                                                                   CONCAT13(uStack_385,
                                                                            CONCAT12(uStack_386,
                                                                                     CONCAT11(
                                                  uStack_387,uStack_388)))))));
                  uStack_5f8 = CONCAT17(uStack_3c1,
                                        CONCAT16(uStack_3c2,
                                                 CONCAT15(uStack_3c3,
                                                          CONCAT14(uStack_3c4,
                                                                   CONCAT13(uStack_3c5,
                                                                            CONCAT12(uStack_3c6,
                                                                                     CONCAT11(
                                                  uStack_3c7,uStack_3c8)))))));
                  uStack_5f0 = CONCAT17(uStack_3b9,
                                        CONCAT16(uStack_3ba,
                                                 CONCAT15(uStack_3bb,
                                                          CONCAT14(uStack_3bc,
                                                                   CONCAT13(uStack_3bd,
                                                                            CONCAT12(uStack_3be,
                                                                                     CONCAT11(
                                                  uStack_3bf,uStack_3c0)))))));
                  lStack_5d8 = CONCAT44(uStack_3a4,
                                        CONCAT13(uStack_3a5,
                                                 CONCAT12(uStack_3a6,CONCAT11(uStack_3a7,uStack_3a8)
                                                         )));
                  puStack_5d0 = (undefined1 *)
                                CONCAT17(uStack_399,
                                         CONCAT16(uStack_39a,
                                                  CONCAT15(uStack_39b,
                                                           CONCAT14(uStack_39c,
                                                                    CONCAT13(uStack_39d,
                                                                             CONCAT12(uStack_39e,
                                                                                      CONCAT11(
                                                  uStack_39f,uStack_3a0)))))));
                  uStack_5c8 = CONCAT17(uStack_391,
                                        CONCAT16(uStack_392,
                                                 CONCAT15(uStack_393,
                                                          CONCAT14(uStack_394,
                                                                   CONCAT13(uStack_395,
                                                                            CONCAT12(uStack_396,
                                                                                     CONCAT11(
                                                  uStack_397,uStack_398)))))));
                  uStack_5c0 = CONCAT44(uStack_38c,uStack_390);
                  uStack_5e8._0_2_ = CONCAT11(uStack_3b7,uStack_3b8);
                  uStack_5e8._0_3_ = CONCAT12(uStack_3b6,(undefined2)uStack_5e8);
                  uStack_5e8._0_4_ = CONCAT13(uStack_3b5,(undefined3)uStack_5e8);
                  uStack_5e8._0_5_ = CONCAT14(uStack_3b4,(undefined4)uStack_5e8);
                  uStack_5e8._0_6_ = CONCAT15(uStack_3b3,(undefined5)uStack_5e8);
                  uStack_5e8._0_7_ = CONCAT16(uStack_3b2,(undefined6)uStack_5e8);
                  uStack_5e8 = CONCAT17(uStack_3b1,(undefined7)uStack_5e8);
                  uStack_5e0 = uStack_3b0;
                  uStack_5b0 = 0;
                  uStack_5a8 = 8;
                  uStack_5a0 = 0;
                  uStack_598 = uVar88;
                  uStack_590 = uVar96;
                  uStack_588 = uVar87;
                  uStack_580 = uVar14;
                  puStack_570 = puVar91;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_728 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_728 = pdb_140f4fd10();
                    *plVar86 = lStack_728;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_728 + 1;
                  uStack_730 = uVar14;
                  uStack_748 = uVar84;
                  uStack_744 = uVar83;
                  uStack_740 = uVar48;
                  uStack_73c = uVar19;
                  uStack_738 = uVar49;
                  uStack_734 = uVar50;
                  puStack_720 = puVar91;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_6b8 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_6b8 = pdb_140f4fd10();
                    *plVar86 = lStack_6b8;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_6b8 + 1;
                  uStack_6c8 = uVar87;
                  uStack_6c0 = uVar14;
                  uStack_6d8 = uVar88;
                  uStack_6d0 = uVar96;
                  puStack_6b0 = puVar91;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_648 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_648 = pdb_140f4fd10();
                    *plVar86 = lStack_648;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_648 + 1;
                  uStack_658 = uVar87;
                  uStack_650 = uVar14;
                  uStack_668 = uVar88;
                  uStack_660 = uVar96;
                  puStack_640 = puVar91;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_418 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_418 = pdb_140f4fd10();
                    *plVar86 = lStack_418;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_418 + 1;
                  uStack_428 = uVar87;
                  uStack_420 = uVar14;
                  uStack_438 = uVar88;
                  uStack_430 = uVar96;
                  puStack_410 = puVar91;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_108 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_108 = pdb_140f4fd10();
                    *plVar86 = lStack_108;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_108 + 1;
                  uStack_118 = uVar87;
                  uStack_110 = uVar14;
                  uStack_128 = uVar88;
                  uStack_120 = uVar96;
                  puStack_100 = puVar91;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lVar90 = *plVar86;
                    puVar91 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lVar90 = pdb_140f4fd10();
                    *plVar86 = lVar90;
                    plVar86[1] = (longlong)puVar91;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lVar90 + 1;
                  puVar89 = &uStack_3c8;
                  pub_142e32760(puVar89,&uStack_5f8,0x90);
                  uStack_328 = CONCAT44(uStack_734,uStack_738);
                  uStack_338 = uStack_748;
                  uStack_334 = uStack_744;
                  uStack_330 = uStack_740;
                  uStack_32c = uStack_73c;
                  uStack_320 = uStack_730;
                  lStack_318 = lStack_728;
                  puStack_310 = puStack_720;
                  uStack_308 = uStack_6d8;
                  puStack_300 = (undefined1 *)uStack_6d0;
                  uStack_2f8 = uStack_6c8;
                  uStack_2f0 = uStack_6c0;
                  uStack_2e8 = lStack_6b8;
                  puStack_2e0 = puStack_6b0;
                  uStack_2d8 = uStack_668;
                  puStack_2d0 = (undefined1 *)uStack_660;
                  uStack_2c8 = uStack_658;
                  puStack_2c0 = (undefined1 *)uStack_650;
                  lStack_2b8 = lStack_648;
                  puStack_2b0 = puStack_640;
                  uStack_288 = lStack_418;
                  puStack_280 = puStack_410;
                  uStack_298 = uStack_428;
                  uStack_290 = uStack_420;
                  uStack_2a8 = uStack_438;
                  puStack_2a0 = (undefined1 *)uStack_430;
                  uStack_278 = uStack_128;
                  puStack_270 = (undefined1 *)uStack_120;
                  puStack_268 = (undefined1 *)uStack_118;
                  uStack_260 = uStack_110;
                  uStack_258 = lStack_108;
                  puStack_250 = puStack_100;
                  uStack_248 = uVar88;
                  puStack_240 = (undefined1 *)uVar96;
                  puStack_238 = (undefined1 *)uVar87;
                  uStack_230 = uVar14;
                  uStack_228 = lVar90;
                  puStack_220 = puVar91;
                  uVar85 = pdb_1402995e0(uVar85);
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lStack_5d8 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lStack_5d8 = pdb_140f4fd10();
                    *plVar86 = lStack_5d8;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lStack_5d8 + 1;
                  uStack_5e8 = uVar87;
                  uStack_5e0 = uVar14;
                  uStack_5f8 = uVar88;
                  uStack_5f0 = uVar96;
                  puStack_5d0 = puVar89;
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lVar90 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lVar90 = pdb_140f4fd10();
                    *plVar86 = lVar90;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lVar90 + 1;
                  uStack_3a8 = (undefined1)lStack_5d8;
                  uStack_3a7 = (undefined1)((ulonglong)lStack_5d8 >> 8);
                  uStack_3a6 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
                  uStack_3a5 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
                  uStack_3a4 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
                  uStack_3a0 = SUB81(puStack_5d0,0);
                  uStack_39f = (undefined1)((ulonglong)puStack_5d0 >> 8);
                  uStack_39e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
                  uStack_3b8 = (undefined1)uStack_5e8;
                  uStack_3b7 = uStack_5e8._1_1_;
                  uStack_3b6 = uStack_5e8._2_1_;
                  uStack_3b5 = uStack_5e8._3_1_;
                  uStack_3b4 = uStack_5e8._4_1_;
                  uStack_3b3 = uStack_5e8._5_1_;
                  uStack_3b2 = uStack_5e8._6_1_;
                  uStack_3b1 = uStack_5e8._7_1_;
                  uStack_3b0 = uStack_5e0;
                  uStack_3c8 = (undefined1)uStack_5f8;
                  uStack_3c7 = (undefined1)(uStack_5f8 >> 8);
                  uStack_3c6 = (undefined1)(uStack_5f8 >> 0x10);
                  uStack_3c5 = (undefined1)(uStack_5f8 >> 0x18);
                  uStack_3c4 = (undefined1)(uStack_5f8 >> 0x20);
                  uStack_3c3 = (undefined1)(uStack_5f8 >> 0x28);
                  uStack_3c2 = (undefined1)(uStack_5f8 >> 0x30);
                  uStack_3c1 = (undefined1)(uStack_5f8 >> 0x38);
                  uStack_3c0 = (undefined1)uStack_5f0;
                  uStack_3bf = (undefined1)(uStack_5f0 >> 8);
                  uStack_3be = (undefined1)(uStack_5f0 >> 0x10);
                  uStack_3bd = (undefined1)(uStack_5f0 >> 0x18);
                  uStack_3bc = (undefined1)(uStack_5f0 >> 0x20);
                  uStack_3bb = (undefined1)(uStack_5f0 >> 0x28);
                  uStack_3ba = (undefined1)(uStack_5f0 >> 0x30);
                  uStack_3b9 = (undefined1)(uStack_5f0 >> 0x38);
                  uStack_378 = (undefined4)lVar90;
                  uStack_374 = (undefined4)((ulonglong)lVar90 >> 0x20);
                  uStack_370 = SUB84(puVar89,0);
                  uStack_36c = (undefined4)((ulonglong)puVar89 >> 0x20);
                  uStack_368 = 0;
                  uStack_367 = 0;
                  uStack_366 = 0;
                  uStack_365 = 0;
                  uStack_364 = 0;
                  uStack_363 = 0;
                  uStack_362 = 0;
                  uStack_361 = 0;
                  uStack_360 = 0;
                  uStack_35f = 0;
                  uStack_35e = 0;
                  uStack_35d = 0;
                  uStack_35c = 0;
                  uStack_35b = 0;
                  uStack_35a = 0;
                  uStack_359 = 0;
                  uStack_358 = 0;
                  uStack_357 = 0;
                  uStack_356 = 0;
                  uStack_355 = 0;
                  uStack_354 = 0;
                  uStack_353 = 0;
                  uStack_352 = 0;
                  uStack_351 = 0;
                  uStack_350 = 0;
                  uStack_34f = 0;
                  uStack_34e = 0;
                  uStack_34d = 0;
                  uStack_34c = 0;
                  uStack_34b = 0;
                  uStack_34a = 0;
                  uStack_349 = 0;
                  uStack_348 = 0;
                  uStack_347 = 0;
                  uStack_346 = 0;
                  uStack_345 = 0;
                  uStack_344 = 0;
                  uStack_343 = 0;
                  uStack_342 = 0;
                  uStack_341 = 0;
                  puVar89 = &uStack_3c8;
                  uStack_398 = uVar51;
                  uStack_397 = uVar52;
                  uStack_396 = uVar53;
                  uStack_395 = uVar54;
                  uStack_394 = uVar55;
                  uStack_393 = uVar56;
                  uStack_392 = uVar57;
                  uStack_391 = uVar58;
                  uStack_390 = uVar48;
                  uStack_38c = uVar19;
                  uStack_388 = uVar67;
                  uStack_387 = uVar68;
                  uStack_386 = uVar69;
                  uStack_385 = uVar70;
                  uStack_384 = uVar71;
                  uStack_383 = uVar72;
                  uStack_382 = uVar73;
                  uStack_381 = uVar74;
                  uStack_380 = uVar75;
                  uStack_37f = uVar76;
                  uStack_37e = uVar77;
                  uStack_37d = uVar78;
                  uStack_37c = uVar79;
                  uStack_37b = uVar80;
                  uStack_37a = uVar81;
                  uStack_379 = uVar82;
                  uVar85 = pdb_14027d130(uVar85);
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lVar90 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lVar90 = pdb_140f4fd10();
                    *plVar86 = lVar90;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lVar90 + 1;
                  uStack_3b0 = uVar87;
                  uStack_3a4 = (undefined4)(uVar14 >> 0x20);
                  uVar19 = uStack_3a4;
                  uStack_3a0 = (undefined1)lVar90;
                  uStack_39f = (undefined1)((ulonglong)lVar90 >> 8);
                  uStack_39e = (undefined1)((ulonglong)lVar90 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)lVar90 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)lVar90 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)lVar90 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)lVar90 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)lVar90 >> 0x38);
                  uStack_398 = SUB81(puVar89,0);
                  uStack_397 = (undefined1)((ulonglong)puVar89 >> 8);
                  uStack_396 = (undefined1)((ulonglong)puVar89 >> 0x10);
                  uStack_395 = (undefined1)((ulonglong)puVar89 >> 0x18);
                  uStack_394 = (undefined1)((ulonglong)puVar89 >> 0x20);
                  uStack_393 = (undefined1)((ulonglong)puVar89 >> 0x28);
                  uStack_392 = (undefined1)((ulonglong)puVar89 >> 0x30);
                  uStack_391 = (undefined1)((ulonglong)puVar89 >> 0x38);
                  uStack_3c8 = 0;
                  uStack_3c7 = 0;
                  uStack_3c6 = 0;
                  uStack_3c5 = 0;
                  uStack_390 = 0;
                  uStack_38c = 0;
                  uStack_388 = 0;
                  uStack_387 = 0;
                  uStack_386 = 0;
                  uStack_385 = 0;
                  uStack_384 = 0;
                  uStack_383 = 0;
                  uStack_382 = 0;
                  uStack_381 = 0;
                  puVar89 = &uStack_3c8;
                  uStack_3c0 = uVar51;
                  uStack_3bf = uVar52;
                  uStack_3be = uVar53;
                  uStack_3bd = uVar54;
                  uStack_3bc = uVar55;
                  uStack_3bb = uVar56;
                  uStack_3ba = uVar57;
                  uStack_3b9 = uVar58;
                  uStack_3b8 = uVar59;
                  uStack_3b7 = uVar60;
                  uStack_3b6 = uVar61;
                  uStack_3b5 = uVar62;
                  uStack_3b4 = uVar63;
                  uStack_3b3 = uVar64;
                  uStack_3b2 = uVar65;
                  uStack_3b1 = uVar66;
                  uStack_3a8 = uVar75;
                  uStack_3a7 = uVar76;
                  uStack_3a6 = uVar77;
                  uStack_3a5 = uVar78;
                  uVar85 = pdb_140287b40(uVar85);
                  plVar86 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar86[2] == '\x01') {
                    lVar90 = *plVar86;
                    puVar89 = (undefined1 *)plVar86[1];
                  }
                  else {
                    lVar90 = pdb_140f4fd10();
                    *plVar86 = lVar90;
                    plVar86[1] = (longlong)puVar89;
                    *(undefined1 *)(plVar86 + 2) = 1;
                  }
                  *plVar86 = lVar90 + 1;
                  uStack_3b0 = uVar87;
                  uStack_3a0 = (undefined1)lVar90;
                  uStack_39f = (undefined1)((ulonglong)lVar90 >> 8);
                  uStack_39e = (undefined1)((ulonglong)lVar90 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)lVar90 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)lVar90 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)lVar90 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)lVar90 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)lVar90 >> 0x38);
                  uStack_398 = SUB81(puVar89,0);
                  uStack_397 = (undefined1)((ulonglong)puVar89 >> 8);
                  uStack_396 = (undefined1)((ulonglong)puVar89 >> 0x10);
                  uStack_395 = (undefined1)((ulonglong)puVar89 >> 0x18);
                  uStack_394 = (undefined1)((ulonglong)puVar89 >> 0x20);
                  uStack_393 = (undefined1)((ulonglong)puVar89 >> 0x28);
                  uStack_392 = (undefined1)((ulonglong)puVar89 >> 0x30);
                  uStack_391 = (undefined1)((ulonglong)puVar89 >> 0x38);
                  uStack_3c8 = 0;
                  uStack_3c7 = 0;
                  uStack_3c6 = 0;
                  uStack_3c5 = 0;
                  uStack_390 = 0;
                  uStack_38c = 0;
                  uStack_388 = 0;
                  uStack_387 = 0;
                  uStack_386 = 0;
                  uStack_385 = 0;
                  uStack_384 = 0;
                  uStack_383 = 0;
                  uStack_382 = 0;
                  uStack_381 = 0;
                  uStack_380 = 0;
                  uStack_37f = 0;
                  uStack_37e = 0;
                  uStack_37d = 0;
                  uStack_37c = 0;
                  uStack_37b = 0;
                  uStack_37a = 0;
                  uStack_379 = 0;
                  uStack_378 = 0;
                  uStack_3c0 = uVar51;
                  uStack_3bf = uVar52;
                  uStack_3be = uVar53;
                  uStack_3bd = uVar54;
                  uStack_3bc = uVar55;
                  uStack_3bb = uVar56;
                  uStack_3ba = uVar57;
                  uStack_3b9 = uVar58;
                  uStack_3b8 = uVar59;
                  uStack_3b7 = uVar60;
                  uStack_3b6 = uVar61;
                  uStack_3b5 = uVar62;
                  uStack_3b4 = uVar63;
                  uStack_3b3 = uVar64;
                  uStack_3b2 = uVar65;
                  uStack_3b1 = uVar66;
                  uStack_3a8 = uVar75;
                  uStack_3a7 = uVar76;
                  uStack_3a6 = uVar77;
                  uStack_3a5 = uVar78;
                  uStack_3a4 = uVar19;
                  uVar85 = pdb_140273e40(uVar85,&uStack_3c8);
                  pdb_140606320(&uStack_3c8);
                  pdb_1405e8090(uVar85,&uStack_3c8);
                  pdb_140606430(&uStack_3c8,&UNK_142f70770);
                  pdb_1405e79b0(uVar85,1,&uStack_3c8);
                  pdb_1405e8800(uVar85);
                  pdb_14064bab0(&uStack_3c8);
                  pdb_14056de80(&uStack_5f8,&uStack_3c8,10,&UNK_142f70788);
                  pdb_1405e8a80(uVar85,&uStack_5f8);
                  pdb_140159d60(&uStack_748);
                  pdb_14064bbc0(&uStack_128);
                  pdb_14016a460(&uStack_5f8);
                  uStack_368 = (undefined1)uStack_c8;
                  uStack_367 = (undefined1)(uStack_c8 >> 8);
                  uStack_366 = (undefined1)(uStack_c8 >> 0x10);
                  uStack_365 = (undefined1)(uStack_c8 >> 0x18);
                  uStack_364 = (undefined1)(uStack_c8 >> 0x20);
                  uStack_363 = (undefined1)(uStack_c8 >> 0x28);
                  uStack_362 = (undefined1)(uStack_c8 >> 0x30);
                  uStack_361 = (undefined1)(uStack_c8 >> 0x38);
                  uStack_360 = (undefined1)uStack_c0;
                  uStack_35f = (undefined1)(uStack_c0 >> 8);
                  uStack_35e = (undefined1)(uStack_c0 >> 0x10);
                  uStack_35d = (undefined1)(uStack_c0 >> 0x18);
                  uStack_35c = (undefined1)(uStack_c0 >> 0x20);
                  uStack_35b = (undefined1)(uStack_c0 >> 0x28);
                  uStack_35a = (undefined1)(uStack_c0 >> 0x30);
                  uStack_359 = (undefined1)(uStack_c0 >> 0x38);
                  uStack_378 = (undefined4)uStack_d8;
                  uStack_374 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
                  uStack_370 = (undefined4)uStack_d0;
                  uStack_36c = (undefined4)((ulonglong)uStack_d0 >> 0x20);
                  uStack_388 = (undefined1)uStack_e8;
                  uStack_387 = (undefined1)((ulonglong)uStack_e8 >> 8);
                  uStack_386 = (undefined1)((ulonglong)uStack_e8 >> 0x10);
                  uStack_385 = (undefined1)((ulonglong)uStack_e8 >> 0x18);
                  uStack_384 = (undefined1)((ulonglong)uStack_e8 >> 0x20);
                  uStack_383 = (undefined1)((ulonglong)uStack_e8 >> 0x28);
                  uStack_382 = (undefined1)((ulonglong)uStack_e8 >> 0x30);
                  uStack_381 = (undefined1)((ulonglong)uStack_e8 >> 0x38);
                  uStack_380 = (undefined1)uStack_e0;
                  uStack_37f = (undefined1)((ulonglong)uStack_e0 >> 8);
                  uStack_37e = (undefined1)((ulonglong)uStack_e0 >> 0x10);
                  uStack_37d = (undefined1)((ulonglong)uStack_e0 >> 0x18);
                  uStack_37c = (undefined1)((ulonglong)uStack_e0 >> 0x20);
                  uStack_37b = (undefined1)((ulonglong)uStack_e0 >> 0x28);
                  uStack_37a = (undefined1)((ulonglong)uStack_e0 >> 0x30);
                  uStack_379 = (undefined1)((ulonglong)uStack_e0 >> 0x38);
                  uStack_398 = (undefined1)uStack_f8;
                  uStack_397 = (undefined1)((ulonglong)uStack_f8 >> 8);
                  uStack_396 = (undefined1)((ulonglong)uStack_f8 >> 0x10);
                  uStack_395 = (undefined1)((ulonglong)uStack_f8 >> 0x18);
                  uStack_394 = (undefined1)((ulonglong)uStack_f8 >> 0x20);
                  uStack_393 = (undefined1)((ulonglong)uStack_f8 >> 0x28);
                  uStack_392 = (undefined1)((ulonglong)uStack_f8 >> 0x30);
                  uStack_391 = (undefined1)((ulonglong)uStack_f8 >> 0x38);
                  uStack_390 = (undefined4)uStack_f0;
                  uStack_38c = (undefined4)(uStack_f0 >> 0x20);
                  uStack_3a8 = (undefined1)lStack_108;
                  uStack_3a7 = (undefined1)((ulonglong)lStack_108 >> 8);
                  uStack_3a6 = (undefined1)((ulonglong)lStack_108 >> 0x10);
                  uStack_3a5 = (undefined1)((ulonglong)lStack_108 >> 0x18);
                  uStack_3a4 = (undefined4)((ulonglong)lStack_108 >> 0x20);
                  uStack_3a0 = SUB81(puStack_100,0);
                  uStack_39f = (undefined1)((ulonglong)puStack_100 >> 8);
                  uStack_39e = (undefined1)((ulonglong)puStack_100 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)puStack_100 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)puStack_100 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)puStack_100 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)puStack_100 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)puStack_100 >> 0x38);
                  uStack_3b8 = (undefined1)uStack_118;
                  uStack_3b7 = (undefined1)((ulonglong)uStack_118 >> 8);
                  uStack_3b6 = (undefined1)((ulonglong)uStack_118 >> 0x10);
                  uStack_3b5 = (undefined1)((ulonglong)uStack_118 >> 0x18);
                  uStack_3b4 = (undefined1)((ulonglong)uStack_118 >> 0x20);
                  uStack_3b3 = (undefined1)((ulonglong)uStack_118 >> 0x28);
                  uStack_3b2 = (undefined1)((ulonglong)uStack_118 >> 0x30);
                  uStack_3b1 = (undefined1)((ulonglong)uStack_118 >> 0x38);
                  uStack_3b0 = uStack_110;
                  uStack_3c8 = (undefined1)uStack_128;
                  uStack_3c7 = (undefined1)(uStack_128 >> 8);
                  uStack_3c6 = (undefined1)(uStack_128 >> 0x10);
                  uStack_3c5 = (undefined1)(uStack_128 >> 0x18);
                  uStack_3c4 = (undefined1)(uStack_128 >> 0x20);
                  uStack_3c3 = (undefined1)(uStack_128 >> 0x28);
                  uStack_3c2 = (undefined1)(uStack_128 >> 0x30);
                  uStack_3c1 = (undefined1)(uStack_128 >> 0x38);
                  uStack_3c0 = (undefined1)uStack_120;
                  uStack_3bf = (undefined1)(uStack_120 >> 8);
                  uStack_3be = (undefined1)(uStack_120 >> 0x10);
                  uStack_3bd = (undefined1)(uStack_120 >> 0x18);
                  uStack_3bc = (undefined1)(uStack_120 >> 0x20);
                  uStack_3bb = (undefined1)(uStack_120 >> 0x28);
                  uStack_3ba = (undefined1)(uStack_120 >> 0x30);
                  uStack_3b9 = (undefined1)(uStack_120 >> 0x38);
                  uStack_358 = (undefined1)uStack_5f8;
                  uStack_357 = (undefined1)(uStack_5f8 >> 8);
                  uStack_356 = (undefined1)(uStack_5f8 >> 0x10);
                  uStack_355 = (undefined1)(uStack_5f8 >> 0x18);
                  uStack_354 = (undefined1)(uStack_5f8 >> 0x20);
                  uStack_353 = (undefined1)(uStack_5f8 >> 0x28);
                  uStack_352 = (undefined1)(uStack_5f8 >> 0x30);
                  uStack_351 = (undefined1)(uStack_5f8 >> 0x38);
                  uStack_350 = (undefined1)uStack_5f0;
                  uStack_34f = (undefined1)(uStack_5f0 >> 8);
                  uStack_34e = (undefined1)(uStack_5f0 >> 0x10);
                  uStack_34d = (undefined1)(uStack_5f0 >> 0x18);
                  uStack_34c = (undefined1)(uStack_5f0 >> 0x20);
                  uStack_34b = (undefined1)(uStack_5f0 >> 0x28);
                  uStack_34a = (undefined1)(uStack_5f0 >> 0x30);
                  uStack_349 = (undefined1)(uStack_5f0 >> 0x38);
                  uStack_348 = (undefined1)uStack_5e8;
                  uStack_347 = uStack_5e8._1_1_;
                  uStack_346 = uStack_5e8._2_1_;
                  uStack_345 = uStack_5e8._3_1_;
                  uStack_344 = uStack_5e8._4_1_;
                  uStack_343 = uStack_5e8._5_1_;
                  uStack_342 = uStack_5e8._6_1_;
                  uStack_341 = uStack_5e8._7_1_;
                  uStack_340 = (undefined1)uStack_5e0;
                  uStack_33f = uStack_5e0._1_1_;
                  uStack_33e = uStack_5e0._2_1_;
                  uStack_33d = uStack_5e0._3_1_;
                  uStack_33c = uStack_5e0._4_1_;
                  uStack_33b = uStack_5e0._5_1_;
                  uStack_33a = uStack_5e0._6_1_;
                  uStack_339 = uStack_5e0._7_1_;
                  uStack_338 = (undefined4)lStack_5d8;
                  uStack_334 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
                  uStack_330 = SUB84(puStack_5d0,0);
                  uStack_32c = (undefined4)((ulonglong)puStack_5d0 >> 0x20);
                  uStack_328 = uStack_5c8;
                  uStack_320 = uStack_5c0;
                  lStack_318 = uStack_5b8;
                  puStack_310 = (undefined1 *)uStack_5b0;
                  uStack_308 = uStack_5a8;
                  puStack_300 = (undefined1 *)uStack_5a0;
                  uStack_2f8 = uStack_598;
                  uStack_2f0 = uStack_590;
                  pdb_1405c55e0(&uStack_6d8,&uStack_3c8);
                  pdb_14038e290(&uStack_668);
                  pdb_14015a200(&uStack_438);
                  pdb_14038ce00(&uStack_128);
                  pdb_1400cfe30(&uStack_3c8);
                  uStack_598 = CONCAT17(uStack_361,
                                        CONCAT16(uStack_362,
                                                 CONCAT15(uStack_363,
                                                          CONCAT14(uStack_364,
                                                                   CONCAT13(uStack_365,
                                                                            CONCAT12(uStack_366,
                                                                                     CONCAT11(
                                                  uStack_367,uStack_368)))))));
                  uStack_590 = CONCAT17(uStack_359,
                                        CONCAT16(uStack_35a,
                                                 CONCAT15(uStack_35b,
                                                          CONCAT14(uStack_35c,
                                                                   CONCAT13(uStack_35d,
                                                                            CONCAT12(uStack_35e,
                                                                                     CONCAT11(
                                                  uStack_35f,uStack_360)))))));
                  uStack_5a8 = CONCAT44(uStack_374,uStack_378);
                  uStack_5a0 = CONCAT44(uStack_36c,uStack_370);
                  uStack_5b8 = CONCAT17(uStack_381,
                                        CONCAT16(uStack_382,
                                                 CONCAT15(uStack_383,
                                                          CONCAT14(uStack_384,
                                                                   CONCAT13(uStack_385,
                                                                            CONCAT12(uStack_386,
                                                                                     CONCAT11(
                                                  uStack_387,uStack_388)))))));
                  uStack_5b0 = CONCAT17(uStack_379,
                                        CONCAT16(uStack_37a,
                                                 CONCAT15(uStack_37b,
                                                          CONCAT14(uStack_37c,
                                                                   CONCAT13(uStack_37d,
                                                                            CONCAT12(uStack_37e,
                                                                                     CONCAT11(
                                                  uStack_37f,uStack_380)))))));
                  uStack_5f8 = CONCAT17(uStack_3c1,
                                        CONCAT16(uStack_3c2,
                                                 CONCAT15(uStack_3c3,
                                                          CONCAT14(uStack_3c4,
                                                                   CONCAT13(uStack_3c5,
                                                                            CONCAT12(uStack_3c6,
                                                                                     CONCAT11(
                                                  uStack_3c7,uStack_3c8)))))));
                  uStack_5f0 = CONCAT17(uStack_3b9,
                                        CONCAT16(uStack_3ba,
                                                 CONCAT15(uStack_3bb,
                                                          CONCAT14(uStack_3bc,
                                                                   CONCAT13(uStack_3bd,
                                                                            CONCAT12(uStack_3be,
                                                                                     CONCAT11(
                                                  uStack_3bf,uStack_3c0)))))));
                  lStack_5d8 = CONCAT44(uStack_3a4,
                                        CONCAT13(uStack_3a5,
                                                 CONCAT12(uStack_3a6,CONCAT11(uStack_3a7,uStack_3a8)
                                                         )));
                  puStack_5d0 = (undefined1 *)
                                CONCAT17(uStack_399,
                                         CONCAT16(uStack_39a,
                                                  CONCAT15(uStack_39b,
                                                           CONCAT14(uStack_39c,
                                                                    CONCAT13(uStack_39d,
                                                                             CONCAT12(uStack_39e,
                                                                                      CONCAT11(
                                                  uStack_39f,uStack_3a0)))))));
                  uStack_5c8 = CONCAT17(uStack_391,
                                        CONCAT16(uStack_392,
                                                 CONCAT15(uStack_393,
                                                          CONCAT14(uStack_394,
                                                                   CONCAT13(uStack_395,
                                                                            CONCAT12(uStack_396,
                                                                                     CONCAT11(
                                                  uStack_397,uStack_398)))))));
                  uStack_5c0 = CONCAT44(uStack_38c,uStack_390);
                  uStack_5e8._0_2_ = CONCAT11(uStack_3b7,uStack_3b8);
                  uStack_5e8._0_3_ = CONCAT12(uStack_3b6,(undefined2)uStack_5e8);
                  uStack_5e8._0_4_ = CONCAT13(uStack_3b5,(undefined3)uStack_5e8);
                  uStack_5e8._0_5_ = CONCAT14(uStack_3b4,(undefined4)uStack_5e8);
                  uStack_5e8._0_6_ = CONCAT15(uStack_3b3,(undefined5)uStack_5e8);
                  uStack_5e8._0_7_ = CONCAT16(uStack_3b2,(undefined6)uStack_5e8);
                  uStack_5e8 = CONCAT17(uStack_3b1,(undefined7)uStack_5e8);
                  uStack_5e0 = uStack_3b0;
                  pdb_1405f9a70(&uStack_3c8,&uStack_5f8);
                  uStack_5f8 = uStack_128;
                  uStack_5f0 = uStack_120;
                  uStack_5e8 = uStack_118;
                  uStack_5e0 = uStack_110;
                  lStack_5d8 = lStack_108;
                  puStack_5d0 = puStack_100;
                  uStack_5c8 = uStack_f8;
                  uStack_5c0 = uStack_f0;
                  uStack_5b8 = uStack_e8;
                  uStack_5b0 = uStack_e0;
                  uStack_5a8 = uStack_d8;
                  uStack_5a0 = uStack_d0;
                  uStack_598 = uStack_c8;
                  uStack_590 = uStack_c0;
                  uStack_588 = CONCAT17(uStack_3c1,
                                        CONCAT16(uStack_3c2,
                                                 CONCAT15(uStack_3c3,
                                                          CONCAT14(uStack_3c4,
                                                                   CONCAT13(uStack_3c5,
                                                                            CONCAT12(uStack_3c6,
                                                                                     CONCAT11(
                                                  uStack_3c7,uStack_3c8)))))));
                  uStack_580 = CONCAT17(uStack_3b9,
                                        CONCAT16(uStack_3ba,
                                                 CONCAT15(uStack_3bb,
                                                          CONCAT14(uStack_3bc,
                                                                   CONCAT13(uStack_3bd,
                                                                            CONCAT12(uStack_3be,
                                                                                     CONCAT11(
                                                  uStack_3bf,uStack_3c0)))))));
                  lStack_578 = CONCAT17(uStack_3b1,
                                        CONCAT16(uStack_3b2,
                                                 CONCAT15(uStack_3b3,
                                                          CONCAT14(uStack_3b4,
                                                                   CONCAT13(uStack_3b5,
                                                                            CONCAT12(uStack_3b6,
                                                                                     CONCAT11(
                                                  uStack_3b7,uStack_3b8)))))));
                  uStack_568 = CONCAT44(uStack_3a4,
                                        CONCAT13(uStack_3a5,
                                                 CONCAT12(uStack_3a6,CONCAT11(uStack_3a7,uStack_3a8)
                                                         )));
                  uStack_560 = CONCAT17(uStack_399,
                                        CONCAT16(uStack_39a,
                                                 CONCAT15(uStack_39b,
                                                          CONCAT14(uStack_39c,
                                                                   CONCAT13(uStack_39d,
                                                                            CONCAT12(uStack_39e,
                                                                                     CONCAT11(
                                                  uStack_39f,uStack_3a0)))))));
                  uStack_558 = CONCAT17(uStack_391,
                                        CONCAT16(uStack_392,
                                                 CONCAT15(uStack_393,
                                                          CONCAT14(uStack_394,
                                                                   CONCAT13(uStack_395,
                                                                            CONCAT12(uStack_396,
                                                                                     CONCAT11(
                                                  uStack_397,uStack_398)))))));
                  uStack_550 = CONCAT44(uStack_38c,uStack_390);
                  puStack_570 = (undefined1 *)uStack_3b0;
                  uStack_548 = CONCAT17(uStack_381,
                                        CONCAT16(uStack_382,
                                                 CONCAT15(uStack_383,
                                                          CONCAT14(uStack_384,
                                                                   CONCAT13(uStack_385,
                                                                            CONCAT12(uStack_386,
                                                                                     CONCAT11(
                                                  uStack_387,uStack_388)))))));
                  uStack_540 = CONCAT17(uStack_379,
                                        CONCAT16(uStack_37a,
                                                 CONCAT15(uStack_37b,
                                                          CONCAT14(uStack_37c,
                                                                   CONCAT13(uStack_37d,
                                                                            CONCAT12(uStack_37e,
                                                                                     CONCAT11(
                                                  uStack_37f,uStack_380)))))));
                  uStack_538 = CONCAT44(uStack_374,uStack_378);
                  uStack_530 = CONCAT44(uStack_36c,uStack_370);
                  uStack_528 = CONCAT17(uStack_361,
                                        CONCAT16(uStack_362,
                                                 CONCAT15(uStack_363,
                                                          CONCAT14(uStack_364,
                                                                   CONCAT13(uStack_365,
                                                                            CONCAT12(uStack_366,
                                                                                     CONCAT11(
                                                  uStack_367,uStack_368)))))));
                  uStack_520 = CONCAT17(uStack_359,
                                        CONCAT16(uStack_35a,
                                                 CONCAT15(uStack_35b,
                                                          CONCAT14(uStack_35c,
                                                                   CONCAT13(uStack_35d,
                                                                            CONCAT12(uStack_35e,
                                                                                     CONCAT11(
                                                  uStack_35f,uStack_360)))))));
                  uStack_368 = (undefined1)uStack_6e8;
                  uStack_367 = (undefined1)((ulonglong)uStack_6e8 >> 8);
                  uStack_366 = (undefined1)((ulonglong)uStack_6e8 >> 0x10);
                  uStack_365 = (undefined1)((ulonglong)uStack_6e8 >> 0x18);
                  uStack_364 = (undefined1)((ulonglong)uStack_6e8 >> 0x20);
                  uStack_363 = (undefined1)((ulonglong)uStack_6e8 >> 0x28);
                  uStack_362 = (undefined1)((ulonglong)uStack_6e8 >> 0x30);
                  uStack_361 = (undefined1)((ulonglong)uStack_6e8 >> 0x38);
                  uStack_360 = (undefined1)uStack_6e0;
                  uStack_35f = (undefined1)((ulonglong)uStack_6e0 >> 8);
                  uStack_35e = (undefined1)((ulonglong)uStack_6e0 >> 0x10);
                  uStack_35d = (undefined1)((ulonglong)uStack_6e0 >> 0x18);
                  uStack_35c = (undefined1)((ulonglong)uStack_6e0 >> 0x20);
                  uStack_35b = (undefined1)((ulonglong)uStack_6e0 >> 0x28);
                  uStack_35a = (undefined1)((ulonglong)uStack_6e0 >> 0x30);
                  uStack_359 = (undefined1)((ulonglong)uStack_6e0 >> 0x38);
                  uStack_378 = (undefined4)uStack_6f8;
                  uStack_374 = (undefined4)((ulonglong)uStack_6f8 >> 0x20);
                  uStack_370 = (undefined4)uStack_6f0;
                  uStack_36c = (undefined4)((ulonglong)uStack_6f0 >> 0x20);
                  uStack_388 = (undefined1)uStack_708;
                  uStack_387 = (undefined1)((ulonglong)uStack_708 >> 8);
                  uStack_386 = (undefined1)((ulonglong)uStack_708 >> 0x10);
                  uStack_385 = (undefined1)((ulonglong)uStack_708 >> 0x18);
                  uStack_384 = (undefined1)((ulonglong)uStack_708 >> 0x20);
                  uStack_383 = (undefined1)((ulonglong)uStack_708 >> 0x28);
                  uStack_382 = (undefined1)((ulonglong)uStack_708 >> 0x30);
                  uStack_381 = (undefined1)((ulonglong)uStack_708 >> 0x38);
                  uStack_380 = (undefined1)uStack_700;
                  uStack_37f = (undefined1)((ulonglong)uStack_700 >> 8);
                  uStack_37e = (undefined1)((ulonglong)uStack_700 >> 0x10);
                  uStack_37d = (undefined1)((ulonglong)uStack_700 >> 0x18);
                  uStack_37c = (undefined1)((ulonglong)uStack_700 >> 0x20);
                  uStack_37b = (undefined1)((ulonglong)uStack_700 >> 0x28);
                  uStack_37a = (undefined1)((ulonglong)uStack_700 >> 0x30);
                  uStack_379 = (undefined1)((ulonglong)uStack_700 >> 0x38);
                  uStack_398 = (undefined1)uStack_718;
                  uStack_397 = (undefined1)((ulonglong)uStack_718 >> 8);
                  uStack_396 = (undefined1)((ulonglong)uStack_718 >> 0x10);
                  uStack_395 = (undefined1)((ulonglong)uStack_718 >> 0x18);
                  uStack_394 = (undefined1)((ulonglong)uStack_718 >> 0x20);
                  uStack_393 = (undefined1)((ulonglong)uStack_718 >> 0x28);
                  uStack_392 = (undefined1)((ulonglong)uStack_718 >> 0x30);
                  uStack_391 = (undefined1)((ulonglong)uStack_718 >> 0x38);
                  uStack_390 = (undefined4)uStack_710;
                  uStack_38c = (undefined4)((ulonglong)uStack_710 >> 0x20);
                  uStack_3a8 = (undefined1)lStack_728;
                  uStack_3a7 = (undefined1)((ulonglong)lStack_728 >> 8);
                  uStack_3a6 = (undefined1)((ulonglong)lStack_728 >> 0x10);
                  uStack_3a5 = (undefined1)((ulonglong)lStack_728 >> 0x18);
                  uStack_3a4 = (undefined4)((ulonglong)lStack_728 >> 0x20);
                  uStack_3a0 = SUB81(puStack_720,0);
                  uStack_39f = (undefined1)((ulonglong)puStack_720 >> 8);
                  uStack_39e = (undefined1)((ulonglong)puStack_720 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)puStack_720 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)puStack_720 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)puStack_720 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)puStack_720 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)puStack_720 >> 0x38);
                  uStack_3b8 = (undefined1)uStack_738;
                  uStack_3b7 = (undefined1)((uint)uStack_738 >> 8);
                  uStack_3b6 = (undefined1)((uint)uStack_738 >> 0x10);
                  uStack_3b5 = (undefined1)((uint)uStack_738 >> 0x18);
                  uStack_3b4 = (undefined1)uStack_734;
                  uStack_3b3 = (undefined1)((uint)uStack_734 >> 8);
                  uStack_3b2 = (undefined1)((uint)uStack_734 >> 0x10);
                  uStack_3b1 = (undefined1)((uint)uStack_734 >> 0x18);
                  uStack_3b0 = uStack_730;
                  uStack_3c8 = (undefined1)uStack_748;
                  uStack_3c7 = (undefined1)((uint)uStack_748 >> 8);
                  uStack_3c6 = (undefined1)((uint)uStack_748 >> 0x10);
                  uStack_3c5 = (undefined1)((uint)uStack_748 >> 0x18);
                  uStack_3c4 = (undefined1)uStack_744;
                  uStack_3c3 = (undefined1)((uint)uStack_744 >> 8);
                  uStack_3c2 = (undefined1)((uint)uStack_744 >> 0x10);
                  uStack_3c1 = (undefined1)((uint)uStack_744 >> 0x18);
                  uStack_3c0 = (undefined1)uStack_740;
                  uStack_3bf = (undefined1)((uint)uStack_740 >> 8);
                  uStack_3be = (undefined1)((uint)uStack_740 >> 0x10);
                  uStack_3bd = (undefined1)((uint)uStack_740 >> 0x18);
                  uStack_3bc = (undefined1)uStack_73c;
                  uStack_3bb = (undefined1)((uint)uStack_73c >> 8);
                  uStack_3ba = (undefined1)((uint)uStack_73c >> 0x10);
                  uStack_3b9 = (undefined1)((uint)uStack_73c >> 0x18);
                  uStack_2f8 = uStack_678;
                  uStack_2f0 = uStack_670;
                  uStack_308 = uStack_688;
                  puStack_300 = (undefined1 *)uStack_680;
                  lStack_318 = uStack_698;
                  puStack_310 = (undefined1 *)uStack_690;
                  uStack_328 = uStack_6a8;
                  uStack_320 = uStack_6a0;
                  uStack_338 = (undefined4)lStack_6b8;
                  uStack_334 = (undefined4)((ulonglong)lStack_6b8 >> 0x20);
                  uStack_330 = SUB84(puStack_6b0,0);
                  uStack_32c = (undefined4)((ulonglong)puStack_6b0 >> 0x20);
                  uStack_348 = (undefined1)uStack_6c8;
                  uStack_347 = (undefined1)((ulonglong)uStack_6c8 >> 8);
                  uStack_346 = (undefined1)((ulonglong)uStack_6c8 >> 0x10);
                  uStack_345 = (undefined1)((ulonglong)uStack_6c8 >> 0x18);
                  uStack_344 = (undefined1)((ulonglong)uStack_6c8 >> 0x20);
                  uStack_343 = (undefined1)((ulonglong)uStack_6c8 >> 0x28);
                  uStack_342 = (undefined1)((ulonglong)uStack_6c8 >> 0x30);
                  uStack_341 = (undefined1)((ulonglong)uStack_6c8 >> 0x38);
                  uStack_340 = (undefined1)uStack_6c0;
                  uStack_33f = (undefined1)(uStack_6c0 >> 8);
                  uStack_33e = (undefined1)(uStack_6c0 >> 0x10);
                  uStack_33d = (undefined1)(uStack_6c0 >> 0x18);
                  uStack_33c = (undefined1)(uStack_6c0 >> 0x20);
                  uStack_33b = (undefined1)(uStack_6c0 >> 0x28);
                  uStack_33a = (undefined1)(uStack_6c0 >> 0x30);
                  uStack_339 = (undefined1)(uStack_6c0 >> 0x38);
                  uStack_358 = (undefined1)uStack_6d8;
                  uStack_357 = (undefined1)(uStack_6d8 >> 8);
                  uStack_356 = (undefined1)(uStack_6d8 >> 0x10);
                  uStack_355 = (undefined1)(uStack_6d8 >> 0x18);
                  uStack_354 = (undefined1)(uStack_6d8 >> 0x20);
                  uStack_353 = (undefined1)(uStack_6d8 >> 0x28);
                  uStack_352 = (undefined1)(uStack_6d8 >> 0x30);
                  uStack_351 = (undefined1)(uStack_6d8 >> 0x38);
                  uStack_350 = (undefined1)uStack_6d0;
                  uStack_34f = (undefined1)(uStack_6d0 >> 8);
                  uStack_34e = (undefined1)(uStack_6d0 >> 0x10);
                  uStack_34d = (undefined1)(uStack_6d0 >> 0x18);
                  uStack_34c = (undefined1)(uStack_6d0 >> 0x20);
                  uStack_34b = (undefined1)(uStack_6d0 >> 0x28);
                  uStack_34a = (undefined1)(uStack_6d0 >> 0x30);
                  uStack_349 = (undefined1)(uStack_6d0 >> 0x38);
                  uStack_288 = uStack_608;
                  puStack_280 = (undefined1 *)uStack_600;
                  uStack_298 = uStack_618;
                  uStack_290 = uStack_610;
                  uStack_2a8 = uStack_628;
                  puStack_2a0 = (undefined1 *)uStack_620;
                  lStack_2b8 = uStack_638;
                  puStack_2b0 = (undefined1 *)uStack_630;
                  uStack_2c8 = lStack_648;
                  puStack_2c0 = puStack_640;
                  uStack_2d8 = uStack_658;
                  puStack_2d0 = (undefined1 *)uStack_650;
                  uStack_2e8 = uStack_668;
                  puStack_2e0 = (undefined1 *)uStack_660;
                  uStack_218 = uStack_3d8;
                  lStack_210 = uStack_3d0;
                  uStack_228 = uStack_3e8;
                  puStack_220 = (undefined1 *)uStack_3e0;
                  puStack_238 = (undefined1 *)uStack_3f8;
                  uStack_230 = uStack_3f0;
                  uStack_248 = uStack_408;
                  puStack_240 = (undefined1 *)uStack_400;
                  uStack_258 = lStack_418;
                  puStack_250 = puStack_410;
                  puStack_268 = (undefined1 *)uStack_428;
                  uStack_260 = uStack_420;
                  uStack_278 = uStack_438;
                  puStack_270 = (undefined1 *)uStack_430;
                  pub_142e32760(apuStack_208,&uStack_5f8,0xe0);
                  pdb_140674d30(&uStack_5f8,&uStack_3c8);
                  uStack_128 = CONCAT71(uStack_128._1_7_,0x19);
                  puVar92 = &uStack_128;
                  uVar87 = pdb_14055e8d0(_DAT_143ca8dd0,puVar92,&UNK_142f5bbd0);
                  pdb_140676be0(&uStack_5f8,uVar87,puVar92);
                  uStack_368 = (undefined1)uStack_598;
                  uStack_367 = (undefined1)(uStack_598 >> 8);
                  uStack_366 = (undefined1)(uStack_598 >> 0x10);
                  uStack_365 = (undefined1)(uStack_598 >> 0x18);
                  uStack_364 = (undefined1)(uStack_598 >> 0x20);
                  uStack_363 = (undefined1)(uStack_598 >> 0x28);
                  uStack_362 = (undefined1)(uStack_598 >> 0x30);
                  uStack_361 = (undefined1)(uStack_598 >> 0x38);
                  uStack_360 = (undefined1)uStack_590;
                  uStack_35f = (undefined1)(uStack_590 >> 8);
                  uStack_35e = (undefined1)(uStack_590 >> 0x10);
                  uStack_35d = (undefined1)(uStack_590 >> 0x18);
                  uStack_35c = (undefined1)(uStack_590 >> 0x20);
                  uStack_35b = (undefined1)(uStack_590 >> 0x28);
                  uStack_35a = (undefined1)(uStack_590 >> 0x30);
                  uStack_359 = (undefined1)(uStack_590 >> 0x38);
                  uStack_378 = (undefined4)uStack_5a8;
                  uStack_374 = (undefined4)((ulonglong)uStack_5a8 >> 0x20);
                  uStack_370 = (undefined4)uStack_5a0;
                  uStack_36c = (undefined4)((ulonglong)uStack_5a0 >> 0x20);
                  uStack_388 = (undefined1)uStack_5b8;
                  uStack_387 = (undefined1)((ulonglong)uStack_5b8 >> 8);
                  uStack_386 = (undefined1)((ulonglong)uStack_5b8 >> 0x10);
                  uStack_385 = (undefined1)((ulonglong)uStack_5b8 >> 0x18);
                  uStack_384 = (undefined1)((ulonglong)uStack_5b8 >> 0x20);
                  uStack_383 = (undefined1)((ulonglong)uStack_5b8 >> 0x28);
                  uStack_382 = (undefined1)((ulonglong)uStack_5b8 >> 0x30);
                  uStack_381 = (undefined1)((ulonglong)uStack_5b8 >> 0x38);
                  uStack_380 = (undefined1)uStack_5b0;
                  uStack_37f = (undefined1)(uStack_5b0 >> 8);
                  uStack_37e = (undefined1)(uStack_5b0 >> 0x10);
                  uStack_37d = (undefined1)(uStack_5b0 >> 0x18);
                  uStack_37c = (undefined1)(uStack_5b0 >> 0x20);
                  uStack_37b = (undefined1)(uStack_5b0 >> 0x28);
                  uStack_37a = (undefined1)(uStack_5b0 >> 0x30);
                  uStack_379 = (undefined1)(uStack_5b0 >> 0x38);
                  uStack_398 = (undefined1)uStack_5c8;
                  uStack_397 = (undefined1)((ulonglong)uStack_5c8 >> 8);
                  uStack_396 = (undefined1)((ulonglong)uStack_5c8 >> 0x10);
                  uStack_395 = (undefined1)((ulonglong)uStack_5c8 >> 0x18);
                  uStack_394 = (undefined1)((ulonglong)uStack_5c8 >> 0x20);
                  uStack_393 = (undefined1)((ulonglong)uStack_5c8 >> 0x28);
                  uStack_392 = (undefined1)((ulonglong)uStack_5c8 >> 0x30);
                  uStack_391 = (undefined1)((ulonglong)uStack_5c8 >> 0x38);
                  uStack_390 = (undefined4)uStack_5c0;
                  uStack_38c = (undefined4)(uStack_5c0 >> 0x20);
                  uStack_3a8 = (undefined1)lStack_5d8;
                  uStack_3a7 = (undefined1)((ulonglong)lStack_5d8 >> 8);
                  uStack_3a6 = (undefined1)((ulonglong)lStack_5d8 >> 0x10);
                  uStack_3a5 = (undefined1)((ulonglong)lStack_5d8 >> 0x18);
                  uStack_3a4 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
                  uStack_3a0 = SUB81(puStack_5d0,0);
                  uStack_39f = (undefined1)((ulonglong)puStack_5d0 >> 8);
                  uStack_39e = (undefined1)((ulonglong)puStack_5d0 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)puStack_5d0 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)puStack_5d0 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)puStack_5d0 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)puStack_5d0 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)puStack_5d0 >> 0x38);
                  uStack_3b8 = (undefined1)uStack_5e8;
                  uStack_3b7 = uStack_5e8._1_1_;
                  uStack_3b6 = uStack_5e8._2_1_;
                  uStack_3b5 = uStack_5e8._3_1_;
                  uStack_3b4 = uStack_5e8._4_1_;
                  uStack_3b3 = uStack_5e8._5_1_;
                  uStack_3b2 = uStack_5e8._6_1_;
                  uStack_3b1 = uStack_5e8._7_1_;
                  uStack_3b0 = uStack_5e0;
                  uStack_3c8 = (undefined1)uStack_5f8;
                  uStack_3c7 = (undefined1)(uStack_5f8 >> 8);
                  uStack_3c6 = (undefined1)(uStack_5f8 >> 0x10);
                  uStack_3c5 = (undefined1)(uStack_5f8 >> 0x18);
                  uStack_3c4 = (undefined1)(uStack_5f8 >> 0x20);
                  uStack_3c3 = (undefined1)(uStack_5f8 >> 0x28);
                  uStack_3c2 = (undefined1)(uStack_5f8 >> 0x30);
                  uStack_3c1 = (undefined1)(uStack_5f8 >> 0x38);
                  uStack_3c0 = (undefined1)uStack_5f0;
                  uStack_3bf = (undefined1)(uStack_5f0 >> 8);
                  uStack_3be = (undefined1)(uStack_5f0 >> 0x10);
                  uStack_3bd = (undefined1)(uStack_5f0 >> 0x18);
                  uStack_3bc = (undefined1)(uStack_5f0 >> 0x20);
                  uStack_3bb = (undefined1)(uStack_5f0 >> 0x28);
                  uStack_3ba = (undefined1)(uStack_5f0 >> 0x30);
                  uStack_3b9 = (undefined1)(uStack_5f0 >> 0x38);
                  pdb_1405e8a80(uVar85,&uStack_3c8);
                  pdb_1405ed850(&uStack_128,0x28,&UNK_142f707a0);
                  pdb_1402afae0(&uStack_5f8,0x22,&UNK_142f707b8);
                  uStack_368 = (undefined1)uStack_c8;
                  uStack_367 = (undefined1)(uStack_c8 >> 8);
                  uStack_366 = (undefined1)(uStack_c8 >> 0x10);
                  uStack_365 = (undefined1)(uStack_c8 >> 0x18);
                  uStack_364 = (undefined1)(uStack_c8 >> 0x20);
                  uStack_363 = (undefined1)(uStack_c8 >> 0x28);
                  uStack_362 = (undefined1)(uStack_c8 >> 0x30);
                  uStack_361 = (undefined1)(uStack_c8 >> 0x38);
                  uStack_360 = (undefined1)uStack_c0;
                  uStack_35f = (undefined1)(uStack_c0 >> 8);
                  uStack_35e = (undefined1)(uStack_c0 >> 0x10);
                  uStack_35d = (undefined1)(uStack_c0 >> 0x18);
                  uStack_35c = (undefined1)(uStack_c0 >> 0x20);
                  uStack_35b = (undefined1)(uStack_c0 >> 0x28);
                  uStack_35a = (undefined1)(uStack_c0 >> 0x30);
                  uStack_359 = (undefined1)(uStack_c0 >> 0x38);
                  uStack_378 = (undefined4)uStack_d8;
                  uStack_374 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
                  uStack_370 = (undefined4)uStack_d0;
                  uStack_36c = (undefined4)((ulonglong)uStack_d0 >> 0x20);
                  uStack_388 = (undefined1)uStack_e8;
                  uStack_387 = (undefined1)((ulonglong)uStack_e8 >> 8);
                  uStack_386 = (undefined1)((ulonglong)uStack_e8 >> 0x10);
                  uStack_385 = (undefined1)((ulonglong)uStack_e8 >> 0x18);
                  uStack_384 = (undefined1)((ulonglong)uStack_e8 >> 0x20);
                  uStack_383 = (undefined1)((ulonglong)uStack_e8 >> 0x28);
                  uStack_382 = (undefined1)((ulonglong)uStack_e8 >> 0x30);
                  uStack_381 = (undefined1)((ulonglong)uStack_e8 >> 0x38);
                  uStack_380 = (undefined1)uStack_e0;
                  uStack_37f = (undefined1)((ulonglong)uStack_e0 >> 8);
                  uStack_37e = (undefined1)((ulonglong)uStack_e0 >> 0x10);
                  uStack_37d = (undefined1)((ulonglong)uStack_e0 >> 0x18);
                  uStack_37c = (undefined1)((ulonglong)uStack_e0 >> 0x20);
                  uStack_37b = (undefined1)((ulonglong)uStack_e0 >> 0x28);
                  uStack_37a = (undefined1)((ulonglong)uStack_e0 >> 0x30);
                  uStack_379 = (undefined1)((ulonglong)uStack_e0 >> 0x38);
                  uStack_398 = (undefined1)uStack_f8;
                  uStack_397 = (undefined1)((ulonglong)uStack_f8 >> 8);
                  uStack_396 = (undefined1)((ulonglong)uStack_f8 >> 0x10);
                  uStack_395 = (undefined1)((ulonglong)uStack_f8 >> 0x18);
                  uStack_394 = (undefined1)((ulonglong)uStack_f8 >> 0x20);
                  uStack_393 = (undefined1)((ulonglong)uStack_f8 >> 0x28);
                  uStack_392 = (undefined1)((ulonglong)uStack_f8 >> 0x30);
                  uStack_391 = (undefined1)((ulonglong)uStack_f8 >> 0x38);
                  uStack_390 = (undefined4)uStack_f0;
                  uStack_38c = (undefined4)(uStack_f0 >> 0x20);
                  uStack_3a8 = (undefined1)lStack_108;
                  uStack_3a7 = (undefined1)((ulonglong)lStack_108 >> 8);
                  uStack_3a6 = (undefined1)((ulonglong)lStack_108 >> 0x10);
                  uStack_3a5 = (undefined1)((ulonglong)lStack_108 >> 0x18);
                  uStack_3a4 = (undefined4)((ulonglong)lStack_108 >> 0x20);
                  uStack_3a0 = SUB81(puStack_100,0);
                  uStack_39f = (undefined1)((ulonglong)puStack_100 >> 8);
                  uStack_39e = (undefined1)((ulonglong)puStack_100 >> 0x10);
                  uStack_39d = (undefined1)((ulonglong)puStack_100 >> 0x18);
                  uStack_39c = (undefined1)((ulonglong)puStack_100 >> 0x20);
                  uStack_39b = (undefined1)((ulonglong)puStack_100 >> 0x28);
                  uStack_39a = (undefined1)((ulonglong)puStack_100 >> 0x30);
                  uStack_399 = (undefined1)((ulonglong)puStack_100 >> 0x38);
                  uStack_3b8 = (undefined1)uStack_118;
                  uStack_3b7 = (undefined1)((ulonglong)uStack_118 >> 8);
                  uStack_3b6 = (undefined1)((ulonglong)uStack_118 >> 0x10);
                  uStack_3b5 = (undefined1)((ulonglong)uStack_118 >> 0x18);
                  uStack_3b4 = (undefined1)((ulonglong)uStack_118 >> 0x20);
                  uStack_3b3 = (undefined1)((ulonglong)uStack_118 >> 0x28);
                  uStack_3b2 = (undefined1)((ulonglong)uStack_118 >> 0x30);
                  uStack_3b1 = (undefined1)((ulonglong)uStack_118 >> 0x38);
                  uStack_3b0 = uStack_110;
                  uStack_3c8 = (undefined1)uStack_128;
                  uStack_3c7 = (undefined1)(uStack_128 >> 8);
                  uStack_3c6 = (undefined1)(uStack_128 >> 0x10);
                  uStack_3c5 = (undefined1)(uStack_128 >> 0x18);
                  uStack_3c4 = (undefined1)(uStack_128 >> 0x20);
                  uStack_3c3 = (undefined1)(uStack_128 >> 0x28);
                  uStack_3c2 = (undefined1)(uStack_128 >> 0x30);
                  uStack_3c1 = (undefined1)(uStack_128 >> 0x38);
                  uStack_3c0 = (undefined1)uStack_120;
                  uStack_3bf = (undefined1)(uStack_120 >> 8);
                  uStack_3be = (undefined1)(uStack_120 >> 0x10);
                  uStack_3bd = (undefined1)(uStack_120 >> 0x18);
                  uStack_3bc = (undefined1)(uStack_120 >> 0x20);
                  uStack_3bb = (undefined1)(uStack_120 >> 0x28);
                  uStack_3ba = (undefined1)(uStack_120 >> 0x30);
                  uStack_3b9 = (undefined1)(uStack_120 >> 0x38);
                  uStack_358 = (undefined1)uStack_5f8;
                  uStack_357 = (undefined1)(uStack_5f8 >> 8);
                  uStack_356 = (undefined1)(uStack_5f8 >> 0x10);
                  uStack_355 = (undefined1)(uStack_5f8 >> 0x18);
                  uStack_354 = (undefined1)(uStack_5f8 >> 0x20);
                  uStack_353 = (undefined1)(uStack_5f8 >> 0x28);
                  uStack_352 = (undefined1)(uStack_5f8 >> 0x30);
                  uStack_351 = (undefined1)(uStack_5f8 >> 0x38);
                  uStack_350 = (undefined1)uStack_5f0;
                  uStack_34f = (undefined1)(uStack_5f0 >> 8);
                  uStack_34e = (undefined1)(uStack_5f0 >> 0x10);
                  uStack_34d = (undefined1)(uStack_5f0 >> 0x18);
                  uStack_34c = (undefined1)(uStack_5f0 >> 0x20);
                  uStack_34b = (undefined1)(uStack_5f0 >> 0x28);
                  uStack_34a = (undefined1)(uStack_5f0 >> 0x30);
                  uStack_349 = (undefined1)(uStack_5f0 >> 0x38);
                  uStack_348 = (undefined1)uStack_5e8;
                  uStack_347 = uStack_5e8._1_1_;
                  uStack_346 = uStack_5e8._2_1_;
                  uStack_345 = uStack_5e8._3_1_;
                  uStack_344 = uStack_5e8._4_1_;
                  uStack_343 = uStack_5e8._5_1_;
                  uStack_342 = uStack_5e8._6_1_;
                  uStack_341 = uStack_5e8._7_1_;
                  uStack_340 = (undefined1)uStack_5e0;
                  uStack_33f = uStack_5e0._1_1_;
                  uStack_33e = uStack_5e0._2_1_;
                  uStack_33d = uStack_5e0._3_1_;
                  uStack_33c = uStack_5e0._4_1_;
                  uStack_33b = uStack_5e0._5_1_;
                  uStack_33a = uStack_5e0._6_1_;
                  uStack_339 = uStack_5e0._7_1_;
                  uStack_338 = (undefined4)lStack_5d8;
                  uStack_334 = (undefined4)((ulonglong)lStack_5d8 >> 0x20);
                  uStack_330 = SUB84(puStack_5d0,0);
                  uStack_32c = (undefined4)((ulonglong)puStack_5d0 >> 0x20);
                  uStack_328 = uStack_5c8;
                  uStack_320 = uStack_5c0;
                  lStack_318 = uStack_5b8;
                  puStack_310 = (undefined1 *)uStack_5b0;
                  uStack_308 = uStack_5a8;
                  puStack_300 = (undefined1 *)uStack_5a0;
                  uStack_2f8 = uStack_598;
                  uStack_2f0 = uStack_590;
                  pdb_1405e83a0(uVar85,&uStack_3c8);
                  pdb_140369900(&uStack_3c8,0x24,&UNK_142f707d0);
                  pdb_1405e8a80(uVar85,&uStack_3c8);
                  pdb_1405e8e20(uVar85,1);
                  return;
                }
                pdb_142dc7890(&UNK_142f3dc40);
              }
            }
            goto LAB_1405ceb3d;
          }
        }
      }
      goto LAB_1405cead8;
    }
  }
  pdb_142dc7890(&UNK_142f3dc40);
LAB_1405ceb3d:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

