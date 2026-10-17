// Matched PDB: system_roof::utils::assemble_rectangular_roof::assemble_rectangular_roof<system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure_env$1>
// VA 0x142812c70, PDB extent 15015 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_roof::utils::assemble_rectangular_roof::assemble_rectangular_roof<system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure_env$1>
   Extent: 15015 bytes. No whole-program auto-analysis. */

void pdb_142812c70(longlong param_1,longlong param_2,undefined4 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  float *pfVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 **ppuVar22;
  int iVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 uVar27;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar28;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
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
  float fVar56;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  undefined8 in_stack_fffffffffffffa68;
  undefined4 uVar63;
  undefined *puVar62;
  undefined8 uStack_588;
  undefined8 uStack_580;
  ulonglong uStack_570;
  ulonglong uStack_568;
  ulonglong uStack_560;
  longlong lStack_558;
  undefined8 *puStack_550;
  ulonglong uStack_548;
  longlong lStack_540;
  undefined8 uStack_538;
  longlong lStack_520;
  undefined8 *puStack_518;
  ulonglong uStack_510;
  longlong lStack_508;
  undefined8 uStack_500;
  float fStack_4e8;
  undefined8 uStack_4e4;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  undefined8 uStack_4cc;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  undefined1 auStack_4b8 [16];
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  undefined8 uStack_490;
  ulonglong uStack_488;
  ulonglong uStack_480;
  ulonglong uStack_478;
  ulonglong uStack_470;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  undefined1 auStack_458 [16];
  float fStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined1 auStack_438 [16];
  undefined8 uStack_428;
  undefined8 uStack_420;
  longlong lStack_418;
  longlong lStack_410;
  ulonglong uStack_408;
  longlong lStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3dc;
  float fStack_3d8;
  undefined4 uStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3a8;
  float fStack_3a4;
  undefined8 uStack_3a0;
  float fStack_398;
  float fStack_394;
  longlong lStack_390;
  longlong lStack_388;
  ulonglong uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  float *pfStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  float fStack_350;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  undefined1 auStack_328 [16];
  undefined8 uStack_318;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  longlong lStack_2e0;
  float *pfStack_2d8;
  ulonglong uStack_2d0;
  longlong lStack_2c8;
  undefined8 uStack_2c0;
  float fStack_2b0;
  float *pfStack_2a8;
  undefined8 *puStack_2a0;
  undefined1 auStack_298 [8];
  float fStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulonglong uStack_278;
  float *pfStack_270;
  ulonglong uStack_268;
  undefined8 uStack_260;
  float afStack_258 [3];
  uint uStack_24c;
  ulonglong uStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  float fStack_210;
  float fStack_1fc;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [8];
  float fStack_1d0;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_190;
  undefined4 uStack_184;
  undefined8 *puStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  int iStack_134;
  longlong lStack_130;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 *puStack_110;
  ulonglong uStack_108;
  undefined8 *puStack_100;
  byte bStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  uVar63 = (undefined4)((ulonglong)in_stack_fffffffffffffa68 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1f8 = 0;
  lStack_1f0 = param_1;
  uStack_184 = param_3;
  bStack_f1 = param_4;
  pdb_140b73b80(&uStack_168);
  pdb_140b73b00(afStack_258,&uStack_168);
  uVar6 = uStack_24c;
  fVar28 = afStack_258[2];
  lStack_120 = param_2;
  pdb_140b772d0(&lStack_418,param_2);
  pdb_140df2970(auStack_4b8);
  fVar54 = 0.0;
  uVar40 = 0;
  uVar27 = 0;
  uVar38 = 0;
  auVar32._0_8_ = pdb_140ac6200(lStack_120);
  puVar62 = (undefined *)CONCAT44(uVar63,fVar54);
  uStack_428 = auVar32._0_8_;
  uStack_420 = extraout_XMM0_Qb;
  pdb_140df1b90(&fStack_3a8);
  pdb_140df1c10(&fStack_468,lStack_1f0);
  cVar4 = pdb_140b77b60(lStack_120);
  if (cVar4 == '\0') {
    uStack_570 = 0;
    goto LAB_142812e90;
  }
  cVar4 = *(char *)(lStack_120 + 0x54);
  if (cVar4 == '\0') {
    fVar42 = _DAT_14359cbd0;
    if (*(char *)(lStack_120 + 0x3c) == '\0') goto LAB_142812e0f;
LAB_142812e50:
    fVar25 = (float)pdb_140b76870(lStack_120 + 0x24);
    pfVar11 = &fStack_4a4;
    pfVar18 = &fStack_394;
    fVar42 = fVar42 + fVar25;
  }
  else {
    fVar42 = _DAT_142e37ae4;
    if (*(char *)(lStack_120 + 0x3c) != '\0') goto LAB_142812e50;
LAB_142812e0f:
    fVar25 = (float)pdb_140b76870(lStack_120 + 0x24);
    pfVar11 = &fStack_4a8;
    pfVar18 = &fStack_398;
    fVar42 = fVar42 + fVar25;
  }
  if (cVar4 == '\0') {
    fVar42 = (float)((uint)fVar42 ^ _DAT_142e37820);
  }
  fVar25 = *pfVar11;
  *pfVar11 = fVar42 + fVar25;
  *pfVar18 = fVar42 + fVar25;
  pdb_140b77190(&uStack_570,lStack_120);
LAB_142812e90:
  pdb_140df37e0(&lStack_520,auStack_4b8);
  auStack_438 = ZEXT416((uint)fVar28);
  auStack_458 = ZEXT416(uVar6);
  fStack_448 = fVar54;
  uStack_444 = uVar40;
  uStack_440 = uVar27;
  uStack_43c = uVar38;
  pdb_140df37e0(&lStack_558,&fStack_3a8);
  auStack_338._4_4_ = fStack_464;
  auStack_338._0_4_ = fStack_468;
  uStack_330._4_4_ = fStack_45c;
  uStack_330._0_4_ = fStack_460;
  auStack_328._8_8_ = 0;
  auStack_328._0_8_ = *(ulonglong *)(lStack_1f0 + 8);
  iVar23 = 0;
  uVar24 = 0;
  fVar28 = _DAT_142e36f28;
  while( true ) {
    uVar27 = (undefined4)((ulonglong)puVar62 >> 0x20);
    uVar40 = (undefined4)((ulonglong)auVar32._0_8_ >> 0x20);
    if (3 < uVar24) break;
    fVar26 = (float)pdb_140b77a00(lStack_120);
    fVar45 = fVar26 * _DAT_143308d70;
    fVar47 = fVar26 * _UNK_143308d74;
    fVar48 = fVar26 * _UNK_143308d78;
    fVar49 = _UNK_142e378e4 * _UNK_143308d7c;
    pdb_140df0010(afStack_258,&fStack_3a8);
    fVar25 = (float)*(undefined8 *)(afStack_258 + uVar24 * 2);
    fVar41 = (float)((ulonglong)*(undefined8 *)(afStack_258 + uVar24 * 2) >> 0x20);
    pdb_140df0010(&uStack_168,auStack_4b8);
    fVar42 = (float)((ulonglong)(&uStack_168)[uVar24] >> 0x20);
    fVar54 = (float)(&uStack_168)[uVar24];
    fVar43 = (fVar41 * (float)uStack_330 + fVar25 * (float)auStack_338._0_4_ +
             (float)auStack_328._0_4_) -
             (fVar42 * (float)uStack_330 + fVar54 * (float)auStack_338._0_4_ +
             (float)auStack_328._0_4_);
    fVar44 = (fVar41 * uStack_330._4_4_ + fVar25 * (float)auStack_338._4_4_ +
             (float)auStack_328._4_4_) -
             (fVar42 * uStack_330._4_4_ + fVar54 * (float)auStack_338._4_4_ +
             (float)auStack_328._4_4_);
    uStack_370 = CONCAT44(fVar44,fVar43);
    pdb_140df4520(&uStack_168,&uStack_370);
    fVar46 = (float)uStack_160;
    fVar41 = uStack_168._4_4_;
    fVar42 = (float)uStack_168;
    fVar50 = (float)uStack_160 * fVar45;
    pdb_140df4520(&uStack_168,&uStack_370);
    fVar25 = (float)uStack_168;
    uStack_1a8 = (undefined8 *)CONCAT44((float)uStack_160,uStack_168._4_4_);
    uStack_1a0 = 0;
    pdb_140df0010(&uStack_168,auStack_4b8);
    fVar39 = (float)((ulonglong)(&uStack_168)[uVar24] >> 0x20);
    fVar54 = (float)(&uStack_168)[uVar24];
    lStack_2e0 = CONCAT44(fVar39 * uStack_330._4_4_ + fVar54 * (float)auStack_338._4_4_ +
                          (float)auStack_328._4_4_,
                          fVar39 * (float)uStack_330 + fVar54 * (float)auStack_338._0_4_ +
                          (float)auStack_328._0_4_);
    pdb_140df4520(afStack_258,&lStack_2e0);
    fVar54 = afStack_258[0];
    uStack_288 = CONCAT44(afStack_258[2],afStack_258[1]);
    uStack_280 = 0;
    auVar32._0_8_ = CONCAT44(uVar40,SQRT(fVar44 * fVar44 + fVar43 * fVar43));
    pdb_140b768b0(&uStack_168,&lStack_418,0,auVar32._0_8_,
                  CONCAT44(uVar27,SQRT(fVar26 * fVar26 + fVar45 * fVar45 + fVar45 * fVar45)));
    fVar39 = fStack_138;
    if (CONCAT44(uStack_168._4_4_,(float)uStack_168) != 0) {
      func_0x0001406abac0(CONCAT44(uStack_160._4_4_,(float)uStack_160),
                          CONCAT44(uStack_168._4_4_,(float)uStack_168) << 3,4);
    }
    if (puStack_150 != (undefined8 *)0x0) {
      func_0x0001406abac0(puStack_148,(longlong)puStack_150 << 2,4);
    }
    auVar29._0_8_ = func_0x000142e32b00(fVar39 / _DAT_14300c290);
    auVar29._8_8_ = extraout_XMM0_Qb_00;
    if ((float)auVar29._0_8_ <= _DAT_142e37830) {
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = _DAT_142e37830;
      auVar29._0_8_ = auVar30._0_8_;
    }
    fVar43 = (float)auVar29._0_8_;
    uVar16 = 0;
    if (0.0 <= fVar43) {
      uVar16 = (longlong)(fVar43 - _DAT_142e36f2c) & (longlong)fVar43 >> 0x3f | (longlong)fVar43;
    }
    if (_DAT_142e36f30 < fVar43) {
      uVar16 = 0xffffffffffffffff;
    }
    puVar62 = &UNK_14359cd90;
    pdb_140de8290(afStack_258,uVar16,_DAT_143015150 / fVar39,&uStack_1f8,&UNK_14359cd90);
    uVar16 = uStack_248;
    uStack_318 = uVar24 + 1;
    fStack_348 = fVar41 * fVar45 - fVar26 * fVar42;
    unaff_XMM12_Db = fVar46 * fVar47 - fVar41 * fVar45;
    unaff_XMM12_Dc = fVar42 * fVar48 - fVar50;
    unaff_XMM12_Dd = _UNK_142e4e65c * fVar49 - 0.0;
    fStack_340 = fVar28 / SQRT(unaff_XMM12_Db * unaff_XMM12_Db + unaff_XMM12_Dc * unaff_XMM12_Dc +
                               fStack_348 * fStack_348);
    fStack_348 = fStack_340 * fStack_348;
    fStack_344 = fStack_340 * unaff_XMM12_Db;
    fStack_340 = fStack_340 * unaff_XMM12_Dc;
    fStack_33c = _UNK_142e378e4 * unaff_XMM12_Dd;
    auStack_1d8._4_4_ = fVar26;
    auStack_1d8._0_4_ = fVar45;
    fStack_1d0 = fVar45;
    unique0x100009e8 = 0;
    auStack_218._4_4_ = (float)uStack_1a8;
    auStack_218._0_4_ = fVar25;
    fStack_210 = (float)uStack_1a8._4_4_;
    unique0x10000968 = 0;
    uVar40 = uStack_288._4_4_;
    uStack_288 = CONCAT44((float)uStack_288,fVar54);
    uStack_280 = CONCAT44(_UNK_142e4e65c,uVar40);
    lVar19 = CONCAT44(uStack_24c,afStack_258[2]);
    auStack_298._4_4_ = fStack_340 * 0.0;
    auStack_298._0_4_ = fStack_344 * 0.0;
    fStack_290 = fStack_348 * 0.0;
    uStack_28c = 0;
    uVar24 = 0;
    fVar54 = fVar28;
    if (uStack_248 != 1) {
      do {
        if (uVar16 <= uVar24) {
          pdb_142dc81f2(uVar24,uVar16,&UNK_14359cda8);
          goto LAB_142815e2b;
        }
        fVar42 = *(float *)(lVar19 + uVar24 * 4);
        lStack_2e0 = CONCAT44(lStack_2e0._4_4_,fVar42);
        if ((fVar42 < 0.0) || (fVar54 < fVar42)) {
          uStack_168 = (float *)&lStack_2e0;
          uStack_160._0_4_ = 7.7206726;
          uStack_160._4_4_ = 1.4013e-45;
          pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359cdc0);
LAB_142815e2b:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar24 = uVar24 + 1;
        if (uVar16 <= uVar24) {
          pdb_142dc81f2(uVar24,uVar16,&UNK_14359cdd8);
          goto LAB_142815e2b;
        }
        fVar28 = *(float *)(lVar19 + uVar24 * 4);
        lStack_2e0 = CONCAT44(lStack_2e0._4_4_,fVar28);
        if ((fVar28 < 0.0) || (fVar54 < fVar28)) {
          uStack_168 = (float *)&lStack_2e0;
          uStack_160._0_4_ = 7.7206726;
          uStack_160._4_4_ = 1.4013e-45;
          pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359cdf0);
          goto LAB_142815e2b;
        }
        uVar6 = pdb_142802660(&lStack_418);
        uVar12 = (ulonglong)uVar6;
        if (uStack_408 <= uVar12) {
          pdb_142dc81f2(uVar12,uStack_408,&UNK_14359b2b0);
          goto LAB_142815e2b;
        }
        if (uStack_408 <= uVar12 + 1) {
          pdb_142dc81f2(uVar12 + 1,uStack_408,&UNK_14359b2c8);
          goto LAB_142815e2b;
        }
        fVar25 = *(float *)(lStack_410 + uVar12 * 8);
        fVar41 = *(float *)(lStack_410 + 4 + uVar12 * 8);
        fVar46 = *(float *)(lStack_410 + 8 + uVar12 * 8);
        fVar39 = *(float *)(lStack_410 + 0xc + uVar12 * 8);
        uVar6 = pdb_142802660(&lStack_418);
        fVar28 = _DAT_142e36f28;
        uVar12 = (ulonglong)uVar6;
        if (uStack_408 <= uVar12) {
          pdb_142dc81f2(uVar12,uStack_408,&UNK_14359b2b0);
          goto LAB_142815e2b;
        }
        if (uStack_408 <= uVar12 + 1) {
          pdb_142dc81f2(uVar12 + 1,uStack_408,&UNK_14359b2c8);
          goto LAB_142815e2b;
        }
        uStack_1a8 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,fVar42);
        fVar46 = fVar25 * (fVar54 - extraout_XMM0_Da) + fVar46 * extraout_XMM0_Da;
        fVar25 = (fVar54 - extraout_XMM0_Da) * fVar41 + fVar39 * extraout_XMM0_Da;
        fVar42 = *(float *)(lStack_410 + 8 + uVar12 * 8) * extraout_XMM0_Da_00 +
                 *(float *)(lStack_410 + uVar12 * 8) * (fVar54 - extraout_XMM0_Da_00);
        fVar41 = *(float *)(lStack_410 + 0xc + uVar12 * 8) * extraout_XMM0_Da_00 +
                 (fVar54 - extraout_XMM0_Da_00) * *(float *)(lStack_410 + 4 + uVar12 * 8);
        fVar48 = fVar46 * (float)auStack_218._0_4_ +
                 fVar25 * (float)auStack_1d8._0_4_ + (float)auStack_298._0_4_ + (float)uStack_288;
        fVar49 = fVar46 * (float)auStack_218._4_4_ +
                 fVar25 * (float)auStack_1d8._4_4_ + (float)auStack_298._4_4_ + uStack_288._4_4_;
        fVar50 = fVar46 * fStack_210 + fVar25 * fStack_1d0 + fStack_290 + (float)uStack_280;
        fVar25 = fVar42 * (float)auStack_218._0_4_ +
                 fVar41 * (float)auStack_1d8._0_4_ + (float)auStack_298._0_4_ + (float)uStack_288;
        fVar46 = fVar42 * (float)auStack_218._4_4_ +
                 fVar41 * (float)auStack_1d8._4_4_ + (float)auStack_298._4_4_ + uStack_288._4_4_;
        fVar42 = fVar42 * fStack_210 + fVar41 * fStack_1d0 + fStack_290 + (float)uStack_280;
        fVar26 = fVar48 - fVar25;
        fVar43 = fVar49 - fVar46;
        fVar44 = fVar50 - fVar42;
        fVar25 = fVar25 - fVar48;
        fVar46 = fVar46 - fVar49;
        fVar42 = fVar42 - fVar50;
        fVar39 = fVar54 / SQRT(fVar42 * fVar42 + fVar46 * fVar46 + fVar25 * fVar25);
        unaff_XMM12_Db = 0.0;
        unaff_XMM12_Dc = 0.0;
        unaff_XMM12_Dd = 0.0;
        fVar25 = fVar39 * fVar25;
        fVar46 = fVar39 * fVar46;
        fVar39 = fVar39 * fVar42;
        fVar51 = fVar46 * fStack_348 - fStack_340 * fVar39;
        fVar52 = fVar39 * fStack_344 - fStack_348 * fVar25;
        fVar53 = fVar25 * fStack_340 - fStack_344 * fVar46;
        fVar45 = fVar53 * fVar46 - fVar52 * fVar39;
        fVar47 = fVar51 * fVar39 - fVar53 * fVar25;
        fVar55 = fVar25 * fVar52 - fVar46 * fVar51;
        fVar41 = (fVar25 * _DAT_14359cbe0 - fVar45) + fVar51 * 0.0;
        fVar56 = (fVar45 * _DAT_14359cc00 - fVar25) + fVar51 * 0.0;
        fVar61 = SQRT(fVar44 * fVar44 + fVar43 * fVar43 + fVar26 * fVar26) + _DAT_142e37ad4;
        fVar26 = (fVar46 * _DAT_14359cbe0 - fVar47) + fVar52 * 0.0;
        uStack_168._4_4_ = (fVar47 * _DAT_14359cc00 - fVar46) + fVar52 * 0.0;
        fVar42 = fVar39 * 0.0 + fVar55 * 0.0 + fVar53;
        fVar43 = fVar53 * 0.0 + (fVar39 * _DAT_14359cbf0 - fVar55);
        fVar44 = fVar53 * 0.0 + (fVar55 * _UNK_14359cbf4 - fVar39);
        auVar32._0_8_ = CONCAT44(fVar44,fVar43);
        fVar45 = fVar25 * 0.0 + fVar45 * 0.0 + fVar51;
        fVar47 = fVar46 * 0.0 + fVar47 * 0.0 + fVar52;
        fVar25 = fVar61 * fVar25 * _DAT_14359cc10;
        fVar46 = fVar61 * fVar46 * _UNK_14359cc14;
        fVar39 = fVar61 * fVar39 * _UNK_14359cc18;
        fVar55 = _UNK_142e378e4 * _UNK_142e378e4 * (fVar54 - 0.0) * _UNK_14359cc1c;
        fVar51 = fVar51 * _DAT_14359cc20;
        fVar52 = fVar52 * _UNK_14359cc24;
        fVar53 = fVar53 * _UNK_14359cc28;
        fVar54 = (fVar54 * fStack_33c - 0.0) * _UNK_14359cc2c;
        if (fVar42 <= 0.0) {
          uStack_168._4_4_ = uStack_168._4_4_ - fVar41;
          if (uStack_168._4_4_ <= 0.0) {
            uStack_168._4_4_ = (_DAT_142e36f28 - fVar42) - uStack_168._4_4_;
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
            auVar32._0_8_ = CONCAT44(fVar43 - fVar45,fVar44 - fVar47);
            uStack_168._0_4_ = uStack_168._4_4_ * uStack_160._4_4_;
            uStack_168._4_4_ = (fVar26 + fVar56) * uStack_160._4_4_;
            uStack_160._0_4_ = (fVar43 + fVar45) * uStack_160._4_4_;
            uStack_160._4_4_ = (fVar44 - fVar47) * uStack_160._4_4_;
          }
          else {
            uStack_168._4_4_ = (_DAT_142e36f28 - fVar42) + uStack_168._4_4_;
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
            uStack_168._0_4_ = (fVar56 + fVar26) * uStack_160._4_4_;
            uStack_168._4_4_ = uStack_168._4_4_ * uStack_160._4_4_;
            uStack_160._0_4_ = (fVar47 + fVar44) * uStack_160._4_4_;
            uStack_160._4_4_ = (fVar45 - fVar43) * uStack_160._4_4_;
          }
        }
        else {
          fVar41 = fVar41 + uStack_168._4_4_;
          if (fVar41 <= 0.0) {
            fVar41 = (fVar42 + _DAT_142e36f28) - fVar41;
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(fVar41);
            auVar32._0_8_ = CONCAT44(fVar44 + fVar47,fVar43 + fVar45);
            uStack_168._0_4_ = uStack_160._4_4_ * (fVar43 + fVar45);
            uStack_168._4_4_ = uStack_160._4_4_ * (fVar44 + fVar47);
            uStack_160._0_4_ = fVar41 * uStack_160._4_4_;
            uStack_160._4_4_ = uStack_160._4_4_ * (fVar26 - fVar56);
          }
          else {
            fVar41 = fVar42 + _DAT_142e36f28 + fVar41;
            auVar32._0_8_ = CONCAT44(fVar41,fVar41);
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(fVar41);
            uStack_168._0_4_ = uStack_160._4_4_ * (fVar44 - fVar47);
            uStack_168._4_4_ = uStack_160._4_4_ * (fVar45 - fVar43);
            uStack_160._0_4_ = uStack_160._4_4_ * (fVar26 - fVar56);
            uStack_160._4_4_ = uStack_160._4_4_ * fVar41;
          }
        }
        puVar8 = (undefined8 *)pdb_1424e5b90(&uStack_168);
        uStack_168._0_4_ = 0.25;
        uStack_160._0_4_ = 0.18;
        uStack_168._4_4_ = fVar61;
        auVar29._0_8_ = pdb_141e3c580(&uStack_168);
        uVar5 = pdb_141e3c420();
        uStack_168._0_4_ = fVar48 + fVar25 + fVar51;
        uStack_168._4_4_ = fVar49 + fVar46 + fVar52;
        uStack_160._0_4_ = fVar50 + fVar39 + fVar53;
        uStack_160._4_4_ = fVar55 + 0.0 + fVar54;
        puStack_158 = (undefined8 *)0x7bff00003c000000;
        puStack_150 = (undefined8 *)CONCAT26(uVar5,(int6)auVar29._0_8_);
        uStack_140 = uStack_184;
        uStack_13c = 0;
        fStack_138 = 0.0;
        lStack_130 = 0x200000000;
        puStack_148 = puVar8;
        iStack_134 = iVar23;
        pdb_142816720(param_6,&uStack_168);
        iVar23 = iVar23 + 1;
        fVar54 = fVar28;
      } while (uVar24 < uVar16 - 1);
    }
    uVar24 = uStack_318;
    if (CONCAT44(afStack_258[1],afStack_258[0]) != 0) {
      func_0x0001406abac0(CONCAT44(uStack_24c,afStack_258[2]),
                          CONCAT44(afStack_258[1],afStack_258[0]) << 2,4);
      uVar24 = uStack_318;
    }
  }
  lStack_390 = pdb_140ac6110(lStack_120);
  pdb_140ac5730(afStack_258,&lStack_390,lStack_120);
  fVar41 = fStack_45c;
  fVar25 = fStack_460;
  fVar42 = fStack_464;
  fVar54 = fStack_468;
  if (afStack_258[0] == 1.4013e-45) {
    fVar46 = (float)((ulonglong)uStack_3a0 >> 0x20);
    if ((float)auStack_458._0_4_ <= (float)auStack_438._0_4_) {
      fVar39 = (float)auStack_438._0_4_ * fStack_3a8;
      fStack_3a8 = (float)auStack_438._0_4_ * fStack_3a4;
    }
    else {
      fVar39 = (float)((uint)fStack_3a4 ^ _DAT_142e37820) * (float)auStack_458._0_4_;
      fStack_3a8 = fStack_3a8 * (float)auStack_458._0_4_;
    }
    fVar39 = fVar39 * _DAT_142e36f60;
    fVar44 = fStack_3a8 * _UNK_142e36f64;
    fVar26 = (float)uStack_3a0 - fVar39;
    fVar43 = fVar46 - fVar44;
    fVar45 = (float)*(undefined8 *)(lStack_1f0 + 8);
    fVar47 = (float)((ulonglong)*(undefined8 *)(lStack_1f0 + 8) >> 0x20);
    lStack_2e0 = CONCAT44(fVar43 * fStack_45c + fVar26 * fStack_464 + fVar47,
                          fVar43 * fStack_460 + fVar26 * fStack_468 + fVar45);
    pdb_140df4520(&uStack_168,&lStack_2e0);
    auVar32._0_8_ = pdb_140b77a00(lStack_120);
    fVar43 = (float)uStack_160;
    fVar26 = uStack_168._4_4_;
    fVar39 = (float)uStack_3a0 + fVar39;
    fVar46 = fVar46 + fVar44;
    fVar44 = (float)auVar32._0_8_ * 0.0;
    fVar48 = (float)uStack_168 + fVar44;
    lStack_2e0 = CONCAT44(fVar47 + fVar41 * fVar46 + fVar42 * fVar39,
                          fVar45 + fVar25 * fVar46 + fVar54 * fVar39);
    pdb_140df4520(&uStack_168,&lStack_2e0);
    auVar29._0_8_ = pdb_140b77a00(lStack_120);
    fVar42 = (float)uStack_160;
    fVar54 = uStack_168._4_4_;
    fVar41 = (float)auVar29._0_8_ * 0.0;
    fVar46 = (float)uStack_168 + fVar41;
    cVar4 = pdb_140b77b60(lStack_120);
    fVar26 = (float)auVar32._0_8_ + fVar26;
    fVar44 = fVar44 + fVar43;
    fVar39 = (float)((ulonglong)auVar32._0_8_ >> 0x20) + 0.0;
    fVar25 = 0.0;
    fVar54 = (float)auVar29._0_8_ + fVar54;
    fVar41 = fVar41 + fVar42;
    fVar42 = (float)((ulonglong)auVar29._0_8_ >> 0x20) + 0.0;
    if (cVar4 != '\0') {
      fVar45 = fVar46 - fVar48;
      fVar25 = fVar54 - fVar26;
      fVar43 = fVar41 - fVar44;
      fVar47 = SQRT(fVar43 * fVar43 + fVar45 * fVar45 + fVar25 * fVar25);
      if (*(char *)(lStack_120 + 0x54) == '\x01') {
        fVar47 = fVar28 / fVar47;
        fVar49 = fVar45 * fVar47 * _DAT_142e3c624;
        fVar45 = fVar25 * fVar47 * _DAT_142f61060;
        fVar43 = fVar43 * fVar47 * _UNK_142f61064;
        fVar47 = (fVar42 - fVar39) * 0.0 * _UNK_142f61068;
        fVar25 = _UNK_142f6106c * 0.0;
      }
      else {
        fVar47 = _DAT_142e36f34 / fVar47;
        fVar49 = fVar45 * fVar47 * _DAT_142e3c624 * _DAT_142e36f50;
        fVar45 = fVar25 * fVar47 * _DAT_142f61060 * _DAT_142e36f60;
        fVar43 = fVar43 * fVar47 * _UNK_142f61064 * _UNK_142e36f64;
        fVar47 = (fVar42 - fVar39) * 0.0 * _UNK_142f61068 * _UNK_142e36f68;
        fVar25 = _UNK_142f6106c * 0.0 * _UNK_142e36f6c;
      }
      fVar48 = fVar48 - fVar49;
      fVar26 = fVar26 - fVar45;
      fVar44 = fVar44 - fVar43;
      fVar39 = fVar39 - fVar47;
      fVar25 = 0.0 - fVar25;
      fVar46 = fVar46 + fVar49;
      fVar54 = fVar54 + fVar45;
      fVar41 = fVar41 + fVar43;
      fVar42 = fVar42 + fVar47;
    }
    fVar47 = fVar54 - fVar26;
    fVar49 = fVar41 - fVar44;
    fVar43 = fVar46 - fVar48;
    fVar45 = SQRT(fVar49 * fVar49 + fVar43 * fVar43 + fVar47 * fVar47);
    auVar31._0_8_ = func_0x000142e32b00(fVar45 / _DAT_14300c290);
    auVar31._8_8_ = extraout_XMM0_Qb_01;
    if ((float)auVar31._0_8_ <= _DAT_142e37830) {
      auVar31._0_4_ = _DAT_142e37830;
    }
    fVar50 = auVar31._0_4_;
    uVar24 = 0;
    if (0.0 <= fVar50) {
      uVar24 = (longlong)(fVar50 - _DAT_142e36f2c) & (longlong)fVar50 >> 0x3f | (longlong)fVar50;
    }
    uVar16 = 0xffffffffffffffff;
    if (fVar50 <= _DAT_142e36f30) {
      uVar16 = uVar24;
    }
    puVar62 = &UNK_14359cca0;
    pdb_140de8290(&lStack_2e0,uVar16,_DAT_143015150 / fVar45,&uStack_1f8,&UNK_14359cca0);
    uVar24 = uStack_2d0;
    uStack_288 = CONCAT44(fVar44,fVar26);
    uStack_280 = CONCAT44(fVar25,fVar39);
    fVar25 = fVar28 / fVar45;
    fVar47 = fVar47 * fVar25;
    fVar49 = fVar49 * fVar25;
    fVar42 = (fVar42 - fVar39) * 0.0;
    fVar25 = fVar25 * fVar43;
    unaff_XMM12_Db = fVar47 * 0.0;
    unaff_XMM12_Dc = fVar42 * 0.0;
    unaff_XMM12_Dd = fVar42 * 0.0;
    fVar42 = _DAT_142e377f0 * fVar25 + fVar49 * 0.0;
    fVar39 = (float)_DAT_142f61040 * fVar47 + fVar25;
    fVar26 = (float)((ulonglong)_DAT_142f61040 >> 0x20) * fVar49 + unaff_XMM12_Db;
    fVar43 = fVar28 / SQRT(fVar26 * fVar26 + fVar42 * fVar42 + fVar39 * fVar39);
    fVar26 = fVar47 - fVar26 * fVar43;
    auStack_218 = (undefined1  [8])pfStack_2d8;
    if ((uStack_2d0 != 0) && (uStack_2d0 != 1)) {
      uStack_1a8 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,fVar45);
      _auStack_298 = ZEXT416((uint)fVar46);
      fStack_344 = 0.0;
      fStack_340 = 0.0;
      fStack_33c = 0.0;
      auStack_328 = ZEXT416((uint)*(float *)(lStack_120 + 0x30));
      auStack_1d8._0_4_ = *(float *)(lStack_120 + 0x2c) * *(float *)(lStack_120 + 0x30);
      fVar46 = _DAT_142e36f50 / SQRT(fVar28 - fVar26);
      fVar42 = fVar42 * fVar43 + fVar25;
      fVar44 = _DAT_142e36f50 / SQRT(fVar26 + fVar28);
      uVar6 = (uint)(0.0 < fVar26);
      uVar57 = (int)(uVar6 << 0x1f) >> 0x1f;
      uVar58 = (int)(uVar6 << 0x1f) >> 0x1f;
      uVar59 = (int)(uVar6 << 0x1f) >> 0x1f;
      uVar60 = (int)(uVar6 << 0x1f) >> 0x1f;
      fVar45 = (float)(~uVar57 & (uint)(fVar46 * (fVar28 - fVar26)) |
                      (uint)(fVar44 * fVar42) & uVar57);
      uVar6 = ~uVar58 & (uint)(fVar42 * fVar46) | (uint)(fVar44 * (fVar26 + fVar28)) & uVar58;
      uVar57 = ~uVar59 & (uint)(fVar46 * (fVar39 * fVar43 + _DAT_1430151a0)) |
               (uint)((fVar49 + fVar28) * fVar44) & uVar59;
      fVar43 = (float)(~uVar60 & (uint)(fVar46 * (fVar49 + _UNK_1430151a4)) |
                      (uint)(fVar44 * (0.0 - fVar39 * fVar43)) & uVar60);
      fVar28 = *pfStack_2d8;
      fVar42 = pfStack_2d8[1];
      _auStack_338 = ZEXT416((uint)*pfStack_2d8);
      fStack_348 = fVar48;
      fStack_308 = fVar45;
      fStack_304 = (float)uVar6;
      fStack_300 = (float)uVar57;
      fStack_2fc = fVar43;
      puVar8 = (undefined8 *)pdb_1424e5b90(&fStack_308);
      fVar26 = _DAT_142e36f28 - (float)auStack_1d8._0_4_;
      fVar39 = (_DAT_143009bc0 + fVar26) / _DAT_14359cbd4;
      fVar46 = 0.0;
      if (0.0 <= fVar39) {
        fVar46 = fVar39;
      }
      fVar39 = _DAT_142e36f28;
      if (fVar46 <= _DAT_142e36f28) {
        fVar39 = fVar46;
      }
      fVar46 = (_DAT_142e3788c - (fVar39 + fVar39)) * fVar39 * fVar39;
      fVar50 = fVar46 * _DAT_142e3c608 + (_DAT_142e36f28 - fVar46) * 0.0 + _DAT_142e3798c;
      fVar46 = (fVar42 - fVar28) * (float)uStack_1a8;
      fStack_304 = _DAT_1430679a4 * fVar46;
      fStack_300 = 0.15;
      fStack_308 = fVar50;
      auVar32._0_8_ = pdb_141e3c580(&fStack_308);
      fVar44 = _DAT_142e37950 - (float)auStack_338._0_4_;
      fVar48 = _UNK_142e37954 - (float)auStack_338._4_4_;
      uVar5 = pdb_141e3c420(_DAT_143007998 * fVar44 + fVar28);
      fVar42 = _DAT_142e36f28;
      fVar39 = (float)auStack_328._0_4_ * _DAT_14301cb98 +
               (_DAT_142e36f28 - (float)auStack_328._0_4_) * _DAT_142e37ad0 +
               (float)auStack_1d8._0_4_ * _DAT_142e3c608 + fVar26 * _DAT_142e3b1d8;
      fVar46 = fVar46 * _DAT_142e36f50;
      fVar26 = fVar39 * 0.0;
      uStack_168._0_4_ =
           (fVar25 * fVar46 + fVar28 * (float)auStack_298._0_4_ + fStack_348 * fVar44) - fVar26;
      uStack_168._4_4_ = (fVar47 * fVar46 + fVar28 * fVar54 + (float)uStack_288 * fVar44) - fVar39;
      uStack_160._0_4_ = (fVar49 * fVar46 + fVar28 * fVar41 + uStack_288._4_4_ * fVar44) - fVar26;
      uStack_160._4_4_ =
           (_DAT_142e377f0 * _UNK_142e378e4 + _DAT_142e36f28 * 0.0 + _DAT_142e377f0 * fVar48) - 0.0;
      puStack_158 = (undefined8 *)0x7bff00003c000000;
      puStack_150 = (undefined8 *)CONCAT26(uVar5,(int6)auVar32._0_8_);
      uStack_140 = uStack_184;
      uStack_13c = 0;
      fStack_138 = 0.0;
      lStack_130 = 0x200000000;
      puStack_148 = puVar8;
      iStack_134 = iVar23;
      pdb_142816720(param_6,&uStack_168);
      fVar46 = fStack_348;
      fVar28 = _UNK_142e4e65c;
      iVar23 = iVar23 + 1;
      if (uVar24 != 2) {
        auStack_1d8 = (undefined1  [8])((longlong)auStack_218 + uVar24 * 4);
        fVar44 = (float)uStack_288;
        fVar48 = uStack_288._4_4_;
        uVar40 = auStack_298._0_4_;
        lVar19 = 1;
        pfVar11 = (float *)((longlong)auStack_218 + 8);
        pfVar18 = (float *)((longlong)auStack_218 + 4);
        do {
          pfVar10 = pfVar11;
          fVar51 = *pfVar18;
          fVar52 = (*pfVar10 - *pfVar18) * (float)uStack_1a8;
          fVar53 = fVar52 * _DAT_142e36f50;
          fStack_308 = fVar45;
          fStack_304 = (float)uVar6;
          fStack_300 = (float)uVar57;
          fStack_2fc = fVar43;
          puVar8 = (undefined8 *)pdb_1424e5b90(&fStack_308);
          fStack_304 = fVar52 * _DAT_1430679a4;
          fStack_300 = 0.15;
          fStack_308 = fVar50;
          auVar32._0_8_ = pdb_141e3c580(&fStack_308);
          uVar16 = (ulonglong)_DAT_14359c200 >> 0x20;
          fVar52 = (float)_DAT_14359c200 - fVar51;
          uVar5 = pdb_141e3c420();
          uStack_168._0_4_ = (fVar53 * fVar25 + fVar51 * (float)uVar40 + fVar52 * fVar46) - fVar26;
          uStack_168._4_4_ = (fVar53 * fVar47 + fVar51 * fVar54 + fVar52 * fVar44) - fVar39;
          uStack_160._0_4_ = (fVar53 * fVar49 + fVar51 * fVar41 + fVar52 * fVar48) - fVar26;
          uStack_160._4_4_ =
               (_UNK_14300c764 * fVar42 + fVar28 * 0.0 + ((float)uVar16 - 0.0) * fVar28) - 0.0;
          puStack_158 = (undefined8 *)0x7bff00003c000000;
          puStack_150 = (undefined8 *)CONCAT26(uVar5,(int6)auVar32._0_8_);
          uStack_140 = uStack_184;
          uStack_13c = 0;
          fStack_138 = 0.0;
          lStack_130 = (ulonglong)((lVar19 == uVar24 - 2 | bStack_f1) + 1) << 0x20;
          puStack_148 = puVar8;
          iStack_134 = iVar23;
          pdb_142816720(param_6,&uStack_168);
          lVar19 = lVar19 + 1;
          iVar23 = iVar23 + 1;
          pfVar11 = pfVar10 + 1;
          pfVar18 = pfVar10;
          unaff_XMM12_Db = fVar47;
          unaff_XMM12_Dc = fVar49;
          unaff_XMM12_Dd = fVar42;
        } while ((undefined1  [8])(pfVar10 + 1) != auStack_1d8);
      }
    }
    fVar28 = _DAT_142e36f28;
    if (lStack_2e0 != 0) {
      func_0x0001406abac0(auStack_218,lStack_2e0 << 2,4);
      fVar28 = _DAT_142e36f28;
    }
  }
  puStack_2a0 = puStack_518 + uStack_510;
  lStack_1e8 = (uStack_510 - 1) + (ulonglong)(uStack_510 == 0);
  puStack_220 = puStack_550 + uStack_548;
  lStack_170 = (uStack_548 - 1) + (ulonglong)(uStack_548 == 0);
  auStack_458[0] = *(undefined1 *)(lStack_120 + 0x54);
  uStack_480 = uStack_568;
  uStack_478 = uStack_560;
  auVar32._0_8_ = CONCAT44(fStack_448,(int)uStack_428);
  uStack_420 = CONCAT44(uStack_444,uStack_428._4_4_);
  lStack_118 = 1;
  puStack_1e0 = puStack_518;
  puStack_1b8 = puStack_518;
  puStack_190 = puStack_550;
  lStack_1b0 = 1;
  uStack_108 = 0;
  uStack_470 = uStack_570;
  puVar13 = puStack_518;
  puVar8 = puStack_550;
  uStack_428 = auVar32._0_8_;
  if ((uStack_570 & 1) == 0) goto LAB_142814590;
  do {
    if (lStack_1e8 == 0) {
      lStack_1e8 = 0;
      puVar9 = puVar13;
LAB_14281449a:
      ppuVar22 = &puStack_110;
      puVar20 = (undefined8 *)0x0;
      puVar17 = puStack_100;
      puVar3 = puVar8;
      uVar24 = uStack_108;
    }
    else {
      lStack_1e8 = lStack_1e8 + -1;
      puVar9 = puStack_2a0;
      if (puVar13 == puStack_2a0) goto LAB_14281449a;
      puVar9 = puVar13 + 1;
      if (lStack_118 == 0) {
        puVar21 = puStack_1b8;
        if (puStack_1b8 == puStack_2a0) {
LAB_142814483:
          puStack_1b8 = puVar21;
          lStack_118 = 0;
          goto LAB_14281449a;
        }
      }
      else {
        puVar21 = puStack_2a0;
        if ((ulonglong)((longlong)puStack_2a0 - (longlong)puStack_1b8) < 9) goto LAB_142814483;
        puStack_1b8 = puStack_1b8 + 1;
      }
      puVar21 = puStack_1b8 + 1;
      if (lStack_170 == 0) {
        lStack_118 = 0;
        lStack_170 = 0;
        puStack_1b8 = puVar21;
        goto LAB_14281449a;
      }
      lStack_170 = lStack_170 + -1;
      if (puVar8 == puStack_220) {
        lStack_118 = 0;
        puVar8 = puStack_220;
        puStack_1b8 = puVar21;
        goto LAB_14281449a;
      }
      if (lStack_1b0 == 0) {
        puVar17 = puStack_190;
        if (puStack_190 == puStack_220) goto LAB_14281451a;
      }
      else {
        puVar17 = puStack_220;
        if ((ulonglong)((longlong)puStack_220 - (longlong)puStack_190) < 9) {
LAB_14281451a:
          puStack_190 = puVar17;
          lStack_118 = 0;
          lStack_1b0 = 0;
          puVar8 = puVar8 + 1;
          puStack_1b8 = puVar21;
          goto LAB_14281449a;
        }
        puStack_190 = puStack_190 + 1;
      }
      lStack_118 = 0;
      lStack_1b0 = 0;
      uStack_178 = uStack_108;
      ppuVar22 = &puStack_378;
      puVar17 = puStack_1b8;
      puVar3 = puVar8 + 1;
      uVar24 = uStack_108 + 1;
      puVar20 = puStack_190;
      puStack_1b8 = puVar21;
      puStack_190 = puStack_190 + 1;
      puStack_180 = puVar8;
      puStack_110 = puVar13;
    }
    puVar8 = puVar3;
    *ppuVar22 = puVar20;
    if (puStack_110 == (undefined8 *)0x0) {
LAB_142815af6:
      if (lStack_558 != 0) {
        func_0x0001406abac0(puStack_550,lStack_558 << 3,4);
      }
      if (lStack_540 != 0) {
        func_0x0001406abac0(uStack_538,lStack_540 << 2,4);
      }
      if (lStack_520 != 0) {
        func_0x0001406abac0(puStack_518,lStack_520 << 3,4);
      }
      if (lStack_508 != 0) {
        func_0x0001406abac0(uStack_500,lStack_508 << 2,4);
      }
      if (lStack_418 != 0) {
        func_0x0001406abac0(lStack_410,lStack_418 << 3,4);
      }
      if (lStack_400 != 0) {
        func_0x0001406abac0(uStack_3f8,lStack_400 << 2,4);
      }
      return;
    }
    puVar13 = puVar9;
    uStack_108 = uVar24;
    puStack_100 = puVar17;
    if ((uStack_480 != uStack_178) && (uVar24 = uStack_178, uStack_478 != uStack_178)) {
      do {
        puStack_1e0 = puVar9;
        puVar21 = puStack_110;
        uVar12 = uStack_510;
        puVar9 = puStack_518;
        uVar16 = uStack_548;
        puVar13 = puStack_550;
        uVar40 = (undefined4)((ulonglong)puVar62 >> 0x20);
        if (uStack_548 <= uVar24) {
          pdb_142dc81f2(uVar24,uStack_548,&UNK_14359ccb8);
          goto LAB_142815e2b;
        }
        puStack_360 = puVar8;
        if (uStack_510 <= uVar24) {
          pdb_142dc81f2(uVar24,uStack_510,&UNK_14359ccd0);
          goto LAB_142815e2b;
        }
        uStack_1a8 = puStack_378;
        fVar54 = (float)puStack_550[uVar24] - (float)puStack_518[uVar24];
        fVar42 = (float)((ulonglong)puStack_550[uVar24] >> 0x20) -
                 (float)((ulonglong)puStack_518[uVar24] >> 0x20);
        uStack_318 = CONCAT44(fStack_464,fStack_468);
        fStack_310 = fStack_460;
        fStack_30c = fStack_45c;
        uStack_168._4_4_ = fVar42 * fStack_460 + fVar54 * fStack_468;
        uStack_168._0_4_ = fVar42 * fStack_45c + fVar54 * fStack_464;
        fVar54 = fVar28 / SQRT((float)uStack_168 * (float)uStack_168 +
                               uStack_168._4_4_ * uStack_168._4_4_);
        uStack_168._0_4_ = (float)uStack_168 * (float)((uint)fVar54 ^ _DAT_142e37820);
        uStack_168._4_4_ = uStack_168._4_4_ * fVar54;
        uStack_178 = uVar24;
        pdb_140df4520(&fStack_4c4,&uStack_168);
        fVar42 = (float)((ulonglong)puVar9[uStack_178] >> 0x20);
        fVar54 = (float)puVar9[uStack_178];
        fVar41 = (float)*(undefined8 *)(lStack_1f0 + 8);
        fVar46 = (float)((ulonglong)*(undefined8 *)(lStack_1f0 + 8) >> 0x20);
        uStack_168._0_4_ = fVar42 * fStack_310 + fVar54 * (float)uStack_318 + fVar41;
        uStack_168._4_4_ = fVar42 * fStack_30c + fVar54 * uStack_318._4_4_ + fVar46;
        pdb_140df4520(&fStack_4d0,&uStack_168);
        fVar25 = fStack_4bc;
        fVar42 = fStack_4c0;
        fVar54 = fStack_4c4;
        uVar24 = uStack_178 + 1;
        if (uVar12 <= uVar24) {
          pdb_142dc81f2(uVar24,uVar12,&UNK_14359cce8);
          goto LAB_142815e2b;
        }
        if (uVar16 <= uVar24) {
          pdb_142dc81f2(uVar24,uVar16,&UNK_14359cd00);
          goto LAB_142815e2b;
        }
        fVar43 = fStack_4d0 * fStack_4c4;
        fVar44 = (float)uStack_4cc;
        uVar24 = (ulonglong)uStack_4cc >> 0x20;
        fVar39 = (float)puVar9[uStack_178 + 1] - (float)puVar13[uStack_178 + 1];
        fVar26 = (float)((ulonglong)puVar9[uStack_178 + 1] >> 0x20) -
                 (float)((ulonglong)puVar13[uStack_178 + 1] >> 0x20);
        uStack_168._4_4_ = fVar26 * fStack_310 + fVar39 * (float)uStack_318;
        uStack_168._0_4_ = fVar26 * fStack_30c + fVar39 * uStack_318._4_4_;
        fVar39 = fVar28 / SQRT((float)uStack_168 * (float)uStack_168 +
                               uStack_168._4_4_ * uStack_168._4_4_);
        uStack_168._0_4_ = (float)uStack_168 * (float)((uint)fVar39 ^ _DAT_142e37820);
        uStack_168._4_4_ = uStack_168._4_4_ * fVar39;
        pdb_140df4520(&fStack_4dc,&uStack_168);
        fVar26 = (float)((ulonglong)puVar9[uStack_178 + 1] >> 0x20);
        fVar39 = (float)puVar9[uStack_178 + 1];
        uStack_168._0_4_ = fVar41 + fVar26 * fStack_310 + fVar39 * (float)uStack_318;
        uStack_168._4_4_ = fVar46 + fVar26 * fStack_30c + fVar39 * uStack_318._4_4_;
        pdb_140df4520(&fStack_4e8,&uStack_168);
        fStack_2fc = _DAT_14330c510 - ((float)uVar24 * fVar25 + fVar43 + fVar44 * fVar42);
        fStack_2ec = _DAT_14330c510 -
                     ((float)((ulonglong)uStack_4e4 >> 0x20) * fStack_4d4 +
                     fStack_4e8 * fStack_4dc + (float)uStack_4e4 * fStack_4d8);
        fStack_308 = fVar54;
        fStack_304 = fVar42;
        fStack_300 = fVar25;
        fStack_2f8 = fStack_4dc;
        fStack_2f4 = fStack_4d8;
        fStack_2f0 = fStack_4d4;
        auVar32._0_8_ = *puVar21;
        auVar29._0_8_ = *puStack_100;
        auVar36._0_8_ = *puStack_180;
        uVar1 = *uStack_1a8;
        uVar27 = pdb_140b77a00(lStack_120);
        fVar54 = (float)uStack_428 - ((float)auVar36._0_8_ + (float)uVar1) * _DAT_142e36f60;
        fVar25 = uStack_428._4_4_ -
                 ((float)((ulonglong)auVar36._0_8_ >> 0x20) + (float)((ulonglong)uVar1 >> 0x20)) *
                 _UNK_142e36f64;
        fVar42 = (float)uStack_428 - ((float)auVar32._0_8_ + (float)auVar29._0_8_) * _DAT_142e36f60;
        fVar41 = uStack_428._4_4_ -
                 ((float)((ulonglong)auVar32._0_8_ >> 0x20) +
                 (float)((ulonglong)auVar29._0_8_ >> 0x20)) * _UNK_142e36f64;
        puVar62 = (undefined *)CONCAT44(uVar40,uVar27);
        pdb_140b768b0(&lStack_2e0,&lStack_418,SQRT(fVar41 * fVar41 + fVar42 * fVar42),
                      SQRT(fVar25 * fVar25 + fVar54 * fVar54),puVar62);
        auVar32._0_8_ = func_0x000142e329c0(fStack_2b0 / _DAT_14359cbd8);
        auVar32._8_8_ = extraout_XMM0_Qb_02;
        if ((float)auVar32._0_8_ <= _DAT_142e37830) {
          auVar33._4_12_ = auVar32._4_12_;
          auVar33._0_4_ = _DAT_142e37830;
          auVar32._0_8_ = auVar33._0_8_;
        }
        fStack_1fc = (float)auVar32._0_8_;
        iVar7 = (int)fStack_1fc;
        if (_DAT_142e382cc < fStack_1fc) {
          iVar7 = 0x7fffffff;
        }
        if (NAN(fStack_1fc)) {
          iVar7 = 0;
        }
        uStack_168 = &fStack_1fc;
        uStack_160 = &lStack_418;
        puStack_158 = puVar21;
        puStack_150 = puStack_180;
        puStack_148 = puStack_100;
        uStack_140 = SUB84(uStack_1a8,0);
        uStack_13c = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
        fStack_138 = (float)lStack_120;
        iStack_134 = (int)((ulonglong)lStack_120 >> 0x20);
        lStack_130 = (ulonglong)(iVar7 - 1) << 0x20;
        pdb_140fc8030(&uStack_278,&uStack_168);
        uVar24 = uStack_268;
        puVar8 = puStack_360;
        if ((uStack_268 == 0) || (pfStack_270 + uStack_268 * 6 + -6 == (float *)0x0)) {
          pdb_142dc8150(&UNK_14359cd18);
          goto LAB_142815e2b;
        }
        puStack_158 = *(undefined8 **)(pfStack_270 + uStack_268 * 6 + -2);
        auVar32._0_8_ = *(undefined8 *)(pfStack_270 + uStack_268 * 6 + -6);
        uStack_168._0_4_ = (float)auVar32._0_8_;
        uStack_168._4_4_ = (float)((ulonglong)auVar32._0_8_ >> 0x20);
        uStack_160._0_4_ = (float)*(undefined8 *)(pfStack_270 + uStack_268 * 6 + -4);
        uStack_160._4_4_ =
             (float)((ulonglong)*(undefined8 *)(pfStack_270 + uStack_268 * 6 + -4) >> 0x20);
        if (uStack_268 == uStack_278) {
          pdb_142d89250(&uStack_278);
        }
        *(undefined8 **)(pfStack_270 + uVar24 * 6 + 4) = puStack_158;
        *(ulonglong *)(pfStack_270 + uVar24 * 6) = CONCAT44(uStack_168._4_4_,(float)uStack_168);
        *(ulonglong *)(pfStack_270 + uVar24 * 6 + 2) = CONCAT44(uStack_160._4_4_,(float)uStack_160);
        uStack_268 = uVar24 + 1;
        pfStack_2a8 = pfStack_270 + uVar24 * 6 + 6;
        bVar14 = true;
        pfVar11 = pfStack_270;
        uVar24 = 0;
        while (pfVar11 != pfStack_2a8) {
          pfVar18 = pfVar11 + 6;
          pfVar10 = pfVar11;
          if (bVar14) {
            if (pfVar18 == pfStack_2a8) {
              pfStack_368 = pfStack_2a8;
              break;
            }
            pfVar10 = pfVar18;
            pfStack_368 = pfVar11;
            pfVar18 = pfVar11 + 0xc;
          }
          uStack_288 = CONCAT44(uStack_288._4_4_,pfStack_368[4]);
          fVar25 = *pfStack_368;
          fVar41 = pfStack_368[1];
          fVar46 = pfStack_368[2];
          fVar39 = pfStack_368[3];
          fVar54 = pfStack_368[5];
          auVar32._0_8_ = *(undefined8 *)pfVar10;
          auVar29._0_8_ = *(undefined8 *)(pfVar10 + 2);
          fVar42 = pfVar10[5];
          fVar44 = (float)*(undefined8 *)(pfStack_368 + 2);
          fVar45 = (float)((ulonglong)*(undefined8 *)(pfStack_368 + 2) >> 0x20);
          fVar26 = fVar25 - fVar44;
          fVar43 = fVar41 - fVar45;
          fVar26 = SQRT(fVar43 * fVar43 + fVar26 * fVar26);
          auVar34._4_4_ = unaff_XMM12_Db;
          auVar34._0_4_ = fVar26;
          auVar34._8_4_ = unaff_XMM12_Dc;
          auVar34._12_4_ = unaff_XMM12_Dd;
          auVar35._4_12_ = auVar34._4_12_;
          auVar35._0_4_ = fVar26 + fVar26;
          pfStack_368 = pfVar10;
          auVar36._0_8_ = func_0x000142e329c0(auVar35._0_8_);
          auVar36._8_8_ = extraout_XMM0_Qb_03;
          if ((float)auVar36._0_8_ <= _DAT_142e3788c) {
            auVar37._4_12_ = auVar36._4_12_;
            auVar37._0_4_ = _DAT_142e3788c;
            auVar36._0_8_ = auVar37._0_8_;
          }
          fVar43 = (float)auVar36._0_8_;
          iVar7 = (int)fVar43;
          if (_DAT_142e382cc < fVar43) {
            iVar7 = 0x7fffffff;
          }
          if (NAN(fVar43)) {
            iVar7 = 0;
          }
          puVar62 = &UNK_14359cd30;
          pdb_140de8290(&lStack_390,(longlong)iVar7 + 1,0.0 / fVar26,&uStack_1f8,&UNK_14359cd30);
          uStack_260 = CONCAT44((fVar45 + fVar41) * _UNK_142e36f64,
                                (fVar44 + fVar25) * _DAT_142e36f60);
          pdb_140df4540(afStack_258,&uStack_260,fVar54);
          uStack_1c0 = CONCAT44(((float)((ulonglong)auVar32._0_8_ >> 0x20) +
                                (float)((ulonglong)auVar29._0_8_ >> 0x20)) * _UNK_142e36f64,
                                ((float)auVar32._0_8_ + (float)auVar29._0_8_) * _DAT_142e36f60);
          pdb_140df4540(&uStack_168,&uStack_1c0,fVar42);
          if (uVar24 == uStack_268 - 2) {
            if (uStack_268 < 2) {
              pdb_142dc81f2(uVar24,uStack_268,&UNK_14359cd48);
              goto LAB_142815e2b;
            }
            lVar19 = uStack_268 - 3;
            if (uStack_268 == 2) {
              pdb_142dc81f2(0xffffffffffffffff,2,&UNK_14359cd60);
              goto LAB_142815e2b;
            }
            auVar32._0_8_ = *(undefined8 *)(pfStack_270 + lVar19 * 6);
            auVar29._0_8_ = *(undefined8 *)(pfStack_270 + lVar19 * 6 + 2);
            fVar42 = pfStack_270[lVar19 * 6 + 5];
            uStack_168._0_4_ =
                 ((float)*(undefined8 *)(pfStack_270 + uVar24 * 6 + 2) +
                 (float)*(undefined8 *)(pfStack_270 + uVar24 * 6)) * _DAT_142e36f60;
            uStack_168._4_4_ =
                 ((float)((ulonglong)*(undefined8 *)(pfStack_270 + uVar24 * 6 + 2) >> 0x20) +
                 (float)((ulonglong)*(undefined8 *)(pfStack_270 + uVar24 * 6) >> 0x20)) *
                 _UNK_142e36f64;
            pdb_140df4540(&fStack_3c4,&uStack_168,pfStack_270[uVar24 * 6 + 5]);
            uStack_168._0_4_ = ((float)auVar32._0_8_ + (float)auVar29._0_8_) * _DAT_142e36f60;
            uStack_168._4_4_ =
                 ((float)((ulonglong)auVar32._0_8_ >> 0x20) +
                 (float)((ulonglong)auVar29._0_8_ >> 0x20)) * _UNK_142e36f64;
            pdb_140df4540(&fStack_3d0,&uStack_168,fVar42);
            fVar44 = (fStack_3c0 - fStack_3cc) * (fStack_3c0 - fStack_3cc);
            fVar45 = fStack_3c4;
            fVar47 = fStack_3bc;
            fVar43 = fStack_3c8;
            fVar42 = fStack_3d0;
          }
          else {
            fVar44 = (afStack_258[1] - uStack_168._4_4_) * (afStack_258[1] - uStack_168._4_4_);
            fVar45 = afStack_258[0];
            fVar47 = afStack_258[2];
            fVar43 = (float)uStack_160;
            fVar42 = (float)uStack_168;
          }
          uVar16 = uStack_380;
          auStack_218._0_4_ =
               SQRT((fVar47 - fVar43) * (fVar47 - fVar43) +
                    fVar44 + (fVar45 - fVar42) * (fVar45 - fVar42));
          pdb_14007ee60();
          pfVar11 = (float *)func_0x0001406abab0(0x10,4);
          if (pfVar11 == (float *)0x0) {
            pdb_142dc7e11(4,0x10);
            goto LAB_142815e2b;
          }
          *pfVar11 = fVar25;
          pfVar11[1] = fVar41;
          pfVar11[2] = fVar46;
          pfVar11[3] = fVar39;
          uStack_168._0_4_ = 2.8026e-45;
          uStack_168._4_4_ = 0.0;
          uStack_160._0_4_ = SUB84(pfVar11,0);
          uStack_160._4_4_ = (float)((ulonglong)pfVar11 >> 0x20);
          puStack_158 = (undefined8 *)0x2;
          pdb_142802830(afStack_258,&uStack_168,&UNK_14359cd78);
          uStack_488 = uVar24 + 1;
          auStack_218._0_4_ = (float)auStack_218._0_4_ * _DAT_14359cbdc;
          auStack_438._0_8_ = pfVar18;
          auStack_328._0_8_ = uVar24;
          auStack_298._0_4_ = (float)uVar24;
          auStack_338[0] = uVar24 == 0 | bStack_f1;
          uVar24 = 0;
          fStack_448 = fVar26;
          fStack_348 = fVar54;
          while (uVar24 < uVar16 - 1) {
            if (uVar16 <= uVar24) {
              pdb_142dc81f2(uVar24,uVar16,&UNK_14359ce08);
              goto LAB_142815e2b;
            }
            fVar54 = *(float *)(lStack_388 + uVar24 * 4);
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,fVar54);
            if ((fVar54 < 0.0) || (fVar28 < fVar54)) {
              uStack_168 = (float *)&uStack_1c0;
              uStack_160._0_4_ = 7.7206726;
              uStack_160._4_4_ = 1.4013e-45;
              pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359ce20);
              goto LAB_142815e2b;
            }
            uVar24 = uVar24 + 1;
            if (uVar16 <= uVar24) {
              pdb_142dc81f2(uVar24,uVar16,&UNK_14359ce38);
              goto LAB_142815e2b;
            }
            fVar42 = *(float *)(lStack_388 + uVar24 * 4);
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,fVar42);
            if ((fVar42 < 0.0) || (fVar28 < fVar42)) {
              uStack_168 = (float *)&uStack_1c0;
              uStack_160._0_4_ = 7.7206726;
              uStack_160._4_4_ = 1.4013e-45;
              pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359ce50);
              goto LAB_142815e2b;
            }
            uVar6 = pdb_142802660(afStack_258);
            uVar12 = uStack_248;
            uVar15 = (ulonglong)uVar6;
            if (uStack_248 <= uVar15) {
              pdb_142dc81f2(uVar15,uStack_248,&UNK_14359b2b0);
              goto LAB_142815e2b;
            }
            if (uStack_248 <= uVar15 + 1) {
              pdb_142dc81f2(uVar15 + 1,uStack_248,&UNK_14359b2c8);
              goto LAB_142815e2b;
            }
            lVar19 = CONCAT44(uStack_24c,afStack_258[2]);
            auVar32._0_8_ = *(undefined8 *)(lVar19 + uVar15 * 8);
            auVar29._0_8_ = *(undefined8 *)(lVar19 + 8 + uVar15 * 8);
            fVar25 = (float)*(undefined8 *)(lStack_1f0 + 8);
            fVar41 = (float)((ulonglong)*(undefined8 *)(lStack_1f0 + 8) >> 0x20);
            uVar6 = pdb_142802660(afStack_258);
            uVar15 = (ulonglong)uVar6;
            if (uVar12 <= uVar15) {
              pdb_142dc81f2(uVar15,uVar12,&UNK_14359b2b0);
              goto LAB_142815e2b;
            }
            if (uVar12 <= uVar15 + 1) {
              pdb_142dc81f2(uVar15 + 1,uVar12,&UNK_14359b2c8);
              goto LAB_142815e2b;
            }
            fVar39 = extraout_XMM0_Da_01 * (float)auVar29._0_8_ +
                     (fVar28 - extraout_XMM0_Da_01) * (float)auVar32._0_8_;
            fVar26 = extraout_XMM0_Da_01 * (float)((ulonglong)auVar29._0_8_ >> 0x20) +
                     (fVar28 - extraout_XMM0_Da_01) * (float)((ulonglong)auVar32._0_8_ >> 0x20);
            auVar32._0_8_ = *(undefined8 *)(lVar19 + uVar15 * 8);
            auVar29._0_8_ = *(undefined8 *)(lVar19 + 8 + uVar15 * 8);
            fVar43 = extraout_XMM0_Da_02 * (float)auVar29._0_8_ +
                     (fVar28 - extraout_XMM0_Da_02) * (float)auVar32._0_8_;
            fVar44 = extraout_XMM0_Da_02 * (float)((ulonglong)auVar29._0_8_ >> 0x20) +
                     (fVar28 - extraout_XMM0_Da_02) * (float)((ulonglong)auVar32._0_8_ >> 0x20);
            fVar46 = fVar26 * fStack_310 + fVar39 * (float)uStack_318 + fVar25;
            fVar39 = fVar26 * fStack_30c + fVar39 * uStack_318._4_4_ + fVar41;
            fVar25 = fVar44 * fStack_310 + fVar43 * (float)uStack_318 + fVar25;
            fVar41 = fVar44 * fStack_30c + fVar43 * uStack_318._4_4_ + fVar41;
            fVar26 = fVar46 - fVar25;
            fVar43 = fVar39 - fVar41;
            fVar45 = SQRT(fVar43 * fVar43 + fVar26 * fVar26);
            fVar44 = fVar28 / fVar45;
            fVar26 = fVar44 * fVar26;
            fVar44 = fVar44 * fVar43;
            uStack_490 = CONCAT44(fVar44,fVar26);
            uStack_260 = CONCAT44(fVar26,(uint)fVar44 ^ _DAT_142e37820);
            uStack_1c0 = CONCAT44((fVar41 + fVar39) * _UNK_142e36f64,
                                  (fVar25 + fVar46) * _DAT_142e36f60);
            pdb_140df4540(&uStack_358,&uStack_1c0,fStack_348);
            fVar25 = (float)pdb_140e02880(&uStack_1f8);
            fVar41 = (fVar28 - fVar25) * _DAT_142e3c670;
            fVar25 = fVar25 * _DAT_142e37990;
            uVar6 = pdb_142802660(&lStack_2e0);
            uVar12 = (ulonglong)uVar6;
            if (uStack_2d0 <= uVar12 + 1) {
              pdb_142dc81f2(uVar12 + 1,uStack_2d0,&UNK_14359b2e0);
              goto LAB_142815e2b;
            }
            fVar46 = pfStack_2d8[uVar12 * 2 + 2] - pfStack_2d8[uVar12 * 2];
            fVar39 = pfStack_2d8[uVar12 * 2 + 3] - pfStack_2d8[uVar12 * 2 + 1];
            fVar28 = fVar28 / SQRT(fVar39 * fVar39 + fVar46 * fVar46);
            func_0x000142e32990((fVar28 * fVar39) / (fVar46 * fVar28));
            pdb_140df4520(&fStack_4a0,&uStack_490);
            fVar26 = fStack_498;
            fVar39 = fStack_49c;
            fVar46 = fStack_4a0;
            pdb_140df4520(&uStack_168,&uStack_260);
            fVar28 = _DAT_142e36f50;
            auStack_1d8._0_4_ = fVar42;
            uStack_1a8 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,fVar45);
            fVar42 = (float)func_0x000142e32b30();
            fVar49 = fVar46 * fVar42;
            fVar50 = fVar39 * fVar42;
            fVar51 = fVar26 * fVar42;
            fVar43 = (float)func_0x000142e329e0();
            fVar45 = fVar51 * fVar51;
            fVar47 = fVar43 * fVar43;
            fVar48 = fVar50 * fVar50 + fVar49 * fVar49;
            fVar44 = fVar51 * (float)uStack_160 +
                     fVar50 * uStack_168._4_4_ + fVar49 * (float)uStack_168;
            fVar44 = fVar44 + fVar44;
            fVar53 = fVar43 + fVar43;
            fVar52 = fVar53 * (fVar50 * (float)uStack_160 - uStack_168._4_4_ * fVar51) +
                     fVar44 * fVar49 + (fVar47 - (fVar48 + fVar45)) * (float)uStack_168;
            unaff_XMM12_Db =
                 fVar53 * (fVar51 * (float)uStack_168 - (float)uStack_160 * fVar49) +
                 fVar44 * fVar50 + (fVar47 - (fVar48 + fVar45)) * uStack_168._4_4_;
            unaff_XMM12_Dc =
                 fVar53 * (fVar49 * uStack_168._4_4_ - (float)uStack_168 * fVar50) +
                 fVar44 * fVar51 + (fVar47 - (fVar48 + fVar45)) * (float)uStack_160;
            unaff_XMM12_Dd =
                 fVar53 * (fVar42 * 0.0 * 0.0 - fVar42 * 0.0 * 0.0) +
                 fVar44 * fVar43 + (fVar47 - (fVar48 + fVar45)) * (float)uStack_160;
            fVar42 = fVar26 * unaff_XMM12_Db - fVar39 * unaff_XMM12_Dc;
            fVar43 = fVar46 * unaff_XMM12_Dc - fVar26 * fVar52;
            fVar44 = fVar39 * fVar52 - fVar46 * unaff_XMM12_Db;
            pfVar11 = &fStack_308;
            if (fVar28 < fVar54) {
              pfVar11 = &fStack_2f8;
            }
            uStack_588 = *(undefined8 *)pfVar11;
            uStack_580 = *(undefined8 *)(pfVar11 + 2);
            if (fVar44 <= 0.0) {
              uStack_168._4_4_ = (float)((uint)unaff_XMM12_Db ^ _DAT_142e37820) - fVar46;
              if (uStack_168._4_4_ <= 0.0) {
                uStack_168._4_4_ = (_DAT_142e36f28 - fVar44) - uStack_168._4_4_;
                uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
                uStack_168._0_4_ = uStack_168._4_4_ * uStack_160._4_4_;
                uStack_168._4_4_ = (fVar39 - fVar52) * uStack_160._4_4_;
                uStack_160._0_4_ = (fVar42 + fVar26) * uStack_160._4_4_;
                uStack_160._4_4_ =
                     ((float)((uint)unaff_XMM12_Dc ^ _DAT_142e37820) - fVar43) * uStack_160._4_4_;
              }
              else {
                uStack_168._4_4_ = uStack_168._4_4_ + (_DAT_142e36f28 - fVar44);
                uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
                uStack_168._0_4_ = (fVar39 - fVar52) * uStack_160._4_4_;
                uStack_168._4_4_ = uStack_168._4_4_ * uStack_160._4_4_;
                uStack_160._0_4_ = (fVar43 - unaff_XMM12_Dc) * uStack_160._4_4_;
                uStack_160._4_4_ = (fVar42 - fVar26) * uStack_160._4_4_;
              }
            }
            else {
              uStack_160._4_4_ = fVar46 - unaff_XMM12_Db;
              if (uStack_160._4_4_ <= 0.0) {
                uStack_160._4_4_ = (fVar44 + _UNK_1430140f4) - uStack_160._4_4_;
                fVar28 = _DAT_142e36f50 / SQRT(uStack_160._4_4_);
                uStack_168._0_4_ = (fVar42 + fVar26) * fVar28;
                uStack_168._4_4_ = ((fVar43 + _DAT_1430140f0) - unaff_XMM12_Dc) * fVar28;
                uStack_160._0_4_ = uStack_160._4_4_ * fVar28;
                uStack_160._4_4_ = (fVar39 + fVar52) * fVar28;
              }
              else {
                uStack_160._4_4_ = uStack_160._4_4_ + fVar44 + _UNK_1430140f4;
                fVar28 = _DAT_142e36f50 / SQRT(uStack_160._4_4_);
                uStack_168._0_4_ =
                     ((float)((uint)unaff_XMM12_Dc ^ _DAT_142e37820) - fVar43) * fVar28;
                uStack_168._4_4_ = (fVar42 - fVar26) * fVar28;
                uStack_160._0_4_ = (fVar39 + fVar52) * fVar28;
                uStack_160._4_4_ = uStack_160._4_4_ * fVar28;
              }
            }
            uVar27 = (float)uStack_1a8;
            uVar40 = auStack_1d8._0_4_;
            puVar8 = (undefined8 *)pdb_1424e5b90(&uStack_168);
            fVar28 = _DAT_142e36f28;
            uStack_168._0_4_ = (float)uStack_588;
            uStack_168._4_4_ = (float)((ulonglong)uStack_588 >> 0x20);
            uStack_160._0_4_ = (float)uStack_580;
            uStack_160._4_4_ = (float)((ulonglong)uStack_580 >> 0x20);
            puVar13 = (undefined8 *)pdb_141e3c5c0(&uStack_168);
            fVar42 = (fVar25 + fVar41) * (float)auStack_218._0_4_;
            uStack_168._0_4_ = (float)uVar27;
            uStack_160._0_4_ = 0.1;
            uStack_168._4_4_ = fVar42;
            auVar32._0_8_ = pdb_140df4560(&uStack_168);
            pdb_140e02880(&uStack_1f8);
            uVar5 = pdb_141e3c420();
            uVar6 = 2;
            if ((auStack_338[0] == '\0') &&
               ((auStack_458[0] == '\0' ||
                ((_DAT_142e36f50 <= fVar54 * fStack_448 &&
                 (_DAT_142e36f50 <= (fVar28 - (float)uVar40) * fStack_448)))))) {
              uVar6 = 1;
            }
            uStack_160._0_4_ = fStack_350;
            uStack_168._0_4_ = (float)uStack_358;
            uStack_168._4_4_ = (float)((ulonglong)uStack_358 >> 0x20);
            uStack_160._4_4_ = 0.0;
            puStack_150 = (undefined8 *)CONCAT26(uVar5,(int6)auVar32._0_8_);
            uStack_140 = uStack_184;
            uStack_13c = 0;
            fStack_138 = 0.0;
            lStack_130 = (ulonglong)uVar6 << 0x20;
            puStack_158 = puVar13;
            puStack_148 = puVar8;
            iStack_134 = iVar23;
            pdb_142816720(param_6,&uStack_168);
            if (auStack_328._0_8_ == 0) {
              fVar54 = unaff_XMM12_Db * fVar42;
              uStack_168._0_4_ = fVar52 * fVar42 * _DAT_143035ef0;
              unaff_XMM12_Db = unaff_XMM12_Dc * fVar42 * _UNK_143035ef8;
              unaff_XMM12_Dd = _DAT_142e36f28 * _UNK_142e378e4 * _UNK_143035efc;
              fVar25 = (float)uStack_358 - (float)uStack_168;
              fVar41 = (float)((ulonglong)uStack_358 >> 0x20) - fVar54 * _UNK_143035ef4;
              fVar43 = fStack_350 - unaff_XMM12_Db;
              fVar44 = _DAT_142e36f28 - unaff_XMM12_Dd;
              uStack_168._0_4_ = (float)uStack_358 + (float)uStack_168;
              uStack_168._4_4_ = fStack_350 + unaff_XMM12_Db;
              pdb_140df4540(&fStack_3b8,&uStack_168,fVar41);
              fVar54 = fStack_3b8 - fVar25;
              fVar42 = fStack_3b0 - fVar43;
              fVar54 = SQRT(fVar42 * fVar42 +
                            (fStack_3b4 - fVar41) * (fStack_3b4 - fVar41) + fVar54 * fVar54);
              unaff_XMM12_Dc = unaff_XMM12_Db;
              if (_DAT_142e3b1d8 < fVar54) {
                uStack_3dc = uVar27;
                uStack_3d4 = 0x3dcccccd;
                fVar47 = fStack_3b8 * _DAT_143314dc0;
                fVar48 = fStack_3b4 * _UNK_143314dc4;
                fVar49 = fStack_3b0 * _UNK_143314dc8;
                fVar50 = _DAT_142e36f28 * _UNK_143314dcc;
                fVar25 = fVar25 * _DAT_143035ef0;
                fVar41 = fVar41 * _UNK_143035ef4;
                fVar43 = fVar43 * _UNK_143035ef8;
                fVar44 = fVar44 * _UNK_143035efc;
                fVar45 = fVar39 * 0.0 - fVar46;
                fVar42 = (fVar26 * _DAT_142e377f0 + fVar46 * 0.0) - fVar46 * _DAT_142e36f28;
                fVar46 = fVar26 - fVar39 * 0.0;
                if (fVar42 <= 0.0) {
                  uStack_160._4_4_ = _DAT_142e36f50 / SQRT(_DAT_143277eb0 - fVar42);
                  uStack_168._0_4_ = uStack_160._4_4_ * (_DAT_143277eb0 - fVar42);
                  uStack_168._4_4_ = uStack_160._4_4_ * (fVar46 + fVar39);
                  uStack_160._0_4_ = uStack_160._4_4_ * (fVar26 + _UNK_143277eb8);
                  uStack_160._4_4_ = uStack_160._4_4_ * (fVar45 + _UNK_143277ebc);
                }
                else {
                  uStack_160._4_4_ = _DAT_142e36f50 / SQRT(fVar28 + fVar42);
                  uStack_168._0_4_ = uStack_160._4_4_ * (fVar39 + fVar46);
                  uStack_168._4_4_ = uStack_160._4_4_ * (fVar28 + fVar42);
                  uStack_160._0_4_ = (fVar45 + fVar28) * uStack_160._4_4_;
                  uStack_160._4_4_ = uStack_160._4_4_ * (0.0 - fVar26);
                }
                fStack_3d8 = fVar54;
                puVar8 = (undefined8 *)pdb_1424e5b90(&uStack_168);
                puVar13 = (undefined8 *)pdb_141e3c5c0(&uStack_588);
                auVar32._0_8_ = pdb_140df4560(&uStack_3dc);
                uVar5 = pdb_141e3c420();
                uStack_168._0_4_ = fVar25 + fVar47;
                uStack_168._4_4_ = fVar41 + fVar48;
                uStack_160._0_4_ = fVar43 + fVar49;
                uStack_160._4_4_ = fVar44 + fVar50;
                puStack_150 = (undefined8 *)CONCAT26(uVar5,(int6)auVar32._0_8_);
                uStack_140 = uStack_184;
                uStack_13c = 0;
                fStack_138 = 0.0;
                lStack_130 = 0x200000000;
                puStack_158 = puVar13;
                puStack_148 = puVar8;
                iStack_134 = iVar23;
                pdb_142816720(param_6,&uStack_168);
              }
            }
            iVar23 = iVar23 + 1;
          }
          if (CONCAT44(afStack_258[1],afStack_258[0]) != 0) {
            func_0x0001406abac0(CONCAT44(uStack_24c,afStack_258[2]),
                                CONCAT44(afStack_258[1],afStack_258[0]) << 3,4);
          }
          puVar8 = puStack_360;
          pfVar11 = (float *)auStack_438._0_8_;
          if (lStack_240 != 0) {
            func_0x0001406abac0(uStack_238,lStack_240 << 2,4);
          }
          if (lStack_390 != 0) {
            func_0x0001406abac0(lStack_388,lStack_390 << 2,4);
          }
          bVar14 = false;
          uVar24 = uStack_488;
        }
        if (uStack_278 != 0) {
          func_0x0001406abac0(pfStack_270,uStack_278 * 0x18,4);
        }
        if (lStack_2e0 != 0) {
          func_0x0001406abac0(pfStack_2d8,lStack_2e0 << 3,4);
        }
        if (lStack_2c8 != 0) {
          func_0x0001406abac0(uStack_2c0,lStack_2c8 << 2,4);
        }
        puVar13 = puStack_1e0;
        if ((uStack_470 & 1) != 0) break;
LAB_142814590:
        uVar24 = uStack_178;
        if (lStack_1e8 == 0) {
          lStack_1e8 = 0;
          puVar9 = puStack_1e0;
LAB_1428146ca:
          ppuVar22 = &puStack_110;
          puVar13 = (undefined8 *)0x0;
        }
        else {
          lStack_1e8 = lStack_1e8 + -1;
          puVar9 = puStack_2a0;
          if (puStack_1e0 == puStack_2a0) goto LAB_1428146ca;
          puVar9 = puStack_1e0 + 1;
          if (lStack_118 == 0) {
            if (puStack_1b8 == puStack_2a0) {
LAB_1428146b4:
              lStack_118 = 0;
            }
            else {
              puVar21 = puStack_1b8 + 1;
              puVar13 = puStack_1b8;
              puStack_1b8 = puVar21;
              if (lStack_170 != 0) goto LAB_1428145ec;
LAB_142815a2f:
              lStack_118 = 0;
              lStack_170 = 0;
            }
            goto LAB_1428146ca;
          }
          if ((ulonglong)((longlong)puStack_2a0 - (longlong)puStack_1b8) < 9) {
            puStack_1b8 = puStack_2a0;
            goto LAB_1428146b4;
          }
          puVar13 = puStack_1b8 + 1;
          puStack_1b8 = puStack_1b8 + 2;
          if (lStack_170 == 0) goto LAB_142815a2f;
LAB_1428145ec:
          lStack_170 = lStack_170 + -1;
          if (puVar8 == puStack_220) {
            lStack_118 = 0;
            puVar8 = puStack_220;
            goto LAB_1428146ca;
          }
          puVar21 = puVar8 + 1;
          if (lStack_1b0 == 0) {
            if (puStack_190 == puStack_220) {
              lStack_118 = 0;
              lStack_1b0 = 0;
              puVar8 = puVar21;
              goto LAB_1428146ca;
            }
LAB_14281462b:
            puStack_110 = puStack_1e0;
            lStack_118 = 0;
            lStack_1b0 = 0;
            ppuVar22 = &puStack_378;
            uVar24 = uStack_108;
            puStack_100 = puVar13;
            puStack_180 = puVar8;
            puVar8 = puVar21;
            uStack_108 = uStack_108 + 1;
            puVar13 = puStack_190;
            puStack_190 = puStack_190 + 1;
          }
          else {
            fVar28 = _DAT_142e36f28;
            if (8 < (ulonglong)((longlong)puStack_220 - (longlong)puStack_190)) {
              puStack_190 = puStack_190 + 1;
              goto LAB_14281462b;
            }
            lStack_118 = 0;
            puStack_190 = puStack_220;
            lStack_1b0 = 0;
            ppuVar22 = &puStack_110;
            puVar13 = (undefined8 *)0x0;
            puVar8 = puVar21;
          }
        }
        *ppuVar22 = puVar13;
        puStack_1e0 = puVar9;
        if (puStack_110 == (undefined8 *)0x0) goto LAB_142815af6;
      } while( true );
    }
  } while( true );
}

