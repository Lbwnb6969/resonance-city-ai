// VA 0x14143f9b0, PDB extent 13924 bytes
// system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_gates::place_brick_steps::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::wall_constructor::WallConstructor::from_curve<system_wall_constructor::construct_gates::place_brick_steps::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
   Extent: 13924 */

void pdb_14143f9b0(ulonglong param_1,ulonglong param_2,undefined4 param_3,float *param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7,longlong param_8,
                  ulonglong param_9,byte param_10,float *param_11,undefined8 param_12,float param_13
                  ,undefined8 *param_14,float param_15,float *param_16,uint param_17,float param_18,
                  uint param_19,float param_20,float param_21,char param_22)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float *pfVar19;
  float *unaff_R12;
  float *unaff_R13;
  float *pfVar20;
  byte bVar21;
  ulonglong unaff_R14;
  float *pfVar22;
  float *pfVar23;
  undefined *puVar24;
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulonglong in_stack_fffffffffffff9d0;
  undefined8 in_stack_fffffffffffff9d8;
  undefined4 uVar59;
  undefined8 uVar58;
  undefined4 uVar60;
  undefined1 auStack_608 [64];
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  byte *pbStack_588;
  float *pfStack_580;
  float *pfStack_578;
  float *pfStack_570;
  undefined1 auStack_568 [16];
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  float *pfStack_540;
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
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  longlong lStack_488;
  byte *pbStack_480;
  ulonglong uStack_478;
  longlong lStack_470;
  byte *pbStack_468;
  float *pfStack_460;
  undefined1 auStack_458 [16];
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  longlong lStack_428;
  ulonglong uStack_420;
  ulonglong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  float *pfStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  longlong lStack_3e8;
  byte *pbStack_3e0;
  ulonglong uStack_3d8;
  undefined *puStack_3d0;
  ulonglong uStack_3c8;
  undefined *puStack_3c0;
  longlong lStack_3b8;
  longlong lStack_3b0;
  char *pcStack_3a8;
  float *pfStack_3a0;
  undefined8 uStack_398;
  longlong lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  float fStack_378;
  float fStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  float *pfStack_360;
  undefined1 auStack_358 [16];
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  float fStack_31c;
  undefined4 uStack_318;
  undefined8 uStack_314;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  float fStack_304;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [16];
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined4 uStack_2c8;
  int iStack_2c4;
  undefined4 uStack_2c0;
  float fStack_2bc;
  int iStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float *pfStack_2a8;
  ulonglong uStack_2a0;
  float *pfStack_298;
  ulonglong uStack_290;
  float *pfStack_288;
  float *pfStack_280;
  ulonglong uStack_278;
  float *pfStack_270;
  longlong lStack_268;
  longlong lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulonglong uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_1fc;
  longlong lStack_1f8;
  float *pfStack_1f0;
  float *pfStack_1e8;
  float *pfStack_1e0;
  float *pfStack_1d8;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  float *pfStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  longlong lStack_190;
  ulonglong uStack_188;
  float *pfStack_180;
  byte *pbStack_178;
  float *pfStack_170;
  ulonglong uStack_168;
  float *pfStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  undefined1 auStack_145 [5];
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float *pfStack_130;
  ulonglong uStack_128;
  undefined *puStack_120;
  float *pfStack_118;
  longlong *plStack_110;
  float fStack_104;
  float *pfStack_100;
  float fStack_f8;
  char cStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  fVar30 = param_13;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_2c0 = param_3;
  uStack_128 = param_2;
  uVar6 = pdb_140e94b40();
  uVar59 = (undefined4)((ulonglong)in_stack_fffffffffffff9d8 >> 0x20);
  pfVar10 = (float *)(ulonglong)uVar6;
  fVar27 = fVar30;
  if ((char)uVar6 == '\0') {
    puVar24 = (undefined *)0x0;
    goto LAB_14143fbdc;
  }
  unaff_R14 = 0x46;
  lVar7 = pdb_14144a0a0(0x46);
  puVar24 = &UNK_14330a148;
  if (lVar7 == 1) {
    if (0x46 < param_2) {
LAB_141442240:
      pdb_142dc8070(&UNK_14330a148,0x46,0);
LAB_141442261:
      pdb_142dc7e2a(4,pfVar10);
LAB_14144226f:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar8 = pdb_14144a0a0(param_2);
    if ((uVar8 & 1) != 0) {
      if (0x46 < param_2 + 2) {
        pdb_142dc8070(&UNK_14330a148,0x46,param_2 + 2,0x46,&UNK_14330a230);
        goto LAB_141442295;
      }
      unaff_R14 = 0x44 - param_2;
      puVar24 = &UNK_14330a14a + param_2;
    }
  }
  puVar15 = &UNK_14330a02f;
  unaff_R12 = (float *)&UNK_143309ff8;
  do {
    bVar21 = puVar15[-1];
    uVar6 = (uint)(char)bVar21;
    if ((char)bVar21 < '\0') {
      bVar2 = puVar15[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar15[-3];
        if ((char)bVar3 < -0x40) {
          pbVar1 = puVar15 + -4;
          puVar15 = puVar15 + -4;
          uVar6 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar15 = puVar15 + -3;
          uVar6 = bVar3 & 0xf;
        }
        uVar6 = bVar2 & 0x3f | uVar6 << 6;
      }
      else {
        puVar15 = puVar15 + -2;
        uVar6 = bVar2 & 0x1f;
      }
      uVar6 = (uint)(bVar21 & 0x3f) | uVar6 << 6;
      if (uVar6 != 0x5c) goto LAB_14143fb34;
LAB_14143fb4e:
      puVar16 = puVar15 + -0x143309ff7;
      if ((undefined *)0x37 < puVar16) {
        pdb_142dc8070(&UNK_143309ff8,0x37,puVar16,0x37,&UNK_14330a1f8);
        goto LAB_141442240;
      }
      unaff_R13 = (float *)(0x37 - (longlong)puVar16);
      unaff_R12 = (float *)(puVar15 + 1);
      goto LAB_14143fb71;
    }
    puVar15 = puVar15 + -1;
    if (uVar6 == 0x5c) goto LAB_14143fb4e;
LAB_14143fb34:
    if (uVar6 == 0x2f) goto LAB_14143fb4e;
  } while (puVar15 != &UNK_143309ff8);
  unaff_R13 = (float *)0x37;
LAB_14143fb71:
  plVar9 = (longlong *)pdb_140e97000();
  if ((char)plVar9[0xd] != '\x01') goto LAB_141442116;
  do {
    if (*plVar9 == 0) {
      *plVar9 = -1;
      uVar59 = 0;
      plStack_110 = plVar9;
      unaff_R14 = pdb_140e94f10(plVar9 + 1,puVar24,unaff_R14,unaff_R12,unaff_R13,1,0);
      *plStack_110 = *plStack_110 + 1;
      puVar24 = (undefined *)0x1;
      uStack_3c8 = unaff_R14;
LAB_14143fbdc:
      fVar30 = param_15;
      uVar8 = *(ulonglong *)(uStack_128 + 0x10);
      puStack_3d0 = puVar24;
      if (uVar8 < 2) {
        puStack_120 = puVar24;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330a02f,0x29,&UNK_14330a058);
      }
      uStack_4c8 = param_5;
      uStack_4d0 = uVar8;
      if (param_5 != uVar8) {
        puStack_120 = puVar24;
        pdb_142dc7fb4(0,&uStack_4c8,&uStack_4d0,0);
        goto LAB_14144226f;
      }
      uStack_4d8 = param_7;
      uStack_4e0 = param_5;
      if (param_7 != param_5) {
        puStack_120 = puVar24;
        pdb_142dc7fb4(0,&uStack_4d8,&uStack_4e0,0);
        goto LAB_14144226f;
      }
      uStack_4e8 = param_9;
      uStack_4f0 = param_5;
      if (param_9 != param_5) {
        puStack_120 = puVar24;
        pdb_142dc7fb4(0,&uStack_4e8,&uStack_4f0,0);
        goto LAB_14144226f;
      }
      fVar26 = *param_4;
      auVar48 = ZEXT416((uint)fVar26);
      uVar8 = param_5 * 4 - 4;
      pfVar11 = param_4;
      if ((uVar8 & 4) == 0) {
        fVar47 = *param_4;
        fVar31 = fVar47;
        if (fVar47 <= fVar26) {
          fVar31 = fVar26;
        }
        auVar48 = ZEXT416(~-(uint)NAN(fVar26) & (uint)fVar31 | -(uint)NAN(fVar26) & (uint)fVar47);
        pfVar11 = param_4 + 1;
        unaff_XMM6 = auVar48;
      }
      if (uVar8 != 0) {
        unaff_XMM6 = auVar48;
        do {
          fVar26 = *pfVar11;
          fVar47 = pfVar11[1];
          fVar56 = unaff_XMM6._0_4_;
          fVar31 = fVar26;
          if (fVar26 <= fVar56) {
            fVar31 = fVar56;
          }
          fVar31 = (float)(~-(uint)NAN(fVar56) & (uint)fVar31 | -(uint)NAN(fVar56) & (uint)fVar26);
          pfVar11 = pfVar11 + 2;
          fVar26 = fVar47;
          if (fVar47 <= fVar31) {
            fVar26 = fVar31;
          }
          unaff_XMM6 = ZEXT416(-(uint)NAN(fVar31) & (uint)fVar47 |
                               ~-(uint)NAN(fVar31) & (uint)fVar26);
        } while (pfVar11 != param_4 + param_5);
      }
      fVar26 = unaff_XMM6._0_4_;
      if ((fVar26 == 0.0) && (!NAN(fVar26))) {
        if ((char)pfVar10 == '\0') {
          return;
        }
        plVar9 = (longlong *)pdb_140e97000();
        if ((char)plVar9[0xd] != '\x01') {
          plVar9 = (longlong *)pdb_142dd9610(plVar9,0);
          if (plVar9 == (longlong *)0x0) break;
        }
        if (*plVar9 == 0) {
          *plVar9 = -1;
          plStack_110 = plVar9;
          pdb_140e95370(plVar9 + 1,unaff_R14);
          goto LAB_141441fe6;
        }
        goto LAB_14144210a;
      }
      fStack_f8 = *(float *)(uStack_128 + 0x30);
      cStack_f2 = *(char *)(param_16 + 5);
      fStack_2bc = fVar27;
      if (cStack_f2 == '\x02') {
        pdb_14007ee60();
        pfVar10 = (float *)pub_1406abab0(8,4);
        if (param_10 == 3) {
          if (pfVar10 == (float *)0x0) goto LAB_1414421b2;
          fVar47 = fVar26 + _DAT_142e3c604 + _DAT_142e3c608;
          fVar26 = _DAT_142e3b1d8 + fVar30;
          fVar27 = fVar26;
          if (fVar26 <= fVar47) {
            fVar27 = fVar47;
          }
          fVar27 = (float)(~-(uint)NAN(fVar47) & (uint)fVar27 | -(uint)NAN(fVar47) & (uint)fVar26);
          unaff_XMM6 = ZEXT416((uint)fVar27);
          *pfVar10 = fVar30;
          pfVar10[1] = fVar27;
          uStack_398 = 2;
        }
        else {
          if (pfVar10 == (float *)0x0) {
            puStack_120 = puVar24;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,8);
          }
          *pfVar10 = fVar30;
          pfVar10[1] = fVar26;
          uStack_398 = 2;
        }
      }
      else {
        fVar27 = *param_16;
        pdb_14007ee60();
        pfVar10 = (float *)pub_1406abab0(0xc,4);
        if (pfVar10 == (float *)0x0) {
          puStack_120 = puVar24;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xc);
        }
        *pfVar10 = fVar30;
        pfVar10[1] = fVar27;
        pfVar10[2] = fVar26;
        uStack_398 = 3;
      }
      puStack_3f0 = puVar24;
      pfStack_3a0 = pfVar10;
      pdb_140846c00(&lStack_470,pfVar10);
      unaff_R13 = pfStack_460;
      if (param_22 == '\0') {
        pfStack_270 = (float *)0x4;
        uStack_1c0 = 0;
      }
      else {
        pfVar10 = (float *)(param_5 * 4);
        pdb_14007ee60();
        pfVar11 = (float *)pub_1406abab0((ulonglong)pfVar10,4);
        fVar31 = _UNK_142e3c61c;
        fVar47 = _UNK_142e3c618;
        fVar26 = _UNK_142e3c614;
        fVar27 = _DAT_142e3c610;
        if (pfVar11 == (float *)0x0) goto LAB_141442261;
        if (7 < param_5) {
          uVar8 = param_5 & 0x1ffffffffffffff8;
          uVar14 = 0;
          do {
            pfVar22 = (float *)((longlong)param_4 + uVar14);
            fVar56 = pfVar22[1];
            fVar28 = pfVar22[2];
            fVar29 = pfVar22[3];
            pfVar19 = (float *)((longlong)param_4 + uVar14 + 0x10);
            fVar32 = *pfVar19;
            fVar55 = pfVar19[1];
            fVar49 = pfVar19[2];
            fVar44 = pfVar19[3];
            pfVar19 = (float *)((longlong)pfVar11 + uVar14);
            *pfVar19 = *pfVar22 + fVar27;
            pfVar19[1] = fVar56 + fVar26;
            pfVar19[2] = fVar28 + fVar47;
            pfVar19[3] = fVar29 + fVar31;
            pfVar22 = (float *)((longlong)pfVar11 + uVar14 + 0x10);
            *pfVar22 = fVar32 + fVar27;
            pfVar22[1] = fVar55 + fVar26;
            pfVar22[2] = fVar49 + fVar47;
            pfVar22[3] = fVar44 + fVar31;
            uVar14 = uVar14 + 0x20;
            fVar56 = _DAT_142e3c620;
            if (((ulonglong)pfVar10 & 0xffffffffffffffe0) == uVar14) goto joined_r0x00014143ff14;
          } while( true );
        }
        uVar8 = 0;
        fVar56 = _DAT_142e3c620;
        do {
          pfVar11[uVar8] = param_4[uVar8] + fVar56;
          uVar8 = uVar8 + 1;
joined_r0x00014143ff14:
        } while (param_5 != uVar8);
        uStack_1c0 = param_5;
        param_4 = pfVar11;
        pfStack_270 = pfVar11;
      }
      unaff_R14 = (ulonglong)param_10;
      in_stack_fffffffffffff9d8 = CONCAT44(uVar59,unaff_XMM6._0_4_);
      in_stack_fffffffffffff9d0 = param_5;
      pdb_140847dd0(&lStack_3e8,pbStack_468,unaff_R13,uStack_128,param_4,param_5,
                    in_stack_fffffffffffff9d8,fStack_f8,cStack_f2 != '\x02');
      uVar12 = pdb_1406d0830(param_12);
      auVar37._0_8_ = pdb_140c2b5b0(uVar12);
      auVar37._8_4_ = (int)((ulonglong)auVar37._0_8_ >> 0x20);
      auVar37._12_4_ = unaff_XMM6._4_4_;
      auVar48._8_8_ = auVar37._8_8_;
      auVar48._0_4_ = (undefined4)auVar37._0_8_;
      auVar48._4_4_ = unaff_XMM6._0_4_;
      auVar48 = divps(_DAT_142e37950,auVar48);
      uStack_368 = auVar48._0_8_;
      *(undefined8 *)(param_1 + 0x10) = 0;
      pdb_14146c0d0(uVar12);
      uVar8 = *(ulonglong *)(param_1 + 0x10);
      uStack_258 = (float *)auStack_145;
      unaff_R12 = param_11;
      bVar21 = param_10;
      if (1 < uVar8) {
        if (uVar8 < 0x15) {
          pdb_141460650(*(undefined8 *)(param_1 + 8),uVar8,1,&uStack_258);
        }
        else {
LAB_141442295:
          bVar21 = (byte)unaff_R14;
          pdb_1414658e0();
        }
      }
      puStack_3c0 = *(undefined **)(param_1 + 8);
      lVar7 = *(longlong *)(param_1 + 0x10);
      pfStack_180 = (float *)0x0;
      pbStack_178 = (byte *)0x8;
      pfStack_170 = (float *)0x0;
      lStack_1f8 = 0;
      pfStack_1f0 = (float *)0x4;
      pfStack_1e8 = (float *)0x0;
      pdb_14007ee60();
      pfVar10 = (float *)pub_1406abab0(0x500,4);
      if (pfVar10 == (float *)0x0) {
        uStack_3f8 = 0;
        pdb_142dc7e2a(4,0x500);
        goto LAB_14144226f;
      }
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_168 = 0x20;
      pfStack_160 = pfVar10;
      fVar27 = (float)pub_142e329c0(fStack_f8 / _DAT_142e3c620);
      uVar14 = 0;
      uVar8 = (longlong)(fVar27 - _DAT_142e36f2c) & (longlong)fVar27 >> 0x3f | (longlong)fVar27;
      if (fVar27 < 0.0) {
        uVar8 = uVar14;
      }
      uVar18 = 0xffffffffffffffff;
      if (fVar27 <= _DAT_142e36f30) {
        uVar18 = uVar8;
      }
      uVar8 = uVar18 * 4 + 4;
      pfVar10 = (float *)(uVar18 + 1);
      if (0x7ffffffffffffffc < uVar8 || (ulonglong)pfVar10 >> 0x3e != 0) {
LAB_141440100:
        pdb_142dc7e2a(uVar14,uVar8);
        goto LAB_14144226f;
      }
      if (uVar8 == 0) {
        pfVar11 = (float *)0x4;
        pfVar10 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar14 = 4;
        pfVar11 = (float *)pub_1406abab0(uVar8,4);
        if (pfVar11 == (float *)0x0) goto LAB_141440100;
      }
      uVar8 = uStack_3d8;
      lStack_1d0 = 0;
      lStack_4f8 = (longlong)unaff_R13 * 0x8ba + (longlong)unaff_R12 * 0x17d32;
      uStack_258 = (float *)&lStack_4f8;
      uStack_250 = &param_13;
      uStack_248 = 0;
      uStack_240 = uStack_3d8;
      pfStack_400 = pfVar10;
      pfStack_1e0 = pfVar10;
      pfStack_1d8 = pfVar11;
      pdb_14017e110(&lStack_488,&uStack_258);
      if (uStack_478 < uVar8) {
        uVar8 = uStack_478;
      }
      fStack_1a4 = (float)unaff_R12;
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
      fVar47 = unaff_XMM6._0_4_;
      plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,_DAT_142e3c620 / fVar47);
      lStack_3b8 = (longlong)unaff_R13 * 0x159 + (longlong)unaff_R12 * 0x154df;
      lStack_3b0 = (longlong)unaff_R13 * 0xdf + (longlong)unaff_R12 * 0x91e;
      lStack_4b0 = (longlong)unaff_R12 * 0x15b3 + (longlong)unaff_R13 * (longlong)unaff_R13 + 0x2a6;
      puVar24 = puStack_3c0 + lVar7 * 0x10;
      fStack_2cc = _DAT_142e36f50 * fVar26;
      iStack_2b8 = (int)unaff_R12 + (int)unaff_R13 * 0x924 + 10;
      fStack_134 = _DAT_142e3c62c / fStack_f8;
      pcStack_3a8 = (char *)*param_14;
      uStack_4a0 = param_14[1];
      lStack_268 = *(longlong *)(uStack_128 + 8);
      uStack_13c = CONCAT31((int3)((uint)iVar43 >> 8),(byte)iVar43 & bVar21 == 2);
      param_4 = (float *)0x0;
      fVar27 = fVar30;
      pbStack_4c0 = pbStack_3e0;
      pbStack_4b8 = pbStack_480;
      fVar30 = _DAT_142e36f28;
      while (uVar14 = uVar8, uVar8 != 0) {
        while( true ) {
          uStack_2a0 = uVar14 - 1;
          param_4 = (float *)(pbStack_4c0 + uStack_2a0 * 0x20);
          uStack_2c8 = *(undefined4 *)(pbStack_4b8 + uVar14 * 4 + -4);
          lStack_500 = uStack_2a0 * 0x96a3dd + lStack_3b8;
          lStack_508 = uStack_2a0 * 0x91fd + lStack_3b0;
          lStack_510 = lStack_4b0 + uVar14 + -1;
          uStack_1c8 = uStack_3d8;
          pfStack_170 = (float *)0x0;
          for (puVar15 = puStack_3c0; pfVar11 = pfStack_170, unaff_R13 = pfStack_1e8,
              puVar15 != puVar24; puVar15 = puVar15 + 0x10) {
            pdb_140deec90(&uStack_368,puVar15,fVar26);
            uStack_258._4_4_ = param_4[4];
            uStack_250._4_4_ = param_4[5];
            uStack_258._0_4_ = param_4[6];
            uStack_250._0_4_ = param_4[7];
            cVar5 = pdb_140deea30(&uStack_258);
            pfVar10 = pfStack_170;
            if (cVar5 != '\0') {
              if (pfStack_170 == pfStack_180) {
                pdb_142d7e8a0(&pfStack_180);
              }
              *(undefined **)(pbStack_178 + (longlong)pfVar10 * 8) = puVar15;
              pfStack_170 = (float *)((longlong)pfVar10 + 1);
            }
            fVar30 = _DAT_142e36f28;
          }
          pfVar10 = (float *)((longlong)pfStack_170 - (longlong)pfStack_1e8);
          fVar27 = _DAT_142e36f3c;
          fVar31 = _DAT_142e3c640;
          fVar56 = _UNK_142e3c644;
          fVar28 = _UNK_142e3c648;
          fVar29 = _UNK_142e3c64c;
          unaff_R12 = pfStack_1f0;
          if (pfStack_1e8 <= pfStack_170 && pfVar10 != (float *)0x0) {
            if ((float *)(lStack_1f8 - (longlong)pfStack_1e8) < pfVar10) {
              pdb_142d7f1b0(&lStack_1f8,pfStack_1e8,pfVar10,4,4);
              pfVar22 = pfStack_1f0 + (longlong)pfStack_1e8;
              fVar30 = _DAT_142e36f28;
              pfVar19 = pfStack_1e8;
            }
            else {
              pfVar22 = pfStack_1f0 + (longlong)pfStack_1e8;
              pfVar19 = pfStack_1e8;
            }
            unaff_R12 = pfStack_1f0;
            if ((float *)0x1 < pfVar10) {
              pfStack_1e8 = pfVar19;
              pfStack_100 = pfStack_1f0;
              pub_142e32780(pfVar22,0);
              pfVar22 = pfStack_100 +
                        (longlong)
                        ((undefined *)((longlong)pfVar11 + (longlong)pfVar19) +
                        (-1 - (longlong)unaff_R13));
              pfVar19 = (float *)((undefined *)((longlong)pfVar19 + (longlong)pfVar10) + -1);
              unaff_R12 = pfStack_100;
            }
            *pfVar22 = 0.0;
            pfVar11 = (float *)((longlong)pfVar19 + 1);
            fVar27 = _DAT_142e36f3c;
            fVar31 = _DAT_142e3c640;
            fVar56 = _UNK_142e3c644;
            fVar28 = _UNK_142e3c648;
            fVar29 = _UNK_142e3c64c;
          }
          pfStack_1e8 = pfVar11;
          _DAT_142e36f3c = fVar27;
          _DAT_142e3c640 = fVar31;
          _UNK_142e3c644 = fVar56;
          _UNK_142e3c648 = fVar28;
          _UNK_142e3c64c = fVar29;
          if ((pfStack_1e8 != (float *)0x0) && (pfStack_170 != (float *)0x0)) {
            lVar7 = (longlong)pfStack_170 * 8;
            lVar13 = (longlong)pfStack_1e8 * 4;
            do {
              lVar13 = lVar13 + -4;
              lVar7 = lVar7 + -8;
              fVar55 = **(float **)(pbStack_178 + lVar7) - fStack_2cc;
              fVar32 = fVar55;
              if (fVar27 <= fVar55) {
                fVar32 = fVar27;
              }
              fVar27 = (float)(~-(uint)NAN(fVar27) & (uint)fVar32 |
                              -(uint)NAN(fVar27) & (uint)fVar55);
              *(float *)((longlong)unaff_R12 + lVar13) = fVar27;
            } while ((lVar7 != 0) && (lVar13 != 0));
          }
          fVar27 = param_4[6];
          fVar32 = param_4[7];
          fVar55 = (fVar32 - fVar27) * fStack_f8;
          if ((fVar55 == 0.0) && (uVar8 = uStack_2a0, !NAN(fVar55))) break;
          fStack_104 = param_4[4];
          fStack_138 = param_4[5];
          bVar25 = uVar14 != uStack_1c8;
          bStack_f1 = param_10 != 1;
          lStack_1d0 = 0;
          pfStack_118 = pfStack_1e8;
          pdb_14007ee60();
          pfVar11 = (float *)pub_1406abab0(4,4);
          if (pfVar11 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,4);
          }
          *pfVar11 = 0.0;
          uStack_368 = (float *)0x1;
          auStack_358._0_8_ = 1;
          pfVar22 = (float *)0x1;
          pfStack_360 = pfVar11;
          if (cStack_f2 == '\x02') {
LAB_141440843:
            pdb_142d89720();
          }
          else {
            lVar7 = 4;
            while (lVar7 != 0x14) {
              pfVar11 = (float *)((longlong)param_16 + lVar7);
              fStack_140 = *(float *)((longlong)param_16 + lVar7 + 4);
              lVar7 = lVar7 + 8;
              lStack_190 = 1;
              fVar49 = *pfVar11;
              while( true ) {
                if ((fVar49 != 0.0) || (NAN(fVar49))) {
                  if (((fVar49 != fVar30) || (NAN(fVar49) || NAN(fVar30))) &&
                     ((fVar27 <= fVar49 && (fVar49 < fVar32)))) {
                    fVar49 = (float)pdb_140de8220();
                    uVar12 = auStack_358._0_8_;
                    if ((float *)auStack_358._0_8_ == uStack_368) {
                      pdb_142d89720();
                    }
                    pfStack_360[uVar12] = fVar49;
                    pfVar22 = (float *)(uVar12 + 1);
                    auStack_358._0_8_ = pfVar22;
                  }
                }
                if (lStack_190 == 2) break;
                lStack_190 = 2;
                fVar49 = fStack_140;
              }
            }
            unaff_R13 = (float *)0x14;
            if (pfVar22 == uStack_368) goto LAB_141440843;
          }
          bStack_f1 = bStack_f1 | bVar25;
          pfStack_360[(longlong)pfVar22] = 1.0;
          lVar7 = (longlong)pfVar22 + 1;
          auStack_358._0_8_ = lVar7;
          if (lVar7 == 0) {
            lStack_260 = 0;
            lStack_390 = 0;
            lVar7 = lStack_390;
          }
          else {
            uStack_388 = pfStack_360 + lVar7;
            lVar7 = 0;
            lStack_260 = 0;
            bVar25 = false;
            pfVar10 = pfStack_360;
            do {
              pfVar11 = pfVar10 + 1;
              fVar49 = *pfVar10;
              if (bVar25) {
                fVar44 = fVar49;
                fVar49 = (float)auStack_2f8._0_4_;
              }
              else {
                if (pfVar11 == uStack_388) break;
                fVar44 = pfVar10[1];
                pfVar11 = pfVar10 + 2;
                pfVar10 = pfVar11;
              }
              uStack_258 = (float *)0x0;
              uStack_250 = (undefined4 *)0x4;
              uStack_248 = 0;
              if (fVar44 <= fVar49) {
                if (pfVar11 == uStack_388) {
                  auStack_2f8 = ZEXT416((uint)fVar44);
                  break;
                }
                while( true ) {
                  fVar50 = *pfVar11;
                  auStack_2f8 = ZEXT416((uint)fVar50);
                  uStack_258 = (float *)0x0;
                  uStack_250 = (undefined4 *)0x4;
                  uStack_248 = 0;
                  if (fVar44 < fVar50) break;
                  pfVar11 = pfVar11 + 1;
                  fVar44 = fVar50;
                  if (pfVar11 == uStack_388) goto joined_r0x000141441e66;
                }
                fVar49 = fVar44;
                fVar44 = fVar50;
                pfVar11 = pfVar11 + 1;
              }
              pfStack_100 = pfVar11;
              uStack_248 = 0;
              uStack_250._4_4_ = 0.0;
              uStack_250._0_4_ = 5.60519e-45;
              uStack_258._4_4_ = 0.0;
              uStack_258._0_4_ = 0.0;
              auStack_2f8 = ZEXT416((uint)fVar44);
              fVar56 = (fVar44 - fVar49) * fVar55;
              fVar31 = (float)pub_142e329c0(fVar56 / _DAT_142e3c620);
              uVar8 = 0;
              if (0.0 <= fVar31) {
                uVar8 = (longlong)(fVar31 - _DAT_142e36f2c) & (longlong)fVar31 >> 0x3f |
                        (longlong)fVar31;
              }
              if (_DAT_142e36f30 < fVar31) {
                uVar8 = 0xffffffffffffffff;
              }
              fVar31 = _DAT_142e3c630;
              if (bStack_f1 == 0) {
                fVar31 = (float)pub_142e329c0(fVar56 / _DAT_142e3c634);
                uVar8 = 0;
                if (0.0 <= fVar31) {
                  uVar8 = (longlong)(fVar31 - _DAT_142e36f2c) & (longlong)fVar31 >> 0x3f |
                          (longlong)fVar31;
                }
                if (_DAT_142e36f30 < fVar31) {
                  uVar8 = 0xffffffffffffffff;
                }
                uVar8 = ((uint)uVar8 & 1) + uVar8;
                fVar31 = _DAT_142e37ad4;
              }
              pdb_140de8bb0(uVar8 + 1,fVar31 / fVar56,&lStack_500,&uStack_258,&UNK_14330a0d0);
              uVar14 = uStack_248;
              fVar29 = _UNK_142e3c64c;
              fVar28 = _UNK_142e3c648;
              fVar56 = _UNK_142e3c644;
              fVar31 = _DAT_142e3c640;
              unaff_R13 = (float *)CONCAT44(uStack_250._4_4_,(float)uStack_250);
              if ((ulonglong)((longlong)pfStack_1e0 - lVar7) < uStack_248) {
                pdb_142d7f1b0(&pfStack_1e0,lVar7,uStack_248,4,4);
                lVar7 = lStack_1d0;
                if (uVar14 < 8) {
LAB_141440af0:
                  uVar18 = 0;
                }
                else {
LAB_141440adf:
                  lVar7 = lStack_1d0;
                  if ((ulonglong)((longlong)pfStack_1d8 + (lStack_1d0 * 4 - (longlong)unaff_R13)) <
                      0x20) goto LAB_141440af0;
                  uVar18 = uVar14 & 0xfffffffffffffff8;
                  lVar7 = lStack_1d0 + uVar18;
                  uVar17 = 0;
                  do {
                    pfVar11 = unaff_R13 + uVar17;
                    fVar44 = pfVar11[1];
                    fVar50 = pfVar11[2];
                    fVar57 = pfVar11[3];
                    pfVar10 = unaff_R13 + uVar17 + 4;
                    auVar45._0_4_ =
                         *pfVar10 * (float)auStack_2f8._0_4_ + (fVar31 - *pfVar10) * fVar49;
                    auVar45._4_4_ =
                         pfVar10[1] * (float)auStack_2f8._0_4_ + (fVar56 - pfVar10[1]) * fVar49;
                    auVar45._8_4_ =
                         pfVar10[2] * (float)auStack_2f8._0_4_ + (fVar28 - pfVar10[2]) * fVar49;
                    auVar45._12_4_ =
                         pfVar10[3] * (float)auStack_2f8._0_4_ + (fVar29 - pfVar10[3]) * fVar49;
                    pfVar10 = pfStack_1d8 + lStack_1d0 + uVar17;
                    *pfVar10 = *pfVar11 * (float)auStack_2f8._0_4_ + (fVar31 - *pfVar11) * fVar49;
                    pfVar10[1] = fVar44 * (float)auStack_2f8._0_4_ + (fVar56 - fVar44) * fVar49;
                    pfVar10[2] = fVar50 * (float)auStack_2f8._0_4_ + (fVar28 - fVar50) * fVar49;
                    pfVar10[3] = fVar57 * (float)auStack_2f8._0_4_ + (fVar29 - fVar57) * fVar49;
                    *(undefined1 (*) [16])(pfStack_1d8 + lStack_1d0 + uVar17 + 4) = auVar45;
                    uVar17 = uVar17 + 8;
                  } while (uVar18 != uVar17);
                  if (uVar14 == uVar18) goto LAB_141440c40;
                }
                uVar17 = uVar18;
                if ((uVar14 & 1) != 0) {
                  pfStack_1d8[lVar7] =
                       unaff_R13[uVar18] * (float)auStack_2f8._0_4_ +
                       (fVar30 - unaff_R13[uVar18]) * fVar49;
                  lVar7 = lVar7 + 1;
                  uVar17 = uVar18 | 1;
                }
                if (uVar14 != (uVar18 | 1)) {
                  lVar13 = 0;
                  do {
                    pfStack_1d8[lVar7 + lVar13] =
                         unaff_R13[uVar17 + lVar13] * (float)auStack_2f8._0_4_ +
                         (fVar30 - unaff_R13[uVar17 + lVar13]) * fVar49;
                    pfStack_1d8[lVar7 + lVar13 + 1] =
                         unaff_R13[uVar17 + lVar13 + 1] * (float)auStack_2f8._0_4_ +
                         (fVar30 - unaff_R13[uVar17 + lVar13 + 1]) * fVar49;
                    lVar13 = lVar13 + 2;
                  } while (uVar14 - uVar17 != lVar13);
                  lVar7 = lVar7 + lVar13;
                }
              }
              else if (uStack_248 != 0) {
                lStack_1d0 = lVar7;
                if (7 < uStack_248) goto LAB_141440adf;
                goto LAB_141440af0;
              }
LAB_141440c40:
              pfVar10 = pfStack_100;
              lStack_1d0 = lVar7;
              if (CONCAT44(uStack_258._4_4_,(float)uStack_258) != 0) {
                pub_1406abac0((byte *)CONCAT44(uStack_250._4_4_,(float)uStack_250),
                              CONCAT44(uStack_258._4_4_,(float)uStack_258) << 2,4);
              }
              lStack_260 = lStack_260 + uVar8;
              bVar25 = true;
            } while (pfVar10 != uStack_388);
          }
joined_r0x000141441e66:
          lStack_390 = lVar7;
          if (uStack_368 != (float *)0x0) {
            pub_1406abac0((byte *)pfStack_360,(longlong)uStack_368 << 2,4);
          }
          fVar55 = fStack_1a4;
          pfStack_1b8 = pfStack_1d8;
          pfStack_280 = pfStack_1d8 + lStack_390;
          if (lStack_390 != 0) {
            uVar8 = lStack_390 * 4 - 4;
            pfVar11 = pfStack_1d8;
            if (0x1b < uVar8) {
              uVar8 = (uVar8 >> 2) + 1;
              uVar14 = uVar8 & 0xfffffffffffffff8;
              pfVar11 = pfStack_1d8 + uVar14;
              uVar18 = 0;
              do {
                pfVar22 = pfStack_1d8 + uVar18;
                fVar49 = pfVar22[1];
                fVar44 = pfVar22[2];
                fVar50 = pfVar22[3];
                pfVar19 = pfStack_1d8 + uVar18 + 4;
                auVar46._0_4_ = *pfVar19 * fVar32 + (fVar31 - *pfVar19) * fVar27;
                auVar46._4_4_ = pfVar19[1] * fVar32 + (fVar56 - pfVar19[1]) * fVar27;
                auVar46._8_4_ = pfVar19[2] * fVar32 + (fVar28 - pfVar19[2]) * fVar27;
                auVar46._12_4_ = pfVar19[3] * fVar32 + (fVar29 - pfVar19[3]) * fVar27;
                pfVar19 = pfStack_1d8 + uVar18;
                *pfVar19 = *pfVar22 * fVar32 + (fVar31 - *pfVar22) * fVar27;
                pfVar19[1] = fVar49 * fVar32 + (fVar56 - fVar49) * fVar27;
                pfVar19[2] = fVar44 * fVar32 + (fVar28 - fVar44) * fVar27;
                pfVar19[3] = fVar50 * fVar32 + (fVar29 - fVar50) * fVar27;
                *(undefined1 (*) [16])(pfStack_1d8 + uVar18 + 4) = auVar46;
                uVar18 = uVar18 + 8;
              } while (uVar14 != uVar18);
              if (uVar8 == uVar14) goto LAB_141440de6;
            }
            do {
              *pfVar11 = *pfVar11 * fVar32 + (fVar30 - *pfVar11) * fVar27;
              pfVar11 = pfVar11 + 1;
            } while (pfVar11 != pfStack_280);
          }
LAB_141440de6:
          fVar31 = _DAT_14300b868;
          fVar30 = _DAT_142e37878;
          auVar38._4_12_ = unaff_XMM6._4_12_;
          auVar38._0_4_ = (fVar47 * fStack_104 * _DAT_142e37878 + fStack_1a4) * _DAT_14300b868;
          fVar28 = (float)pub_142e32b30(auVar38._0_8_);
          fVar56 = _DAT_143309f30;
          fVar28 = fVar28 * _DAT_143309f30;
          fVar29 = (float)pub_142e32bc0();
          auStack_458._0_4_ = fVar47 * fStack_138;
          auStack_458._4_12_ = auVar38._4_12_;
          auVar39._0_4_ = ((float)auStack_458._0_4_ * fVar30 + fVar55) * fVar31;
          auVar39._4_12_ = auVar38._4_12_;
          fVar30 = (float)pub_142e32b30(auVar39._0_8_);
          fVar31 = (float)pub_142e32bc0();
          fStack_1a0 = fVar28 - fVar29;
          fVar28 = (float)pub_142e32b30();
          fVar29 = (float)pub_142e32bc0();
          fStack_19c = fVar30 * fVar56 - fVar31;
          fVar30 = (float)pub_142e32b30();
          fVar31 = (float)pub_142e32bc0();
          pbStack_588 = pbStack_178;
          pfStack_580 = pfStack_170;
          pfStack_538 = pfStack_118;
          lStack_428 = lStack_268;
          uStack_420 = param_5;
          uStack_418 = uStack_128;
          uStack_410 = 0;
          uStack_408 = 0;
          pfStack_540 = unaff_R12;
          pdb_14141de40(&lStack_428);
          fStack_2b4 = (fStack_138 - fStack_104) * fVar47;
          fStack_198 = (fVar28 * fVar56 - fVar29) * _DAT_142e4bfe4;
          fStack_194 = (fVar30 * fVar56 - fVar31) * _DAT_142e4bfe4;
          uVar12 = *(undefined8 *)(param_8 + (uStack_408 & 0xffffffff) * 4);
          fVar31 = (float)((ulonglong)uVar12 >> 0x20) * uStack_408._4_4_;
          fVar56 = fVar31 + (float)uVar12 * (_DAT_142e36f28 - uStack_408._4_4_);
          uVar12 = *(undefined8 *)(param_6 + (uStack_408 & 0xffffffff) * 4);
          fVar30 = (float)((ulonglong)uVar12 >> 0x20) * uStack_408._4_4_;
          uStack_388 = (float *)CONCAT44(fVar30,fVar30 + (float)uVar12 *
                                                         (_DAT_142e36f28 - uStack_408._4_4_));
          uStack_380 = 0;
          iStack_2c4 = (int)uStack_2a0 * 0x54 + iStack_2b8;
          pbStack_4a8 = pbStack_3e0 + 0x1c;
          uStack_188 = 0;
          pfStack_130 = pfStack_1b8;
          pfStack_288 = (float *)0x0;
          unaff_R12 = (float *)0x0;
LAB_141441040:
          uStack_370 = 0;
          uStack_36c = 0;
          fVar30 = (float)uStack_388;
          fStack_378 = fVar56;
          fStack_374 = fVar31;
          if (pfStack_130 != pfStack_280) {
            pfVar11 = pfStack_130 + 1;
            uVar8 = uStack_188 + 1;
            pfVar22 = pfStack_130;
            if (pfStack_288 == (float *)0x0) {
              if (pfVar11 == pfStack_280) {
                pfStack_130 = pfStack_280;
                plVar9 = &uStack_258;
                pfVar11 = (float *)0x0;
                uVar14 = uVar8;
                pfVar19 = pfStack_130;
                pfVar22 = uStack_258;
              }
              else {
                plVar9 = &uStack_368;
                uVar14 = uStack_188 + 2;
                pfVar19 = pfStack_130 + 2;
              }
              pfStack_130 = pfVar19;
              uStack_258._4_4_ = (float)((ulonglong)pfVar22 >> 0x20);
              uStack_258._0_4_ = SUB84(pfVar22,0);
              *plVar9 = (longlong)pfVar11;
              pfStack_298 = uStack_368;
              if (uStack_258 == (float *)0x0) {
                pfStack_288 = (float *)0x0;
                uStack_290 = uVar8;
                uStack_188 = uVar14;
                goto LAB_141441097;
              }
              uStack_290 = uStack_188;
              uStack_188 = uVar8;
              uVar8 = uVar14;
              pfVar11 = pfStack_130;
              pfVar22 = uStack_368;
              pfStack_298 = uStack_258;
            }
            uStack_278 = uStack_290;
            pfStack_2a8 = pfStack_298;
            pfStack_288 = pfStack_298;
            pfStack_518 = pfVar22;
            uVar14 = uStack_188;
            pfStack_130 = pfVar11;
            if (pfStack_298 == (float *)0x0) goto LAB_141441e2f;
            pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,*pfStack_298);
            pfStack_118 = (float *)CONCAT44(pfStack_118._4_4_,*pfVar22);
            pfStack_298 = pfVar22;
            uStack_290 = uStack_188;
            uStack_188 = uVar8;
            auStack_145._1_4_ = pdb_140e02880(&lStack_508);
            fVar27 = (float)pdb_140e02880(&lStack_510);
            fVar28 = (fVar27 + _DAT_142e36f38) * _DAT_142e3c650 + fStack_1ac;
            if (fVar28 <= _DAT_142e37ad4) {
              fVar28 = _DAT_142e37ad4;
            }
            fVar27 = pfStack_118._0_4_ - pfStack_100._0_4_;
            pdb_14141de40(&lStack_428);
            uVar8 = uStack_408 & 0xffffffff;
            fVar57 = _DAT_142e36f28 - uStack_408._4_4_;
            fVar29 = *(float *)(param_8 + uVar8 * 4);
            fVar49 = *(float *)(param_8 + 4 + uVar8 * 4) * uStack_408._4_4_;
            fVar32 = *(float *)(param_6 + uVar8 * 4);
            fVar50 = uStack_408._4_4_ * *(float *)(param_6 + 4 + uVar8 * 4);
            pdb_14141de40(&lStack_428);
            uVar59 = (undefined4)(in_stack_fffffffffffff9d0 >> 0x20);
            uVar60 = (undefined4)((ulonglong)in_stack_fffffffffffff9d8 >> 0x20);
            uVar8 = uStack_408 & 0xffffffff;
            fVar31 = 0.0;
            fVar56 = uStack_408._4_4_ * *(float *)(param_8 + 4 + uVar8 * 4) +
                     *(float *)(param_8 + uVar8 * 4) * (_DAT_142e36f28 - uStack_408._4_4_);
            uVar12 = *(undefined8 *)(param_6 + uVar8 * 4);
            fVar55 = (float)((ulonglong)uVar12 >> 0x20) * uStack_408._4_4_;
            fVar44 = fVar55 + (float)uVar12 * (_DAT_142e36f28 - uStack_408._4_4_);
            uStack_388 = (float *)CONCAT44(fVar55,fVar44);
            uStack_380 = 0;
            fVar55 = fVar44;
            if (fVar30 <= fVar44) {
              fVar55 = fVar30;
            }
            if ((float)(~-(uint)NAN(fVar30) & (uint)fVar55 | -(uint)NAN(fVar30) & (uint)fVar44) <=
                (float)auStack_458._0_4_) {
              fVar49 = fVar29 * fVar57 + fVar49;
              fVar55 = fStack_378 + fVar49 + fVar56;
              fVar29 = fVar56;
              if (fVar55 <= 0.0) {
                fVar49 = _DAT_142e3c654;
                fVar29 = _DAT_142e3c654;
              }
              if (((fVar29 + fVar44 <= (float)auStack_458._0_4_) ||
                  (uVar6 = -(uint)(0.0 < fVar55),
                  fVar30 + (float)(~uVar6 & (uint)_DAT_142e3c654 | (uint)fStack_378 & uVar6) <=
                  (float)auStack_458._0_4_)) ||
                 (fVar57 * fVar32 + fVar50 + fVar49 <= (float)auStack_458._0_4_)) {
                fVar30 = (float)((int)uStack_278 * 0x171 + iStack_2c4);
                unaff_R13 = (float *)(ulonglong)(uint)fVar30;
                uVar8 = *(ulonglong *)param_4;
                uVar14 = uStack_1c8;
                if (uStack_1c8 < uVar8) {
                  uVar14 = uVar8;
                }
                pfVar11 = (float *)(pbStack_4a8 + uVar8 * 0x20);
                do {
                  bVar25 = *(ulonglong *)(param_4 + 2) <= uVar8;
                  if (bVar25) {
                    if (((byte)uStack_13c & (float)auStack_145._1_4_ < _DAT_142e3c658) != 0)
                    goto LAB_141441040;
                    break;
                  }
                  if (uStack_1c8 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar14,uStack_1c8,&UNK_14330a0b8);
                  }
                  pfVar22 = pfVar11 + -1;
                  fVar29 = *pfVar11;
                  if ((*pfVar22 - fVar26 <= pfStack_100._0_4_) &&
                     (pfStack_100._0_4_ <= fVar29 + fVar26)) break;
                  uVar8 = uVar8 + 1;
                  pfVar11 = pfVar11 + 8;
                } while ((pfStack_118._0_4_ < *pfVar22 - fVar26) ||
                        (fVar29 + fVar26 < pfStack_118._0_4_));
                if (bStack_f1 == 0) {
                  if ((uStack_278 & 1) == 0) goto LAB_141441040;
                  bVar25 = false;
                }
                fVar29 = (float)uStack_448;
                if (((byte)unaff_R12 & fStack_2b0 == pfStack_100._0_4_) == 0) {
                  fVar55 = fStack_f8 * pfStack_100._0_4_;
                  fVar32 = (float)pub_142e32b30(fVar55 * _DAT_142e3787c);
                  fVar29 = 0.0;
                  uStack_438 = 0;
                  uStack_430 = 0;
                  if (_DAT_142e37848 <= fStack_104) {
                    pub_142e32b30((fStack_1a0 * (fVar32 * _DAT_142e36f50 + _DAT_142e36f50) +
                                  _DAT_142e36f28) * fVar55 + fStack_198);
                    uStack_438 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da * _DAT_143007994);
                    uStack_430 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                  }
                  if (!bVar25) {
                    fVar29 = (float)pub_142e32b30();
                    fVar29 = fVar29 * _DAT_143007994;
                  }
                }
                fVar49 = fStack_f8 * pfStack_118._0_4_;
                fVar32 = (float)pub_142e32b30(fVar49 * _DAT_142e3787c);
                fVar55 = 0.0;
                uVar51 = 0;
                uVar52 = 0;
                uVar53 = 0;
                if (_DAT_142e37848 <= fStack_104) {
                  uVar12 = pub_142e32b30((fStack_1a0 * (fVar32 * _DAT_142e36f50 + _DAT_142e36f50) +
                                         _DAT_142e36f28) * fVar49 + fStack_198);
                  uVar51 = (undefined4)((ulonglong)uVar12 >> 0x20);
                  uVar52 = (undefined4)extraout_XMM0_Qb;
                  uVar53 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
                  fVar55 = (float)uVar12 * _DAT_143007994;
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
                uStack_308 = (float)uStack_438;
                uStack_300 = CONCAT44(fVar32,fVar29);
                uStack_448 = CONCAT44(uVar42,fVar32);
                uStack_440 = CONCAT44(uVar41,uVar40);
                if (bStack_f1 == 0) {
                  fVar29 = fVar29 * _DAT_142e3c660 + _DAT_142e3c660;
                  fVar32 = fVar32 * _UNK_142e3c664 + _UNK_142e3c664;
                  uStack_300 = CONCAT44(fVar32,fVar29);
                }
                fStack_2dc = pfStack_100._0_4_;
                fStack_2d8 = fStack_104;
                fStack_2d4 = pfStack_118._0_4_;
                fStack_2d0 = fStack_138;
                fStack_378 = fVar55;
                fStack_374 = (float)uVar51;
                uStack_370 = uVar52;
                uStack_36c = uVar53;
                fStack_304 = fVar55;
                if (0.0 < fStack_2bc) {
                  uVar58 = CONCAT44(uVar60,uStack_2c8);
                  uVar12 = CONCAT44(uVar59,fStack_134);
                  pdb_140846800(&fStack_2dc,uStack_278,pfStack_1b8,lStack_390,lStack_260,uVar12,
                                uVar58);
                  uVar59 = (undefined4)((ulonglong)uVar12 >> 0x20);
                  uVar60 = (undefined4)((ulonglong)uVar58 >> 0x20);
                }
                if (uStack_150 != 0) {
                  uStack_150 = 0;
                }
                uStack_158 = 0;
                uStack_258._0_4_ = fStack_2dc;
                uStack_258._4_4_ = fStack_2d8;
                uStack_250._0_4_ = fStack_2d4;
                uStack_250._4_4_ = fStack_2d0;
                uStack_248 = CONCAT44(fStack_304,uStack_308);
                uStack_240 = uStack_300;
                if (uStack_168 == 0) {
                  pdb_140848dc0(&uStack_168);
                }
                else {
                  uStack_150 = 0;
                }
                uVar8 = 0;
                if (uStack_168 <= uStack_158 + uStack_150) {
                  uVar8 = uStack_168;
                }
                lVar7 = (uStack_158 + uStack_150) - uVar8;
                *(ulonglong *)(pfStack_160 + lVar7 * 10 + 4) = uStack_248;
                *(ulonglong *)(pfStack_160 + lVar7 * 10 + 4 + 2) = uStack_240;
                *(ulonglong *)(pfStack_160 + lVar7 * 10) =
                     CONCAT44(uStack_258._4_4_,(float)uStack_258);
                *(ulonglong *)(pfStack_160 + lVar7 * 10 + 2) =
                     CONCAT44(uStack_250._4_4_,(float)uStack_250);
                pfStack_160[lVar7 * 10 + 8] = fVar30;
                *(undefined2 *)(pfStack_160 + lVar7 * 10 + 9) = 0;
                uStack_258._0_4_ = fStack_2dc;
                uStack_258._4_4_ = fStack_2d8;
                uStack_250._0_4_ = fStack_2d4;
                uStack_250._4_4_ = fStack_2d0;
                in_stack_fffffffffffff9d8 = CONCAT44(uVar60,plStack_110._0_4_);
                in_stack_fffffffffffff9d0 = CONCAT44(uVar59,fVar26);
                uStack_150 = uStack_150 + 1;
                cVar5 = pdb_140815be0(&pbStack_588,&pfStack_540,pbStack_178,pfStack_170,&uStack_258,
                                      in_stack_fffffffffffff9d0,in_stack_fffffffffffff9d8,
                                      &uStack_168);
                if (cVar5 != '\0') {
                  fVar55 = fVar32;
                  if (fVar32 <= fVar29) {
                    fVar55 = fVar29;
                  }
                  fVar49 = fStack_378;
                  if ((float)uStack_438 <= fStack_378) {
                    fVar49 = (float)uStack_438;
                  }
                  fVar29 = ((float)(~-(uint)NAN(fVar29) & (uint)fVar55 |
                                   -(uint)NAN(fVar29) & (uint)fVar32) -
                           (float)(~-(uint)NAN((float)uStack_438) & (uint)fVar49 |
                                  -(uint)NAN((float)uStack_438) & (uint)fStack_378)) + fStack_2b4;
                  fVar32 = _DAT_142e36f28 - fVar29 / fStack_2b4;
                  if (bStack_f1 == 0) {
                    fVar32 = 0.0;
                  }
                  else {
                    fVar32 = fVar32 * _DAT_142e3c670 + (_DAT_142e36f28 - fVar32) * _DAT_142e3798c;
                  }
                  if ((_DAT_142e3c620 < fVar29) && ((float)auStack_145._1_4_ < fVar32)) {
                    if (uStack_150 != 0) {
                      uStack_150 = 0;
                    }
                    uStack_158 = 0;
                    pdb_1408469b0((float)auStack_145._1_4_ / _DAT_142e3798c,&fStack_2dc,&uStack_308,
                                  fVar30,&uStack_168);
                  }
                }
                if (((byte)unaff_R12 & fStack_2ac == pfStack_100._0_4_) == 0) {
                  uVar6 = pdb_1413f9030(uStack_128);
                  uVar12 = *(undefined8 *)(lStack_268 + (ulonglong)uVar6 * 8);
                  uVar58 = *(undefined8 *)(lStack_268 + 8 + (ulonglong)uVar6 * 8);
                  fStack_498 = extraout_XMM0_Da_01 * (float)uVar58 +
                               (_DAT_142e36f28 - extraout_XMM0_Da_01) * (float)uVar12;
                  fStack_494 = extraout_XMM0_Da_01 * (float)((ulonglong)uVar58 >> 0x20) +
                               (_DAT_142e36f28 - extraout_XMM0_Da_01) *
                               (float)((ulonglong)uVar12 >> 0x20);
                  fStack_490 = extraout_XMM0_Dc_00 * 0.0 + 0.0;
                  fStack_48c = extraout_XMM0_Dc_00 * 0.0 + 0.0;
                }
                uVar6 = pdb_1413f9030(uStack_128);
                uVar12 = *(undefined8 *)(lStack_268 + (ulonglong)uVar6 * 8);
                uVar58 = *(undefined8 *)(lStack_268 + 8 + (ulonglong)uVar6 * 8);
                fVar55 = extraout_XMM0_Da_02 * (float)uVar58 +
                         (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)uVar12;
                fVar44 = extraout_XMM0_Da_02 * (float)((ulonglong)uVar58 >> 0x20) +
                         (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)((ulonglong)uVar12 >> 0x20)
                ;
                fVar49 = fVar55 - fStack_498;
                fVar30 = fVar44 - fStack_494;
                fVar50 = _DAT_142e36f28 / SQRT(fVar30 * fVar30 + fVar49 * fVar49);
                fVar49 = fVar50 * fVar49;
                fVar50 = fVar50 * fVar30;
                uStack_520 = CONCAT44(fVar50,fVar49);
                pdb_140df4520(&uStack_258,&uStack_520);
                fVar32 = (float)uStack_250;
                fVar29 = uStack_258._4_4_;
                fVar30 = (float)uStack_258;
                uStack_368 = (float *)CONCAT44(fVar49,(uint)fVar50 ^ _DAT_142e37820);
                pdb_140df4520();
                if (uStack_150 == 0) {
                  lVar7 = 0;
                  uVar8 = 0;
                  lVar13 = 0;
                }
                else {
                  uVar8 = 0;
                  if (uStack_168 <= uStack_158) {
                    uVar8 = uStack_168;
                  }
                  lVar7 = uStack_158 - uVar8;
                  lVar13 = uStack_150 - (uStack_168 - lVar7);
                  uVar8 = uStack_168;
                  if (uStack_150 < uStack_168 - lVar7 || lVar13 == 0) {
                    uVar8 = uStack_150 + lVar7;
                    lVar13 = 0;
                  }
                }
                fVar49 = _DAT_142e36f28 / fVar27;
                pfVar10 = pfStack_160 + lVar7 * 10;
                pfVar11 = pfStack_160 + uVar8 * 10;
                fVar50 = fVar28 * (float)uStack_258;
                fVar57 = fVar28 * uStack_258._4_4_;
                fVar54 = fVar28 * (float)uStack_250;
                fVar28 = fVar28 * (float)uStack_250;
                pfVar22 = pfStack_160 + lVar13 * 10;
                unaff_R13 = pfStack_160;
LAB_141441b60:
                pfVar19 = pfVar22;
                pfVar20 = pfVar10;
                pfVar23 = unaff_R13;
                if ((pfVar10 != pfVar11) ||
                   (pfVar19 = pfVar10, pfVar11 = pfVar22, pfVar20 = unaff_R13, pfVar23 = pfVar10,
                   unaff_R13 != pfVar22)) {
                  fVar33 = (float)pdb_140deec10(pfVar20);
                  fVar34 = (float)pdb_140deec50(pfVar20);
                  fVar35 = (float)pdb_140deec20(pfVar20);
                  pfVar10 = pfVar20 + 10;
                  pfVar22 = pfVar19;
                  unaff_R13 = pfVar23;
                  if ((0.0 < fVar33) &&
                     ((0.0 < fVar34 && (fVar33 = fVar33 * fStack_f8, _DAT_142e37840 <= fVar33)))) {
                    fVar27 = (fVar35 - pfStack_100._0_4_) * fVar49;
                    uStack_368 = (float *)CONCAT44(fVar27 * fVar44 +
                                                   (_DAT_142e36f28 - fVar27) * fStack_494,
                                                   fVar27 * fVar55 +
                                                   (_DAT_142e36f28 - fVar27) * fStack_498);
                    pdb_140df4540(&uStack_258);
                    fVar35 = (float)uStack_250;
                    fVar27 = (float)uStack_258;
                    fVar34 = fVar34 * fVar47;
                    fVar36 = uStack_258._4_4_;
                    if (bStack_f1 == 0) {
                      if (fVar33 < _DAT_142e3c674) goto LAB_141441b60;
                      if (fVar33 < fVar34) {
                        fVar36 = uStack_258._4_4_ + (fVar34 - fVar33) * _DAT_142e36f38;
                        fVar34 = fVar33;
                      }
                    }
                    if (cStack_f2 != '\x02') {
                      uStack_248 = *(ulonglong *)(param_16 + 4);
                      uStack_258._0_4_ = (float)*(undefined8 *)param_16;
                      uStack_258._4_4_ = (float)((ulonglong)*(undefined8 *)param_16 >> 0x20);
                      uStack_250._0_4_ = (float)*(undefined8 *)(param_16 + 2);
                      uStack_250._4_4_ = (float)((ulonglong)*(undefined8 *)(param_16 + 2) >> 0x20);
                      pdb_1408ff980((longlong)&uStack_248 + 4);
                    }
                    fVar33 = fVar33 + fStack_1a8;
                    fStack_5c8 = fVar33 * fVar30;
                    fStack_5c4 = fVar33 * fVar29;
                    fStack_5c0 = fVar33 * fVar32;
                    fStack_5bc = fVar33 * fVar32;
                    fStack_5b8 = fVar34 * _DAT_142e378e0;
                    fStack_5b4 = fVar34 * _UNK_142e378e4;
                    fStack_5b0 = fVar34 * _UNK_142e378e8;
                    fStack_5ac = fVar34 * _UNK_142e378ec;
                    fStack_598 = fVar27;
                    fStack_590 = fVar35;
                    fStack_58c = fVar35;
                    fStack_5a8 = fVar50;
                    fStack_5a4 = fVar57;
                    fStack_5a0 = fVar54;
                    fStack_59c = fVar28;
                    fStack_594 = fVar36;
                    pdb_140e07fe0(&uStack_258);
                    fVar34 = pfVar20[8];
                    pfStack_578 = (float *)CONCAT44(uStack_258._4_4_,(float)uStack_258);
                    pfStack_570 = (float *)CONCAT44(uStack_250._4_4_,(float)uStack_250);
                    auStack_568._8_8_ = uStack_240;
                    auStack_568._0_8_ = uStack_248;
                    uStack_558 = uStack_238;
                    uStack_554 = uStack_234;
                    uStack_550 = uStack_230;
                    uStack_54c = uStack_22c;
                    if (*pcStack_3a8 == '\0') {
                      pdb_140951920(&uStack_258);
                      uStack_348 = uStack_558;
                      uStack_344 = uStack_554;
                      uStack_340 = uStack_550;
                      uStack_33c = uStack_54c;
                      auStack_358 = auStack_568;
                      uStack_368 = pfStack_578;
                      pfStack_360 = pfStack_570;
                      uStack_338 = uStack_228;
                      uStack_330 = uStack_220;
                      uStack_320 = uStack_210;
                      uStack_328 = uStack_218;
                      uStack_318 = uStack_2c0;
                      uStack_314 = 0;
                      uStack_30c = uStack_1fc;
                      fStack_31c = fVar34;
                      pdb_14094c790(auStack_608,&uStack_368);
                      cVar5 = pdb_1413f66a0(uStack_4a0);
                      if (cVar5 != '\0') {
                        *pcStack_3a8 = '\x01';
                      }
                    }
                  }
                  goto LAB_141441b60;
                }
                unaff_R12 = (float *)CONCAT71((int7)((ulonglong)pfVar10 >> 8),1);
                fStack_2b0 = pfStack_118._0_4_;
                uStack_438 = CONCAT44(fStack_374,fStack_378);
                uStack_430 = CONCAT44(uStack_36c,uStack_370);
                fStack_498 = fVar55;
                fStack_494 = fVar44;
                fStack_490 = extraout_XMM0_Dc_01 * 0.0 + 0.0;
                fStack_48c = extraout_XMM0_Dc_01 * 0.0 + 0.0;
                fStack_2ac = fStack_2b0;
              }
            }
            goto LAB_141441040;
          }
          pfStack_130 = pfStack_280;
LAB_141441097:
          pfStack_2a8 = (float *)0x0;
          pfVar22 = pfStack_298;
          uVar14 = uStack_290;
          uVar8 = uStack_188;
LAB_141441e2f:
          uStack_188 = uVar8;
          uStack_290 = uVar14;
          pfStack_298 = pfVar22;
          uVar14 = uStack_2a0;
          fVar30 = _DAT_142e36f28;
          if (uStack_2a0 == 0) {
            param_4 = (float *)0x0;
            goto LAB_141441e71;
          }
        }
      }
LAB_141441e71:
      unaff_R14 = 0;
      if (lStack_488 != 0) {
        pub_1406abac0(pbStack_480,lStack_488 << 2,4);
      }
      uVar12 = uStack_398;
      if (pfStack_1e0 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_1d8,(longlong)pfStack_1e0 << 2,4);
      }
      if (uStack_168 != 0) {
        pub_1406abac0((byte *)pfStack_160,uStack_168 * 0x28,4);
      }
      if (lStack_1f8 != 0) {
        pub_1406abac0((byte *)pfStack_1f0,lStack_1f8 << 2,4);
      }
      if (pfStack_180 != (float *)0x0) {
        pub_1406abac0(pbStack_178,(longlong)pfStack_180 << 3,8);
      }
      if (lStack_3e8 != 0) {
        pub_1406abac0(pbStack_3e0,lStack_3e8 << 5,8);
      }
      if (uStack_1c0 != 0) {
        pub_1406abac0((byte *)pfStack_270,uStack_1c0 << 2,4);
      }
      if (lStack_470 != 0) {
        pub_1406abac0(pbStack_468,lStack_470 << 2,4);
      }
      param_1 = (ulonglong)(uint)((int)uVar12 << 2);
      pub_1406abac0((byte *)pfStack_3a0,param_1,4);
      if (puStack_3d0 == (undefined *)0x0) {
        return;
      }
      plVar9 = (longlong *)pdb_140e97000();
      if ((char)plVar9[0xd] != '\x01') {
        plVar9 = (longlong *)pdb_142dd9610(plVar9,0);
        if (plVar9 == (longlong *)0x0) break;
      }
      if (*plVar9 == 0) {
        *plVar9 = -1;
        plStack_110 = plVar9;
        pdb_140e95370(plVar9 + 1,uStack_3c8);
LAB_141441fe6:
        *plStack_110 = *plStack_110 + 1;
        return;
      }
    }
LAB_14144210a:
    plVar9 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_141442116:
    plVar9 = (longlong *)pdb_142dd9610(plVar9,0);
  } while (plVar9 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_1414421b2:
  puStack_120 = puVar24;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,8);
}

