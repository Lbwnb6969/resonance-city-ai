// VA 0x14084e760, PDB extent 18535 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::assemble_wooden_rope_bridge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014300c73e) overlaps instruction at (ram,0x00014300c73c)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_rope_bridge::assemble_wooden_rope_bridge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_rope_bridge.rs
   Extent: 18535 */

void pdb_14084e760(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6,char param_7,float *******param_8,
                  float *******param_9,longlong param_10,float *******param_11,longlong param_12,
                  float *******param_13,float *param_14,float *******param_15,undefined8 param_16,
                  undefined8 param_17)

{
  float *pfVar1;
  int iVar2;
  float *****pppppfVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  float *******pppppppfVar18;
  float *pfVar19;
  byte *pbVar20;
  float *******pppppppfVar21;
  ulonglong uVar23;
  longlong lVar24;
  float *******pppppppfVar25;
  float *******pppppppfVar26;
  longlong lVar27;
  float *******pppppppfVar28;
  ulonglong uVar29;
  longlong lVar30;
  byte *pbVar31;
  float *******in_R11;
  undefined8 *puVar32;
  float *******pppppppfVar33;
  ulonglong uVar34;
  longlong unaff_R15;
  ulonglong uVar35;
  float fVar36;
  float extraout_XMM0_Da;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  int iStack_5c8;
  undefined1 auStack_5c4 [16];
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float afStack_598 [4];
  float fStack_588;
  float fStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  float fStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [16];
  float *******pppppppfStack_4f8;
  float *pfStack_4f0;
  undefined8 uStack_4e8;
  float *******pppppppfStack_4e0;
  float *******pppppppfStack_4d8;
  ulonglong uStack_4d0;
  longlong lStack_4c8;
  float *pfStack_4c0;
  longlong lStack_4b8;
  float *******pppppppfStack_4b0;
  float *******pppppppfStack_4a8;
  undefined4 uStack_4a0;
  float *******pppppppfStack_49c;
  float fStack_494;
  float fStack_490;
  float *******pppppppfStack_48c;
  float fStack_484;
  longlong lStack_480;
  byte *pbStack_478;
  float *******pppppppfStack_470;
  longlong lStack_468;
  byte *pbStack_460;
  float *******pppppppfStack_458;
  undefined8 uStack_450;
  float fStack_448;
  float *pfStack_440;
  float fStack_438;
  float *******pppppppfStack_430;
  float *******pppppppfStack_428;
  float *******pppppppfStack_420;
  float *******pppppppfStack_418;
  undefined8 uStack_410;
  float fStack_408;
  undefined4 uStack_404;
  float *******pppppppfStack_400;
  float *pfStack_3f8;
  float fStack_3f0;
  int iStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float afStack_3dc [5];
  float *******pppppppfStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  float *******pppppppfStack_3b0;
  undefined8 uStack_3a8;
  float *******pppppppfStack_3a0;
  float *******pppppppfStack_398;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float *******pppppppfStack_370;
  float *******pppppppfStack_368;
  float *******pppppppfStack_360;
  undefined1 auStack_358 [24];
  undefined4 uStack_340;
  float fStack_33c;
  float *******pppppppfStack_338;
  float *******pppppppfStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  undefined1 auStack_318 [16];
  float fStack_308;
  undefined1 auStack_304 [8];
  float fStack_2fc;
  uint uStack_2f8;
  undefined8 uStack_2f4;
  float fStack_2ec;
  float *******pppppppfStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  float *******pppppppfStack_2a0;
  undefined8 uStack_298;
  float fStack_290;
  float fStack_28c;
  byte *pbStack_280;
  float *******pppppppfStack_278;
  byte *pbStack_270;
  float *******pppppppfStack_268;
  float *pfStack_260;
  float *******pppppppfStack_258;
  float *******pppppppfStack_250;
  float *pfStack_248;
  float *******pppppppfStack_240;
  ulonglong uStack_238;
  float *******pppppppfStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  float *******pppppppfStack_200;
  float *******pppppppfStack_1f8;
  float *******pppppppfStack_1f0;
  longlong *plStack_1e8;
  float *******pppppppfStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  float *******pppppppfStack_1c0;
  byte *pbStack_1b8;
  float *******pppppppfStack_1b0;
  byte *pbStack_1a8;
  float *******pppppppfStack_1a0;
  byte *pbStack_198;
  float *******pppppppfStack_190;
  float *******pppppppfStack_188;
  byte *pbStack_180;
  float *******pppppppfStack_178;
  float *******pppppppfStack_170;
  float *******pppppppfStack_168;
  float *******pppppppfStack_160;
  float *******pppppppfStack_158;
  float *******apppppppfStack_150 [2];
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float *******pppppppfStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float *******pppppppfStack_118;
  float *******pppppppfStack_110;
  undefined1 uStack_102;
  undefined1 uStack_101;
  float *******pppppppfStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  char *pcVar22;
  undefined8 extraout_XMM0_Qb_00;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_120 = param_4;
  uStack_11c = param_3;
  if (param_13 < (float *******)0x2) {
    return;
  }
  uStack_410._0_4_ = SUB84(param_13,0);
  uStack_410._4_4_ = (float)((ulonglong)param_13 >> 0x20);
  pppppppfStack_4f8 = param_15;
  uStack_4e8 = param_2;
  if (param_13 != param_15) {
    pdb_142dc7fb4(0,&uStack_410,&pppppppfStack_4f8,0);
code_r0x00014085136a:
    uStack_102 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300c3a8);
  }
  uVar34 = (ulonglong)(param_6 < 2);
  fVar43 = _DAT_142e37ad0;
  if (param_6 >= 2) {
    fVar43 = 0.0;
  }
  plStack_1e8 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_6) {
  case 0:
    uStack_238 = pdb_140c017b0(param_3,param_4);
    pppppppfStack_230 = (float *******)0x2;
    auStack_358._0_16_ = ZEXT816(0);
    if (param_7 == '\0') {
      auStack_218 = ZEXT816(0);
      goto code_r0x00014084e9d8;
    }
    auStack_218 = ZEXT816(0);
    fVar45 = _UNK_14300c298;
    goto code_r0x00014084e9cc;
  case 1:
    uStack_238 = pdb_140c017b0(param_3,param_4);
    auStack_218 = ZEXT416(_UNK_14300c29c);
    auStack_358._0_16_ = ZEXT416(_DAT_14300bbe0);
    fVar45 = _UNK_14300c298;
    goto joined_r0x00014084e976;
  case 2:
    fVar45 = _DAT_142e36f50;
    uVar16 = _DAT_14300c290;
    break;
  case 3:
    fVar45 = _DAT_142e36f28;
    uVar16 = _DAT_14300c294;
    break;
  case 6:
  default:
    bVar15 = (byte)(&UNK_14300c738 + *(int *)(&UNK_14300c738 + (ulonglong)param_6 * 4)) &
             (&stack0xfffffffffd841c44)[unaff_R15 * 8];
    pcVar22 = (char *)CONCAT71((int7)((ulonglong)
                                      (&UNK_14300c738 +
                                      *(int *)(&UNK_14300c738 + (ulonglong)param_6 * 4)) >> 8),
                               bVar15);
    afStack_598[uVar34 * 2] = (float)((uint)afStack_598[uVar34 * 2] & (uint)pcVar22);
    *pcVar22 = *pcVar22 + bVar15;
    *pcVar22 = *pcVar22 + bVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  auStack_218 = ZEXT416(uVar16);
  auStack_358._0_16_ = ZEXT416((uint)fVar45);
  uStack_238 = pdb_140c017b0(param_3,param_4);
  fVar45 = fVar43;
joined_r0x00014084e976:
  pppppppfStack_230 = (float *******)0x2;
  if (param_7 != '\0') {
code_r0x00014084e9cc:
    pppppppfStack_230 = (float *******)0x1;
    fVar43 = fVar45;
  }
code_r0x00014084e9d8:
  fVar12 = _DAT_143007994;
  fVar11 = _DAT_142e36f28;
  uStack_340 = *(undefined4 *)(&UNK_14300c288 + uVar34 * 4);
  fVar45 = 0.0;
  fVar43 = _UNK_14300c2a0 - fVar43;
  uStack_4d0 = (longlong)param_13 * 0xc;
  pfStack_4f0 = param_14 + (longlong)param_13 + -1;
  pppppppfStack_4a8 = (float *******)((longlong)param_13 - 1);
  fStack_33c = _DAT_142e36f28 / (float)(longlong)pppppppfStack_4a8;
  lStack_4c8 = param_12 + uStack_4d0;
  pfStack_4c0 = (float *)((longlong)param_8 + (longlong)param_9 * 4);
  if (param_13 <= param_9) {
    param_9 = param_13;
  }
  lStack_4b8 = param_10 + (longlong)param_11 * 8;
  pppppppfStack_4b0 = param_9;
  if (param_11 < param_9) {
    pppppppfStack_4b0 = param_11;
  }
  fVar46 = 0.0;
  fStack_588 = (float)auStack_218._0_4_ + 0.0;
  fStack_584 = fStack_588 * 0.0;
  fVar53 = (float)auStack_358._0_4_ * _DAT_142e378e0;
  fVar55 = (float)auStack_358._0_4_ * _UNK_142e378e4;
  fStack_5a0 = (float)auStack_358._8_4_ * _UNK_142e378e8;
  fStack_59c = (float)auStack_358._8_4_ * _UNK_142e378ec;
  fStack_568 = fVar43 * 0.0;
  uStack_574 = auStack_218._4_4_;
  uStack_570 = auStack_218._8_4_;
  uStack_56c = auStack_218._12_4_;
  uStack_580 = auStack_218._4_4_;
  uStack_57c = auStack_218._4_4_;
  afStack_598[0] = (float)auStack_218._0_4_;
  afStack_598[1] = (float)auStack_218._0_4_;
  afStack_598[2] = (float)auStack_218._8_4_;
  afStack_598[3] = (float)auStack_218._8_4_;
  auStack_518 = ZEXT416((uint)fStack_568);
  auStack_508 = ZEXT416((uint)fVar43);
  uStack_528 = CONCAT44(fVar43,fStack_568);
  uStack_520 = 0;
  fStack_538 = (float)auStack_358._0_4_;
  fStack_534 = (float)auStack_358._0_4_;
  fStack_530 = (float)auStack_358._0_4_;
  fStack_52c = (float)auStack_358._0_4_;
  pppppppfVar26 = (float *******)0x0;
  fVar42 = fVar53;
  fVar41 = fVar53;
  fStack_5a8 = fVar53;
  fStack_5a4 = fVar55;
  fStack_578 = fStack_584;
  fStack_564 = fStack_568;
  fStack_560 = fStack_568;
  fStack_55c = fStack_568;
  fStack_558 = fVar43;
  fStack_554 = fVar43;
  fStack_550 = fVar43;
  fStack_54c = fVar43;
  fStack_548 = fVar53;
  fStack_544 = fVar53;
  fStack_540 = fVar53;
  fStack_53c = fVar53;
  pppppppfStack_4d8 = param_9;
  if (pppppppfStack_230 == (float *******)0x0) {
    return;
  }
  do {
    if (param_7 == '\0') {
      pppppppfStack_200 = (float *******)CONCAT44(pppppppfStack_200._4_4_,uStack_340);
      pppppppfStack_1a0 = (float *******)((ulonglong)pppppppfStack_1a0 & 0xffffffff00000000);
      pppppppfStack_2e8 = (float *******)0x0;
      fStack_308 = fStack_33c;
      uStack_410._0_4_ = (float)param_12;
      uStack_410._4_4_ = (float)((ulonglong)param_12 >> 0x20);
      fStack_408 = (float)lStack_4c8;
      uStack_404 = (undefined4)((ulonglong)lStack_4c8 >> 0x20);
      pppppppfStack_400 = param_8;
      pfStack_3f8 = pfStack_4c0;
      fStack_3f0 = 0.0;
      iStack_3ec = 0;
      fStack_3e8 = SUB84(pppppppfStack_4d8,0);
      fStack_3e4 = (float)((ulonglong)pppppppfStack_4d8 >> 0x20);
      fStack_3e0 = (float)param_10;
      afStack_3dc[0] = (float)((ulonglong)param_10 >> 0x20);
      afStack_3dc[1] = (float)lStack_4b8;
      afStack_3dc[2] = (float)((ulonglong)lStack_4b8 >> 0x20);
      afStack_3dc[3] = 0.0;
      afStack_3dc[4] = 0.0;
      pppppppfStack_3c8 = pppppppfStack_4b0;
      uStack_3c0 = 0;
      uStack_3b8 = (float *******)&pppppppfStack_200;
      pppppppfStack_3b0 = (float *******)&pppppppfStack_2e8;
      uStack_3a8 = &fStack_308;
      pppppppfStack_3a0 = (float *******)&pppppppfStack_160;
      pppppppfStack_398 = (float *******)&pppppppfStack_1a0;
      pppppppfStack_160 = pppppppfVar26;
      fVar36 = (float)pdb_14149a300(&pppppppfStack_370,&uStack_410);
      uStack_138 = pppppppfStack_368;
      pppppppfStack_100 = pppppppfStack_360;
      uStack_1d8 = (float *******)((longlong)pppppppfStack_360 - 1);
    }
    else {
      pdb_14007ee60();
      uVar34 = uStack_4d0;
      pppppppfVar18 = (float *******)pub_1406abab0(uStack_4d0,4);
      if (pppppppfVar18 == (float *******)0x0) {
        pdb_142dc7e2a(4,uVar34);
code_r0x00014085161d:
        pppppppfStack_178 = pppppppfStack_110;
        pbStack_180 = pbStack_1a8;
        pppppppfStack_188 = pppppppfStack_128;
        pppppppfStack_170 = in_R11;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_14300c6a8);
      }
      pppppppfStack_370 = param_13;
      pppppppfStack_368 = pppppppfVar18;
      uStack_138 = pppppppfVar18;
      fVar36 = (float)pub_142e32760(pppppppfVar18,param_12,uVar34);
      pppppppfStack_360 = param_13;
      pppppppfStack_100 = param_13;
      uStack_1d8 = pppppppfStack_4a8;
    }
    pppppppfStack_4e0 = (float *******)((longlong)pppppppfVar26 + 1);
    fStack_308 = 0.0;
    uStack_2f8 = 0;
    pppppppfStack_158 = (float *******)0x2;
    apppppppfStack_150[0] = (float *******)0x0;
    apppppppfStack_150[1] = uStack_1d8;
    lStack_140 = 0;
    lVar24 = 0;
    pppppppfVar26 = (float *******)0x0;
    pppppppfStack_360 = pppppppfStack_100;
code_r0x00014084ed5a:
    pppppppfVar18 = pppppppfStack_100;
    puVar32 = (undefined8 *)(auStack_304 + lVar24 * 0x10 + 4);
    for (lVar27 = 0; (longlong)pppppppfVar26 + lVar27 + 1 != 3; lVar27 = lVar27 + 1) {
      pppppppfVar25 = apppppppfStack_150[(longlong)pppppppfVar26 + lVar27];
      lVar30 = lVar24 + lVar27 + 1;
      lStack_140 = lVar30;
      if (param_6 != 0) {
        uVar34 = lVar24 + lVar27;
        if (1 < uVar34) {
          pppppppfStack_160 = (float *******)((longlong)pppppppfVar26 + lVar27 + 1);
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar34,2,&UNK_14300c6c0);
        }
        if (*(char *)((longlong)&param_16 + lVar27 + lVar24) == '\0') goto code_r0x00014084ee05;
        if (param_13 <= pppppppfVar25) {
          pppppppfStack_160 = (float *******)((longlong)pppppppfVar26 + lVar27 + 1);
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pppppppfVar25,param_13,&UNK_14300c6d8);
        }
        fVar36 = param_14[(longlong)pppppppfVar25];
        fVar53 = 0.0;
        fVar42 = 0.0;
        if (fVar36 <= 0.0) goto code_r0x00014084ee05;
      }
      puVar32 = puVar32 + 2;
    }
    if (pppppppfStack_100 == (float *******)0x0) {
      pppppppfStack_268 = (float *******)0x0;
      pfStack_260 = (float *)0x4;
      pppppppfStack_258 = (float *******)0x0;
      pppppppfStack_250 = (float *******)0x0;
      pfStack_248 = (float *)0x4;
      pppppppfStack_240 = (float *******)0x0;
      if (fStack_308 == 1.4013e-45) {
        pppppppfStack_170 = (float *******)0x4;
        pppppppfStack_178 = (float *******)0x0;
        pbStack_180 = (byte *)0x4;
        pppppppfStack_188 = (float *******)0x0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143310e78);
      }
      if (uStack_2f8 == 1) {
        pppppppfStack_170 = (float *******)0x4;
        pppppppfStack_178 = (float *******)0x0;
        pbStack_180 = (byte *)0x4;
        pppppppfStack_188 = (float *******)0x0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uStack_1d8,0,&UNK_143310e78);
      }
      pbVar20 = (byte *)0x4;
      bVar10 = false;
      fStack_390 = 0.0;
      pppppppfStack_128 = (float *******)0x0;
      bVar4 = false;
      pppppppfStack_110 = (float *******)0x0;
      in_R11 = (float *******)0x4;
      fStack_380 = 0.0;
      pppppppfVar26 = uStack_138;
      goto code_r0x00014084f989;
    }
    uVar34 = (longlong)pppppppfStack_100 * 4;
    uVar35 = (longlong)pppppppfStack_100 * 0xc;
    pdb_14007ee60();
    pfVar19 = (float *)pub_1406abab0(uVar35,4);
    pppppppfVar26 = uStack_138;
    if (pfVar19 == (float *)0x0) {
      pdb_142dc7e2a(4,uVar35);
      goto code_r0x0001408517b8;
    }
    if ((pppppppfVar18 < (float *******)0x4) ||
       ((pfVar19 < (float *)((longlong)uStack_138 + (longlong)pppppppfVar18 * 0xc) &&
        (uStack_138 < pfVar19 + (longlong)pppppppfVar18 * 3)))) {
      pppppppfVar25 = (float *******)0x0;
      goto code_r0x00014084f2d2;
    }
    pppppppfVar25 = (float *******)((ulonglong)pppppppfVar18 & 0xffffffffffffffc);
    lVar24 = 0;
    pppppppfVar33 = pppppppfVar25;
    do {
      fVar43 = *(float *)((longlong)uStack_138 + lVar24 + 0x24);
      fVar45 = *(float *)((longlong)uStack_138 + lVar24 + 0x18);
      fVar36 = *(float *)((longlong)uStack_138 + lVar24);
      fVar49 = *(float *)((longlong)uStack_138 + lVar24 + 4);
      fVar51 = *(float *)((longlong)uStack_138 + lVar24 + 8);
      fVar52 = *(float *)((longlong)uStack_138 + lVar24 + 0xc);
      fVar54 = *(float *)((longlong)uStack_138 + lVar24 + 0x28);
      fVar44 = *(float *)((longlong)uStack_138 + lVar24 + 0x1c);
      fVar53 = *(float *)((longlong)uStack_138 + lVar24 + 0x10) + fStack_554;
      fVar40 = *(float *)((longlong)uStack_138 + lVar24 + 0x2c);
      fVar42 = *(float *)((longlong)uStack_138 + lVar24 + 0x14) + fStack_564;
      fVar46 = *(float *)((longlong)uStack_138 + lVar24 + 0x20) + fStack_560;
      pfVar1 = (float *)((longlong)pfVar19 + lVar24 + 0x10);
      *pfVar1 = fVar53;
      pfVar1[1] = fVar42;
      pfVar1[2] = fVar45 + fStack_560;
      pfVar1[3] = fVar44 + fStack_550;
      pfVar1 = (float *)((longlong)pfVar19 + lVar24);
      *pfVar1 = fVar36 + fStack_568;
      pfVar1[1] = fVar49 + fStack_558;
      pfVar1[2] = fVar51 + fStack_568;
      pfVar1[3] = fVar52 + fStack_564;
      pfVar1 = (float *)((longlong)pfVar19 + lVar24 + 0x20);
      *pfVar1 = fVar46;
      pfVar1[1] = fVar43 + fStack_55c;
      pfVar1[2] = fVar54 + fStack_54c;
      pfVar1[3] = fVar40 + fStack_55c;
      lVar24 = lVar24 + 0x30;
      pppppppfVar33 = (float *******)((longlong)pppppppfVar33 + -4);
    } while (pppppppfVar33 != (float *******)0x0);
    if (pppppppfVar18 != pppppppfVar25) {
code_r0x00014084f2d2:
      pppppppfVar33 = pppppppfVar25;
      if (((ulonglong)pppppppfVar18 & 1) != 0) {
        fVar43 = *(float *)((longlong)uStack_138 + ((longlong)pppppppfVar25 * 3 + 2) * 4);
        auVar38._0_8_ = *(undefined8 *)((longlong)uStack_138 + (longlong)pppppppfVar25 * 0xc);
        fVar53 = (float)auVar38._0_8_ + (float)uStack_528;
        fVar42 = (float)((ulonglong)auVar38._0_8_ >> 0x20) + uStack_528._4_4_;
        *(ulonglong *)(pfVar19 + (longlong)pppppppfVar25 * 3) = CONCAT44(fVar42,fVar53);
        pfVar19[(longlong)pppppppfVar25 * 3 + 2] = fVar43 + (float)auStack_518._0_4_;
        pppppppfVar33 = (float *******)((ulonglong)pppppppfVar25 | 1);
      }
      fVar46 = (float)uStack_528;
      if (pppppppfVar18 != (float *******)((ulonglong)pppppppfVar25 | 1)) {
        lVar27 = (longlong)pppppppfVar18 - (longlong)pppppppfVar33;
        lVar24 = (longlong)pppppppfVar33 * 0xc + 0x14;
        do {
          fVar43 = *(float *)((longlong)uStack_138 + lVar24 + -0xc);
          auVar38._0_8_ = *(undefined8 *)((longlong)uStack_138 + lVar24 + -0x14);
          *(ulonglong *)((longlong)pfVar19 + lVar24 + -0x14) =
               CONCAT44((float)((ulonglong)auVar38._0_8_ >> 0x20) + uStack_528._4_4_,
                        (float)auVar38._0_8_ + (float)uStack_528);
          *(float *)((longlong)pfVar19 + lVar24 + -0xc) = fVar43 + (float)auStack_518._0_4_;
          fVar43 = *(float *)((longlong)uStack_138 + lVar24);
          auVar38._0_8_ = *(undefined8 *)((longlong)uStack_138 + lVar24 + -8);
          fVar53 = (float)auVar38._0_8_ + (float)uStack_528;
          fVar42 = (float)((ulonglong)auVar38._0_8_ >> 0x20) + uStack_528._4_4_;
          *(ulonglong *)((longlong)pfVar19 + lVar24 + -8) = CONCAT44(fVar42,fVar53);
          *(float *)((longlong)pfVar19 + lVar24) = fVar43 + (float)auStack_518._0_4_;
          lVar24 = lVar24 + 0x18;
          lVar27 = lVar27 + -2;
        } while (lVar27 != 0);
      }
    }
    pppppppfStack_268 = pppppppfVar18;
    pppppppfStack_258 = pppppppfVar18;
    fVar43 = (float)auStack_518._0_4_;
    fVar45 = (float)auStack_518._4_4_;
    pfStack_260 = pfVar19;
    pdb_14007ee60();
    pfVar19 = (float *)pub_1406abab0(uVar35,4);
    if (pfVar19 == (float *)0x0) {
      pdb_142dc7e2a(4,uVar35);
      goto code_r0x0001408517b8;
    }
    if ((pppppppfVar18 < (float *******)0x4) ||
       ((pfVar19 < (float *)((longlong)pppppppfVar26 + (longlong)pppppppfVar18 * 0xc) &&
        (pppppppfVar26 < pfVar19 + (longlong)pppppppfVar18 * 3)))) {
      pppppppfVar25 = (float *******)0x0;
code_r0x00014084f564:
      pppppppfVar33 = pppppppfVar25;
      if (((ulonglong)pppppppfVar18 & 1) != 0) {
        fVar36 = *(float *)((longlong)pppppppfVar26 + ((longlong)pppppppfVar25 * 3 + 2) * 4);
        auVar38._0_8_ = *(undefined8 *)((longlong)pppppppfVar26 + (longlong)pppppppfVar25 * 0xc);
        fVar53 = (float)auVar38._0_8_ + fVar41;
        fVar42 = (float)((ulonglong)auVar38._0_8_ >> 0x20) + fVar55;
        *(ulonglong *)(pfVar19 + (longlong)pppppppfVar25 * 3) = CONCAT44(fVar42,fVar53);
        pfVar19[(longlong)pppppppfVar25 * 3 + 2] = fVar36 + fVar41;
        pppppppfVar33 = (float *******)((ulonglong)pppppppfVar25 | 1);
      }
      if (pppppppfVar18 != (float *******)((ulonglong)pppppppfVar25 | 1)) {
        lVar27 = (longlong)pppppppfVar18 - (longlong)pppppppfVar33;
        lVar24 = (longlong)pppppppfVar33 * 0xc + 0x14;
        do {
          fVar53 = *(float *)((longlong)pppppppfVar26 + lVar24 + -0xc);
          auVar38._0_8_ = *(undefined8 *)((longlong)pppppppfVar26 + lVar24 + -0x14);
          *(ulonglong *)((longlong)pfVar19 + lVar24 + -0x14) =
               CONCAT44((float)((ulonglong)auVar38._0_8_ >> 0x20) + fVar55,
                        (float)auVar38._0_8_ + fVar41);
          *(float *)((longlong)pfVar19 + lVar24 + -0xc) = fVar53 + fVar41;
          fVar36 = *(float *)((longlong)pppppppfVar26 + lVar24);
          auVar38._0_8_ = *(undefined8 *)((longlong)pppppppfVar26 + lVar24 + -8);
          fVar53 = (float)auVar38._0_8_ + fVar41;
          fVar42 = (float)((ulonglong)auVar38._0_8_ >> 0x20) + fVar55;
          *(ulonglong *)((longlong)pfVar19 + lVar24 + -8) = CONCAT44(fVar42,fVar53);
          *(float *)((longlong)pfVar19 + lVar24) = fVar36 + fVar41;
          lVar24 = lVar24 + 0x18;
          lVar27 = lVar27 + -2;
        } while (lVar27 != 0);
      }
    }
    else {
      pppppppfVar25 = (float *******)((ulonglong)pppppppfVar18 & 0xffffffffffffffc);
      lVar24 = 0;
      pppppppfVar33 = pppppppfVar25;
      do {
        fVar45 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x24);
        fVar36 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x18);
        fVar49 = *(float *)((longlong)pppppppfVar26 + lVar24);
        fVar51 = *(float *)((longlong)pppppppfVar26 + lVar24 + 8);
        fVar52 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0xc);
        fVar54 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x28);
        fVar44 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x1c);
        fVar43 = *(float *)((longlong)pppppppfVar26 + lVar24 + 4) + fStack_538;
        fVar53 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x10) + fStack_534;
        fVar40 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x2c);
        fVar42 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x14) + fStack_544;
        fVar46 = *(float *)((longlong)pppppppfVar26 + lVar24 + 0x20) + fStack_540;
        pfVar1 = (float *)((longlong)pfVar19 + lVar24 + 0x10);
        *pfVar1 = fVar53;
        pfVar1[1] = fVar42;
        pfVar1[2] = fVar36 + fStack_540;
        pfVar1[3] = fVar44 + fStack_530;
        pfVar1 = (float *)((longlong)pfVar19 + lVar24);
        *pfVar1 = fVar49 + fStack_548;
        pfVar1[1] = fVar43;
        pfVar1[2] = fVar51 + fStack_548;
        pfVar1[3] = fVar52 + fStack_544;
        pfVar1 = (float *)((longlong)pfVar19 + lVar24 + 0x20);
        *pfVar1 = fVar46;
        pfVar1[1] = fVar45 + fStack_53c;
        pfVar1[2] = fVar54 + fStack_52c;
        pfVar1[3] = fVar40 + fStack_53c;
        lVar24 = lVar24 + 0x30;
        pppppppfVar33 = (float *******)((longlong)pppppppfVar33 + -4);
      } while (pppppppfVar33 != (float *******)0x0);
      fVar45 = fVar53;
      if (pppppppfVar18 != pppppppfVar25) goto code_r0x00014084f564;
    }
    pppppppfStack_250 = pppppppfVar18;
    pppppppfStack_240 = pppppppfVar18;
    pfStack_248 = pfVar19;
    pdb_14007ee60();
    in_R11 = (float *******)pub_1406abab0(uVar34,4);
    uVar13 = _UNK_14300c308;
    auVar38._0_8_ = _UNK_14300c300;
    if (in_R11 == (float *******)0x0) {
      pdb_142dc7e2a(4,uVar34);
      goto code_r0x0001408517b8;
    }
    pppppppfVar25 = (float *******)0x1;
    pppppppfStack_110 = (float *******)0x1;
    pppppppfVar33 = in_R11;
    if (pppppppfVar18 != (float *******)0x1) {
      uVar35 = (longlong)pppppppfVar18 - 1;
      if (7 < uVar35) {
        uVar29 = uVar35 & 0xfffffffffffffff8;
        pppppppfVar33 = (float *******)((longlong)in_R11 + uVar29 * 4);
        pppppppfVar25 = (float *******)(uVar29 + 1);
        uVar23 = 0;
        do {
          pfVar19 = (float *)((longlong)in_R11 + uVar23 * 4);
          *(undefined8 *)pfVar19 = auVar38._0_8_;
          *(undefined8 *)(pfVar19 + 2) = uVar13;
          pfVar19 = (float *)((longlong)in_R11 + (uVar23 + 4) * 4);
          *(undefined8 *)pfVar19 = auVar38._0_8_;
          *(undefined8 *)(pfVar19 + 2) = uVar13;
          uVar23 = uVar23 + 8;
        } while (uVar29 != uVar23);
        pppppppfStack_110 = pppppppfVar18;
        if (uVar35 == uVar29) goto code_r0x00014084f7aa;
      }
      do {
        pppppppfVar25 = (float *******)((longlong)pppppppfVar25 + 1);
        *(float *)pppppppfVar33 = -1.0;
        pppppppfVar33 = (float *******)((longlong)pppppppfVar33 + 4);
      } while (pppppppfVar18 != pppppppfVar25);
      pppppppfStack_110 = pppppppfVar18;
    }
code_r0x00014084f7aa:
    *(float *)pppppppfVar33 = -1.0;
    pdb_14007ee60();
    pbVar20 = pub_1406abab0(uVar34,4);
    fVar52 = _UNK_142e3c64c;
    fVar51 = _UNK_142e3c648;
    fVar49 = _UNK_142e3c644;
    fVar36 = _DAT_142e3c640;
    if (pbVar20 == (byte *)0x0) {
      pppppppfStack_430 = pppppppfStack_110;
      pppppppfStack_428 = in_R11;
      pdb_142dc7e2a(4,uVar34);
      goto code_r0x0001408517b8;
    }
    if (pppppppfStack_100 == (float *******)0x1) {
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0x80;
      pbVar20[3] = 0x3f;
      fVar36 = extraout_XMM0_Da;
    }
    else {
      uVar34 = (longlong)pppppppfStack_100 - 1;
      lVar24 = 1;
      pbVar31 = pbVar20;
      fVar54 = extraout_XMM0_Da;
      if (uVar34 < 8) {
code_r0x00014084f869:
        fVar36 = fVar54;
        lVar24 = (longlong)pppppppfStack_100 - lVar24;
        do {
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0x80;
          pbVar31[3] = 0x3f;
          pbVar31 = pbVar31 + 4;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      else {
        uVar35 = uVar34 & 0xfffffffffffffff8;
        pbVar31 = pbVar20 + uVar35 * 4;
        lVar24 = uVar35 + 1;
        uVar29 = 0;
        do {
          pfVar19 = (float *)(pbVar20 + uVar29 * 4);
          *pfVar19 = fVar36;
          pfVar19[1] = fVar49;
          pfVar19[2] = fVar51;
          pfVar19[3] = fVar52;
          pfVar19 = (float *)(pbVar20 + uVar29 * 4 + 0x10);
          *pfVar19 = fVar36;
          pfVar19[1] = fVar49;
          pfVar19[2] = fVar51;
          pfVar19[3] = fVar52;
          uVar29 = uVar29 + 8;
        } while (uVar35 != uVar29);
        fVar54 = fVar36;
        if (uVar34 != uVar35) goto code_r0x00014084f869;
      }
      pbVar31[0] = 0;
      pbVar31[1] = 0;
      pbVar31[2] = 0x80;
      pbVar31[3] = 0x3f;
    }
    bVar4 = false;
    fStack_390 = 0.0;
    if (((uint)fStack_308 & 1) != 0) {
      fVar42 = *(float *)((longlong)pppppppfVar26 + 4) + (float)auStack_508._0_4_;
      fVar45 = (fVar42 - (*(float *)((longlong)pppppppfVar26 + 4) + _UNK_14300c310)) /
               (float)auStack_218._0_4_;
      fVar43 = 0.0;
      if (0.0 <= fVar45) {
        fVar43 = fVar45;
      }
      fVar36 = fVar11;
      if (fVar43 <= fVar11) {
        fVar36 = fVar43;
      }
      fVar43 = auStack_304._0_4_;
      fVar45 = auStack_304._4_4_;
      fVar46 = fVar36 * fVar43;
      fVar53 = *(float *)pppppppfVar26 + fVar46;
      fVar42 = fVar42 + fVar36 * fVar45;
      fVar36 = fVar36 * fStack_2fc + *(float *)(pppppppfVar26 + 1);
      fStack_390 = 1.4013e-45;
      bVar4 = true;
    }
    bVar10 = false;
    if ((uStack_2f8 & 1) == 0) {
      pppppppfStack_128 = pppppppfStack_100;
      fStack_380 = 0.0;
    }
    else {
      fVar43 = *(float *)((longlong)pppppppfVar26 + ((longlong)uStack_1d8 * 3 + 1) * 4);
      fVar45 = fVar43 + (float)auStack_508._0_4_;
      fVar46 = (fVar45 - (fVar43 + _UNK_14300c310)) / (float)auStack_218._0_4_;
      fVar43 = 0.0;
      if (0.0 <= fVar46) {
        fVar43 = fVar46;
      }
      fVar49 = fVar11;
      if (fVar43 <= fVar11) {
        fVar49 = fVar43;
      }
      fVar46 = fVar49 * fStack_2ec +
               *(float *)((longlong)pppppppfVar26 + ((longlong)uStack_1d8 * 3 + 2) * 4);
      fVar43 = *(float *)((longlong)pppppppfVar26 + (longlong)uStack_1d8 * 0xc) +
               fVar49 * (float)uStack_2f4;
      fVar45 = fVar45 + fVar49 * (float)((ulonglong)uStack_2f4 >> 0x20);
      fStack_380 = 1.4013e-45;
      bVar10 = true;
      pppppppfStack_128 = pppppppfStack_100;
    }
code_r0x00014084f989:
    fVar49 = 0.0;
    fStack_38c = fVar53;
    fStack_388 = fVar42;
    fStack_384 = fVar36;
    fStack_37c = fVar43;
    fStack_378 = fVar45;
    fStack_374 = fVar46;
    pbStack_1a8 = pbVar20;
    if (0.0 < *param_14) {
      if (pppppppfStack_258 == (float *******)0x0) goto code_r0x00014085161d;
      fStack_390 = 1.4013e-45;
      fStack_384 = pfStack_260[2];
      fStack_38c = (float)*(undefined8 *)pfStack_260;
      fStack_388 = (float)((ulonglong)*(undefined8 *)pfStack_260 >> 0x20);
    }
    pppppppfVar18 = (float *******)((longlong)pppppppfStack_258 - 1);
    pbStack_180 = pbVar20;
    pppppppfStack_170 = in_R11;
    if (param_13 <= pppppppfVar18) {
      pppppppfStack_178 = pppppppfStack_110;
      pppppppfStack_188 = pppppppfStack_128;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppfVar18,param_13,&UNK_14300c690);
    }
    pppppppfVar25 = (float *******)(ulonglong)(uint)param_14[(longlong)pppppppfStack_258 + -1];
    if (0.0 < param_14[(longlong)pppppppfStack_258 + -1]) {
      fStack_380 = 1.4013e-45;
      fStack_374 = pfStack_260[(longlong)pppppppfVar18 * 3 + 2];
      fStack_37c = (float)*(undefined8 *)(pfStack_260 + (longlong)pppppppfVar18 * 3);
      fStack_378 = (float)((ulonglong)*(undefined8 *)(pfStack_260 + (longlong)pppppppfVar18 * 3) >>
                          0x20);
    }
    if (bVar4) {
      if (pppppppfStack_100 == (float *******)0x0) {
        pppppppfStack_178 = pppppppfStack_110;
        pppppppfStack_188 = pppppppfStack_128;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143310e78);
      }
      fVar53 = *(float *)((longlong)pppppppfVar26 + 4) + (float)auStack_358._0_4_;
      fVar45 = (fVar53 - (*(float *)((longlong)pppppppfVar26 + 4) + _UNK_14300c310)) /
               (float)auStack_218._0_4_;
      fVar43 = 0.0;
      if (0.0 <= fVar45) {
        fVar43 = fVar45;
      }
      fVar42 = fVar11;
      if (fVar43 <= fVar11) {
        fVar42 = fVar43;
      }
      fVar43 = auStack_304._0_4_;
      fVar45 = auStack_304._4_4_;
      fVar46 = fVar42 * fVar43;
      pppppppfVar25 =
           (float *******)CONCAT44(fVar53 + fVar42 * fVar45,*(float *)pppppppfVar26 + fVar46);
      fVar49 = fVar42 * fStack_2fc + *(float *)(pppppppfVar26 + 1);
      uVar17 = 1;
      uVar14 = 1;
      if (bVar10) {
code_r0x00014084faf0:
        uVar17 = uVar14;
        fVar43 = *(float *)((longlong)pppppppfVar26 + ((longlong)uStack_1d8 * 3 + 1) * 4);
        fVar45 = fVar43 + (float)auStack_358._0_4_;
        fVar53 = (fVar45 - (fVar43 + _UNK_14300c310)) / (float)auStack_218._0_4_;
        fVar43 = 0.0;
        if (0.0 <= fVar53) {
          fVar43 = fVar53;
        }
        fVar53 = fVar11;
        if (fVar43 <= fVar11) {
          fVar53 = fVar43;
        }
        fVar43 = *(float *)((longlong)pppppppfVar26 + (longlong)uStack_1d8 * 0xc) +
                 fVar53 * (float)uStack_2f4;
        fVar45 = fVar45 + fVar53 * (float)((ulonglong)uStack_2f4 >> 0x20);
        fVar46 = fVar53 * fStack_2ec +
                 *(float *)((longlong)pppppppfVar26 + ((longlong)uStack_1d8 * 3 + 2) * 4);
        fStack_490 = 1.4013e-45;
      }
      else {
        fStack_490 = 0.0;
      }
    }
    else {
      uVar17 = 0;
      if (bVar10) {
        uVar14 = 0;
        if (pppppppfStack_100 == (float *******)0x0) {
          pppppppfStack_178 = pppppppfStack_110;
          pppppppfStack_188 = pppppppfStack_128;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uStack_1d8,0,&UNK_143310e78);
        }
        goto code_r0x00014084faf0;
      }
      fStack_490 = 0.0;
    }
    pppppppfStack_48c = (float *******)CONCAT44(fVar45,fVar43);
    pppppppfStack_178 = pppppppfStack_110;
    pppppppfStack_188 = pppppppfStack_128;
    uStack_4a0 = uVar17;
    pppppppfStack_49c = pppppppfVar25;
    fStack_494 = fVar49;
    fStack_484 = fVar46;
    pppppppfStack_330 = in_R11;
    pdb_14084d5b0(&lStack_468,pfStack_260,pppppppfStack_258,param_14);
    pbStack_328 = pbStack_460;
    pppppppfStack_420 = pppppppfStack_458;
    pdb_14084df70(pbStack_460,pppppppfStack_458,&fStack_390);
    pdb_14084d5b0(&lStack_480,pfStack_248,pppppppfStack_240,param_14);
    pbStack_320 = pbStack_478;
    pppppppfStack_1e0 = pppppppfStack_470;
    pdb_14084df70(pbStack_478,pppppppfStack_470,&uStack_4a0);
    afStack_3dc[0] = fStack_380;
    afStack_3dc[1] = fStack_37c;
    afStack_3dc[2] = fStack_378;
    afStack_3dc[3] = fStack_374;
    iStack_3ec = (int)fStack_390;
    fStack_3e8 = fStack_38c;
    fStack_3e4 = fStack_388;
    fStack_3e0 = fStack_384;
    uStack_3a8._4_4_ = fStack_490;
    pppppppfStack_3a0 = pppppppfStack_48c;
    pppppppfStack_398 = (float *******)CONCAT44(pppppppfStack_398._4_4_,fStack_484);
    uStack_3b8._4_4_ = uStack_4a0;
    pppppppfStack_3b0 = pppppppfStack_49c;
    uStack_3a8._0_4_ = fStack_494;
    fStack_408 = 2.8026e-45;
    uStack_404 = 0;
    pppppppfStack_400 = (float *******)&pppppppfStack_268;
    pfStack_3f8 = (float *)0x2;
    fStack_3f0 = -1.0;
    pppppppfStack_3c8 = (float *******)&pppppppfStack_250;
    uStack_3c0 = 0;
    uStack_3b8._0_4_ = 0x3f800000;
    pppppppfVar26 = (float *******)0x0;
    fVar53 = fStack_490;
    fVar42 = pppppppfStack_48c._0_4_;
    while (pppppppfVar26 != (float *******)0x2) {
      uStack_410 = (float *******)((longlong)pppppppfVar26 + 1);
      iVar2 = (&iStack_3ec)[(longlong)pppppppfVar26 * 0xe];
      if (iVar2 == 2) break;
      lVar24 = (longlong)pppppppfVar26 * 7;
      in_R11 = (float *******)(&pfStack_3f8)[(longlong)pppppppfVar26 * 7];
      fVar36 = (&fStack_3f0)[(longlong)pppppppfVar26 * 0xe];
      auStack_5c4 = *(undefined1 (*) [16])(&fStack_3e8 + (longlong)pppppppfVar26 * 0xe);
      fVar53 = afStack_3dc[(longlong)pppppppfVar26 * 0xe];
      fVar42 = afStack_3dc[(longlong)pppppppfVar26 * 0xe + 1];
      fStack_5b0 = afStack_3dc[(longlong)pppppppfVar26 * 0xe + 2];
      fStack_5ac = afStack_3dc[(longlong)pppppppfVar26 * 0xe + 3];
      iStack_5c8 = iVar2;
      fStack_5b4 = fVar42;
      if ((param_6 != 0) || (pppppppfVar26 = uStack_410, in_R11 != (float *******)0x0)) {
        pppppfVar3 = (float *****)(&pppppppfStack_400)[lVar24][1];
        pppppppfVar18 = (float *******)(&pppppppfStack_400)[lVar24][2];
        pppppppfStack_160 = (float *******)0x0;
        pppppppfStack_158 = (float *******)0x4;
        apppppppfStack_150[0] = (float *******)0x0;
        pppppppfStack_2e8 = (float *******)0x0;
        uStack_2e0 = (float *******)0x4;
        uStack_2d8 = (float *******)0x0;
        pppppppfVar26 = (float *******)0x0;
        pppppppfStack_338 = uStack_410;
        pppppppfStack_100 = in_R11;
        while (pppppppfVar25 = pppppppfVar26, pppppppfVar26 = apppppppfStack_150[0],
              pppppppfVar25 < (float *******)((longlong)pppppppfVar18 - 1U)) {
          if (pppppppfVar18 <= pppppppfVar25) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar25,pppppppfVar18,&UNK_14300c3f0);
          }
          pppppppfVar26 = (float *******)((longlong)pppppppfVar25 + 1);
          if (pppppppfVar18 <= pppppppfVar26) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pppppppfVar26,pppppppfVar18,&UNK_14300c408);
          }
          auVar38._0_8_ = *(undefined8 *)((longlong)pppppfVar3 + (longlong)pppppppfVar25 * 0xc);
          fVar55 = (float)auVar38._0_8_;
          fVar49 = (float)((ulonglong)auVar38._0_8_ >> 0x20);
          fVar53 = *(float *)((longlong)pppppfVar3 + ((longlong)pppppppfVar25 * 3 + 2) * 4);
          auVar38._0_8_ = *(undefined8 *)((longlong)pppppfVar3 + (longlong)pppppppfVar26 * 0xc);
          fVar51 = (float)auVar38._0_8_;
          fVar52 = (float)((ulonglong)auVar38._0_8_ >> 0x20);
          fVar42 = *(float *)((longlong)pppppfVar3 + ((longlong)pppppppfVar26 * 3 + 2) * 4);
          fVar43 = fVar55 - fVar51;
          fVar45 = fVar49 - fVar52;
          fVar41 = fVar53 - fVar42;
          fVar45 = fVar45 * fVar45;
          fVar43 = fVar45 + fVar43 * fVar43;
          auVar37._0_8_ = pub_142e329c0(SQRT(fVar41 * fVar41 + fVar43) / _UNK_14300c314);
          auVar37._8_8_ = extraout_XMM0_Qb;
          if ((float)auVar37._0_8_ <= fVar11) {
            auVar37._0_4_ = fVar11;
          }
          fVar41 = auVar37._0_4_;
          uVar34 = (longlong)(fVar41 - _DAT_142e36f2c) & (longlong)fVar41 >> 0x3f | (longlong)fVar41
          ;
          if (fVar41 < 0.0) {
            uVar34 = 0;
          }
          if (_DAT_142e36f30 < fVar41) {
            uVar34 = 0xffffffffffffffff;
          }
          for (uVar35 = 0; pppppppfVar33 = apppppppfStack_150[0], uVar35 < uVar34;
              uVar35 = uVar35 + 1) {
            if (apppppppfStack_150[0] == pppppppfStack_160) {
              pdb_142db7820(&pppppppfStack_160);
            }
            pppppppfVar21 = uStack_2d8;
            fVar54 = (float)uVar35 / (float)uVar34;
            fVar41 = fVar11 - fVar54;
            fVar43 = fVar54 * fVar51 + fVar41 * fVar55;
            fVar45 = fVar54 * fVar52 + fVar41 * fVar49;
            apppppppfStack_150[0] = (float *******)((longlong)pppppppfVar33 + 1);
            *(ulonglong *)((longlong)pppppppfStack_158 + (longlong)pppppppfVar33 * 0xc) =
                 CONCAT44(fVar45,fVar43);
            *(float *)((longlong)pppppppfStack_158 + ((longlong)pppppppfVar33 * 3 + 2) * 4) =
                 fVar42 * fVar54 + fVar53 * fVar41;
            if (param_13 <= pppppppfVar25) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppfVar25,param_13,&UNK_14300c420);
            }
            if (param_13 <= pppppppfVar26) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppfVar26,param_13,&UNK_14300c438);
            }
            fVar44 = param_14[(longlong)pppppppfVar25];
            fVar40 = param_14[(longlong)pppppppfVar26];
            if (uStack_2d8 == pppppppfStack_2e8) {
              pdb_142d89720(&pppppppfStack_2e8);
            }
            *(float *)((longlong)uStack_2e0 + (longlong)pppppppfVar21 * 4) =
                 fVar41 * fVar44 + fVar54 * fVar40;
            uStack_2d8 = (float *******)((longlong)pppppppfVar21 + 1);
          }
        }
        puVar32 = (undefined8 *)((longlong)pppppfVar3 + ((longlong)pppppppfVar18 * 3 + -3) * 4);
        if (puVar32 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14300c3c0);
        }
        if (apppppppfStack_150[0] == pppppppfStack_160) {
          pdb_142db7820(&pppppppfStack_160);
        }
        pppppppfVar25 = uStack_2d8;
        apppppppfStack_150[0] = (float *******)((longlong)pppppppfVar26 + 1);
        *(float *)((longlong)pppppppfStack_158 + ((longlong)pppppppfVar26 * 3 + 2) * 4) =
             *(float *)((longlong)pppppfVar3 + ((longlong)pppppppfVar18 * 3 + -1) * 4);
        *(undefined8 *)((longlong)pppppppfStack_158 + (longlong)pppppppfVar26 * 0xc) = *puVar32;
        if (pfStack_4f0 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14300c3d8);
        }
        fVar53 = *pfStack_4f0;
        if (uStack_2d8 == pppppppfStack_2e8) {
          pdb_142d89720(&pppppppfStack_2e8);
        }
        pppppppfVar26 = apppppppfStack_150[0];
        *(float *)((longlong)uStack_2e0 + (longlong)pppppppfVar25 * 4) = fVar53;
        pppppppfStack_1b0 = pppppppfStack_160;
        uStack_298 = pppppppfStack_158;
        pppppppfStack_1c0 = pppppppfStack_2e8;
        pppppppfStack_168 = uStack_2e0;
        fVar42 = 0.0;
        pdb_140174670(&pppppppfStack_1a0,fVar36,apppppppfStack_150[0]);
        pbStack_1b8 = pbStack_198;
        pdb_14084d5b0(&pppppppfStack_160,uStack_298,pppppppfVar26,pppppppfStack_168);
        fVar55 = fStack_5a4;
        fVar41 = fStack_5a8;
        auStack_228._0_8_ = pppppppfStack_158;
        auStack_318._0_8_ = apppppppfStack_150[0];
        pdb_14084df70(pppppppfStack_158,apppppppfStack_150[0],&iStack_5c8);
        pppppppfVar26 = (float *******)(auStack_318._0_8_ - 1);
        pppppppfVar18 = (float *******)0x1e;
        if (pppppppfVar26 < (float *******)0x1e) {
          pppppppfVar18 = pppppppfVar26;
        }
        if ((ulonglong)auStack_318._0_8_ <= pppppppfVar18) {
          pppppppfVar25 = (float *******)0x0;
code_r0x0001408512bc:
          pdb_142dc8420(pppppppfVar25,pppppppfVar18,auStack_318._0_8_,&UNK_14300c390);
          goto code_r0x0001408517b8;
        }
        fVar49 = 0.0;
        pppppppfVar33 = (float *******)0x1e;
        pppppppfVar21 = pppppppfVar18;
        pppppppfVar25 = (float *******)0x0;
        fVar53 = fVar36;
        while( true ) {
          pppppppfVar18 = (float *******)((longlong)pppppppfVar21 + 1);
          if (pppppppfVar18 < pppppppfVar25) goto code_r0x0001408512bc;
          pdb_1408b0b00(&pppppppfStack_2e8,auStack_228._0_8_ + (longlong)pppppppfVar25 * 0xc,
                        (longlong)pppppppfVar18 - (longlong)pppppppfVar25);
          pppppppfVar18 = uStack_2d8;
          pppppppfStack_100 = pppppppfStack_2e8;
          uStack_450 = CONCAT44(fStack_2cc,fStack_2d0);
          fStack_448 = fStack_2c8;
          uStack_138 = uStack_2e0;
          if (uStack_2d8 == (float *******)0x0) goto code_r0x00014085136a;
          uVar34 = (longlong)uStack_2d8 * 0x30 - 0x30;
          uVar16 = (uint)(uVar34 / 0x30);
          pppppppfVar28 = uStack_2e0;
          if ((~uVar16 & 7) != 0) {
            lVar24 = -(ulonglong)(uVar16 + 1 & 7);
            do {
              *(float *)((longlong)pppppppfVar28 + 0xc) =
                   *(float *)((longlong)pppppppfVar28 + 0xc) + fVar49;
              pppppppfVar28 = pppppppfVar28 + 6;
              lVar24 = lVar24 + 1;
            } while (lVar24 != 0);
          }
          if (0x14f < uVar34) {
            do {
              *(float *)((longlong)pppppppfVar28 + 0xc) =
                   *(float *)((longlong)pppppppfVar28 + 0xc) + fVar49;
              *(float *)((longlong)pppppppfVar28 + 0x3c) =
                   *(float *)((longlong)pppppppfVar28 + 0x3c) + fVar49;
              *(float *)((longlong)pppppppfVar28 + 0x6c) =
                   *(float *)((longlong)pppppppfVar28 + 0x6c) + fVar49;
              *(float *)((longlong)pppppppfVar28 + 0x9c) =
                   *(float *)((longlong)pppppppfVar28 + 0x9c) + fVar49;
              *(float *)((longlong)pppppppfVar28 + 0xcc) =
                   *(float *)((longlong)pppppppfVar28 + 0xcc) + fVar49;
              *(float *)((longlong)pppppppfVar28 + 0xfc) =
                   *(float *)((longlong)pppppppfVar28 + 0xfc) + fVar49;
              *(float *)((longlong)pppppppfVar28 + 300) =
                   *(float *)((longlong)pppppppfVar28 + 300) + fVar49;
              *(float *)((longlong)pppppppfVar28 + 0x15c) =
                   *(float *)((longlong)pppppppfVar28 + 0x15c) + fVar49;
              pppppppfVar28 = pppppppfVar28 + 0x30;
            } while (pppppppfVar28 != uStack_2e0 + (longlong)uStack_2d8 * 6);
          }
          if (uStack_2e0 + (longlong)uStack_2d8 * 6 == (float *******)0x30)
          goto code_r0x00014085136a;
          uStack_1d8 = pppppppfVar21;
          fVar49 = *(float *)((longlong)(uStack_2e0 + (longlong)uStack_2d8 * 6) + -0x24);
          pppppppfStack_118 = pppppppfVar33;
          fVar36 = fStack_2c4 + fVar12;
          lVar24 = plStack_1e8[2];
          if (lVar24 == *plStack_1e8) {
            pdb_142d7f080();
          }
          lVar30 = lVar24 * 0x38;
          lVar27 = plStack_1e8[1];
          *(float ********)(lVar27 + lVar30) = pppppppfStack_100;
          *(float ********)(lVar27 + 8 + lVar30) = uStack_138;
          *(float ********)(lVar27 + 0x10 + lVar30) = pppppppfVar18;
          *(undefined4 *)(lVar27 + 0x18 + lVar30) = uStack_11c;
          *(undefined4 *)(lVar27 + 0x1c + lVar30) = uStack_120;
          *(undefined8 *)(lVar27 + 0x20 + lVar30) = uStack_450;
          *(float *)(lVar27 + 0x28 + lVar30) = fStack_448;
          *(float *)(lVar27 + 0x2c + lVar30) = fVar36;
          *(uint *)(lVar27 + 0x30 + lVar30) =
               (uint)(pppppppfVar25 == (float *******)0x0) +
               (uint)(pppppppfVar26 <= pppppppfVar33) * 2;
          *(undefined4 *)(lVar27 + 0x34 + lVar30) = 0x3d75c28f;
          plStack_1e8[2] = lVar24 + 1;
          if (pppppppfVar26 <= pppppppfStack_118) break;
          pppppppfVar33 = (float *******)((longlong)uStack_1d8 + 0x1e);
          pppppppfVar21 = pppppppfVar33;
          pppppppfVar25 = uStack_1d8;
          if (pppppppfVar26 < pppppppfVar33) {
            pppppppfVar21 = pppppppfVar26;
          }
        }
        if (pppppppfStack_160 != (float *******)0x0) {
          pub_1406abac0((byte *)auStack_228._0_8_,(longlong)pppppppfStack_160 * 0xc,4);
        }
        pppppppfVar18 = pppppppfStack_168;
        pppppppfVar26 = pppppppfStack_338;
        if (pppppppfStack_1a0 != (float *******)0x0) {
          pub_1406abac0(pbStack_1b8,(longlong)pppppppfStack_1a0 << 2,4);
        }
        if (pppppppfStack_1c0 != (float *******)0x0) {
          pub_1406abac0((byte *)pppppppfVar18,(longlong)pppppppfStack_1c0 << 2,4);
        }
        if (pppppppfStack_1b0 != (float *******)0x0) {
          pub_1406abac0((byte *)uStack_298,(longlong)pppppppfStack_1b0 * 0xc,4);
        }
      }
    }
    if (1 < param_6) {
      if (pppppppfStack_1e0 < (float *******)0x3) {
        pbStack_1b8 = (byte *)0x0;
        pbVar20 = (byte *)0x0;
        pppppppfStack_1e0 = (float *******)0x8;
      }
      else {
        pbStack_280 = (byte *)0x0;
        pppppppfStack_278 = (float *******)0x8;
        pbStack_270 = (byte *)0x0;
        pppppppfStack_118 = (float *******)0x2;
        pppppppfVar26 = (float *******)0x0;
        if ((float *******)0x2 < pppppppfStack_1e0) {
          while( true ) {
            if (pppppppfStack_1e0 <= pppppppfVar26) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppfVar26,pppppppfStack_1e0,&UNK_14300c4f8);
            }
            pppppppfVar18 = (float *******)((ulonglong)pppppppfVar26 | 1);
            if (pppppppfStack_420 <= pppppppfVar18) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppfVar18,pppppppfStack_420,&UNK_14300c510);
            }
            fVar47 = (float)*(undefined8 *)(pbStack_320 + (longlong)pppppppfVar26 * 0xc);
            fVar48 = (float)((ulonglong)*(undefined8 *)(pbStack_320 + (longlong)pppppppfVar26 * 0xc)
                            >> 0x20);
            fVar36 = *(float *)(pbStack_320 + (longlong)pppppppfVar26 * 0xc + 8);
            fVar43 = *(float *)(pbStack_328 + (longlong)pppppppfVar18 * 0xc + 8);
            fVar46 = *(float *)(pbStack_320 + (longlong)pppppppfStack_118 * 0xc + 8);
            uStack_138 = *(float ********)(pbStack_328 + (longlong)pppppppfVar18 * 0xc);
            fVar40 = (float)((ulonglong)uStack_138 >> 0x20);
            uStack_1d8 = *(float ********)(pbStack_320 + (longlong)pppppppfStack_118 * 0xc);
            fVar50 = (float)((ulonglong)uStack_1d8 >> 0x20);
            fVar53 = (fVar47 + SUB84(uStack_1d8,0)) * _DAT_142e61230;
            fVar42 = (fVar48 + fVar50) * _UNK_142e61234;
            fVar52 = _UNK_142e61238 * 0.0;
            fVar54 = _UNK_142e6123c * 0.0;
            fVar49 = (fVar36 + fVar46) * _DAT_142e36f38;
            fVar45 = fVar47 - SUB84(uStack_138,0);
            fVar51 = fVar48 - fVar40;
            fVar51 = SQRT((fVar36 - fVar43) * (fVar36 - fVar43) + fVar51 * fVar51 + fVar45 * fVar45)
            ;
            pppppppfStack_100 = (float *******)CONCAT44(pppppppfStack_100._4_4_,fVar43);
            auStack_228 = ZEXT416((uint)fVar46);
            uStack_130 = 0;
            uStack_1d0 = 0;
            fVar44 = SUB84(uStack_138,0) - SUB84(uStack_1d8,0);
            fVar40 = fVar40 - fVar50;
            fVar45 = 0.0;
            fVar43 = SQRT((fVar43 - fVar46) * (fVar43 - fVar46) + fVar40 * fVar40 + fVar44 * fVar44)
            ;
            fVar46 = (float)(-(uint)NAN(fVar51) & (uint)fVar43);
            if (fVar43 <= fVar51) {
              fVar43 = fVar51;
            }
            auVar38._0_8_ =
                 pub_142e329c0((float)(~-(uint)NAN(fVar51) & (uint)fVar43 | (uint)fVar46) /
                               _UNK_14300c314);
            auVar38._8_8_ = extraout_XMM0_Qb_00;
            if ((float)auVar38._0_8_ <= fVar11) {
              auVar39._4_12_ = auVar38._4_12_;
              auVar39._0_4_ = fVar11;
              auVar38._0_8_ = auVar39._0_8_;
            }
            fVar51 = (float)auVar38._0_8_;
            pppppppfVar25 =
                 (float *******)
                 ((longlong)(fVar51 - _DAT_142e36f2c) & (longlong)fVar51 >> 0x3f | (longlong)fVar51)
            ;
            if (fVar51 < 0.0) {
              pppppppfVar25 = (float *******)0x0;
            }
            if (_DAT_142e36f30 < fVar51) {
              pppppppfVar25 = (float *******)0xffffffffffffffff;
            }
            auVar38._0_8_ = 0;
            if (0xaaaaaaaaaaaaaa9 < (ulonglong)((longlong)pppppppfVar25 * 2)) break;
            lVar24 = (longlong)pppppppfVar25 * 2 + 1;
            uVar34 = lVar24 * 4;
            pppppppfVar33 = (float *******)(lVar24 * 0xc);
            pdb_14007ee60();
            auVar38._0_8_ = 4;
            pppppppfStack_418 = pppppppfVar33;
            pppppppfVar33 = (float *******)pub_1406abab0((ulonglong)pppppppfVar33,4);
            if (pppppppfVar33 == (float *******)0x0) break;
            pppppppfVar21 = (float *******)((longlong)pppppppfVar25 * 2 + 1);
            pppppppfStack_1f0 = (float *******)0x0;
            pppppppfStack_200 = pppppppfVar21;
            pppppppfStack_1f8 = pppppppfVar33;
            pppppppfStack_1b0 = pppppppfVar33;
            pdb_14007ee60();
            pbVar20 = pub_1406abab0(uVar34,4);
            if (pbVar20 == (byte *)0x0) {
              pdb_142dc7e2a(4,uVar34);
              goto code_r0x0001408517b8;
            }
            pppppppfStack_190 = (float *******)0x0;
            pppppppfStack_1a0 = pppppppfVar21;
            pbStack_198 = pbVar20;
            pdb_14007ee60();
            pppppppfVar33 = (float *******)pub_1406abab0(uVar34,4);
            if (pppppppfVar33 == (float *******)0x0) {
              pdb_142dc7e2a(4,uVar34);
              goto code_r0x0001408517b8;
            }
            fVar49 = pppppppfStack_100._0_4_ + pppppppfStack_100._0_4_ + fVar49;
            fVar53 = (float)uStack_138 + (float)uStack_138 + fVar53;
            fVar42 = uStack_138._4_4_ + uStack_138._4_4_ + fVar42;
            fVar52 = (float)uStack_130 + (float)uStack_130 + fVar52;
            fVar54 = uStack_130._4_4_ + uStack_130._4_4_ + fVar54;
            fVar53 = fVar53 + fVar53;
            fVar42 = fVar42 + fVar42;
            fStack_290 = fVar52 + fVar52;
            fStack_28c = fVar54 + fVar54;
            uStack_298 = (float *******)CONCAT44(fVar42,fVar53);
            pppppppfStack_168 = (float *******)CONCAT44(pppppppfStack_168._4_4_,fVar49 + fVar49);
            auStack_318._4_4_ = fVar36;
            auStack_318._0_4_ = auStack_228._0_4_;
            auStack_318._8_4_ = auStack_228._4_4_;
            auStack_318._12_4_ = 0;
            apppppppfStack_150[0] = (float *******)0x0;
            pppppppfStack_160 = pppppppfVar21;
            pppppppfStack_158 = pppppppfVar33;
            for (pppppppfVar28 = (float *******)0x0; pppppppfVar33 = pppppppfStack_1f0,
                pppppppfVar28 <= (float *******)((longlong)pppppppfVar25 * 2);
                pppppppfVar28 = (float *******)((longlong)pppppppfVar28 + 1)) {
              fVar49 = (float)(longlong)pppppppfVar28 / (float)((longlong)pppppppfVar25 * 2);
              fVar51 = fVar36;
              fVar52 = fVar47;
              fVar54 = fVar48;
              if (pppppppfVar28 != (float *******)0x0) {
                fVar51 = pppppppfStack_100._0_4_;
                fVar52 = (float)uStack_138;
                fVar54 = uStack_138._4_4_;
                if (pppppppfVar28 != pppppppfVar25) {
                  fVar51 = (float)auStack_228._0_4_;
                  fVar52 = (float)uStack_1d8;
                  fVar54 = uStack_1d8._4_4_;
                  if (pppppppfVar28 != (float *******)((longlong)pppppppfVar25 * 2)) {
                    fVar43 = fVar11 - fVar49;
                    fVar52 = (float)uStack_1d8 * fVar49 * fVar49 +
                             (float)uStack_298 * fVar43 * fVar49 + fVar47 * fVar43 * fVar43;
                    fVar54 = uStack_1d8._4_4_ * fVar49 * fVar49 +
                             uStack_298._4_4_ * fVar43 * fVar49 + fVar48 * fVar43 * fVar43;
                    fVar51 = (float)auStack_318._4_4_ * fVar43 * fVar43 +
                             fVar43 * pppppppfStack_168._0_4_ * fVar49 +
                             (float)auStack_318._0_4_ * fVar49 * fVar49;
                    fVar46 = fVar49;
                  }
                }
              }
              if (fVar49 <= _DAT_142e36f50) {
                if (param_13 <= pppppppfVar26) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pppppppfVar26,param_13,&UNK_14300c5e8);
                }
                if (param_13 <= pppppppfVar18) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pppppppfVar18,param_13,&UNK_14300c600);
                }
                fVar49 = fVar49 + fVar49;
                fVar53 = (float)*(undefined8 *)(param_14 + (longlong)pppppppfVar26);
                fVar42 = (float)((ulonglong)*(undefined8 *)(param_14 + (longlong)pppppppfVar26) >>
                                0x20);
                fVar43 = (fVar11 - fVar49) * fVar53;
                fVar45 = fVar49 * fVar42;
                fVar44 = fVar45 + fVar43;
                fVar49 = (fVar11 - fVar49) - fVar49;
              }
              else {
                if (param_13 <= pppppppfVar18) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pppppppfVar18,param_13,&UNK_14300c5b8);
                }
                if (param_13 <= pppppppfStack_118) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pppppppfStack_118,param_13,&UNK_14300c5d0);
                }
                fVar49 = fVar49 + _DAT_142e36f38 + fVar49 + _DAT_142e36f38;
                fVar53 = (float)*(undefined8 *)(param_14 + (longlong)pppppppfVar18);
                fVar42 = (float)((ulonglong)*(undefined8 *)(param_14 + (longlong)pppppppfVar18) >>
                                0x20);
                fVar43 = (fVar11 - fVar49) * fVar53;
                fVar45 = fVar49 * fVar42;
                fVar44 = fVar45 + fVar43;
                fVar49 = fVar49 - (fVar11 - fVar49);
              }
              if (pppppppfStack_1f0 == pppppppfStack_200) {
                pdb_142db7820(&pppppppfStack_200);
              }
              pppppppfVar21 = pppppppfStack_190;
              *(ulonglong *)((longlong)pppppppfStack_1f8 + (longlong)pppppppfVar33 * 0xc) =
                   CONCAT44(fVar54,fVar52);
              *(float *)((longlong)pppppppfStack_1f8 + ((longlong)pppppppfVar33 * 3 + 2) * 4) =
                   fVar51;
              pppppppfStack_1f0 = (float *******)((longlong)pppppppfVar33 + 1);
              if (pppppppfStack_190 == pppppppfStack_1a0) {
                pdb_142d89720();
              }
              pppppppfVar33 = apppppppfStack_150[0];
              *(float *)(pbStack_198 + (longlong)pppppppfVar21 * 4) = fVar44;
              pppppppfStack_190 = (float *******)((longlong)pppppppfVar21 + 1);
              if (apppppppfStack_150[0] == pppppppfStack_160) {
                pdb_142d89720();
              }
              *(float *)((longlong)pppppppfStack_158 + (longlong)pppppppfVar33 * 4) = fVar49;
              apppppppfStack_150[0] = (float *******)((longlong)pppppppfVar33 + 1);
            }
            if (pppppppfStack_1f0 <= pppppppfVar25) {
              pdb_142dc8420(0,pppppppfVar25,pppppppfStack_1f0,&UNK_14300c528);
              goto code_r0x0001408517b8;
            }
            if (pppppppfStack_190 <= pppppppfVar25) {
              pdb_142dc8420(0,pppppppfVar25,pppppppfStack_190,&UNK_14300c540);
              goto code_r0x0001408517b8;
            }
            if (apppppppfStack_150[0] <= pppppppfVar25) {
              pdb_142dc8420(0,pppppppfVar25,apppppppfStack_150[0],&UNK_14300c558);
              goto code_r0x0001408517b8;
            }
            pdb_14084d5b0(&pppppppfStack_2e8,pppppppfStack_1f8,(longlong)pppppppfVar25 + 1,
                          pbStack_198);
            if (pppppppfStack_1f0 < pppppppfVar25) {
              uStack_f1 = 1;
              pdb_142dc8420(pppppppfVar25,pppppppfStack_1f0,pppppppfStack_1f0,&UNK_14300c570);
              goto code_r0x0001408517b8;
            }
            if (pppppppfStack_190 < pppppppfVar25) {
              uStack_f1 = 1;
              pdb_142dc8420(pppppppfVar25,pppppppfStack_190,pppppppfStack_190,&UNK_14300c588);
              goto code_r0x0001408517b8;
            }
            if (apppppppfStack_150[0] < pppppppfVar25) {
              uStack_f1 = 1;
              pdb_142dc8420(pppppppfVar25,apppppppfStack_150[0],apppppppfStack_150[0],&UNK_14300c5a0
                           );
              goto code_r0x0001408517b8;
            }
            uStack_f1 = 1;
            pdb_14084d5b0(&uStack_410,
                          (float *)((longlong)pppppppfStack_1f8 + (longlong)pppppppfVar25 * 0xc),
                          (longlong)pppppppfStack_1f0 - (longlong)pppppppfVar25,
                          pbStack_198 + (longlong)pppppppfVar25 * 4);
            pppppppfVar26 = uStack_410;
            pfStack_3f8 = (float *)(CONCAT44(uStack_404,fStack_408) +
                                   (longlong)pppppppfStack_400 * 0xc);
            uStack_410._0_4_ = fStack_408;
            uStack_410._4_4_ = (float)uStack_404;
            fStack_3f0 = 1.4013e-45;
            iStack_3ec = 0;
            uStack_f1 = 1;
            pppppppfStack_400 = pppppppfVar26;
            pdb_140177720(&pppppppfStack_2e8,&uStack_410);
            pbVar20 = pbStack_270;
            pppppppfVar26 = uStack_2d8;
            pppppppfStack_100 = pppppppfStack_2e8;
            uStack_138 = uStack_2e0;
            if (pbStack_270 == pbStack_280) {
              pdb_142d7e830(&pbStack_280);
            }
            pppppppfStack_278[(longlong)pbVar20 * 3] = (float ******)pppppppfStack_100;
            pppppppfStack_278[(longlong)pbVar20 * 3 + 1] = (float ******)uStack_138;
            pppppppfStack_278[(longlong)pbVar20 * 3 + 2] = (float ******)pppppppfVar26;
            pbStack_270 = pbVar20 + 1;
            if (pppppppfStack_160 != (float *******)0x0) {
              pub_1406abac0((byte *)pppppppfStack_158,(longlong)pppppppfStack_160 << 2,4);
            }
            if (pppppppfStack_1a0 != (float *******)0x0) {
              pub_1406abac0(pbStack_198,(longlong)pppppppfStack_1a0 << 2,4);
            }
            if (pppppppfStack_200 != (float *******)0x0) {
              pub_1406abac0((byte *)pppppppfStack_1f8,(longlong)pppppppfStack_200 * 0xc,4);
            }
            pppppppfStack_418 = pppppppfStack_1b0;
            pppppppfVar18 = (float *******)((longlong)pppppppfStack_118 + 2);
            pppppppfVar26 = pppppppfStack_118;
            pppppppfStack_118 = pppppppfVar18;
            if (pppppppfStack_1e0 <= pppppppfVar18) goto code_r0x0001408511eb;
          }
          pdb_142dc7e2a(auVar38._0_8_,pppppppfStack_418);
          goto code_r0x0001408517b8;
        }
code_r0x0001408511eb:
        pbStack_1b8 = pbStack_280;
        pbVar20 = pbStack_270;
        pppppppfStack_1e0 = pppppppfStack_278;
      }
      pppppppfStack_1c0 = pppppppfStack_1e0 + (longlong)pbVar20 * 3;
      pppppppfVar26 = pppppppfStack_1e0 + 4;
      pppppppfVar25 = pppppppfStack_1e0;
      pppppppfVar18 = (float *******)((longlong)pbVar20 * 0x18);
      while (pppppppfVar33 = pppppppfVar25, pppppppfVar25 != pppppppfStack_1c0) {
        pppppppfVar33 = pppppppfVar25 + 3;
        if (SBORROW8(0,(longlong)*pppppppfVar25)) break;
        auStack_318._0_8_ = *pppppppfVar25;
        auStack_228._0_8_ = pppppppfVar25[1];
        pppppppfVar21 = (float *******)pppppppfVar25[2];
        pppppppfVar25 = (float *******)((longlong)pppppppfVar21 - 1);
        pppppppfVar28 = (float *******)0x1e;
        if (pppppppfVar25 < (float *******)0x1e) {
          pppppppfVar28 = pppppppfVar25;
        }
        uStack_298 = pppppppfVar33;
        pppppppfStack_1b0 = pppppppfVar18 + -3;
        pppppppfStack_168 = pppppppfVar26;
        if (pppppppfVar21 <= pppppppfVar28) {
          pppppppfVar26 = (float *******)0x0;
code_r0x0001408512e3:
          pdb_142dc8420(pppppppfVar26,pppppppfVar28,pppppppfVar21,&UNK_14300c390);
code_r0x0001408517b8:
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        fVar36 = 0.0;
        pppppppfStack_100 = (float *******)0x1e;
        pppppppfVar33 = pppppppfVar28;
        pppppppfVar26 = (float *******)0x0;
        pppppppfStack_338 = pppppppfVar21;
code_r0x000140850760:
        pppppppfVar28 = (float *******)((longlong)pppppppfVar33 + 1);
        pppppppfVar21 = pppppppfStack_338;
        if (pppppppfVar28 < pppppppfVar26) goto code_r0x0001408512e3;
        pdb_1408b0b00(&uStack_410,auStack_228._0_8_ + (longlong)pppppppfVar26 * 0xc,
                      (longlong)pppppppfVar28 - (longlong)pppppppfVar26);
        pppppppfVar18 = pppppppfStack_400;
        uStack_138 = uStack_410;
        pppppppfStack_118 = (float *******)CONCAT44(uStack_404,fStack_408);
        pfStack_440 = pfStack_3f8;
        fStack_438 = fStack_3f0;
        if (pppppppfStack_400 == (float *******)0x0) {
code_r0x000140851458:
          uStack_101 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14300c3a8);
        }
        uVar34 = (longlong)pppppppfStack_400 * 0x30 - 0x30;
        uVar16 = (uint)(uVar34 / 0x30);
        pppppppfVar21 = pppppppfStack_118;
        if ((~uVar16 & 7) != 0) {
          lVar24 = -(ulonglong)(uVar16 + 1 & 7);
          do {
            *(float *)((longlong)pppppppfVar21 + 0xc) =
                 *(float *)((longlong)pppppppfVar21 + 0xc) + fVar36;
            pppppppfVar21 = pppppppfVar21 + 6;
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0);
        }
        if (0x14f < uVar34) {
          do {
            *(float *)((longlong)pppppppfVar21 + 0xc) =
                 *(float *)((longlong)pppppppfVar21 + 0xc) + fVar36;
            *(float *)((longlong)pppppppfVar21 + 0x3c) =
                 *(float *)((longlong)pppppppfVar21 + 0x3c) + fVar36;
            *(float *)((longlong)pppppppfVar21 + 0x6c) =
                 *(float *)((longlong)pppppppfVar21 + 0x6c) + fVar36;
            *(float *)((longlong)pppppppfVar21 + 0x9c) =
                 *(float *)((longlong)pppppppfVar21 + 0x9c) + fVar36;
            *(float *)((longlong)pppppppfVar21 + 0xcc) =
                 *(float *)((longlong)pppppppfVar21 + 0xcc) + fVar36;
            *(float *)((longlong)pppppppfVar21 + 0xfc) =
                 *(float *)((longlong)pppppppfVar21 + 0xfc) + fVar36;
            *(float *)((longlong)pppppppfVar21 + 300) =
                 *(float *)((longlong)pppppppfVar21 + 300) + fVar36;
            *(float *)((longlong)pppppppfVar21 + 0x15c) =
                 *(float *)((longlong)pppppppfVar21 + 0x15c) + fVar36;
            pppppppfVar21 = pppppppfVar21 + 0x30;
          } while (pppppppfVar21 != pppppppfStack_118 + (longlong)pppppppfStack_400 * 6);
        }
        if (pppppppfStack_118 + (longlong)pppppppfStack_400 * 6 == (float *******)0x30)
        goto code_r0x000140851458;
        fVar36 = *(float *)((longlong)(pppppppfStack_118 + (longlong)pppppppfStack_400 * 6) + -0x24)
        ;
        bVar4 = pppppppfVar25 <= pppppppfStack_100;
        fVar49 = (float)iStack_3ec + fVar12;
        lVar24 = plStack_1e8[2];
        uStack_1d8 = pppppppfVar33;
        if (lVar24 == *plStack_1e8) {
          pdb_142d7f080();
        }
        lVar30 = lVar24 * 0x38;
        lVar27 = plStack_1e8[1];
        *(float ********)(lVar27 + lVar30) = uStack_138;
        *(float ********)(lVar27 + 8 + lVar30) = pppppppfStack_118;
        *(float ********)(lVar27 + 0x10 + lVar30) = pppppppfVar18;
        *(undefined4 *)(lVar27 + 0x18 + lVar30) = uStack_11c;
        *(undefined4 *)(lVar27 + 0x1c + lVar30) = uStack_120;
        *(float **)(lVar27 + 0x20 + lVar30) = pfStack_440;
        *(float *)(lVar27 + 0x28 + lVar30) = fStack_438;
        *(float *)(lVar27 + 0x2c + lVar30) = fVar49;
        *(uint *)(lVar27 + 0x30 + lVar30) =
             (uint)(pppppppfVar26 == (float *******)0x0) + (uint)bVar4 * 2;
        *(undefined4 *)(lVar27 + 0x34 + lVar30) = 0x3d75c28f;
        plStack_1e8[2] = lVar24 + 1;
        if (pppppppfStack_100 < pppppppfVar25) {
          pppppppfStack_100 = (float *******)((longlong)uStack_1d8 + 0x1e);
          pppppppfVar33 = pppppppfStack_100;
          pppppppfVar26 = uStack_1d8;
          if (pppppppfVar25 < pppppppfStack_100) {
            pppppppfVar33 = pppppppfVar25;
          }
          goto code_r0x000140850760;
        }
        if (auStack_318._0_8_ != 0) {
          pub_1406abac0((byte *)auStack_228._0_8_,auStack_318._0_8_ * 0xc,4);
        }
        pppppppfVar26 = pppppppfStack_168 + 3;
        pppppppfVar25 = uStack_298;
        pppppppfVar18 = pppppppfStack_1b0;
      }
      if (pppppppfStack_1c0 != pppppppfVar33) {
        uVar34 = (ulonglong)((longlong)pppppppfStack_1c0 - (longlong)pppppppfVar33) / 0x18;
        pppppppfVar33 = pppppppfVar33 + 1;
        do {
          if (pppppppfVar33[-1] != (float ******)0x0) {
            pub_1406abac0((byte *)*pppppppfVar33,(longlong)pppppppfVar33[-1] * 0xc,4);
          }
          pppppppfVar33 = pppppppfVar33 + 3;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      if (pbStack_1b8 != (byte *)0x0) {
        pub_1406abac0((byte *)pppppppfStack_1e0,(longlong)pbStack_1b8 * 0x18,8);
      }
    }
    if (lStack_480 != 0) {
      pub_1406abac0(pbStack_320,lStack_480 * 0xc,4);
    }
    if (lStack_468 != 0) {
      pub_1406abac0(pbStack_328,lStack_468 * 0xc,4);
    }
    if (pppppppfStack_128 != (float *******)0x0) {
      pub_1406abac0(pbStack_1a8,(longlong)pppppppfStack_128 << 2,4);
    }
    if (pppppppfStack_110 != (float *******)0x0) {
      pub_1406abac0((byte *)pppppppfStack_330,(longlong)pppppppfStack_110 << 2,4);
    }
    if (pppppppfStack_250 != (float *******)0x0) {
      pub_1406abac0((byte *)pfStack_248,(longlong)pppppppfStack_250 * 0xc,4);
    }
    if (pppppppfStack_268 != (float *******)0x0) {
      pub_1406abac0((byte *)pfStack_260,(longlong)pppppppfStack_268 * 0xc,4);
    }
    if (pppppppfStack_370 != (float *******)0x0) {
      pub_1406abac0((byte *)pppppppfStack_368,(longlong)pppppppfStack_370 * 0xc,4);
    }
    pppppppfVar26 = pppppppfStack_4e0;
    if (pppppppfStack_230 <= pppppppfStack_4e0) {
      return;
    }
  } while( true );
code_r0x00014084ee05:
  pppppppfStack_160 = (float *******)((longlong)pppppppfVar26 + lVar27 + 1);
  pppppppfStack_118 = pppppppfStack_160;
  if (pppppppfStack_100 <= pppppppfVar25) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pppppppfVar25,pppppppfStack_100,&UNK_14300c6f0);
  }
  if (param_13 <= pppppppfVar25) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pppppppfVar25,param_13,&UNK_14300c708);
  }
  fVar43 = *(float *)((longlong)uStack_138 + (longlong)pppppppfVar25 * 0xc);
  fVar45 = param_14[(longlong)pppppppfVar25];
  fVar43 = (float)pub_142e32a40(fVar43 + fVar43);
  fVar53 = (float)pub_142e32a40();
  uStack_410._4_4_ = (float)(int)fVar43;
  if (_DAT_142e382cc < fVar43) {
    uStack_410._4_4_ = NAN;
  }
  if (NAN(fVar43)) {
    uStack_410._4_4_ = 0.0;
  }
  uStack_410._0_4_ = (float)(int)fVar53;
  if (_DAT_142e382cc < fVar53) {
    uStack_410._0_4_ = NAN;
  }
  if (NAN(fVar53)) {
    uStack_410._0_4_ = 0.0;
  }
  pdb_140e02880(&uStack_410);
  pfVar19 = (float *)((longlong)uStack_138 + (longlong)pppppppfVar25 * 0xc);
  fVar53 = (float)pub_142e329e0();
  fVar42 = (float)pub_142e32b30();
  fVar43 = 0.0;
  if (0.0 <= fVar45) {
    fVar43 = fVar45;
  }
  fVar45 = fVar11;
  if (fVar43 <= fVar11) {
    fVar45 = fVar43;
  }
  fVar36 = fVar45 * 0.0 * afStack_598[0] * _DAT_14300c2b0;
  fVar49 = fVar42 * fVar45 * afStack_598[1] * _UNK_14300c2b4;
  fVar43 = fVar45 * fVar53 * (float)auStack_218._0_4_ * _DAT_142e3c630;
  *(undefined4 *)(puVar32 + -1) = 1;
  *(float *)((longlong)puVar32 + -4) = fVar43;
  *puVar32 = CONCAT44(fVar49,fVar36);
  auVar38._0_8_ = *(undefined8 *)pfVar19;
  fVar51 = (float)auVar38._0_8_ + _DAT_14300c2c0;
  fVar52 = (float)((ulonglong)auVar38._0_8_ >> 0x20) + _UNK_14300c2c4;
  if (param_11 <= pppppppfVar25) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pppppppfVar25,param_11,&UNK_14300c720);
  }
  fVar54 = pfVar19[2];
  auVar38._0_8_ = *(undefined8 *)(param_10 + (longlong)pppppppfVar25 * 8);
  fVar45 = (float)auVar38._0_8_;
  fVar53 = (float)((ulonglong)auVar38._0_8_ >> 0x20);
  fVar42 = fVar11 / SQRT(fVar53 * fVar53 + fVar45 * fVar45);
  uVar16 = (uint)((int)fVar42 - 1U < 0x7fffff ||
                 (int)ABS(fVar42) - 0x800000U < 0x7f000000 && -1 < (int)fVar42);
  pppppppfStack_1a0 =
       (float *******)
       (CONCAT44((int)(uVar16 << 0x1f) >> 0x1f,(int)(uVar16 << 0x1f) >> 0x1f) &
       CONCAT44(fVar42 * fVar53,fVar42 * fVar45));
  pdb_140df4520(&uStack_410,&pppppppfStack_1a0);
  fVar46 = fStack_408;
  fVar53 = uStack_410._4_4_;
  fVar45 = (float)uStack_410;
  fVar51 = fVar51 + _UNK_14300c2f0;
  fVar52 = fVar52 + _UNK_14300c2f4;
  uVar35 = uStack_238 + 0xa0761d6478bd642f;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar35 ^ 0xe7037ed1a0b428db;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar35;
  uVar29 = SUB168(auVar5 * auVar7,8) ^ SUB168(auVar5 * auVar7,0);
  if ((uint)((int)uVar29 * 1000) < 0x128) {
    uVar23 = uStack_238 + 0x40ec3ac8f17ac85e;
    do {
      uVar35 = uVar35 + 0xa0761d6478bd642f;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar23 ^ 0xe7037ed1a0b428db;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar23;
      uVar29 = SUB168(auVar6 * auVar8,8) ^ SUB168(auVar6 * auVar8,0);
      uVar23 = uVar23 + 0xa0761d6478bd642f;
    } while ((uint)((int)uVar29 * 1000) < 0x128);
  }
  uVar17 = pdb_1409012c0(param_5);
  pdb_140a77410(&uStack_410);
  fVar44 = *(float *)(&UNK_142f61070 + (ulonglong)(uVar34 == 0) * 4);
  fVar43 = fVar43 + fStack_578;
  fVar36 = fVar36 + fStack_588;
  fVar49 = fVar49 + fStack_584;
  fVar42 = 0.0;
  fVar40 = fVar11 / SQRT(fVar49 * fVar49 + fVar43 * fVar43 + fVar36 * fVar36);
  fVar47 = fVar36 * fVar45 * fVar44 - fVar43 * fVar53 * fVar44;
  fStack_2d0 = fVar49 * fVar53 * fVar44 - fVar36 * fVar46 * fVar44;
  fVar45 = fVar46 * fVar44 * fVar43 - fVar45 * fVar44 * fVar49;
  fVar53 = fVar11 / SQRT(fStack_2d0 * fStack_2d0 + fVar45 * fVar45 + fVar47 * fVar47);
  fVar47 = fVar53 * fVar47;
  fStack_2d0 = fVar53 * fStack_2d0;
  fVar53 = fVar53 * fVar45;
  fVar46 = fVar53 * _DAT_14300c2d0;
  fStack_2c8 = fVar47 * _UNK_14300c2d4;
  pppppppfStack_2e8 =
       (float *******)
       CONCAT44((fVar40 * fVar49 * fStack_2d0 - fVar40 * fVar43 * fVar47) * _UNK_14300c2d4,
                (fVar40 * fVar36 * fVar47 - fVar40 * fVar49 * fVar53) * _DAT_14300c2d0);
  fVar45 = 0.0;
  fVar53 = (fVar40 * fVar43 * fVar53 - fVar40 * fVar36 * fStack_2d0) * _DAT_14300c2e0;
  uStack_2e0 = (float *******)CONCAT44(fVar43,fVar53);
  uStack_2d8 = (float *******)CONCAT44(fVar49,fVar36);
  fStack_2d0 = fStack_2d0 * _DAT_14300c2e0;
  uStack_2b8 = 0;
  uStack_2b4 = (undefined4)((uVar29 & 0xffffffff) * 1000 >> 0x20);
  uStack_2ac = 0x18;
  uStack_2a8 = CONCAT44(afStack_3dc[4],afStack_3dc[3]);
  pppppppfStack_2a0 = pppppppfStack_3c8;
  fVar43 = _DAT_14300c2e0;
  fStack_2cc = fVar46;
  fStack_2c4 = fVar51;
  fStack_2c0 = fVar52;
  fStack_2bc = fVar54 + 0.0;
  uStack_2b0 = uVar17;
  fVar36 = (float)pdb_1414aa5f0(uStack_4e8,&pppppppfStack_2e8);
  uStack_238 = uVar35;
  lVar24 = lVar30;
  pppppppfVar26 = pppppppfStack_118;
  goto code_r0x00014084ed5a;
}

