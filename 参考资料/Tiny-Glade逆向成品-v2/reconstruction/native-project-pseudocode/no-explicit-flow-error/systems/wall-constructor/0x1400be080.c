// VA 0x1400be080, PDB extent 13988 bytes
// system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure_env$9<true> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure_env$9<true>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
   Extent: 13988 */

void pdb_1400be080(ulonglong *param_1,ulonglong param_2,undefined4 param_3,float *param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7,longlong param_8,
                  ulonglong param_9,char param_10,ulonglong param_11,undefined8 param_12,
                  float param_13,undefined8 *param_14,float param_15,float *param_16,uint param_17,
                  float param_18,uint param_19,float param_20,float param_21,char param_22)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  float *pfVar15;
  undefined8 uVar16;
  float *pfVar17;
  float *pfVar18;
  byte *pbVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong unaff_RSI;
  ulonglong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  float *unaff_R12;
  float *pfVar26;
  float *pfVar27;
  byte *unaff_R14;
  float *pfVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar33;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float unaff_XMM6_Da;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float unaff_XMM15_Da;
  float fVar47;
  float fVar48;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined8 uVar49;
  undefined4 uVar50;
  undefined8 in_stack_fffffffffffff9d8;
  undefined4 uVar51;
  float fStack_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  undefined1 auStack_5c0 [24];
  byte *pbStack_5a8;
  float *pfStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_568;
  undefined8 uStack_560;
  float fStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  byte *pbStack_540;
  float *pfStack_538;
  undefined8 uStack_520;
  float *pfStack_518;
  longlong lStack_510;
  longlong lStack_508;
  longlong lStack_500;
  longlong lStack_4f8;
  ulonglong uStack_4f0;
  ulonglong uStack_4e8;
  ulonglong uStack_4e0;
  ulonglong uStack_4d8;
  ulonglong uStack_4d0;
  ulonglong uStack_4c8;
  byte *pbStack_4c0;
  byte *pbStack_4b8;
  longlong lStack_4b0;
  byte *pbStack_4a8;
  undefined8 uStack_4a0;
  undefined1 *puStack_498;
  float *pfStack_490;
  undefined1 auStack_488 [16];
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  longlong lStack_448;
  byte *pbStack_440;
  ulonglong uStack_438;
  longlong lStack_430;
  byte *pbStack_428;
  float *pfStack_420;
  longlong lStack_418;
  ulonglong uStack_410;
  ulonglong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  float *pfStack_3f0;
  undefined8 uStack_3e8;
  float *pfStack_3e0;
  longlong lStack_3d8;
  byte *pbStack_3d0;
  ulonglong uStack_3c8;
  float *pfStack_3c0;
  byte *pbStack_3b8;
  ulonglong uStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  float *pfStack_398;
  undefined8 uStack_390;
  undefined1 auStack_388 [16];
  float fStack_378;
  float fStack_374;
  undefined8 uStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined8 uStack_358;
  float *pfStack_350;
  float *pfStack_348;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  int iStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  int iStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float *pfStack_2d0;
  float *pfStack_2c8;
  float *pfStack_2c0;
  ulonglong uStack_2b8;
  float *pfStack_2b0;
  float *pfStack_2a8;
  ulonglong uStack_2a0;
  float *pfStack_298;
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  byte *pbStack_278;
  float *pfStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined4 uStack_218;
  undefined8 uStack_214;
  undefined4 uStack_20c;
  float *pfStack_200;
  float *pfStack_1f8;
  float *pfStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  float *pfStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong lStack_1a8;
  ulonglong uStack_1a0;
  float *pfStack_198;
  byte *pbStack_190;
  float *pfStack_188;
  ulonglong uStack_180;
  float *pfStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  float fStack_15c;
  undefined4 uStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float *pfStack_148;
  ulonglong uStack_140;
  float *pfStack_138;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float *pfStack_118;
  longlong *plStack_110;
  float *pfStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  char cStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  fVar31 = param_13;
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffff9d8 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uStack_2fc = param_3;
  uStack_140 = param_2;
  uVar11 = pdb_140e94b40();
  pfVar15 = (float *)(ulonglong)uVar11;
  if ((char)uVar11 == '\0') {
    pfVar28 = (float *)0x0;
    goto LAB_1400be2aa;
  }
  unaff_R14 = (byte *)0x46;
  lVar12 = pdb_1400c1730(0x46);
  pfVar28 = (float *)&UNK_142e3c890;
  if (lVar12 == 1) {
    if (0x46 < param_2) {
LAB_1400c0967:
      pdb_142dc8070(&UNK_142e3c890,0x46,0);
LAB_1400c0988:
      pdb_142dc7e2a(4,unaff_R14);
LAB_1400c0996:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar13 = pdb_1400c1730(param_2);
    if ((uVar13 & 1) != 0) {
      if (0x46 < param_2 + 2) {
        pdb_142dc8070(&UNK_142e3c890,0x46,param_2 + 2,0x46,&UNK_142e3c978);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      unaff_R14 = (byte *)(0x44 - param_2);
      pfVar28 = (float *)(&UNK_142e3c892 + param_2);
    }
  }
  puVar24 = &UNK_142e3c777;
  unaff_R12 = (float *)&UNK_142e3c740;
  do {
    bVar2 = puVar24[-1];
    uVar11 = (uint)(char)bVar2;
    if ((char)bVar2 < '\0') {
      bVar3 = puVar24[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar24[-3];
        if ((char)bVar4 < -0x40) {
          pbVar19 = puVar24 + -4;
          puVar24 = puVar24 + -4;
          uVar11 = bVar4 & 0x3f | (*pbVar19 & 7) << 6;
        }
        else {
          puVar24 = puVar24 + -3;
          uVar11 = bVar4 & 0xf;
        }
        uVar11 = bVar3 & 0x3f | uVar11 << 6;
      }
      else {
        puVar24 = puVar24 + -2;
        uVar11 = bVar3 & 0x1f;
      }
      uVar11 = (uint)(bVar2 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_1400be204;
LAB_1400be21d:
      puVar25 = puVar24 + -0x142e3c73f;
      if ((undefined *)0x37 < puVar25) {
        pdb_142dc8070(&UNK_142e3c740,0x37,puVar25,0x37,&UNK_142e3c940);
        goto LAB_1400c0967;
      }
      unaff_RSI = 0x37 - (longlong)puVar25;
      unaff_R12 = (float *)(puVar24 + 1);
      goto LAB_1400be23f;
    }
    puVar24 = puVar24 + -1;
    if (uVar11 == 0x5c) goto LAB_1400be21d;
LAB_1400be204:
    if (uVar11 == 0x2f) goto LAB_1400be21d;
  } while (puVar24 != &UNK_142e3c740);
  unaff_RSI = 0x37;
LAB_1400be23f:
  plVar14 = (longlong *)pdb_140e97000();
  if ((char)plVar14[0xd] != '\x01') goto LAB_1400c085f;
  do {
    if (*plVar14 == 0) {
      *plVar14 = -1;
      uVar34 = 0;
      plStack_110 = plVar14;
      unaff_R14 = (byte *)pdb_140e94f10(plVar14 + 1,pfVar28,unaff_R14,unaff_R12,unaff_RSI,1,0);
      *plStack_110 = *plStack_110 + 1;
      pfVar28 = (float *)0x1;
      pbStack_3b8 = unaff_R14;
LAB_1400be2aa:
      fVar33 = param_15;
      uVar13 = *(ulonglong *)(uStack_140 + 0x10);
      pfStack_3c0 = pfVar28;
      if (uVar13 < 2) {
        pfStack_138 = pfVar28;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_142e3c777,0x29,&UNK_142e3c7a0);
      }
      uStack_4c8 = param_5;
      uStack_4d0 = uVar13;
      if (param_5 != uVar13) {
        pfStack_138 = pfVar28;
        pdb_142dc7fb4(0,&uStack_4c8,&uStack_4d0,0);
        goto LAB_1400c0996;
      }
      uStack_4d8 = param_7;
      uStack_4e0 = param_5;
      if (param_7 != param_5) {
        pfStack_138 = pfVar28;
        pdb_142dc7fb4(0,&uStack_4d8,&uStack_4e0,0);
        goto LAB_1400c0996;
      }
      uStack_4e8 = param_9;
      uStack_4f0 = param_5;
      if (param_9 != param_5) {
        pfStack_138 = pfVar28;
        pdb_142dc7fb4(0,&uStack_4e8,&uStack_4f0,0);
        goto LAB_1400c0996;
      }
      fVar30 = *param_4;
      uVar13 = param_5 * 4 - 4;
      pfVar17 = param_4;
      if ((uVar13 & 4) == 0) {
        fVar43 = *param_4;
        fVar44 = fVar43;
        if (fVar43 <= fVar30) {
          fVar44 = fVar30;
        }
        fVar30 = (float)(~-(uint)NAN(fVar30) & (uint)fVar44 | -(uint)NAN(fVar30) & (uint)fVar43);
        pfVar17 = param_4 + 1;
        unaff_XMM6_Da = fVar30;
      }
      if (uVar13 != 0) {
        do {
          fVar43 = *pfVar17;
          fVar44 = pfVar17[1];
          fVar32 = fVar43;
          if (fVar43 <= fVar30) {
            fVar32 = fVar30;
          }
          fVar43 = (float)(~-(uint)NAN(fVar30) & (uint)fVar32 | -(uint)NAN(fVar30) & (uint)fVar43);
          pfVar17 = pfVar17 + 2;
          fVar30 = fVar44;
          if (fVar44 <= fVar43) {
            fVar30 = fVar43;
          }
          fVar30 = (float)(-(uint)NAN(fVar43) & (uint)fVar44 | ~-(uint)NAN(fVar43) & (uint)fVar30);
          unaff_XMM6_Da = fVar30;
        } while (pfVar17 != param_4 + param_5);
      }
      if ((unaff_XMM6_Da == 0.0) && (!NAN(unaff_XMM6_Da))) {
        if ((char)pfVar15 == '\0') {
          return;
        }
        plVar14 = (longlong *)pdb_140e97000();
        if ((char)plVar14[0xd] != '\x01') {
          plVar14 = (longlong *)pdb_142d7de90(plVar14,0);
          if (plVar14 == (longlong *)0x0) break;
        }
        if (*plVar14 == 0) {
          *plVar14 = -1;
          plStack_110 = plVar14;
          pdb_140e95370(plVar14 + 1,unaff_R14);
          goto LAB_1400bec54;
        }
        goto LAB_1400c0853;
      }
      fStack_f8 = *(float *)(uStack_140 + 0x30);
      cStack_f2 = *(char *)(param_16 + 5);
      fStack_2e4 = fVar31;
      if (cStack_f2 == '\x02') {
        pdb_14007ee60();
        pfVar15 = (float *)pub_1406abab0(8,4);
        if (param_10 == '\x03') {
          if (pfVar15 == (float *)0x0) goto LAB_1400c08d9;
          fVar43 = unaff_XMM6_Da + _DAT_142e3c604 + _DAT_142e3c608;
          fVar30 = _DAT_142e3b1d8 + fVar33;
          fVar31 = fVar30;
          if (fVar30 <= fVar43) {
            fVar31 = fVar43;
          }
          unaff_XMM6_Da =
               (float)(~-(uint)NAN(fVar43) & (uint)fVar31 | -(uint)NAN(fVar43) & (uint)fVar30);
          *pfVar15 = fVar33;
          pfVar15[1] = unaff_XMM6_Da;
          uStack_390 = 2;
        }
        else {
          if (pfVar15 == (float *)0x0) {
            pfStack_138 = pfVar28;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,8);
          }
          *pfVar15 = fVar33;
          pfVar15[1] = unaff_XMM6_Da;
          uStack_390 = 2;
        }
      }
      else {
        fVar31 = *param_16;
        pdb_14007ee60();
        pfVar15 = (float *)pub_1406abab0(0xc,4);
        if (pfVar15 == (float *)0x0) {
          pfStack_138 = pfVar28;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xc);
        }
        *pfVar15 = fVar33;
        pfVar15[1] = fVar31;
        pfVar15[2] = unaff_XMM6_Da;
        uStack_390 = 3;
      }
      pfStack_3e0 = pfVar28;
      pfStack_398 = pfVar15;
      pdb_140846c00(&lStack_430,pfVar15,uStack_390,unaff_XMM6_Da,param_11);
      pfVar28 = pfStack_420;
      if (param_22 == '\0') {
        pfStack_298 = (float *)0x4;
        uStack_1d0 = 0;
        pfVar15 = param_4;
      }
      else {
        unaff_R14 = (byte *)(param_5 * 4);
        pdb_14007ee60();
        pfVar15 = (float *)pub_1406abab0((ulonglong)unaff_R14,4);
        fVar44 = _UNK_142e3c61c;
        fVar43 = _UNK_142e3c618;
        fVar30 = _UNK_142e3c614;
        fVar31 = _DAT_142e3c610;
        if (pfVar15 == (float *)0x0) goto LAB_1400c0988;
        if (7 < param_5) {
          uVar13 = param_5 & 0x1ffffffffffffff8;
          uVar21 = 0;
          do {
            pfVar18 = (float *)((longlong)param_4 + uVar21);
            fVar32 = pfVar18[1];
            fVar39 = pfVar18[2];
            fVar41 = pfVar18[3];
            pfVar17 = (float *)((longlong)param_4 + uVar21 + 0x10);
            fVar38 = *pfVar17;
            fVar45 = pfVar17[1];
            fVar40 = pfVar17[2];
            fVar42 = pfVar17[3];
            pfVar17 = (float *)((longlong)pfVar15 + uVar21);
            *pfVar17 = *pfVar18 + fVar31;
            pfVar17[1] = fVar32 + fVar30;
            pfVar17[2] = fVar39 + fVar43;
            pfVar17[3] = fVar41 + fVar44;
            pfVar17 = (float *)((longlong)pfVar15 + uVar21 + 0x10);
            *pfVar17 = fVar38 + fVar31;
            pfVar17[1] = fVar45 + fVar30;
            pfVar17[2] = fVar40 + fVar43;
            pfVar17[3] = fVar42 + fVar44;
            uVar21 = uVar21 + 0x20;
            fVar32 = _DAT_142e3c620;
            if (((ulonglong)unaff_R14 & 0xffffffffffffffe0) == uVar21) goto joined_r0x0001400be5f7;
          } while( true );
        }
        uVar13 = 0;
        fVar32 = _DAT_142e3c620;
        do {
          pfVar15[uVar13] = param_4[uVar13] + fVar32;
          uVar13 = uVar13 + 1;
joined_r0x0001400be5f7:
        } while (param_5 != uVar13);
        uStack_1d0 = param_5;
        pfStack_298 = pfVar15;
      }
      uVar49 = CONCAT44(uVar34,unaff_XMM6_Da);
      uVar13 = param_5;
      pdb_140847dd0(&lStack_3d8,pbStack_428,pfVar28,uStack_140,pfVar15,param_5,uVar49,fStack_f8,
                    cStack_f2 != '\x02');
      uVar16 = pdb_1406d0830(param_12);
      pdb_140815b40(param_1,uVar16,unaff_XMM6_Da,_DAT_142e3c620);
      uStack_3b0 = param_1[1];
      uStack_1e8 = param_1[2];
      pfStack_198 = (float *)0x0;
      pbStack_190 = (byte *)0x8;
      pfStack_188 = (float *)0x0;
      lStack_280 = 0;
      pbStack_278 = (byte *)0x4;
      pfStack_270 = (float *)0x0;
      pdb_14007ee60();
      pfVar15 = (float *)pub_1406abab0(0x500,4);
      if (pfVar15 == (float *)0x0) {
        uStack_3e8 = 0;
        pdb_142dc7e2a(4,0x500);
        goto LAB_1400c0996;
      }
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_180 = 0x20;
      pfStack_178 = pfVar15;
      fVar31 = (float)pub_142e329c0(fStack_f8 / _DAT_142e3c620);
      uVar23 = 0;
      uVar21 = (longlong)(fVar31 - _DAT_142e36f2c) & (longlong)fVar31 >> 0x3f | (longlong)fVar31;
      if (fVar31 < 0.0) {
        uVar21 = uVar23;
      }
      uVar22 = 0xffffffffffffffff;
      if (fVar31 <= _DAT_142e36f30) {
        uVar22 = uVar21;
      }
      unaff_R14 = (byte *)(uVar22 * 4 + 4);
      pfVar15 = (float *)(uVar22 + 1);
      if ((byte *)0x7ffffffffffffffc < unaff_R14 || (ulonglong)pfVar15 >> 0x3e != 0) {
LAB_1400be7aa:
        pdb_142dc7e2a(uVar23,unaff_R14);
        goto LAB_1400c0996;
      }
      if (unaff_R14 == (byte *)0x0) {
        pfVar17 = (float *)0x4;
        pfVar15 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar23 = 4;
        pfVar17 = (float *)pub_1406abab0((ulonglong)unaff_R14,4);
        if (pfVar17 == (float *)0x0) goto LAB_1400be7aa;
      }
      uVar21 = uStack_3c8;
      pfStack_1f0 = (float *)0x0;
      lStack_4f8 = (longlong)pfVar28 * 0x8ba + param_11 * 0x17d32;
      uStack_268 = (float *)&lStack_4f8;
      uStack_260 = &param_13;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uStack_3c8;
      auStack_258 = auVar9 << 0x40;
      pfStack_3f0 = pfVar15;
      pfStack_200 = pfVar15;
      pfStack_1f8 = pfVar17;
      pdb_14017e110(&lStack_448,&uStack_268);
      uStack_1d8 = uVar21;
      if (uStack_438 < uVar21) {
        uStack_1d8 = uStack_438;
      }
      fStack_1b4 = (float)param_11;
      fStack_1bc = _DAT_142e3c624;
      if ((param_19 & 1) != 0) {
        fStack_1bc = _DAT_142e3c624 * param_20;
      }
      plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,_DAT_142e3c620 / fStack_f8);
      uVar11 = (int)pfVar28 * 0x924;
      param_1 = (ulonglong *)(ulonglong)uVar11;
      iVar37 = -(uint)(_DAT_142e3783c < param_21 && _DAT_142e3c628 < fStack_f8);
      fStack_1b8 = param_18;
      if ((param_17 & 1) == 0) {
        fStack_1b8 = 0.0;
      }
      fStack_1c0 = _DAT_142e3c620 / unaff_XMM6_Da;
      lStack_3a8 = (longlong)pfVar28 * 0x159 + param_11 * 0x154df;
      lStack_3a0 = (longlong)pfVar28 * 0xdf + param_11 * 0x91e;
      lStack_4b0 = param_11 * 0x15b3 + (longlong)pfVar28 * (longlong)pfVar28 + 0x2a6;
      uStack_1e8 = uStack_1e8 * 0x10 + uStack_3b0;
      fStack_304 = _DAT_142e36f50 * (_DAT_142e3c620 / fStack_f8);
      iStack_2e0 = (int)param_11 + 10 + uVar11;
      fStack_2dc = *param_16;
      fStack_2f4 = param_16[1];
      fStack_14c = _DAT_142e3c62c / fStack_f8;
      uStack_4a0 = *param_14;
      puStack_498 = (undefined1 *)param_14[1];
      lStack_290 = *(longlong *)(uStack_140 + 8);
      fStack_2f0 = param_16[2];
      fStack_2ec = param_16[4];
      fStack_2e8 = param_16[3];
      uStack_158 = CONCAT31((int3)((uint)iVar37 >> 8),(byte)iVar37 & param_10 == '\x02');
      pfStack_2c8 = param_4;
      pbStack_4c0 = pbStack_3d0;
      pbStack_4b8 = pbStack_440;
      fVar30 = _DAT_142e36f28;
      fVar31 = fVar33;
      pfVar17 = pfStack_2c0;
      uVar23 = uStack_2b8;
      uVar21 = uStack_1a0;
joined_r0x0001400bead9:
      uStack_1a0 = uVar21;
      uStack_2b8 = uVar23;
      pfStack_2c0 = pfVar17;
      uVar21 = uStack_1d8;
      _DAT_142e36f28 = fVar30;
      if (uStack_1d8 != 0) {
        while( true ) {
          uStack_1d8 = uVar21 - 1;
          param_1 = (ulonglong *)(pbStack_4c0 + uStack_1d8 * 0x20);
          uStack_300 = *(undefined4 *)(pbStack_4b8 + uVar21 * 4 + -4);
          lStack_500 = uStack_1d8 * 0x96a3dd + lStack_3a8;
          lStack_508 = uStack_1d8 * 0x91fd + lStack_3a0;
          lStack_510 = lStack_4b0 + uVar21 + -1;
          uStack_1e0 = uStack_3c8;
          pfStack_188 = (float *)0x0;
          for (uVar23 = uStack_3b0; pfVar15 = pfStack_188, unaff_R12 = pfStack_270,
              uVar23 != uStack_1e8; uVar23 = uVar23 + 0x10) {
            pdb_140deec90(&uStack_358,uVar23,plStack_110._0_4_,fStack_1c0);
            uStack_268._4_4_ = (float)param_1[2];
            uStack_260._4_4_ = *(float *)((longlong)param_1 + 0x14);
            uStack_268._0_4_ = (float)param_1[3];
            uStack_260._0_4_ = *(float *)((longlong)param_1 + 0x1c);
            cVar10 = pdb_140deea30(&uStack_268);
            pfVar15 = pfStack_188;
            if (cVar10 != '\0') {
              if (pfStack_188 == pfStack_198) {
                pdb_142d7e8a0(&pfStack_198);
              }
              *(ulonglong *)(pbStack_190 + (longlong)pfVar15 * 8) = uVar23;
              pfStack_188 = (float *)((longlong)pfVar15 + 1);
            }
            fVar30 = _DAT_142e36f28;
          }
          param_4 = (float *)((longlong)pfStack_188 - (longlong)pfStack_270);
          unaff_R14 = pbStack_278;
          pfVar28 = pfStack_188;
          if (pfStack_270 <= pfStack_188 && param_4 != (float *)0x0) {
            if ((float *)(lStack_280 - (longlong)pfStack_270) < param_4) {
              pdb_142d7f1b0(&lStack_280,pfStack_270,param_4,4,4);
              pbVar19 = pbStack_278 + (longlong)pfStack_270 * 4;
              fVar30 = _DAT_142e36f28;
              unaff_R14 = pbStack_278;
              pfVar28 = pfStack_270;
            }
            else {
              pbVar19 = pbStack_278 + (longlong)pfStack_270 * 4;
              pfVar28 = pfStack_270;
            }
            pbStack_278 = unaff_R14;
            if ((float *)0x1 < param_4) {
              pfStack_270 = pfVar28;
              pub_142e32780(pbVar19,0);
              pbVar19 = unaff_R14 +
                        ((longlong)((longlong)pfVar15 + (longlong)pfVar28) - (longlong)unaff_R12) *
                        4 + -4;
              pfVar28 = (float *)((undefined *)((longlong)pfVar28 + (longlong)param_4) + -1);
            }
            pbVar19[0] = 0;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
            pfVar28 = (float *)((longlong)pfVar28 + 1);
          }
          fVar32 = _UNK_142e3c64c;
          fVar44 = _UNK_142e3c648;
          fVar43 = _UNK_142e3c644;
          fVar33 = _DAT_142e3c640;
          if ((pfVar28 != (float *)0x0) && (pfStack_188 != (float *)0x0)) {
            lVar12 = (longlong)pfStack_188 * 8;
            lVar20 = (longlong)pfVar28 * 4;
            fVar39 = _DAT_142e36f3c;
            do {
              lVar20 = lVar20 + -4;
              lVar12 = lVar12 + -8;
              fVar38 = **(float **)(pbStack_190 + lVar12) - fStack_304;
              fVar41 = fVar38;
              if (fVar39 <= fVar38) {
                fVar41 = fVar39;
              }
              fVar39 = (float)(~-(uint)NAN(fVar39) & (uint)fVar41 |
                              -(uint)NAN(fVar39) & (uint)fVar38);
              *(float *)(unaff_R14 + lVar20) = fVar39;
            } while ((lVar12 != 0) && (lVar20 != 0));
          }
          fVar39 = *(float *)(param_1 + 3);
          fVar41 = *(float *)((longlong)param_1 + 0x1c);
          fVar38 = (fVar41 - fVar39) * fStack_f8;
          pfStack_270 = pfVar28;
          pfStack_118 = pfVar28;
          if ((fVar38 != 0.0) || (NAN(fVar38))) break;
          pfVar15 = pfStack_188;
          uVar21 = uStack_1d8;
          if (uStack_1d8 == 0) goto LAB_1400beadf;
        }
        fStack_154 = *(float *)(param_1 + 2);
        fStack_150 = *(float *)((longlong)param_1 + 0x14);
        bVar29 = uVar21 != uStack_1e0;
        pfVar28 = (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),bVar29);
        bStack_f1 = param_10 != '\x01';
        pfStack_1f0 = (float *)0x0;
        pdb_14007ee60();
        pfVar15 = (float *)pub_1406abab0(4,4);
        if (pfVar15 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,4);
        }
        *pfVar15 = 0.0;
        uStack_358 = (float *)0x1;
        pfStack_348 = (float *)0x1;
        pfVar17 = (float *)0x1;
        pfStack_350 = pfVar15;
        if (cStack_f2 == '\x02') {
LAB_1400bf0d3:
          pdb_142d89720();
        }
        else {
          lVar12 = 4;
          while (lVar12 != 0x14) {
            pfVar15 = (float *)((longlong)param_16 + lVar12);
            fStack_15c = *(float *)((longlong)param_16 + lVar12 + 4);
            lVar12 = lVar12 + 8;
            lStack_1a8 = 1;
            fVar45 = *pfVar15;
            while( true ) {
              if ((fVar45 != 0.0) || (NAN(fVar45))) {
                if (((fVar45 != fVar30) || (NAN(fVar45) || NAN(fVar30))) &&
                   ((fVar39 <= fVar45 && (fVar45 < fVar41)))) {
                  fVar31 = (float)pdb_140de8220();
                  pfVar17 = pfStack_348;
                  if (pfStack_348 == uStack_358) {
                    pdb_142d89720();
                  }
                  pfStack_350[(longlong)pfVar17] = fVar31;
                  pfVar17 = (float *)((longlong)pfVar17 + 1);
                  pfStack_348 = pfVar17;
                }
              }
              if (lStack_1a8 == 2) break;
              lStack_1a8 = 2;
              fVar45 = fStack_15c;
            }
          }
          unaff_R12 = (float *)0x14;
          if (pfVar17 == uStack_358) goto LAB_1400bf0d3;
        }
        uVar34 = (undefined4)(uVar13 >> 0x20);
        bStack_f1 = bStack_f1 | bVar29;
        pfStack_350[(longlong)pfVar17] = 1.0;
        pfStack_348 = (float *)((longlong)pfVar17 + 1);
        if (pfStack_348 == (float *)0x0) {
          pfVar15 = (float *)0x0;
          lStack_288 = 0;
          fVar45 = unaff_XMM15_Da;
        }
        else {
          param_4 = pfStack_350 + (longlong)pfStack_348;
          pfVar15 = (float *)0x0;
          lStack_288 = 0;
          bVar29 = false;
          pfVar17 = pfStack_350;
          do {
            uVar34 = (undefined4)(uVar13 >> 0x20);
            pfVar18 = pfVar17 + 1;
            fVar45 = *pfVar17;
            if (!bVar29) {
              fVar45 = unaff_XMM15_Da;
              if (pfVar18 == param_4) break;
              pfVar18 = pfVar17 + 2;
              fVar45 = pfVar17[1];
              unaff_XMM15_Da = *pfVar17;
            }
            fVar31 = unaff_XMM15_Da;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = auStack_258._8_8_;
            auStack_258 = auVar7 << 0x40;
            if (fVar45 <= fVar31) {
              do {
                fVar31 = fVar45;
                uStack_260 = (undefined4 *)0x4;
                uStack_268 = (float *)0x0;
                unaff_XMM15_Dd = 0;
                unaff_XMM15_Dc = 0;
                unaff_XMM15_Db = 0;
                fVar45 = fVar31;
                if (pfVar18 == param_4) goto LAB_1400bf112;
                fVar45 = *pfVar18;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = auStack_258._8_8_;
                auStack_258 = auVar8 << 0x40;
                pfVar18 = pfVar18 + 1;
              } while (fVar45 <= fVar31);
            }
            uStack_260._4_4_ = 0.0;
            uStack_260._0_4_ = 5.60519e-45;
            uStack_268._4_4_ = 0.0;
            uStack_268._0_4_ = 0.0;
            unaff_XMM15_Dd = 0;
            unaff_XMM15_Dc = 0;
            unaff_XMM15_Db = 0;
            fVar42 = (fVar45 - fVar31) * fVar38;
            pfStack_108 = pfVar18;
            fVar40 = (float)pub_142e329c0(fVar42 / _DAT_142e3c620);
            unaff_R12 = (float *)0x0;
            if (0.0 <= fVar40) {
              unaff_R12 = (float *)((longlong)(fVar40 - _DAT_142e36f2c) & (longlong)fVar40 >> 0x3f |
                                   (longlong)fVar40);
            }
            if (_DAT_142e36f30 < fVar40) {
              unaff_R12 = (float *)0xffffffffffffffff;
            }
            fVar40 = _DAT_142e3c630;
            if (bStack_f1 == 0) {
              fVar40 = (float)pub_142e329c0(fVar42 / _DAT_142e3c634);
              uVar21 = 0;
              if (0.0 <= fVar40) {
                uVar21 = (longlong)(fVar40 - _DAT_142e36f2c) & (longlong)fVar40 >> 0x3f |
                         (longlong)fVar40;
              }
              if (_DAT_142e36f30 < fVar40) {
                uVar21 = 0xffffffffffffffff;
              }
              unaff_R12 = (float *)(((uint)uVar21 & 1) + uVar21);
              fVar40 = _DAT_142e37ad4;
            }
            pdb_140de8bb0((undefined *)((longlong)unaff_R12 + 1),fVar40 / fVar42,&lStack_500,
                          &uStack_268,&UNK_142e3c818);
            lVar12 = CONCAT44(uStack_260._4_4_,(float)uStack_260);
            pfVar28 = (float *)auStack_258._0_8_;
            if ((float *)((longlong)pfStack_200 - (longlong)pfVar15) < (ulonglong)auStack_258._0_8_)
            {
              pdb_142d7f1b0(&pfStack_200,pfVar15,auStack_258._0_8_,4,4);
              pfVar15 = pfStack_1f0;
              if (pfVar28 < (float *)0x8) {
LAB_1400c0532:
                pfVar17 = (float *)0x0;
              }
              else {
LAB_1400c0521:
                pfVar15 = pfStack_1f0;
                if ((ulonglong)((longlong)pfStack_1f8 + ((longlong)pfStack_1f0 * 4 - lVar12)) < 0x20
                   ) goto LAB_1400c0532;
                pfVar17 = (float *)((ulonglong)pfVar28 & 0xfffffffffffffff8);
                pfVar15 = (float *)((longlong)pfStack_1f0 + (longlong)pfVar17);
                pfVar18 = (float *)0x0;
                do {
                  pfVar26 = (float *)(lVar12 + (longlong)pfVar18 * 4);
                  fVar40 = pfVar26[1];
                  fVar42 = pfVar26[2];
                  fVar46 = pfVar26[3];
                  pfVar27 = (float *)(lVar12 + 0x10 + (longlong)pfVar18 * 4);
                  fVar47 = *pfVar27;
                  fVar48 = pfVar27[1];
                  fVar35 = pfVar27[2];
                  fVar6 = pfVar27[3];
                  pfVar27 = pfStack_1f8 + (longlong)((longlong)pfStack_1f0 + (longlong)pfVar18);
                  *pfVar27 = *pfVar26 * fVar45 + (fVar33 - *pfVar26) * fVar31;
                  pfVar27[1] = fVar40 * fVar45 + (fVar43 - fVar40) * fVar31;
                  pfVar27[2] = fVar42 * fVar45 + (fVar44 - fVar42) * fVar31;
                  pfVar27[3] = fVar46 * fVar45 + (fVar32 - fVar46) * fVar31;
                  pfVar26 = pfStack_1f8 +
                            (longlong)((longlong)pfStack_1f0 + (longlong)(pfVar18 + 1));
                  *pfVar26 = fVar47 * fVar45 + (fVar33 - fVar47) * fVar31;
                  pfVar26[1] = fVar48 * fVar45 + (fVar43 - fVar48) * fVar31;
                  pfVar26[2] = fVar35 * fVar45 + (fVar44 - fVar35) * fVar31;
                  pfVar26[3] = fVar6 * fVar45 + (fVar32 - fVar6) * fVar31;
                  pfVar18 = pfVar18 + 2;
                } while (pfVar17 != pfVar18);
                if (pfVar28 == pfVar17) goto LAB_1400c06c0;
              }
              pfVar18 = pfVar17;
              if (((ulonglong)pfVar28 & 1) != 0) {
                fVar40 = *(float *)(lVar12 + (longlong)pfVar17 * 4);
                pfStack_1f8[(longlong)pfVar15] = fVar40 * fVar45 + (fVar30 - fVar40) * fVar31;
                pfVar15 = (float *)((longlong)pfVar15 + 1);
                pfVar18 = (float *)((ulonglong)pfVar17 | 1);
              }
              if (pfVar28 != (float *)((ulonglong)pfVar17 | 1)) {
                lVar12 = lVar12 + (longlong)pfVar18 * 4;
                pfVar28 = (float *)((longlong)pfVar28 - (longlong)pfVar18);
                pfVar17 = (float *)0x0;
                do {
                  fVar40 = *(float *)(lVar12 + (longlong)pfVar17 * 4);
                  pfStack_1f8[(longlong)((longlong)pfVar15 + (longlong)pfVar17)] =
                       fVar40 * fVar45 + (fVar30 - fVar40) * fVar31;
                  fVar40 = *(float *)(lVar12 + 4 + (longlong)pfVar17 * 4);
                  pfStack_1f8[(longlong)((longlong)pfVar15 + (longlong)((longlong)pfVar17 + 1))] =
                       fVar40 * fVar45 + (fVar30 - fVar40) * fVar31;
                  pfVar17 = (float *)((longlong)pfVar17 + 2);
                } while (pfVar28 != pfVar17);
                pfVar15 = (float *)((longlong)pfVar15 + (longlong)pfVar17);
              }
            }
            else if ((float *)auStack_258._0_8_ != (float *)0x0) {
              pfStack_1f0 = pfVar15;
              if ((float *)0x7 < (ulonglong)auStack_258._0_8_) goto LAB_1400c0521;
              goto LAB_1400c0532;
            }
LAB_1400c06c0:
            pfStack_1f0 = pfVar15;
            if (CONCAT44(uStack_268._4_4_,(float)uStack_268) != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_260._4_4_,(float)uStack_260),
                            CONCAT44(uStack_268._4_4_,(float)uStack_268) << 2,4);
            }
            uVar34 = (undefined4)(uVar13 >> 0x20);
            lStack_288 = lStack_288 + (longlong)unaff_R12;
            bVar29 = true;
            pfVar17 = pfStack_108;
            unaff_XMM15_Da = fVar45;
          } while (pfStack_108 != param_4);
        }
LAB_1400bf112:
        if (uStack_358 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_350,(longlong)uStack_358 << 2,4);
        }
        pfStack_1c8 = pfStack_1f8;
        pfStack_2a8 = pfStack_1f8 + (longlong)pfVar15;
        if (pfVar15 != (float *)0x0) {
          uVar13 = (longlong)pfVar15 * 4 - 4;
          pfVar17 = pfStack_1f8;
          if (0x1b < uVar13) {
            uVar13 = (uVar13 >> 2) + 1;
            uVar21 = uVar13 & 0xfffffffffffffff8;
            pfVar17 = pfStack_1f8 + uVar21;
            uVar23 = 0;
            do {
              pfVar18 = pfStack_1f8 + uVar23;
              fVar38 = pfVar18[1];
              fVar40 = pfVar18[2];
              fVar42 = pfVar18[3];
              pfVar26 = pfStack_1f8 + uVar23 + 4;
              fVar46 = *pfVar26;
              fVar47 = pfVar26[1];
              fVar48 = pfVar26[2];
              fVar35 = pfVar26[3];
              pfVar26 = pfStack_1f8 + uVar23;
              *pfVar26 = *pfVar18 * fVar41 + (fVar33 - *pfVar18) * fVar39;
              pfVar26[1] = fVar38 * fVar41 + (fVar43 - fVar38) * fVar39;
              pfVar26[2] = fVar40 * fVar41 + (fVar44 - fVar40) * fVar39;
              pfVar26[3] = fVar42 * fVar41 + (fVar32 - fVar42) * fVar39;
              pfVar18 = pfStack_1f8 + uVar23 + 4;
              *pfVar18 = fVar46 * fVar41 + (fVar33 - fVar46) * fVar39;
              pfVar18[1] = fVar47 * fVar41 + (fVar43 - fVar47) * fVar39;
              pfVar18[2] = fVar48 * fVar41 + (fVar44 - fVar48) * fVar39;
              pfVar18[3] = fVar35 * fVar41 + (fVar32 - fVar35) * fVar39;
              uVar23 = uVar23 + 8;
            } while (uVar21 != uVar23);
            if (uVar13 == uVar21) goto LAB_1400bf227;
          }
          do {
            *pfVar17 = *pfVar17 * fVar41 + (fVar30 - *pfVar17) * fVar39;
            pfVar17 = pfVar17 + 1;
          } while (pfVar17 != pfStack_2a8);
        }
LAB_1400bf227:
        uVar13 = CONCAT44(uVar34,fStack_1b4);
        fStack_558 = fVar45;
        uStack_554 = unaff_XMM15_Db;
        uStack_550 = unaff_XMM15_Dc;
        uStack_54c = unaff_XMM15_Dd;
        pfStack_490 = pfVar15;
        pdb_140847990(auStack_5c0,pfStack_2a8,fStack_150,unaff_XMM6_Da,fStack_f8,uVar13);
        pbStack_5a8 = pbStack_190;
        pfStack_5a0 = pfStack_188;
        pfStack_538 = pfStack_118;
        lStack_418 = lStack_290;
        uStack_410 = param_5;
        uStack_408 = uStack_140;
        uStack_400 = 0;
        uStack_3f8 = 0;
        pbStack_540 = unaff_R14;
        pdb_1404004c0(&lStack_418);
        fStack_2d8 = (fStack_150 - fStack_154) * unaff_XMM6_Da;
        uVar21 = uStack_3f8 & 0xffffffff;
        fVar30 = _DAT_142e36f28 - uStack_3f8._4_4_;
        uVar16 = *(undefined8 *)(param_8 + uVar21 * 4);
        auStack_488._4_4_ = (float)((ulonglong)uVar16 >> 0x20) * uStack_3f8._4_4_;
        auStack_488._0_4_ = (float)auStack_488._4_4_ + (float)uVar16 * fVar30;
        auStack_488._8_8_ = 0;
        uVar16 = *(undefined8 *)(param_6 + uVar21 * 4);
        fVar33 = (float)((ulonglong)uVar16 >> 0x20) * uStack_3f8._4_4_;
        uStack_478 = CONCAT44(fVar33,fVar33 + (float)uVar16 * fVar30);
        uStack_470 = 0;
        fVar33 = (float)((ulonglong)*(undefined8 *)(pfStack_2c8 + uVar21) >> 0x20) *
                 uStack_3f8._4_4_;
        auStack_388._0_4_ = fVar33 + (float)*(undefined8 *)(pfStack_2c8 + uVar21) * fVar30;
        auStack_388._4_4_ = fVar33;
        auStack_388._8_8_ = 0;
        iStack_2f8 = (int)uStack_1d8 * 0x54 + iStack_2e0;
        fStack_12c = unaff_XMM6_Da * fStack_150;
        pbStack_4a8 = pbStack_3d0 + 0x1c;
        uStack_1a0 = 0;
        pfStack_148 = pfStack_1c8;
        pfStack_2b0 = (float *)0x0;
        unaff_R14 = (byte *)0x0;
LAB_1400bf3d0:
        uVar34 = auStack_488._0_4_;
        pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,(undefined4)uStack_478);
        fVar30 = _DAT_142e36f28;
        unaff_XMM15_Da = fStack_558;
        unaff_XMM15_Db = uStack_554;
        unaff_XMM15_Dc = uStack_550;
        unaff_XMM15_Dd = uStack_54c;
        if (pfStack_148 != pfStack_2a8) {
          pfVar18 = pfStack_148 + 1;
          uVar21 = uStack_1a0 + 1;
          pfVar17 = pfStack_148;
          if (pfStack_2b0 == (float *)0x0) {
            if (pfVar18 == pfStack_2a8) {
              pfStack_148 = pfStack_2a8;
              plVar14 = &uStack_268;
              pfVar18 = (float *)0x0;
              uVar23 = uVar21;
              pfVar26 = pfStack_148;
              pfVar17 = uStack_268;
            }
            else {
              plVar14 = &uStack_358;
              uVar23 = uStack_1a0 + 2;
              pfVar26 = pfStack_148 + 2;
            }
            pfStack_148 = pfVar26;
            uStack_268._4_4_ = (float)((ulonglong)pfVar17 >> 0x20);
            uStack_268._0_4_ = SUB84(pfVar17,0);
            *plVar14 = (longlong)pfVar18;
            pfStack_2c0 = uStack_358;
            if (uStack_268 == (float *)0x0) {
              pfStack_2b0 = (float *)0x0;
              uStack_2b8 = uVar21;
              uStack_1a0 = uVar23;
              goto LAB_1400bf437;
            }
            uStack_2b8 = uStack_1a0;
            uStack_1a0 = uVar21;
            uVar21 = uVar23;
            pfVar18 = pfStack_148;
            pfVar17 = uStack_358;
            pfStack_2c0 = uStack_268;
          }
          pfStack_2d0 = (float *)0x0;
          pfStack_518 = pfVar17;
          uVar23 = uStack_1a0;
          pfStack_2b0 = pfStack_2c0;
          uStack_2a0 = uStack_2b8;
          pfStack_148 = pfVar18;
          if (pfStack_2c0 == (float *)0x0) goto joined_r0x0001400bead9;
          pfStack_2d0 = pfStack_2c0;
          fStack_128 = (float)auStack_388._0_4_;
          fStack_100 = *pfStack_2c0;
          pfStack_118 = (float *)CONCAT44(pfStack_118._4_4_,*pfVar17);
          pfStack_2c0 = pfVar17;
          uStack_2b8 = uStack_1a0;
          uStack_1a0 = uVar21;
          fStack_368 = (float)pdb_140e02880(&lStack_508);
          fVar31 = (float)pdb_140e02880(&lStack_510);
          fVar33 = (fVar31 + _DAT_142e36f38) * _DAT_142e3c650 + fStack_1bc;
          if (fVar33 <= _DAT_142e37ad4) {
            fVar33 = _DAT_142e37ad4;
          }
          fStack_124 = pfStack_118._0_4_ - fStack_100;
          fVar31 = fStack_124 * _DAT_142e36f50;
          pdb_1404004c0(&lStack_418);
          uVar21 = uStack_3f8 & 0xffffffff;
          fVar46 = _DAT_142e36f28 - uStack_3f8._4_4_;
          fVar30 = *(float *)(param_8 + uVar21 * 4);
          fVar38 = *(float *)(param_8 + 4 + uVar21 * 4) * uStack_3f8._4_4_;
          fVar43 = *(float *)(param_6 + uVar21 * 4);
          fVar47 = *(float *)(param_6 + 4 + uVar21 * 4) * uStack_3f8._4_4_;
          fVar44 = pfStack_2c8[uVar21];
          fVar45 = uStack_3f8._4_4_ * pfStack_2c8[uVar21 + 1];
          pdb_1404004c0(&lStack_418);
          uVar50 = (undefined4)(uVar13 >> 0x20);
          uVar51 = (undefined4)((ulonglong)uVar49 >> 0x20);
          uVar21 = uStack_3f8 & 0xffffffff;
          fVar32 = _DAT_142e36f28 - uStack_3f8._4_4_;
          fVar39 = *(float *)(param_8 + 4 + uVar21 * 4) * uStack_3f8._4_4_ +
                   *(float *)(param_8 + uVar21 * 4) * fVar32;
          auStack_488 = ZEXT416((uint)fVar39);
          uVar16 = *(undefined8 *)(param_6 + uVar21 * 4);
          fVar40 = uStack_3f8._4_4_ * (float)((ulonglong)uVar16 >> 0x20);
          fVar42 = fVar40 + fVar32 * (float)uVar16;
          fVar41 = uStack_3f8._4_4_ * pfStack_2c8[uVar21 + 1] + fVar32 * pfStack_2c8[uVar21];
          auStack_388 = ZEXT416((uint)fVar41);
          uStack_478 = CONCAT44(fVar40,fVar42);
          uStack_470 = 0;
          fVar32 = fVar42;
          if (pfStack_108._0_4_ <= fVar42) {
            fVar32 = pfStack_108._0_4_;
          }
          if ((float)(~-(uint)NAN(pfStack_108._0_4_) & (uint)fVar32 |
                     -(uint)NAN(pfStack_108._0_4_) & (uint)fVar42) <= fStack_12c) {
            fVar38 = fVar30 * fVar46 + fVar38;
            fVar30 = (float)uVar34 + fVar38 + fVar39;
            if (fVar30 <= 0.0) {
              fVar39 = _DAT_142e3c654;
              fVar38 = _DAT_142e3c654;
            }
            fStack_fc = fVar43 * fVar46 + fVar47 + fVar38;
            uVar11 = -(uint)(0.0 < fVar30);
            fVar30 = pfStack_108._0_4_ + (float)(~uVar11 & (uint)_DAT_142e3c654 | uVar34 & uVar11);
            pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,fVar30);
            fVar39 = fVar39 + fVar42;
            if (((fVar39 <= fStack_12c) || (fVar30 <= fStack_12c)) || (fStack_fc <= fStack_12c)) {
              fVar45 = fVar46 * fVar44 + fVar45;
              if (((cStack_f2 != '\x02') &&
                  ((fVar30 = fStack_100 * _DAT_142e36f50 + pfStack_118._0_4_ * _DAT_142e36f50,
                   fVar30 < fStack_2f4 || (fStack_2f0 <= fVar30)))) &&
                 ((fStack_2ec <= fVar30 || (fVar30 < fStack_2e8)))) {
                fStack_128 = fStack_2dc;
                fVar41 = fStack_2dc;
                fVar45 = fStack_2dc;
              }
              fVar30 = (float)((int)uStack_2a0 * 0x171 + iStack_2f8);
              unaff_R12 = (float *)(ulonglong)(uint)fVar30;
              uVar21 = *param_1;
              uVar23 = uStack_1e0;
              if (uStack_1e0 < uVar21) {
                uVar23 = uVar21;
              }
              uVar22 = param_1[1];
              pfVar17 = (float *)(pbStack_4a8 + uVar21 * 0x20);
              do {
                pfVar28 = (float *)CONCAT71((int7)((ulonglong)pfVar28 >> 8),uVar22 <= uVar21);
                if (uVar22 <= uVar21) {
                  if (((byte)uStack_158 & fStack_368 < _DAT_142e3c658) != 0) goto LAB_1400bf3d0;
                  break;
                }
                if (uStack_1e0 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar23,uStack_1e0,&UNK_142e3c800);
                }
                pfVar18 = pfVar17 + -1;
                fVar43 = *pfVar17;
                if ((*pfVar18 - plStack_110._0_4_ <= fStack_100) &&
                   (fStack_100 <= fVar43 + plStack_110._0_4_)) break;
                uVar21 = uVar21 + 1;
                pfVar17 = pfVar17 + 8;
              } while ((pfStack_118._0_4_ < *pfVar18 - plStack_110._0_4_) ||
                      (fVar43 + plStack_110._0_4_ < pfStack_118._0_4_));
              if (bStack_f1 == 0) {
                if ((uStack_2a0 & 1) == 0) goto LAB_1400bf3d0;
                pfVar28 = (float *)0x0;
              }
              fStack_120 = fVar41;
              fStack_11c = fVar39;
              if (((byte)unaff_R14 & fStack_458 == fStack_100) == 0) {
                pdb_140847b40(auStack_5c0,uVar22,(ulonglong)pfVar28 & 0xffffffff);
              }
              uVar34 = pfStack_118._0_4_;
              uStack_1b0 = pdb_140847b40(auStack_5c0);
              uStack_1ac = uVar34;
              pdb_140847b20();
              fVar43 = fStack_374;
              fVar31 = fStack_378;
              fVar44 = (float)uStack_370;
              fVar32 = (float)((ulonglong)uStack_370 >> 0x20);
              if (bStack_f1 == 0) {
                fVar44 = fVar44 * _DAT_142e3c660 + _DAT_142e3c660;
                fVar32 = fVar32 * _UNK_142e3c664 + _UNK_142e3c664;
                uStack_370 = CONCAT44(fVar32,fVar44);
              }
              fStack_314 = fStack_100;
              fStack_310 = fStack_154;
              fStack_30c = pfStack_118._0_4_;
              fStack_308 = fStack_150;
              if (0.0 < fStack_2e4) {
                uVar16 = CONCAT44(uVar51,uStack_300);
                uVar49 = CONCAT44(uVar50,fStack_14c);
                pdb_140846800(&fStack_314,uStack_2a0,pfStack_1c8,pfStack_490,lStack_288,uVar49,
                              uVar16);
                uVar50 = (undefined4)((ulonglong)uVar49 >> 0x20);
                uVar51 = (undefined4)((ulonglong)uVar16 >> 0x20);
              }
              if (uStack_168 != 0) {
                uStack_168 = 0;
              }
              uStack_170 = 0;
              uStack_268._0_4_ = fStack_314;
              uStack_268._4_4_ = fStack_310;
              uStack_260._0_4_ = fStack_30c;
              uStack_260._4_4_ = fStack_308;
              auStack_258._4_4_ = fStack_374;
              auStack_258._0_4_ = fStack_378;
              auStack_258._8_8_ = uStack_370;
              if (uStack_180 == 0) {
                pdb_140848dc0(&uStack_180);
              }
              else {
                uStack_168 = 0;
              }
              uVar13 = 0;
              if (uStack_180 <= uStack_170 + uStack_168) {
                uVar13 = uStack_180;
              }
              lVar12 = (uStack_170 + uStack_168) - uVar13;
              *(undefined8 *)(pfStack_178 + lVar12 * 10 + 4) = auStack_258._0_8_;
              *(undefined8 *)(pfStack_178 + lVar12 * 10 + 4 + 2) = auStack_258._8_8_;
              *(ulonglong *)(pfStack_178 + lVar12 * 10) =
                   CONCAT44(uStack_268._4_4_,(float)uStack_268);
              *(ulonglong *)(pfStack_178 + lVar12 * 10 + 2) =
                   CONCAT44(uStack_260._4_4_,(float)uStack_260);
              pfStack_178[lVar12 * 10 + 8] = fVar30;
              *(undefined2 *)(pfStack_178 + lVar12 * 10 + 9) = 0;
              uStack_268._0_4_ = fStack_314;
              uStack_268._4_4_ = fStack_310;
              uStack_260._0_4_ = fStack_30c;
              uStack_260._4_4_ = fStack_308;
              uVar49 = CONCAT44(uVar51,fStack_1c0);
              uVar13 = CONCAT44(uVar50,plStack_110._0_4_);
              uStack_168 = uStack_168 + 1;
              cVar10 = pdb_140815be0(&pbStack_5a8,&pbStack_540,pbStack_190,pfStack_188,&uStack_268,
                                     uVar13,uVar49,&uStack_180);
              if (cVar10 != '\0') {
                fVar39 = fVar32;
                if (fVar32 <= fVar44) {
                  fVar39 = fVar44;
                }
                fVar41 = fVar43;
                if (fVar31 <= fVar43) {
                  fVar41 = fVar31;
                }
                fVar31 = ((float)(~-(uint)NAN(fVar44) & (uint)fVar39 |
                                 -(uint)NAN(fVar44) & (uint)fVar32) -
                         (float)(~-(uint)NAN(fVar31) & (uint)fVar41 |
                                -(uint)NAN(fVar31) & (uint)fVar43)) + fStack_2d8;
                fVar43 = _DAT_142e36f28 - fVar31 / fStack_2d8;
                if (bStack_f1 == 0) {
                  fVar43 = 0.0;
                }
                else {
                  fVar43 = fVar43 * _DAT_142e3c670 + (_DAT_142e36f28 - fVar43) * _DAT_142e3798c;
                }
                if ((_DAT_142e3c620 < fVar31) && (fStack_368 < fVar43)) {
                  if (uStack_168 != 0) {
                    uStack_168 = 0;
                  }
                  uStack_170 = 0;
                  pdb_1408469b0(fStack_368 / _DAT_142e3798c,&fStack_314,&fStack_378,fVar30,
                                &uStack_180);
                }
              }
              if (((byte)unaff_R14 & fStack_2d4 == fStack_100) == 0) {
                uVar11 = pdb_140080580(uStack_140);
                uVar16 = *(undefined8 *)(lStack_290 + (ulonglong)uVar11 * 8);
                uVar1 = *(undefined8 *)(lStack_290 + 8 + (ulonglong)uVar11 * 8);
                uStack_468 = CONCAT44(extraout_XMM0_Da * (float)((ulonglong)uVar1 >> 0x20) +
                                      (_DAT_142e36f28 - extraout_XMM0_Da) *
                                      (float)((ulonglong)uVar16 >> 0x20),
                                      extraout_XMM0_Da * (float)uVar1 +
                                      (_DAT_142e36f28 - extraout_XMM0_Da) * (float)uVar16);
                uStack_460 = CONCAT44(extraout_XMM0_Dc * 0.0 + 0.0,extraout_XMM0_Dc * 0.0 + 0.0);
              }
              uVar11 = pdb_140080580(uStack_140);
              uVar16 = *(undefined8 *)(lStack_290 + (ulonglong)uVar11 * 8);
              uVar1 = *(undefined8 *)(lStack_290 + 8 + (ulonglong)uVar11 * 8);
              fStack_368 = extraout_XMM0_Da_00 * (float)uVar1 +
                           (_DAT_142e36f28 - extraout_XMM0_Da_00) * (float)uVar16;
              fStack_364 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar1 >> 0x20) +
                           (_DAT_142e36f28 - extraout_XMM0_Da_00) *
                           (float)((ulonglong)uVar16 >> 0x20);
              fStack_360 = extraout_XMM0_Dc_00 * 0.0 + 0.0;
              fStack_35c = extraout_XMM0_Dc_00 * 0.0 + 0.0;
              fVar44 = fStack_368 - (float)uStack_468;
              fVar31 = fStack_364 - uStack_468._4_4_;
              fVar32 = _DAT_142e36f28 / SQRT(fVar31 * fVar31 + fVar44 * fVar44);
              fVar44 = fVar32 * fVar44;
              fVar32 = fVar32 * fVar31;
              uStack_520 = CONCAT44(fVar32,fVar44);
              pdb_140df4520(&uStack_268,&uStack_520);
              fVar43 = (float)uStack_260;
              fVar31 = uStack_268._4_4_;
              fVar30 = (float)uStack_268;
              uStack_358 = (float *)CONCAT44(fVar44,(uint)fVar32 ^ _DAT_142e37820);
              pdb_140df4520();
              if (uStack_168 == 0) {
                lVar12 = 0;
                uVar21 = 0;
                lVar20 = 0;
              }
              else {
                uVar21 = 0;
                if (uStack_180 <= uStack_170) {
                  uVar21 = uStack_180;
                }
                lVar12 = uStack_170 - uVar21;
                lVar20 = uStack_168 - (uStack_180 - lVar12);
                uVar21 = uStack_180;
                if (uStack_168 < uStack_180 - lVar12 || lVar20 == 0) {
                  uVar21 = uStack_168 + lVar12;
                  lVar20 = 0;
                }
              }
              fStack_124 = _DAT_142e36f28 / fStack_124;
              fStack_458 = fVar30;
              fStack_454 = fVar31;
              fStack_450 = fVar43;
              fStack_44c = fVar43;
              auVar36._4_4_ = (float)uStack_260;
              auVar36._0_4_ = uStack_268._4_4_;
              auVar36._8_8_ = 0;
              param_4 = pfStack_178 + lVar12 * 10;
              pfVar17 = pfStack_178 + uVar21 * 10;
              fVar30 = fVar33 * (float)uStack_268;
              fVar43 = fVar33 * uStack_268._4_4_;
              fVar44 = fVar33 * (float)uStack_260;
              fVar33 = fVar33 * (float)uStack_260;
              unaff_R12 = pfStack_178;
              pfVar28 = pfStack_178 + lVar20 * 10;
LAB_1400bfee0:
              pfVar18 = unaff_R12;
              pfVar26 = param_4;
              pfVar27 = pfVar28;
              if ((param_4 != pfVar17) ||
                 (pfVar18 = param_4, pfVar26 = unaff_R12, pfVar27 = param_4, pfVar17 = pfVar28,
                 unaff_R12 != pfVar28)) {
                fVar39 = (float)pdb_140deec10(pfVar26);
                fVar32 = (float)pdb_140deec50(pfVar26);
                fVar31 = (float)pdb_140deec20(pfVar26);
                param_4 = pfVar26 + 10;
                unaff_R12 = pfVar18;
                pfVar28 = pfVar27;
                if ((0.0 < fVar39) &&
                   ((0.0 < fVar32 && (fVar41 = fStack_f8 * fVar39, _DAT_142e37840 <= fVar41)))) {
                  fVar38 = (fVar31 - fStack_100) * fStack_124;
                  uStack_358 = (float *)CONCAT44(fVar38 * fStack_364 +
                                                 (_DAT_142e36f28 - fVar38) * uStack_468._4_4_,
                                                 fVar38 * fStack_368 +
                                                 (_DAT_142e36f28 - fVar38) * (float)uStack_468);
                  pdb_140df4540(&uStack_268,&uStack_358,auVar36._0_4_ * unaff_XMM6_Da);
                  fVar40 = (float)uStack_260;
                  fVar38 = (float)uStack_268;
                  fVar32 = fVar32 * unaff_XMM6_Da;
                  fVar42 = uStack_268._4_4_;
                  if (bStack_f1 == 0) {
                    auVar36 = ZEXT416((uint)_DAT_142e3c674);
                    if (fVar41 < _DAT_142e3c674) goto LAB_1400bfee0;
                    if (fVar41 < fVar32) {
                      fVar42 = uStack_268._4_4_ + (fVar32 - fVar41) * _DAT_142e36f38;
                      fVar32 = fVar41;
                    }
                  }
                  if (cStack_f2 == '\x02') {
                    if (param_22 != '\0') {
                      fVar35 = fVar32 * _DAT_142e36f50 + fVar42;
                      pfVar15 = (float *)0x4c;
                      if (fStack_128 < fVar35) goto LAB_1400c01a3;
                      fVar46 = fVar45;
                      fVar47 = fStack_128;
                      fVar48 = fStack_120;
                      if (fStack_120 < fVar35) goto LAB_1400c01b0;
                    }
                    pfVar15 = (float *)0x44;
                    fVar46 = fStack_fc;
                    fVar47 = pfStack_108._0_4_;
                    fVar48 = fStack_11c;
                    if ((float)((uint)(fVar42 - unaff_XMM6_Da) & _DAT_142e377e0) < _DAT_142e3c678) {
                      pfVar15 = (float *)0x54;
                      fVar47 = pfStack_108._0_4_;
                      fVar48 = fStack_11c;
                    }
                  }
                  else {
                    auStack_258._0_8_ = *(undefined8 *)(param_16 + 4);
                    uStack_268._0_4_ = (float)*(undefined8 *)param_16;
                    uStack_268._4_4_ = (float)((ulonglong)*(undefined8 *)param_16 >> 0x20);
                    uStack_260._0_4_ = (float)*(undefined8 *)(param_16 + 2);
                    uStack_260._4_4_ = (float)((ulonglong)*(undefined8 *)(param_16 + 2) >> 0x20);
                    cVar10 = pdb_1408ff980(auStack_258 + 4);
                    pfVar15 = (float *)0x44;
                    fVar46 = fStack_fc;
                    fVar47 = pfStack_108._0_4_;
                    fVar48 = fStack_11c;
                    if (((cVar10 != '\0') && ((float)uStack_268 < fVar42)) &&
                       ((fVar35 = fVar42 + fVar32 * _DAT_142e36f50, fStack_128 < fVar35 ||
                        (fStack_120 < fVar35)))) {
LAB_1400c01a3:
                      pfVar15 = (float *)0x4c;
                      fVar46 = fVar45;
                      fVar47 = fStack_128;
                      fVar48 = fStack_120;
                    }
                  }
LAB_1400c01b0:
                  fVar41 = fVar41 + fStack_1b8;
                  fStack_608 = fVar41 * fStack_458;
                  fStack_604 = fVar41 * fStack_454;
                  fStack_600 = fVar41 * fStack_450;
                  fStack_5fc = fVar41 * fStack_44c;
                  fStack_5f8 = fVar32 * _DAT_142e378e0;
                  fStack_5f4 = fVar32 * _UNK_142e378e4;
                  fStack_5f0 = fVar32 * _UNK_142e378e8;
                  fStack_5ec = fVar32 * _UNK_142e378ec;
                  fStack_5d8 = fVar38;
                  fStack_5d0 = fVar40;
                  fStack_5cc = fVar40;
                  uStack_358 = *(float **)(pfVar26 + 4);
                  pfStack_350 = *(float **)(pfVar26 + 6);
                  fStack_5e8 = fVar30;
                  fStack_5e4 = fVar43;
                  fStack_5e0 = fVar44;
                  fStack_5dc = fVar33;
                  fStack_5d4 = fVar42;
                  pdb_140e07fe0(&uStack_268,&fStack_608);
                  fStack_21c = pfVar26[8];
                  uStack_598 = CONCAT44(uStack_268._4_4_,(float)uStack_268);
                  uStack_590 = CONCAT44(uStack_260._4_4_,(float)uStack_260);
                  uStack_588 = auStack_258._0_8_;
                  uStack_580 = auStack_258._8_8_;
                  uStack_568 = uStack_358;
                  pfVar18 = uStack_568;
                  uStack_560 = pfStack_350;
                  pfVar26 = uStack_560;
                  uStack_568._0_4_ = SUB84(uStack_358,0);
                  uStack_568._4_4_ = (undefined4)((ulonglong)uStack_358 >> 0x20);
                  uStack_560._0_4_ = SUB84(pfStack_350,0);
                  uStack_560._4_4_ = (undefined4)((ulonglong)pfStack_350 >> 0x20);
                  uStack_238 = (undefined4)uStack_568;
                  uStack_234 = uStack_568._4_4_;
                  uStack_230 = (undefined4)uStack_560;
                  uStack_22c = uStack_560._4_4_;
                  uStack_214 = CONCAT44((fVar39 * _DAT_142e36f50 + fVar31) * fStack_f8,
                                        (fVar31 - fVar39 * _DAT_142e36f50) * fStack_f8);
                  uStack_218 = uStack_2fc;
                  uStack_20c = SUB84(pfVar15,0);
                  auVar36 = auStack_258;
                  uStack_568 = pfVar18;
                  uStack_560 = pfVar26;
                  fStack_228 = fVar47;
                  fStack_224 = fVar46;
                  fStack_220 = fVar48;
                  pdb_14094c790(&uStack_358,&uStack_268);
                  cVar10 = pdb_1406002b0(uStack_4a0);
                  if (cVar10 != '\0') {
                    *puStack_498 = 1;
                  }
                }
                goto LAB_1400bfee0;
              }
              unaff_R14 = (byte *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
              fStack_458 = pfStack_118._0_4_;
              uStack_468 = CONCAT44(fStack_364,fStack_368);
              uStack_460 = CONCAT44(fStack_35c,fStack_360);
              fStack_2d4 = fStack_458;
            }
          }
          goto LAB_1400bf3d0;
        }
        pfStack_148 = pfStack_2a8;
LAB_1400bf437:
        pfStack_2d0 = (float *)0x0;
        pfVar17 = pfStack_2c0;
        uVar23 = uStack_2b8;
        uVar21 = uStack_1a0;
        goto joined_r0x0001400bead9;
      }
LAB_1400beadf:
      if (lStack_448 != 0) {
        pub_1406abac0(pbStack_440,lStack_448 << 2,4);
      }
      uVar49 = uStack_390;
      if (pfStack_200 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_1f8,(longlong)pfStack_200 << 2,4);
      }
      if (uStack_180 != 0) {
        pub_1406abac0((byte *)pfStack_178,uStack_180 * 0x28,4);
      }
      if (lStack_280 != 0) {
        pub_1406abac0(pbStack_278,lStack_280 << 2,4);
      }
      if (pfStack_198 != (float *)0x0) {
        pub_1406abac0(pbStack_190,(longlong)pfStack_198 << 3,8);
      }
      if (lStack_3d8 != 0) {
        pub_1406abac0(pbStack_3d0,lStack_3d8 << 5,8);
      }
      if (uStack_1d0 != 0) {
        pub_1406abac0((byte *)pfStack_298,uStack_1d0 << 2,4);
      }
      if (lStack_430 != 0) {
        pub_1406abac0(pbStack_428,lStack_430 << 2,4);
      }
      unaff_RSI = (ulonglong)(uint)((int)uVar49 << 2);
      pub_1406abac0((byte *)pfStack_398,unaff_RSI,4);
      if (pfStack_3c0 == (float *)0x0) {
        return;
      }
      plVar14 = (longlong *)pdb_140e97000();
      if ((char)plVar14[0xd] != '\x01') {
        plVar14 = (longlong *)pdb_142d7de90(plVar14,0);
        if (plVar14 == (longlong *)0x0) break;
      }
      if (*plVar14 == 0) {
        *plVar14 = -1;
        plStack_110 = plVar14;
        pdb_140e95370(plVar14 + 1,pbStack_3b8);
LAB_1400bec54:
        *plStack_110 = *plStack_110 + 1;
        return;
      }
    }
LAB_1400c0853:
    plVar14 = (longlong *)pdb_142dc8090(&UNK_142f3dcc8);
LAB_1400c085f:
    plVar14 = (longlong *)pdb_142d7de90(plVar14,0);
  } while (plVar14 != (longlong *)0x0);
  pdb_142dc7890(&UNK_142f3dc40);
LAB_1400c08d9:
  pfStack_138 = pfVar28;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,8);
}

