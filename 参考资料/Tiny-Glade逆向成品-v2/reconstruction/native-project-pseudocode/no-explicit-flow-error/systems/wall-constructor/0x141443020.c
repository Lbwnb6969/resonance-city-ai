// VA 0x141443020, PDB extent 13924 bytes
// system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141443eca) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
   Extent: 13924 */

void pdb_141443020(float *param_1,float *param_2,undefined4 param_3,float *param_4,ulonglong param_5
                  ,longlong param_6,ulonglong param_7,longlong param_8,ulonglong param_9,
                  char param_10,float *param_11,undefined8 param_12,float param_13,
                  undefined8 *param_14,float param_15,float *param_16,uint param_17,float param_18,
                  uint param_19,float param_20,float param_21,char param_22)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float *pfVar11;
  undefined8 uVar12;
  float *pfVar13;
  byte *pbVar14;
  longlong lVar15;
  longlong *unaff_RBX;
  ulonglong uVar16;
  float *pfVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulonglong uVar20;
  float *unaff_R12;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar40;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar41;
  undefined4 uVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulonglong in_stack_fffffffffffff9b0;
  undefined8 in_stack_fffffffffffff9b8;
  undefined4 uVar59;
  undefined8 uVar58;
  undefined4 uVar60;
  undefined1 auStack_628 [64];
  float fStack_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  byte *pbStack_5a8;
  float *pfStack_5a0;
  float *pfStack_598;
  float *pfStack_590;
  undefined1 auStack_588 [16];
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  byte *pbStack_560;
  float *pfStack_558;
  undefined8 uStack_540;
  float *pfStack_538;
  longlong lStack_530;
  longlong lStack_528;
  longlong lStack_520;
  longlong lStack_518;
  ulonglong uStack_510;
  ulonglong uStack_508;
  ulonglong uStack_500;
  ulonglong uStack_4f8;
  ulonglong uStack_4f0;
  ulonglong uStack_4e8;
  byte *pbStack_4e0;
  byte *pbStack_4d8;
  longlong lStack_4d0;
  byte *pbStack_4c8;
  undefined8 uStack_4c0;
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
  undefined8 uStack_468;
  float *pfStack_460;
  undefined1 auStack_458 [16];
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  float fStack_41c;
  undefined4 uStack_418;
  undefined8 uStack_414;
  undefined4 uStack_40c;
  undefined1 auStack_408 [16];
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  longlong lStack_3d0;
  ulonglong uStack_3c8;
  float *pfStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  longlong lStack_3a8;
  byte *pbStack_3a0;
  ulonglong uStack_398;
  float *pfStack_390;
  undefined8 uStack_388;
  float *pfStack_380;
  float *pfStack_378;
  float *pfStack_370;
  float *pfStack_368;
  ulonglong uStack_360;
  longlong lStack_358;
  longlong lStack_350;
  char *pcStack_348;
  float *pfStack_340;
  undefined8 uStack_338;
  longlong lStack_330;
  float fStack_328;
  float fStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  float fStack_314;
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined4 uStack_2e0;
  int iStack_2dc;
  undefined4 uStack_2d8;
  float fStack_2d4;
  int iStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float *pfStack_2c0;
  float *pfStack_2b8;
  ulonglong uStack_2b0;
  float *pfStack_2a8;
  float *pfStack_2a0;
  ulonglong uStack_298;
  float *pfStack_290;
  longlong lStack_288;
  longlong lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulonglong uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  longlong lStack_210;
  byte *pbStack_208;
  float *pfStack_200;
  float *pfStack_1f8;
  float *pfStack_1f0;
  longlong lStack_1e8;
  ulonglong uStack_1e0;
  float *pfStack_1d8;
  ulonglong uStack_1d0;
  float *pfStack_1c8;
  ulonglong uStack_1c0;
  float *pfStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  longlong *plStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  float *pfStack_178;
  byte *pbStack_170;
  float *pfStack_168;
  ulonglong uStack_160;
  float *pfStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  byte *pbStack_140;
  undefined1 auStack_135 [5];
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float *pfStack_120;
  float fStack_114;
  longlong *plStack_110;
  float *pfStack_108;
  float fStack_fc;
  float fStack_f8;
  char cStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  fVar30 = param_13;
  uStack_f0 = 0xfffffffffffffffe;
  pfVar22 = param_2;
  uStack_2d8 = param_3;
  uVar7 = pdb_140e94b40();
  uVar59 = (undefined4)((ulonglong)in_stack_fffffffffffff9b8 >> 0x20);
  pfVar11 = (float *)(ulonglong)uVar7;
  fVar27 = fVar30;
  if ((char)uVar7 == '\0') {
    pfVar24 = (float *)0x0;
    pfVar17 = param_1;
    pfVar22 = param_2;
    goto LAB_141443266;
  }
  pfVar24 = (float *)0x46;
  lVar8 = pdb_14144a0a0(0x46);
  unaff_RBX = (longlong *)&UNK_14330a148;
  if (lVar8 == 1) {
    if ((float *)0x46 < pfVar22) {
LAB_1414458aa:
      pdb_142dc8070(&UNK_14330a148,0x46,0);
LAB_1414458cb:
      pdb_142dc7e2a(4,unaff_RBX);
LAB_1414458d9:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar9 = pdb_14144a0a0(pfVar22);
    if ((uVar9 & 1) != 0) {
      if ((undefined *)0x46 < (undefined *)((longlong)pfVar22 + 2)) {
        pdb_142dc8070(&UNK_14330a148,0x46,(undefined *)((longlong)pfVar22 + 2),0x46,&UNK_14330a230);
        goto LAB_1414458ff;
      }
      pfVar24 = (float *)(0x44 - (longlong)pfVar22);
      unaff_RBX = (longlong *)((longlong)pfVar22 + 0x14330a14a);
    }
  }
  puVar18 = &UNK_14330a02f;
  unaff_R12 = (float *)&UNK_143309ff8;
  plStack_110 = (longlong *)CONCAT71(plStack_110._1_7_,(char)uVar7);
  do {
    bVar1 = puVar18[-1];
    uVar7 = (uint)(char)bVar1;
    if ((char)bVar1 < '\0') {
      bVar2 = puVar18[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar18[-3];
        if ((char)bVar3 < -0x40) {
          pbVar14 = puVar18 + -4;
          puVar18 = puVar18 + -4;
          uVar7 = bVar3 & 0x3f | (*pbVar14 & 7) << 6;
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
      uVar7 = (uint)(bVar1 & 0x3f) | uVar7 << 6;
      if (uVar7 != 0x5c) goto LAB_1414431a4;
LAB_1414431c4:
      puVar19 = puVar18 + -0x143309ff7;
      if ((undefined *)0x37 < puVar19) {
        pdb_142dc8070(&UNK_143309ff8,0x37,puVar19,0x37,&UNK_14330a1f8);
        goto LAB_1414458aa;
      }
      pfVar22 = (float *)(0x37 - (longlong)puVar19);
      unaff_R12 = (float *)(puVar18 + 1);
      goto LAB_1414431ed;
    }
    puVar18 = puVar18 + -1;
    if (uVar7 == 0x5c) goto LAB_1414431c4;
LAB_1414431a4:
    if (uVar7 == 0x2f) goto LAB_1414431c4;
  } while (puVar18 != &UNK_143309ff8);
  pfVar22 = (float *)0x37;
LAB_1414431ed:
  plVar10 = (longlong *)pdb_140e97000();
  pfVar11 = param_1;
  if ((char)plVar10[0xd] != '\x01') goto LAB_141445780;
  do {
    param_1 = param_2;
    if (*plVar10 == 0) {
      *plVar10 = -1;
      uVar59 = 0;
      plStack_190 = plVar10;
      unaff_R12 = (float *)pdb_140e94f10(plVar10 + 1,unaff_RBX,pfVar24,unaff_R12,pfVar22,1,0);
      *plStack_190 = *plStack_190 + 1;
      pfVar24 = (float *)0x1;
      pfVar17 = pfVar11;
      pfVar22 = param_1;
      pfVar11 = (float *)((ulonglong)plStack_110 & 0xff);
      pfStack_370 = unaff_R12;
LAB_141443266:
      param_1 = pfVar17;
      fVar30 = param_15;
      uVar9 = *(ulonglong *)(pfVar22 + 4);
      pfStack_378 = pfVar24;
      if (uVar9 < 2) {
        pfStack_120 = pfVar24;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330a02f,0x29,&UNK_14330a058);
      }
      uStack_4e8 = param_5;
      uStack_4f0 = uVar9;
      if (param_5 != uVar9) {
        pfStack_120 = pfVar24;
        pdb_142dc7fb4(0,&uStack_4e8,&uStack_4f0,0);
        goto LAB_1414458d9;
      }
      uStack_4f8 = param_7;
      uStack_500 = param_5;
      if (param_7 != param_5) {
        pfStack_120 = pfVar24;
        pdb_142dc7fb4(0,&uStack_4f8,&uStack_500,0);
        goto LAB_1414458d9;
      }
      uStack_508 = param_9;
      uStack_510 = param_5;
      if (param_9 != param_5) {
        pfStack_120 = pfVar24;
        pdb_142dc7fb4(0,&uStack_508,&uStack_510,0);
        goto LAB_1414458d9;
      }
      fVar26 = *param_4;
      auVar49 = ZEXT416((uint)fVar26);
      uVar9 = param_5 * 4 - 4;
      pfVar17 = param_4;
      if ((uVar9 & 4) == 0) {
        fVar48 = *param_4;
        fVar31 = fVar48;
        if (fVar48 <= fVar26) {
          fVar31 = fVar26;
        }
        auVar49 = ZEXT416(~-(uint)NAN(fVar26) & (uint)fVar31 | -(uint)NAN(fVar26) & (uint)fVar48);
        pfVar17 = param_4 + 1;
        unaff_XMM6 = auVar49;
      }
      if (uVar9 != 0) {
        unaff_XMM6 = auVar49;
        do {
          fVar26 = *pfVar17;
          fVar48 = pfVar17[1];
          fVar56 = unaff_XMM6._0_4_;
          fVar31 = fVar26;
          if (fVar26 <= fVar56) {
            fVar31 = fVar56;
          }
          fVar31 = (float)(~-(uint)NAN(fVar56) & (uint)fVar31 | -(uint)NAN(fVar56) & (uint)fVar26);
          pfVar17 = pfVar17 + 2;
          fVar26 = fVar48;
          if (fVar48 <= fVar31) {
            fVar26 = fVar31;
          }
          unaff_XMM6 = ZEXT416(-(uint)NAN(fVar31) & (uint)fVar48 |
                               ~-(uint)NAN(fVar31) & (uint)fVar26);
        } while (pfVar17 != param_4 + param_5);
      }
      fVar26 = unaff_XMM6._0_4_;
      if ((fVar26 == 0.0) && (!NAN(fVar26))) {
        if ((char)pfVar11 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if ((char)plVar10[0xd] != '\x01') {
          plVar10 = (longlong *)pdb_142dd9610(plVar10,0);
          if (plVar10 == (longlong *)0x0) break;
        }
        if (*plVar10 == 0) {
          *plVar10 = -1;
          plStack_110 = plVar10;
          pdb_140e95370(plVar10 + 1,unaff_R12);
          goto LAB_141445650;
        }
        goto LAB_141445774;
      }
      fStack_f8 = pfVar22[0xc];
      cStack_f2 = *(char *)(param_16 + 5);
      fStack_2d4 = fVar27;
      if (cStack_f2 == '\x02') {
        pdb_14007ee60();
        pfVar11 = (float *)pub_1406abab0(8,4);
        if (param_10 == '\x03') {
          if (pfVar11 == (float *)0x0) goto LAB_14144581c;
          fVar48 = fVar26 + _DAT_142e3c604 + _DAT_142e3c608;
          fVar26 = _DAT_142e3b1d8 + fVar30;
          fVar27 = fVar26;
          if (fVar26 <= fVar48) {
            fVar27 = fVar48;
          }
          fVar27 = (float)(~-(uint)NAN(fVar48) & (uint)fVar27 | -(uint)NAN(fVar48) & (uint)fVar26);
          unaff_XMM6 = ZEXT416((uint)fVar27);
          *pfVar11 = fVar30;
          pfVar11[1] = fVar27;
          uStack_338 = 2;
        }
        else {
          if (pfVar11 == (float *)0x0) {
            pfStack_120 = pfVar24;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,8);
          }
          *pfVar11 = fVar30;
          pfVar11[1] = fVar26;
          uStack_338 = 2;
        }
      }
      else {
        fVar27 = *param_16;
        pdb_14007ee60();
        pfVar11 = (float *)pub_1406abab0(0xc,4);
        if (pfVar11 == (float *)0x0) {
          pfStack_120 = pfVar24;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xc);
        }
        *pfVar11 = fVar30;
        pfVar11[1] = fVar27;
        pfVar11[2] = fVar26;
        uStack_338 = 3;
      }
      pfStack_380 = pfVar24;
      pfStack_340 = pfVar11;
      pdb_140846c00(&lStack_480,pfVar11);
      unaff_R12 = pfStack_470;
      if (param_22 == '\0') {
        pfStack_290 = (float *)0x4;
        uStack_1c0 = 0;
      }
      else {
        unaff_RBX = (longlong *)(param_5 * 4);
        pdb_14007ee60();
        pfVar11 = (float *)pub_1406abab0((ulonglong)unaff_RBX,4);
        fVar31 = _UNK_142e3c61c;
        fVar48 = _UNK_142e3c618;
        fVar26 = _UNK_142e3c614;
        fVar27 = _DAT_142e3c610;
        if (pfVar11 == (float *)0x0) goto LAB_1414458cb;
        if (7 < param_5) {
          uVar9 = param_5 & 0x1ffffffffffffff8;
          uVar16 = 0;
          do {
            pfVar24 = (float *)((longlong)param_4 + uVar16);
            fVar56 = pfVar24[1];
            fVar28 = pfVar24[2];
            fVar29 = pfVar24[3];
            pfVar17 = (float *)((longlong)param_4 + uVar16 + 0x10);
            fVar32 = *pfVar17;
            fVar44 = pfVar17[1];
            fVar50 = pfVar17[2];
            fVar45 = pfVar17[3];
            pfVar17 = (float *)((longlong)pfVar11 + uVar16);
            *pfVar17 = *pfVar24 + fVar27;
            pfVar17[1] = fVar56 + fVar26;
            pfVar17[2] = fVar28 + fVar48;
            pfVar17[3] = fVar29 + fVar31;
            pfVar24 = (float *)((longlong)pfVar11 + uVar16 + 0x10);
            *pfVar24 = fVar32 + fVar27;
            pfVar24[1] = fVar44 + fVar26;
            pfVar24[2] = fVar50 + fVar48;
            pfVar24[3] = fVar45 + fVar31;
            uVar16 = uVar16 + 0x20;
            fVar56 = _DAT_142e3c620;
            if (((ulonglong)unaff_RBX & 0xffffffffffffffe0) == uVar16) goto joined_r0x000141443594;
          } while( true );
        }
        uVar9 = 0;
        fVar56 = _DAT_142e3c620;
        do {
          pfVar11[uVar9] = param_4[uVar9] + fVar56;
          uVar9 = uVar9 + 1;
joined_r0x000141443594:
        } while (param_5 != uVar9);
        uStack_1c0 = param_5;
        param_4 = pfVar11;
        pfStack_290 = pfVar11;
      }
      in_stack_fffffffffffff9b8 = CONCAT44(uVar59,unaff_XMM6._0_4_);
      in_stack_fffffffffffff9b0 = param_5;
      pdb_140847dd0(&lStack_3a8,pbStack_478,unaff_R12,pfVar22,param_4,param_5,
                    in_stack_fffffffffffff9b8,fStack_f8,cStack_f2 != '\x02');
      uVar12 = pdb_1406d0830(param_12);
      auVar37._0_8_ = pdb_140c2b5b0(uVar12);
      auVar37._8_4_ = (int)((ulonglong)auVar37._0_8_ >> 0x20);
      auVar37._12_4_ = unaff_XMM6._4_4_;
      auVar49._8_8_ = auVar37._8_8_;
      auVar49._0_4_ = (undefined4)auVar37._0_8_;
      auVar49._4_4_ = unaff_XMM6._0_4_;
      auVar49 = divps(_DAT_142e37950,auVar49);
      uStack_468 = auVar49._0_8_;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      unaff_RBX = &uStack_468;
      pdb_14146c0d0(uVar12);
      uVar9 = *(ulonglong *)(param_1 + 4);
      uStack_278 = (float *)auStack_135;
      param_2 = pfVar22;
      pfVar11 = param_11;
      if (1 < uVar9) {
        if (uVar9 < 0x15) {
          pdb_141460650(*(undefined8 *)(param_1 + 2),uVar9,1,&uStack_278);
        }
        else {
LAB_1414458ff:
          pdb_1414658e0();
        }
      }
      uStack_360 = *(ulonglong *)(param_1 + 2);
      plStack_110 = *(longlong **)(param_1 + 4);
      pfStack_178 = (float *)0x0;
      pbStack_170 = (byte *)0x8;
      pfStack_168 = (float *)0x0;
      lStack_210 = 0;
      pbStack_208 = (byte *)0x4;
      pfStack_200 = (float *)0x0;
      pfStack_1c8 = param_2;
      pdb_14007ee60();
      pfVar22 = (float *)pub_1406abab0(0x500,4);
      if (pfVar22 == (float *)0x0) {
        uStack_388 = 0;
        pdb_142dc7e2a(4,0x500);
        goto LAB_1414458d9;
      }
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_160 = 0x20;
      pfStack_158 = pfVar22;
      fVar27 = (float)pub_142e329c0(fStack_f8 / _DAT_142e3c620);
      uVar16 = 0;
      uVar9 = (longlong)(fVar27 - _DAT_142e36f2c) & (longlong)fVar27 >> 0x3f | (longlong)fVar27;
      if (fVar27 < 0.0) {
        uVar9 = uVar16;
      }
      uVar20 = 0xffffffffffffffff;
      if (fVar27 <= _DAT_142e36f30) {
        uVar20 = uVar9;
      }
      param_4 = (float *)(uVar20 * 4 + 4);
      pfVar24 = (float *)(uVar20 + 1);
      if ((float *)0x7ffffffffffffffc < param_4 || (ulonglong)pfVar24 >> 0x3e != 0) {
LAB_14144378d:
        pdb_142dc7e2a(uVar16,param_4);
        goto LAB_1414458d9;
      }
      if (param_4 == (float *)0x0) {
        pfVar22 = (float *)0x4;
        pfVar24 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar16 = 4;
        pfVar22 = (float *)pub_1406abab0((ulonglong)param_4,4);
        if (pfVar22 == (float *)0x0) goto LAB_14144378d;
      }
      uVar16 = uStack_398;
      lStack_1e8 = 0;
      lStack_518 = (longlong)unaff_R12 * 0x8ba + (longlong)pfVar11 * 0x17d32;
      uStack_278 = (float *)&lStack_518;
      uStack_270 = &param_13;
      uStack_268 = (float *)0x0;
      uStack_260 = uStack_398;
      pfStack_390 = pfVar24;
      pfStack_1f8 = pfVar24;
      pfStack_1f0 = pfVar22;
      pdb_14017e110(&lStack_498,&uStack_278);
      uVar9 = uStack_488;
      if (uVar16 <= uStack_488) {
        uVar9 = uVar16;
      }
      fStack_1a4 = (float)pfVar11;
      fStack_1ac = _DAT_142e3c624;
      if ((param_19 & 1) != 0) {
        fStack_1ac = _DAT_142e3c624 * param_20;
      }
      fVar26 = _DAT_142e3c620 / fStack_f8;
      iVar43 = -(uint)(_DAT_142e3783c < param_21 && _DAT_142e3c628 < fStack_f8);
      fStack_1a8 = param_18;
      if ((param_17 & 1) == 0) {
        fStack_1a8 = 0.0;
      }
      fVar48 = unaff_XMM6._0_4_;
      plStack_190 = (longlong *)CONCAT44(plStack_190._4_4_,_DAT_142e3c620 / fVar48);
      lStack_358 = (longlong)unaff_R12 * 0x159 + (longlong)pfVar11 * 0x154df;
      lStack_350 = (longlong)unaff_R12 * 0xdf + (longlong)pfVar11 * 0x91e;
      lStack_4d0 = (longlong)pfVar11 * 0x15b3 + (longlong)unaff_R12 * (longlong)unaff_R12 + 0x2a6;
      plStack_110 = (longlong *)((longlong)plStack_110 * 0x10 + uStack_360);
      fStack_2e4 = _DAT_142e36f50 * fVar26;
      iStack_2d0 = (int)pfVar11 + 10 + (int)unaff_R12 * 0x924;
      fStack_124 = _DAT_142e3c62c / fStack_f8;
      pcStack_348 = (char *)*param_14;
      uStack_4c0 = param_14[1];
      lStack_288 = *(longlong *)(pfStack_1c8 + 2);
      uStack_12c = CONCAT31((int3)((uint)iVar43 >> 8),(byte)iVar43 & param_10 == '\x02');
      pbVar5 = (byte *)0x4;
      pfVar22 = (float *)0x0;
      fVar27 = fVar30;
      uStack_1e0 = uVar16;
      pbStack_4e0 = pbStack_3a0;
      pbStack_4d8 = pbStack_490;
      fVar30 = _DAT_142e36f28;
      pfVar17 = pfStack_2b8;
      uVar20 = uStack_2b0;
      uVar16 = uStack_180;
      pbVar14 = pbStack_140;
joined_r0x000141443a74:
      uStack_180 = uVar16;
      uStack_2b0 = uVar20;
      pfStack_2b8 = pfVar17;
      pbStack_140 = pbVar5;
      _DAT_142e36f28 = fVar30;
      uStack_1d0 = uVar9;
      if (uVar9 != 0) {
        while( true ) {
          uStack_1d0 = uVar9 - 1;
          pfVar11 = (float *)(pbStack_4e0 + uStack_1d0 * 0x20);
          uStack_2e0 = *(undefined4 *)(pbStack_4d8 + uVar9 * 4 + -4);
          lStack_520 = uStack_1d0 * 0x96a3dd + lStack_358;
          lStack_528 = uStack_1d0 * 0x91fd + lStack_350;
          lStack_530 = lStack_4d0 + uVar9 + -1;
          pfStack_168 = (float *)0x0;
          for (uVar16 = uStack_360; pfVar24 = pfStack_168, (longlong *)uVar16 != plStack_110;
              uVar16 = uVar16 + 0x10) {
            pdb_140deec90(unaff_RBX,uVar16,fVar26);
            uStack_278._4_4_ = pfVar11[4];
            uStack_270._4_4_ = pfVar11[5];
            uStack_278._0_4_ = pfVar11[6];
            uStack_270._0_4_ = pfVar11[7];
            cVar6 = pdb_140deea30(&uStack_278);
            pfVar24 = pfStack_168;
            if (cVar6 != '\0') {
              if (pfStack_168 == pfStack_178) {
                pdb_142d7e8a0(&pfStack_178);
              }
              *(ulonglong *)(pbStack_170 + (longlong)pfVar24 * 8) = uVar16;
              pfStack_168 = (float *)((longlong)pfVar24 + 1);
            }
            fVar30 = _DAT_142e36f28;
          }
          unaff_R12 = (float *)((longlong)pfStack_168 - (longlong)pfVar22);
          param_4 = pfStack_168;
          if (pfVar22 <= pfStack_168 && unaff_R12 != (float *)0x0) {
            if ((float *)(lStack_210 - (longlong)pfVar22) < unaff_R12) {
              pdb_142d7f1b0(&lStack_210,pfVar22,unaff_R12,4,4);
              pbVar14 = pbStack_208 + (longlong)pfStack_200 * 4;
              fVar30 = _DAT_142e36f28;
              pbVar5 = pbStack_208;
              pfVar17 = pfStack_200;
            }
            else {
              pbVar14 = pbStack_140 + (longlong)pfVar22 * 4;
              pbVar5 = pbStack_140;
              pfVar17 = pfVar22;
            }
            if ((float *)0x1 < unaff_R12) {
              pub_142e32780(pbVar14,0);
              pbVar14 = pbVar5 + ((longlong)((longlong)pfVar24 + (longlong)pfVar17) -
                                 (longlong)pfVar22) * 4 + -4;
              unaff_RBX = &uStack_468;
              pfVar17 = (float *)((undefined *)((longlong)pfVar17 + (longlong)unaff_R12) + -1);
            }
            pbVar14[0] = 0;
            pbVar14[1] = 0;
            pbVar14[2] = 0;
            pbVar14[3] = 0;
            pbStack_140 = pbStack_208;
            param_4 = (float *)((longlong)pfVar17 + 1);
          }
          fVar29 = _UNK_142e3c64c;
          fVar28 = _UNK_142e3c648;
          fVar56 = _UNK_142e3c644;
          fVar31 = _DAT_142e3c640;
          if ((param_4 != (float *)0x0) && (pfStack_168 != (float *)0x0)) {
            lVar8 = (longlong)pfStack_168 * 8;
            lVar15 = (longlong)param_4 * 4;
            fVar27 = _DAT_142e36f3c;
            do {
              lVar15 = lVar15 + -4;
              lVar8 = lVar8 + -8;
              fVar44 = **(float **)(pbStack_170 + lVar8) - fStack_2e4;
              fVar32 = fVar44;
              if (fVar27 <= fVar44) {
                fVar32 = fVar27;
              }
              fVar27 = (float)(~-(uint)NAN(fVar27) & (uint)fVar32 |
                              -(uint)NAN(fVar27) & (uint)fVar44);
              *(float *)(pbStack_140 + lVar15) = fVar27;
            } while ((lVar8 != 0) && (lVar15 != 0));
          }
          fVar27 = pfVar11[6];
          fVar32 = pfVar11[7];
          fVar44 = (fVar32 - fVar27) * fStack_f8;
          pfStack_200 = param_4;
          pfStack_1d8 = param_4;
          if ((fVar44 != 0.0) || (NAN(fVar44))) break;
          uVar9 = uStack_1d0;
          pfVar22 = param_4;
          pfVar24 = pfStack_168;
          pbVar14 = pbStack_140;
          if (uStack_1d0 == 0) goto LAB_1414454db;
        }
        fStack_114 = pfVar11[4];
        fStack_128 = pfVar11[5];
        bVar25 = uVar9 != uStack_1e0;
        bStack_f1 = param_10 != '\x01';
        lStack_1e8 = 0;
        pdb_14007ee60();
        pfVar22 = (float *)pub_1406abab0(4,4);
        if (pfVar22 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,4);
        }
        *pfVar22 = 0.0;
        uStack_468 = (float *)0x1;
        auStack_458._0_8_ = 1;
        pfVar24 = (float *)0x1;
        pfStack_460 = pfVar22;
        if (cStack_f2 == '\x02') {
LAB_141443ee3:
          pdb_142d89720();
        }
        else {
          lVar8 = 4;
          while (lVar8 != 0x14) {
            pfVar22 = (float *)((longlong)param_16 + lVar8);
            fStack_130 = *(float *)((longlong)param_16 + lVar8 + 4);
            lVar8 = lVar8 + 8;
            lStack_188 = 1;
            fVar50 = *pfVar22;
            while( true ) {
              if ((fVar50 != 0.0) || (NAN(fVar50))) {
                if (((fVar50 != fVar30) || (NAN(fVar50) || NAN(fVar30))) &&
                   ((fVar27 <= fVar50 && (fVar50 < fVar32)))) {
                  fVar50 = (float)pdb_140de8220();
                  uVar12 = auStack_458._0_8_;
                  if ((float *)auStack_458._0_8_ == uStack_468) {
                    pdb_142d89720();
                  }
                  pfStack_460[uVar12] = fVar50;
                  pfVar24 = (float *)(uVar12 + 1);
                  auStack_458._0_8_ = pfVar24;
                }
              }
              if (lStack_188 == 2) break;
              lStack_188 = 2;
              fVar50 = fStack_130;
            }
          }
          unaff_R12 = (float *)0x14;
          if (pfVar24 == uStack_468) goto LAB_141443ee3;
        }
        bStack_f1 = bStack_f1 | bVar25;
        pfStack_460[(longlong)pfVar24] = 1.0;
        pfVar24 = (float *)((longlong)pfVar24 + 1);
        auStack_458._0_8_ = pfVar24;
        if (pfVar24 == (float *)0x0) {
          lStack_280 = 0;
          lStack_330 = 0;
          lVar8 = lStack_330;
        }
        else {
          pfVar22 = pfStack_460 + (longlong)pfVar24;
          lVar8 = 0;
          lStack_280 = 0;
          bVar25 = false;
          pfVar17 = pfStack_460;
          do {
            pfVar13 = pfVar17 + 1;
            fVar50 = *pfVar17;
            if (bVar25) {
              fVar45 = fVar50;
              fVar50 = (float)auStack_308._0_4_;
            }
            else {
              if (pfVar13 == pfVar22) break;
              fVar45 = pfVar17[1];
              pfVar13 = pfVar17 + 2;
            }
            uStack_278 = (float *)0x0;
            uStack_270 = (undefined4 *)0x4;
            uStack_268 = (float *)0x0;
            if (fVar45 <= fVar50) {
              if (pfVar13 == pfVar22) {
                auStack_308 = ZEXT416((uint)fVar45);
                break;
              }
              while( true ) {
                fVar51 = *pfVar13;
                auStack_308 = ZEXT416((uint)fVar51);
                uStack_278 = (float *)0x0;
                uStack_270 = (undefined4 *)0x4;
                uStack_268 = (float *)0x0;
                if (fVar45 < fVar51) break;
                pfVar13 = pfVar13 + 1;
                fVar45 = fVar51;
                if (pfVar13 == pfVar22) goto joined_r0x0001414454d0;
              }
              fVar50 = fVar45;
              fVar45 = fVar51;
              pfVar13 = pfVar13 + 1;
            }
            pfStack_108 = pfVar13;
            uStack_268 = (float *)0x0;
            uStack_270._4_4_ = 0.0;
            uStack_270._0_4_ = 5.60519e-45;
            uStack_278._4_4_ = 0.0;
            uStack_278._0_4_ = 0.0;
            auStack_308 = ZEXT416((uint)fVar45);
            fVar56 = (fVar45 - fVar50) * fVar44;
            fVar31 = (float)pub_142e329c0(fVar56 / _DAT_142e3c620);
            pfVar24 = (float *)0x0;
            if (0.0 <= fVar31) {
              pfVar24 = (float *)((longlong)(fVar31 - _DAT_142e36f2c) & (longlong)fVar31 >> 0x3f |
                                 (longlong)fVar31);
            }
            if (_DAT_142e36f30 < fVar31) {
              pfVar24 = (float *)0xffffffffffffffff;
            }
            fVar31 = _DAT_142e3c630;
            if (bStack_f1 == 0) {
              fVar31 = (float)pub_142e329c0(fVar56 / _DAT_142e3c634);
              uVar9 = 0;
              if (0.0 <= fVar31) {
                uVar9 = (longlong)(fVar31 - _DAT_142e36f2c) & (longlong)fVar31 >> 0x3f |
                        (longlong)fVar31;
              }
              if (_DAT_142e36f30 < fVar31) {
                uVar9 = 0xffffffffffffffff;
              }
              pfVar24 = (float *)(((uint)uVar9 & 1) + uVar9);
              fVar31 = _DAT_142e37ad4;
            }
            pdb_140de8bb0((undefined *)((longlong)pfVar24 + 1),fVar31 / fVar56,&lStack_520,
                          &uStack_278,&UNK_14330a0d0);
            unaff_R12 = uStack_268;
            fVar29 = _UNK_142e3c64c;
            fVar28 = _UNK_142e3c648;
            fVar56 = _UNK_142e3c644;
            fVar31 = _DAT_142e3c640;
            lVar15 = CONCAT44(uStack_270._4_4_,(float)uStack_270);
            if ((float *)((longlong)pfStack_1f8 - lVar8) < uStack_268) {
              pdb_142d7f1b0(&pfStack_1f8,lVar8,uStack_268,4,4);
              lVar8 = lStack_1e8;
              if (unaff_R12 < (float *)0x8) {
LAB_141444179:
                pfVar17 = (float *)0x0;
              }
              else {
LAB_141444168:
                lVar8 = lStack_1e8;
                if ((ulonglong)((longlong)pfStack_1f0 + (lStack_1e8 * 4 - lVar15)) < 0x20)
                goto LAB_141444179;
                pfVar17 = (float *)((ulonglong)unaff_R12 & 0xfffffffffffffff8);
                lVar8 = lStack_1e8 + (longlong)pfVar17;
                pfVar13 = (float *)0x0;
                do {
                  pfVar21 = (float *)(lVar15 + (longlong)pfVar13 * 4);
                  fVar45 = pfVar21[1];
                  fVar51 = pfVar21[2];
                  fVar57 = pfVar21[3];
                  pfVar23 = (float *)(lVar15 + 0x10 + (longlong)pfVar13 * 4);
                  auVar46._0_4_ = *pfVar23 * (float)auStack_308._0_4_ + (fVar31 - *pfVar23) * fVar50
                  ;
                  auVar46._4_4_ =
                       pfVar23[1] * (float)auStack_308._0_4_ + (fVar56 - pfVar23[1]) * fVar50;
                  auVar46._8_4_ =
                       pfVar23[2] * (float)auStack_308._0_4_ + (fVar28 - pfVar23[2]) * fVar50;
                  auVar46._12_4_ =
                       pfVar23[3] * (float)auStack_308._0_4_ + (fVar29 - pfVar23[3]) * fVar50;
                  pfVar23 = pfStack_1f0 + lStack_1e8 + (longlong)pfVar13;
                  *pfVar23 = *pfVar21 * (float)auStack_308._0_4_ + (fVar31 - *pfVar21) * fVar50;
                  pfVar23[1] = fVar45 * (float)auStack_308._0_4_ + (fVar56 - fVar45) * fVar50;
                  pfVar23[2] = fVar51 * (float)auStack_308._0_4_ + (fVar28 - fVar51) * fVar50;
                  pfVar23[3] = fVar57 * (float)auStack_308._0_4_ + (fVar29 - fVar57) * fVar50;
                  *(undefined1 (*) [16])
                   (pfStack_1f0 + (longlong)((longlong)pfVar13 + lStack_1e8 + 4)) = auVar46;
                  pfVar13 = pfVar13 + 2;
                } while (pfVar17 != pfVar13);
                if (unaff_R12 == pfVar17) goto LAB_1414442c0;
              }
              pfVar13 = pfVar17;
              if (((ulonglong)unaff_R12 & 1) != 0) {
                fVar45 = *(float *)(lVar15 + (longlong)pfVar17 * 4);
                pfStack_1f0[lVar8] = fVar45 * (float)auStack_308._0_4_ + (fVar30 - fVar45) * fVar50;
                lVar8 = lVar8 + 1;
                pfVar13 = (float *)((ulonglong)pfVar17 | 1);
              }
              if (unaff_R12 != (float *)((ulonglong)pfVar17 | 1)) {
                lVar15 = lVar15 + (longlong)pfVar13 * 4;
                unaff_R12 = (float *)((longlong)unaff_R12 - (longlong)pfVar13);
                pfVar17 = (float *)0x0;
                do {
                  fVar45 = *(float *)(lVar15 + (longlong)pfVar17 * 4);
                  pfStack_1f0[lVar8 + (longlong)pfVar17] =
                       fVar45 * (float)auStack_308._0_4_ + (fVar30 - fVar45) * fVar50;
                  fVar45 = *(float *)(lVar15 + 4 + (longlong)pfVar17 * 4);
                  pfStack_1f0[(longlong)((longlong)pfVar17 + lVar8 + 1)] =
                       fVar45 * (float)auStack_308._0_4_ + (fVar30 - fVar45) * fVar50;
                  pfVar17 = (float *)((longlong)pfVar17 + 2);
                } while (unaff_R12 != pfVar17);
                lVar8 = lVar8 + (longlong)pfVar17;
              }
            }
            else if (uStack_268 != (float *)0x0) {
              lStack_1e8 = lVar8;
              if ((float *)0x7 < uStack_268) goto LAB_141444168;
              goto LAB_141444179;
            }
LAB_1414442c0:
            lStack_1e8 = lVar8;
            if (CONCAT44(uStack_278._4_4_,(float)uStack_278) != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_270._4_4_,(float)uStack_270),
                            CONCAT44(uStack_278._4_4_,(float)uStack_278) << 2,4);
            }
            lStack_280 = lStack_280 + (longlong)pfVar24;
            bVar25 = true;
            pfVar17 = pfStack_108;
          } while (pfStack_108 != pfVar22);
        }
joined_r0x0001414454d0:
        lStack_330 = lVar8;
        if (uStack_468 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_460,(longlong)uStack_468 << 2,4);
        }
        fVar44 = fStack_1a4;
        pfStack_1b8 = pfStack_1f0;
        pfStack_2a0 = pfStack_1f0 + lStack_330;
        if (lStack_330 != 0) {
          uVar9 = lStack_330 * 4 - 4;
          pfVar22 = pfStack_1f0;
          if (0x1b < uVar9) {
            uVar9 = (uVar9 >> 2) + 1;
            uVar16 = uVar9 & 0xfffffffffffffff8;
            pfVar22 = pfStack_1f0 + uVar16;
            uVar20 = 0;
            do {
              pfVar17 = pfStack_1f0 + uVar20;
              fVar50 = pfVar17[1];
              fVar45 = pfVar17[2];
              fVar51 = pfVar17[3];
              pfVar13 = pfStack_1f0 + uVar20 + 4;
              auVar47._0_4_ = *pfVar13 * fVar32 + (fVar31 - *pfVar13) * fVar27;
              auVar47._4_4_ = pfVar13[1] * fVar32 + (fVar56 - pfVar13[1]) * fVar27;
              auVar47._8_4_ = pfVar13[2] * fVar32 + (fVar28 - pfVar13[2]) * fVar27;
              auVar47._12_4_ = pfVar13[3] * fVar32 + (fVar29 - pfVar13[3]) * fVar27;
              pfVar13 = pfStack_1f0 + uVar20;
              *pfVar13 = *pfVar17 * fVar32 + (fVar31 - *pfVar17) * fVar27;
              pfVar13[1] = fVar50 * fVar32 + (fVar56 - fVar50) * fVar27;
              pfVar13[2] = fVar45 * fVar32 + (fVar28 - fVar45) * fVar27;
              pfVar13[3] = fVar51 * fVar32 + (fVar29 - fVar51) * fVar27;
              *(undefined1 (*) [16])(pfStack_1f0 + uVar20 + 4) = auVar47;
              uVar20 = uVar20 + 8;
            } while (uVar16 != uVar20);
            if (uVar9 == uVar16) goto LAB_141444466;
          }
          do {
            *pfVar22 = *pfVar22 * fVar32 + (fVar30 - *pfVar22) * fVar27;
            pfVar22 = pfVar22 + 1;
          } while (pfVar22 != pfStack_2a0);
        }
LAB_141444466:
        fVar31 = _DAT_14300b868;
        fVar30 = _DAT_142e37878;
        auVar38._4_12_ = unaff_XMM6._4_12_;
        auVar38._0_4_ = (fVar48 * fStack_114 * _DAT_142e37878 + fStack_1a4) * _DAT_14300b868;
        fVar28 = (float)pub_142e32b30(auVar38._0_8_);
        fVar56 = _DAT_143309f30;
        fVar28 = fVar28 * _DAT_143309f30;
        fVar29 = (float)pub_142e32bc0();
        auStack_408._0_4_ = fVar48 * fStack_128;
        auStack_408._4_12_ = auVar38._4_12_;
        auVar39._0_4_ = ((float)auStack_408._0_4_ * fVar30 + fVar44) * fVar31;
        auVar39._4_12_ = auVar38._4_12_;
        fVar30 = (float)pub_142e32b30(auVar39._0_8_);
        fVar31 = (float)pub_142e32bc0();
        fStack_1a0 = fVar28 - fVar29;
        fVar28 = (float)pub_142e32b30();
        fVar29 = (float)pub_142e32bc0();
        fStack_19c = fVar30 * fVar56 - fVar31;
        fVar30 = (float)pub_142e32b30();
        fVar31 = (float)pub_142e32bc0();
        pbStack_5a8 = pbStack_170;
        pfStack_5a0 = pfStack_168;
        pbStack_560 = pbStack_140;
        pfStack_558 = pfStack_1d8;
        lStack_3d0 = lStack_288;
        uStack_3c8 = param_5;
        pfStack_3c0 = pfStack_1c8;
        uStack_3b8 = 0;
        uStack_3b0 = 0;
        pdb_14141de40(&lStack_3d0);
        fStack_2cc = (fStack_128 - fStack_114) * fVar48;
        fStack_198 = (fVar28 * fVar56 - fVar29) * _DAT_142e4bfe4;
        fStack_194 = (fVar30 * fVar56 - fVar31) * _DAT_142e4bfe4;
        uVar12 = *(undefined8 *)(param_8 + (uStack_3b0 & 0xffffffff) * 4);
        fVar31 = (float)((ulonglong)uVar12 >> 0x20) * uStack_3b0._4_4_;
        fVar56 = fVar31 + (float)uVar12 * (_DAT_142e36f28 - uStack_3b0._4_4_);
        uVar12 = *(undefined8 *)(param_6 + (uStack_3b0 & 0xffffffff) * 4);
        fVar30 = (float)((ulonglong)uVar12 >> 0x20) * uStack_3b0._4_4_;
        uStack_4b8 = CONCAT44(fVar30,fVar30 + (float)uVar12 * (_DAT_142e36f28 - uStack_3b0._4_4_));
        uStack_4b0 = 0;
        iStack_2dc = (int)uStack_1d0 * 0x54 + iStack_2d0;
        pbStack_4c8 = pbStack_3a0 + 0x1c;
        uStack_180 = 0;
        pfStack_2a8 = (float *)0x0;
        param_4 = (float *)0x0;
        pfVar17 = pfStack_1b8;
LAB_1414446c7:
        uStack_320 = 0;
        uStack_31c = 0;
        fVar28 = (float)uStack_4b8;
        fStack_328 = fVar56;
        fStack_324 = fVar31;
        fVar30 = _DAT_142e36f28;
        if (pfVar17 != pfStack_2a0) {
          pfVar13 = pfVar17 + 1;
          uVar16 = uStack_180 + 1;
          if (pfStack_2a8 == (float *)0x0) {
            if (pfVar13 == pfStack_2a0) {
              plVar10 = &uStack_278;
              pfVar22 = (float *)0x0;
              uVar9 = uVar16;
              pfVar13 = pfStack_2a0;
            }
            else {
              uVar9 = uStack_180 + 2;
              pfVar22 = pfVar13;
              plVar10 = unaff_RBX;
              pfVar13 = pfVar17 + 2;
              uStack_278 = pfVar17;
            }
            *plVar10 = (longlong)pfVar22;
            pfStack_2b8 = uStack_468;
            if (uStack_278 == (float *)0x0) {
              pfStack_2a8 = (float *)0x0;
              uStack_2b0 = uVar16;
              uStack_180 = uVar9;
              goto LAB_141444713;
            }
            uStack_2b0 = uStack_180;
            uStack_180 = uVar16;
            uVar16 = uVar9;
            pfVar17 = uStack_468;
            pfStack_2b8 = uStack_278;
          }
          pfStack_2c0 = (float *)0x0;
          pbVar5 = pbStack_140;
          uVar9 = uStack_1d0;
          pfVar22 = pfStack_1d8;
          pfStack_538 = pfVar17;
          uVar20 = uStack_180;
          pfStack_2a8 = pfStack_2b8;
          uStack_298 = uStack_2b0;
          pbVar14 = pbStack_140;
          if (pfStack_2b8 == (float *)0x0) goto joined_r0x000141443a74;
          pfStack_2c0 = pfStack_2b8;
          pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,*pfStack_2b8);
          fStack_fc = *pfVar17;
          pfStack_368 = pfVar13;
          pfStack_2b8 = pfVar17;
          uStack_2b0 = uStack_180;
          uStack_180 = uVar16;
          auStack_135._1_4_ = pdb_140e02880(&lStack_528);
          fVar27 = (float)pdb_140e02880(&lStack_530);
          fVar30 = (fVar27 + _DAT_142e36f38) * _DAT_142e3c650 + fStack_1ac;
          if (fVar30 <= _DAT_142e37ad4) {
            fVar30 = _DAT_142e37ad4;
          }
          fVar27 = fStack_fc - pfStack_108._0_4_;
          pdb_14141de40(&lStack_3d0);
          uVar9 = uStack_3b0 & 0xffffffff;
          fVar57 = _DAT_142e36f28 - uStack_3b0._4_4_;
          fVar29 = *(float *)(param_8 + uVar9 * 4);
          fVar50 = *(float *)(param_8 + 4 + uVar9 * 4) * uStack_3b0._4_4_;
          fVar32 = *(float *)(param_6 + uVar9 * 4);
          fVar51 = uStack_3b0._4_4_ * *(float *)(param_6 + 4 + uVar9 * 4);
          pdb_14141de40(&lStack_3d0);
          uVar59 = (undefined4)(in_stack_fffffffffffff9b0 >> 0x20);
          uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffff9b8 >> 0x20);
          uVar9 = uStack_3b0 & 0xffffffff;
          fVar31 = 0.0;
          fVar56 = uStack_3b0._4_4_ * *(float *)(param_8 + 4 + uVar9 * 4) +
                   *(float *)(param_8 + uVar9 * 4) * (_DAT_142e36f28 - uStack_3b0._4_4_);
          uVar12 = *(undefined8 *)(param_6 + uVar9 * 4);
          fVar44 = (float)((ulonglong)uVar12 >> 0x20) * uStack_3b0._4_4_;
          fVar45 = fVar44 + (float)uVar12 * (_DAT_142e36f28 - uStack_3b0._4_4_);
          uStack_4b8 = CONCAT44(fVar44,fVar45);
          uStack_4b0 = 0;
          fVar44 = fVar45;
          if (fVar28 <= fVar45) {
            fVar44 = fVar28;
          }
          pfVar17 = pfStack_368;
          if ((float)(~-(uint)NAN(fVar28) & (uint)fVar44 | -(uint)NAN(fVar28) & (uint)fVar45) <=
              (float)auStack_408._0_4_) {
            fVar50 = fVar29 * fVar57 + fVar50;
            fVar44 = fStack_328 + fVar50 + fVar56;
            fVar29 = fVar56;
            if (fVar44 <= 0.0) {
              fVar50 = _DAT_142e3c654;
              fVar29 = _DAT_142e3c654;
            }
            if (((fVar29 + fVar45 <= (float)auStack_408._0_4_) ||
                (uVar7 = -(uint)(0.0 < fVar44),
                fVar28 + (float)(~uVar7 & (uint)_DAT_142e3c654 | (uint)fStack_328 & uVar7) <=
                (float)auStack_408._0_4_)) ||
               (fVar57 * fVar32 + fVar51 + fVar50 <= (float)auStack_408._0_4_)) {
              fVar28 = (float)((int)uStack_298 * 0x171 + iStack_2dc);
              unaff_R12 = (float *)(ulonglong)(uint)fVar28;
              uVar9 = *(ulonglong *)pfVar11;
              uVar16 = uStack_1e0;
              if (uStack_1e0 < uVar9) {
                uVar16 = uVar9;
              }
              pfVar22 = (float *)(pbStack_4c8 + uVar9 * 0x20);
              do {
                bVar25 = *(ulonglong *)(pfVar11 + 2) <= uVar9;
                if (bVar25) {
                  if (((byte)uStack_12c & (float)auStack_135._1_4_ < _DAT_142e3c658) != 0)
                  goto LAB_1414446c7;
                  break;
                }
                if (uStack_1e0 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar16,uStack_1e0,&UNK_14330a0b8);
                }
                pfVar13 = pfVar22 + -1;
                fVar29 = *pfVar22;
                if ((*pfVar13 - fVar26 <= pfStack_108._0_4_) &&
                   (pfStack_108._0_4_ <= fVar29 + fVar26)) break;
                uVar9 = uVar9 + 1;
                pfVar22 = pfVar22 + 8;
              } while ((fStack_fc < *pfVar13 - fVar26) || (fVar29 + fVar26 < fStack_fc));
              if (bStack_f1 == 0) {
                if ((uStack_298 & 1) == 0) goto LAB_1414446c7;
                bVar25 = false;
              }
              fVar29 = (float)uStack_3f8;
              if (((byte)param_4 & fStack_2c8 == pfStack_108._0_4_) == 0) {
                fVar44 = fStack_f8 * pfStack_108._0_4_;
                fVar32 = (float)pub_142e32b30(fVar44 * _DAT_142e3787c);
                fVar29 = 0.0;
                uStack_3e8 = 0;
                uStack_3e0 = 0;
                if (_DAT_142e37848 <= fStack_114) {
                  pub_142e32b30((fStack_1a0 * (fVar32 * _DAT_142e36f50 + _DAT_142e36f50) +
                                _DAT_142e36f28) * fVar44 + fStack_198);
                  uStack_3e8 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da * _DAT_143007994);
                  uStack_3e0 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                }
                if (!bVar25) {
                  fVar29 = (float)pub_142e32b30();
                  fVar29 = fVar29 * _DAT_143007994;
                }
              }
              fVar50 = fStack_f8 * fStack_fc;
              fVar32 = (float)pub_142e32b30(fVar50 * _DAT_142e3787c);
              fVar44 = 0.0;
              uVar52 = 0;
              uVar53 = 0;
              uVar54 = 0;
              if (_DAT_142e37848 <= fStack_114) {
                uVar12 = pub_142e32b30((fStack_1a0 * (fVar32 * _DAT_142e36f50 + _DAT_142e36f50) +
                                       _DAT_142e36f28) * fVar50 + fStack_198);
                uVar52 = (undefined4)((ulonglong)uVar12 >> 0x20);
                uVar53 = (undefined4)extraout_XMM0_Qb;
                uVar54 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
                fVar44 = (float)uVar12 * _DAT_143007994;
              }
              fVar32 = 0.0;
              uVar42 = 0;
              uVar40 = 0;
              uVar41 = 0;
              if (!bVar25) {
                pub_142e32b30();
                uVar40 = (undefined4)extraout_XMM0_Qb_00;
                uVar41 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
                fVar32 = extraout_XMM0_Da_00 * _DAT_143007994;
                uVar42 = extraout_XMM0_Db_00;
              }
              uStack_318 = (float)uStack_3e8;
              uStack_310 = CONCAT44(fVar32,fVar29);
              uStack_3f8 = CONCAT44(uVar42,fVar32);
              uStack_3f0 = CONCAT44(uVar41,uVar40);
              if (bStack_f1 == 0) {
                fVar29 = fVar29 * _DAT_142e3c660 + _DAT_142e3c660;
                fVar32 = fVar32 * _UNK_142e3c664 + _UNK_142e3c664;
                uStack_310 = CONCAT44(fVar32,fVar29);
              }
              fStack_2f4 = pfStack_108._0_4_;
              fStack_2f0 = fStack_114;
              fStack_2ec = fStack_fc;
              fStack_2e8 = fStack_128;
              fStack_328 = fVar44;
              fStack_324 = (float)uVar52;
              uStack_320 = uVar53;
              uStack_31c = uVar54;
              fStack_314 = fVar44;
              if (0.0 < fStack_2d4) {
                uVar58 = CONCAT44(uVar60,uStack_2e0);
                uVar12 = CONCAT44(uVar59,fStack_124);
                pdb_140846800(&fStack_2f4,uStack_298,pfStack_1b8,lStack_330,lStack_280,uVar12,uVar58
                             );
                uVar59 = (undefined4)((ulonglong)uVar12 >> 0x20);
                uVar60 = (undefined4)((ulonglong)uVar58 >> 0x20);
              }
              if (uStack_148 != 0) {
                uStack_148 = 0;
              }
              uStack_150 = 0;
              uStack_278._0_4_ = fStack_2f4;
              uStack_278._4_4_ = fStack_2f0;
              uStack_270._0_4_ = fStack_2ec;
              uStack_270._4_4_ = fStack_2e8;
              uStack_268 = (float *)CONCAT44(fStack_314,uStack_318);
              uStack_260 = uStack_310;
              if (uStack_160 == 0) {
                pdb_140848dc0(&uStack_160);
              }
              else {
                uStack_148 = 0;
              }
              uVar9 = 0;
              if (uStack_160 <= uStack_150 + uStack_148) {
                uVar9 = uStack_160;
              }
              lVar8 = (uStack_150 + uStack_148) - uVar9;
              *(float **)(pfStack_158 + lVar8 * 10 + 4) = uStack_268;
              *(ulonglong *)(pfStack_158 + lVar8 * 10 + 4 + 2) = uStack_260;
              *(ulonglong *)(pfStack_158 + lVar8 * 10) =
                   CONCAT44(uStack_278._4_4_,(float)uStack_278);
              *(ulonglong *)(pfStack_158 + lVar8 * 10 + 2) =
                   CONCAT44(uStack_270._4_4_,(float)uStack_270);
              pfStack_158[lVar8 * 10 + 8] = fVar28;
              *(undefined2 *)(pfStack_158 + lVar8 * 10 + 9) = 0;
              uStack_278._0_4_ = fStack_2f4;
              uStack_278._4_4_ = fStack_2f0;
              uStack_270._0_4_ = fStack_2ec;
              uStack_270._4_4_ = fStack_2e8;
              in_stack_fffffffffffff9b8 = CONCAT44(uVar60,plStack_190._0_4_);
              in_stack_fffffffffffff9b0 = CONCAT44(uVar59,fVar26);
              uStack_148 = uStack_148 + 1;
              cVar6 = pdb_140815be0(&pbStack_5a8,&pbStack_560,pbStack_170,pfStack_168,&uStack_278,
                                    in_stack_fffffffffffff9b0,in_stack_fffffffffffff9b8,&uStack_160)
              ;
              if (cVar6 != '\0') {
                fVar44 = fVar32;
                if (fVar32 <= fVar29) {
                  fVar44 = fVar29;
                }
                fVar50 = fStack_328;
                if ((float)uStack_3e8 <= fStack_328) {
                  fVar50 = (float)uStack_3e8;
                }
                fVar29 = ((float)(~-(uint)NAN(fVar29) & (uint)fVar44 |
                                 -(uint)NAN(fVar29) & (uint)fVar32) -
                         (float)(~-(uint)NAN((float)uStack_3e8) & (uint)fVar50 |
                                -(uint)NAN((float)uStack_3e8) & (uint)fStack_328)) + fStack_2cc;
                fVar32 = _DAT_142e36f28 - fVar29 / fStack_2cc;
                if (bStack_f1 == 0) {
                  fVar32 = 0.0;
                }
                else {
                  fVar32 = fVar32 * _DAT_142e3c670 + (_DAT_142e36f28 - fVar32) * _DAT_142e3798c;
                }
                if ((_DAT_142e3c620 < fVar29) && ((float)auStack_135._1_4_ < fVar32)) {
                  if (uStack_148 != 0) {
                    uStack_148 = 0;
                  }
                  uStack_150 = 0;
                  pdb_1408469b0((float)auStack_135._1_4_ / _DAT_142e3798c,&fStack_2f4,&uStack_318,
                                fVar28,&uStack_160);
                }
              }
              if (((byte)param_4 & fStack_2c4 == pfStack_108._0_4_) == 0) {
                uVar7 = pdb_1413f9030(pfStack_1c8);
                uVar12 = *(undefined8 *)(lStack_288 + (ulonglong)uVar7 * 8);
                uVar58 = *(undefined8 *)(lStack_288 + 8 + (ulonglong)uVar7 * 8);
                fStack_4a8 = extraout_XMM0_Da_01 * (float)uVar58 +
                             (_DAT_142e36f28 - extraout_XMM0_Da_01) * (float)uVar12;
                fStack_4a4 = extraout_XMM0_Da_01 * (float)((ulonglong)uVar58 >> 0x20) +
                             (_DAT_142e36f28 - extraout_XMM0_Da_01) *
                             (float)((ulonglong)uVar12 >> 0x20);
                fStack_4a0 = extraout_XMM0_Dc_00 * 0.0 + 0.0;
                fStack_49c = extraout_XMM0_Dc_00 * 0.0 + 0.0;
              }
              uVar7 = pdb_1413f9030(pfStack_1c8);
              uVar12 = *(undefined8 *)(lStack_288 + (ulonglong)uVar7 * 8);
              uVar58 = *(undefined8 *)(lStack_288 + 8 + (ulonglong)uVar7 * 8);
              fVar44 = extraout_XMM0_Da_02 * (float)uVar58 +
                       (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)uVar12;
              fVar45 = extraout_XMM0_Da_02 * (float)((ulonglong)uVar58 >> 0x20) +
                       (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)((ulonglong)uVar12 >> 0x20);
              fVar50 = fVar44 - fStack_4a8;
              fVar28 = fVar45 - fStack_4a4;
              fVar51 = _DAT_142e36f28 / SQRT(fVar28 * fVar28 + fVar50 * fVar50);
              fVar50 = fVar51 * fVar50;
              fVar51 = fVar51 * fVar28;
              uStack_540 = CONCAT44(fVar51,fVar50);
              pdb_140df4520(&uStack_278,&uStack_540);
              fVar32 = (float)uStack_270;
              fVar29 = uStack_278._4_4_;
              fVar28 = (float)uStack_278;
              uStack_468 = (float *)CONCAT44(fVar50,(uint)fVar51 ^ _DAT_142e37820);
              pdb_140df4520();
              if (uStack_148 == 0) {
                lVar8 = 0;
                uVar9 = 0;
                lVar15 = 0;
              }
              else {
                uVar9 = 0;
                if (uStack_160 <= uStack_150) {
                  uVar9 = uStack_160;
                }
                lVar8 = uStack_150 - uVar9;
                lVar15 = uStack_148 - (uStack_160 - lVar8);
                uVar9 = uStack_160;
                if (uStack_148 < uStack_160 - lVar8 || lVar15 == 0) {
                  uVar9 = uStack_148 + lVar8;
                  lVar15 = 0;
                }
              }
              fVar50 = _DAT_142e36f28 / fVar27;
              pfVar22 = pfStack_158 + lVar8 * 10;
              pfVar17 = pfStack_158 + uVar9 * 10;
              fVar51 = fVar30 * (float)uStack_278;
              fVar57 = fVar30 * uStack_278._4_4_;
              fVar55 = fVar30 * (float)uStack_270;
              fVar30 = fVar30 * (float)uStack_270;
              unaff_R12 = pfStack_158;
              pfVar24 = pfStack_158 + lVar15 * 10;
LAB_1414451c0:
              pfVar13 = unaff_R12;
              pfVar21 = pfVar22;
              pfVar23 = pfVar24;
              if ((pfVar22 != pfVar17) ||
                 (pfVar13 = pfVar22, pfVar21 = unaff_R12, pfVar23 = pfVar22, pfVar17 = pfVar24,
                 unaff_R12 != pfVar24)) {
                fVar33 = (float)pdb_140deec10(pfVar21);
                fVar34 = (float)pdb_140deec50(pfVar21);
                fVar35 = (float)pdb_140deec20(pfVar21);
                pfVar22 = pfVar21 + 10;
                unaff_R12 = pfVar13;
                pfVar24 = pfVar23;
                if ((0.0 < fVar33) &&
                   ((0.0 < fVar34 && (fVar33 = fVar33 * fStack_f8, _DAT_142e37840 <= fVar33)))) {
                  fVar27 = (fVar35 - pfStack_108._0_4_) * fVar50;
                  uStack_468 = (float *)CONCAT44(fVar27 * fVar45 +
                                                 (_DAT_142e36f28 - fVar27) * fStack_4a4,
                                                 fVar27 * fVar44 +
                                                 (_DAT_142e36f28 - fVar27) * fStack_4a8);
                  pdb_140df4540(&uStack_278);
                  fVar35 = (float)uStack_270;
                  fVar27 = (float)uStack_278;
                  fVar34 = fVar34 * fVar48;
                  fVar36 = uStack_278._4_4_;
                  if (bStack_f1 == 0) {
                    if (fVar33 < _DAT_142e3c674) goto LAB_1414451c0;
                    if (fVar33 < fVar34) {
                      fVar36 = uStack_278._4_4_ + (fVar34 - fVar33) * _DAT_142e36f38;
                      fVar34 = fVar33;
                    }
                  }
                  if (cStack_f2 != '\x02') {
                    uStack_268 = *(float **)(param_16 + 4);
                    uStack_278._0_4_ = (float)*(undefined8 *)param_16;
                    uStack_278._4_4_ = (float)((ulonglong)*(undefined8 *)param_16 >> 0x20);
                    uStack_270._0_4_ = (float)*(undefined8 *)(param_16 + 2);
                    uStack_270._4_4_ = (float)((ulonglong)*(undefined8 *)(param_16 + 2) >> 0x20);
                    pdb_1408ff980((longlong)&uStack_268 + 4);
                  }
                  fVar33 = fVar33 + fStack_1a8;
                  fStack_5e8 = fVar33 * fVar28;
                  fStack_5e4 = fVar33 * fVar29;
                  fStack_5e0 = fVar33 * fVar32;
                  fStack_5dc = fVar33 * fVar32;
                  fStack_5d8 = fVar34 * _DAT_142e378e0;
                  fStack_5d4 = fVar34 * _UNK_142e378e4;
                  fStack_5d0 = fVar34 * _UNK_142e378e8;
                  fStack_5cc = fVar34 * _UNK_142e378ec;
                  fStack_5b8 = fVar27;
                  fStack_5b0 = fVar35;
                  fStack_5ac = fVar35;
                  fStack_5c8 = fVar51;
                  fStack_5c4 = fVar57;
                  fStack_5c0 = fVar55;
                  fStack_5bc = fVar30;
                  fStack_5b4 = fVar36;
                  pdb_140e07fe0(&uStack_278);
                  fVar34 = pfVar21[8];
                  pfStack_598 = (float *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
                  pfStack_590 = (float *)CONCAT44(uStack_270._4_4_,(float)uStack_270);
                  auStack_588._8_8_ = uStack_260;
                  auStack_588._0_8_ = uStack_268;
                  uStack_578 = uStack_258;
                  uStack_574 = uStack_254;
                  uStack_570 = uStack_250;
                  uStack_56c = uStack_24c;
                  if (*pcStack_348 == '\0') {
                    pdb_140951920(&uStack_278);
                    uStack_448 = uStack_578;
                    uStack_444 = uStack_574;
                    uStack_440 = uStack_570;
                    uStack_43c = uStack_56c;
                    auStack_458 = auStack_588;
                    uStack_468 = pfStack_598;
                    pfStack_460 = pfStack_590;
                    uStack_438 = uStack_248;
                    uStack_430 = uStack_240;
                    uStack_420 = uStack_230;
                    uStack_428 = uStack_238;
                    uStack_418 = uStack_2d8;
                    uStack_414 = 0;
                    uStack_40c = 0x10;
                    fStack_41c = fVar34;
                    pdb_14094c790(auStack_628,unaff_RBX);
                    cVar6 = pdb_1413f66a0(uStack_4c0);
                    if (cVar6 != '\0') {
                      *pcStack_348 = '\x01';
                    }
                  }
                }
                goto LAB_1414451c0;
              }
              param_4 = (float *)CONCAT71((int7)((ulonglong)pfVar22 >> 8),1);
              fStack_2c8 = fStack_fc;
              uStack_3e8 = CONCAT44(fStack_324,fStack_328);
              uStack_3e0 = CONCAT44(uStack_31c,uStack_320);
              pfVar17 = pfStack_368;
              fStack_4a8 = fVar44;
              fStack_4a4 = fVar45;
              fStack_4a0 = extraout_XMM0_Dc_01 * 0.0 + 0.0;
              fStack_49c = extraout_XMM0_Dc_01 * 0.0 + 0.0;
              fStack_2c4 = fStack_2c8;
            }
          }
          goto LAB_1414446c7;
        }
LAB_141444713:
        pfStack_2c0 = (float *)0x0;
        pbVar5 = pbStack_140;
        uVar9 = uStack_1d0;
        pfVar22 = pfStack_1d8;
        pfVar17 = pfStack_2b8;
        uVar20 = uStack_2b0;
        uVar16 = uStack_180;
        pbVar14 = pbStack_140;
        goto joined_r0x000141443a74;
      }
LAB_1414454db:
      pbStack_140 = pbVar14;
      if (lStack_498 != 0) {
        pub_1406abac0(pbStack_490,lStack_498 << 2,4);
      }
      uVar12 = uStack_338;
      if (pfStack_1f8 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_1f0,(longlong)pfStack_1f8 << 2,4);
      }
      if (uStack_160 != 0) {
        pub_1406abac0((byte *)pfStack_158,uStack_160 * 0x28,4);
      }
      if (lStack_210 != 0) {
        pub_1406abac0(pbStack_208,lStack_210 << 2,4);
      }
      if (pfStack_178 != (float *)0x0) {
        pub_1406abac0(pbStack_170,(longlong)pfStack_178 << 3,8);
      }
      if (lStack_3a8 != 0) {
        pub_1406abac0(pbStack_3a0,lStack_3a8 << 5,8);
      }
      if (uStack_1c0 != 0) {
        pub_1406abac0((byte *)pfStack_290,uStack_1c0 << 2,4);
      }
      if (lStack_480 != 0) {
        pub_1406abac0(pbStack_478,lStack_480 << 2,4);
      }
      param_1 = (float *)(ulonglong)(uint)((int)uVar12 << 2);
      pub_1406abac0((byte *)pfStack_340,(ulonglong)param_1,4);
      if (pfStack_378 == (float *)0x0) {
        return;
      }
      plVar10 = (longlong *)pdb_140e97000();
      if ((char)plVar10[0xd] != '\x01') {
        plVar10 = (longlong *)pdb_142dd9610(plVar10,0);
        if (plVar10 == (longlong *)0x0) break;
      }
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_110 = plVar10;
        pdb_140e95370(plVar10 + 1,pfStack_370);
LAB_141445650:
        *plStack_110 = *plStack_110 + 1;
        return;
      }
    }
LAB_141445774:
    plVar10 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
    param_2 = param_1;
LAB_141445780:
    plVar10 = (longlong *)pdb_142dd9610(plVar10,0);
  } while (plVar10 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_14144581c:
  pfStack_120 = pfVar24;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,8);
}

