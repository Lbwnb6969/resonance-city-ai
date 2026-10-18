// VA 0x140ba6df0, PDB extent 11395 bytes
// country_core::systems::wall::wall_splitter::wall_splitter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_splitter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::wall_splitter::wall_splitter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_splitter.rs
   Extent: 11395 */

void pdb_140ba6df0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11,longlong *param_12,
                  longlong *param_13,undefined8 *param_14,longlong *param_15)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined3 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  undefined7 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  code *pcVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  longlong lVar25;
  byte **ppbVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  char *pcVar29;
  ushort uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  code *pcVar34;
  byte bVar35;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  undefined1 unaff_XMM8_Ba;
  char cVar52;
  undefined1 unaff_XMM8_Bb;
  char cVar53;
  undefined1 unaff_XMM8_Bc;
  char cVar54;
  undefined1 unaff_XMM8_Bd;
  char cVar55;
  undefined1 unaff_XMM8_Be;
  char cVar56;
  undefined1 unaff_XMM8_Bf;
  char cVar57;
  undefined1 unaff_XMM8_Bg;
  char cVar58;
  undefined1 unaff_XMM8_Bh;
  char cVar59;
  undefined1 unaff_XMM8_Bi;
  char cVar60;
  undefined1 unaff_XMM8_Bj;
  char cVar61;
  undefined1 unaff_XMM8_Bk;
  char cVar62;
  undefined1 unaff_XMM8_Bl;
  char cVar63;
  undefined1 unaff_XMM8_Bm;
  char cVar64;
  undefined1 unaff_XMM8_Bn;
  char cVar65;
  undefined1 unaff_XMM8_Bo;
  char cVar66;
  undefined1 unaff_XMM8_Bp;
  char cVar67;
  undefined *puVar68;
  undefined8 uStack_570;
  longlong lStack_568;
  longlong lStack_560;
  code *pcStack_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined1 auStack_528 [16];
  undefined *puStack_518;
  longlong lStack_510;
  undefined1 uStack_508;
  undefined7 uStack_507;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  code *pcStack_4d0;
  byte *pbStack_4c8;
  byte *pbStack_4c0;
  byte *pbStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  undefined4 uStack_49c;
  longlong *plStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  longlong *plStack_480;
  undefined4 *puStack_478;
  undefined4 *puStack_470;
  undefined4 *puStack_468;
  longlong lStack_460;
  longlong lStack_458;
  longlong lStack_450;
  longlong *plStack_448;
  longlong *plStack_440;
  undefined4 *puStack_438;
  undefined4 *puStack_430;
  undefined4 *puStack_428;
  longlong lStack_420;
  longlong lStack_418;
  longlong *plStack_410;
  longlong *plStack_408;
  longlong *plStack_400;
  longlong *plStack_3f8;
  undefined8 uStack_3f0;
  undefined4 *puStack_3e8;
  longlong lStack_3e0;
  longlong lStack_3d8;
  longlong lStack_3d0;
  longlong lStack_3c8;
  longlong *plStack_3c0;
  longlong *plStack_3b8;
  longlong *plStack_3b0;
  longlong *plStack_3a8;
  longlong *plStack_3a0;
  byte *pbStack_398;
  code *pcStack_390;
  byte *pbStack_388;
  code *pcStack_380;
  byte *pbStack_378;
  byte *pbStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  uint uStack_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  longlong lStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  longlong lStack_300;
  longlong lStack_2f8;
  char *pcStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  longlong *plStack_2d8;
  longlong lStack_2d0;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  float fStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined1 auStack_258 [16];
  longlong lStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined2 uStack_220;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1b8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong lStack_198;
  byte *pbStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined4 *puStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  code *pcStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 *puStack_148;
  undefined8 uStack_140;
  byte **ppbStack_138;
  undefined1 uStack_129;
  longlong *plStack_128;
  longlong *plStack_120;
  byte *pbStack_118;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined1 uStack_e9;
  byte *pbStack_e8;
  longlong lStack_e0;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  fVar8 = _DAT_142f61034;
  fVar7 = _DAT_142e36f50;
  fVar6 = _DAT_142e36f28;
  uStack_d0 = 0xfffffffffffffffe;
  pcStack_2f0 = (char *)*param_1;
  if ((*pcStack_2f0 == '\0') && (*(int *)(pcStack_2f0 + 8) == 1)) {
    plStack_3f8 = (longlong *)*param_2;
    pauVar28 = (undefined1 (*) [16])*plStack_3f8;
    auVar37 = *pauVar28;
    uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
    uStack_490 = *param_4;
    uStack_3f0 = *param_5;
    plStack_128 = (longlong *)*param_7;
    puStack_3e8 = (undefined4 *)param_7[2];
    uStack_154 = *(undefined4 *)((longlong)param_7 + 0x1c);
    plStack_2e0 = (longlong *)*param_11;
    plStack_2d8 = (longlong *)*param_12;
    plStack_2e8 = (longlong *)*param_13;
    uStack_488 = *param_14;
    uStack_104 = *(undefined4 *)((longlong)param_9 + 0x1c);
    uStack_150 = *param_9;
    puStack_148 = (undefined4 *)param_9[2];
    uStack_10c = *(undefined4 *)((longlong)param_10 + 0x1c);
    uStack_170 = *param_10;
    puStack_178 = (undefined4 *)param_10[2];
    uStack_108 = *(undefined4 *)((longlong)param_6 + 0x1c);
    plStack_120 = (longlong *)*param_6;
    puStack_168 = (undefined4 *)param_6[2];
    uStack_140 = *param_8;
    puStack_438 = (undefined4 *)param_8[2];
    uStack_30c = *(undefined4 *)((longlong)param_8 + 0x1c);
    lStack_2f8 = param_15[4];
    puStack_470 = (undefined4 *)param_15[6];
    uStack_314 = *(undefined4 *)((longlong)param_15 + 0x3c);
    lStack_3e0 = param_15[8];
    puStack_478 = (undefined4 *)param_15[10];
    uStack_318 = *(undefined4 *)((longlong)param_15 + 0x5c);
    lStack_3d0 = param_15[0xc];
    puStack_430 = (undefined4 *)param_15[0xe];
    uStack_308 = *(undefined4 *)((longlong)param_15 + 0x7c);
    lStack_3c8 = param_15[0x10];
    puStack_428 = (undefined4 *)param_15[0x12];
    uStack_304 = *(undefined4 *)((longlong)param_15 + 0x9c);
    uStack_310 = *(undefined4 *)((longlong)param_15 + 0x1c);
    lStack_3d8 = *param_15;
    puStack_468 = (undefined4 *)param_15[2];
    iVar4 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                             CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                   CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
    cVar52 = (char)iVar4;
    cVar53 = (char)((uint)iVar4 >> 8);
    cVar54 = (char)((uint)iVar4 >> 0x10);
    cVar55 = (char)((uint)iVar4 >> 0x18);
    iVar4 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                             CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                   CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
    cVar56 = (char)iVar4;
    cVar57 = (char)((uint)iVar4 >> 8);
    cVar58 = (char)((uint)iVar4 >> 0x10);
    cVar59 = (char)((uint)iVar4 >> 0x18);
    iVar4 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                             CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                   CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
    cVar60 = (char)iVar4;
    cVar61 = (char)((uint)iVar4 >> 8);
    cVar62 = (char)((uint)iVar4 >> 0x10);
    cVar63 = (char)((uint)iVar4 >> 0x18);
    iVar4 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                             CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                   CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
    cVar64 = (char)iVar4;
    cVar65 = (char)((uint)iVar4 >> 8);
    cVar66 = (char)((uint)iVar4 >> 0x10);
    cVar67 = (char)((uint)iVar4 >> 0x18);
    pauVar33 = pauVar28 + 1;
    plStack_498 = plStack_3f8 + 4;
    plStack_480 = plStack_128 + 4;
    plStack_408 = plStack_2e0 + 4;
    plStack_3a8 = plStack_2e0 + 6;
    plStack_400 = plStack_2d8 + 4;
    plStack_3a0 = plStack_2d8 + 6;
    plStack_410 = plStack_2e8 + 4;
    plStack_3b0 = plStack_2e8 + 6;
    lStack_458 = lStack_3d8 + 0x20;
    lStack_450 = lStack_2f8 + 0x20;
    lStack_460 = lStack_3e0 + 0x20;
    lStack_420 = lStack_3d0 + 0x20;
    lStack_418 = lStack_3c8 + 0x20;
    plStack_448 = plStack_120 + 6;
    plStack_440 = plStack_120 + 10;
    plStack_3c0 = plStack_120 + 0xc;
    plStack_3b8 = plStack_120 + 0x10;
    pcVar29 = pcStack_2f0;
    plVar21 = plStack_3f8;
    pcVar34 = (code *)plStack_3f8[3];
    uStack_180 = param_3;
LAB_140ba716e:
    if (pcVar34 != (code *)0x0) {
      if ((short)uVar27 == 0) {
        do {
          auVar37 = *pauVar33;
          pauVar28 = pauVar28 + -0x2b0;
          pauVar33 = pauVar33 + 1;
          uVar27 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar27 == 0);
      }
      uVar14 = 0;
      for (uVar2 = uVar27; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      pcVar34 = pcVar34 + -1;
      lVar16 = *(longlong *)pauVar28[(ulonglong)uVar14 * -0x2b + -0x2b];
      if (((*pcVar29 != '\0') || (*(int *)(pcVar29 + 8) != 1)) ||
         (*(longlong *)(pcVar29 + 0x10) == lVar16)) {
        uStack_2c8 = (undefined7)lVar16;
        uStack_2c1 = (undefined1)((ulonglong)lVar16 >> 0x38);
        lStack_300 = lVar16;
        if (plVar21[3] == 0) {
LAB_140ba8cfb:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143060940);
        }
        uVar15 = pdb_1400af0a0(plStack_498,&uStack_2c8);
        lVar32 = *plStack_3f8;
        bVar35 = (byte)(uVar15 >> 0x39);
        auVar37 = ZEXT216(CONCAT11(bVar35,bVar35));
        auVar37 = pshuflw(auVar37,auVar37,0);
        lVar25 = 0;
        do {
          uVar15 = uVar15 & plStack_3f8[1];
          auVar47 = *(undefined1 (*) [16])(lVar32 + uVar15);
          auVar45[0] = -(auVar47[0] == auVar37[0]);
          auVar45[1] = -(auVar47[1] == auVar37[1]);
          auVar45[2] = -(auVar47[2] == auVar37[2]);
          auVar45[3] = -(auVar47[3] == auVar37[3]);
          auVar45[4] = -(auVar47[4] == auVar37[4]);
          auVar45[5] = -(auVar47[5] == auVar37[5]);
          auVar45[6] = -(auVar47[6] == auVar37[6]);
          auVar45[7] = -(auVar47[7] == auVar37[7]);
          auVar45[8] = -(auVar47[8] == auVar37[0]);
          auVar45[9] = -(auVar47[9] == auVar37[1]);
          auVar45[10] = -(auVar47[10] == auVar37[2]);
          auVar45[0xb] = -(auVar47[0xb] == auVar37[3]);
          auVar45[0xc] = -(auVar47[0xc] == auVar37[4]);
          auVar45[0xd] = -(auVar47[0xd] == auVar37[5]);
          auVar45[0xe] = -(auVar47[0xe] == auVar37[6]);
          auVar45[0xf] = -(auVar47[0xf] == auVar37[7]);
          uVar30 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar45[0xf] >> 7) << 0xf;
          uVar14 = (uint)uVar30;
          while (uVar30 != 0) {
            uVar2 = 0;
            for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            lVar31 = (uVar2 + uVar15 & plStack_3f8[1]) * -0x2b0;
            if (lVar16 == *(longlong *)(lVar32 + -0x2b0 + lVar31)) {
              lVar32 = lVar32 + lVar31;
              if ((*(ulonglong *)(lVar32 + -0x298) < 2) || (*(float *)(lVar32 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143060928);
              }
              plVar21 = plStack_3f8;
              if ((*(uint *)(lVar32 + -0x50) < 2) ||
                 (fVar38 = *(float *)(lVar32 + -0x278), fVar38 <= fVar6)) goto LAB_140ba716e;
              lStack_208 = *(longlong *)(lVar32 + -0x218);
              uStack_1e0 = *(ulonglong *)(lVar32 + -0x210);
              lStack_200 = lStack_208 + uStack_1e0 * 0xc;
              lStack_1f8 = *(longlong *)(lVar32 + -0x1c8);
              uVar15 = *(ulonglong *)(lVar32 + -0x1c0);
              lStack_1f0 = lStack_1f8 + uVar15 * 4;
              if (uVar15 < uStack_1e0) {
                uStack_1e0 = uVar15;
              }
              uStack_2c8 = 0;
              uStack_2c1 = 0;
              puStack_268 = (undefined *)0x0;
              uStack_1e8 = 0;
              uStack_1d8 = 0;
              uStack_1b8 = 0;
              lStack_e0 = lVar16;
              pdb_1415f9210(&uStack_500);
              uStack_508 = 2;
              pbStack_398 = (byte *)&lStack_300;
              pcStack_390 = pdb_140c04ef0;
              uStack_d1 = 1;
              pdb_140f60760(&uStack_2c8,&UNK_143060958,&pbStack_398);
              pbStack_398 = (byte *)CONCAT17(uStack_2c1,uStack_2c8);
              pcStack_390 = (code *)CONCAT44(uStack_2bc,fStack_2c0);
              pbStack_388 = (byte *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
              lStack_240 = CONCAT71(uStack_507,uStack_508);
              uStack_230 = uStack_4f8;
              uStack_228 = uStack_4f0;
              uStack_238 = uStack_500;
              uStack_2c8 = 0;
              uStack_2c1 = 0;
              fStack_2c0 = 1.12104e-44;
              uStack_2bc = 0;
              uStack_2b8._0_4_ = 0;
              uStack_2b8._4_4_ = 0;
              pcStack_2b0 = (code *)CONCAT44(pcStack_2b0._4_4_,1);
              uStack_2a8 = (byte *)0x0;
              uStack_298 = (undefined *)CONCAT44(uStack_298._4_4_,2);
              uStack_280 = CONCAT44(uStack_280._4_4_,3);
              puStack_268 = (undefined *)CONCAT44(puStack_268._4_4_,3);
              auStack_258[8] = 0;
              uStack_220 = 0x100;
              uStack_d1 = 0;
              ppbVar26 = &pbStack_398;
              lVar16 = pdb_1409008d0(uStack_490,&pbStack_398,&uStack_2c8);
              plVar21 = plStack_3f8;
              ppbStack_138 = ppbVar26;
              if (((*(char *)(lVar16 + 0x18) == '\0') || (*(byte ***)(lVar16 + 0x38) != ppbVar26))
                 || (*(int *)(lVar16 + 0x28) == 2)) goto LAB_140ba716e;
              uStack_d1 = 0;
              lStack_2d0 = lVar16;
              uVar14 = pdb_1419aab30(lVar32 + -0x220,*(undefined4 *)(lVar16 + 0x4c),
                                     *(undefined4 *)(lVar16 + 0x54));
              uVar17 = (ulonglong)uVar14;
              uVar15 = *(ulonglong *)(lVar32 + -0x1f8);
              if (uVar15 <= uVar17) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar17,uVar15,&UNK_14335e460);
              }
              uVar1 = uVar17 + 1;
              if (uVar15 <= uVar1) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar1,uVar15,&UNK_14335e478);
              }
              pbStack_e8 = (byte *)uVar1;
              if ((extraout_XMM0_Da < 0.0) || (fVar6 < extraout_XMM0_Da)) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14335ec80,0x2a,&UNK_14335ecd0);
              }
              uStack_d1 = 0;
              pbStack_100 = (byte *)uVar17;
              pdb_140de9fd0(uVar17,*(undefined4 *)(*(longlong *)(lVar32 + -0x200) + 4 + uVar17 * 4))
              ;
              uVar11 = uStack_2c1;
              uVar10 = uStack_2c8;
              fVar38 = fVar7 / fVar38;
              pbStack_398 = (byte *)CONCAT44(pbStack_398._4_4_,fVar38);
              uStack_2c1 = (undefined1)((ulonglong)&pbStack_398 >> 0x38);
              uStack_2c8 = SUB87(&pbStack_398,0);
              if ((fVar38 < 0.0) || (fVar6 < fVar38)) {
                fStack_2c0 = 7.7206726;
                uStack_2bc = 1;
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14335ec38,&uStack_2c8,&UNK_143060968);
              }
              fVar38 = fVar6 - fVar38;
              pbStack_398 = (byte *)CONCAT44(pbStack_398._4_4_,fVar38);
              if ((fVar38 < 0.0) || (fVar6 < fVar38)) {
                fStack_2c0 = 7.7206726;
                uStack_2bc = 1;
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14335ec38,&uStack_2c8,&UNK_143060980);
              }
              uStack_d1 = 0;
              uStack_2c8 = uVar10;
              uStack_2c1 = uVar11;
              uVar14 = pdb_1419a9060(lVar32 + -0x220);
              uVar17 = (ulonglong)uVar14;
              uVar15 = *(ulonglong *)(lVar32 + -0x210);
              if (uVar15 <= uVar17) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar17,uVar15,&UNK_14335e4e0);
              }
              uVar1 = uVar17 + 1;
              if (uVar15 <= uVar1) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar1,uVar15,&UNK_14335e4f8);
              }
              lVar16 = *(longlong *)(lVar32 + -0x218);
              fVar38 = fVar6 - extraout_XMM0_Da_00;
              fStack_1a0 = *(float *)(lVar16 + 4 + uVar1 * 0xc) * extraout_XMM0_Da_00 +
                           *(float *)(lVar16 + 4 + uVar17 * 0xc) * fVar38;
              uVar24 = *(undefined8 *)(lVar16 + 8 + uVar17 * 0xc);
              fStack_19c = extraout_XMM0_Da_00 * *(float *)(lVar16 + 8 + uVar1 * 0xc) +
                           (float)uVar24 * fVar38;
              fStack_1a4 = fVar38 * *(float *)(lVar16 + uVar17 * 0xc) +
                           (float)((ulonglong)uVar24 >> 0x20) * extraout_XMM0_Da_00;
              uVar15 = *(ulonglong *)(lVar32 + -0x1c0);
              if (uVar15 <= pbStack_100) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pbStack_100,uVar15,&UNK_143060998);
              }
              if (uVar15 <= pbStack_e8) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pbStack_e8,uVar15,&UNK_143060998);
              }
              fVar38 = *(float *)(*(longlong *)(lVar32 + -0x1c8) + (longlong)pbStack_100 * 4);
              uStack_e9 = *(undefined1 *)(lVar32 + -8);
              uStack_2c8 = (undefined7)CONCAT44(fStack_19c,fStack_1a4);
              uStack_2c1 = (undefined1)((uint)fStack_19c >> 0x18);
              uStack_d1 = 0;
              pdb_140df4540(&uStack_328,&uStack_2c8,
                            (*(float *)(*(longlong *)(lVar32 + -0x1c8) + 4 +
                                       (longlong)pbStack_100 * 4) - fVar38) * extraout_XMM0_Da +
                            fVar38);
              uStack_d1 = 0;
              uVar14 = pdb_1419a9060(lVar32 + -0x220);
              uVar17 = (ulonglong)uVar14;
              uVar15 = uVar17 + 1;
              if (*(ulonglong *)(lVar32 + -0x210) <= uVar15) {
                uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar15,*(ulonglong *)(lVar32 + -0x210),&UNK_14335e510);
              }
              lVar16 = *(longlong *)(lVar32 + -0x218);
              fVar38 = *(float *)(lVar16 + 8 + uVar15 * 0xc) - *(float *)(lVar16 + 8 + uVar17 * 0xc)
              ;
              uVar24 = *(undefined8 *)(lVar16 + uVar15 * 0xc);
              uVar36 = *(undefined8 *)(lVar16 + uVar17 * 0xc);
              fVar44 = (float)uVar24 - (float)uVar36;
              fVar50 = (float)((ulonglong)uVar24 >> 0x20) - (float)((ulonglong)uVar36 >> 0x20);
              fVar51 = fVar6 / SQRT(fVar50 * fVar50 + fVar44 * fVar44 + fVar38 * fVar38);
              pbStack_398 = (byte *)CONCAT44(fVar51 * fVar50,fVar51 * fVar44);
              pcStack_390 = (code *)CONCAT44(pcStack_390._4_4_,fVar51 * fVar38);
              uStack_d1 = 0;
              pdb_140de9ab0(&uStack_2c8,&pbStack_398);
              uVar24 = CONCAT17(uStack_2c1,uStack_2c8);
              uVar36 = CONCAT44(uStack_2bc,fStack_2c0);
              uStack_2c8 = SUB87(&lStack_300,0);
              uStack_2c1 = (undefined1)((ulonglong)&lStack_300 >> 0x38);
              fStack_2c0 = 5.8473434;
              uStack_2bc = 1;
              uStack_2b8 = &fStack_1a4;
              pcStack_2b0 = pdb_140f33d80;
              uStack_d1 = 0;
              pdb_140f60760(&pbStack_398,&UNK_1430609b0,&uStack_2c8);
              pbVar19 = pbStack_388;
              pbStack_e8 = pbStack_398;
              pbStack_f8 = (byte *)pcStack_390;
              fStack_2c0 = fStack_19c;
              uStack_2c8 = (undefined7)CONCAT44(fStack_1a0,fStack_1a4);
              uStack_2c1 = (undefined1)((uint)fStack_1a0 >> 0x18);
              uStack_2b8._4_4_ = uStack_320;
              uStack_2bc = (undefined4)uStack_328;
              uStack_2b8._0_4_ = (undefined4)((ulonglong)uStack_328 >> 0x20);
              pdb_14007ee60();
              pbVar18 = pub_1406abab0(0x28,8);
              if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x28);
              }
              pbVar18[0] = 1;
              pbVar18[1] = 0;
              pbVar18[2] = 0;
              pbVar18[3] = 0;
              pbVar18[4] = 0;
              pbVar18[5] = 0;
              pbVar18[6] = 0;
              pbVar18[7] = 0;
              pbVar18[8] = 1;
              pbVar18[9] = 0;
              pbVar18[10] = 0;
              pbVar18[0xb] = 0;
              pbVar18[0xc] = 0;
              pbVar18[0xd] = 0;
              pbVar18[0xe] = 0;
              pbVar18[0xf] = 0;
              *(ulonglong *)(pbVar18 + 0x10) = CONCAT17(uStack_2c1,uStack_2c8);
              *(ulonglong *)(pbVar18 + 0x18) = CONCAT44(uStack_2bc,fStack_2c0);
              *(ulonglong *)(pbVar18 + 0x20) = CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
              uStack_2c8 = SUB87(pbVar18,0);
              uStack_2c1 = (undefined1)((ulonglong)pbVar18 >> 0x38);
              fStack_2c0 = 134.03809;
              uStack_2bc = 1;
              pbStack_100 = pbVar18;
              if ((longlong)pbVar19 < 0) {
                uVar23 = 0;
LAB_140ba8d09:
                pdb_142dc7e2a(uVar23,pbVar19);
                goto LAB_140ba8fdb;
              }
              if (pbVar19 == (byte *)0x0) {
                pcStack_2b0 = (code *)0x1;
              }
              else {
                pdb_14007ee60();
                pbVar18 = pub_1406abab0((ulonglong)pbVar19,1);
                uVar23 = 1;
                if (pbVar18 == (byte *)0x0) goto LAB_140ba8d09;
                pbStack_118 = pbVar18;
                pub_142e32760(pbVar18,pbStack_f8,pbVar19);
                pcStack_2b0 = (code *)pbStack_118;
              }
              uStack_2c8 = SUB87(ppbStack_138,0);
              uStack_2c1 = (undefined1)((ulonglong)ppbStack_138 >> 0x38);
              fStack_2c0 = (float)((uint)fStack_2c0 & 0xffffff00);
              uStack_2b8._0_4_ = SUB84(pbVar19,0);
              uStack_2b8._4_4_ = (undefined4)((ulonglong)pbVar19 >> 0x20);
              uStack_2a8 = pbVar19;
              uStack_2a0 = pbStack_100;
              uStack_298 = &UNK_1430609c0;
              pdb_141a88350(uStack_3f0,&uStack_2c8);
              if (pbStack_e8 != (byte *)0x0) {
                pub_1406abac0(pbStack_f8,(ulonglong)pbStack_e8,1);
              }
              uStack_2c8 = SUB87(&lStack_300,0);
              uStack_2c1 = (undefined1)((ulonglong)&lStack_300 >> 0x38);
              fStack_2c0 = 5.8473434;
              uStack_2bc = 1;
              uStack_2b8 = &fStack_1a4;
              pcStack_2b0 = pdb_140f33d80;
              uStack_d1 = 0;
              pdb_140f60760(&pbStack_398,&UNK_1430609f0,&uStack_2c8);
              pbStack_100 = pbStack_398;
              pbStack_118 = (byte *)pcStack_390;
              pbStack_e8 = pbStack_388;
              pdb_14007ee60();
              pbVar19 = pub_1406abab0(0x30,0x10);
              if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(0x10,0x30);
              }
              pbVar19[0] = 1;
              pbVar19[1] = 0;
              pbVar19[2] = 0;
              pbVar19[3] = 0;
              pbVar19[4] = 0;
              pbVar19[5] = 0;
              pbVar19[6] = 0;
              pbVar19[7] = 0;
              pbVar19[8] = 1;
              pbVar19[9] = 0;
              pbVar19[10] = 0;
              pbVar19[0xb] = 0;
              pbVar19[0xc] = 0;
              pbVar19[0xd] = 0;
              pbVar19[0xe] = 0;
              pbVar19[0xf] = 0;
              *(undefined8 *)(pbVar19 + 0x10) = uVar24;
              *(undefined8 *)(pbVar19 + 0x18) = uVar36;
              *(undefined8 *)(pbVar19 + 0x20) = uStack_328;
              *(undefined4 *)(pbVar19 + 0x28) = uStack_320;
              uStack_2c8 = SUB87(pbVar19,0);
              uStack_2c1 = (undefined1)((ulonglong)pbVar19 >> 0x38);
              fStack_2c0 = 134.03918;
              uStack_2bc = 1;
              pbStack_f8 = pbVar19;
              if ((longlong)pbStack_e8 < 0) {
                uVar24 = 0;
LAB_140ba8d16:
                pdb_142dc7e2a(uVar24,pbStack_e8);
                goto LAB_140ba8fdb;
              }
              if (pbStack_e8 == (byte *)0x0) {
                pcStack_2b0 = (code *)0x1;
              }
              else {
                pdb_14007ee60();
                pcVar20 = (code *)pub_1406abab0((ulonglong)pbStack_e8,1);
                uVar24 = 1;
                if (pcVar20 == (code *)0x0) goto LAB_140ba8d16;
                pcStack_160 = pcVar20;
                pub_142e32760(pcVar20,pbStack_118,pbStack_e8);
                pcStack_2b0 = pcStack_160;
              }
              uStack_2c8 = SUB87(ppbStack_138,0);
              uStack_2c1 = (undefined1)((ulonglong)ppbStack_138 >> 0x38);
              fStack_2c0 = (float)((uint)fStack_2c0 & 0xffffff00);
              uStack_2b8._0_4_ = SUB84(pbStack_e8,0);
              uStack_2b8._4_4_ = (undefined4)((ulonglong)pbStack_e8 >> 0x20);
              uStack_2a8 = pbStack_e8;
              uStack_2a0 = pbStack_f8;
              uStack_298 = &UNK_143060a08;
              pdb_141a88350(uStack_3f0,&uStack_2c8);
              lVar16 = lStack_e0;
              if (pbStack_100 != (byte *)0x0) {
                pub_1406abac0(pbStack_118,(ulonglong)pbStack_100,1);
              }
              uStack_2c8 = (undefined7)lVar16;
              uStack_2c1 = (undefined1)((ulonglong)lVar16 >> 0x38);
              if (plStack_128[3] == 0) goto LAB_140ba8d21;
              uStack_d1 = 0;
              uVar15 = pdb_1400af0a0(plStack_480,&uStack_2c8);
              lVar16 = *plStack_128;
              bVar35 = (byte)(uVar15 >> 0x39);
              auVar37 = ZEXT216(CONCAT11(bVar35,bVar35));
              auVar37 = pshuflw(auVar37,auVar37,0);
              lVar25 = 0;
              goto LAB_140ba7bae;
            }
            uVar30 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar30);
          }
          auVar39[0] = -(auVar47[0] == cVar52);
          auVar39[1] = -(auVar47[1] == cVar53);
          auVar39[2] = -(auVar47[2] == cVar54);
          auVar39[3] = -(auVar47[3] == cVar55);
          auVar39[4] = -(auVar47[4] == cVar56);
          auVar39[5] = -(auVar47[5] == cVar57);
          auVar39[6] = -(auVar47[6] == cVar58);
          auVar39[7] = -(auVar47[7] == cVar59);
          auVar39[8] = -(auVar47[8] == cVar60);
          auVar39[9] = -(auVar47[9] == cVar61);
          auVar39[10] = -(auVar47[10] == cVar62);
          auVar39[0xb] = -(auVar47[0xb] == cVar63);
          auVar39[0xc] = -(auVar47[0xc] == cVar64);
          auVar39[0xd] = -(auVar47[0xd] == cVar65);
          auVar39[0xe] = -(auVar47[0xe] == cVar66);
          auVar39[0xf] = -(auVar47[0xf] == cVar67);
          if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x2f,0) & 1) != 0) || (SUB161(auVar39 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') goto LAB_140ba8cfb;
          uVar15 = uVar15 + lVar25 + 0x10;
          lVar25 = lVar25 + 0x10;
        } while( true );
      }
      goto LAB_140ba716e;
    }
  }
  return;
LAB_140ba7bae:
  uVar15 = uVar15 & plStack_128[1];
  auVar47 = *(undefined1 (*) [16])(lVar16 + uVar15);
  auVar46[0] = -(auVar47[0] == auVar37[0]);
  auVar46[1] = -(auVar47[1] == auVar37[1]);
  auVar46[2] = -(auVar47[2] == auVar37[2]);
  auVar46[3] = -(auVar47[3] == auVar37[3]);
  auVar46[4] = -(auVar47[4] == auVar37[4]);
  auVar46[5] = -(auVar47[5] == auVar37[5]);
  auVar46[6] = -(auVar47[6] == auVar37[6]);
  auVar46[7] = -(auVar47[7] == auVar37[7]);
  auVar46[8] = -(auVar47[8] == auVar37[0]);
  auVar46[9] = -(auVar47[9] == auVar37[1]);
  auVar46[10] = -(auVar47[10] == auVar37[2]);
  auVar46[0xb] = -(auVar47[0xb] == auVar37[3]);
  auVar46[0xc] = -(auVar47[0xc] == auVar37[4]);
  auVar46[0xd] = -(auVar47[0xd] == auVar37[5]);
  auVar46[0xe] = -(auVar47[0xe] == auVar37[6]);
  auVar46[0xf] = -(auVar47[0xf] == auVar37[7]);
  uVar30 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar31 = (uVar2 + uVar15 & plStack_128[1]) * -0x78;
    if (lStack_e0 == *(longlong *)(lVar16 + -0x78 + lVar31)) {
      plVar21 = plStack_3f8;
      if ((*(char *)(lStack_2d0 + 0x18) != '\x02') ||
         (*(byte ***)(lStack_2d0 + 0x38) != ppbStack_138)) goto LAB_140ba716e;
      lVar16 = lVar16 + lVar31;
      if (1 < *(byte *)(lStack_2d0 + 0x19)) {
        if (*(byte *)(lStack_2d0 + 0x19) == 3) {
          uStack_d1 = 0;
          pdb_140c35ca0(&uStack_2c8);
          *puStack_168 = uStack_108;
          lVar32 = plStack_120[1];
          if (lVar32 != 0) {
            lVar25 = lVar32 * 0x10 + 0x10;
            uVar15 = lVar32 + lVar25 + 0x11;
            if (uVar15 != 0) {
              pub_1406abac0((byte *)(*plStack_120 - lVar25),uVar15,0x10);
            }
          }
          pdb_140265650(plStack_448,plStack_440,0xe8,0x10);
          pdb_1402642c0(plStack_3c0,plStack_3b8,0x90,0x10);
          pub_142e32760(plStack_120,&uStack_2c8,0x90);
          *puStack_148 = uStack_104;
          uStack_d1 = 0;
          pdb_140aa2f60(uStack_150,0,lStack_e0,uStack_140,uStack_180,&UNK_143060a50,0x1a);
          pcVar29 = pcStack_2f0;
          *puStack_148 = uStack_104;
          uStack_d1 = 0;
          pdb_140c419b0(uStack_150,lStack_e0,uStack_140);
          *puStack_168 = uStack_108;
          uStack_d1 = 0;
          pdb_140c356c0(plStack_120,lStack_e0,lVar16 + -0x70);
          plVar21 = plStack_3f8;
        }
        goto LAB_140ba716e;
      }
      if (0x20000 < plStack_128[3] + 1U) {
        if (1 < *_DAT_143ca8e90) {
          uStack_2c8 = 0;
          uStack_2c1 = 0;
          fStack_2c0 = 134.04134;
          uStack_2bc = 1;
          uStack_2b8._0_4_ = 0x2a;
          uStack_2b8._4_4_ = 0;
          pcStack_2b0 = (code *)0x0;
          uStack_2a8 = &UNK_1430608f0;
          uStack_2a0 = (byte *)0x35;
          uStack_298 = (undefined *)0x2;
          uStack_290 = &UNK_143060a95;
          uStack_288 = 0x2a;
          uStack_280 = 0xd200000001;
          uStack_278 = &UNK_143060a6a;
          lStack_270 = 0x57;
          uStack_d1 = 0;
          pdb_140f332f0(&uStack_129,&uStack_2c8);
          plVar21 = plStack_3f8;
        }
        goto LAB_140ba716e;
      }
      pbStack_118 = (byte *)CONCAT71(pbStack_118._1_7_,*(undefined1 *)(lVar16 + -7));
      *puStack_3e8 = uStack_154;
      uStack_d1 = 0;
      pdb_140b0e830(&uStack_2c8,plStack_128,lStack_e0);
      pcStack_160 = pcVar34;
      if (SBORROW8(0,CONCAT17(uStack_2c1,uStack_2c8))) {
        uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143060ac0);
      }
      puStack_338 = puStack_268;
      uStack_330 = puStack_260;
      puVar68 = uStack_330;
      uStack_348 = uStack_278;
      lStack_340 = lStack_270;
      uStack_358 = uStack_288;
      uStack_350 = uStack_280;
      pbStack_398 = (byte *)CONCAT17(uStack_2c1,uStack_2c8);
      pcStack_390 = (code *)CONCAT44(uStack_2bc,fStack_2c0);
      pbStack_388 = (byte *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
      uStack_368 = (undefined4)uStack_298;
      uStack_364 = uStack_298._4_4_;
      uStack_360 = (uint)uStack_290;
      uStack_35c = uStack_290._4_4_;
      pbStack_378 = uStack_2a8;
      pbStack_370 = uStack_2a0;
      pcStack_380 = pcStack_2b0;
      uStack_330._2_1_ = (char)((ulonglong)puStack_260 >> 0x10);
      uStack_2c1 = (undefined1)((ulonglong)lStack_e0 >> 0x38);
      uStack_2c8 = (undefined7)lStack_e0;
      uStack_330 = puVar68;
      if (uStack_330._2_1_ != '\0') {
        plVar21 = plStack_3b0;
        if (plStack_2e8[3] == 0) goto LAB_140ba821f;
        uVar15 = pdb_1400af0a0(plStack_410,&uStack_2c8);
        bVar35 = (byte)(uVar15 >> 0x39);
        auVar37 = ZEXT216(CONCAT11(bVar35,bVar35));
        auVar37 = pshuflw(auVar37,auVar37,0);
        lVar16 = 0;
        goto LAB_140ba7f25;
      }
      uStack_330._1_1_ = (char)((ulonglong)puStack_260 >> 8);
      if (uStack_330._1_1_ == '\0') {
        plVar21 = plStack_3a8;
        if (plStack_2e0[3] == 0) goto LAB_140ba821f;
        uVar15 = pdb_1400af0a0(plStack_408,&uStack_2c8);
        bVar35 = (byte)(uVar15 >> 0x39);
        auVar37 = ZEXT216(CONCAT11(bVar35,bVar35));
        auVar37 = pshuflw(auVar37,auVar37,0);
        lVar16 = 0;
        goto LAB_140ba819b;
      }
      plVar21 = plStack_3a0;
      if (plStack_2d8[3] == 0) goto LAB_140ba821f;
      uVar15 = pdb_1400af0a0(plStack_400,&uStack_2c8);
      bVar35 = (byte)(uVar15 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar35,bVar35));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar16 = 0;
      goto LAB_140ba80c8;
    }
    uVar30 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar30);
  }
  auVar40[0] = -(auVar47[0] == cVar52);
  auVar40[1] = -(auVar47[1] == cVar53);
  auVar40[2] = -(auVar47[2] == cVar54);
  auVar40[3] = -(auVar47[3] == cVar55);
  auVar40[4] = -(auVar47[4] == cVar56);
  auVar40[5] = -(auVar47[5] == cVar57);
  auVar40[6] = -(auVar47[6] == cVar58);
  auVar40[7] = -(auVar47[7] == cVar59);
  auVar40[8] = -(auVar47[8] == cVar60);
  auVar40[9] = -(auVar47[9] == cVar61);
  auVar40[10] = -(auVar47[10] == cVar62);
  auVar40[0xb] = -(auVar47[0xb] == cVar63);
  auVar40[0xc] = -(auVar47[0xc] == cVar64);
  auVar40[0xd] = -(auVar47[0xd] == cVar65);
  auVar40[0xe] = -(auVar47[0xe] == cVar66);
  auVar40[0xf] = -(auVar47[0xf] == cVar67);
  if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') {
LAB_140ba8d21:
    uStack_d1 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143060a38);
  }
  uVar15 = uVar15 + lVar25 + 0x10;
  lVar25 = lVar25 + 0x10;
  goto LAB_140ba7bae;
LAB_140ba7f25:
  uVar15 = uVar15 & plStack_2e8[1];
  pcVar29 = (char *)(*plStack_2e8 + uVar15);
  auVar47[0] = -(*pcVar29 == auVar37[0]);
  auVar47[1] = -(pcVar29[1] == auVar37[1]);
  auVar47[2] = -(pcVar29[2] == auVar37[2]);
  auVar47[3] = -(pcVar29[3] == auVar37[3]);
  auVar47[4] = -(pcVar29[4] == auVar37[4]);
  auVar47[5] = -(pcVar29[5] == auVar37[5]);
  auVar47[6] = -(pcVar29[6] == auVar37[6]);
  auVar47[7] = -(pcVar29[7] == auVar37[7]);
  auVar47[8] = -(pcVar29[8] == auVar37[0]);
  auVar47[9] = -(pcVar29[9] == auVar37[1]);
  auVar47[10] = -(pcVar29[10] == auVar37[2]);
  auVar47[0xb] = -(pcVar29[0xb] == auVar37[3]);
  auVar47[0xc] = -(pcVar29[0xc] == auVar37[4]);
  auVar47[0xd] = -(pcVar29[0xd] == auVar37[5]);
  auVar47[0xe] = -(pcVar29[0xe] == auVar37[6]);
  auVar47[0xf] = -(pcVar29[0xf] == auVar37[7]);
  uVar30 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar25 = *plStack_2e8 + (uVar2 + uVar15 & plStack_2e8[1]) * -0x10;
    if (lStack_e0 == *(longlong *)(lVar25 + -0x10)) goto LAB_140ba8200;
    uVar30 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar30);
  }
  auVar41[0] = -(*pcVar29 == cVar52);
  auVar41[1] = -(pcVar29[1] == cVar53);
  auVar41[2] = -(pcVar29[2] == cVar54);
  auVar41[3] = -(pcVar29[3] == cVar55);
  auVar41[4] = -(pcVar29[4] == cVar56);
  auVar41[5] = -(pcVar29[5] == cVar57);
  auVar41[6] = -(pcVar29[6] == cVar58);
  auVar41[7] = -(pcVar29[7] == cVar59);
  auVar41[8] = -(pcVar29[8] == cVar60);
  auVar41[9] = -(pcVar29[9] == cVar61);
  auVar41[10] = -(pcVar29[10] == cVar62);
  auVar41[0xb] = -(pcVar29[0xb] == cVar63);
  auVar41[0xc] = -(pcVar29[0xc] == cVar64);
  auVar41[0xd] = -(pcVar29[0xd] == cVar65);
  auVar41[0xe] = -(pcVar29[0xe] == cVar66);
  auVar41[0xf] = -(pcVar29[0xf] == cVar67);
  plVar21 = plStack_3b0;
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_140ba821f;
  uVar15 = uVar15 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140ba7f25;
LAB_140ba80c8:
  uVar15 = uVar15 & plStack_2d8[1];
  pcVar29 = (char *)(*plStack_2d8 + uVar15);
  auVar48[0] = -(*pcVar29 == auVar37[0]);
  auVar48[1] = -(pcVar29[1] == auVar37[1]);
  auVar48[2] = -(pcVar29[2] == auVar37[2]);
  auVar48[3] = -(pcVar29[3] == auVar37[3]);
  auVar48[4] = -(pcVar29[4] == auVar37[4]);
  auVar48[5] = -(pcVar29[5] == auVar37[5]);
  auVar48[6] = -(pcVar29[6] == auVar37[6]);
  auVar48[7] = -(pcVar29[7] == auVar37[7]);
  auVar48[8] = -(pcVar29[8] == auVar37[0]);
  auVar48[9] = -(pcVar29[9] == auVar37[1]);
  auVar48[10] = -(pcVar29[10] == auVar37[2]);
  auVar48[0xb] = -(pcVar29[0xb] == auVar37[3]);
  auVar48[0xc] = -(pcVar29[0xc] == auVar37[4]);
  auVar48[0xd] = -(pcVar29[0xd] == auVar37[5]);
  auVar48[0xe] = -(pcVar29[0xe] == auVar37[6]);
  auVar48[0xf] = -(pcVar29[0xf] == auVar37[7]);
  uVar30 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar25 = *plStack_2d8 + (uVar2 + uVar15 & plStack_2d8[1]) * -0x10;
    if (lStack_e0 == *(longlong *)(lVar25 + -0x10)) goto LAB_140ba8200;
    uVar30 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar30);
  }
  auVar42[0] = -(*pcVar29 == cVar52);
  auVar42[1] = -(pcVar29[1] == cVar53);
  auVar42[2] = -(pcVar29[2] == cVar54);
  auVar42[3] = -(pcVar29[3] == cVar55);
  auVar42[4] = -(pcVar29[4] == cVar56);
  auVar42[5] = -(pcVar29[5] == cVar57);
  auVar42[6] = -(pcVar29[6] == cVar58);
  auVar42[7] = -(pcVar29[7] == cVar59);
  auVar42[8] = -(pcVar29[8] == cVar60);
  auVar42[9] = -(pcVar29[9] == cVar61);
  auVar42[10] = -(pcVar29[10] == cVar62);
  auVar42[0xb] = -(pcVar29[0xb] == cVar63);
  auVar42[0xc] = -(pcVar29[0xc] == cVar64);
  auVar42[0xd] = -(pcVar29[0xd] == cVar65);
  auVar42[0xe] = -(pcVar29[0xe] == cVar66);
  auVar42[0xf] = -(pcVar29[0xf] == cVar67);
  plVar21 = plStack_3a0;
  if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') goto LAB_140ba821f;
  uVar15 = uVar15 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140ba80c8;
LAB_140ba819b:
  uVar15 = uVar15 & plStack_2e0[1];
  pcVar29 = (char *)(*plStack_2e0 + uVar15);
  auVar49[0] = -(*pcVar29 == auVar37[0]);
  auVar49[1] = -(pcVar29[1] == auVar37[1]);
  auVar49[2] = -(pcVar29[2] == auVar37[2]);
  auVar49[3] = -(pcVar29[3] == auVar37[3]);
  auVar49[4] = -(pcVar29[4] == auVar37[4]);
  auVar49[5] = -(pcVar29[5] == auVar37[5]);
  auVar49[6] = -(pcVar29[6] == auVar37[6]);
  auVar49[7] = -(pcVar29[7] == auVar37[7]);
  auVar49[8] = -(pcVar29[8] == auVar37[0]);
  auVar49[9] = -(pcVar29[9] == auVar37[1]);
  auVar49[10] = -(pcVar29[10] == auVar37[2]);
  auVar49[0xb] = -(pcVar29[0xb] == auVar37[3]);
  auVar49[0xc] = -(pcVar29[0xc] == auVar37[4]);
  auVar49[0xd] = -(pcVar29[0xd] == auVar37[5]);
  auVar49[0xe] = -(pcVar29[0xe] == auVar37[6]);
  auVar49[0xf] = -(pcVar29[0xf] == auVar37[7]);
  uVar30 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    lVar25 = *plStack_2e0 + (uVar2 + uVar15 & plStack_2e0[1]) * -0x10;
    if (lStack_e0 == *(longlong *)(lVar25 + -0x10)) goto LAB_140ba8200;
    uVar30 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar30);
  }
  auVar43[0] = -(*pcVar29 == cVar52);
  auVar43[1] = -(pcVar29[1] == cVar53);
  auVar43[2] = -(pcVar29[2] == cVar54);
  auVar43[3] = -(pcVar29[3] == cVar55);
  auVar43[4] = -(pcVar29[4] == cVar56);
  auVar43[5] = -(pcVar29[5] == cVar57);
  auVar43[6] = -(pcVar29[6] == cVar58);
  auVar43[7] = -(pcVar29[7] == cVar59);
  auVar43[8] = -(pcVar29[8] == cVar60);
  auVar43[9] = -(pcVar29[9] == cVar61);
  auVar43[10] = -(pcVar29[10] == cVar62);
  auVar43[0xb] = -(pcVar29[0xb] == cVar63);
  auVar43[0xc] = -(pcVar29[0xc] == cVar64);
  auVar43[0xd] = -(pcVar29[0xd] == cVar65);
  auVar43[0xe] = -(pcVar29[0xe] == cVar66);
  auVar43[0xf] = -(pcVar29[0xf] == cVar67);
  plVar21 = plStack_3a8;
  if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') goto LAB_140ba821f;
  uVar15 = uVar15 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140ba819b;
LAB_140ba8200:
  plVar21 = (longlong *)(lVar25 + -8);
LAB_140ba821f:
  pbStack_f8 = (byte *)CONCAT44(pbStack_f8._4_4_,(int)*plVar21);
  uVar14 = pdb_1419a9060(lVar32 + -0x220);
  uVar17 = (ulonglong)uVar14;
  uVar15 = *(ulonglong *)(lVar32 + -0x210);
  if (uVar15 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar17,uVar15,&UNK_14335e4e0);
  }
  uVar1 = uVar17 + 1;
  if (uVar15 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,uVar15,&UNK_14335e4f8);
  }
  lVar16 = *(longlong *)(lVar32 + -0x218);
  fVar38 = (float)pdb_1419aaa60(&pbStack_398,
                                *(float *)(lVar16 + uVar1 * 0xc) * extraout_XMM0_Da_01 +
                                *(float *)(lVar16 + uVar17 * 0xc) * (fVar6 - extraout_XMM0_Da_01),
                                *(float *)(lVar16 + 8 + uVar1 * 0xc) * extraout_XMM0_Da_01 +
                                (fVar6 - extraout_XMM0_Da_01) *
                                *(float *)(lVar16 + 8 + uVar17 * 0xc),&UNK_143060ad8);
  pdb_14007ee60();
  pbVar19 = pub_1406abab0(0x20,8);
  if (pbVar19 == (byte *)0x0) {
    pdb_142dc7e2a(8,0x20);
LAB_140ba8fdb:
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  fVar44 = 0.0;
  if (0.0 <= fVar38) {
    fVar44 = fVar38;
  }
  fStack_4a4 = fVar6;
  if (fVar44 <= fVar6) {
    fStack_4a4 = fVar44;
  }
  lStack_198 = 2;
  pbStack_190 = pbVar19;
  lStack_188 = 0;
  uStack_4b0 = 2;
  uStack_4a8 = 0;
  fStack_4a0 = fStack_4a4;
  uStack_49c = 0x3f800000;
  pbVar19 = (byte *)0x0;
  while (pbVar19 != (byte *)0x2) {
    pbVar18 = pbVar19 + 1;
    uVar24 = *(undefined8 *)(&uStack_4a8 + (longlong)pbVar19 * 2);
    uStack_d3 = 1;
    puVar68 = &UNK_143060b18;
    pbStack_4b8 = pbVar18;
    pdb_1419a77d0(&uStack_570,&pbStack_398);
    if ((uStack_360 < 2) || (uStack_330._3_1_ == '\0')) {
      fVar38 = uStack_348._4_4_;
    }
    else {
      lVar16 = lStack_568 + lStack_560 * 8;
      lVar25 = lStack_568;
      fVar38 = fVar8;
      while (lVar25 != lVar16) {
        uStack_d2 = 1;
        uVar36 = pdb_1419c1ac0(uStack_488);
        lVar25 = lVar25 + 8;
        auVar37._8_4_ = (int)extraout_XMM0_Qb;
        auVar37._0_8_ = uVar36;
        auVar37._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if ((float)uVar36 <= fVar38) {
          auVar37._0_4_ = fVar38;
        }
        fVar38 = (float)(~-(uint)NAN(fVar38) & auVar37._0_4_ |
                        -(uint)NAN(fVar38) & (uint)(float)uVar36);
      }
      if (*(char *)(lVar32 + -0x1a0) == '\0') {
        uStack_d2 = 1;
        pdb_142d8e040();
        goto LAB_140ba8fdb;
      }
      fVar38 = *(float *)(lVar32 + -0x19c) - fVar38;
    }
    *puStack_3e8 = uStack_154;
    uStack_2c8 = (undefined7)uStack_570;
    uStack_2c1 = (undefined1)((ulonglong)uStack_570 >> 0x38);
    fStack_2c0 = (float)lStack_568;
    uStack_2bc = (undefined4)((ulonglong)lStack_568 >> 0x20);
    uStack_2b8._0_4_ = (undefined4)lStack_560;
    uStack_2b8._4_4_ = (undefined4)((ulonglong)lStack_560 >> 0x20);
    pcStack_2b0 = pcStack_558;
    uStack_2a8 = (byte *)CONCAT44(uStack_54c,uStack_550);
    uStack_2a0 = (byte *)CONCAT44(uStack_544,uStack_548);
    uStack_298 = puStack_540;
    uStack_278 = (undefined *)CONCAT44(fVar38,(undefined4)uStack_278);
    uStack_290 = (undefined *)CONCAT44(uStack_290._4_4_,2);
    uVar5 = CONCAT12(uStack_e9,(short)uStack_330);
    puStack_260 = (undefined *)
                  CONCAT26((short)(CONCAT17((DAT_143cb2d0c == '\0') * '\x05',
                                            CONCAT43((int)(((uint7)(uStack_330._6_1_ == '\x01') <<
                                                           0x30) >> 0x18),uVar5)) >> 0x30),
                           CONCAT15(uStack_330._5_1_,CONCAT23(uStack_330._3_2_,uVar5)));
    lStack_270 = lStack_340;
    puStack_268 = puStack_338;
    uStack_d2 = 0;
    pbVar19 = (byte *)&uStack_2c8;
    lVar25 = pdb_140b0eb60(plStack_128,pbVar19,uStack_330._3_2_,uStack_330._5_1_,puVar68);
    lVar16 = lStack_188;
    pbStack_e8 = pbVar19;
    pbVar19 = pbVar18;
    if (lVar25 == 1) {
      if ((float)((ulonglong)uVar24 >> 0x20) < (float)uVar24) {
        uStack_d2 = 0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14306c500,0x22,&UNK_14306c550);
      }
      if (lStack_188 == lStack_198) {
        uStack_d2 = 0;
        pdb_142d7e980(&lStack_198);
      }
      lVar25 = lVar16 * 0x10;
      *(byte **)(pbStack_190 + lVar25) = pbStack_e8;
      *(undefined8 *)(pbStack_190 + lVar25 + 8) = uVar24;
      lStack_188 = lVar16 + 1;
      *puStack_148 = uStack_104;
      uStack_d2 = 0;
      pbVar19 = pbStack_e8;
      plVar21 = (longlong *)pdb_14008d710(0);
      if (plVar21 == (longlong *)0x0) {
        uStack_d2 = 0;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140ba8fdb;
      }
      puStack_518 = (undefined *)*plVar21;
      lStack_510 = plVar21[1];
      *plVar21 = *plVar21 + 1;
      auVar37 = _DAT_14306c4f0;
      puVar9 = _UNK_14306c4e8;
      puVar68 = _DAT_14306c4e0;
      auStack_528 = _DAT_14306c4f0;
      puStack_538 = _DAT_14306c4e0;
      puStack_530 = _UNK_14306c4e8;
      puVar22 = (undefined8 *)pdb_140f3bda0();
      pbVar13 = pbStack_e8;
      if (*(char *)(puVar22 + 2) == '\x01') {
        pbStack_4c8 = (byte *)*puVar22;
        pbVar19 = (byte *)puVar22[1];
      }
      else {
        pbStack_4c8 = (byte *)pdb_140f4fd10();
        *puVar22 = pbStack_4c8;
        puVar22[1] = pbVar19;
        *(undefined1 *)(puVar22 + 2) = 1;
      }
      uVar24 = uStack_180;
      *puVar22 = pbStack_4c8 + 1;
      uStack_4d8 = _DAT_1430610c0;
      pcStack_4d0 = _UNK_1430610c8;
      uStack_4e8 = _DAT_1430610b0;
      uStack_4e0 = _UNK_1430610b8;
      pbStack_4c0 = pbVar19;
      plVar21 = (longlong *)pdb_14008d710(0);
      if (plVar21 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140ba8fdb;
      }
      lStack_248 = *plVar21;
      lStack_240 = plVar21[1];
      *plVar21 = *plVar21 + 1;
      uStack_278 = puStack_518;
      lStack_270 = lStack_510;
      uStack_288 = auStack_528._0_8_;
      uStack_280 = auStack_528._8_8_;
      uStack_298 = puStack_538;
      uStack_290 = puStack_530;
      uStack_2c8 = (undefined7)uStack_4e8;
      uStack_2c1 = (undefined1)((ulonglong)uStack_4e8 >> 0x38);
      fStack_2c0 = (float)uStack_4e0;
      uStack_2bc = (undefined4)((ulonglong)uStack_4e0 >> 0x20);
      uStack_2b8._0_4_ = (undefined4)uStack_4d8;
      uStack_2b8._4_4_ = (undefined4)((ulonglong)uStack_4d8 >> 0x20);
      pcStack_2b0 = pcStack_4d0;
      uStack_2a8 = pbStack_4c8;
      uStack_2a0 = pbStack_4c0;
      auStack_258 = auVar37;
      puStack_268 = puVar68;
      puStack_260 = puVar9;
      pdb_140aa21c0(uStack_150,0,pbVar13,&uStack_2c8,uVar24,&UNK_143060b30,0x10);
      uStack_d2 = 0;
      pdb_1404d6920(&uStack_2c8);
      pbStack_100 = pbVar18;
      if (uStack_330._2_1_ == '\x01') {
        *puStack_478 = uStack_318;
        lVar16 = *(longlong *)(lStack_3e0 + 0x30);
        uVar24 = *(undefined8 *)(lStack_3e0 + 0x40);
        if (lVar16 == *(longlong *)(lStack_3e0 + 0x20)) {
          uStack_d2 = 0;
          pdb_142d7e830(lStack_460);
        }
        pbVar19 = pbStack_e8;
        lVar25 = *(longlong *)(lStack_3e0 + 0x28);
        *(undefined8 *)(lVar25 + lVar16 * 0x18) = uVar24;
        *(byte **)(lVar25 + 8 + lVar16 * 0x18) = pbStack_e8;
        uVar12 = pbStack_f8._0_4_;
        *(undefined4 *)(lVar25 + 0x10 + lVar16 * 0x18) = pbStack_f8._0_4_;
        *(undefined1 *)(lVar25 + 0x14 + lVar16 * 0x18) = 0;
        *(longlong *)(lStack_3e0 + 0x30) = lVar16 + 1;
        *(longlong *)(lStack_3e0 + 0x40) = *(longlong *)(lStack_3e0 + 0x40) + 1;
        *puStack_178 = uStack_10c;
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x30,8);
        if (pbVar18 == (byte *)0x0) {
          uStack_d2 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        pbVar18[0] = 1;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[3] = 0;
        pbVar18[4] = 0;
        pbVar18[5] = 0;
        pbVar18[6] = 0;
        pbVar18[7] = 0;
        pbVar18[8] = 1;
        pbVar18[9] = 0;
        pbVar18[10] = 0;
        pbVar18[0xb] = 0;
        pbVar18[0xc] = 0;
        pbVar18[0xd] = 0;
        pbVar18[0xe] = 0;
        pbVar18[0xf] = 0;
        pbVar18[0x18] = 0xb;
        *(byte **)(pbVar18 + 0x20) = pbVar19;
        *(undefined4 *)(pbVar18 + 0x28) = uVar12;
        *(undefined4 *)(pbVar18 + 0x2c) = uVar12;
        fStack_2c0 = SUB84(pbVar18,0);
        uStack_2bc = (undefined4)((ulonglong)pbVar18 >> 0x20);
        uStack_2c8 = 9;
        uStack_2c1 = 0;
        uStack_d2 = 0;
        pdb_140ae5180(uStack_170,&uStack_2c8,&UNK_143060b70);
        pbVar19 = pbStack_100;
      }
      else if (uStack_330._1_1_ == '\0') {
        *puStack_468 = uStack_310;
        lVar16 = *(longlong *)(lStack_3d8 + 0x30);
        uVar24 = *(undefined8 *)(lStack_3d8 + 0x40);
        if (lVar16 == *(longlong *)(lStack_3d8 + 0x20)) {
          uStack_d2 = 0;
          pdb_142d7e830(lStack_458);
        }
        pbVar19 = pbStack_e8;
        lVar25 = *(longlong *)(lStack_3d8 + 0x28);
        *(undefined8 *)(lVar25 + lVar16 * 0x18) = uVar24;
        *(byte **)(lVar25 + 8 + lVar16 * 0x18) = pbStack_e8;
        uVar12 = pbStack_f8._0_4_;
        *(undefined4 *)(lVar25 + 0x10 + lVar16 * 0x18) = pbStack_f8._0_4_;
        *(undefined1 *)(lVar25 + 0x14 + lVar16 * 0x18) = 0;
        *(longlong *)(lStack_3d8 + 0x30) = lVar16 + 1;
        *(longlong *)(lStack_3d8 + 0x40) = *(longlong *)(lStack_3d8 + 0x40) + 1;
        *puStack_178 = uStack_10c;
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x30,8);
        if (pbVar18 == (byte *)0x0) {
          uStack_d2 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        pbVar18[0] = 1;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[3] = 0;
        pbVar18[4] = 0;
        pbVar18[5] = 0;
        pbVar18[6] = 0;
        pbVar18[7] = 0;
        pbVar18[8] = 1;
        pbVar18[9] = 0;
        pbVar18[10] = 0;
        pbVar18[0xb] = 0;
        pbVar18[0xc] = 0;
        pbVar18[0xd] = 0;
        pbVar18[0xe] = 0;
        pbVar18[0xf] = 0;
        pbVar18[0x18] = 3;
        *(byte **)(pbVar18 + 0x20) = pbVar19;
        *(undefined4 *)(pbVar18 + 0x28) = uVar12;
        *(undefined4 *)(pbVar18 + 0x2c) = uVar12;
        fStack_2c0 = SUB84(pbVar18,0);
        uStack_2bc = (undefined4)((ulonglong)pbVar18 >> 0x20);
        uStack_2c8 = 9;
        uStack_2c1 = 0;
        uStack_d2 = 0;
        pdb_140ae5180(uStack_170,&uStack_2c8,&UNK_143060b40);
        pbVar19 = pbStack_100;
      }
      else {
        *puStack_470 = uStack_314;
        lVar16 = *(longlong *)(lStack_2f8 + 0x30);
        uVar24 = *(undefined8 *)(lStack_2f8 + 0x40);
        if (lVar16 == *(longlong *)(lStack_2f8 + 0x20)) {
          uStack_d2 = 0;
          pdb_142d7e830(lStack_450);
        }
        pbVar19 = pbStack_e8;
        lVar25 = *(longlong *)(lStack_2f8 + 0x28);
        *(undefined8 *)(lVar25 + lVar16 * 0x18) = uVar24;
        *(byte **)(lVar25 + 8 + lVar16 * 0x18) = pbStack_e8;
        uVar12 = pbStack_f8._0_4_;
        *(undefined4 *)(lVar25 + 0x10 + lVar16 * 0x18) = pbStack_f8._0_4_;
        *(undefined1 *)(lVar25 + 0x14 + lVar16 * 0x18) = 0;
        *(longlong *)(lStack_2f8 + 0x30) = lVar16 + 1;
        *(longlong *)(lStack_2f8 + 0x40) = *(longlong *)(lStack_2f8 + 0x40) + 1;
        *puStack_178 = uStack_10c;
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x30,8);
        if (pbVar18 == (byte *)0x0) {
          uStack_d2 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        pbVar18[0] = 1;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[3] = 0;
        pbVar18[4] = 0;
        pbVar18[5] = 0;
        pbVar18[6] = 0;
        pbVar18[7] = 0;
        pbVar18[8] = 1;
        pbVar18[9] = 0;
        pbVar18[10] = 0;
        pbVar18[0xb] = 0;
        pbVar18[0xc] = 0;
        pbVar18[0xd] = 0;
        pbVar18[0xe] = 0;
        pbVar18[0xf] = 0;
        pbVar18[0x18] = 4;
        *(byte **)(pbVar18 + 0x20) = pbVar19;
        *(undefined4 *)(pbVar18 + 0x28) = uVar12;
        *(undefined4 *)(pbVar18 + 0x2c) = uVar12;
        fStack_2c0 = SUB84(pbVar18,0);
        uStack_2bc = (undefined4)((ulonglong)pbVar18 >> 0x20);
        uStack_2c8 = 9;
        uStack_2c1 = 0;
        uStack_d2 = 0;
        pdb_140ae5180(uStack_170,&uStack_2c8,&UNK_143060b58);
        pbVar19 = pbStack_100;
      }
    }
  }
  *puStack_168 = uStack_108;
  uStack_d3 = 1;
  pdb_140c34f30(plStack_120,lStack_e0,pbStack_190,lStack_188);
  *puStack_148 = uStack_104;
  uStack_d3 = 1;
  pdb_140aa2f60(uStack_150,0,lStack_e0,uStack_140,uStack_180,&UNK_143060af0,0xc);
  *puStack_148 = uStack_104;
  uStack_d3 = 1;
  pdb_140c419b0(uStack_150,lStack_e0,uStack_140);
  *puStack_438 = uStack_30c;
  uStack_2b8._0_4_ = (undefined4)lStack_188;
  uStack_2b8._4_4_ = (undefined4)((ulonglong)lStack_188 >> 0x20);
  uStack_2c8 = (undefined7)lStack_198;
  uStack_2c1 = (undefined1)((ulonglong)lStack_198 >> 0x38);
  fStack_2c0 = SUB84(pbStack_190,0);
  uStack_2bc = (undefined4)((ulonglong)pbStack_190 >> 0x20);
  uStack_d3 = 0;
  pdb_140c3bb80(uStack_140,lStack_e0,&uStack_2c8,&pbStack_398);
  *puStack_168 = uStack_108;
  *puStack_178 = uStack_10c;
  uStack_d3 = 0;
  pdb_140c35e90(plStack_120,plStack_128,uStack_170,plStack_2e0,plStack_2d8,plStack_2e8);
  *puStack_430 = uStack_308;
  lVar16 = *(longlong *)(lStack_3d0 + 0x30);
  uVar24 = *(undefined8 *)(lStack_3d0 + 0x40);
  if (lVar16 == *(longlong *)(lStack_3d0 + 0x20)) {
    uStack_d3 = 0;
    pdb_142d7e6e0(lStack_420);
  }
  lVar32 = *(longlong *)(lStack_3d0 + 0x28);
  lVar25 = lVar16 * 0x20;
  *(undefined1 *)(lVar32 + lVar25) = 0;
  *(undefined4 *)(lVar32 + 8 + lVar25) = 0;
  *(undefined8 *)(lVar32 + 0x18 + lVar25) = uVar24;
  *(longlong *)(lStack_3d0 + 0x30) = lVar16 + 1;
  *(longlong *)(lStack_3d0 + 0x40) = *(longlong *)(lStack_3d0 + 0x40) + 1;
  if (((*(char *)(lStack_2d0 + 0x18) == '\0') || (*(byte ***)(lStack_2d0 + 0x38) != ppbStack_138))
     || (*(int *)(lStack_2d0 + 0x28) == 2)) {
    uStack_d3 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143060b00);
  }
  uStack_2b8._0_3_ = (undefined3)((uint)*(undefined4 *)(lStack_2d0 + 0x54) >> 8);
  uVar24 = *(undefined8 *)(lStack_2d0 + 0x4c);
  uStack_2c1 = (undefined1)uVar24;
  fStack_2c0 = (float)((ulonglong)uVar24 >> 8);
  uStack_2bc._0_3_ = (undefined3)((ulonglong)uVar24 >> 0x28);
  uStack_2bc = CONCAT13((char)*(undefined4 *)(lStack_2d0 + 0x54),(undefined3)uStack_2bc);
  *puStack_428 = uStack_304;
  lVar16 = *(longlong *)(lStack_3c8 + 0x30);
  uVar24 = *(undefined8 *)(lStack_3c8 + 0x40);
  if (lVar16 == *(longlong *)(lStack_3c8 + 0x20)) {
    uStack_d3 = 0;
    pdb_142d7ede0(lStack_418);
  }
  lVar32 = *(longlong *)(lStack_3c8 + 0x28);
  *(undefined8 *)(lVar32 + lVar16 * 0x28) = uVar24;
  *(byte *)(lVar32 + 8 + lVar16 * 0x28) = (byte)pbStack_118 | 0x1a;
  puVar22 = (undefined8 *)(lVar32 + 9 + lVar16 * 0x28);
  *puVar22 = CONCAT17(uStack_2c1,uStack_2c8);
  puVar22[1] = CONCAT44(uStack_2bc,fStack_2c0);
  *(uint *)(lVar32 + 0x18 + lVar16 * 0x28) = CONCAT31((undefined3)uStack_2b8,uStack_2bc._3_1_);
  *(undefined4 *)(lVar32 + 0x1c + lVar16 * 0x28) = 0x3f800000;
  *(undefined1 *)(lVar32 + 0x20 + lVar16 * 0x28) = 0;
  *(longlong *)(lStack_3c8 + 0x30) = lVar16 + 1;
  *(longlong *)(lStack_3c8 + 0x40) = *(longlong *)(lStack_3c8 + 0x40) + 1;
  if (pbStack_398 != (byte *)0x0) {
    pub_1406abac0((byte *)pcStack_390,(longlong)pbStack_398 << 3,4);
  }
  pcVar29 = pcStack_2f0;
  plVar21 = plStack_3f8;
  pcVar34 = pcStack_160;
  if (pcStack_380 != (code *)0x0) {
    pub_1406abac0(pbStack_378,(longlong)pcStack_380 << 2,4);
    pcVar29 = pcStack_2f0;
    plVar21 = plStack_3f8;
    pcVar34 = pcStack_160;
  }
  goto LAB_140ba716e;
}

