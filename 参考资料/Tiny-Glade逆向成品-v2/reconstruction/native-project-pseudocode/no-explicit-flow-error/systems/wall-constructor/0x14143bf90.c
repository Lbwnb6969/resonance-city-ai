// VA 0x14143bf90, PDB extent 14878 bytes
// system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_playermade_stairs::pillars_visual::construct_playermade_stair_pillars_visuals::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_playermade_stairs::pillars_visual::construct_playermade_stair_pillars_visuals::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
   Extent: 14878 */

void pdb_14143bf90(ulonglong *param_1,ulonglong param_2,undefined4 param_3,float *param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7,longlong param_8,
                  ulonglong param_9,char param_10,ulonglong param_11,undefined8 param_12,
                  float param_13,undefined8 *param_14,float param_15,undefined1 (*param_16) [16],
                  uint param_17,float param_18,uint param_19,float param_20,float param_21,
                  char param_22)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 auVar5 [4];
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float *pfVar11;
  undefined8 uVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong unaff_RSI;
  ulonglong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulonglong uVar20;
  float *pfVar21;
  float *unaff_R12;
  longlong lVar22;
  float *unaff_R14;
  float *pfVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar35;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  ulonglong in_stack_fffffffffffff9a0;
  undefined8 in_stack_fffffffffffff9a8;
  undefined8 uVar52;
  undefined4 uVar53;
  float fStack_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float fStack_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float fStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  byte *pbStack_5f8;
  float *pfStack_5f0;
  undefined1 auStack_5e8 [16];
  float fStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  float *pfStack_5b8;
  ulonglong uStack_5b0;
  undefined8 uStack_5a8;
  float *pfStack_5a0;
  float *pfStack_598;
  undefined8 uStack_580;
  float *pfStack_578;
  longlong lStack_570;
  longlong lStack_568;
  longlong lStack_560;
  longlong lStack_558;
  ulonglong uStack_550;
  ulonglong uStack_548;
  ulonglong uStack_540;
  ulonglong uStack_538;
  ulonglong uStack_530;
  ulonglong uStack_528;
  byte *pbStack_520;
  byte *pbStack_518;
  longlong lStack_510;
  byte *pbStack_508;
  undefined1 *puStack_500;
  float *pfStack_4f8;
  undefined8 uStack_4f0;
  undefined1 auStack_4e8 [16];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  longlong lStack_4a8;
  byte *pbStack_4a0;
  ulonglong uStack_498;
  longlong lStack_490;
  byte *pbStack_488;
  float *pfStack_480;
  undefined1 auStack_478 [16];
  undefined8 uStack_468;
  undefined8 uStack_460;
  longlong lStack_458;
  ulonglong uStack_450;
  ulonglong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  float *pfStack_430;
  undefined8 uStack_428;
  float *pfStack_420;
  longlong lStack_418;
  byte *pbStack_410;
  ulonglong uStack_408;
  float *pfStack_400;
  float *pfStack_3f8;
  ulonglong uStack_3f0;
  longlong lStack_3e8;
  longlong lStack_3e0;
  char *pcStack_3d8;
  float *pfStack_3d0;
  undefined8 uStack_3c8;
  float *pfStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [16];
  undefined4 uStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  float fStack_358;
  float fStack_354;
  undefined4 uStack_350;
  int iStack_34c;
  undefined4 uStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  int iStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float *pfStack_320;
  float *pfStack_318;
  ulonglong uStack_310;
  float *pfStack_308;
  float *pfStack_300;
  ulonglong uStack_2f8;
  float *pfStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float *pfStack_2d0;
  longlong lStack_2c8;
  longlong lStack_290;
  float *pfStack_288;
  float *pfStack_280;
  float *pfStack_278;
  float *pfStack_270;
  longlong lStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_250;
  undefined1 auStack_248 [4];
  undefined1 auStack_244 [8];
  undefined4 uStack_23c;
  undefined8 uStack_238;
  ulonglong uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  undefined8 uStack_218;
  float *pfStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  longlong lStack_1b0;
  float *pfStack_1a8;
  byte *pbStack_1a0;
  float *pfStack_198;
  ulonglong uStack_190;
  float *pfStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  float *pfStack_170;
  undefined1 uStack_165;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float *pfStack_150;
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
  
  fVar29 = param_13;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_348 = param_3;
  pfStack_150 = param_4;
  uStack_140 = param_2;
  uVar7 = pdb_140e94b40();
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffff9a8 >> 0x20);
  uVar15 = (ulonglong)uVar7;
  fVar26 = fVar29;
  if ((char)uVar7 == '\0') {
    pfVar23 = (float *)0x0;
    goto LAB_14143c1ba;
  }
  unaff_R14 = (float *)0x46;
  lVar8 = pdb_14144a0a0(0x46);
  pfVar23 = (float *)&UNK_14330a148;
  if (lVar8 == 1) {
    if (0x46 < param_2) {
LAB_14143ebe4:
      pdb_142dc8070(&UNK_14330a148,0x46,0);
LAB_14143ec05:
      pdb_142dc7e2a(4,unaff_R14);
LAB_14143ec13:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar9 = pdb_14144a0a0(param_2);
    if ((uVar9 & 1) != 0) {
      if (0x46 < param_2 + 2) {
        pdb_142dc8070(&UNK_14330a148,0x46,param_2 + 2,0x46,&UNK_14330a230);
        goto LAB_14143ec39;
      }
      unaff_R14 = (float *)(0x44 - param_2);
      pfVar23 = (float *)(&UNK_14330a14a + param_2);
    }
  }
  puVar18 = &UNK_14330a02f;
  unaff_R12 = (float *)&UNK_143309ff8;
  do {
    bVar16 = puVar18[-1];
    uVar7 = (uint)(char)bVar16;
    if ((char)bVar16 < '\0') {
      bVar2 = puVar18[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar18[-3];
        if ((char)bVar3 < -0x40) {
          pbVar1 = puVar18 + -4;
          puVar18 = puVar18 + -4;
          uVar7 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar18 = puVar18 + -3;
          uVar7 = bVar3 & 0xf;
        }
        uVar7 = bVar2 & 0x3f | uVar7 << 6;
      }
      else {
        puVar18 = puVar18 + -2;
        uVar7 = bVar2 & 0x1f;
      }
      uVar7 = (uint)(bVar16 & 0x3f) | uVar7 << 6;
      if (uVar7 != 0x5c) goto LAB_14143c114;
LAB_14143c12d:
      puVar19 = puVar18 + -0x143309ff7;
      if ((undefined *)0x37 < puVar19) {
        pdb_142dc8070(&UNK_143309ff8,0x37,puVar19,0x37,&UNK_14330a1f8);
        goto LAB_14143ebe4;
      }
      unaff_RSI = 0x37 - (longlong)puVar19;
      unaff_R12 = (float *)(puVar18 + 1);
      goto LAB_14143c14f;
    }
    puVar18 = puVar18 + -1;
    if (uVar7 == 0x5c) goto LAB_14143c12d;
LAB_14143c114:
    if (uVar7 == 0x2f) goto LAB_14143c12d;
  } while (puVar18 != &UNK_143309ff8);
  unaff_RSI = 0x37;
LAB_14143c14f:
  plVar10 = (longlong *)pdb_140e97000();
  if ((char)plVar10[0xd] != '\x01') goto LAB_14143eaba;
  do {
    if (*plVar10 == 0) {
      *plVar10 = -1;
      uVar34 = 0;
      plStack_110 = plVar10;
      unaff_R14 = (float *)pdb_140e94f10(plVar10 + 1,pfVar23,unaff_R14,unaff_R12,unaff_RSI,1,0);
      *plStack_110 = *plStack_110 + 1;
      pfVar23 = (float *)0x1;
      pfStack_3f8 = unaff_R14;
LAB_14143c1ba:
      fVar29 = param_15;
      uVar9 = *(ulonglong *)(uStack_140 + 0x10);
      pfStack_400 = pfVar23;
      if (uVar9 < 2) {
        pfStack_138 = pfVar23;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330a02f,0x29,&UNK_14330a058);
      }
      uStack_528 = param_5;
      uStack_530 = uVar9;
      if (param_5 != uVar9) {
        pfStack_138 = pfVar23;
        pdb_142dc7fb4(0,&uStack_528,&uStack_530,0);
        goto LAB_14143ec13;
      }
      uStack_538 = param_7;
      uStack_540 = param_5;
      if (param_7 != param_5) {
        pfStack_138 = pfVar23;
        pdb_142dc7fb4(0,&uStack_538,&uStack_540,0);
        goto LAB_14143ec13;
      }
      uStack_548 = param_9;
      uStack_550 = param_5;
      if (param_9 != param_5) {
        pfStack_138 = pfVar23;
        pdb_142dc7fb4(0,&uStack_548,&uStack_550,0);
        goto LAB_14143ec13;
      }
      fVar25 = *pfStack_150;
      auVar46 = ZEXT416((uint)fVar25);
      uVar9 = param_5 * 4 - 4;
      pfVar11 = pfStack_150;
      if ((uVar9 & 4) == 0) {
        fVar45 = *pfStack_150;
        fVar48 = fVar45;
        if (fVar45 <= fVar25) {
          fVar48 = fVar25;
        }
        auVar46 = ZEXT416(~-(uint)NAN(fVar25) & (uint)fVar48 | -(uint)NAN(fVar25) & (uint)fVar45);
        unaff_XMM6 = auVar46;
        pfVar11 = pfStack_150 + 1;
      }
      if (uVar9 != 0) {
        unaff_XMM6 = auVar46;
        do {
          fVar25 = *pfVar11;
          fVar45 = pfVar11[1];
          fVar27 = unaff_XMM6._0_4_;
          fVar48 = fVar25;
          if (fVar25 <= fVar27) {
            fVar48 = fVar27;
          }
          fVar48 = (float)(~-(uint)NAN(fVar27) & (uint)fVar48 | -(uint)NAN(fVar27) & (uint)fVar25);
          pfVar11 = pfVar11 + 2;
          fVar25 = fVar45;
          if (fVar45 <= fVar48) {
            fVar25 = fVar48;
          }
          unaff_XMM6 = ZEXT416(-(uint)NAN(fVar48) & (uint)fVar45 |
                               ~-(uint)NAN(fVar48) & (uint)fVar25);
        } while (pfVar11 != pfStack_150 + param_5);
      }
      fVar25 = unaff_XMM6._0_4_;
      if ((fVar25 == 0.0) && (!NAN(fVar25))) {
        if ((char)uVar15 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] == '\x01') ||
           (plVar10 = (longlong *)pdb_142dd9610(plVar10,0), plVar10 != (longlong *)0x0)) {
          if (*plVar10 == 0) {
            *plVar10 = -1;
            plStack_110 = plVar10;
            pdb_140e95370(plVar10 + 1,unaff_R14);
            goto LAB_14143cba7;
          }
          goto LAB_14143eaae;
        }
        break;
      }
      fStack_f8 = *(float *)(uStack_140 + 0x30);
      cStack_f2 = param_16[1][4];
      fStack_334 = fVar26;
      if (cStack_f2 == '\x02') {
        pdb_14007ee60();
        pfVar11 = (float *)pub_1406abab0(8,4);
        if (param_10 == '\x03') {
          if (pfVar11 == (float *)0x0) goto LAB_14143eb56;
          fVar45 = fVar25 + _DAT_142e3c604 + _DAT_142e3c608;
          fVar25 = _DAT_142e3b1d8 + fVar29;
          fVar26 = fVar25;
          if (fVar25 <= fVar45) {
            fVar26 = fVar45;
          }
          fVar26 = (float)(~-(uint)NAN(fVar45) & (uint)fVar26 | -(uint)NAN(fVar45) & (uint)fVar25);
          unaff_XMM6 = ZEXT416((uint)fVar26);
          *pfVar11 = fVar29;
          pfVar11[1] = fVar26;
          uStack_3c8 = 2;
        }
        else {
          if (pfVar11 == (float *)0x0) {
            pfStack_138 = pfVar23;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,8);
          }
          *pfVar11 = fVar29;
          pfVar11[1] = fVar25;
          uStack_3c8 = 2;
        }
      }
      else {
        fVar26 = *(float *)*param_16;
        pdb_14007ee60();
        pfVar11 = (float *)pub_1406abab0(0xc,4);
        if (pfVar11 == (float *)0x0) {
          pfStack_138 = pfVar23;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xc);
        }
        *pfVar11 = fVar29;
        pfVar11[1] = fVar26;
        pfVar11[2] = fVar25;
        uStack_3c8 = 3;
      }
      pfVar13 = pfStack_150;
      pfStack_420 = pfVar23;
      pfStack_3d0 = pfVar11;
      pdb_140846c00(&lStack_490,pfVar11);
      unaff_R12 = pfStack_480;
      if (param_22 == '\0') {
        pfStack_2f0 = (float *)0x4;
        uStack_250 = 0;
      }
      else {
        unaff_R14 = (float *)(param_5 * 4);
        pdb_14007ee60();
        pfVar23 = (float *)pub_1406abab0((ulonglong)unaff_R14,4);
        fVar48 = _UNK_142e3c61c;
        fVar45 = _UNK_142e3c618;
        fVar25 = _UNK_142e3c614;
        fVar26 = _DAT_142e3c610;
        if (pfVar23 == (float *)0x0) goto LAB_14143ec05;
        if (7 < param_5) {
          uVar15 = param_5 & 0x1ffffffffffffff8;
          uVar9 = 0;
          do {
            pfVar11 = (float *)((longlong)pfVar13 + uVar9);
            fVar27 = pfVar11[1];
            fVar28 = pfVar11[2];
            fVar39 = pfVar11[3];
            pfVar14 = (float *)((longlong)pfVar13 + uVar9 + 0x10);
            fVar49 = *pfVar14;
            fVar41 = pfVar14[1];
            fVar40 = pfVar14[2];
            fVar44 = pfVar14[3];
            pfVar14 = (float *)((longlong)pfVar23 + uVar9);
            *pfVar14 = *pfVar11 + fVar26;
            pfVar14[1] = fVar27 + fVar25;
            pfVar14[2] = fVar28 + fVar45;
            pfVar14[3] = fVar39 + fVar48;
            pfVar11 = (float *)((longlong)pfVar23 + uVar9 + 0x10);
            *pfVar11 = fVar49 + fVar26;
            pfVar11[1] = fVar41 + fVar25;
            pfVar11[2] = fVar40 + fVar45;
            pfVar11[3] = fVar44 + fVar48;
            uVar9 = uVar9 + 0x20;
            fVar27 = _DAT_142e3c620;
            if (((ulonglong)unaff_R14 & 0xffffffffffffffe0) == uVar9) goto joined_r0x00014143c514;
          } while( true );
        }
        uVar15 = 0;
        fVar27 = _DAT_142e3c620;
        do {
          pfVar23[uVar15] = pfVar13[uVar15] + fVar27;
          uVar15 = uVar15 + 1;
joined_r0x00014143c514:
        } while (param_5 != uVar15);
        uStack_250 = param_5;
        pfVar13 = pfVar23;
        pfStack_2f0 = pfVar23;
      }
      in_stack_fffffffffffff9a8 = CONCAT44(uVar34,unaff_XMM6._0_4_);
      in_stack_fffffffffffff9a0 = param_5;
      pdb_140847dd0(&lStack_418,pbStack_488,unaff_R12,uStack_140,pfVar13,param_5,
                    in_stack_fffffffffffff9a8,fStack_f8,cStack_f2 != '\x02');
      uVar12 = pdb_1406d0830(param_12);
      auVar31._0_8_ = pdb_140c2b5b0(uVar12);
      auVar31._8_4_ = (int)((ulonglong)auVar31._0_8_ >> 0x20);
      auVar31._12_4_ = unaff_XMM6._4_4_;
      auVar46._8_8_ = auVar31._8_8_;
      auVar46._0_4_ = (undefined4)auVar31._0_8_;
      auVar46._4_4_ = unaff_XMM6._0_4_;
      auVar46 = divps(_DAT_142e37950,auVar46);
      fStack_2d8 = auVar46._0_4_;
      fStack_2d4 = auVar46._4_4_;
      param_1[2] = 0;
      pdb_14146c0d0(uVar12);
      uVar15 = param_1[2];
      _auStack_248 = (float *)&uStack_165;
      unaff_RSI = param_11;
      if (1 < uVar15) {
        if (uVar15 < 0x15) {
          pdb_141460650(param_1[1],uVar15,1,auStack_248);
        }
        else {
LAB_14143ec39:
          pdb_1414658e0();
        }
      }
      uStack_3f0 = param_1[1];
      uVar15 = param_1[2];
      pfStack_1a8 = (float *)0x0;
      pbStack_1a0 = (byte *)0x8;
      pfStack_198 = (float *)0x0;
      lStack_290 = 0;
      pfStack_288 = (float *)0x4;
      pfStack_280 = (float *)0x0;
      pdb_14007ee60();
      pfVar23 = (float *)pub_1406abab0(0x500,4);
      if (pfVar23 == (float *)0x0) {
        uStack_428 = 0;
        pdb_142dc7e2a(4,0x500);
        goto LAB_14143ec13;
      }
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_190 = 0x20;
      pfStack_188 = pfVar23;
      fVar26 = (float)pub_142e329c0(fStack_f8 / _DAT_142e3c620);
      uVar17 = 0;
      uVar9 = (longlong)(fVar26 - _DAT_142e36f2c) & (longlong)fVar26 >> 0x3f | (longlong)fVar26;
      if (fVar26 < 0.0) {
        uVar9 = uVar17;
      }
      uVar20 = 0xffffffffffffffff;
      if (fVar26 <= _DAT_142e36f30) {
        uVar20 = uVar9;
      }
      pfVar23 = (float *)(uVar20 * 4 + 4);
      unaff_R14 = (float *)(uVar20 + 1);
      if ((float *)0x7ffffffffffffffc < pfVar23 || (ulonglong)unaff_R14 >> 0x3e != 0) {
LAB_14143c6fd:
        pdb_142dc7e2a(uVar17,pfVar23);
        goto LAB_14143ec13;
      }
      if (pfVar23 == (float *)0x0) {
        pfVar11 = (float *)0x4;
        unaff_R14 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar17 = 4;
        pfVar11 = (float *)pub_1406abab0((ulonglong)pfVar23,4);
        if (pfVar11 == (float *)0x0) goto LAB_14143c6fd;
      }
      uVar9 = uStack_408;
      lStack_268 = 0;
      lStack_558 = (longlong)unaff_R12 * 0x8ba + unaff_RSI * 0x17d32;
      stack0xfffffffffffffdc0 = (byte *)&param_13;
      _auStack_248 = (float *)&lStack_558;
      uStack_238 = (float *)0x0;
      uStack_230 = uStack_408;
      pfStack_430 = unaff_R14;
      pfStack_278 = unaff_R14;
      pfStack_270 = pfVar11;
      pdb_14017e110(&lStack_4a8,auStack_248);
      uStack_258 = uVar9;
      if (uStack_498 < uVar9) {
        uStack_258 = uStack_498;
      }
      fStack_1d4 = (float)unaff_RSI;
      fStack_1dc = _DAT_142e3c624;
      if ((param_19 & 1) != 0) {
        fStack_1dc = _DAT_142e3c624 * param_20;
      }
      plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,_DAT_142e3c620 / fStack_f8);
      uVar7 = (int)unaff_R12 * 0x924;
      param_1 = (ulonglong *)(ulonglong)uVar7;
      iVar38 = -(uint)(_DAT_142e3783c < param_21 && _DAT_142e3c628 < fStack_f8);
      fStack_1d8 = param_18;
      if ((param_17 & 1) == 0) {
        fStack_1d8 = 0.0;
      }
      fVar25 = unaff_XMM6._0_4_;
      fStack_1e0 = _DAT_142e3c620 / fVar25;
      lStack_3e8 = (longlong)unaff_R12 * 0x159 + unaff_RSI * 0x154df;
      lStack_3e0 = (longlong)unaff_R12 * 0xdf + unaff_RSI * 0x91e;
      lStack_510 = unaff_RSI * 0x15b3 + (longlong)unaff_R12 * (longlong)unaff_R12 + 0x2a6;
      uVar15 = uVar15 * 0x10 + uStack_3f0;
      fStack_354 = _DAT_142e36f50 * (_DAT_142e3c620 / fStack_f8);
      iStack_330 = (int)unaff_RSI + uVar7 + 10;
      fStack_32c = *(float *)*param_16;
      fStack_344 = *(float *)(*param_16 + 4);
      fStack_154 = _DAT_142e3c62c / fStack_f8;
      pcStack_3d8 = (char *)*param_14;
      puStack_500 = (undefined1 *)param_14[1];
      pfStack_4f8 = (float *)param_14[2];
      uStack_4f0 = param_14[3];
      lStack_2e8 = *(longlong *)(uStack_140 + 8);
      uStack_15c = CONCAT31((int3)((uint)iVar38 >> 8),(byte)iVar38 & param_10 == '\x02');
      fStack_340 = *(float *)(*param_16 + 8);
      fStack_33c = *(float *)param_16[1];
      fStack_338 = *(float *)(*param_16 + 0xc);
      fVar26 = fVar29;
      pbStack_520 = pbStack_410;
      pbStack_518 = pbStack_4a0;
      fVar29 = _DAT_142e36f28;
      while (uVar9 = uStack_258, uStack_258 != 0) {
        while( true ) {
          uStack_258 = uVar9 - 1;
          param_1 = (ulonglong *)(pbStack_520 + uStack_258 * 0x20);
          uStack_350 = *(undefined4 *)(pbStack_518 + uVar9 * 4 + -4);
          lStack_560 = uStack_258 * 0x96a3dd + lStack_3e8;
          lStack_568 = uStack_258 * 0x91fd + lStack_3e0;
          lStack_570 = lStack_510 + uVar9 + -1;
          uStack_260 = uStack_408;
          pfStack_198 = (float *)0x0;
          for (uVar17 = uStack_3f0; pfVar13 = pfStack_198, pfVar11 = pfStack_280, uVar17 != uVar15;
              uVar17 = uVar17 + 0x10) {
            pdb_140deec90(&fStack_2d8,uVar17,plStack_110._0_4_);
            auStack_244._0_4_ = (int)param_1[2];
            auStack_248 = (undefined1  [4])(int)param_1[3];
            auStack_244._4_4_ = *(undefined4 *)((longlong)param_1 + 0x1c);
            uStack_23c = *(undefined4 *)((longlong)param_1 + 0x14);
            cVar6 = pdb_140deea30(auStack_248);
            pfVar23 = pfStack_198;
            if (cVar6 != '\0') {
              if (pfStack_198 == pfStack_1a8) {
                pdb_142d7e8a0(&pfStack_1a8);
              }
              *(ulonglong *)(pbStack_1a0 + (longlong)pfVar23 * 8) = uVar17;
              pfStack_198 = (float *)((longlong)pfVar23 + 1);
            }
            fVar29 = _DAT_142e36f28;
          }
          unaff_R14 = (float *)((longlong)pfStack_198 - (longlong)pfStack_280);
          fVar26 = _DAT_142e36f3c;
          fVar45 = _DAT_142e3c640;
          fVar48 = _UNK_142e3c644;
          fVar27 = _UNK_142e3c648;
          fVar28 = _UNK_142e3c64c;
          pfVar23 = pfStack_288;
          if (pfStack_280 <= pfStack_198 && unaff_R14 != (float *)0x0) {
            if ((float *)(lStack_290 - (longlong)pfStack_280) < unaff_R14) {
              pdb_142d7f1b0(&lStack_290,pfStack_280,unaff_R14,4,4);
              pfVar14 = pfStack_288 + (longlong)pfStack_280;
              fVar29 = _DAT_142e36f28;
              pfVar21 = pfStack_280;
            }
            else {
              pfVar14 = pfStack_288 + (longlong)pfStack_280;
              pfVar21 = pfStack_280;
            }
            pfVar23 = pfStack_288;
            if ((float *)0x1 < unaff_R14) {
              pfStack_280 = pfVar21;
              pfStack_100 = pfStack_288;
              pub_142e32780(pfVar14,0);
              pfVar14 = pfStack_100 +
                        (longlong)
                        ((undefined *)((longlong)pfVar13 + (longlong)pfVar21) +
                        (-1 - (longlong)pfVar11));
              pfVar21 = (float *)((undefined *)((longlong)pfVar21 + (longlong)unaff_R14) + -1);
              pfVar23 = pfStack_100;
            }
            *pfVar14 = 0.0;
            pfVar13 = (float *)((longlong)pfVar21 + 1);
            fVar26 = _DAT_142e36f3c;
            fVar45 = _DAT_142e3c640;
            fVar48 = _UNK_142e3c644;
            fVar27 = _UNK_142e3c648;
            fVar28 = _UNK_142e3c64c;
          }
          pfStack_280 = pfVar13;
          _DAT_142e36f3c = fVar26;
          _DAT_142e3c640 = fVar45;
          _UNK_142e3c644 = fVar48;
          _UNK_142e3c648 = fVar27;
          _UNK_142e3c64c = fVar28;
          if ((pfStack_280 != (float *)0x0) && (pfStack_198 != (float *)0x0)) {
            lVar8 = (longlong)pfStack_198 * 8;
            lVar22 = (longlong)pfStack_280 * 4;
            do {
              lVar22 = lVar22 + -4;
              lVar8 = lVar8 + -8;
              fVar49 = **(float **)(pbStack_1a0 + lVar8) - fStack_354;
              fVar39 = fVar49;
              if (fVar26 <= fVar49) {
                fVar39 = fVar26;
              }
              fVar26 = (float)(~-(uint)NAN(fVar26) & (uint)fVar39 |
                              -(uint)NAN(fVar26) & (uint)fVar49);
              *(float *)((longlong)pfVar23 + lVar22) = fVar26;
            } while ((lVar8 != 0) && (lVar22 != 0));
          }
          fVar26 = *(float *)(param_1 + 3);
          fVar39 = *(float *)((longlong)param_1 + 0x1c);
          fVar49 = (fVar39 - fVar26) * fStack_f8;
          if ((fVar49 == 0.0) && (unaff_R12 = pfStack_198, !NAN(fVar49))) break;
          fStack_114 = *(float *)(param_1 + 2);
          fStack_158 = *(float *)((longlong)param_1 + 0x14);
          bVar24 = uVar9 != uStack_260;
          unaff_R12 = (float *)(ulonglong)bVar24;
          bStack_f1 = param_10 != '\x01';
          lStack_268 = 0;
          pfStack_128 = pfStack_280;
          pdb_14007ee60();
          pfVar11 = (float *)pub_1406abab0(4,4);
          if (pfVar11 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,4);
          }
          *pfVar11 = 0.0;
          fStack_2d8 = 1.4013e-45;
          fStack_2d4 = 0.0;
          lStack_2c8 = 1;
          lVar8 = 1;
          pfStack_2d0 = pfVar11;
          if (cStack_f2 == '\x02') {
LAB_14143d063:
            pdb_142d89720();
          }
          else {
            lVar22 = 4;
            while (lVar22 != 0x14) {
              pfVar11 = (float *)(*param_16 + lVar22);
              fStack_164 = *(float *)(*param_16 + lVar22 + 4);
              lVar22 = lVar22 + 8;
              lStack_1c0 = 1;
              fVar41 = *pfVar11;
              while( true ) {
                if ((fVar41 != 0.0) || (NAN(fVar41))) {
                  if (((fVar41 != fVar29) || (NAN(fVar41) || NAN(fVar29))) &&
                     ((fVar26 <= fVar41 && (fVar41 < fVar39)))) {
                    fVar41 = (float)pdb_140de8220();
                    lVar8 = lStack_2c8;
                    if (lStack_2c8 == CONCAT44(fStack_2d4,fStack_2d8)) {
                      pdb_142d89720();
                    }
                    pfStack_2d0[lVar8] = fVar41;
                    lVar8 = lVar8 + 1;
                    lStack_2c8 = lVar8;
                  }
                }
                if (lStack_1c0 == 2) break;
                lStack_1c0 = 2;
                fVar41 = fStack_164;
              }
            }
            if (lVar8 == CONCAT44(fStack_2d4,fStack_2d8)) goto LAB_14143d063;
          }
          bStack_f1 = bStack_f1 | bVar24;
          pfStack_2d0[lVar8] = 1.0;
          lStack_2c8 = lVar8 + 1;
          if (lStack_2c8 == 0) {
            lStack_2e0 = 0;
            lVar22 = CONCAT44(fStack_2d4,fStack_2d8);
            lStack_1b0 = 0;
          }
          else {
            unaff_R14 = pfStack_2d0 + lStack_2c8;
            lVar8 = 0;
            lStack_2e0 = 0;
            bVar24 = false;
            pfVar11 = pfStack_2d0;
            pfStack_108 = unaff_R14;
            do {
              bVar16 = bStack_f1;
              pfVar13 = pfVar11 + 1;
              fVar41 = *pfVar11;
              if (bVar24) {
                fVar40 = fVar41;
                fVar41 = (float)auStack_378._0_4_;
              }
              else {
                if (pfVar13 == unaff_R14) break;
                fVar40 = pfVar11[1];
                pfVar13 = pfVar11 + 2;
              }
              _auStack_248 = ZEXT816(4) << 0x40;
              uStack_238 = (float *)0x0;
              lStack_1b0 = lVar8;
              if (fVar40 <= fVar41) {
                fVar41 = fVar40;
                if (pfVar13 == unaff_R14) {
                  auStack_378 = ZEXT416((uint)fVar40);
                  lVar22 = CONCAT44(fStack_2d4,fStack_2d8);
                  goto joined_r0x00014143e99f;
                }
                while( true ) {
                  fVar40 = *pfVar13;
                  auStack_378 = ZEXT416((uint)fVar40);
                  _auStack_248 = ZEXT816(4) << 0x40;
                  uStack_238 = (float *)0x0;
                  if (fVar41 < fVar40) break;
                  pfVar13 = pfVar13 + 1;
                  fVar41 = fVar40;
                  if (pfVar13 == unaff_R14) goto LAB_14143d4fa;
                }
                pfVar13 = pfVar13 + 1;
              }
              pfStack_100 = pfVar13;
              uStack_238 = (float *)0x0;
              auStack_378 = ZEXT416((uint)fVar40);
              fVar48 = (fVar40 - fVar41) * fVar49;
              fVar45 = (float)pub_142e329c0(fVar48 / _DAT_142e3c620);
              uVar9 = 0;
              if (0.0 <= fVar45) {
                uVar9 = (longlong)(fVar45 - _DAT_142e36f2c) & (longlong)fVar45 >> 0x3f |
                        (longlong)fVar45;
              }
              if (_DAT_142e36f30 < fVar45) {
                uVar9 = 0xffffffffffffffff;
              }
              fVar45 = _DAT_142e3c630;
              if (bVar16 == 0) {
                fVar45 = (float)pub_142e329c0(fVar48 / _DAT_142e3c634);
                uVar9 = 0;
                if (0.0 <= fVar45) {
                  uVar9 = (longlong)(fVar45 - _DAT_142e36f2c) & (longlong)fVar45 >> 0x3f |
                          (longlong)fVar45;
                }
                if (_DAT_142e36f30 < fVar45) {
                  uVar9 = 0xffffffffffffffff;
                }
                uVar9 = ((uint)uVar9 & 1) + uVar9;
                fVar45 = _DAT_142e37ad4;
              }
              pdb_140de8bb0(uVar9 + 1,fVar45 / fVar48,&lStack_560,auStack_248,&UNK_14330a0d0);
              unaff_R12 = uStack_238;
              fVar28 = _UNK_142e3c64c;
              fVar27 = _UNK_142e3c648;
              fVar48 = _UNK_142e3c644;
              fVar45 = _DAT_142e3c640;
              lVar22 = (longlong)stack0xfffffffffffffdc0;
              bStack_f1 = bVar16;
              if ((float *)((longlong)pfStack_278 - lStack_1b0) < uStack_238) {
                pdb_142d7f1b0(&pfStack_278,lStack_1b0,uStack_238,4,4);
                lVar8 = lStack_268;
                if (unaff_R12 < (float *)0x8) {
LAB_14143d323:
                  pfVar11 = (float *)0x0;
                }
                else {
LAB_14143d312:
                  lStack_268 = lVar8;
                  if ((ulonglong)((longlong)pfStack_270 + (lVar8 * 4 - lVar22)) < 0x20)
                  goto LAB_14143d323;
                  pfVar11 = (float *)((ulonglong)unaff_R12 & 0xfffffffffffffff8);
                  lStack_268 = lVar8 + (longlong)pfVar11;
                  pfVar13 = (float *)0x0;
                  do {
                    pfVar14 = (float *)(lVar22 + (longlong)pfVar13 * 4);
                    fVar40 = pfVar14[1];
                    fVar44 = pfVar14[2];
                    fVar47 = pfVar14[3];
                    pfVar21 = (float *)(lVar22 + 0x10 + (longlong)pfVar13 * 4);
                    auVar42._0_4_ =
                         *pfVar21 * (float)auStack_378._0_4_ + (fVar45 - *pfVar21) * fVar41;
                    auVar42._4_4_ =
                         pfVar21[1] * (float)auStack_378._0_4_ + (fVar48 - pfVar21[1]) * fVar41;
                    auVar42._8_4_ =
                         pfVar21[2] * (float)auStack_378._0_4_ + (fVar27 - pfVar21[2]) * fVar41;
                    auVar42._12_4_ =
                         pfVar21[3] * (float)auStack_378._0_4_ + (fVar28 - pfVar21[3]) * fVar41;
                    pfVar21 = pfStack_270 + lVar8 + (longlong)pfVar13;
                    *pfVar21 = *pfVar14 * (float)auStack_378._0_4_ + (fVar45 - *pfVar14) * fVar41;
                    pfVar21[1] = fVar40 * (float)auStack_378._0_4_ + (fVar48 - fVar40) * fVar41;
                    pfVar21[2] = fVar44 * (float)auStack_378._0_4_ + (fVar27 - fVar44) * fVar41;
                    pfVar21[3] = fVar47 * (float)auStack_378._0_4_ + (fVar28 - fVar47) * fVar41;
                    *(undefined1 (*) [16])(pfStack_270 + (longlong)((longlong)pfVar13 + lVar8 + 4))
                         = auVar42;
                    pfVar13 = pfVar13 + 2;
                  } while (pfVar11 != pfVar13);
                  lVar8 = lStack_268;
                  if (unaff_R12 == pfVar11) goto LAB_14143d3d5;
                }
                pfVar13 = pfVar11;
                if (((ulonglong)unaff_R12 & 1) != 0) {
                  fVar40 = *(float *)(lVar22 + (longlong)pfVar11 * 4);
                  pfStack_270[lStack_268] =
                       fVar40 * (float)auStack_378._0_4_ + (fVar29 - fVar40) * fVar41;
                  lStack_268 = lStack_268 + 1;
                  pfVar13 = (float *)((ulonglong)pfVar11 | 1);
                }
                lVar8 = lStack_268;
                if (unaff_R12 != (float *)((ulonglong)pfVar11 | 1)) {
                  lVar22 = lVar22 + (longlong)pfVar13 * 4;
                  unaff_R12 = (float *)((longlong)unaff_R12 - (longlong)pfVar13);
                  pfVar11 = (float *)0x0;
                  do {
                    fVar40 = *(float *)(lVar22 + (longlong)pfVar11 * 4);
                    pfStack_270[lStack_268 + (longlong)pfVar11] =
                         fVar40 * (float)auStack_378._0_4_ + (fVar29 - fVar40) * fVar41;
                    fVar40 = *(float *)(lVar22 + 4 + (longlong)pfVar11 * 4);
                    pfStack_270[(longlong)((longlong)pfVar11 + lStack_268 + 1)] =
                         fVar40 * (float)auStack_378._0_4_ + (fVar29 - fVar40) * fVar41;
                    pfVar11 = (float *)((longlong)pfVar11 + 2);
                  } while (unaff_R12 != pfVar11);
                  lVar8 = lStack_268 + (longlong)pfVar11;
                }
              }
              else {
                lVar8 = lStack_1b0;
                if (uStack_238 != (float *)0x0) {
                  lStack_268 = lStack_1b0;
                  if ((float *)0x7 < uStack_238) goto LAB_14143d312;
                  goto LAB_14143d323;
                }
              }
LAB_14143d3d5:
              unaff_R14 = pfStack_108;
              lStack_268 = lVar8;
              if (_auStack_248 != (float *)0x0) {
                pub_1406abac0(stack0xfffffffffffffdc0,(longlong)_auStack_248 << 2,4);
              }
              lStack_2e0 = lStack_2e0 + uVar9;
              bVar24 = true;
              pfVar11 = pfStack_100;
            } while (pfStack_100 != unaff_R14);
LAB_14143d4fa:
            lVar22 = CONCAT44(fStack_2d4,fStack_2d8);
            lStack_1b0 = lVar8;
          }
joined_r0x00014143e99f:
          if (lVar22 != 0) {
            pub_1406abac0((byte *)pfStack_2d0,lVar22 << 2,4);
          }
          fVar49 = fStack_1d4;
          pfStack_300 = pfStack_270 + lStack_1b0;
          if (lStack_1b0 != 0) {
            uVar9 = lStack_1b0 * 4 - 4;
            pfVar11 = pfStack_270;
            if (0x1b < uVar9) {
              uVar9 = (uVar9 >> 2) + 1;
              uVar17 = uVar9 & 0xfffffffffffffff8;
              pfVar11 = pfStack_270 + uVar17;
              uVar20 = 0;
              do {
                pfVar13 = pfStack_270 + uVar20;
                fVar41 = pfVar13[1];
                fVar40 = pfVar13[2];
                fVar44 = pfVar13[3];
                pfVar14 = pfStack_270 + uVar20 + 4;
                auVar43._0_4_ = *pfVar14 * fVar39 + (fVar45 - *pfVar14) * fVar26;
                auVar43._4_4_ = pfVar14[1] * fVar39 + (fVar48 - pfVar14[1]) * fVar26;
                auVar43._8_4_ = pfVar14[2] * fVar39 + (fVar27 - pfVar14[2]) * fVar26;
                auVar43._12_4_ = pfVar14[3] * fVar39 + (fVar28 - pfVar14[3]) * fVar26;
                pfVar14 = pfStack_270 + uVar20;
                *pfVar14 = *pfVar13 * fVar39 + (fVar45 - *pfVar13) * fVar26;
                pfVar14[1] = fVar41 * fVar39 + (fVar48 - fVar41) * fVar26;
                pfVar14[2] = fVar40 * fVar39 + (fVar27 - fVar40) * fVar26;
                pfVar14[3] = fVar44 * fVar39 + (fVar28 - fVar44) * fVar26;
                *(undefined1 (*) [16])(pfStack_270 + uVar20 + 4) = auVar43;
                uVar20 = uVar20 + 8;
              } while (uVar17 != uVar20);
              if (uVar9 == uVar17) goto LAB_14143d5f6;
            }
            do {
              *pfVar11 = *pfVar11 * fVar39 + (fVar29 - *pfVar11) * fVar26;
              pfVar11 = pfVar11 + 1;
            } while (pfVar11 != pfStack_300);
          }
LAB_14143d5f6:
          fVar45 = _DAT_14300b868;
          fVar29 = _DAT_142e37878;
          pfStack_3c0 = pfStack_270;
          auVar32._4_12_ = unaff_XMM6._4_12_;
          auVar32._0_4_ = (fVar25 * fStack_114 * _DAT_142e37878 + fStack_1d4) * _DAT_14300b868;
          fVar27 = (float)pub_142e32b30(auVar32._0_8_);
          fVar48 = _DAT_143309f30;
          fVar27 = fVar27 * _DAT_143309f30;
          fVar28 = (float)pub_142e32bc0();
          auStack_478._0_4_ = fVar25 * fStack_158;
          auStack_478._4_12_ = auVar32._4_12_;
          auVar33._0_4_ = ((float)auStack_478._0_4_ * fVar29 + fVar49) * fVar45;
          auVar33._4_12_ = auVar32._4_12_;
          fVar29 = (float)pub_142e32b30(auVar33._0_8_);
          fVar45 = (float)pub_142e32bc0();
          fStack_1d0 = fVar27 - fVar28;
          fVar27 = (float)pub_142e32b30();
          fVar28 = (float)pub_142e32bc0();
          fStack_1cc = fVar29 * fVar48 - fVar45;
          fVar29 = (float)pub_142e32b30();
          fVar45 = (float)pub_142e32bc0();
          pbStack_5f8 = pbStack_1a0;
          pfStack_5f0 = pfStack_198;
          pfStack_598 = pfStack_128;
          lStack_458 = lStack_2e8;
          uStack_450 = param_5;
          uStack_448 = uStack_140;
          uStack_440 = 0;
          uStack_438 = 0;
          pfStack_5a0 = pfVar23;
          pdb_14141de40(&lStack_458);
          fStack_328 = (fStack_158 - fStack_114) * fVar25;
          fStack_1c8 = (fVar27 * fVar48 - fVar28) * _DAT_142e4bfe4;
          fStack_1c4 = (fVar29 * fVar48 - fVar45) * _DAT_142e4bfe4;
          uVar9 = uStack_438 & 0xffffffff;
          fVar45 = _DAT_142e36f28 - uStack_438._4_4_;
          uVar12 = *(undefined8 *)(param_8 + uVar9 * 4);
          auStack_4e8._4_4_ = (float)((ulonglong)uVar12 >> 0x20) * uStack_438._4_4_;
          auStack_4e8._0_4_ = (float)auStack_4e8._4_4_ + (float)uVar12 * fVar45;
          auStack_4e8._8_8_ = 0;
          uVar12 = *(undefined8 *)(param_6 + uVar9 * 4);
          fVar29 = (float)((ulonglong)uVar12 >> 0x20) * uStack_438._4_4_;
          uStack_4d8 = CONCAT44(fVar29,fVar29 + (float)uVar12 * fVar45);
          uStack_4d0 = 0;
          auStack_3b8._4_4_ =
               (float)((ulonglong)*(undefined8 *)(pfStack_150 + uVar9) >> 0x20) * uStack_438._4_4_;
          auStack_3b8._0_4_ =
               (float)auStack_3b8._4_4_ + (float)*(undefined8 *)(pfStack_150 + uVar9) * fVar45;
          auStack_3b8._8_8_ = 0;
          iStack_34c = (int)uStack_258 * 0x54 + iStack_330;
          pbStack_508 = pbStack_410 + 0x1c;
          uStack_1b8 = 0;
          pfStack_148 = pfStack_3c0;
          pfStack_308 = (float *)0x0;
          bVar16 = 0;
LAB_14143d870:
          uVar34 = auStack_4e8._0_4_;
          pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,(undefined4)uStack_4d8);
          if (pfStack_148 != pfStack_300) {
            pfVar11 = pfStack_148 + 1;
            uVar9 = uStack_1b8 + 1;
            if (pfStack_308 == (float *)0x0) {
              if (pfVar11 == pfStack_300) {
                pfStack_148 = pfStack_300;
                pfVar13 = (float *)auStack_248;
                pfVar11 = (float *)0x0;
                uVar17 = uVar9;
              }
              else {
                _auStack_248 = pfStack_148;
                pfStack_148 = pfStack_148 + 2;
                pfVar13 = &fStack_2d8;
                uVar17 = uStack_1b8 + 2;
              }
              *(float **)pfVar13 = pfVar11;
              if (_auStack_248 == (float *)0x0) {
                pfStack_308 = (float *)0x0;
                pfStack_318 = (float *)CONCAT44(fStack_2d4,fStack_2d8);
                uStack_310 = uVar9;
                uStack_1b8 = uVar17;
                goto LAB_14143d8d7;
              }
              pfStack_318 = _auStack_248;
              uStack_310 = uStack_1b8;
              uStack_1b8 = uVar9;
              uVar9 = uVar17;
              pfVar11 = pfStack_148;
              pfStack_148 = (float *)CONCAT44(fStack_2d4,fStack_2d8);
            }
            uStack_2f8 = uStack_310;
            pfStack_320 = pfStack_318;
            pfStack_308 = pfStack_318;
            pfStack_578 = pfStack_148;
            pfVar13 = pfStack_148;
            uVar17 = uStack_1b8;
            if (pfStack_318 == (float *)0x0) goto LAB_14143e968;
            fStack_130 = (float)auStack_3b8._0_4_;
            pfStack_128 = (float *)CONCAT44(pfStack_128._4_4_,*pfStack_318);
            pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,*pfStack_148);
            pfStack_318 = pfStack_148;
            uStack_310 = uStack_1b8;
            uStack_1b8 = uVar9;
            pfStack_148 = pfVar11;
            uVar30 = pdb_140e02880(&lStack_568);
            pfStack_170 = (float *)CONCAT44(pfStack_170._4_4_,uVar30);
            fVar26 = (float)pdb_140e02880(&lStack_570);
            fVar29 = (fVar26 + _DAT_142e36f38) * _DAT_142e3c650 + fStack_1dc;
            if (fVar29 <= _DAT_142e37ad4) {
              fVar29 = _DAT_142e37ad4;
            }
            fStack_11c = pfStack_108._0_4_ - pfStack_128._0_4_;
            pdb_14141de40(&lStack_458);
            uVar9 = uStack_438 & 0xffffffff;
            fVar47 = _DAT_142e36f28 - uStack_438._4_4_;
            fVar45 = *(float *)(param_8 + uVar9 * 4);
            fVar49 = *(float *)(param_8 + 4 + uVar9 * 4) * uStack_438._4_4_;
            fVar48 = *(float *)(param_6 + uVar9 * 4);
            fVar51 = *(float *)(param_6 + 4 + uVar9 * 4) * uStack_438._4_4_;
            fVar26 = fVar47 * pfStack_150[uVar9];
            fVar50 = uStack_438._4_4_ * pfStack_150[uVar9 + 1];
            pdb_14141de40(&lStack_458);
            fVar27 = _DAT_142e36f28;
            uVar30 = (undefined4)(in_stack_fffffffffffff9a0 >> 0x20);
            uVar53 = (undefined4)((ulonglong)in_stack_fffffffffffff9a8 >> 0x20);
            uVar9 = uStack_438 & 0xffffffff;
            fVar28 = _DAT_142e36f28 - uStack_438._4_4_;
            fVar39 = *(float *)(param_8 + 4 + uVar9 * 4) * uStack_438._4_4_ +
                     *(float *)(param_8 + uVar9 * 4) * fVar28;
            auStack_4e8 = ZEXT416((uint)fVar39);
            uVar12 = *(undefined8 *)(param_6 + uVar9 * 4);
            fVar40 = uStack_438._4_4_ * (float)((ulonglong)uVar12 >> 0x20);
            fVar44 = fVar40 + fVar28 * (float)uVar12;
            fVar41 = uStack_438._4_4_ * pfStack_150[uVar9 + 1] + fVar28 * pfStack_150[uVar9];
            auStack_3b8 = ZEXT416((uint)fVar41);
            uStack_4d8 = CONCAT44(fVar40,fVar44);
            uStack_4d0 = 0;
            fVar28 = fVar44;
            if (pfStack_100._0_4_ <= fVar44) {
              fVar28 = pfStack_100._0_4_;
            }
            if ((float)(~-(uint)NAN(pfStack_100._0_4_) & (uint)fVar28 |
                       -(uint)NAN(pfStack_100._0_4_) & (uint)fVar44) <= (float)auStack_478._0_4_) {
              fVar49 = fVar45 * fVar47 + fVar49;
              fVar45 = (float)uVar34 + fVar49 + fVar39;
              if (fVar45 <= 0.0) {
                fVar39 = _DAT_142e3c654;
                fVar49 = _DAT_142e3c654;
              }
              fVar49 = fVar48 * fVar47 + fVar51 + fVar49;
              uVar7 = -(uint)(0.0 < fVar45);
              fVar45 = pfStack_100._0_4_ + (float)(~uVar7 & (uint)_DAT_142e3c654 | uVar34 & uVar7);
              pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar45);
              fVar39 = fVar39 + fVar44;
              if (((fVar39 <= (float)auStack_478._0_4_) || (fVar45 <= (float)auStack_478._0_4_)) ||
                 (fVar49 <= (float)auStack_478._0_4_)) {
                fVar26 = fVar26 + fVar50;
                if (((cStack_f2 != '\x02') &&
                    ((fVar45 = pfStack_128._0_4_ * _DAT_142e36f50 +
                               pfStack_108._0_4_ * _DAT_142e36f50, fVar45 < fStack_344 ||
                     (fStack_340 <= fVar45)))) && ((fStack_33c <= fVar45 || (fVar45 < fStack_338))))
                {
                  fStack_130 = fStack_32c;
                  fVar26 = fStack_32c;
                  fVar41 = fStack_32c;
                }
                fVar45 = (float)((int)uStack_2f8 * 0x171 + iStack_34c);
                uVar9 = *param_1;
                uVar17 = uStack_260;
                if (uStack_260 < uVar9) {
                  uVar17 = uVar9;
                }
                pfVar11 = (float *)(pbStack_508 + uVar9 * 0x20);
                do {
                  pfVar23 = (float *)CONCAT71((int7)((ulonglong)pfVar23 >> 8),param_1[1] <= uVar9);
                  if (param_1[1] <= uVar9) {
                    bVar24 = pfStack_170._0_4_ < _DAT_142e3c658;
                    if (((byte)uStack_15c & bVar24) != 0) goto LAB_14143d870;
                    break;
                  }
                  if (uStack_260 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar17,uStack_260,&UNK_14330a0b8);
                  }
                  pfVar13 = pfVar11 + -1;
                  fVar48 = *pfVar11;
                  if ((*pfVar13 - plStack_110._0_4_ <= pfStack_128._0_4_) &&
                     (pfStack_128._0_4_ <= fVar48 + plStack_110._0_4_)) break;
                  uVar9 = uVar9 + 1;
                  pfVar11 = pfVar11 + 8;
                } while ((pfStack_108._0_4_ < *pfVar13 - plStack_110._0_4_) ||
                        (fVar48 + plStack_110._0_4_ < pfStack_108._0_4_));
                if (bStack_f1 == 0) {
                  if ((uStack_2f8 & 1) == 0) goto LAB_14143d870;
                  pfVar23 = (float *)0x0;
                }
                fVar48 = (float)uStack_3a8;
                fStack_160 = fVar49;
                fStack_118 = fVar39;
                if (!(bool)(bVar16 & fStack_4b8 == pfStack_128._0_4_)) {
                  fVar39 = fStack_f8 * pfStack_128._0_4_;
                  fVar28 = (float)pub_142e32b30(fVar39 * _DAT_142e3787c);
                  fVar48 = 0.0;
                  uStack_388 = 0;
                  uStack_380 = 0;
                  if (_DAT_142e37848 <= fStack_114) {
                    pub_142e32b30((fStack_1d0 * (fVar28 * _DAT_142e36f50 + _DAT_142e36f50) + fVar27)
                                  * fVar39 + fStack_1c8);
                    uStack_388 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da * _DAT_143007994);
                    uStack_380 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                  }
                  if ((char)pfVar23 == '\0') {
                    fVar48 = (float)pub_142e32b30();
                    fVar48 = fVar48 * _DAT_143007994;
                  }
                }
                fVar39 = fStack_f8 * pfStack_108._0_4_;
                fVar28 = (float)pub_142e32b30(fVar39 * _DAT_142e3787c);
                uStack_468 = 0;
                uStack_460 = 0;
                if (_DAT_142e37848 <= fStack_114) {
                  pub_142e32b30((fStack_1d0 * (fVar28 * _DAT_142e36f50 + _DAT_142e36f50) + fVar27) *
                                fVar39 + fStack_1c8);
                  uStack_468 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00 * _DAT_143007994);
                  uStack_460 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
                }
                fVar27 = 0.0;
                uVar34 = 0;
                uVar35 = 0;
                uVar36 = 0;
                if ((char)pfVar23 == '\0') {
                  pub_142e32b30();
                  uVar35 = (undefined4)extraout_XMM0_Qb;
                  uVar36 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
                  fVar27 = extraout_XMM0_Da_01 * _DAT_143007994;
                  uVar34 = extraout_XMM0_Db_01;
                }
                uStack_398 = (float)uStack_388;
                uStack_394 = (float)uStack_468;
                uStack_390 = CONCAT44(fVar27,fVar48);
                fVar28 = fVar27;
                if (bStack_f1 == 0) {
                  fVar48 = fVar48 * _DAT_142e3c660 + _DAT_142e3c660;
                  fVar28 = fVar27 * _UNK_142e3c664 + _UNK_142e3c664;
                  uStack_390 = CONCAT44(fVar28,fVar48);
                }
                uStack_364 = pfStack_128._0_4_;
                fStack_360 = fStack_114;
                uStack_35c = pfStack_108._0_4_;
                fStack_358 = fStack_158;
                fStack_5d8 = fVar27;
                uStack_5d4 = uVar34;
                uStack_5d0 = uVar35;
                uStack_5cc = uVar36;
                fStack_12c = fVar41;
                if (0.0 < fStack_334) {
                  uVar52 = CONCAT44(uVar53,uStack_350);
                  uVar12 = CONCAT44(uVar30,fStack_154);
                  pdb_140846800(&uStack_364,uStack_2f8,pfStack_3c0,lStack_1b0,lStack_2e0,uVar12,
                                uVar52);
                  uVar30 = (undefined4)((ulonglong)uVar12 >> 0x20);
                  uVar53 = (undefined4)((ulonglong)uVar52 >> 0x20);
                }
                if (uStack_178 != 0) {
                  uStack_178 = 0;
                }
                uStack_180 = 0;
                _auStack_248 = (float *)CONCAT44(fStack_360,uStack_364);
                unique0x10002e63 = (byte *)CONCAT44(fStack_358,uStack_35c);
                uStack_238 = (float *)CONCAT44(uStack_394,uStack_398);
                uStack_230 = uStack_390;
                if (uStack_190 == 0) {
                  pdb_140848dc0(&uStack_190);
                }
                else {
                  uStack_178 = 0;
                }
                uVar9 = 0;
                if (uStack_190 <= uStack_180 + uStack_178) {
                  uVar9 = uStack_190;
                }
                lVar8 = (uStack_180 + uStack_178) - uVar9;
                *(float **)(pfStack_188 + lVar8 * 10 + 4) = uStack_238;
                *(ulonglong *)(pfStack_188 + lVar8 * 10 + 4 + 2) = uStack_230;
                *(float **)(pfStack_188 + lVar8 * 10) = _auStack_248;
                *(byte **)(pfStack_188 + lVar8 * 10 + 2) = stack0xfffffffffffffdc0;
                pfStack_188[lVar8 * 10 + 8] = fVar45;
                *(undefined2 *)(pfStack_188 + lVar8 * 10 + 9) = 0;
                auStack_244._0_4_ = fStack_360;
                auStack_248 = (undefined1  [4])uStack_364;
                uStack_23c = fStack_358;
                auStack_244._4_4_ = uStack_35c;
                in_stack_fffffffffffff9a8 = CONCAT44(uVar53,fStack_1e0);
                in_stack_fffffffffffff9a0 = CONCAT44(uVar30,plStack_110._0_4_);
                uStack_178 = uStack_178 + 1;
                cVar6 = pdb_140815be0(&pbStack_5f8,&pfStack_5a0,pbStack_1a0,pfStack_198,auStack_248,
                                      in_stack_fffffffffffff9a0,in_stack_fffffffffffff9a8,
                                      &uStack_190);
                if (cVar6 != '\0') {
                  fVar27 = fVar28;
                  if (fVar28 <= fVar48) {
                    fVar27 = fVar48;
                  }
                  fVar39 = (float)uStack_468;
                  if ((float)uStack_388 <= (float)uStack_468) {
                    fVar39 = (float)uStack_388;
                  }
                  fVar48 = ((float)(~-(uint)NAN(fVar48) & (uint)fVar27 |
                                   -(uint)NAN(fVar48) & (uint)fVar28) -
                           (float)(~-(uint)NAN((float)uStack_388) & (uint)fVar39 |
                                  -(uint)NAN((float)uStack_388) & (uint)(float)uStack_468)) +
                           fStack_328;
                  fVar27 = _DAT_142e36f28 - fVar48 / fStack_328;
                  if (bStack_f1 == 0) {
                    fVar27 = 0.0;
                  }
                  else {
                    fVar27 = fVar27 * _DAT_142e3c670 + (_DAT_142e36f28 - fVar27) * _DAT_142e3798c;
                  }
                  if ((_DAT_142e3c620 < fVar48) && (pfStack_170._0_4_ < fVar27)) {
                    if (uStack_178 != 0) {
                      uStack_178 = 0;
                    }
                    uStack_180 = 0;
                    pdb_1408469b0(pfStack_170._0_4_ / _DAT_142e3798c,&uStack_364,&uStack_398,fVar45,
                                  &uStack_190);
                  }
                }
                if (!(bool)(bVar16 & fStack_324 == pfStack_128._0_4_)) {
                  uVar7 = pdb_1413f9030(uStack_140);
                  uVar12 = *(undefined8 *)(lStack_2e8 + (ulonglong)uVar7 * 8);
                  uVar52 = *(undefined8 *)(lStack_2e8 + 8 + (ulonglong)uVar7 * 8);
                  fStack_4c8 = extraout_XMM0_Da_02 * (float)uVar52 +
                               (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)uVar12;
                  fStack_4c4 = extraout_XMM0_Da_02 * (float)((ulonglong)uVar52 >> 0x20) +
                               (_DAT_142e36f28 - extraout_XMM0_Da_02) *
                               (float)((ulonglong)uVar12 >> 0x20);
                  fStack_4c0 = extraout_XMM0_Dc_01 * 0.0 + 0.0;
                  fStack_4bc = extraout_XMM0_Dc_01 * 0.0 + 0.0;
                }
                uVar7 = pdb_1413f9030(uStack_140);
                uVar12 = *(undefined8 *)(lStack_2e8 + (ulonglong)uVar7 * 8);
                uVar52 = *(undefined8 *)(lStack_2e8 + 8 + (ulonglong)uVar7 * 8);
                fVar45 = extraout_XMM0_Da_03 * (float)uVar52 +
                         (_DAT_142e36f28 - extraout_XMM0_Da_03) * (float)uVar12;
                fVar48 = extraout_XMM0_Da_03 * (float)((ulonglong)uVar52 >> 0x20) +
                         (_DAT_142e36f28 - extraout_XMM0_Da_03) * (float)((ulonglong)uVar12 >> 0x20)
                ;
                uStack_3a8 = CONCAT44(fVar48,fVar45);
                uStack_3a0 = CONCAT44(extraout_XMM0_Dc_02 * 0.0 + 0.0,
                                      extraout_XMM0_Dc_02 * 0.0 + 0.0);
                fVar45 = fVar45 - fStack_4c8;
                fVar48 = fVar48 - fStack_4c4;
                fVar27 = _DAT_142e36f28 / SQRT(fVar48 * fVar48 + fVar45 * fVar45);
                fVar45 = fVar27 * fVar45;
                fVar27 = fVar27 * fVar48;
                uStack_580 = CONCAT44(fVar27,fVar45);
                pdb_140df4520(auStack_248,&uStack_580);
                fVar48 = auStack_248._8_4_;
                auVar5 = auStack_248;
                uVar34 = auStack_244._0_4_;
                fStack_2d8 = (float)((uint)fVar27 ^ _DAT_142e37820);
                fStack_2d4 = fVar45;
                pdb_140df4520();
                if (uStack_178 == 0) {
                  lVar8 = 0;
                  uVar9 = 0;
LAB_14143e43b:
                  lVar22 = 0;
                }
                else {
                  uVar9 = 0;
                  if (uStack_190 <= uStack_180) {
                    uVar9 = uStack_190;
                  }
                  lVar8 = uStack_180 - uVar9;
                  lVar22 = uStack_178 - (uStack_190 - lVar8);
                  uVar9 = uStack_190;
                  if (uStack_178 < uStack_190 - lVar8 || lVar22 == 0) {
                    uVar9 = uStack_178 + lVar8;
                    goto LAB_14143e43b;
                  }
                }
                uStack_388 = CONCAT44(uStack_388._4_4_,_DAT_142e36f28 / fStack_11c);
                fStack_4b8 = (float)auVar5;
                fStack_4b4 = (float)uVar34;
                auVar37._8_8_ = 0;
                auVar37._0_8_ = auStack_244;
                unaff_R12 = pfStack_188 + lVar8 * 10;
                pfVar23 = pfStack_188 + uVar9 * 10;
                pfStack_170 = pfStack_188 + lVar22 * 10;
                fVar45 = auStack_248._4_4_;
                fVar27 = auStack_248._8_4_;
                fVar28 = fVar29 * (float)auStack_248;
                pfVar11 = pfStack_188;
                fStack_4b0 = fVar48;
                fStack_4ac = fVar48;
LAB_14143e4b0:
                pfVar13 = pfVar11;
                pfVar14 = unaff_R12;
                pfVar21 = pfStack_170;
                if ((unaff_R12 != pfVar23) ||
                   (pfVar13 = unaff_R12, pfVar14 = pfVar11, pfVar23 = pfStack_170,
                   pfVar21 = unaff_R12, pfVar11 != pfStack_170)) {
                  pfStack_170 = pfVar21;
                  fVar39 = (float)pdb_140deec10(pfVar14);
                  fVar48 = (float)pdb_140deec50(pfVar14);
                  fVar49 = (float)pdb_140deec20(pfVar14);
                  unaff_R12 = pfVar14 + 10;
                  pfVar11 = pfVar13;
                  if ((0.0 < fVar39) &&
                     ((0.0 < fVar48 && (fVar41 = fStack_f8 * fVar39, _DAT_142e37840 <= fVar41)))) {
                    fVar40 = (fVar49 - pfStack_128._0_4_) * (float)uStack_388;
                    fStack_2d8 = fVar40 * (float)uStack_3a8 + (_DAT_142e36f28 - fVar40) * fStack_4c8
                    ;
                    fStack_2d4 = fVar40 * uStack_3a8._4_4_ + (_DAT_142e36f28 - fVar40) * fStack_4c4;
                    pdb_140df4540(auStack_248,&fStack_2d8,auVar37._0_4_ * fVar25);
                    fVar48 = fVar48 * fVar25;
                    auVar5 = auStack_248;
                    fVar40 = auStack_248._4_4_;
                    uVar34 = auStack_248._8_4_;
                    if (bStack_f1 == 0) {
                      auVar37 = ZEXT416((uint)_DAT_142e3c674);
                      if (fVar41 < _DAT_142e3c674) goto LAB_14143e4b0;
                      if (fVar41 < fVar48) {
                        fVar40 = fVar40 + (fVar48 - fVar41) * _DAT_142e36f38;
                        fVar48 = fVar41;
                      }
                    }
                    if (cStack_f2 == '\x02') {
                      if (param_22 != '\0') {
                        fVar50 = fVar48 * _DAT_142e36f50 + fVar40;
                        unaff_R14 = (float *)0x4c;
                        if (fStack_130 < fVar50) goto LAB_14143e73f;
                        fStack_11c = fStack_12c;
                        fVar44 = fVar26;
                        fVar47 = fStack_130;
                        if (fStack_12c < fVar50) goto LAB_14143e772;
                      }
                      unaff_R14 = (float *)0x44;
                      fStack_11c = fStack_118;
                      fVar44 = fStack_160;
                      fVar47 = pfStack_100._0_4_;
                      if ((float)((uint)(fVar40 - fVar25) & _DAT_142e377e0) < _DAT_142e3c678) {
                        unaff_R14 = (float *)0x54;
                        fStack_11c = fStack_118;
                        fVar47 = pfStack_100._0_4_;
                      }
                    }
                    else {
                      uStack_238 = *(float **)param_16[1];
                      _auStack_248 = *param_16;
                      cVar6 = pdb_1408ff980((longlong)&uStack_238 + 4);
                      unaff_R14 = (float *)0x44;
                      fStack_11c = fStack_118;
                      fVar44 = fStack_160;
                      fVar47 = pfStack_100._0_4_;
                      if (((cVar6 != '\0') && ((float)auStack_248 < fVar40)) &&
                         ((fVar50 = fVar40 + fVar48 * _DAT_142e36f50, fStack_130 < fVar50 ||
                          (fStack_12c < fVar50)))) {
LAB_14143e73f:
                        unaff_R14 = (float *)0x4c;
                        fStack_11c = fStack_12c;
                        fVar44 = fVar26;
                        fVar47 = fStack_130;
                      }
                    }
LAB_14143e772:
                    fVar41 = fVar41 + fStack_1d8;
                    fStack_638 = fVar41 * fStack_4b8;
                    fStack_634 = fVar41 * fStack_4b4;
                    fStack_630 = fVar41 * fStack_4b0;
                    fStack_62c = fVar41 * fStack_4ac;
                    fStack_628 = fVar48 * _DAT_142e378e0;
                    fStack_624 = fVar48 * _UNK_142e378e4;
                    fStack_620 = fVar48 * _UNK_142e378e8;
                    fStack_61c = fVar48 * _UNK_142e378ec;
                    fStack_608 = (float)auVar5;
                    pfStack_2d0 = *(float **)(pfVar14 + 6);
                    fStack_2d8 = (float)*(undefined8 *)(pfVar14 + 4);
                    fStack_2d4 = (float)((ulonglong)*(undefined8 *)(pfVar14 + 4) >> 0x20);
                    fStack_618 = fVar28;
                    fStack_614 = fVar29 * fVar45;
                    fStack_610 = fVar29 * fVar27;
                    fStack_60c = fVar29 * fVar27;
                    fStack_604 = fVar40;
                    uStack_600 = uVar34;
                    uStack_5fc = uVar34;
                    pdb_140e07fe0(auStack_248,&fStack_638);
                    fVar48 = pfVar14[8];
                    uStack_5a8 = uStack_228;
                    uStack_5c8 = _auStack_248;
                    uStack_5c0 = stack0xfffffffffffffdc0;
                    pfStack_5b8 = uStack_238;
                    uStack_5b0 = uStack_230;
                    auStack_5e8._8_8_ = pfStack_2d0;
                    auStack_5e8._0_8_ = CONCAT44(fStack_2d4,fStack_2d8);
                    auVar37 = auStack_5e8;
                    if (*pcStack_3d8 == '\0') {
                      uStack_1f4 = CONCAT44((fVar39 * _DAT_142e36f50 + fVar49) * fStack_f8,
                                            (fVar49 - fVar39 * _DAT_142e36f50) * fStack_f8);
                      *puStack_500 = 1;
                      fStack_220 = fStack_220 - *pfStack_4f8;
                      pfStack_210 = pfStack_2d0;
                      fStack_200 = fStack_11c;
                      uStack_1f8 = uStack_348;
                      uStack_1ec = SUB84(unaff_R14,0);
                      auVar37 = _auStack_248;
                      uStack_218 = CONCAT44(fStack_2d4,fStack_2d8);
                      fStack_208 = fVar47;
                      fStack_204 = fVar44;
                      fStack_1fc = fVar48;
                      pdb_14094c790(&fStack_2d8,auStack_248);
                      cVar6 = pdb_1413f66a0(uStack_4f0);
                      if (cVar6 != '\0') {
                        *pcStack_3d8 = '\x01';
                      }
                    }
                  }
                  goto LAB_14143e4b0;
                }
                bVar16 = 1;
                fStack_4b8 = pfStack_108._0_4_;
                uStack_388 = uStack_468;
                uStack_380 = uStack_460;
                fStack_4c8 = (float)uStack_3a8;
                fStack_4c4 = uStack_3a8._4_4_;
                fStack_4c0 = (float)uStack_3a0;
                fStack_4bc = uStack_3a0._4_4_;
                uStack_3a8 = CONCAT44(uStack_5d4,fStack_5d8);
                uStack_3a0 = CONCAT44(uStack_5cc,uStack_5d0);
                fStack_324 = fStack_4b8;
                pfStack_170 = unaff_R12;
              }
            }
            goto LAB_14143d870;
          }
          pfStack_148 = pfStack_300;
LAB_14143d8d7:
          pfStack_320 = (float *)0x0;
          pfVar13 = pfStack_318;
          uVar17 = uStack_310;
          uVar9 = uStack_1b8;
          pfVar11 = pfStack_148;
LAB_14143e968:
          pfStack_148 = pfVar11;
          uStack_1b8 = uVar9;
          uStack_310 = uVar17;
          pfStack_318 = pfVar13;
          uVar9 = uStack_258;
          fVar29 = _DAT_142e36f28;
          if (uStack_258 == 0) goto LAB_14143ca32;
        }
      }
LAB_14143ca32:
      if (lStack_4a8 != 0) {
        pub_1406abac0(pbStack_4a0,lStack_4a8 << 2,4);
      }
      uVar12 = uStack_3c8;
      if (pfStack_278 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_270,(longlong)pfStack_278 << 2,4);
      }
      if (uStack_190 != 0) {
        pub_1406abac0((byte *)pfStack_188,uStack_190 * 0x28,4);
      }
      if (lStack_290 != 0) {
        pub_1406abac0((byte *)pfStack_288,lStack_290 << 2,4);
      }
      if (pfStack_1a8 != (float *)0x0) {
        pub_1406abac0(pbStack_1a0,(longlong)pfStack_1a8 << 3,8);
      }
      if (lStack_418 != 0) {
        pub_1406abac0(pbStack_410,lStack_418 << 5,8);
      }
      if (uStack_250 != 0) {
        pub_1406abac0((byte *)pfStack_2f0,uStack_250 << 2,4);
      }
      if (lStack_490 != 0) {
        pub_1406abac0(pbStack_488,lStack_490 << 2,4);
      }
      unaff_RSI = (ulonglong)(uint)((int)uVar12 << 2);
      pub_1406abac0((byte *)pfStack_3d0,unaff_RSI,4);
      if (pfStack_400 == (float *)0x0) {
        return;
      }
      plVar10 = (longlong *)pdb_140e97000();
      if (((char)plVar10[0xd] != '\x01') &&
         (plVar10 = (longlong *)pdb_142dd9610(plVar10,0), plVar10 == (longlong *)0x0)) break;
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_110 = plVar10;
        pdb_140e95370(plVar10 + 1,pfStack_3f8);
LAB_14143cba7:
        *plStack_110 = *plStack_110 + 1;
        return;
      }
    }
LAB_14143eaae:
    plVar10 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14143eaba:
    plVar10 = (longlong *)pdb_142dd9610(plVar10,0);
  } while (plVar10 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_14143eb56:
  pfStack_138 = pfVar23;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,8);
}

