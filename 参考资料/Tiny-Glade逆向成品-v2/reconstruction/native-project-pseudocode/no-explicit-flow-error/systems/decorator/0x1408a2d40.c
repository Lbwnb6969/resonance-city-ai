// VA 0x1408a2d40, PDB extent 10881 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::gen_stone_stair_floors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::gen_stone_stair_floors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 10881 */

void pdb_1408a2d40(undefined8 param_1,float *param_2,longlong param_3,float *param_4,
                  longlong param_5,float *param_6,longlong param_7,longlong param_8,
                  undefined8 param_9,uint param_10,int *param_11,float *param_12,longlong param_13)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *pfVar10;
  byte *pbVar11;
  int iVar12;
  ulonglong uVar13;
  float *pfVar14;
  float **ppfVar15;
  ulonglong uVar16;
  float *pfVar17;
  bool bVar18;
  float *pfVar19;
  undefined8 uVar20;
  float *pfVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *arg0;
  float *unaff_R14;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  undefined8 uStack_458;
  undefined8 uStack_450;
  float **ppfStack_448;
  float *pfStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined1 auStack_428 [16];
  longlong lStack_418;
  float *pfStack_410;
  float *pfStack_408;
  longlong lStack_400;
  float *pfStack_3f8;
  float *pfStack_3f0;
  float *pfStack_3e8;
  longlong lStack_3e0;
  float *pfStack_3d8;
  float *pfStack_3d0;
  float *pfStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  float *pfStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  float *pfStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  float fStack_350;
  longlong lStack_348;
  longlong lStack_340;
  float *pfStack_338;
  byte *pbStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  float fStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float *pfStack_298;
  float *pfStack_290;
  float *pfStack_288;
  longlong lStack_280;
  float *pfStack_278;
  float *pfStack_270;
  float *pfStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  float *pfStack_250;
  float *pfStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  float *pfStack_228;
  float **ppfStack_220;
  float *pfStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  byte *pbStack_200;
  longlong lStack_1f8;
  byte *pbStack_1f0;
  ulonglong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulonglong uStack_1d0;
  float *pfStack_1c8;
  ulonglong uStack_1c0;
  float *pfStack_1b8;
  float fStack_1ac;
  float *pfStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  float *pfStack_190;
  ulonglong uStack_188;
  longlong lStack_180;
  byte *pbStack_178;
  ulonglong uStack_170;
  undefined1 uStack_161;
  ulonglong uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  uint uStack_144;
  float *pfStack_140;
  float *pfStack_138;
  ulonglong uStack_130;
  byte *pbStack_128;
  ulonglong uStack_120;
  bool bStack_111;
  ulonglong uStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  fVar35 = _DAT_142e36f28;
  uStack_f0 = 0xfffffffffffffffe;
  if (*param_11 == 1) {
    fVar26 = _DAT_142e3c608 - (float)param_11[1];
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    uVar13 = (ulonglong)(uint)fVar26;
  }
  else {
    uVar13 = 0;
  }
  if (param_11[2] == 1) {
    fVar26 = _DAT_142e3c608 - (float)param_11[3];
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    uVar13 = uVar13 | (ulonglong)(uint)fVar26 << 0x20;
  }
  uStack_2a8 = (undefined4)uVar13;
  uStack_2ac = (undefined4)(uVar13 >> 0x20);
  fStack_2b0 = _DAT_142e36f28 / (float)(param_7 - 1);
  pfStack_270 = param_6 + param_7 * 3;
  pfStack_278 = param_6;
  pfStack_268 = (float *)0x0;
  uStack_260 = &uStack_2a8;
  uStack_258 = &uStack_2ac;
  pfStack_250 = &fStack_2b0;
  uStack_3c0 = param_1;
  uStack_2c8 = param_3;
  pfStack_1c8 = param_2;
  pfStack_140 = param_4;
  pdb_141497a90(&lStack_418,&pfStack_278);
  uStack_158 = pfStack_408;
  if (pfStack_408 == (float *)0x0) {
    pfStack_278 = (float *)0x0;
    pfStack_270 = (float *)0x4;
LAB_1408a49b5:
    pfStack_268 = (float *)0x0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(1,uStack_158,&UNK_143014210);
  }
  uStack_160 = (longlong)pfStack_408 * 4;
  pdb_14007ee60();
  pfVar9 = (float *)pub_1406abab0((longlong)pfStack_408 * 0xc,4);
  if (pfVar9 == (float *)0x0) {
    uStack_f1 = 1;
    pdb_142dc7e2a(4,(longlong)pfStack_408 * 0xc);
    goto LAB_1408a4a2d;
  }
  pfStack_278 = pfStack_408;
  pfStack_268 = (float *)0x0;
  pfStack_270 = pfVar9;
  if (pfStack_408 == (float *)0x1) goto LAB_1408a49b5;
  fVar26 = pfStack_410[4];
  fVar33 = pfStack_410[1];
  pfStack_1b8 = pfStack_410;
  fVar37 = pfStack_410[5] - (float)*(undefined8 *)(pfStack_410 + 2);
  fVar38 = (float)((ulonglong)*(undefined8 *)(pfStack_410 + 2) >> 0x20) - *pfStack_410;
  uStack_3b8 = (float *)CONCAT44(fVar38,_DAT_142e37820 ^ (uint)fVar37);
  pdb_140df4520(&uStack_318,&uStack_3b8);
  pfVar9 = pfStack_268;
  fVar34 = fStack_310 * (fVar26 - fVar33) - fVar37 * uStack_318._4_4_;
  fVar37 = (float)uStack_318 * fVar37 - fVar38 * fStack_310;
  fVar33 = fVar38 * uStack_318._4_4_ - (fVar26 - fVar33) * (float)uStack_318;
  fVar38 = fVar35 / SQRT(fVar33 * fVar33 + fVar37 * fVar37 + fVar34 * fVar34);
  bVar18 = (int)fVar38 - 1U < 0x7fffff ||
           (int)ABS(fVar38) - 0x800000U < 0x7f000000 && -1 < (int)fVar38;
  fVar38 = (float)((uint)fVar38 ^ _DAT_142e37820);
  fVar26 = _DAT_142e377f0;
  if (bVar18) {
    fVar26 = fVar33 * fVar38;
  }
  if (pfStack_268 == pfStack_278) {
    pdb_142db7820(&pfStack_278);
  }
  uVar29 = (uint)bVar18;
  uVar27 = (int)(uVar29 << 0x1f) >> 0x1f;
  uVar29 = (int)(uVar29 << 0x1f) >> 0x1f;
  puStack_320 = (undefined8 *)&uStack_2f0;
  pfVar14 = (float *)((longlong)pfVar9 * 3);
  *(ulonglong *)(pfStack_270 + (longlong)pfVar9 * 3) =
       CONCAT44(~uVar29 & _UNK_142e37b54,~uVar27 & _DAT_142e37b50) |
       CONCAT44((uint)(fVar37 * fVar38) & uVar29,(uint)(fVar34 * fVar38) & uVar27);
  pfStack_270[(longlong)pfVar9 * 3 + 2] = fVar26;
  uVar42 = _UNK_142e37b54;
  uVar27 = _DAT_142e37b50;
  uVar29 = _DAT_142e37820;
  fVar26 = _DAT_142e377f0;
  pfStack_138 = pfStack_1b8 + (longlong)uStack_158 * 3;
  bVar18 = true;
  arg0 = &uStack_3b8;
  pfVar10 = pfStack_1b8;
  while (pfStack_268 = (float *)((longlong)pfVar9 + 1), pfVar10 != pfStack_138) {
    pfVar9 = pfVar10 + 3;
    pfVar17 = pfVar10;
    pfVar21 = pfVar9;
    pfVar23 = pfVar14;
    if (bVar18) {
      if ((pfVar9 == pfStack_138) || (pfVar10 + 6 == pfStack_138)) break;
      unaff_R14 = pfVar10;
      pfVar17 = pfVar10 + 6;
      pfVar21 = pfVar10 + 9;
      pfVar23 = pfVar9;
    }
    pfVar14 = pfVar17;
    fVar33 = pfVar14[1];
    fVar34 = unaff_R14[1];
    fVar38 = pfVar14[2] - unaff_R14[2];
    fVar39 = *pfVar14 - *unaff_R14;
    uStack_3b8 = (float *)CONCAT44(fVar39,(uint)fVar38 ^ uVar29);
    pdb_140df4520(&uStack_318,arg0);
    pfVar9 = pfStack_268;
    fVar37 = fStack_310 * (fVar33 - fVar34) - fVar38 * uStack_318._4_4_;
    fVar38 = fVar38 * (float)uStack_318 - fVar39 * fStack_310;
    fVar34 = fVar39 * uStack_318._4_4_ - (fVar33 - fVar34) * (float)uStack_318;
    fVar39 = fVar35 / SQRT(fVar34 * fVar34 + fVar38 * fVar38 + fVar37 * fVar37);
    bVar18 = (int)fVar39 - 1U < 0x7fffff ||
             (int)ABS(fVar39) - 0x800000U < 0x7f000000 && -1 < (int)fVar39;
    fVar39 = (float)((uint)fVar39 ^ uVar29);
    fVar33 = fVar26;
    if (bVar18) {
      fVar33 = fVar34 * fVar39;
    }
    if (pfStack_268 == pfStack_278) {
      pdb_142db7820(&pfStack_278);
    }
    uVar30 = (uint)bVar18;
    uVar28 = (int)(uVar30 << 0x1f) >> 0x1f;
    uVar30 = (int)(uVar30 << 0x1f) >> 0x1f;
    *(ulonglong *)(pfStack_270 + (longlong)pfVar9 * 3) =
         CONCAT44(~uVar30 & uVar42,~uVar28 & uVar27) |
         CONCAT44((uint)(fVar38 * fVar39) & uVar30,(uint)(fVar37 * fVar39) & uVar28);
    pfStack_270[(longlong)pfVar9 * 3 + 2] = fVar33;
    bVar18 = false;
    pfVar10 = pfVar21;
    unaff_R14 = pfVar23;
  }
  fVar26 = pfStack_138[-5];
  fVar33 = pfStack_138[-2];
  fVar37 = (float)*(undefined8 *)(pfStack_138 + -4) - pfStack_138[-1];
  fVar38 = pfStack_138[-6] - (float)((ulonglong)*(undefined8 *)(pfStack_138 + -4) >> 0x20);
  uStack_3b8 = (float *)CONCAT44(fVar38,_DAT_142e37820 ^ (uint)fVar37);
  pdb_140df4520(&uStack_318,&uStack_3b8);
  pfVar9 = pfStack_268;
  fVar34 = fStack_310 * (fVar26 - fVar33) - fVar37 * uStack_318._4_4_;
  fVar37 = (float)uStack_318 * fVar37 - fVar38 * fStack_310;
  fVar33 = fVar38 * uStack_318._4_4_ - (fVar26 - fVar33) * (float)uStack_318;
  fVar35 = fVar35 / SQRT(fVar33 * fVar33 + fVar37 * fVar37 + fVar34 * fVar34);
  bVar18 = (int)fVar35 - 1U < 0x7fffff ||
           (int)ABS(fVar35) - 0x800000U < 0x7f000000 && -1 < (int)fVar35;
  fVar35 = (float)((uint)fVar35 ^ _DAT_142e37820);
  fVar26 = _DAT_142e377f0;
  if (bVar18) {
    fVar26 = fVar33 * fVar35;
  }
  if (pfStack_268 == pfStack_278) {
    pdb_142db7820(&pfStack_278);
  }
  pfVar14 = uStack_158;
  uVar29 = (uint)bVar18;
  uVar27 = (int)(uVar29 << 0x1f) >> 0x1f;
  uVar29 = (int)(uVar29 << 0x1f) >> 0x1f;
  *(ulonglong *)(pfStack_270 + (longlong)pfVar9 * 3) =
       CONCAT44(~uVar29 & _UNK_142e37b54,~uVar27 & _DAT_142e37b50) |
       CONCAT44((uint)(fVar37 * fVar35) & uVar29,(uint)(fVar34 * fVar35) & uVar27);
  pfStack_270[(longlong)pfVar9 * 3 + 2] = fVar26;
  pfStack_288 = pfStack_270;
  pfStack_290 = pfStack_278;
  if (uStack_158 < (float *)0x555555555555556) {
    arg0 = (undefined8 *)((longlong)uStack_158 * 0x18);
    pdb_14007ee60();
    uVar20 = 4;
    pfVar10 = (float *)pub_1406abab0((ulonglong)arg0,4);
    if (pfVar10 != (float *)0x0) {
      lVar22 = (longlong)pfVar14 * 6;
      uStack_188 = 0;
      lStack_198 = lVar22;
      pfStack_190 = pfVar10;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0((ulonglong)arg0,4);
      if (pbVar11 == (byte *)0x0) {
        uStack_f3 = 1;
        lStack_340 = lVar22;
        pdb_142dc7e2a(4,arg0);
        goto LAB_1408a4a2d;
      }
      uStack_170 = 0;
      uVar13 = (longlong)pfVar14 * 0x30;
      lStack_180 = lVar22;
      pbStack_178 = pbVar11;
      if (pfVar14 < (float *)0x2aaaaaaaaaaaaab) {
        pdb_14007ee60();
        pbVar11 = pub_1406abab0(uVar13,4);
        uVar16 = uStack_160;
        if (pbVar11 != (byte *)0x0) {
          uStack_110 = uStack_160;
          uStack_100 = 0;
          pbStack_108 = pbVar11;
          pdb_14007ee60();
          pbVar11 = pub_1406abab0(uVar13,4);
          if (pbVar11 == (byte *)0x0) {
            uStack_f5 = 1;
            pdb_142dc7e2a(4,uVar13);
            goto LAB_1408a4a2d;
          }
          pfStack_298 = pfVar10;
          uStack_130 = uVar16;
          pbStack_128 = pbVar11;
          uStack_120 = 0;
          bStack_111 = param_13 == 0;
          if (param_13 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_143014228);
          }
          lStack_280 = lStack_418;
          pfStack_3d8 = pfStack_1c8 + uStack_2c8;
          pfStack_3d0 = pfStack_140 + param_5 * 2;
          pfStack_3c8 = pfStack_288 + (longlong)pfVar9 * 3 + 3;
          lStack_3e0 = param_13 << 2;
          uStack_1a0 = 0;
          lVar22 = 0;
          fStack_1ac = 0.0;
          auStack_428 = ZEXT816(0);
          fVar39 = 0.0;
          fVar40 = 0.0;
          bVar18 = false;
          uStack_144 = 0;
          pfVar9 = pfStack_288;
          pfVar14 = pfStack_140;
          pfVar10 = pfStack_1b8;
          fVar35 = 0.0;
          fVar26 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar37 = _DAT_142e3c608 - *param_12;
          fVar38 = 0.0;
          while( true ) {
            if (pfVar10 == pfStack_138) {
              ppfVar15 = &pfStack_278;
              pfVar17 = (float *)0x0;
              pfVar21 = pfStack_138;
            }
            else {
              pfVar19 = pfVar14;
              pfVar23 = pfStack_3d8;
              pfVar21 = pfVar10 + 3;
              if ((pfStack_1c8 == pfStack_3d8) ||
                 (pfVar23 = pfStack_1c8 + 1, pfVar19 = pfStack_3d0, pfVar14 == pfStack_3d0)) {
                ppfVar15 = &pfStack_278;
                pfVar17 = (float *)0x0;
                pfVar14 = pfVar19;
                pfStack_1c8 = pfVar23;
              }
              else {
                uStack_458 = *(undefined8 *)pfVar10;
                uStack_450 = 0;
                fStack_29c = pfVar10[2];
                pfStack_278 = pfStack_1c8;
                ppfVar15 = (float **)&uStack_318;
                pfVar17 = pfVar14;
                pfVar14 = pfVar14 + 2;
                pfStack_1c8 = pfVar23;
              }
            }
            *ppfVar15 = pfVar17;
            pfVar10 = pfStack_278;
            if ((pfStack_278 == (float *)0x0) || (pfVar9 == pfStack_3c8)) break;
            pfVar17 = (float *)CONCAT44(uStack_318._4_4_,(float)uStack_318);
            uStack_3b8 = pfStack_278;
            fStack_2a4 = fStack_29c;
            pfStack_338 = pfVar9;
            if (pfStack_278 == (float *)0x0) goto LAB_1408a41aa;
            if (lStack_3e0 == lVar22) goto LAB_1408a41aa;
            fVar36 = _DAT_142e3c608 - *(float *)((longlong)param_12 + lVar22);
            uStack_318._4_4_ = *pfVar17;
            uStack_318._0_4_ = -pfVar17[1];
            lStack_400 = lVar22;
            pfStack_3f8 = pfVar21;
            pfStack_3f0 = pfVar14;
            pfStack_3e8 = pfVar9 + 3;
            pdb_140df4520(&pfStack_278);
            uVar13 = uStack_100;
            fVar41 = *pfVar10;
            fVar31 = fVar41 * SUB84(pfStack_278,0) * _DAT_142e36f60;
            fVar32 = fVar41 * (float)((ulonglong)pfStack_278 >> 0x20) * _UNK_142e36f64;
            fVar41 = pfStack_270._0_4_ * fVar41 * _DAT_142e36f50;
            fStack_478 = (float)uStack_458;
            fStack_474 = (float)((ulonglong)uStack_458 >> 0x20);
            fStack_470 = (float)uStack_450;
            fStack_46c = (float)((ulonglong)uStack_450 >> 0x20);
            uStack_158 = (float *)CONCAT44(fStack_474 - fVar32,fStack_478 - fVar31);
            fStack_150 = fStack_470 - _UNK_142e36f68 * 0.0;
            fStack_14c = fStack_46c - _UNK_142e36f6c * 0.0;
            pfStack_140 = (float *)CONCAT44(pfStack_140._4_4_,fStack_2a4 - fVar41);
            uStack_2c8 = CONCAT44(fVar32 + fStack_474,fVar31 + fStack_478);
            fStack_2c0 = _UNK_142e36f68 * 0.0 + fStack_470;
            fStack_2bc = _UNK_142e36f6c * 0.0 + fStack_46c;
            fVar41 = fVar41 + fStack_2a4;
            if (0.0 < fVar37 != 0.0 < fVar36) {
              fVar37 = fVar37 / (fVar37 - fVar36);
              uVar20 = *(undefined8 *)pfVar9;
              fVar31 = (float)uStack_100;
              fStack_2a0 = pfVar9[2] * fVar37;
              if (bVar18) {
                if (lStack_198 - uStack_1a0 < 6) {
                  pdb_142d7f1b0(&lStack_198,uStack_1a0,6,4,4);
                  pfStack_298 = pfStack_190;
                  uStack_1a0 = uStack_188;
                }
                *(ulonglong *)(pfStack_298 + uStack_1a0) = uStack_160;
                pfStack_298[uStack_1a0 + 2] = fVar31;
                pfStack_298[uStack_1a0 + 3] = fVar31;
                pfStack_298[uStack_1a0 + 4] = (float)(uStack_160 >> 0x20);
                pfStack_298[uStack_1a0 + 5] = (float)((int)fVar31 + 1);
                uStack_1a0 = uStack_1a0 + 6;
                uStack_188 = uStack_1a0;
              }
              uVar16 = uStack_100;
              if (0.0 < fVar36) {
                uStack_160 = uVar13 & 0xffffffff | (ulonglong)(uint)((int)fVar31 + 1) << 0x20;
              }
              bVar18 = 0.0 < fVar36;
              if (uStack_100 == uStack_110) {
                pdb_142db7820(&uStack_110);
              }
              fVar31 = _DAT_142e36f28 - fVar37;
              fVar32 = fVar37 * (float)uStack_158 + fVar35 * fVar31;
              fVar26 = fVar37 * uStack_158._4_4_ + fVar26 * fVar31;
              fVar35 = fVar37 * pfStack_140._0_4_ + fVar38 * fVar31;
              *(ulonglong *)(pbStack_108 + uVar16 * 0xc) = CONCAT44(fVar26,fVar32);
              *(float *)(pbStack_108 + uVar16 * 0xc + 8) = fVar35;
              uVar13 = uVar16 + 1;
              if (uVar13 == uStack_110) {
                uStack_100 = uVar13;
                pdb_142db7820(&uStack_110);
              }
              uVar1 = uStack_120;
              fVar33 = fVar37 * (float)uStack_2c8 + fVar33 * fVar31;
              fVar34 = fVar37 * uStack_2c8._4_4_ + fVar34 * fVar31;
              fVar38 = fVar37 * fVar41 + fStack_1ac * fVar31;
              *(ulonglong *)(pbStack_108 + uVar13 * 0xc) = CONCAT44(fVar34,fVar33);
              *(float *)(pbStack_108 + uVar13 * 0xc + 8) = fVar38;
              uStack_100 = uVar16 + 2;
              if (uStack_120 == uStack_130) {
                pdb_142db7820(&uStack_130);
              }
              fStack_468 = (float)uVar20;
              fStack_464 = (float)((ulonglong)uVar20 >> 0x20);
              fVar39 = fVar37 * fStack_468 + fVar39 * fVar31;
              fVar40 = fVar37 * fStack_464 + fVar40 * fVar31;
              fVar37 = auStack_428._0_4_ * fVar31 + fStack_2a0;
              *(ulonglong *)(pbStack_128 + uVar1 * 0xc) = CONCAT44(fVar40,fVar39);
              *(float *)(pbStack_128 + uVar1 * 0xc + 8) = fVar37;
              uVar13 = uVar1 + 1;
              if (uVar13 == uStack_130) {
                uStack_120 = uVar13;
                pdb_142db7820(&uStack_130);
              }
              uVar16 = uStack_100;
              *(ulonglong *)(pbStack_128 + uVar13 * 0xc) = CONCAT44(fVar40,fVar39);
              *(float *)(pbStack_128 + uVar13 * 0xc + 8) = fVar37;
              uStack_120 = uVar1 + 2;
              iVar12 = (int)uStack_100;
              if (uStack_144 == 1) {
                if (lStack_180 - uStack_170 < 6) {
                  pdb_142d7f1b0(&lStack_180,uStack_170,6,4,4);
                }
                *(ulonglong *)(pbStack_178 + uStack_170 * 4) = uStack_1c0;
                *(int *)(pbStack_178 + uStack_170 * 4 + 8) = iVar12;
                *(int *)(pbStack_178 + uStack_170 * 4 + 0xc) = iVar12;
                *(int *)(pbStack_178 + uStack_170 * 4 + 0x10) = (int)(uStack_1c0 >> 0x20);
                *(uint *)(pbStack_178 + uStack_170 * 4 + 0x14) = iVar12 + 1U;
                uStack_170 = uStack_170 + 6;
              }
              uVar13 = uStack_100;
              if (0.0 < fVar36) {
                uStack_1c0 = uVar16 & 0xffffffff | (ulonglong)(iVar12 + 1U) << 0x20;
              }
              fVar33 = fVar33 + _DAT_143007800;
              fVar34 = fVar34 + _UNK_143007804;
              if (uStack_100 == uStack_110) {
                pdb_142db7820(&uStack_110);
              }
              *(ulonglong *)(pbStack_108 + uVar13 * 0xc) = CONCAT44(fVar34,fVar33);
              *(float *)(pbStack_108 + uVar13 * 0xc + 8) = fVar38;
              uVar16 = uVar13 + 1;
              fVar32 = fVar32 + _DAT_143007800;
              fVar26 = fVar26 + _UNK_143007804;
              if (uVar16 == uStack_110) {
                uStack_100 = uVar16;
                pdb_142db7820(&uStack_110);
              }
              uVar1 = uStack_120;
              *(ulonglong *)(pbStack_108 + uVar16 * 0xc) = CONCAT44(fVar26,fVar32);
              *(float *)(pbStack_108 + uVar16 * 0xc + 8) = fVar35;
              uStack_100 = uVar13 + 2;
              if (uStack_120 == uStack_130) {
                pdb_142db7820(&uStack_130);
              }
              uVar27 = (uint)fVar39 ^ _DAT_142e37820;
              uVar42 = (uint)fVar40 ^ _UNK_142e37824;
              uVar29 = (uint)fVar37 ^ _DAT_142e37820;
              *(ulonglong *)(pbStack_128 + uVar1 * 0xc) = CONCAT44(uVar42,uVar27);
              *(uint *)(pbStack_128 + uVar1 * 0xc + 8) = uVar29;
              uVar13 = uVar1 + 1;
              if (uVar13 == uStack_130) {
                uStack_120 = uVar13;
                pdb_142db7820(&uStack_130);
              }
              *(ulonglong *)(pbStack_128 + uVar13 * 0xc) = CONCAT44(uVar42,uVar27);
              *(uint *)(pbStack_128 + uVar13 * 0xc + 8) = uVar29;
              uStack_120 = uVar1 + 2;
              uStack_144 = (uint)bVar18;
            }
            uVar13 = uStack_100;
            if (0.0 < fVar36) {
              fVar35 = (float)uStack_100;
              if (bVar18) {
                if (lStack_198 - uStack_1a0 < 6) {
                  pdb_142d7f1b0(&lStack_198,uStack_1a0,6,4,4);
                  uStack_1a0 = uStack_188;
                }
                *(ulonglong *)(pfStack_190 + uStack_1a0) = uStack_160;
                pfStack_190[uStack_1a0 + 2] = fVar35;
                pfStack_190[uStack_1a0 + 3] = fVar35;
                pfStack_190[uStack_1a0 + 4] = (float)(uStack_160 >> 0x20);
                pfStack_298 = pfStack_190;
                pfStack_190[uStack_1a0 + 5] = (float)((int)fVar35 + 1U);
                uStack_1a0 = uStack_1a0 + 6;
                uStack_188 = uStack_1a0;
                uVar16 = uStack_100;
                if (uStack_100 == uStack_110) {
LAB_1408a3e3c:
                  uVar16 = uStack_100;
                  pdb_142db7820(&uStack_110);
                }
              }
              else {
                uVar16 = uStack_100;
                if (uStack_100 == uStack_110) goto LAB_1408a3e3c;
              }
              *(float **)(pbStack_108 + uVar16 * 0xc) = uStack_158;
              *(float *)(pbStack_108 + uVar16 * 0xc + 8) = pfStack_140._0_4_;
              uVar1 = uVar16 + 1;
              if (uVar1 == uStack_110) {
                uStack_100 = uVar1;
                pdb_142db7820(&uStack_110);
              }
              uVar2 = uStack_120;
              *(longlong *)(pbStack_108 + uVar1 * 0xc) = uStack_2c8;
              *(float *)(pbStack_108 + uVar1 * 0xc + 8) = fVar41;
              uStack_100 = uVar16 + 2;
              uStack_358 = *(undefined8 *)pfVar9;
              fStack_350 = pfVar9[2];
              pfStack_270 = (float *)CONCAT44(pfStack_270._4_4_,pfVar9[2]);
              pfStack_278 = *(float **)pfVar9;
              if (uStack_120 == uStack_130) {
                pdb_142db7820(&uStack_130);
              }
              *(float *)(pbStack_128 + uVar2 * 0xc + 8) = pfStack_270._0_4_;
              *(float **)(pbStack_128 + uVar2 * 0xc) = pfStack_278;
              uVar16 = uVar2 + 1;
              if (uVar16 == uStack_130) {
                uStack_120 = uVar16;
                pdb_142db7820(&uStack_130);
              }
              uVar1 = uStack_100;
              *(float *)(pbStack_128 + uVar16 * 0xc + 8) = fStack_350;
              *(undefined8 *)(pbStack_128 + uVar16 * 0xc) = uStack_358;
              uStack_120 = uVar2 + 2;
              iVar12 = (int)uStack_100;
              if (uStack_144 == 1) {
                if (lStack_180 - uStack_170 < 6) {
                  pdb_142d7f1b0(&lStack_180,uStack_170,6,4,4);
                }
                *(ulonglong *)(pbStack_178 + uStack_170 * 4) = uStack_1c0;
                *(int *)(pbStack_178 + uStack_170 * 4 + 8) = iVar12;
                *(int *)(pbStack_178 + uStack_170 * 4 + 0xc) = iVar12;
                *(int *)(pbStack_178 + uStack_170 * 4 + 0x10) = (int)(uStack_1c0 >> 0x20);
                *(uint *)(pbStack_178 + uStack_170 * 4 + 0x14) = iVar12 + 1U;
                uStack_170 = uStack_170 + 6;
              }
              uVar16 = uStack_100;
              fVar26 = (float)uStack_2c8 + _DAT_143007800;
              fVar33 = uStack_2c8._4_4_ + _UNK_143007804;
              if (uStack_100 == uStack_110) {
                pdb_142db7820(&uStack_110);
              }
              *(ulonglong *)(pbStack_108 + uVar16 * 0xc) = CONCAT44(fVar33,fVar26);
              *(float *)(pbStack_108 + uVar16 * 0xc + 8) = fVar41;
              uVar2 = uVar16 + 1;
              fVar26 = (float)uStack_158 + _DAT_143007800;
              fVar33 = uStack_158._4_4_ + _UNK_143007804;
              if (uVar2 == uStack_110) {
                uStack_100 = uVar2;
                pdb_142db7820(&uStack_110);
              }
              uVar7 = uStack_120;
              *(ulonglong *)(pbStack_108 + uVar2 * 0xc) = CONCAT44(fVar33,fVar26);
              *(float *)(pbStack_108 + uVar2 * 0xc + 8) = pfStack_140._0_4_;
              uStack_100 = uVar16 + 2;
              uVar20 = *(undefined8 *)pfVar9;
              fVar26 = pfVar9[2];
              if (uStack_120 == uStack_130) {
                pdb_142db7820(&uStack_130);
              }
              uVar29 = (uint)fVar26 ^ _DAT_142e37820;
              *(ulonglong *)(pbStack_128 + uVar7 * 0xc) =
                   CONCAT44((uint)((ulonglong)uVar20 >> 0x20) ^ _UNK_142e37824,
                            (uint)uVar20 ^ _DAT_142e37820);
              *(uint *)(pbStack_128 + uVar7 * 0xc + 8) = uVar29;
              uVar16 = uVar7 + 1;
              uVar20 = *(undefined8 *)pfVar9;
              fVar26 = pfVar9[2];
              if (uVar16 == uStack_130) {
                uStack_120 = uVar16;
                pdb_142db7820(&uStack_130);
              }
              uStack_160 = uVar13 & 0xffffffff | (ulonglong)((int)fVar35 + 1U) << 0x20;
              uStack_1c0 = uVar1 & 0xffffffff | (ulonglong)(iVar12 + 1U) << 0x20;
              uVar29 = (uint)fVar26 ^ _DAT_142e37820;
              *(ulonglong *)(pbStack_128 + uVar16 * 0xc) =
                   CONCAT44((uint)((ulonglong)uVar20 >> 0x20) ^ _UNK_142e37824,
                            (uint)uVar20 ^ _DAT_142e37820);
              *(uint *)(pbStack_128 + uVar16 * 0xc + 8) = uVar29;
              uStack_120 = uVar7 + 2;
              bVar18 = true;
              uStack_144 = 1;
            }
            fVar39 = (float)*(undefined8 *)pfVar9;
            fVar40 = (float)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
            auStack_428 = ZEXT416((uint)pfVar9[2]);
            lVar22 = lStack_400 + 4;
            fStack_1ac = fVar41;
            pfVar9 = pfStack_3e8;
            pfVar14 = pfStack_3f0;
            pfVar10 = pfStack_3f8;
            fVar35 = (float)uStack_158;
            fVar26 = uStack_158._4_4_;
            fVar33 = (float)uStack_2c8;
            fVar34 = uStack_2c8._4_4_;
            fVar37 = fVar36;
            fVar38 = pfStack_140._0_4_;
          }
          uStack_3b8 = (float *)0x0;
LAB_1408a41aa:
          if (lStack_280 != 0) {
            pub_1406abac0((byte *)pfStack_1b8,lStack_280 * 0xc,4);
          }
          pfVar9 = pfStack_190;
          uVar13 = uStack_1a0;
          if (uStack_1a0 == 0) goto LAB_1408a481d;
          plVar4 = *(longlong **)(param_8 + 0xe0);
          lVar22 = plVar4[2];
          if ((ulonglong)(*plVar4 - lVar22) < uStack_1a0) {
            pdb_142d7f1b0(plVar4,lVar22,uStack_1a0,0x10,0x10);
            lVar22 = plVar4[2];
          }
          uVar8 = _UNK_142e4e65c;
          lVar5 = plVar4[1];
          lVar25 = 0;
          lVar24 = 0;
          do {
            uVar16 = (ulonglong)*(uint *)((longlong)pfVar9 + lVar25);
            if (uStack_100 <= uVar16) {
              uStack_158 = (float *)(lVar22 - lVar24);
              pfStack_138 = (float *)plVar4;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar16,uStack_100,&UNK_143315fb8);
            }
            uVar20 = *(undefined8 *)(pbStack_108 + uVar16 * 0xc + 4);
            puVar3 = (undefined4 *)(lVar22 * 0x10 + lVar5 + lVar25 * 4);
            *puVar3 = *(undefined4 *)(pbStack_108 + uVar16 * 0xc);
            puVar3[1] = (int)uVar20;
            puVar3[2] = (int)((ulonglong)uVar20 >> 0x20);
            puVar3[3] = uVar8;
            lVar24 = lVar24 + -1;
            lVar25 = lVar25 + 4;
          } while (-lVar24 != uVar13);
          plVar4[2] = lVar22 - lVar24;
          uVar16 = uVar13 / 6;
          ppfStack_220 = (float **)(uVar16 * 6);
          pfStack_218 = pfVar9 + uVar16 * 6;
          uStack_1d0 = uStack_170 / 6;
          lStack_1f8 = uStack_1d0 * 6;
          pbStack_1f0 = pbStack_178 + uStack_1d0 * 0x18;
          uStack_210 = uVar13 % 6;
          uStack_1e8 = uStack_170 % 6;
          if (uVar16 <= uStack_1d0) {
            uStack_1d0 = uVar16;
          }
          pfStack_278 = (float *)0x0;
          pfStack_250 = (float *)0x0;
          pfStack_228 = pfVar9;
          uStack_208 = 6;
          pbStack_200 = pbStack_178;
          uStack_1e0 = 6;
          uStack_1d8 = 0;
          pdb_141497490(&pfStack_338,&pfStack_278);
          pdb_140b080a0(&pfStack_278,pbStack_330,uStack_328);
          pdb_140b08030(&uStack_318,&pfStack_278,pbStack_108,uStack_100);
          pdb_1414ecb70(&pfStack_278,&uStack_318,pbStack_128,uStack_120);
          pdb_140b07580(&uStack_3b8,&pfStack_278,uStack_3c0,&UNK_143014240,0x11);
          if ((float)uStack_3b8 == 1.54143e-44) {
            uStack_158 = pfStack_3b0;
            pfStack_138 = (float *)CONCAT44(uStack_3a4,uStack_3a8);
            pfStack_268 = (float *)CONCAT44(uStack_394,uStack_398);
            pfStack_278 = (float *)0x1;
            pfStack_270 = (float *)0x1;
            pdb_14007ee60();
            pfStack_1a8 = (float *)pub_1406abab0(0x18,8);
            pfStack_140 = pfStack_1a8;
            if (pfStack_1a8 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x18);
            }
            *(float **)(pfStack_1a8 + 4) = pfStack_268;
            *(float **)pfStack_1a8 = pfStack_278;
            *(float **)(pfStack_1a8 + 2) = pfStack_270;
            pfVar9 = _DAT_142e4e650;
            if (CONCAT44(uStack_39c,uStack_3a0) != 0) {
              plVar4 = *(longlong **)(param_8 + 200);
              lVar22 = 0;
              pfVar14 = (float *)CONCAT44(_UNK_142e4e65c,_UNK_142e4e658);
              do {
                ppfStack_448 = *(float ***)((longlong)pfStack_138 + lVar22);
                pfStack_440 = (float *)((longlong *)((longlong)pfStack_138 + lVar22))[1];
                puVar3 = (undefined4 *)((longlong)pfStack_138 + lVar22 + 0x10);
                uStack_438 = *puVar3;
                uStack_434 = puVar3[1];
                uStack_430 = puVar3[2];
                uStack_42c = puVar3[3];
                uVar29 = pdb_140b07570(&ppfStack_448);
                uVar27 = (uVar29 / 3 - 1) + (uint)(uVar29 / 3 == 0);
                uVar29 = 0x1f;
                if (uVar27 != 0) {
                  for (; uVar27 >> uVar29 == 0; uVar29 = uVar29 - 1) {
                  }
                }
                iVar12 = 0;
                if ((uVar29 ^ 0x1f) < 0x1f) {
                  iVar12 = 0x1e - (uVar29 ^ 0x1f);
                }
                uVar8 = pdb_1409012c0(iVar12);
                pdb_1408fd550(&uStack_318,uVar8);
                pfStack_368 = (float *)CONCAT44(uStack_318._4_4_,(float)uStack_318);
                pcStack_360 = (code *)CONCAT44(uStack_30c,fStack_310);
                pdb_14007ee60();
                uStack_318._0_4_ = SUB84(pfStack_368,0);
                uStack_318._4_4_ = (float)((ulonglong)pfStack_368 >> 0x20);
                fStack_310 = SUB84(pcStack_360,0);
                uStack_30c = (undefined4)((ulonglong)pcStack_360 >> 0x20);
                LOCK();
                lVar5 = *(longlong *)pfStack_1a8;
                *(longlong *)pfStack_1a8 = *(longlong *)pfStack_1a8 + 1;
                UNLOCK();
                if (*(longlong *)pfStack_1a8 == 0 ||
                    SCARRY8(lVar5,1) != *(longlong *)pfStack_1a8 < 0) goto LAB_1408a4a2d;
                uStack_210 = CONCAT44(uStack_434,uStack_438);
                uStack_208 = CONCAT44(uStack_42c,uStack_430);
                ppfStack_220 = ppfStack_448;
                pfStack_218 = pfStack_440;
                pfStack_278 = pfVar9;
                uStack_260._0_4_ = 0;
                pfStack_268 = (float *)0x0;
                uStack_260._4_4_ = 0x3f800000;
                uStack_258._0_4_ = 0x3f800000;
                uStack_258._4_4_ = 0x3f800000;
                pfStack_248 = pfStack_368;
                pcStack_240 = pcStack_360;
                uStack_238 = CONCAT71(uStack_238._1_7_,0x18);
                pfStack_228 = pfStack_1a8;
                pbStack_200._0_5_ = (uint5)param_10;
                pfStack_270 = pfVar14;
                pdb_1414ba3a0(&uStack_318,param_9,&pfStack_278,&UNK_143014258);
                uVar20 = CONCAT44(uStack_318._4_4_,(float)uStack_318);
                lVar5 = plVar4[2];
                if (lVar5 == *plVar4) {
                  pdb_142db0920(plVar4);
                }
                *(undefined8 *)(plVar4[1] + lVar5 * 8) = uVar20;
                plVar4[2] = lVar5 + 1;
                lVar22 = lVar22 + 0x20;
              } while (CONCAT44(uStack_39c,uStack_3a0) << 5 != lVar22);
            }
            if (uStack_158 != (float *)0x0) {
              pub_1406abac0((byte *)pfStack_138,(longlong)uStack_158 << 5,8);
            }
            LOCK();
            *(longlong *)pfStack_1a8 = *(longlong *)pfStack_1a8 + -1;
            UNLOCK();
            if (*(longlong *)pfStack_1a8 == 0) {
              pdb_140c7ac50(&pfStack_1a8);
            }
          }
          else {
            uStack_2d8 = uStack_378;
            uStack_2d0 = uStack_370;
            uStack_2e8 = uStack_388;
            uStack_2e4 = uStack_384;
            uStack_2e0 = uStack_380;
            uStack_2dc = uStack_37c;
            uStack_2f8 = uStack_398;
            uStack_2f4 = uStack_394;
            uStack_2f0 = uStack_390;
            uStack_2ec = uStack_38c;
            uStack_308 = uStack_3a8;
            uStack_304 = uStack_3a4;
            uStack_300 = uStack_3a0;
            uStack_2fc = uStack_39c;
            uStack_318._4_4_ = (float)((ulonglong)uStack_3b8 >> 0x20);
            fStack_310 = SUB84(pfStack_3b0,0);
            uStack_30c = (undefined4)((ulonglong)pfStack_3b0 >> 0x20);
            uStack_318._0_4_ = (float)uStack_3b8;
            if (*_DAT_143ca8e90 != 0) {
              pcStack_360 = pdb_1408a7820;
              pfStack_278 = (float *)0x0;
              pfStack_270 = (float *)&UNK_14301428e;
              pfStack_268 = (float *)0x59;
              uStack_260._0_4_ = 0;
              uStack_260._4_4_ = 0;
              uStack_258._0_4_ = 0x43014120;
              uStack_258._4_4_ = 1;
              pfStack_250 = (float *)0x65;
              pfStack_248 = (float *)0x1;
              pcStack_240 = (code *)&UNK_14301428e;
              uStack_238 = 0x59;
              uStack_230 = 0xb7300000001;
              pfStack_228 = (float *)&UNK_143014270;
              ppfStack_220 = &pfStack_368;
              pfStack_368 = (float *)&uStack_318;
              pdb_140f332f0(&uStack_161,&pfStack_278);
            }
            uVar13 = CONCAT44(uStack_318._4_4_,(float)uStack_318);
            lVar22 = 0;
            if (7 < uVar13) {
              lVar22 = uVar13 - 8;
            }
            if (lVar22 == 0) {
              if (((uVar13 < 6) &&
                  ((0x32UL >> ((ulonglong)(uint)(float)uStack_318 & 0x3f) & 1) != 0)) &&
                 (CONCAT44(uStack_30c,fStack_310) != 0)) {
                pub_1406abac0((byte *)CONCAT44(uStack_304,uStack_308),
                              CONCAT44(uStack_30c,fStack_310),1);
              }
              uVar13 = CONCAT44(uStack_2f4,uStack_2f8);
            }
            else {
              if (lVar22 == 1) {
                pdb_1404b83f0(&fStack_310);
                goto LAB_1408a47fb;
              }
              uVar13 = CONCAT44(uStack_30c,fStack_310);
              puStack_320 = (undefined8 *)&uStack_308;
            }
            if (uVar13 != 0) {
              pub_1406abac0((byte *)*puStack_320,uVar13,1);
            }
          }
LAB_1408a47fb:
          if (pfStack_338 != (float *)0x0) {
            pub_1406abac0(pbStack_330,(longlong)pfStack_338 << 2,4);
          }
LAB_1408a481d:
          if (uStack_130 != 0) {
            pub_1406abac0(pbStack_128,uStack_130 * 0xc,4);
          }
          if (uStack_110 != 0) {
            pub_1406abac0(pbStack_108,uStack_110 * 0xc,4);
          }
          if (lStack_180 != 0) {
            pub_1406abac0(pbStack_178,lStack_180 << 2,4);
          }
          if (lStack_198 != 0) {
            pub_1406abac0((byte *)pfStack_190,lStack_198 << 2,4);
          }
          if (pfStack_290 != (float *)0x0) {
            pub_1406abac0((byte *)pfStack_288,(longlong)pfStack_290 * 0xc,4);
          }
          return;
        }
      }
      else {
        uVar20 = 0;
      }
      uStack_f4 = 1;
      lStack_348 = lVar22;
      pdb_142dc7e2a(uVar20,uVar13);
      goto LAB_1408a4a2d;
    }
  }
  else {
    uVar20 = 0;
  }
  uStack_f2 = 1;
  pdb_142dc7e2a(uVar20,arg0);
LAB_1408a4a2d:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

