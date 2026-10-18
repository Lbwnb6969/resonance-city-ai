// VA 0x1408bf9f0, PDB extent 11567 bytes
// system_decorator::decorator_visual::generate_clothline::generate_clothline_visuals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/generate_clothline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::generate_clothline::generate_clothline_visuals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/generate_clothline.rs
   Extent: 11567 */

void pdb_1408bf9f0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10,undefined8 *param_11)

{
  char *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar17;
  byte *pbVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  float *pfVar22;
  longlong *plVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  byte bVar27;
  undefined *puVar28;
  float *pfVar29;
  float *pfVar30;
  int iVar31;
  longlong lVar32;
  undefined *puVar33;
  ulonglong *puVar34;
  ulonglong uVar35;
  ushort uVar36;
  int iVar37;
  undefined *puVar38;
  undefined1 (*pauVar39) [16];
  float *pfVar40;
  undefined8 uVar41;
  bool bVar42;
  byte bVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar51 [16];
  float fVar49;
  float fVar50;
  float fVar54;
  undefined1 auVar52 [16];
  float fVar57;
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 in_stack_fffffffffffff9b0;
  undefined4 uVar85;
  undefined8 in_stack_fffffffffffff9b8;
  float *pfStack_5c8;
  ulonglong *puStack_5c0;
  undefined8 uStack_5b8;
  float afStack_5b0 [2];
  undefined8 uStack_5a8;
  float fStack_5a0;
  undefined8 uStack_59c;
  undefined4 uStack_594;
  undefined4 uStack_590;
  float fStack_58c;
  uint uStack_588;
  float fStack_584;
  float fStack_580;
  undefined8 uStack_57c;
  undefined8 uStack_574;
  float fStack_56c;
  ulonglong uStack_568;
  float fStack_560;
  undefined8 uStack_55c;
  undefined8 uStack_554;
  float fStack_54c;
  float fStack_548;
  undefined *puStack_538;
  longlong lStack_530;
  undefined *puStack_528;
  undefined8 uStack_520;
  float *pfStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined8 uStack_4fc;
  undefined4 uStack_4f4;
  undefined4 uStack_4e8;
  undefined4 uStack_4e0;
  undefined1 uStack_4c3;
  undefined4 uStack_4c0;
  undefined1 uStack_46c;
  uint7 uStack_46b;
  undefined1 uStack_464;
  undefined7 uStack_463;
  undefined1 uStack_45c;
  undefined2 uStack_45a;
  ulonglong auStack_450 [3];
  undefined8 uStack_438;
  undefined8 uStack_430;
  float fStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  float fStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  float fStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  float fStack_3c8;
  longlong lStack_3c0;
  float *pfStack_3b8;
  longlong lStack_3b0;
  ulonglong *puStack_398;
  longlong *plStack_390;
  undefined4 *puStack_388;
  float *pfStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  longlong *plStack_368;
  longlong *plStack_360;
  undefined8 uStack_358;
  float fStack_350;
  float fStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  float fStack_338;
  undefined8 uStack_328;
  undefined8 uStack_320;
  float fStack_318;
  undefined8 uStack_308;
  float fStack_300;
  float fStack_2fc;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  float *pfStack_2e8;
  longlong lStack_2e0;
  float *pfStack_2d8;
  ulonglong uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  longlong lStack_2b0;
  longlong lStack_2a8;
  undefined8 uStack_2a0;
  ulonglong uStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_27c;
  undefined8 uStack_278;
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined4 uStack_22c;
  byte *pbStack_228;
  ulonglong *puStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong lStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  float fStack_18c;
  float *pfStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float *pfStack_168;
  undefined8 uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  float *pfStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float *pfStack_128;
  float *pfStack_120;
  ulonglong uStack_118;
  float *pfStack_110;
  undefined8 uStack_108;
  float *pfStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_378 = param_4;
  puStack_370 = param_3;
  plStack_368 = param_2;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_2b0 = 0;
  }
  else {
    lVar32 = 0x52;
    lVar15 = pdb_1408c2720(0x52);
    puVar28 = &UNK_143016140;
    if (lVar15 == 1) {
      if ((longlong *)0x52 < param_2) {
LAB_1408c1cf0:
        pdb_142dc8070(&UNK_143016140,0x52,0);
LAB_1408c1d10:
        pdb_142dc8070(&UNK_143016140,0x52);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = pdb_1408c2720(param_2);
      if ((uVar16 & 1) != 0) {
        if (0x52 < (longlong)param_2 + 2U) goto LAB_1408c1d10;
        lVar32 = 0x50 - (longlong)param_2;
        puVar28 = &UNK_143016142 + (longlong)param_2;
      }
    }
    puVar33 = &UNK_143016007;
    puVar38 = &UNK_143015fc4;
    do {
      bVar27 = puVar33[-1];
      uVar14 = (uint)(char)bVar27;
      if ((char)bVar27 < '\0') {
        bVar43 = puVar33[-2];
        if ((char)bVar43 < -0x40) {
          bVar3 = puVar33[-3];
          if ((char)bVar3 < -0x40) {
            pbVar18 = puVar33 + -4;
            puVar33 = puVar33 + -4;
            uVar14 = bVar3 & 0x3f | (*pbVar18 & 7) << 6;
          }
          else {
            puVar33 = puVar33 + -3;
            uVar14 = bVar3 & 0xf;
          }
          uVar14 = bVar43 & 0x3f | uVar14 << 6;
        }
        else {
          puVar33 = puVar33 + -2;
          uVar14 = bVar43 & 0x1f;
        }
        uVar14 = (uint)(bVar27 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_1408bfb64;
LAB_1408bfb7c:
        puVar38 = puVar33 + -0x143015fc3;
        if (puVar38 < (undefined *)0x44) {
          lVar15 = 0x43 - (longlong)puVar38;
          puVar38 = puVar33 + 1;
          goto LAB_1408bfb9e;
        }
        pdb_142dc8070(&UNK_143015fc4,0x43,puVar38,0x43,&UNK_1430161f8);
        goto LAB_1408c1cf0;
      }
      puVar33 = puVar33 + -1;
      if (uVar14 == 0x5c) goto LAB_1408bfb7c;
LAB_1408bfb64:
      if (uVar14 == 0x2f) goto LAB_1408bfb7c;
    } while (puVar33 != &UNK_143015fc4);
    lVar15 = 0x43;
LAB_1408bfb9e:
    pfVar17 = (float *)pdb_140e97000();
    if ((*(char *)(pfVar17 + 0x1a) != '\x01') &&
       (pfVar17 = (float *)pdb_142dde6e0(pfVar17,0), pfVar17 == (float *)0x0)) goto LAB_1408c1c5f;
    if (*(longlong *)pfVar17 != 0) goto LAB_1408c1c2b;
    pfVar17[0] = -NAN;
    pfVar17[1] = -NAN;
    pfStack_100 = pfVar17;
    uStack_2a0 = pdb_140e94f10(pfVar17 + 2,puVar28,lVar32,puVar38,lVar15,1,0);
    *(longlong *)pfStack_100 = *(longlong *)pfStack_100 + 1;
    lStack_2b0 = 1;
  }
  pfVar17 = (float *)*param_1;
  lStack_2a8 = lStack_2b0;
  pdb_141499060(&lStack_2e0,*(longlong *)(pfVar17 + 2),
                *(longlong *)(pfVar17 + 4) * 0x50 + *(longlong *)(pfVar17 + 2));
  uVar85 = (undefined4)((ulonglong)in_stack_fffffffffffff9b0 >> 0x20);
  uVar14 = (uint)((ulonglong)in_stack_fffffffffffff9b8 >> 0x20);
  uStack_118 = uStack_2d0;
  pfStack_110 = pfVar17;
  if (uStack_2d0 == 0) {
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 4;
    uStack_1ac = 0;
    lStack_1a8 = 0;
    pfVar17 = pfStack_2d8;
  }
  else {
    uStack_178 = param_1;
    pdb_14007ee60();
    pbVar18 = pub_1406abab0(uStack_2d0 * 4,4);
    if (pbVar18 == (byte *)0x0) {
      pdb_142dc7e2a(4,uStack_2d0 * 4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uStack_1b8 = (uint)uStack_2d0;
    uStack_1b4 = (undefined4)(uStack_2d0 >> 0x20);
    uStack_1b0 = SUB84(pbVar18,0);
    uStack_1ac = (uint)((ulonglong)pbVar18 >> 0x20);
    lStack_1a8 = 0;
    pfVar22 = pfStack_2d8 + uStack_2d0 * 0x14;
    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,*(undefined4 *)((longlong)param_9 + 0x1c));
    lVar15 = *param_9;
    puVar4 = (undefined4 *)param_9[2];
    pfStack_168 = pfStack_2d8;
    pfVar29 = pfStack_2d8;
    do {
      pfVar30 = pfVar29 + 0x14;
      fVar66 = pfVar29[0x10];
      lVar32 = 0;
      do {
        if (param_8[2] << 2 == lVar32) {
          puStack_5c0 = (ulonglong *)CONCAT44(puStack_5c0._4_4_,pfVar29[6]);
          pfStack_5c8 = *(float **)(pfVar29 + 4);
          *puVar4 = pfStack_100._0_4_;
          lVar32 = *(longlong *)(lVar15 + 0x30);
          uVar41 = *(undefined8 *)(lVar15 + 0x40);
          if (lVar32 == *(longlong *)(lVar15 + 0x20)) {
            pdb_142d7e830(lVar15 + 0x20);
          }
          lVar5 = *(longlong *)(lVar15 + 0x28);
          *(undefined8 *)(lVar5 + lVar32 * 0x18) = uVar41;
          *(float **)(lVar5 + 8 + lVar32 * 0x18) = pfStack_5c8;
          *(undefined4 *)(lVar5 + 0x10 + lVar32 * 0x18) = puStack_5c0._0_4_;
          *(undefined2 *)(lVar5 + 0x14 + lVar32 * 0x18) = 0x10;
          *(longlong *)(lVar15 + 0x30) = lVar32 + 1;
          *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
          fVar66 = pfVar29[0x10];
          if (lStack_1a8 == CONCAT44(uStack_1b4,uStack_1b8)) goto LAB_1408bfda6;
          goto LAB_1408bfcd0;
        }
        pfVar17 = (float *)(param_8[1] + lVar32);
        lVar32 = lVar32 + 4;
      } while (*pfVar17 != fVar66);
      if (lStack_1a8 == CONCAT44(uStack_1b4,uStack_1b8)) {
LAB_1408bfda6:
        lVar32 = lStack_1a8;
        pdb_142d8d710(&uStack_1b8);
        lStack_1a8 = lVar32;
      }
LAB_1408bfcd0:
      uVar85 = (undefined4)((ulonglong)in_stack_fffffffffffff9b0 >> 0x20);
      uVar14 = (uint)((ulonglong)in_stack_fffffffffffff9b8 >> 0x20);
      *(float *)(CONCAT44(uStack_1ac,uStack_1b0) + lStack_1a8 * 4) = fVar66;
      lStack_1a8 = lStack_1a8 + 1;
      pfVar17 = pfStack_168;
      pfVar29 = pfVar30;
      param_1 = uStack_178;
    } while (pfVar30 != pfVar22);
  }
  uVar16 = uStack_118;
  uStack_5b8 = lStack_1a8;
  pfStack_5c8 = (float *)CONCAT44(uStack_1b4,uStack_1b8);
  puStack_5c0 = (ulonglong *)CONCAT44(uStack_1ac,uStack_1b0);
  if (*param_8 != 0) {
    pub_1406abac0((byte *)param_8[1],*param_8 << 2,4);
  }
  param_8[2] = uStack_5b8;
  *param_8 = (longlong)pfStack_5c8;
  param_8[1] = (longlong)puStack_5c0;
  uVar41 = *param_6;
  pdb_14088ed80(&pfStack_5c8,pfVar17,uVar16,*param_11,1,1,0x41100000,CONCAT44(uVar85,0x40c00000),
                (ulonglong)uVar14 << 0x20,uVar41);
  lVar15 = uStack_5b8;
  pfStack_128 = pfStack_5c8;
  puStack_220 = puStack_5c0;
  lStack_290 = CONCAT44(afStack_5b0[1],afStack_5b0[0]);
  pbStack_228 = (byte *)CONCAT44(uStack_5a8._4_4_,(float)uStack_5a8);
  uStack_298 = CONCAT44((float)uStack_59c,fStack_5a0);
  puVar4 = (undefined4 *)param_1[2];
  *puVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puStack_2f8 = param_7;
  pfStack_2e8 = pfStack_110;
  uStack_150 = 0;
  pfStack_148 = (float *)0x10;
  uStack_140 = 0;
  pfStack_120 = (float *)(param_8 + 3);
  uStack_2f0 = uVar41;
  if (param_8[6] != 0) {
    uVar26 = param_8[4];
    if (uVar26 == 0) {
      uVar35 = 0;
    }
    else {
      pub_142e32780(*(longlong *)pfStack_120,CONCAT71((int7)((ulonglong)puVar4 >> 8),0xff),
                    uVar26 + 0x11);
      uVar35 = (uVar26 + 1 & 0xfffffffffffffff8) - (uVar26 + 1 >> 3);
      if (uVar26 < 8) {
        uVar35 = uVar26;
      }
    }
    param_8[6] = 0;
    param_8[5] = uVar35;
  }
  puStack_398 = puStack_220 + lVar15 * 2;
  plStack_360 = param_8 + 9;
  uStack_268 = *param_10;
  plStack_390 = param_8 + 0xd;
  uStack_22c = *(undefined4 *)((longlong)param_9 + 0x1c);
  pfStack_180 = (float *)*param_9;
  puStack_388 = (undefined4 *)param_9[2];
  pfStack_380 = pfStack_180 + 8;
  puVar34 = puStack_220;
  while (puVar34 != puStack_398) {
    uVar26 = *puVar34;
    if (uVar16 <= uVar26) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar26,uVar16,&UNK_1430160b0);
    }
    uVar35 = puVar34[1];
    uStack_358 = puVar34;
    if (uVar16 <= uVar35) goto LAB_1408c1c6b;
    pfVar22 = pfVar17 + uVar26 * 0x14;
    uStack_178 = *(undefined8 **)(pfVar22 + 4);
    uStack_170 = 0;
    fVar66 = pfVar22[6];
    pfVar29 = *(float **)(pfVar17 + uVar35 * 0x14 + 4);
    fVar64 = SUB84(pfVar29,0);
    fVar83 = pfVar22[0x10];
    fVar65 = pfVar17[uVar35 * 0x14 + 0x10];
    fVar44 = fVar83;
    if ((uint)fVar65 < (uint)fVar83) {
      fVar44 = fVar65;
    }
    fVar48 = fVar83;
    if ((uint)fVar83 < (uint)fVar65) {
      fVar48 = fVar65;
    }
    fVar55 = pfVar17[uVar35 * 0x14 + 6];
    uStack_f1 = 1;
    fStack_2b8 = fVar44;
    fStack_2b4 = fVar48;
    pdb_1403afce0(pfStack_120,fVar44,fVar48);
    fVar56 = (float)((ulonglong)pfVar29 >> 0x20);
    if (param_8[0xc] != 0) {
      uStack_f1 = 1;
      uVar16 = pdb_1400af680(plStack_390,&fStack_2b8);
      bVar27 = (byte)(uVar16 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar27,bVar27));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar15 = 0;
      while( true ) {
        uVar16 = uVar16 & param_8[10];
        pcVar1 = (char *)(param_8[9] + uVar16);
        auVar58[0] = -(*pcVar1 == auVar45[0]);
        auVar58[1] = -(pcVar1[1] == auVar45[1]);
        auVar58[2] = -(pcVar1[2] == auVar45[2]);
        auVar58[3] = -(pcVar1[3] == auVar45[3]);
        auVar58[4] = -(pcVar1[4] == auVar45[4]);
        auVar58[5] = -(pcVar1[5] == auVar45[5]);
        auVar58[6] = -(pcVar1[6] == auVar45[6]);
        auVar58[7] = -(pcVar1[7] == auVar45[7]);
        auVar58[8] = -(pcVar1[8] == auVar45[0]);
        auVar58[9] = -(pcVar1[9] == auVar45[1]);
        auVar58[10] = -(pcVar1[10] == auVar45[2]);
        auVar58[0xb] = -(pcVar1[0xb] == auVar45[3]);
        auVar58[0xc] = -(pcVar1[0xc] == auVar45[4]);
        auVar58[0xd] = -(pcVar1[0xd] == auVar45[5]);
        auVar58[0xe] = -(pcVar1[0xe] == auVar45[6]);
        auVar58[0xf] = -(pcVar1[0xf] == auVar45[7]);
        uVar36 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf
        ;
        uVar14 = (uint)uVar36;
        while (uVar36 != 0) {
          uVar24 = 0;
          for (uVar25 = uVar14; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          lVar32 = param_8[9] + (uVar24 + uVar16 & param_8[10]) * -8;
          if ((fVar44 == *(float *)(lVar32 + -8)) && (fVar48 == *(float *)(lVar32 + -4)))
          goto LAB_1408c02ae;
          uVar36 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar36);
        }
        auVar51[0] = -(*pcVar1 == -1);
        auVar51[1] = -(pcVar1[1] == -1);
        auVar51[2] = -(pcVar1[2] == -1);
        auVar51[3] = -(pcVar1[3] == -1);
        auVar51[4] = -(pcVar1[4] == -1);
        auVar51[5] = -(pcVar1[5] == -1);
        auVar51[6] = -(pcVar1[6] == -1);
        auVar51[7] = -(pcVar1[7] == -1);
        auVar51[8] = -(pcVar1[8] == -1);
        auVar51[9] = -(pcVar1[9] == -1);
        auVar51[10] = -(pcVar1[10] == -1);
        auVar51[0xb] = -(pcVar1[0xb] == -1);
        auVar51[0xc] = -(pcVar1[0xc] == -1);
        auVar51[0xd] = -(pcVar1[0xd] == -1);
        auVar51[0xe] = -(pcVar1[0xe] == -1);
        auVar51[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x1f,0) & 1) != 0) || (SUB161(auVar51 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
        uVar16 = uVar16 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
    *puStack_388 = uStack_22c;
    lVar15 = *(longlong *)(pfStack_180 + 0xc);
    uVar41 = *(undefined8 *)(pfStack_180 + 0x10);
    if (lVar15 == *(longlong *)(pfStack_180 + 8)) {
      uStack_f1 = 1;
      pdb_142d7e830(pfStack_380);
    }
    fVar44 = fVar66 * _DAT_142e36f50;
    fVar48 = (float)uStack_178 * _DAT_142e36f60;
    fVar53 = uStack_178._4_4_ * _UNK_142e36f64;
    fVar57 = fVar64 * _DAT_142e36f60;
    fVar63 = fVar56 * _UNK_142e36f64;
    fVar49 = fVar55 * _DAT_142e36f50;
    lVar32 = *(longlong *)(pfStack_180 + 10);
    *(undefined8 *)(lVar32 + lVar15 * 0x18) = uVar41;
    *(ulonglong *)(lVar32 + 8 + lVar15 * 0x18) = CONCAT44(fVar63 + fVar53,fVar57 + fVar48);
    *(float *)(lVar32 + 0x10 + lVar15 * 0x18) = fVar49 + fVar44;
    *(undefined2 *)(lVar32 + 0x14 + lVar15 * 0x18) = 0x10;
    *(longlong *)(pfStack_180 + 0xc) = lVar15 + 1;
    *(longlong *)(pfStack_180 + 0x10) = *(longlong *)(pfStack_180 + 0x10) + 1;
LAB_1408c02ae:
    pfVar30 = pfVar17 + uVar35 * 0x14;
    uStack_160 = 0;
    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar66);
    fVar49 = *pfVar22;
    fStack_270 = pfVar22[1];
    fVar53 = pfVar22[2];
    fStack_26c = pfVar22[3];
    fVar48 = fVar53 * fVar53;
    fStack_24c = fStack_26c * fStack_26c;
    fVar44 = fStack_270 * fStack_270 + fVar49 * fVar49;
    fStack_258 = fStack_24c - (fVar44 + fVar48);
    fStack_254 = fStack_24c - (fVar44 + fVar48);
    fStack_250 = fStack_24c - (fVar44 + fVar48);
    fStack_24c = fStack_24c - (fVar44 + fVar48);
    pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,fVar55);
    fStack_248 = fStack_26c + fStack_26c;
    fVar57 = *pfVar30;
    fVar63 = pfVar30[1];
    fVar84 = pfVar30[2];
    fVar67 = pfVar30[3];
    uVar41 = *(undefined8 *)(pfVar30 + 2);
    fVar44 = fVar84 * fVar84;
    fStack_2fc = fVar67 * fVar67;
    fVar48 = fVar63 * fVar63 + fVar57 * fVar57;
    fVar50 = fStack_2fc - (fVar48 + fVar44);
    fVar54 = fStack_2fc - (fVar48 + fVar44);
    fStack_300 = fStack_2fc - (fVar48 + fVar44);
    fStack_2fc = fStack_2fc - (fVar48 + fVar44);
    fStack_280 = fVar67 + fVar67;
    lVar15 = *(longlong *)(pfVar22 + 0xc);
    lVar32 = *(longlong *)(pfVar30 + 0xc);
    fVar44 = pfVar30[0xe];
    fVar48 = pfVar22[0xe];
    fVar69 = fVar48 * _DAT_142fa5c30 * _DAT_142e36f60;
    fVar71 = fVar48 * _UNK_142fa5c34 * _UNK_142e36f64;
    fVar75 = fVar53 * fVar71 + fStack_270 * fVar71 + fVar49 * fVar69;
    fVar75 = fVar75 + fVar75;
    uStack_278 = CONCAT44(fVar49,fVar53);
    fVar68 = (fVar71 * fVar49 - fVar69 * fStack_270) * fStack_248 +
             fVar75 * fVar53 + fStack_250 * fVar71;
    fVar70 = (float)uStack_178 +
             (fVar71 * fStack_270 - fVar71 * fVar53) * fStack_248 +
             fVar75 * fVar49 + fStack_258 * fVar69;
    fVar72 = uStack_178._4_4_ +
             (fVar69 * fVar53 - fVar71 * fVar49) * fStack_248 +
             fVar75 * fStack_270 + fStack_254 * fVar71;
    fVar73 = (float)uStack_170 + fVar68;
    fVar74 = uStack_170._4_4_ +
             (fVar71 * fStack_26c - _UNK_142e36f6c * 0.0 * fStack_26c) * fStack_248 +
             fVar75 * fStack_26c + fStack_24c * fVar71;
    fVar68 = fVar68 + fVar66;
    fVar71 = fVar44 * _DAT_142fa5c30 * _DAT_142e36f60;
    fVar75 = fVar44 * _UNK_142fa5c34 * _UNK_142e36f64;
    fVar80 = fVar84 * fVar75 + fVar63 * fVar75 + fVar57 * fVar71;
    uStack_308 = CONCAT44(fVar54,fVar50);
    fVar80 = fVar80 + fVar80;
    uStack_288 = CONCAT44(fStack_280,fStack_280);
    fVar69 = (fVar75 * fVar57 - fVar71 * fVar63) * fStack_280 +
             fVar80 * fVar84 + fStack_300 * fVar75;
    fVar76 = fVar64 + (fVar75 * fVar63 - fVar75 * fVar84) * fStack_280 +
                      fVar80 * fVar57 + fVar50 * fVar71;
    fVar77 = fVar56 + (fVar71 * fVar84 - fVar75 * fVar57) * fStack_280 +
                      fVar80 * fVar63 + fVar54 * fVar75;
    fVar78 = fVar69 + 0.0;
    fVar79 = (fVar75 * fVar67 - _UNK_142e36f6c * 0.0 * fVar67) * fStack_280 +
             fVar80 * fVar67 + fStack_2fc * fVar75 + 0.0;
    fVar69 = fVar69 + fVar55;
    fVar82 = (fVar68 - fVar69) * (fVar68 - fVar69) +
             (fVar72 - fVar77) * (fVar72 - fVar77) + (fVar70 - fVar76) * (fVar70 - fVar76);
    fVar81 = SQRT(fVar82);
    uVar14 = uStack_108._4_4_;
    uStack_138._0_4_ = (float)*(undefined8 *)pfVar30;
    fVar71 = (float)uStack_138;
    uStack_138._4_4_ = (float)((ulonglong)*(undefined8 *)pfVar30 >> 0x20);
    fVar75 = uStack_138._4_4_;
    uStack_130._0_4_ = (float)uVar41;
    fVar80 = (float)uStack_130;
    uStack_130._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
    fStack_1e8 = fVar66;
    uStack_1c8 = pfVar29;
    if (lVar15 == lVar32) {
      uStack_108 = (ulonglong)uStack_108._4_4_ << 0x20;
      auStack_1f8._0_4_ = fVar55;
      fStack_218 = _DAT_14300c7a0;
      uStack_1d0._0_4_ = (float)uStack_170;
      auStack_1d8 = (undefined1  [8])uStack_178;
      uStack_1d0._4_4_ = uStack_170._4_4_;
      fStack_1c0 = 0.0;
      fStack_1bc = 0.0;
      if (0.0 < fVar82) {
        auStack_1f8._0_4_ = fVar69;
        uStack_108 = CONCAT44(uVar14,fVar81);
        auStack_1d8._4_4_ = fVar72;
        auStack_1d8._0_4_ = fVar70;
        uStack_1d0._0_4_ = fVar73;
        uStack_1d0._4_4_ = fVar74;
        uStack_1c8 = (float *)CONCAT44(fVar77,fVar76);
        fStack_1e8 = fVar68;
        fStack_1c0 = fVar78;
        fStack_1bc = fVar79;
      }
    }
    else {
      uStack_108 = (ulonglong)uStack_108._4_4_ << 0x20;
      if (_DAT_14300c7a0 <= fVar81) {
        fStack_218 = _DAT_14300c7a0;
        uStack_1d0._0_4_ = (float)uStack_170;
        auStack_1d8 = (undefined1  [8])uStack_178;
        uStack_1d0._4_4_ = uStack_170._4_4_;
        fStack_1c0 = 0.0;
        fStack_1bc = 0.0;
        fVar69 = fVar55;
      }
      else {
        auStack_1d8._4_4_ = fVar72;
        auStack_1d8._0_4_ = fVar70;
        uStack_1d0._0_4_ = fVar73;
        uStack_1d0._4_4_ = fVar74;
        uStack_1c8 = (float *)CONCAT44(fVar77,fVar76);
        fStack_218 = fVar81;
        fStack_1e8 = fVar68;
        fStack_1c0 = fVar78;
        fStack_1bc = fVar79;
      }
      auStack_1f8._0_4_ = fVar69;
    }
    fVar69 = fVar48 * _DAT_142fa5c30 * _DAT_142e36f60;
    fVar73 = fVar48 * _UNK_142fa5c34 * _UNK_142e36f64;
    fVar76 = fVar53 * fVar73 + fStack_270 * fVar73 + fVar49 * fVar69;
    fVar76 = fVar76 + fVar76;
    fVar82 = (fVar73 * fVar49 - fVar69 * fStack_270) * fStack_248 +
             fVar76 * fVar53 + fStack_250 * fVar73;
    fVar70 = (float)uStack_178 +
             (fVar73 * fStack_270 - fVar73 * fVar53) * fStack_248 +
             fVar76 * fVar49 + fStack_258 * fVar69;
    fVar74 = uStack_178._4_4_ +
             (fVar69 * fVar53 - fVar73 * fVar49) * fStack_248 +
             fVar76 * fStack_270 + fStack_254 * fVar73;
    fVar72 = fVar82 + fVar66;
    fVar69 = fVar44 * _DAT_142e36f28 * _DAT_142e36f60;
    fVar68 = fVar44 * 0.0 * _UNK_142e36f64;
    fVar77 = (float)uStack_130 * fVar68 + uStack_138._4_4_ * fVar68 + (float)uStack_138 * fVar69;
    fVar77 = fVar77 + fVar77;
    auVar45._0_4_ = fVar68 * (float)uStack_138;
    auVar45._4_4_ = fVar69 * uStack_138._4_4_;
    auVar45._8_4_ = fVar68 * (float)uStack_130;
    auVar45._12_4_ = _UNK_142e36f6c * 0.0 * uStack_130._4_4_;
    fVar78 = (fVar68 * fVar63 - auVar45._8_4_) * fStack_280 +
             fVar77 * (float)uStack_138 + fVar50 * fVar69;
    fVar79 = (fVar69 * fVar84 - auVar45._0_4_) * fStack_280 +
             fVar77 * uStack_138._4_4_ + fVar54 * fVar68;
    fVar81 = (fVar68 * fVar57 - auVar45._4_4_) * fStack_280 +
             fVar77 * (float)uStack_130 + fStack_300 * fVar68;
    fVar68 = (fVar68 * fVar67 - auVar45._12_4_) * fStack_280 +
             fVar77 * uStack_130._4_4_ + fStack_2fc * fVar68;
    fVar67 = fVar64 + fVar78;
    fVar69 = fVar56 + fVar79;
    auVar10._4_8_ = auVar45._8_8_;
    auVar10._0_4_ = fVar79;
    auVar59._0_8_ = auVar10._0_8_ << 0x20;
    auVar59._8_4_ = fVar81;
    auVar59._12_4_ = fVar68;
    uStack_208 = auVar59._8_8_;
    uStack_200 = CONCAT44(fVar68,fVar81);
    fVar68 = fVar55 + fVar81;
    uStack_138 = (float *)CONCAT44(fVar74,fVar70);
    uStack_130 = CONCAT44(uStack_170._4_4_ +
                          (fVar73 * fStack_26c - _UNK_142fa5c3c * 0.0 * _UNK_142e36f6c * fStack_26c)
                          * fStack_248 + fVar76 * fStack_26c + fStack_24c * fVar73,
                          (float)uStack_170 + fVar82);
    fVar70 = fVar70 - fVar67;
    fVar74 = fVar74 - fVar69;
    fVar70 = SQRT((fVar72 - fVar68) * (fVar72 - fVar68) + fVar74 * fVar74 + fVar70 * fVar70);
    if (lVar15 == lVar32) {
      if (fVar70 <= (float)uStack_108) {
LAB_1408c07ee:
        uStack_138 = (float *)auStack_1d8;
        uStack_130 = uStack_1d0;
        fVar67 = (float)uStack_1c8;
        fVar69 = uStack_1c8._4_4_;
        fVar68 = (float)auStack_1f8._0_4_;
        fVar70 = fStack_218;
        fVar72 = fStack_1e8;
      }
      else {
        uStack_108 = CONCAT44(uStack_108._4_4_,fVar70);
        fVar70 = fStack_218;
      }
    }
    else if (fStack_218 <= fVar70) goto LAB_1408c07ee;
    fVar73 = fVar48 * _DAT_142e36f28 * _DAT_142e36f60;
    fVar48 = fVar48 * 0.0 * _UNK_142e36f64;
    fVar74 = fVar53 * fVar48 + fStack_270 * fVar48 + fVar49 * fVar73;
    fVar74 = fVar74 + fVar74;
    fVar76 = (float)uStack_178 +
             fStack_248 * (fStack_270 * fVar48 - fVar48 * fVar53) +
             fVar74 * fVar49 + fStack_258 * fVar73;
    fVar77 = uStack_178._4_4_ +
             fStack_248 * (fVar53 * fVar73 - fVar48 * fVar49) +
             fVar74 * fStack_270 + fStack_254 * fVar48;
    fVar66 = fVar66 + fStack_248 * (fVar49 * fVar48 - fVar73 * fStack_270) +
                      fVar74 * fVar53 + fStack_250 * fVar48;
    fVar53 = fVar44 * _DAT_142fa5c30 * _DAT_142e36f60;
    fVar44 = fVar44 * _UNK_142fa5c34 * _UNK_142e36f64;
    fVar73 = fVar80 * fVar44 + fVar75 * fVar44 + fVar71 * fVar53;
    fVar73 = fVar73 + fVar73;
    fVar48 = fVar64 + fStack_280 * (fVar63 * fVar44 - fVar44 * fVar80) +
                      fVar73 * fVar71 + fVar50 * fVar53;
    fVar49 = fVar56 + fStack_280 * (fVar84 * fVar53 - fVar44 * fVar71) +
                      fVar73 * fVar75 + fVar54 * fVar44;
    fVar84 = fStack_280 * (fVar57 * fVar44 - fVar53 * fVar75) +
             fVar73 * fVar80 + fStack_300 * fVar44 + fVar55;
    fVar44 = SQRT((fVar66 - fVar84) * (fVar66 - fVar84) +
                  (fVar77 - fVar49) * (fVar77 - fVar49) + (fVar76 - fVar48) * (fVar76 - fVar48));
    fVar53 = fVar76;
    fVar57 = fVar77;
    fVar63 = fVar66;
    if (lVar15 == lVar32) {
      if (fVar44 <= (float)uStack_108) {
LAB_1408c0980:
        fVar48 = fVar67;
        fVar49 = fVar69;
        fVar53 = (float)uStack_138;
        fVar57 = uStack_138._4_4_;
        fVar63 = fVar72;
        fVar84 = fVar68;
        fVar44 = fVar70;
      }
      else {
        uStack_108 = CONCAT44(uStack_108._4_4_,fVar44);
        fVar44 = fVar70;
      }
    }
    else if (fVar70 <= fVar44) goto LAB_1408c0980;
    fVar64 = fVar64 + fVar78;
    fVar67 = fVar76 - fVar64;
    fVar69 = fVar77 - (fVar56 + fVar79);
    fVar71 = fVar66 - (fVar55 + fVar81);
    fVar67 = SQRT(fVar71 * fVar71 + fVar69 * fVar69 + fVar67 * fVar67);
    if (lVar15 == lVar32) {
      if ((float)uStack_108 < fVar67) {
LAB_1408c09da:
        fVar48 = fVar64;
        fVar49 = fVar56 + fVar79;
        fVar53 = fVar76;
        fVar57 = fVar77;
        fVar63 = fVar66;
        fVar84 = fVar55 + fVar81;
      }
    }
    else if (fVar67 < fVar44) goto LAB_1408c09da;
    uVar41 = *(undefined8 *)pfVar22;
    uVar19 = *(undefined8 *)(pfVar22 + 2);
    fStack_3c8 = pfVar22[0xb];
    uStack_3d8 = *(undefined8 *)(pfVar22 + 7);
    uStack_3d0 = *(undefined8 *)(pfVar22 + 9);
    uVar11 = *(undefined8 *)pfVar30;
    uVar12 = *(undefined8 *)(pfVar30 + 2);
    uStack_3f8 = *(undefined8 *)(pfVar30 + 7);
    uStack_3f0 = *(undefined8 *)(pfVar30 + 9);
    fStack_3e8 = pfVar30[0xb];
    uStack_f1 = 1;
    fStack_27c = fStack_280;
    fStack_244 = fStack_248;
    fStack_240 = fStack_248;
    fStack_23c = fStack_248;
    pfStack_168 = pfVar29;
    lVar15 = pdb_140c3d060(uStack_268,0,lVar15,fVar83);
    if (lVar15 == 0) {
      iVar31 = 0;
    }
    else {
      iVar31 = *(int *)(lVar15 + 0x54);
    }
    uStack_f1 = 1;
    lVar15 = pdb_140c3d060(uStack_268,0,*(undefined8 *)(pfVar30 + 0xc),fVar65);
    uVar16 = uStack_140;
    if (lVar15 == 0) {
      iVar37 = 0;
    }
    else {
      iVar37 = *(int *)(lVar15 + 0x54);
    }
    if (uStack_140 == uStack_150) {
      uStack_f1 = 1;
      pdb_142d8dd60(&uStack_150);
    }
    puVar34 = uStack_358 + 2;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c) = uVar41;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c + 2) = uVar19;
    *(ulonglong *)(pfStack_148 + uVar16 * 0x1c + 4) = CONCAT44(fVar57,fVar53);
    pfStack_148[uVar16 * 0x1c + 6] = fVar63;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c + 7) = uStack_3d8;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c + 7 + 2) = uStack_3d0;
    pfStack_148[uVar16 * 0x1c + 0xb] = fStack_3c8;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c + 0xc) = uVar11;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c + 0xc + 2) = uVar12;
    *(ulonglong *)(pfStack_148 + uVar16 * 0x1c + 0x10) = CONCAT44(fVar49,fVar48);
    pfStack_148[uVar16 * 0x1c + 0x12] = fVar84;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c + 0x13) = uStack_3f8;
    *(undefined8 *)(pfStack_148 + uVar16 * 0x1c + 0x13 + 2) = uStack_3f0;
    pfStack_148[uVar16 * 0x1c + 0x17] = fStack_3e8;
    pfStack_148[uVar16 * 0x1c + 0x18] = fVar83;
    pfStack_148[uVar16 * 0x1c + 0x19] = fVar65;
    pfStack_148[uVar16 * 0x1c + 0x1a] = (float)(iVar31 + (int)fVar65 + (int)fVar83 + iVar37);
    uStack_140 = uVar16 + 1;
    uVar16 = uStack_118;
  }
  uStack_f1 = 1;
  pdb_1414acca0(plStack_360,pfStack_120);
  param_8[0xd] = param_8[7];
  param_8[0xe] = param_8[8];
  fVar83 = _DAT_142e377f0;
  fVar66 = _DAT_142e36f38;
  lVar15 = uStack_118 * 0x14;
  fVar65 = 0.0;
  fVar44 = 0.0;
  fVar64 = 0.0;
  uVar16 = 0;
  pfVar29 = pfVar17;
  while (pfVar22 = pfVar29, pfVar22 != pfVar17 + lVar15) {
    if (uStack_298 <= uVar16) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar16,uStack_298,&UNK_143016098);
    }
    uVar26 = uVar16 + 1;
    lVar32 = uVar16 * 8;
    uVar16 = uVar26;
    pfVar29 = pfVar22 + 0x14;
    if (*(longlong *)(pbStack_228 + lVar32) == 0) {
      uVar41 = *(undefined8 *)pfVar22;
      uVar19 = *(undefined8 *)(pfVar22 + 2);
      fVar63 = (float)*(undefined8 *)(pfVar22 + 4);
      fVar84 = (float)((ulonglong)*(undefined8 *)(pfVar22 + 4) >> 0x20);
      fVar48 = pfVar22[6];
      fStack_408 = pfVar22[0xb];
      uStack_418 = *(undefined8 *)(pfVar22 + 7);
      uStack_410 = *(undefined8 *)(pfVar22 + 9);
      fVar56 = *pfVar22;
      fVar49 = pfVar22[1];
      fVar53 = pfVar22[2];
      fVar57 = pfVar22[3];
      fVar55 = pfVar22[0xe];
      fVar71 = fVar55 * _DAT_142e36f28 * _DAT_142e36f60;
      fVar75 = fVar55 * 0.0 * _UNK_142e36f64;
      uVar11 = *(undefined8 *)pfVar22;
      uVar12 = *(undefined8 *)(pfVar22 + 2);
      uStack_438 = *(undefined8 *)(pfVar22 + 7);
      uStack_430 = *(undefined8 *)(pfVar22 + 9);
      fStack_428 = pfVar22[0xb];
      fVar67 = fVar55 * fVar66;
      fVar69 = fVar55 * fVar83 * _DAT_142e36f50;
      fVar55 = pfVar22[0x10];
      uStack_f1 = 1;
      lVar32 = pdb_140c3d060(uStack_268,0,*(undefined8 *)(pfVar22 + 0xc),fVar55);
      uVar26 = uStack_140;
      if (lVar32 == 0) {
        iVar31 = 0;
      }
      else {
        iVar31 = *(int *)(lVar32 + 0x54);
      }
      if (uStack_140 == uStack_150) {
        uStack_f1 = 1;
        pdb_142d8dd60(&uStack_150);
      }
      fVar50 = fVar53 * fVar53;
      fVar68 = fVar57 * fVar57;
      fVar70 = fVar49 * fVar49 + fVar56 * fVar56;
      fVar80 = fVar68 - (fVar70 + fVar50);
      fVar54 = fVar68 - (fVar70 + fVar50);
      fVar68 = fVar68 - (fVar70 + fVar50);
      fVar70 = fVar53 * fVar75 + fVar49 * fVar75 + fVar56 * fVar71;
      fVar70 = fVar70 + fVar70;
      fVar57 = fVar57 + fVar57;
      fVar50 = fVar53 * fVar69 + fVar49 * fVar69 + fVar56 * fVar67;
      fVar50 = fVar50 + fVar50;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c) = uVar41;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c + 2) = uVar19;
      *(ulonglong *)(pfStack_148 + uVar26 * 0x1c + 4) =
           CONCAT44(fVar84 + (fVar71 * fVar53 - fVar75 * fVar56) * fVar57 +
                             fVar70 * fVar49 + fVar75 * fVar54,
                    fVar63 + (fVar75 * fVar49 - fVar75 * fVar53) * fVar57 +
                             fVar70 * fVar56 + fVar71 * fVar80);
      pfStack_148[uVar26 * 0x1c + 6] =
           (fVar75 * fVar56 - fVar71 * fVar49) * fVar57 + fVar70 * fVar53 + fVar75 * fVar68 + fVar48
      ;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c + 7) = uStack_418;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c + 7 + 2) = uStack_410;
      pfStack_148[uVar26 * 0x1c + 0xb] = fStack_408;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c + 0xc) = uVar11;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c + 0xc + 2) = uVar12;
      *(ulonglong *)(pfStack_148 + uVar26 * 0x1c + 0x10) =
           CONCAT44(fVar84 + (fVar53 * fVar67 - fVar69 * fVar56) * fVar57 +
                             fVar50 * fVar49 + fVar69 * fVar54,
                    fVar63 + (fVar49 * fVar69 - fVar69 * fVar53) * fVar57 +
                             fVar50 * fVar56 + fVar67 * fVar80);
      pfStack_148[uVar26 * 0x1c + 0x12] =
           (fVar56 * fVar69 - fVar67 * fVar49) * fVar57 + fVar50 * fVar53 + fVar69 * fVar68 + fVar48
      ;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c + 0x13) = uStack_438;
      *(undefined8 *)(pfStack_148 + uVar26 * 0x1c + 0x13 + 2) = uStack_430;
      pfStack_148[uVar26 * 0x1c + 0x17] = fStack_428;
      pfStack_148[uVar26 * 0x1c + 0x18] = fVar55;
      pfStack_148[uVar26 * 0x1c + 0x19] = fVar55;
      pfStack_148[uVar26 * 0x1c + 0x1a] = (float)(iVar31 + (int)fVar55);
      uStack_140 = uVar26 + 1;
    }
  }
  uStack_118 = uStack_150;
  pfStack_180 = pfStack_148 + uStack_140 * 0x1c;
  uStack_108 = *plStack_368;
  uStack_288 = *puStack_370;
  uStack_278 = *puStack_378;
  pfStack_168 = (float *)*param_5;
  pfStack_120 = pfStack_148;
  uStack_138 = pfStack_148;
  while (uStack_138 != pfStack_180) {
    fVar55 = *uStack_138;
    fVar56 = uStack_138[1];
    uVar11 = *(undefined8 *)uStack_138;
    uVar41 = *(undefined8 *)uStack_138;
    fVar49 = uStack_138[2];
    fVar53 = uStack_138[3];
    uVar12 = *(undefined8 *)(uStack_138 + 2);
    fVar75 = (float)*(undefined8 *)(uStack_138 + 4);
    fVar80 = (float)((ulonglong)*(undefined8 *)(uStack_138 + 4) >> 0x20);
    fVar66 = uStack_138[6];
    fStack_318 = uStack_138[0xb];
    uStack_328 = *(undefined8 *)(uStack_138 + 7);
    uStack_320 = *(undefined8 *)(uStack_138 + 9);
    fVar57 = uStack_138[0xc];
    fVar63 = uStack_138[0xd];
    fVar84 = uStack_138[0xe];
    uVar19 = *(undefined8 *)(uStack_138 + 0xd);
    fVar67 = uStack_138[0xf];
    uVar16 = *(ulonglong *)(uStack_138 + 0x10);
    fVar83 = uStack_138[0x12];
    fStack_338 = uStack_138[0x17];
    uStack_348 = *(undefined8 *)(uStack_138 + 0x13);
    uStack_340 = *(undefined8 *)(uStack_138 + 0x15);
    fVar48 = uStack_138[0x19];
    uStack_308 = (ulonglong)(uint)uStack_138[0x1a];
    uStack_178 = (undefined8 *)CONCAT44(uStack_178._4_4_,uStack_138[0x18]);
    uStack_158 = pdb_140dedfe0((int)fVar48 * (int)uStack_138[0x18]);
    uStack_138 = uStack_138 + 0x1c;
    fStack_58c = fStack_318;
    uStack_59c._0_4_ = (float)uStack_328;
    uStack_59c._4_4_ = (undefined4)((ulonglong)uStack_328 >> 0x20);
    uStack_594 = (undefined4)uStack_320;
    uStack_590 = (undefined4)((ulonglong)uStack_320 >> 0x20);
    fStack_54c = fStack_338;
    uStack_55c = uStack_348;
    uStack_554 = uStack_340;
    puStack_5c0 = (ulonglong *)0x2;
    uStack_5b8 = uVar41;
    afStack_5b0[0] = fVar49;
    afStack_5b0[1] = fVar53;
    fStack_5a0 = fVar66;
    uStack_588 = (uint)(float)uStack_178;
    uStack_57c = CONCAT44(fVar57,(undefined4)uStack_57c);
    uStack_574 = uVar19;
    fStack_56c = fVar67;
    uStack_568 = uVar16;
    fStack_560 = fVar83;
    fStack_548 = fVar48;
    pfVar17 = (float *)0x0;
    fVar48 = fVar65;
    fVar69 = fVar44;
    fVar71 = fVar64;
    uStack_5a8._0_4_ = fVar75;
    uStack_5a8._4_4_ = fVar80;
    while (puVar2 = puStack_2f8, pfVar17 != (float *)0x2) {
      pfStack_5c8 = (float *)((longlong)pfVar17 + 1);
      pfStack_100 = pfStack_5c8;
      fVar44 = *(float *)(&uStack_5b8 + (longlong)pfVar17 * 8);
      fVar48 = *(float *)((longlong)&uStack_5b8 + (longlong)pfVar17 * 0x40 + 4);
      fVar69 = afStack_5b0[(longlong)pfVar17 * 0x10];
      fVar71 = afStack_5b0[(longlong)pfVar17 * 0x10 + 1];
      uVar41 = (&uStack_5a8)[(longlong)pfVar17 * 8];
      fVar65 = (&fStack_5a0)[(longlong)pfVar17 * 0x10];
      uVar14 = (&uStack_588)[(longlong)pfVar17 * 0x10];
      pdb_14007ee60();
      uVar19 = pdb_140ed5970(*puVar2);
      plVar23 = (longlong *)puVar2[1];
      if (plVar23 == (longlong *)0x0) {
        plVar23 = (longlong *)puVar2[2];
      }
      lVar15 = plVar23[2];
      if ((ulonglong)(*plVar23 - lVar15) < 0x68) {
        pdb_142d7f1b0(plVar23,lVar15,0x68,1,1);
      }
      pfVar22 = pfStack_2e8;
      fVar64 = fVar69 * fVar69;
      fVar54 = fVar71 * fVar71;
      fVar70 = fVar48 * fVar48 + fVar44 * fVar44;
      fVar50 = (fVar54 - (fVar70 + fVar64)) * _DAT_143015eb0;
      fVar68 = (fVar54 - (fVar70 + fVar64)) * _UNK_143015eb4;
      fVar70 = (fVar54 - (fVar70 + fVar64)) * _UNK_143015eb8;
      fVar64 = fVar69 * _UNK_143015eb8 + fVar48 * _UNK_143015eb4 + fVar44 * _DAT_143015eb0;
      fVar64 = fVar64 + fVar64;
      fVar54 = fVar44 * _DAT_14300a4e0;
      fVar73 = fVar48 * _DAT_14300a4e0;
      fVar72 = fVar71 + fVar71;
      lVar32 = plVar23[1];
      *(code **)(lVar32 + lVar15) = pdb_1414b8a60;
      pfVar29 = (float *)(lVar32 + 8 + lVar15);
      *pfVar29 = fVar44;
      pfVar29[1] = fVar48;
      pfVar29[2] = fVar69;
      pfVar29[3] = fVar71;
      *(ulonglong *)(lVar32 + 0x18 + lVar15) =
           CONCAT44((float)((ulonglong)uVar41 >> 0x20) -
                    (fVar72 * (fVar69 * 0.0 - fVar54) + fVar64 * fVar48 + fVar68),
                    (float)uVar41 - (fVar72 * (fVar73 - fVar69 * 0.0) + fVar64 * fVar44 + fVar50));
      *(float *)(lVar32 + 0x20 + lVar15) =
           fVar65 - (fVar72 * (fVar44 * 0.0 - fVar48 * 0.0) + fVar64 * fVar69 + fVar70);
      uVar41 = *(undefined8 *)(&uStack_594 + (longlong)pfVar17 * 0x10);
      puVar2 = (undefined8 *)(lVar32 + 0x24 + lVar15);
      *puVar2 = (&uStack_59c)[(longlong)pfVar17 * 8];
      puVar2[1] = uVar41;
      *(float *)(lVar32 + 0x34 + lVar15) = (&fStack_58c)[(longlong)pfVar17 * 0x10];
      *(undefined4 *)(lVar32 + 0x38 + lVar15) = 0;
      *(undefined8 *)(lVar32 + 0x40 + lVar15) = 0x20a7eff3a12c99eb;
      *(undefined1 *)(lVar32 + 0x48 + lVar15) = 0x14;
      *(undefined8 *)(lVar32 + 0x58 + lVar15) = uVar19;
      plVar23[2] = lVar15 + 0x68;
      pfVar17 = pfStack_2e8 + 0x1a;
      uStack_1b8 = uVar14;
      uVar20 = pdb_1400aede0(pfVar17,&uStack_1b8);
      pauVar21 = *(undefined1 (**) [16])(pfVar22 + 0x12);
      uVar26 = *(ulonglong *)(pfVar22 + 0x14);
      bVar27 = (byte)(uVar20 >> 0x38);
      bVar43 = bVar27 >> 1;
      auVar45 = ZEXT216(CONCAT11(bVar43,bVar43));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar15 = 0;
      uVar35 = uVar20;
      while( true ) {
        uVar35 = uVar35 & uVar26;
        auVar58 = *(undefined1 (*) [16])(*pauVar21 + uVar35);
        auVar60[0] = -(auVar58[0] == auVar45[0]);
        auVar60[1] = -(auVar58[1] == auVar45[1]);
        auVar60[2] = -(auVar58[2] == auVar45[2]);
        auVar60[3] = -(auVar58[3] == auVar45[3]);
        auVar60[4] = -(auVar58[4] == auVar45[4]);
        auVar60[5] = -(auVar58[5] == auVar45[5]);
        auVar60[6] = -(auVar58[6] == auVar45[6]);
        auVar60[7] = -(auVar58[7] == auVar45[7]);
        auVar60[8] = -(auVar58[8] == auVar45[0]);
        auVar60[9] = -(auVar58[9] == auVar45[1]);
        auVar60[10] = -(auVar58[10] == auVar45[2]);
        auVar60[0xb] = -(auVar58[0xb] == auVar45[3]);
        auVar60[0xc] = -(auVar58[0xc] == auVar45[4]);
        auVar60[0xd] = -(auVar58[0xd] == auVar45[5]);
        auVar60[0xe] = -(auVar58[0xe] == auVar45[6]);
        auVar60[0xf] = -(auVar58[0xf] == auVar45[7]);
        uVar36 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar36;
        while (uVar36 != 0) {
          uVar25 = 0;
          for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar25 = uVar25 + 1;
          }
          pauVar39 = pauVar21 + (uVar25 + uVar35 & uVar26) * -2;
          if (*(uint *)pauVar39[-2] == uVar14) goto LAB_1408c1245;
          uVar36 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar36);
        }
        auVar52[0] = -(auVar58[0] == -1);
        auVar52[1] = -(auVar58[1] == -1);
        auVar52[2] = -(auVar58[2] == -1);
        auVar52[3] = -(auVar58[3] == -1);
        auVar52[4] = -(auVar58[4] == -1);
        auVar52[5] = -(auVar58[5] == -1);
        auVar52[6] = -(auVar58[6] == -1);
        auVar52[7] = -(auVar58[7] == -1);
        auVar52[8] = -(auVar58[8] == -1);
        auVar52[9] = -(auVar58[9] == -1);
        auVar52[10] = -(auVar58[10] == -1);
        auVar52[0xb] = -(auVar58[0xb] == -1);
        auVar52[0xc] = -(auVar58[0xc] == -1);
        auVar52[0xd] = -(auVar58[0xd] == -1);
        auVar52[0xe] = -(auVar58[0xe] == -1);
        auVar52[0xf] = -(auVar58[0xf] == -1);
        if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x1f,0) & 1) != 0) || (SUB161(auVar52 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') break;
        uVar35 = uVar35 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
      if (*(longlong *)(pfVar22 + 0x16) == 0) {
        pdb_142de0610(pfVar22 + 0x12,1,pfVar17,CONCAT71((int7)(uVar35 >> 8),1));
        pauVar21 = *(undefined1 (**) [16])(pfVar22 + 0x12);
        uVar26 = *(ulonglong *)(pfVar22 + 0x14);
      }
      uVar20 = uVar20 & uVar26;
      auVar45 = *(undefined1 (*) [16])(*pauVar21 + uVar20);
      uVar36 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar45[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar36;
      if (uVar36 == 0) {
        lVar15 = 0x10;
        do {
          uVar20 = uVar20 + lVar15 & uVar26;
          auVar45 = *(undefined1 (*) [16])(*pauVar21 + uVar20);
          lVar15 = lVar15 + 0x10;
          uVar24 = (uint)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar45[0xf] >> 7) << 0xf);
        } while (uVar24 == 0);
      }
      uVar25 = 0;
      for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
        uVar25 = uVar25 + 1;
      }
      uVar35 = uVar25 + uVar20 & uVar26;
      bVar43 = (*pauVar21)[uVar35];
      if (-1 < (char)bVar43) {
        auVar45 = *pauVar21;
        uVar24 = 0;
        for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar45[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar35 = (ulonglong)uVar24;
        bVar43 = (*pauVar21)[uVar35];
      }
      bVar27 = bVar27 >> 1;
      (*pauVar21)[uVar35] = bVar27;
      pauVar21[1][uVar35 - 0x10 & uVar26] = bVar27;
      pauVar39 = pauVar21 + uVar35 * -2;
      *(uint *)pauVar21[uVar35 * -2 + -2] = uVar14;
      *(undefined8 *)(pauVar39[-2] + 8) = 0;
      *(undefined8 *)pauVar39[-1] = 8;
      *(undefined8 *)(pauVar39[-1] + 8) = 0;
      lVar15 = *(longlong *)(pfVar22 + 0x18) - _UNK_142e47bf8;
      *(ulonglong *)(pfVar22 + 0x16) =
           *(longlong *)(pfVar22 + 0x16) - ((ulonglong)bVar43 & 0xffffffffffffff01);
      *(longlong *)(pfVar22 + 0x18) = lVar15;
LAB_1408c1245:
      lVar15 = *(longlong *)(pauVar39[-1] + 8);
      if (lVar15 == *(longlong *)(pauVar39[-2] + 8)) {
        pdb_142db0920(pauVar39[-2] + 8);
      }
      *(undefined8 *)(*(longlong *)pauVar39[-1] + lVar15 * 8) = uVar19;
      *(longlong *)(pauVar39[-1] + 8) = lVar15 + 1;
      pfVar17 = pfStack_100;
    }
    fVar70 = fVar49 * fVar49;
    fVar72 = fVar53 * fVar53;
    fVar74 = fVar56 * fVar56 + fVar55 * fVar55;
    fVar50 = (float)DAT_143015ec0;
    fVar54 = DAT_143015ec0._4_4_;
    fVar68 = DAT_143015ec0._8_4_;
    fVar64 = fVar49 * fVar68 + fVar56 * fVar54 + fVar55 * fVar50;
    fVar64 = fVar64 + fVar64;
    fVar73 = fVar53 + fVar53;
    fVar65 = fVar73 * (fVar55 * 0.0 - fVar56 * 0.0) +
             fVar64 * fVar49 + (fVar72 - (fVar74 + fVar70)) * fVar68;
    fVar75 = fVar75 + fVar73 * (fVar56 * _DAT_142e3787c - fVar49 * 0.0) +
                      fVar64 * fVar55 + (fVar72 - (fVar74 + fVar70)) * fVar50;
    fVar80 = fVar80 + fVar73 * (fVar49 * 0.0 - fVar55 * _DAT_142e3787c) +
                      fVar64 * fVar56 + (fVar72 - (fVar74 + fVar70)) * fVar54;
    fVar44 = fVar65 + 0.0;
    fVar64 = fVar73 * (fVar53 * 0.0 - fVar53 * 0.0) +
             fVar64 * fVar53 + (fVar72 - (fVar74 + fVar70)) * DAT_143015ec0._12_4_ + 0.0;
    fVar65 = fVar66 + fVar65;
    fVar55 = fVar84 * fVar84;
    fVar49 = fVar67 * fVar67;
    fVar70 = fVar63 * fVar63 + fVar57 * fVar57;
    fVar66 = fVar84 * fVar68 + fVar63 * fVar54 + fVar57 * fVar50;
    fVar66 = fVar66 + fVar66;
    fVar53 = fVar67 + fVar67;
    fVar56 = fVar53 * (fVar57 * 0.0 - fVar63 * 0.0) +
             fVar66 * fVar84 + (fVar49 - (fVar70 + fVar55)) * fVar68;
    fVar50 = (float)uVar16 +
             fVar53 * (fVar63 * _DAT_142e3787c - fVar84 * 0.0) +
             fVar66 * fVar57 + (fVar49 - (fVar70 + fVar55)) * fVar50;
    fVar54 = (float)(uVar16 >> 0x20) +
             fVar53 * (fVar84 * 0.0 - fVar57 * _DAT_142e3787c) +
             fVar66 * fVar63 + (fVar49 - (fVar70 + fVar55)) * fVar54;
    fVar68 = fVar56 + 0.0;
    fVar49 = fVar53 * (fVar67 * 0.0 - fVar67 * 0.0) +
             fVar66 * fVar67 + (fVar49 - (fVar70 + fVar55)) * DAT_143015ec0._12_4_ + 0.0;
    fVar83 = fVar83 + fVar56;
    fVar55 = SQRT((fVar65 - fVar83) * (fVar65 - fVar83) +
                  (fVar80 - fVar54) * (fVar80 - fVar54) + (fVar75 - fVar50) * (fVar75 - fVar50));
    auVar46._4_4_ = fVar48;
    auVar46._0_4_ = fVar55;
    auVar46._8_4_ = fVar69;
    auVar46._12_4_ = fVar71;
    auVar47._4_12_ = auVar46._4_12_;
    auVar47._0_4_ = fVar55 / _DAT_142e3783c;
    fVar66 = (float)pub_142e32b00(auVar47._0_8_);
    uVar16 = 0;
    if (0.0 <= fVar66) {
      uVar16 = (longlong)(fVar66 - _DAT_142e36f2c) & (longlong)fVar66 >> 0x3f | (longlong)fVar66;
    }
    if (_DAT_142e36f30 < fVar66) {
      uVar16 = 0xffffffffffffffff;
    }
    pdb_140de8290(&lStack_3c0,uVar16 + 1 + (ulonglong)(uVar16 == 0),_DAT_142e3787c / fVar55,
                  &uStack_158,&UNK_143016008);
    pfStack_100 = pfStack_3b8 + lStack_3b0;
    uStack_268 = CONCAT44(fVar48,fVar55);
    uStack_358 = (ulonglong *)CONCAT44(fVar55,fVar55);
    _auStack_1d8 = ZEXT416((uint)fVar83);
    auStack_1f8 = ZEXT416((uint)fVar65);
    iVar31 = 0;
    bVar42 = true;
    uStack_1c8 = pfStack_3b8;
    pfVar17 = pfStack_3b8;
    fStack_350 = fVar69;
    fStack_34c = fVar69;
    fStack_260 = fVar69;
    fStack_25c = fVar71;
    fStack_258 = fVar57;
    fStack_254 = fVar63;
    fStack_250 = fVar84;
    fStack_24c = fVar67;
    fStack_248 = fVar75;
    fStack_244 = fVar80;
    fStack_240 = fVar44;
    fStack_23c = fVar64;
    fStack_218 = fVar54;
    fStack_214 = fVar54;
    fStack_210 = fVar49;
    fStack_20c = fVar49;
    uStack_208 = uVar11;
    uStack_200 = uVar12;
    fStack_1e8 = fVar50;
    fStack_1e4 = fVar54;
    fStack_1e0 = fVar68;
    fStack_1dc = fVar49;
    if (pfStack_3b8 != pfStack_100) {
      do {
        pfVar29 = pfVar17 + 1;
        pfVar22 = pfStack_110;
        pfVar30 = pfVar29;
        pfVar40 = pfVar17;
        if (bVar42) {
          if (pfVar29 == pfStack_100) break;
          pfVar22 = pfVar17;
          pfVar30 = pfVar17 + 2;
          pfVar40 = pfVar29;
        }
        pfVar17 = pfVar30;
        fVar66 = (*pfVar22 + *pfVar40) * _DAT_142e36f50;
        fVar49 = (*pfVar40 - *pfVar22) * _DAT_143015ed0;
        fVar48 = fVar49 * _DAT_142e36f50;
        fVar53 = fVar66 + fVar48;
        fVar48 = fVar66 - fVar48;
        fVar55 = fVar48 + fVar48 + _DAT_142e37960;
        fVar56 = fVar53 + fVar53 + _UNK_142e37964;
        fVar55 = (_DAT_142e37950 - fVar55 * fVar55) * (float)uStack_358 * _DAT_143015ee0 +
                 ((fStack_218 * fVar48 + (_DAT_142e37950 - fVar48) * fVar80) - fVar80);
        fVar56 = (_UNK_142e37954 - fVar56 * fVar56) * uStack_358._4_4_ * _UNK_143015ee4 +
                 ((fStack_214 * fVar53 + (_UNK_142e37954 - fVar53) * fVar80) - fVar80);
        fVar48 = (float)((uint)((float)uStack_268 * fVar49) & _DAT_142e377e0) * _DAT_142e37874;
        auStack_450[0] =
             CONCAT44(fVar66 * fVar83 + (_DAT_142e36f28 - fVar66) * fVar65,
                      fVar66 * fVar50 + (_DAT_142e36f28 - fVar66) * fVar75);
        fVar66 = (fVar56 + fVar55) * _DAT_142e36f50;
        uStack_158 = uStack_158 + 0xa0761d6478bd642f;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_158 ^ 0xe7037ed1a0b428db;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uStack_158;
        bVar42 = ((SUB164(auVar6 * auVar7,0) ^ SUB164(auVar6 * auVar7,8)) & 0xc0000000) == 0;
        puVar28 = &UNK_14301606f;
        if (bVar42) {
          puVar28 = &UNK_143016047;
        }
        uVar41 = 0xb9fbcd499788b2f1;
        if (bVar42) {
          uVar41 = 0xe21f7890eabecf74;
        }
        auVar61._4_4_ = fVar80;
        auVar61._0_4_ = fVar80;
        auVar61._8_4_ = fVar64;
        auVar61._12_4_ = fVar64;
        auVar62._4_12_ = auVar61._4_12_;
        auVar62._0_4_ = fVar80 + fVar66;
        pdb_140df4540(&uStack_1b8,auStack_450,auVar62._0_8_);
        pdb_140de88f0(&pfStack_5c8);
        puVar34 = puStack_5c0;
        pfVar29 = pfStack_5c8;
        uStack_2c8 = CONCAT44(uStack_1b4,uStack_1b8);
        uStack_2c0 = uStack_1b0;
        fVar49 = (float)pdb_140e02880(&uStack_158);
        fVar53 = (float)pdb_140e02880(&uStack_158);
        lStack_530 = (ulonglong)bVar42 * 2 + 0x26;
        fStack_580 = ((_DAT_142e36f28 - fVar49) * _DAT_142e382c0 + fVar49 * _DAT_142e37990) * fVar48
        ;
        if (_DAT_142e36f28 <= fStack_580) {
          fStack_580 = _DAT_142e36f28;
        }
        fStack_584 = fVar53 * _DAT_143015ef0 + (_DAT_142e36f28 - fVar53) * _DAT_142e3c670;
        if (_DAT_142e3c670 <= fStack_584) {
          fStack_584 = _DAT_142e3c670;
        }
        fStack_584 = fStack_584 * fVar48;
        uStack_500 = uStack_2c0;
        uStack_508 = uStack_2c8;
        uStack_1ac = uStack_1ac & 0xff000000;
        uStack_1b8 = uStack_1b8 & 0xffffff;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_463 = 0;
        uStack_46b = (uint7)uStack_1b8;
        uStack_464 = 0;
        fStack_56c = (float)(iVar31 + (int)uStack_308);
        pfStack_5c8 = (float *)0x1;
        uStack_5b8 = 0;
        uStack_5a8._0_4_ = 0.0;
        uStack_5a8._4_4_ = 0.0;
        uStack_59c._4_4_ = 0;
        uStack_594 = 0;
        uStack_588 = 1;
        uStack_57c = 0x13f800000;
        uStack_574 = CONCAT44(fVar56 - fVar66,fVar55 - fVar66);
        uStack_568 = uStack_568 & 0xffffffff00000000;
        uStack_55c = CONCAT44(2,(undefined4)uStack_55c);
        puStack_528 = &UNK_14330dcc1;
        uStack_520 = 0x17;
        pfStack_518 = pfVar29;
        uStack_510 = puVar34;
        uStack_4fc = 0x3f8000003f800000;
        uStack_4f4 = 0x3f800000;
        uStack_4e8 = 0;
        uStack_4e0 = 0;
        uStack_4c3 = 2;
        uStack_4c0 = 0;
        uStack_46c = 2;
        uStack_45c = 2;
        uStack_45a = 0;
        puStack_5c0 = (ulonglong *)uVar41;
        puStack_538 = puVar28;
        uVar41 = pdb_140a92040(pfStack_168);
        pdb_141490a20(&pfStack_5c8,(ulonglong)uStack_178 & 0xffffffff,uStack_108,uStack_288,
                      uStack_278,uVar41,puStack_2f8,pfStack_2e8 + 0x12);
        iVar31 = iVar31 + 1;
        bVar42 = false;
        pfStack_110 = pfVar40;
      } while (pfVar17 != pfStack_100);
    }
    uStack_1b8 = (uint)uStack_208;
    uStack_1b4 = (undefined4)((ulonglong)uStack_208 >> 0x20);
    uStack_1b0 = (undefined4)uStack_200;
    uStack_1ac = (uint)((ulonglong)uStack_200 >> 0x20);
    lStack_1a8 = CONCAT44(fStack_244,fStack_248);
    uStack_1a0 = auStack_1f8._0_4_;
    fStack_18c = fStack_318;
    uStack_19c = uStack_328;
    uStack_194 = uStack_320;
    pfStack_5c8 = (float *)CONCAT44(fStack_254,fStack_258);
    puStack_5c0 = (ulonglong *)CONCAT44(fStack_24c,fStack_250);
    uStack_5b8 = CONCAT44(fStack_1e4,fStack_1e8);
    afStack_5b0[0] = (float)auStack_1d8._0_4_;
    uStack_59c._0_4_ = fStack_338;
    afStack_5b0[1] = (float)uStack_348;
    uStack_5a8._0_4_ = (float)((ulonglong)uStack_348 >> 0x20);
    uStack_5a8._4_4_ = (float)uStack_340;
    fStack_5a0 = (float)((ulonglong)uStack_340 >> 0x20);
    pdb_140a92040(pfStack_168);
    auStack_450[0] = auStack_450[0] & 0xffffffff00000000;
    pdb_140891cc0(&UNK_143016020,0x27);
    if (lStack_3c0 != 0) {
      pub_1406abac0((byte *)uStack_1c8,lStack_3c0 << 2,4);
    }
  }
  if (uStack_118 != 0) {
    pub_1406abac0((byte *)pfStack_120,uStack_118 * 0x70,0x10);
  }
  if (lStack_290 != 0) {
    pub_1406abac0(pbStack_228,lStack_290 << 3,8);
  }
  if (pfStack_128 != (float *)0x0) {
    pub_1406abac0((byte *)puStack_220,(longlong)pfStack_128 << 4,8);
  }
  if (lStack_2e0 != 0) {
    pub_1406abac0((byte *)pfStack_2d8,lStack_2e0 * 0x50,0x10);
  }
  if (lStack_2a8 == 0) {
    return;
  }
  plVar23 = (longlong *)pdb_140e97000();
  if ((char)plVar23[0xd] != '\x01') goto LAB_1408c1c37;
  do {
    if (*plVar23 == 0) {
      *plVar23 = -1;
      pfStack_100 = (float *)plVar23;
      pdb_140e95370(plVar23 + 1,uStack_2a0);
      *(longlong *)pfStack_100 = *(longlong *)pfStack_100 + 1;
      return;
    }
LAB_1408c1c2b:
    plVar23 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408c1c37:
    plVar23 = (longlong *)pdb_142dde6e0(plVar23,0);
  } while (plVar23 != (longlong *)0x0);
LAB_1408c1c5f:
  uVar35 = pdb_142dc7890(&UNK_14330e598);
LAB_1408c1c6b:
  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar35,uStack_118,&UNK_1430160c8);
}

