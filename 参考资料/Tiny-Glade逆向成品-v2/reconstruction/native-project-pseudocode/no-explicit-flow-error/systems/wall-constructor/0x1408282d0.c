// VA 0x1408282d0, PDB extent 48109 bytes
// system_wall_constructor::construct_playermade_stairs::wooden_supports::construct_playermade_wooden_stair_supports
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::construct_playermade_wooden_stair_supports
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
   Extent: 48109 */

void pdb_1408282d0(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  byte *param_4,undefined8 *param_5,undefined8 *param_6,longlong *param_7,
                  undefined1 (*param_8) [16],ulonglong *param_9)

{
  undefined4 *puVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [4];
  int iVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  byte *pbVar34;
  byte *pbVar35;
  char *pcVar36;
  ulonglong *puVar37;
  int *piVar38;
  undefined1 (*pauVar39) [16];
  float *pfVar40;
  byte bVar41;
  undefined1 (*pauVar42) [16];
  ulonglong uVar43;
  float *pfVar44;
  undefined8 *puVar45;
  uint *puVar46;
  undefined1 (**ppauVar47) [16];
  undefined8 uVar48;
  ulonglong *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  longlong lVar52;
  undefined4 uVar53;
  longlong lVar54;
  float *pfVar55;
  longlong lVar56;
  ulonglong uVar57;
  ushort uVar58;
  longlong lVar59;
  ulonglong uVar60;
  int iVar61;
  undefined1 (*pauVar62) [16];
  int *piVar63;
  undefined1 (*pauVar64) [16];
  undefined1 (*pauVar65) [16];
  bool bVar66;
  bool bVar67;
  byte bVar68;
  float fVar69;
  float fVar73;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  float fVar75;
  float fVar97;
  undefined1 auVar76 [16];
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
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar98;
  float fVar121;
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
  float fVar99;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar122;
  float fVar130;
  int iVar131;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  uint uVar132;
  float fVar133;
  uint uVar134;
  uint uVar138;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar145 [16];
  uint uVar146;
  uint uVar149;
  uint uVar150;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined1 auVar151 [16];
  longlong lVar152;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar153 [16];
  longlong lVar154;
  float unaff_XMM12_Da;
  undefined1 auVar155 [16];
  longlong lVar157;
  undefined1 auVar156 [16];
  float fVar158;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined1 auVar159 [16];
  longlong lVar160;
  float unaff_XMM14_Da;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined8 **in_stack_fffffffffffff5c8;
  ulonglong in_stack_fffffffffffff5d0;
  undefined4 uVar165;
  int iStack_a08;
  undefined8 uStack_a04;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined1 auStack_9f4 [12];
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  int iStack_9b8;
  longlong lStack_9b0;
  int *piStack_9a8;
  longlong lStack_9a0;
  undefined8 uStack_998;
  longlong lStack_990;
  longlong lStack_988;
  longlong lStack_980;
  byte *pbStack_978;
  undefined8 uStack_960;
  longlong *plStack_958;
  longlong lStack_950;
  float afStack_938 [9];
  undefined8 uStack_914;
  float fStack_90c;
  undefined8 uStack_908;
  undefined4 uStack_900;
  float fStack_8fc;
  float fStack_8f8;
  float fStack_8f4;
  longlong lStack_8f0;
  float fStack_8e8;
  undefined1 auStack_8e4 [4];
  uint uStack_8e0;
  undefined4 uStack_8dc;
  char cStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined4 uStack_8c0;
  int iStack_8bc;
  undefined8 uStack_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  int iStack_8a8;
  uint uStack_8a4;
  undefined8 uStack_8a0;
  undefined1 (*pauStack_898) [16];
  byte *pbStack_890;
  undefined1 auStack_888 [16];
  int iStack_878;
  undefined4 uStack_874;
  ulonglong uStack_840;
  undefined1 auStack_7f8 [16];
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  longlong lStack_7d8;
  undefined *puStack_7d0;
  longlong lStack_7c8;
  ulonglong uStack_7c0;
  undefined1 auStack_7b8 [16];
  undefined1 (*pauStack_7a8) [16];
  undefined8 uStack_7a0;
  undefined8 uStack_790;
  float fStack_788;
  longlong lStack_780;
  undefined1 (*pauStack_778) [16];
  byte *pbStack_770;
  undefined8 *puStack_768;
  ulonglong uStack_760;
  byte *pbStack_758;
  undefined1 (*pauStack_750) [16];
  longlong lStack_748;
  undefined1 (*pauStack_740) [16];
  byte *pbStack_738;
  undefined8 uStack_730;
  undefined1 (*pauStack_728) [16];
  undefined8 *puStack_720;
  undefined1 auStack_718 [16];
  undefined8 uStack_708;
  undefined8 uStack_700;
  longlong lStack_6f8;
  undefined *puStack_6f0;
  longlong lStack_6e0;
  longlong lStack_6d8;
  undefined1 (*pauStack_6d0) [16];
  undefined8 *puStack_6c8;
  float *pfStack_6c0;
  uint *puStack_6b8;
  uint uStack_6a8;
  undefined4 uStack_6a4;
  uint uStack_6a0;
  undefined4 uStack_69c;
  undefined1 (*pauStack_698) [16];
  longlong lStack_690;
  undefined1 (*pauStack_688) [16];
  longlong lStack_680;
  longlong lStack_678;
  longlong lStack_670;
  undefined1 auStack_668 [16];
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 (**ppauStack_648) [16];
  undefined1 (*pauStack_640) [16];
  undefined1 (*pauStack_638) [16];
  undefined1 auStack_630 [16];
  undefined1 (*pauStack_620) [16];
  byte *pbStack_618;
  undefined8 *puStack_610;
  float fStack_5c8;
  float fStack_5c4;
  ulonglong uStack_5c0;
  longlong *plStack_5b8;
  undefined8 uStack_5b0;
  undefined1 (*pauStack_5a8) [16];
  undefined8 uStack_5a0;
  undefined1 (*pauStack_590) [16];
  byte *pbStack_588;
  undefined1 (*pauStack_580) [16];
  longlong lStack_578;
  int *piStack_570;
  longlong lStack_568;
  undefined1 (*pauStack_560) [16];
  undefined1 (*pauStack_558) [16];
  undefined1 (*pauStack_550) [16];
  longlong lStack_548;
  byte *pbStack_540;
  undefined *puStack_538;
  undefined1 (*pauStack_530) [16];
  undefined1 (*pauStack_528) [16];
  undefined1 (*pauStack_520) [16];
  undefined1 (*pauStack_518) [16];
  longlong lStack_510;
  undefined8 uStack_508;
  undefined1 auStack_4f8 [8];
  undefined1 (*pauStack_4f0) [16];
  undefined1 (*pauStack_4e8) [16];
  undefined8 uStack_4e0;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  undefined4 uStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  undefined4 uStack_4c0;
  uint uStack_4bc;
  undefined1 (*pauStack_4b8) [16];
  byte *pbStack_4b0;
  undefined8 *puStack_4a8;
  float *pfStack_4a0;
  uint *puStack_498;
  uint uStack_490;
  undefined4 uStack_48c;
  int iStack_488;
  int iStack_484;
  uint uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  undefined4 uStack_45c;
  undefined8 auStack_440 [2];
  float fStack_430;
  char cStack_420;
  longlong lStack_410;
  float *pfStack_408;
  undefined1 (*pauStack_400) [16];
  undefined1 auStack_3f8 [16];
  undefined1 (*pauStack_3e8) [16];
  byte *pbStack_3e0;
  undefined8 *puStack_3d8;
  float *pfStack_3d0;
  undefined4 *puStack_3c8;
  byte *pbStack_3c0;
  byte *pbStack_3b8;
  undefined8 uStack_3b0;
  longlong *plStack_3a8;
  undefined1 (*pauStack_3a0) [16];
  undefined1 (*pauStack_398) [16];
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined1 (*pauStack_380) [16];
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined1 (*pauStack_348) [16];
  undefined1 (*pauStack_340) [16];
  undefined8 uStack_338;
  undefined8 uStack_330;
  float fStack_328;
  undefined4 uStack_324;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  float fStack_310;
  uint uStack_300;
  undefined4 uStack_2fc;
  undefined1 (*pauStack_2f8) [16];
  undefined8 *puStack_2f0;
  undefined1 (*pauStack_2e8) [16];
  undefined1 (*pauStack_2e0) [16];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ushort uStack_2c0;
  undefined2 uStack_2be;
  int iStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 (*pauStack_298) [16];
  undefined4 uStack_290;
  uint uStack_28c;
  undefined1 (*pauStack_288) [16];
  byte *pbStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 (*pauStack_260) [16];
  undefined1 (*pauStack_258) [16];
  undefined1 auStack_250 [16];
  float *pfStack_240;
  undefined4 uStack_238;
  float fStack_234;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  float fStack_224;
  ulonglong uStack_220;
  longlong lStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_200;
  ulonglong uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  float *pfStack_198;
  byte *pbStack_190;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  longlong lStack_178;
  undefined1 (*pauStack_170) [16];
  undefined1 auStack_168 [16];
  char cStack_149;
  undefined1 auStack_148 [16];
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  byte bStack_129;
  undefined1 auStack_128 [16];
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
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
  pauVar64 = param_2;
  pbStack_3e0 = param_4;
  pauStack_3a0 = param_3;
  cStack_149 = pdb_140e94b40();
  if (cStack_149 == '\0') goto LAB_1408284ea;
  pauVar42 = (undefined1 (*) [16])0x71;
  lVar29 = pdb_140833f20(0x71);
  pauVar62 = (undefined1 (*) [16])&UNK_14300a210;
  if (lVar29 == 1) {
    if ((undefined1 (*) [16])0x71 < pauVar64) {
LAB_14082edb0:
      in_stack_fffffffffffff5c8 = (undefined8 **)&UNK_14300a300;
      pdb_142dc8070(&UNK_14300a210,0x71,0);
      goto LAB_14082edd0;
    }
    uVar30 = pdb_140833f20(pauVar64);
    if ((uVar30 & 1) != 0) {
      uVar30 = (longlong)*pauVar64 + 2;
      if (0x71 < uVar30) {
        uVar48 = pdb_142dc8070(&UNK_14300a210,0x71,uVar30,0x71,&UNK_14300a318);
        goto LAB_14082ee0f;
      }
      pauVar42 = (undefined1 (*) [16])(0x6f - (longlong)pauVar64);
      pauVar62 = (undefined1 (*) [16])((longlong)pauVar64[0x14300a21] + 2);
    }
  }
  puVar50 = &UNK_14300a142;
  pauVar64 = (undefined1 (*) [16])&UNK_14300a0f0;
  do {
    bVar41 = puVar50[-1];
    uVar26 = (uint)(char)bVar41;
    if ((char)bVar41 < '\0') {
      bVar68 = puVar50[-2];
      if ((char)bVar68 < -0x40) {
        bVar3 = puVar50[-3];
        if ((char)bVar3 < -0x40) {
          pbVar34 = puVar50 + -4;
          puVar50 = puVar50 + -4;
          uVar26 = bVar3 & 0x3f | (*pbVar34 & 7) << 6;
        }
        else {
          puVar50 = puVar50 + -3;
          uVar26 = bVar3 & 0xf;
        }
        uVar26 = bVar68 & 0x3f | uVar26 << 6;
      }
      else {
        puVar50 = puVar50 + -2;
        uVar26 = bVar68 & 0x1f;
      }
      uVar26 = (uint)(bVar41 & 0x3f) | uVar26 << 6;
      if (uVar26 != 0x5c) goto LAB_140828454;
LAB_140828466:
      puVar51 = puVar50 + -0x14300a0ef;
      if (puVar51 < (undefined *)0x53) {
        in_stack_fffffffffffff5c8 = (undefined8 **)(0x52 - (longlong)puVar51);
        pauVar64 = (undefined1 (*) [16])(puVar50 + 1);
        goto LAB_140828489;
      }
      pdb_142dc8070(&UNK_14300a0f0,0x52,puVar51,0x52,&UNK_14300a2e0);
      goto LAB_14082edb0;
    }
    puVar50 = puVar50 + -1;
    if (uVar26 == 0x5c) goto LAB_140828466;
LAB_140828454:
    if (uVar26 == 0x2f) goto LAB_140828466;
  } while (puVar50 != &UNK_14300a0f0);
  in_stack_fffffffffffff5c8 = (undefined8 **)0x52;
LAB_140828489:
  plVar31 = (longlong *)pdb_140e97000();
  if ((char)plVar31[0xd] != '\x01') goto LAB_14082e9cc;
LAB_140828498:
  if (*plVar31 == 0) {
    *plVar31 = -1;
    in_stack_fffffffffffff5d0 = 0;
    auStack_128._0_8_ = plVar31;
    uStack_730 = pdb_140e94f10(plVar31 + 1,pauVar62,pauVar42,pauVar64,in_stack_fffffffffffff5c8,1,0)
    ;
    *(longlong *)auStack_128._0_8_ = *(longlong *)auStack_128._0_8_ + 1;
LAB_1408284ea:
    puVar50 = &UNK_1433056b0;
    puVar32 = (undefined8 *)pdb_1413e4400(*param_5);
    if (puVar32 != (undefined8 *)0x0) {
      puStack_3d8 = (undefined8 *)(**(code **)(puVar32[1] + 0x18))(*puVar32);
      if (puStack_3d8 != (undefined8 *)0x0) {
        plVar31 = (longlong *)pdb_140f3bda0();
        if ((char)plVar31[2] == '\x01') {
          lStack_6f8 = *plVar31;
          puVar50 = (undefined *)plVar31[1];
        }
        else {
          lStack_6f8 = pdb_140f4fd10();
          *plVar31 = lStack_6f8;
          plVar31[1] = (longlong)puVar50;
          *(undefined1 *)(plVar31 + 2) = 1;
        }
        *plVar31 = lStack_6f8 + 1;
        unaff_XMM10_Dd = _UNK_14300a1ac;
        unaff_XMM10_Dc = _UNK_14300a1a8;
        unaff_XMM10_Db = _UNK_14300a1a4;
        unaff_XMM10_Da = _DAT_14300a1a0;
        unaff_XMM11 = _DAT_14300a190;
        uStack_708 = CONCAT44(_UNK_14300a1a4,_DAT_14300a1a0);
        uStack_700 = CONCAT44(_UNK_14300a1ac,_UNK_14300a1a8);
        auStack_718 = _DAT_14300a190;
        pauStack_560 = (undefined1 (*) [16])0x0;
        pauStack_558 = (undefined1 (*) [16])0x8;
        pauStack_550 = (undefined1 (*) [16])0x0;
        lStack_578 = 0;
        piStack_570 = (int *)0x4;
        lStack_568 = 0;
        lStack_548 = 0;
        pbStack_540 = (byte *)0x8;
        puStack_538 = (undefined *)0x0;
        uStack_113 = 1;
        uStack_114 = 1;
        uStack_115 = 1;
        puStack_6f0 = puVar50;
        plVar31 = (longlong *)pdb_140f3bda0();
        if ((char)plVar31[2] == '\x01') {
          lStack_7d8 = *plVar31;
          puVar50 = (undefined *)plVar31[1];
        }
        else {
          uStack_113 = 1;
          uStack_114 = 1;
          uStack_115 = 1;
          lStack_7d8 = pdb_140f4fd10();
          *plVar31 = lStack_7d8;
          plVar31[1] = (longlong)puVar50;
          *(undefined1 *)(plVar31 + 2) = 1;
        }
        *plVar31 = lStack_7d8 + 1;
        uStack_7e8 = unaff_XMM10_Da;
        uStack_7e4 = unaff_XMM10_Db;
        uStack_7e0 = unaff_XMM10_Dc;
        uStack_7dc = unaff_XMM10_Dd;
        auStack_7f8 = unaff_XMM11;
        uStack_1f0 = *param_9;
        lVar29 = *(longlong *)(uStack_1f0 + 8);
        lVar52 = *(longlong *)(uStack_1f0 + 0x10);
        uStack_10d = 1;
        uStack_10e = 1;
        uStack_10f = 1;
        uStack_110 = 1;
        puStack_7d0 = puVar50;
        plVar31 = (longlong *)pdb_14008d710(0);
        if (plVar31 != (longlong *)0x0) {
          lVar59 = *plVar31;
          *plVar31 = *plVar31 + 1;
          uStack_2c8._0_4_ = (undefined4)_DAT_14330bc90;
          uStack_2c8._4_4_ = (uint)((ulonglong)_DAT_14330bc90 >> 0x20);
          uStack_2c0 = (ushort)_UNK_14330bc98;
          uStack_2be = (undefined2)((ulonglong)_UNK_14330bc98 >> 0x10);
          iStack_2bc = (int)((ulonglong)_UNK_14330bc98 >> 0x20);
          uStack_2d8._0_4_ = (float)_DAT_14330bc80;
          uStack_2d8._4_4_ = (float)((ulonglong)_DAT_14330bc80 >> 0x20);
          uStack_2d0._0_4_ = (float)_UNK_14330bc88;
          uStack_2d0._4_4_ = (int)((ulonglong)_UNK_14330bc88 >> 0x20);
          uStack_2b8._0_4_ = (float)lVar59;
          uStack_2b8._4_4_ = (float)((ulonglong)lVar59 >> 0x20);
          uStack_2b0._0_4_ = (float)plVar31[1];
          uStack_2b0._4_4_ = (undefined4)((ulonglong)plVar31[1] >> 0x20);
          pauStack_4f0 = (undefined1 (*) [16])(lVar52 * 0x150 + lVar29);
          auStack_4f8 = (undefined1  [8])lVar29;
          pauStack_4e8 = param_8;
          pdb_141421610(auStack_4f8,&uStack_2d8);
          lStack_7c8 = CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
          uStack_7c0 = CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0);
          auStack_7b8._4_4_ = uStack_2c8._4_4_;
          auStack_7b8._0_4_ = (undefined4)uStack_2c8;
          auStack_7b8._8_2_ = uStack_2c0;
          auStack_7b8._10_2_ = uStack_2be;
          auStack_7b8._12_4_ = iStack_2bc;
          pauStack_7a8 = (undefined1 (*) [16])CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
          uStack_7a0 = CONCAT44(uStack_2b0._4_4_,(float)uStack_2b0);
          *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
          pauStack_518 = (undefined1 (*) [16])*param_1;
          pauStack_528 = *(undefined1 (**) [16])((longlong)*pauStack_518 + 8);
          lStack_510 = *(longlong *)pauStack_518[1];
          *(float *)((longlong)(pauStack_518 + 1) + 0) = 0.0;
          fVar99 = _DAT_143009de4;
          uVar27 = _UNK_142e377e4;
          uVar26 = _DAT_142e377e0;
          *(float *)((longlong)(pauStack_518 + 1) + 4) = 0.0;
          pauStack_520 = pauStack_528 + lStack_510 * 10;
          uStack_508 = 0;
          plStack_3a8 = *(longlong **)*pauStack_3a0;
          plStack_5b8 = plStack_3a8 + 4;
          pauStack_2f8 = *(undefined1 (**) [16])*param_2;
          uStack_5b0 = *param_6;
          unaff_XMM8 = _DAT_143009d50;
          unaff_XMM14_Da = _DAT_143009d64;
          unaff_XMM13_Dc = _UNK_142e47bf8;
          unaff_XMM13_Dd = _UNK_142e47bfc;
          unaff_XMM12_Da = _DAT_143009d60;
          uStack_2b8 = pauStack_7a8;
LAB_1408287e0:
          while( true ) {
            pauVar64 = pauStack_528;
            if (pauStack_528 == pauStack_520) break;
            lVar29 = *(longlong *)*pauStack_528;
            pauVar64 = (undefined1 (*) [16])((longlong)*pauStack_528 + 8);
            pauStack_528 = pauStack_528 + 10;
            pub_142e32760(auStack_668,pauVar64,0x98);
            if (SBORROW8(0,lVar29)) break;
            uStack_8d0._0_4_ = (int)lVar29;
            uStack_8d0._4_4_ = (undefined4)((ulonglong)lVar29 >> 0x20);
            pub_142e32760(&uStack_8c8,auStack_668,0x98);
            uVar30 = uStack_840;
            uStack_5c0 = uStack_840;
            if (plStack_3a8[3] != 0) {
              uStack_10c = 1;
              uVar33 = pdb_1400af680(plStack_5b8,&uStack_5c0);
              lVar29 = *plStack_3a8;
              bVar41 = (byte)(uVar33 >> 0x39);
              auVar70 = ZEXT216(CONCAT11(bVar41,bVar41));
              auVar70 = pshuflw(auVar70,auVar70,0);
              lVar52 = 0;
              while( true ) {
                uVar33 = uVar33 & plStack_3a8[1];
                auVar137 = *(undefined1 (*) [16])(lVar29 + uVar33);
                auVar100[0] = -(auVar137[0] == auVar70[0]);
                auVar100[1] = -(auVar137[1] == auVar70[1]);
                auVar100[2] = -(auVar137[2] == auVar70[2]);
                auVar100[3] = -(auVar137[3] == auVar70[3]);
                auVar100[4] = -(auVar137[4] == auVar70[4]);
                auVar100[5] = -(auVar137[5] == auVar70[5]);
                auVar100[6] = -(auVar137[6] == auVar70[6]);
                auVar100[7] = -(auVar137[7] == auVar70[7]);
                auVar100[8] = -(auVar137[8] == auVar70[0]);
                auVar100[9] = -(auVar137[9] == auVar70[1]);
                auVar100[10] = -(auVar137[10] == auVar70[2]);
                auVar100[0xb] = -(auVar137[0xb] == auVar70[3]);
                auVar100[0xc] = -(auVar137[0xc] == auVar70[4]);
                auVar100[0xd] = -(auVar137[0xd] == auVar70[5]);
                auVar100[0xe] = -(auVar137[0xe] == auVar70[6]);
                auVar100[0xf] = -(auVar137[0xf] == auVar70[7]);
                uVar58 = (ushort)(SUB161(auVar100 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar100 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar100 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar100 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar100 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar100 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar100 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar100 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar100 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar100 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar100 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar100 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar100 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar100 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar100 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar100[0xf] >> 7) << 0xf;
                uVar134 = (uint)uVar58;
                while (uVar58 != 0) {
                  uVar138 = 0;
                  for (uVar132 = uVar134; (uVar132 & 1) == 0; uVar132 = uVar132 >> 1 | 0x80000000) {
                    uVar138 = uVar138 + 1;
                  }
                  lVar59 = (uVar138 + uVar33 & plStack_3a8[1]) * -0x140;
                  iVar131 = (int)uVar30;
                  if ((*(int *)(lVar29 + -0x140 + lVar59) == iVar131) &&
                     (iVar61 = (int)(uVar30 >> 0x20), *(int *)(lVar29 + -0x13c + lVar59) == iVar61))
                  {
                    if (*(longlong *)(lVar29 + lVar59 + -0x20) == 0) goto LAB_140828a50;
                    uStack_10c = 1;
                    pdb_1403afce0(auStack_7f8,uVar30 & 0xffffffff,uVar30 >> 0x20);
                    pub_142e32760(auStack_4f8,&uStack_8d0);
                    fVar69 = _DAT_142e36f28;
                    if (auStack_7b8._8_8_ == 0) goto LAB_140828af8;
                    uStack_111 = 1;
                    uVar33 = pdb_1400af680(&pauStack_7a8,&uStack_5c0);
                    bVar41 = (byte)(uVar33 >> 0x39);
                    auVar70 = ZEXT216(CONCAT11(bVar41,bVar41));
                    auVar70 = pshuflw(auVar70,auVar70,0);
                    lVar29 = 0;
                    goto LAB_1408289c8;
                  }
                  uVar58 = (ushort)(uVar134 - 1) & (ushort)uVar134;
                  uVar134 = CONCAT22((short)(uVar134 - 1 >> 0x10),uVar58);
                }
                auVar76[0] = -(auVar137[0] == -1);
                auVar76[1] = -(auVar137[1] == -1);
                auVar76[2] = -(auVar137[2] == -1);
                auVar76[3] = -(auVar137[3] == -1);
                auVar76[4] = -(auVar137[4] == -1);
                auVar76[5] = -(auVar137[5] == -1);
                auVar76[6] = -(auVar137[6] == -1);
                auVar76[7] = -(auVar137[7] == -1);
                auVar76[8] = -(auVar137[8] == -1);
                auVar76[9] = -(auVar137[9] == -1);
                auVar76[10] = -(auVar137[10] == -1);
                auVar76[0xb] = -(auVar137[0xb] == -1);
                auVar76[0xc] = -(auVar137[0xc] == -1);
                auVar76[0xd] = -(auVar137[0xd] == -1);
                auVar76[0xe] = -(auVar137[0xe] == -1);
                auVar76[0xf] = -(auVar137[0xf] == -1);
                if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar76 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar76 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar76 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar76 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar76 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar76 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar76 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar76 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar76 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar76 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar76 >> 0x5f,0) & 1) != 0) || (SUB161(auVar76 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0') break;
                uVar33 = uVar33 + lVar52 + 0x10;
                lVar52 = lVar52 + 0x10;
              }
            }
LAB_140828a50:
            if (CONCAT44(uStack_8d0._4_4_,(int)uStack_8d0) != 0) {
              pub_1406abac0(uStack_8c8,CONCAT44(uStack_8d0._4_4_,(int)uStack_8d0) * 0xc,4);
            }
            if (uStack_8b8 != (byte *)0x0) {
              pub_1406abac0((byte *)CONCAT44(uStack_8ac,uStack_8b0),(longlong)uStack_8b8 << 2,4);
            }
            if (pauStack_898 != (undefined1 (*) [16])0x0) {
              pub_1406abac0(pbStack_890,(longlong)pauStack_898 << 3,4);
            }
            if (auStack_888._8_8_ != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_874,iStack_878),auStack_888._8_8_ << 2,4);
            }
          }
          uStack_107 = 1;
          uStack_108 = 1;
          uStack_109 = 1;
          uStack_10a = 1;
          pdb_1413fe7a0(&pauStack_528);
          param_2 = pauStack_550;
          pauVar42 = pauStack_558;
          pauStack_528 = pauStack_560;
          pauStack_520 = pauStack_558;
          pauStack_518 = pauStack_550;
          uStack_2d8 = &bStack_129;
          if ((undefined1 (*) [16])0x1 < pauStack_550) {
            if (pauStack_550 < (undefined1 (*) [16])0x15) {
              pauVar39 = pauStack_558 + (longlong)pauStack_550 * 0xe;
              pauVar62 = pauStack_558 + 0xe;
              do {
                uStack_12a = 1;
                pauVar64 = pauVar62;
                pdb_14145b1e0(pauVar42);
                pauVar62 = pauVar62 + 0xe;
              } while (pauVar62 != pauVar39);
            }
            else {
LAB_14082edd0:
              uStack_12a = 1;
              pauVar64 = param_2;
              pdb_1414662a0();
            }
          }
          pauStack_388 = (undefined1 (*) [16])0x0;
          pauStack_380 = (undefined1 (*) [16])0x8;
          auVar70._8_8_ = 0;
          auVar70._0_8_ = auStack_378._8_8_;
          auStack_378 = auVar70 << 0x40;
          uStack_12c = 1;
          plVar31 = (longlong *)pdb_140f3bda0();
          if ((char)plVar31[2] == '\x01') {
            pauStack_1c8 = (undefined1 (*) [16])*plVar31;
            pauVar64 = (undefined1 (*) [16])plVar31[1];
          }
          else {
            uStack_12c = 1;
            pauStack_1c8 = (undefined1 (*) [16])pdb_140f4fd10();
            *plVar31 = (longlong)pauStack_1c8;
            plVar31[1] = (longlong)pauVar64;
            *(undefined1 *)(plVar31 + 2) = 1;
          }
          *plVar31 = (longlong)*pauStack_1c8 + 1;
          auStack_1d8._4_4_ = unaff_XMM10_Db;
          auStack_1d8._0_4_ = unaff_XMM10_Da;
          auStack_1d8._8_4_ = unaff_XMM10_Dc;
          auStack_1d8._12_4_ = unaff_XMM10_Dd;
          uStack_12b = 1;
          auStack_1e8 = unaff_XMM11;
          pauStack_1c0 = pauVar64;
          plVar31 = (longlong *)pdb_140f3bda0();
          if ((char)plVar31[2] == '\x01') {
            ppauStack_648 = (undefined1 (**) [16])*plVar31;
            pauVar64 = (undefined1 (*) [16])plVar31[1];
          }
          else {
            uStack_12b = 1;
            ppauStack_648 = (undefined1 (**) [16])pdb_140f4fd10();
            *plVar31 = (longlong)ppauStack_648;
            plVar31[1] = (longlong)pauVar64;
            *(undefined1 *)(plVar31 + 2) = 1;
          }
          *plVar31 = (longlong)ppauStack_648 + 1;
          uStack_338._0_4_ = SUB84(pauStack_528,0);
          uStack_338._4_4_ = (uint)((ulonglong)pauStack_528 >> 0x20);
          pauVar62 = pauVar42 + (longlong)param_2 * 0xe;
          auStack_668 = unaff_XMM11;
          pauStack_640 = pauVar64;
          pauStack_348 = pauVar42;
          pauStack_340 = pauVar42;
          uStack_658 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
          uStack_650 = (longlong *)CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
LAB_14082a934:
          while (pauVar64 = pauStack_340, uStack_330 = pauVar62, pauStack_340 != pauVar62) {
            pauVar64 = pauStack_340 + 0xe;
            lVar29 = *(longlong *)*pauStack_340;
            pfVar55 = (float *)*pauStack_340;
            pauStack_340 = pauVar64;
            pub_142e32760(&uStack_8d0,pfVar55 + 2,0xd8);
            if (SBORROW8(0,lVar29)) break;
            auStack_4f8 = (undefined1  [8])lVar29;
            pub_142e32760(auStack_4f8 + 8,&uStack_8d0);
            iVar131 = iStack_484;
            if (cStack_420 == '\0') {
              if (iStack_488 == 0) {
                pbVar34 = uStack_2d8;
                if (uStack_650 != (longlong *)0x0) {
                  uStack_f8 = 1;
                  uStack_f9 = 1;
                  uVar30 = pdb_1400af680(&ppauStack_648,auStack_440);
                  bVar41 = (byte)(uVar30 >> 0x39);
                  auVar70 = ZEXT216(CONCAT11(bVar41,bVar41));
                  auVar70 = pshuflw(auVar70,auVar70,0);
                  lVar29 = 0;
                  while( true ) {
                    uVar30 = uVar30 & auStack_668._8_8_;
                    pcVar36 = (char *)(auStack_668._0_8_ + uVar30);
                    auVar137[0] = -(*pcVar36 == auVar70[0]);
                    auVar137[1] = -(pcVar36[1] == auVar70[1]);
                    auVar137[2] = -(pcVar36[2] == auVar70[2]);
                    auVar137[3] = -(pcVar36[3] == auVar70[3]);
                    auVar137[4] = -(pcVar36[4] == auVar70[4]);
                    auVar137[5] = -(pcVar36[5] == auVar70[5]);
                    auVar137[6] = -(pcVar36[6] == auVar70[6]);
                    auVar137[7] = -(pcVar36[7] == auVar70[7]);
                    auVar137[8] = -(pcVar36[8] == auVar70[0]);
                    auVar137[9] = -(pcVar36[9] == auVar70[1]);
                    auVar137[10] = -(pcVar36[10] == auVar70[2]);
                    auVar137[0xb] = -(pcVar36[0xb] == auVar70[3]);
                    auVar137[0xc] = -(pcVar36[0xc] == auVar70[4]);
                    auVar137[0xd] = -(pcVar36[0xd] == auVar70[5]);
                    auVar137[0xe] = -(pcVar36[0xe] == auVar70[6]);
                    auVar137[0xf] = -(pcVar36[0xf] == auVar70[7]);
                    uVar58 = (ushort)(SUB161(auVar137 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar137 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar137 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar137 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar137 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar137 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar137 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar137 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar137 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar137 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar137 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar137 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar137 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar137 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar137 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar137[0xf] >> 7) << 0xf;
                    uVar26 = (uint)uVar58;
                    while (pbVar34 = uStack_2d8, uVar58 != 0) {
                      uVar27 = 0;
                      for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000
                          ) {
                        uVar27 = uVar27 + 1;
                      }
                      uVar33 = uVar27 + uVar30 & auStack_668._8_8_;
                      lVar52 = auStack_668._0_8_ + uVar33 * -0x20;
                      auVar164._0_4_ =
                           -(uint)((int)*(undefined8 *)(lVar52 + -0x20) == (int)auStack_440[0]);
                      iVar131 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar52 + -0x20) >> 0x20) ==
                                       (int)((ulonglong)auStack_440[0] >> 0x20));
                      auVar164._4_4_ = auVar164._0_4_;
                      auVar164._8_4_ = iVar131;
                      auVar164._12_4_ = iVar131;
                      iVar131 = movmskpd((int)uVar33 * 0x20,auVar164);
                      if (iVar131 == 3) {
                        lVar29 = 0;
                        goto LAB_14082aba0;
                      }
                      uVar58 = (ushort)(uVar26 - 1) & (ushort)uVar26;
                      uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar58);
                    }
                    auVar113[0] = -(*pcVar36 == -1);
                    auVar113[1] = -(pcVar36[1] == -1);
                    auVar113[2] = -(pcVar36[2] == -1);
                    auVar113[3] = -(pcVar36[3] == -1);
                    auVar113[4] = -(pcVar36[4] == -1);
                    auVar113[5] = -(pcVar36[5] == -1);
                    auVar113[6] = -(pcVar36[6] == -1);
                    auVar113[7] = -(pcVar36[7] == -1);
                    auVar113[8] = -(pcVar36[8] == -1);
                    auVar113[9] = -(pcVar36[9] == -1);
                    auVar113[10] = -(pcVar36[10] == -1);
                    auVar113[0xb] = -(pcVar36[0xb] == -1);
                    auVar113[0xc] = -(pcVar36[0xc] == -1);
                    auVar113[0xd] = -(pcVar36[0xd] == -1);
                    auVar113[0xe] = -(pcVar36[0xe] == -1);
                    auVar113[0xf] = -(pcVar36[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar113 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar113 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar113 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar113 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar113 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar113 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar113 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar113 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar113 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar113 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar113 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar113 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar113 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar113 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar113 >> 0x77,0) & 1) != 0) || auVar113[0xf] < '\0') break;
                    uVar30 = uVar30 + lVar29 + 0x10;
                    lVar29 = lVar29 + 0x10;
                  }
                }
              }
              else {
                if (iStack_488 == 2) goto LAB_14082afb0;
                uStack_2d8._0_4_ = (float)iStack_484;
                pbVar34 = (byte *)CONCAT44(uStack_2d8._4_4_,iStack_484);
                if (auStack_1d8._8_8_ != 0) {
                  uVar30 = pdb_1400aede0(&pauStack_1c8,&uStack_2d8);
                  bVar41 = (byte)(uVar30 >> 0x39);
                  auVar70 = ZEXT216(CONCAT11(bVar41,bVar41));
                  auVar70 = pshuflw(auVar70,auVar70,0);
                  lVar29 = 0;
                  while( true ) {
                    uVar30 = uVar30 & auStack_1e8._8_8_;
                    pcVar36 = (char *)(auStack_1e8._0_8_ + uVar30);
                    auVar112[0] = -(*pcVar36 == auVar70[0]);
                    auVar112[1] = -(pcVar36[1] == auVar70[1]);
                    auVar112[2] = -(pcVar36[2] == auVar70[2]);
                    auVar112[3] = -(pcVar36[3] == auVar70[3]);
                    auVar112[4] = -(pcVar36[4] == auVar70[4]);
                    auVar112[5] = -(pcVar36[5] == auVar70[5]);
                    auVar112[6] = -(pcVar36[6] == auVar70[6]);
                    auVar112[7] = -(pcVar36[7] == auVar70[7]);
                    auVar112[8] = -(pcVar36[8] == auVar70[0]);
                    auVar112[9] = -(pcVar36[9] == auVar70[1]);
                    auVar112[10] = -(pcVar36[10] == auVar70[2]);
                    auVar112[0xb] = -(pcVar36[0xb] == auVar70[3]);
                    auVar112[0xc] = -(pcVar36[0xc] == auVar70[4]);
                    auVar112[0xd] = -(pcVar36[0xd] == auVar70[5]);
                    auVar112[0xe] = -(pcVar36[0xe] == auVar70[6]);
                    auVar112[0xf] = -(pcVar36[0xf] == auVar70[7]);
                    uVar58 = (ushort)(SUB161(auVar112 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar112 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar112 >> 0x17,0) & 1) << 2 |
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
                             (ushort)(SUB161(auVar112 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar112[0xf] >> 7) << 0xf;
                    uVar26 = (uint)uVar58;
                    while (uVar58 != 0) {
                      uVar27 = 0;
                      for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000
                          ) {
                        uVar27 = uVar27 + 1;
                      }
                      lVar52 = auStack_1e8._0_8_ + (uVar27 + uVar30 & auStack_1e8._8_8_) * -0x10;
                      if (iVar131 == *(int *)(lVar52 + -0x10)) {
                        uVar30 = *(ulonglong *)(lVar52 + -8);
                        goto LAB_14082ac02;
                      }
                      uVar58 = (ushort)(uVar26 - 1) & (ushort)uVar26;
                      uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar58);
                    }
                    auVar83[0] = -(*pcVar36 == -1);
                    auVar83[1] = -(pcVar36[1] == -1);
                    auVar83[2] = -(pcVar36[2] == -1);
                    auVar83[3] = -(pcVar36[3] == -1);
                    auVar83[4] = -(pcVar36[4] == -1);
                    auVar83[5] = -(pcVar36[5] == -1);
                    auVar83[6] = -(pcVar36[6] == -1);
                    auVar83[7] = -(pcVar36[7] == -1);
                    auVar83[8] = -(pcVar36[8] == -1);
                    auVar83[9] = -(pcVar36[9] == -1);
                    auVar83[10] = -(pcVar36[10] == -1);
                    auVar83[0xb] = -(pcVar36[0xb] == -1);
                    auVar83[0xc] = -(pcVar36[0xc] == -1);
                    auVar83[0xd] = -(pcVar36[0xd] == -1);
                    auVar83[0xe] = -(pcVar36[0xe] == -1);
                    auVar83[0xf] = -(pcVar36[0xf] == -1);
                    pbVar34 = uStack_2d8;
                    if ((((((((((((((((SUB161(auVar83 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar83 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar83 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar83 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar83 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar83 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar83 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar83 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar83 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar83 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar83 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar83 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar83 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar83 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar83 >> 0x77,0) & 1) != 0) || auVar83[0xf] < '\0') break;
                    uVar30 = uVar30 + lVar29 + 0x10;
                    lVar29 = lVar29 + 0x10;
                  }
                }
              }
LAB_14082ad70:
              uStack_2d8 = pbVar34;
              uVar48 = auStack_440[0];
              if (cStack_420 == '\0') {
                uVar5 = auStack_378._0_8_;
                if (iStack_488 == 0) {
                  uStack_2d8._0_4_ = (float)auStack_440[0];
                  iVar131 = (int)(float)uStack_2d8;
                  uStack_2d8._4_4_ = (float)((ulonglong)auStack_440[0] >> 0x20);
                  iVar61 = (int)uStack_2d8._4_4_;
                  uStack_f8 = 1;
                  uStack_f9 = 1;
                  uVar33 = pdb_1400af680(&ppauStack_648,&uStack_2d8);
                  bVar41 = (byte)(uVar33 >> 0x38);
                  bVar68 = bVar41 >> 1;
                  auVar70 = ZEXT216(CONCAT11(bVar68,bVar68));
                  auVar70 = pshuflw(auVar70,auVar70,0);
                  lVar29 = 0;
                  uVar30 = uVar33;
                  while( true ) {
                    uVar30 = uVar30 & auStack_668._8_8_;
                    auVar137 = *(undefined1 (*) [16])((undefined1 *)auStack_668._0_8_ + uVar30);
                    auVar114[0] = -(auVar137[0] == auVar70[0]);
                    auVar114[1] = -(auVar137[1] == auVar70[1]);
                    auVar114[2] = -(auVar137[2] == auVar70[2]);
                    auVar114[3] = -(auVar137[3] == auVar70[3]);
                    auVar114[4] = -(auVar137[4] == auVar70[4]);
                    auVar114[5] = -(auVar137[5] == auVar70[5]);
                    auVar114[6] = -(auVar137[6] == auVar70[6]);
                    auVar114[7] = -(auVar137[7] == auVar70[7]);
                    auVar114[8] = -(auVar137[8] == auVar70[0]);
                    auVar114[9] = -(auVar137[9] == auVar70[1]);
                    auVar114[10] = -(auVar137[10] == auVar70[2]);
                    auVar114[0xb] = -(auVar137[0xb] == auVar70[3]);
                    auVar114[0xc] = -(auVar137[0xc] == auVar70[4]);
                    auVar114[0xd] = -(auVar137[0xd] == auVar70[5]);
                    auVar114[0xe] = -(auVar137[0xe] == auVar70[6]);
                    auVar114[0xf] = -(auVar137[0xf] == auVar70[7]);
                    uVar58 = (ushort)(SUB161(auVar114 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar114 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar114 >> 0x17,0) & 1) << 2 |
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
                             (ushort)(SUB161(auVar114 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar114[0xf] >> 7) << 0xf;
                    uVar26 = (uint)uVar58;
                    while (uVar58 != 0) {
                      uVar27 = 0;
                      for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000
                          ) {
                        uVar27 = uVar27 + 1;
                      }
                      pauVar64 = (undefined1 (*) [16])
                                 (auStack_668._0_8_ +
                                 (uVar27 + uVar30 & auStack_668._8_8_) * -2 * 0x10);
                      if ((*(int *)pauVar64[-2] == iVar131) &&
                         (*(int *)(pauVar64[-2] + 4) == iVar61)) goto LAB_14082af71;
                      uVar58 = (ushort)(uVar26 - 1) & (ushort)uVar26;
                      uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar58);
                    }
                    auVar84[0] = -(auVar137[0] == -1);
                    auVar84[1] = -(auVar137[1] == -1);
                    auVar84[2] = -(auVar137[2] == -1);
                    auVar84[3] = -(auVar137[3] == -1);
                    auVar84[4] = -(auVar137[4] == -1);
                    auVar84[5] = -(auVar137[5] == -1);
                    auVar84[6] = -(auVar137[6] == -1);
                    auVar84[7] = -(auVar137[7] == -1);
                    auVar84[8] = -(auVar137[8] == -1);
                    auVar84[9] = -(auVar137[9] == -1);
                    auVar84[10] = -(auVar137[10] == -1);
                    auVar84[0xb] = -(auVar137[0xb] == -1);
                    auVar84[0xc] = -(auVar137[0xc] == -1);
                    auVar84[0xd] = -(auVar137[0xd] == -1);
                    auVar84[0xe] = -(auVar137[0xe] == -1);
                    auVar84[0xf] = -(auVar137[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar84 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar84 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar84 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar84 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar84 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar84 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar84 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar84 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar84 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar84 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar84 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar84 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar84 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar84 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar84 >> 0x77,0) & 1) != 0) || auVar84[0xf] < '\0') break;
                    uVar30 = uVar30 + lVar29 + 0x10;
                    lVar29 = lVar29 + 0x10;
                  }
                  if (uStack_658 == 0) {
                    uStack_f8 = 1;
                    uStack_f9 = 1;
                    pdb_142dda8a0(auStack_668,1,&ppauStack_648,CONCAT71((int7)(uVar30 >> 8),1));
                  }
                  uVar33 = uVar33 & auStack_668._8_8_;
                  auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_668._0_8_ + uVar33)
                  ;
                  uVar58 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar70[0xf] >> 7) << 0xf;
                  uVar26 = (uint)uVar58;
                  if (uVar58 == 0) {
                    lVar29 = 0x10;
                    do {
                      uVar33 = uVar33 + lVar29 & auStack_668._8_8_;
                      auVar70 = *(undefined1 (*) [16])
                                 (*(undefined1 (*) [16])auStack_668._0_8_ + uVar33);
                      lVar29 = lVar29 + 0x10;
                      uVar26 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                             (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
                    } while (uVar26 == 0);
                  }
                  uVar27 = 0;
                  for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar30 = uVar27 + uVar33 & auStack_668._8_8_;
                  bVar68 = (*(undefined1 (*) [16])auStack_668._0_8_)[uVar30];
                  if (-1 < (char)bVar68) {
                    auVar70 = *(undefined1 (*) [16])auStack_668._0_8_;
                    uVar26 = 0;
                    for (uVar27 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
                        (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
                      uVar26 = uVar26 + 1;
                    }
                    uVar30 = (ulonglong)uVar26;
                    bVar68 = (*(undefined1 (*) [16])auStack_668._0_8_)[uVar30];
                  }
                  bVar41 = bVar41 >> 1;
                  (*(undefined1 (*) [16])auStack_668._0_8_)[uVar30] = bVar41;
                  (*(undefined1 (*) [16])(auStack_668._0_8_ + 0x10))
                  [uVar30 - 0x10 & auStack_668._8_8_] = bVar41;
                  pauVar64 = (undefined1 (*) [16])(auStack_668._0_8_ + uVar30 * -2 * 0x10);
                  *(undefined8 *)
                   *(undefined1 (*) [16])(auStack_668._0_8_ + (uVar30 * -2 + -2) * 0x10) = uVar48;
                  *(undefined8 *)(pauVar64[-2] + 8) = 0;
                  *(undefined8 *)pauVar64[-1] = 8;
                  *(undefined8 *)(pauVar64[-1] + 8) = 0;
                  auVar85._8_4_ = unaff_XMM13_Dc;
                  auVar85._0_8_ = (ulonglong)bVar68 & 0xffffffffffffff01;
                  auVar85._12_4_ = unaff_XMM13_Dd;
                  uStack_658 = uStack_658 - ((ulonglong)bVar68 & 0xffffffffffffff01);
                  uStack_650 = (longlong *)((longlong)uStack_650 - auVar85._8_8_);
LAB_14082af71:
                  lVar29 = *(longlong *)(pauVar64[-1] + 8);
                  if (lVar29 == *(longlong *)(pauVar64[-2] + 8)) {
                    uStack_f8 = 1;
                    uStack_f9 = 1;
                    pdb_142d896b0(pauVar64[-2] + 8);
                  }
                  *(undefined8 *)(*(longlong *)pauVar64[-1] + lVar29 * 8) = uVar5;
                  *(longlong *)(pauVar64[-1] + 8) = lVar29 + 1;
                }
                else if (iStack_488 != 2) {
                  uStack_f8 = 1;
                  uStack_f9 = 1;
                  pdb_141406f50(auStack_1e8,iStack_484,auStack_378._0_8_);
                }
              }
            }
LAB_14082afb0:
            pub_142e32760(&uStack_2d8,auStack_4f8,0xe0);
            uVar48 = auStack_378._0_8_;
            if ((undefined1 (*) [16])auStack_378._0_8_ == pauStack_388) {
              pdb_142d8da90(&pauStack_388);
            }
            pub_142e32760(pauStack_380 + uVar48 * 0xe,&uStack_2d8,0xe0);
            auStack_378._0_8_ = (longlong)(float *)uVar48 + 1;
            pauVar62 = uStack_330;
          }
          auStack_148._0_8_ =
               ((ulonglong)((longlong)pauVar62 - (longlong)pauVar64) >> 5) * 0x6db6db6db6db6db7;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = auStack_128._8_8_;
          auStack_128 = auVar19 << 0x40;
          auStack_168._0_8_ = pauVar64;
          while( true ) {
            if (auStack_148._0_8_ == auStack_128._0_8_) break;
            auStack_128._0_8_ = auStack_128._0_8_ + 1;
            pdb_1413fdc30(pauVar64);
            pauVar64 = pauVar64 + 0xe;
          }
          plVar31 = uStack_650;
          if (CONCAT44(uStack_338._4_4_,(undefined4)uStack_338) != 0) {
            pub_1406abac0((byte *)pauStack_348,
                          CONCAT44(uStack_338._4_4_,(undefined4)uStack_338) * 0xe0,8);
            plVar31 = uStack_650;
          }
          pauStack_728 = pauStack_388;
          pauStack_530 = pauStack_380;
          uVar5 = auStack_378._0_8_;
          uVar48 = auStack_668._8_8_;
          uStack_650 = plVar31;
          if (auStack_668._8_8_ != 0) {
            if (plVar31 != (longlong *)0x0) {
              auVar70 = *(undefined1 (*) [16])auStack_668._0_8_;
              pauVar64 = (undefined1 (*) [16])(auStack_668._0_8_ + 0x10);
              uVar26 = ~(uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
              pauVar42 = (undefined1 (*) [16])auStack_668._0_8_;
              do {
                if ((short)uVar26 == 0) {
                  do {
                    auVar70 = *pauVar64;
                    pauVar42 = pauVar42 + -0x20;
                    pauVar64 = pauVar64 + 1;
                    uVar26 = (ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar26 == 0);
                }
                iVar131 = 0;
                for (uVar27 = uVar26; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
                  iVar131 = iVar131 + 1;
                }
                lVar29 = *(longlong *)
                          ((longlong)pauVar42 + (-0x18 - (ulonglong)(uint)(iVar131 << 5)));
                if (lVar29 != 0) {
                  pub_1406abac0(*(byte **)((longlong)pauVar42 +
                                          (-0x10 - (ulonglong)(uint)(iVar131 << 5))),lVar29 << 3,8);
                }
                uVar26 = uVar26 - 1 & uVar26;
                plVar31 = (longlong *)((longlong)plVar31 + -1);
              } while (plVar31 != (longlong *)0x0);
            }
            lVar29 = uVar48 * 0x20 + 0x20;
            uVar30 = uVar48 + lVar29 + 0x11;
            if (uVar30 != 0) {
              pub_1406abac0((byte *)(auStack_668._0_8_ - lVar29),uVar30,0x10);
            }
          }
          pauVar64 = (undefined1 (*) [16])0x0;
          if (auStack_1e8._8_8_ != 0) {
            lVar29 = auStack_1e8._8_8_ * 0x10 + 0x10;
            pauVar64 = (undefined1 (*) [16])(auStack_1e8._8_8_ + lVar29 + 0x11);
            if (pauVar64 != (undefined1 (*) [16])0x0) {
              pub_1406abac0((byte *)(auStack_1e8._0_8_ - lVar29),(ulonglong)pauVar64,0x10);
            }
          }
          fVar99 = _DAT_142e382c0;
          auVar137 = _DAT_142e378b0;
          auVar70 = _DAT_142e378a0;
          lStack_178 = *(longlong *)*param_8;
          lStack_780 = uVar5;
          auStack_148._0_8_ = pauStack_530 + uVar5 * 0xe;
          pauStack_180 = pauStack_530;
          do {
            pauVar42 = pauStack_180;
            while( true ) {
              if (pauVar42 == (undefined1 (*) [16])auStack_148._0_8_) {
                uStack_f1 = 1;
                uStack_f2 = 1;
                uStack_f3 = 1;
                uStack_f4 = 1;
                plVar31 = (longlong *)pdb_140f3bda0();
                if ((char)plVar31[2] == '\x01') {
                  pauStack_1c8 = (undefined1 (*) [16])*plVar31;
                  pauVar64 = (undefined1 (*) [16])plVar31[1];
                }
                else {
                  uStack_f1 = 1;
                  uStack_f2 = 1;
                  uStack_f3 = 1;
                  uStack_f4 = 1;
                  pauStack_1c8 = (undefined1 (*) [16])pdb_140f4fd10();
                  *plVar31 = (longlong)pauStack_1c8;
                  plVar31[1] = (longlong)pauVar64;
                  *(undefined1 *)(plVar31 + 2) = 1;
                }
                *plVar31 = (longlong)*pauStack_1c8 + 1;
                fVar99 = _DAT_142e36f50;
                pauStack_388 = pauStack_530;
                pauStack_380 = pauStack_530;
                auStack_378._8_8_ = auStack_148._0_8_;
                auStack_378._0_8_ = pauStack_728;
                pauVar42 = (undefined1 (*) [16])auStack_148._0_8_;
                auStack_1e8 = unaff_XMM11;
                pauStack_1c0 = pauVar64;
                goto LAB_14082c07e;
              }
              if ((*(char *)((longlong)pauVar42[0xd] + 8) == '\0') &&
                 (((uint)*(float *)pauVar42[7] & 1) != 0)) break;
              pauVar42 = pauVar42 + 0xe;
            }
            auStack_128._0_4_ = *(float *)((longlong)pauVar42[7] + 4);
            uStack_f1 = 1;
            uStack_f2 = 1;
            uStack_f3 = 1;
            uStack_f4 = 1;
            lVar29 = pdb_140a61160(lStack_178);
            uStack_2d8._0_4_ = (float)auStack_128._0_4_;
            uVar30 = *(ulonglong *)(lVar29 + 0x10);
            auStack_168._0_8_ = 4;
            auStack_1a8._0_8_ = lVar29;
            if (uVar30 == 0) {
LAB_14082b3fd:
              puVar46 = (uint *)0x4;
            }
            else if (uVar30 == 1) {
              lVar52 = *(longlong *)(lVar29 + 8);
              puVar46 = (uint *)0x4;
              if (auStack_128._0_4_ == *(int *)(lVar52 + 0x20)) {
                uVar33 = 0;
LAB_14082b3e2:
                puVar46 = *(uint **)(lVar52 + 8 + uVar33 * 0x28);
                auStack_168._0_8_ = puVar46 + *(longlong *)(lVar52 + 0x10 + uVar33 * 0x28) * 2;
              }
            }
            else {
              uVar33 = pdb_1400aede0(lVar29 + 0x38,&uStack_2d8);
              uStack_f1 = 1;
              uStack_f2 = 1;
              uStack_f3 = 1;
              uStack_f4 = 1;
              uVar60 = pdb_141473860(lVar29,uVar33,&uStack_2d8);
              if ((uVar60 & 1) == 0) goto LAB_14082b3fd;
              if (uVar30 <= uVar33) {
                uStack_f1 = 1;
                uStack_f2 = 1;
                uStack_f3 = 1;
                uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar33,uVar30,&UNK_14330bc30);
              }
              lVar52 = *(longlong *)(auStack_1a8._0_8_ + 8);
              puVar46 = (uint *)0x4;
              if (lVar52 != 0) goto LAB_14082b3e2;
            }
            pauStack_180 = pauVar42 + 0xe;
            pauStack_188 = (undefined1 (*) [16])(lVar29 + 0x48);
            pauStack_398 = pauVar42 + 5;
            pfStack_198 = (float *)(lVar29 + 0x80);
            ppauVar47 = uStack_4e0;
LAB_14082bbd0:
            uStack_4e0 = ppauVar47;
            if (puVar46 != (uint *)auStack_168._0_8_) {
              uVar26 = *puVar46;
              uStack_2d8._0_4_ = (float)uVar26;
              if ((uint)auStack_128._0_4_ < uVar26) {
                uStack_2d8._0_4_ = (float)auStack_128._0_4_;
              }
              uStack_2d8._4_4_ = (float)uVar26;
              if (uVar26 < (uint)auStack_128._0_4_) {
                uStack_2d8._4_4_ = (float)auStack_128._0_4_;
              }
              uVar30 = *(ulonglong *)(auStack_1a8._0_8_ + 0x58);
              if (uVar30 == 1) {
                if (((float)uStack_2d8 !=
                     (float)*(uint *)(*(longlong *)(auStack_1a8._0_8_ + 0x50) + 8)) ||
                   (uStack_2d8._4_4_ !=
                    (float)*(uint *)(*(longlong *)(auStack_1a8._0_8_ + 0x50) + 0xc)))
                goto LAB_14082eb43;
              }
              else {
                if (uVar30 == 0) {
LAB_14082eb43:
                  uStack_f1 = 1;
                  uStack_f2 = 1;
                  uStack_f3 = 1;
                  uStack_f4 = 1;
                  uStack_4e0 = ppauVar47;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_14330bb30,0x28,&UNK_14330bbb8);
                }
                uStack_f1 = 1;
                uStack_f2 = 1;
                uStack_f3 = 1;
                uStack_f4 = 1;
                uVar33 = pdb_1400af680(pfStack_198,&uStack_2d8);
                uStack_f1 = 1;
                uStack_f2 = 1;
                uStack_f3 = 1;
                uStack_f4 = 1;
                uVar60 = pdb_141473930(pauStack_188,uVar33,&uStack_2d8);
                ppauVar47 = uStack_4e0;
                if ((uVar60 & 1) == 0) goto LAB_14082eb43;
                if (uVar30 <= uVar33) {
                  uStack_f1 = 1;
                  uStack_f2 = 1;
                  uStack_f3 = 1;
                  uStack_f4 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar33,uVar30,&UNK_14330bc30);
                }
              }
              uStack_f1 = 1;
              uStack_f2 = 1;
              uStack_f3 = 1;
              uStack_f4 = 1;
              uStack_4e0 = ppauVar47;
              uVar27 = pdb_140a61520(auStack_128._0_4_);
              puVar46 = puVar46 + 2;
              lVar52 = *(longlong *)pauVar42[6] << 5;
              lVar29 = *(longlong *)((longlong)pauVar42[5] + 8);
              do {
                lVar59 = lVar29;
                if (lVar52 == 0) {
                  uStack_f1 = 1;
                  uStack_f2 = 1;
                  uStack_f3 = 1;
                  uStack_f4 = 1;
                  plVar31 = (longlong *)pdb_140c016e0(uStack_1f0);
                  uStack_f1 = 1;
                  uStack_f2 = 1;
                  uStack_f3 = 1;
                  uStack_f4 = 1;
                  lVar29 = pdb_140c017b0(uVar27,uVar26);
                  ppauVar47 = uStack_4e0;
                  if (plVar31[3] != 0) {
                    auVar164 = *(undefined1 (*) [16])(plVar31 + 4);
                    uStack_2b8._0_4_ = auVar164._0_4_;
                    uStack_2b8._4_4_ = auVar164._4_4_;
                    uStack_2b0._0_4_ = auVar164._8_4_;
                    uStack_2b0._4_4_ = auVar164._12_4_;
                    auVar87._0_8_ = auVar164._0_8_;
                    auVar87._8_4_ = (float)uStack_2b8;
                    auVar87._12_4_ = uStack_2b8._4_4_;
                    auVar87 = auVar87 ^ auVar70;
                    uStack_2d8._0_4_ = auVar87._0_4_;
                    uStack_2d8._4_4_ = auVar87._4_4_;
                    uStack_2d0._0_4_ = auVar87._8_4_;
                    uStack_2d0._4_4_ = auVar87._12_4_;
                    auVar88._0_8_ = auVar164._8_8_;
                    auVar88._8_4_ = (float)uStack_2b0;
                    auVar88._12_4_ = uStack_2b0._4_4_;
                    auVar88 = auVar88 ^ auVar137;
                    uStack_2c8._0_4_ = auVar88._0_4_;
                    uStack_2c8._4_4_ = auVar88._4_4_;
                    uStack_2c0 = auVar88._8_2_;
                    uStack_2be = auVar88._10_2_;
                    iStack_2bc = auVar88._12_4_;
                    uStack_2a8._0_4_ = 0.0;
                    uStack_2a8._4_4_ = 0.0;
                    uStack_2a0._0_4_ = 0.0;
                    uStack_2a0._4_4_ = 0;
                    pauStack_298 = (undefined1 (*) [16])0x0;
                    auStack_4f8 = (undefined1  [8])lVar29;
                    pdb_1400b0640(&uStack_2d8,auStack_4f8,8);
                    uVar57 = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8) << 0x38 |
                             CONCAT44(uStack_2a0._4_4_,(float)uStack_2a0);
                    uVar30 = CONCAT44(iStack_2bc,CONCAT22(uStack_2be,uStack_2c0)) ^ uVar57;
                    uVar43 = CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8) +
                             CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8);
                    uVar60 = CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0) + uVar30;
                    uVar33 = (CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) << 0xd |
                             (ulonglong)(uStack_2c8._4_4_ >> 0x13)) ^ uVar43;
                    uVar30 = (uVar30 << 0x10 | uVar30 >> 0x30) ^ uVar60;
                    uVar60 = uVar60 + uVar33;
                    uVar43 = (uVar43 << 0x20 | uVar43 >> 0x20) + uVar30;
                    uVar33 = (uVar33 << 0x11 | uVar33 >> 0x2f) ^ uVar60;
                    uVar30 = (uVar30 << 0x15 | uVar30 >> 0x2b) ^ uVar43;
                    uVar43 = (uVar43 ^ uVar57) + uVar33;
                    uVar60 = ((uVar60 << 0x20 | uVar60 >> 0x20) ^ 0xff) + uVar30;
                    uVar33 = (uVar33 << 0xd | uVar33 >> 0x33) ^ uVar43;
                    uVar30 = (uVar30 << 0x10 | uVar30 >> 0x30) ^ uVar60;
                    uVar60 = uVar60 + uVar33;
                    uVar43 = (uVar43 << 0x20 | uVar43 >> 0x20) + uVar30;
                    uVar33 = (uVar33 << 0x11 | uVar33 >> 0x2f) ^ uVar60;
                    uVar30 = (uVar30 << 0x15 | uVar30 >> 0x2b) ^ uVar43;
                    uVar43 = uVar43 + uVar33;
                    uVar60 = (uVar60 << 0x20 | uVar60 >> 0x20) + uVar30;
                    uVar33 = (uVar33 << 0xd | uVar33 >> 0x33) ^ uVar43;
                    uVar30 = (uVar30 << 0x10 | uVar30 >> 0x30) ^ uVar60;
                    uVar60 = uVar60 + uVar33;
                    uVar43 = (uVar43 << 0x20 | uVar43 >> 0x20) + uVar30;
                    uVar33 = (uVar33 << 0x11 | uVar33 >> 0x2f) ^ uVar60;
                    uVar30 = (uVar30 << 0x15 | uVar30 >> 0x2b) ^ uVar43;
                    uVar60 = (uVar60 << 0x20 | uVar60 >> 0x20) + uVar30;
                    uVar33 = (uVar33 << 0xd | uVar33 >> 0x33) ^ uVar43 + uVar33;
                    uVar30 = (uVar30 << 0x10 | uVar30 >> 0x30) ^ uVar60;
                    uVar60 = uVar60 + uVar33;
                    uVar60 = (uVar60 << 0x20 | uVar60 >> 0x20) ^ (uVar33 << 0x11 | uVar33 >> 0x2f) ^
                             (uVar30 << 0x15 | uVar30 >> 0x2b) ^ uVar60;
                    lVar52 = *plVar31;
                    bVar41 = (byte)(uVar60 >> 0x39);
                    auVar164 = ZEXT216(CONCAT11(bVar41,bVar41));
                    auVar164 = pshuflw(auVar164,auVar164,0);
                    lVar59 = 0;
                    goto LAB_14082b440;
                  }
                  break;
                }
                lVar52 = lVar52 + -0x20;
                lVar29 = lVar59 + 0x20;
              } while ((*(uint *)(lVar59 + 0x18) != uVar27) ||
                      (ppauVar47 = uStack_4e0, *(uint *)(lVar59 + 0x1c) != uVar26));
              goto LAB_14082bbd0;
            }
            pauVar64 = *(undefined1 (**) [16])pauVar42[6];
            uStack_2d8 = &bStack_129;
            if ((undefined1 (*) [16])0x1 < pauVar64) {
              if (pauVar64 < (undefined1 (*) [16])0x15) {
                uStack_f1 = 1;
                uStack_f2 = 1;
                uStack_f3 = 1;
                uStack_f4 = 1;
                pdb_141460950(*(undefined8 *)((longlong)pauVar42[5] + 8),pauVar64,1,&uStack_2d8);
              }
              else {
                uStack_f1 = 1;
                uStack_f2 = 1;
                uStack_f3 = 1;
                uStack_f4 = 1;
                pdb_141466100(*(undefined8 *)((longlong)pauVar42[5] + 8),pauVar64,&uStack_2d8);
              }
            }
            uStack_f1 = 1;
            uStack_f2 = 1;
            uStack_f3 = 1;
            uStack_f4 = 1;
            pdb_1413e5f30(pauStack_398);
          } while( true );
        }
        uStack_10d = 1;
        uStack_10e = 1;
        uStack_10f = 1;
        uStack_110 = 1;
        pdb_142dc7890(&UNK_143307940);
LAB_14082eee9:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300a148);
  }
  goto LAB_14082e9c0;
  while( true ) {
    uVar30 = *(ulonglong *)(*(longlong *)(lVar52 + -0x10) + lVar29);
    if ((ulonglong)auStack_378._0_8_ <= uVar30) {
      uStack_f8 = 1;
      uStack_f9 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar30,auStack_378._0_8_,&UNK_14330bcf8);
    }
    fVar99 = *(float *)((longlong)pauStack_380[uVar30 * 0xe + 9] + 4) - fStack_464;
    fVar69 = *(float *)pauStack_380[uVar30 * 0xe + 9] - fStack_468;
    fVar98 = *(float *)((longlong)pauStack_380[uVar30 * 0xe + 9] + 8) - fStack_460;
    lVar29 = lVar29 + 8;
    if (fVar98 * fVar98 + fVar99 * fVar99 + fVar69 * fVar69 < unaff_XMM14_Da) break;
LAB_14082aba0:
    if (*(longlong *)(lVar52 + -8) << 3 == lVar29) goto LAB_14082ad70;
  }
LAB_14082ac02:
  pauVar64 = pauStack_380;
  puVar46 = puStack_498;
  pfVar55 = pfStack_4a0;
  if ((ulonglong)auStack_378._0_8_ <= uVar30) {
    uStack_f8 = 1;
    uStack_f9 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar30,auStack_378._0_8_,&UNK_143009f28);
  }
  fVar99 = *(float *)((longlong)pauStack_380[uVar30 * 0xe + 0xc] + 8);
  fVar69 = fStack_430;
  if (fVar99 <= fStack_430) {
    fVar69 = fVar99;
  }
  fVar99 = (float)(-(uint)NAN(fVar99) & (uint)fStack_430 | ~-(uint)NAN(fVar99) & (uint)fVar69);
  *(float *)((longlong)pauStack_380[uVar30 * 0xe + 0xc] + 8) = fVar99;
  if ((ulonglong)auStack_378._0_8_ <= uVar30) {
    uStack_f8 = 1;
    uStack_f9 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(fVar99,auStack_378._0_8_,&UNK_143009f40);
  }
  lVar52 = (longlong)puStack_498 * 0x20;
  pfVar44 = pfStack_4a0 + (longlong)puStack_498 * 8;
  uStack_2d8._0_4_ = SUB84(pfStack_4a0,0);
  uStack_2d8._4_4_ = (float)((ulonglong)pfStack_4a0 >> 0x20);
  iVar131 = (int)uStack_2d8._4_4_;
  uStack_2c8._0_4_ = SUB84(puStack_4a8,0);
  uStack_2c8._4_4_ = (uint)((ulonglong)puStack_4a8 >> 0x20);
  uStack_2c0 = (ushort)pfVar44;
  uStack_2be = (undefined2)((ulonglong)pfVar44 >> 0x10);
  iStack_2bc = (int)((ulonglong)pfVar44 >> 0x20);
  lVar29 = *(longlong *)pauStack_380[uVar30 * 0xe + 6];
  uStack_2d0._0_4_ = (float)uStack_2d8;
  uStack_2d0._4_4_ = (int)uStack_2d8._4_4_;
  if ((uint *)(*(longlong *)pauStack_380[uVar30 * 0xe + 5] - lVar29) < puStack_498) {
    in_stack_fffffffffffff5c8 = (undefined8 **)0x0;
    pdb_142d7f1b0(pauStack_380 + uVar30 * 0xe + 5,lVar29,puStack_498,8,0x20);
    lVar29 = *(longlong *)pauVar64[uVar30 * 0xe + 6];
  }
  else if (puStack_498 == (uint *)0x0) goto LAB_14082acda;
  pub_142e32760(lVar29 * 0x20 + *(longlong *)((longlong)pauVar64[uVar30 * 0xe + 5] + 8),pfVar55,
                lVar52);
LAB_14082acda:
  *(longlong *)pauVar64[uVar30 * 0xe + 6] = lVar29 + (longlong)puVar46;
  uStack_2c0 = (ushort)pfVar55;
  uStack_2be = (undefined2)((ulonglong)pfVar55 >> 0x10);
  uStack_f8 = 0;
  uStack_f9 = 1;
  iStack_2bc = iVar131;
  pdb_1413ff0c0(&uStack_2d8);
  if (auStack_4f8 != (undefined1  [8])0x0) {
    pub_1406abac0((byte *)pauStack_4f0,(longlong)auStack_4f8 * 0x2c,4);
  }
  pbVar34 = (byte *)CONCAT44(fStack_4d4,fStack_4d8);
  lVar29 = CONCAT44(uStack_4cc,fStack_4d0);
  if (lVar29 != 0) {
    pbVar35 = pbVar34 + 8;
    do {
      if (*(longlong *)(pbVar35 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar35,*(longlong *)(pbVar35 + -8) * 0x30,4);
      }
      pbVar35 = pbVar35 + 0x38;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  if (uStack_4e0 != (undefined1 (**) [16])0x0) {
    pub_1406abac0(pbVar34,(longlong)uStack_4e0 * 0x38,8);
  }
  pauVar62 = uStack_330;
  if (CONCAT44(fStack_4c4,fStack_4c8) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_4bc,uStack_4c0),CONCAT44(fStack_4c4,fStack_4c8) * 0xc,4);
    pauVar62 = uStack_330;
  }
  goto LAB_14082a934;
LAB_14082c07e:
  pauVar64 = pauStack_380;
  if (pauStack_380 == pauVar42) goto LAB_14082cce4;
  pauVar64 = pauStack_380 + 0xe;
  if (SBORROW8(0,*(longlong *)*pauStack_380)) goto LAB_14082cce4;
  pfVar55 = (float *)*pauStack_380;
  lStack_9b0 = *(longlong *)*pauStack_380;
  pauStack_380 = pauStack_380 + 0xe;
  pub_142e32770(&piStack_9a8,pfVar55 + 2,0xd8);
  fVar98 = fStack_8f4;
  fVar69 = fStack_8f8;
  uVar48 = CONCAT44(fStack_8f4,fStack_8f8);
  uStack_2d8._0_4_ = fStack_8f8;
  uStack_2d8._4_4_ = fStack_8f4;
  uStack_f5 = 1;
  uStack_f6 = 1;
  uStack_f7 = 1;
  uVar33 = pdb_1400af680(&pauStack_1c8,&uStack_2d8);
  bVar41 = (byte)(uVar33 >> 0x38);
  bVar68 = bVar41 >> 1;
  auVar70 = ZEXT216(CONCAT11(bVar68,bVar68));
  auVar70 = pshuflw(auVar70,auVar70,0);
  lVar29 = 0;
  uVar30 = uVar33;
  while( true ) {
    uVar30 = uVar30 & auStack_1e8._8_8_;
    pcVar36 = (undefined1 *)auStack_1e8._0_8_ + uVar30;
    auVar116[0] = -(*pcVar36 == auVar70[0]);
    auVar116[1] = -(pcVar36[1] == auVar70[1]);
    auVar116[2] = -(pcVar36[2] == auVar70[2]);
    auVar116[3] = -(pcVar36[3] == auVar70[3]);
    auVar116[4] = -(pcVar36[4] == auVar70[4]);
    auVar116[5] = -(pcVar36[5] == auVar70[5]);
    auVar116[6] = -(pcVar36[6] == auVar70[6]);
    auVar116[7] = -(pcVar36[7] == auVar70[7]);
    auVar116[8] = -(pcVar36[8] == auVar70[0]);
    auVar116[9] = -(pcVar36[9] == auVar70[1]);
    auVar116[10] = -(pcVar36[10] == auVar70[2]);
    auVar116[0xb] = -(pcVar36[0xb] == auVar70[3]);
    auVar116[0xc] = -(pcVar36[0xc] == auVar70[4]);
    auVar116[0xd] = -(pcVar36[0xd] == auVar70[5]);
    auVar116[0xe] = -(pcVar36[0xe] == auVar70[6]);
    auVar116[0xf] = -(pcVar36[0xf] == auVar70[7]);
    uVar58 = (ushort)(SUB161(auVar116 >> 7,0) & 1) | (ushort)(SUB161(auVar116 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar116 >> 0x17,0) & 1) << 2 |
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
             (ushort)(SUB161(auVar116 >> 0x77,0) & 1) << 0xe | (ushort)(auVar116[0xf] >> 7) << 0xf;
    uVar26 = (uint)uVar58;
    while (uVar58 != 0) {
      uVar27 = 0;
      for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000) {
        uVar27 = uVar27 + 1;
      }
      lVar52 = (uVar27 + uVar30 & auStack_1e8._8_8_) * -0x68;
      if ((*(float *)(auStack_1e8._0_8_ + lVar52 + -0x68) == fVar69) &&
         (*(float *)(auStack_1e8._0_8_ + lVar52 + -100) == fVar98)) {
        lVar52 = auStack_1e8._0_8_ + lVar52;
        goto LAB_14082c25e;
      }
      uVar58 = (ushort)(uVar26 - 1) & (ushort)uVar26;
      uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar58);
    }
    auVar89[0] = -(*pcVar36 == -1);
    auVar89[1] = -(pcVar36[1] == -1);
    auVar89[2] = -(pcVar36[2] == -1);
    auVar89[3] = -(pcVar36[3] == -1);
    auVar89[4] = -(pcVar36[4] == -1);
    auVar89[5] = -(pcVar36[5] == -1);
    auVar89[6] = -(pcVar36[6] == -1);
    auVar89[7] = -(pcVar36[7] == -1);
    auVar89[8] = -(pcVar36[8] == -1);
    auVar89[9] = -(pcVar36[9] == -1);
    auVar89[10] = -(pcVar36[10] == -1);
    auVar89[0xb] = -(pcVar36[0xb] == -1);
    auVar89[0xc] = -(pcVar36[0xc] == -1);
    auVar89[0xd] = -(pcVar36[0xd] == -1);
    auVar89[0xe] = -(pcVar36[0xe] == -1);
    auVar89[0xf] = -(pcVar36[0xf] == -1);
    if ((((((((((((((((SUB161(auVar89 >> 7,0) & 1) != 0 || (SUB161(auVar89 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar89 >> 0x17,0) & 1) != 0) || (SUB161(auVar89 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar89 >> 0x27,0) & 1) != 0) || (SUB161(auVar89 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar89 >> 0x37,0) & 1) != 0) || (SUB161(auVar89 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar89 >> 0x47,0) & 1) != 0) || (SUB161(auVar89 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar89 >> 0x57,0) & 1) != 0) || (SUB161(auVar89 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar89 >> 0x67,0) & 1) != 0) || (SUB161(auVar89 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar89 >> 0x77,0) & 1) != 0) || auVar89[0xf] < '\0') break;
    uVar30 = uVar30 + lVar29 + 0x10;
    lVar29 = lVar29 + 0x10;
  }
  if (auStack_1d8._0_8_ == 0) {
    uStack_f5 = 1;
    uStack_f6 = 1;
    uStack_f7 = 1;
    pdb_142ddaf30(auStack_1e8,1,&pauStack_1c8,CONCAT71((int7)((ulonglong)lVar29 >> 8),1));
  }
  uVar33 = uVar33 & auStack_1e8._8_8_;
  auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_1e8._0_8_ + uVar33);
  uVar58 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar70[0xf] >> 7) << 0xf
  ;
  uVar26 = (uint)uVar58;
  if (uVar58 == 0) {
    lVar29 = 0x10;
    do {
      uVar33 = uVar33 + lVar29 & auStack_1e8._8_8_;
      auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_1e8._0_8_ + uVar33);
      lVar29 = lVar29 + 0x10;
      uVar26 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
    } while (uVar26 == 0);
  }
  uVar27 = 0;
  for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
    uVar27 = uVar27 + 1;
  }
  uVar30 = uVar27 + uVar33 & auStack_1e8._8_8_;
  bVar68 = (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar30];
  if (-1 < (char)bVar68) {
    auVar70 = *(undefined1 (*) [16])auStack_1e8._0_8_;
    uVar26 = 0;
    for (uVar27 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf); (uVar27 & 1) == 0;
        uVar27 = uVar27 >> 1 | 0x80000000) {
      uVar26 = uVar26 + 1;
    }
    uVar30 = (ulonglong)uVar26;
    bVar68 = (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar30];
  }
  bVar41 = bVar41 >> 1;
  (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar30] = bVar41;
  (*(undefined1 (*) [16])(auStack_1e8._0_8_ + 0x10))[uVar30 - 0x10 & auStack_1e8._8_8_] = bVar41;
  lVar29 = uVar30 * -0x68;
  lVar52 = auStack_1e8._0_8_ + lVar29;
  *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x68) = uVar48;
  *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x60) = 0;
  *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x58) = 4;
  *(undefined1 (*) [16])(auStack_1e8._0_8_ + lVar29 + -0x50) = (undefined1  [16])0x0;
  *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x40) = 8;
  *(undefined1 (*) [16])(auStack_1e8._0_8_ + lVar29 + -0x38) = (undefined1  [16])0x0;
  *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x28) = 4;
  *(undefined1 (*) [16])(auStack_1e8._0_8_ + lVar29 + -0x20) = (undefined1  [16])0x0;
  *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x10) = 4;
  *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -8) = 0;
  auStack_1d8._8_8_ = auStack_1d8._8_8_ + 1;
  auStack_1d8._0_8_ = auStack_1d8._0_8_ - (ulonglong)(bVar68 & 1);
LAB_14082c25e:
  uVar30 = lVar52 - 0x60;
  puStack_2f0 = (undefined8 *)((ulonglong)puStack_2f0 & 0xffffffff00000000);
  puVar49 = (ulonglong *)&UNK_143009ee0;
  if (fStack_8fc < _DAT_143009d08) {
    puVar49 = (ulonglong *)&UNK_143009ef0;
  }
  pauStack_528 = (undefined1 (*) [16])
                 CONCAT44(afStack_938[4] - (float)((ulonglong)uStack_914 >> 0x20),
                          afStack_938[1] - (float)uStack_914);
  pauStack_520 = (undefined1 (*) [16])CONCAT44(pauStack_520._4_4_,afStack_938[7] - fStack_90c);
  auStack_148._0_8_ = lVar52 + -0x30;
  auStack_1a8._0_8_ = lVar52 + -0x18;
  auStack_128._0_8_ = lVar52;
  auStack_168._0_8_ = puVar49 + (ulonglong)(_DAT_143009d08 <= fStack_8fc) + 1;
  puVar37 = puVar49 + (ulonglong)(_DAT_143009d08 <= fStack_8fc) + 1;
  while (puVar49 != puVar37) {
    uVar33 = *puVar49;
    if (2 < uVar33) {
      uStack_f5 = 1;
      uStack_f6 = 1;
      uStack_f7 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar33,3,&UNK_143009f58);
    }
    puVar49 = puVar49 + 1;
    fVar69 = *(float *)((longlong)&pauStack_528 + uVar33 * 4);
    if (_DAT_142e3b1d8 <= fVar69) {
      fVar121 = afStack_938[uVar33 * 3];
      fVar73 = afStack_938[uVar33 * 3 + 1];
      fVar98 = afStack_938[uVar33 * 3 + 2];
      auStack_4f8._4_4_ = fVar98;
      auStack_4f8._0_4_ = fVar121;
      uStack_f5 = 1;
      uStack_f6 = 1;
      uStack_f7 = 1;
      pdb_140df4520(&uStack_2d8,auStack_4f8);
      fVar75 = uStack_2d8._4_4_;
      uVar28 = uStack_8dc;
      auVar23 = auStack_8e4;
      lVar29 = lStack_8f0;
      fVar74 = (float)uStack_2d0;
      fVar97 = _DAT_142f6e384;
      if (cStack_8d8 == '\0') {
        fVar97 = (fVar69 + _DAT_143006a20) / _DAT_142e37834;
        fVar69 = 0.0;
        if (0.0 <= fVar97) {
          fVar69 = fVar97;
        }
        fVar97 = _DAT_142e36f28;
        if (fVar69 <= _DAT_142e36f28) {
          fVar97 = fVar69;
        }
        fVar69 = (_DAT_142e3788c - (fVar97 + fVar97)) * fVar97 * fVar97 * fStack_8e8;
        fVar97 = (fVar69 * _DAT_142e37838 + (_DAT_142e36f28 - fVar69)) * _DAT_142f6e384;
      }
      fVar158 = (float)(~-(uint)(fStack_8fc < _DAT_143009d08) & uStack_8e0);
      fVar69 = *(float *)((longlong)&uStack_914 + uVar33 * 4);
      fVar130 = fVar69 * 0.0;
      fVar133 = fVar158 * 0.0;
      fVar122 = (float)uStack_2d8 + fVar130;
      uStack_2d0._0_4_ = (float)uStack_900;
      uStack_2d8._0_4_ = (float)uStack_908;
      uStack_2d8._4_4_ = (float)((ulonglong)uStack_908 >> 0x20);
      iVar131 = (int)puStack_2f0;
      uVar33 = (ulonglong)puStack_2f0 & 0xffffffff;
      uStack_f5 = 1;
      uStack_f6 = 1;
      uStack_f7 = 1;
      uVar30 = pdb_140c017b0(fStack_8f8,fStack_8f4);
      lVar52 = *(longlong *)(auStack_128._0_8_ + -0x50);
      if (lVar52 == *(longlong *)(auStack_128._0_8_ + -0x60)) {
        uStack_f5 = 1;
        uStack_f6 = 1;
        uStack_f7 = 1;
        pdb_142d8dc50(auStack_128._0_8_ + -0x60);
      }
      auVar70 = _auStack_4f8;
      auVar147._0_4_ = fVar75 + fVar69;
      auVar147._4_4_ = fVar74 + fVar130;
      auVar147._8_4_ = fVar121 + fVar133;
      auVar147._12_4_ = fVar73 + fVar158;
      fVar98 = fVar98 + fVar133;
      uVar30 = uVar30 ^ lVar29 * -0x61c8864680b583eb ^ uVar33 * -0x40a7b892e31b1a47;
      lVar29 = *(longlong *)(auStack_128._0_8_ + -0x58);
      lVar59 = lVar52 * 0x38;
      *(undefined4 *)(lVar29 + lVar59) = 1;
      *(ulonglong *)(lVar29 + 4 + lVar59) = CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
      *(float *)(lVar29 + 0xc + lVar59) = (float)uStack_2d0;
      *(float *)(lVar29 + 0x10 + lVar59) = fVar122;
      *(undefined1 (*) [16])(lVar29 + 0x14 + lVar59) = auVar147;
      *(float *)(lVar29 + 0x24 + lVar59) = fVar98;
      *(float *)(lVar29 + 0x28 + lVar59) = fVar97;
      *(undefined1 (*) [4])(lVar29 + 0x2c + lVar59) = auVar23;
      *(uint *)(lVar29 + 0x30 + lVar59) = (uint)(uVar30 >> 0x20) ^ (uint)uVar30;
      *(undefined4 *)(lVar29 + 0x34 + lVar59) = uVar28;
      *(longlong *)(auStack_128._0_8_ + -0x50) = lVar52 + 1;
      puStack_2f0 = (undefined8 *)CONCAT44(puStack_2f0._4_4_,iVar131 + 1);
      uStack_2d8._4_4_ =
           SQRT((auVar147._4_4_ - fVar98) * (auVar147._4_4_ - fVar98) +
                (auVar147._0_4_ - auVar147._12_4_) * (auVar147._0_4_ - auVar147._12_4_) +
                (fVar122 - auVar147._8_4_) * (fVar122 - auVar147._8_4_));
      auStack_4f8._4_4_ = auVar147._12_4_ * _UNK_142e36f64 + auVar147._0_4_ * _UNK_142e36f64;
      auStack_4f8._0_4_ = fVar122 * _DAT_142e36f60 + auVar147._8_4_ * _DAT_142e36f60;
      pauStack_4f0._4_4_ = auVar70._12_4_;
      pauStack_4f0._0_4_ = fVar98 * fVar99 + auVar147._4_4_ * fVar99;
      uStack_f5 = 1;
      uStack_f6 = 1;
      uStack_f7 = 1;
      uStack_2d8._0_4_ = fVar97;
      uStack_2d0._0_4_ = fVar97;
      pdb_140df3fd0(&pauStack_348,auStack_4f8,&uStack_2d8,auStack_128._0_8_,
                    (ulonglong)in_stack_fffffffffffff5c8 & 0xffffffff00000000,&UNK_143009f70);
      uVar28 = (undefined4)uStack_338;
      uStack_f5 = 1;
      uStack_f6 = 1;
      uStack_f7 = 1;
      pdb_140df4540(&uStack_2d8,&pauStack_340,(uStack_330._4_4_ + (float)uStack_330) * fVar99);
      uStack_4e0._0_4_ = (float)uStack_2d0;
      pauStack_4e8 = (undefined1 (*) [16])CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
      pauStack_4f0 = (undefined1 (*) [16])_UNK_142e4e658;
      auStack_4f8 = (undefined1  [8])_DAT_142e4e650;
      uStack_4e0._4_4_ = 1.0;
      fStack_4d8 = 1.0;
      fStack_4d4 = 1.0;
      uStack_f5 = 1;
      uStack_f6 = 1;
      uStack_f7 = 1;
      in_stack_fffffffffffff5c8 = (undefined8 **)auStack_4f8;
      pdb_140b3d590(&uStack_2d8,uVar28);
      auStack_250._12_4_ = uStack_2d8._4_4_;
      auStack_250._8_4_ = (float)uStack_2d8;
      pauStack_258 = (undefined1 (*) [16])CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0);
      pfStack_240 = (float *)((longlong)pauStack_258 +
                             CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) * 0x24);
      uStack_2d8._0_4_ = 0.0;
      uStack_2d8._4_4_ = 0.0;
      pauStack_298 = (undefined1 (*) [16])0x0;
      auStack_250._0_8_ = pauStack_258;
      uStack_f5 = 1;
      uStack_f6 = 1;
      uStack_f7 = 1;
      pdb_1413e7c20(auStack_148._0_8_,&uStack_2d8);
      uStack_2c8._0_4_ = (undefined4)uStack_338;
      uStack_2c8._4_4_ = uStack_338._4_4_;
      uStack_2c0 = (ushort)uStack_330;
      uStack_2be = (undefined2)((ulonglong)uStack_330 >> 0x10);
      iStack_2bc = (int)uStack_330._4_4_;
      uStack_2d8._0_4_ = SUB84(pauStack_348,0);
      uStack_2d8._4_4_ = (float)((ulonglong)pauStack_348 >> 0x20);
      uStack_2d0._0_4_ = SUB84(pauStack_340,0);
      uStack_2d0._4_4_ = (int)((ulonglong)pauStack_340 >> 0x20);
      lVar29 = *(longlong *)(auStack_128._0_8_ + -8);
      if (lVar29 == *(longlong *)(auStack_128._0_8_ + -0x18)) {
        uStack_f5 = 1;
        uStack_f6 = 1;
        uStack_f7 = 1;
        pdb_142d8a7a0(auStack_1a8._0_8_);
      }
      lVar52 = *(longlong *)(auStack_128._0_8_ + -0x10);
      auVar12._4_4_ = uStack_2c8._4_4_;
      auVar12._0_4_ = (undefined4)uStack_2c8;
      auVar12._8_2_ = uStack_2c0;
      auVar12._10_2_ = uStack_2be;
      auVar12._12_4_ = iStack_2bc;
      *(undefined1 (*) [16])(lVar52 + 0x10 + lVar29 * 0x20) = auVar12;
      puVar32 = (undefined8 *)(lVar52 + lVar29 * 0x20);
      *puVar32 = CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
      puVar32[1] = uStack_2d0;
      *(longlong *)(auStack_128._0_8_ + -8) = lVar29 + 1;
      uVar30 = auStack_128._0_8_ - 0x60;
      puVar37 = (ulonglong *)auStack_168._0_8_;
      lVar52 = auStack_128._0_8_;
    }
  }
  auStack_1a8._0_8_ = lStack_9b0;
  auStack_168._0_8_ = piStack_9a8;
  uStack_1f0 = uVar30;
  if (lStack_9a0 != 0) {
    auStack_148._0_8_ = piStack_9a8 + lStack_9a0 * 0xb;
    piVar38 = piStack_9a8;
    do {
      auVar23 = auStack_8e4;
      lVar29 = lStack_8f0;
      iVar131 = *piVar38;
      if (iVar131 == 2) break;
      fStack_4d8 = (float)*(undefined8 *)(piVar38 + 9);
      fStack_4d4 = (float)((ulonglong)*(undefined8 *)(piVar38 + 9) >> 0x20);
      _auStack_4f8 = *(undefined1 (*) [16])(piVar38 + 1);
      pauStack_4e8 = *(undefined1 (**) [16])(piVar38 + 5);
      uStack_4e0._0_4_ = (float)*(undefined8 *)(piVar38 + 7);
      uStack_4e0._4_4_ = (float)((ulonglong)*(undefined8 *)(piVar38 + 7) >> 0x20);
      iVar61 = (int)puStack_2f0;
      uVar33 = (ulonglong)puStack_2f0 & 0xffffffff;
      uVar30 = pdb_140c017b0(fStack_8f8,fStack_8f4);
      lVar52 = *(longlong *)(auStack_128._0_8_ + -0x50);
      if (lVar52 == *(longlong *)(auStack_128._0_8_ + -0x60)) {
        pdb_142d8dc50(auStack_128._0_8_ + -0x60);
      }
      uVar30 = uVar30 ^ lVar29 * -0x61c8864680b583eb ^ uVar33 * -0x40a7b892e31b1a47;
      lVar29 = *(longlong *)(auStack_128._0_8_ + -0x58);
      lVar59 = lVar52 * 0x38;
      *(int *)(lVar29 + lVar59) = iVar131;
      auVar9._8_4_ = (float)uStack_4e0;
      auVar9._0_8_ = pauStack_4e8;
      auVar9._12_4_ = uStack_4e0._4_4_;
      puVar32 = (undefined8 *)(lVar29 + 4 + lVar59);
      *puVar32 = auStack_4f8;
      puVar32[1] = pauStack_4f0;
      *(undefined1 (*) [16])(lVar29 + 0x14 + lVar59) = auVar9;
      *(ulonglong *)(lVar29 + 0x24 + lVar59) = CONCAT44(fStack_4d4,fStack_4d8);
      *(undefined1 (*) [4])(lVar29 + 0x2c + lVar59) = auVar23;
      *(uint *)(lVar29 + 0x30 + lVar59) = (uint)(uVar30 >> 0x20) ^ (uint)uVar30;
      *(undefined4 *)(lVar29 + 0x34 + lVar59) = 0x100;
      *(longlong *)(auStack_128._0_8_ + -0x50) = lVar52 + 1;
      puStack_2f0 = (undefined8 *)CONCAT44(puStack_2f0._4_4_,iVar61 + 1);
      piVar38 = piVar38 + 0xb;
      lVar52 = auStack_128._0_8_;
    } while (piVar38 != (int *)auStack_148._0_8_);
  }
  if (auStack_1a8._0_8_ != 0) {
    pub_1406abac0((byte *)auStack_168._0_8_,auStack_1a8._0_8_ * 0x2c,4);
    lVar52 = auStack_128._0_8_;
  }
  lVar29 = lStack_988 * 0x38 + lStack_990;
  uStack_2d8._0_4_ = (float)lStack_990;
  uStack_2d8._4_4_ = (float)((ulonglong)lStack_990 >> 0x20);
  uStack_2c8._0_4_ = (undefined4)uStack_998;
  uStack_2c8._4_4_ = (uint)((ulonglong)uStack_998 >> 0x20);
  uStack_2c0 = (ushort)lVar29;
  uStack_2be = (undefined2)((ulonglong)lVar29 >> 0x10);
  iStack_2bc = (int)((ulonglong)lVar29 >> 0x20);
  uStack_2b8 = (undefined1 (*) [16])auStack_8e4;
  uStack_f5 = 1;
  uStack_f6 = 0;
  uStack_f7 = 0;
  uStack_2d0._0_4_ = (float)uStack_2d8;
  uStack_2d0._4_4_ = (int)uStack_2d8._4_4_;
  pdb_1413e7fb0(lVar52 + -0x48,&uStack_2d8);
  uVar30 = uStack_1f0;
  uStack_650 = plStack_958 + lStack_950 * 4;
  auStack_668._8_8_ = plStack_958;
  auStack_668._0_8_ = plStack_958;
  uStack_658._0_4_ = (undefined4)uStack_960;
  uStack_658._4_4_ = (int)((ulonglong)uStack_960 >> 0x20);
  plVar31 = plStack_958;
  if (lStack_950 != 0) {
    do {
      auStack_668._8_8_ = plVar31 + 4;
      lVar29 = *plVar31;
      if (SBORROW8(0,lVar29)) break;
      uStack_2d0 = (undefined1 (*) [16])plVar31[1];
      pbVar34 = (byte *)((longlong)uStack_2d0 + plVar31[2] * 0x20);
      uStack_2c8._0_4_ = (undefined4)lVar29;
      uStack_2c8._4_4_ = (uint)((ulonglong)lVar29 >> 0x20);
      uStack_2c0 = (ushort)pbVar34;
      uStack_2be = (undefined2)((ulonglong)pbVar34 >> 0x10);
      iStack_2bc = (int)((ulonglong)pbVar34 >> 0x20);
      uStack_2d8 = (byte *)uStack_2d0;
      pbVar35 = uStack_8d0;
      if (plVar31[2] != 0) {
        do {
          uStack_8d0._0_4_ = *(int *)uStack_2d0;
          if ((int)uStack_8d0 == 2) {
            uStack_2d0 = (undefined1 (*) [16])((longlong)uStack_2d0 + 0x20);
            break;
          }
          auVar70 = *(undefined1 (*) [16])((longlong)uStack_2d0 + 0x10);
          iStack_8bc = auVar70._4_4_;
          uStack_8b8._0_4_ = auVar70._8_4_;
          uStack_8b8._4_4_ = auVar70._12_4_;
          uStack_8d0._4_4_ = (undefined4)*(undefined8 *)((longlong)uStack_2d0 + 4);
          uStack_8c8._0_4_ =
               (undefined4)((ulonglong)*(undefined8 *)((longlong)uStack_2d0 + 4) >> 0x20);
          uStack_8c8._4_4_ = (undefined4)*(undefined8 *)((longlong)uStack_2d0 + 0xc);
          uStack_8c0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)uStack_2d0 + 0xc) >> 0x20);
          in_stack_fffffffffffff5c8 = &puStack_2f0;
          uStack_2d0 = (undefined1 (*) [16])((longlong)uStack_2d0 + 0x20);
          pdb_140827360(uVar30,fStack_8f8,fStack_8f4,lStack_8f0,&puStack_2f0,&uStack_8d0,auStack_8e4
                       );
          pbVar35 = (byte *)CONCAT44(uStack_8d0._4_4_,(int)uStack_8d0);
          pbVar34 = (byte *)CONCAT44(iStack_2bc,CONCAT22(uStack_2be,uStack_2c0));
        } while (uStack_2d0 != (undefined1 (*) [16])pbVar34);
      }
      if ((longlong)pbVar34 - (longlong)uStack_2d0 != 0) {
        uVar33 = (ulonglong)((longlong)pbVar34 - (longlong)uStack_2d0) >> 5;
        pbVar34 = (byte *)((longlong)uStack_2d0 + 0x10);
        do {
          if ((pbVar34[-0x10] == 0) && (*(longlong *)(pbVar34 + -8) != 0)) {
            uStack_8d0 = pbVar35;
            pub_1406abac0(*(byte **)pbVar34,*(longlong *)(pbVar34 + -8) * 0xc,4);
            pbVar35 = uStack_8d0;
          }
          pbVar34 = pbVar34 + 0x20;
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
      uStack_8d0 = pbVar35;
      if (CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) != 0) {
        pub_1406abac0(uStack_2d8,CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) << 5,8);
      }
      plVar31 = (longlong *)auStack_668._8_8_;
    } while ((longlong *)auStack_668._8_8_ != uStack_650);
  }
  uStack_f5 = 0;
  uStack_f6 = 0;
  uStack_f7 = 0;
  pdb_1413ff0c0(auStack_668);
  if (lStack_980 != 0) {
    pub_1406abac0(pbStack_978,lStack_980 * 0xc,4);
  }
  pauVar42 = (undefined1 (*) [16])auStack_378._8_8_;
  goto LAB_14082c07e;
  while( true ) {
    fVar99 = (float)*(undefined8 *)(pbVar34 + 0x10);
    fVar98 = *(float *)(pbVar34 + 0x1c) - fVar99;
    fVar69 = (float)((ulonglong)*(undefined8 *)(pbVar34 + 0x10) >> 0x20);
    auVar156._0_4_ = (float)*(undefined8 *)(pbVar34 + 0x20) - fVar69;
    auVar156._4_4_ =
         (float)((ulonglong)*(undefined8 *)(pbVar34 + 0x20) >> 0x20) - *(float *)(pbVar34 + 0x18);
    auVar156._8_8_ = 0;
    auVar94._4_4_ = auVar156._4_4_ * auVar156._4_4_;
    auVar94._0_4_ = SQRT(auVar94._4_4_ + fVar98 * fVar98 + auVar156._0_4_ * auVar156._0_4_);
    auVar94._8_8_ = 0;
    if (_DAT_143009d64 <= auVar94._0_4_) {
      fVar98 = fVar98 / auVar94._0_4_;
      auStack_168._4_4_ = auVar94._0_4_;
      auStack_168._0_4_ = auVar94._0_4_;
      auStack_168._8_8_ = 0;
      auVar70 = divps(auVar156,auStack_168);
      fVar73 = 0.0;
      fVar122 = auVar70._0_4_;
      fVar130 = auVar70._4_4_;
      fVar133 = auVar70._8_4_;
      fVar158 = auVar70._12_4_;
      fVar121 = fVar98 - fVar122 * 0.0;
      fVar75 = fVar122 * 0.0 - fVar130;
      fVar74 = fVar130 * 0.0 - fVar98 * 0.0;
      fVar97 = _DAT_142e36f28 / SQRT(fVar121 * fVar121 + fVar74 * fVar74 + fVar75 * fVar75);
      bVar67 = (int)ABS(fVar97) - 0x800000U < 0x7f000000;
      bVar66 = (int)fVar97 - 1U < 0x7fffff;
      if (bVar66 || bVar67 && -1 < (int)fVar97) {
        fVar73 = fVar121 * fVar97;
      }
      uVar26 = (uint)(bVar66 || bVar67 && -1 < (int)fVar97);
      uVar27 = (int)(uVar26 << 0x1f) >> 0x1f;
      auVar95._0_4_ = (uint)(fVar75 * fVar97) & uVar27;
      auVar95._4_4_ = (uint)(fVar74 * fVar97) & (int)(uVar26 << 0x1f) >> 0x1f;
      auVar95._8_4_ = (uint)((fVar133 * 0.0 - fVar133) * 0.0) & (int)(uVar26 << 0x1f) >> 0x1f;
      auVar95._12_4_ = (uint)((fVar158 * 0.0 - fVar158) * 0.0) & (int)(uVar26 << 0x1f) >> 0x1f;
      auVar72 = ZEXT416(~uVar27 & (uint)_DAT_142e36f28) | auVar95;
      uVar26 = auVar72._0_4_;
      uVar27 = auVar72._4_4_;
      uVar134 = auVar72._8_4_;
      uVar138 = auVar72._12_4_;
      fVar121 = fVar73;
      if (*(int *)pbVar34 == 1) {
        fVar121 = (float)*(undefined8 *)(pbVar34 + 4);
        fVar75 = (float)((ulonglong)*(undefined8 *)(pbVar34 + 4) >> 0x20);
        fVar74 = *(float *)(pbVar34 + 0xc) * fVar130 + fVar75 * fVar122 + fVar121 * fVar98;
        auVar72._0_4_ = fVar121 - fVar74 * fVar98;
        auVar72._4_4_ = fVar75 - fVar74 * fVar122;
        auVar72._8_4_ = 0.0 - fVar133 * 0.0;
        auVar72._12_4_ = 0.0 - fVar158 * 0.0;
        fVar121 = *(float *)(pbVar34 + 0xc) - fVar130 * fVar74;
      }
      fVar74 = auVar72._4_4_;
      fVar75 = auVar72._0_4_;
      fVar97 = _DAT_142e36f28 / SQRT(fVar75 * fVar75 + fVar74 * fVar74 + fVar121 * fVar121);
      bVar67 = (int)ABS(fVar97) - 0x800000U < 0x7f000000;
      bVar66 = (int)fVar97 - 1U < 0x7fffff;
      if (bVar66 || bVar67 && -1 < (int)fVar97) {
        fVar73 = fVar121 * fVar97;
      }
      uVar132 = (uint)(bVar66 || bVar67 && -1 < (int)fVar97);
      uVar146 = (int)(uVar132 << 0x1f) >> 0x1f;
      uVar149 = (int)(uVar132 << 0x1f) >> 0x1f;
      uVar150 = (int)(uVar132 << 0x1f) >> 0x1f;
      uVar132 = (int)(uVar132 << 0x1f) >> 0x1f;
      auVar96._0_4_ = (uint)(fVar75 * fVar97) & uVar146;
      auVar96._4_4_ = (uint)(fVar74 * fVar97) & uVar149;
      auVar96._8_4_ = (uint)(auVar72._8_4_ * 0.0) & uVar150;
      auVar96._12_4_ = (uint)(auVar72._12_4_ * 0.0) & uVar132;
      auVar148._0_4_ = ~uVar146 & uVar26;
      auVar148._4_4_ = ~uVar149 & uVar27;
      auVar148._8_4_ = ~uVar150 & uVar134;
      auVar148._12_4_ = ~uVar132 & uVar138;
      fVar75 = SUB164(auVar148 | auVar96,0);
      fVar97 = fVar130 * fVar75 - fVar98 * fVar73;
      fVar74 = SUB164(auVar148 | auVar96,4);
      fVar133 = fVar74 * fVar98 - fVar122 * fVar75;
      fVar158 = fVar122 * fVar73 - fVar130 * fVar74;
      fVar121 = _DAT_142e36f28 / SQRT(fVar158 * fVar158 + fVar97 * fVar97 + fVar133 * fVar133);
      bVar67 = (int)fVar121 - 1U < 0x7fffff ||
               (int)ABS(fVar121) - 0x800000U < 0x7f000000 && -1 < (int)fVar121;
      if (bVar67) {
        fVar133 = fVar133 * fVar121;
      }
      else {
        fVar133 = 0.0;
      }
      fVar2 = *(float *)(pbVar34 + 0x28);
      fVar4 = *(float *)(pbVar34 + 0x30);
      uVar26 = *(uint *)(pbVar34 + 0x34);
      auStack_1a8 = auVar94;
      auStack_148 = ZEXT416((uint)*(float *)(pbVar34 + 0x18));
      uVar28 = pdb_1409012c0(*(int *)(pbVar34 + 0x2c));
      pdb_140a77410(&uStack_2d8);
      uVar27 = (uint)bVar67;
      uVar134 = (int)(uVar27 << 0x1f) >> 0x1f;
      uVar27 = (int)(uVar27 << 0x1f) >> 0x1f;
      uVar30 = CONCAT44(~uVar27 & _UNK_142e378e4,~uVar134 & _DAT_142e378e0) |
               CONCAT44((uint)(fVar121 * fVar97) & uVar27,(uint)(fVar121 * fVar158) & uVar134);
      auStack_4f8._0_4_ = (float)uVar30 * fVar2;
      auStack_4f8._4_4_ = (float)(uVar30 >> 0x20) * fVar2;
      pauStack_4f0._0_4_ = fVar133 * fVar2;
      pauStack_4f0._4_4_ = fVar98 * (float)auStack_1a8._0_4_;
      pauStack_4e8 = (undefined1 (*) [16])
                     CONCAT44(fVar130 * (float)auStack_168._0_4_,fVar122 * (float)auStack_168._0_4_)
      ;
      uStack_4e0._0_4_ = fVar75 * fVar2;
      uStack_4e0._4_4_ = fVar74 * fVar2;
      fStack_4d8 = fVar73 * fVar2;
      uStack_4bc = uVar26 | 0x18;
      uStack_4cc = auStack_148._0_4_;
      fStack_4c8 = 0.0;
      pbStack_4b0 = (byte *)CONCAT44(uStack_28c,uStack_290);
      pauStack_4b8 = pauStack_298;
      fStack_4d4 = fVar99;
      fStack_4d0 = fVar69;
      fStack_4c4 = fVar4;
      uStack_4c0 = uVar28;
      pdb_1413f6d90(&uStack_8d0,auStack_4f8);
    }
    pbVar34 = pbVar34 + 0x38;
    if (pbVar34 == pbVar35) break;
LAB_14082dc1d:
    if (*(int *)pbVar34 == 2) break;
  }
LAB_14082e030:
  if (lStack_178 != 0) {
    pub_1406abac0(pbStack_3e0,lStack_178 * 0x38,4);
  }
  pcVar36 = (char *)(CONCAT44(uStack_8ac,uStack_8b0) + 0x18);
  uStack_101 = 1;
  uStack_102 = 0;
  uStack_103 = 1;
  uStack_104 = 1;
  pdb_140e9a350();
  pauVar64 = pauStack_5a8;
  fVar99 = pauStack_170._0_4_;
  pauVar42 = (undefined1 (*) [16])((ulonglong)pauStack_170 & 0xffffffff);
  LOCK();
  cVar25 = *pcVar36;
  if (cVar25 == '\x01') {
    *pcVar36 = '\0';
  }
  UNLOCK();
  if (cVar25 != '\x01') {
    uStack_101 = 1;
    uStack_102 = 0;
    uStack_103 = 1;
    uStack_104 = 1;
    pdb_142dbcef0(pcVar36,0);
  }
  puVar32 = puStack_610;
  *(longlong *)(lVar29 + -0x10) = *(longlong *)(lVar29 + -0x10) + (longlong)puStack_610;
  auStack_148._0_8_ = pbStack_618;
  lVar52 = *(longlong *)(lVar29 + -0x68);
  if ((undefined8 *)(*(longlong *)(lVar29 + -0x78) - lVar52) < puStack_610) {
    auStack_168._0_8_ = pauStack_620;
    pdb_142d7f1b0(lVar29 + -0x78,lVar52,puStack_610,4,0x20);
    lVar52 = *(longlong *)(lVar29 + -0x68);
    pauVar39 = (undefined1 (*) [16])auStack_168._0_8_;
LAB_14082e0dd:
    pauVar62 = pauStack_390;
    pub_142e32760(lVar52 * 0x20 + *(longlong *)(lVar29 + -0x70),auStack_148._0_8_);
  }
  else {
    pauVar39 = pauStack_620;
    pauVar62 = pauStack_390;
    if (puStack_610 != (undefined8 *)0x0) goto LAB_14082e0dd;
  }
  *(longlong *)(lVar29 + -0x68) = lVar52 + (longlong)puVar32;
  if (pauVar39 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)auStack_148._0_8_,(longlong)pauVar39 << 5,4);
  }
  pauStack_4e8 = (undefined1 (*) [16])CONCAT44(uStack_650._4_4_,(uint)uStack_650);
  uStack_4e0 = ppauStack_648 + (longlong)pauStack_640 * 8;
  pauStack_4f0 = (undefined1 (*) [16])ppauStack_648;
  auStack_4f8 = (undefined1  [8])ppauStack_648;
  uVar28 = (int)uStack_1f0;
  pauVar39 = (undefined1 (*) [16])ppauStack_648;
  if (pauStack_640 != (undefined1 (*) [16])0x0) {
    do {
      pauStack_4f0 = (undefined1 (*) [16])((longlong)pauVar39 + 0x40);
      if (SBORROW8(0,(longlong)*(undefined1 (**) [16])((longlong)pauVar39 + 8))) {
        pauVar39 = (undefined1 (*) [16])((longlong)pauVar39 + 0x40);
        uVar30 = (longlong)uStack_4e0 - (longlong)pauVar39;
        goto joined_r0x00014082e276;
      }
      auStack_148._0_8_ = *(undefined1 (**) [16])((longlong)pauVar39 + 8);
      iVar131 = *(int *)pauVar39;
      auStack_168._0_8_ = *(undefined1 (**) [16])((longlong)pauVar39 + 0x10);
      uStack_2b8._0_4_ = SUB84(*(undefined1 (**) [16])((longlong)pauVar39 + 0x38),0);
      uStack_2b8._4_4_ =
           (float)((ulonglong)*(undefined1 (**) [16])((longlong)pauVar39 + 0x38) >> 0x20);
      pauVar65 = *(undefined1 (**) [16])((longlong)pauVar39 + 0x30);
      uStack_2c8._0_4_ = SUB84(*(undefined1 (**) [16])((longlong)pauVar39 + 0x28),0);
      uStack_2c8._4_4_ =
           (uint)((ulonglong)*(undefined1 (**) [16])((longlong)pauVar39 + 0x28) >> 0x20);
      uStack_2c0 = (ushort)pauVar65;
      uStack_2be = (undefined2)((ulonglong)pauVar65 >> 0x10);
      iStack_2bc = (int)((ulonglong)pauVar65 >> 0x20);
      uStack_2d8._0_4_ = SUB84(*(undefined1 (**) [16])((longlong)pauVar39 + 0x18),0);
      uStack_2d8._4_4_ =
           (float)((ulonglong)*(undefined1 (**) [16])((longlong)pauVar39 + 0x18) >> 0x20);
      uStack_2d0._0_4_ = SUB84(*(undefined1 (**) [16])((longlong)pauVar39 + 0x20),0);
      uStack_2d0._4_4_ =
           (int)((ulonglong)*(undefined1 (**) [16])((longlong)pauVar39 + 0x20) >> 0x20);
      *(float *)*pauStack_180 = fVar99;
      lVar29 = *(longlong *)pauVar64[1];
      if (lVar29 == *(longlong *)*pauVar64) {
        pdb_142d7eec0(pauVar64);
      }
      lVar52 = *(longlong *)((longlong)*pauVar64 + 8);
      *(undefined8 *)(lVar52 + lVar29 * 0x48) = auStack_148._0_8_;
      *(undefined8 *)(lVar52 + 8 + lVar29 * 0x48) = auStack_168._0_8_;
      auVar13._8_2_ = uStack_2c0;
      auVar13._0_8_ = uStack_2c8;
      auVar13._10_2_ = uStack_2be;
      auVar13._12_4_ = iStack_2bc;
      puVar32 = (undefined8 *)(lVar52 + 0x10 + lVar29 * 0x48);
      *puVar32 = CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
      puVar32[1] = uStack_2d0;
      *(undefined1 (*) [16])(lVar52 + 0x20 + lVar29 * 0x48) = auVar13;
      *(ulonglong *)(lVar52 + 0x30 + lVar29 * 0x48) = CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
      *(undefined4 *)(lVar52 + 0x38 + lVar29 * 0x48) = uVar28;
      *(undefined4 *)(lVar52 + 0x3c + lVar29 * 0x48) = auStack_128._0_4_;
      *(int *)(lVar52 + 0x40 + lVar29 * 0x48) = iVar131;
      *(longlong *)pauVar64[1] = lVar29 + 1;
      pauVar39 = pauStack_4f0;
    } while (pauStack_4f0 != (undefined1 (*) [16])uStack_4e0);
  }
  uVar30 = (longlong)uStack_4e0 - (longlong)pauVar39;
joined_r0x00014082e276:
  if (uVar30 != 0) {
    uVar30 = uVar30 >> 6;
    ppauVar47 = (undefined1 (**) [16])((longlong)pauVar39 + 0x10);
    do {
      if (ppauVar47[-1] != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)*ppauVar47,(longlong)ppauVar47[-1] * 0x30,4);
      }
      ppauVar47 = ppauVar47 + 8;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  if (pauStack_4e8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)auStack_4f8,(longlong)pauStack_4e8 << 6,8);
  }
  pauVar64 = pauStack_638;
  uVar48 = auStack_630._8_8_;
  if (auStack_630._8_8_ == 0) {
    param_1 = (undefined8 *)0x0;
    pauVar64 = pauStack_3a0;
joined_r0x00014082e340:
    if (pauStack_638 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)auStack_630._0_8_,(longlong)pauStack_638 * 0xc,4);
    }
    if (((char)param_1 != '\0') && (pauStack_620 != (undefined1 (*) [16])0x0)) {
      pub_1406abac0(pbStack_618,(longlong)pauStack_620 << 5,4);
    }
    goto LAB_14082d7f0;
  }
  pauVar42 = (undefined1 (*) [16])auStack_630._0_8_;
  auStack_168._0_8_ = auStack_630._0_8_;
  auStack_148._0_8_ = pauStack_638;
  if ((ulonglong)auStack_630._8_8_ < 3) {
    pauVar39 = (undefined1 (*) [16])0x4;
    pauVar65 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar65 = (undefined1 (*) [16])((ulonglong)auStack_630._8_8_ / 3);
    pdb_14007ee60();
    pauVar39 = (undefined1 (*) [16])pub_1406abab0((longlong)pauVar65 * 0xc,4);
    if (pauVar39 == (undefined1 (*) [16])0x0) {
      uStack_10b = 1;
      pdb_142dc7e2a(4,(longlong)pauVar65 * 0xc);
      goto LAB_14082eee9;
    }
    if (uVar48 - 3 < 3) {
      uVar30 = 0;
    }
    else {
      lVar29 = 0;
      uVar30 = 0;
      do {
        fVar99 = (float)lVar29;
        *(float *)((longlong)*pauVar39 + lVar29 * 4) = fVar99;
        *(int *)((longlong)*pauVar39 + (lVar29 + 1) * 4) = (int)fVar99 + 1;
        *(int *)((longlong)*pauVar39 + (lVar29 + 2) * 4) = (int)fVar99 + 2;
        uVar30 = uVar30 + 2;
        *(int *)((longlong)*pauVar39 + (lVar29 + 3) * 4) = (int)fVar99 + 3;
        *(int *)((longlong)pauVar39[1] + lVar29 * 4) = (int)fVar99 + 4;
        *(int *)((longlong)pauVar39[1] + (lVar29 + 1) * 4) = (int)fVar99 + 5;
        lVar29 = lVar29 + 6;
      } while (((ulonglong)pauVar65 & 0x7fffffffffffffe) != uVar30);
      if (((ulonglong)pauVar65 & 1) == 0) goto LAB_14082e404;
    }
    iVar131 = (int)uVar30;
    *(int *)((longlong)*pauVar39 + uVar30 * 3 * 4) = iVar131 * 3;
    *(int *)((longlong)*pauVar39 + (uVar30 * 3 + 1) * 4) = iVar131 * 3 + 1;
    *(int *)((longlong)*pauVar39 + (uVar30 * 3 + 2) * 4) = iVar131 * 3 + 2;
  }
LAB_14082e404:
  *puStack_3c8 = pfStack_3d0._0_4_;
  *(undefined4 *)pbStack_3c0 = pbStack_190._0_4_;
  pauStack_388 = pauVar64;
  pauStack_380 = pauVar42;
  auStack_378._0_8_ = uVar48;
  pauStack_348 = (undefined1 (*) [16])0x8000000000000000;
  uStack_2d8._0_4_ = 0.0;
  uStack_2d8._4_4_ = -0.0;
  uStack_10b = 0;
  puVar32 = &uStack_2d8;
  pauStack_528 = pauVar65;
  pauStack_520 = pauVar39;
  pauStack_518 = pauVar65;
  pdb_1409f0070(auStack_4f8,&pauStack_528,&pauStack_388,&pauStack_348,puVar32);
  auVar70 = auStack_250;
  pauVar64 = pauStack_3a0;
  uVar28 = (undefined4)((ulonglong)puVar32 >> 0x20);
  uStack_2d8._0_4_ = 1.4013e-45;
  uStack_2d8._4_4_ = 0.0;
  uStack_2d0._0_4_ = 1.4013e-45;
  uStack_2d0._4_4_ = 0;
  pauStack_258 = (undefined1 (*) [16])CONCAT44(iStack_484,iStack_488);
  auStack_250._4_4_ = uStack_47c;
  auStack_250._0_4_ = uStack_480;
  auStack_250._8_8_ = auVar70._8_8_;
  pauStack_260 = (undefined1 (*) [16])CONCAT44(uStack_48c,uStack_490);
  uStack_268 = puStack_498;
  puStack_278 = puStack_4a8;
  uStack_270 = pfStack_4a0;
  pauStack_288 = pauStack_4b8;
  pbStack_280 = pbStack_4b0;
  pauStack_298 = (undefined1 (*) [16])CONCAT44(fStack_4c4,fStack_4c8);
  uStack_290 = uStack_4c0;
  uStack_28c = uStack_4bc;
  uStack_2a8._0_4_ = fStack_4d8;
  uStack_2a8._4_4_ = fStack_4d4;
  uStack_2a0._0_4_ = fStack_4d0;
  uStack_2a0._4_4_ = uStack_4cc;
  uStack_2b8._0_4_ = SUB84(pauStack_4e8,0);
  uStack_2b8._4_4_ = (float)((ulonglong)pauStack_4e8 >> 0x20);
  uStack_2c8._0_4_ = auStack_4f8._0_4_;
  uStack_2c8._4_4_ = auStack_4f8._4_4_;
  uStack_2c0 = auStack_4f8._8_2_;
  uStack_2be = auStack_4f8._10_2_;
  iStack_2bc = auStack_4f8._12_4_;
  uStack_2b0 = uStack_4e0;
  pdb_14007ee60();
  pbVar34 = pub_1406abab0(0x90,0x10);
  if (pbVar34 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x90);
  }
  param_1 = &uStack_2d8;
  pub_142e32760(pbVar34,param_1,0x90);
  uStack_2d8._4_4_ = (float)(int)uStack_1f0;
  uStack_2d0._0_4_ = (float)auStack_128._0_4_;
  uStack_2d8._0_4_ = (float)CONCAT31(uStack_2d8._1_3_,0xe);
  uStack_10b = 0;
  pdb_1409ed410(auStack_4f8,pbVar34,param_1);
  uStack_2d0._0_4_ = 0.0;
  uStack_2d8._0_4_ = 0.0;
  uStack_2d8._4_4_ = 0.0;
  uStack_2c8._0_4_ = (undefined4)_DAT_142e4e650;
  uStack_2c8._4_4_ = (uint)((ulonglong)_DAT_142e4e650 >> 0x20);
  uStack_2c0 = (ushort)_UNK_142e4e658;
  uStack_2be = (undefined2)((ulonglong)_UNK_142e4e658 >> 0x10);
  iStack_2bc = (int)((ulonglong)_UNK_142e4e658 >> 0x20);
  uStack_10b = 0;
  pdb_14140bba0(&pauStack_348,uStack_5b0,pbStack_3b8,uStack_1f0 & 0xffffffff,
                CONCAT44(uVar28,auStack_128._0_4_),auStack_4f8,&uStack_2d8);
LAB_14082d7f0:
  pauVar64 = (undefined1 (*) [16])((longlong)*pauVar64 + 8);
  goto LAB_14082d7fb;
LAB_14082b440:
  uVar60 = uVar60 & plVar31[1];
  auVar113 = *(undefined1 (*) [16])(lVar52 + uVar60);
  auVar115[0] = -(auVar113[0] == auVar164[0]);
  auVar115[1] = -(auVar113[1] == auVar164[1]);
  auVar115[2] = -(auVar113[2] == auVar164[2]);
  auVar115[3] = -(auVar113[3] == auVar164[3]);
  auVar115[4] = -(auVar113[4] == auVar164[4]);
  auVar115[5] = -(auVar113[5] == auVar164[5]);
  auVar115[6] = -(auVar113[6] == auVar164[6]);
  auVar115[7] = -(auVar113[7] == auVar164[7]);
  auVar115[8] = -(auVar113[8] == auVar164[0]);
  auVar115[9] = -(auVar113[9] == auVar164[1]);
  auVar115[10] = -(auVar113[10] == auVar164[2]);
  auVar115[0xb] = -(auVar113[0xb] == auVar164[3]);
  auVar115[0xc] = -(auVar113[0xc] == auVar164[4]);
  auVar115[0xd] = -(auVar113[0xd] == auVar164[5]);
  auVar115[0xe] = -(auVar113[0xe] == auVar164[6]);
  auVar115[0xf] = -(auVar113[0xf] == auVar164[7]);
  uVar58 = (ushort)(SUB161(auVar115 >> 7,0) & 1) | (ushort)(SUB161(auVar115 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar115 >> 0x77,0) & 1) << 0xe | (ushort)(auVar115[0xf] >> 7) << 0xf;
  uVar134 = (uint)uVar58;
  while( true ) {
    if (uVar58 == 0) goto LAB_14082b490;
    uVar138 = 0;
    for (uVar132 = uVar134; (uVar132 & 1) == 0; uVar132 = uVar132 >> 1 | 0x80000000) {
      uVar138 = uVar138 + 1;
    }
    lVar56 = (uVar138 + uVar60 & plVar31[1]) * -0x98;
    if (lVar29 == *(longlong *)(lVar52 + -0x98 + lVar56)) break;
    uVar58 = (ushort)(uVar134 - 1) & (ushort)uVar134;
    uVar134 = CONCAT22((short)(uVar134 - 1 >> 0x10),uVar58);
  }
  lVar52 = lVar52 + lVar56;
  uVar30 = *(ulonglong *)(lVar52 + -0x20);
  uVar33 = uVar30;
  if (1 < uVar30) {
    uVar33 = *(ulonglong *)(lVar52 + -0x28);
  }
  if (uVar27 == auStack_128._0_4_) {
    if (uVar33 != 0) {
      if (uVar30 < 2) {
        pcVar36 = (char *)(lVar52 + -0x30);
      }
      else {
        pcVar36 = *(char **)(lVar52 + -0x30);
      }
      goto LAB_14082b50b;
    }
LAB_14082b514:
    bVar67 = false;
  }
  else {
    if (uVar33 == 0) goto LAB_14082b514;
    if (uVar30 < 2) {
      pcVar36 = (char *)(lVar52 + uVar33 * 4 + -0x34);
      if (pcVar36 != (char *)0x0) goto LAB_14082b50b;
      goto LAB_14082b514;
    }
    pcVar36 = (char *)(*(longlong *)(lVar52 + -0x30) + uVar33 * 4 + -4);
    if (pcVar36 == (char *)0x0) goto LAB_14082b514;
LAB_14082b50b:
    bVar67 = *pcVar36 == '\x03';
  }
  uStack_f1 = 1;
  uStack_f2 = 1;
  uStack_f3 = 1;
  uStack_f4 = 1;
  cVar25 = pdb_1408ff980();
  ppauVar47 = uStack_4e0;
  uStack_2b8 = (undefined1 (*) [16])CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
  if ((cVar25 == '\0') ||
     (uStack_2b8 = (undefined1 (*) [16])CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8),
     bVar67 || *(char *)(lVar52 + -8) != '\0')) goto LAB_14082bbd0;
  uVar30 = *(ulonglong *)(lVar52 + -0x80);
  if (0xaaaaaaaaaaaaaaa < uVar30) {
    uVar48 = 0;
LAB_14082e8c2:
    uStack_f1 = 1;
    uStack_f2 = 1;
    uStack_f3 = 1;
    uStack_f4 = 1;
    pdb_142dc7e2a(uVar48,auStack_3f8._0_8_);
    goto LAB_14082eee9;
  }
  pauStack_390 = (undefined1 (*) [16])
                 CONCAT44(pauStack_390._4_4_,*(float *)((longlong)pauVar42[6] + 8));
  pfStack_3d0 = (float *)CONCAT44(pfStack_3d0._4_4_,*(float *)((longlong)pauVar42[6] + 0xc));
  uVar48 = *(undefined8 *)(lVar52 + -0x88);
  pbStack_190 = *(byte **)(lVar52 + -0x58);
  pauStack_170 = *(undefined1 (**) [16])(lVar52 + -0x50);
  puStack_3c8 = *(undefined4 **)(lVar52 + -0x70);
  pauStack_5a8 = *(undefined1 (**) [16])(lVar52 + -0x68);
  uVar33 = uVar30 * 0xc;
  if (uVar33 == 0) {
    pbVar34 = (byte *)0x4;
    auStack_1e8._0_8_ = 0;
  }
  else {
    auStack_3f8._0_8_ = uVar48;
    pdb_14007ee60();
    uVar48 = 4;
    pbVar34 = pub_1406abab0(uVar33,4);
    if (pbVar34 == (byte *)0x0) {
      auStack_3f8._0_8_ = uVar33;
      goto LAB_14082e8c2;
    }
    auStack_1e8._0_8_ = uVar30;
    uVar48 = auStack_3f8._0_8_;
  }
  auStack_1e8._8_8_ = pbVar34;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = auStack_1d8._8_8_;
  auStack_1d8 = auVar20 << 0x40;
  if (uVar30 != 0) {
    pub_142e32760(pbVar34,uVar48,uVar33);
    auStack_1d8._0_8_ = uVar30;
  }
  auStack_3f8._0_8_ = pbVar34;
  uStack_f1 = 1;
  uStack_f2 = 1;
  uStack_f3 = 1;
  uStack_f4 = 1;
  pdb_140080930(&uStack_2d8,auStack_1e8,1);
  ppauVar47 = uStack_4e0;
  if (SBORROW8(0,CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8))) goto LAB_14082bbd0;
  pauStack_4f0 = (undefined1 (*) [16])CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0);
  pauStack_4e8 = (undefined1 (*) [16])CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8);
  uStack_4e0._0_4_ = (float)CONCAT22(uStack_2be,uStack_2c0);
  fStack_4d0 = (float)uStack_2b0;
  uStack_4cc = uStack_2b0._4_4_;
  fStack_4c8 = (float)uStack_2a8;
  fStack_4c4 = uStack_2a8._4_4_;
  uStack_4e0._4_4_ = (float)iStack_2bc;
  fStack_4d8 = (float)uStack_2b8;
  fStack_4d4 = uStack_2b8._4_4_;
  auStack_4f8 = (undefined1  [8])CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
  pdb_14017ede0(auStack_1e8,pauStack_4f0,(longlong)pauStack_4f0 + (longlong)pauStack_4e8 * 0xc);
  pdb_140080c90(&uStack_2d8,auStack_1e8,0);
  fVar69 = (float)uStack_2a8;
  lVar29 = CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
  if (!SBORROW8(0,lVar29)) {
    lVar52 = CONCAT44(iStack_2bc,CONCAT22(uStack_2be,uStack_2c0));
    pbVar34 = (byte *)CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
    if (lVar29 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0),lVar29 << 3,4);
    }
    if (lVar52 != 0) {
      pub_1406abac0(pbVar34,lVar52 << 2,4);
    }
    uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffff5c8 >> 0x20);
    if (fVar99 <= fVar69) {
      fVar69 = fVar99;
    }
    if ((_DAT_143009d64 <= fVar69) &&
       ((uVar27 == auStack_128._0_4_ || (uVar26 == auStack_128._0_4_)))) {
      if (pauStack_4e8 == (undefined1 (*) [16])0x1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143308560);
      }
      if (pauStack_4e8 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
      }
      uStack_2d8._0_4_ = auStack_4f8._8_4_;
      uStack_2d8._4_4_ = auStack_4f8._12_4_;
      uStack_2d0._0_4_ = SUB84(pauStack_4e8,0);
      uStack_2d0._4_4_ = (int)((ulonglong)pauStack_4e8 >> 0x20);
      uStack_2c8._0_4_ = 0x40ade410;
      uStack_2c8._4_4_ = 1;
      uStack_2c0 = 0;
      uStack_2be = 0;
      iStack_2bc = 0;
      uStack_2b8._0_4_ = 0.0;
      uStack_2b8._4_4_ = 0.0;
      pdb_14141df70(&uStack_2d8);
      pauVar64 = pauStack_170;
      fVar69 = uStack_2b8._4_4_;
      pauVar62 = (undefined1 (*) [16])(ulonglong)(uint)(float)uStack_2b8;
      if (pauStack_170 == (undefined1 (*) [16])0x0) {
        pbVar34 = (byte *)0x4;
        goto LAB_14082b8d1;
      }
      uVar30 = (longlong)pauStack_170 * 4;
      pdb_14007ee60();
      pbVar34 = pub_1406abab0(uVar30,4);
      if (pbVar34 == (byte *)0x0) {
        pdb_142dc7e2a(4,uVar30);
        goto LAB_14082eee9;
      }
      if (pauVar64 < (undefined1 (*) [16])0x8) {
        pauVar64 = (undefined1 (*) [16])0x0;
        goto LAB_14082b8b9;
      }
      pauVar64 = (undefined1 (*) [16])((ulonglong)pauVar64 & 0xfffffffffffffff8);
      pauVar39 = (undefined1 (*) [16])0x0;
      do {
        pfVar55 = (float *)(pbStack_190 + (longlong)pauVar39 * 4);
        fVar98 = pfVar55[1];
        fVar121 = pfVar55[2];
        fVar73 = pfVar55[3];
        pfVar44 = (float *)(pbStack_190 + (longlong)pauVar39 * 4 + 0x10);
        fVar75 = *pfVar44;
        fVar74 = pfVar44[1];
        fVar97 = pfVar44[2];
        fVar122 = pfVar44[3];
        pfVar44 = (float *)(pbVar34 + (longlong)pauVar39 * 4);
        *pfVar44 = *pfVar55 + unaff_XMM8._0_4_;
        pfVar44[1] = fVar98 + unaff_XMM8._4_4_;
        pfVar44[2] = fVar121 + unaff_XMM8._8_4_;
        pfVar44[3] = fVar73 + unaff_XMM8._12_4_;
        pfVar55 = (float *)(pbVar34 + (longlong)pauVar39 * 4 + 0x10);
        *pfVar55 = fVar75 + unaff_XMM8._0_4_;
        pfVar55[1] = fVar74 + unaff_XMM8._4_4_;
        pfVar55[2] = fVar97 + unaff_XMM8._8_4_;
        pfVar55[3] = fVar122 + unaff_XMM8._12_4_;
        pauVar39 = (undefined1 (*) [16])((longlong)*pauVar39 + 8);
      } while (pauVar64 != pauVar39);
      for (; pauStack_170 != pauVar64; pauVar64 = (undefined1 (*) [16])((longlong)*pauVar64 + 1)) {
LAB_14082b8b9:
        *(float *)(pbVar34 + (longlong)pauVar64 * 4) =
             *(float *)(pbStack_190 + (longlong)pauVar64 * 4) + unaff_XMM12_Da;
      }
LAB_14082b8d1:
      pbStack_190 = pbVar34;
      if (pauStack_4e8 <= pauVar62) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar62,pauStack_4e8,&UNK_14300a0a8);
      }
      pauVar64 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
      if (pauStack_4e8 <= pauVar64) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar64,pauStack_4e8,&UNK_14300a0a8);
      }
      fVar98 = *(float *)((longlong)pauStack_4f0 + 8 + (longlong)pauVar62 * 0xc);
      uVar48 = *(undefined8 *)((longlong)pauStack_4f0 + (longlong)pauVar62 * 0xc);
      uVar5 = *(undefined8 *)((longlong)pauStack_4f0 + (longlong)pauVar64 * 0xc);
      fVar121 = (float)uVar48;
      fVar73 = (float)((ulonglong)uVar48 >> 0x20);
      pauStack_528 = (undefined1 (*) [16])
                     CONCAT44(((float)((ulonglong)uVar5 >> 0x20) - fVar73) * fVar69 + fVar73,
                              ((float)uVar5 - fVar121) * fVar69 + fVar121);
      pauStack_520 = (undefined1 (*) [16])
                     CONCAT44(pauStack_520._4_4_,
                              (*(float *)((longlong)pauStack_4f0 + 8 + (longlong)pauVar64 * 0xc) -
                              fVar98) * fVar69 + fVar98);
      if (pauStack_170 <= pauVar62) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar62,pauStack_170,&UNK_14300a0c0);
      }
      if (pauStack_170 <= pauVar64) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar64,pauStack_170,&UNK_14300a0c0);
      }
      if (pauStack_5a8 <= pauVar62) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar62,pauStack_5a8,&UNK_14300a0d8);
      }
      if (pauStack_5a8 <= pauVar64) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar64,pauStack_5a8,&UNK_14300a0d8);
      }
      fVar98 = (float)*(undefined8 *)(puStack_3c8 + (longlong)pauVar62 * 2);
      fVar121 = (float)((ulonglong)*(undefined8 *)(puStack_3c8 + (longlong)pauVar62 * 2) >> 0x20);
      fVar98 = fVar69 * ((float)*(undefined8 *)(puStack_3c8 + (longlong)pauVar62 * 2 + 2) - fVar98)
               + fVar98;
      fVar121 = fVar69 * ((float)((ulonglong)
                                  *(undefined8 *)(puStack_3c8 + (longlong)pauVar62 * 2 + 2) >> 0x20)
                         - fVar121) + fVar121;
      fVar69 = _DAT_142e36f28 / SQRT(fVar121 * fVar121 + fVar98 * fVar98);
      if ((int)fVar69 - 1U < 0x7fffff ||
          (int)ABS(fVar69) - 0x800000U < 0x7f000000 && -1 < (int)fVar69) {
        fVar121 = fVar121 * fVar69;
      }
      else {
        fVar121 = 0.0;
      }
      uVar48 = CONCAT44(uVar28,fVar121);
      in_stack_fffffffffffff5d0 = in_stack_fffffffffffff5d0 & 0xffffffff00000000;
      pdb_1408279f0(&uStack_2d8,&pauStack_528,(longlong)pauVar64 * 3,pbVar34,uVar48,
                    in_stack_fffffffffffff5d0);
      uStack_8c8._4_4_ = (float)uStack_2d0;
      uStack_8d0._4_4_ = (float)uStack_2d8;
      uStack_8c8._0_4_ = uStack_2d8._4_4_;
      uStack_8b8._4_4_ = uStack_2c8._4_4_;
      iStack_8bc = uStack_2d0._4_4_;
      uStack_8b8._0_4_ = (undefined4)uStack_2c8;
      uStack_8a4 = (uint)(float)uStack_2b8;
      uStack_8ac = CONCAT22(uStack_2be,uStack_2c0);
      iStack_8a8 = iStack_2bc;
      uStack_8d0._0_4_ = 1;
      uStack_8c0 = 1;
      uStack_8b0 = 1;
      in_stack_fffffffffffff5d0 =
           CONCAT44((int)(in_stack_fffffffffffff5d0 >> 0x20),pfStack_3d0._0_4_);
      in_stack_fffffffffffff5c8 =
           (undefined8 **)CONCAT44((int)((ulonglong)uVar48 >> 0x20),(uint)pauStack_390);
      pdb_140827df0(&pauStack_348,(float *)((longlong)pauVar42[7] + 8),&uStack_2d8,&uStack_8d0,
                    in_stack_fffffffffffff5c8,in_stack_fffffffffffff5d0);
      pauVar64 = pauStack_348;
      pauStack_380 = (undefined1 (*) [16])CONCAT44(uStack_338._4_4_,(undefined4)uStack_338);
      pauStack_388 = pauStack_340;
      pub_1406abac0(pbStack_190,(longlong)pauStack_170 << 2,4);
      if (auStack_4f8 != (undefined1  [8])0x0) {
        pub_1406abac0((byte *)pauStack_4f0,(longlong)auStack_4f8 * 0xc,4);
      }
      if (CONCAT44(uStack_4e0._4_4_,(float)uStack_4e0) != 0) {
        pub_1406abac0((byte *)CONCAT44(fStack_4d4,fStack_4d8),
                      CONCAT44(uStack_4e0._4_4_,(float)uStack_4e0) << 2,4);
      }
      ppauVar47 = (undefined1 (**) [16])CONCAT44(uStack_4e0._4_4_,(float)uStack_4e0);
      if (!SBORROW8(0,(longlong)pauVar64)) {
        auStack_668._8_8_ = pauStack_388;
        auStack_668._0_8_ = pauVar64;
        uStack_658._0_4_ = SUB84(pauStack_380,0);
        uStack_658._4_4_ = (int)((ulonglong)pauStack_380 >> 0x20);
        lVar29 = *(longlong *)pauVar42[6];
        uStack_650._0_4_ = uVar27;
        uStack_650._4_4_ = uVar26;
        if (lVar29 == *(longlong *)pauVar42[5]) {
          pdb_142d7e6e0(pauVar42 + 5);
        }
        lVar52 = *(longlong *)((longlong)pauVar42[5] + 8);
        auVar8._8_4_ = (uint)uStack_650;
        auVar8._0_8_ = uStack_658;
        auVar8._12_4_ = uStack_650._4_4_;
        *(undefined1 (*) [16])(lVar52 + 0x10 + lVar29 * 0x20) = auVar8;
        puVar32 = (undefined8 *)(lVar52 + lVar29 * 0x20);
        *puVar32 = auStack_668._0_8_;
        puVar32[1] = auStack_668._8_8_;
        *(longlong *)pauVar42[6] = lVar29 + 1;
        ppauVar47 = (undefined1 (**) [16])CONCAT44(uStack_4e0._4_4_,(float)uStack_4e0);
      }
      goto LAB_14082bbd0;
    }
  }
  if (auStack_4f8 != (undefined1  [8])0x0) {
    pub_1406abac0((byte *)pauStack_4f0,(longlong)auStack_4f8 * 0xc,4);
  }
  ppauVar47 = (undefined1 (**) [16])0x0;
  if (CONCAT44(uStack_4e0._4_4_,(float)uStack_4e0) != 0) {
    pub_1406abac0((byte *)CONCAT44(fStack_4d4,fStack_4d8),
                  CONCAT44(uStack_4e0._4_4_,(float)uStack_4e0) << 2,4);
    ppauVar47 = (undefined1 (**) [16])CONCAT44(uStack_4e0._4_4_,(float)uStack_4e0);
  }
  goto LAB_14082bbd0;
LAB_14082b490:
  auVar86[0] = -(auVar113[0] == -1);
  auVar86[1] = -(auVar113[1] == -1);
  auVar86[2] = -(auVar113[2] == -1);
  auVar86[3] = -(auVar113[3] == -1);
  auVar86[4] = -(auVar113[4] == -1);
  auVar86[5] = -(auVar113[5] == -1);
  auVar86[6] = -(auVar113[6] == -1);
  auVar86[7] = -(auVar113[7] == -1);
  auVar86[8] = -(auVar113[8] == -1);
  auVar86[9] = -(auVar113[9] == -1);
  auVar86[10] = -(auVar113[10] == -1);
  auVar86[0xb] = -(auVar113[0xb] == -1);
  auVar86[0xc] = -(auVar113[0xc] == -1);
  auVar86[0xd] = -(auVar113[0xd] == -1);
  auVar86[0xe] = -(auVar113[0xe] == -1);
  auVar86[0xf] = -(auVar113[0xf] == -1);
  ppauVar47 = uStack_4e0;
  uStack_2b8 = (undefined1 (*) [16])CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
  if ((((((((((((((((SUB161(auVar86 >> 7,0) & 1) != 0 || (SUB161(auVar86 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar86 >> 0x17,0) & 1) != 0) || (SUB161(auVar86 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar86 >> 0x27,0) & 1) != 0) || (SUB161(auVar86 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar86 >> 0x37,0) & 1) != 0) || (SUB161(auVar86 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar86 >> 0x47,0) & 1) != 0) || (SUB161(auVar86 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar86 >> 0x57,0) & 1) != 0) || (SUB161(auVar86 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar86 >> 0x67,0) & 1) != 0) || (SUB161(auVar86 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar86 >> 0x77,0) & 1) != 0) || auVar86[0xf] < '\0') goto LAB_14082bbd0;
  uVar60 = uVar60 + lVar59 + 0x10;
  lVar59 = lVar59 + 0x10;
  goto LAB_14082b440;
LAB_1408289c8:
  uVar33 = uVar33 & uStack_7c0;
  pcVar36 = (char *)(lStack_7c8 + uVar33);
  auVar101[0] = -(*pcVar36 == auVar70[0]);
  auVar101[1] = -(pcVar36[1] == auVar70[1]);
  auVar101[2] = -(pcVar36[2] == auVar70[2]);
  auVar101[3] = -(pcVar36[3] == auVar70[3]);
  auVar101[4] = -(pcVar36[4] == auVar70[4]);
  auVar101[5] = -(pcVar36[5] == auVar70[5]);
  auVar101[6] = -(pcVar36[6] == auVar70[6]);
  auVar101[7] = -(pcVar36[7] == auVar70[7]);
  auVar101[8] = -(pcVar36[8] == auVar70[0]);
  auVar101[9] = -(pcVar36[9] == auVar70[1]);
  auVar101[10] = -(pcVar36[10] == auVar70[2]);
  auVar101[0xb] = -(pcVar36[0xb] == auVar70[3]);
  auVar101[0xc] = -(pcVar36[0xc] == auVar70[4]);
  auVar101[0xd] = -(pcVar36[0xd] == auVar70[5]);
  auVar101[0xe] = -(pcVar36[0xe] == auVar70[6]);
  auVar101[0xf] = -(pcVar36[0xf] == auVar70[7]);
  uVar58 = (ushort)(SUB161(auVar101 >> 7,0) & 1) | (ushort)(SUB161(auVar101 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar101 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar101 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar101 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar101 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar101 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar101 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar101 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar101 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar101 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar101 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar101 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar101 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar101 >> 0x77,0) & 1) << 0xe | (ushort)(auVar101[0xf] >> 7) << 0xf;
  uVar134 = (uint)uVar58;
  while (uVar58 != 0) {
    uVar138 = 0;
    for (uVar132 = uVar134; (uVar132 & 1) == 0; uVar132 = uVar132 >> 1 | 0x80000000) {
      uVar138 = uVar138 + 1;
    }
    uVar60 = uVar138 + uVar33 & uStack_7c0;
    if ((*(int *)(lStack_7c8 + -0xc + uVar60 * -0xc) == iVar131) &&
       (*(int *)(lStack_7c8 + -8 + uVar60 * -0xc) == iVar61)) {
      fVar69 = *(float *)(lStack_7c8 + uVar60 * -0xc + -4);
      goto LAB_140828af8;
    }
    uVar58 = (ushort)(uVar134 - 1) & (ushort)uVar134;
    uVar134 = CONCAT22((short)(uVar134 - 1 >> 0x10),uVar58);
  }
  auVar77[0] = -(*pcVar36 == -1);
  auVar77[1] = -(pcVar36[1] == -1);
  auVar77[2] = -(pcVar36[2] == -1);
  auVar77[3] = -(pcVar36[3] == -1);
  auVar77[4] = -(pcVar36[4] == -1);
  auVar77[5] = -(pcVar36[5] == -1);
  auVar77[6] = -(pcVar36[6] == -1);
  auVar77[7] = -(pcVar36[7] == -1);
  auVar77[8] = -(pcVar36[8] == -1);
  auVar77[9] = -(pcVar36[9] == -1);
  auVar77[10] = -(pcVar36[10] == -1);
  auVar77[0xb] = -(pcVar36[0xb] == -1);
  auVar77[0xc] = -(pcVar36[0xc] == -1);
  auVar77[0xd] = -(pcVar36[0xd] == -1);
  auVar77[0xe] = -(pcVar36[0xe] == -1);
  auVar77[0xf] = -(pcVar36[0xf] == -1);
  fVar69 = _DAT_142e36f28;
  if ((((((((((((((((SUB161(auVar77 >> 7,0) & 1) != 0 || (SUB161(auVar77 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar77 >> 0x17,0) & 1) != 0) || (SUB161(auVar77 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar77 >> 0x27,0) & 1) != 0) || (SUB161(auVar77 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar77 >> 0x37,0) & 1) != 0) || (SUB161(auVar77 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar77 >> 0x47,0) & 1) != 0) || (SUB161(auVar77 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar77 >> 0x57,0) & 1) != 0) || (SUB161(auVar77 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar77 >> 0x67,0) & 1) != 0) || (SUB161(auVar77 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar77 >> 0x77,0) & 1) != 0) || auVar77[0xf] < '\0') goto LAB_140828af8;
  uVar33 = uVar33 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_1408289c8;
LAB_140828af8:
  pauStack_188 = (undefined1 (*) [16])CONCAT44(pauStack_188._4_4_,fVar69);
  uStack_111 = 1;
  uStack_2d8._0_4_ = (float)iVar131;
  uStack_2d8._4_4_ = (float)iVar61;
  uVar60 = pdb_1400af680(&lStack_6f8,&uStack_2d8);
  bVar41 = (byte)(uVar60 >> 0x38);
  bVar68 = bVar41 >> 1;
  auVar70 = ZEXT216(CONCAT11(bVar68,bVar68));
  auVar70 = pshuflw(auVar70,auVar70,0);
  lVar29 = 0;
  uVar33 = uVar60;
  while( true ) {
    uVar33 = uVar33 & auStack_718._8_8_;
    pcVar36 = (undefined1 *)auStack_718._0_8_ + uVar33;
    auVar102[0] = -(*pcVar36 == auVar70[0]);
    auVar102[1] = -(pcVar36[1] == auVar70[1]);
    auVar102[2] = -(pcVar36[2] == auVar70[2]);
    auVar102[3] = -(pcVar36[3] == auVar70[3]);
    auVar102[4] = -(pcVar36[4] == auVar70[4]);
    auVar102[5] = -(pcVar36[5] == auVar70[5]);
    auVar102[6] = -(pcVar36[6] == auVar70[6]);
    auVar102[7] = -(pcVar36[7] == auVar70[7]);
    auVar102[8] = -(pcVar36[8] == auVar70[0]);
    auVar102[9] = -(pcVar36[9] == auVar70[1]);
    auVar102[10] = -(pcVar36[10] == auVar70[2]);
    auVar102[0xb] = -(pcVar36[0xb] == auVar70[3]);
    auVar102[0xc] = -(pcVar36[0xc] == auVar70[4]);
    auVar102[0xd] = -(pcVar36[0xd] == auVar70[5]);
    auVar102[0xe] = -(pcVar36[0xe] == auVar70[6]);
    auVar102[0xf] = -(pcVar36[0xf] == auVar70[7]);
    uVar58 = (ushort)(SUB161(auVar102 >> 7,0) & 1) | (ushort)(SUB161(auVar102 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar102 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar102 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar102 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar102 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar102 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar102 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar102 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar102 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar102 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar102 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar102 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar102 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar102 >> 0x77,0) & 1) << 0xe | (ushort)(auVar102[0xf] >> 7) << 0xf;
    uVar134 = (uint)uVar58;
    while (ppauVar47 = uStack_4e0, uVar58 != 0) {
      uVar138 = 0;
      for (uVar132 = uVar134; (uVar132 & 1) == 0; uVar132 = uVar132 >> 1 | 0x80000000) {
        uVar138 = uVar138 + 1;
      }
      pauVar64 = (undefined1 (*) [16])
                 (auStack_718._0_8_ + (uVar138 + uVar33 & auStack_718._8_8_) * -2 * 0x10);
      if ((*(int *)pauVar64[-2] == iVar131) && (*(int *)(pauVar64[-2] + 4) == iVar61))
      goto LAB_140828c4e;
      uVar58 = (ushort)(uVar134 - 1) & (ushort)uVar134;
      uVar134 = CONCAT22((short)(uVar134 - 1 >> 0x10),uVar58);
    }
    auVar78[0] = -(*pcVar36 == -1);
    auVar78[1] = -(pcVar36[1] == -1);
    auVar78[2] = -(pcVar36[2] == -1);
    auVar78[3] = -(pcVar36[3] == -1);
    auVar78[4] = -(pcVar36[4] == -1);
    auVar78[5] = -(pcVar36[5] == -1);
    auVar78[6] = -(pcVar36[6] == -1);
    auVar78[7] = -(pcVar36[7] == -1);
    auVar78[8] = -(pcVar36[8] == -1);
    auVar78[9] = -(pcVar36[9] == -1);
    auVar78[10] = -(pcVar36[10] == -1);
    auVar78[0xb] = -(pcVar36[0xb] == -1);
    auVar78[0xc] = -(pcVar36[0xc] == -1);
    auVar78[0xd] = -(pcVar36[0xd] == -1);
    auVar78[0xe] = -(pcVar36[0xe] == -1);
    auVar78[0xf] = -(pcVar36[0xf] == -1);
    if ((((((((((((((((SUB161(auVar78 >> 7,0) & 1) != 0 || (SUB161(auVar78 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar78 >> 0x17,0) & 1) != 0) || (SUB161(auVar78 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar78 >> 0x27,0) & 1) != 0) || (SUB161(auVar78 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar78 >> 0x37,0) & 1) != 0) || (SUB161(auVar78 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar78 >> 0x47,0) & 1) != 0) || (SUB161(auVar78 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar78 >> 0x57,0) & 1) != 0) || (SUB161(auVar78 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar78 >> 0x67,0) & 1) != 0) || (SUB161(auVar78 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar78 >> 0x77,0) & 1) != 0) || auVar78[0xf] < '\0') break;
    uVar33 = uVar33 + lVar29 + 0x10;
    lVar29 = lVar29 + 0x10;
  }
  if (uStack_708 == 0) {
    uStack_111 = 1;
    pdb_142ddce40(auStack_718,1,&lStack_6f8,CONCAT71((int7)(uVar33 >> 8),1));
    ppauVar47 = uStack_4e0;
  }
  uVar60 = uVar60 & auStack_718._8_8_;
  auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_718._0_8_ + uVar60);
  uVar58 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar70[0xf] >> 7) << 0xf
  ;
  uVar134 = (uint)uVar58;
  if (uVar58 == 0) {
    lVar29 = 0x10;
    do {
      uVar60 = uVar60 + lVar29 & auStack_718._8_8_;
      auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_718._0_8_ + uVar60);
      lVar29 = lVar29 + 0x10;
      uVar134 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
    } while (uVar134 == 0);
  }
  uVar138 = 0;
  for (; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000) {
    uVar138 = uVar138 + 1;
  }
  uVar33 = uVar138 + uVar60 & auStack_718._8_8_;
  bVar68 = (*(undefined1 (*) [16])auStack_718._0_8_)[uVar33];
  if (-1 < (char)bVar68) {
    auVar70 = *(undefined1 (*) [16])auStack_718._0_8_;
    uVar134 = 0;
    for (uVar138 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar70[0xf] >> 7) << 0xf); (uVar138 & 1) == 0;
        uVar138 = uVar138 >> 1 | 0x80000000) {
      uVar134 = uVar134 + 1;
    }
    uVar33 = (ulonglong)uVar134;
    bVar68 = (*(undefined1 (*) [16])auStack_718._0_8_)[uVar33];
  }
  bVar41 = bVar41 >> 1;
  (*(undefined1 (*) [16])auStack_718._0_8_)[uVar33] = bVar41;
  (*(undefined1 (*) [16])(auStack_718._0_8_ + 0x10))[uVar33 - 0x10 & auStack_718._8_8_] = bVar41;
  pauVar64 = (undefined1 (*) [16])(auStack_718._0_8_ + uVar33 * -2 * 0x10);
  *(ulonglong *)*(undefined1 (*) [16])(auStack_718._0_8_ + (uVar33 * -2 + -2) * 0x10) = uVar30;
  *(undefined4 *)(pauVar64[-2] + 8) = 0;
  *(undefined8 *)(pauVar64[-1] + 8) = 0;
  auVar79._0_8_ = CONCAT71(0,bVar68 & 1);
  auVar79._8_4_ = unaff_XMM13_Dc;
  auVar79._12_4_ = unaff_XMM13_Dd;
  uStack_708 = uStack_708 - auVar79._0_8_;
  uStack_700 = uStack_700 - auVar79._8_8_;
LAB_140828c4e:
  uVar53 = uStack_47c;
  uVar138 = uStack_480;
  iVar131 = iStack_488;
  uVar28 = uStack_48c;
  uVar134 = uStack_490;
  uStack_4e0._4_4_ = (float)((ulonglong)ppauVar47 >> 0x20);
  uStack_4e0._0_4_ = SUB84(ppauVar47,0);
  uStack_358 = CONCAT44(fStack_4c4,fStack_4c8);
  auStack_378._8_4_ = (float)uStack_4e0;
  auStack_378._0_8_ = pauStack_4e8;
  auStack_378._12_4_ = uStack_4e0._4_4_;
  auStack_368._4_4_ = fStack_4d4;
  auStack_368._0_4_ = fStack_4d8;
  auStack_368._8_4_ = fStack_4d0;
  auStack_368._12_4_ = uStack_4cc;
  pauStack_388 = (undefined1 (*) [16])auStack_4f8;
  pauStack_380 = pauStack_4f0;
  pbStack_738 = pbStack_4b0;
  lStack_748 = CONCAT44(uStack_4bc,uStack_4c0);
  pauStack_740 = pauStack_4b8;
  puStack_6b8 = puStack_498;
  puStack_6c8 = puStack_4a8;
  pfStack_6c0 = pfStack_4a0;
  auStack_1a8._0_4_ = uStack_478;
  auStack_148[0] = (undefined1)uStack_45c;
  auStack_168._0_4_ = fStack_460;
  auStack_128[0] = uStack_45c._1_1_;
  uStack_3b0 = CONCAT44(fStack_464,fStack_468);
  if (puStack_498 != (uint *)0x0) {
    uVar30 = (longlong)puStack_498 * 4 - 4;
    pfVar55 = pfStack_4a0;
    if (0x1b < uVar30) {
      uVar30 = (uVar30 >> 2) + 1;
      uVar33 = uVar30 & 0xfffffffffffffff8;
      pfVar55 = pfStack_4a0 + uVar33;
      uVar60 = 0;
      do {
        pfVar44 = pfStack_4a0 + uVar60;
        fVar69 = pfVar44[1];
        fVar98 = pfVar44[2];
        fVar121 = pfVar44[3];
        pfVar40 = pfStack_4a0 + uVar60 + 4;
        auVar80._0_4_ = *pfVar40 + unaff_XMM8._0_4_;
        auVar80._4_4_ = pfVar40[1] + unaff_XMM8._4_4_;
        auVar80._8_4_ = pfVar40[2] + unaff_XMM8._8_4_;
        auVar80._12_4_ = pfVar40[3] + unaff_XMM8._12_4_;
        pfVar40 = pfStack_4a0 + uVar60;
        *pfVar40 = *pfVar44 + unaff_XMM8._0_4_;
        pfVar40[1] = fVar69 + unaff_XMM8._4_4_;
        pfVar40[2] = fVar98 + unaff_XMM8._8_4_;
        pfVar40[3] = fVar121 + unaff_XMM8._12_4_;
        *(undefined1 (*) [16])(pfStack_4a0 + uVar60 + 4) = auVar80;
        uVar60 = uVar60 + 8;
      } while (uVar33 != uVar60);
      if (uVar30 == uVar33) goto LAB_140828db6;
    }
    do {
      *pfVar55 = *pfVar55 + unaff_XMM12_Da;
      pfVar55 = pfVar55 + 1;
    } while (pfVar55 != pfStack_4a0 + (longlong)puStack_498);
  }
LAB_140828db6:
  uStack_4e0 = ppauVar47;
  pdb_140c9aac0(&uStack_2d8,pauStack_4f0,pauStack_4e8);
  pauVar42 = (undefined1 (*) [16])CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
  if (SBORROW8(0,(longlong)pauVar42)) {
LAB_140828de4:
    if (puStack_6c8 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)pfStack_6c0,(longlong)puStack_6c8 << 2,4);
    }
    lVar52 = -0x8000000000000000;
  }
  else {
    pauStack_180 = (undefined1 (*) [16])CONCAT44(pauStack_180._4_4_,iVar131);
    pfVar55 = (float *)CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0);
    lVar29 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8);
    if (lVar29 == 0) {
      if (pauVar42 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pfVar55,(longlong)pauVar42 * 0xc,4);
      }
      goto LAB_140828de4;
    }
    pauStack_398 = pauVar42;
    pfStack_198 = pfVar55;
    pdb_140c9ac70(pfVar55,lVar29);
    pauStack_3e8 = (undefined1 (*) [16])(lVar29 + -1);
    uStack_6a8 = uVar134 & 1;
    uStack_6a0 = uVar138 & 1;
    uStack_6a4 = uVar28;
    uStack_69c = uVar53;
    pfVar55 = pfStack_198 + lVar29 * 3;
    uStack_2d8._0_4_ = SUB84(pfStack_198,0);
    uStack_2d8._4_4_ = (float)((ulonglong)pfStack_198 >> 0x20);
    uStack_2c8._0_4_ = 0;
    uStack_2c8._4_4_ = 0;
    uStack_2c0 = (ushort)&uStack_6a8;
    uStack_2be = (undefined2)((ulonglong)&uStack_6a8 >> 0x10);
    iStack_2bc = (int)((ulonglong)&uStack_6a8 >> 0x20);
    uStack_2b8 = (undefined1 (*) [16])&pauStack_3e8;
    uStack_2b0 = &pauStack_388;
    uStack_2a8 = (undefined1 (*) [16])&puStack_6c8;
    uStack_2a0 = &lStack_748;
    pauStack_298 = pauStack_2f8;
    uStack_290 = (undefined4)uStack_5b0;
    uStack_28c = (uint)((ulonglong)uStack_5b0 >> 0x20);
    uStack_2d0 = (undefined1 (*) [16])pfVar55;
    pdb_1413e86f0(&lStack_410,&uStack_2d8);
    pauVar42 = pauStack_400;
    cVar25 = auStack_148[0];
    if ((*(int *)(pauVar64[-2] + 8) != 1) ||
       (fVar69 = *(float *)pauVar64[-1] - pfStack_198[1],
       fVar98 = *(float *)(pauVar64[-2] + 0xc) - *pfStack_198,
       fVar121 = *(float *)(pauVar64[-1] + 4) - pfStack_198[2],
       unaff_XMM14_Da <= fVar121 * fVar121 + fVar69 * fVar69 + fVar98 * fVar98)) {
      lStack_178 = *(longlong *)(pauVar64[-1] + 8);
    }
    else {
      lStack_178 = *(longlong *)(pauVar64[-1] + 8) + -1 +
                   (ulonglong)(*(longlong *)(pauVar64[-1] + 8) == 0);
    }
    *(longlong *)(pauVar64[-1] + 8) = lVar29 + lStack_178;
    pfVar44 = pfVar55 + -3;
    if (pfVar44 != (float *)0x0) {
      uStack_2d0._0_4_ = pfVar55[-1];
      uStack_2d8._0_4_ = (float)*(undefined8 *)pfVar44;
      uStack_2d8._4_4_ = (float)((ulonglong)*(undefined8 *)pfVar44 >> 0x20);
    }
    uVar30 = (ulonglong)pauStack_180 & 0xffffffff;
    *(uint *)(pauVar64[-2] + 8) = (uint)(pfVar44 != (float *)0x0);
    *(float *)(pauVar64[-1] + 4) = (float)uStack_2d0;
    *(ulonglong *)(pauVar64[-2] + 0xc) = CONCAT44(uStack_2d8._4_4_,(float)uStack_2d8);
    uVar28 = _DAT_142f95160;
    if (auStack_128[0] != '\x01') {
      uVar28 = 0;
    }
    uStack_300 = (uint)(auStack_128[0] == '\x01');
    uStack_2fc = 0x3f400000;
    if (pauStack_400 == (undefined1 (*) [16])0x0) {
      pbVar34 = (byte *)0x1;
      pauVar64 = (undefined1 (*) [16])0x0;
    }
    else {
      pdb_14007ee60();
      pbVar34 = pub_1406abab0((ulonglong)pauVar42,1);
      if (pbVar34 == (byte *)0x0) {
        pdb_142dc7e2a(1,pauVar42);
        goto LAB_14082eee9;
      }
      if (cVar25 == '\0') {
        bVar41 = 1;
        if (((char)uStack_6a8 == '\0') && (bVar41 = 0, pauStack_3e8 == (undefined1 (*) [16])0x0)) {
          bVar41 = (byte)uStack_6a0;
        }
      }
      else {
        bVar41 = 0;
      }
      *pbVar34 = bVar41;
      pauVar64 = pauStack_400;
      if (pauVar42 != (undefined1 (*) [16])0x1) {
        pauVar62 = (undefined1 (*) [16])0x1;
        if ((undefined1 (*) [16])0x4 < pauVar42) {
          uVar33 = (longlong)pauVar42[-1] + 0xf;
          iVar131 = (int)pauStack_3e8;
          iVar61 = (int)((ulonglong)pauStack_3e8 >> 0x20);
          if (pauVar42 < (undefined1 (*) [16])0x11) {
            lVar29 = 1;
            uVar60 = 0;
          }
          else {
            pauStack_170 = (undefined1 (*) [16])CONCAT44(pauStack_170._4_4_,uVar28);
            uVar60 = uVar33 & 0xfffffffffffffff0;
            lVar29 = uVar60 + 1;
            pauStack_5a8 = pauStack_3e8;
            uStack_5a0 = 0;
            auVar70 = pshuflw(ZEXT216(CONCAT11((byte)uStack_6a0,(byte)uStack_6a0)),
                              ZEXT216(CONCAT11((byte)uStack_6a0,(byte)uStack_6a0)),0);
            auStack_3f8._0_8_ = auVar70._0_8_;
            auStack_3f8._8_4_ = auVar70._0_4_;
            auStack_3f8._12_4_ = auVar70._4_4_;
            uVar43 = 0;
            auVar135 = _DAT_143009dd0;
            auVar139 = _DAT_143009dc0;
            auVar142 = _DAT_143009db0;
            auVar144 = _DAT_143009da0;
            auVar151 = _DAT_143009d90;
            auVar153 = _DAT_143009d80;
            auVar155 = _DAT_143009d70;
            auVar159 = _DAT_143006db0;
            do {
              auVar70 = (undefined1  [16])0x0;
              lVar160 = auVar159._8_8_;
              lVar52 = auVar135._8_8_;
              lVar59 = auVar139._8_8_;
              lVar56 = auVar142._8_8_;
              lVar54 = auVar144._8_8_;
              lVar152 = auVar151._8_8_;
              lVar154 = auVar153._8_8_;
              lVar157 = auVar155._8_8_;
              if (cVar25 == '\0') {
                auVar123._0_4_ = -(uint)(auVar159._0_4_ == iVar131);
                auVar123._4_4_ = -(uint)(auVar159._4_4_ == iVar61);
                auVar123._8_4_ = -(uint)(auVar159._8_4_ == iVar131);
                auVar123._12_4_ = -(uint)(auVar159._12_4_ == iVar61);
                auVar71._4_4_ = auVar123._0_4_;
                auVar71._0_4_ = auVar123._4_4_;
                auVar71._8_4_ = auVar123._12_4_;
                auVar71._12_4_ = auVar123._8_4_;
                auVar124._0_4_ = -(uint)(auVar135._0_4_ == iVar131);
                auVar124._4_4_ = -(uint)(auVar135._4_4_ == iVar61);
                auVar124._8_4_ = -(uint)(auVar135._8_4_ == iVar131);
                auVar124._12_4_ = -(uint)(auVar135._12_4_ == iVar61);
                auVar103._4_4_ = auVar124._0_4_;
                auVar103._0_4_ = auVar124._4_4_;
                auVar103._8_4_ = auVar124._12_4_;
                auVar103._12_4_ = auVar124._8_4_;
                auVar70 = packssdw(auVar71 & auVar123,auVar103 & auVar124);
                auVar104._0_4_ = -(uint)(auVar139._0_4_ == iVar131);
                auVar104._4_4_ = -(uint)(auVar139._4_4_ == iVar61);
                auVar104._8_4_ = -(uint)(auVar139._8_4_ == iVar131);
                auVar104._12_4_ = -(uint)(auVar139._12_4_ == iVar61);
                auVar125._4_4_ = auVar104._0_4_;
                auVar125._0_4_ = auVar104._4_4_;
                auVar125._8_4_ = auVar104._12_4_;
                auVar125._12_4_ = auVar104._8_4_;
                auVar105._0_4_ = -(uint)(auVar142._0_4_ == iVar131);
                auVar105._4_4_ = -(uint)(auVar142._4_4_ == iVar61);
                auVar105._8_4_ = -(uint)(auVar142._8_4_ == iVar131);
                auVar105._12_4_ = -(uint)(auVar142._12_4_ == iVar61);
                auVar161._4_4_ = auVar105._0_4_;
                auVar161._0_4_ = auVar105._4_4_;
                auVar161._8_4_ = auVar105._12_4_;
                auVar161._12_4_ = auVar105._8_4_;
                auVar137 = packssdw(auVar125 & auVar104,auVar161 & auVar105);
                auVar70 = packssdw(auVar70,auVar137);
                auVar106._0_4_ = -(uint)(auVar144._0_4_ == iVar131);
                auVar106._4_4_ = -(uint)(auVar144._4_4_ == iVar61);
                auVar106._8_4_ = -(uint)(auVar144._8_4_ == iVar131);
                auVar106._12_4_ = -(uint)(auVar144._12_4_ == iVar61);
                auVar126._4_4_ = auVar106._0_4_;
                auVar126._0_4_ = auVar106._4_4_;
                auVar126._8_4_ = auVar106._12_4_;
                auVar126._12_4_ = auVar106._8_4_;
                auVar107._0_4_ = -(uint)(auVar151._0_4_ == iVar131);
                auVar107._4_4_ = -(uint)(auVar151._4_4_ == iVar61);
                auVar107._8_4_ = -(uint)(auVar151._8_4_ == iVar131);
                auVar107._12_4_ = -(uint)(auVar151._12_4_ == iVar61);
                auVar162._4_4_ = auVar107._0_4_;
                auVar162._0_4_ = auVar107._4_4_;
                auVar162._8_4_ = auVar107._12_4_;
                auVar162._12_4_ = auVar107._8_4_;
                auVar137 = packssdw(auVar126 & auVar106,auVar162 & auVar107);
                auVar108._0_4_ = -(uint)(auVar153._0_4_ == iVar131);
                auVar108._4_4_ = -(uint)(auVar153._4_4_ == iVar61);
                auVar108._8_4_ = -(uint)(auVar153._8_4_ == iVar131);
                auVar108._12_4_ = -(uint)(auVar153._12_4_ == iVar61);
                auVar163._4_4_ = auVar108._0_4_;
                auVar163._0_4_ = auVar108._4_4_;
                auVar163._8_4_ = auVar108._12_4_;
                auVar163._12_4_ = auVar108._8_4_;
                auVar109._0_4_ = -(uint)(auVar155._0_4_ == iVar131);
                auVar109._4_4_ = -(uint)(auVar155._4_4_ == iVar61);
                auVar109._8_4_ = -(uint)(auVar155._8_4_ == iVar131);
                auVar109._12_4_ = -(uint)(auVar155._12_4_ == iVar61);
                auVar145._4_4_ = auVar109._0_4_;
                auVar145._0_4_ = auVar109._4_4_;
                auVar145._8_4_ = auVar109._12_4_;
                auVar145._12_4_ = auVar109._8_4_;
                auVar164 = packssdw(auVar163 & auVar108,auVar145 & auVar109);
                auVar137 = packssdw(auVar137,auVar164);
                auVar70 = packsswb(auVar70,auVar137);
                auVar70 = auVar70 & auStack_3f8;
                unaff_XMM14_Da = _DAT_143009d64;
              }
              *(undefined1 (*) [16])(pbVar34 + 1 + uVar43) = auVar70;
              uVar43 = uVar43 + 0x10;
              auVar159._0_8_ = auVar159._0_8_ + _DAT_1430077f0;
              auVar159._8_8_ = lVar160 + _UNK_1430077f8;
              auVar135._0_8_ = auVar135._0_8_ + _DAT_1430077f0;
              auVar135._8_8_ = lVar52 + _UNK_1430077f8;
              auVar139._0_8_ = auVar139._0_8_ + _DAT_1430077f0;
              auVar139._8_8_ = lVar59 + _UNK_1430077f8;
              auVar142._0_8_ = auVar142._0_8_ + _DAT_1430077f0;
              auVar142._8_8_ = lVar56 + _UNK_1430077f8;
              auVar144._0_8_ = auVar144._0_8_ + _DAT_1430077f0;
              auVar144._8_8_ = lVar54 + _UNK_1430077f8;
              auVar151._0_8_ = auVar151._0_8_ + _DAT_1430077f0;
              auVar151._8_8_ = lVar152 + _UNK_1430077f8;
              auVar153._0_8_ = auVar153._0_8_ + _DAT_1430077f0;
              auVar153._8_8_ = lVar154 + _UNK_1430077f8;
              auVar155._0_8_ = auVar155._0_8_ + _DAT_1430077f0;
              auVar155._8_8_ = lVar157 + _UNK_1430077f8;
            } while (uVar60 != uVar43);
            unaff_XMM8 = _DAT_143009d50;
            unaff_XMM11 = _DAT_14300a190;
            unaff_XMM10_Da = _DAT_14300a1a0;
            unaff_XMM10_Db = _UNK_14300a1a4;
            unaff_XMM10_Dc = _UNK_14300a1a8;
            unaff_XMM10_Dd = _UNK_14300a1ac;
            unaff_XMM13_Dc = _UNK_142e47bf8;
            unaff_XMM13_Dd = _UNK_142e47bfc;
            unaff_XMM12_Da = _DAT_143009d60;
            if (uVar33 == uVar60) goto LAB_1408296e7;
            if ((uVar33 & 0xc) == 0) {
              pauVar62 = (undefined1 (*) [16])(uVar60 | 1);
              goto LAB_1408296c0;
            }
          }
          uVar43 = uVar33 & 0xfffffffffffffffc;
          pauVar62 = (undefined1 (*) [16])(uVar43 + 1);
          auVar70 = pshuflw(ZEXT216(CONCAT11((byte)uStack_6a0,(byte)uStack_6a0)),
                            ZEXT216(CONCAT11((byte)uStack_6a0,(byte)uStack_6a0)),0);
          auVar110._8_4_ = (int)lVar29;
          auVar110._0_8_ = lVar29;
          auVar110._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
          auVar127._0_8_ = lVar29 + _DAT_1430077e0;
          auVar127._8_8_ = auVar110._8_8_ + _UNK_1430077e8;
          auVar111._0_8_ = lVar29 + _DAT_142e4ff80;
          auVar111._8_8_ = auVar110._8_8_ + _UNK_142e4ff88;
          do {
            uVar132 = 0;
            lVar29 = auVar111._8_8_;
            lVar52 = auVar127._8_8_;
            if (cVar25 == '\0') {
              auVar140._0_4_ = -(uint)(auVar111._0_4_ == iVar131);
              auVar140._4_4_ = -(uint)(auVar111._4_4_ == iVar61);
              auVar140._8_4_ = -(uint)(auVar111._8_4_ == iVar131);
              auVar140._12_4_ = -(uint)(auVar111._12_4_ == iVar61);
              auVar136._4_4_ = auVar140._0_4_;
              auVar136._0_4_ = auVar140._4_4_;
              auVar136._8_4_ = auVar140._12_4_;
              auVar136._12_4_ = auVar140._8_4_;
              auVar141._0_4_ = -(uint)(auVar127._0_4_ == iVar131);
              auVar141._4_4_ = -(uint)(auVar127._4_4_ == iVar61);
              auVar141._8_4_ = -(uint)(auVar127._8_4_ == iVar131);
              auVar141._12_4_ = -(uint)(auVar127._12_4_ == iVar61);
              auVar143._4_4_ = auVar141._0_4_;
              auVar143._0_4_ = auVar141._4_4_;
              auVar143._8_4_ = auVar141._12_4_;
              auVar143._12_4_ = auVar141._8_4_;
              auVar137 = packssdw(auVar136 & auVar140,auVar143 & auVar141);
              auVar137 = packssdw(auVar137,auVar137);
              auVar137 = packsswb(auVar137,auVar137);
              uVar132 = auVar137._0_4_ & auVar70._0_4_;
            }
            *(uint *)(pbVar34 + 1 + uVar60) = uVar132;
            uVar60 = uVar60 + 4;
            auVar111._0_8_ = auVar111._0_8_ + (longlong)DAT_142e4ffa0;
            auVar111._8_8_ = lVar29 + DAT_142e4ffa0._8_8_;
            auVar127._0_8_ = auVar127._0_8_ + (longlong)DAT_142e4ffa0;
            auVar127._8_8_ = lVar52 + DAT_142e4ffa0._8_8_;
          } while (uVar43 != uVar60);
          if (uVar33 == uVar43) goto LAB_1408296e7;
        }
LAB_1408296c0:
        do {
          bVar41 = 0;
          if (pauStack_3e8 == pauVar62) {
            bVar41 = (byte)uStack_6a0;
          }
          if (cVar25 != '\0') {
            bVar41 = 0;
          }
          pbVar34[(longlong)pauVar62] = bVar41;
          pauVar62 = (undefined1 (*) [16])((longlong)*pauVar62 + 1);
        } while (pauVar42 != pauVar62);
      }
    }
LAB_1408296e7:
    pauStack_590 = pauVar42;
    pauStack_580 = pauVar42;
    uStack_2d0 = (undefined1 (*) [16])(pfStack_408 + (longlong)pauVar64 * 0x10);
    uStack_2d8._0_4_ = SUB84(pfStack_408,0);
    uStack_2d8._4_4_ = (float)((ulonglong)pfStack_408 >> 0x20);
    uStack_2c8._0_4_ = 0;
    uStack_2c8._4_4_ = 0;
    uStack_2c0 = (ushort)&pauStack_590;
    uStack_2be = (undefined2)((ulonglong)&pauStack_590 >> 0x10);
    iStack_2bc = (int)((ulonglong)&pauStack_590 >> 0x20);
    pbStack_588 = pbVar34;
    pdb_1413ea060(&uStack_760,&uStack_2d8);
    uStack_2d0 = (undefined1 (*) [16])(pfStack_408 + (longlong)pauStack_400 * 0x10);
    uStack_2d8._0_4_ = SUB84(pfStack_408,0);
    uStack_2d8._4_4_ = (float)((ulonglong)pfStack_408 >> 0x20);
    uStack_2c8 = &uStack_300;
    pdb_1413ee370(&lStack_6e0,&uStack_2d8);
    pfStack_3d0 = pfStack_408 + (longlong)pauStack_400 * 0x10;
    lStack_680 = 0;
    lStack_678 = 8;
    lStack_670 = 0;
    uVar53 = 0x1c0;
    if (auStack_128[0] == '\x01') {
      uVar53 = 0x40;
    }
    pauStack_5a8 = (undefined1 (*) [16])CONCAT44(pauStack_5a8._4_4_,uVar53);
    pauStack_390 = (undefined1 (*) [16])CONCAT44(pauStack_390._4_4_,(uint)(uVar138 != 2));
    puStack_3c8 = (undefined4 *)CONCAT44(puStack_3c8._4_4_,(uint)(uVar134 != 2));
    pfVar55 = pfStack_3d0;
    pfVar44 = pfStack_408;
    pauVar64 = (undefined1 (*) [16])0x0;
    uVar138 = (uint)(uVar138 != 2);
    uVar134 = (uint)(uVar134 != 2);
    while (pauVar42 = pauVar64, pfVar40 = pfVar44, pfVar40 != pfVar55) {
      if (pauStack_750 <= pauVar42) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar42,pauStack_750,&UNK_14300a060);
      }
      pauVar64 = (undefined1 (*) [16])((longlong)*pauVar42 + 1);
      pfVar44 = pfVar40 + 0x10;
      if (pbStack_758[(longlong)pauVar42] == 1) {
        auStack_128._0_8_ = pfVar40 + 0x10;
        uVar132 = 2;
        if (pauVar42 == pauStack_3e8) {
          uVar132 = uVar138;
        }
        uStack_2b8 = (undefined1 (*) [16])((longlong)pauVar42[-1] + 0xf);
        uVar53 = auStack_1a8._0_4_;
        if (pauVar42 == (undefined1 (*) [16])0x0) {
          uVar132 = uVar134;
          uVar53 = (int)uVar30;
        }
        uStack_2d8._0_4_ = 1.4013e-45;
        uStack_2d8._4_4_ = 0.0;
        uStack_2d0._0_4_ = 0.0;
        uStack_2d0._4_4_ = 0;
        uStack_2c8._0_4_ = 2;
        uStack_2c8._4_4_ = 0;
        uStack_2c0 = (ushort)(pauVar42 != (undefined1 (*) [16])0x0);
        uStack_2be = 0;
        iStack_2bc = 0;
        uStack_2b0._0_4_ = (float)(uint)(pauVar42 < pauStack_3e8);
        uStack_2b0._4_4_ = 0;
        auStack_3f8._0_8_ = pauVar64;
        uStack_2a0._0_4_ = 2.8026e-45;
        uStack_2a0._4_4_ = 0;
        uStack_290 = 2;
        uStack_28c = 0;
        pbStack_280 = (byte *)&lStack_410;
        puStack_278 = &uStack_3b0;
        uStack_268 = &uStack_300;
        uStack_270 = pfVar40;
        uStack_2a8 = pauVar64;
        pdb_1413e8130(&pauStack_778,&uStack_2d8);
        lVar29 = lStack_6d8;
        uStack_320._4_4_ = pfVar40[0xb];
        uStack_324 = (undefined4)*(undefined8 *)(pfVar40 + 9);
        uStack_320._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(pfVar40 + 9) >> 0x20);
        fStack_310 = pfVar40[0xe];
        uStack_318 = (undefined4)*(undefined8 *)(pfVar40 + 0xc);
        uStack_314 = (undefined4)((ulonglong)*(undefined8 *)(pfVar40 + 0xc) >> 0x20);
        fVar69 = pfVar40[0xf];
        pauStack_348 = *(undefined1 (**) [16])pfVar40;
        pauStack_340 = *(undefined1 (**) [16])(pfVar40 + 2);
        uStack_338._0_4_ = (undefined4)*(undefined8 *)(pfVar40 + 4);
        uStack_338._4_4_ = (uint)((ulonglong)*(undefined8 *)(pfVar40 + 4) >> 0x20);
        uStack_330._0_4_ = (float)*(undefined8 *)(pfVar40 + 6);
        uStack_330._4_4_ = (float)((ulonglong)*(undefined8 *)(pfVar40 + 6) >> 0x20);
        fStack_328 = pfVar40[8];
        if (pauStack_6d0 <= pauVar42) {
          uStack_112 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pauVar42,pauStack_6d0,&UNK_14300a078);
        }
        lVar52 = (longlong)pauVar42 * 0x50;
        pbVar34 = *(byte **)(lStack_6d8 + 0x10 + lVar52);
        uVar30 = (longlong)pbVar34 * 0x2c;
        if ((byte *)0x2e8ba2e8ba2e8ba < pbVar34) {
          uVar48 = 0;
LAB_14082b08e:
          uStack_112 = 1;
          pdb_142dc7e2a(uVar48,uVar30);
          goto LAB_14082eee9;
        }
        pbVar35 = *(byte **)(lStack_6d8 + 8 + lVar52);
        pbStack_190 = pbVar34;
        if (uVar30 == 0) {
          pauStack_170 = (undefined1 (*) [16])0x4;
          pbStack_3c0 = (byte *)0x0;
          pbVar34 = pbStack_3c0;
        }
        else {
          pbStack_3b8 = pbVar35;
          pdb_14007ee60();
          uVar48 = 4;
          pauStack_170 = (undefined1 (*) [16])pub_1406abab0(uVar30,4);
          pbVar35 = pbStack_3b8;
          pbVar34 = pbStack_190;
          if (pauStack_170 == (undefined1 (*) [16])0x0) goto LAB_14082b08e;
        }
        pbStack_3c0 = pbVar34;
        if (pbStack_190 != (byte *)0x0) {
          pub_142e32760(pauStack_170,pbVar35);
        }
        lVar29 = lVar29 + lVar52;
        pdb_1413e6d40(&puStack_2f0,lVar29 + 0x18);
        pauVar64 = *(undefined1 (**) [16])(lVar29 + 0x40);
        uVar30 = (longlong)pauVar64 * 0xc;
        if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauVar64) {
          uVar48 = 0;
LAB_14082e8b2:
          pdb_142dc7e2a(uVar48,uVar30);
          goto LAB_14082eee9;
        }
        uVar5 = *(undefined8 *)(lVar29 + 0x38);
        if (uVar30 == 0) {
          pbVar35 = (byte *)0x4;
          pauVar62 = (undefined1 (*) [16])0x0;
          pbVar34 = pbStack_3b8;
        }
        else {
          pdb_14007ee60();
          pbVar35 = pub_1406abab0(uVar30,4);
          uVar48 = 4;
          pauVar62 = pauVar64;
          pbVar34 = pbStack_3b8;
          if (pbVar35 == (byte *)0x0) goto LAB_14082e8b2;
        }
        pbStack_3b8 = pbVar35;
        pbVar35 = pbStack_3b8;
        if (pauVar64 != (undefined1 (*) [16])0x0) {
          pub_142e32760(pbStack_3b8,uVar5,uVar30);
          pbVar35 = pbStack_3b8;
          pbVar34 = pbStack_3b8;
        }
        pbStack_3b8 = pbVar34;
        lVar52 = lStack_670;
        uStack_290 = *(undefined4 *)(lVar29 + 0x48);
        uStack_2b0._0_4_ = SUB84(pauStack_2e0,0);
        uStack_2b0._4_4_ = (undefined4)((ulonglong)pauStack_2e0 >> 0x20);
        uStack_2c0 = (ushort)puStack_2f0;
        uStack_2be = (undefined2)((ulonglong)puStack_2f0 >> 0x10);
        iStack_2bc = (int)((ulonglong)puStack_2f0 >> 0x20);
        uStack_2b8._0_4_ = SUB84(pauStack_2e8,0);
        uStack_2b8._4_4_ = (float)((ulonglong)pauStack_2e8 >> 0x20);
        puStack_278 = puStack_768;
        pauStack_288 = pauStack_778;
        pbStack_280 = pbStack_770;
        uStack_22c = CONCAT44(fStack_310,uStack_314);
        uStack_230 = uStack_318;
        auStack_250._4_4_ = uStack_338._4_4_;
        auStack_250._0_4_ = (undefined4)uStack_338;
        auStack_250._8_4_ = (float)uStack_330;
        auStack_250._12_4_ = uStack_330._4_4_;
        pfStack_240 = (float *)CONCAT44(uStack_324,fStack_328);
        uStack_238 = (undefined4)uStack_320;
        fStack_234 = uStack_320._4_4_;
        pauStack_260 = pauStack_348;
        pauStack_258 = pauStack_340;
        uStack_210 = pauStack_188._0_4_;
        uStack_220 = uStack_3b0;
        lStack_218 = (longlong)*pauVar42 + lStack_178;
        uStack_268 = (uint *)CONCAT44(uVar53,uVar132);
        uStack_200 = auStack_148[0];
        uStack_20c = auStack_168._0_4_;
        uStack_270 = (float *)CONCAT44(uStack_2fc,uStack_300);
        uStack_204 = pauStack_5a8._0_4_;
        uStack_2d8._0_4_ = SUB84(pbStack_3c0,0);
        uStack_2d8._4_4_ = (float)((ulonglong)pbStack_3c0 >> 0x20);
        uStack_2d0._0_4_ = SUB84(pauStack_170,0);
        uStack_2d0._4_4_ = (int)((ulonglong)pauStack_170 >> 0x20);
        uStack_2c8._0_4_ = SUB84(pbStack_190,0);
        uStack_2c8._4_4_ = (uint)((ulonglong)pbStack_190 >> 0x20);
        uStack_2a8._0_4_ = SUB84(pauVar62,0);
        uStack_2a8._4_4_ = (float)((ulonglong)pauVar62 >> 0x20);
        uStack_2a0._0_4_ = SUB84(pbVar35,0);
        uStack_2a0._4_4_ = (undefined4)((ulonglong)pbVar35 >> 0x20);
        pauStack_298 = pauVar64;
        fStack_224 = fVar69;
        uStack_208 = uVar28;
        if (lStack_670 == lStack_680) {
          pdb_142d8da90(&lStack_680);
        }
        pub_142e32760(lVar52 * 0xe0 + lStack_678,&uStack_2d8,0xe0);
        lStack_670 = lVar52 + 1;
        uVar30 = (ulonglong)pauStack_180 & 0xffffffff;
        pfVar55 = pfStack_3d0;
        pfVar44 = (float *)auStack_128._0_8_;
        pauVar64 = (undefined1 (*) [16])auStack_3f8._0_8_;
        uVar138 = (uint)pauStack_390;
        uVar134 = (uint)puStack_3c8;
      }
    }
    pauStack_698 = (undefined1 (*) [16])0x0;
    lStack_690 = 8;
    pauStack_688 = (undefined1 (*) [16])0x0;
    if ((undefined1 (*) [16])0x1 < pauStack_400) {
      pauStack_340 = (undefined1 (*) [16])0x2;
      uStack_338._0_4_ = 0;
      uStack_338._4_4_ = 0;
      uStack_330._0_4_ = 1.4013e-45;
      uStack_330._4_4_ = 0.0;
      fStack_328 = SUB84(pauStack_3e8,0);
      uStack_324 = (undefined4)((ulonglong)pauStack_3e8 >> 0x20);
      lVar29 = (longlong)pauStack_3e8[-1] + 0xf;
      uStack_320._0_4_ = (undefined4)lVar29;
      uStack_320._4_4_ = (float)((ulonglong)lVar29 >> 0x20);
      pauVar64 = (undefined1 (*) [16])0x0;
      uStack_320 = lVar29;
      while( true ) {
        pauVar42 = pauVar64;
        uVar28 = uStack_2fc;
        uVar134 = uStack_300;
        uVar53 = (undefined4)((ulonglong)in_stack_fffffffffffff5c8 >> 0x20);
        uVar165 = (undefined4)(in_stack_fffffffffffff5d0 >> 0x20);
        if (pauVar42 == (undefined1 (*) [16])0x2) break;
        pauVar64 = (undefined1 (*) [16])(*pauVar42 + 1);
        pauVar62 = (undefined1 (*) [16])(&uStack_338)[(longlong)pauVar42 * 2];
        pauStack_348 = pauVar64;
        if (pauStack_580 <= pauVar62) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pauVar62,pauStack_580,&UNK_14300a018);
        }
        if (pbStack_588[(longlong)pauVar62] == 1) {
          if (pauStack_400 <= pauVar62) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pauVar62,pauStack_400,&UNK_14300a030);
          }
          pauVar42 = (undefined1 (*) [16])(&uStack_330)[(longlong)pauVar42 * 2];
          if (pauStack_400 <= pauVar42) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pauVar42,pauStack_400,&UNK_14300a048);
          }
          pauVar65 = (undefined1 (*) [16])(pfStack_408 + (longlong)pauVar62 * 0x10);
          pauVar39 = (undefined1 (*) [16])(pfStack_408 + (longlong)pauVar42 * 0x10);
          fStack_788 = pfStack_408[(longlong)pauVar42 * 0x10 + 7] -
                       pfStack_408[(longlong)pauVar42 * 0x10 + 0xb];
          uStack_790 = CONCAT44(pfStack_408[(longlong)pauVar42 * 0x10 + 4] -
                                (float)((ulonglong)
                                        *(undefined8 *)(pfStack_408 + (longlong)pauVar42 * 0x10 + 9)
                                       >> 0x20),
                                pfStack_408[(longlong)pauVar42 * 0x10 + 1] -
                                (float)*(undefined8 *)(pfStack_408 + (longlong)pauVar42 * 0x10 + 9))
          ;
          pauStack_778 = (undefined1 (*) [16])0x0;
          pbStack_770 = (byte *)0x1;
          puStack_768 = (undefined8 *)0x2;
          puStack_2f0 = &uStack_790;
          pauStack_2e8 = pauVar65;
          pauStack_2e0 = pauVar39;
          pdb_141473fb0(&uStack_2d8,&pauStack_778,&puStack_2f0);
          in_stack_fffffffffffff5d0 = CONCAT44(uVar165,uVar28);
          in_stack_fffffffffffff5c8 = (undefined8 **)CONCAT44(uVar53,uVar134);
          pdb_140827df0(&puStack_2f0,pauVar65,pauVar39,&uStack_2d8,in_stack_fffffffffffff5c8,
                        in_stack_fffffffffffff5d0);
          pauVar42 = pauStack_688;
          if (pauStack_2e0 == (undefined1 (*) [16])0x0) {
            if (puStack_2f0 != (undefined8 *)0x0) {
              pub_1406abac0((byte *)pauStack_2e8,(longlong)puStack_2f0 << 5,8);
            }
          }
          else {
            ppauVar47 = (undefined1 (**) [16])((longlong)*pauVar62 + lStack_178);
            uStack_2c8._0_4_ = SUB84(pauStack_2e0,0);
            uStack_2c8._4_4_ = (uint)((ulonglong)pauStack_2e0 >> 0x20);
            uStack_2d8._0_4_ = SUB84(puStack_2f0,0);
            uStack_2d8._4_4_ = (float)((ulonglong)puStack_2f0 >> 0x20);
            uStack_2d0._0_4_ = SUB84(pauStack_2e8,0);
            uStack_2d0._4_4_ = (int)((ulonglong)pauStack_2e8 >> 0x20);
            uStack_2c0 = (ushort)uStack_3b0;
            uStack_2be = (undefined2)(uStack_3b0 >> 0x10);
            iStack_2bc = (int)(uStack_3b0 >> 0x20);
            uStack_2b8._0_4_ = SUB84(ppauVar47,0);
            uStack_2b8._4_4_ = (float)((ulonglong)ppauVar47 >> 0x20);
            uStack_2b0._0_4_ = (float)auStack_168._0_4_;
            uStack_2b8 = (undefined1 (*) [16])ppauVar47;
            if (pauStack_688 == pauStack_698) {
              pdb_142d7e7c0(&pauStack_698);
            }
            lVar29 = (longlong)pauVar42 * 0x30;
            auVar10._4_4_ = uStack_2d8._4_4_;
            auVar10._0_4_ = (float)uStack_2d8;
            auVar10._8_4_ = (float)uStack_2d0;
            auVar10._12_4_ = uStack_2d0._4_4_;
            auVar11._8_2_ = uStack_2c0;
            auVar11._0_8_ = uStack_2c8;
            auVar11._10_2_ = uStack_2be;
            auVar11._12_4_ = iStack_2bc;
            auVar14._8_4_ = (float)uStack_2b0;
            auVar14._0_8_ = uStack_2b8;
            auVar14._12_4_ = uStack_2b0._4_4_;
            *(undefined1 (*) [16])(lStack_690 + 0x20 + lVar29) = auVar14;
            *(undefined1 (*) [16])(lStack_690 + 0x10 + lVar29) = auVar11;
            *(undefined1 (*) [16])(lStack_690 + lVar29) = auVar10;
            pauStack_688 = (undefined1 (*) [16])((longlong)*pauVar42 + 1);
          }
        }
      }
    }
    pbVar34 = pbStack_758;
    pauStack_348 = (undefined1 (*) [16])0x0;
    pauStack_340 = (undefined1 (*) [16])0x4;
    uStack_338 = (undefined1 (*) [16])0x0;
    pauStack_180 = pauStack_3e8;
    pauStack_188 = pauStack_750;
    pauVar42 = pauStack_3e8;
    lVar29 = lStack_178;
    pauVar62 = pauStack_750;
    pauVar64 = (undefined1 (*) [16])0x0;
LAB_140829fa0:
    pauVar39 = pauVar64;
    lVar52 = lStack_680;
    if (pauVar39 < pauVar42) {
      if (pauVar62 <= pauVar39) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar39,pauVar62,&UNK_143009f88);
      }
      bVar41 = 1;
      if (pbVar34[(longlong)pauVar39] == 0) {
        if (pauStack_580 <= pauVar39) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pauVar39,pauStack_580,&UNK_143009fa0);
        }
        bVar41 = pbStack_588[(longlong)pauVar39];
      }
      pauVar64 = (undefined1 (*) [16])((longlong)*pauVar39 + 1);
      if (pauVar62 <= pauVar64) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pauVar64,pauVar62,&UNK_143009fb8);
      }
      if (pbVar34[(longlong)pauVar64] == 0) goto LAB_14082a000;
      if (bVar41 != 0) goto LAB_14082a01f;
      goto LAB_140829fa0;
    }
    uStack_2d8._0_4_ = (float)lStack_678;
    uStack_2d8._4_4_ = (float)((ulonglong)lStack_678 >> 0x20);
    uStack_2d0._0_4_ = (float)lStack_670;
    uStack_2d0._4_4_ = (int)((ulonglong)lStack_670 >> 0x20);
    uStack_2c8._0_4_ = SUB84(pauStack_348,0);
    uStack_2c8._4_4_ = (uint)((ulonglong)pauStack_348 >> 0x20);
    uStack_2c0 = (ushort)pauStack_340;
    uStack_2be = (undefined2)((ulonglong)pauStack_340 >> 0x10);
    iStack_2bc = (int)((ulonglong)pauStack_340 >> 0x20);
    uStack_2a0._0_4_ = SUB84(pauStack_688,0);
    uStack_2a0._4_4_ = (undefined4)((ulonglong)pauStack_688 >> 0x20);
    uStack_2b0._0_4_ = SUB84(pauStack_698,0);
    uStack_2b0._4_4_ = (undefined4)((ulonglong)pauStack_698 >> 0x20);
    uStack_2a8._0_4_ = (float)lStack_690;
    uStack_2a8._4_4_ = (float)((ulonglong)lStack_690 >> 0x20);
    auStack_1d8._8_2_ = uStack_2c0;
    auStack_1d8._0_8_ = pauStack_348;
    auStack_1d8._10_2_ = uStack_2be;
    auStack_1d8._12_4_ = iStack_2bc;
    pauStack_1c0 = pauStack_698;
    auStack_1b8._8_4_ = (float)uStack_2a0;
    auStack_1b8._0_8_ = lStack_690;
    auStack_1b8._12_4_ = uStack_2a0._4_4_;
    auStack_1e8._8_8_ = lStack_670;
    auStack_1e8._0_8_ = lStack_678;
    auStack_148._0_8_ = pauStack_6d0;
    auStack_168._0_8_ = lStack_6d8;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = auStack_128._8_8_;
    auStack_128 = auVar18 << 0x40;
    lVar29 = lStack_6d8;
    pauStack_1c8 = uStack_338;
    uStack_2b8 = uStack_338;
    while( true ) {
      if (auStack_148._0_8_ == auStack_128._0_8_) break;
      auStack_128._0_8_ = auStack_128._0_8_ + 1;
      pdb_1413fdf20(lVar29);
      lVar29 = lVar29 + 0x50;
    }
    if (lStack_6e0 != 0) {
      pub_1406abac0((byte *)auStack_168._0_8_,lStack_6e0 * 0x50,8);
    }
    if (uStack_760 != 0) {
      pub_1406abac0(pbVar34,uStack_760,1);
    }
    if (pauStack_590 != (undefined1 (*) [16])0x0) {
      pub_1406abac0(pbStack_588,(ulonglong)pauStack_590,1);
    }
    if (lStack_410 != 0) {
      pub_1406abac0((byte *)pfStack_408,lStack_410 << 6,4);
    }
    if (pauStack_398 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pfStack_198,(longlong)pauStack_398 * 0xc,4);
    }
    if (puStack_6c8 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)pfStack_6c0,(longlong)puStack_6c8 << 2,4);
    }
  }
  if (lStack_748 != 0) {
    pub_1406abac0((byte *)pauStack_740,lStack_748 << 3,4);
  }
  if (pauStack_388 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_380,(longlong)pauStack_388 * 0xc,4);
  }
  if (auStack_378._8_8_ != 0) {
    pub_1406abac0((byte *)auStack_368._0_8_,auStack_378._8_8_ << 2,4);
  }
  if (SBORROW8(0,lVar52)) goto LAB_1408287e0;
  uStack_2d8._0_4_ = (float)lVar52;
  uStack_2d8._4_4_ = (float)((ulonglong)lVar52 >> 0x20);
  uVar48 = auStack_1e8._0_8_;
  uVar5 = auStack_1e8._8_8_;
  uStack_2a0._0_4_ = auStack_1b8._0_4_;
  uStack_2a0._4_4_ = auStack_1b8._4_4_;
  pauStack_298 = auStack_1b8._8_8_;
  uStack_2b0._0_4_ = SUB84(pauStack_1c8,0);
  uStack_2b0._4_4_ = (undefined4)((ulonglong)pauStack_1c8 >> 0x20);
  uStack_2a8._0_4_ = SUB84(pauStack_1c0,0);
  uStack_2a8._4_4_ = (float)((ulonglong)pauStack_1c0 >> 0x20);
  uStack_2c0 = auStack_1d8._0_2_;
  uStack_2be = auStack_1d8._2_2_;
  iStack_2bc = auStack_1d8._4_4_;
  uStack_2b8._0_4_ = auStack_1d8._8_4_;
  uStack_2b8._4_4_ = auStack_1d8._12_4_;
  uStack_2d0._0_4_ = auStack_1e8._0_4_;
  uVar28 = (float)uStack_2d0;
  uStack_2d0._4_4_ = auStack_1e8._4_4_;
  iVar131 = uStack_2d0._4_4_;
  uStack_2c8._0_4_ = auStack_1e8._8_4_;
  uStack_2c8._4_4_ = auStack_1e8._12_4_;
  pauStack_4f0 = (undefined1 (*) [16])auStack_1e8._0_8_;
  lVar29 = auStack_1e8._8_8_ * 0xe0;
  uStack_4e0 = (undefined1 (**) [16])(auStack_1e8._0_8_ + lVar29);
  auStack_4f8 = (undefined1  [8])auStack_1e8._0_8_;
  auStack_4f8 = (undefined1  [8])auStack_1e8._0_8_;
  pauStack_4e8 = (undefined1 (*) [16])lVar52;
  if ((ulonglong)((longlong)pauStack_560 - (longlong)pauStack_550) < (ulonglong)auStack_1e8._8_8_) {
    in_stack_fffffffffffff5c8 = (undefined8 **)0x0;
    pdb_142d7f1b0(&pauStack_560,pauStack_550,auStack_1e8._8_8_,8,0xe0);
LAB_1408290d0:
    pauVar64 = pauStack_550;
    pub_142e32760(pauStack_558 + (longlong)pauStack_550 * 0xe,uVar48,lVar29);
    pauStack_550 = pauVar64;
  }
  else if (auStack_1e8._8_8_ != 0) goto LAB_1408290d0;
  pauStack_550 = (undefined1 (*) [16])((longlong)*pauStack_550 + uVar5);
  uVar30 = (ulonglong)(uVar48 - (longlong)pauStack_4f0) >> 5;
  auStack_168._0_8_ = uVar30;
  auStack_148._0_8_ = uVar30 * 0x6db6db6db6db6db7;
  auStack_1a8._0_8_ = pauStack_4f0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auStack_128._8_8_;
  auStack_128 = auVar16 << 0x40;
  pauVar64 = pauStack_4f0;
  uStack_4e0._0_4_ = (float)uVar28;
  uStack_4e0._4_4_ = (float)iVar131;
  while( true ) {
    if (auStack_148._0_8_ == auStack_128._0_8_) break;
    auStack_128._0_8_ = auStack_128._0_8_ + 1;
    pdb_1413fdc30(pauVar64);
    pauVar64 = (undefined1 (*) [16])((longlong)pauVar64 + 0xe0);
  }
  if (pauStack_4e8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)auStack_4f8,(longlong)pauStack_4e8 * 0xe0,8);
  }
  lVar29 = CONCAT44(iStack_2bc,CONCAT22(uStack_2be,uStack_2c0));
  pbVar34 = (byte *)CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
  uVar30 = CONCAT44(uStack_2b0._4_4_,(float)uStack_2b0);
  if ((ulonglong)(lStack_578 - lStack_568) < uVar30) {
    auStack_148._0_8_ = pbVar34;
    auStack_128._0_8_ = lVar29;
    in_stack_fffffffffffff5c8 = (undefined8 **)0x0;
    pdb_142d7f1b0(&lStack_578,lStack_568,uVar30,4,0x40);
    pbVar34 = (byte *)auStack_148._0_8_;
    lVar29 = auStack_128._0_8_;
LAB_140829225:
    lVar52 = lStack_568;
    pub_142e32760(piStack_570 + lStack_568 * 0x10,pbVar34,uVar30 << 6);
  }
  else {
    lVar52 = lStack_568;
    if (uVar30 != 0) goto LAB_140829225;
  }
  lStack_568 = lVar52 + uVar30;
  if (lVar29 != 0) {
    pub_1406abac0(pbVar34,lVar29 << 6,4);
  }
  pauVar64 = pauStack_298;
  uVar28 = uStack_2a0._4_4_;
  fVar69 = (float)uStack_2a0;
  pauStack_4e8 = (undefined1 (*) [16])CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
  lVar52 = CONCAT44(uStack_2a0._4_4_,(float)uStack_2a0);
  lVar29 = (longlong)pauStack_298 * 0x30;
  uStack_4e0 = (undefined1 (**) [16])(lVar52 + lVar29);
  pauStack_4f0 = (undefined1 (*) [16])lVar52;
  auStack_4f8 = (undefined1  [8])lVar52;
  if ((undefined1 (*) [16])(lStack_548 - (longlong)puStack_538) < pauStack_298) {
    in_stack_fffffffffffff5c8 = (undefined8 **)0x0;
    pdb_142d7f1b0(&lStack_548,puStack_538,pauStack_298,8,0x30);
  }
  else {
    puVar50 = puStack_538;
    if (pauStack_298 == (undefined1 (*) [16])0x0) goto LAB_1408292e6;
  }
  puVar50 = puStack_538;
  pub_142e32760(pbStack_540 + (longlong)puStack_538 * 0x30,lVar52,lVar29);
LAB_1408292e6:
  puStack_538 = (undefined *)((longlong)*pauVar64 + (longlong)puVar50);
  uStack_4e0._0_4_ = fVar69;
  uStack_4e0._4_4_ = (float)uVar28;
  uStack_105 = 0;
  uStack_106 = 0;
  pdb_1413ff3d0(auStack_4f8);
  goto LAB_1408287e0;
LAB_14082a000:
  if (pauStack_580 <= pauVar64) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pauVar64,pauStack_580,&UNK_143009fd0);
  }
  if ((bVar41 & pbStack_588[(longlong)pauVar64]) == 1) {
LAB_14082a01f:
    if (pauStack_6d0 <= pauVar39) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar39,pauStack_6d0,&UNK_143009fe8);
    }
    if (pauStack_6d0 <= pauVar64) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauVar64,pauStack_6d0,&UNK_14300a000);
    }
    lVar59 = (longlong)pauVar39 * 0x50;
    lVar52 = lStack_6d8 + (longlong)pauVar64 * 0x50;
    fVar69 = *(float *)(lStack_6d8 + 0x48 + (longlong)pauVar64 * 0x50) -
             *(float *)(lStack_6d8 + 0x48 + lVar59);
    puVar45 = *(undefined8 **)(lStack_6d8 + 0x38 + lVar59);
    puVar32 = (undefined8 *)((longlong)puVar45 + *(longlong *)(lStack_6d8 + 0x40 + lVar59) * 0xc);
    lVar59 = (longlong)*pauVar39 + lVar29;
    auVar81._0_4_ = ~-(uint)NAN(fVar69) & ((uint)fVar69 & _DAT_142e37820 | _DAT_142e3c640);
    auVar81._4_4_ = _UNK_142e3c644;
    auVar81._8_4_ = _UNK_142e3c648;
    auVar81._12_4_ = _UNK_142e3c64c;
    auStack_128 = ZEXT416(-(uint)NAN(fVar69) & _DAT_143009de0) | auVar81;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auStack_148._8_8_;
    auStack_148 = auVar17 << 0x40;
    auStack_1a8._0_8_ = lVar52;
    pauVar62 = pauStack_188;
    unaff_XMM8 = _DAT_143009d50;
    unaff_XMM13_Dc = _UNK_142e47bf8;
    unaff_XMM13_Dd = _UNK_142e47bfc;
    if (puVar45 != puVar32) {
LAB_14082a0dd:
      pauVar62 = pauStack_188;
      unaff_XMM8 = _DAT_143009d50;
      unaff_XMM13_Dc = _UNK_142e47bf8;
      unaff_XMM13_Dd = _UNK_142e47bfc;
      if (*(longlong *)(lVar52 + 0x40) != 0) {
        lVar56 = *(longlong *)(lVar52 + 0x38) + *(longlong *)(lVar52 + 0x40) * 0xc;
        lVar52 = *(longlong *)(lVar52 + 0x38) + 0xc;
LAB_14082a13d:
        uVar48 = *puVar45;
        fVar98 = *(float *)(puVar45 + 1);
        puVar45 = (undefined8 *)((longlong)puVar45 + 0xc);
        fVar121 = (float)uVar48;
        fVar73 = (float)((ulonglong)uVar48 >> 0x20);
        lVar54 = lVar52;
        if (unaff_XMM14_Da <= (float)((uint)fVar69 & uVar26)) {
          do {
            uVar30 = *(ulonglong *)(lVar54 + -0xc);
            fVar75 = *(float *)(lVar54 + -4);
            fVar74 = (float)uVar30 - fVar121;
            fVar97 = (float)(uVar30 >> 0x20) - fVar73;
            if ((float)((uint)fVar97 & uVar26) < unaff_XMM14_Da) {
LAB_14082a1b0:
              if ((fVar75 - fVar98) * (fVar75 - fVar98) + fVar97 * fVar97 + fVar74 * fVar74 <=
                  fVar99) goto LAB_14082a250;
            }
            else {
              fVar122 = (float)(~-(uint)NAN(fVar97) &
                                ((uint)fVar97 & _DAT_142e37820 | _DAT_142e3c640) |
                               -(uint)NAN(fVar97) & _DAT_143009de0);
              if ((fVar122 == (float)auStack_128._0_4_) &&
                 (!NAN(fVar122) && !NAN((float)auStack_128._0_4_))) goto LAB_14082a1b0;
            }
            bVar67 = lVar54 != lVar56;
            lVar54 = lVar54 + 0xc;
          } while (bVar67);
        }
        else {
          do {
            uVar30 = *(ulonglong *)(lVar54 + -0xc);
            fVar75 = *(float *)(lVar54 + -4);
            fVar74 = (float)uVar30 - fVar121;
            fVar97 = (float)(uVar30 >> 0x20) - fVar73;
            if ((fVar75 - fVar98) * (fVar75 - fVar98) + fVar97 * fVar97 + fVar74 * fVar74 <= fVar99)
            goto LAB_14082a250;
            bVar67 = lVar54 != lVar56;
            lVar54 = lVar54 + 0xc;
          } while (bVar67);
        }
        goto LAB_14082a134;
      }
    }
  }
  goto LAB_140829fa0;
LAB_14082a250:
  auVar129._8_8_ = 0;
  auVar129._0_8_ = uVar30;
  if (lVar54 != lVar56) {
    uVar33 = (ulonglong)(lVar56 - lVar54) / 0xc;
    pfVar55 = (float *)(lVar54 + 8);
    do {
      fVar74 = (float)*(undefined8 *)(pfVar55 + -2);
      fVar97 = (float)((ulonglong)*(undefined8 *)(pfVar55 + -2) >> 0x20);
      fVar122 = fVar74 - fVar121;
      fVar130 = fVar97 - fVar73;
      if (((float)((uint)fVar69 & uVar26) < unaff_XMM14_Da) ||
         ((float)((uint)fVar130 & uVar26) < unaff_XMM14_Da)) {
LAB_14082a336:
        fVar133 = *pfVar55 - fVar98;
        if (fVar133 * fVar133 + fVar130 * fVar130 + fVar122 * fVar122 <= fVar99) {
          uVar134 = (uint)(fVar73 - auVar129._4_4_) & uVar26;
          uVar138 = (uint)(fVar73 - fVar97) & uVar27;
          fVar122 = *pfVar55;
          if (uVar134 <= uVar138) {
            fVar122 = fVar75;
          }
          uVar134 = (uint)(uVar138 < uVar134);
          uVar138 = (int)(uVar134 << 0x1f) >> 0x1f;
          uVar132 = (int)(uVar134 << 0x1f) >> 0x1f;
          auVar82._0_4_ = (uint)fVar74 & uVar138;
          auVar82._4_4_ = (uint)fVar97 & uVar132;
          auVar82._8_8_ = 0;
          auVar128._0_4_ = ~uVar138 & auVar129._0_4_;
          auVar128._4_4_ = ~uVar132 & (uint)auVar129._4_4_;
          auVar128._8_4_ = ~((int)(uVar134 << 0x1f) >> 0x1f) & auVar129._8_4_;
          auVar128._12_4_ = ~((int)(uVar134 << 0x1f) >> 0x1f) & auVar129._12_4_;
          auVar129 = auVar128 | auVar82;
          fVar75 = fVar122;
        }
      }
      else {
        fVar133 = (float)(~-(uint)NAN(fVar130) & ((uint)fVar130 & _DAT_142e37820 | _DAT_142e3c640) |
                         -(uint)NAN(fVar130) & _DAT_143009de0);
        if ((fVar133 == (float)auStack_128._0_4_) &&
           (!NAN(fVar133) && !NAN((float)auStack_128._0_4_))) goto LAB_14082a336;
      }
      uVar30 = auVar129._0_8_;
      pfVar55 = pfVar55 + 3;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  fVar121 = fVar121 - (float)uVar30;
  fVar74 = (float)(uVar30 >> 0x20);
  fVar73 = fVar73 - fVar74;
  if (_DAT_142e36f24 <= (fVar98 - fVar75) * (fVar98 - fVar75) + fVar73 * fVar73 + fVar121 * fVar121)
  goto LAB_14082a3a0;
LAB_14082a134:
  unaff_XMM11 = _DAT_14300a190;
  unaff_XMM10_Da = _DAT_14300a1a0;
  unaff_XMM10_Db = _UNK_14300a1a4;
  unaff_XMM10_Dc = _UNK_14300a1a8;
  unaff_XMM10_Dd = _UNK_14300a1ac;
  unaff_XMM12_Da = _DAT_143009d60;
  if (puVar45 == puVar32) goto LAB_140829fa0;
  goto LAB_14082a13d;
LAB_14082a3a0:
  uVar33 = pdb_140c017b0(uStack_3b0 & 0xffffffff,uStack_3b0._4_4_);
  pauVar42 = uStack_338;
  fVar121 = (float)uStack_3b0;
  fVar73 = uStack_3b0._4_4_;
  if (uStack_338 == pauStack_348) {
    pdb_142d8db70(&pauStack_348);
  }
  auVar70 = auStack_148;
  iVar131 = auStack_148._0_4_;
  uVar33 = (ulonglong)(iVar131 + 0x8000) * -0x40a7b892e31b1a47 ^ lVar59 * -0x61c8864680b583eb ^
           uVar33;
  *(float *)pauStack_340[(longlong)pauVar42 * 4] = 0.0;
  *(undefined8 *)pauStack_340[(longlong)pauVar42 * 4 + 1] = uVar48;
  *(float *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 1] + 8) = fVar98;
  *(float *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 1] + 0xc) = (float)uVar30;
  *(float *)pauStack_340[(longlong)pauVar42 * 4 + 2] = fVar74;
  *(float *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 2] + 4) = fVar75;
  *(float *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 2] + 8) = 0.12;
  *(undefined4 *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 2] + 0xc) = auStack_168._0_4_;
  *(uint *)pauStack_340[(longlong)pauVar42 * 4 + 3] = (uint)(uVar33 >> 0x20) ^ (uint)uVar33;
  *(float *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 3] + 4) = 3.58732e-43;
  *(float *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 3] + 8) = fVar121;
  ((float *)((longlong)pauStack_340[(longlong)pauVar42 * 4 + 3] + 8))[1] = fVar73;
  uStack_338 = (undefined1 (*) [16])((longlong)*pauVar42 + 1);
  auStack_148._4_4_ = 0;
  auStack_148._0_4_ = iVar131 + 1;
  auStack_148._8_8_ = auVar70._8_8_;
  pauVar42 = pauStack_180;
  lVar29 = lStack_178;
  lVar52 = auStack_1a8._0_8_;
  pauVar62 = pauStack_188;
  unaff_XMM8 = _DAT_143009d50;
  unaff_XMM11 = _DAT_14300a190;
  unaff_XMM10_Da = _DAT_14300a1a0;
  unaff_XMM10_Db = _UNK_14300a1a4;
  unaff_XMM10_Dc = _UNK_14300a1a8;
  unaff_XMM10_Dd = _UNK_14300a1ac;
  unaff_XMM13_Dc = _UNK_142e47bf8;
  unaff_XMM13_Dd = _UNK_142e47bfc;
  unaff_XMM12_Da = _DAT_143009d60;
  if (puVar45 == puVar32) goto LAB_140829fa0;
  goto LAB_14082a0dd;
LAB_14082cce4:
  pauStack_380 = pauVar64;
  auStack_148._0_8_ =
       ((ulonglong)((longlong)pauVar42 - (longlong)pauStack_380) >> 5) * 0x6db6db6db6db6db7;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = auStack_128._8_8_;
  auStack_128 = auVar21 << 0x40;
  auStack_168._0_8_ = pauStack_380;
  pauVar64 = pauStack_380;
  while( true ) {
    if (auStack_148._0_8_ == auStack_128._0_8_) break;
    auStack_128._0_8_ = auStack_128._0_8_ + 1;
    pdb_1413fdc30(pauVar64);
    pauVar64 = pauVar64 + 0xe;
  }
  if (auStack_378._0_8_ != 0) {
    pub_1406abac0((byte *)pauStack_388,auStack_378._0_8_ * 0xe0,8);
  }
  auStack_148._0_8_ = lStack_578;
  auStack_128._0_8_ = piStack_570;
  if (lStack_568 != 0) {
    piVar63 = piStack_570 + lStack_568 * 0x10;
    piVar38 = piStack_570;
    do {
      iVar131 = *piVar38;
      if (iVar131 == 2) break;
      uVar48 = *(undefined8 *)(piVar38 + 0xe);
      iStack_9b8 = piVar38[0xd];
      uStack_9e8 = *(undefined8 *)(piVar38 + 1);
      uStack_9e0 = *(undefined8 *)(piVar38 + 3);
      uStack_9d8 = *(undefined8 *)(piVar38 + 5);
      uStack_9d0 = *(undefined8 *)(piVar38 + 7);
      uStack_9c8 = *(undefined8 *)(piVar38 + 9);
      uStack_9c0 = *(undefined8 *)(piVar38 + 0xb);
      uStack_2d8._0_4_ = (float)uVar48;
      iVar61 = (int)(float)uStack_2d8;
      uStack_2d8._4_4_ = (float)((ulonglong)uVar48 >> 0x20);
      iVar24 = (int)uStack_2d8._4_4_;
      uVar33 = pdb_1400af680(&pauStack_1c8,&uStack_2d8);
      piVar38 = piVar38 + 0x10;
      bVar41 = (byte)(uVar33 >> 0x38);
      bVar68 = bVar41 >> 1;
      auVar70 = ZEXT216(CONCAT11(bVar68,bVar68));
      auVar70 = pshuflw(auVar70,auVar70,0);
      lVar29 = 0;
      uVar30 = uVar33;
      while( true ) {
        uVar30 = uVar30 & auStack_1e8._8_8_;
        pcVar36 = (undefined1 *)auStack_1e8._0_8_ + uVar30;
        auVar117[0] = -(*pcVar36 == auVar70[0]);
        auVar117[1] = -(pcVar36[1] == auVar70[1]);
        auVar117[2] = -(pcVar36[2] == auVar70[2]);
        auVar117[3] = -(pcVar36[3] == auVar70[3]);
        auVar117[4] = -(pcVar36[4] == auVar70[4]);
        auVar117[5] = -(pcVar36[5] == auVar70[5]);
        auVar117[6] = -(pcVar36[6] == auVar70[6]);
        auVar117[7] = -(pcVar36[7] == auVar70[7]);
        auVar117[8] = -(pcVar36[8] == auVar70[0]);
        auVar117[9] = -(pcVar36[9] == auVar70[1]);
        auVar117[10] = -(pcVar36[10] == auVar70[2]);
        auVar117[0xb] = -(pcVar36[0xb] == auVar70[3]);
        auVar117[0xc] = -(pcVar36[0xc] == auVar70[4]);
        auVar117[0xd] = -(pcVar36[0xd] == auVar70[5]);
        auVar117[0xe] = -(pcVar36[0xe] == auVar70[6]);
        auVar117[0xf] = -(pcVar36[0xf] == auVar70[7]);
        uVar58 = (ushort)(SUB161(auVar117 >> 7,0) & 1) |
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
                 (ushort)(auVar117[0xf] >> 7) << 0xf;
        uVar26 = (uint)uVar58;
        while (uVar58 != 0) {
          uVar27 = 0;
          for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          lVar52 = (uVar27 + uVar30 & auStack_1e8._8_8_) * -0x68;
          if ((*(int *)(auStack_1e8._0_8_ + lVar52 + -0x68) == iVar61) &&
             (*(int *)(auStack_1e8._0_8_ + lVar52 + -100) == iVar24)) {
            lVar52 = auStack_1e8._0_8_ + lVar52;
            lVar29 = *(longlong *)(lVar52 + -0x50);
            if (lVar29 == *(longlong *)(lVar52 + -0x60)) goto LAB_14082cdc0;
            goto LAB_14082cdca;
          }
          uVar58 = (ushort)(uVar26 - 1) & (ushort)uVar26;
          uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar58);
        }
        auVar90[0] = -(*pcVar36 == -1);
        auVar90[1] = -(pcVar36[1] == -1);
        auVar90[2] = -(pcVar36[2] == -1);
        auVar90[3] = -(pcVar36[3] == -1);
        auVar90[4] = -(pcVar36[4] == -1);
        auVar90[5] = -(pcVar36[5] == -1);
        auVar90[6] = -(pcVar36[6] == -1);
        auVar90[7] = -(pcVar36[7] == -1);
        auVar90[8] = -(pcVar36[8] == -1);
        auVar90[9] = -(pcVar36[9] == -1);
        auVar90[10] = -(pcVar36[10] == -1);
        auVar90[0xb] = -(pcVar36[0xb] == -1);
        auVar90[0xc] = -(pcVar36[0xc] == -1);
        auVar90[0xd] = -(pcVar36[0xd] == -1);
        auVar90[0xe] = -(pcVar36[0xe] == -1);
        auVar90[0xf] = -(pcVar36[0xf] == -1);
        if ((((((((((((((((SUB161(auVar90 >> 7,0) & 1) != 0 || (SUB161(auVar90 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar90 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar90 >> 0x1f,0) & 1) != 0) || (SUB161(auVar90 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar90 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar90 >> 0x37,0) & 1) != 0) || (SUB161(auVar90 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar90 >> 0x47,0) & 1) != 0) || (SUB161(auVar90 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar90 >> 0x57,0) & 1) != 0) || (SUB161(auVar90 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar90 >> 0x67,0) & 1) != 0) || (SUB161(auVar90 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar90 >> 0x77,0) & 1) != 0) || auVar90[0xf] < '\0') break;
        uVar30 = uVar30 + lVar29 + 0x10;
        lVar29 = lVar29 + 0x10;
      }
      if (auStack_1d8._0_8_ == 0) {
        pdb_142ddaf30(auStack_1e8,1,&pauStack_1c8,CONCAT71((int7)(uVar30 >> 8),1));
      }
      uVar33 = uVar33 & auStack_1e8._8_8_;
      auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_1e8._0_8_ + uVar33);
      uVar58 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar70[0xf] >> 7) << 0xf;
      uVar26 = (uint)uVar58;
      if (uVar58 == 0) {
        lVar29 = 0x10;
        do {
          uVar33 = uVar33 + lVar29 & auStack_1e8._8_8_;
          auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_1e8._0_8_ + uVar33);
          lVar29 = lVar29 + 0x10;
          uVar26 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
        } while (uVar26 == 0);
      }
      uVar27 = 0;
      for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
        uVar27 = uVar27 + 1;
      }
      uVar30 = uVar27 + uVar33 & auStack_1e8._8_8_;
      bVar68 = (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar30];
      if (-1 < (char)bVar68) {
        auVar70 = *(undefined1 (*) [16])auStack_1e8._0_8_;
        uVar26 = 0;
        for (uVar27 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar70[0xf] >> 7) << 0xf); (uVar27 & 1) == 0;
            uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar26 = uVar26 + 1;
        }
        uVar30 = (ulonglong)uVar26;
        bVar68 = (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar30];
      }
      bVar41 = bVar41 >> 1;
      (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar30] = bVar41;
      (*(undefined1 (*) [16])(auStack_1e8._0_8_ + 0x10))[uVar30 - 0x10 & auStack_1e8._8_8_] = bVar41
      ;
      lVar29 = uVar30 * -0x68;
      lVar52 = auStack_1e8._0_8_ + lVar29;
      *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x68) = uVar48;
      *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x60) = 0;
      *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x58) = 4;
      puVar32 = (undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x50);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x40) = 8;
      puVar32 = (undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x38);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x28) = 4;
      puVar32 = (undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x20);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x10) = 4;
      *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -8) = 0;
      auStack_1d8._8_8_ = auStack_1d8._8_8_ + 1;
      auStack_1d8._0_8_ = auStack_1d8._0_8_ - ((ulonglong)bVar68 & 0xffffffffffffff01);
      lVar29 = *(longlong *)(lVar52 + -0x50);
      if (lVar29 == *(longlong *)(lVar52 + -0x60)) {
LAB_14082cdc0:
        pdb_142d8dc50(lVar52 + -0x60);
      }
LAB_14082cdca:
      lVar59 = *(longlong *)(lVar52 + -0x58);
      lVar56 = lVar29 * 0x38;
      *(int *)(lVar59 + lVar56) = iVar131;
      auVar7._8_8_ = uStack_9d0;
      auVar7._0_8_ = uStack_9d8;
      puVar32 = (undefined8 *)(lVar59 + 4 + lVar56);
      *puVar32 = uStack_9e8;
      puVar32[1] = uStack_9e0;
      *(undefined1 (*) [16])(lVar59 + 0x14 + lVar56) = auVar7;
      puVar32 = (undefined8 *)(lVar59 + 0x24 + lVar56);
      *puVar32 = uStack_9c8;
      puVar32[1] = uStack_9c0;
      *(int *)(lVar59 + 0x34 + lVar56) = iStack_9b8;
      *(longlong *)(lVar52 + -0x50) = lVar29 + 1;
    } while (piVar38 != piVar63);
  }
  if (auStack_148._0_8_ != 0) {
    pub_1406abac0((byte *)auStack_128._0_8_,auStack_148._0_8_ << 6,4);
  }
  uStack_8b8 = pbStack_540 + (longlong)puStack_538 * 0x30;
  uStack_8c0 = (undefined4)lStack_548;
  iStack_8bc = (int)((ulonglong)lStack_548 >> 0x20);
  pbVar34 = pbStack_540;
  uStack_8d0 = pbStack_540;
  while (uStack_8c8 = pbVar34, pbVar34 != uStack_8b8) {
    uStack_8c8 = pbVar34 + 0x30;
    pauVar64 = *(undefined1 (**) [16])pbVar34;
    if (SBORROW8(0,(longlong)pauVar64)) break;
    uStack_2d8._0_4_ = SUB84(pauVar64,0);
    uStack_2d8._4_4_ = (float)((ulonglong)pauVar64 >> 0x20);
    uStack_2b0._0_4_ = (float)*(undefined8 *)(pbVar34 + 0x28);
    uStack_2b0._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(pbVar34 + 0x28) >> 0x20);
    uVar30 = *(ulonglong *)(pbVar34 + 0x18);
    uStack_2c0 = (ushort)uVar30;
    uStack_2be = (undefined2)(uVar30 >> 0x10);
    iStack_2bc = (int)(uVar30 >> 0x20);
    iVar131 = iStack_2bc;
    uStack_2b8._0_4_ = (float)*(undefined8 *)(pbVar34 + 0x20);
    uStack_2b8._4_4_ = (float)((ulonglong)*(undefined8 *)(pbVar34 + 0x20) >> 0x20);
    uStack_2d0._0_4_ = (float)*(undefined8 *)(pbVar34 + 8);
    uStack_2d0._4_4_ = (int)((ulonglong)*(undefined8 *)(pbVar34 + 8) >> 0x20);
    uStack_2c8._0_4_ = (undefined4)*(undefined8 *)(pbVar34 + 0x10);
    uStack_2c8._4_4_ = (uint)((ulonglong)*(undefined8 *)(pbVar34 + 0x10) >> 0x20);
    auStack_4f8 = (undefined1  [8])uVar30;
    uStack_12e = 1;
    uVar60 = pdb_1400af680(&pauStack_1c8,auStack_4f8);
    bVar41 = (byte)(uVar60 >> 0x38);
    bVar68 = bVar41 >> 1;
    auVar70 = ZEXT216(CONCAT11(bVar68,bVar68));
    auVar70 = pshuflw(auVar70,auVar70,0);
    lVar29 = 0;
    uVar33 = uVar60;
    while( true ) {
      uVar33 = uVar33 & auStack_1e8._8_8_;
      auVar137 = *(undefined1 (*) [16])((undefined1 *)auStack_1e8._0_8_ + uVar33);
      auVar118[0] = -(auVar137[0] == auVar70[0]);
      auVar118[1] = -(auVar137[1] == auVar70[1]);
      auVar118[2] = -(auVar137[2] == auVar70[2]);
      auVar118[3] = -(auVar137[3] == auVar70[3]);
      auVar118[4] = -(auVar137[4] == auVar70[4]);
      auVar118[5] = -(auVar137[5] == auVar70[5]);
      auVar118[6] = -(auVar137[6] == auVar70[6]);
      auVar118[7] = -(auVar137[7] == auVar70[7]);
      auVar118[8] = -(auVar137[8] == auVar70[0]);
      auVar118[9] = -(auVar137[9] == auVar70[1]);
      auVar118[10] = -(auVar137[10] == auVar70[2]);
      auVar118[0xb] = -(auVar137[0xb] == auVar70[3]);
      auVar118[0xc] = -(auVar137[0xc] == auVar70[4]);
      auVar118[0xd] = -(auVar137[0xd] == auVar70[5]);
      auVar118[0xe] = -(auVar137[0xe] == auVar70[6]);
      auVar118[0xf] = -(auVar137[0xf] == auVar70[7]);
      uVar58 = (ushort)(SUB161(auVar118 >> 7,0) & 1) | (ushort)(SUB161(auVar118 >> 0xf,0) & 1) << 1
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
      uVar26 = (uint)uVar58;
      while (uVar58 != 0) {
        uVar27 = 0;
        for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000) {
          uVar27 = uVar27 + 1;
        }
        lVar52 = (uVar27 + uVar33 & auStack_1e8._8_8_) * -0x68;
        if ((*(int *)(auStack_1e8._0_8_ + lVar52 + -0x68) == (int)uVar30) &&
           (*(int *)(auStack_1e8._0_8_ + lVar52 + -100) == iVar131)) {
          lVar52 = auStack_1e8._0_8_ + lVar52;
          goto LAB_14082d2b4;
        }
        uVar58 = (ushort)(uVar26 - 1) & (ushort)uVar26;
        uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar58);
      }
      auVar91[0] = -(auVar137[0] == -1);
      auVar91[1] = -(auVar137[1] == -1);
      auVar91[2] = -(auVar137[2] == -1);
      auVar91[3] = -(auVar137[3] == -1);
      auVar91[4] = -(auVar137[4] == -1);
      auVar91[5] = -(auVar137[5] == -1);
      auVar91[6] = -(auVar137[6] == -1);
      auVar91[7] = -(auVar137[7] == -1);
      auVar91[8] = -(auVar137[8] == -1);
      auVar91[9] = -(auVar137[9] == -1);
      auVar91[10] = -(auVar137[10] == -1);
      auVar91[0xb] = -(auVar137[0xb] == -1);
      auVar91[0xc] = -(auVar137[0xc] == -1);
      auVar91[0xd] = -(auVar137[0xd] == -1);
      auVar91[0xe] = -(auVar137[0xe] == -1);
      auVar91[0xf] = -(auVar137[0xf] == -1);
      if ((((((((((((((((SUB161(auVar91 >> 7,0) & 1) != 0 || (SUB161(auVar91 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar91 >> 0x17,0) & 1) != 0) || (SUB161(auVar91 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar91 >> 0x27,0) & 1) != 0) || (SUB161(auVar91 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar91 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar91 >> 0x3f,0) & 1) != 0) || (SUB161(auVar91 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar91 >> 0x4f,0) & 1) != 0) || (SUB161(auVar91 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar91 >> 0x5f,0) & 1) != 0) || (SUB161(auVar91 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar91 >> 0x6f,0) & 1) != 0) || (SUB161(auVar91 >> 0x77,0) & 1) != 0) ||
          auVar91[0xf] < '\0') break;
      uVar33 = uVar33 + lVar29 + 0x10;
      lVar29 = lVar29 + 0x10;
    }
    if (auStack_1d8._0_8_ == 0) {
      uStack_12e = 1;
      pdb_142ddaf30(auStack_1e8,1,&pauStack_1c8,CONCAT71((int7)(uVar33 >> 8),1));
    }
    uVar60 = uVar60 & auStack_1e8._8_8_;
    auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_1e8._0_8_ + uVar60);
    uVar58 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
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
             (ushort)(byte)(auVar70[0xf] >> 7) << 0xf;
    uVar26 = (uint)uVar58;
    if (uVar58 == 0) {
      lVar29 = 0x10;
      do {
        uVar60 = uVar60 + lVar29 & auStack_1e8._8_8_;
        auVar70 = *(undefined1 (*) [16])(*(undefined1 (*) [16])auStack_1e8._0_8_ + uVar60);
        lVar29 = lVar29 + 0x10;
        uVar26 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
      } while (uVar26 == 0);
    }
    uVar27 = 0;
    for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
      uVar27 = uVar27 + 1;
    }
    uVar33 = uVar27 + uVar60 & auStack_1e8._8_8_;
    bVar68 = (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar33];
    if (-1 < (char)bVar68) {
      auVar70 = *(undefined1 (*) [16])auStack_1e8._0_8_;
      uVar26 = 0;
      for (uVar27 = (uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar70[0xf] >> 7) << 0xf); (uVar27 & 1) == 0;
          uVar27 = uVar27 >> 1 | 0x80000000) {
        uVar26 = uVar26 + 1;
      }
      uVar33 = (ulonglong)uVar26;
      bVar68 = (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar33];
    }
    bVar41 = bVar41 >> 1;
    (*(undefined1 (*) [16])auStack_1e8._0_8_)[uVar33] = bVar41;
    (*(undefined1 (*) [16])(auStack_1e8._0_8_ + 0x10))[uVar33 - 0x10 & auStack_1e8._8_8_] = bVar41;
    lVar29 = uVar33 * -0x68;
    lVar52 = auStack_1e8._0_8_ + lVar29;
    *(ulonglong *)(auStack_1e8._0_8_ + lVar29 + -0x68) = uVar30;
    *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x60) = 0;
    *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x58) = 4;
    puVar1 = (undefined4 *)(auStack_1e8._0_8_ + lVar29 + -0x50);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x40) = 8;
    puVar1 = (undefined4 *)(auStack_1e8._0_8_ + lVar29 + -0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x28) = 4;
    puVar1 = (undefined4 *)(auStack_1e8._0_8_ + lVar29 + -0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -0x10) = 4;
    *(undefined8 *)(auStack_1e8._0_8_ + lVar29 + -8) = 0;
    auStack_1d8._8_8_ = auStack_1d8._8_8_ + 1;
    auStack_1d8._0_8_ = auStack_1d8._0_8_ - (ulonglong)(bVar68 & 1);
LAB_14082d2b4:
    auStack_668._0_4_ = 0x4000;
    pauVar42 = (undefined1 (*) [16])CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0);
    uStack_4e0 = (undefined1 (**) [16])
                 ((longlong)pauVar42 + CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) * 4 * 8);
    pauStack_4f0 = pauVar42;
    auStack_4f8 = (undefined1  [8])pauVar42;
    pauStack_4e8 = pauVar64;
    if (CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8) != 0) {
      pauStack_4f0 = (undefined1 (*) [16])((longlong)pauVar42 + 0x20);
      iVar131 = *(int *)pauVar42;
      if (iVar131 != 2) {
        do {
          uStack_a04 = *(undefined8 *)((longlong)pauVar42 + 4);
          auStack_9f4 = SUB1612(*(undefined1 (*) [16])((longlong)pauVar42 + 0x10),4);
          uStack_9fc = (undefined4)*(undefined8 *)((longlong)pauVar42 + 0xc);
          uStack_9f8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)pauVar42 + 0xc) >> 0x20);
          iStack_a08 = iVar131;
          pdb_140827360(lVar52 + -0x60,uVar30 & 0xffffffff,uVar30 >> 0x20,
                        CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8),auStack_668,&iStack_a08,
                        (float)uStack_2b0);
          pauVar42 = pauStack_4f0;
          if (pauStack_4f0 == (undefined1 (*) [16])uStack_4e0) goto LAB_14082d38c;
          pauStack_4f0 = (undefined1 (*) [16])((longlong)pauStack_4f0 + 0x20);
          iVar131 = *(int *)pauVar42;
        } while (iVar131 != 2);
      }
      pauVar42 = (undefined1 (*) [16])((longlong)pauVar42 + 0x20);
    }
LAB_14082d38c:
    if ((longlong)uStack_4e0 - (longlong)pauVar42 != 0) {
      uVar30 = (ulonglong)((longlong)uStack_4e0 - (longlong)pauVar42) >> 5;
      ppauVar47 = (undefined1 (**) [16])((longlong)pauVar42 + 0x10);
      do {
        if ((*(char *)(ppauVar47 + -2) == '\0') && (ppauVar47[-1] != (undefined1 (*) [16])0x0)) {
          pub_1406abac0((byte *)*ppauVar47,(longlong)ppauVar47[-1] * 0xc,4);
        }
        ppauVar47 = ppauVar47 + 4;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    pbVar34 = uStack_8c8;
    if (pauStack_4e8 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)auStack_4f8,(longlong)pauStack_4e8 << 5,8);
      pbVar34 = uStack_8c8;
    }
  }
  uStack_fa = 1;
  uStack_fb = 0;
  uStack_fc = 0;
  pdb_1413ff3d0(&uStack_8d0);
  lVar29 = CONCAT44(uStack_7dc,uStack_7e0);
  auStack_128._0_8_ = auStack_7f8._8_8_;
  if (auStack_7f8._8_8_ == 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auStack_168._8_8_;
    auStack_168 = auVar22 << 0x40;
  }
  else {
    uVar30 = auStack_7f8._8_8_ * 8 + 0x17U & 0xfffffffffffffff0;
    auStack_148._0_8_ = auStack_7f8._8_8_ + uVar30 + 0x11;
    auStack_1a8._0_8_ = auStack_7f8._0_8_ - uVar30;
    auStack_168._0_8_ = 0x10;
  }
  pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,*(float *)((longlong)pauStack_3a0[1] + 0xc));
  pauStack_188 = *(undefined1 (**) [16])pauStack_3a0[1];
  if (lVar29 != 0) {
    auVar70 = *(undefined1 (*) [16])auStack_7f8._0_8_;
    uVar26 = ~(uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
    pauVar64 = (undefined1 (*) [16])(auStack_7f8._0_8_ + 0x10);
    pauVar42 = (undefined1 (*) [16])auStack_7f8._0_8_;
    do {
      if ((short)uVar26 == 0) {
        do {
          auVar70 = *pauVar64;
          pauVar42 = pauVar42 + -8;
          pauVar64 = pauVar64 + 1;
          uVar26 = (ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar26 == 0);
      }
      iVar131 = 0;
      for (uVar27 = uVar26; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
        iVar131 = iVar131 + 1;
      }
      iVar61 = *(int *)((longlong)pauVar42 + (-8 - (ulonglong)(uint)(iVar131 << 3)));
      iVar131 = *(int *)((longlong)pauVar42 + (-4 - (ulonglong)(uint)(iVar131 << 3)));
      *(float *)*pauStack_188 = pfStack_198._0_4_;
      uStack_2d8._0_4_ = (float)iVar61;
      uStack_2d8._4_4_ = (float)iVar131;
      if (plStack_3a8[3] != 0) {
        uVar30 = pdb_1400af680(plStack_5b8,&uStack_2d8);
        lVar52 = *plStack_3a8;
        bVar41 = (byte)(uVar30 >> 0x39);
        auVar70 = ZEXT216(CONCAT11(bVar41,bVar41));
        auVar70 = pshuflw(auVar70,auVar70,0);
        lVar59 = 0;
        while( true ) {
          uVar30 = uVar30 & plStack_3a8[1];
          auVar137 = *(undefined1 (*) [16])(lVar52 + uVar30);
          auVar119[0] = -(auVar137[0] == auVar70[0]);
          auVar119[1] = -(auVar137[1] == auVar70[1]);
          auVar119[2] = -(auVar137[2] == auVar70[2]);
          auVar119[3] = -(auVar137[3] == auVar70[3]);
          auVar119[4] = -(auVar137[4] == auVar70[4]);
          auVar119[5] = -(auVar137[5] == auVar70[5]);
          auVar119[6] = -(auVar137[6] == auVar70[6]);
          auVar119[7] = -(auVar137[7] == auVar70[7]);
          auVar119[8] = -(auVar137[8] == auVar70[0]);
          auVar119[9] = -(auVar137[9] == auVar70[1]);
          auVar119[10] = -(auVar137[10] == auVar70[2]);
          auVar119[0xb] = -(auVar137[0xb] == auVar70[3]);
          auVar119[0xc] = -(auVar137[0xc] == auVar70[4]);
          auVar119[0xd] = -(auVar137[0xd] == auVar70[5]);
          auVar119[0xe] = -(auVar137[0xe] == auVar70[6]);
          auVar119[0xf] = -(auVar137[0xf] == auVar70[7]);
          uVar58 = (ushort)(SUB161(auVar119 >> 7,0) & 1) |
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
                   (ushort)(auVar119[0xf] >> 7) << 0xf;
          uVar27 = (uint)uVar58;
          while (uVar58 != 0) {
            uVar134 = 0;
            for (uVar138 = uVar27; (uVar138 & 1) == 0; uVar138 = uVar138 >> 1 | 0x80000000) {
              uVar134 = uVar134 + 1;
            }
            lVar56 = (uVar134 + uVar30 & plStack_3a8[1]) * -0x140;
            if ((iVar61 == *(int *)(lVar52 + -0x140 + lVar56)) &&
               (iVar131 == *(int *)(lVar52 + -0x13c + lVar56))) {
              *(undefined1 *)(lVar52 + lVar56 + -6) = 1;
              goto LAB_14082d5c7;
            }
            uVar58 = (ushort)(uVar27 - 1) & (ushort)uVar27;
            uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar58);
          }
          auVar92[0] = -(auVar137[0] == -1);
          auVar92[1] = -(auVar137[1] == -1);
          auVar92[2] = -(auVar137[2] == -1);
          auVar92[3] = -(auVar137[3] == -1);
          auVar92[4] = -(auVar137[4] == -1);
          auVar92[5] = -(auVar137[5] == -1);
          auVar92[6] = -(auVar137[6] == -1);
          auVar92[7] = -(auVar137[7] == -1);
          auVar92[8] = -(auVar137[8] == -1);
          auVar92[9] = -(auVar137[9] == -1);
          auVar92[10] = -(auVar137[10] == -1);
          auVar92[0xb] = -(auVar137[0xb] == -1);
          auVar92[0xc] = -(auVar137[0xc] == -1);
          auVar92[0xd] = -(auVar137[0xd] == -1);
          auVar92[0xe] = -(auVar137[0xe] == -1);
          auVar92[0xf] = -(auVar137[0xf] == -1);
          if ((((((((((((((((SUB161(auVar92 >> 7,0) & 1) != 0 || (SUB161(auVar92 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar92 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar92 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar92 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar92 >> 0x2f,0) & 1) != 0) || (SUB161(auVar92 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar92 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar92 >> 0x47,0) & 1) != 0) || (SUB161(auVar92 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar92 >> 0x57,0) & 1) != 0) || (SUB161(auVar92 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar92 >> 0x67,0) & 1) != 0) || (SUB161(auVar92 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar92 >> 0x77,0) & 1) != 0) || auVar92[0xf] < '\0') break;
          uVar30 = uVar30 + lVar59 + 0x10;
          lVar59 = lVar59 + 0x10;
        }
      }
LAB_14082d5c7:
      uVar26 = uVar26 - 1 & uVar26;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  pauVar42 = (undefined1 (*) [16])0x0;
  if ((auStack_128._0_8_ != 0) && (auStack_148._0_8_ != 0)) {
    pub_1406abac0((byte *)auStack_1a8._0_8_,auStack_148._0_8_,auStack_168._0_8_);
  }
  uStack_2c8 = (uint *)((undefined1 *)auStack_1e8._0_8_ + auStack_1e8._8_8_ + 1);
  auVar70 = *(undefined1 (*) [16])auStack_1e8._0_8_;
  uStack_2c0 = ~((ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
  uStack_2d8._0_4_ = auStack_1e8._0_4_;
  uStack_2d8._4_4_ = auStack_1e8._4_4_;
  uStack_2d0 = (undefined1 (*) [16])(auStack_1e8._0_8_ + 0x10);
  uStack_2b8._0_4_ = auStack_1d8._8_4_;
  uStack_2b8._4_4_ = auStack_1d8._12_4_;
  uStack_fa = 0;
  uStack_fb = 0;
  uStack_fc = 0;
  uVar48 = pdb_1413eb630(&puStack_2f0,&uStack_2d8);
  param_2 = pauStack_2e0;
  param_1 = puStack_3d8;
  pauStack_2f8 = pauStack_2e8;
  if ((undefined1 (*) [16])0x1 < pauStack_2e0) {
    if (pauStack_2e0 < (undefined1 (*) [16])0x15) {
      uStack_12d = 1;
      pdb_14145ff80(pauStack_2e8,pauStack_2e0,1,&bStack_129);
    }
    else {
LAB_14082ee0f:
      uStack_12d = 1;
      pdb_141474720(uVar48,param_2,&bStack_129);
    }
  }
  puStack_720 = puStack_2f0;
  pauVar62 = (undefined1 (*) [16])((longlong)*pauStack_2f8 + (longlong)param_2 * 2 * 4);
  pauStack_170 = (undefined1 (*) [16])
                 CONCAT44(pauStack_170._4_4_,*(undefined4 *)(pbStack_3e0 + 0x1c));
  pauStack_5a8 = *(undefined1 (**) [16])pbStack_3e0;
  pauStack_180 = *(undefined1 (**) [16])(pbStack_3e0 + 0x10);
  pfStack_3d0 = (float *)CONCAT44(pfStack_3d0._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
  puStack_3c8 = (undefined4 *)param_6[2];
  pbStack_190 = (byte *)CONCAT44(pbStack_190._4_4_,*(undefined4 *)((longlong)param_7 + 0x1c));
  pbStack_3c0 = (byte *)param_7[2];
  pbStack_3b8 = (byte *)(*param_7 + 0x30);
  pauStack_398 = (undefined1 (*) [16])(param_1 + 0xf);
  auStack_3f8._0_8_ = param_1 + 0xb;
  pauVar64 = pauStack_2f8;
  pauStack_390 = pauVar62;
LAB_14082d7fb:
  in_stack_fffffffffffff5c8 = (undefined8 **)&fStack_5c8;
  if (pauVar64 != pauVar62) {
    fStack_5c8 = *(float *)*pauVar64;
    fStack_5c4 = *(float *)((longlong)*pauVar64 + 4);
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,fStack_5c8);
    auStack_128._0_4_ = fStack_5c4;
    uVar48 = pdb_1400af680(&pauStack_1c8,in_stack_fffffffffffff5c8);
    pdb_14140a3f0(&uStack_2d8,auStack_1e8,uVar48,in_stack_fffffffffffff5c8);
    if (!SBORROW8(0,(longlong)uStack_2d0)) {
      puStack_610 = puStack_278;
      pauStack_620 = pauStack_288;
      pbStack_618 = pbStack_280;
      uStack_658._0_4_ = CONCAT22(uStack_2be,uStack_2c0);
      auVar15._4_4_ = uStack_2b8._4_4_;
      auVar15._0_4_ = (float)uStack_2b8;
      auVar15._8_4_ = (float)uStack_2b0;
      auVar15._12_4_ = uStack_2b0._4_4_;
      pauStack_640 = (undefined1 (*) [16])CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
      pauStack_638 = (undefined1 (*) [16])CONCAT44(uStack_2a0._4_4_,(float)uStack_2a0);
      auStack_630._8_4_ = uStack_290;
      auStack_630._0_8_ = pauStack_298;
      auStack_630._12_4_ = uStack_28c;
      uStack_650._0_4_ = (uint)(float)uStack_2b8;
      uStack_650._4_4_ = (uint)uStack_2b8._4_4_;
      ppauStack_648 = auVar15._8_8_;
      uStack_658._4_4_ = iStack_2bc;
      auStack_668._8_8_ = uStack_2c8;
      auStack_668._0_8_ = uStack_2d0;
      *(float *)*pauStack_188 = pfStack_198._0_4_;
      if (plStack_3a8[3] != 0) {
        uStack_fd = 1;
        uStack_fe = 1;
        uStack_ff = 1;
        uStack_100 = 1;
        pauStack_3a0 = pauVar64;
        uVar30 = pdb_1400af680(plStack_5b8,in_stack_fffffffffffff5c8);
        lVar29 = *plStack_3a8;
        bVar41 = (byte)(uVar30 >> 0x39);
        auVar70 = ZEXT216(CONCAT11(bVar41,bVar41));
        auVar70 = pshuflw(auVar70,auVar70,0);
        lVar52 = 0;
        while( true ) {
          uVar30 = uVar30 & plStack_3a8[1];
          auVar137 = *(undefined1 (*) [16])(lVar29 + uVar30);
          auVar120[0] = -(auVar137[0] == auVar70[0]);
          auVar120[1] = -(auVar137[1] == auVar70[1]);
          auVar120[2] = -(auVar137[2] == auVar70[2]);
          auVar120[3] = -(auVar137[3] == auVar70[3]);
          auVar120[4] = -(auVar137[4] == auVar70[4]);
          auVar120[5] = -(auVar137[5] == auVar70[5]);
          auVar120[6] = -(auVar137[6] == auVar70[6]);
          auVar120[7] = -(auVar137[7] == auVar70[7]);
          auVar120[8] = -(auVar137[8] == auVar70[0]);
          auVar120[9] = -(auVar137[9] == auVar70[1]);
          auVar120[10] = -(auVar137[10] == auVar70[2]);
          auVar120[0xb] = -(auVar137[0xb] == auVar70[3]);
          auVar120[0xc] = -(auVar137[0xc] == auVar70[4]);
          auVar120[0xd] = -(auVar137[0xd] == auVar70[5]);
          auVar120[0xe] = -(auVar137[0xe] == auVar70[6]);
          auVar120[0xf] = -(auVar137[0xf] == auVar70[7]);
          uVar58 = (ushort)(SUB161(auVar120 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar120 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar120 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar120 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar120[0xf] >> 7) << 0xf;
          uVar26 = (uint)uVar58;
          while (pauVar64 = pauStack_3a0, uVar58 != 0) {
            uVar27 = 0;
            for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000) {
              uVar27 = uVar27 + 1;
            }
            lVar59 = (uVar27 + uVar30 & plStack_3a8[1]) * -0x140;
            if (((int)uStack_1f0 == *(int *)(lVar29 + -0x140 + lVar59)) &&
               (auStack_128._0_4_ == *(int *)(lVar29 + -0x13c + lVar59))) {
              lVar29 = lVar29 + lVar59;
              if (*(longlong *)(lVar29 + -0x20) == 0) goto LAB_14082da60;
              lVar59 = *(longlong *)(lVar29 + -0x18);
              if (lVar59 == 0) {
                uStack_fd = 1;
                uStack_fe = 1;
                uStack_ff = 1;
                uStack_100 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143305b70);
              }
              LOCK();
              bVar67 = *(char *)(lVar59 + 0x18) == '\0';
              if (bVar67) {
                *(char *)(lVar59 + 0x18) = '\x01';
              }
              UNLOCK();
              if (!bVar67) {
                uStack_fd = 1;
                uStack_fe = 1;
                uStack_ff = 1;
                uStack_100 = 1;
                pdb_142dbd1a0(lVar59 + 0x18,CONCAT71((int7)((ulonglong)lVar52 >> 8),1),1000000000);
              }
              uStack_fd = 1;
              uStack_fe = 1;
              uStack_ff = 1;
              uStack_100 = 1;
              pdb_140e9a150(lVar59 + 0x18);
              if ((*(longlong *)(lVar59 + 0x10) == 0) ||
                 (piVar38 = (int *)(*(longlong *)(lVar59 + 8) + *(longlong *)(lVar59 + 0x10) * 4 +
                                   -4), piVar38 == (int *)0x0)) {
                lVar52 = puStack_3d8[2];
                if (lVar52 == 0) {
                  uStack_fd = 1;
                  uStack_fe = 1;
                  uStack_ff = 1;
                  uStack_100 = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143305b88);
                }
                iStack_878 = (int)lVar52 + -1;
              }
              else {
                iStack_878 = *piVar38;
                lVar52 = puStack_3d8[2];
              }
              auVar70 = *(undefined1 (*) [16])(puStack_3d8 + 5);
              auStack_888 = *(undefined1 (*) [16])(puStack_3d8 + 7);
              uStack_8d0._0_4_ = (int)puStack_3d8[1];
              uStack_8d0._4_4_ = (undefined4)((ulonglong)puStack_3d8[1] >> 0x20);
              uStack_8c8._0_4_ = (undefined4)lVar52;
              uStack_8c8._4_4_ = (undefined4)((ulonglong)lVar52 >> 0x20);
              uStack_8c0 = (undefined4)puStack_3d8[3];
              iStack_8bc = (int)((ulonglong)puStack_3d8[3] >> 0x20);
              uStack_8b8._0_4_ = (undefined4)puStack_3d8[4];
              uStack_8b8._4_4_ = (uint)((ulonglong)puStack_3d8[4] >> 0x20);
              uStack_8b0 = (undefined4)lVar59;
              uStack_8ac = (undefined4)((ulonglong)lVar59 >> 0x20);
              iStack_8a8 = auVar70._0_4_;
              uStack_8a4 = auVar70._4_4_;
              uStack_8a0 = auVar70._8_8_;
              pauStack_898 = pauStack_398;
              pbStack_890 = (byte *)auStack_3f8._0_8_;
              lStack_178 = auStack_668._0_8_;
              pbStack_3e0 = (byte *)auStack_668._8_8_;
              if (CONCAT44(uStack_658._4_4_,(undefined4)uStack_658) == 0) goto LAB_14082e030;
              pbVar35 = (byte *)(auStack_668._8_8_ +
                                CONCAT44(uStack_658._4_4_,(undefined4)uStack_658) * 0x38);
              pbVar34 = (byte *)auStack_668._8_8_;
              goto LAB_14082dc1d;
            }
            uVar58 = (ushort)(uVar26 - 1) & (ushort)uVar26;
            uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar58);
          }
          auVar93[0] = -(auVar137[0] == -1);
          auVar93[1] = -(auVar137[1] == -1);
          auVar93[2] = -(auVar137[2] == -1);
          auVar93[3] = -(auVar137[3] == -1);
          auVar93[4] = -(auVar137[4] == -1);
          auVar93[5] = -(auVar137[5] == -1);
          auVar93[6] = -(auVar137[6] == -1);
          auVar93[7] = -(auVar137[7] == -1);
          auVar93[8] = -(auVar137[8] == -1);
          auVar93[9] = -(auVar137[9] == -1);
          auVar93[10] = -(auVar137[10] == -1);
          auVar93[0xb] = -(auVar137[0xb] == -1);
          auVar93[0xc] = -(auVar137[0xc] == -1);
          auVar93[0xd] = -(auVar137[0xd] == -1);
          auVar93[0xe] = -(auVar137[0xe] == -1);
          auVar93[0xf] = -(auVar137[0xf] == -1);
          if ((((((((((((((((SUB161(auVar93 >> 7,0) & 1) != 0 || (SUB161(auVar93 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar93 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar93 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar93 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar93 >> 0x2f,0) & 1) != 0) || (SUB161(auVar93 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar93 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar93 >> 0x47,0) & 1) != 0) || (SUB161(auVar93 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar93 >> 0x57,0) & 1) != 0) || (SUB161(auVar93 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar93 >> 0x67,0) & 1) != 0) || (SUB161(auVar93 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar93 >> 0x77,0) & 1) != 0) || auVar93[0xf] < '\0') break;
          uVar30 = uVar30 + lVar52 + 0x10;
          lVar52 = lVar52 + 0x10;
        }
      }
LAB_14082da60:
      if (auStack_668._0_8_ != 0) {
        pub_1406abac0((byte *)auStack_668._8_8_,auStack_668._0_8_ * 0x38,4);
      }
      ppauVar47 = ppauStack_648;
      if (pauStack_640 != (undefined1 (*) [16])0x0) {
        pauVar42 = (undefined1 (*) [16])(ppauStack_648 + 2);
        pauVar39 = pauStack_640;
        do {
          if (*(longlong *)((longlong)pauVar42[-1] + 8) != 0) {
            pub_1406abac0(*(byte **)*pauVar42,*(longlong *)((longlong)pauVar42[-1] + 8) * 0x30,4);
          }
          pauVar42 = pauVar42 + 4;
          pauVar39 = (undefined1 (*) [16])((longlong)pauVar39[-1] + 0xf);
        } while (pauVar39 != (undefined1 (*) [16])0x0);
      }
      param_1 = (undefined8 *)0x1;
      if (CONCAT44(uStack_650._4_4_,(uint)uStack_650) != 0) {
        pub_1406abac0((byte *)ppauVar47,CONCAT44(uStack_650._4_4_,(uint)uStack_650) << 6,8);
      }
      goto joined_r0x00014082e340;
    }
    goto LAB_14082eb31;
  }
  if (puStack_720 != (undefined8 *)0x0) {
    pub_1406abac0((byte *)pauStack_2f8,(longlong)puStack_720 << 3,4);
  }
  uVar48 = auStack_1e8._8_8_;
  param_2 = (undefined1 (*) [16])0x0;
  if (auStack_1e8._8_8_ != 0) {
    if (auStack_1d8._8_8_ != 0) {
      auVar70 = *(undefined1 (*) [16])auStack_1e8._0_8_;
      pauVar62 = (undefined1 (*) [16])(auStack_1e8._0_8_ + 0x10);
      pauVar64 = (undefined1 (*) [16])
                 (ulonglong)
                 ~(uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
      pauVar42 = (undefined1 (*) [16])auStack_1e8._0_8_;
      lVar29 = auStack_1d8._8_8_;
      do {
        uVar26 = (uint)pauVar64;
        if ((short)pauVar64 == 0) {
          do {
            auVar70 = *pauVar62;
            pauVar42 = pauVar42 + -0x68;
            pauVar62 = pauVar62 + 1;
            uVar26 = (ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar26 == 0);
        }
        uVar27 = 0;
        for (uVar134 = uVar26; (uVar134 & 1) == 0; uVar134 = uVar134 >> 1 | 0x80000000) {
          uVar27 = uVar27 + 1;
        }
        uStack_f1 = 0;
        uStack_f2 = 0;
        uStack_f3 = 0;
        uStack_f4 = 0;
        pdb_1413fe0d0((longlong)pauVar42 + (ulonglong)uVar27 * -0x68 + -0x60);
        pauVar64 = (undefined1 (*) [16])(ulonglong)(uVar26 - 1 & uVar26);
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    param_1 = (undefined8 *)0x0;
    uVar30 = uVar48 * 0x68 + 0x77U & 0xfffffffffffffff0;
    param_2 = (undefined1 (*) [16])(uVar48 + uVar30 + 0x11);
    if (param_2 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)(auStack_1e8._0_8_ - uVar30),(ulonglong)param_2,0x10);
    }
  }
  if (uStack_7c0 != 0) {
    uVar30 = uStack_7c0 * 0xc + 0x1b & 0xfffffffffffffff0;
    uVar33 = uStack_7c0 + uVar30 + 0x11;
    if (uVar33 != 0) {
      pub_1406abac0((byte *)(lStack_7c8 - uVar30),uVar33,0x10);
    }
  }
  if (auStack_718._8_8_ != 0) {
    lVar29 = auStack_718._8_8_ * 0x20 + 0x20;
    uVar30 = auStack_718._8_8_ + lVar29 + 0x11;
    if (uVar30 != 0) {
      pub_1406abac0((byte *)(auStack_718._0_8_ - lVar29),uVar30,0x10);
    }
  }
  if (cStack_149 != '\0') {
    plVar31 = (longlong *)pdb_140e97000();
    if ((char)plVar31[0xd] != '\x01') {
      plVar31 = (longlong *)pdb_142dd9610(plVar31,0);
      if (plVar31 == (longlong *)0x0) goto LAB_14082eb24;
    }
    if (*plVar31 != 0) {
LAB_14082e9c0:
      plVar31 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14082e9cc:
      plVar31 = (longlong *)pdb_142dd9610(plVar31,0);
      if (plVar31 == (longlong *)0x0) {
LAB_14082eb24:
        pdb_142dc7890(&UNK_143307940);
LAB_14082eb31:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14300a160);
      }
      goto LAB_140828498;
    }
    *plVar31 = -1;
    auStack_128._0_8_ = plVar31;
    pdb_140e95370(plVar31 + 1);
    *(longlong *)auStack_128._0_8_ = *(longlong *)auStack_128._0_8_ + 1;
  }
  return;
}

