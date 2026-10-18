// VA 0x140b9f450, PDB extent 21231 bytes
// country_core::systems::wall::wall_state::publish_public_wall_state::publish_public_wall_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/publish_public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::publish_public_wall_state::publish_public_wall_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/publish_public_wall_state.rs
   Extent: 21231 */

void pdb_140b9f450(undefined1 (*param_1) [16],undefined8 *param_2,longlong *param_3,
                  undefined1 (*param_4) [16],undefined8 *param_5,longlong *param_6,
                  undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
                  undefined8 *param_10,longlong *param_11,undefined8 *param_12,undefined8 *param_13,
                  longlong *param_14,longlong *param_15)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  code *pcVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [13];
  undefined1 auVar26 [13];
  undefined1 auVar27 [13];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined4 uVar36;
  char cVar37;
  int iVar38;
  longlong lVar39;
  ulonglong uVar40;
  undefined *puVar41;
  longlong *plVar42;
  longlong lVar43;
  byte *pbVar44;
  byte *pbVar45;
  uint uVar46;
  longlong lVar47;
  byte *pbVar48;
  undefined8 *puVar49;
  byte *pbVar50;
  float *pfVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  undefined4 *puVar56;
  undefined8 *puVar57;
  longlong lVar58;
  undefined1 (*pauVar59) [16];
  ushort uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  undefined1 (*pauVar63) [16];
  ulonglong *puVar64;
  undefined1 (*pauVar65) [16];
  undefined1 (*pauVar66) [16];
  uint uVar67;
  undefined1 (*pauVar68) [16];
  bool bVar69;
  byte bVar70;
  float fVar71;
  float fVar72;
  float fVar80;
  float fVar81;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar82;
  undefined1 auVar79 [16];
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
  char unaff_XMM7_Ba;
  char unaff_XMM7_Bb;
  char unaff_XMM7_Bc;
  char unaff_XMM7_Bd;
  char unaff_XMM7_Be;
  char unaff_XMM7_Bf;
  char unaff_XMM7_Bg;
  char unaff_XMM7_Bh;
  char unaff_XMM7_Bi;
  char unaff_XMM7_Bj;
  char unaff_XMM7_Bk;
  char unaff_XMM7_Bl;
  char unaff_XMM7_Bm;
  char unaff_XMM7_Bn;
  char unaff_XMM7_Bo;
  char unaff_XMM7_Bp;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  ulonglong uStack_cb8;
  undefined8 uStack_cb0;
  ulonglong uStack_ca8;
  ulonglong uStack_ca0;
  byte *pbStack_c98;
  ulonglong uStack_c90;
  undefined4 uStack_c88;
  undefined1 (*pauStack_c80) [16];
  undefined1 (*pauStack_c78) [16];
  byte *pbStack_c70;
  undefined8 *puStack_c68;
  byte *pbStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  longlong lStack_c40;
  ulonglong uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined1 auStack_c20 [16];
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined4 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined1 auStack_bd0 [16];
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined4 uStack_bb0;
  undefined4 uStack_ba8;
  longlong lStack_ba0;
  byte *pbStack_b98;
  longlong lStack_b90;
  byte *pbStack_b88;
  longlong lStack_b80;
  byte *pbStack_b78;
  longlong lStack_b70;
  byte *pbStack_b68;
  longlong lStack_b60;
  byte *pbStack_b58;
  longlong lStack_b50;
  byte *pbStack_b48;
  longlong lStack_b40;
  byte *pbStack_b38;
  undefined1 uStack_b30;
  undefined4 uStack_b2f;
  undefined8 uStack_b28;
  longlong lStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined1 auStack_b08 [16];
  byte *pbStack_af8;
  undefined8 *puStack_af0;
  byte *pbStack_ae8;
  undefined8 *puStack_ae0;
  undefined8 uStack_ad8;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined1 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined4 uStack_a68;
  uint uStack_a60;
  undefined8 uStack_a5c;
  undefined8 uStack_a54;
  undefined8 uStack_a4c;
  undefined4 uStack_a44;
  float fStack_a40;
  float fStack_a3c;
  float fStack_a38;
  undefined4 uStack_a34;
  float fStack_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined8 uStack_a24;
  undefined4 uStack_a1c;
  char cStack_a18;
  undefined1 uStack_a17;
  undefined1 uStack_a16;
  undefined2 uStack_a15;
  undefined1 (*pauStack_a10) [16];
  undefined1 (*pauStack_a08) [16];
  byte *pbStack_a00;
  undefined8 *puStack_9f8;
  byte *pbStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  longlong lStack_9d8;
  byte *pbStack_9d0;
  longlong lStack_9c0;
  byte *pbStack_9b8;
  longlong lStack_9a0;
  byte *pbStack_998;
  longlong lStack_988;
  byte *pbStack_980;
  longlong lStack_970;
  byte *pbStack_968;
  longlong lStack_950;
  byte *pbStack_948;
  longlong lStack_938;
  byte *pbStack_930;
  longlong lStack_920;
  byte *pbStack_918;
  undefined1 auStack_8f8 [16];
  undefined1 auStack_8e8 [16];
  undefined1 auStack_8d8 [16];
  undefined1 auStack_8c8 [16];
  undefined1 auStack_8b8 [16];
  undefined1 auStack_8a8 [16];
  undefined1 auStack_898 [24];
  longlong lStack_880;
  byte *pbStack_878;
  undefined1 uStack_820;
  undefined4 uStack_81f;
  undefined8 uStack_818;
  longlong lStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 (*pauStack_7f0) [16];
  byte *pbStack_7e8;
  undefined8 *puStack_7e0;
  byte *pbStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 uStack_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
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
  undefined1 (*pauStack_740) [16];
  byte *pbStack_738;
  undefined8 *puStack_730;
  byte *pbStack_728;
  undefined8 *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_708;
  undefined1 (*pauStack_700) [16];
  byte *pbStack_6f8;
  undefined8 *puStack_6f0;
  byte *pbStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6c8;
  undefined1 (*pauStack_6c0) [16];
  byte *pbStack_6b8;
  undefined8 *puStack_6b0;
  byte *pbStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined *puStack_678;
  undefined1 (**ppauStack_670) [16];
  undefined1 uStack_4d0;
  undefined4 uStack_4cf;
  undefined8 uStack_4c8;
  longlong lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 (*pauStack_4a0) [16];
  byte *pbStack_498;
  undefined8 *puStack_490;
  byte *pbStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
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
  longlong lStack_418;
  byte *pbStack_410;
  longlong lStack_408;
  byte *pbStack_400;
  longlong lStack_3f8;
  byte *pbStack_3f0;
  longlong lStack_3e8;
  byte *pbStack_3e0;
  longlong lStack_3d8;
  byte *pbStack_3d0;
  longlong lStack_3c8;
  byte *pbStack_3c0;
  longlong lStack_3b8;
  byte *pbStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 (*pauStack_390) [16];
  byte *pbStack_388;
  undefined8 *puStack_380;
  byte *pbStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [8];
  undefined4 *puStack_358;
  longlong lStack_350;
  undefined1 (*pauStack_348) [16];
  longlong lStack_340;
  longlong lStack_338;
  undefined8 uStack_330;
  longlong lStack_328;
  byte *pbStack_320;
  longlong lStack_318;
  byte *pbStack_310;
  longlong lStack_308;
  byte *pbStack_300;
  longlong lStack_2f8;
  byte *pbStack_2f0;
  longlong lStack_2e8;
  byte *pbStack_2e0;
  longlong lStack_2d8;
  byte *pbStack_2d0;
  longlong lStack_2c8;
  ulonglong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  longlong lStack_298;
  ulonglong uStack_290;
  byte *pbStack_288;
  undefined1 (*pauStack_280) [16];
  ulonglong uStack_278;
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  ulonglong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  longlong lStack_238;
  undefined8 uStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  longlong lStack_210;
  ulonglong uStack_208;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  longlong *plStack_1e8;
  byte *pbStack_1e0;
  ulonglong uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  ulonglong uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 (*pauStack_198) [16];
  longlong *plStack_190;
  longlong lStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  undefined1 (*pauStack_168) [16];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  byte *pbStack_150;
  undefined4 uStack_144;
  undefined1 (*pauStack_140) [16];
  undefined1 auStack_138 [16];
  undefined1 uStack_121;
  byte *pbStack_120;
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 (*pauStack_100) [16];
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plStack_190 = param_3;
  cVar37 = pdb_140e94b40();
  if (cVar37 == '\0') {
    lStack_238 = 0;
    goto LAB_140b9f67f;
  }
  pauVar68 = (undefined1 (*) [16])&UNK_1430604ff;
  pauVar66 = (undefined1 (*) [16])0x5d;
  uVar53 = 0x5d;
  lVar39 = pdb_140ba63b0(&UNK_1430604ff);
  if (lVar39 == 1) {
    if (uVar53 < 0x5e) {
      pauVar68 = (undefined1 (*) [16])&UNK_1430604ff;
      uVar40 = pdb_140ba63b0(&UNK_1430604ff);
      if ((uVar40 & 1) != 0) {
        if (0x5d < uVar53 + 2) goto LAB_140ba28d5;
        pauVar66 = (undefined1 (*) [16])(0x5b - uVar53);
        pauVar68 = (undefined1 (*) [16])(&UNK_143060501 + uVar53);
      }
      goto LAB_140b9f546;
    }
  }
  else {
LAB_140b9f546:
    puVar41 = &UNK_143060049;
    pauVar65 = (undefined1 (*) [16])&UNK_14305fffd;
    while( true ) {
      pbVar44 = puVar41 + -1;
      uVar46 = (uint)(char)*pbVar44;
      if ((int)uVar46 < 0) break;
      puVar41 = puVar41 + -1;
      if (uVar46 == 0x5c) goto LAB_140b9f5f5;
LAB_140b9f5d9:
      if (uVar46 == 0x2f) goto LAB_140b9f5f5;
      if (puVar41 == &UNK_14305fffd) {
        uVar53 = 0x4c;
LAB_140b9f618:
        plVar42 = (longlong *)pdb_140e97000();
        if ((char)plVar42[0xd] != '\x01') goto LAB_140ba2516;
        do {
          if (*plVar42 == 0) {
            *plVar42 = -1;
            pauStack_110 = (undefined1 (*) [16])plVar42;
            uStack_230 = pdb_140e94f10(plVar42 + 1,pauVar68,pauVar66,pauVar65,uVar53,1,0);
            *(longlong *)pauStack_110 = *(longlong *)pauStack_110 + 1;
            lStack_238 = 1;
LAB_140b9f67f:
            *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
            pbStack_170 = (byte *)*param_2;
            **(undefined4 **)param_1[1] = *(undefined4 *)(param_1[1] + 0xc);
            pauStack_110 = *(undefined1 (**) [16])*param_1;
            puVar64 = (ulonglong *)*param_10;
            lVar39 = param_10[1];
            uVar53 = *puVar64;
            uVar52 = 0;
            uVar40 = uVar53 - *(ulonglong *)(lVar39 + 0x18);
            if (uVar53 < *(ulonglong *)(lVar39 + 0x18)) {
              uVar40 = uVar52;
            }
            uVar55 = uVar53 - *(ulonglong *)(lVar39 + 0x38);
            if (uVar53 < *(ulonglong *)(lVar39 + 0x38)) {
              uVar55 = uVar52;
            }
            uVar53 = *(ulonglong *)(lVar39 + 0x30);
            uVar61 = uVar53 - uVar55;
            if (uVar55 > uVar53) {
              uVar61 = uVar52;
            }
            uVar8 = *(ulonglong *)(lVar39 + 0x10);
            uVar62 = uVar8 - uVar40;
            if (uVar40 > uVar8) {
              uVar62 = uVar52;
            }
            uVar52 = *(ulonglong *)(lVar39 + 0x40);
            *puVar64 = uVar52 - (uVar62 + uVar61);
            pauVar65 = param_7;
            pauStack_140 = param_4;
            if (uVar40 <= uVar8 && uVar8 - uVar40 != 0 || uVar55 <= uVar53 && uVar53 - uVar55 != 0)
            {
              *puVar64 = uVar52;
              pauVar66 = *(undefined1 (**) [16])pbStack_170;
              lVar54 = *(longlong *)(pbStack_170 + 0x18);
              auVar73 = *pauVar66;
              pauVar68 = pauVar66 + 1;
              uVar46 = ~(uint)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar73[0xf] >> 7) << 0xf);
              pbStack_180 = (byte *)CONCAT44(pbStack_180._4_4_,*(undefined4 *)(param_7[1] + 0xc));
              lVar39 = *(longlong *)*param_7;
              pbStack_178 = *(byte **)param_7[1];
              while (lVar54 != 0) {
                if ((short)uVar46 == 0) {
                  do {
                    auVar73 = *pauVar68;
                    pauVar66 = pauVar66 + -0x2b0;
                    pauVar68 = pauVar68 + 1;
                    uVar46 = (ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar46 == 0);
                }
                uVar67 = 0;
                for (uVar16 = uVar46; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
                  uVar67 = uVar67 + 1;
                }
                uVar46 = uVar46 - 1 & uVar46;
                lVar54 = lVar54 + -1;
                if (pauVar66[(ulonglong)uVar67 * -0x2b + -1][0xb] == '\x02') {
                  pauStack_198 = *(undefined1 (**) [16])pauVar66[(ulonglong)uVar67 * -0x2b + -0x2b];
                  *(undefined4 *)pbStack_178 = pbStack_180._0_4_;
                  lVar43 = *(longlong *)(lVar39 + 0x30);
                  auVar97._0_8_ = *(undefined8 *)(lVar39 + 0x40);
                  if (lVar43 == *(longlong *)(lVar39 + 0x20)) {
                    pdb_142d7e980(lVar39 + 0x20);
                  }
                  lVar47 = *(longlong *)(lVar39 + 0x28);
                  *(undefined8 *)(lVar47 + lVar43 * 0x10) = auVar97._0_8_;
                  *(undefined1 (**) [16])(lVar47 + 8 + lVar43 * 0x10) = pauStack_198;
                  pauVar65 = (undefined1 (*) [16])(lVar43 + 1);
                  *(undefined1 (**) [16])(lVar39 + 0x30) = pauVar65;
                  *(longlong *)(lVar39 + 0x40) = *(longlong *)(lVar39 + 0x40) + 1;
                }
              }
            }
            else {
              pbStack_180 = (byte *)CONCAT44(pbStack_180._4_4_,*(undefined4 *)(param_7[1] + 0xc));
              lVar39 = *(longlong *)*param_7;
              pbStack_178 = *(byte **)param_7[1];
            }
            puVar64 = (ulonglong *)*param_8;
            lVar54 = param_8[1];
            uVar53 = *puVar64;
            uVar52 = 0;
            uVar40 = uVar53 - *(ulonglong *)(lVar54 + 0x18);
            if (uVar53 < *(ulonglong *)(lVar54 + 0x18)) {
              uVar40 = uVar52;
            }
            uVar55 = uVar53 - *(ulonglong *)(lVar54 + 0x38);
            if (uVar53 < *(ulonglong *)(lVar54 + 0x38)) {
              uVar55 = uVar52;
            }
            lVar43 = uVar40 * 0x10 + *(longlong *)(lVar54 + 8);
            uVar53 = *(ulonglong *)(lVar54 + 0x10) - uVar40;
            if (*(ulonglong *)(lVar54 + 0x10) < uVar40) {
              lVar43 = 8;
              uVar53 = uVar52;
            }
            lVar47 = uVar55 * 0x10 + *(longlong *)(lVar54 + 0x28);
            uVar40 = *(ulonglong *)(lVar54 + 0x30) - uVar55;
            if (*(ulonglong *)(lVar54 + 0x30) < uVar55) {
              lVar47 = 8;
              uVar40 = uVar52;
            }
            *puVar64 = (*(longlong *)(lVar54 + 0x40) - uVar40) - uVar53;
            pauStack_118 = (undefined1 (*) [16])(uVar53 * 0x10 + lVar43);
            pbStack_120 = (byte *)(uVar40 * 0x10 + lVar47);
            pauStack_198 = pauStack_110 + 2;
            pauVar68 = pauStack_110;
joined_r0x000140b9f8d9:
            pauStack_110 = pauVar68;
            if (lVar43 != 0) goto LAB_140b9f9af;
LAB_140b9f9d0:
            if ((lVar47 != 0) && ((byte *)lVar47 != pbStack_120)) goto code_r0x000140b9f9de;
            puVar64 = (ulonglong *)*param_9;
            lVar54 = param_9[1];
            uVar53 = *puVar64;
            uVar52 = 0;
            uVar40 = uVar53 - *(ulonglong *)(lVar54 + 0x18);
            if (uVar53 < *(ulonglong *)(lVar54 + 0x18)) {
              uVar40 = uVar52;
            }
            uVar55 = uVar53 - *(ulonglong *)(lVar54 + 0x38);
            if (uVar53 < *(ulonglong *)(lVar54 + 0x38)) {
              uVar55 = uVar52;
            }
            pbVar44 = (byte *)(uVar40 * 0x10 + *(longlong *)(lVar54 + 8));
            uVar53 = *(ulonglong *)(lVar54 + 0x10) - uVar40;
            if (*(ulonglong *)(lVar54 + 0x10) < uVar40) {
              pbVar44 = (byte *)0x8;
              uVar53 = uVar52;
            }
            pbVar48 = (byte *)(uVar55 * 0x10 + *(longlong *)(lVar54 + 0x28));
            uVar40 = *(ulonglong *)(lVar54 + 0x30) - uVar55;
            if (*(ulonglong *)(lVar54 + 0x30) < uVar55) {
              pbVar48 = (byte *)0x8;
              uVar40 = uVar52;
            }
            *puVar64 = (*(longlong *)(lVar54 + 0x40) - uVar40) - uVar53;
            pauStack_118 = (undefined1 (*) [16])(pbVar44 + uVar53 * 0x10);
            pbStack_120 = pbVar48 + uVar40 * 0x10;
joined_r0x000140b9fae5:
            if (pbVar44 != (byte *)0x0) goto LAB_140b9fbaf;
            do {
              if ((pbVar48 == (byte *)0x0) || (pbVar48 == pbStack_120)) {
                pauVar66 = *(undefined1 (**) [16])*pauStack_140;
                pbStack_180 = (byte *)*param_5;
                *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
                lVar39 = *param_11;
                uStack_6c8._0_4_ = (int)pauVar66;
                uStack_6c8._4_4_ = (undefined4)((ulonglong)pauVar66 >> 0x20);
                pbStack_6b8 = pbStack_170;
                puVar57 = &uStack_6c8;
                pauStack_6c0 = pauVar68;
                pdb_1409c2b20(lVar39);
                plVar42 = (longlong *)pdb_140f3bda0();
                if ((char)plVar42[2] == '\x01') {
                  pbStack_6a8 = (byte *)*plVar42;
                  puVar57 = (undefined8 *)plVar42[1];
                }
                else {
                  pbStack_6a8 = (byte *)pdb_140f4fd10();
                  *plVar42 = (longlong)pbStack_6a8;
                  plVar42[1] = (longlong)puVar57;
                  *(undefined1 *)(plVar42 + 2) = 1;
                }
                pauVar63 = pauStack_110;
                *plVar42 = (longlong)pbStack_6a8 + 1;
                pbStack_6b8 = _DAT_143060330;
                puStack_6b0 = (undefined8 *)_UNK_143060338;
                uStack_6c8._0_4_ = (int)_DAT_143060320;
                uStack_6c8._4_4_ = (undefined4)((ulonglong)_DAT_143060320 >> 0x20);
                pauStack_6c0 = _UNK_143060328;
                pauStack_a08 = pauStack_110;
                pbStack_a00 = pbStack_170;
                uStack_102 = 1;
                pauStack_a10 = pauVar66;
                puStack_9f8 = &uStack_6c8;
                puStack_6a0 = puVar57;
                pdb_1409c2a50(lVar39 + 8,&pauStack_a10);
                pauVar68 = (undefined1 (*) [16])CONCAT44(uStack_6c8._4_4_,(int)uStack_6c8);
                auVar73 = *pauVar68;
                pauStack_118 = pauStack_6c0;
                if (pauStack_6c0 == (undefined1 (*) [16])0x0) {
                  pauStack_140 = (undefined1 (*) [16])0x0;
                }
                else {
                  uVar53 = (longlong)pauStack_6c0 * 8 + 0x17U & 0xfffffffffffffff0;
                  pbStack_120 = pauStack_6c0[1] + uVar53 + 1;
                  pauStack_168 = (undefined1 (*) [16])((longlong)pauVar68 - uVar53);
                  pauStack_140 = (undefined1 (*) [16])0x10;
                }
                pauVar66 = pauVar68 + 1;
                uVar67 = ~(uint)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                                        (ushort)(byte)(auVar73[0xf] >> 7) << 0xf);
                pauStack_1b8 = pauVar63 + 6;
                pbStack_178 = pbStack_170 + 0x20;
                fVar115 = (float)(CONCAT13(unaff_XMM7_Bd,
                                           CONCAT12(unaff_XMM7_Bc,
                                                    CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ^
                                 CONCAT13(unaff_XMM7_Bd,
                                          CONCAT12(unaff_XMM7_Bc,
                                                   CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
                unaff_XMM7_Ba = SUB41(fVar115,0);
                unaff_XMM7_Bb = (char)((uint)fVar115 >> 8);
                unaff_XMM7_Bc = (char)((uint)fVar115 >> 0x10);
                unaff_XMM7_Bd = (char)((uint)fVar115 >> 0x18);
                uVar46 = CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ^
                         CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)));
                unaff_XMM7_Be = (char)uVar46;
                unaff_XMM7_Bf = (char)(uVar46 >> 8);
                unaff_XMM7_Bg = (char)(uVar46 >> 0x10);
                unaff_XMM7_Bh = (char)(uVar46 >> 0x18);
                uVar46 = CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ^
                         CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)));
                unaff_XMM7_Bi = (char)uVar46;
                unaff_XMM7_Bj = (char)(uVar46 >> 8);
                unaff_XMM7_Bk = (char)(uVar46 >> 0x10);
                unaff_XMM7_Bl = (char)(uVar46 >> 0x18);
                uVar46 = CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ^
                         CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)));
                unaff_XMM7_Bm = (char)uVar46;
                unaff_XMM7_Bn = (char)(uVar46 >> 8);
                unaff_XMM7_Bo = (char)(uVar46 >> 0x10);
                unaff_XMM7_Bp = (char)(uVar46 >> 0x18);
                puVar57 = puStack_6b0;
                goto LAB_140b9ffd0;
              }
              pbVar45 = pbVar48;
              pbVar44 = (byte *)0x0;
              pbVar48 = pbVar48 + 0x10;
              while( true ) {
                *puVar64 = *puVar64 + 1;
                lVar54 = *(longlong *)(pbVar45 + 8);
                uStack_6c8._0_4_ = (int)lVar54;
                uStack_6c8._4_4_ = (undefined4)((ulonglong)lVar54 >> 0x20);
                if (*(longlong *)(pauVar68[1] + 8) != 0) {
                  uVar53 = pdb_1400af0a0(pauStack_198,&uStack_6c8);
                  bVar70 = (byte)(uVar53 >> 0x39);
                  auVar73 = ZEXT216(CONCAT11(bVar70,bVar70));
                  auVar73 = pshuflw(auVar73,auVar73,0);
                  lVar43 = 0;
                  while( true ) {
                    uVar53 = uVar53 & *(ulonglong *)(*pauStack_110 + 8);
                    auVar93 = *(undefined1 (*) [16])(*(longlong *)*pauStack_110 + uVar53);
                    auVar92[0] = -(auVar93[0] == auVar73[0]);
                    auVar92[1] = -(auVar93[1] == auVar73[1]);
                    auVar92[2] = -(auVar93[2] == auVar73[2]);
                    auVar92[3] = -(auVar93[3] == auVar73[3]);
                    auVar92[4] = -(auVar93[4] == auVar73[4]);
                    auVar92[5] = -(auVar93[5] == auVar73[5]);
                    auVar92[6] = -(auVar93[6] == auVar73[6]);
                    auVar92[7] = -(auVar93[7] == auVar73[7]);
                    auVar92[8] = -(auVar93[8] == auVar73[0]);
                    auVar92[9] = -(auVar93[9] == auVar73[1]);
                    auVar92[10] = -(auVar93[10] == auVar73[2]);
                    auVar92[0xb] = -(auVar93[0xb] == auVar73[3]);
                    auVar92[0xc] = -(auVar93[0xc] == auVar73[4]);
                    auVar92[0xd] = -(auVar93[0xd] == auVar73[5]);
                    auVar92[0xe] = -(auVar93[0xe] == auVar73[6]);
                    auVar92[0xf] = -(auVar93[0xf] == auVar73[7]);
                    uVar60 = (ushort)(SUB161(auVar92 >> 7,0) & 1) |
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
                    uVar46 = (uint)uVar60;
                    while (uVar60 != 0) {
                      uVar67 = 0;
                      for (uVar16 = uVar46; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
                        uVar67 = uVar67 + 1;
                      }
                      if (lVar54 == *(longlong *)
                                     (*(longlong *)*pauStack_110 + -0x78 +
                                     (uVar67 + uVar53 & *(ulonglong *)(*pauStack_110 + 8)) * -0x78))
                      {
                        *(undefined4 *)pbStack_178 = pbStack_180._0_4_;
                        lVar43 = *(longlong *)(lVar39 + 0x30);
                        auVar97._0_8_ = *(undefined8 *)(lVar39 + 0x40);
                        if (lVar43 == *(longlong *)(lVar39 + 0x20)) {
                          pdb_142d7e980(lVar39 + 0x20);
                        }
                        lVar47 = *(longlong *)(lVar39 + 0x28);
                        *(undefined8 *)(lVar47 + lVar43 * 0x10) = auVar97._0_8_;
                        *(longlong *)(lVar47 + 8 + lVar43 * 0x10) = lVar54;
                        pauVar65 = (undefined1 (*) [16])(lVar43 + 1);
                        *(undefined1 (**) [16])(lVar39 + 0x30) = pauVar65;
                        *(longlong *)(lVar39 + 0x40) = *(longlong *)(lVar39 + 0x40) + 1;
                        pauVar68 = pauStack_110;
                        goto joined_r0x000140b9fae5;
                      }
                      uVar60 = (ushort)(uVar46 - 1) & (ushort)uVar46;
                      uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar60);
                    }
                    auVar84[0] = -(auVar93[0] == -1);
                    auVar84[1] = -(auVar93[1] == -1);
                    auVar84[2] = -(auVar93[2] == -1);
                    auVar84[3] = -(auVar93[3] == -1);
                    auVar84[4] = -(auVar93[4] == -1);
                    auVar84[5] = -(auVar93[5] == -1);
                    auVar84[6] = -(auVar93[6] == -1);
                    auVar84[7] = -(auVar93[7] == -1);
                    auVar84[8] = -(auVar93[8] == -1);
                    auVar84[9] = -(auVar93[9] == -1);
                    auVar84[10] = -(auVar93[10] == -1);
                    auVar84[0xb] = -(auVar93[0xb] == -1);
                    auVar84[0xc] = -(auVar93[0xc] == -1);
                    auVar84[0xd] = -(auVar93[0xd] == -1);
                    auVar84[0xe] = -(auVar93[0xe] == -1);
                    auVar84[0xf] = -(auVar93[0xf] == -1);
                    pauVar68 = pauStack_110;
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
                    uVar53 = uVar53 + lVar43 + 0x10;
                    lVar43 = lVar43 + 0x10;
                  }
                }
                if (pbVar44 == (byte *)0x0) break;
LAB_140b9fbaf:
                if ((undefined1 (*) [16])pbVar44 == pauStack_118) break;
                pbVar45 = pbVar44;
                pbVar44 = pbVar44 + 0x10;
              }
            } while( true );
          }
LAB_140ba250a:
          plVar42 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140ba2516:
          plVar42 = (longlong *)pdb_142d8ec20(plVar42,0);
        } while (plVar42 != (longlong *)0x0);
LAB_140ba2529:
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140ba2535;
      }
    }
    bVar70 = puVar41[-2];
    if ((char)bVar70 < -0x40) {
      bVar6 = puVar41[-3];
      if ((char)bVar6 < -0x40) {
        pbVar48 = puVar41 + -4;
        puVar41 = puVar41 + -4;
        uVar46 = bVar6 & 0x3f | (*pbVar48 & 7) << 6;
      }
      else {
        puVar41 = puVar41 + -3;
        uVar46 = bVar6 & 0xf;
      }
      uVar46 = bVar70 & 0x3f | uVar46 << 6;
    }
    else {
      puVar41 = puVar41 + -2;
      uVar46 = bVar70 & 0x1f;
    }
    uVar46 = (uint)(*pbVar44 & 0x3f) | uVar46 << 6;
    if (uVar46 != 0x5c) goto LAB_140b9f5d9;
LAB_140b9f5f5:
    if (puVar41 + -0x14305fffc < (undefined *)0x4d) {
      uVar53 = 0x4b - (longlong)(puVar41 + -0x14305fffd);
      pauVar65 = (undefined1 (*) [16])(puVar41 + 1);
      goto LAB_140b9f618;
    }
    pdb_142dc8070(&UNK_14305fffd,0x4c,puVar41 + -0x14305fffc,0x4c,&UNK_1430605c0);
  }
  pdb_142dc8070(&UNK_1430604ff,0x5d,0);
LAB_140ba28d5:
  pauVar68 = (undefined1 (*) [16])&UNK_1430604ff;
  uVar53 = 0x5d;
  pdb_142dc8070();
  goto LAB_140ba28f8;
code_r0x000140b9f9de:
  lVar54 = lVar47;
  lVar43 = 0;
  lVar47 = lVar47 + 0x10;
  while( true ) {
    *puVar64 = *puVar64 + 1;
    lVar54 = *(longlong *)(lVar54 + 8);
    uStack_6c8._0_4_ = (int)lVar54;
    uStack_6c8._4_4_ = (undefined4)((ulonglong)lVar54 >> 0x20);
    if (*(longlong *)(pauVar68[1] + 8) != 0) {
      uVar53 = pdb_1400af0a0(pauStack_198,&uStack_6c8);
      bVar70 = (byte)(uVar53 >> 0x39);
      auVar73 = ZEXT216(CONCAT11(bVar70,bVar70));
      auVar73 = pshuflw(auVar73,auVar73,0);
      lVar58 = 0;
      while( true ) {
        uVar53 = uVar53 & *(ulonglong *)(*pauStack_110 + 8);
        auVar93 = *(undefined1 (*) [16])(*(longlong *)*pauStack_110 + uVar53);
        auVar91[0] = -(auVar93[0] == auVar73[0]);
        auVar91[1] = -(auVar93[1] == auVar73[1]);
        auVar91[2] = -(auVar93[2] == auVar73[2]);
        auVar91[3] = -(auVar93[3] == auVar73[3]);
        auVar91[4] = -(auVar93[4] == auVar73[4]);
        auVar91[5] = -(auVar93[5] == auVar73[5]);
        auVar91[6] = -(auVar93[6] == auVar73[6]);
        auVar91[7] = -(auVar93[7] == auVar73[7]);
        auVar91[8] = -(auVar93[8] == auVar73[0]);
        auVar91[9] = -(auVar93[9] == auVar73[1]);
        auVar91[10] = -(auVar93[10] == auVar73[2]);
        auVar91[0xb] = -(auVar93[0xb] == auVar73[3]);
        auVar91[0xc] = -(auVar93[0xc] == auVar73[4]);
        auVar91[0xd] = -(auVar93[0xd] == auVar73[5]);
        auVar91[0xe] = -(auVar93[0xe] == auVar73[6]);
        auVar91[0xf] = -(auVar93[0xf] == auVar73[7]);
        uVar60 = (ushort)(SUB161(auVar91 >> 7,0) & 1) | (ushort)(SUB161(auVar91 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar91 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar91 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar91 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar91 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar91 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar91 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar91 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar91 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar91 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar91 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar91 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar91 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar91 >> 0x77,0) & 1) << 0xe | (ushort)(auVar91[0xf] >> 7) << 0xf
        ;
        uVar46 = (uint)uVar60;
        while (uVar60 != 0) {
          uVar67 = 0;
          for (uVar16 = uVar46; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar67 = uVar67 + 1;
          }
          if (lVar54 == *(longlong *)
                         (*(longlong *)*pauStack_110 + -0x78 +
                         (uVar67 + uVar53 & *(ulonglong *)(*pauStack_110 + 8)) * -0x78)) {
            *(undefined4 *)pbStack_178 = pbStack_180._0_4_;
            lVar58 = *(longlong *)(lVar39 + 0x30);
            auVar97._0_8_ = *(undefined8 *)(lVar39 + 0x40);
            if (lVar58 == *(longlong *)(lVar39 + 0x20)) {
              pdb_142d7e980(lVar39 + 0x20);
            }
            lVar9 = *(longlong *)(lVar39 + 0x28);
            *(undefined8 *)(lVar9 + lVar58 * 0x10) = auVar97._0_8_;
            *(longlong *)(lVar9 + 8 + lVar58 * 0x10) = lVar54;
            pauVar65 = (undefined1 (*) [16])(lVar58 + 1);
            *(undefined1 (**) [16])(lVar39 + 0x30) = pauVar65;
            *(longlong *)(lVar39 + 0x40) = *(longlong *)(lVar39 + 0x40) + 1;
            pauVar68 = pauStack_110;
            goto joined_r0x000140b9f8d9;
          }
          uVar60 = (ushort)(uVar46 - 1) & (ushort)uVar46;
          uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar60);
        }
        auVar83[0] = -(auVar93[0] == -1);
        auVar83[1] = -(auVar93[1] == -1);
        auVar83[2] = -(auVar93[2] == -1);
        auVar83[3] = -(auVar93[3] == -1);
        auVar83[4] = -(auVar93[4] == -1);
        auVar83[5] = -(auVar93[5] == -1);
        auVar83[6] = -(auVar93[6] == -1);
        auVar83[7] = -(auVar93[7] == -1);
        auVar83[8] = -(auVar93[8] == -1);
        auVar83[9] = -(auVar93[9] == -1);
        auVar83[10] = -(auVar93[10] == -1);
        auVar83[0xb] = -(auVar93[0xb] == -1);
        auVar83[0xc] = -(auVar93[0xc] == -1);
        auVar83[0xd] = -(auVar93[0xd] == -1);
        auVar83[0xe] = -(auVar93[0xe] == -1);
        auVar83[0xf] = -(auVar93[0xf] == -1);
        pauVar68 = pauStack_110;
        if ((((((((((((((((SUB161(auVar83 >> 7,0) & 1) != 0 || (SUB161(auVar83 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar83 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar83 >> 0x1f,0) & 1) != 0) || (SUB161(auVar83 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar83 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar83 >> 0x37,0) & 1) != 0) || (SUB161(auVar83 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar83 >> 0x47,0) & 1) != 0) || (SUB161(auVar83 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar83 >> 0x57,0) & 1) != 0) || (SUB161(auVar83 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar83 >> 0x67,0) & 1) != 0) || (SUB161(auVar83 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar83 >> 0x77,0) & 1) != 0) || auVar83[0xf] < '\0') break;
        uVar53 = uVar53 + lVar58 + 0x10;
        lVar58 = lVar58 + 0x10;
      }
    }
    if (lVar43 == 0) break;
LAB_140b9f9af:
    if ((undefined1 (*) [16])lVar43 == pauStack_118) break;
    lVar54 = lVar43;
    lVar43 = lVar43 + 0x10;
  }
  goto LAB_140b9f9d0;
LAB_140b9ffd0:
  while (pauVar63 = pauStack_110, puVar57 != (undefined8 *)0x0) {
    if ((short)uVar67 == 0) {
      do {
        auVar73 = *pauVar66;
        pauVar68 = pauVar68 + -8;
        pauVar66 = pauVar66 + 1;
        uVar67 = (ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar67 == 0);
    }
    iVar38 = 0;
    for (uVar46 = uVar67; (uVar46 & 1) == 0; uVar46 = uVar46 >> 1 | 0x80000000) {
      iVar38 = iVar38 + 1;
    }
    uVar67 = uVar67 - 1 & uVar67;
    puVar57 = (undefined8 *)((longlong)puVar57 + -1);
    pauVar63 = *(undefined1 (**) [16])((longlong)pauVar68 + (-8 - (ulonglong)(uint)(iVar38 << 3)));
    pauStack_a10 = pauVar63;
    if (*(longlong *)(pbStack_170 + 0x18) != 0) {
      uVar53 = pdb_1400af0a0(pbStack_178,&pauStack_a10);
      lVar39 = *(longlong *)pbStack_170;
      bVar70 = (byte)(uVar53 >> 0x39);
      auVar73 = ZEXT216(CONCAT11(bVar70,bVar70));
      auVar73 = pshuflw(auVar73,auVar73,0);
      lVar54 = 0;
      while( true ) {
        uVar53 = uVar53 & *(ulonglong *)(pbStack_170 + 8);
        auVar93 = *(undefined1 (*) [16])(lVar39 + uVar53);
        auVar119[0] = -(auVar93[0] == auVar73[0]);
        auVar119[1] = -(auVar93[1] == auVar73[1]);
        auVar119[2] = -(auVar93[2] == auVar73[2]);
        auVar119[3] = -(auVar93[3] == auVar73[3]);
        auVar119[4] = -(auVar93[4] == auVar73[4]);
        auVar119[5] = -(auVar93[5] == auVar73[5]);
        auVar119[6] = -(auVar93[6] == auVar73[6]);
        auVar119[7] = -(auVar93[7] == auVar73[7]);
        auVar119[8] = -(auVar93[8] == auVar73[0]);
        auVar119[9] = -(auVar93[9] == auVar73[1]);
        auVar119[10] = -(auVar93[10] == auVar73[2]);
        auVar119[0xb] = -(auVar93[0xb] == auVar73[3]);
        auVar119[0xc] = -(auVar93[0xc] == auVar73[4]);
        auVar119[0xd] = -(auVar93[0xd] == auVar73[5]);
        auVar119[0xe] = -(auVar93[0xe] == auVar73[6]);
        auVar119[0xf] = -(auVar93[0xf] == auVar73[7]);
        uVar60 = (ushort)(SUB161(auVar119 >> 7,0) & 1) |
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
        uVar46 = (uint)uVar60;
        while (uVar60 != 0) {
          uVar16 = 0;
          for (uVar17 = uVar46; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          lVar43 = (uVar16 + uVar53 & *(ulonglong *)(pbStack_170 + 8)) * -0x2b0;
          if (pauVar63 == *(undefined1 (**) [16])(lVar39 + -0x2b0 + lVar43)) {
            lVar39 = lVar39 + lVar43;
            if ((*(ulonglong *)(lVar39 + -0x298) < 2) || (*(float *)(lVar39 + -0x278) <= fVar115)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143060118);
            }
            pauStack_a10 = pauVar63;
            if (*(longlong *)(pauStack_110[1] + 8) == 0) goto LAB_140ba0070;
            uVar53 = pdb_1400af0a0(pauStack_198,&pauStack_a10);
            lVar54 = *(longlong *)*pauStack_110;
            bVar70 = (byte)(uVar53 >> 0x39);
            auVar73 = ZEXT216(CONCAT11(bVar70,bVar70));
            auVar73 = pshuflw(auVar73,auVar73,0);
            lVar43 = 0;
            goto LAB_140b9fedd;
          }
          uVar60 = (ushort)(uVar46 - 1) & (ushort)uVar46;
          uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar60);
        }
        auVar116[0] = -(auVar93[0] == -1);
        auVar116[1] = -(auVar93[1] == -1);
        auVar116[2] = -(auVar93[2] == -1);
        auVar116[3] = -(auVar93[3] == -1);
        auVar116[4] = -(auVar93[4] == -1);
        auVar116[5] = -(auVar93[5] == -1);
        auVar116[6] = -(auVar93[6] == -1);
        auVar116[7] = -(auVar93[7] == -1);
        auVar116[8] = -(auVar93[8] == -1);
        auVar116[9] = -(auVar93[9] == -1);
        auVar116[10] = -(auVar93[10] == -1);
        auVar116[0xb] = -(auVar93[0xb] == -1);
        auVar116[0xc] = -(auVar93[0xc] == -1);
        auVar116[0xd] = -(auVar93[0xd] == -1);
        auVar116[0xe] = -(auVar93[0xe] == -1);
        auVar116[0xf] = -(auVar93[0xf] == -1);
        if ((((((((((((((((SUB161(auVar116 >> 7,0) & 1) != 0 || (SUB161(auVar116 >> 0xf,0) & 1) != 0
                         ) || (SUB161(auVar116 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar116 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar116 >> 0x27,0) & 1) != 0) ||
                     (SUB161(auVar116 >> 0x2f,0) & 1) != 0) || (SUB161(auVar116 >> 0x37,0) & 1) != 0
                    ) || (SUB161(auVar116 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar116 >> 0x47,0) & 1) != 0) || (SUB161(auVar116 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar116 >> 0x57,0) & 1) != 0) || (SUB161(auVar116 >> 0x5f,0) & 1) != 0)
              || (SUB161(auVar116 >> 0x67,0) & 1) != 0) || (SUB161(auVar116 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar116 >> 0x77,0) & 1) != 0) || auVar116[0xf] < '\0') break;
        uVar53 = uVar53 + lVar54 + 0x10;
        lVar54 = lVar54 + 0x10;
      }
    }
  }
  if ((pauStack_118 != (undefined1 (*) [16])0x0) && (pbStack_120 != (byte *)0x0)) {
    pub_1406abac0((byte *)pauStack_168,(ulonglong)pbStack_120,(ulonglong)pauStack_140);
  }
  pauStack_348 = pauVar63 + 9;
  uStack_6c8 = pauStack_348;
  pdb_1417bc720(pauStack_1b8,&uStack_6c8);
  pauVar68 = *(undefined1 (**) [16])pauStack_110[9];
  pbStack_6b8 = *pauVar68 + *(longlong *)(pauStack_110[9] + 8) + 1;
  auVar73 = *pauVar68;
  pbStack_6a8 = *(byte **)(pauStack_110[10] + 8);
  uStack_6c8._0_4_ = (int)pauVar68;
  uStack_6c8._4_4_ = (undefined4)((ulonglong)pauVar68 >> 0x20);
  pauStack_6c0 = pauVar68 + 1;
  puStack_6b0 = (undefined8 *)
                CONCAT62(puStack_6b0._2_6_,
                         ~((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar73[0xf] >> 7) << 0xf));
  pdb_1415f3ae0(&pauStack_270,&uStack_6c8);
  pauVar68 = pauStack_268;
  uVar53 = uStack_260;
  if (uStack_260 < 2) {
LAB_140ba015a:
    pauVar66 = pauStack_270;
    if (uStack_260 != 0) goto LAB_140ba016a;
  }
  else {
    if (uStack_260 < 0x15) {
      puVar64 = (ulonglong *)(*pauStack_268 + 8);
      lVar39 = 8;
      do {
        uVar52 = puVar64[-1];
        uVar40 = *puVar64;
        lVar54 = lVar39;
        if (uVar40 < uVar52) {
          do {
            lVar43 = lVar54;
            *(ulonglong *)(*pauStack_268 + lVar43) = uVar52;
            pauVar66 = pauStack_268;
            if (lVar43 == 8) goto LAB_140ba2562;
            uVar52 = *(ulonglong *)(pauStack_268[-1] + lVar43);
            lVar54 = lVar43 + -8;
          } while (uVar40 < uVar52);
          pauVar66 = (undefined1 (*) [16])(pauStack_268[-1] + lVar43 + 8);
LAB_140ba2562:
          *(ulonglong *)*pauVar66 = uVar40;
        }
        puVar64 = puVar64 + 1;
        lVar39 = lVar39 + 8;
        if (puVar64 == (ulonglong *)(*pauStack_268 + uStack_260 * 8)) goto LAB_140ba015a;
      } while( true );
    }
LAB_140ba28f8:
    uStack_f2 = 1;
    pdb_140a91360();
LAB_140ba016a:
    pauStack_100 = pauStack_270;
    pauStack_168 = (undefined1 (*) [16])(uVar53 << 3);
    pbStack_120 = (byte *)CONCAT44(pbStack_120._4_4_,*(undefined4 *)((longlong)plStack_190 + 0x1c));
    plVar42 = (longlong *)*plStack_190;
    pauStack_140 = (undefined1 (*) [16])plStack_190[2];
    auStack_138._0_4_ = *(undefined4 *)((longlong)param_6 + 0x1c);
    lVar39 = *param_6;
    plStack_1e8 = (longlong *)param_6[2];
    pauVar65 = (undefined1 (*) [16])0x0;
    pauStack_118 = pauVar68;
    do {
      pauVar68 = *(undefined1 (**) [16])(*pauVar65 + (longlong)*pauStack_118);
      *(undefined4 *)pauStack_140 = pbStack_120._0_4_;
      pauStack_a10 = pauVar68;
      pauStack_240 = pauVar68;
      auVar97._0_8_ = pdb_1400af0a0(plVar42 + 10,&pauStack_a10);
      pdb_140cabbb0(&uStack_6c8,plVar42 + 6,auVar97._0_8_,&pauStack_a10);
      if ((int)uStack_6c8 == 1) {
        uVar7 = pbStack_6b8._0_4_;
        lVar54 = plVar42[2];
        if (lVar54 == *plVar42) {
          pdb_142d8d710(plVar42);
        }
        *(undefined4 *)(plVar42[1] + lVar54 * 4) = uVar7;
        plVar42[2] = lVar54 + 1;
      }
      auVar97._0_8_ = pdb_1400af0a0(pbStack_178,&pauStack_240);
      pdb_140ca9970(&uStack_6c8,pbStack_170,auVar97._0_8_,&pauStack_240);
      if ((!SBORROW8(0,(longlong)pauStack_6c0)) &&
         (pub_142e32760(&pauStack_a10,&pauStack_6c0,0x2a8), !SBORROW8(0,(longlong)pauStack_a10))) {
        pdb_14099efb0(&pauStack_a10);
        *(undefined4 *)plStack_1e8 = auStack_138._0_4_;
        lVar54 = *(longlong *)(lVar39 + 0x30);
        auVar97._0_8_ = *(undefined8 *)(lVar39 + 0x40);
        if (lVar54 == *(longlong *)(lVar39 + 0x20)) {
          pdb_142d7e980(lVar39 + 0x20);
        }
        lVar43 = *(longlong *)(lVar39 + 0x28);
        *(undefined8 *)(lVar43 + lVar54 * 0x10) = auVar97._0_8_;
        *(undefined1 (**) [16])(lVar43 + 8 + lVar54 * 0x10) = pauVar68;
        *(longlong *)(lVar39 + 0x30) = lVar54 + 1;
        *(longlong *)(lVar39 + 0x40) = *(longlong *)(lVar39 + 0x40) + 1;
      }
      pauVar65 = (undefined1 (*) [16])(*pauVar65 + 8);
      pauVar66 = pauStack_100;
      pauVar68 = pauStack_118;
    } while (pauStack_168 != pauVar65);
  }
  if (pauVar66 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar68,(longlong)pauVar66 << 3,8);
  }
  pauVar68 = *(undefined1 (**) [16])pauStack_110[3];
  pbStack_6b8 = *pauVar68 + *(longlong *)(pauStack_110[3] + 8) + 1;
  auVar73 = *pauVar68;
  pbStack_6a8 = *(byte **)(pauStack_110[4] + 8);
  uStack_6c8._0_4_ = (int)pauVar68;
  uStack_6c8._4_4_ = (undefined4)((ulonglong)pauVar68 >> 0x20);
  pauStack_6c0 = pauVar68 + 1;
  puStack_6b0 = (undefined8 *)
                CONCAT62(puStack_6b0._2_6_,
                         ~((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar73[0xf] >> 7) << 0xf));
  uStack_f2 = 0;
  pdb_1415f3ae0(&pbStack_288,&uStack_6c8);
  uVar53 = uStack_278;
  pauStack_118 = pauStack_280;
  if (uStack_278 < 2) {
LAB_140ba03c6:
    pbVar44 = pbStack_288;
    if (uStack_278 != 0) goto LAB_140ba03d6;
  }
  else {
    if (uStack_278 < 0x15) {
      puVar64 = (ulonglong *)(*pauStack_280 + 8);
      lVar39 = 8;
      do {
        uVar52 = puVar64[-1];
        uVar40 = *puVar64;
        lVar54 = lVar39;
        if (uVar40 < uVar52) {
          do {
            lVar43 = lVar54;
            *(ulonglong *)(*pauStack_280 + lVar43) = uVar52;
            pauVar68 = pauStack_280;
            if (lVar43 == 8) goto LAB_140ba25be;
            uVar52 = *(ulonglong *)(pauStack_280[-1] + lVar43);
            lVar54 = lVar43 + -8;
          } while (uVar40 < uVar52);
          pauVar68 = (undefined1 (*) [16])(pauStack_280[-1] + lVar43 + 8);
LAB_140ba25be:
          *(ulonglong *)*pauVar68 = uVar40;
        }
        puVar64 = puVar64 + 1;
        lVar39 = lVar39 + 8;
        if (puVar64 == (ulonglong *)(*pauStack_280 + uStack_278 * 8)) goto LAB_140ba03c6;
      } while( true );
    }
    uStack_f1 = 1;
    pdb_140a91360(pauStack_280,uStack_278,&uStack_101);
LAB_140ba03d6:
    plVar42 = _DAT_143ca8e90;
    pbStack_120 = pbStack_288;
    uVar7 = *(undefined4 *)((longlong)plStack_190 + 0x1c);
    lVar39 = *plStack_190;
    puVar10 = (undefined4 *)plStack_190[2];
    pauVar65 = (undefined1 (*) [16])0x0;
    do {
      auStack_360 = *(undefined1 (*) [8])(*pauVar65 + (longlong)*pauStack_118);
      *puVar10 = uVar7;
      iVar38 = pdb_140a6a9b0(lVar39);
      if ((iVar38 == 0) && (*plVar42 != 0)) {
        pauStack_a10 = (undefined1 (*) [16])auStack_360;
        pauStack_a08 = (undefined1 (*) [16])pdb_140c04ef0;
        uStack_6c8._0_4_ = 0;
        uStack_6c8._4_4_ = 0;
        pauStack_6c0 = (undefined1 (*) [16])&UNK_1430600d0;
        pbStack_6b8 = (byte *)0x42;
        puStack_6b0 = (undefined8 *)0x0;
        pbStack_6a8 = &UNK_14305ffb0;
        puStack_6a0 = (undefined8 *)0x4c;
        uStack_698 = 1;
        puStack_690 = &UNK_1430600d0;
        uStack_688 = 0x42;
        uStack_680 = 0x9b00000001;
        puStack_678 = &UNK_1430600a0;
        ppauStack_670 = &pauStack_a10;
        pdb_140f332f0(&uStack_101,&uStack_6c8);
      }
      pauVar65 = (undefined1 (*) [16])(*pauVar65 + 8);
      pbVar44 = pbStack_120;
    } while ((undefined1 (*) [16])(uVar53 << 3) != pauVar65);
  }
  if (pbVar44 != (byte *)0x0) {
    pub_1406abac0((byte *)pauStack_118,(longlong)pbVar44 << 3,8);
  }
  auVar83 = _DAT_14305f180;
  auVar91 = _DAT_14305f170;
  fVar2 = _DAT_142f57bc4;
  pauVar63 = *(undefined1 (**) [16])pauStack_110[3];
  auVar73 = *pauVar63;
  param_1 = *(undefined1 (**) [16])pauStack_110[6];
  auVar93 = *param_1;
  uVar53 = (ulonglong)
           ~(uint)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar73[0xf] >> 7) << 0xf);
  param_2 = (undefined8 *)
            (ulonglong)
            ~(uint)(ushort)((ushort)(SUB161(auVar93 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar93[0xf] >> 7) << 0xf);
  plStack_190 = (longlong *)*plStack_190;
  uStack_220 = *param_12;
  lStack_350 = *param_15;
  lStack_338 = *param_14;
  uStack_330 = *param_13;
  uStack_1fc = *(undefined4 *)(param_7[1] + 0xc);
  lStack_228 = *(longlong *)*param_7;
  puStack_358 = *(undefined4 **)param_7[1];
  iVar38 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  unaff_XMM7_Ba = (char)iVar38;
  unaff_XMM7_Bb = (char)((uint)iVar38 >> 8);
  unaff_XMM7_Bc = (char)((uint)iVar38 >> 0x10);
  unaff_XMM7_Bd = (char)((uint)iVar38 >> 0x18);
  iVar38 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  unaff_XMM7_Be = (char)iVar38;
  unaff_XMM7_Bf = (char)((uint)iVar38 >> 8);
  unaff_XMM7_Bg = (char)((uint)iVar38 >> 0x10);
  unaff_XMM7_Bh = (char)((uint)iVar38 >> 0x18);
  iVar38 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  unaff_XMM7_Bi = (char)iVar38;
  unaff_XMM7_Bj = (char)((uint)iVar38 >> 8);
  unaff_XMM7_Bk = (char)((uint)iVar38 >> 0x10);
  unaff_XMM7_Bl = (char)((uint)iVar38 >> 0x18);
  iVar38 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  unaff_XMM7_Bm = (char)iVar38;
  unaff_XMM7_Bn = (char)((uint)iVar38 >> 8);
  unaff_XMM7_Bo = (char)((uint)iVar38 >> 0x10);
  unaff_XMM7_Bp = (char)((uint)iVar38 >> 0x18);
  pauVar68 = pauVar63 + 1;
  param_4 = param_1 + 1;
  plStack_1e8 = plStack_190 + 10;
  lStack_340 = lStack_228 + 0x20;
  pbVar44 = *(byte **)(pauStack_110[4] + 8);
  pauVar59 = (undefined1 (*) [16])*(undefined4 **)(pauStack_110[7] + 8);
  fVar120 = _DAT_142e36f50;
  fVar115 = _DAT_142e3a74c;
LAB_140ba061a:
  pauVar66 = pauStack_110;
  if (pauVar63 != (undefined1 (*) [16])0x0) {
    if (pbVar44 != (byte *)0x0) {
      if ((short)uVar53 == 0) {
        do {
          auVar73 = *pauVar68;
          pauVar63 = pauVar63 + -8;
          pauVar68 = pauVar68 + 1;
          uVar46 = (ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) ^ 0xffff;
          uVar53 = (ulonglong)uVar46;
        } while (uVar46 == 0);
      }
      uVar67 = (uint)uVar53;
      iVar38 = 0;
      for (uVar46 = uVar67; (uVar46 & 1) == 0; uVar46 = uVar46 >> 1 | 0x80000000) {
        iVar38 = iVar38 + 1;
      }
      lVar39 = (longlong)pauVar63 - (ulonglong)(uint)(iVar38 << 3);
      auStack_138._4_4_ = 0;
      auStack_138._1_3_ = (uint3)((uint)(iVar38 << 3) >> 8);
      auStack_138[0] = 1;
      uVar53 = (ulonglong)(uVar67 - 1 & uVar67);
      pbStack_120 = pbVar44 + -1;
      goto LAB_140ba06d6;
    }
    pbVar44 = (byte *)0x0;
  }
  if (pauVar59 != (undefined1 (*) [16])0x0) {
    if ((short)param_2 == 0) {
      do {
        auVar73 = *param_4;
        param_1 = param_1 + -8;
        param_4 = param_4 + 1;
        uVar46 = (ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) ^ 0xffff;
        param_2 = (undefined8 *)(ulonglong)uVar46;
      } while (uVar46 == 0);
    }
    uVar67 = (uint)param_2;
    iVar38 = 0;
    for (uVar46 = uVar67; (uVar46 & 1) == 0; uVar46 = uVar46 >> 1 | 0x80000000) {
      iVar38 = iVar38 + 1;
    }
    lVar39 = (longlong)param_1 - (ulonglong)(uint)(iVar38 << 3);
    pauVar59 = (undefined1 (*) [16])((longlong)pauVar59 - 1);
    pauVar63 = (undefined1 (*) [16])0x0;
    param_2 = (undefined8 *)(ulonglong)(uVar67 - 1 & uVar67);
    auVar73._8_8_ = 0;
    auVar73._0_8_ = auStack_138._8_8_;
    auStack_138 = auVar73 << 0x40;
    pbStack_120 = pbVar44;
LAB_140ba06d6:
    pauStack_248 = *(undefined1 (**) [16])(lVar39 + -8);
    uStack_6c8._0_4_ = (int)pauStack_248;
    uStack_6c8._4_4_ = (undefined4)((ulonglong)pauStack_248 >> 0x20);
    pauStack_168 = pauVar63;
    pauStack_140 = pauVar59;
    pauStack_118 = pauStack_248;
    if (*(longlong *)(pauStack_110[1] + 8) != 0) {
      uStack_f1 = 0;
      uVar40 = pdb_1400af0a0(pauStack_198,&uStack_6c8);
      lVar39 = *(longlong *)*pauStack_110;
      bVar70 = (byte)(uVar40 >> 0x39);
      auVar73 = ZEXT216(CONCAT11(bVar70,bVar70));
      auVar73 = pshuflw(auVar73,auVar73,0);
      lVar54 = 0;
      while( true ) {
        uVar40 = uVar40 & *(ulonglong *)(*pauStack_110 + 8);
        auVar93 = *(undefined1 (*) [16])(lVar39 + uVar40);
        auVar94[0] = -(auVar93[0] == auVar73[0]);
        auVar94[1] = -(auVar93[1] == auVar73[1]);
        auVar94[2] = -(auVar93[2] == auVar73[2]);
        auVar94[3] = -(auVar93[3] == auVar73[3]);
        auVar94[4] = -(auVar93[4] == auVar73[4]);
        auVar94[5] = -(auVar93[5] == auVar73[5]);
        auVar94[6] = -(auVar93[6] == auVar73[6]);
        auVar94[7] = -(auVar93[7] == auVar73[7]);
        auVar94[8] = -(auVar93[8] == auVar73[0]);
        auVar94[9] = -(auVar93[9] == auVar73[1]);
        auVar94[10] = -(auVar93[10] == auVar73[2]);
        auVar94[0xb] = -(auVar93[0xb] == auVar73[3]);
        auVar94[0xc] = -(auVar93[0xc] == auVar73[4]);
        auVar94[0xd] = -(auVar93[0xd] == auVar73[5]);
        auVar94[0xe] = -(auVar93[0xe] == auVar73[6]);
        auVar94[0xf] = -(auVar93[0xf] == auVar73[7]);
        uVar60 = (ushort)(SUB161(auVar94 >> 7,0) & 1) | (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe | (ushort)(auVar94[0xf] >> 7) << 0xf
        ;
        uVar46 = (uint)uVar60;
        while (uVar60 != 0) {
          uVar67 = 0;
          for (uVar16 = uVar46; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar67 = uVar67 + 1;
          }
          pauVar65 = (undefined1 (*) [16])
                     ((uVar67 + uVar40 & *(ulonglong *)(*pauStack_110 + 8)) * -0x78);
          if (pauStack_118 == *(undefined1 (**) [16])(pauVar65[-8] + lVar39 + 8)) {
            uStack_6c8._0_4_ = (int)pauStack_118;
            uStack_6c8._4_4_ = (undefined4)((ulonglong)pauStack_118 >> 0x20);
            pbVar44 = pbStack_120;
            pauVar59 = pauStack_140;
            pauVar63 = pauStack_168;
            if (plStack_190[9] == 0) goto LAB_140ba061a;
            uStack_f1 = 0;
            uVar40 = pdb_1400af0a0(plStack_1e8,&uStack_6c8);
            pauVar66 = (undefined1 (*) [16])(*pauVar65 + lVar39);
            bVar70 = (byte)(uVar40 >> 0x39);
            auVar73 = ZEXT216(CONCAT11(bVar70,bVar70));
            auVar73 = pshuflw(auVar73,auVar73,0);
            lVar39 = 0;
            goto LAB_140ba082a;
          }
          uVar60 = (ushort)(uVar46 - 1) & (ushort)uVar46;
          uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar60);
        }
        auVar86[0] = -(auVar93[0] == unaff_XMM7_Ba);
        auVar86[1] = -(auVar93[1] == unaff_XMM7_Bb);
        auVar86[2] = -(auVar93[2] == unaff_XMM7_Bc);
        auVar86[3] = -(auVar93[3] == unaff_XMM7_Bd);
        auVar86[4] = -(auVar93[4] == unaff_XMM7_Be);
        auVar86[5] = -(auVar93[5] == unaff_XMM7_Bf);
        auVar86[6] = -(auVar93[6] == unaff_XMM7_Bg);
        auVar86[7] = -(auVar93[7] == unaff_XMM7_Bh);
        auVar86[8] = -(auVar93[8] == unaff_XMM7_Bi);
        auVar86[9] = -(auVar93[9] == unaff_XMM7_Bj);
        auVar86[10] = -(auVar93[10] == unaff_XMM7_Bk);
        auVar86[0xb] = -(auVar93[0xb] == unaff_XMM7_Bl);
        auVar86[0xc] = -(auVar93[0xc] == unaff_XMM7_Bm);
        auVar86[0xd] = -(auVar93[0xd] == unaff_XMM7_Bn);
        auVar86[0xe] = -(auVar93[0xe] == unaff_XMM7_Bo);
        auVar86[0xf] = -(auVar93[0xf] == unaff_XMM7_Bp);
        if ((((((((((((((((SUB161(auVar86 >> 7,0) & 1) != 0 || (SUB161(auVar86 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar86 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar86 >> 0x1f,0) & 1) != 0) || (SUB161(auVar86 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar86 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar86 >> 0x37,0) & 1) != 0) || (SUB161(auVar86 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar86 >> 0x47,0) & 1) != 0) || (SUB161(auVar86 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar86 >> 0x57,0) & 1) != 0) || (SUB161(auVar86 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar86 >> 0x67,0) & 1) != 0) || (SUB161(auVar86 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar86 >> 0x77,0) & 1) != 0) || auVar86[0xf] < '\0') break;
        uVar40 = lVar54 + uVar40 + 0x10;
        lVar54 = lVar54 + 0x10;
      }
    }
    uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143060050);
  }
  if (*(longlong *)(pauStack_110[4] + 8) != 0) {
    param_2 = *(undefined8 **)(pauStack_110[3] + 8);
    if (param_2 == (undefined8 *)0x0) {
      puVar57 = (undefined8 *)0x0;
    }
    else {
      pub_142e32780(*(undefined8 *)pauStack_110[3],0xff,(longlong)param_2 + 0x11);
      puVar57 = (undefined8 *)
                (((longlong)param_2 + 1U & 0xfffffffffffffff8) - ((longlong)param_2 + 1U >> 3));
      if (param_2 < (undefined8 *)0x8) {
        puVar57 = param_2;
      }
    }
    *(undefined8 *)(pauVar66[4] + 8) = 0;
    *(undefined8 **)pauVar66[4] = puVar57;
  }
  if (*(longlong *)(pauVar66[7] + 8) != 0) {
    param_2 = *(undefined8 **)(pauVar66[6] + 8);
    if (param_2 == (undefined8 *)0x0) {
      puVar57 = (undefined8 *)0x0;
    }
    else {
      pub_142e32780(*(undefined8 *)*pauStack_1b8,0xff,(longlong)param_2 + 0x11);
      puVar57 = (undefined8 *)
                (((longlong)param_2 + 1U & 0xfffffffffffffff8) - ((longlong)param_2 + 1U >> 3));
      if (param_2 < (undefined8 *)0x8) {
        puVar57 = param_2;
      }
    }
    *(undefined8 *)(pauVar66[7] + 8) = 0;
    *(undefined8 **)pauVar66[7] = puVar57;
  }
  if (*(longlong *)(pauVar66[10] + 8) != 0) {
    param_2 = *(undefined8 **)(pauVar66[9] + 8);
    if (param_2 == (undefined8 *)0x0) {
      puVar57 = (undefined8 *)0x0;
    }
    else {
      pub_142e32780(*(undefined8 *)*pauStack_348,0xff,(longlong)param_2 + 0x11);
      puVar57 = (undefined8 *)
                (((longlong)param_2 + 1U & 0xfffffffffffffff8) - ((longlong)param_2 + 1U >> 3));
      if (param_2 < (undefined8 *)0x8) {
        puVar57 = param_2;
      }
    }
    *(undefined8 *)(pauVar66[10] + 8) = 0;
    *(undefined8 **)pauVar66[10] = puVar57;
  }
  if (lStack_238 == 0) {
    return;
  }
  plVar42 = (longlong *)pdb_140e97000();
  if (((char)plVar42[0xd] == '\x01') ||
     (plVar42 = (longlong *)pdb_142d8ec20(plVar42,0), plVar42 != (longlong *)0x0)) {
    if (*plVar42 == 0) {
      *plVar42 = -1;
      pauStack_110 = (undefined1 (*) [16])plVar42;
      pdb_140e95370(plVar42 + 1,uStack_230);
      *(longlong *)pauStack_110 = *(longlong *)pauStack_110 + 1;
      return;
    }
    goto LAB_140ba250a;
  }
  goto LAB_140ba2529;
LAB_140b9fedd:
  uVar53 = uVar53 & *(ulonglong *)(*pauStack_110 + 8);
  pcVar1 = (char *)(lVar54 + uVar53);
  auVar93[0] = -(*pcVar1 == auVar73[0]);
  auVar93[1] = -(pcVar1[1] == auVar73[1]);
  auVar93[2] = -(pcVar1[2] == auVar73[2]);
  auVar93[3] = -(pcVar1[3] == auVar73[3]);
  auVar93[4] = -(pcVar1[4] == auVar73[4]);
  auVar93[5] = -(pcVar1[5] == auVar73[5]);
  auVar93[6] = -(pcVar1[6] == auVar73[6]);
  auVar93[7] = -(pcVar1[7] == auVar73[7]);
  auVar93[8] = -(pcVar1[8] == auVar73[0]);
  auVar93[9] = -(pcVar1[9] == auVar73[1]);
  auVar93[10] = -(pcVar1[10] == auVar73[2]);
  auVar93[0xb] = -(pcVar1[0xb] == auVar73[3]);
  auVar93[0xc] = -(pcVar1[0xc] == auVar73[4]);
  auVar93[0xd] = -(pcVar1[0xd] == auVar73[5]);
  auVar93[0xe] = -(pcVar1[0xe] == auVar73[6]);
  auVar93[0xf] = -(pcVar1[0xf] == auVar73[7]);
  uVar60 = (ushort)(SUB161(auVar93 >> 7,0) & 1) | (ushort)(SUB161(auVar93 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar93 >> 0x77,0) & 1) << 0xe | (ushort)(auVar93[0xf] >> 7) << 0xf;
  uVar46 = (uint)uVar60;
  while (uVar60 != 0) {
    uVar16 = 0;
    for (uVar17 = uVar46; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    lVar47 = (uVar16 + uVar53 & *(ulonglong *)(*pauStack_110 + 8)) * -0x78;
    if (pauVar63 == *(undefined1 (**) [16])(lVar54 + -0x78 + lVar47)) {
      fVar2 = *(float *)(lVar54 + lVar47 + -0x18);
      pauVar65 = *(undefined1 (**) [16])(lVar39 + -0x268);
      lVar39 = *(longlong *)(lVar39 + -0x260);
      puVar41 = *pauVar65;
      goto LAB_140b9ff76;
    }
    uVar60 = (ushort)(uVar46 - 1) & (ushort)uVar46;
    uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar60);
  }
  auVar85[0] = -(*pcVar1 == -1);
  auVar85[1] = -(pcVar1[1] == -1);
  auVar85[2] = -(pcVar1[2] == -1);
  auVar85[3] = -(pcVar1[3] == -1);
  auVar85[4] = -(pcVar1[4] == -1);
  auVar85[5] = -(pcVar1[5] == -1);
  auVar85[6] = -(pcVar1[6] == -1);
  auVar85[7] = -(pcVar1[7] == -1);
  auVar85[8] = -(pcVar1[8] == -1);
  auVar85[9] = -(pcVar1[9] == -1);
  auVar85[10] = -(pcVar1[10] == -1);
  auVar85[0xb] = -(pcVar1[0xb] == -1);
  auVar85[0xc] = -(pcVar1[0xc] == -1);
  auVar85[0xd] = -(pcVar1[0xd] == -1);
  auVar85[0xe] = -(pcVar1[0xe] == -1);
  auVar85[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar85 >> 7,0) & 1) != 0 || (SUB161(auVar85 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar85 >> 0x17,0) & 1) != 0) || (SUB161(auVar85 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar85 >> 0x27,0) & 1) != 0) || (SUB161(auVar85 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar85 >> 0x37,0) & 1) != 0) || (SUB161(auVar85 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar85 >> 0x47,0) & 1) != 0) || (SUB161(auVar85 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar85 >> 0x57,0) & 1) != 0) || (SUB161(auVar85 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar85 >> 0x67,0) & 1) != 0) || (SUB161(auVar85 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar85 >> 0x77,0) & 1) != 0) || auVar85[0xf] < '\0') {
LAB_140ba0070:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143060130);
  }
  uVar53 = uVar53 + lVar43 + 0x10;
  lVar43 = lVar43 + 0x10;
  goto LAB_140b9fedd;
  while (fVar71 <= fVar120) {
LAB_140b9ff76:
    if (pauVar65 == (undefined1 (*) [16])(puVar41 + lVar39 * 0xc)) goto LAB_140b9ffd0;
    fVar120 = *(float *)(*pauVar65 + 4);
    fVar71 = (float)pdb_1419c1ac0(pbStack_180,*(undefined4 *)*pauVar65,
                                  *(undefined4 *)(*pauVar65 + 8));
    pauVar65 = (undefined1 (*) [16])(*pauVar65 + 0xc);
    if (fVar2 < fVar120) {
      if ((fVar71 != fVar120) || (NAN(fVar71) || NAN(fVar120))) {
        pdb_1403b05d0(pauStack_1b8,pauVar63);
        goto LAB_140b9ffd0;
      }
      goto LAB_140b9ff76;
    }
  }
  pdb_1403b05d0(pauStack_1b8,pauVar63);
  goto LAB_140b9ffd0;
LAB_140ba082a:
  uVar40 = uVar40 & plStack_190[7];
  auVar93 = *(undefined1 (*) [16])(plStack_190[6] + uVar40);
  auVar95[0] = -(auVar93[0] == auVar73[0]);
  auVar95[1] = -(auVar93[1] == auVar73[1]);
  auVar95[2] = -(auVar93[2] == auVar73[2]);
  auVar95[3] = -(auVar93[3] == auVar73[3]);
  auVar95[4] = -(auVar93[4] == auVar73[4]);
  auVar95[5] = -(auVar93[5] == auVar73[5]);
  auVar95[6] = -(auVar93[6] == auVar73[6]);
  auVar95[7] = -(auVar93[7] == auVar73[7]);
  auVar95[8] = -(auVar93[8] == auVar73[0]);
  auVar95[9] = -(auVar93[9] == auVar73[1]);
  auVar95[10] = -(auVar93[10] == auVar73[2]);
  auVar95[0xb] = -(auVar93[0xb] == auVar73[3]);
  auVar95[0xc] = -(auVar93[0xc] == auVar73[4]);
  auVar95[0xd] = -(auVar93[0xd] == auVar73[5]);
  auVar95[0xe] = -(auVar93[0xe] == auVar73[6]);
  auVar95[0xf] = -(auVar93[0xf] == auVar73[7]);
  uVar60 = (ushort)(SUB161(auVar95 >> 7,0) & 1) | (ushort)(SUB161(auVar95 >> 0xf,0) & 1) << 1 |
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
  uVar46 = (uint)uVar60;
  while (pbVar44 = pbStack_120, pauVar59 = pauStack_140, pauVar63 = pauStack_168, uVar60 != 0) {
    uVar67 = 0;
    for (uVar16 = uVar46; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      uVar67 = uVar67 + 1;
    }
    lVar54 = plStack_190[6] + (uVar67 + uVar40 & plStack_190[7]) * -0x10;
    pauStack_100 = pauVar66;
    if (pauStack_118 == *(undefined1 (**) [16])(lVar54 + -0x10)) {
      if ((*(ulonglong *)pauVar66[-6] < 2) || (*(float *)pauVar66[-4] <= 0.0)) goto LAB_140ba061a;
      uStack_1f8 = *(undefined4 *)(lVar54 + -8);
      *puStack_358 = uStack_1fc;
      lVar39 = *(longlong *)(lStack_228 + 0x30);
      auVar97._0_8_ = *(undefined8 *)(lStack_228 + 0x40);
      pauStack_1b0 = pauVar66 + -7;
      if (lVar39 == *(longlong *)(lStack_228 + 0x20)) {
        uStack_f1 = 0;
        pdb_142d7e980(lStack_340);
      }
      lVar54 = *(longlong *)(lStack_228 + 0x28);
      *(undefined8 *)(lVar54 + lVar39 * 0x10) = auVar97._0_8_;
      *(undefined1 (**) [16])(lVar54 + 8 + lVar39 * 0x10) = pauStack_118;
      *(longlong *)(lStack_228 + 0x30) = lVar39 + 1;
      *(longlong *)(lStack_228 + 0x40) = *(longlong *)(lStack_228 + 0x40) + 1;
      uStack_f1 = 0;
      auVar97._0_8_ = pdb_1400af0a0(pbStack_178,&pauStack_248);
      uStack_f1 = 0;
      pdb_140ca9970(&uStack_6c8,pbStack_170,auVar97._0_8_,&pauStack_248);
      uStack_160 = pauStack_6c0;
      if (!SBORROW8(0,(longlong)pauStack_6c0)) {
        pub_142e32760(&pauStack_a08,&pbStack_6b8,0x1e8);
        uStack_1a0 = uStack_4cf;
        uStack_3a8 = uStack_4b8;
        uStack_3a0 = uStack_4b0;
        uStack_368 = uStack_478;
        pbStack_378 = pbStack_488;
        puStack_370 = puStack_480;
        pbStack_388 = pbStack_498;
        puStack_380 = puStack_490;
        uStack_398 = uStack_4a8;
        pauStack_390 = pauStack_4a0;
        uStack_778 = uStack_428;
        uStack_770 = uStack_420;
        uStack_788 = uStack_438;
        uStack_780 = uStack_430;
        uStack_798 = uStack_448;
        uStack_790 = uStack_440;
        uStack_7a8 = uStack_458;
        uStack_7a0 = uStack_450;
        uStack_7b8 = uStack_468;
        uStack_7b0 = uStack_460;
        pauStack_a10 = uStack_160;
        uStack_121 = uStack_4d0;
        uStack_820 = uStack_4d0;
        uStack_81f = uStack_4cf;
        uStack_218 = uStack_4c8;
        uStack_818 = uStack_4c8;
        lStack_210 = lStack_4c0;
        lStack_810 = lStack_4c0;
        uStack_808 = uStack_4b8;
        uStack_800 = uStack_4b0;
        uStack_7c8 = uStack_478;
        pbStack_7d8 = pbStack_488;
        puStack_7d0 = puStack_480;
        pbStack_7e8 = pbStack_498;
        puStack_7e0 = puStack_490;
        uStack_7f8 = uStack_4a8;
        pauStack_7f0 = pauStack_4a0;
        uStack_144 = uStack_470;
        uStack_7c0 = uStack_470;
        uStack_1f4 = uStack_46c;
        uStack_7bc = uStack_46c;
        if (auStack_138[0] != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143060068,0x1c,&UNK_143060088);
        }
        uStack_1c0 = uStack_4cf;
        uStack_758 = uStack_4b8;
        uStack_750 = uStack_4b0;
        uStack_708 = uStack_4a8;
        pauStack_700 = pauStack_4a0;
        pbStack_6f8 = pbStack_498;
        puStack_6f0 = puStack_490;
        pbStack_6e8 = pbStack_488;
        puStack_6e0 = puStack_480;
        uStack_6d8 = uStack_478;
        if (uStack_160 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_a08,(longlong)uStack_160 * 8,4);
        }
        if (puStack_9f8 != (undefined8 *)0x0) {
          pub_1406abac0(pbStack_9f0,(longlong)puStack_9f8 << 2,4);
        }
        if (lStack_9d8 != 0) {
          pub_1406abac0(pbStack_9d0,lStack_9d8 * 0xc,4);
        }
        if (lStack_9c0 != 0) {
          pub_1406abac0(pbStack_9b8,lStack_9c0 << 2,4);
        }
        if (lStack_9a0 != 0) {
          pub_1406abac0(pbStack_998,lStack_9a0 << 2,4);
        }
        if (lStack_988 != 0) {
          pub_1406abac0(pbStack_980,lStack_988 * 0xc,4);
        }
        if (lStack_970 != 0) {
          pub_1406abac0(pbStack_968,lStack_970 << 2,4);
        }
        if (lStack_950 != 0) {
          pub_1406abac0(pbStack_948,lStack_950 << 2,4);
        }
        pdb_140977610(auStack_8f8);
        pdb_140977610(auStack_8e8);
        pdb_140977610(auStack_8d8);
        pdb_140977610(auStack_8c8);
        pdb_140977610(auStack_8b8);
        pdb_140977610(auStack_8a8);
        pdb_140977610(auStack_898);
        if (lStack_938 != 0) {
          pub_1406abac0(pbStack_930,lStack_938 << 2,4);
        }
        if (lStack_920 != 0) {
          pub_1406abac0(pbStack_918,lStack_920 << 2,4);
        }
        if (lStack_880 != 0) {
          pub_1406abac0(pbStack_878,lStack_880 << 3,4);
        }
      }
      uStack_1c8 = uStack_1c0;
      uStack_768 = uStack_758;
      uStack_760 = uStack_750;
      uStack_718 = uStack_6d8;
      pbStack_728 = pbStack_6e8;
      puStack_720 = puStack_6e0;
      pbStack_738 = pbStack_6f8;
      puStack_730 = puStack_6f0;
      uStack_748 = uStack_708;
      pauStack_740 = pauStack_700;
      lVar39 = *(longlong *)(lStack_350 + 8);
      lVar54 = *(longlong *)(lStack_350 + 0x10) * 0x98;
      goto LAB_140ba0e27;
    }
    uVar60 = (ushort)(uVar46 - 1) & (ushort)uVar46;
    uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar60);
  }
  auVar87[0] = -(auVar93[0] == unaff_XMM7_Ba);
  auVar87[1] = -(auVar93[1] == unaff_XMM7_Bb);
  auVar87[2] = -(auVar93[2] == unaff_XMM7_Bc);
  auVar87[3] = -(auVar93[3] == unaff_XMM7_Bd);
  auVar87[4] = -(auVar93[4] == unaff_XMM7_Be);
  auVar87[5] = -(auVar93[5] == unaff_XMM7_Bf);
  auVar87[6] = -(auVar93[6] == unaff_XMM7_Bg);
  auVar87[7] = -(auVar93[7] == unaff_XMM7_Bh);
  auVar87[8] = -(auVar93[8] == unaff_XMM7_Bi);
  auVar87[9] = -(auVar93[9] == unaff_XMM7_Bj);
  auVar87[10] = -(auVar93[10] == unaff_XMM7_Bk);
  auVar87[0xb] = -(auVar93[0xb] == unaff_XMM7_Bl);
  auVar87[0xc] = -(auVar93[0xc] == unaff_XMM7_Bm);
  auVar87[0xd] = -(auVar93[0xd] == unaff_XMM7_Bn);
  auVar87[0xe] = -(auVar93[0xe] == unaff_XMM7_Bo);
  auVar87[0xf] = -(auVar93[0xf] == unaff_XMM7_Bp);
  if ((((((((((((((((SUB161(auVar87 >> 7,0) & 1) != 0 || (SUB161(auVar87 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar87 >> 0x17,0) & 1) != 0) || (SUB161(auVar87 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar87 >> 0x27,0) & 1) != 0) || (SUB161(auVar87 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar87 >> 0x37,0) & 1) != 0) || (SUB161(auVar87 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar87 >> 0x47,0) & 1) != 0) || (SUB161(auVar87 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar87 >> 0x57,0) & 1) != 0) || (SUB161(auVar87 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar87 >> 0x67,0) & 1) != 0) || (SUB161(auVar87 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar87 >> 0x77,0) & 1) != 0) || auVar87[0xf] < '\0') goto LAB_140ba061a;
  uVar40 = uVar40 + lVar39 + 0x10;
  lVar39 = lVar39 + 0x10;
  goto LAB_140ba082a;
  while( true ) {
    puVar57 = (undefined8 *)(lVar39 + 0x70);
    lVar39 = lVar39 + 0x98;
    lVar54 = lVar43 + -0x98;
    if ((undefined1 (*) [16])*puVar57 == pauStack_118) break;
LAB_140ba0e27:
    lVar43 = lVar54;
    if (lVar43 == 0) break;
  }
  pbVar44 = *(byte **)pauStack_100[-6];
  uVar40 = (longlong)pbVar44 * 8;
  if (0x7ffffffffffffffc < uVar40 || (ulonglong)pbVar44 >> 0x3d != 0) {
    auVar97._0_8_ = 0;
LAB_140ba24a8:
    pdb_142dc7e2a(auVar97._0_8_,uVar40);
    goto LAB_140ba296a;
  }
  lStack_188 = lVar43;
  if (uVar40 == 0) {
    auStack_138._0_8_ = 4;
    pbStack_150 = (byte *)0x0;
    puVar57 = *(undefined8 **)(pauStack_100[-7] + 8);
    pbVar48 = pbStack_150;
  }
  else {
    puStack_158 = *(undefined8 **)(pauStack_100[-7] + 8);
    pdb_14007ee60();
    pbVar45 = pub_1406abab0(uVar40,4);
    auVar97._0_8_ = 4;
    auStack_138._0_8_ = pbVar45;
    puVar57 = puStack_158;
    pbVar48 = pbVar44;
    if (pbVar45 == (byte *)0x0) goto LAB_140ba24a8;
  }
  pbStack_150 = pbVar48;
  if (pbVar44 != (byte *)0x0) {
    pub_142e32760(auStack_138._0_8_,puVar57,uVar40);
  }
  puVar57 = *(undefined8 **)(pauStack_100[-5] + 8);
  uVar40 = (longlong)puVar57 * 4;
  if (uVar40 < 0x7ffffffffffffffd && (ulonglong)puVar57 >> 0x3e == 0) {
    if (uVar40 == 0) {
      pbVar48 = (byte *)0x4;
      pbStack_6b8 = pbVar44;
    }
    else {
      puVar10 = *(undefined4 **)pauStack_100[-5];
      pbStack_1e0 = pbVar44;
      puStack_158 = puVar57;
      pdb_14007ee60();
      pbVar48 = pub_1406abab0(uVar40,4);
      auVar97._0_8_ = 4;
      if (pbVar48 == (byte *)0x0) goto LAB_140ba24d6;
      puVar57 = puStack_158;
      pbStack_6b8 = pbStack_1e0;
      if (puStack_158 != (undefined8 *)0x0) {
        puVar49 = (undefined8 *)((longlong)puStack_158 - 1U);
        if (puStack_158 < (undefined8 *)((longlong)puStack_158 - 1U)) {
          puVar49 = puStack_158;
        }
        if (puVar49 < (undefined8 *)0x8) {
          lVar39 = 0;
          puVar49 = puStack_158;
          puVar56 = puVar10;
        }
        else {
          uVar52 = (longlong)puVar49 + 1;
          uVar40 = (ulonglong)((uint)uVar52 & 7);
          if ((uVar52 & 7) == 0) {
            uVar40 = 8;
          }
          lVar39 = uVar52 - uVar40;
          puVar49 = (undefined8 *)((longlong)puStack_158 - lVar39);
          puVar56 = puVar10 + lVar39;
          lVar54 = 0;
          do {
            auVar97._0_8_ = *(undefined8 *)((longlong)(puVar10 + lVar54) + 8);
            auVar99._0_8_ = *(undefined8 *)(puVar10 + lVar54 + 4);
            auVar101._0_8_ = *(undefined8 *)((longlong)(puVar10 + lVar54 + 4) + 8);
            *(undefined8 *)(pbVar48 + lVar54 * 4) = *(undefined8 *)(puVar10 + lVar54);
            *(undefined8 *)(pbVar48 + lVar54 * 4 + 8) = auVar97._0_8_;
            *(undefined8 *)(pbVar48 + lVar54 * 4 + 0x10) = auVar99._0_8_;
            *(undefined8 *)(pbVar48 + lVar54 * 4 + 0x10 + 8) = auVar101._0_8_;
            lVar54 = lVar54 + 8;
          } while (lVar39 != lVar54);
        }
        pbVar44 = pbVar48 + lVar39 * 4;
        do {
          if (puVar56 == puVar10 + (longlong)puStack_158) break;
          uVar7 = *puVar56;
          puVar56 = puVar56 + 1;
          *(undefined4 *)pbVar44 = uVar7;
          pbVar44 = pbVar44 + 4;
          puVar49 = (undefined8 *)((longlong)puVar49 + -1);
        } while (puVar49 != (undefined8 *)0x0);
      }
    }
    uVar36 = uStack_144;
    uVar7 = *(undefined4 *)pauStack_100[-4];
    uStack_6c8._0_4_ = (int)pbStack_150;
    uStack_6c8._4_4_ = (undefined4)((ulonglong)pbStack_150 >> 0x20);
    pauStack_6c0 = (undefined1 (*) [16])auStack_138._0_8_;
    uStack_698 = CONCAT44(uStack_698._4_4_,uVar7);
    pbStack_150 = (byte *)CONCAT44(uStack_6c8._4_4_,*(int *)(pauStack_100[-4] + 8));
    puStack_6b0 = puVar57;
    pbStack_6a8 = pbVar48;
    puStack_6a0 = puVar57;
    pdb_1419ac6d0(&pauStack_a10,&uStack_6c8,*(int *)(pauStack_100[-4] + 8) == 1,puVar57,pbStack_180,
                  pauStack_1b0);
    if (CONCAT44(uStack_6c8._4_4_,(int)uStack_6c8) != 0) {
      pub_1406abac0((byte *)pauStack_6c0,CONCAT44(uStack_6c8._4_4_,(int)uStack_6c8) << 3,4);
    }
    uStack_144 = uVar36;
    if (puStack_6b0 != (undefined8 *)0x0) {
      pub_1406abac0(pbStack_6a8,(longlong)puStack_6b0 << 2,4);
    }
    pbVar44 = pbStack_a00;
    pauStack_6c0 = (undefined1 (*) [16])(*pauStack_a08 + (longlong)pbStack_a00 * 0xc);
    auStack_138._0_8_ = pauStack_a08;
    uStack_6c8._0_4_ = (int)pauStack_a08;
    uStack_6c8._4_4_ = (undefined4)((ulonglong)pauStack_a08 >> 0x20);
    pbStack_6b8 = pbStack_180;
    pdb_1415eb960(&uStack_2a0,&uStack_6c8);
    puStack_158 = (undefined8 *)CONCAT44(puStack_158._4_4_,*(undefined4 *)(pauStack_100[-2] + 4));
    pauStack_1b0 = (undefined1 (*) [16])CONCAT71(pauStack_1b0._1_7_,pauStack_100[-1][10]);
    puVar49 = (undefined8 *)pdb_140bf45b0(uStack_220,&UNK_14331a530);
    if ((puVar49 == (undefined8 *)0x0) ||
       (lVar39 = (**(code **)(puVar49[1] + 0x18))(*puVar49), lVar39 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143060148);
    }
    pdb_14007ee60();
    pbVar48 = pub_1406abab0(0x20,8);
    if (pbVar48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    pbVar48[0] = 0;
    pbVar48[1] = 0;
    pbVar48[2] = 0;
    pbVar48[3] = 0;
    pbVar48[4] = 0;
    pbVar48[5] = 0;
    pbVar48[6] = 0;
    pbVar48[7] = 0;
    pbVar48[8] = 4;
    pbVar48[9] = 0;
    pbVar48[10] = 0;
    pbVar48[0xb] = 0;
    pbVar48[0xc] = 0;
    pbVar48[0xd] = 0;
    pbVar48[0xe] = 0;
    pbVar48[0xf] = 0;
    pbVar48[0x10] = 0;
    pbVar48[0x11] = 0;
    pbVar48[0x12] = 0;
    pbVar48[0x13] = 0;
    pbVar48[0x14] = 0;
    pbVar48[0x15] = 0;
    pbVar48[0x16] = 0;
    pbVar48[0x17] = 0;
    pbVar48[0x18] = 0;
    lVar54 = *(longlong *)(lVar39 + 0x48);
    do {
      lVar43 = *(longlong *)(lVar54 + 8);
      while (lVar43 != -1) {
        if (lVar43 < 0) {
          uStack_6c8._0_4_ = 0x430739f8;
          uStack_6c8._4_4_ = 1;
          pauStack_6c0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143073a08,&uStack_6c8,&UNK_143073c60);
        }
        LOCK();
        lVar47 = *(longlong *)(lVar54 + 8);
        bVar69 = lVar43 == lVar47;
        if (bVar69) {
          *(longlong *)(lVar54 + 8) = lVar43 + 1;
          lVar47 = lVar43;
        }
        UNLOCK();
        lVar43 = lVar47;
        if (bVar69) {
          lStack_3b8 = lVar54;
          pbStack_3b0 = pbVar48;
          lStack_328 = lVar54;
          pbStack_1e0 = pbVar48;
          pdb_14007ee60();
          pbVar48 = pub_1406abab0(0x20,8);
          if (pbVar48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x20);
          }
          pbVar48[0] = 0;
          pbVar48[1] = 0;
          pbVar48[2] = 0;
          pbVar48[3] = 0;
          pbVar48[4] = 0;
          pbVar48[5] = 0;
          pbVar48[6] = 0;
          pbVar48[7] = 0;
          pbVar48[8] = 4;
          pbVar48[9] = 0;
          pbVar48[10] = 0;
          pbVar48[0xb] = 0;
          pbVar48[0xc] = 0;
          pbVar48[0xd] = 0;
          pbVar48[0xe] = 0;
          pbVar48[0xf] = 0;
          pbVar48[0x10] = 0;
          pbVar48[0x11] = 0;
          pbVar48[0x12] = 0;
          pbVar48[0x13] = 0;
          pbVar48[0x14] = 0;
          pbVar48[0x15] = 0;
          pbVar48[0x16] = 0;
          pbVar48[0x17] = 0;
          pbVar48[0x18] = 0;
          lVar54 = *(longlong *)(lVar39 + 0x48);
          goto LAB_140ba1281;
        }
      }
    } while( true );
  }
  auVar97._0_8_ = 0;
LAB_140ba24d6:
  pdb_142dc7e2a(auVar97._0_8_,uVar40);
  goto LAB_140ba296a;
  while( true ) {
    if (lVar43 < 0) {
      uStack_6c8._0_4_ = 0x430739f8;
      uStack_6c8._4_4_ = 1;
      pauStack_6c0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143073a08,&uStack_6c8,&UNK_143073c60);
    }
    LOCK();
    lVar47 = *(longlong *)(lVar54 + 8);
    bVar69 = lVar43 == lVar47;
    if (bVar69) {
      *(longlong *)(lVar54 + 8) = lVar43 + 1;
      lVar47 = lVar43;
    }
    UNLOCK();
    lVar43 = lVar47;
    if (bVar69) break;
    while (lVar43 == -1) {
LAB_140ba1281:
      lVar43 = *(longlong *)(lVar54 + 8);
    }
  }
  lStack_3c8 = lVar54;
  pbStack_3c0 = pbVar48;
  pbStack_320 = pbVar48;
  lStack_318 = lVar54;
  pdb_14007ee60();
  pbVar48 = pub_1406abab0(0x20,8);
  if (pbVar48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pbVar48[0] = 0;
  pbVar48[1] = 0;
  pbVar48[2] = 0;
  pbVar48[3] = 0;
  pbVar48[4] = 0;
  pbVar48[5] = 0;
  pbVar48[6] = 0;
  pbVar48[7] = 0;
  pbVar48[8] = 4;
  pbVar48[9] = 0;
  pbVar48[10] = 0;
  pbVar48[0xb] = 0;
  pbVar48[0xc] = 0;
  pbVar48[0xd] = 0;
  pbVar48[0xe] = 0;
  pbVar48[0xf] = 0;
  pbVar48[0x10] = 0;
  pbVar48[0x11] = 0;
  pbVar48[0x12] = 0;
  pbVar48[0x13] = 0;
  pbVar48[0x14] = 0;
  pbVar48[0x15] = 0;
  pbVar48[0x16] = 0;
  pbVar48[0x17] = 0;
  pbVar48[0x18] = 0;
  lVar54 = *(longlong *)(lVar39 + 0x48);
  do {
    lVar43 = *(longlong *)(lVar54 + 8);
    while (lVar43 != -1) {
      if (lVar43 < 0) {
        uStack_6c8._0_4_ = 0x430739f8;
        uStack_6c8._4_4_ = 1;
        pauStack_6c0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143073a08,&uStack_6c8,&UNK_143073c60);
      }
      LOCK();
      lVar47 = *(longlong *)(lVar54 + 8);
      bVar69 = lVar43 == lVar47;
      if (bVar69) {
        *(longlong *)(lVar54 + 8) = lVar43 + 1;
        lVar47 = lVar43;
      }
      UNLOCK();
      lVar43 = lVar47;
      if (bVar69) {
        lStack_3d8 = lVar54;
        pbStack_3d0 = pbVar48;
        pbStack_310 = pbVar48;
        lStack_308 = lVar54;
        pdb_14007ee60();
        pbVar48 = pub_1406abab0(0x20,8);
        if (pbVar48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar48[0] = 0;
        pbVar48[1] = 0;
        pbVar48[2] = 0;
        pbVar48[3] = 0;
        pbVar48[4] = 0;
        pbVar48[5] = 0;
        pbVar48[6] = 0;
        pbVar48[7] = 0;
        pbVar48[8] = 4;
        pbVar48[9] = 0;
        pbVar48[10] = 0;
        pbVar48[0xb] = 0;
        pbVar48[0xc] = 0;
        pbVar48[0xd] = 0;
        pbVar48[0xe] = 0;
        pbVar48[0xf] = 0;
        pbVar48[0x10] = 0;
        pbVar48[0x11] = 0;
        pbVar48[0x12] = 0;
        pbVar48[0x13] = 0;
        pbVar48[0x14] = 0;
        pbVar48[0x15] = 0;
        pbVar48[0x16] = 0;
        pbVar48[0x17] = 0;
        pbVar48[0x18] = 0;
        lVar39 = *(longlong *)(lVar39 + 0x48);
        goto LAB_140ba137d;
      }
    }
  } while( true );
  while( true ) {
    if (lVar54 < 0) {
      uStack_6c8._0_4_ = 0x430739f8;
      uStack_6c8._4_4_ = 1;
      pauStack_6c0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143073a08,&uStack_6c8,&UNK_143073c60);
    }
    LOCK();
    lVar43 = *(longlong *)(lVar39 + 8);
    bVar69 = lVar54 == lVar43;
    if (bVar69) {
      *(longlong *)(lVar39 + 8) = lVar54 + 1;
      lVar43 = lVar54;
    }
    UNLOCK();
    lVar54 = lVar43;
    if (bVar69) break;
    while (lVar54 == -1) {
LAB_140ba137d:
      lVar54 = *(longlong *)(lVar39 + 8);
    }
  }
  lStack_3e8 = lVar39;
  pbStack_3e0 = pbVar48;
  pbStack_300 = pbVar48;
  lStack_2f8 = lVar39;
  puVar49 = (undefined8 *)pdb_140bf45b0(uStack_220,&UNK_14331c910);
  if ((puVar49 == (undefined8 *)0x0) ||
     (lVar39 = (**(code **)(puVar49[1] + 0x18))(*puVar49), lVar39 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143060160);
  }
  pdb_14007ee60();
  pbVar48 = pub_1406abab0(0x20,8);
  if (pbVar48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pbVar48[0] = 0;
  pbVar48[1] = 0;
  pbVar48[2] = 0;
  pbVar48[3] = 0;
  pbVar48[4] = 0;
  pbVar48[5] = 0;
  pbVar48[6] = 0;
  pbVar48[7] = 0;
  pbVar48[8] = 4;
  pbVar48[9] = 0;
  pbVar48[10] = 0;
  pbVar48[0xb] = 0;
  pbVar48[0xc] = 0;
  pbVar48[0xd] = 0;
  pbVar48[0xe] = 0;
  pbVar48[0xf] = 0;
  pbVar48[0x10] = 0;
  pbVar48[0x11] = 0;
  pbVar48[0x12] = 0;
  pbVar48[0x13] = 0;
  pbVar48[0x14] = 0;
  pbVar48[0x15] = 0;
  pbVar48[0x16] = 0;
  pbVar48[0x17] = 0;
  pbVar48[0x18] = 0;
  lVar54 = *(longlong *)(lVar39 + 0x48);
  do {
    lVar43 = *(longlong *)(lVar54 + 8);
    while (lVar43 != -1) {
      if (lVar43 < 0) {
        uStack_6c8._0_4_ = 0x430739f8;
        uStack_6c8._4_4_ = 1;
        pauStack_6c0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143073a08,&uStack_6c8,&UNK_143073c60);
      }
      LOCK();
      lVar47 = *(longlong *)(lVar54 + 8);
      bVar69 = lVar43 == lVar47;
      if (bVar69) {
        *(longlong *)(lVar54 + 8) = lVar43 + 1;
        lVar47 = lVar43;
      }
      UNLOCK();
      lVar43 = lVar47;
      if (bVar69) {
        lStack_3f8 = lVar54;
        pbStack_3f0 = pbVar48;
        pbStack_2f0 = pbVar48;
        lStack_2e8 = lVar54;
        pdb_14007ee60();
        pbVar48 = pub_1406abab0(0x20,8);
        if (pbVar48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar48[0] = 0;
        pbVar48[1] = 0;
        pbVar48[2] = 0;
        pbVar48[3] = 0;
        pbVar48[4] = 0;
        pbVar48[5] = 0;
        pbVar48[6] = 0;
        pbVar48[7] = 0;
        pbVar48[8] = 4;
        pbVar48[9] = 0;
        pbVar48[10] = 0;
        pbVar48[0xb] = 0;
        pbVar48[0xc] = 0;
        pbVar48[0xd] = 0;
        pbVar48[0xe] = 0;
        pbVar48[0xf] = 0;
        pbVar48[0x10] = 0;
        pbVar48[0x11] = 0;
        pbVar48[0x12] = 0;
        pbVar48[0x13] = 0;
        pbVar48[0x14] = 0;
        pbVar48[0x15] = 0;
        pbVar48[0x16] = 0;
        pbVar48[0x17] = 0;
        pbVar48[0x18] = 0;
        lVar54 = *(longlong *)(lVar39 + 0x48);
        goto LAB_140ba14ad;
      }
    }
  } while( true );
  while( true ) {
    if (lVar43 < 0) {
      uStack_6c8._0_4_ = 0x430739f8;
      uStack_6c8._4_4_ = 1;
      pauStack_6c0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143073a08,&uStack_6c8,&UNK_143073c60);
    }
    LOCK();
    lVar47 = *(longlong *)(lVar54 + 8);
    bVar69 = lVar43 == lVar47;
    if (bVar69) {
      *(longlong *)(lVar54 + 8) = lVar43 + 1;
      lVar47 = lVar43;
    }
    UNLOCK();
    lVar43 = lVar47;
    if (bVar69) break;
    while (lVar43 == -1) {
LAB_140ba14ad:
      lVar43 = *(longlong *)(lVar54 + 8);
    }
  }
  lStack_408 = lVar54;
  pbStack_400 = pbVar48;
  pbStack_2e0 = pbVar48;
  lStack_2d8 = lVar54;
  pdb_14007ee60();
  pbVar48 = pub_1406abab0(0x20,8);
  if (pbVar48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pbVar48[0] = 0;
  pbVar48[1] = 0;
  pbVar48[2] = 0;
  pbVar48[3] = 0;
  pbVar48[4] = 0;
  pbVar48[5] = 0;
  pbVar48[6] = 0;
  pbVar48[7] = 0;
  pbVar48[8] = 4;
  pbVar48[9] = 0;
  pbVar48[10] = 0;
  pbVar48[0xb] = 0;
  pbVar48[0xc] = 0;
  pbVar48[0xd] = 0;
  pbVar48[0xe] = 0;
  pbVar48[0xf] = 0;
  pbVar48[0x10] = 0;
  pbVar48[0x11] = 0;
  pbVar48[0x12] = 0;
  pbVar48[0x13] = 0;
  pbVar48[0x14] = 0;
  pbVar48[0x15] = 0;
  pbVar48[0x16] = 0;
  pbVar48[0x17] = 0;
  pbVar48[0x18] = 0;
  lVar39 = *(longlong *)(lVar39 + 0x48);
  do {
    lVar54 = *(longlong *)(lVar39 + 8);
    while (lVar54 != -1) {
      if (lVar54 < 0) {
        uStack_6c8._0_4_ = 0x430739f8;
        uStack_6c8._4_4_ = 1;
        pauStack_6c0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143073a08,&uStack_6c8,&UNK_143073c60);
      }
      LOCK();
      lVar43 = *(longlong *)(lVar39 + 8);
      bVar69 = lVar54 == lVar43;
      if (bVar69) {
        *(longlong *)(lVar39 + 8) = lVar54 + 1;
        lVar43 = lVar54;
      }
      UNLOCK();
      lVar54 = lVar43;
      if (bVar69) {
        puVar49 = puVar57;
        fVar71 = fVar2;
        if (uStack_290 == 0) goto LAB_140ba16f9;
        if (uStack_290 < 8) {
          uVar55 = 0;
          goto LAB_140ba15a4;
        }
        uVar52 = uStack_290 & 0xfffffffffffffff8;
        uVar40 = 0xfffffffffffffff8;
        auVar73 = auVar91;
        auVar93 = auVar91;
        goto LAB_140ba15f2;
      }
    }
  } while( true );
  while (lVar54 = uVar40 + (8 - uVar52), puVar57 = (undefined8 *)0x0, uVar40 = uVar55,
        auVar73 = auVar96 | auVar113, auVar93 = auVar104 | auVar114, lVar54 != -8) {
LAB_140ba15f2:
    auVar85 = auVar93;
    auVar119 = auVar73;
    auVar73 = *(undefined1 (*) [16])(lStack_298 + 0x20 + uVar40 * 4);
    auVar93 = *(undefined1 (*) [16])(lStack_298 + 0x30 + uVar40 * 4);
    auVar113._0_4_ = (uint)auVar73._0_4_ & -(uint)NAN(auVar119._0_4_);
    auVar113._4_4_ = (uint)auVar73._4_4_ & -(uint)NAN(auVar119._4_4_);
    auVar113._8_4_ = (uint)auVar73._8_4_ & -(uint)NAN(auVar119._8_4_);
    auVar113._12_4_ = (uint)auVar73._12_4_ & -(uint)NAN(auVar119._12_4_);
    auVar116 = minps(auVar73,auVar119);
    auVar96._0_4_ = ~-(uint)NAN(auVar119._0_4_) & auVar116._0_4_;
    auVar96._4_4_ = ~-(uint)NAN(auVar119._4_4_) & auVar116._4_4_;
    auVar96._8_4_ = ~-(uint)NAN(auVar119._8_4_) & auVar116._8_4_;
    auVar96._12_4_ = ~-(uint)NAN(auVar119._12_4_) & auVar116._12_4_;
    auVar114._0_4_ = (uint)auVar93._0_4_ & -(uint)NAN(auVar85._0_4_);
    auVar114._4_4_ = (uint)auVar93._4_4_ & -(uint)NAN(auVar85._4_4_);
    auVar114._8_4_ = (uint)auVar93._8_4_ & -(uint)NAN(auVar85._8_4_);
    auVar114._12_4_ = (uint)auVar93._12_4_ & -(uint)NAN(auVar85._12_4_);
    auVar116 = minps(auVar93,auVar85);
    auVar104._0_4_ = ~-(uint)NAN(auVar85._0_4_) & auVar116._0_4_;
    auVar104._4_4_ = ~-(uint)NAN(auVar85._4_4_) & auVar116._4_4_;
    auVar104._8_4_ = ~-(uint)NAN(auVar85._8_4_) & auVar116._8_4_;
    auVar104._12_4_ = ~-(uint)NAN(auVar85._12_4_) & auVar116._12_4_;
    auVar20._4_4_ = -(uint)(NAN(auVar73._4_4_) || NAN(auVar93._4_4_));
    auVar20._0_4_ = -(uint)(NAN(auVar73._0_4_) || NAN(auVar93._0_4_));
    auVar20._8_4_ = -(uint)(NAN(auVar73._8_4_) || NAN(auVar93._8_4_));
    auVar20._12_4_ = -(uint)(NAN(auVar73._12_4_) || NAN(auVar93._12_4_));
    uVar46 = movmskps((int)puVar57,auVar20);
    puVar49 = (undefined8 *)(ulonglong)uVar46;
    uVar55 = uVar40 + 8;
    if (uVar46 != 0) break;
  }
  if ((char)uVar46 == '\0') {
    uVar55 = uVar52;
    auVar119 = auVar96 | auVar113;
    auVar85 = auVar104 | auVar114;
  }
  auVar73 = minps(auVar85,auVar119);
  auVar88._0_4_ = auVar85._0_4_ & -(uint)NAN(auVar119._0_4_);
  auVar88._4_4_ = auVar85._4_4_ & -(uint)NAN(auVar119._4_4_);
  auVar88._8_4_ = auVar85._8_4_ & -(uint)NAN(auVar119._8_4_);
  auVar88._12_4_ = auVar85._12_4_ & -(uint)NAN(auVar119._12_4_);
  auVar74._0_4_ = ~-(uint)NAN(auVar119._0_4_) & auVar73._0_4_;
  auVar74._4_4_ = ~-(uint)NAN(auVar119._4_4_) & auVar73._4_4_;
  auVar74._8_4_ = ~-(uint)NAN(auVar119._8_4_) & auVar73._8_4_;
  auVar74._12_4_ = ~-(uint)NAN(auVar119._12_4_) & auVar73._12_4_;
  auVar74 = auVar74 | auVar88;
  fVar72 = auVar74._0_4_;
  fVar80 = auVar74._4_4_;
  fVar81 = auVar74._8_4_;
  fVar82 = auVar74._12_4_;
  auVar97._0_8_ = auVar74._8_8_;
  auVar97._8_4_ = fVar81;
  auVar97._12_4_ = fVar82;
  fVar71 = fVar80;
  if (fVar72 <= fVar80) {
    fVar71 = fVar72;
  }
  fVar71 = (float)(~-(uint)NAN(fVar72) & (uint)fVar71 | -(uint)NAN(fVar72) & (uint)fVar80);
  if (fVar71 <= fVar81) {
    auVar75._4_12_ = auVar97._4_12_;
    auVar75._0_4_ = fVar71;
    auVar97._0_8_ = auVar75._0_8_;
  }
  fVar72 = (float)(-(uint)NAN(fVar71) & (uint)fVar81 | ~-(uint)NAN(fVar71) & (uint)auVar97._0_8_);
  fVar71 = fVar82;
  if (fVar72 <= fVar82) {
    fVar71 = fVar72;
  }
  fVar71 = (float)(-(uint)NAN(fVar72) & (uint)fVar82 | ~-(uint)NAN(fVar72) & (uint)fVar71);
  if ((uStack_290 != uVar52) || ((char)uVar46 != '\0')) {
LAB_140ba15a4:
    do {
      fVar72 = *(float *)(lStack_298 + uVar55 * 4);
      fVar80 = fVar72;
      if (fVar71 <= fVar72) {
        fVar80 = fVar71;
      }
      fVar71 = (float)(~-(uint)NAN(fVar71) & (uint)fVar80 | -(uint)NAN(fVar71) & (uint)fVar72);
      uVar55 = uVar55 + 1;
    } while (uStack_290 != uVar55);
  }
LAB_140ba16f9:
  if (pbVar44 == (byte *)0x0) {
    fVar72 = 0.0;
  }
  else {
    if (pbVar44 < (byte *)0x9) {
      pbVar45 = (byte *)0x0;
      puVar57 = puVar49;
    }
    else {
      uVar40 = (ulonglong)((uint)pbVar44 & 7);
      if (((ulonglong)pbVar44 & 7) == 0) {
        uVar40 = 8;
      }
      pbVar45 = pbVar44 + -uVar40;
      pfVar51 = (float *)(auStack_138._0_8_ + 0x58);
      lVar54 = 8;
      auVar98 = auVar83;
      auVar105 = auVar83;
      do {
        auVar93 = auVar105;
        auVar73 = auVar98;
        fVar115 = pfVar51[-0x15];
        fVar72 = pfVar51[-0x12];
        fVar80 = pfVar51[-0xf];
        fVar81 = pfVar51[-0xc];
        fVar82 = pfVar51[-9];
        fVar3 = pfVar51[-6];
        fVar4 = pfVar51[-3];
        fVar5 = *pfVar51;
        auVar107._12_4_ = fVar5;
        auVar107._8_4_ = fVar4;
        auVar107._4_4_ = fVar3;
        auVar107._0_4_ = fVar82;
        auVar109._0_4_ = (uint)fVar115 & -(uint)NAN(auVar73._0_4_);
        auVar109._4_4_ = (uint)fVar72 & -(uint)NAN(auVar73._4_4_);
        auVar109._8_4_ = (uint)fVar80 & -(uint)NAN(auVar73._8_4_);
        auVar109._12_4_ = (uint)fVar81 & -(uint)NAN(auVar73._12_4_);
        auVar117._4_4_ = fVar72;
        auVar117._0_4_ = fVar115;
        auVar117._8_4_ = fVar80;
        auVar117._12_4_ = fVar81;
        auVar119 = minps(auVar117,auVar73);
        auVar98._0_4_ = ~-(uint)NAN(auVar73._0_4_) & auVar119._0_4_;
        auVar98._4_4_ = ~-(uint)NAN(auVar73._4_4_) & auVar119._4_4_;
        auVar98._8_4_ = ~-(uint)NAN(auVar73._8_4_) & auVar119._8_4_;
        auVar98._12_4_ = ~-(uint)NAN(auVar73._12_4_) & auVar119._12_4_;
        auVar98 = auVar98 | auVar109;
        auVar110._0_4_ = (uint)fVar82 & -(uint)NAN(auVar93._0_4_);
        auVar110._4_4_ = (uint)fVar3 & -(uint)NAN(auVar93._4_4_);
        auVar110._8_4_ = (uint)fVar4 & -(uint)NAN(auVar93._8_4_);
        auVar110._12_4_ = (uint)fVar5 & -(uint)NAN(auVar93._12_4_);
        auVar119 = minps(auVar107,auVar93);
        auVar105._0_4_ = ~-(uint)NAN(auVar93._0_4_) & auVar119._0_4_;
        auVar105._4_4_ = ~-(uint)NAN(auVar93._4_4_) & auVar119._4_4_;
        auVar105._8_4_ = ~-(uint)NAN(auVar93._8_4_) & auVar119._8_4_;
        auVar105._12_4_ = ~-(uint)NAN(auVar93._12_4_) & auVar119._12_4_;
        auVar105 = auVar105 | auVar110;
        auVar19._4_4_ = -(uint)(NAN(fVar72) || NAN(fVar3));
        auVar19._0_4_ = -(uint)(NAN(fVar115) || NAN(fVar82));
        auVar19._8_4_ = -(uint)(NAN(fVar80) || NAN(fVar4));
        auVar19._12_4_ = -(uint)(NAN(fVar81) || NAN(fVar5));
        uVar46 = movmskps((int)puVar49,auVar19);
        puVar57 = (undefined8 *)(ulonglong)uVar46;
        lVar43 = lVar54 + -8;
        if (uVar46 != 0) break;
        pbVar50 = pbVar45 + lVar54;
        pfVar51 = pfVar51 + 0x18;
        puVar49 = (undefined8 *)0x0;
        lVar54 = lVar43;
      } while (pbVar50 != (byte *)0x10);
      if ((char)uVar46 != '\0') {
        pbVar45 = (byte *)-lVar43;
        auVar98 = auVar73;
        auVar105 = auVar93;
      }
      auVar73 = minps(auVar105,auVar98);
      auVar89._0_4_ = auVar105._0_4_ & -(uint)NAN(auVar98._0_4_);
      auVar89._4_4_ = auVar105._4_4_ & -(uint)NAN(auVar98._4_4_);
      auVar89._8_4_ = auVar105._8_4_ & -(uint)NAN(auVar98._8_4_);
      auVar89._12_4_ = auVar105._12_4_ & -(uint)NAN(auVar98._12_4_);
      auVar76._0_4_ = ~-(uint)NAN(auVar98._0_4_) & auVar73._0_4_;
      auVar76._4_4_ = ~-(uint)NAN(auVar98._4_4_) & auVar73._4_4_;
      auVar76._8_4_ = ~-(uint)NAN(auVar98._8_4_) & auVar73._8_4_;
      auVar76._12_4_ = ~-(uint)NAN(auVar98._12_4_) & auVar73._12_4_;
      auVar76 = auVar76 | auVar89;
      fVar72 = auVar76._0_4_;
      fVar80 = auVar76._4_4_;
      fVar81 = auVar76._8_4_;
      fVar82 = auVar76._12_4_;
      auVar99._0_8_ = auVar76._8_8_;
      auVar99._8_4_ = fVar81;
      auVar99._12_4_ = fVar82;
      fVar115 = fVar80;
      if (fVar72 <= fVar80) {
        fVar115 = fVar72;
      }
      fVar115 = (float)(~-(uint)NAN(fVar72) & (uint)fVar115 | -(uint)NAN(fVar72) & (uint)fVar80);
      if (fVar115 <= fVar81) {
        auVar77._4_12_ = auVar99._4_12_;
        auVar77._0_4_ = fVar115;
        auVar99._0_8_ = auVar77._0_8_;
      }
      fVar72 = (float)(-(uint)NAN(fVar115) & (uint)fVar81 |
                      ~-(uint)NAN(fVar115) & (uint)auVar99._0_8_);
      fVar115 = fVar82;
      if (fVar72 <= fVar82) {
        fVar115 = fVar72;
      }
      fVar115 = (float)(-(uint)NAN(fVar72) & (uint)fVar82 | ~-(uint)NAN(fVar72) & (uint)fVar115);
    }
    pfVar51 = (float *)(auStack_138._0_8_ + (longlong)pbVar45 * 0xc + 4);
    do {
      fVar72 = *pfVar51;
      fVar80 = fVar72;
      if (fVar115 <= fVar72) {
        fVar80 = fVar115;
      }
      fVar115 = (float)(~-(uint)NAN(fVar115) & (uint)fVar80 | -(uint)NAN(fVar115) & (uint)fVar72);
      pbVar45 = pbVar45 + 1;
      pfVar51 = pfVar51 + 3;
    } while (pbVar44 != pbVar45);
    if (pbVar44 < (byte *)0x9) {
      fVar72 = 0.0;
      lVar54 = 0;
    }
    else {
      uVar40 = (ulonglong)((uint)pbVar44 & 7);
      if (((ulonglong)pbVar44 & 7) == 0) {
        uVar40 = 8;
      }
      lVar54 = (longlong)pbVar44 - uVar40;
      pfVar51 = (float *)(auStack_138._0_8_ + 0x58);
      lVar43 = 8;
      auVar100 = ZEXT816(0);
      auVar106 = ZEXT816(0);
      do {
        auVar93 = auVar106;
        auVar73 = auVar100;
        fVar120 = pfVar51[-0x15];
        fVar72 = pfVar51[-0x12];
        fVar80 = pfVar51[-0xf];
        fVar81 = pfVar51[-0xc];
        fVar82 = pfVar51[-9];
        fVar3 = pfVar51[-6];
        fVar4 = pfVar51[-3];
        fVar5 = *pfVar51;
        auVar108._12_4_ = fVar5;
        auVar108._8_4_ = fVar4;
        auVar108._4_4_ = fVar3;
        auVar108._0_4_ = fVar82;
        auVar111._0_4_ = (uint)fVar120 & -(uint)NAN(auVar73._0_4_);
        auVar111._4_4_ = (uint)fVar72 & -(uint)NAN(auVar73._4_4_);
        auVar111._8_4_ = (uint)fVar80 & -(uint)NAN(auVar73._8_4_);
        auVar111._12_4_ = (uint)fVar81 & -(uint)NAN(auVar73._12_4_);
        auVar118._4_4_ = fVar72;
        auVar118._0_4_ = fVar120;
        auVar118._8_4_ = fVar80;
        auVar118._12_4_ = fVar81;
        auVar119 = maxps(auVar118,auVar73);
        auVar100._0_4_ = ~-(uint)NAN(auVar73._0_4_) & auVar119._0_4_;
        auVar100._4_4_ = ~-(uint)NAN(auVar73._4_4_) & auVar119._4_4_;
        auVar100._8_4_ = ~-(uint)NAN(auVar73._8_4_) & auVar119._8_4_;
        auVar100._12_4_ = ~-(uint)NAN(auVar73._12_4_) & auVar119._12_4_;
        auVar100 = auVar100 | auVar111;
        auVar112._0_4_ = (uint)fVar82 & -(uint)NAN(auVar93._0_4_);
        auVar112._4_4_ = (uint)fVar3 & -(uint)NAN(auVar93._4_4_);
        auVar112._8_4_ = (uint)fVar4 & -(uint)NAN(auVar93._8_4_);
        auVar112._12_4_ = (uint)fVar5 & -(uint)NAN(auVar93._12_4_);
        auVar119 = maxps(auVar108,auVar93);
        auVar106._0_4_ = ~-(uint)NAN(auVar93._0_4_) & auVar119._0_4_;
        auVar106._4_4_ = ~-(uint)NAN(auVar93._4_4_) & auVar119._4_4_;
        auVar106._8_4_ = ~-(uint)NAN(auVar93._8_4_) & auVar119._8_4_;
        auVar106._12_4_ = ~-(uint)NAN(auVar93._12_4_) & auVar119._12_4_;
        auVar106 = auVar106 | auVar112;
        auVar18._4_4_ = -(uint)(NAN(fVar72) || NAN(fVar3));
        auVar18._0_4_ = -(uint)(NAN(fVar120) || NAN(fVar82));
        auVar18._8_4_ = -(uint)(NAN(fVar80) || NAN(fVar4));
        auVar18._12_4_ = -(uint)(NAN(fVar81) || NAN(fVar5));
        iVar38 = movmskps((int)puVar57,auVar18);
        lVar47 = lVar43 + -8;
        if (iVar38 != 0) break;
        lVar58 = lVar43 + lVar54;
        pfVar51 = pfVar51 + 0x18;
        puVar57 = (undefined8 *)0x0;
        lVar43 = lVar47;
      } while (lVar58 != 0x10);
      if ((char)iVar38 != '\0') {
        lVar54 = -lVar47;
        auVar100 = auVar73;
        auVar106 = auVar93;
      }
      auVar73 = maxps(auVar106,auVar100);
      auVar90._0_4_ = auVar106._0_4_ & -(uint)NAN(auVar100._0_4_);
      auVar90._4_4_ = auVar106._4_4_ & -(uint)NAN(auVar100._4_4_);
      auVar90._8_4_ = auVar106._8_4_ & -(uint)NAN(auVar100._8_4_);
      auVar90._12_4_ = auVar106._12_4_ & -(uint)NAN(auVar100._12_4_);
      auVar78._0_4_ = ~-(uint)NAN(auVar100._0_4_) & auVar73._0_4_;
      auVar78._4_4_ = ~-(uint)NAN(auVar100._4_4_) & auVar73._4_4_;
      auVar78._8_4_ = ~-(uint)NAN(auVar100._8_4_) & auVar73._8_4_;
      auVar78._12_4_ = ~-(uint)NAN(auVar100._12_4_) & auVar73._12_4_;
      auVar78 = auVar78 | auVar90;
      fVar72 = auVar78._0_4_;
      fVar80 = auVar78._4_4_;
      fVar81 = auVar78._8_4_;
      fVar82 = auVar78._12_4_;
      auVar101._0_8_ = auVar78._8_8_;
      auVar101._8_4_ = fVar81;
      auVar101._12_4_ = fVar82;
      fVar120 = fVar80;
      if (fVar80 <= fVar72) {
        fVar120 = fVar72;
      }
      fVar120 = (float)(~-(uint)NAN(fVar72) & (uint)fVar120 | -(uint)NAN(fVar72) & (uint)fVar80);
      if (fVar81 <= fVar120) {
        auVar79._4_12_ = auVar101._4_12_;
        auVar79._0_4_ = fVar120;
        auVar101._0_8_ = auVar79._0_8_;
      }
      fVar72 = (float)(-(uint)NAN(fVar120) & (uint)fVar81 |
                      ~-(uint)NAN(fVar120) & (uint)auVar101._0_8_);
      fVar120 = fVar82;
      if (fVar82 <= fVar72) {
        fVar120 = fVar72;
      }
      fVar72 = (float)(-(uint)NAN(fVar72) & (uint)fVar82 | ~-(uint)NAN(fVar72) & (uint)fVar120);
      fVar120 = _DAT_142e36f50;
    }
    lVar43 = (longlong)pbVar44 - lVar54;
    pfVar51 = (float *)(auStack_138._0_8_ + lVar54 * 0xc + 4);
    do {
      fVar80 = *pfVar51;
      fVar81 = fVar80;
      if (fVar80 <= fVar72) {
        fVar81 = fVar72;
      }
      fVar72 = (float)(~-(uint)NAN(fVar72) & (uint)fVar81 | -(uint)NAN(fVar72) & (uint)fVar80);
      pfVar51 = pfVar51 + 3;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
  }
  uVar52 = *(ulonglong *)pauStack_100[-6];
  uVar40 = uVar52 * 8;
  lStack_418 = lVar39;
  pbStack_410 = pbVar48;
  pbStack_2d0 = pbVar48;
  lStack_2c8 = lVar39;
  uStack_1f0 = uVar7;
  if (0x7ffffffffffffffc < uVar40 || uVar52 >> 0x3d != 0) {
    auVar97._0_8_ = 0;
LAB_140ba24fc:
    pdb_142dc7e2a(auVar97._0_8_,uVar40);
    goto LAB_140ba296a;
  }
  if (uVar40 == 0) {
    auStack_138._0_8_ = 4;
    uStack_1d8 = 0;
    uVar55 = *(ulonglong *)(pauStack_100[-7] + 8);
    uVar61 = uStack_1d8;
  }
  else {
    uStack_1a8 = *(ulonglong *)(pauStack_100[-7] + 8);
    pdb_14007ee60();
    pbVar44 = pub_1406abab0(uVar40,4);
    auVar97._0_8_ = 4;
    auStack_138._0_8_ = pbVar44;
    uVar55 = uStack_1a8;
    uVar61 = uVar52;
    if (pbVar44 == (byte *)0x0) goto LAB_140ba24fc;
  }
  uStack_1d8 = uVar61;
  if (uVar52 != 0) {
    pub_142e32760(auStack_138._0_8_,uVar55,uVar40);
  }
  uVar55 = *(ulonglong *)(pauStack_100[-5] + 8);
  uVar40 = uVar55 * 4;
  if (0x7ffffffffffffffc < uVar40 || uVar55 >> 0x3e != 0) goto LAB_140ba2535;
  uStack_2c0 = uVar52;
  uStack_208 = uVar40;
  uStack_1a8 = uVar55;
  if (uVar40 == 0) {
    pbVar44 = (byte *)0x4;
  }
  else {
    puVar10 = *(undefined4 **)pauStack_100[-5];
    pdb_14007ee60();
    auVar97._0_8_ = 4;
    pbVar44 = pub_1406abab0(uStack_208,4);
    if (pbVar44 == (byte *)0x0) goto LAB_140ba2538;
    if (uStack_1a8 != 0) {
      uVar40 = uStack_1a8 - 1;
      if (uStack_1a8 < uStack_1a8 - 1) {
        uVar40 = uStack_1a8;
      }
      if (uVar40 < 8) {
        lVar39 = 0;
        uVar40 = uStack_1a8;
        puVar56 = puVar10;
      }
      else {
        uVar40 = uVar40 + 1;
        uVar52 = (ulonglong)((uint)uVar40 & 7);
        if ((uVar40 & 7) == 0) {
          uVar52 = 8;
        }
        lVar39 = uVar40 - uVar52;
        uVar40 = uStack_1a8 - lVar39;
        puVar56 = puVar10 + lVar39;
        lVar54 = 0;
        do {
          auVar97._0_8_ = *(undefined8 *)((longlong)(puVar10 + lVar54) + 8);
          auVar99._0_8_ = *(undefined8 *)(puVar10 + lVar54 + 4);
          auVar101._0_8_ = *(undefined8 *)((longlong)(puVar10 + lVar54 + 4) + 8);
          *(undefined8 *)(pbVar44 + lVar54 * 4) = *(undefined8 *)(puVar10 + lVar54);
          *(undefined8 *)(pbVar44 + lVar54 * 4 + 8) = auVar97._0_8_;
          *(undefined8 *)(pbVar44 + lVar54 * 4 + 0x10) = auVar99._0_8_;
          *(undefined8 *)(pbVar44 + lVar54 * 4 + 0x10 + 8) = auVar101._0_8_;
          lVar54 = lVar54 + 8;
        } while (lVar39 != lVar54);
      }
      pbVar48 = pbVar44 + lVar39 * 4;
      do {
        if (puVar56 == puVar10 + uStack_1a8) break;
        uVar7 = *puVar56;
        puVar56 = puVar56 + 1;
        *(undefined4 *)pbVar48 = uVar7;
        pbVar48 = pbVar48 + 4;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
    }
  }
  lVar39 = lStack_188;
  pbVar48 = pbStack_a00;
  iVar38 = (uint)pbStack_150 - 2;
  uStack_a28 = *(undefined4 *)pauStack_100[-4];
  uStack_a60 = 2;
  if ((uint)pbStack_150 < 2) {
    iVar38 = 2;
  }
  if (iVar38 != 0) {
    if (iVar38 == 1) {
      uStack_a60 = 3;
    }
    else {
      uStack_2a8 = *(undefined8 *)(pauStack_100[-3] + 0xc);
      uStack_2b8 = *(undefined8 *)(pauStack_100[-4] + 0xc);
      uStack_2b0 = *(undefined8 *)(pauStack_100[-3] + 4);
      uStack_a60 = (uint)pbStack_150;
    }
  }
  bVar69 = SBORROW8(0,(longlong)uStack_160);
  pbStack_150 = (byte *)CONCAT44(pbStack_150._4_4_,uStack_a28);
  uStack_160._4_4_ = (uint)((ulonglong)-(longlong)uStack_160 >> 0x20);
  if (bVar69) {
    pbStack_6a8 = (byte *)0x0;
    puStack_6a0 = (undefined8 *)0x0;
    pbStack_6b8 = (byte *)0x0;
    puStack_6b0 = (undefined8 *)0x0;
    uStack_6c8._0_4_ = 0;
    uStack_6c8._4_4_ = 0;
    pauStack_6c0 = (undefined1 (*) [16])0x0;
    uStack_698 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_b30 = 0;
    lStack_188 = 4;
    uStack_160 = (undefined1 (*) [16])((ulonglong)uStack_160._4_4_ << 0x20);
    uStack_b28 = 0;
  }
  else {
    uStack_1d0 = uStack_1c8;
    uStack_258 = uStack_768;
    uStack_250 = uStack_760;
    uStack_6c8._0_4_ = (int)uStack_748;
    uStack_6c8._4_4_ = (undefined4)((ulonglong)uStack_748 >> 0x20);
    pauStack_6c0 = pauStack_740;
    pbStack_6b8 = pbStack_738;
    puStack_6b0 = puStack_730;
    pbStack_6a8 = pbStack_728;
    puStack_6a0 = puStack_720;
    uStack_698 = uStack_718;
    lStack_188 = lStack_210;
    uStack_160 = (undefined1 (*) [16])CONCAT44(uStack_160._4_4_,uStack_144);
    uStack_b28 = uStack_218;
    uStack_b30 = uStack_121;
  }
  fStack_a30 = _DAT_142e37874;
  fVar80 = _DAT_142e37988;
  if ((char)pauStack_1b0 == '\0') {
    fStack_a30 = _DAT_143008730;
    fVar80 = fVar120;
  }
  uStack_a17 = lVar39 != 0;
  uStack_a80 = 0;
  uStack_a78 = 0;
  uStack_a90 = 0;
  uStack_a88 = 0;
  uStack_aa0 = 0;
  uStack_a98 = 0;
  uStack_ab0 = 0;
  uStack_aa8 = 0;
  uStack_a70 = 0;
  uStack_c38 = uStack_290;
  uStack_c48 = uStack_2a0;
  lStack_c40 = lStack_298;
  uStack_a34 = *(undefined4 *)(pauStack_100[-2] + 8);
  uStack_a2c = *(undefined4 *)(pauStack_100[-2] + 0xc);
  uStack_a16 = pauStack_100[-1][0xd];
  uStack_a15 = *(undefined2 *)(pauStack_100[-1] + 0xe);
  uStack_a44 = uStack_1f8;
  uStack_cb8 = uStack_1d8;
  uStack_cb0 = auStack_138._0_8_;
  uStack_ca8 = uStack_2c0;
  uStack_ca0 = uStack_1a8;
  uStack_c90 = uStack_1a8;
  uStack_c88 = uStack_1f0;
  uVar40 = *(ulonglong *)(pauStack_100[-1] + 8);
  uVar60 = *(ushort *)(pauStack_100[-1] + 0xb);
  uStack_c50 = uStack_9e0;
  if (fVar80 <= puStack_158._0_4_) {
    fVar80 = puStack_158._0_4_;
  }
  if (fVar80 <= fStack_a30) {
    fStack_a30 = fVar80;
  }
  pbStack_c60 = pbStack_9f0;
  uStack_c58 = uStack_9e8;
  pbStack_c70 = pbStack_a00;
  puStack_c68 = puStack_9f8;
  pauStack_c80 = pauStack_a10;
  pauStack_c78 = pauStack_a08;
  uStack_c30 = 0;
  uStack_c28 = 4;
  auStack_c20 = (undefined1  [16])0x0;
  uStack_c10 = 4;
  uStack_c08 = 0;
  uStack_c00 = 0;
  uStack_bf8 = 0;
  uStack_bf0 = 4;
  uStack_be8 = 0;
  uStack_a4c = uStack_2a8;
  uStack_a5c = uStack_2b8;
  uStack_a54 = uStack_2b0;
  lStack_ba0 = lStack_328;
  pbStack_b98 = pbStack_1e0;
  lStack_b90 = lStack_2e8;
  pbStack_b88 = pbStack_2f0;
  lStack_b80 = lStack_2d8;
  pbStack_b78 = pbStack_2e0;
  lStack_b70 = lStack_318;
  pbStack_b68 = pbStack_320;
  lStack_b60 = lStack_308;
  pbStack_b58 = pbStack_310;
  lStack_b50 = lStack_2f8;
  pbStack_b48 = pbStack_300;
  lStack_b40 = lStack_2c8;
  pbStack_b38 = pbStack_2d0;
  uStack_be0 = 0;
  uStack_bd8 = 4;
  auStack_bd0 = (undefined1  [16])0x0;
  uStack_bc0 = 4;
  uStack_bb8 = 0;
  uStack_b2f = uStack_1d0;
  lStack_b20 = lStack_188;
  uStack_b18 = uStack_258;
  uStack_b10 = uStack_250;
  uStack_ad8 = uStack_698;
  auStack_b08._4_4_ = uStack_6c8._4_4_;
  auStack_b08._0_4_ = (int)uStack_6c8;
  auStack_b08._8_8_ = pauStack_6c0;
  pbStack_ae8 = pbStack_6a8;
  puStack_ae0 = puStack_6a0;
  pbStack_af8 = pbStack_6b8;
  puStack_af0 = puStack_6b0;
  uStack_ad0 = (undefined4)uStack_160;
  uStack_acc = uStack_1f4;
  uStack_ac8 = 0;
  uStack_ac0 = 0;
  uStack_ab8 = 4;
  uStack_a68 = 0;
  uStack_bb0 = 0;
  uStack_ba8 = 0;
  auStack_138[0] = (char)uVar60;
  auStack_138[1] = (undefined1)(uVar60 >> 8);
  auVar30._8_6_ = 0;
  auVar30._0_8_ = uVar40;
  auVar30[0xe] = (char)(uVar40 >> 0x38);
  auVar31._8_4_ = 0;
  auVar31._0_8_ = uVar40;
  auVar31[0xc] = (char)(uVar40 >> 0x30);
  auVar31._13_2_ = auVar30._13_2_;
  auVar32._8_4_ = 0;
  auVar32._0_8_ = uVar40;
  auVar32._12_3_ = auVar31._12_3_;
  auVar33._8_2_ = 0;
  auVar33._0_8_ = uVar40;
  auVar33[10] = (char)(uVar40 >> 0x28);
  auVar33._11_4_ = auVar32._11_4_;
  auVar34._8_2_ = 0;
  auVar34._0_8_ = uVar40;
  auVar34._10_5_ = auVar33._10_5_;
  auVar35[8] = (char)(uVar40 >> 0x20);
  auVar35._0_8_ = uVar40;
  auVar35._9_6_ = auVar34._9_6_;
  auVar24._10_6_ = 0;
  auVar24._0_10_ = SUB1610(ZEXT716(auVar35._8_7_) << 0x40,6);
  auVar23._11_5_ = 0;
  auVar23._0_11_ = SUB1611(auVar24 << 0x30,5);
  auVar22._12_4_ = 0;
  auVar22._0_12_ = SUB1612(auVar23 << 0x28,4);
  auVar21._13_3_ = 0;
  auVar21._0_13_ = SUB1613(auVar22 << 0x20,3);
  auVar103[0] = (byte)uVar40;
  auVar102._14_2_ = 0;
  auVar102._0_14_ = SUB1614(auVar21 << 0x18,2);
  auVar102 = auVar102 << 0x10;
  auVar25[0xb] = 0;
  auVar25._0_11_ = auVar102._0_11_;
  auVar25[0xc] = (char)(uVar40 >> 0x18);
  auVar26[10] = 0;
  auVar26._0_10_ = auVar102._0_10_;
  auVar26._11_2_ = auVar25._11_2_;
  auVar27[9] = 0;
  auVar27._0_9_ = auVar102._0_9_;
  auVar27._10_3_ = auVar26._10_3_;
  auVar28._1_8_ = SUB158(ZEXT515(CONCAT41(auVar27._9_4_,(char)(uVar40 >> 0x10))) << 0x40,7);
  auVar28[0] = auStack_138[1];
  auVar28._9_6_ = 0;
  auVar29._1_10_ = SUB1510(auVar28 << 0x30,5);
  auVar29[0] = (char)(uVar40 >> 8);
  auVar29._11_4_ = 0;
  auVar103._3_12_ = SUB1512(auVar29 << 0x20,3);
  auVar103[2] = auStack_138[0];
  auVar103[1] = 0;
  auVar103[0xf] = 0;
  auVar73 = pshuflw(auStack_b08,auVar103,0xb4);
  sVar12 = auVar73._0_2_;
  sVar13 = auVar73._2_2_;
  sVar14 = auVar73._4_2_;
  sVar15 = auVar73._6_2_;
  uStack_a1c = CONCAT13((0 < sVar15) * (sVar15 < 0x100) * auVar73[6] - (0xff < sVar15),
                        CONCAT12((0 < sVar14) * (sVar14 < 0x100) * auVar73[4] - (0xff < sVar14),
                                 CONCAT11((0 < sVar13) * (sVar13 < 0x100) * auVar73[2] -
                                          (0xff < sVar13),
                                          (0 < sVar12) * (sVar12 < 0x100) * auVar73[0] -
                                          (0xff < sVar12))));
  cStack_a18 = (char)pauStack_1b0;
  uStack_a24 = CONCAT44((int)*(undefined8 *)pauStack_100[-1],
                        (int)((ulonglong)*(undefined8 *)pauStack_100[-1] >> 0x20));
  pbStack_c98 = pbVar44;
  fStack_a40 = fVar115;
  fStack_a3c = fVar72;
  fStack_a38 = fVar71;
  auStack_138 = ZEXT216(uVar60);
  if (*(char *)(lStack_338 + 0xc4) == '\x01') {
    uVar40 = (longlong)pbStack_a00 * 0xc;
    if ((byte *)0xaaaaaaaaaaaaaaa < pbStack_a00) {
      auStack_138 = ZEXT816(0);
LAB_140ba2609:
      uStack_f3 = 1;
      pdb_142dc7e2a(auStack_138._0_8_,uVar40);
      goto LAB_140ba296a;
    }
    uStack_160 = pauStack_a08;
    if (uVar40 == 0) {
      pauStack_100 = (undefined1 (*) [16])0x4;
      auStack_138 = ZEXT816(0);
    }
    else {
      pdb_14007ee60();
      auStack_138._0_8_ = 4;
      pauStack_100 = (undefined1 (*) [16])pub_1406abab0(uVar40,4);
      if (pauStack_100 == (undefined1 (*) [16])0x0) goto LAB_140ba2609;
      auStack_138._0_8_ = pbVar48;
    }
    if (pbVar48 != (byte *)0x0) {
      pub_142e32760(pauStack_100,uStack_160,uVar40);
    }
    uStack_1ec = (uStack_1ec & 0xffff0000) + 1;
    uStack_6c8._0_4_ = auStack_138._0_4_;
    uStack_6c8._4_4_ = auStack_138._4_4_;
    pauStack_6c0 = pauStack_100;
    pbStack_6b8 = pbVar48;
    puStack_6b0 = (undefined8 *)0x8000000000000000;
    uStack_698 = CONCAT44(uStack_698._4_4_,1);
    uStack_688 = CONCAT44(uStack_1ec,0x40400000);
    uStack_f3 = 1;
    pdb_140ab2da0(&uStack_6c8,uStack_330);
  }
  fVar115 = _DAT_142e3a74c;
  pauVar65 = (undefined1 (*) [16])&uStack_6c8;
  pub_142e32760(pauVar65,&uStack_cb8,0x2a8);
  uStack_f3 = 0;
  pdb_1417b2b60(&pauStack_a10,pbStack_170,pauStack_118,pauVar65);
  pbVar44 = pbStack_120;
  pauVar59 = pauStack_140;
  pauVar63 = pauStack_168;
  if (!SBORROW8(0,(longlong)pauStack_a10)) {
    uStack_f3 = 0;
    pdb_14099efb0(&pauStack_a10);
    pbVar44 = pbStack_120;
    pauVar59 = pauStack_140;
    pauVar63 = pauStack_168;
  }
  goto LAB_140ba061a;
LAB_140ba2535:
  auVar97._0_8_ = 0;
LAB_140ba2538:
  pdb_142dc7e2a(auVar97._0_8_);
LAB_140ba296a:
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}

