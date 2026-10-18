// VA 0x14085dba0, PDB extent 30759 bytes
// system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_focus_stairs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::ui_systems::ui_focus_stairs::ui_focus_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_focus_stairs.rs
   Extent: 30759 */

void pdb_14085dba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,longlong *param_13,undefined8 param_14,undefined8 *param_15,longlong *param_16)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  unkuint9 Var12;
  undefined1 auVar13 [16];
  undefined7 uVar14;
  undefined1 auVar15 [11];
  undefined1 auVar16 [15];
  undefined1 auVar17 [16];
  undefined1 *puVar18;
  float fVar19;
  float fVar20;
  undefined4 *puVar21;
  char cVar22;
  char cVar23;
  undefined1 uVar24;
  byte bVar25;
  byte bVar26;
  undefined1 uVar27;
  uint uVar28;
  undefined8 uVar29;
  byte *pbVar30;
  longlong lVar31;
  ulonglong uVar32;
  byte *pbVar33;
  longlong *plVar34;
  ulonglong uVar35;
  longlong *plVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  float *pfVar42;
  undefined *puVar43;
  float *pfVar44;
  undefined1 (*pauVar45) [16];
  undefined4 uVar46;
  undefined1 (*pauVar47) [16];
  float *pfVar48;
  int *piVar49;
  ulonglong uVar50;
  uint uVar51;
  ushort uVar52;
  longlong lVar53;
  longlong lVar54;
  uint uVar55;
  undefined4 uVar56;
  bool bVar57;
  byte bVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [12];
  float fVar61;
  float fVar72;
  undefined1 auVar68 [16];
  float fVar73;
  undefined1 auVar69 [16];
  float fVar74;
  float fVar75;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar76 [16];
  float fVar84;
  float fVar85;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar86;
  float fVar87;
  float fVar96;
  float fVar97;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar88;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar102;
  float fVar103;
  int iVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  byte bVar109;
  undefined1 uVar110;
  byte bVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  byte bVar114;
  undefined1 uVar115;
  byte bVar116;
  undefined1 uVar117;
  byte bVar118;
  undefined1 uVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  char cVar133;
  undefined1 unaff_XMM11_Bc;
  char cVar134;
  undefined1 unaff_XMM11_Bd;
  char cVar135;
  undefined1 unaff_XMM11_Be;
  char cVar136;
  undefined1 unaff_XMM11_Bf;
  char cVar137;
  undefined1 unaff_XMM11_Bg;
  char cVar138;
  undefined1 unaff_XMM11_Bh;
  char cVar139;
  undefined1 unaff_XMM11_Bi;
  char cVar140;
  undefined1 unaff_XMM11_Bj;
  char cVar141;
  undefined1 unaff_XMM11_Bk;
  char cVar142;
  undefined1 unaff_XMM11_Bl;
  char cVar143;
  undefined1 unaff_XMM11_Bm;
  char cVar144;
  undefined1 unaff_XMM11_Bn;
  char cVar145;
  undefined1 unaff_XMM11_Bo;
  char cVar146;
  undefined1 unaff_XMM11_Bp;
  char cVar147;
  float fVar148;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 auStack_718 [16];
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  longlong lStack_6c8;
  undefined8 uStack_6c0;
  longlong lStack_6b8;
  float *pfStack_6b0;
  longlong lStack_6a8;
  longlong lStack_6a0;
  undefined8 uStack_698;
  undefined4 *puStack_690;
  undefined4 *puStack_688;
  undefined4 *puStack_680;
  undefined4 *puStack_678;
  undefined4 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  longlong lStack_640;
  float *pfStack_638;
  undefined8 uStack_630;
  float *pfStack_628;
  float fStack_620;
  longlong lStack_61c;
  float fStack_614;
  undefined1 uStack_610;
  undefined1 uStack_60f;
  byte bStack_60e;
  float fStack_608;
  undefined8 uStack_600;
  longlong *plStack_5f8;
  undefined8 *puStack_5f0;
  undefined4 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  longlong lStack_5c8;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  longlong lStack_5b0;
  byte *pbStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  longlong lStack_590;
  float fStack_588;
  undefined8 uStack_580;
  float fStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  uint uStack_564;
  float fStack_560;
  float fStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  longlong *plStack_540;
  longlong lStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined4 *puStack_520;
  longlong lStack_518;
  longlong lStack_510;
  longlong lStack_508;
  longlong lStack_500;
  undefined4 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined4 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined4 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined4 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  float fStack_4b0;
  undefined4 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined4 *puStack_498;
  undefined8 uStack_490;
  float fStack_488;
  undefined4 uStack_484;
  longlong lStack_480;
  longlong lStack_478;
  longlong lStack_470;
  longlong *plStack_468;
  longlong lStack_460;
  longlong lStack_458;
  undefined4 uStack_450;
  uint uStack_44c;
  undefined8 uStack_448;
  longlong lStack_440;
  byte *pbStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  float *pfStack_420;
  float *pfStack_418;
  longlong lStack_410;
  undefined8 uStack_408;
  float *pfStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  float fStack_3e0;
  undefined8 uStack_3d8;
  float fStack_3d0;
  longlong lStack_3c8;
  byte *pbStack_3c0;
  undefined8 uStack_3b8;
  longlong lStack_3b0;
  byte *pbStack_3a8;
  float fStack_398;
  undefined1 (*pauStack_388) [16];
  undefined1 (*pauStack_380) [16];
  undefined1 (*pauStack_378) [16];
  undefined8 uStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  byte bStack_358;
  undefined2 uStack_357;
  undefined4 uStack_355;
  undefined1 auStack_351 [4];
  undefined4 uStack_34d;
  undefined1 uStack_349;
  undefined1 auStack_348 [16];
  uint *puStack_338;
  undefined8 uStack_330;
  byte *pbStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  float *pfStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  float *pfStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float *pfStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  float fStack_218;
  longlong *plStack_210;
  undefined8 uStack_208;
  float fStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined1 uStack_1a6;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_188;
  float fStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  undefined1 uStack_178;
  undefined1 uStack_176;
  undefined1 uStack_174;
  undefined8 uStack_170;
  float fStack_160;
  byte bStack_13f;
  int *piStack_138;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined8 uStack_128;
  float *pfStack_120;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  float *pfStack_110;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  float *pfStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar67 [12];
  
  fVar97 = _DAT_142e3787c;
  uVar6 = _DAT_142e377e0;
  fVar87 = _DAT_142e36f38;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_738 = *param_4;
  uStack_730 = param_4[1];
  uStack_728 = param_4[2];
  uStack_720 = param_4[3];
  auStack_718 = *(undefined1 (*) [16])(param_4 + 4);
  uStack_708 = param_4[6];
  uStack_700 = param_4[7];
  uStack_128 = param_4[8];
  puStack_4f8 = (undefined4 *)param_4[10];
  uStack_228 = *(undefined4 *)((longlong)param_4 + 0x5c);
  uStack_4f0 = param_4[0xc];
  puStack_4e8 = (undefined4 *)param_4[0xe];
  uStack_224 = *(undefined4 *)((longlong)param_4 + 0x7c);
  uStack_4e0 = param_4[0x10];
  uStack_528 = param_4[0x14];
  uStack_370 = param_4[0x18];
  pauStack_380 = (undefined1 (*) [16])param_4[0x1c];
  plStack_468 = (longlong *)param_4[0x1e];
  lStack_460 = CONCAT44(lStack_460._4_4_,*(undefined4 *)((longlong)param_4 + 0xfc));
  uStack_5e0 = param_4[0x20];
  puStack_5e8 = (undefined4 *)param_4[0x22];
  uStack_484 = *(undefined4 *)((longlong)param_4 + 0x11c);
  pauStack_388 = (undefined1 (*) [16])param_4[0x24];
  puStack_4d8 = (undefined4 *)param_9[8];
  uStack_4d0 = param_9[9];
  puStack_4c8 = (undefined4 *)param_9[10];
  uStack_4c0 = param_9[0xb];
  puStack_4a8 = (undefined4 *)param_9[0xc];
  uStack_4a0 = param_9[0xd];
  puStack_498 = (undefined4 *)param_9[0xe];
  uStack_490 = param_9[0xf];
  piStack_138 = (int *)*param_9;
  plStack_210 = (longlong *)param_9[4];
  puStack_520 = (undefined4 *)param_9[6];
  uStack_1ec = *(undefined4 *)((longlong)param_9 + 0x3c);
  puStack_690 = (undefined4 *)param_9[0x10];
  puStack_688 = (undefined4 *)param_9[0x12];
  uStack_550 = *(undefined4 *)((longlong)param_9 + 0x9c);
  uStack_698 = *param_12;
  lStack_518 = param_12[4];
  puStack_680 = (undefined4 *)param_12[6];
  uStack_54c = *(undefined4 *)((longlong)param_12 + 0x3c);
  lStack_510 = param_12[8];
  puStack_678 = (undefined4 *)param_12[10];
  uStack_548 = *(undefined4 *)((longlong)param_12 + 0x5c);
  lStack_508 = param_12[0xc];
  puStack_670 = (undefined4 *)param_12[0xe];
  uStack_544 = *(undefined4 *)((longlong)param_12 + 0x7c);
  pauVar47 = *(undefined1 (**) [16])(piStack_138 + 0x58);
  auVar69 = *pauVar47;
  uVar55 = ~(uint)(ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar69[0xf] >> 7) << 0xf);
  uStack_2b0 = *param_2;
  uStack_1f8 = *param_3;
  lStack_538 = CONCAT44(lStack_538._4_4_,*(undefined4 *)((longlong)param_16 + 0x1c));
  lStack_500 = *param_16;
  puStack_530 = (undefined8 *)param_16[2];
  fVar100 = (float)_DAT_14300cbb0;
  uVar35 = (ulonglong)_DAT_14300cbb0 >> 0x20;
  bVar25 = SUB41(_DAT_142e36f50,0);
  bVar26 = (byte)((uint)_DAT_142e36f50 >> 8);
  bVar109 = (byte)((uint)_DAT_142e36f50 >> 0x10);
  bVar111 = (byte)((uint)_DAT_142e36f50 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                            CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ==
                  CONCAT13(unaff_XMM11_Bd,
                           CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))));
  cVar23 = (char)iVar10;
  cVar133 = (char)((uint)iVar10 >> 8);
  cVar134 = (char)((uint)iVar10 >> 0x10);
  cVar135 = (char)((uint)iVar10 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                            CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))) ==
                  CONCAT13(unaff_XMM11_Bh,
                           CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))));
  cVar136 = (char)iVar10;
  cVar137 = (char)((uint)iVar10 >> 8);
  cVar138 = (char)((uint)iVar10 >> 0x10);
  cVar139 = (char)((uint)iVar10 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                            CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))) ==
                  CONCAT13(unaff_XMM11_Bl,
                           CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))));
  cVar140 = (char)iVar10;
  cVar141 = (char)((uint)iVar10 >> 8);
  cVar142 = (char)((uint)iVar10 >> 0x10);
  cVar143 = (char)((uint)iVar10 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                            CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))) ==
                  CONCAT13(unaff_XMM11_Bp,
                           CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))));
  cVar144 = (char)iVar10;
  cVar145 = (char)((uint)iVar10 >> 8);
  cVar146 = (char)((uint)iVar10 >> 0x10);
  cVar147 = (char)((uint)iVar10 >> 0x18);
  uVar27 = SUB41(_DAT_142e36f28,0);
  uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
  uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
  uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
  pauVar45 = pauVar47 + 1;
  plStack_540 = (longlong *)(pauStack_388[0x15] + 8);
  pauStack_378 = pauStack_380 + 2;
  lStack_6a0 = lStack_500 + 0x20;
  pfVar42 = *(float **)(piStack_138 + 0x5e);
  puStack_5f0 = param_1;
  while( true ) {
    bVar128 = 0;
    bVar127 = 0;
    bVar126 = 0;
    bVar125 = 0;
    bVar124 = 0;
    bVar123 = 0;
    bVar122 = 0;
    bVar121 = 0;
    bVar120 = 0;
    bVar118 = 0;
    bVar116 = 0;
    bVar114 = 0;
    if (pfVar42 == (float *)0x0) break;
    if ((short)uVar55 == 0) {
      do {
        auVar69 = *pauVar45;
        pauVar47 = pauVar47 + -0x18;
        pauVar45 = pauVar45 + 1;
        uVar55 = (ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar55 == 0);
    }
    uVar51 = 0;
    for (uVar28 = uVar55; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
      uVar51 = uVar51 + 1;
    }
    uVar32 = (ulonglong)uVar51;
    uVar62 = *(undefined4 *)((longlong)pauVar47 + uVar32 * -0x18 + -0x18);
    uStack_554 = *(undefined4 *)((longlong)pauVar47 + uVar32 * -0x18 + -0x14);
    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,uStack_554);
    uStack_568 = *(undefined4 *)((longlong)pauVar47 + uVar32 * -0x18 + -4);
    uVar29 = *(undefined8 *)((longlong)pauVar47 + uVar32 * -0x18 + -0xc);
    uStack_570 = CONCAT44((float)((ulonglong)uVar29 >> 0x20) + (float)uVar35,(float)uVar29 + fVar100
                         );
    auStack_1e8._0_4_ = 128.81592;
    auStack_1e8._4_4_ = 1.4013e-45;
    uStack_1e0._0_4_ = 2.7316895;
    uStack_1e0._4_4_ = 1.4013e-45;
    uStack_1d8 = (longlong *)&uStack_558;
    fStack_1d0 = 4.1987457;
    uStack_1cc = 1;
    uStack_558 = uVar62;
    pfStack_120 = (float *)((longlong)pfVar42 + -1);
    pdb_140f60760(&fStack_368,&UNK_14300d0f0,auStack_1e8);
    lStack_3c8 = CONCAT44(fStack_364,fStack_368);
    pbStack_3c0 = (byte *)CONCAT44(uStack_35c,fStack_360);
    uStack_3b8 = CONCAT17(auStack_351[0],CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
    fStack_364 = 0.2;
    bStack_358 = (byte)uStack_568;
    uStack_357 = (undefined2)((uint)uStack_568 >> 8);
    uStack_355._0_1_ = (undefined1)((uint)uStack_568 >> 0x18);
    fStack_360 = (float)uStack_570;
    uStack_35c = (float)((ulonglong)uStack_570 >> 0x20);
    fStack_368 = (float)((uint)fStack_368 & 0xffffff00);
    pfStack_298 = (float *)((ulonglong)pfStack_298 & 0xffffffffffffff00);
    uStack_104 = 1;
    pdb_140c9dcb0(auStack_1e8,&fStack_368,&pfStack_298);
    bStack_13f = bStack_13f | 2;
    pub_142e32760(&fStack_368,auStack_1e8,0xb0);
    uStack_116 = 1;
    pdb_140c9dee0(auStack_1e8);
    pfStack_418 = (float *)0x0;
    pfStack_420 = (float *)CONCAT44(pfStack_420._4_4_,1);
    uStack_116 = 1;
    pdb_140c9de10(&pfStack_298,auStack_1e8,&pfStack_420);
    uStack_116 = 0;
    pdb_140c9dd20(auStack_1e8,&fStack_368,&pfStack_298);
    uStack_104 = 1;
    pdb_140c9dbe0(&fStack_368,auStack_1e8,0);
    uStack_104 = 0;
    plVar36 = &lStack_3c8;
    uStack_600 = pdb_1409008d0(uStack_2b0,plVar36,&fStack_368);
    plStack_5f8 = plVar36;
    pdb_140a88230(auStack_1e8,&uStack_570);
    pdb_140a88290(&fStack_368,auStack_1e8);
    pdb_140a882b0(auStack_1e8,&fStack_368,
                  *(float *)((longlong)pauVar47 + uVar32 * -0x18 + -0x10) * fVar97);
    uVar29 = pdb_14072cd40(&uStack_600);
    pdb_140b133e0(&fStack_368,uStack_1f8,uVar29);
    pdb_140a882d0(auStack_1e8,&fStack_368);
    cVar22 = pdb_1408ffa90(&uStack_600);
    if (cVar22 != '\0') {
      *(undefined4 *)plStack_468 = (undefined4)lStack_460;
      uVar29 = pdb_1400af680(pauStack_378,&uStack_558);
      pdb_140cab960(auStack_1e8,pauStack_380,uVar29,&uStack_558);
      if (auStack_1e8[0] != '\0') {
        *puStack_5e8 = uStack_484;
        pdb_14007ee60();
        pbVar30 = pub_1406abab0(0x20,8);
        if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar30[0] = 1;
        pbVar30[1] = 0;
        pbVar30[2] = 0;
        pbVar30[3] = 0;
        pbVar30[4] = 0;
        pbVar30[5] = 0;
        pbVar30[6] = 0;
        pbVar30[7] = 0;
        pbVar30[8] = 1;
        pbVar30[9] = 0;
        pbVar30[10] = 0;
        pbVar30[0xb] = 0;
        pbVar30[0xc] = 0;
        pbVar30[0xd] = 0;
        pbVar30[0xe] = 0;
        pbVar30[0xf] = 0;
        pbVar30[0x10] = 1;
        pbVar30[0x11] = 0;
        pbVar30[0x12] = 0;
        pbVar30[0x13] = 0;
        *(undefined4 *)(pbVar30 + 0x14) = uVar62;
        *(undefined4 *)(pbVar30 + 0x18) = pfStack_100._0_4_;
        uStack_1e0._0_4_ = SUB84(pbVar30,0);
        uStack_1e0._4_4_ = (float)((ulonglong)pbVar30 >> 0x20);
        auStack_1e8._0_4_ = 1.96182e-44;
        auStack_1e8._4_4_ = 0.0;
        pdb_140ae5180(uStack_5e0,auStack_1e8,&UNK_14300d0f8);
        lVar31 = pdb_140c40010(uStack_128,uVar62);
        if (lVar31 != 0) {
          lVar31 = pdb_1409014e0(lVar31 + 0x38);
          if (lVar31 != 0) {
            pfStack_420 = (float *)CONCAT71(pfStack_420._1_7_,*(undefined1 *)(lVar31 + 0x16));
            cVar22 = pdb_1408ff980(&pfStack_420);
            pdb_1408ff9a0(auStack_1e8,&uStack_600);
            if ((float)auStack_1e8._0_4_ == 2.8026e-45) {
              pfStack_298 = (float *)0x0;
              uStack_290 = (float *)((ulonglong)uStack_290._4_4_ << 0x20);
            }
            else {
              uStack_290 = (float *)CONCAT44(uStack_290._4_4_,fStack_1bc);
              pfStack_298 = (float *)CONCAT44(fStack_1c0,uStack_1c8._4_4_);
            }
            uStack_34d = (undefined4)uStack_290;
            uStack_355 = SUB84(pfStack_298,0);
            auStack_351 = SUB84((ulonglong)pfStack_298 >> 0x20,0);
            *(undefined4 *)puStack_530 = (undefined4)lStack_538;
            lVar31 = *(longlong *)(lStack_500 + 0x30);
            pfVar42 = *(float **)(lStack_500 + 0x40);
            if (lVar31 == *(longlong *)(lStack_500 + 0x20)) {
              pfStack_110 = *(float **)(lStack_500 + 0x40);
              pdb_142d7f080(lStack_6a0);
              pfVar42 = pfStack_110;
            }
            lVar39 = *(longlong *)(lStack_500 + 0x28);
            lVar41 = lVar31 * 0x38;
            *(float **)(lVar39 + lVar41) = pfVar42;
            *(char *)(lVar39 + 8 + lVar41) = cVar22 * '\x02' + '\x1b';
            puVar38 = (undefined8 *)(lVar39 + 9 + lVar41);
            *puVar38 = CONCAT44(fStack_364,fStack_368);
            puVar38[1] = CONCAT44(uStack_35c,fStack_360);
            puVar38 = (undefined8 *)(lVar39 + 0x18 + lVar41);
            *puVar38 = CONCAT44(uStack_355,
                                CONCAT22(uStack_357,CONCAT11(bStack_358,uStack_35c._3_1_)));
            puVar38[1] = CONCAT44(uStack_34d,auStack_351);
            *(ulonglong *)(lVar39 + 0x28 + lVar41) =
                 (ulonglong)CONCAT13(bVar111,CONCAT12(bVar109,CONCAT11(bVar26,bVar25)));
            *(undefined1 *)(lVar39 + 0x30 + lVar41) = 0;
            *(longlong *)(lStack_500 + 0x30) = lVar31 + 1;
            *(longlong *)(lStack_500 + 0x40) = *(longlong *)(lStack_500 + 0x40) + 1;
          }
        }
      }
    }
    cVar22 = pdb_1408ffaf0(&uStack_600);
    if (cVar22 != '\0') {
      lVar31 = pdb_140c017b0(uVar62,(ulonglong)pfStack_100 & 0xffffffff);
      lStack_6a8 = lVar31;
      if (*(longlong *)pauStack_388[0x15] != 0) {
        uVar32 = pdb_1400af0a0(plStack_540,&lStack_6a8);
        lVar39 = *(longlong *)(pauStack_388[0x13] + 8);
        bVar58 = (byte)(uVar32 >> 0x39);
        auVar69 = ZEXT216(CONCAT11(bVar58,bVar58));
        auVar69 = pshuflw(auVar69,auVar69,0);
        lVar41 = 0;
        do {
          uVar32 = uVar32 & *(ulonglong *)pauStack_388[0x14];
          auVar94 = *(undefined1 (*) [16])(lVar39 + uVar32);
          auVar89[0] = -(auVar94[0] == auVar69[0]);
          auVar89[1] = -(auVar94[1] == auVar69[1]);
          auVar89[2] = -(auVar94[2] == auVar69[2]);
          auVar89[3] = -(auVar94[3] == auVar69[3]);
          auVar89[4] = -(auVar94[4] == auVar69[4]);
          auVar89[5] = -(auVar94[5] == auVar69[5]);
          auVar89[6] = -(auVar94[6] == auVar69[6]);
          auVar89[7] = -(auVar94[7] == auVar69[7]);
          auVar89[8] = -(auVar94[8] == auVar69[0]);
          auVar89[9] = -(auVar94[9] == auVar69[1]);
          auVar89[10] = -(auVar94[10] == auVar69[2]);
          auVar89[0xb] = -(auVar94[0xb] == auVar69[3]);
          auVar89[0xc] = -(auVar94[0xc] == auVar69[4]);
          auVar89[0xd] = -(auVar94[0xd] == auVar69[5]);
          auVar89[0xe] = -(auVar94[0xe] == auVar69[6]);
          auVar89[0xf] = -(auVar94[0xf] == auVar69[7]);
          uVar52 = (ushort)(SUB161(auVar89 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar89[0xf] >> 7) << 0xf;
          uVar51 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar28 = 0;
            for (uVar7 = uVar51; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            lVar53 = (uVar28 + uVar32 & *(ulonglong *)pauStack_388[0x14]) * -0x98;
            if (lVar31 == *(longlong *)(lVar39 + -0x98 + lVar53)) {
              lVar39 = lVar39 + lVar53;
              uVar32 = *(ulonglong *)(lVar39 + -0x80);
              uVar50 = uVar32 * 0xc;
              if (0xaaaaaaaaaaaaaaa < uVar32) {
                uVar29 = 0;
LAB_14085eb4a:
                pdb_142dc7e2a(uVar29,uVar50);
                goto LAB_14085eb55;
              }
              pfVar42 = *(float **)(lVar39 + -0x88);
              if (uVar50 == 0) {
                pbVar30 = (byte *)0x4;
                uVar40 = 0;
              }
              else {
                pfStack_100 = pfVar42;
                pdb_14007ee60();
                uVar29 = 4;
                pbVar30 = pub_1406abab0(uVar50,4);
                uVar40 = uVar32;
                pfVar42 = pfStack_100;
                if (pbVar30 == (byte *)0x0) goto LAB_14085eb4a;
              }
              auStack_1e8._0_4_ = (undefined4)uVar40;
              auStack_1e8._4_4_ = (undefined4)(uVar40 >> 0x20);
              uStack_1e0._0_4_ = SUB84(pbVar30,0);
              uStack_1e0._4_4_ = (float)((ulonglong)pbVar30 >> 0x20);
              uStack_1d8._0_4_ = 0.0;
              uStack_1d8._4_4_ = 0.0;
              if (uVar32 != 0) {
                pub_142e32760(pbVar30,pfVar42,uVar50);
                uStack_1d8._0_4_ = (float)uVar32;
                uStack_1d8._4_4_ = (float)(uVar32 >> 0x20);
              }
              pdb_140080930(&lStack_5c8,auStack_1e8,1);
              if (!SBORROW8(0,lStack_5c8)) {
                uStack_428 = uStack_598;
                pbStack_438 = pbStack_5a8;
                uStack_430 = uStack_5a0;
                uStack_448._0_4_ = (undefined4)uStack_5b8;
                uStack_448._4_4_ = (undefined4)((ulonglong)uStack_5b8 >> 0x20);
                lStack_440 = lStack_5b0;
                lStack_458 = lStack_5c8;
                uStack_450 = SUB84(puStack_5c0,0);
                uStack_44c = (uint)((ulonglong)puStack_5c0 >> 0x20);
                pdb_140082750(&lStack_3c8,&lStack_5c8);
                fVar59 = (float)pub_142e32b00(fStack_398 * _DAT_142e37ae4);
                uVar32 = (longlong)(fVar59 - _DAT_142e36f2c) & (longlong)fVar59 >> 0x3f |
                         (longlong)fVar59;
                fVar60 = 0.0;
                if (fVar59 < 0.0) {
                  uVar32 = 0;
                }
                if (_DAT_142e36f30 < fVar59) {
                  uVar32 = 0xffffffffffffffff;
                }
                pbStack_2b8 = (byte *)(uVar32 + (uVar32 == 0));
                Var12 = ZEXT89(pbStack_2b8);
                fVar59 = (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27)));
                for (pbVar30 = (byte *)0x0; pbVar30 < pbStack_2b8; pbVar30 = pbVar30 + 1) {
                  pfStack_298 = (float *)CONCAT44(pfStack_298._4_4_,fVar60);
                  if ((fVar60 < 0.0) ||
                     ((float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))) < fVar60))
                  {
                    auStack_1e8 = (undefined1  [8])&pfStack_298;
                    uStack_1e0._0_4_ = 7.7206726;
                    uStack_1e0._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14330d448,auStack_1e8,&UNK_14300d110);
                  }
                  fVar60 = fVar59 / (float)(unkint9)Var12 + fVar60;
                  uVar24 = uVar27;
                  uVar108 = uVar105;
                  uVar110 = uVar106;
                  uVar112 = uVar107;
                  if (fVar60 <= (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))))
                  {
                    uVar24 = SUB41(fVar60,0);
                    uVar108 = (undefined1)((uint)fVar60 >> 8);
                    uVar110 = (undefined1)((uint)fVar60 >> 0x10);
                    uVar112 = (undefined1)((uint)fVar60 >> 0x18);
                  }
                  pfStack_298 = (float *)CONCAT44(pfStack_298._4_4_,
                                                  CONCAT13(uVar112,CONCAT12(uVar110,CONCAT11(uVar108
                                                  ,uVar24))));
                  if ((NAN((float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27)))) ||
                      NAN((float)CONCAT13(uVar112,CONCAT12(uVar110,CONCAT11(uVar108,uVar24))))) ||
                      (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))) <
                      (float)CONCAT13(uVar112,CONCAT12(uVar110,CONCAT11(uVar108,uVar24)))) {
                    auStack_1e8 = (undefined1  [8])&pfStack_298;
                    uStack_1e0._0_4_ = 7.7206726;
                    uStack_1e0._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14330d448,auStack_1e8,&UNK_14300d128);
                  }
                  pdb_14148d1d0(&fStack_368,&lStack_458);
                  if (!SBORROW8(0,CONCAT44(fStack_364,fStack_368))) {
                    uStack_1b8 = puStack_338;
                    uVar14 = CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358));
                    auVar15._7_4_ = auStack_351;
                    auVar15._0_7_ = uVar14;
                    auVar16._11_4_ = uStack_34d;
                    auVar16._0_11_ = auVar15;
                    auVar13[0xf] = uStack_349;
                    auVar13._0_15_ = auVar16;
                    uStack_1c8._0_4_ = auStack_348._0_4_;
                    uStack_1c8._4_4_ = auStack_348._4_4_;
                    fStack_1c0 = auStack_348._8_4_;
                    fStack_1bc = auStack_348._12_4_;
                    uStack_1d8._0_4_ = (float)uVar14;
                    uStack_1d8._4_4_ = auVar15._4_4_;
                    fStack_1d0 = auVar16._8_4_;
                    uStack_1cc = auVar13._12_4_;
                    auStack_1e8._0_4_ = fStack_368;
                    auStack_1e8._4_4_ = fStack_364;
                    uStack_1e0._0_4_ = fStack_360;
                    uStack_1e0._4_4_ = uStack_35c;
                    pdb_14148ba90(&pfStack_420,auStack_1e8);
                    if (CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_) != 0) {
                      pub_1406abac0((byte *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0),
                                    CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_) * 0xc,4);
                    }
                    if (CONCAT44(uStack_1cc,fStack_1d0) != 0) {
                      pub_1406abac0((byte *)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8),
                                    CONCAT44(uStack_1cc,fStack_1d0) << 2,4);
                    }
                    if (!SBORROW8(0,(longlong)pfStack_420)) {
                      auStack_288._8_8_ = uStack_408;
                      auStack_288._0_8_ = lStack_410;
                      pfStack_298 = pfStack_420;
                      uStack_290 = pfStack_418;
                      uStack_268 = uStack_3f0;
                      pfStack_278 = pfStack_400;
                      uStack_270 = uStack_3f8;
                      pfStack_230 = pfStack_418;
                      pfStack_110 = pfStack_418 + lStack_410 * 3;
                      auVar67._4_8_ = 0;
                      auVar67._0_4_ = _DAT_142f6e380;
                      auVar66._4_8_ = 0;
                      auVar66._0_4_ = _DAT_142f6e380;
                      if (lStack_410 != 0) {
                        uVar32 = lStack_410 * 0xc - 0xc;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = uVar32;
                        auVar68 = ZEXT416((uint)_DAT_142f6e380);
                        pfVar42 = pfStack_418;
                        auVar66 = auVar67;
                        if ((SUB164(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
                          pfVar42 = pfStack_418 + 3;
                          fVar60 = pfStack_418[1];
                          if (_DAT_142f6e380 <= pfStack_418[1]) {
                            fVar60 = _DAT_142f6e380;
                          }
                          auVar66._8_4_ = 0;
                          auVar66._0_8_ = CONCAT44(0,fVar60);
                          auVar68._8_8_ = 0;
                          auVar68._0_8_ = CONCAT44(0,fVar60);
                        }
                        if (0xb < uVar32) {
                          do {
                            fVar60 = pfVar42[1];
                            fVar99 = pfVar42[4];
                            fVar61 = auVar68._0_4_;
                            fVar101 = fVar60;
                            if (fVar61 <= fVar60) {
                              fVar101 = fVar61;
                            }
                            fVar101 = (float)(~-(uint)NAN(fVar61) & (uint)fVar101 |
                                             -(uint)NAN(fVar61) & (uint)fVar60);
                            pfVar42 = pfVar42 + 6;
                            fVar60 = fVar99;
                            if (fVar101 <= fVar99) {
                              fVar60 = fVar101;
                            }
                            uVar51 = -(uint)NAN(fVar101) & (uint)fVar99 |
                                     ~-(uint)NAN(fVar101) & (uint)fVar60;
                            auVar68 = ZEXT416(uVar51);
                            auVar66._4_8_ = 0;
                            auVar66._0_4_ = uVar51;
                          } while (pfVar42 != pfStack_110);
                        }
                      }
                      lStack_480 = 0;
                      lStack_478 = 4;
                      lStack_470 = 0;
                      fVar60 = auVar66._0_4_ + _DAT_14300cbc0;
                      fVar99 = auVar66._0_4_ + _UNK_14300cbc4;
                      fVar101 = auVar66._8_4_ + _UNK_14300cbcc;
                      uVar50 = lStack_410 - 1;
                      uVar32 = 0;
                      pfStack_100 = pfStack_418;
                      while (pfStack_100 != pfStack_110) {
                        fVar61 = (float)((uint)((float)uVar32 / (float)uVar50 + fVar87) & uVar6);
                        fVar61 = fVar61 + fVar61;
                        fVar61 = _DAT_142e36f28 - fVar61 * fVar61 * fVar61;
                        fVar70 = (_DAT_142e36f28 - fVar61) * fVar99;
                        fVar73 = fVar101 * 0.0;
                        auVar90._4_4_ = fVar70;
                        auVar90._0_4_ = fVar70;
                        auVar90._8_4_ = fVar73;
                        auVar90._12_4_ = fVar73;
                        auVar91._4_12_ = auVar90._4_12_;
                        auVar91._0_4_ = fVar70 + fVar61 * fVar60;
                        fStack_368 = *pfStack_100;
                        fStack_364 = pfStack_100[2];
                        pdb_140df4540(auStack_1e8,&fStack_368,auVar91._0_8_);
                        lVar31 = lStack_470;
                        if (lStack_470 == lStack_480) {
                          pdb_142db7820(&lStack_480);
                        }
                        pfStack_100 = pfStack_100 + 3;
                        uVar32 = uVar32 + 1;
                        *(float *)(lStack_478 + 8 + lVar31 * 0xc) = (float)uStack_1e0;
                        *(ulonglong *)(lStack_478 + lVar31 * 0xc) =
                             CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
                        lStack_470 = lVar31 + 1;
                      }
                      bStack_358 = (byte)lStack_470;
                      uStack_357 = (undefined2)((ulonglong)lStack_470 >> 8);
                      uStack_355 = (undefined4)((ulonglong)lStack_470 >> 0x18);
                      auStack_351[0] = (undefined1)((ulonglong)lStack_470 >> 0x38);
                      fStack_368 = (float)lStack_480;
                      fStack_364 = (float)((ulonglong)lStack_480 >> 0x20);
                      fStack_360 = (float)lStack_478;
                      uStack_35c = (float)((ulonglong)lStack_478 >> 0x20);
                      pdb_140a89130(auStack_1e8,&fStack_368);
                      pdb_140a891b0(&fStack_368,auStack_1e8);
                      pdb_140a89100(auStack_1e8,&fStack_368);
                      uStack_117 = 1;
                      uVar29 = pdb_14072cd40(&uStack_600);
                      uStack_117 = 1;
                      pdb_140b133e0(&fStack_368,uStack_1f8,uVar29);
                      uStack_117 = 0;
                      pdb_140a891e0(auStack_1e8,&fStack_368);
                      uVar27 = SUB41(_DAT_142e36f28,0);
                      uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
                      uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
                      uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
                      if (pfStack_298 != (float *)0x0) {
                        pub_1406abac0((byte *)pfStack_230,(longlong)pfStack_298 * 0xc,4);
                      }
                      if (auStack_288._8_8_ != 0) {
                        pub_1406abac0((byte *)pfStack_278,auStack_288._8_8_ << 2,4);
                      }
                    }
                  }
                  fVar60 = (float)CONCAT13(uVar112,CONCAT12(uVar110,CONCAT11(uVar108,uVar24)));
                }
                if (lStack_3c8 != 0) {
                  pub_1406abac0(pbStack_3c0,lStack_3c8 << 3,4);
                }
                bVar25 = SUB41(_DAT_142e36f50,0);
                bVar26 = (byte)((uint)_DAT_142e36f50 >> 8);
                bVar109 = (byte)((uint)_DAT_142e36f50 >> 0x10);
                bVar111 = (byte)((uint)_DAT_142e36f50 >> 0x18);
                cVar23 = -1;
                cVar133 = -1;
                cVar134 = -1;
                cVar135 = -1;
                cVar136 = -1;
                cVar137 = -1;
                cVar138 = -1;
                cVar139 = -1;
                cVar140 = -1;
                cVar141 = -1;
                cVar142 = -1;
                cVar143 = -1;
                cVar144 = -1;
                cVar145 = -1;
                cVar146 = -1;
                cVar147 = -1;
                if (lStack_3b0 != 0) {
                  pub_1406abac0(pbStack_3a8,lStack_3b0 << 2,4);
                }
                if (lStack_458 != 0) {
                  pub_1406abac0((byte *)CONCAT44(uStack_44c,uStack_450),lStack_458 * 0xc,4);
                }
                if (lStack_440 != 0) {
                  pub_1406abac0(pbStack_438,lStack_440 << 2,4);
                }
              }
              goto LAB_14085eb30;
            }
            uVar52 = (ushort)(uVar51 - 1) & (ushort)uVar51;
            uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar52);
          }
          auVar76[0] = -(auVar94[0] == cVar23);
          auVar76[1] = -(auVar94[1] == cVar133);
          auVar76[2] = -(auVar94[2] == cVar134);
          auVar76[3] = -(auVar94[3] == cVar135);
          auVar76[4] = -(auVar94[4] == cVar136);
          auVar76[5] = -(auVar94[5] == cVar137);
          auVar76[6] = -(auVar94[6] == cVar138);
          auVar76[7] = -(auVar94[7] == cVar139);
          auVar76[8] = -(auVar94[8] == cVar140);
          auVar76[9] = -(auVar94[9] == cVar141);
          auVar76[10] = -(auVar94[10] == cVar142);
          auVar76[0xb] = -(auVar94[0xb] == cVar143);
          auVar76[0xc] = -(auVar94[0xc] == cVar144);
          auVar76[0xd] = -(auVar94[0xd] == cVar145);
          auVar76[0xe] = -(auVar94[0xe] == cVar146);
          auVar76[0xf] = -(auVar94[0xf] == cVar147);
          if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 || (SUB161(auVar76 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar76 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar76 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar76 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar76 >> 0x2f,0) & 1) != 0) || (SUB161(auVar76 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar76 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar76 >> 0x47,0) & 1) != 0) || (SUB161(auVar76 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar76 >> 0x57,0) & 1) != 0) || (SUB161(auVar76 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar76 >> 0x67,0) & 1) != 0) || (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0') break;
          uVar32 = uVar32 + lVar41 + 0x10;
          lVar41 = lVar41 + 0x10;
        } while( true );
      }
    }
LAB_14085eb30:
    uVar55 = uVar55 - 1 & uVar55;
    pfVar42 = pfStack_120;
  }
LAB_14085eb55:
  piVar49 = piStack_138;
  if (0.0 < (float)piStack_138[0x1e]) {
    pdb_140e09030(auStack_1e8,*param_10);
    fVar87 = (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))) /
             SQRT((float)uStack_1e0 * (float)uStack_1e0 +
                  (float)auStack_1e8._0_4_ * (float)auStack_1e8._0_4_);
    pdb_140de88f0(auStack_1e8,(float)auStack_1e8._0_4_ * fVar87,fVar87 * (float)uStack_1e0);
    uStack_5d8 = (float)uStack_1e0 * _DAT_14300cbd0 * _DAT_142e377d0 +
                 (float)auStack_1e8._4_4_ * _DAT_14300cbe0 * _DAT_142e377c0 +
                 (float)auStack_1e8._0_4_ * _DAT_14300cbe0 * _DAT_142e377b0 +
                 uStack_1e0._4_4_ * _DAT_14300cbd0;
    uStack_5d4 = (float)uStack_1e0 * _UNK_14300cbd4 * _UNK_142e377d4 +
                 (float)auStack_1e8._4_4_ * _UNK_14300cbe4 * _UNK_142e377c4 +
                 (float)auStack_1e8._0_4_ * _UNK_14300cbe4 * _UNK_142e377b4 +
                 uStack_1e0._4_4_ * _UNK_14300cbd4;
    uStack_5d0 = (float)uStack_1e0 * _UNK_14300cbd8 * _UNK_142e377d8 +
                 (float)auStack_1e8._4_4_ * 0.0 * _UNK_142e377c8 +
                 (float)auStack_1e8._0_4_ * 0.0 * _UNK_142e377b8 + uStack_1e0._4_4_ * _UNK_14300cbd8
    ;
    uStack_5cc = (float)uStack_1e0 * _UNK_14300cbdc * _UNK_142e377dc +
                 (float)auStack_1e8._4_4_ * 0.0 * _UNK_142e377cc +
                 (float)auStack_1e8._0_4_ * 0.0 * _UNK_142e377bc + uStack_1e0._4_4_ * _UNK_14300cbdc
    ;
    uStack_220 = *(undefined8 *)(piVar49 + 0x1f);
    fStack_218 = (float)piVar49[0x21];
    fVar87 = (float)piVar49[0x1e] * _DAT_142e37990;
    lStack_480 = CONCAT44(lStack_480._4_4_,fVar87);
    fStack_368 = 0.0;
    fStack_364 = 0.0;
    fStack_360 = 2.8026e-45;
    uStack_35c = 0.0;
    bStack_358 = 0;
    auStack_351._1_3_ = 0xcd20;
    uStack_34d = 0x143;
    uStack_349 = 0;
    auStack_348[8] = 1;
    auStack_348._0_8_ = 10;
    puStack_338 = (uint *)&UNK_14300cd2a;
    uStack_330 = 0x12;
    pfVar42 = (float *)0x0;
    while ((pfVar42 != (float *)0x2 &&
           (bVar58 = (&bStack_358)[(longlong)pfVar42 * 0x18], bVar58 != 2))) {
      pfStack_110 = pfVar42;
      lVar31 = *(longlong *)(auStack_351 + (longlong)pfVar42 * 0x18 + 1);
      pbVar30 = *(byte **)(auStack_348 + (longlong)pfVar42 * 0x18);
      auStack_1e8._0_4_ = 0x4300cd3c;
      auStack_1e8._4_4_ = 1;
      uStack_1e0._0_4_ = 2.24208e-44;
      uStack_1e0._4_4_ = 0.0;
      lStack_3c8 = lVar31;
      pbStack_3c0 = pbVar30;
      uVar29 = pdb_140bbbcb0(auStack_1e8);
      pdb_140b133e0(&pfStack_420,uStack_1f8,uVar29);
      auStack_1e8 = (undefined1  [8])&uStack_220;
      uStack_1e0._0_4_ = 7.6012573;
      uStack_1e0._4_4_ = 1.4013e-45;
      uStack_1d8 = &lStack_3c8;
      fStack_1d0 = 2.731697;
      uStack_1cc = 1;
      uStack_1c8 = (float *)&uStack_5d8;
      fStack_1c0 = 7.6004868;
      fStack_1bc = 1.4013e-45;
      uStack_1b8 = (uint *)&lStack_480;
      pcStack_1b0 = pdb_140f70fc0;
      pdb_140f60760(&pfStack_298,&UNK_14300d080,auStack_1e8);
      pfVar42 = uStack_290;
      pfStack_100 = pfStack_298;
      uVar29 = auStack_288._0_8_;
      uStack_1e0._0_4_ = fStack_218;
      auStack_1e8._0_4_ = (undefined4)uStack_220;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_220 >> 0x20);
      bVar25 = (byte)uStack_5d8;
      bVar26 = uStack_5d8._1_1_;
      bVar109 = uStack_5d8._2_1_;
      bVar111 = uStack_5d8._3_1_;
      bVar114 = (byte)uStack_5d4;
      bVar116 = uStack_5d4._1_1_;
      bVar118 = uStack_5d4._2_1_;
      bVar120 = uStack_5d4._3_1_;
      bVar121 = (byte)uStack_5d0;
      bVar122 = uStack_5d0._1_1_;
      bVar123 = uStack_5d0._2_1_;
      bVar124 = uStack_5d0._3_1_;
      bVar125 = (byte)uStack_5cc;
      bVar126 = uStack_5cc._1_1_;
      bVar127 = uStack_5cc._2_1_;
      bVar128 = uStack_5cc._3_1_;
      pdb_14007ee60();
      pbVar33 = pub_1406abab0(0x50,0x10);
      pfStack_120 = pfVar42;
      if (pbVar33 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x50);
      }
      pbVar33[0] = 1;
      pbVar33[1] = 0;
      pbVar33[2] = 0;
      pbVar33[3] = 0;
      pbVar33[4] = 0;
      pbVar33[5] = 0;
      pbVar33[6] = 0;
      pbVar33[7] = 0;
      pbVar33[8] = 1;
      pbVar33[9] = 0;
      pbVar33[10] = 0;
      pbVar33[0xb] = 0;
      pbVar33[0xc] = 0;
      pbVar33[0xd] = 0;
      pbVar33[0xe] = 0;
      pbVar33[0xf] = 0;
      *(longlong *)(pbVar33 + 0x10) = lVar31;
      *(byte **)(pbVar33 + 0x18) = pbVar30;
      pbVar33[0x20] = bVar25;
      pbVar33[0x21] = bVar26;
      pbVar33[0x22] = bVar109;
      pbVar33[0x23] = bVar111;
      pbVar33[0x24] = bVar114;
      pbVar33[0x25] = bVar116;
      pbVar33[0x26] = bVar118;
      pbVar33[0x27] = bVar120;
      pbVar33[0x28] = bVar121;
      pbVar33[0x29] = bVar122;
      pbVar33[0x2a] = bVar123;
      pbVar33[0x2b] = bVar124;
      pbVar33[0x2c] = bVar125;
      pbVar33[0x2d] = bVar126;
      pbVar33[0x2e] = bVar127;
      pbVar33[0x2f] = bVar128;
      *(float *)(pbVar33 + 0x30) = fVar87;
      *(ulonglong *)(pbVar33 + 0x34) = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
      *(float *)(pbVar33 + 0x3c) = (float)uStack_1e0;
      pbVar33[0x40] = bVar58 & 1;
      pdb_1409baea0(auStack_1e8,pfVar42,uVar29,pbVar33,&UNK_14300d098);
      pfStack_278 = uStack_1c8;
      pfStack_298 = (float *)CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
      uStack_290 = (float *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0);
      auStack_288._12_4_ = uStack_1cc;
      auStack_288._8_4_ = fStack_1d0;
      auStack_288._0_8_ = uStack_1d8;
      pdb_140b133f0(&pfStack_420,&pfStack_298);
      if (pfStack_100 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_120,(ulonglong)pfStack_100,1);
      }
      pfVar42 = (float *)((longlong)pfStack_110 + 1);
    }
    uVar27 = SUB41(_DAT_142e36f28,0);
    uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
    uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
    uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
    if (piStack_138[0x1c] == 1) {
      iVar10 = piStack_138[0x1d];
      fVar97 = uStack_5d0 * uStack_5d0;
      fVar100 = uStack_5cc * uStack_5cc;
      fVar59 = uStack_5d4 * uStack_5d4 + uStack_5d8 * uStack_5d8;
      fVar87 = _UNK_14300cbf8 * uStack_5d0 +
               _UNK_14300cbf4 * uStack_5d4 + _DAT_14300cbf0 * uStack_5d8;
      fVar87 = fVar87 + fVar87;
      fVar60 = uStack_5cc + uStack_5cc;
      uStack_1d8._0_4_ =
           (float)uStack_220 +
           fVar60 * (uStack_5d4 * _DAT_142f95160 - uStack_5d0 * 0.0) +
           fVar87 * uStack_5d8 + (fVar100 - (fVar59 + fVar97)) * _DAT_14300cbf0;
      uStack_1d8._4_4_ =
           (float)((ulonglong)uStack_220 >> 0x20) +
           fVar60 * (uStack_5d0 * 0.0 - uStack_5d8 * _DAT_142f95160) +
           fVar87 * uStack_5d4 + (fVar100 - (fVar59 + fVar97)) * _UNK_14300cbf4;
      fStack_1d0 = fVar60 * (uStack_5d8 * 0.0 - uStack_5d4 * 0.0) +
                   fVar87 * uStack_5d0 + (fVar100 - (fVar59 + fVar97)) * _UNK_14300cbf8 + fStack_218
      ;
      auStack_1e8._0_4_ = uStack_5d8;
      auStack_1e8._4_4_ = uStack_5d4;
      uStack_1e0._0_4_ = uStack_5d0;
      uStack_1e0._4_4_ = uStack_5cc;
      uStack_1cc = 0x3f800000;
      uStack_1c8._0_4_ = 0x3f800000;
      uStack_1c8._4_4_ = 1.0;
      pdb_140b3d590(&pfStack_420);
      auStack_351._1_3_ = (undefined3)lStack_410;
      uStack_34d = (undefined4)((ulonglong)lStack_410 >> 0x18);
      uStack_349 = (undefined1)((ulonglong)lStack_410 >> 0x38);
      fStack_360 = SUB84(pfStack_420,0);
      uStack_35c = (float)((ulonglong)pfStack_420 >> 0x20);
      bStack_358 = (byte)pfStack_418;
      uStack_357 = (undefined2)((ulonglong)pfStack_418 >> 8);
      uStack_355 = (undefined4)((ulonglong)pfStack_418 >> 0x18);
      auStack_351[0] = (undefined1)((ulonglong)pfStack_418 >> 0x38);
      fStack_368 = (float)CONCAT31(fStack_368._1_3_,2);
      pfStack_298 = (float *)((ulonglong)pfStack_298 & 0xffffffffffffff00);
      pdb_140c9dcb0(auStack_1e8,&fStack_368,&pfStack_298);
      uStack_129 = 1;
      pdb_140c9deb0(&pfStack_298);
      uStack_129 = 0;
      pdb_140c9dd20(&fStack_368,auStack_1e8);
      pdb_140c9dbe0(auStack_1e8,&fStack_368,0);
      puVar43 = &UNK_14300cd3c;
      lStack_5c8 = pdb_140900b80(uStack_2b0,&UNK_14300cd3c,0x10,auStack_1e8);
      puStack_5c0 = puVar43;
      cVar23 = pdb_1408ffab0(&lStack_5c8);
      fVar59 = fStack_218;
      puVar2 = puStack_4a8;
      fVar60 = uStack_5cc;
      fVar100 = uStack_5d0;
      fVar97 = uStack_5d4;
      fVar87 = uStack_5d8;
      if (cVar23 == '\x03') {
        uVar62 = uStack_490._4_4_;
        *puStack_498 = uStack_490._4_4_;
        puStack_4a8[0x11] = fStack_218;
        *(undefined8 *)(puStack_4a8 + 0xf) = uStack_220;
        fVar96 = (float)uStack_220;
        fVar99 = uStack_220._4_4_;
        plVar36 = &lStack_5c8;
        pdb_1408ff9a0(auStack_1e8);
        puVar21 = puStack_4a8;
        fVar73 = _UNK_142e378f8;
        fVar70 = _UNK_142e378f4;
        fVar61 = _DAT_142e378f0;
        fVar101 = _DAT_142e36f28;
        if ((float)auStack_1e8._0_4_ == 2.8026e-45) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14300cd88);
        }
        fVar84 = fVar60 + fVar60;
        fVar82 = fVar100 * fVar100;
        fVar85 = fVar60 * fVar60;
        fVar102 = fVar97 * fVar97 + fVar87 * fVar87;
        fVar88 = fVar100 * _UNK_142e378f8 + fVar97 * _UNK_142e378f4 + fVar87 * _DAT_142e378f0;
        fVar88 = fVar88 + fVar88;
        fVar98 = fVar88 * fVar100 + (fVar85 - (fVar102 + fVar82)) * _UNK_142e378f8 +
                 (fVar87 * 0.0 - fVar97 * 0.0) * fVar84;
        fVar99 = fVar99 + fVar88 * fVar97 + (fVar85 - (fVar102 + fVar82)) * _UNK_142e378f4 +
                          (fVar100 * 0.0 - fVar87 * _DAT_142e36f28) * fVar84;
        fVar103 = fVar99 - uStack_220._4_4_;
        fVar59 = fVar98 + fVar59;
        fVar96 = fVar88 * fVar87 + (fVar85 - (fVar102 + fVar82)) * _DAT_142e378f0 +
                 (fVar97 * _DAT_142e36f28 - fVar100 * 0.0) * fVar84 + fVar96;
        fVar60 = fVar88 * fVar60 + (fVar85 - (fVar102 + fVar82)) * _UNK_142e378fc +
                 (fVar60 * 0.0 - fVar60 * 0.0) * fVar84 + 0.0;
        fVar87 = fVar59 - fStack_218;
        fVar97 = fVar96 - (float)uStack_220;
        fVar82 = (fVar60 - 0.0) * 0.0;
        fVar100 = fVar97 * fVar97 + fVar103 * fVar103 + fVar87 * fVar87;
        if (fVar100 <= _DAT_143006dc0) {
          fVar100 = _DAT_143006dc0;
        }
        fVar100 = ((uStack_1c8._4_4_ - (float)uStack_220) * fVar97 +
                   (fStack_1c0 - uStack_220._4_4_) * fVar103 + (fStack_1bc - fStack_218) * fVar87) /
                  fVar100;
        fVar103 = _DAT_142e36f28 - fVar100;
        fVar87 = (fVar99 * fVar100 + uStack_220._4_4_ * fVar103) - uStack_220._4_4_;
        fVar97 = (fVar100 * fVar59 + fVar103 * fStack_218) - fStack_218;
        fVar100 = (fVar100 * fVar96 + fVar103 * (float)uStack_220) - (float)uStack_220;
        fVar59 = (fVar82 * (fVar98 + 0.0) + 0.0) - 0.0;
        fVar60 = (fVar82 * fVar60 + 0.0) - 0.0;
        fVar97 = fVar97 * fVar97;
        bVar25 = SUB41(fVar97,0);
        bVar26 = (byte)((uint)fVar97 >> 8);
        bVar109 = (byte)((uint)fVar97 >> 0x10);
        bVar111 = (byte)((uint)fVar97 >> 0x18);
        fVar100 = fVar100 * fVar100;
        bVar114 = SUB41(fVar100,0);
        bVar116 = (byte)((uint)fVar100 >> 8);
        bVar118 = (byte)((uint)fVar100 >> 0x10);
        bVar120 = (byte)((uint)fVar100 >> 0x18);
        fVar59 = fVar59 * fVar59;
        bVar121 = SUB41(fVar59,0);
        bVar122 = (byte)((uint)fVar59 >> 8);
        bVar123 = (byte)((uint)fVar59 >> 0x10);
        bVar124 = (byte)((uint)fVar59 >> 0x18);
        fVar60 = fVar60 * fVar60;
        bVar125 = SUB41(fVar60,0);
        bVar126 = (byte)((uint)fVar60 >> 8);
        bVar127 = (byte)((uint)fVar60 >> 0x10);
        bVar128 = (byte)((uint)fVar60 >> 0x18);
        *puStack_498 = uVar62;
        puVar2[0xe] = SQRT(fVar100 + fVar87 * fVar87 + fVar97);
        fVar100 = uStack_5d0 * uStack_5d0;
        fVar60 = uStack_5cc * uStack_5cc;
        fVar59 = uStack_5d4 * uStack_5d4 + uStack_5d8 * uStack_5d8;
        fVar87 = fVar73 * uStack_5d0 + fVar70 * uStack_5d4 + fVar61 * uStack_5d8;
        fVar87 = fVar87 + fVar87;
        fVar97 = uStack_5cc + uStack_5cc;
        uVar62 = uStack_490._4_4_;
        *puStack_498 = uStack_490._4_4_;
        *(ulonglong *)(puStack_4a8 + 0x12) =
             CONCAT44(fVar97 * (uStack_5d0 * 0.0 - uStack_5d8 * fVar101) +
                      fVar87 * uStack_5d4 + (fVar60 - (fVar59 + fVar100)) * fVar70,
                      fVar97 * (uStack_5d4 * fVar101 - uStack_5d0 * 0.0) +
                      fVar87 * uStack_5d8 + (fVar60 - (fVar59 + fVar100)) * fVar61);
        puStack_4a8[0x14] =
             fVar97 * (uStack_5d8 * 0.0 - uStack_5d4 * 0.0) +
             fVar87 * uStack_5d0 + (fVar60 - (fVar59 + fVar100)) * fVar73;
        plVar34 = (longlong *)pdb_140f3bda0();
        if ((char)plVar34[2] == '\x01') {
          lVar31 = *plVar34;
          plVar36 = (longlong *)plVar34[1];
        }
        else {
          lVar31 = pdb_140f4fd10();
          *plVar34 = lVar31;
          plVar34[1] = (longlong)plVar36;
          *(undefined1 *)(plVar34 + 2) = 1;
        }
        *plVar34 = lVar31 + 1;
        *puStack_498 = uVar62;
        lVar39 = *(longlong *)(puVar21 + 4);
        uVar27 = SUB41(_DAT_142e36f28,0);
        uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
        uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
        uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
        if (lVar39 != 0) {
          uVar35 = lVar39 * 8 + 0x17U & 0xfffffffffffffff0;
          uVar32 = lVar39 + uVar35 + 0x11;
          if (uVar32 != 0) {
            pub_1406abac0((byte *)(*(longlong *)(puVar21 + 2) - uVar35),uVar32,0x10);
          }
        }
        lVar39 = _UNK_14300d1a8;
        *(longlong *)(puVar21 + 6) = _DAT_14300d1a0;
        *(longlong *)(puVar21 + 8) = lVar39;
        lVar39 = _UNK_14300d198;
        *(longlong *)(puVar21 + 2) = _DAT_14300d190;
        *(longlong *)(puVar21 + 4) = lVar39;
        *(longlong *)(puVar21 + 10) = lVar31;
        *(longlong **)(puVar21 + 0xc) = plVar36;
        pdb_140a60320(auStack_1e8,uStack_370,iVar10);
        pfStack_110 = (float *)CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
        pfStack_100 = (float *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0);
        lVar31 = CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        if (lVar31 != 0) {
          lVar39 = 0;
          do {
            uVar62 = *(undefined4 *)((longlong)pfStack_100 + lVar39);
            lVar41 = pdb_140c40010(uStack_128,uVar62);
            puVar2 = puStack_4a8;
            if (lVar41 != 0) {
              *puStack_498 = uStack_490._4_4_;
              pdb_140901490(lVar41 + 0x38,&UNK_14300cda0);
              pdb_1414b61f0(puVar2 + 2,uVar62);
            }
            lVar39 = lVar39 + 4;
          } while (lVar31 << 2 != lVar39);
        }
        if (pfStack_110 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_100,(longlong)pfStack_110 << 2,4);
        }
      }
      uVar24 = pdb_1408ffab0(&lStack_5c8);
      pfStack_100 = (float *)CONCAT71(pfStack_100._1_7_,uVar24);
      auStack_1e8._0_4_ = (undefined4)_DAT_142f6a650;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)_DAT_142f6a650 >> 0x20);
      uStack_1e0._0_4_ = (float)((uint)(float)uStack_1e0 & 0xffffff00);
      pdb_1414c3ef0(&lStack_3c8,param_6,&lStack_5c8,&puStack_4a8,auStack_1e8);
      if ((char)lStack_3c8 == '\0') {
        *puStack_498 = uStack_490._4_4_;
        *puStack_4a8 = 0;
      }
      else {
        fVar87 = (float)uStack_3b8;
        pdb_140a60320(&pfStack_298,uStack_370,iVar10);
        *puStack_498 = uStack_490._4_4_;
        *puStack_4a8 = 1;
        puStack_4a8[1] = fVar87;
        pdb_14007ee60();
        pfVar42 = (float *)pub_1406abab0(0x18,4);
        if (pfVar42 == (float *)0x0) {
          uStack_101 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        fVar97 = (float)puStack_4a8[0xf];
        fVar100 = (float)puStack_4a8[0x10];
        fVar60 = (float)puStack_4a8[0x11];
        fVar59 = (float)*(undefined8 *)(puStack_4a8 + 0x13) * _UNK_14300cc14;
        fVar99 = (float)((ulonglong)*(undefined8 *)(puStack_4a8 + 0x13) >> 0x20) * _UNK_14300cc18;
        fVar101 = (float)puStack_4a8[0x12] * _UNK_14300cc1c;
        uVar29 = *(undefined8 *)(puStack_4a8 + 0x10);
        *pfVar42 = fVar97 - (float)puStack_4a8[0x12] * _DAT_14300cc10;
        pfVar42[1] = fVar100 - fVar59;
        pfVar42[2] = fVar60 - fVar99;
        pfVar42[3] = fVar97 + fVar101;
        *(ulonglong *)(pfVar42 + 4) =
             CONCAT44(fVar99 + (float)((ulonglong)uVar29 >> 0x20),fVar59 + (float)uVar29);
        fStack_368 = 2.8026e-45;
        fStack_364 = 0.0;
        fStack_360 = SUB84(pfVar42,0);
        uStack_35c = (float)((ulonglong)pfVar42 >> 0x20);
        bStack_358 = 2;
        uStack_357 = 0;
        uStack_355 = 0;
        auStack_351 = (undefined1  [4])((uint)auStack_351 & 0xffffff00);
        uStack_101 = 1;
        pdb_140a89130(auStack_1e8,&fStack_368);
        uStack_111 = 1;
        uVar29 = pdb_14072cd40(&lStack_5c8);
        uStack_111 = 1;
        pdb_140b133e0(&fStack_368,uStack_1f8,uVar29);
        uStack_111 = 0;
        pdb_140a891e0(auStack_1e8,&fStack_368);
        fVar100 = _DAT_14300a334;
        fVar97 = _DAT_142e37adc;
        pfStack_120 = pfStack_298;
        pfStack_110 = uStack_290;
        if (auStack_288._0_8_ != 0) {
          pfVar42 = uStack_290 + auStack_288._0_8_;
          uVar62 = *(undefined4 *)((longlong)param_5 + 0x1c);
          uVar29 = *param_5;
          puVar2 = (undefined4 *)param_5[2];
          iVar10 = -(uint)(CONCAT13(bVar111,CONCAT12(bVar109,CONCAT11(bVar26,bVar25))) ==
                          CONCAT13(bVar111,CONCAT12(bVar109,CONCAT11(bVar26,bVar25))));
          iVar104 = -(uint)(CONCAT13(bVar120,CONCAT12(bVar118,CONCAT11(bVar116,bVar114))) ==
                           CONCAT13(bVar120,CONCAT12(bVar118,CONCAT11(bVar116,bVar114))));
          iVar8 = -(uint)(CONCAT13(bVar124,CONCAT12(bVar123,CONCAT11(bVar122,bVar121))) ==
                         CONCAT13(bVar124,CONCAT12(bVar123,CONCAT11(bVar122,bVar121))));
          iVar9 = -(uint)(CONCAT13(bVar128,CONCAT12(bVar127,CONCAT11(bVar126,bVar125))) ==
                         CONCAT13(bVar128,CONCAT12(bVar127,CONCAT11(bVar126,bVar125))));
          pfVar48 = uStack_290;
          do {
            puVar21 = puStack_4a8;
            fVar60 = *pfVar48;
            fStack_55c = fVar60;
            if (*(longlong *)(puStack_4a8 + 8) != 0) {
              uVar32 = pdb_1400aede0(puStack_4a8 + 10,&fStack_55c);
              lVar31 = *(longlong *)(puVar21 + 2);
              uVar35 = *(ulonglong *)(puVar21 + 4);
              bVar25 = (byte)(uVar32 >> 0x39);
              auVar69 = ZEXT216(CONCAT11(bVar25,bVar25));
              auVar69 = pshuflw(auVar69,auVar69,0);
              lVar39 = 0;
              while( true ) {
                uVar32 = uVar32 & uVar35;
                auVar94 = *(undefined1 (*) [16])(lVar31 + uVar32);
                auVar92[0] = -(auVar94[0] == auVar69[0]);
                auVar92[1] = -(auVar94[1] == auVar69[1]);
                auVar92[2] = -(auVar94[2] == auVar69[2]);
                auVar92[3] = -(auVar94[3] == auVar69[3]);
                auVar92[4] = -(auVar94[4] == auVar69[4]);
                auVar92[5] = -(auVar94[5] == auVar69[5]);
                auVar92[6] = -(auVar94[6] == auVar69[6]);
                auVar92[7] = -(auVar94[7] == auVar69[7]);
                auVar92[8] = -(auVar94[8] == auVar69[0]);
                auVar92[9] = -(auVar94[9] == auVar69[1]);
                auVar92[10] = -(auVar94[10] == auVar69[2]);
                auVar92[0xb] = -(auVar94[0xb] == auVar69[3]);
                auVar92[0xc] = -(auVar94[0xc] == auVar69[4]);
                auVar92[0xd] = -(auVar94[0xd] == auVar69[5]);
                auVar92[0xe] = -(auVar94[0xe] == auVar69[6]);
                auVar92[0xf] = -(auVar94[0xf] == auVar69[7]);
                uVar52 = (ushort)(SUB161(auVar92 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar92 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar92 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar92 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar92 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar92 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar92 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar92 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar92 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar92 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar92 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar92 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar92 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar92 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar92 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar92[0xf] >> 7) << 0xf;
                uVar55 = (uint)uVar52;
                while (uVar52 != 0) {
                  uVar6 = 0;
                  for (uVar51 = uVar55; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  uVar50 = uVar6 + uVar32 & uVar35;
                  if (fVar60 == *(float *)(lVar31 + uVar50 * -8 + -8)) {
                    fVar59 = *(float *)(lVar31 + -4 + uVar50 * -8);
                    uVar35 = (ulonglong)(uint)fVar60;
                    uVar37 = pdb_140c3d2c0(uStack_128);
                    fVar59 = fVar59 + fVar87;
                    fVar99 = fVar100;
                    if (fVar100 <= fVar59) {
                      fVar99 = fVar59;
                    }
                    fStack_17c = fVar97;
                    if (fVar99 <= fVar97) {
                      fStack_17c = fVar99;
                    }
                    auStack_1e8._0_4_ = (undefined4)uVar37;
                    auStack_1e8._4_4_ = (undefined4)((ulonglong)uVar37 >> 0x20);
                    uStack_1e0._0_4_ = (float)uVar35;
                    uStack_1e0._4_4_ = (float)(uVar35 >> 0x20);
                    uStack_1d8._0_4_ = 4.2039e-45;
                    uStack_1d8._4_4_ = 0.0;
                    uStack_198 = 8;
                    uStack_188 = 0;
                    uStack_180 = 1;
                    uStack_178 = 0;
                    uStack_176 = 0;
                    uStack_174 = 2;
                    uStack_170 = 7;
                    fStack_160 = fVar60;
                    pdb_140c45ec0(&fStack_368,uStack_528,(ulonglong)(uint)fVar60,&UNK_14300cdb8);
                    uStack_450 = CONCAT13((undefined1)uStack_34d,auStack_351._1_3_);
                    lStack_458 = CONCAT17(auStack_351[0],
                                          CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
                    uStack_44c = uStack_44c & 0xffffff00;
                    *puStack_4f8 = uStack_228;
                    *puStack_4e8 = uStack_224;
                    *puVar2 = uVar62;
                    pdb_1414c40f0(auStack_1e8,1 < (byte)pfStack_100,&lStack_458,uStack_128,
                                  uStack_4f0,uVar29,&uStack_738,uStack_4e0);
                    goto LAB_14085f8e0;
                  }
                  uVar52 = (ushort)(uVar55 - 1) & (ushort)uVar55;
                  uVar55 = CONCAT22((short)(uVar55 - 1 >> 0x10),uVar52);
                }
                auVar77[0] = -(auVar94[0] == (char)iVar10);
                auVar77[1] = -(auVar94[1] == (char)((uint)iVar10 >> 8));
                auVar77[2] = -(auVar94[2] == (char)((uint)iVar10 >> 0x10));
                auVar77[3] = -(auVar94[3] == (char)((uint)iVar10 >> 0x18));
                auVar77[4] = -(auVar94[4] == (char)iVar104);
                auVar77[5] = -(auVar94[5] == (char)((uint)iVar104 >> 8));
                auVar77[6] = -(auVar94[6] == (char)((uint)iVar104 >> 0x10));
                auVar77[7] = -(auVar94[7] == (char)((uint)iVar104 >> 0x18));
                auVar77[8] = -(auVar94[8] == (char)iVar8);
                auVar77[9] = -(auVar94[9] == (char)((uint)iVar8 >> 8));
                auVar77[10] = -(auVar94[10] == (char)((uint)iVar8 >> 0x10));
                auVar77[0xb] = -(auVar94[0xb] == (char)((uint)iVar8 >> 0x18));
                auVar77[0xc] = -(auVar94[0xc] == (char)iVar9);
                auVar77[0xd] = -(auVar94[0xd] == (char)((uint)iVar9 >> 8));
                auVar77[0xe] = -(auVar94[0xe] == (char)((uint)iVar9 >> 0x10));
                auVar77[0xf] = -(auVar94[0xf] == (char)((uint)iVar9 >> 0x18));
                if ((((((((((((((((SUB161(auVar77 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar77 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar77 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar77 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar77 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar77 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar77 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar77 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar77 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar77 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar77 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar77 >> 0x5f,0) & 1) != 0) || (SUB161(auVar77 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar77 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar77 >> 0x77,0) & 1) != 0) || auVar77[0xf] < '\0') break;
                uVar32 = uVar32 + lVar39 + 0x10;
                lVar39 = lVar39 + 0x10;
              }
            }
LAB_14085f8e0:
            pfVar48 = pfVar48 + 1;
          } while (pfVar48 != pfVar42);
        }
        if (pfStack_120 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_110,(longlong)pfStack_120 << 2,4);
        }
        uVar27 = SUB41(_DAT_142e36f28,0);
        uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
        uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
        uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
      }
    }
  }
  piVar49 = piStack_138;
  if (0.0 < (float)piStack_138[0x18]) {
    pdb_140e09030(auStack_1e8);
    fVar87 = (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))) /
             SQRT((float)uStack_1e0 * (float)uStack_1e0 +
                  (float)auStack_1e8._0_4_ * (float)auStack_1e8._0_4_);
    pdb_140de88f0(auStack_1e8,(float)auStack_1e8._0_4_ * fVar87,fVar87 * (float)uStack_1e0);
    fVar87 = (float)uStack_1e0 * _DAT_14300cc30 * _DAT_142e377d0 +
             (float)auStack_1e8._4_4_ * _DAT_14300cc20 * _DAT_142e377c0 +
             (float)auStack_1e8._0_4_ * _DAT_14300cc30 * _DAT_142e377b0 +
             uStack_1e0._4_4_ * _DAT_14300cc20;
    fVar97 = (float)uStack_1e0 * _UNK_14300cc34 * _UNK_142e377d4 +
             (float)auStack_1e8._4_4_ * _UNK_14300cc24 * _UNK_142e377c4 +
             (float)auStack_1e8._0_4_ * _UNK_14300cc34 * _UNK_142e377b4 +
             uStack_1e0._4_4_ * _UNK_14300cc24;
    fVar100 = (float)uStack_1e0 * _UNK_14300cc38 * _UNK_142e377d8 +
              (float)auStack_1e8._4_4_ * _UNK_14300cc28 * _UNK_142e377c8 +
              (float)auStack_1e8._0_4_ * _UNK_14300cc38 * _UNK_142e377b8 +
              uStack_1e0._4_4_ * _UNK_14300cc28;
    fVar60 = (float)uStack_1e0 * _UNK_14300cc3c * _UNK_142e377dc +
             (float)auStack_1e8._4_4_ * _UNK_14300cc2c * _UNK_142e377cc +
             (float)auStack_1e8._0_4_ * _UNK_14300cc3c * _UNK_142e377bc +
             uStack_1e0._4_4_ * _UNK_14300cc2c;
    fStack_658 = fVar100 * _DAT_14300cc70 * _DAT_142e377d0 +
                 fVar97 * _DAT_14300cc60 * _DAT_142e377c0 +
                 fVar87 * _DAT_14300cc50 * _DAT_142e377b0 + fVar60 * _DAT_14300cc40;
    fStack_654 = fVar100 * _UNK_14300cc74 * _UNK_142e377d4 +
                 fVar97 * _UNK_14300cc64 * _UNK_142e377c4 +
                 fVar87 * _UNK_14300cc54 * _UNK_142e377b4 + fVar60 * _UNK_14300cc44;
    fStack_650 = fVar100 * _UNK_14300cc78 * _UNK_142e377d8 +
                 fVar97 * _UNK_14300cc68 * _UNK_142e377c8 +
                 fVar87 * _UNK_14300cc58 * _UNK_142e377b8 + fVar60 * _UNK_14300cc48;
    fStack_64c = fVar100 * _UNK_14300cc7c * _UNK_142e377dc +
                 fVar97 * _UNK_14300cc6c * _UNK_142e377cc +
                 fVar87 * _UNK_14300cc5c * _UNK_142e377bc + fVar60 * _UNK_14300cc4c;
    uStack_3d8 = *(undefined8 *)(piVar49 + 0x19);
    fStack_3d0 = (float)piVar49[0x1b];
    fVar87 = (float)piVar49[0x18] * _DAT_142e37838;
    lStack_480 = CONCAT44(lStack_480._4_4_,fVar87);
    fStack_368 = 0.0;
    fStack_364 = 0.0;
    fStack_360 = 2.8026e-45;
    uStack_35c = 0.0;
    bStack_358 = 0;
    auStack_351._1_3_ = 0xcd20;
    uStack_34d = 0x143;
    uStack_349 = 0;
    auStack_348[8] = 1;
    auStack_348._0_8_ = 10;
    puStack_338 = (uint *)&UNK_14300cd2a;
    uStack_330 = 0x12;
    pfVar42 = (float *)0x0;
    while ((pfVar42 != (float *)0x2 &&
           (bVar25 = (&bStack_358)[(longlong)pfVar42 * 0x18], bVar25 != 2))) {
      pfStack_110 = pfVar42;
      lVar31 = *(longlong *)(auStack_351 + (longlong)pfVar42 * 0x18 + 1);
      pbVar30 = *(byte **)(auStack_348 + (longlong)pfVar42 * 0x18);
      auStack_1e8._0_4_ = 0x4300cdd0;
      auStack_1e8._4_4_ = 1;
      uStack_1e0._0_4_ = 2.38221e-44;
      uStack_1e0._4_4_ = 0.0;
      lStack_3c8 = lVar31;
      pbStack_3c0 = pbVar30;
      uVar29 = pdb_140bbbcb0(auStack_1e8);
      pdb_140b133e0(&pfStack_420,uStack_1f8,uVar29);
      auStack_1e8 = (undefined1  [8])&uStack_3d8;
      uStack_1e0._0_4_ = 7.6012573;
      uStack_1e0._4_4_ = 1.4013e-45;
      uStack_1d8 = &lStack_3c8;
      fStack_1d0 = 2.731697;
      uStack_1cc = 1;
      uStack_1c8 = &fStack_658;
      fStack_1c0 = 7.6004868;
      fStack_1bc = 1.4013e-45;
      uStack_1b8 = (uint *)&lStack_480;
      pcStack_1b0 = pdb_140f70fc0;
      pdb_140f60760(&pfStack_298,&UNK_14300d038,auStack_1e8);
      pfVar42 = uStack_290;
      pfStack_100 = pfStack_298;
      uVar3 = auStack_288._0_8_;
      uStack_1e0._0_4_ = fStack_3d0;
      auStack_1e8._0_4_ = (undefined4)uStack_3d8;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_3d8 >> 0x20);
      uVar29 = CONCAT44(fStack_654,fStack_658);
      uVar37 = CONCAT44(fStack_64c,fStack_650);
      pdb_14007ee60();
      pbVar33 = pub_1406abab0(0x50,0x10);
      pfStack_120 = pfVar42;
      if (pbVar33 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x50);
      }
      pbVar33[0] = 1;
      pbVar33[1] = 0;
      pbVar33[2] = 0;
      pbVar33[3] = 0;
      pbVar33[4] = 0;
      pbVar33[5] = 0;
      pbVar33[6] = 0;
      pbVar33[7] = 0;
      pbVar33[8] = 1;
      pbVar33[9] = 0;
      pbVar33[10] = 0;
      pbVar33[0xb] = 0;
      pbVar33[0xc] = 0;
      pbVar33[0xd] = 0;
      pbVar33[0xe] = 0;
      pbVar33[0xf] = 0;
      *(longlong *)(pbVar33 + 0x10) = lVar31;
      *(byte **)(pbVar33 + 0x18) = pbVar30;
      *(undefined8 *)(pbVar33 + 0x20) = uVar29;
      *(undefined8 *)(pbVar33 + 0x28) = uVar37;
      *(float *)(pbVar33 + 0x30) = fVar87;
      *(ulonglong *)(pbVar33 + 0x34) = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
      *(float *)(pbVar33 + 0x3c) = (float)uStack_1e0;
      pbVar33[0x40] = bVar25 & 1;
      pdb_1409baea0(auStack_1e8,pfVar42,uVar3,pbVar33,&UNK_14300d050);
      pfStack_278 = uStack_1c8;
      pfStack_298 = (float *)CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
      uStack_290 = (float *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0);
      auStack_288._12_4_ = uStack_1cc;
      auStack_288._8_4_ = fStack_1d0;
      auStack_288._0_8_ = uStack_1d8;
      pdb_140b133f0(&pfStack_420,&pfStack_298);
      piVar49 = piStack_138;
      uVar27 = SUB41(_DAT_142e36f28,0);
      uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
      uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
      uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
      if (pfStack_100 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_120,(ulonglong)pfStack_100,1);
      }
      pfVar42 = (float *)((longlong)pfStack_110 + 1);
    }
    if (piVar49[0x16] == 1) {
      iVar10 = piVar49[0x17];
      fStack_1d0 = fStack_3d0 + 0.0;
      uStack_1d8._0_4_ = (float)uStack_3d8 + _DAT_14300cc80;
      uStack_1d8._4_4_ = (float)((ulonglong)uStack_3d8 >> 0x20) + _UNK_14300cc84;
      auStack_1e8._0_4_ = fStack_658;
      auStack_1e8._4_4_ = fStack_654;
      uStack_1e0._0_4_ = fStack_650;
      uStack_1e0._4_4_ = fStack_64c;
      uStack_1cc = 0x3f800000;
      uStack_1c8._0_4_ = 0x3f800000;
      uStack_1c8._4_4_ = 1.0;
      pdb_140b3d590(&pfStack_420);
      auStack_351._1_3_ = (undefined3)lStack_410;
      uStack_34d = (undefined4)((ulonglong)lStack_410 >> 0x18);
      uStack_349 = (undefined1)((ulonglong)lStack_410 >> 0x38);
      fStack_360 = SUB84(pfStack_420,0);
      uStack_35c = (float)((ulonglong)pfStack_420 >> 0x20);
      bStack_358 = (byte)pfStack_418;
      uStack_357 = (undefined2)((ulonglong)pfStack_418 >> 8);
      uStack_355 = (undefined4)((ulonglong)pfStack_418 >> 0x18);
      auStack_351[0] = (undefined1)((ulonglong)pfStack_418 >> 0x38);
      fStack_368 = (float)CONCAT31(fStack_368._1_3_,2);
      pfStack_298 = (float *)((ulonglong)pfStack_298 & 0xffffffffffffff00);
      pdb_140c9dcb0(auStack_1e8,&fStack_368,&pfStack_298);
      uStack_12a = 1;
      pdb_140c9deb0(&pfStack_298);
      uStack_12a = 0;
      pdb_140c9dd20(&fStack_368,auStack_1e8,&pfStack_298);
      pdb_140c9dbe0(auStack_1e8,&fStack_368,0);
      puVar43 = &UNK_14300cdd0;
      lStack_5c8 = pdb_140900b80(uStack_2b0,&UNK_14300cdd0,0x11,auStack_1e8);
      puStack_5c0 = puVar43;
      cVar23 = pdb_1408ffab0(&lStack_5c8);
      if (cVar23 == '\x03') {
        plVar36 = (longlong *)pdb_140f3bda0();
        if ((char)plVar36[2] == '\x01') {
          lVar31 = *plVar36;
          puVar43 = (undefined *)plVar36[1];
        }
        else {
          lVar31 = pdb_140f4fd10();
          *plVar36 = lVar31;
          plVar36[1] = (longlong)puVar43;
          *(undefined1 *)(plVar36 + 2) = 1;
        }
        puVar2 = puStack_4d8;
        *plVar36 = lVar31 + 1;
        *puStack_4c8 = uStack_4c0._4_4_;
        plVar36 = (longlong *)(puStack_4d8 + 2);
        lVar39 = *(longlong *)(puStack_4d8 + 4);
        if (lVar39 != 0) {
          uVar35 = lVar39 * 8 + 0x17U & 0xfffffffffffffff0;
          uVar32 = lVar39 + uVar35 + 0x11;
          if (uVar32 != 0) {
            pub_1406abac0((byte *)(*plVar36 - uVar35),uVar32,0x10);
          }
        }
        puVar21 = puStack_4d8;
        lVar39 = _UNK_14300d1a8;
        *(longlong *)(puVar2 + 6) = _DAT_14300d1a0;
        *(longlong *)(puVar2 + 8) = lVar39;
        lVar39 = _UNK_14300d198;
        *plVar36 = _DAT_14300d190;
        *(longlong *)(puVar2 + 4) = lVar39;
        *(longlong *)(puVar2 + 10) = lVar31;
        *(undefined **)(puVar2 + 0xc) = puVar43;
        uVar62 = uStack_4c0._4_4_;
        *puStack_4c8 = uStack_4c0._4_4_;
        puStack_4d8[0x11] = fStack_3d0;
        *(undefined8 *)(puStack_4d8 + 0xf) = uStack_3d8;
        pdb_1408ff9a0(auStack_1e8,&lStack_5c8);
        if ((float)auStack_1e8._0_4_ == 2.8026e-45) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14300cde8);
        }
        *puStack_4c8 = uVar62;
        puVar21[0xe] = fStack_1c0 - uStack_3d8._4_4_;
        pdb_140a60320(auStack_1e8,uStack_370,iVar10);
        pfStack_110 = (float *)CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
        pfStack_100 = (float *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0);
        lVar31 = CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        if (lVar31 != 0) {
          lVar39 = 0;
          do {
            uVar62 = *(undefined4 *)((longlong)pfStack_100 + lVar39);
            lVar41 = pdb_140c40010(uStack_128,uVar62);
            puVar2 = puStack_4d8;
            if (lVar41 != 0) {
              *puStack_4c8 = uStack_4c0._4_4_;
              pdb_140901490(lVar41 + 0x38,&UNK_14300ce00);
              pdb_1414b61f0(puVar2 + 2,uVar62);
            }
            lVar39 = lVar39 + 4;
          } while (lVar31 << 2 != lVar39);
        }
        if (pfStack_110 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_100,(longlong)pfStack_110 << 2,4);
        }
      }
      auStack_1e8._0_4_ = (undefined4)_DAT_14300cc90;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)_DAT_14300cc90 >> 0x20);
      uStack_1e0._0_4_ = (float)((uint)(float)uStack_1e0 & 0xffffff00);
      pdb_1414c3980(&lStack_3c8,param_6,&lStack_5c8,&puStack_4d8,auStack_1e8);
      if ((float)lStack_3c8 == 1.4013e-45) {
        fVar87 = (float)uStack_3b8;
        pdb_140a60320(&pfStack_298,uStack_370,iVar10);
        *puStack_4c8 = uStack_4c0._4_4_;
        *puStack_4d8 = 1;
        puStack_4d8[1] = fVar87;
        pdb_14007ee60();
        pfVar42 = (float *)pub_1406abab0(0x18,4);
        if (pfVar42 == (float *)0x0) {
          uStack_102 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        fVar101 = _DAT_142e37880 + (float)*(undefined8 *)(puStack_4d8 + 0x10);
        fVar99 = (float)((ulonglong)*(undefined8 *)(puStack_4d8 + 0x10) >> 0x20);
        fVar97 = (float)*(undefined8 *)(puStack_4d8 + 0xf);
        fVar100 = (float)((ulonglong)*(undefined8 *)(puStack_4d8 + 0xf) >> 0x20) + _UNK_14300cca4;
        fVar60 = fVar99 + _UNK_14300cca8;
        fVar59 = fVar97 + _UNK_14300ccac;
        *pfVar42 = fVar97 + _DAT_14300cca0;
        pfVar42[1] = fVar100;
        pfVar42[2] = fVar60;
        pfVar42[3] = fVar59;
        *(ulonglong *)(pfVar42 + 4) = CONCAT44(fVar99 + 0.0,fVar101);
        fStack_368 = 2.8026e-45;
        fStack_364 = 0.0;
        fStack_360 = SUB84(pfVar42,0);
        uStack_35c = (float)((ulonglong)pfVar42 >> 0x20);
        bStack_358 = 2;
        uStack_357 = 0;
        uStack_355 = 0;
        auStack_351 = (undefined1  [4])((uint)auStack_351 & 0xffffff00);
        uStack_102 = 1;
        pdb_140a89130(auStack_1e8,&fStack_368);
        uStack_102 = 1;
        pdb_140a89170(auStack_1e8,uStack_1f8);
        uStack_102 = 1;
        bVar25 = pdb_1408ffab0(&lStack_5c8);
        fVar97 = _DAT_142e3a74c;
        pfStack_120 = pfStack_298;
        pfStack_110 = uStack_290;
        if (auStack_288._0_8_ != 0) {
          pfVar42 = uStack_290 + auStack_288._0_8_;
          pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,
                                          *(undefined4 *)((longlong)param_5 + 0x1c));
          uVar29 = *param_5;
          puVar2 = (undefined4 *)param_5[2];
          iVar10 = -(uint)(CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))) ==
                          CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))));
          pfVar48 = uStack_290;
          do {
            fVar100 = *pfVar48;
            fStack_560 = fVar100;
            lVar31 = pdb_140c40010(uStack_128,fVar100);
            puVar21 = puStack_4d8;
            if (((lVar31 != 0) && (1 < *(byte *)(lVar31 + 0x32))) &&
               (*(longlong *)(puStack_4d8 + 8) != 0)) {
              uVar32 = pdb_1400aede0(puStack_4d8 + 10,&fStack_560);
              lVar31 = *(longlong *)(puVar21 + 2);
              uVar35 = *(ulonglong *)(puVar21 + 4);
              bVar26 = (byte)(uVar32 >> 0x39);
              auVar69 = ZEXT216(CONCAT11(bVar26,bVar26));
              auVar69 = pshuflw(auVar69,auVar69,0);
              lVar39 = 0;
              while( true ) {
                uVar32 = uVar32 & uVar35;
                auVar94 = *(undefined1 (*) [16])(lVar31 + uVar32);
                auVar93[0] = -(auVar94[0] == auVar69[0]);
                auVar93[1] = -(auVar94[1] == auVar69[1]);
                auVar93[2] = -(auVar94[2] == auVar69[2]);
                auVar93[3] = -(auVar94[3] == auVar69[3]);
                auVar93[4] = -(auVar94[4] == auVar69[4]);
                auVar93[5] = -(auVar94[5] == auVar69[5]);
                auVar93[6] = -(auVar94[6] == auVar69[6]);
                auVar93[7] = -(auVar94[7] == auVar69[7]);
                auVar93[8] = -(auVar94[8] == auVar69[0]);
                auVar93[9] = -(auVar94[9] == auVar69[1]);
                auVar93[10] = -(auVar94[10] == auVar69[2]);
                auVar93[0xb] = -(auVar94[0xb] == auVar69[3]);
                auVar93[0xc] = -(auVar94[0xc] == auVar69[4]);
                auVar93[0xd] = -(auVar94[0xd] == auVar69[5]);
                auVar93[0xe] = -(auVar94[0xe] == auVar69[6]);
                auVar93[0xf] = -(auVar94[0xf] == auVar69[7]);
                uVar52 = (ushort)(SUB161(auVar93 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar93 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar93 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar93 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar93 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar93 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar93 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar93 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar93 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar93 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar93 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar93 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar93 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar93 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar93 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar93[0xf] >> 7) << 0xf;
                uVar55 = (uint)uVar52;
                while (uVar52 != 0) {
                  uVar6 = 0;
                  for (uVar51 = uVar55; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  uVar50 = uVar6 + uVar32 & uVar35;
                  if (fVar100 == *(float *)(lVar31 + uVar50 * -8 + -8)) {
                    fVar60 = *(float *)(lVar31 + -4 + uVar50 * -8);
                    uVar35 = (ulonglong)(uint)fVar100;
                    uVar37 = pdb_140c3d2c0(uStack_128);
                    fVar60 = fVar60 + fVar87;
                    fVar59 = 0.0;
                    if (0.0 <= fVar60) {
                      fVar59 = fVar60;
                    }
                    fStack_184 = fVar97;
                    if (fVar59 <= fVar97) {
                      fStack_184 = fVar59;
                    }
                    auStack_1e8._0_4_ = (undefined4)uVar37;
                    auStack_1e8._4_4_ = (undefined4)((ulonglong)uVar37 >> 0x20);
                    uStack_1e0._0_4_ = (float)uVar35;
                    uStack_1e0._4_4_ = (float)(uVar35 >> 0x20);
                    uStack_1d8._0_4_ = 4.2039e-45;
                    uStack_1d8._4_4_ = 0.0;
                    uStack_198 = 8;
                    uStack_188 = 1;
                    uStack_180 = 0;
                    uStack_178 = 0;
                    uStack_176 = 0;
                    uStack_174 = 2;
                    uStack_170 = 7;
                    fStack_160 = fVar100;
                    pdb_140c45ec0(&fStack_368,uStack_528,(ulonglong)(uint)fVar100,&UNK_14300ce18);
                    uStack_450 = CONCAT13((undefined1)uStack_34d,auStack_351._1_3_);
                    lStack_458 = CONCAT17(auStack_351[0],
                                          CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
                    uStack_44c = uStack_44c & 0xffffff00;
                    *puStack_4f8 = uStack_228;
                    *puStack_4e8 = uStack_224;
                    *puVar2 = pfStack_100._0_4_;
                    pdb_1414c40f0(auStack_1e8,1 < bVar25,&lStack_458,uStack_128,uStack_4f0,uVar29,
                                  &uStack_738,uStack_4e0);
                    goto LAB_140860410;
                  }
                  uVar52 = (ushort)(uVar55 - 1) & (ushort)uVar55;
                  uVar55 = CONCAT22((short)(uVar55 - 1 >> 0x10),uVar52);
                }
                auVar78[0] = -(auVar94[0] == (char)iVar10);
                auVar78[1] = -(auVar94[1] == (char)((uint)iVar10 >> 8));
                auVar78[2] = -(auVar94[2] == (char)((uint)iVar10 >> 0x10));
                auVar78[3] = -(auVar94[3] == (char)((uint)iVar10 >> 0x18));
                auVar78[4] = -(auVar94[4] == -1);
                auVar78[5] = -(auVar94[5] == -1);
                auVar78[6] = -(auVar94[6] == -1);
                auVar78[7] = -(auVar94[7] == -1);
                auVar78[8] = -(auVar94[8] == -1);
                auVar78[9] = -(auVar94[9] == -1);
                auVar78[10] = -(auVar94[10] == -1);
                auVar78[0xb] = -(auVar94[0xb] == -1);
                auVar78[0xc] = -(auVar94[0xc] == -1);
                auVar78[0xd] = -(auVar94[0xd] == -1);
                auVar78[0xe] = -(auVar94[0xe] == -1);
                auVar78[0xf] = -(auVar94[0xf] == -1);
                if ((((((((((((((((SUB161(auVar78 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar78 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar78 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar78 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar78 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar78 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar78 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar78 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar78 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar78 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar78 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar78 >> 0x5f,0) & 1) != 0) || (SUB161(auVar78 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar78 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar78 >> 0x77,0) & 1) != 0) || auVar78[0xf] < '\0') break;
                uVar32 = uVar32 + lVar39 + 0x10;
                lVar39 = lVar39 + 0x10;
              }
            }
LAB_140860410:
            pfVar48 = pfVar48 + 1;
          } while (pfVar48 != pfVar42);
        }
        if (pfStack_120 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_110,(longlong)pfStack_120 << 2,4);
        }
        uVar27 = SUB41(_DAT_142e36f28,0);
        uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
        uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
        uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
      }
      else {
        *puStack_4c8 = uStack_4c0._4_4_;
        *puStack_4d8 = 0;
      }
      piVar49 = piStack_138;
    }
  }
  if (0.0 < (float)piVar49[0x24]) {
    pdb_140e09030(auStack_1e8,*param_10);
    fVar87 = (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))) /
             SQRT((float)uStack_1e0 * (float)uStack_1e0 +
                  (float)auStack_1e8._0_4_ * (float)auStack_1e8._0_4_);
    pdb_140de88f0(&lStack_6c8,(float)auStack_1e8._0_4_ * fVar87,fVar87 * (float)uStack_1e0);
    fStack_4b0 = (float)piVar49[0x27];
    uStack_4b8 = *(undefined8 *)(piVar49 + 0x25);
    fVar87 = (float)piVar49[0x24] * _DAT_142e3787c;
    lStack_458 = CONCAT44(lStack_458._4_4_,fVar87);
    auStack_1e8._0_4_ = 0x4300ce30;
    auStack_1e8._4_4_ = 1;
    uStack_1e0._0_4_ = 4.48416e-44;
    uStack_1e0._4_4_ = 0.0;
    uVar29 = pdb_140bbbcb0(auStack_1e8);
    pdb_140b133e0(&lStack_3c8,uStack_1f8,uVar29);
    auStack_1e8 = (undefined1  [8])&uStack_4b8;
    uStack_1e0._0_4_ = 7.6012573;
    uStack_1e0._4_4_ = 1.4013e-45;
    fStack_1d0 = 7.6004868;
    uStack_1cc = 1;
    uStack_1c8 = (float *)&lStack_458;
    fStack_1c0 = 7.7206726;
    fStack_1bc = 1.4013e-45;
    uStack_1d8 = &lStack_6c8;
    pdb_140f60760(&fStack_368,&UNK_14300ce50,auStack_1e8);
    uVar37 = uStack_6c0;
    lVar31 = lStack_6c8;
    pfStack_100 = (float *)CONCAT44(fStack_364,fStack_368);
    pfVar42 = (float *)CONCAT44(uStack_35c,fStack_360);
    uVar29 = CONCAT17(auStack_351[0],CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
    uStack_1e0._0_4_ = fStack_4b0;
    auStack_1e8._0_4_ = (undefined4)uStack_4b8;
    auStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_4b8 >> 0x20);
    pdb_14007ee60();
    pbVar30 = pub_1406abab0(0x30,0x10);
    pfStack_110 = pfVar42;
    if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x30);
    }
    pbVar30[0] = 1;
    pbVar30[1] = 0;
    pbVar30[2] = 0;
    pbVar30[3] = 0;
    pbVar30[4] = 0;
    pbVar30[5] = 0;
    pbVar30[6] = 0;
    pbVar30[7] = 0;
    pbVar30[8] = 1;
    pbVar30[9] = 0;
    pbVar30[10] = 0;
    pbVar30[0xb] = 0;
    pbVar30[0xc] = 0;
    pbVar30[0xd] = 0;
    pbVar30[0xe] = 0;
    pbVar30[0xf] = 0;
    *(longlong *)(pbVar30 + 0x10) = lVar31;
    *(undefined8 *)(pbVar30 + 0x18) = uVar37;
    *(float *)(pbVar30 + 0x20) = fVar87;
    *(ulonglong *)(pbVar30 + 0x24) = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
    *(float *)(pbVar30 + 0x2c) = (float)uStack_1e0;
    pdb_1409baea0(auStack_1e8,pfVar42,uVar29,pbVar30,&UNK_14300ce68);
    auStack_348._0_8_ = uStack_1c8;
    bStack_358 = (byte)uStack_1d8;
    uStack_357 = (undefined2)((ulonglong)uStack_1d8 >> 8);
    uStack_355 = (undefined4)((ulonglong)uStack_1d8 >> 0x18);
    auStack_351._1_3_ = SUB43(fStack_1d0,0);
    auStack_351 = (undefined1  [4])CONCAT31(auStack_351._1_3_,(char)((ulonglong)uStack_1d8 >> 0x38))
    ;
    uStack_34d = (undefined4)(CONCAT44(uStack_1cc,fStack_1d0) >> 0x18);
    uStack_349 = (undefined1)((uint)uStack_1cc >> 0x18);
    fStack_368 = (float)auStack_1e8._0_4_;
    fStack_364 = (float)auStack_1e8._4_4_;
    fStack_360 = (float)uStack_1e0;
    uStack_35c = uStack_1e0._4_4_;
    pdb_140b133f0(&lStack_3c8,&fStack_368);
    piVar49 = piStack_138;
    uVar27 = SUB41(_DAT_142e36f28,0);
    uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
    uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
    uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
    if (pfStack_100 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_110,(ulonglong)pfStack_100,1);
    }
    if (piVar49[0x22] == 1) {
      uVar55 = piVar49[0x23];
      fStack_1d0 = fStack_4b0;
      uStack_1d8._0_4_ = (float)uStack_4b8;
      uStack_1d8._4_4_ = (float)((ulonglong)uStack_4b8 >> 0x20);
      auStack_1e8._0_4_ = (undefined4)lStack_6c8;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)lStack_6c8 >> 0x20);
      uStack_1e0._0_4_ = (float)uStack_6c0;
      uStack_1e0._4_4_ = (float)((ulonglong)uStack_6c0 >> 0x20);
      uStack_1cc = 0x3f800000;
      uStack_1c8._0_4_ = 0x3f800000;
      uStack_1c8._4_4_ = 1.0;
      pdb_140b3d590(&pfStack_420);
      auStack_351._1_3_ = (undefined3)lStack_410;
      uStack_34d = (undefined4)((ulonglong)lStack_410 >> 0x18);
      uStack_349 = (undefined1)((ulonglong)lStack_410 >> 0x38);
      fStack_360 = SUB84(pfStack_420,0);
      uStack_35c = (float)((ulonglong)pfStack_420 >> 0x20);
      bStack_358 = (byte)pfStack_418;
      uStack_357 = (undefined2)((ulonglong)pfStack_418 >> 8);
      uStack_355 = (undefined4)((ulonglong)pfStack_418 >> 0x18);
      auStack_351[0] = (undefined1)((ulonglong)pfStack_418 >> 0x38);
      fStack_368 = (float)CONCAT31(fStack_368._1_3_,2);
      pfStack_298 = (float *)((ulonglong)pfStack_298 & 0xffffffffffffff00);
      pdb_140c9dcb0(auStack_1e8,&fStack_368,&pfStack_298);
      uStack_12b = 1;
      pdb_140c9deb0(&pfStack_298);
      uStack_12b = 0;
      pdb_140c9dd20(&fStack_368,auStack_1e8,&pfStack_298);
      pdb_140c9dbe0(auStack_1e8,&fStack_368,0);
      pfVar42 = (float *)&UNK_14300ce30;
      pfStack_298 = (float *)pdb_140900b80(uStack_2b0,&UNK_14300ce30,0x20,auStack_1e8);
      uStack_290 = pfVar42;
      lVar31 = pdb_140c40010(uStack_128,uVar55);
      if ((lVar31 != 0) && (cVar23 = pdb_1408ffaf0(&pfStack_298), cVar23 != '\0')) {
        uVar29 = pdb_14072cd40(&pfStack_298);
        pdb_1408ff9a0(auStack_1e8,&pfStack_298);
        if ((float)auStack_1e8._0_4_ == 2.8026e-45) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14300ce98);
        }
        puStack_338 = uStack_1b8;
        auStack_348._4_4_ = uStack_1c8._4_4_;
        auStack_348._0_4_ = (undefined4)uStack_1c8;
        auStack_348._8_4_ = fStack_1c0;
        auStack_348._12_4_ = fStack_1bc;
        bStack_358 = SUB41((float)uStack_1d8,0);
        uStack_357 = (undefined2)((uint)(float)uStack_1d8 >> 8);
        uStack_355 = (undefined4)(CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8) >> 0x18);
        auStack_351._1_3_ = SUB43(fStack_1d0,0);
        auStack_351 = (undefined1  [4])
                      CONCAT31(auStack_351._1_3_,(char)((uint)uStack_1d8._4_4_ >> 0x18));
        uStack_34d = (undefined4)(CONCAT44(uStack_1cc,fStack_1d0) >> 0x18);
        uStack_349 = (undefined1)((uint)uStack_1cc >> 0x18);
        fStack_368 = (float)auStack_1e8._0_4_;
        fStack_364 = (float)auStack_1e8._4_4_;
        fStack_360 = (float)uStack_1e0;
        uStack_35c = uStack_1e0._4_4_;
        uVar35 = (ulonglong)uVar55;
        uVar37 = pdb_140c3d2c0(uStack_128);
        if (*(char *)(lVar31 + 0x32) == '\x02') {
          uVar27 = (undefined1)_DAT_14300ccb4;
          uVar105 = (undefined1)((uint)_DAT_14300ccb4 >> 8);
          uVar106 = (undefined1)((uint)_DAT_14300ccb4 >> 0x10);
          uVar107 = (undefined1)((uint)_DAT_14300ccb4 >> 0x18);
        }
        else {
          fVar87 = uStack_4b8._4_4_ + _DAT_14300ccb0;
          uVar27 = SUB41(fVar87,0);
          uVar105 = (undefined1)((uint)fVar87 >> 8);
          uVar106 = (undefined1)((uint)fVar87 >> 0x10);
          uVar107 = (undefined1)((uint)fVar87 >> 0x18);
        }
        *puStack_670 = uStack_544;
        lVar31 = *(longlong *)(lStack_508 + 0x30);
        uVar3 = *(undefined8 *)(lStack_508 + 0x40);
        if (lVar31 == *(longlong *)(lStack_508 + 0x20)) {
          pdb_142d8d8d0(lStack_508 + 0x20);
        }
        lVar39 = *(longlong *)(lStack_508 + 0x28);
        lVar41 = lVar31 * 0x68;
        *(undefined8 *)(lVar39 + lVar41) = 7;
        *(undefined1 *)(lVar39 + 0x10 + lVar41) = 4;
        *(uint *)(lVar39 + 0x14 + lVar41) = uVar55;
        *(undefined8 *)(lVar39 + 0x18 + lVar41) = uVar37;
        *(ulonglong *)(lVar39 + 0x20 + lVar41) = uVar35;
        *(undefined8 *)(lVar39 + 0x28 + lVar41) = auStack_348._4_8_;
        *(undefined4 *)(lVar39 + 0x30 + lVar41) = auStack_348._12_4_;
        *(undefined8 *)(lVar39 + 0x34 + lVar41) = 0x3f80000000000000;
        *(undefined8 *)(lVar39 + 0x3c + lVar41) = 0;
        *(undefined8 *)(lVar39 + 0x50 + lVar41) = uVar29;
        *(uint *)(lVar39 + 0x58 + lVar41) = uVar55;
        *(uint *)(lVar39 + 0x5c + lVar41) =
             CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27)));
        *(undefined8 *)(lVar39 + 0x60 + lVar41) = uVar3;
        *(longlong *)(lStack_508 + 0x30) = lVar31 + 1;
        *(longlong *)(lStack_508 + 0x40) = *(longlong *)(lStack_508 + 0x40) + 1;
        uVar27 = SUB41(_DAT_142e36f28,0);
        uVar105 = (undefined1)((uint)_DAT_142e36f28 >> 8);
        uVar106 = (undefined1)((uint)_DAT_142e36f28 >> 0x10);
        uVar107 = (undefined1)((uint)_DAT_142e36f28 >> 0x18);
      }
      piVar49 = piStack_138;
    }
  }
  if (0.0 < (float)piVar49[0x12]) {
    pdb_140e09030(auStack_1e8,*param_10);
    fVar87 = (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27))) /
             SQRT((float)uStack_1e0 * (float)uStack_1e0 +
                  (float)auStack_1e8._0_4_ * (float)auStack_1e8._0_4_);
    pdb_140de88f0(&uStack_668,(float)auStack_1e8._0_4_ * fVar87,fVar87 * (float)uStack_1e0);
    fStack_3e0 = (float)piVar49[0x15];
    uStack_3e8 = *(undefined8 *)(piVar49 + 0x13);
    fVar87 = (float)piVar49[0x12] * _DAT_142e37838;
    lStack_458 = CONCAT44(lStack_458._4_4_,fVar87);
    fStack_368 = 0.0;
    fStack_364 = 0.0;
    fStack_360 = 2.8026e-45;
    uStack_35c = 0.0;
    bStack_358 = 0;
    auStack_351._1_3_ = 0xceb0;
    uStack_34d = 0x143;
    uStack_349 = 0;
    auStack_348[8] = 1;
    auStack_348._0_8_ = 10;
    puStack_338 = (uint *)&UNK_14300ceba;
    uStack_330 = 0x12;
    pfVar42 = (float *)0x0;
    while ((pfVar42 != (float *)0x2 &&
           (bVar25 = (&bStack_358)[(longlong)pfVar42 * 0x18], bVar25 != 2))) {
      pfStack_110 = pfVar42;
      lVar31 = *(longlong *)(auStack_351 + (longlong)pfVar42 * 0x18 + 1);
      pbVar30 = *(byte **)(auStack_348 + (longlong)pfVar42 * 0x18);
      auStack_1e8._0_4_ = 0x4300cecc;
      auStack_1e8._4_4_ = 1;
      uStack_1e0._0_4_ = 2.10195e-44;
      uStack_1e0._4_4_ = 0.0;
      lStack_3c8 = lVar31;
      pbStack_3c0 = pbVar30;
      uVar29 = pdb_140bbbcb0(auStack_1e8);
      pdb_140b133e0(&pfStack_420,uStack_1f8,uVar29);
      auStack_1e8 = (undefined1  [8])&uStack_3e8;
      uStack_1e0._0_4_ = 7.6012573;
      uStack_1e0._4_4_ = 1.4013e-45;
      uStack_1d8 = &lStack_3c8;
      fStack_1d0 = 2.731697;
      uStack_1cc = 1;
      uStack_1c8 = (float *)&uStack_668;
      fStack_1c0 = 7.6004868;
      fStack_1bc = 1.4013e-45;
      uStack_1b8 = (uint *)&lStack_458;
      pcStack_1b0 = pdb_140f70fc0;
      pdb_140f60760(&pfStack_298,&UNK_14300cff0,auStack_1e8);
      pfVar42 = uStack_290;
      uVar37 = uStack_660;
      uVar29 = uStack_668;
      pfStack_100 = pfStack_298;
      uVar3 = auStack_288._0_8_;
      uStack_1e0._0_4_ = fStack_3e0;
      auStack_1e8._0_4_ = (undefined4)uStack_3e8;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_3e8 >> 0x20);
      pdb_14007ee60();
      pbVar33 = pub_1406abab0(0x50,0x10);
      pfStack_120 = pfVar42;
      if (pbVar33 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x50);
      }
      pbVar33[0] = 1;
      pbVar33[1] = 0;
      pbVar33[2] = 0;
      pbVar33[3] = 0;
      pbVar33[4] = 0;
      pbVar33[5] = 0;
      pbVar33[6] = 0;
      pbVar33[7] = 0;
      pbVar33[8] = 1;
      pbVar33[9] = 0;
      pbVar33[10] = 0;
      pbVar33[0xb] = 0;
      pbVar33[0xc] = 0;
      pbVar33[0xd] = 0;
      pbVar33[0xe] = 0;
      pbVar33[0xf] = 0;
      *(longlong *)(pbVar33 + 0x10) = lVar31;
      *(byte **)(pbVar33 + 0x18) = pbVar30;
      *(undefined8 *)(pbVar33 + 0x20) = uVar29;
      *(undefined8 *)(pbVar33 + 0x28) = uVar37;
      *(float *)(pbVar33 + 0x30) = fVar87;
      *(ulonglong *)(pbVar33 + 0x34) = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
      *(float *)(pbVar33 + 0x3c) = (float)uStack_1e0;
      pbVar33[0x40] = bVar25 & 1;
      pdb_1409baea0(auStack_1e8,pfVar42,uVar3,pbVar33,&UNK_14300d008);
      pfStack_278 = uStack_1c8;
      pfStack_298 = (float *)CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
      uStack_290 = (float *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0);
      auStack_288._12_4_ = uStack_1cc;
      auStack_288._8_4_ = fStack_1d0;
      auStack_288._0_8_ = uStack_1d8;
      pdb_140b133f0(&pfStack_420,&pfStack_298);
      if (pfStack_100 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_120,(ulonglong)pfStack_100,1);
      }
      pfVar42 = (float *)((longlong)pfStack_110 + 1);
    }
    piVar49 = piStack_138;
    if (piStack_138[0x10] == 1) {
      iVar10 = piStack_138[0x11];
      fStack_1d0 = fStack_3e0;
      uStack_1d8._0_4_ = (float)uStack_3e8;
      uStack_1d8._4_4_ = (float)((ulonglong)uStack_3e8 >> 0x20);
      auStack_1e8._0_4_ = (undefined4)uStack_668;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_668 >> 0x20);
      uStack_1e0._0_4_ = (float)uStack_660;
      uStack_1e0._4_4_ = (float)((ulonglong)uStack_660 >> 0x20);
      uStack_1cc = 0x3f800000;
      uStack_1c8._0_4_ = 0x3f800000;
      uStack_1c8._4_4_ = 1.0;
      pdb_140b3d590(&pfStack_420);
      auStack_351._1_3_ = (undefined3)lStack_410;
      uStack_34d = (undefined4)((ulonglong)lStack_410 >> 0x18);
      uStack_349 = (undefined1)((ulonglong)lStack_410 >> 0x38);
      fStack_360 = SUB84(pfStack_420,0);
      uStack_35c = (float)((ulonglong)pfStack_420 >> 0x20);
      bStack_358 = (byte)pfStack_418;
      uStack_357 = (undefined2)((ulonglong)pfStack_418 >> 8);
      uStack_355 = (undefined4)((ulonglong)pfStack_418 >> 0x18);
      auStack_351[0] = (undefined1)((ulonglong)pfStack_418 >> 0x38);
      fStack_368 = (float)CONCAT31(fStack_368._1_3_,2);
      pfStack_298 = (float *)((ulonglong)pfStack_298 & 0xffffffffffffff00);
      pdb_140c9dcb0(auStack_1e8,&fStack_368,&pfStack_298);
      uStack_12c = 1;
      pdb_140c9deb0(&pfStack_298);
      uStack_12c = 0;
      pdb_140c9dd20(&fStack_368,auStack_1e8,&pfStack_298);
      pdb_140c9dbe0(auStack_1e8,&fStack_368,0);
      pbVar30 = &UNK_14300cecc;
      lStack_3c8 = pdb_140900b80(uStack_2b0,&UNK_14300cecc,0xf,auStack_1e8);
      pbStack_3c0 = pbVar30;
      bVar26 = pdb_1408ffab0(&lStack_3c8);
      puVar2 = puStack_520;
      bVar25 = 3;
      if (1 < bVar26) {
        bVar25 = bVar26 - 2;
      }
      if (bVar25 - 2 < 2) {
        pdb_140a60320(&fStack_368,uStack_370,iVar10);
        plVar36 = plStack_210;
        uStack_112 = 1;
        pdb_140bf25f0(&uStack_580,*param_11);
        fVar100 = fStack_578;
        uVar29 = uStack_580;
        lVar31 = plVar36[0xc];
        fVar60 = fStack_578 - *(float *)(plVar36 + 0xd);
        uStack_112 = 1;
        uVar27 = pdb_1408ffab0(&lStack_3c8);
        pfStack_120 = (float *)CONCAT71(pfStack_120._1_7_,uVar27);
        fVar87 = (float)uVar29;
        fVar97 = (float)((ulonglong)uVar29 >> 0x20);
        pauStack_380 = (undefined1 (*) [16])CONCAT44(fStack_364,fStack_368);
        pauVar45 = (undefined1 (*) [16])CONCAT44(uStack_35c,fStack_360);
        lVar39 = CONCAT17(auStack_351[0],CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
        puVar18 = *pauVar45;
        pfStack_100 = (float *)(plVar36 + 4);
        plStack_468 = plVar36 + 6;
        plStack_540 = plVar36 + 10;
        pfStack_110 = (float *)*param_8;
        pbStack_2b8 = (byte *)CONCAT44(pbStack_2b8._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
        pfStack_230 = (float *)*param_5;
        pauStack_388 = (undefined1 (*) [16])param_5[2];
        puStack_530 = (undefined8 *)((longlong)plVar36 + 0x7c);
        lStack_460 = *param_13;
        lStack_500 = lStack_518 + 0x20;
        lStack_538 = lStack_510 + 0x20;
        pauStack_378 = pauVar45;
LAB_140860f70:
        while (pauVar45 != (undefined1 (*) [16])(puVar18 + lVar39 * 4)) {
          fVar59 = *(float *)*pauVar45;
          fStack_488 = fVar59;
          lVar41 = pdb_140c40010(uStack_128,fVar59);
          plVar36 = plStack_210;
          pauVar45 = (undefined1 (*) [16])(*pauVar45 + 4);
          if ((lVar41 != 0) && (1 < *(byte *)(lVar41 + 0x32))) {
            if (plStack_210[3] != 0) {
              uVar32 = pdb_1400aede0(pfStack_100,&fStack_488);
              lVar41 = *plVar36;
              uVar35 = plVar36[1];
              bVar25 = (byte)(uVar32 >> 0x39);
              auVar69 = ZEXT216(CONCAT11(bVar25,bVar25));
              auVar69 = pshuflw(auVar69,auVar69,0);
              lVar53 = 0;
              while( true ) {
                uVar32 = uVar32 & uVar35;
                pcVar1 = (char *)(lVar41 + uVar32);
                auVar94[0] = -(*pcVar1 == auVar69[0]);
                auVar94[1] = -(pcVar1[1] == auVar69[1]);
                auVar94[2] = -(pcVar1[2] == auVar69[2]);
                auVar94[3] = -(pcVar1[3] == auVar69[3]);
                auVar94[4] = -(pcVar1[4] == auVar69[4]);
                auVar94[5] = -(pcVar1[5] == auVar69[5]);
                auVar94[6] = -(pcVar1[6] == auVar69[6]);
                auVar94[7] = -(pcVar1[7] == auVar69[7]);
                auVar94[8] = -(pcVar1[8] == auVar69[0]);
                auVar94[9] = -(pcVar1[9] == auVar69[1]);
                auVar94[10] = -(pcVar1[10] == auVar69[2]);
                auVar94[0xb] = -(pcVar1[0xb] == auVar69[3]);
                auVar94[0xc] = -(pcVar1[0xc] == auVar69[4]);
                auVar94[0xd] = -(pcVar1[0xd] == auVar69[5]);
                auVar94[0xe] = -(pcVar1[0xe] == auVar69[6]);
                auVar94[0xf] = -(pcVar1[0xf] == auVar69[7]);
                uVar52 = (ushort)(SUB161(auVar94 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar94[0xf] >> 7) << 0xf;
                uVar55 = (uint)uVar52;
                while (uVar52 != 0) {
                  uVar6 = 0;
                  for (uVar51 = uVar55; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  lVar54 = lVar41 + (uVar6 + uVar32 & uVar35) * -0x10;
                  if (fVar59 == *(float *)(lVar54 + -0x10)) {
                    fStack_2a0 = *(float *)(lVar54 + -4) + fVar60;
                    uStack_2a8 = (float *)CONCAT44((float)((ulonglong)*(undefined8 *)(lVar54 + -0xc)
                                                          >> 0x20) +
                                                   (fVar97 - (float)((ulonglong)lVar31 >> 0x20)),
                                                   (float)*(undefined8 *)(lVar54 + -0xc) +
                                                   (fVar87 - (float)lVar31));
                    cVar23 = pdb_140a84de0(uStack_698);
                    if (cVar23 != '\0') {
                      *puStack_520 = uStack_1ec;
                      uStack_290 = (float *)CONCAT44(uStack_290._4_4_,fStack_2a0);
                      pfStack_298 = uStack_2a8;
                      pdb_1414b55c0(auStack_1e8,plStack_468,fVar59,&pfStack_298);
                      goto LAB_14086124b;
                    }
                    *puStack_680 = uStack_54c;
                    lVar41 = *(longlong *)(lStack_518 + 0x30);
                    uVar29 = *(undefined8 *)(lStack_518 + 0x40);
                    if (lVar41 == *(longlong *)(lStack_518 + 0x20)) {
                      pdb_142d7e8a0(lStack_500);
                    }
                    *(undefined8 *)(*(longlong *)(lStack_518 + 0x28) + lVar41 * 8) = uVar29;
                    *(longlong *)(lStack_518 + 0x30) = lVar41 + 1;
                    *(longlong *)(lStack_518 + 0x40) = *(longlong *)(lStack_518 + 0x40) + 1;
                    *puStack_678 = uStack_548;
                    lVar41 = *(longlong *)(lStack_510 + 0x30);
                    uVar29 = *(undefined8 *)(lStack_510 + 0x40);
                    if (lVar41 == *(longlong *)(lStack_510 + 0x20)) {
                      pdb_142d7e8a0(lStack_538);
                    }
                    *(undefined8 *)(*(longlong *)(lStack_510 + 0x28) + lVar41 * 8) = uVar29;
                    *(longlong *)(lStack_510 + 0x30) = lVar41 + 1;
                    *(longlong *)(lStack_510 + 0x40) = *(longlong *)(lStack_510 + 0x40) + 1;
                    puVar38 = &uStack_2a8;
                    if (plStack_210[9] == 0) goto LAB_140861238;
                    uVar35 = pdb_1400aede0(plStack_540,&fStack_488);
                    bVar25 = (byte)(uVar35 >> 0x39);
                    auVar69 = ZEXT216(CONCAT11(bVar25,bVar25));
                    auVar69 = pshuflw(auVar69,auVar69,0);
                    lVar41 = 0;
                    goto LAB_1408611b9;
                  }
                  uVar52 = (ushort)(uVar55 - 1) & (ushort)uVar55;
                  uVar55 = CONCAT22((short)(uVar55 - 1 >> 0x10),uVar52);
                }
                auVar79[0] = -(*pcVar1 == -1);
                auVar79[1] = -(pcVar1[1] == -1);
                auVar79[2] = -(pcVar1[2] == -1);
                auVar79[3] = -(pcVar1[3] == -1);
                auVar79[4] = -(pcVar1[4] == -1);
                auVar79[5] = -(pcVar1[5] == -1);
                auVar79[6] = -(pcVar1[6] == -1);
                auVar79[7] = -(pcVar1[7] == -1);
                auVar79[8] = -(pcVar1[8] == -1);
                auVar79[9] = -(pcVar1[9] == -1);
                auVar79[10] = -(pcVar1[10] == -1);
                auVar79[0xb] = -(pcVar1[0xb] == -1);
                auVar79[0xc] = -(pcVar1[0xc] == -1);
                auVar79[0xd] = -(pcVar1[0xd] == -1);
                auVar79[0xe] = -(pcVar1[0xe] == -1);
                auVar79[0xf] = -(pcVar1[0xf] == -1);
                if ((((((((((((((((SUB161(auVar79 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar79 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar79 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar79 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar79 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar79 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar79 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar79 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar79 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar79 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar79 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar79 >> 0x5f,0) & 1) != 0) || (SUB161(auVar79 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar79 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar79 >> 0x77,0) & 1) != 0) || auVar79[0xf] < '\0') break;
                uVar32 = uVar32 + lVar53 + 0x10;
                lVar53 = lVar53 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14300cef8);
          }
        }
        if (pauStack_380 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_378,(longlong)pauStack_380 << 2,4);
        }
        *puStack_520 = uStack_1ec;
        *(float *)(puStack_530 + 1) = fStack_578;
        *puStack_530 = uStack_580;
        piVar49 = piStack_138;
        goto LAB_14086175b;
      }
      piVar49 = piStack_138;
      if (bVar25 != 0) {
        plVar36 = (longlong *)pdb_140f3bda0();
        if ((char)plVar36[2] == '\x01') {
          lVar31 = *plVar36;
          pbVar30 = (byte *)plVar36[1];
        }
        else {
          lVar31 = pdb_140f4fd10();
          *plVar36 = lVar31;
          plVar36[1] = (longlong)pbVar30;
          *(undefined1 *)(plVar36 + 2) = 1;
        }
        plVar34 = plStack_210;
        *plVar36 = lVar31 + 1;
        *puVar2 = uStack_1ec;
        lVar39 = plStack_210[1];
        if (lVar39 != 0) {
          lVar41 = lVar39 * 0x10 + 0x10;
          uVar35 = lVar39 + lVar41 + 0x11;
          if (uVar35 != 0) {
            pub_1406abac0((byte *)(*plStack_210 - lVar41),uVar35,0x10);
          }
        }
        lVar39 = _UNK_14300d1a8;
        plVar34[2] = _DAT_14300d1a0;
        plVar34[3] = lVar39;
        lVar39 = _UNK_14300d198;
        *plVar34 = _DAT_14300d190;
        plVar34[1] = lVar39;
        plVar34[4] = lVar31;
        plVar34[5] = (longlong)pbVar30;
        pdb_140a60320(auStack_1e8,uStack_370,iVar10);
        pfStack_110 = (float *)CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
        pfStack_100 = (float *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0);
        lVar31 = CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        if (lVar31 != 0) {
          lVar39 = 0;
          do {
            uVar62 = *(undefined4 *)((longlong)pfStack_100 + lVar39);
            *puVar2 = uStack_1ec;
            pdb_140c45db0(&fStack_368,uStack_528,uVar62,&UNK_14300cee0);
            pdb_1414b55c0(auStack_1e8,plStack_210,uVar62,&fStack_368);
            lVar39 = lVar39 + 4;
          } while (lVar31 << 2 != lVar39);
        }
        if (pfStack_110 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_100,(longlong)pfStack_110 << 2,4);
        }
        uVar62 = uStack_1ec;
        plVar36 = plStack_210;
        *puVar2 = uStack_1ec;
        *(undefined4 *)((longlong)plStack_210 + 0x6c) = uStack_3e8._4_4_;
        pdb_140bf25f0(auStack_1e8,*param_11);
        *puVar2 = uVar62;
        *(float *)(plVar36 + 0xd) = (float)uStack_1e0;
        plVar36[0xc] = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
        fVar87 = *(float *)(plVar36 + 0xd);
        lVar31 = plVar36[0xc];
        *puVar2 = uVar62;
        plVar36[0xe] = CONCAT44((float)((ulonglong)lVar31 >> 0x20) -
                                (float)((ulonglong)uStack_3e8 >> 0x20),
                                (float)lVar31 - (float)uStack_3e8);
        *(float *)(plVar36 + 0xf) = fVar87 - fStack_3e0;
        lVar31 = plVar36[4];
        lVar39 = plVar36[5];
        pdb_1414ad3d0(auStack_1e8,plVar36);
        uStack_1c8._0_4_ = (undefined4)lVar31;
        uStack_1c8._4_4_ = (float)((ulonglong)lVar31 >> 0x20);
        fStack_1c0 = (float)lVar39;
        fStack_1bc = (float)((ulonglong)lVar39 >> 0x20);
        *puVar2 = uVar62;
        lVar31 = plVar36[7];
        if (lVar31 != 0) {
          lVar39 = lVar31 * 0x10 + 0x10;
          uVar35 = lVar31 + lVar39 + 0x11;
          if (uVar35 != 0) {
            pub_1406abac0((byte *)(plVar36[6] - lVar39),uVar35,0x10);
          }
        }
        auVar69._8_4_ = fStack_1c0;
        auVar69._0_8_ = uStack_1c8;
        auVar69._12_4_ = fStack_1bc;
        *(undefined1 (*) [16])(plVar36 + 10) = auVar69;
        plVar36[8] = (longlong)uStack_1d8;
        plVar36[9] = CONCAT44(uStack_1cc,fStack_1d0);
        plVar36[6] = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
        plVar36[7] = CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0);
        uStack_1e0._0_4_ = *(float *)(plVar36 + 0xd);
        lVar31 = plVar36[0xc];
        auStack_1e8._0_4_ = (undefined4)lVar31;
        auStack_1e8._4_4_ = (undefined4)((ulonglong)lVar31 >> 0x20);
        *puVar2 = uStack_1ec;
        *(float *)((longlong)plStack_210 + 0x84) = (float)uStack_1e0;
        *(longlong *)((longlong)plStack_210 + 0x7c) = lVar31;
        piVar49 = piStack_138;
      }
    }
  }
LAB_14086175b:
  if (0.0 < (float)piVar49[0xf]) {
    fVar87 = (float)pdb_140dedcd0(&UNK_14300cf10);
    uStack_208 = *(longlong *)(piVar49 + 3);
    fStack_200 = (float)piVar49[5];
    uStack_448._0_4_ = (undefined4)*(undefined8 *)(piVar49 + 10);
    uStack_448._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(piVar49 + 10) >> 0x20);
    lStack_458 = *(longlong *)(piVar49 + 6);
    uStack_450 = (undefined4)*(undefined8 *)(piVar49 + 8);
    uStack_44c = (uint)((ulonglong)*(undefined8 *)(piVar49 + 8) >> 0x20);
    fVar87 = fVar87 * _DAT_142f95160;
    lStack_480 = CONCAT44(lStack_480._4_4_,fVar87);
    auStack_1e8._0_4_ = 0x4300cf18;
    auStack_1e8._4_4_ = 1;
    uStack_1e0._0_4_ = 2.66247e-44;
    uStack_1e0._4_4_ = 0.0;
    uVar29 = pdb_140bbbcb0(auStack_1e8);
    pdb_140b133e0(&lStack_3c8,uStack_1f8,uVar29);
    auStack_1e8 = (undefined1  [8])&uStack_208;
    uStack_1e0._0_4_ = 7.6013107;
    uStack_1e0._4_4_ = 1.4013e-45;
    uStack_1d8 = &lStack_480;
    fStack_1d0 = 7.7206726;
    uStack_1cc = 1;
    pdb_140f60760(&fStack_368,&UNK_14300cf2b,auStack_1e8);
    pfStack_100 = (float *)CONCAT44(fStack_364,fStack_368);
    pbVar30 = (byte *)CONCAT44(uStack_35c,fStack_360);
    uVar29 = CONCAT17(auStack_351[0],CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
    uStack_1e0._0_4_ = fStack_200;
    auStack_1e8._0_4_ = (undefined4)uStack_208;
    auStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_208 >> 0x20);
    pdb_14007ee60();
    pbVar33 = pub_1406abab0(0x20,8);
    pfStack_110 = (float *)pbVar30;
    if (pbVar33 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    pbVar33[0] = 1;
    pbVar33[1] = 0;
    pbVar33[2] = 0;
    pbVar33[3] = 0;
    pbVar33[4] = 0;
    pbVar33[5] = 0;
    pbVar33[6] = 0;
    pbVar33[7] = 0;
    pbVar33[8] = 1;
    pbVar33[9] = 0;
    pbVar33[10] = 0;
    pbVar33[0xb] = 0;
    pbVar33[0xc] = 0;
    pbVar33[0xd] = 0;
    pbVar33[0xe] = 0;
    pbVar33[0xf] = 0;
    *(ulonglong *)(pbVar33 + 0x10) = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
    *(float *)(pbVar33 + 0x18) = (float)uStack_1e0;
    *(float *)(pbVar33 + 0x1c) = fVar87;
    pdb_1409baea0(auStack_1e8,pbVar30,uVar29,pbVar33,&UNK_14300cf40);
    auStack_348._0_8_ = uStack_1c8;
    bStack_358 = (byte)uStack_1d8;
    uStack_357 = (undefined2)((ulonglong)uStack_1d8 >> 8);
    uStack_355 = (undefined4)((ulonglong)uStack_1d8 >> 0x18);
    auStack_351._1_3_ = SUB43(fStack_1d0,0);
    auStack_351 = (undefined1  [4])CONCAT31(auStack_351._1_3_,(char)((ulonglong)uStack_1d8 >> 0x38))
    ;
    uStack_34d._1_3_ = (undefined3)uStack_1cc;
    uStack_34d = CONCAT31(uStack_34d._1_3_,(char)((uint)fStack_1d0 >> 0x18));
    uStack_349 = (undefined1)((uint)uStack_1cc >> 0x18);
    fStack_368 = (float)auStack_1e8._0_4_;
    fStack_364 = (float)auStack_1e8._4_4_;
    fStack_360 = (float)uStack_1e0;
    uStack_35c = uStack_1e0._4_4_;
    fVar87 = (float)uStack_1d8;
    pdb_140b133f0(&lStack_3c8,&fStack_368);
    if (pfStack_100 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_110,(ulonglong)pfStack_100,1);
    }
    pdb_14007ee60();
    pbVar30 = pub_1406abab0(0x18,4);
    if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x18);
    }
    *(undefined4 *)(pbVar30 + 8) = uStack_450;
    *(longlong *)pbVar30 = lStack_458;
    *(ulonglong *)(pbVar30 + 0xc) = CONCAT44((undefined4)uStack_448,uStack_44c);
    *(undefined4 *)(pbVar30 + 0x14) = uStack_448._4_4_;
    fStack_368 = 2.8026e-45;
    fStack_364 = 0.0;
    fStack_360 = SUB84(pbVar30,0);
    uStack_35c = (float)((ulonglong)pbVar30 >> 0x20);
    bStack_358 = 2;
    uStack_357 = 0;
    uStack_355 = 0;
    auStack_351 = (undefined1  [4])((uint)auStack_351 & 0xffffff00);
    pdb_140a89130(auStack_1e8,&fStack_368);
    pdb_140a89100(&fStack_368,auStack_1e8);
    pdb_140a891b0(auStack_1e8,&fStack_368);
    fStack_368 = 128.80896;
    fStack_364 = 1.4013e-45;
    fStack_360 = 2.66247e-44;
    uStack_35c = 0.0;
    uStack_113 = 1;
    uVar29 = pdb_140bbbcb0(&fStack_368);
    uStack_113 = 1;
    pdb_140b133e0(&fStack_368,uStack_1f8,uVar29);
    uStack_113 = 0;
    pdb_140a891e0(auStack_1e8,&fStack_368);
    uStack_1e0 = &uStack_44c;
    auStack_1e8 = (undefined1  [8])&lStack_458;
    uStack_1d8._0_4_ = 0.0;
    uStack_1d8._4_4_ = 9.80909e-45;
    pdb_141498d30(&fStack_360,auStack_1e8);
    fStack_364 = 0.5;
    fStack_368 = (float)CONCAT31(fStack_368._1_3_,1);
    pfStack_298 = (float *)((ulonglong)pfStack_298 & 0xffffffffffffff00);
    pdb_140c9dcb0(auStack_1e8,&fStack_368,&pfStack_298);
    bStack_13f = bStack_13f | 2;
    pub_142e32760(&fStack_368,auStack_1e8,0xb0);
    uStack_114 = 1;
    pdb_140c9dee0(auStack_1e8);
    pfStack_418 = (float *)0x0;
    pfStack_420 = (float *)CONCAT44(pfStack_420._4_4_,1);
    uStack_114 = 1;
    pdb_140c9de10(&pfStack_298,auStack_1e8,&pfStack_420);
    uStack_114 = 0;
    pdb_140c9dd20(auStack_1e8,&fStack_368,&pfStack_298);
    pdb_140c9dbe0(&fStack_368,auStack_1e8,0);
    pfVar42 = (float *)&UNK_14300cf18;
    pfStack_298 = (float *)pdb_140900b80(uStack_2b0,&UNK_14300cf18,0x13,&fStack_368);
    uStack_290 = pfVar42;
    if (piStack_138[0xd] == 1) {
      iVar10 = piStack_138[0xe];
      uVar27 = pdb_1408ffab0(&pfStack_298);
      auStack_1e8[0] = uVar27;
      cVar23 = pdb_140901020(auStack_1e8);
      uVar29 = uStack_128;
      if (cVar23 != '\0') {
        lStack_640 = 3;
        lVar31 = 3;
        if (*piStack_138 == 1) {
          uVar55 = piStack_138[1];
          pfVar42 = (float *)(ulonglong)(uint)piStack_138[2];
          lVar39 = pdb_140c40010(uStack_128,uVar55);
          if (lVar39 == 0) {
            pdb_140c40010(uVar29,pfVar42);
          }
          else {
            pfVar48 = *(float **)(lVar39 + 0x18);
            bVar25 = *(byte *)(lVar39 + 0x32);
            lVar39 = pdb_140c40010(uVar29,pfVar42);
            uVar29 = uStack_128;
            if (((lVar39 != 0) && (bVar25 != 5)) && (bVar26 = *(byte *)(lVar39 + 0x32), bVar26 != 5)
               ) {
              pfStack_110 = (float *)CONCAT71(pfStack_110._1_7_,bVar25);
              lVar39 = 0;
              if (1 < bVar25) {
                lVar39 = (ulonglong)(byte)(bVar25 - 2) + 1;
              }
              pfVar44 = (float *)(ulonglong)uVar55;
              pfStack_120 = pfVar48;
              lVar41 = pdb_140c3d2c0(uStack_128);
              lStack_6b8 = lVar41;
              pfStack_6b0 = pfVar44;
              pfStack_100 = pfVar44;
              lVar53 = pdb_140c3d2c0(uVar29);
              pfVar48 = pfStack_100;
              if (lVar39 == 1) {
                if (((bVar26 == 2) && (lVar41 == lVar53)) && (pfStack_100 == pfVar42 || lVar41 != 0)
                   ) {
                  uVar29 = pdb_140c413f0(&lStack_6b8);
                  pdb_140b76bb0(auStack_1e8,uVar29);
                  if (auStack_1e8[0] != '\x01') {
                    fStack_608 = uStack_208._4_4_ - (float)uStack_1d8;
                    uStack_630 = CONCAT44((float)uStack_1e0,auStack_1e8._4_4_);
                    pfStack_628 = (float *)((ulonglong)pfStack_628 & 0xffffffff00000000);
                    bStack_60e = 2;
                    lVar31 = lVar41;
                    lStack_640 = lVar41;
                    pfStack_638 = pfVar48;
                  }
                }
              }
              else if (((lVar39 == 0) && (bVar26 < 2)) &&
                      ((lVar41 == lVar53 && (pfStack_100 == pfVar42 || lVar41 != 0)))) {
                uVar29 = *param_15;
                uVar37 = pdb_140c413f0(&lStack_6b8);
                lVar39 = pdb_140b54f80(uVar29,uVar37,&UNK_14300cf70);
                if (lVar39 != 0) {
                  uStack_1e0._0_4_ = fStack_200;
                  auStack_1e8._0_4_ = (undefined4)uStack_208;
                  auStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_208 >> 0x20);
                  uVar62 = pdb_140dea520(auStack_1e8,lVar39);
                  fVar97 = (float)pdb_14092fb60(lVar39);
                  uStack_610 = pdb_14007fac0();
                  lStack_61c = uStack_208;
                  fStack_614 = fStack_200;
                  bStack_60e = (byte)pfStack_110 & 1;
                  pfStack_638 = pfVar48;
                  uStack_630 = CONCAT44(fVar87,uVar62);
                  pfStack_628 = pfStack_120;
                  uStack_60f = 0;
                  fStack_608 = 0.0;
                  lVar31 = lVar41;
                  lStack_640 = lVar41;
                  fStack_620 = fVar87 - fVar97;
                }
              }
            }
          }
        }
        fVar97 = fStack_200;
        uVar62 = (undefined4)uStack_208;
        fVar87 = uStack_208._4_4_;
        lVar39 = *param_8;
        uVar24 = 0;
        uStack_1e0 = (uint *)(*(longlong *)(lVar39 + 0x10) * 2);
        auStack_1e8._0_4_ = (undefined4)*(undefined8 *)(lVar39 + 8);
        auStack_1e8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar39 + 8) >> 0x20);
        uStack_1d8._0_4_ = (float)*(undefined8 *)(lVar39 + 0x50);
        uStack_1d8._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar39 + 0x50) >> 0x20);
        fVar100 = (float)pdb_1402202d0(auStack_1e8);
        fVar87 = fVar87 - fVar100;
        uVar27 = SUB41(fVar87,0);
        uVar105 = (undefined1)((uint)fVar87 >> 8);
        uVar106 = (undefined1)((uint)fVar87 >> 0x10);
        uVar107 = (undefined1)((uint)fVar87 >> 0x18);
        auStack_1e8._0_4_ = 1;
        auStack_1e8._4_4_ = 0;
        uStack_1d8._0_4_ = (float)uVar62;
        uStack_1d8._4_4_ = fVar97;
        fStack_1d0 = 0.0;
        uStack_1b8._0_3_ = CONCAT12(3,(undefined2)uStack_1b8);
        pcStack_1b0 = (code *)CONCAT44(pcStack_1b0._4_4_,fVar87);
        bVar57 = lVar31 == 3;
        plVar36 = &lStack_640;
        if (bVar57) {
          plVar36 = (longlong *)auStack_1e8;
          lVar31 = 1;
        }
        lVar39 = plVar36[1];
        puVar38 = &uStack_630;
        if (bVar57) {
          puVar38 = &uStack_1d8;
        }
        uStack_6d8 = puVar38[4];
        uStack_6f8 = *puVar38;
        uStack_6f0 = puVar38[1];
        uStack_6e8 = puVar38[2];
        uStack_6e0 = puVar38[3];
        if (!bVar57) {
          uVar27 = SUB41(fStack_608,0);
          uVar105 = (undefined1)((uint)fStack_608 >> 8);
          uVar106 = (undefined1)((uint)fStack_608 >> 0x10);
          uVar107 = (undefined1)((uint)fStack_608 >> 0x18);
        }
        *puStack_5e8 = uStack_484;
        pdb_140ae4960(uStack_5e0,puStack_5f0);
        lVar41 = pdb_140c40010(uStack_128,iVar10);
        if (lVar41 == 0) {
          iVar104 = piStack_138[0xc];
          uVar108 = 0;
          uVar110 = 0;
          uVar112 = 0;
          uVar113 = 0;
          uVar115 = 0;
          uVar117 = 0;
          uVar119 = 0;
          uVar62 = 0;
          uVar56 = 0;
        }
        else {
          lVar41 = pdb_1409014e0(lVar41 + 0x38);
          iVar104 = piStack_138[0xc];
          if (lVar41 == 0) {
            uVar108 = 0;
            uVar110 = 0;
            uVar112 = 0;
            uVar113 = 0;
            uVar115 = 0;
            uVar117 = 0;
            uVar119 = 0;
            uVar62 = 0;
            uVar56 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(lVar41 + 8);
            uVar108 = (undefined1)uVar29;
            uVar110 = (undefined1)((ulonglong)uVar29 >> 8);
            uVar112 = (undefined1)((ulonglong)uVar29 >> 0x10);
            uVar113 = (undefined1)((ulonglong)uVar29 >> 0x18);
            uVar115 = (undefined1)((ulonglong)uVar29 >> 0x20);
            uVar117 = (undefined1)((ulonglong)uVar29 >> 0x28);
            uVar119 = (undefined1)((ulonglong)uVar29 >> 0x30);
            uVar24 = (undefined1)((ulonglong)uVar29 >> 0x38);
            uVar56 = *(undefined4 *)(lVar41 + 0x10);
            uVar62 = *(undefined4 *)(lVar41 + 0x14);
          }
        }
        fStack_360 = (float)piStack_138[2];
        fStack_368 = (float)*(undefined8 *)piStack_138;
        fStack_364 = (float)((ulonglong)*(undefined8 *)piStack_138 >> 0x20);
        lVar41 = pdb_140c40010(uStack_128,iVar10);
        if (lVar41 == 0) {
          uVar46 = 0x186a3;
        }
        else {
          uVar46 = *(undefined4 *)(lVar41 + 0x50);
        }
        fStack_1c0 = (float)uStack_6d8;
        fStack_1bc = (float)((ulonglong)uStack_6d8 >> 0x20);
        fStack_1d0 = (float)uStack_6e8;
        uStack_1cc = (undefined4)((ulonglong)uStack_6e8 >> 0x20);
        uStack_1c8._0_4_ = (undefined4)uStack_6e0;
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_6e0 >> 0x20);
        uStack_1e0._0_4_ = (float)uStack_6f8;
        uStack_1e0._4_4_ = (float)((ulonglong)uStack_6f8 >> 0x20);
        uStack_1d8._0_4_ = (float)uStack_6f0;
        uStack_1d8._4_4_ = (float)((ulonglong)uStack_6f0 >> 0x20);
        lStack_5c8 = uStack_208;
        puStack_5c0 = (undefined *)CONCAT44(puStack_5c0._4_4_,fStack_200);
        pfStack_420 = (float *)CONCAT44(fStack_364,fStack_368);
        pfStack_418 = (float *)CONCAT44(pfStack_418._4_4_,fStack_360);
        *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
        lVar41 = *param_7;
        lVar53 = *(longlong *)(lVar41 + 0x30);
        uVar29 = *(undefined8 *)(lVar41 + 0x40);
        if (lVar53 == *(longlong *)(lVar41 + 0x20)) {
          pdb_142d8d9b0(lVar41 + 0x20);
        }
        lVar54 = *(longlong *)(lVar41 + 0x28);
        lVar11 = lVar53 * 0x88;
        *(longlong *)(lVar54 + lVar11) = lVar31;
        *(longlong *)(lVar54 + 8 + lVar11) = lVar39;
        *(undefined8 *)(lVar54 + 0x10 + lVar11) = 7;
        auVar17._8_4_ = fStack_1c0;
        auVar17._0_8_ = uStack_1c8;
        auVar17._12_4_ = fStack_1bc;
        plVar36 = (longlong *)(lVar54 + 0x18 + lVar11);
        *plVar36 = (longlong)auStack_1e8;
        plVar36[1] = (longlong)uStack_1e0;
        puVar38 = (undefined8 *)(lVar54 + 0x28 + lVar11);
        *puVar38 = CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        puVar38[1] = CONCAT44(uStack_1cc,fStack_1d0);
        *(undefined1 (*) [16])(lVar54 + 0x38 + lVar11) = auVar17;
        *(uint *)(lVar54 + 0x48 + lVar11) =
             CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar27)));
        *(int *)(lVar54 + 0x4c + lVar11) = iVar104;
        *(ulonglong *)(lVar54 + 0x50 + lVar11) =
             CONCAT17(uVar24,CONCAT16(uVar119,CONCAT15(uVar117,CONCAT14(uVar115,CONCAT13(uVar113,
                                                  CONCAT12(uVar112,CONCAT11(uVar110,uVar108)))))));
        *(undefined4 *)(lVar54 + 0x58 + lVar11) = uVar56;
        *(undefined4 *)(lVar54 + 0x5c + lVar11) = uVar62;
        *(float **)(lVar54 + 0x60 + lVar11) = pfStack_420;
        *(undefined4 *)(lVar54 + 0x68 + lVar11) = pfStack_418._0_4_;
        *(longlong *)(lVar54 + 0x6c + lVar11) = lStack_5c8;
        *(undefined4 *)(lVar54 + 0x74 + lVar11) = puStack_5c0._0_4_;
        *(undefined4 *)(lVar54 + 0x78 + lVar11) = uVar46;
        *(undefined8 *)(lVar54 + 0x80 + lVar11) = uVar29;
        *(longlong *)(lVar41 + 0x30) = lVar53 + 1;
        *(longlong *)(lVar41 + 0x40) = *(longlong *)(lVar41 + 0x40) + 1;
      }
    }
    piVar49 = piStack_138;
  }
  fVar20 = _UNK_14300ccfc;
  fVar19 = _UNK_14300ccf8;
  fVar102 = _UNK_14300ccf4;
  fVar98 = _DAT_14300ccf0;
  fVar88 = _UNK_14300ccec;
  fVar85 = _UNK_14300cce8;
  fVar84 = _UNK_14300cce4;
  fVar82 = _DAT_14300cce0;
  fVar103 = _UNK_142e377dc;
  fVar96 = _UNK_142e377d8;
  fVar73 = _UNK_142e377d4;
  fVar70 = _DAT_142e377d0;
  fVar61 = _UNK_142e377cc;
  fVar101 = _UNK_142e377c8;
  fVar99 = _UNK_142e377c4;
  fVar59 = _DAT_142e377c0;
  fVar60 = _UNK_142e377bc;
  fVar100 = _UNK_142e377b8;
  fVar97 = _UNK_142e377b4;
  fVar87 = _DAT_142e377b0;
  pauVar47 = *(undefined1 (**) [16])(piVar49 + 0x4c);
  pfStack_230 = *(float **)(piVar49 + 0x52);
  auVar69 = *pauVar47;
  pauVar45 = pauVar47 + 1;
  uVar55 = ~(uint)(ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar69[0xf] >> 7) << 0xf);
  lStack_460 = CONCAT44(lStack_460._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
  pauStack_378 = (undefined1 (*) [16])*param_5;
  piStack_138 = (int *)param_5[2];
LAB_14086219e:
  do {
    bVar57 = pfStack_230 == (float *)0x0;
    pfStack_230 = (float *)((longlong)pfStack_230 + -1);
    if (bVar57) {
      return;
    }
    if ((short)uVar55 == 0) {
      do {
        auVar69 = *pauVar45;
        pauVar47 = pauVar47 + -0x60;
        pauVar45 = pauVar45 + 1;
        uVar55 = (ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar55 == 0);
    }
    uVar6 = 0;
    for (uVar51 = uVar55; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar35 = (ulonglong)uVar6;
    pfStack_110 = (float *)(ulonglong)*(uint *)pauVar47[uVar35 * -6 + -6];
    fVar63 = *(float *)(pauVar47[uVar35 * -6 + -1] + 4);
    pdb_14007ee60();
    pbVar30 = pub_1406abab0(0x360,4);
    if (pbVar30 == (byte *)0x0) {
      pdb_142dc7e2a(4,0x360);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar55 = uVar55 - 1 & uVar55;
    pauStack_380 = pauVar47 + uVar35 * -6 + -4;
    plStack_468 = (longlong *)(pauVar47[uVar35 * -6 + -2] + 8);
    fVar129 = fVar63 * _DAT_142e36f50 + _DAT_142e3798c;
    lStack_458 = 0x18;
    uStack_450 = SUB84(pbVar30,0);
    uStack_44c = (uint)((ulonglong)pbVar30 >> 0x20);
    uStack_448 = 0;
    fVar63 = fVar129 * 0.0;
    lVar31 = 0;
    uVar6 = 0;
    pauStack_388 = pauVar47;
    pbStack_2b8 = pbVar30;
LAB_1408622c0:
    uVar51 = uVar6;
    if (uVar51 < 2) {
      uStack_564 = uVar51;
      fVar64 = (float)pub_142e32b30();
      fVar65 = (float)pub_142e329e0();
      fVar86 = *(float *)pauVar47[uVar35 * -6 + -5];
      fVar71 = *(float *)(pauVar47[uVar35 * -6 + -5] + 4);
      fVar72 = *(float *)(pauVar47[uVar35 * -6 + -5] + 8);
      fVar74 = *(float *)(pauVar47[uVar35 * -6 + -5] + 0xc);
      fVar75 = fVar71 * (float)((uint)fVar64 & _DAT_142e37820) * fVar70 + fVar72 * fVar64 * fVar59 +
               fVar74 * (float)((uint)fVar64 & _DAT_142e37820) * fVar87 + fVar65 * fVar86;
      fVar81 = fVar86 * (float)((uint)fVar64 & _UNK_142e37824) * fVar73 + fVar74 * fVar64 * fVar99 +
               fVar72 * (float)((uint)fVar64 & _UNK_142e37824) * fVar97 + fVar65 * fVar71;
      fVar83 = fVar74 * (float)((uint)fVar64 & _UNK_142e37828) * fVar96 + fVar86 * fVar64 * fVar101
               + fVar71 * (float)((uint)fVar64 & _UNK_142e37828) * fVar100 + fVar65 * fVar72;
      fVar86 = fVar72 * (float)((uint)fVar64 & _UNK_142e3782c) * fVar103 + fVar71 * fVar64 * fVar61
               + fVar86 * (float)((uint)fVar64 & _UNK_142e3782c) * fVar60 + fVar65 * fVar74;
      fVar130 = fVar83 * fVar98 * fVar70 + fVar81 * fVar98 * fVar59 +
                fVar75 * fVar82 * fVar87 + fVar86 * fVar82;
      fVar131 = fVar83 * fVar102 * fVar73 + fVar81 * fVar102 * fVar99 +
                fVar75 * fVar84 * fVar97 + fVar86 * fVar84;
      fVar132 = fVar83 * fVar19 * fVar96 + fVar81 * fVar19 * fVar101 +
                fVar75 * fVar85 * fVar100 + fVar86 * fVar85;
      fVar81 = fVar83 * fVar20 * fVar103 + fVar81 * fVar20 * fVar61 +
               fVar75 * fVar88 * fVar60 + fVar86 * fVar88;
      fVar72 = fVar132 * fVar132;
      fVar74 = fVar81 * fVar81;
      fVar64 = fVar131 * fVar131 + fVar130 * fVar130;
      fVar86 = fVar74 - (fVar64 + fVar72);
      fVar71 = fVar74 - (fVar64 + fVar72);
      fVar74 = fVar74 - (fVar64 + fVar72);
      fVar64 = fVar63 * fVar132 + fVar129 * fVar131 + fVar63 * fVar130;
      fVar64 = fVar64 + fVar64;
      fVar72 = fVar81 + fVar81;
      fVar65 = (float)*(undefined8 *)(pauVar47[uVar35 * -6 + -2] + 8) +
               (fVar63 * fVar131 - fVar129 * fVar132) * fVar72 + fVar64 * fVar130 + fVar63 * fVar86;
      fVar75 = (float)((ulonglong)*(undefined8 *)(pauVar47[uVar35 * -6 + -2] + 8) >> 0x20) +
               (fVar63 * fVar132 - fVar63 * fVar130) * fVar72 + fVar64 * fVar131 + fVar129 * fVar71;
      fStack_588 = (fVar129 * fVar130 - fVar63 * fVar131) * fVar72 +
                   fVar64 * fVar132 + fVar63 * fVar74 + *(float *)pauVar47[uVar35 * -6 + -1];
      lStack_590 = CONCAT44(fVar75,fVar65);
      if (*(int *)(pauVar47[uVar35 * -6 + -3] + 8) == 1) goto code_r0x00014086242d;
      goto LAB_140862536;
    }
    if ((*(char *)*puStack_5f0 != '\0') || (*(int *)((char *)*puStack_5f0 + 8) != 5)) {
LAB_140862b10:
      pauVar47 = pauStack_388;
      if (lStack_458 != 0) {
        pub_1406abac0(pbStack_2b8,lStack_458 * 0x24,4);
        pauVar47 = pauStack_388;
      }
      goto LAB_14086219e;
    }
    uStack_f1 = 1;
    lVar31 = pdb_140c40010(uStack_128,pfStack_110);
    if (lVar31 == 0) goto LAB_140862b10;
    uStack_f1 = 1;
    pdb_140f60be0(&lStack_3c8,pauStack_380);
    uStack_34d = (undefined4)((ulonglong)uStack_448 >> 0x18);
    uStack_349 = (undefined1)((ulonglong)uStack_448 >> 0x38);
    fStack_360 = (float)lStack_458;
    uStack_35c = (float)((ulonglong)lStack_458 >> 0x20);
    bStack_358 = (byte)uStack_450;
    uStack_357 = (undefined2)((uint)uStack_450 >> 8);
    uStack_355 = (undefined4)(CONCAT44(uStack_44c,uStack_450) >> 0x18);
    auStack_351[0] = (undefined1)(uStack_44c >> 0x18);
    auStack_351 = (undefined1  [4])CONCAT31((int3)uStack_448,auStack_351[0]);
    fStack_368 = (float)CONCAT31(fStack_368._1_3_,2);
    pfStack_298 = (float *)((ulonglong)pfStack_298 & 0xffffffffffffff00);
    uStack_103 = 1;
    pdb_140c9dcb0(auStack_1e8,&fStack_368,&pfStack_298);
    uStack_115 = 1;
    pdb_140c9deb0(&fStack_368);
    pfStack_418 = (float *)0x2;
    pfStack_420 = (float *)CONCAT44(pfStack_420._4_4_,1);
    uStack_115 = 1;
    pdb_140c9de10(&pfStack_298,&fStack_368,&pfStack_420);
    uStack_115 = 0;
    pdb_140c9dd20(&fStack_368,auStack_1e8,&pfStack_298);
    uStack_103 = 1;
    pdb_140c9dbe0(auStack_1e8,&fStack_368,0);
    uStack_103 = 0;
    pfVar42 = (float *)&lStack_3c8;
    pfStack_420 = (float *)pdb_1409008d0(uStack_2b0,pfVar42,auStack_1e8);
    uStack_f1 = 0;
    pfStack_418 = pfVar42;
    uVar29 = pdb_140901490(lVar31 + 0x38,&UNK_14300cf88);
    uStack_f1 = 0;
    pdb_1408ff9a0(auStack_1e8,&pfStack_420);
    if (auStack_1e8._0_4_ == 2) {
      fVar63 = *(float *)pauVar47[uVar35 * -6 + -5];
      fVar129 = *(float *)(pauVar47[uVar35 * -6 + -5] + 4);
      fVar86 = *(float *)(pauVar47[uVar35 * -6 + -5] + 8);
      fVar71 = *(float *)(pauVar47[uVar35 * -6 + -5] + 0xc);
      fVar74 = fVar86 * fVar86;
      fVar64 = fVar71 * fVar71;
      fVar65 = fVar129 * fVar129 + fVar63 * fVar63;
      fVar72 = fVar86 * 0.0 + fVar129 * 0.0 + fVar63 * _DAT_142e36f28;
      fVar72 = fVar72 + fVar72;
      fVar71 = fVar71 + fVar71;
      lStack_3c8 = CONCAT44(fVar71 * (fVar86 * _UNK_142e378e4 - fVar63 * _UNK_142e378f4) +
                            fVar72 * fVar129 + (fVar64 - (fVar65 + fVar74)) * 0.0,
                            fVar71 * (fVar129 * _DAT_142e378e0 - fVar86 * _DAT_142e378f0) +
                            fVar72 * fVar63 + (fVar64 - (fVar65 + fVar74)) * _DAT_142e36f28);
      fVar63 = fVar71 * (fVar63 * _UNK_142e378e8 - fVar129 * _UNK_142e378f8) +
               fVar72 * fVar86 + (fVar64 - (fVar65 + fVar74)) * 0.0;
    }
    else {
      fVar63 = *(float *)pauVar47[uVar35 * -6 + -5];
      fVar129 = *(float *)(pauVar47[uVar35 * -6 + -5] + 4);
      fVar86 = *(float *)(pauVar47[uVar35 * -6 + -5] + 8);
      fVar71 = *(float *)(pauVar47[uVar35 * -6 + -5] + 0xc);
      fVar65 = fVar86 * fVar86;
      fVar75 = fVar71 * fVar71;
      fVar81 = fVar129 * fVar129 + fVar63 * fVar63;
      fVar64 = fVar86 * 0.0 + fVar129 * 0.0 + fVar63 * _DAT_142e36f28;
      fVar64 = fVar64 + fVar64;
      fVar71 = fVar71 + fVar71;
      fVar72 = fVar71 * (fVar129 * _DAT_142e378e0 - fVar86 * _DAT_142e378f0) +
               fVar64 * fVar63 + (fVar75 - (fVar81 + fVar65)) * _DAT_142e36f28;
      fVar74 = fVar71 * (fVar86 * _UNK_142e378e4 - fVar63 * _UNK_142e378f4) +
               fVar64 * fVar129 + (fVar75 - (fVar81 + fVar65)) * 0.0;
      lStack_3c8 = CONCAT44(fVar74,fVar72);
      fVar63 = fVar71 * (fVar63 * _UNK_142e378e8 - fVar129 * _UNK_142e378f8) +
               fVar64 * fVar86 + (fVar75 - (fVar81 + fVar65)) * 0.0;
      fVar129 = uStack_1c8._4_4_ - *(float *)(pauVar47[uVar35 * -6 + -2] + 8);
      fVar86 = fStack_1c0 - (float)*(undefined8 *)(pauVar47[uVar35 * -6 + -2] + 0xc);
      fVar71 = fStack_1bc -
               (float)((ulonglong)*(undefined8 *)(pauVar47[uVar35 * -6 + -2] + 0xc) >> 0x20);
      fVar64 = _DAT_142e36f28 / SQRT(fVar71 * fVar71 + fVar129 * fVar129 + fVar86 * fVar86);
      if (fVar63 * fVar64 * fVar71 + fVar129 * fVar64 * fVar72 + fVar74 * fVar64 * fVar86 < 0.0) {
        lStack_3c8 = CONCAT44((uint)fVar74 ^ _UNK_142e37824,(uint)fVar72 ^ _DAT_142e37820);
        fVar63 = (float)((uint)fVar63 ^ _DAT_142e37820);
      }
    }
    pbStack_3c0 = (byte *)CONCAT44(pbStack_3c0._4_4_,fVar63);
    uStack_f1 = 0;
    bVar25 = pdb_1408ffab0(&pfStack_420);
    auStack_1e8._0_4_ = SUB84(plStack_468,0);
    auStack_1e8._4_4_ = (undefined4)((ulonglong)plStack_468 >> 0x20);
    uStack_1e0 = (uint *)&lStack_3c8;
    uStack_1d8._0_4_ = (float)uVar29;
    uStack_1d8._4_4_ = (float)((ulonglong)uVar29 >> 0x20);
    pfStack_298 = _DAT_14300ccc0;
    uStack_290 = (float *)((ulonglong)uStack_290 & 0xffffffffffffff00);
    uStack_f1 = 0;
    pdb_1414c3d10(&fStack_368,param_6,&pfStack_420,auStack_1e8,&pfStack_298);
    pauVar47 = pauStack_388;
    if (fStack_368 == 1.4013e-45) {
      fVar63 = (float)CONCAT13((undefined1)uStack_355,CONCAT21(uStack_357,bStack_358));
      uStack_f1 = 0;
      pfVar42 = pfStack_110;
      uVar29 = pdb_140c3d2c0(uStack_128);
      auStack_1e8._0_4_ = (undefined4)uVar29;
      auStack_1e8._4_4_ = (undefined4)((ulonglong)uVar29 >> 0x20);
      uStack_1e0._0_4_ = SUB84(pfVar42,0);
      uStack_1e0._4_4_ = (float)((ulonglong)pfVar42 >> 0x20);
      uStack_1d8._0_4_ = 4.2039e-45;
      uStack_1d8._4_4_ = 0.0;
      uStack_198 = 8;
      uStack_188 = 0;
      uStack_180 = 1;
      uStack_178 = 0;
      uStack_176 = 0;
      uStack_174 = 2;
      uStack_170 = 7;
      fStack_160 = SUB84(pfStack_110,0);
      pfStack_298 = (float *)CONCAT44(fStack_360,fStack_364);
      uStack_290._0_5_ = (uint5)(uint)uStack_35c;
      *puStack_4f8 = uStack_228;
      *puStack_4e8 = uStack_224;
      *piStack_138 = (undefined4)lStack_460;
      uStack_f1 = 0;
      fStack_17c = fVar63;
      pdb_1414c40f0(auStack_1e8,1 < bVar25,&pfStack_298,uStack_128,uStack_4f0,pauStack_378,
                    &uStack_738,uStack_4e0);
      pauVar47 = pauStack_388;
    }
  } while( true );
LAB_1408611b9:
  uVar35 = uVar35 & plStack_210[7];
  pcVar1 = (char *)(plStack_210[6] + uVar35);
  auVar95[0] = -(*pcVar1 == auVar69[0]);
  auVar95[1] = -(pcVar1[1] == auVar69[1]);
  auVar95[2] = -(pcVar1[2] == auVar69[2]);
  auVar95[3] = -(pcVar1[3] == auVar69[3]);
  auVar95[4] = -(pcVar1[4] == auVar69[4]);
  auVar95[5] = -(pcVar1[5] == auVar69[5]);
  auVar95[6] = -(pcVar1[6] == auVar69[6]);
  auVar95[7] = -(pcVar1[7] == auVar69[7]);
  auVar95[8] = -(pcVar1[8] == auVar69[0]);
  auVar95[9] = -(pcVar1[9] == auVar69[1]);
  auVar95[10] = -(pcVar1[10] == auVar69[2]);
  auVar95[0xb] = -(pcVar1[0xb] == auVar69[3]);
  auVar95[0xc] = -(pcVar1[0xc] == auVar69[4]);
  auVar95[0xd] = -(pcVar1[0xd] == auVar69[5]);
  auVar95[0xe] = -(pcVar1[0xe] == auVar69[6]);
  auVar95[0xf] = -(pcVar1[0xf] == auVar69[7]);
  uVar52 = (ushort)(SUB161(auVar95 >> 7,0) & 1) | (ushort)(SUB161(auVar95 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar95 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar95 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar95 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar95 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar95 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar95 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar95 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar95 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar95 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar95 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar95 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar95 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar95 >> 0x77,0) & 1) << 0xe | (ushort)(auVar95[0xf] >> 7) << 0xf;
  uVar55 = (uint)uVar52;
  while (uVar52 != 0) {
    uVar6 = 0;
    for (uVar51 = uVar55; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar53 = plStack_210[6] + (uVar6 + uVar35 & plStack_210[7]) * -0x10;
    if (fVar59 == *(float *)(lVar53 + -0x10)) {
      puVar38 = (undefined8 *)(auStack_1e8 + 4);
      uStack_1e0._4_4_ = *(float *)(lVar53 + -4);
      auStack_1e8._4_4_ = (undefined4)*(undefined8 *)(lVar53 + -0xc);
      uStack_1e0._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar53 + -0xc) >> 0x20);
      goto LAB_140861238;
    }
    uVar52 = (ushort)(uVar55 - 1) & (ushort)uVar55;
    uVar55 = CONCAT22((short)(uVar55 - 1 >> 0x10),uVar52);
  }
  auVar80[0] = -(*pcVar1 == -1);
  auVar80[1] = -(pcVar1[1] == -1);
  auVar80[2] = -(pcVar1[2] == -1);
  auVar80[3] = -(pcVar1[3] == -1);
  auVar80[4] = -(pcVar1[4] == -1);
  auVar80[5] = -(pcVar1[5] == -1);
  auVar80[6] = -(pcVar1[6] == -1);
  auVar80[7] = -(pcVar1[7] == -1);
  auVar80[8] = -(pcVar1[8] == -1);
  auVar80[9] = -(pcVar1[9] == -1);
  auVar80[10] = -(pcVar1[10] == -1);
  auVar80[0xb] = -(pcVar1[0xb] == -1);
  auVar80[0xc] = -(pcVar1[0xc] == -1);
  auVar80[0xd] = -(pcVar1[0xd] == -1);
  auVar80[0xe] = -(pcVar1[0xe] == -1);
  auVar80[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar80 >> 7,0) & 1) != 0 || (SUB161(auVar80 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar80 >> 0x17,0) & 1) != 0) || (SUB161(auVar80 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar80 >> 0x27,0) & 1) != 0) || (SUB161(auVar80 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar80 >> 0x37,0) & 1) != 0) || (SUB161(auVar80 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar80 >> 0x47,0) & 1) != 0) || (SUB161(auVar80 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar80 >> 0x57,0) & 1) != 0) || (SUB161(auVar80 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar80 >> 0x67,0) & 1) != 0) || (SUB161(auVar80 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar80 >> 0x77,0) & 1) != 0) || auVar80[0xf] < '\0') goto LAB_140861231;
  uVar35 = uVar35 + lVar41 + 0x10;
  lVar41 = lVar41 + 0x10;
  goto LAB_1408611b9;
LAB_140861231:
  puVar38 = &uStack_2a8;
LAB_140861238:
  fStack_2a0 = *(float *)(puVar38 + 1);
  uStack_2a8 = (float *)*puVar38;
LAB_14086124b:
  uVar35 = (ulonglong)(uint)fVar59;
  uVar29 = pdb_140c3d2c0(uStack_128);
  fVar101 = fStack_2a0;
  uVar62 = (undefined4)uStack_2a8;
  uVar27 = pdb_14008fbf0();
  fVar99 = uStack_2a8._4_4_;
  uStack_1e0 = (uint *)(*(longlong *)(pfStack_110 + 4) * 2);
  auStack_1e8._0_4_ = (undefined4)*(undefined8 *)(pfStack_110 + 2);
  auStack_1e8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(pfStack_110 + 2) >> 0x20);
  uStack_1d8._0_4_ = (float)*(undefined8 *)(pfStack_110 + 0x14);
  uStack_1d8._4_4_ = (float)((ulonglong)*(undefined8 *)(pfStack_110 + 0x14) >> 0x20);
  fStack_184 = (float)pdb_1402202d0(auStack_1e8);
  fStack_184 = fVar99 - fStack_184;
  if (fStack_184 <= 0.0) {
    fStack_184 = 0.0;
  }
  auStack_1e8._0_4_ = (undefined4)uVar29;
  auStack_1e8._4_4_ = (undefined4)((ulonglong)uVar29 >> 0x20);
  uStack_1e0._0_4_ = (float)uVar35;
  uStack_1e0._4_4_ = (float)(uVar35 >> 0x20);
  uStack_1d8._0_4_ = 1.4013e-45;
  uStack_1d8._4_4_ = 0.0;
  uStack_1c8._0_4_ = uVar62;
  uStack_1c8._4_4_ = fVar101;
  fStack_1c0 = 0.0;
  uStack_1a6 = 3;
  uStack_198 = 8;
  uStack_188 = 1;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_176 = 0;
  uStack_174 = 2;
  uStack_170 = 7;
  uVar105 = 2;
  if (cVar23 != '\0') {
    uStack_290 = (float *)CONCAT44(uStack_290._4_4_,fStack_2a0);
    pfStack_298 = uStack_2a8;
    uVar105 = 0;
  }
  uStack_290._0_5_ = CONCAT14(uVar105,(undefined4)uStack_290);
  *puStack_4f8 = uStack_228;
  *puStack_4e8 = uStack_224;
  *(undefined4 *)*pauStack_388 = pbStack_2b8._0_4_;
  uStack_1a0 = uVar27;
  fStack_160 = fVar59;
  pdb_1414c40f0(auStack_1e8,1 < (byte)pfStack_120,&pfStack_298,uStack_128,uStack_4f0,pfStack_230,
                &uStack_738,uStack_4e0);
  if (cVar23 != '\0') {
    *puStack_688 = uStack_550;
    fVar99 = fVar87 - *(float *)((longlong)plStack_210 + 0x7c);
    fVar101 = fVar97 - *(float *)(plStack_210 + 0x10);
    fVar61 = fVar100 - *(float *)((longlong)plStack_210 + 0x84);
    fVar59 = *(float *)(lStack_460 + 0x58);
    *puStack_690 = 0;
    puStack_690[4] = 1;
    puStack_690[5] = SQRT(fVar61 * fVar61 + fVar101 * fVar101 + fVar99 * fVar99) / fVar59;
  }
  goto LAB_140860f70;
code_r0x00014086242d:
  fVar64 = fVar132 * _UNK_142e378e8 + fVar131 * _UNK_142e378e4 + fVar130 * _DAT_142e378e0;
  fVar64 = fVar64 + fVar64;
  fVar83 = (fVar132 * _UNK_14300cd08 + fVar131 * _UNK_142e378e8) * fVar72 +
           fVar64 * fVar130 + fVar86 * 0.0;
  fVar148 = (fVar131 * _UNK_14300cd04 + fVar130 * _UNK_142e378e4) * fVar72 +
            fVar64 * fVar132 + fVar74 * 0.0;
  fVar64 = _DAT_142e36f28 / SQRT(fVar148 * fVar148 + fVar83 * fVar83);
  uVar28 = (uint)((int)fVar64 - 1U < 0x7fffff ||
                 (int)ABS(fVar64) - 0x800000U < 0x7f000000 && -1 < (int)fVar64);
  uVar6 = uVar51 + 1;
  if ((float)((int)(uVar28 << 0x1f) >> 0x1f & (uint)(fVar64 * fVar148)) *
      (float)((ulonglong)*(undefined8 *)(pauVar47[uVar35 * -6 + -3] + 0xc) >> 0x20) +
      (float)((int)(uVar28 << 0x1f) >> 0x1f & (uint)(fVar64 * fVar83)) *
      (float)*(undefined8 *)(pauVar47[uVar35 * -6 + -3] + 0xc) < 0.0) goto LAB_1408622c0;
LAB_140862536:
  fVar83 = (float)_DAT_142f89640;
  fVar148 = (float)((ulonglong)_DAT_142f89640 >> 0x20);
  fVar64 = fVar132 * 0.0 + fVar131 * fVar148 + fVar130 * fVar83;
  fVar64 = fVar64 + fVar64;
  fStack_1d0 = fVar72 * (fVar131 * _UNK_14300cd14 + fVar130 * fVar148) +
               fVar64 * fVar132 + fVar74 * 0.0 + fStack_588;
  uStack_1d8._0_4_ =
       fVar72 * (fVar132 * _UNK_14300cd18 + fVar131 * 0.0) + fVar64 * fVar130 + fVar86 * fVar83 +
       fVar65;
  uStack_1d8._4_4_ =
       fVar72 * (fVar130 * _DAT_14300cd10 + fVar132 * fVar83) + fVar64 * fVar131 + fVar71 * fVar148
       + fVar75;
  uStack_1cc = 0x3f800000;
  uStack_1c8._0_4_ = 0x3f800000;
  uStack_1c8._4_4_ = 1.0;
  uStack_f1 = 1;
  auStack_1e8._0_4_ = fVar130;
  auStack_1e8._4_4_ = fVar131;
  uStack_1e0._0_4_ = fVar132;
  uStack_1e0._4_4_ = fVar81;
  pdb_140b3d590(&fStack_368);
  pfVar42 = (float *)CONCAT44(fStack_364,fStack_368);
  pfStack_100 = (float *)CONCAT44(uStack_35c,fStack_360);
  uVar32 = CONCAT17(auStack_351[0],CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
  if ((ulonglong)(lStack_458 - lVar31) < uVar32) {
    pfStack_120 = pfVar42;
    pdb_142d7f1b0(&lStack_458,lVar31,uVar32,4,0x24);
    pbStack_2b8 = (byte *)CONCAT44(uStack_44c,uStack_450);
    pfVar42 = pfStack_120;
    lVar31 = uStack_448;
  }
  else if (uVar32 == 0) goto LAB_14086265b;
  pub_142e32760(pbStack_2b8 + lVar31 * 0x24,pfStack_100,uVar32 * 0x24);
LAB_14086265b:
  lVar31 = lVar31 + uVar32;
  uStack_448 = lVar31;
  if (pfVar42 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_100,(longlong)pfVar42 * 0x24,4);
  }
  fVar86 = *(float *)(pauVar47[uVar35 * -6 + -2] + 4) * _DAT_142e37990;
  lStack_3c8 = CONCAT44(lStack_3c8._4_4_,fVar86);
  auStack_1e8._0_4_ = (undefined4)*(undefined8 *)(pauVar47[uVar35 * -6 + -4] + 8);
  auStack_1e8._4_4_ =
       (undefined4)((ulonglong)*(undefined8 *)(pauVar47[uVar35 * -6 + -4] + 8) >> 0x20);
  uStack_1e0._0_4_ = (float)*(undefined8 *)pauVar47[uVar35 * -6 + -3];
  uStack_1e0._4_4_ = (float)((ulonglong)*(undefined8 *)pauVar47[uVar35 * -6 + -3] >> 0x20);
  uStack_f1 = 1;
  uVar29 = pdb_140bbbcb0(auStack_1e8);
  uStack_f1 = 1;
  pdb_140b133e0(&pfStack_298,uStack_1f8,uVar29);
  pfStack_420 = pfStack_110;
  auStack_1e8 = (undefined1  [8])&pfStack_420;
  uStack_1e0._0_4_ = 2.1413307;
  uStack_1e0._4_4_ = 1.4013e-45;
  uStack_1d8 = &lStack_590;
  fStack_1d0 = 7.6012573;
  uStack_1cc = 1;
  uStack_1c8 = (float *)&lStack_3c8;
  fStack_1c0 = 7.7206726;
  fStack_1bc = 1.4013e-45;
  uStack_1b8 = &uStack_564;
  pcStack_1b0 = pdb_140f71c50;
  uStack_f1 = 1;
  pdb_140f60760(&fStack_368,&UNK_14300cfa0,auStack_1e8);
  pfStack_100 = (float *)CONCAT44(fStack_364,fStack_368);
  pfVar42 = (float *)CONCAT44(uStack_35c,fStack_360);
  uVar29 = CONCAT17(auStack_351[0],CONCAT43(uStack_355,CONCAT21(uStack_357,bStack_358)));
  uStack_1e0._0_4_ = fStack_588;
  auStack_1e8._0_4_ = (undefined4)lStack_590;
  auStack_1e8._4_4_ = (undefined4)((ulonglong)lStack_590 >> 0x20);
  pdb_14007ee60();
  pbVar30 = pub_1406abab0(0x30,0x10);
  pfStack_120 = pfVar42;
  if (pbVar30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x30);
  }
  pbVar30[0] = 1;
  pbVar30[1] = 0;
  pbVar30[2] = 0;
  pbVar30[3] = 0;
  pbVar30[4] = 0;
  pbVar30[5] = 0;
  pbVar30[6] = 0;
  pbVar30[7] = 0;
  pbVar30[8] = 1;
  pbVar30[9] = 0;
  pbVar30[10] = 0;
  pbVar30[0xb] = 0;
  pbVar30[0xc] = 0;
  pbVar30[0xd] = 0;
  pbVar30[0xe] = 0;
  pbVar30[0xf] = 0;
  *(float *)(pbVar30 + 0x10) = fVar130;
  *(float *)(pbVar30 + 0x14) = fVar131;
  *(float *)(pbVar30 + 0x18) = fVar132;
  *(float *)(pbVar30 + 0x1c) = fVar81;
  *(float *)(pbVar30 + 0x20) = fVar86;
  *(ulonglong *)(pbVar30 + 0x24) = CONCAT44(auStack_1e8._4_4_,auStack_1e8._0_4_);
  *(float *)(pbVar30 + 0x2c) = (float)uStack_1e0;
  pdb_1409baea0(auStack_1e8,pfVar42,uVar29,pbVar30,&UNK_14300cfc0);
  auStack_348._0_8_ = uStack_1c8;
  bStack_358 = (byte)uStack_1d8;
  uStack_357 = (undefined2)((ulonglong)uStack_1d8 >> 8);
  uStack_355 = (undefined4)((ulonglong)uStack_1d8 >> 0x18);
  auStack_351._1_3_ = SUB43(fStack_1d0,0);
  auStack_351 = (undefined1  [4])CONCAT31(auStack_351._1_3_,(char)((ulonglong)uStack_1d8 >> 0x38));
  uStack_34d = (undefined4)(CONCAT44(uStack_1cc,fStack_1d0) >> 0x18);
  uStack_349 = (undefined1)((uint)uStack_1cc >> 0x18);
  fStack_368 = (float)auStack_1e8._0_4_;
  fStack_364 = (float)auStack_1e8._4_4_;
  fStack_360 = (float)uStack_1e0;
  uStack_35c = uStack_1e0._4_4_;
  pdb_140b133f0(&pfStack_298,&fStack_368);
  if (pfStack_100 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_120,(ulonglong)pfStack_100,1);
  }
  uVar6 = uVar51 + 1;
  goto LAB_1408622c0;
}

