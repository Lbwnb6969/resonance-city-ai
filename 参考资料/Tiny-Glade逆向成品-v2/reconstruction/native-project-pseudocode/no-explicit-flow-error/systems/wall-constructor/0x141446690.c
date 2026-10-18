// VA 0x141446690, PDB extent 14852 bytes
// system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
   Extent: 14852 */

void pdb_141446690(ulonglong *param_1,ulonglong param_2,undefined4 param_3,float *param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7,longlong param_8,
                  ulonglong param_9,char param_10,ulonglong param_11,undefined8 param_12,
                  float param_13,undefined8 *param_14,float param_15,float *param_16,uint param_17,
                  float param_18,uint param_19,float param_20,float param_21,char param_22)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined8 uVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  ulonglong unaff_RSI;
  ulonglong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  float *pfVar23;
  float *unaff_R12;
  float *unaff_R14;
  ulonglong uVar24;
  float *pfVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar36;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar40;
  undefined1 auVar39 [16];
  int iVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulonglong in_stack_fffffffffffff9c0;
  undefined8 in_stack_fffffffffffff9c8;
  undefined8 uVar59;
  undefined4 uVar60;
  float fStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
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
  byte *pbStack_5d8;
  float *pfStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  float *pfStack_5b8;
  ulonglong uStack_5b0;
  float *pfStack_598;
  float *pfStack_590;
  float fStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  float *pfStack_578;
  float *pfStack_570;
  float fStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 uStack_548;
  float *pfStack_540;
  longlong lStack_538;
  longlong lStack_530;
  longlong lStack_528;
  longlong lStack_520;
  ulonglong uStack_518;
  ulonglong uStack_510;
  ulonglong uStack_508;
  ulonglong uStack_500;
  ulonglong uStack_4f8;
  ulonglong uStack_4f0;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  longlong lStack_4d8;
  byte *pbStack_4d0;
  undefined1 auStack_4c8 [16];
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  longlong lStack_498;
  byte *pbStack_490;
  ulonglong uStack_488;
  longlong lStack_480;
  byte *pbStack_478;
  float *pfStack_470;
  undefined1 auStack_468 [16];
  longlong lStack_450;
  ulonglong uStack_448;
  ulonglong uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  float *pfStack_428;
  undefined8 uStack_420;
  float *pfStack_418;
  longlong lStack_410;
  byte *pbStack_408;
  ulonglong uStack_400;
  float *pfStack_3f8;
  float *pfStack_3f0;
  float *pfStack_3e8;
  longlong lStack_3e0;
  longlong lStack_3d8;
  float *pfStack_3d0;
  undefined8 uStack_3c8;
  float *pfStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  float fStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [16];
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  int iStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  int iStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float *pfStack_320;
  float *pfStack_318;
  float *pfStack_310;
  ulonglong uStack_308;
  float *pfStack_300;
  float *pfStack_2f8;
  ulonglong uStack_2f0;
  longlong *plStack_2e8;
  float *pfStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  float *pfStack_2c0;
  float *pfStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  longlong lStack_280;
  float *pfStack_278;
  float *pfStack_270;
  float *pfStack_268;
  float *pfStack_260;
  longlong lStack_258;
  ulonglong uStack_250;
  ulonglong uStack_248;
  ulonglong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulonglong uStack_220;
  float *pfStack_208;
  float *pfStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  longlong lStack_1a8;
  float *pfStack_1a0;
  byte *pbStack_198;
  float *pfStack_190;
  ulonglong uStack_188;
  float *pfStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  float *pfStack_168;
  undefined1 auStack_15d [5];
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float *pfStack_148;
  ulonglong uStack_140;
  float *pfStack_138;
  float fStack_130;
  float fStack_12c;
  float *pfStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  longlong *plStack_110;
  float *pfStack_108;
  float *pfStack_100;
  float fStack_f8;
  char cStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  fVar31 = param_13;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_350 = param_3;
  uStack_140 = param_2;
  uVar9 = pdb_140e94b40();
  uVar53 = (undefined4)((ulonglong)in_stack_fffffffffffff9c8 >> 0x20);
  pfVar13 = (float *)(ulonglong)uVar9;
  fVar28 = fVar31;
  if ((char)uVar9 == '\0') {
    pfVar25 = (float *)0x0;
    goto LAB_1414468ba;
  }
  unaff_R14 = (float *)0x46;
  lVar10 = pdb_14144a0a0(0x46);
  pfVar25 = (float *)&UNK_14330a148;
  if (lVar10 == 1) {
    if (0x46 < param_2) {
LAB_1414492c2:
      pdb_142dc8070(&UNK_14330a148,0x46,0);
LAB_1414492e3:
      pdb_142dc7e2a(4,unaff_R14);
LAB_1414492f1:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar11 = pdb_14144a0a0(param_2);
    if ((uVar11 & 1) != 0) {
      if (0x46 < param_2 + 2) {
        pdb_142dc8070(&UNK_14330a148,0x46,param_2 + 2,0x46,&UNK_14330a230);
        goto LAB_141449317;
      }
      unaff_R14 = (float *)(0x44 - param_2);
      pfVar25 = (float *)(&UNK_14330a14a + param_2);
    }
  }
  puVar21 = &UNK_14330a02f;
  unaff_R12 = (float *)&UNK_143309ff8;
  do {
    bVar19 = puVar21[-1];
    uVar9 = (uint)(char)bVar19;
    if ((char)bVar19 < '\0') {
      bVar5 = puVar21[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar21[-3];
        if ((char)bVar6 < -0x40) {
          pbVar1 = puVar21 + -4;
          puVar21 = puVar21 + -4;
          uVar9 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar21 = puVar21 + -3;
          uVar9 = bVar6 & 0xf;
        }
        uVar9 = bVar5 & 0x3f | uVar9 << 6;
      }
      else {
        puVar21 = puVar21 + -2;
        uVar9 = bVar5 & 0x1f;
      }
      uVar9 = (uint)(bVar19 & 0x3f) | uVar9 << 6;
      if (uVar9 != 0x5c) goto LAB_141446814;
LAB_14144682d:
      puVar22 = puVar21 + -0x143309ff7;
      if ((undefined *)0x37 < puVar22) {
        pdb_142dc8070(&UNK_143309ff8,0x37,puVar22,0x37,&UNK_14330a1f8);
        goto LAB_1414492c2;
      }
      unaff_RSI = 0x37 - (longlong)puVar22;
      unaff_R12 = (float *)(puVar21 + 1);
      goto LAB_14144684f;
    }
    puVar21 = puVar21 + -1;
    if (uVar9 == 0x5c) goto LAB_14144682d;
LAB_141446814:
    if (uVar9 == 0x2f) goto LAB_14144682d;
  } while (puVar21 != &UNK_143309ff8);
  unaff_RSI = 0x37;
LAB_14144684f:
  plVar12 = (longlong *)pdb_140e97000();
  if ((char)plVar12[0xd] != '\x01') goto LAB_141449198;
  do {
    if (*plVar12 == 0) {
      *plVar12 = -1;
      uVar53 = 0;
      plStack_110 = plVar12;
      unaff_R14 = (float *)pdb_140e94f10(plVar12 + 1,pfVar25,unaff_R14,unaff_R12,unaff_RSI,1,0);
      *plStack_110 = *plStack_110 + 1;
      pfVar25 = (float *)0x1;
      pfStack_3f0 = unaff_R14;
LAB_1414468ba:
      fVar31 = param_15;
      uVar11 = *(ulonglong *)(uStack_140 + 0x10);
      pfStack_3f8 = pfVar25;
      if (uVar11 < 2) {
        pfStack_138 = pfVar25;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330a02f,0x29,&UNK_14330a058);
      }
      uStack_4f0 = param_5;
      uStack_4f8 = uVar11;
      if (param_5 != uVar11) {
        pfStack_138 = pfVar25;
        pdb_142dc7fb4(0,&uStack_4f0,&uStack_4f8,0);
        goto LAB_1414492f1;
      }
      uStack_500 = param_7;
      uStack_508 = param_5;
      if (param_7 != param_5) {
        pfStack_138 = pfVar25;
        pdb_142dc7fb4(0,&uStack_500,&uStack_508,0);
        goto LAB_1414492f1;
      }
      uStack_510 = param_9;
      uStack_518 = param_5;
      if (param_9 != param_5) {
        pfStack_138 = pfVar25;
        pdb_142dc7fb4(0,&uStack_510,&uStack_518,0);
        goto LAB_1414492f1;
      }
      fVar27 = *param_4;
      auVar47 = ZEXT416((uint)fVar27);
      uVar11 = param_5 * 4 - 4;
      pfVar15 = param_4;
      if ((uVar11 & 4) == 0) {
        fVar46 = *param_4;
        fVar50 = fVar46;
        if (fVar46 <= fVar27) {
          fVar50 = fVar27;
        }
        auVar47 = ZEXT416(~-(uint)NAN(fVar27) & (uint)fVar50 | -(uint)NAN(fVar27) & (uint)fVar46);
        pfVar15 = param_4 + 1;
        unaff_XMM6 = auVar47;
      }
      if (uVar11 != 0) {
        unaff_XMM6 = auVar47;
        do {
          fVar27 = *pfVar15;
          fVar46 = pfVar15[1];
          fVar29 = unaff_XMM6._0_4_;
          fVar50 = fVar27;
          if (fVar27 <= fVar29) {
            fVar50 = fVar29;
          }
          fVar50 = (float)(~-(uint)NAN(fVar29) & (uint)fVar50 | -(uint)NAN(fVar29) & (uint)fVar27);
          pfVar15 = pfVar15 + 2;
          fVar27 = fVar46;
          if (fVar46 <= fVar50) {
            fVar27 = fVar50;
          }
          unaff_XMM6 = ZEXT416(-(uint)NAN(fVar50) & (uint)fVar46 |
                               ~-(uint)NAN(fVar50) & (uint)fVar27);
        } while (pfVar15 != param_4 + param_5);
      }
      fVar27 = unaff_XMM6._0_4_;
      if ((fVar27 == 0.0) && (!NAN(fVar27))) {
        if ((char)pfVar13 == '\0') {
          return;
        }
        plVar12 = (longlong *)pdb_140e97000();
        if ((char)plVar12[0xd] != '\x01') {
          plVar12 = (longlong *)pdb_142dd9610(plVar12,0);
          if (plVar12 == (longlong *)0x0) break;
        }
        if (*plVar12 == 0) {
          *plVar12 = -1;
          plStack_110 = plVar12;
          pdb_140e95370(plVar12 + 1,unaff_R14);
          goto LAB_14144728e;
        }
        goto LAB_14144918c;
      }
      fStack_f8 = *(float *)(uStack_140 + 0x30);
      cStack_f2 = *(char *)(param_16 + 5);
      fStack_338 = fVar28;
      if (cStack_f2 == '\x02') {
        pdb_14007ee60();
        pfVar13 = (float *)pub_1406abab0(8,4);
        if (param_10 == '\x03') {
          if (pfVar13 == (float *)0x0) goto LAB_141449234;
          fVar46 = fVar27 + _DAT_142e3c604 + _DAT_142e3c608;
          fVar27 = _DAT_142e3b1d8 + fVar31;
          fVar28 = fVar27;
          if (fVar27 <= fVar46) {
            fVar28 = fVar46;
          }
          fVar28 = (float)(~-(uint)NAN(fVar46) & (uint)fVar28 | -(uint)NAN(fVar46) & (uint)fVar27);
          unaff_XMM6 = ZEXT416((uint)fVar28);
          *pfVar13 = fVar31;
          pfVar13[1] = fVar28;
          uStack_3c8 = 2;
        }
        else {
          if (pfVar13 == (float *)0x0) {
            pfStack_138 = pfVar25;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,8);
          }
          *pfVar13 = fVar31;
          pfVar13[1] = fVar27;
          uStack_3c8 = 2;
        }
      }
      else {
        fVar28 = *param_16;
        pdb_14007ee60();
        pfVar13 = (float *)pub_1406abab0(0xc,4);
        if (pfVar13 == (float *)0x0) {
          pfStack_138 = pfVar25;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xc);
        }
        *pfVar13 = fVar31;
        pfVar13[1] = fVar28;
        pfVar13[2] = fVar27;
        uStack_3c8 = 3;
      }
      pfStack_418 = pfVar25;
      pfStack_3d0 = pfVar13;
      pdb_140846c00(&lStack_480,pfVar13);
      pfVar13 = pfStack_470;
      if (param_22 == '\0') {
        pfStack_2e0 = (float *)0x4;
        uStack_240 = 0;
        pfVar25 = param_4;
      }
      else {
        unaff_R14 = (float *)(param_5 * 4);
        pdb_14007ee60();
        pfVar25 = (float *)pub_1406abab0((ulonglong)unaff_R14,4);
        fVar50 = _UNK_142e3c61c;
        fVar46 = _UNK_142e3c618;
        fVar27 = _UNK_142e3c614;
        fVar28 = _DAT_142e3c610;
        if (pfVar25 == (float *)0x0) goto LAB_1414492e3;
        if (7 < param_5) {
          uVar11 = param_5 & 0x1ffffffffffffff8;
          uVar17 = 0;
          do {
            pfVar23 = (float *)((longlong)param_4 + uVar17);
            fVar29 = pfVar23[1];
            fVar30 = pfVar23[2];
            fVar42 = pfVar23[3];
            pfVar15 = (float *)((longlong)param_4 + uVar17 + 0x10);
            fVar56 = *pfVar15;
            fVar45 = pfVar15[1];
            fVar48 = pfVar15[2];
            fVar57 = pfVar15[3];
            pfVar15 = (float *)((longlong)pfVar25 + uVar17);
            *pfVar15 = *pfVar23 + fVar28;
            pfVar15[1] = fVar29 + fVar27;
            pfVar15[2] = fVar30 + fVar46;
            pfVar15[3] = fVar42 + fVar50;
            pfVar15 = (float *)((longlong)pfVar25 + uVar17 + 0x10);
            *pfVar15 = fVar56 + fVar28;
            pfVar15[1] = fVar45 + fVar27;
            pfVar15[2] = fVar48 + fVar46;
            pfVar15[3] = fVar57 + fVar50;
            uVar17 = uVar17 + 0x20;
            fVar29 = _DAT_142e3c620;
            if (((ulonglong)unaff_R14 & 0xffffffffffffffe0) == uVar17) goto joined_r0x000141446c07;
          } while( true );
        }
        uVar11 = 0;
        fVar29 = _DAT_142e3c620;
        do {
          pfVar25[uVar11] = param_4[uVar11] + fVar29;
          uVar11 = uVar11 + 1;
joined_r0x000141446c07:
        } while (param_5 != uVar11);
        uStack_240 = param_5;
        pfStack_2e0 = pfVar25;
      }
      in_stack_fffffffffffff9c8 = CONCAT44(uVar53,unaff_XMM6._0_4_);
      in_stack_fffffffffffff9c0 = param_5;
      pdb_140847dd0(&lStack_410,pbStack_478,pfVar13,uStack_140,pfVar25,param_5,
                    in_stack_fffffffffffff9c8,fStack_f8,cStack_f2 != '\x02');
      uVar14 = pdb_1406d0830(param_12);
      auVar33._0_8_ = pdb_140c2b5b0(uVar14);
      auVar33._8_4_ = (int)((ulonglong)auVar33._0_8_ >> 0x20);
      auVar33._12_4_ = unaff_XMM6._4_4_;
      auVar47._8_8_ = auVar33._8_8_;
      auVar47._0_4_ = (undefined4)auVar33._0_8_;
      auVar47._4_4_ = unaff_XMM6._0_4_;
      auVar47 = divps(_DAT_142e37950,auVar47);
      uStack_2c8 = auVar47._0_8_;
      param_1[2] = 0;
      pdb_14146c0d0(uVar14);
      uVar11 = param_1[2];
      uStack_238 = (float *)auStack_15d;
      unaff_RSI = param_11;
      if (1 < uVar11) {
        if (uVar11 < 0x15) {
          pdb_141460650(param_1[1],uVar11,1,&uStack_238);
        }
        else {
LAB_141449317:
          pdb_1414658e0();
        }
      }
      pfStack_3e8 = (float *)param_1[1];
      uVar11 = param_1[2];
      pfStack_1a0 = (float *)0x0;
      pbStack_198 = (byte *)0x8;
      pfStack_190 = (float *)0x0;
      lStack_280 = 0;
      pfStack_278 = (float *)0x4;
      pfStack_270 = (float *)0x0;
      pfStack_318 = param_4;
      pdb_14007ee60();
      pfVar25 = (float *)pub_1406abab0(0x500,4);
      if (pfVar25 == (float *)0x0) {
        uStack_420 = 0;
        pdb_142dc7e2a(4,0x500);
        goto LAB_1414492f1;
      }
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_188 = 0x20;
      pfStack_180 = pfVar25;
      fVar28 = (float)pub_142e329c0(fStack_f8 / _DAT_142e3c620);
      uVar20 = 0;
      uVar17 = (longlong)(fVar28 - _DAT_142e36f2c) & (longlong)fVar28 >> 0x3f | (longlong)fVar28;
      if (fVar28 < 0.0) {
        uVar17 = uVar20;
      }
      uVar24 = 0xffffffffffffffff;
      if (fVar28 <= _DAT_142e36f30) {
        uVar24 = uVar17;
      }
      pfVar25 = (float *)(uVar24 * 4 + 4);
      unaff_R14 = (float *)(uVar24 + 1);
      if ((float *)0x7ffffffffffffffc < pfVar25 || (ulonglong)unaff_R14 >> 0x3e != 0) {
LAB_141446e06:
        pdb_142dc7e2a(uVar20,pfVar25);
        goto LAB_1414492f1;
      }
      if (pfVar25 == (float *)0x0) {
        pfVar15 = (float *)0x4;
        unaff_R14 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar20 = 4;
        pfVar15 = (float *)pub_1406abab0((ulonglong)pfVar25,4);
        if (pfVar15 == (float *)0x0) goto LAB_141446e06;
      }
      uVar17 = uStack_400;
      lStack_258 = 0;
      lStack_520 = (longlong)pfVar13 * 0x8ba + unaff_RSI * 0x17d32;
      uStack_238 = (float *)&lStack_520;
      uStack_230 = &param_13;
      uStack_228 = (float *)0x0;
      uStack_220 = uStack_400;
      pfStack_428 = unaff_R14;
      pfStack_268 = unaff_R14;
      pfStack_260 = pfVar15;
      pdb_14017e110(&lStack_498,&uStack_238);
      uStack_248 = uVar17;
      if (uStack_488 < uVar17) {
        uStack_248 = uStack_488;
      }
      fStack_1cc = (float)unaff_RSI;
      fStack_1d4 = _DAT_142e3c624;
      if ((param_19 & 1) != 0) {
        fStack_1d4 = _DAT_142e3c624 * param_20;
      }
      plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,_DAT_142e3c620 / fStack_f8);
      uVar9 = (int)pfVar13 * 0x924;
      param_1 = (ulonglong *)(ulonglong)uVar9;
      iVar41 = -(uint)(_DAT_142e3783c < param_21 && _DAT_142e3c628 < fStack_f8);
      fStack_1d0 = param_18;
      if ((param_17 & 1) == 0) {
        fStack_1d0 = 0.0;
      }
      fVar27 = unaff_XMM6._0_4_;
      fStack_1d8 = _DAT_142e3c620 / fVar27;
      lStack_3e0 = (longlong)pfVar13 * 0x159 + unaff_RSI * 0x154df;
      lStack_3d8 = (longlong)pfVar13 * 0xdf + unaff_RSI * 0x91e;
      lStack_4d8 = unaff_RSI * 0x15b3 + (longlong)pfVar13 * (longlong)pfVar13 + 0x2a6;
      param_4 = pfStack_3e8 + uVar11 * 4;
      fStack_358 = _DAT_142e36f50 * (_DAT_142e3c620 / fStack_f8);
      iStack_334 = (int)unaff_RSI + uVar9 + 10;
      fStack_330 = *param_16;
      fStack_348 = param_16[1];
      fStack_14c = _DAT_142e3c62c / fStack_f8;
      plStack_2e8 = (longlong *)*param_14;
      lStack_2d8 = *(longlong *)(uStack_140 + 8);
      fStack_344 = param_16[2];
      fStack_340 = param_16[4];
      fStack_33c = param_16[3];
      uStack_154 = CONCAT31((int3)((uint)iVar41 >> 8),(byte)iVar41 & param_10 == '\x02');
      fVar28 = fVar31;
      pbStack_4e8 = pbStack_408;
      pbStack_4e0 = pbStack_490;
      fVar31 = _DAT_142e36f28;
      while (uVar11 = uStack_248, uStack_248 != 0) {
        while( true ) {
          uStack_248 = uVar11 - 1;
          param_1 = (ulonglong *)(pbStack_4e8 + uStack_248 * 0x20);
          uStack_354 = *(undefined4 *)(pbStack_4e0 + uVar11 * 4 + -4);
          lStack_528 = uStack_248 * 0x96a3dd + lStack_3e0;
          lStack_530 = uStack_248 * 0x91fd + lStack_3d8;
          lStack_538 = lStack_4d8 + uVar11 + -1;
          uStack_250 = uStack_400;
          pfStack_190 = (float *)0x0;
          for (pfVar13 = pfStack_3e8; pfVar15 = pfStack_190, unaff_R12 = pfStack_270,
              pfVar13 != param_4; pfVar13 = pfVar13 + 4) {
            pdb_140deec90(&uStack_2c8,pfVar13,plStack_110._0_4_);
            uStack_238._4_4_ = (float)param_1[2];
            uStack_230._4_4_ = *(float *)((longlong)param_1 + 0x14);
            uStack_238._0_4_ = (float)param_1[3];
            uStack_230._0_4_ = *(float *)((longlong)param_1 + 0x1c);
            cVar8 = pdb_140deea30(&uStack_238);
            pfVar25 = pfStack_190;
            if (cVar8 != '\0') {
              if (pfStack_190 == pfStack_1a0) {
                pdb_142d7e8a0(&pfStack_1a0);
              }
              *(float **)(pbStack_198 + (longlong)pfVar25 * 8) = pfVar13;
              pfStack_190 = (float *)((longlong)pfVar25 + 1);
            }
            fVar31 = _DAT_142e36f28;
          }
          unaff_R14 = (float *)((longlong)pfStack_190 - (longlong)pfStack_270);
          pfVar13 = pfStack_190;
          fVar28 = _DAT_142e36f3c;
          fVar46 = _DAT_142e3c640;
          fVar50 = _UNK_142e3c644;
          fVar29 = _UNK_142e3c648;
          fVar30 = _UNK_142e3c64c;
          pfVar25 = pfStack_278;
          if (pfStack_270 <= pfStack_190 && unaff_R14 != (float *)0x0) {
            if ((float *)(lStack_280 - (longlong)pfStack_270) < unaff_R14) {
              pdb_142d7f1b0(&lStack_280,pfStack_270,unaff_R14,4,4);
              pfVar13 = pfStack_278 + (longlong)pfStack_270;
              fVar31 = _DAT_142e36f28;
              pfVar23 = pfStack_270;
            }
            else {
              pfVar13 = pfStack_278 + (longlong)pfStack_270;
              pfVar23 = pfStack_270;
            }
            pfVar25 = pfStack_278;
            if ((float *)0x1 < unaff_R14) {
              pfStack_270 = pfVar23;
              pfStack_100 = pfStack_278;
              pub_142e32780(pfVar13,0);
              pfVar13 = pfStack_100 +
                        (longlong)
                        ((undefined *)((longlong)pfVar15 + (longlong)pfVar23) +
                        (-1 - (longlong)unaff_R12));
              pfVar23 = (float *)((undefined *)((longlong)pfVar23 + (longlong)unaff_R14) + -1);
              pfVar25 = pfStack_100;
            }
            *pfVar13 = 0.0;
            pfVar13 = (float *)((longlong)pfVar23 + 1);
            fVar28 = _DAT_142e36f3c;
            fVar46 = _DAT_142e3c640;
            fVar50 = _UNK_142e3c644;
            fVar29 = _UNK_142e3c648;
            fVar30 = _UNK_142e3c64c;
          }
          pfStack_270 = pfVar13;
          _DAT_142e36f3c = fVar28;
          _DAT_142e3c640 = fVar46;
          _UNK_142e3c644 = fVar50;
          _UNK_142e3c648 = fVar29;
          _UNK_142e3c64c = fVar30;
          if ((pfStack_270 != (float *)0x0) && (pfStack_190 != (float *)0x0)) {
            lVar10 = (longlong)pfStack_190 * 8;
            lVar18 = (longlong)pfStack_270 * 4;
            do {
              lVar18 = lVar18 + -4;
              lVar10 = lVar10 + -8;
              fVar56 = **(float **)(pbStack_198 + lVar10) - fStack_358;
              fVar42 = fVar56;
              if (fVar28 <= fVar56) {
                fVar42 = fVar28;
              }
              fVar28 = (float)(~-(uint)NAN(fVar28) & (uint)fVar42 |
                              -(uint)NAN(fVar28) & (uint)fVar56);
              *(float *)((longlong)pfVar25 + lVar18) = fVar28;
            } while ((lVar10 != 0) && (lVar18 != 0));
          }
          fVar28 = *(float *)(param_1 + 3);
          fVar42 = *(float *)((longlong)param_1 + 0x1c);
          fVar56 = (fVar42 - fVar28) * fStack_f8;
          if ((fVar56 == 0.0) && (pfVar13 = pfStack_190, !NAN(fVar56))) break;
          fStack_114 = *(float *)(param_1 + 2);
          fStack_150 = *(float *)((longlong)param_1 + 0x14);
          bVar26 = uVar11 != uStack_250;
          pfVar13 = (float *)(ulonglong)bVar26;
          bStack_f1 = param_10 != '\x01';
          lStack_258 = 0;
          pfStack_128 = pfStack_270;
          pdb_14007ee60();
          pfVar15 = (float *)pub_1406abab0(4,4);
          if (pfVar15 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,4);
          }
          *pfVar15 = 0.0;
          uStack_2c8 = (float *)0x1;
          pfStack_2b8 = (float *)0x1;
          pfVar23 = (float *)0x1;
          pfStack_2c0 = pfVar15;
          if (cStack_f2 == '\x02') {
LAB_141447743:
            pdb_142d89720();
          }
          else {
            lVar10 = 4;
            while (lVar10 != 0x14) {
              pfVar15 = (float *)((longlong)param_16 + lVar10);
              auStack_15d._1_4_ = *(float *)((longlong)param_16 + lVar10 + 4);
              lVar10 = lVar10 + 8;
              lStack_1b8 = 1;
              fVar45 = *pfVar15;
              while( true ) {
                if ((fVar45 != 0.0) || (NAN(fVar45))) {
                  if (((fVar45 != fVar31) || (NAN(fVar45) || NAN(fVar31))) &&
                     ((fVar28 <= fVar45 && (fVar45 < fVar42)))) {
                    fVar45 = (float)pdb_140de8220();
                    pfVar23 = pfStack_2b8;
                    if (pfStack_2b8 == uStack_2c8) {
                      pdb_142d89720();
                    }
                    pfStack_2c0[(longlong)pfVar23] = fVar45;
                    pfVar23 = (float *)((longlong)pfVar23 + 1);
                    pfStack_2b8 = pfVar23;
                  }
                }
                if (lStack_1b8 == 2) break;
                lStack_1b8 = 2;
                fVar45 = (float)auStack_15d._1_4_;
              }
            }
            unaff_R12 = (float *)0x14;
            if (pfVar23 == uStack_2c8) goto LAB_141447743;
          }
          bStack_f1 = bStack_f1 | bVar26;
          pfStack_2c0[(longlong)pfVar23] = 1.0;
          pfStack_2b8 = (float *)((longlong)pfVar23 + 1);
          if (pfStack_2b8 == (float *)0x0) {
            lStack_2d0 = 0;
            lStack_1a8 = 0;
          }
          else {
            unaff_R14 = pfStack_2c0 + (longlong)pfStack_2b8;
            lVar10 = 0;
            lStack_2d0 = 0;
            bVar26 = false;
            pfVar15 = pfStack_2c0;
            pfStack_108 = unaff_R14;
            do {
              bVar19 = bStack_f1;
              pfVar23 = pfVar15 + 1;
              fVar45 = *pfVar15;
              lStack_1a8 = lVar10;
              if (bVar26) {
                fVar48 = fVar45;
                fVar45 = (float)auStack_378._0_4_;
              }
              else {
                if (pfVar23 == unaff_R14) break;
                fVar48 = pfVar15[1];
                pfVar23 = pfVar15 + 2;
              }
              uStack_238 = (float *)0x0;
              uStack_230 = (undefined4 *)0x4;
              uStack_228 = (float *)0x0;
              if (fVar48 <= fVar45) {
                fVar45 = fVar48;
                if (pfVar23 == unaff_R14) {
                  auStack_378 = ZEXT416((uint)fVar48);
                  break;
                }
                while( true ) {
                  fVar48 = *pfVar23;
                  auStack_378 = ZEXT416((uint)fVar48);
                  uStack_238 = (float *)0x0;
                  uStack_230 = (undefined4 *)0x4;
                  uStack_228 = (float *)0x0;
                  if (fVar45 < fVar48) break;
                  pfVar23 = pfVar23 + 1;
                  fVar45 = fVar48;
                  if (pfVar23 == unaff_R14) goto joined_r0x00014144907d;
                }
                pfVar23 = pfVar23 + 1;
              }
              pfStack_100 = pfVar23;
              uStack_228 = (float *)0x0;
              uStack_230._4_4_ = 0.0;
              uStack_230._0_4_ = 5.60519e-45;
              uStack_238._4_4_ = 0.0;
              uStack_238._0_4_ = 0.0;
              auStack_378 = ZEXT416((uint)fVar48);
              fVar50 = (fVar48 - fVar45) * fVar56;
              fVar46 = (float)pub_142e329c0(fVar50 / _DAT_142e3c620);
              unaff_R12 = (float *)0x0;
              if (0.0 <= fVar46) {
                unaff_R12 = (float *)((longlong)(fVar46 - _DAT_142e36f2c) & (longlong)fVar46 >> 0x3f
                                     | (longlong)fVar46);
              }
              if (_DAT_142e36f30 < fVar46) {
                unaff_R12 = (float *)0xffffffffffffffff;
              }
              fVar46 = _DAT_142e3c630;
              if (bVar19 == 0) {
                fVar46 = (float)pub_142e329c0(fVar50 / _DAT_142e3c634);
                uVar11 = 0;
                if (0.0 <= fVar46) {
                  uVar11 = (longlong)(fVar46 - _DAT_142e36f2c) & (longlong)fVar46 >> 0x3f |
                           (longlong)fVar46;
                }
                if (_DAT_142e36f30 < fVar46) {
                  uVar11 = 0xffffffffffffffff;
                }
                unaff_R12 = (float *)(((uint)uVar11 & 1) + uVar11);
                fVar46 = _DAT_142e37ad4;
              }
              pdb_140de8bb0((undefined *)((longlong)unaff_R12 + 1),fVar46 / fVar50,&lStack_528,
                            &uStack_238,&UNK_14330a0d0);
              pfVar13 = uStack_228;
              fVar30 = _UNK_142e3c64c;
              fVar29 = _UNK_142e3c648;
              fVar50 = _UNK_142e3c644;
              fVar46 = _DAT_142e3c640;
              lVar18 = CONCAT44(uStack_230._4_4_,(float)uStack_230);
              bStack_f1 = bVar19;
              if ((float *)((longlong)pfStack_268 - lStack_1a8) < uStack_228) {
                pdb_142d7f1b0(&pfStack_268,lStack_1a8,uStack_228,4,4);
                lVar10 = lStack_258;
                if (pfVar13 < (float *)0x8) {
LAB_141447a04:
                  pfVar15 = (float *)0x0;
                }
                else {
LAB_1414479f3:
                  lStack_258 = lVar10;
                  if ((ulonglong)((longlong)pfStack_260 + (lVar10 * 4 - lVar18)) < 0x20)
                  goto LAB_141447a04;
                  pfVar15 = (float *)((ulonglong)pfVar13 & 0xfffffffffffffff8);
                  lStack_258 = lVar10 + (longlong)pfVar15;
                  pfVar23 = (float *)0x0;
                  do {
                    pfVar2 = (float *)(lVar18 + (longlong)pfVar23 * 4);
                    fVar48 = pfVar2[1];
                    fVar57 = pfVar2[2];
                    fVar58 = pfVar2[3];
                    pfVar3 = (float *)(lVar18 + 0x10 + (longlong)pfVar23 * 4);
                    auVar43._0_4_ = *pfVar3 * (float)auStack_378._0_4_ + (fVar46 - *pfVar3) * fVar45
                    ;
                    auVar43._4_4_ =
                         pfVar3[1] * (float)auStack_378._0_4_ + (fVar50 - pfVar3[1]) * fVar45;
                    auVar43._8_4_ =
                         pfVar3[2] * (float)auStack_378._0_4_ + (fVar29 - pfVar3[2]) * fVar45;
                    auVar43._12_4_ =
                         pfVar3[3] * (float)auStack_378._0_4_ + (fVar30 - pfVar3[3]) * fVar45;
                    pfVar3 = pfStack_260 + lVar10 + (longlong)pfVar23;
                    *pfVar3 = *pfVar2 * (float)auStack_378._0_4_ + (fVar46 - *pfVar2) * fVar45;
                    pfVar3[1] = fVar48 * (float)auStack_378._0_4_ + (fVar50 - fVar48) * fVar45;
                    pfVar3[2] = fVar57 * (float)auStack_378._0_4_ + (fVar29 - fVar57) * fVar45;
                    pfVar3[3] = fVar58 * (float)auStack_378._0_4_ + (fVar30 - fVar58) * fVar45;
                    *(undefined1 (*) [16])(pfStack_260 + (longlong)((longlong)pfVar23 + lVar10 + 4))
                         = auVar43;
                    pfVar23 = pfVar23 + 2;
                  } while (pfVar15 != pfVar23);
                  lVar10 = lStack_258;
                  if (pfVar13 == pfVar15) goto LAB_141447ab5;
                }
                pfVar23 = pfVar15;
                if (((ulonglong)pfVar13 & 1) != 0) {
                  fVar48 = *(float *)(lVar18 + (longlong)pfVar15 * 4);
                  pfStack_260[lStack_258] =
                       fVar48 * (float)auStack_378._0_4_ + (fVar31 - fVar48) * fVar45;
                  lStack_258 = lStack_258 + 1;
                  pfVar23 = (float *)((ulonglong)pfVar15 | 1);
                }
                lVar10 = lStack_258;
                if (pfVar13 != (float *)((ulonglong)pfVar15 | 1)) {
                  lVar18 = lVar18 + (longlong)pfVar23 * 4;
                  pfVar13 = (float *)((longlong)pfVar13 - (longlong)pfVar23);
                  pfVar15 = (float *)0x0;
                  do {
                    fVar48 = *(float *)(lVar18 + (longlong)pfVar15 * 4);
                    pfStack_260[lStack_258 + (longlong)pfVar15] =
                         fVar48 * (float)auStack_378._0_4_ + (fVar31 - fVar48) * fVar45;
                    fVar48 = *(float *)(lVar18 + 4 + (longlong)pfVar15 * 4);
                    pfStack_260[(longlong)((longlong)pfVar15 + lStack_258 + 1)] =
                         fVar48 * (float)auStack_378._0_4_ + (fVar31 - fVar48) * fVar45;
                    pfVar15 = (float *)((longlong)pfVar15 + 2);
                  } while (pfVar13 != pfVar15);
                  lVar10 = lStack_258 + (longlong)pfVar15;
                }
              }
              else {
                lVar10 = lStack_1a8;
                if (uStack_228 != (float *)0x0) {
                  lStack_258 = lStack_1a8;
                  if ((float *)0x7 < uStack_228) goto LAB_1414479f3;
                  goto LAB_141447a04;
                }
              }
LAB_141447ab5:
              unaff_R14 = pfStack_108;
              lStack_258 = lVar10;
              if (CONCAT44(uStack_238._4_4_,(float)uStack_238) != 0) {
                pub_1406abac0((byte *)CONCAT44(uStack_230._4_4_,(float)uStack_230),
                              CONCAT44(uStack_238._4_4_,(float)uStack_238) << 2,4);
              }
              lStack_2d0 = lStack_2d0 + (longlong)unaff_R12;
              bVar26 = true;
              pfVar15 = pfStack_100;
              lStack_1a8 = lVar10;
            } while (pfStack_100 != unaff_R14);
          }
joined_r0x00014144907d:
          if (uStack_2c8 != (float *)0x0) {
            pub_1406abac0((byte *)pfStack_2c0,(longlong)uStack_2c8 << 2,4);
          }
          fVar56 = fStack_1cc;
          pfStack_2f8 = pfStack_260 + lStack_1a8;
          if (lStack_1a8 != 0) {
            uVar11 = lStack_1a8 * 4 - 4;
            pfVar15 = pfStack_260;
            if (0x1b < uVar11) {
              uVar11 = (uVar11 >> 2) + 1;
              uVar17 = uVar11 & 0xfffffffffffffff8;
              pfVar15 = pfStack_260 + uVar17;
              uVar20 = 0;
              do {
                pfVar23 = pfStack_260 + uVar20;
                fVar45 = pfVar23[1];
                fVar48 = pfVar23[2];
                fVar57 = pfVar23[3];
                pfVar2 = pfStack_260 + uVar20 + 4;
                auVar44._0_4_ = *pfVar2 * fVar42 + (fVar46 - *pfVar2) * fVar28;
                auVar44._4_4_ = pfVar2[1] * fVar42 + (fVar50 - pfVar2[1]) * fVar28;
                auVar44._8_4_ = pfVar2[2] * fVar42 + (fVar29 - pfVar2[2]) * fVar28;
                auVar44._12_4_ = pfVar2[3] * fVar42 + (fVar30 - pfVar2[3]) * fVar28;
                pfVar2 = pfStack_260 + uVar20;
                *pfVar2 = *pfVar23 * fVar42 + (fVar46 - *pfVar23) * fVar28;
                pfVar2[1] = fVar45 * fVar42 + (fVar50 - fVar45) * fVar28;
                pfVar2[2] = fVar48 * fVar42 + (fVar29 - fVar48) * fVar28;
                pfVar2[3] = fVar57 * fVar42 + (fVar30 - fVar57) * fVar28;
                *(undefined1 (*) [16])(pfStack_260 + uVar20 + 4) = auVar44;
                uVar20 = uVar20 + 8;
              } while (uVar17 != uVar20);
              if (uVar11 == uVar17) goto LAB_141447cd6;
            }
            do {
              *pfVar15 = *pfVar15 * fVar42 + (fVar31 - *pfVar15) * fVar28;
              pfVar15 = pfVar15 + 1;
            } while (pfVar15 != pfStack_2f8);
          }
LAB_141447cd6:
          fVar46 = _DAT_14300b868;
          fVar31 = _DAT_142e37878;
          pfStack_3c0 = pfStack_260;
          auVar34._4_12_ = unaff_XMM6._4_12_;
          auVar34._0_4_ = (fVar27 * fStack_114 * _DAT_142e37878 + fStack_1cc) * _DAT_14300b868;
          fVar29 = (float)pub_142e32b30(auVar34._0_8_);
          fVar50 = _DAT_143309f30;
          fVar29 = fVar29 * _DAT_143309f30;
          fVar30 = (float)pub_142e32bc0();
          auStack_468._0_4_ = fVar27 * fStack_150;
          auStack_468._4_12_ = auVar34._4_12_;
          auVar35._0_4_ = ((float)auStack_468._0_4_ * fVar31 + fVar56) * fVar46;
          auVar35._4_12_ = auVar34._4_12_;
          fVar31 = (float)pub_142e32b30(auVar35._0_8_);
          fVar46 = (float)pub_142e32bc0();
          fStack_1c8 = fVar29 - fVar30;
          fVar29 = (float)pub_142e32b30();
          fVar30 = (float)pub_142e32bc0();
          fStack_1c4 = fVar31 * fVar50 - fVar46;
          fVar31 = (float)pub_142e32b30();
          fVar46 = (float)pub_142e32bc0();
          pbStack_5d8 = pbStack_198;
          pfStack_5d0 = pfStack_190;
          pfStack_570 = pfStack_128;
          lStack_450 = lStack_2d8;
          uStack_448 = param_5;
          uStack_440 = uStack_140;
          uStack_438 = 0;
          uStack_430 = 0;
          pfStack_578 = pfVar25;
          pdb_14141de40(&lStack_450);
          fStack_32c = (fStack_150 - fStack_114) * fVar27;
          fStack_1c0 = (fVar29 * fVar50 - fVar30) * _DAT_142e4bfe4;
          fStack_1bc = (fVar31 * fVar50 - fVar46) * _DAT_142e4bfe4;
          uVar11 = uStack_430 & 0xffffffff;
          fVar46 = _DAT_142e36f28 - uStack_430._4_4_;
          uVar14 = *(undefined8 *)(param_8 + uVar11 * 4);
          auStack_4c8._4_4_ = (float)((ulonglong)uVar14 >> 0x20) * uStack_430._4_4_;
          auStack_4c8._0_4_ = (float)auStack_4c8._4_4_ + (float)uVar14 * fVar46;
          auStack_4c8._8_8_ = 0;
          uVar14 = *(undefined8 *)(param_6 + uVar11 * 4);
          fVar31 = (float)((ulonglong)uVar14 >> 0x20) * uStack_430._4_4_;
          uStack_4b8 = CONCAT44(fVar31,fVar31 + (float)uVar14 * fVar46);
          uStack_4b0 = 0;
          auStack_3b8._4_4_ =
               (float)((ulonglong)*(undefined8 *)(pfStack_318 + uVar11) >> 0x20) * uStack_430._4_4_;
          auStack_3b8._0_4_ =
               (float)auStack_3b8._4_4_ + (float)*(undefined8 *)(pfStack_318 + uVar11) * fVar46;
          auStack_3b8._8_8_ = 0;
          iStack_34c = (int)uStack_248 * 0x54 + iStack_334;
          pbStack_4d0 = pbStack_408 + 0x1c;
          uStack_1b0 = 0;
          pfStack_148 = pfStack_3c0;
          pfStack_300 = (float *)0x0;
          bVar19 = 0;
LAB_141447f50:
          uVar53 = auStack_4c8._0_4_;
          pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,(undefined4)uStack_4b8);
          if (pfStack_148 != pfStack_2f8) {
            pfVar15 = pfStack_148 + 1;
            uVar11 = uStack_1b0 + 1;
            pfVar23 = pfStack_148;
            if (pfStack_300 == (float *)0x0) {
              if (pfVar15 == pfStack_2f8) {
                pfStack_148 = pfStack_2f8;
                plVar12 = &uStack_238;
                pfVar15 = (float *)0x0;
                uVar17 = uVar11;
                pfVar2 = pfStack_148;
                pfVar23 = uStack_238;
              }
              else {
                plVar12 = &uStack_2c8;
                uVar17 = uStack_1b0 + 2;
                pfVar2 = pfStack_148 + 2;
              }
              pfStack_148 = pfVar2;
              uStack_238._4_4_ = (float)((ulonglong)pfVar23 >> 0x20);
              uStack_238._0_4_ = SUB84(pfVar23,0);
              *plVar12 = (longlong)pfVar15;
              pfStack_310 = uStack_2c8;
              if (uStack_238 == (float *)0x0) {
                pfStack_300 = (float *)0x0;
                uStack_308 = uVar11;
                uStack_1b0 = uVar17;
                goto LAB_141447fb7;
              }
              uStack_308 = uStack_1b0;
              uStack_1b0 = uVar11;
              uVar11 = uVar17;
              pfVar15 = pfStack_148;
              pfVar23 = uStack_2c8;
              pfStack_310 = uStack_238;
            }
            uStack_2f0 = uStack_308;
            pfStack_320 = pfStack_310;
            pfStack_300 = pfStack_310;
            pfStack_540 = pfVar23;
            uVar17 = uStack_1b0;
            pfStack_148 = pfVar15;
            if (pfStack_310 == (float *)0x0) goto LAB_141449046;
            fStack_130 = (float)auStack_3b8._0_4_;
            pfStack_128 = (float *)CONCAT44(pfStack_128._4_4_,*pfStack_310);
            pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,*pfVar23);
            pfStack_310 = pfVar23;
            uStack_308 = uStack_1b0;
            uStack_1b0 = uVar11;
            uVar32 = pdb_140e02880(&lStack_530);
            pfStack_168 = (float *)CONCAT44(pfStack_168._4_4_,uVar32);
            fVar28 = (float)pdb_140e02880(&lStack_538);
            fVar31 = (fVar28 + _DAT_142e36f38) * _DAT_142e3c650 + fStack_1d4;
            if (fVar31 <= _DAT_142e37ad4) {
              fVar31 = _DAT_142e37ad4;
            }
            fStack_11c = pfStack_108._0_4_ - pfStack_128._0_4_;
            pdb_14141de40(&lStack_450);
            uVar11 = uStack_430 & 0xffffffff;
            fVar48 = _DAT_142e36f28 - uStack_430._4_4_;
            fVar46 = *(float *)(param_8 + uVar11 * 4);
            fVar56 = *(float *)(param_8 + 4 + uVar11 * 4) * uStack_430._4_4_;
            fVar50 = *(float *)(param_6 + uVar11 * 4);
            fVar58 = *(float *)(param_6 + 4 + uVar11 * 4) * uStack_430._4_4_;
            fVar28 = fVar48 * pfStack_318[uVar11];
            fVar57 = uStack_430._4_4_ * pfStack_318[uVar11 + 1];
            pdb_14141de40(&lStack_450);
            uVar32 = (undefined4)(in_stack_fffffffffffff9c0 >> 0x20);
            uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffff9c8 >> 0x20);
            uVar11 = uStack_430 & 0xffffffff;
            fVar29 = _DAT_142e36f28 - uStack_430._4_4_;
            fVar42 = *(float *)(param_8 + 4 + uVar11 * 4) * uStack_430._4_4_ +
                     *(float *)(param_8 + uVar11 * 4) * fVar29;
            auStack_4c8 = ZEXT416((uint)fVar42);
            uVar14 = *(undefined8 *)(param_6 + uVar11 * 4);
            fVar30 = uStack_430._4_4_ * (float)((ulonglong)uVar14 >> 0x20);
            fVar45 = fVar30 + fVar29 * (float)uVar14;
            fVar29 = uStack_430._4_4_ * pfStack_318[uVar11 + 1] + fVar29 * pfStack_318[uVar11];
            auStack_3b8 = ZEXT416((uint)fVar29);
            uStack_4b8 = CONCAT44(fVar30,fVar45);
            uStack_4b0 = 0;
            fVar30 = fVar45;
            if (pfStack_100._0_4_ <= fVar45) {
              fVar30 = pfStack_100._0_4_;
            }
            if ((float)(~-(uint)NAN(pfStack_100._0_4_) & (uint)fVar30 |
                       -(uint)NAN(pfStack_100._0_4_) & (uint)fVar45) <= (float)auStack_468._0_4_) {
              fVar56 = fVar46 * fVar48 + fVar56;
              fVar46 = (float)uVar53 + fVar56 + fVar42;
              if (fVar46 <= 0.0) {
                fVar42 = _DAT_142e3c654;
                fVar56 = _DAT_142e3c654;
              }
              fVar56 = fVar50 * fVar48 + fVar58 + fVar56;
              uVar9 = -(uint)(0.0 < fVar46);
              fVar46 = pfStack_100._0_4_ + (float)(~uVar9 & (uint)_DAT_142e3c654 | uVar53 & uVar9);
              pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar46);
              fVar42 = fVar42 + fVar45;
              if (((fVar42 <= (float)auStack_468._0_4_) || (fVar46 <= (float)auStack_468._0_4_)) ||
                 (fVar56 <= (float)auStack_468._0_4_)) {
                fVar28 = fVar28 + fVar57;
                if (((cStack_f2 != '\x02') &&
                    ((fVar46 = pfStack_128._0_4_ * _DAT_142e36f50 +
                               pfStack_108._0_4_ * _DAT_142e36f50, fVar46 < fStack_348 ||
                     (fStack_344 <= fVar46)))) && ((fStack_340 <= fVar46 || (fVar46 < fStack_33c))))
                {
                  fStack_130 = fStack_330;
                  fVar29 = fStack_330;
                  fVar28 = fStack_330;
                }
                fVar46 = (float)((int)uStack_2f0 * 0x171 + iStack_34c);
                pfVar13 = (float *)(ulonglong)(uint)fVar46;
                uVar11 = *param_1;
                uVar17 = uStack_250;
                if (uStack_250 < uVar11) {
                  uVar17 = uVar11;
                }
                pfVar15 = (float *)(pbStack_4d0 + uVar11 * 0x20);
                do {
                  pfVar25 = (float *)CONCAT71((int7)((ulonglong)pfVar25 >> 8),param_1[1] <= uVar11);
                  if (param_1[1] <= uVar11) {
                    bVar26 = pfStack_168._0_4_ < _DAT_142e3c658;
                    if (((byte)uStack_154 & bVar26) != 0) goto LAB_141447f50;
                    break;
                  }
                  if (uStack_250 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar17,uStack_250,&UNK_14330a0b8);
                  }
                  pfVar23 = pfVar15 + -1;
                  fVar50 = *pfVar15;
                  if ((*pfVar23 - plStack_110._0_4_ <= pfStack_128._0_4_) &&
                     (pfStack_128._0_4_ <= fVar50 + plStack_110._0_4_)) break;
                  uVar11 = uVar11 + 1;
                  pfVar15 = pfVar15 + 8;
                } while ((pfStack_108._0_4_ < *pfVar23 - plStack_110._0_4_) ||
                        (fVar50 + plStack_110._0_4_ < pfStack_108._0_4_));
                if (bStack_f1 == 0) {
                  if ((uStack_2f0 & 1) == 0) goto LAB_141447f50;
                  pfVar25 = (float *)0x0;
                }
                fVar50 = (float)uStack_3a8;
                fStack_158 = fVar56;
                fStack_12c = fVar29;
                fStack_118 = fVar42;
                if (!(bool)(bVar19 & fStack_328 == pfStack_128._0_4_)) {
                  fVar30 = fStack_f8 * pfStack_128._0_4_;
                  fVar29 = (float)pub_142e32b30(fVar30 * _DAT_142e3787c);
                  fVar50 = 0.0;
                  uStack_388 = 0;
                  uStack_380 = 0;
                  if (_DAT_142e37848 <= fStack_114) {
                    pub_142e32b30((fStack_1c8 * (fVar29 * _DAT_142e36f50 + _DAT_142e36f50) +
                                  _DAT_142e36f28) * fVar30 + fStack_1c0);
                    uStack_388 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da * _DAT_143007994);
                    uStack_380 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                  }
                  if ((char)pfVar25 == '\0') {
                    fVar50 = (float)pub_142e32b30();
                    fVar50 = fVar50 * _DAT_143007994;
                  }
                }
                fVar30 = fStack_f8 * pfStack_108._0_4_;
                fVar29 = (float)pub_142e32b30(fVar30 * _DAT_142e3787c);
                fVar42 = 0.0;
                uVar53 = 0;
                uVar54 = 0;
                uVar55 = 0;
                if (_DAT_142e37848 <= fStack_114) {
                  uVar14 = pub_142e32b30((fStack_1c8 * (fVar29 * _DAT_142e36f50 + _DAT_142e36f50) +
                                         _DAT_142e36f28) * fVar30 + fStack_1c0);
                  uVar53 = (undefined4)((ulonglong)uVar14 >> 0x20);
                  uVar54 = (undefined4)extraout_XMM0_Qb;
                  uVar55 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
                  fVar42 = (float)uVar14 * _DAT_143007994;
                }
                fVar29 = 0.0;
                uVar40 = 0;
                uVar36 = 0;
                uVar37 = 0;
                if ((char)pfVar25 == '\0') {
                  pub_142e32b30();
                  uVar36 = (undefined4)extraout_XMM0_Qb_00;
                  uVar37 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
                  fVar29 = extraout_XMM0_Da_00 * _DAT_143007994;
                  uVar40 = extraout_XMM0_Db_00;
                }
                uStack_398 = (float)uStack_388;
                uStack_390 = CONCAT44(fVar29,fVar50);
                fVar30 = fVar29;
                if (bStack_f1 == 0) {
                  fVar50 = fVar50 * _DAT_142e3c660 + _DAT_142e3c660;
                  fVar30 = fVar29 * _UNK_142e3c664 + _UNK_142e3c664;
                  uStack_390 = CONCAT44(fVar30,fVar50);
                }
                fStack_368 = pfStack_128._0_4_;
                fStack_364 = fStack_114;
                fStack_360 = pfStack_108._0_4_;
                fStack_35c = fStack_150;
                fStack_588 = fVar29;
                uStack_584 = uVar40;
                uStack_580 = uVar36;
                uStack_57c = uVar37;
                fStack_568 = fVar42;
                uStack_564 = uVar53;
                uStack_560 = uVar54;
                uStack_55c = uVar55;
                fStack_394 = fVar42;
                if (0.0 < fStack_338) {
                  uVar59 = CONCAT44(uVar60,uStack_354);
                  uVar14 = CONCAT44(uVar32,fStack_14c);
                  pdb_140846800(&fStack_368,uStack_2f0,pfStack_3c0,lStack_1a8,lStack_2d0,uVar14,
                                uVar59);
                  uVar32 = (undefined4)((ulonglong)uVar14 >> 0x20);
                  uVar60 = (undefined4)((ulonglong)uVar59 >> 0x20);
                }
                if (uStack_170 != 0) {
                  uStack_170 = 0;
                }
                uStack_178 = 0;
                uStack_238._0_4_ = fStack_368;
                uStack_238._4_4_ = fStack_364;
                uStack_230._0_4_ = fStack_360;
                uStack_230._4_4_ = fStack_35c;
                uStack_228 = (float *)CONCAT44(fStack_394,uStack_398);
                uStack_220 = uStack_390;
                if (uStack_188 == 0) {
                  pdb_140848dc0(&uStack_188);
                }
                else {
                  uStack_170 = 0;
                }
                uVar11 = 0;
                if (uStack_188 <= uStack_178 + uStack_170) {
                  uVar11 = uStack_188;
                }
                lVar10 = (uStack_178 + uStack_170) - uVar11;
                *(float **)(pfStack_180 + lVar10 * 10 + 4) = uStack_228;
                *(ulonglong *)(pfStack_180 + lVar10 * 10 + 4 + 2) = uStack_220;
                *(ulonglong *)(pfStack_180 + lVar10 * 10) =
                     CONCAT44(uStack_238._4_4_,(float)uStack_238);
                *(ulonglong *)(pfStack_180 + lVar10 * 10 + 2) =
                     CONCAT44(uStack_230._4_4_,(float)uStack_230);
                pfStack_180[lVar10 * 10 + 8] = fVar46;
                *(undefined2 *)(pfStack_180 + lVar10 * 10 + 9) = 0;
                uStack_238._0_4_ = fStack_368;
                uStack_238._4_4_ = fStack_364;
                uStack_230._0_4_ = fStack_360;
                uStack_230._4_4_ = fStack_35c;
                in_stack_fffffffffffff9c8 = CONCAT44(uVar60,fStack_1d8);
                in_stack_fffffffffffff9c0 = CONCAT44(uVar32,plStack_110._0_4_);
                uStack_170 = uStack_170 + 1;
                cVar8 = pdb_140815be0(&pbStack_5d8,&pfStack_578,pbStack_198,pfStack_190,&uStack_238,
                                      in_stack_fffffffffffff9c0,in_stack_fffffffffffff9c8,
                                      &uStack_188);
                if (cVar8 != '\0') {
                  fVar29 = fVar30;
                  if (fVar30 <= fVar50) {
                    fVar29 = fVar50;
                  }
                  fVar42 = fStack_568;
                  if ((float)uStack_388 <= fStack_568) {
                    fVar42 = (float)uStack_388;
                  }
                  fVar50 = ((float)(~-(uint)NAN(fVar50) & (uint)fVar29 |
                                   -(uint)NAN(fVar50) & (uint)fVar30) -
                           (float)(~-(uint)NAN((float)uStack_388) & (uint)fVar42 |
                                  -(uint)NAN((float)uStack_388) & (uint)fStack_568)) + fStack_32c;
                  fVar29 = _DAT_142e36f28 - fVar50 / fStack_32c;
                  if (bStack_f1 == 0) {
                    fVar29 = 0.0;
                  }
                  else {
                    fVar29 = fVar29 * _DAT_142e3c670 + (_DAT_142e36f28 - fVar29) * _DAT_142e3798c;
                  }
                  if ((_DAT_142e3c620 < fVar50) && (pfStack_168._0_4_ < fVar29)) {
                    if (uStack_170 != 0) {
                      uStack_170 = 0;
                    }
                    uStack_178 = 0;
                    pdb_1408469b0(pfStack_168._0_4_ / _DAT_142e3798c,&fStack_368,&uStack_398,fVar46,
                                  &uStack_188);
                  }
                }
                if (!(bool)(bVar19 & fStack_324 == pfStack_128._0_4_)) {
                  uVar9 = pdb_1413f9030(uStack_140);
                  uVar14 = *(undefined8 *)(lStack_2d8 + (ulonglong)uVar9 * 8);
                  uVar59 = *(undefined8 *)(lStack_2d8 + 8 + (ulonglong)uVar9 * 8);
                  fStack_4a8 = extraout_XMM0_Da_01 * (float)uVar59 +
                               (_DAT_142e36f28 - extraout_XMM0_Da_01) * (float)uVar14;
                  fStack_4a4 = extraout_XMM0_Da_01 * (float)((ulonglong)uVar59 >> 0x20) +
                               (_DAT_142e36f28 - extraout_XMM0_Da_01) *
                               (float)((ulonglong)uVar14 >> 0x20);
                  fStack_4a0 = extraout_XMM0_Dc_00 * 0.0 + 0.0;
                  fStack_49c = extraout_XMM0_Dc_00 * 0.0 + 0.0;
                }
                uVar9 = pdb_1413f9030(uStack_140);
                uVar14 = *(undefined8 *)(lStack_2d8 + (ulonglong)uVar9 * 8);
                uVar59 = *(undefined8 *)(lStack_2d8 + 8 + (ulonglong)uVar9 * 8);
                fVar30 = extraout_XMM0_Da_02 * (float)uVar59 +
                         (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)uVar14;
                fVar46 = extraout_XMM0_Da_02 * (float)((ulonglong)uVar59 >> 0x20) +
                         (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)((ulonglong)uVar14 >> 0x20)
                ;
                uStack_3a8 = CONCAT44(fVar46,fVar30);
                uStack_3a0 = CONCAT44(extraout_XMM0_Dc_01 * 0.0 + 0.0,
                                      extraout_XMM0_Dc_01 * 0.0 + 0.0);
                fVar30 = fVar30 - fStack_4a8;
                fVar46 = fVar46 - fStack_4a4;
                fVar42 = _DAT_142e36f28 / SQRT(fVar46 * fVar46 + fVar30 * fVar30);
                fVar30 = fVar42 * fVar30;
                fVar42 = fVar42 * fVar46;
                uStack_548 = CONCAT44(fVar42,fVar30);
                pdb_140df4520(&uStack_238,&uStack_548);
                fVar29 = (float)uStack_230;
                fVar50 = uStack_238._4_4_;
                fVar46 = (float)uStack_238;
                uStack_2c8 = (float *)CONCAT44(fVar30,(uint)fVar42 ^ _DAT_142e37820);
                pdb_140df4520();
                if (uStack_170 == 0) {
                  lVar10 = 0;
                  uVar11 = 0;
LAB_141448b19:
                  lVar18 = 0;
                }
                else {
                  uVar11 = 0;
                  if (uStack_188 <= uStack_178) {
                    uVar11 = uStack_188;
                  }
                  lVar10 = uStack_178 - uVar11;
                  lVar18 = uStack_170 - (uStack_188 - lVar10);
                  uVar11 = uStack_188;
                  if (uStack_170 < uStack_188 - lVar10 || lVar18 == 0) {
                    uVar11 = uStack_170 + lVar10;
                    goto LAB_141448b19;
                  }
                }
                fStack_11c = _DAT_142e36f28 / fStack_11c;
                uStack_388 = CONCAT44(fVar50,fVar46);
                uStack_380 = CONCAT44(fVar29,fVar29);
                auVar39._4_4_ = (float)uStack_230;
                auVar39._0_4_ = uStack_238._4_4_;
                auVar39._8_8_ = 0;
                unaff_R12 = pfStack_180 + lVar10 * 10;
                pfVar25 = pfStack_180 + uVar11 * 10;
                pfStack_168 = pfStack_180 + lVar18 * 10;
                fVar46 = fVar31 * (float)uStack_238;
                fVar50 = fVar31 * uStack_238._4_4_;
                fVar29 = fVar31 * (float)uStack_230;
                fVar31 = fVar31 * (float)uStack_230;
                pfVar13 = pfStack_180;
LAB_141448be0:
                pfVar15 = unaff_R12;
                pfVar23 = pfVar13;
                pfVar2 = pfStack_168;
                if ((unaff_R12 != pfVar25) ||
                   (pfVar15 = pfVar13, pfVar23 = unaff_R12, pfVar25 = pfStack_168,
                   pfVar2 = unaff_R12, pfVar13 != pfStack_168)) {
                  pfStack_168 = pfVar2;
                  fVar42 = (float)pdb_140deec10(pfVar15);
                  fVar30 = (float)pdb_140deec50(pfVar15);
                  fVar56 = (float)pdb_140deec20(pfVar15);
                  unaff_R12 = pfVar15 + 10;
                  pfVar13 = pfVar23;
                  if ((0.0 < fVar42) &&
                     ((0.0 < fVar30 && (fVar45 = fStack_f8 * fVar42, _DAT_142e37840 <= fVar45)))) {
                    fVar48 = (fVar56 - pfStack_128._0_4_) * fStack_11c;
                    uStack_2c8 = (float *)CONCAT44(fVar48 * uStack_3a8._4_4_ +
                                                   (_DAT_142e36f28 - fVar48) * fStack_4a4,
                                                   fVar48 * (float)uStack_3a8 +
                                                   (_DAT_142e36f28 - fVar48) * fStack_4a8);
                    pdb_140df4540(&uStack_238,&uStack_2c8,auVar39._0_4_ * fVar27);
                    fVar57 = (float)uStack_230;
                    fVar48 = (float)uStack_238;
                    fVar30 = fVar30 * fVar27;
                    fVar58 = uStack_238._4_4_;
                    if (bStack_f1 == 0) {
                      auVar39 = ZEXT416((uint)_DAT_142e3c674);
                      if (fVar45 < _DAT_142e3c674) goto LAB_141448be0;
                      if (fVar45 < fVar30) {
                        fVar58 = uStack_238._4_4_ + (fVar30 - fVar45) * _DAT_142e36f38;
                        fVar30 = fVar45;
                      }
                    }
                    if (cStack_f2 == '\x02') {
                      if (param_22 != '\0') {
                        fVar38 = fVar30 * _DAT_142e36f50 + fVar58;
                        unaff_R14 = (float *)0xc;
                        if (fStack_130 < fVar38) goto LAB_141448e73;
                        fVar49 = fStack_12c;
                        fVar51 = fVar28;
                        fVar52 = fStack_130;
                        if (fStack_12c < fVar38) goto LAB_141448ea8;
                      }
                      unaff_R14 = (float *)0x4;
                      fVar49 = fStack_118;
                      fVar51 = fStack_158;
                      fVar52 = pfStack_100._0_4_;
                      if ((float)((uint)(fVar58 - fVar27) & _DAT_142e377e0) < _DAT_142e3c678) {
                        unaff_R14 = (float *)0x14;
                        fVar49 = fStack_118;
                        fVar52 = pfStack_100._0_4_;
                      }
                    }
                    else {
                      uStack_228 = *(float **)(param_16 + 4);
                      uStack_238._0_4_ = (float)*(undefined8 *)param_16;
                      uStack_238._4_4_ = (float)((ulonglong)*(undefined8 *)param_16 >> 0x20);
                      uStack_230._0_4_ = (float)*(undefined8 *)(param_16 + 2);
                      uStack_230._4_4_ = (float)((ulonglong)*(undefined8 *)(param_16 + 2) >> 0x20);
                      cVar8 = pdb_1408ff980((longlong)&uStack_228 + 4);
                      unaff_R14 = (float *)0x4;
                      fVar49 = fStack_118;
                      fVar51 = fStack_158;
                      fVar52 = pfStack_100._0_4_;
                      if (((cVar8 != '\0') && ((float)uStack_238 < fVar58)) &&
                         ((fVar38 = fVar58 + fVar30 * _DAT_142e36f50, fStack_130 < fVar38 ||
                          (fStack_12c < fVar38)))) {
LAB_141448e73:
                        unaff_R14 = (float *)0xc;
                        fVar49 = fStack_12c;
                        fVar51 = fVar28;
                        fVar52 = fStack_130;
                      }
                    }
LAB_141448ea8:
                    fVar45 = fVar45 + fStack_1d0;
                    fStack_618 = fVar45 * (float)uStack_388;
                    fStack_614 = fVar45 * uStack_388._4_4_;
                    fStack_610 = fVar45 * (float)uStack_380;
                    fStack_60c = fVar45 * uStack_380._4_4_;
                    fStack_608 = fVar30 * _DAT_142e378e0;
                    fStack_604 = fVar30 * _UNK_142e378e4;
                    fStack_600 = fVar30 * _UNK_142e378e8;
                    fStack_5fc = fVar30 * _UNK_142e378ec;
                    fStack_5e8 = fVar48;
                    fStack_5e0 = fVar57;
                    fStack_5dc = fVar57;
                    uStack_2c8 = *(float **)(pfVar15 + 4);
                    pfStack_2c0 = *(float **)(pfVar15 + 6);
                    fStack_5f8 = fVar46;
                    fStack_5f4 = fVar50;
                    fStack_5f0 = fVar29;
                    fStack_5ec = fVar31;
                    fStack_5e4 = fVar58;
                    pdb_140e07fe0(&uStack_238,&fStack_618);
                    fStack_1ec = pfVar15[8];
                    uStack_5c8 = CONCAT44(uStack_238._4_4_,(float)uStack_238);
                    uStack_5c0 = CONCAT44(uStack_230._4_4_,(float)uStack_230);
                    pfStack_5b8 = uStack_228;
                    uStack_5b0 = uStack_220;
                    pfStack_598 = uStack_2c8;
                    pfStack_590 = pfStack_2c0;
                    pfStack_208 = uStack_2c8;
                    pfStack_200 = pfStack_2c0;
                    uStack_1e8 = uStack_350;
                    uStack_1e4 = CONCAT44((fVar42 * _DAT_142e36f50 + fVar56) * fStack_f8,
                                          (fVar56 - fVar42 * _DAT_142e36f50) * fStack_f8);
                    uStack_1dc = SUB84(unaff_R14,0);
                    fStack_1f8 = fVar52;
                    fStack_1f4 = fVar51;
                    fStack_1f0 = fVar49;
                    pdb_14094c790(&uStack_2c8,&uStack_238);
                    lVar10 = plStack_2e8[2];
                    if (lVar10 == *plStack_2e8) {
                      pdb_142d8db70(plStack_2e8);
                    }
                    lVar18 = plStack_2e8[1];
                    lVar16 = lVar10 * 0x40;
                    auVar39._8_8_ = uStack_2b0;
                    auVar39._0_8_ = (ulonglong)pfStack_2b8;
                    *(undefined1 (*) [16])(lVar18 + 0x30 + lVar16) = auStack_298;
                    puVar4 = (undefined8 *)(lVar18 + 0x20 + lVar16);
                    *puVar4 = uStack_2a8;
                    puVar4[1] = uStack_2a0;
                    *(undefined1 (*) [16])(lVar18 + 0x10 + lVar16) = auVar39;
                    *(undefined8 *)(lVar18 + lVar16) = uStack_2c8;
                    ((undefined8 *)(lVar18 + lVar16))[1] = pfStack_2c0;
                    plStack_2e8[2] = lVar10 + 1;
                  }
                  goto LAB_141448be0;
                }
                bVar19 = 1;
                fStack_328 = pfStack_108._0_4_;
                uStack_388 = CONCAT44(uStack_564,fStack_568);
                uStack_380 = CONCAT44(uStack_55c,uStack_560);
                fStack_4a8 = (float)uStack_3a8;
                fStack_4a4 = uStack_3a8._4_4_;
                fStack_4a0 = (float)uStack_3a0;
                fStack_49c = uStack_3a0._4_4_;
                uStack_3a8 = CONCAT44(uStack_584,fStack_588);
                uStack_3a0 = CONCAT44(uStack_57c,uStack_580);
                fStack_324 = fStack_328;
                pfStack_168 = unaff_R12;
              }
            }
            goto LAB_141447f50;
          }
          pfStack_148 = pfStack_2f8;
LAB_141447fb7:
          pfStack_320 = (float *)0x0;
          pfVar23 = pfStack_310;
          uVar17 = uStack_308;
          uVar11 = uStack_1b0;
LAB_141449046:
          uStack_1b0 = uVar11;
          uStack_308 = uVar17;
          pfStack_310 = pfVar23;
          uVar11 = uStack_248;
          fVar31 = _DAT_142e36f28;
          if (uStack_248 == 0) goto LAB_141447119;
        }
      }
LAB_141447119:
      if (lStack_498 != 0) {
        pub_1406abac0(pbStack_490,lStack_498 << 2,4);
      }
      uVar14 = uStack_3c8;
      if (pfStack_268 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_260,(longlong)pfStack_268 << 2,4);
      }
      if (uStack_188 != 0) {
        pub_1406abac0((byte *)pfStack_180,uStack_188 * 0x28,4);
      }
      if (lStack_280 != 0) {
        pub_1406abac0((byte *)pfStack_278,lStack_280 << 2,4);
      }
      if (pfStack_1a0 != (float *)0x0) {
        pub_1406abac0(pbStack_198,(longlong)pfStack_1a0 << 3,8);
      }
      if (lStack_410 != 0) {
        pub_1406abac0(pbStack_408,lStack_410 << 5,8);
      }
      if (uStack_240 != 0) {
        pub_1406abac0((byte *)pfStack_2e0,uStack_240 << 2,4);
      }
      if (lStack_480 != 0) {
        pub_1406abac0(pbStack_478,lStack_480 << 2,4);
      }
      unaff_RSI = (ulonglong)(uint)((int)uVar14 << 2);
      pub_1406abac0((byte *)pfStack_3d0,unaff_RSI,4);
      if (pfStack_3f8 == (float *)0x0) {
        return;
      }
      plVar12 = (longlong *)pdb_140e97000();
      if ((char)plVar12[0xd] != '\x01') {
        plVar12 = (longlong *)pdb_142dd9610(plVar12,0);
        if (plVar12 == (longlong *)0x0) break;
      }
      if (*plVar12 == 0) {
        *plVar12 = -1;
        plStack_110 = plVar12;
        pdb_140e95370(plVar12 + 1,pfStack_3f0);
LAB_14144728e:
        *plStack_110 = *plStack_110 + 1;
        return;
      }
    }
LAB_14144918c:
    plVar12 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_141449198:
    plVar12 = (longlong *)pdb_142dd9610(plVar12,0);
  } while (plVar12 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_141449234:
  pfStack_138 = pfVar25;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,8);
}

