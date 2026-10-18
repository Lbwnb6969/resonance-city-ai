// VA 0x1407f6500, PDB extent 11819 bytes
// system_wall_constructor::construct_platform_stairs::construct_platform_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::construct_platform_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
   Extent: 11819 */

void pdb_1407f6500(longlong *param_1,undefined1 (*param_2) [16],longlong *param_3,
                  byte *******param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                  undefined8 *param_8,undefined8 *param_9,longlong *param_10)

{
  byte *****pppppbVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  byte ******ppppppbVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  byte ****ppppbVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  char cVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 uVar23;
  byte ******ppppppbVar24;
  int *piVar25;
  int iVar26;
  byte *****pppppbVar27;
  undefined1 (*pauVar28) [16];
  longlong lVar29;
  byte *******pppppppbVar30;
  byte ******ppppppbVar31;
  undefined8 *puVar32;
  byte *****pppppbVar33;
  undefined1 (*pauVar34) [16];
  byte *******pppppppbVar35;
  byte *pbVar36;
  undefined *puVar37;
  undefined *puVar38;
  ulonglong uVar39;
  ushort uVar40;
  longlong lVar41;
  longlong *plVar42;
  undefined8 *puVar43;
  byte *******pppppppbVar44;
  ulonglong uVar45;
  undefined8 *puVar46;
  byte *pbVar47;
  bool bVar48;
  byte bVar49;
  char extraout_XMM0_Ba;
  float fVar50;
  float fVar51;
  float fVar52;
  char extraout_XMM0_Bd;
  undefined4 uVar53;
  char extraout_XMM0_Bb;
  char extraout_XMM0_Bc;
  char extraout_XMM0_Be;
  char extraout_XMM0_Bf;
  char extraout_XMM0_Bg;
  char extraout_XMM0_Bh;
  char extraout_XMM0_Bi;
  char extraout_XMM0_Bj;
  char extraout_XMM0_Bk;
  char extraout_XMM0_Bl;
  char extraout_XMM0_Bm;
  char extraout_XMM0_Bn;
  char extraout_XMM0_Bo;
  undefined1 auVar54 [16];
  char extraout_XMM0_Bp;
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
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char unaff_XMM8_Bc;
  char unaff_XMM8_Bd;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  byte ******ppppppbStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined1 auStack_3f8 [12];
  longlong lStack_3e0;
  byte *pbStack_3d8;
  longlong lStack_3d0;
  byte ******ppppppbStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  byte *****pppppbStack_3b0;
  undefined4 uStack_3a8;
  byte *******pppppppbStack_398;
  longlong *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  byte *******pppppppbStack_378;
  longlong lStack_370;
  byte ******ppppppbStack_368;
  byte *******pppppppbStack_360;
  byte *pbStack_358;
  byte *******pppppppbStack_350;
  undefined8 uStack_348;
  byte *******pppppppbStack_340;
  byte *******pppppppbStack_338;
  byte *******pppppppbStack_330;
  byte *******pppppppbStack_328;
  byte *******pppppppbStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  longlong lStack_2c0;
  byte *pbStack_2b8;
  longlong *plStack_2b0;
  byte ******ppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  byte *******pppppppbStack_298;
  byte *******pppppppbStack_290;
  byte *******pppppppbStack_288;
  byte *******pppppppbStack_280;
  byte *******pppppppbStack_278;
  byte *pbStack_270;
  longlong *plStack_268;
  byte *******pppppppbStack_260;
  longlong lStack_258;
  undefined8 uStack_250;
  byte *****pppppbStack_248;
  byte *******pppppppbStack_240;
  byte *pbStack_238;
  byte *******pppppppbStack_230;
  byte *******pppppppbStack_228;
  byte ******ppppppbStack_220;
  undefined8 uStack_218;
  byte *******pppppppbStack_210;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_200;
  undefined4 *puStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  byte *******pppppppbStack_1e0;
  longlong lStack_1d8;
  ulonglong uStack_1d0;
  byte *pbStack_1c8;
  byte *******pppppppbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  undefined8 uStack_188;
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
  longlong *plStack_120;
  byte *******pppppppbStack_118;
  undefined4 uStack_10c;
  byte *******pppppppbStack_108;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  longlong *plStack_e0;
  char cStack_d5;
  char cStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pauVar28 = param_2;
  plStack_390 = param_1;
  pppppppbStack_260 = param_4;
  cVar17 = pdb_140e94b40();
  cVar18 = '\0';
  if (cVar17 == '\0') goto LAB_1407f6711;
  uVar45 = 0x4d;
  lVar20 = pdb_1407faaa0(0x4d);
  puVar32 = (undefined8 *)&UNK_143006680;
  if (lVar20 == 1) {
    if ((undefined1 (*) [16])0x4d < pauVar28) {
LAB_1407f817d:
      pdb_142dc8070(&UNK_143006680,0x4d,0);
LAB_1407f819d:
      pdb_142dc8070(&UNK_143006680,0x4d);
LAB_1407f81c1:
      pdb_142dc7e2a(4,pppppppbStack_1c0);
LAB_1407f81d3:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar21 = pdb_1407faaa0(pauVar28);
    if ((uVar21 & 1) != 0) {
      if ((undefined1 *)0x4d < *pauVar28 + 2) goto LAB_1407f819d;
      uVar45 = 0x4b - (longlong)pauVar28;
      puVar32 = (undefined8 *)(pauVar28[0x14300668] + 2);
    }
  }
  puVar37 = &UNK_1430064cc;
  puVar46 = (undefined8 *)&UNK_143006488;
  do {
    bVar49 = puVar37[-1];
    uVar19 = (uint)(char)bVar49;
    plStack_120 = param_3;
    if ((char)bVar49 < '\0') {
      bVar5 = puVar37[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar37[-3];
        if ((char)bVar6 < -0x40) {
          pbVar36 = puVar37 + -4;
          puVar37 = puVar37 + -4;
          uVar19 = bVar6 & 0x3f | (*pbVar36 & 7) << 6;
        }
        else {
          puVar37 = puVar37 + -3;
          uVar19 = bVar6 & 0xf;
        }
        uVar19 = bVar5 & 0x3f | uVar19 << 6;
      }
      else {
        puVar37 = puVar37 + -2;
        uVar19 = bVar5 & 0x1f;
      }
      uVar19 = (uint)(bVar49 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_1407f6674;
LAB_1407f6686:
      puVar38 = puVar37 + -0x143006487;
      if ((undefined *)0x44 < puVar38) {
        pdb_142dc8070(&UNK_143006488,0x44,puVar38,0x44,&UNK_143006728);
        goto LAB_1407f817d;
      }
      plVar42 = (longlong *)(0x44 - (longlong)puVar38);
      puVar46 = (undefined8 *)(puVar37 + 1);
      goto LAB_1407f66a9;
    }
    puVar37 = puVar37 + -1;
    if (uVar19 == 0x5c) goto LAB_1407f6686;
LAB_1407f6674:
    if (uVar19 == 0x2f) goto LAB_1407f6686;
  } while (puVar37 != &UNK_143006488);
  plVar42 = (longlong *)0x44;
LAB_1407f66a9:
  plVar22 = (longlong *)pdb_140e97000();
  cVar18 = cVar17;
  if ((char)plVar22[0xd] != '\x01') goto LAB_1407f80bb;
  do {
    if (*plVar22 != 0) goto LAB_1407f80af;
    *plVar22 = -1;
    plStack_e0 = plVar22;
    uStack_250 = pdb_140e94f10(plVar22 + 1,puVar32,uVar45,puVar46,plVar42,1,0);
    *plStack_e0 = *plStack_e0 + 1;
    param_3 = plStack_120;
LAB_1407f6711:
    cStack_d4 = cVar18;
    puVar32 = (undefined8 *)pdb_1413e4400(*param_5,&UNK_1433056c0);
    if ((puVar32 == (undefined8 *)0x0) ||
       (lVar20 = (**(code **)(puVar32[1] + 0x18))(*puVar32), lVar20 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430064d0);
    }
    cStack_d5 = '\0';
    puStack_f8 = *(undefined4 **)param_2[1];
    plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,*(undefined4 *)(param_2[1] + 0xc));
    *puStack_f8 = *(undefined4 *)(param_2[1] + 0xc);
    pppppppbVar44 = *(byte ********)*param_2;
    uStack_1b8 = (byte *******)pppppppbVar44[1];
    uStack_1a0 = (byte *******)pppppppbVar44[2];
    pppppppbVar44[2] = (byte ******)0x0;
    uStack_1b0 = uStack_1b8 + (longlong)uStack_1a0;
    pppppppbStack_198 = (byte *******)0x0;
    uStack_1a8 = pppppppbVar44;
    pdb_1413ec440(&lStack_3e0,&uStack_1b8);
    uVar16 = _UNK_142e4e65c;
    uVar15 = _UNK_142e4e658;
    uVar14 = _UNK_142e4e654;
    uVar53 = _DAT_142e4e650;
    fVar13 = _DAT_142e3788c;
    lStack_2c0 = lStack_3e0;
    pbStack_270 = pbStack_3d8 + lStack_3d0 * 8;
    plStack_120 = (longlong *)*param_3;
    uStack_fc = *(undefined4 *)((longlong)param_9 + 0x1c);
    uStack_1e8 = *param_9;
    puStack_1f0 = (undefined4 *)param_9[2];
    plVar42 = (longlong *)*param_6;
    uStack_388 = *param_7;
    uStack_380 = *param_8;
    uStack_10c = *(undefined4 *)((longlong)param_10 + 0x1c);
    lVar7 = *param_10;
    puStack_1f8 = (undefined4 *)param_10[2];
    iVar26 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                              CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                    CONCAT13(unaff_XMM8_Bd,
                             CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
    unaff_XMM8_Ba = (char)iVar26;
    unaff_XMM8_Bb = (char)((uint)iVar26 >> 8);
    unaff_XMM8_Bc = (char)((uint)iVar26 >> 0x10);
    unaff_XMM8_Bd = (char)((uint)iVar26 >> 0x18);
    iVar26 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                              CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                    CONCAT13(unaff_XMM8_Bh,
                             CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
    unaff_XMM8_Be = (char)iVar26;
    unaff_XMM8_Bf = (char)((uint)iVar26 >> 8);
    unaff_XMM8_Bg = (char)((uint)iVar26 >> 0x10);
    unaff_XMM8_Bh = (char)((uint)iVar26 >> 0x18);
    iVar26 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                              CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                    CONCAT13(unaff_XMM8_Bl,
                             CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
    unaff_XMM8_Bi = (char)iVar26;
    unaff_XMM8_Bj = (char)((uint)iVar26 >> 8);
    unaff_XMM8_Bk = (char)((uint)iVar26 >> 0x10);
    unaff_XMM8_Bl = (char)((uint)iVar26 >> 0x18);
    iVar26 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                              CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                    CONCAT13(unaff_XMM8_Bp,
                             CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
    unaff_XMM8_Bm = (char)iVar26;
    unaff_XMM8_Bn = (char)((uint)iVar26 >> 8);
    unaff_XMM8_Bo = (char)((uint)iVar26 >> 0x10);
    unaff_XMM8_Bp = (char)((uint)iVar26 >> 0x18);
    pppppppbStack_208 = pppppppbVar44 + 9;
    plStack_268 = plStack_120 + 4;
    pppppppbStack_398 = pppppppbVar44 + 7;
    pppppppbStack_1e0 = pppppppbVar44 + 0xf;
    pppppppbStack_200 = pppppppbVar44 + 0xd;
    pppppppbStack_378 = (byte *******)(lVar20 + 0x78);
    lStack_370 = lVar20 + 0x58;
    pbStack_2b8 = pbStack_3d8;
    pbVar36 = pbStack_3d8;
    lStack_258 = lVar20;
    pppppppbStack_108 = pppppppbVar44;
LAB_1407f6935:
    puVar46 = &uStack_1b8;
    if (pbVar36 != pbStack_270) {
      pppppppbVar44 = *(byte ********)pbVar36;
      *puStack_f8 = plStack_e0._0_4_;
      pppppppbStack_210 = pppppppbVar44;
      uVar23 = pdb_1400af0a0(pppppppbStack_200,&pppppppbStack_210);
      pdb_140269750(puVar46,pppppppbStack_208,uVar23,&pppppppbStack_210);
      if (!SBORROW8(0,(longlong)uStack_1b0)) {
        uStack_348 = uStack_1b0;
        pppppppbStack_340 = uStack_1a8;
        pppppppbStack_338 = uStack_1a0;
        if (!SBORROW8(0,(longlong)uStack_1b0)) {
          pdb_14049d240(&uStack_348);
        }
      }
      pbVar36 = pbVar36 + 8;
      if (plStack_120[3] != 0) {
        uVar45 = pdb_1400af0a0(plStack_268,&pppppppbStack_210);
        lVar20 = *plStack_120;
        bVar49 = (byte)(uVar45 >> 0x39);
        auVar54 = ZEXT216(CONCAT11(bVar49,bVar49));
        auVar54 = pshuflw(auVar54,auVar54,0);
        lVar29 = 0;
        while( true ) {
          uVar45 = uVar45 & plStack_120[1];
          auVar64 = *(undefined1 (*) [16])(lVar20 + uVar45);
          auVar60[0] = -(auVar64[0] == auVar54[0]);
          auVar60[1] = -(auVar64[1] == auVar54[1]);
          auVar60[2] = -(auVar64[2] == auVar54[2]);
          auVar60[3] = -(auVar64[3] == auVar54[3]);
          auVar60[4] = -(auVar64[4] == auVar54[4]);
          auVar60[5] = -(auVar64[5] == auVar54[5]);
          auVar60[6] = -(auVar64[6] == auVar54[6]);
          auVar60[7] = -(auVar64[7] == auVar54[7]);
          auVar60[8] = -(auVar64[8] == auVar54[0]);
          auVar60[9] = -(auVar64[9] == auVar54[1]);
          auVar60[10] = -(auVar64[10] == auVar54[2]);
          auVar60[0xb] = -(auVar64[0xb] == auVar54[3]);
          auVar60[0xc] = -(auVar64[0xc] == auVar54[4]);
          auVar60[0xd] = -(auVar64[0xd] == auVar54[5]);
          auVar60[0xe] = -(auVar64[0xe] == auVar54[6]);
          auVar60[0xf] = -(auVar64[0xf] == auVar54[7]);
          uVar40 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar60[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar40;
          while (uVar40 != 0) {
            uVar10 = 0;
            for (uVar11 = uVar19; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            lVar41 = (uVar10 + uVar45 & plStack_120[1]) * -0x2b0;
            if (pppppppbVar44 == *(byte ********)(lVar20 + -0x2b0 + lVar41)) {
              if (pppppppbStack_108[6] == (byte ******)0x0) goto LAB_1407f6c30;
              lStack_1d8 = lVar20 + lVar41;
              pppppppbVar30 = (byte *******)(lStack_1d8 + -0x2a8);
              uVar45 = pdb_1400af0a0(pppppppbStack_398,&pppppppbStack_210);
              ppppppbVar24 = pppppppbStack_108[3];
              bVar49 = (byte)(uVar45 >> 0x39);
              auVar54 = ZEXT216(CONCAT11(bVar49,bVar49));
              auVar54 = pshuflw(auVar54,auVar54,0);
              lVar20 = 0;
              goto LAB_1407f6bbf;
            }
            uVar40 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar40);
          }
          auVar55[0] = -(auVar64[0] == unaff_XMM8_Ba);
          auVar55[1] = -(auVar64[1] == unaff_XMM8_Bb);
          auVar55[2] = -(auVar64[2] == unaff_XMM8_Bc);
          auVar55[3] = -(auVar64[3] == unaff_XMM8_Bd);
          auVar55[4] = -(auVar64[4] == unaff_XMM8_Be);
          auVar55[5] = -(auVar64[5] == unaff_XMM8_Bf);
          auVar55[6] = -(auVar64[6] == unaff_XMM8_Bg);
          auVar55[7] = -(auVar64[7] == unaff_XMM8_Bh);
          auVar55[8] = -(auVar64[8] == unaff_XMM8_Bi);
          auVar55[9] = -(auVar64[9] == unaff_XMM8_Bj);
          auVar55[10] = -(auVar64[10] == unaff_XMM8_Bk);
          auVar55[0xb] = -(auVar64[0xb] == unaff_XMM8_Bl);
          auVar55[0xc] = -(auVar64[0xc] == unaff_XMM8_Bm);
          auVar55[0xd] = -(auVar64[0xd] == unaff_XMM8_Bn);
          auVar55[0xe] = -(auVar64[0xe] == unaff_XMM8_Bo);
          auVar55[0xf] = -(auVar64[0xf] == unaff_XMM8_Bp);
          if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x2f,0) & 1) != 0) || (SUB161(auVar55 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
          uVar45 = uVar45 + lVar29 + 0x10;
          lVar29 = lVar29 + 0x10;
        }
      }
      *puStack_1f0 = uStack_fc;
      *puStack_f8 = plStack_e0._0_4_;
      pdb_14140a7d0(puVar46,uStack_1e8,pppppppbStack_1e0,pppppppbVar44);
      if ((char)pppppppbStack_198 != '\x11') {
        LOCK();
        *uStack_180 = (byte ******)((longlong)*uStack_180 + -1);
        UNLOCK();
        if (*uStack_180 == (byte ******)0x0) {
          pdb_140c7b7a0(&uStack_180);
        }
      }
      uStack_1a8 = (byte *******)0x0;
      uStack_1a0 = (byte *******)0x0;
      *puStack_1f8 = uStack_10c;
      uStack_180 = *(byte ********)(lVar7 + 0x40);
      uStack_1b8 = (byte *******)0x0;
      uStack_1b0 = (byte *******)0x4;
      pppppppbStack_198 = (byte *******)0x4;
      pppppppbStack_190 = (byte *******)0x0;
      lVar20 = *(longlong *)(lVar7 + 0x30);
      uStack_188 = pppppppbVar44;
      if (lVar20 == *(longlong *)(lVar7 + 0x20)) {
        pdb_142d7ee50(lVar7 + 0x20);
      }
      goto LAB_1407f68e0;
    }
    if (lStack_2c0 != 0) {
      pub_1406abac0(pbStack_2b8,lStack_2c0 << 3,8);
    }
    fVar50 = _DAT_142e3798c;
    fVar13 = _DAT_142e36f50;
    param_2 = (undefined1 (*) [16])pppppppbVar44[9];
    pppppppbVar44 = (byte *******)pppppppbVar44[0xc];
    auVar54 = *param_2;
    pauVar28 = param_2 + 1;
    uVar45 = (ulonglong)
             ~(uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar54[0xf] >> 7) << 0xf);
    pppppppbStack_108 =
         (byte *******)
         CONCAT44(pppppppbStack_108._4_4_,*(undefined4 *)((longlong)plStack_390 + 0x1c));
    pppppppbStack_208 = (byte *******)*plStack_390;
    pbStack_270 = (byte *)plStack_390[2];
    puVar32 = &uStack_1b8;
LAB_1407f7eb3:
    while (pppppppbVar44 != (byte *******)0x0) {
      if ((short)uVar45 == 0) {
        do {
          auVar54 = *pauVar28;
          param_2 = param_2 + -0x20;
          pauVar28 = pauVar28 + 1;
          uVar19 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
          uVar45 = (ulonglong)uVar19;
        } while (uVar19 == 0);
      }
      uVar10 = (uint)uVar45;
      iVar26 = 0;
      for (uVar19 = uVar10; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
        iVar26 = iVar26 + 1;
      }
      uVar45 = (ulonglong)(uVar10 - 1 & uVar10);
      puVar46 = (undefined8 *)((longlong)param_2 - (ulonglong)(uint)(iVar26 << 5));
      pppppppbVar44 = (byte *******)((longlong)pppppppbVar44 + -1);
      puStack_2c8 = (undefined4 *)puVar46[-4];
      puStack_f8 = puStack_2c8;
      if (plStack_120[3] != 0) {
        uVar21 = pdb_1400af0a0(plStack_268,&puStack_2c8);
        plStack_e0 = (longlong *)*plStack_120;
        plVar42 = (longlong *)plStack_120[1];
        bVar49 = (byte)(uVar21 >> 0x39);
        auVar54 = ZEXT216(CONCAT11(bVar49,bVar49));
        auVar54 = pshuflw(auVar54,auVar54,0);
        lVar20 = 0;
        while( true ) {
          uVar21 = uVar21 & (ulonglong)plVar42;
          auVar64 = *(undefined1 (*) [16])((longlong)plStack_e0 + uVar21);
          auVar63[0] = -(auVar64[0] == auVar54[0]);
          auVar63[1] = -(auVar64[1] == auVar54[1]);
          auVar63[2] = -(auVar64[2] == auVar54[2]);
          auVar63[3] = -(auVar64[3] == auVar54[3]);
          auVar63[4] = -(auVar64[4] == auVar54[4]);
          auVar63[5] = -(auVar64[5] == auVar54[5]);
          auVar63[6] = -(auVar64[6] == auVar54[6]);
          auVar63[7] = -(auVar64[7] == auVar54[7]);
          auVar63[8] = -(auVar64[8] == auVar54[0]);
          auVar63[9] = -(auVar64[9] == auVar54[1]);
          auVar63[10] = -(auVar64[10] == auVar54[2]);
          auVar63[0xb] = -(auVar64[0xb] == auVar54[3]);
          auVar63[0xc] = -(auVar64[0xc] == auVar54[4]);
          auVar63[0xd] = -(auVar64[0xd] == auVar54[5]);
          auVar63[0xe] = -(auVar64[0xe] == auVar54[6]);
          auVar63[0xf] = -(auVar64[0xf] == auVar54[7]);
          uVar40 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar63[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar40;
          while (uVar40 != 0) {
            uVar10 = 0;
            for (uVar11 = uVar19; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            if (puStack_f8 ==
                (undefined4 *)plStack_e0[(uVar10 + uVar21 & (ulonglong)plVar42) * -0x56 + -0x56]) {
              uVar21 = pdb_1400af0a0(plStack_268,&puStack_2c8);
              bVar49 = (byte)(uVar21 >> 0x39);
              auVar54 = ZEXT216(CONCAT11(bVar49,bVar49));
              auVar54 = pshuflw(auVar54,auVar54,0);
              lVar20 = 0;
              goto LAB_1407f7c3e;
            }
            uVar40 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar40);
          }
          auVar58[0] = -(auVar64[0] == -1);
          auVar58[1] = -(auVar64[1] == -1);
          auVar58[2] = -(auVar64[2] == -1);
          auVar58[3] = -(auVar64[3] == -1);
          auVar58[4] = -(auVar64[4] == -1);
          auVar58[5] = -(auVar64[5] == -1);
          auVar58[6] = -(auVar64[6] == -1);
          auVar58[7] = -(auVar64[7] == -1);
          auVar58[8] = -(auVar64[8] == -1);
          auVar58[9] = -(auVar64[9] == -1);
          auVar58[10] = -(auVar64[10] == -1);
          auVar58[0xb] = -(auVar64[0xb] == -1);
          auVar58[0xc] = -(auVar64[0xc] == -1);
          auVar58[0xd] = -(auVar64[0xd] == -1);
          auVar58[0xe] = -(auVar64[0xe] == -1);
          auVar58[0xf] = -(auVar64[0xf] == -1);
          if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x2f,0) & 1) != 0) || (SUB161(auVar58 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
          uVar21 = uVar21 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        }
      }
    }
    if (cStack_d5 != '\0') {
      pdb_140a43130(&UNK_1430064e8,0x18);
    }
    if (cStack_d4 == '\0') {
      return;
    }
    plVar22 = (longlong *)pdb_140e97000();
    cVar18 = '\0';
    if ((char)plVar22[0xd] != '\x01') goto LAB_1407f80da;
    while( true ) {
      if (*plVar22 == 0) {
        *plVar22 = -1;
        plStack_e0 = plVar22;
        pdb_140e95370(plVar22 + 1);
        *plStack_e0 = *plStack_e0 + 1;
        return;
      }
LAB_1407f80af:
      plVar22 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_1407f80bb:
      plVar22 = (longlong *)pdb_142dd9610(plVar22,0);
      if (plVar22 != (longlong *)0x0) break;
      do {
        plVar22 = (longlong *)pdb_142dc7890(&UNK_143307940);
LAB_1407f80da:
        plVar22 = (longlong *)pdb_142dd9610(plVar22,0);
      } while (plVar22 == (longlong *)0x0);
    }
  } while( true );
LAB_1407f6bbf:
  uVar45 = uVar45 & (ulonglong)pppppppbStack_108[4];
  auVar64 = *(undefined1 (*) [16])((longlong)ppppppbVar24 + uVar45);
  auVar61[0] = -(auVar64[0] == auVar54[0]);
  auVar61[1] = -(auVar64[1] == auVar54[1]);
  auVar61[2] = -(auVar64[2] == auVar54[2]);
  auVar61[3] = -(auVar64[3] == auVar54[3]);
  auVar61[4] = -(auVar64[4] == auVar54[4]);
  auVar61[5] = -(auVar64[5] == auVar54[5]);
  auVar61[6] = -(auVar64[6] == auVar54[6]);
  auVar61[7] = -(auVar64[7] == auVar54[7]);
  auVar61[8] = -(auVar64[8] == auVar54[0]);
  auVar61[9] = -(auVar64[9] == auVar54[1]);
  auVar61[10] = -(auVar64[10] == auVar54[2]);
  auVar61[0xb] = -(auVar64[0xb] == auVar54[3]);
  auVar61[0xc] = -(auVar64[0xc] == auVar54[4]);
  auVar61[0xd] = -(auVar64[0xd] == auVar54[5]);
  auVar61[0xe] = -(auVar64[0xe] == auVar54[6]);
  auVar61[0xf] = -(auVar64[0xf] == auVar54[7]);
  uVar40 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar40;
  while (uVar40 != 0) {
    uVar10 = 0;
    for (uVar11 = uVar19; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar21 = uVar10 + uVar45 & (ulonglong)pppppppbStack_108[4];
    if (pppppppbVar44 == (byte *******)ppppppbVar24[uVar21 * -4 + -4]) {
      if (1 < *(uint *)(lStack_1d8 + -0x50)) {
        *puStack_1f0 = uStack_fc;
        *puStack_f8 = plStack_e0._0_4_;
        pdb_14140a7d0(puVar46,uStack_1e8,pppppppbStack_1e0,pppppppbVar44);
        if ((char)pppppppbStack_198 != '\x11') {
          LOCK();
          *uStack_180 = (byte ******)((longlong)*uStack_180 + -1);
          UNLOCK();
          if (*uStack_180 == (byte ******)0x0) {
            pdb_140c7b7a0(&uStack_180);
          }
        }
        uStack_1a8 = (byte *******)0x0;
        uStack_1a0 = (byte *******)0x0;
        *puStack_1f8 = uStack_10c;
        uStack_180 = *(byte ********)(lVar7 + 0x40);
        uStack_1b8 = (byte *******)0x0;
        uStack_1b0 = (byte *******)0x4;
        pppppppbStack_198 = (byte *******)0x4;
        pppppppbStack_190 = (byte *******)0x0;
        lVar20 = *(longlong *)(lVar7 + 0x30);
        uStack_188 = pppppppbVar44;
        if (lVar20 == *(longlong *)(lVar7 + 0x20)) {
          pdb_142d7ee50(lVar7 + 0x20);
        }
        goto LAB_1407f68e0;
      }
      uStack_408 = *(undefined8 *)(lStack_1d8 + -0x50);
      auStack_3f8 = SUB1612(*(undefined1 (*) [16])(lStack_1d8 + -0x44),4);
      uStack_400 = (undefined4)*(undefined8 *)(lStack_1d8 + -0x48);
      uStack_3fc = (undefined4)((ulonglong)*(undefined8 *)(lStack_1d8 + -0x48) >> 0x20);
      pppppbVar33 = ppppppbVar24[uVar21 * -4 + -1];
      uVar45 = (longlong)pppppbVar33 << 5;
      uStack_1d0 = uVar45;
      if (uVar45 < 0x7ffffffffffffff9 && (ulonglong)pppppbVar33 >> 0x3b == 0) {
        plStack_2b0 = plVar42;
        pppppbStack_248 = pppppbVar33;
        pppppppbStack_118 = pppppppbVar30;
        if (uVar45 == 0) {
          pbStack_1c8 = (byte *)0x8;
          goto LAB_1407f6ec4;
        }
        pppppbVar33 = ppppppbVar24[uVar21 * -4 + -2];
        pdb_14007ee60();
        pbStack_1c8 = pub_1406abab0(uVar45,8);
        uVar23 = 8;
        if (pbStack_1c8 != (byte *)0x0) {
          if (pppppbStack_248 == (byte *****)0x0) goto LAB_1407f6ec4;
          uVar45 = 0;
          pppppbVar27 = pppppbStack_248;
          goto LAB_1407f6e80;
        }
      }
      else {
        uVar23 = 0;
      }
      pdb_142dc7e2a(uVar23,uStack_1d0);
      goto LAB_1407f81d3;
    }
    uVar40 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar40);
  }
  auVar56[0] = -(auVar64[0] == unaff_XMM8_Ba);
  auVar56[1] = -(auVar64[1] == unaff_XMM8_Bb);
  auVar56[2] = -(auVar64[2] == unaff_XMM8_Bc);
  auVar56[3] = -(auVar64[3] == unaff_XMM8_Bd);
  auVar56[4] = -(auVar64[4] == unaff_XMM8_Be);
  auVar56[5] = -(auVar64[5] == unaff_XMM8_Bf);
  auVar56[6] = -(auVar64[6] == unaff_XMM8_Bg);
  auVar56[7] = -(auVar64[7] == unaff_XMM8_Bh);
  auVar56[8] = -(auVar64[8] == unaff_XMM8_Bi);
  auVar56[9] = -(auVar64[9] == unaff_XMM8_Bj);
  auVar56[10] = -(auVar64[10] == unaff_XMM8_Bk);
  auVar56[0xb] = -(auVar64[0xb] == unaff_XMM8_Bl);
  auVar56[0xc] = -(auVar64[0xc] == unaff_XMM8_Bm);
  auVar56[0xd] = -(auVar64[0xd] == unaff_XMM8_Bn);
  auVar56[0xe] = -(auVar64[0xe] == unaff_XMM8_Bo);
  auVar56[0xf] = -(auVar64[0xf] == unaff_XMM8_Bp);
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') goto LAB_1407f6c30;
  uVar45 = uVar45 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_1407f6bbf;
  while( true ) {
    ppppbVar12 = pppppbVar33[1];
    *(byte *****)(pbStack_1c8 + uVar45) = *pppppbVar33;
    *(byte *****)(pbStack_1c8 + uVar45 + 8) = ppppbVar12;
    *(byte *****)(pbStack_1c8 + uVar45 + 0x10) = pppppbVar33[2];
    pppppbVar1 = pppppbVar33 + 3;
    pppppbVar33 = pppppbVar33 + 4;
    *(undefined4 *)(pbStack_1c8 + uVar45 + 0x18) = *(undefined4 *)pppppbVar1;
    uVar45 = uVar45 + 0x20;
    pppppbVar27 = (byte *****)((longlong)pppppbVar27 - 1);
    if (pppppbVar27 == (byte *****)0x0) break;
LAB_1407f6e80:
    if (uStack_1d0 == uVar45) break;
  }
LAB_1407f6ec4:
  *puStack_f8 = plStack_e0._0_4_;
  pppppppbStack_240 = (byte *******)0x0;
  pbStack_238 = (byte *)0x4;
  pppppppbStack_230 = (byte *******)0x0;
  lVar20 = pdb_140c41030(uStack_388,0,pppppppbVar44);
  if (lVar20 != 0) {
    pauVar34 = *(undefined1 (**) [16])(lVar20 + 0x30);
    auVar54 = *pauVar34;
    pauVar28 = pauVar34 + 1;
    uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar54[0xf] >> 7) << 0xf);
    pppppppbVar30 = *(byte ********)(lVar20 + 0x48);
    while (pppppppbVar30 != (byte *******)0x0) {
      if ((short)uVar19 == 0) {
        do {
          auVar54 = *pauVar28;
          pauVar34 = pauVar34 + -0x68;
          pauVar28 = pauVar28 + 1;
          uVar19 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
        } while (uVar19 == 0);
      }
      uVar10 = 0;
      for (uVar11 = uVar19; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      lVar20 = (ulonglong)uVar10 * -0x68;
      pppppppbVar30 = (byte *******)((longlong)pppppppbVar30 - 1);
      if ((*(int *)((longlong)pauVar34 + lVar20 + -0x60) == 7) &&
         (pppppppbStack_f0 = (byte *******)((longlong)pauVar34 + lVar20),
         *(byte *)((longlong)pppppppbStack_f0 + -0x2e) < 2)) {
        ppppppbVar24 = *(byte *******)((longlong)pauVar34 + lVar20 + -0x50);
        uStack_1b8 = (byte *******)ppppppbVar24;
        pppppppbStack_e8 = pppppppbVar30;
        pdb_140dea260(&pppppppbStack_360,&uStack_1b8,pppppppbStack_118);
        fVar50 = (float)pdb_14140ce00(plStack_2b0);
        pppppppbVar30 = pppppppbStack_e8;
        if ((float)((ulonglong)ppppppbVar24 >> 0x20) - fVar50 < fVar13) {
          lVar20 = pdb_140901490((longlong)pppppppbStack_f0 + -0x28,&UNK_1430065d0);
          uVar4 = *(undefined4 *)(lVar20 + 4);
          pppppppbStack_f0 = pppppppbStack_230;
          if (pppppppbStack_230 == pppppppbStack_240) {
            pdb_142d7f010(&pppppppbStack_240);
          }
          *(byte *******)(pbStack_238 + (longlong)pppppppbStack_f0 * 0xc) = ppppppbVar24;
          *(undefined4 *)(pbStack_238 + (longlong)pppppppbStack_f0 * 0xc + 8) = uVar4;
          pppppppbStack_230 = (byte *******)((longlong)pppppppbStack_f0 + 1);
          pppppppbVar30 = pppppppbStack_e8;
        }
      }
    }
  }
  pppppppbStack_2a0 = (byte *******)0x0;
  pppppppbStack_298 = (byte *******)0x8;
  pppppppbStack_290 = (byte *******)0x0;
  pppppppbStack_f0 = (byte *******)(pbStack_1c8 + uStack_1d0);
  for (pbVar47 = pbStack_1c8; (byte *******)pbVar47 != pppppppbStack_f0; pbVar47 = pbVar47 + 0x20) {
    uStack_3a8 = *(undefined4 *)(pbVar47 + 0x18);
    pppppbStack_3b0 = *(byte ******)(pbVar47 + 0x10);
    ppppppbStack_3c8 = *(byte *******)pbVar47;
    uStack_1b0 = (byte *******)CONCAT44(uStack_1b0._4_4_,*(undefined4 *)(pbVar47 + 0x18));
    uStack_1b8 = *(byte ********)(pbVar47 + 0x10);
    pdb_1413f8660(&uStack_348,&uStack_1b8,ppppppbStack_3c8,*(undefined8 *)(pbVar47 + 8));
    pppppppbVar30 = pppppppbStack_118;
    uStack_1b8 = *(byte ********)(lStack_1d8 + -0x218);
    uStack_1b0 = *(byte ********)(lStack_1d8 + -0x210);
    uStack_1a0 = (byte *******)CONCAT44(uStack_1a0._4_4_,pppppppbStack_340._0_4_);
    uStack_1a8 = uStack_348;
    pppppppbStack_198 = pppppppbStack_118;
    pppppppbStack_190 = (byte *******)&pppppppbStack_240;
    pdb_1413e9ae0(&uStack_348,&uStack_1b8);
    uStack_1b8 = (byte *******)&pppppbStack_3b0;
    uStack_1b0 = &ppppppbStack_3c8;
    uStack_1a8 = pppppppbVar30;
    uStack_1a0 = (byte *******)&pppppppbStack_2a0;
    pppppppbStack_198 = pppppppbStack_260;
    pppppppbStack_e8 = pppppppbStack_340;
    pdb_14140d450(pppppppbStack_340,pppppppbStack_338,0,&uStack_1b8);
    if (uStack_348 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_e8,(longlong)uStack_348 << 2,4);
    }
  }
  uStack_1a8 = pppppppbStack_290;
  uStack_1b8 = pppppppbStack_2a0;
  uStack_1b0 = pppppppbStack_298;
  if (pppppppbStack_240 != (byte *******)0x0) {
    pub_1406abac0(pbStack_238,(longlong)pppppppbStack_240 * 0xc,4);
  }
  pdb_141406d30(&uStack_348,pppppppbStack_208,pppppppbVar44,&uStack_1b8);
  if (!SBORROW8(0,(longlong)uStack_348)) {
    pdb_14049d240(&uStack_348);
  }
  pppppppbVar30 = pppppppbStack_108;
  if (pppppppbStack_108[0xc] == (byte ******)0x0) {
LAB_1407f804e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143006548);
  }
  uVar45 = pdb_1400af0a0(pppppppbStack_200,&pppppppbStack_210);
  ppppppbVar24 = pppppppbVar30[9];
  ppppppbVar8 = pppppppbVar30[10];
  bVar49 = (byte)(uVar45 >> 0x39);
  auVar54 = ZEXT216(CONCAT11(bVar49,bVar49));
  auVar54 = pshuflw(auVar54,auVar54,0);
  lVar20 = 0;
  do {
    uVar45 = uVar45 & (ulonglong)ppppppbVar8;
    auVar64 = *(undefined1 (*) [16])((longlong)ppppppbVar24 + uVar45);
    auVar62[0] = -(auVar64[0] == auVar54[0]);
    auVar62[1] = -(auVar64[1] == auVar54[1]);
    auVar62[2] = -(auVar64[2] == auVar54[2]);
    auVar62[3] = -(auVar64[3] == auVar54[3]);
    auVar62[4] = -(auVar64[4] == auVar54[4]);
    auVar62[5] = -(auVar64[5] == auVar54[5]);
    auVar62[6] = -(auVar64[6] == auVar54[6]);
    auVar62[7] = -(auVar64[7] == auVar54[7]);
    auVar62[8] = -(auVar64[8] == auVar54[0]);
    auVar62[9] = -(auVar64[9] == auVar54[1]);
    auVar62[10] = -(auVar64[10] == auVar54[2]);
    auVar62[0xb] = -(auVar64[0xb] == auVar54[3]);
    auVar62[0xc] = -(auVar64[0xc] == auVar54[4]);
    auVar62[0xd] = -(auVar64[0xd] == auVar54[5]);
    auVar62[0xe] = -(auVar64[0xe] == auVar54[6]);
    auVar62[0xf] = -(auVar64[0xf] == auVar54[7]);
    uVar40 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
    uVar19 = (uint)uVar40;
    while (uVar40 != 0) {
      uVar10 = 0;
      for (uVar11 = uVar19; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      pppppppbVar30 = (byte *******)(ppppppbVar24 + (uVar10 + uVar45 & (ulonglong)ppppppbVar8) * -4)
      ;
      if (pppppppbVar44 == (byte *******)pppppppbVar30[-4]) {
        ppppppbVar24 = pppppppbVar30[-1];
        pppppppbStack_e8 = pppppppbVar30;
        if (ppppppbVar24 == (byte ******)0x0) {
          pppppppbVar35 = (byte *******)0x0;
          pppppppbStack_228 = (byte *******)0x0;
          ppppppbVar24 = (byte ******)0x4;
          pppppppbVar30 = (byte *******)(byte *)0x4;
        }
        else {
          pdb_14007ee60();
          pppppppbStack_1c0 = (byte *******)((longlong)ppppppbVar24 * 0x60);
          pppppppbVar30 = (byte *******)pub_1406abab0((ulonglong)((longlong)ppppppbVar24 * 0x60),4);
          pppppppbStack_f0 = pppppppbVar30;
          if (pppppppbVar30 == (byte *******)0x0) goto LAB_1407f81c1;
          ppppppbVar8 = pppppppbStack_e8[-1];
          if ((byte ******)0xe38e38e38e38e3 < ppppppbVar8) {
            uVar23 = 0;
            ppppppbVar31 = ppppppbStack_368;
LAB_1407f8062:
            pdb_142dc7e2a(uVar23,ppppppbVar31);
            goto LAB_1407f81d3;
          }
          pppppppbVar35 = (byte *******)((longlong)ppppppbVar24 << 3);
          if (ppppppbVar8 == (byte ******)0x0) {
            pppppppbStack_228 = (byte *******)0x0;
            ppppppbVar24 = (byte ******)0x4;
          }
          else {
            pdb_14007ee60();
            ppppppbVar24 = (byte ******)pub_1406abab0((ulonglong)((longlong)ppppppbVar8 * 0x90),4);
            uVar23 = 4;
            ppppppbVar31 = (byte ******)((longlong)ppppppbVar8 * 0x90);
            if (ppppppbVar24 == (byte ******)0x0) goto LAB_1407f8062;
            pppppppbStack_228 = (byte *******)((longlong)ppppppbVar8 * 0x24);
            pppppppbVar30 = pppppppbStack_f0;
          }
        }
        pppppppbStack_230 = (byte *******)0x0;
        uStack_218 = 0;
        pppppppbStack_2a0 = (byte *******)0x0;
        pppppppbStack_298 = (byte *******)0x4;
        pppppppbStack_290 = (byte *******)0x0;
        pppppppbStack_288 = (byte *******)0x0;
        pppppppbStack_280 = (byte *******)0x4;
        pppppppbStack_278 = (byte *******)0x0;
        uStack_d1 = 1;
        uStack_d2 = 1;
        ppppppbStack_368 = ppppppbVar24;
        pppppppbStack_240 = pppppppbVar35;
        pbStack_238 = (byte *)pppppppbVar30;
        ppppppbStack_220 = ppppppbVar24;
        cVar18 = pdb_1408ff980(lStack_1d8 + -9);
        plVar42 = plStack_2b0;
        if (cVar18 == '\0') {
          pppppppbVar30 = *(byte ********)(lStack_1d8 + -0x188);
          if (pppppppbVar30 == (byte *******)0x0) {
            uStack_d1 = 1;
            uStack_d2 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143305b70);
          }
          LOCK();
          bVar48 = *(char *)(pppppppbVar30 + 3) == '\0';
          if (bVar48) {
            *(char *)(pppppppbVar30 + 3) = '\x01';
          }
          UNLOCK();
          if (!bVar48) {
            uStack_d1 = 1;
            uStack_d2 = 1;
            pdb_142dbd1a0(pppppppbVar30 + 3,1,1000000000);
          }
          uStack_d1 = 1;
          uStack_d2 = 1;
          pdb_140e9a150(pppppppbVar30 + 3);
          if ((pppppppbVar30[2] == (byte ******)0x0) ||
             (piVar25 = (int *)((longlong)pppppppbVar30[1] + (longlong)pppppppbVar30[2] * 4 + -4),
             piVar25 == (int *)0x0)) {
            pppppppbVar35 = *(byte ********)(lStack_258 + 0x10);
            if (pppppppbVar35 == (byte *******)0x0) {
              uStack_d1 = 1;
              uStack_d2 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143305b88);
            }
            iVar26 = (int)pppppppbVar35 + -1;
          }
          else {
            iVar26 = *piVar25;
            pppppppbVar35 = *(byte ********)(lStack_258 + 0x10);
          }
          uStack_1b8 = *(byte ********)(lStack_258 + 8);
          uStack_1a8 = *(byte ********)(lStack_258 + 0x18);
          uStack_1a0 = *(byte ********)(lStack_258 + 0x20);
          pppppppbStack_190 = *(byte ********)(lStack_258 + 0x28);
          uStack_188 = *(byte ********)(lStack_258 + 0x30);
          uStack_170 = *(undefined8 *)(lStack_258 + 0x38);
          uStack_168 = *(undefined8 *)(lStack_258 + 0x40);
          uStack_160 = CONCAT44(uStack_160._4_4_,iVar26);
          uStack_180 = pppppppbStack_378;
          uStack_178 = lStack_370;
          uStack_348 = (byte *******)&cStack_d5;
          pppppppbStack_340 = (byte *******)&uStack_1b8;
          uStack_1b0 = pppppppbVar35;
          pppppppbStack_198 = pppppppbVar30;
          uVar23 = pdb_141411410(pppppppbStack_118,&uStack_408,pppppppbStack_e8[-2],
                                 pppppppbStack_e8[-1],plVar42,*pppppppbStack_260,&pppppppbStack_240,
                                 &uStack_348);
          pppppppbVar30 = pppppppbStack_198 + 3;
          uStack_d1 = 1;
          uStack_d2 = 1;
          pdb_140e9a350();
          LOCK();
          cVar18 = *(char *)pppppppbVar30;
          if (cVar18 == '\x01') {
            *(char *)pppppppbVar30 = '\0';
          }
          UNLOCK();
          if (cVar18 != '\x01') {
            uStack_d1 = 1;
            uStack_d2 = 1;
            pdb_142dbcef0(pppppppbVar30,0);
          }
        }
        else {
          uStack_d1 = 1;
          uStack_d2 = 1;
          uVar23 = pdb_14140dbe0(pppppppbVar44,pppppppbStack_118,&uStack_408,pppppppbStack_e8[-2],
                                 pppppppbStack_e8[-1],plStack_2b0,uStack_380,*pppppppbStack_260,
                                 &pppppppbStack_240,&pppppppbStack_2a0);
        }
        pppppppbStack_e8 = pppppppbStack_240;
        pppppppbStack_f0 = (byte *******)pbStack_238;
        pppppppbStack_118 = pppppppbStack_228;
        pppppppbStack_1c0 = pppppppbStack_230;
        ppppppbStack_2a8 = ppppppbStack_220;
        if (pppppppbStack_230 == (byte *******)0x0) {
          *puStack_1f0 = uStack_fc;
          *puStack_f8 = plStack_e0._0_4_;
          pdb_14140a7d0(&uStack_1b8,uStack_1e8,pppppppbStack_1e0,pppppppbVar44);
          if ((char)pppppppbStack_198 != '\x11') {
            LOCK();
            *uStack_180 = (byte ******)((longlong)*uStack_180 + -1);
            UNLOCK();
            if (*uStack_180 == (byte ******)0x0) {
              pdb_140c7b7a0(&uStack_180);
            }
          }
          if (pppppppbStack_e8 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_f0,(longlong)pppppppbStack_e8 * 0xc,4);
          }
        }
        else {
          uStack_1b8 = (byte *******)ppppppbStack_220;
          uStack_1b0 = (byte *******)uStack_218;
          uStack_1a8 = (byte *******)0x3;
          uStack_d3 = 1;
          pdb_1413ecc60(&ppppppbStack_420,&uStack_1b8);
          *puStack_1f0 = uStack_fc;
          *puStack_f8 = plStack_e0._0_4_;
          uStack_3b8 = uStack_410;
          ppppppbStack_3c8 = ppppppbStack_420;
          uStack_3c0 = uStack_418;
          pppppppbStack_360 = pppppppbStack_e8;
          pbStack_358 = (byte *)pppppppbStack_f0;
          pppppppbStack_350 = pppppppbStack_1c0;
          pppppbStack_3b0 = (byte *****)0x8000000000000000;
          uStack_1b8 = (byte *******)0x8000000000000000;
          uStack_d3 = 0;
          pdb_1409f0070(&uStack_348,&ppppppbStack_3c8,&pppppppbStack_360,&pppppbStack_3b0,
                        &uStack_1b8);
          uStack_1b8 = (byte *******)0x1;
          uStack_1b0 = (byte *******)0x1;
          uStack_138 = uStack_2d8;
          uStack_130 = uStack_2d0;
          uStack_148 = uStack_2e8;
          uStack_140 = uStack_2e0;
          uStack_158 = uStack_2f8;
          uStack_150 = uStack_2f0;
          uStack_168 = uStack_308;
          uStack_160 = uStack_300;
          uStack_178 = CONCAT44(uStack_314,uStack_318);
          uStack_170 = CONCAT44(uStack_30c,uStack_310);
          uStack_188 = pppppppbStack_328;
          uStack_180 = pppppppbStack_320;
          pppppppbStack_198 = pppppppbStack_338;
          pppppppbStack_190 = pppppppbStack_330;
          uStack_1a8 = uStack_348;
          uStack_1a0 = pppppppbStack_340;
          pdb_14007ee60();
          pbVar47 = pub_1406abab0(0x90,0x10);
          if (pbVar47 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(0x10,0x90);
          }
          pub_142e32760(pbVar47,&uStack_1b8,0x90);
          uStack_1b8 = (byte *******)CONCAT71(uStack_1b8._1_7_,7);
          uStack_d3 = 0;
          uStack_1b0 = pppppppbVar44;
          pdb_1409ed410(&uStack_348,pbVar47,&uStack_1b8);
          uStack_1b0 = (byte *******)((ulonglong)uStack_1b0 & 0xffffffff00000000);
          uStack_1b8 = (byte *******)0x0;
          uStack_1a8 = (byte *******)CONCAT44(uVar14,uVar53);
          uStack_1a0 = (byte *******)CONCAT44(uVar16,uVar15);
          uStack_d3 = 0;
          pdb_14140a950(&pppppbStack_3b0,uStack_1e8,pppppppbStack_1e0,pppppppbVar44,&uStack_348,
                        &uStack_1b8);
        }
        if (pppppppbStack_118 != (byte *******)0x0) {
          pub_1406abac0((byte *)ppppppbStack_2a8,(longlong)pppppppbStack_118 << 2,4);
        }
        pppppppbStack_338 = pppppppbStack_290;
        uStack_348 = pppppppbStack_2a0;
        pppppppbStack_340 = pppppppbStack_298;
        pppppppbStack_320 = pppppppbStack_278;
        pppppppbStack_330 = pppppppbStack_288;
        pppppppbStack_328 = pppppppbStack_280;
        *puStack_1f8 = uStack_10c;
        uStack_180 = *(byte ********)(lVar7 + 0x40);
        pppppppbStack_198 = pppppppbStack_280;
        pppppppbStack_190 = pppppppbStack_278;
        uStack_1a8 = pppppppbStack_290;
        uStack_1a0 = pppppppbStack_288;
        uStack_1b8 = pppppppbStack_2a0;
        uStack_1b0 = pppppppbStack_298;
        lVar20 = *(longlong *)(lVar7 + 0x30);
        uStack_188 = pppppppbVar44;
        if (lVar20 == *(longlong *)(lVar7 + 0x20)) {
          pdb_142d7ee50(lVar7 + 0x20);
        }
        lVar29 = *(longlong *)(lVar7 + 0x28);
        lVar41 = lVar20 * 0x40;
        puVar3 = (undefined4 *)(lVar29 + 0x30 + lVar41);
        *puVar3 = (undefined4)uStack_188;
        puVar3[1] = uStack_188._4_4_;
        puVar3[2] = (undefined4)uStack_180;
        puVar3[3] = uStack_180._4_4_;
        plVar22 = (longlong *)(lVar29 + 0x20 + lVar41);
        *plVar22 = (longlong)pppppppbStack_198;
        plVar22[1] = (longlong)pppppppbStack_190;
        plVar22 = (longlong *)(lVar29 + 0x10 + lVar41);
        *plVar22 = (longlong)uStack_1a8;
        plVar22[1] = (longlong)uStack_1a0;
        *(longlong *)(lVar29 + lVar41) = (longlong)uStack_1b8;
        ((longlong *)(lVar29 + lVar41))[1] = (longlong)uStack_1b0;
        *(longlong *)(lVar7 + 0x30) = lVar20 + 1;
        *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
        uStack_d1 = 0;
        uStack_d2 = 0;
        pdb_140b2e450(lStack_1d8 + -0x120,uVar23);
        pppppppbVar44 = pppppppbStack_108;
        if (pppppbStack_248 != (byte *****)0x0) {
          pub_1406abac0(pbStack_1c8,uStack_1d0,8);
        }
        goto LAB_1407f6935;
      }
      uVar40 = (ushort)(uVar19 - 1) & (ushort)uVar19;
      uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar40);
    }
    auVar57[0] = -(auVar64[0] == unaff_XMM8_Ba);
    auVar57[1] = -(auVar64[1] == unaff_XMM8_Bb);
    auVar57[2] = -(auVar64[2] == unaff_XMM8_Bc);
    auVar57[3] = -(auVar64[3] == unaff_XMM8_Bd);
    auVar57[4] = -(auVar64[4] == unaff_XMM8_Be);
    auVar57[5] = -(auVar64[5] == unaff_XMM8_Bf);
    auVar57[6] = -(auVar64[6] == unaff_XMM8_Bg);
    auVar57[7] = -(auVar64[7] == unaff_XMM8_Bh);
    auVar57[8] = -(auVar64[8] == unaff_XMM8_Bi);
    auVar57[9] = -(auVar64[9] == unaff_XMM8_Bj);
    auVar57[10] = -(auVar64[10] == unaff_XMM8_Bk);
    auVar57[0xb] = -(auVar64[0xb] == unaff_XMM8_Bl);
    auVar57[0xc] = -(auVar64[0xc] == unaff_XMM8_Bm);
    auVar57[0xd] = -(auVar64[0xd] == unaff_XMM8_Bn);
    auVar57[0xe] = -(auVar64[0xe] == unaff_XMM8_Bo);
    auVar57[0xf] = -(auVar64[0xf] == unaff_XMM8_Bp);
    if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') goto LAB_1407f804e;
    uVar45 = uVar45 + lVar20 + 0x10;
    lVar20 = lVar20 + 0x10;
  } while( true );
LAB_1407f6c30:
  *puStack_1f0 = uStack_fc;
  *puStack_f8 = plStack_e0._0_4_;
  pdb_14140a7d0(puVar46,uStack_1e8,pppppppbStack_1e0,pppppppbVar44);
  if ((char)pppppppbStack_198 != '\x11') {
    LOCK();
    *uStack_180 = (byte ******)((longlong)*uStack_180 + -1);
    UNLOCK();
    if (*uStack_180 == (byte ******)0x0) {
      pdb_140c7b7a0(&uStack_180);
    }
  }
  uStack_1a8 = (byte *******)0x0;
  uStack_1a0 = (byte *******)0x0;
  *puStack_1f8 = uStack_10c;
  uStack_180 = *(byte ********)(lVar7 + 0x40);
  uStack_1b8 = (byte *******)0x0;
  uStack_1b0 = (byte *******)0x4;
  pppppppbStack_198 = (byte *******)0x4;
  pppppppbStack_190 = (byte *******)0x0;
  lVar20 = *(longlong *)(lVar7 + 0x30);
  uStack_188 = pppppppbVar44;
  if (lVar20 == *(longlong *)(lVar7 + 0x20)) {
    pdb_142d7ee50(lVar7 + 0x20);
  }
LAB_1407f68e0:
  lVar29 = *(longlong *)(lVar7 + 0x28);
  lVar41 = lVar20 * 0x40;
  plVar22 = (longlong *)(lVar29 + 0x30 + lVar41);
  *plVar22 = (longlong)uStack_188;
  plVar22[1] = (longlong)uStack_180;
  plVar22 = (longlong *)(lVar29 + 0x20 + lVar41);
  *plVar22 = (longlong)pppppppbStack_198;
  plVar22[1] = (longlong)pppppppbStack_190;
  plVar22 = (longlong *)(lVar29 + 0x10 + lVar41);
  *plVar22 = (longlong)uStack_1a8;
  plVar22[1] = (longlong)uStack_1a0;
  *(longlong *)(lVar29 + lVar41) = (longlong)uStack_1b8;
  ((longlong *)(lVar29 + lVar41))[1] = (longlong)uStack_1b0;
  *(longlong *)(lVar7 + 0x30) = lVar20 + 1;
  *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
  pppppppbVar44 = pppppppbStack_108;
  goto LAB_1407f6935;
LAB_1407f7c3e:
  uVar21 = uVar21 & (ulonglong)plVar42;
  pcVar2 = (char *)((longlong)plStack_e0 + uVar21);
  auVar64[0] = -(*pcVar2 == auVar54[0]);
  auVar64[1] = -(pcVar2[1] == auVar54[1]);
  auVar64[2] = -(pcVar2[2] == auVar54[2]);
  auVar64[3] = -(pcVar2[3] == auVar54[3]);
  auVar64[4] = -(pcVar2[4] == auVar54[4]);
  auVar64[5] = -(pcVar2[5] == auVar54[5]);
  auVar64[6] = -(pcVar2[6] == auVar54[6]);
  auVar64[7] = -(pcVar2[7] == auVar54[7]);
  auVar64[8] = -(pcVar2[8] == auVar54[0]);
  auVar64[9] = -(pcVar2[9] == auVar54[1]);
  auVar64[10] = -(pcVar2[10] == auVar54[2]);
  auVar64[0xb] = -(pcVar2[0xb] == auVar54[3]);
  auVar64[0xc] = -(pcVar2[0xc] == auVar54[4]);
  auVar64[0xd] = -(pcVar2[0xd] == auVar54[5]);
  auVar64[0xe] = -(pcVar2[0xe] == auVar54[6]);
  auVar64[0xf] = -(pcVar2[0xf] == auVar54[7]);
  uVar40 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar40;
  while( true ) {
    if (uVar40 == 0) goto LAB_1407f7ca0;
    uVar10 = 0;
    for (uVar11 = uVar19; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar39 = uVar10 + uVar21 & (ulonglong)plVar42;
    if (puStack_f8 == (undefined4 *)plStack_e0[uVar39 * -0x56 + -0x56]) break;
    uVar40 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar40);
  }
  goto LAB_1407f7cc0;
LAB_1407f7ca0:
  auVar59[0] = -(*pcVar2 == -1);
  auVar59[1] = -(pcVar2[1] == -1);
  auVar59[2] = -(pcVar2[2] == -1);
  auVar59[3] = -(pcVar2[3] == -1);
  auVar59[4] = -(pcVar2[4] == -1);
  auVar59[5] = -(pcVar2[5] == -1);
  auVar59[6] = -(pcVar2[6] == -1);
  auVar59[7] = -(pcVar2[7] == -1);
  auVar59[8] = -(pcVar2[8] == -1);
  auVar59[9] = -(pcVar2[9] == -1);
  auVar59[10] = -(pcVar2[10] == -1);
  auVar59[0xb] = -(pcVar2[0xb] == -1);
  auVar59[0xc] = -(pcVar2[0xc] == -1);
  auVar59[0xd] = -(pcVar2[0xd] == -1);
  auVar59[0xe] = -(pcVar2[0xe] == -1);
  auVar59[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar59 >> 0x17,0) & 1) != 0) || (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar59 >> 0x27,0) & 1) != 0) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143006500);
  }
  uVar21 = uVar21 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_1407f7c3e;
LAB_1407f7cc0:
  plStack_e0 = plStack_e0 + uVar39 * -0x56;
  plVar42 = plStack_e0 + -0x55;
  puVar43 = (undefined8 *)puVar46[-2];
  puVar46 = puVar43 + puVar46[-1] * 0xd;
  for (; pppppppbStack_200 = pppppppbVar44, puVar43 != puVar46; puVar43 = puVar43 + 0xd) {
    if (puVar43[5] == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143006518);
    }
    uStack_348 = (byte *******)CONCAT44(((undefined4 *)puVar43[4])[2],*(undefined4 *)puVar43[4]);
    pdb_140930390(plVar42);
    pdb_140df4540(puVar32,&uStack_348);
    fVar51 = (float)pdb_140dea520(puVar32,plVar42);
    lVar20 = puVar43[5];
    if ((lVar20 == 0) || (puVar43[4] + lVar20 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143006530);
    }
    lVar20 = puVar43[4] + lVar20 * 0xc;
    uStack_348 = (byte *******)CONCAT44(*(undefined4 *)(lVar20 + -4),*(undefined4 *)(lVar20 + -0xc))
    ;
    pdb_140930390(plVar42);
    pdb_140df4540(puVar32,&uStack_348);
    fVar52 = (float)pdb_140dea520(puVar32,plVar42);
    if (NAN(((float)(~-(uint)(fVar52 < fVar51) & (uint)fVar52 |
                    (uint)(fVar52 + *(float *)(plStack_e0 + -0x4f)) & -(uint)(fVar52 < fVar51)) *
             fVar13 + fVar51 * fVar13) / *(float *)(plStack_e0 + -0x4f))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
    }
    *(undefined4 *)pbStack_270 = pppppppbStack_108._0_4_;
    pdb_140930390(plVar42);
    pub_142e32a70();
    unaff_XMM8_Ba = extraout_XMM0_Ba;
    unaff_XMM8_Bb = extraout_XMM0_Bb;
    unaff_XMM8_Bc = extraout_XMM0_Bc;
    unaff_XMM8_Bd = extraout_XMM0_Bd;
    unaff_XMM8_Be = extraout_XMM0_Be;
    unaff_XMM8_Bf = extraout_XMM0_Bf;
    unaff_XMM8_Bg = extraout_XMM0_Bg;
    unaff_XMM8_Bh = extraout_XMM0_Bh;
    unaff_XMM8_Bi = extraout_XMM0_Bi;
    unaff_XMM8_Bj = extraout_XMM0_Bj;
    unaff_XMM8_Bk = extraout_XMM0_Bk;
    unaff_XMM8_Bl = extraout_XMM0_Bl;
    unaff_XMM8_Bm = extraout_XMM0_Bm;
    unaff_XMM8_Bn = extraout_XMM0_Bn;
    unaff_XMM8_Bo = extraout_XMM0_Bo;
    unaff_XMM8_Bp = extraout_XMM0_Bp;
    uVar53 = pdb_14007ee60();
    fVar51 = (float)pdb_140a0bbc0(puVar43);
    uStack_1b8 = (byte *******)
                 CONCAT17(unaff_XMM8_Bd,
                          CONCAT16(unaff_XMM8_Bc,
                                   CONCAT15(unaff_XMM8_Bb,CONCAT14(unaff_XMM8_Ba,uVar53))));
    uStack_1b0 = (byte *******)CONCAT44(0x3f9ef9db,fVar51 + fVar50);
    pdb_140c2bb20(pppppppbStack_208,puStack_f8,puVar32,3);
    pppppppbVar44 = pppppppbStack_200;
  }
  goto LAB_1407f7eb3;
}

