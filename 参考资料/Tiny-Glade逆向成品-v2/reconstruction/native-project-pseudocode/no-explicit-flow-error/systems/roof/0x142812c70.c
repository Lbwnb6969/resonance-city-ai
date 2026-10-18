// VA 0x142812c70, PDB extent 15015 bytes
// system_roof::utils::assemble_rectangular_roof::assemble_rectangular_roof<system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/utils/assemble_rectangular_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::utils::assemble_rectangular_roof::assemble_rectangular_roof<system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/utils/assemble_rectangular_roof.rs
   Extent: 15015 */

void pdb_142812c70(longlong param_1,longlong param_2,undefined4 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  byte *pbVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  float *pfVar17;
  longlong lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte **ppbVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 uVar26;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
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
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  float fVar60;
  undefined8 in_stack_fffffffffffffa68;
  undefined4 uVar62;
  undefined *puVar61;
  undefined8 uStack_588;
  undefined8 uStack_580;
  ulonglong uStack_570;
  ulonglong uStack_568;
  ulonglong uStack_560;
  longlong lStack_558;
  byte *pbStack_550;
  ulonglong uStack_548;
  longlong lStack_540;
  byte *pbStack_538;
  longlong lStack_520;
  byte *pbStack_518;
  ulonglong uStack_510;
  longlong lStack_508;
  byte *pbStack_500;
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
  undefined4 uStack_420;
  undefined4 uStack_41c;
  longlong lStack_418;
  byte *pbStack_410;
  ulonglong uStack_408;
  longlong lStack_400;
  byte *pbStack_3f8;
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
  byte *pbStack_388;
  ulonglong uStack_380;
  byte *pbStack_378;
  undefined8 uStack_370;
  float *pfStack_368;
  byte *pbStack_360;
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
  byte *pbStack_2c0;
  float fStack_2b0;
  float *pfStack_2a8;
  byte *pbStack_2a0;
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
  byte *pbStack_238;
  byte *pbStack_220;
  undefined1 auStack_218 [8];
  float fStack_210;
  float fStack_1fc;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  byte *pbStack_1e0;
  undefined1 auStack_1d8 [8];
  float fStack_1d0;
  undefined8 uStack_1c0;
  byte *pbStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_190;
  undefined4 uStack_184;
  byte *pbStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  int iStack_134;
  longlong lStack_130;
  longlong lStack_120;
  longlong lStack_118;
  byte *pbStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
  byte bStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  uVar62 = (undefined4)((ulonglong)in_stack_fffffffffffffa68 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1f8 = 0;
  lStack_1f0 = param_1;
  uStack_184 = param_3;
  bStack_f1 = param_4;
  pdb_140b73b80(&uStack_168);
  pdb_140b73b00(afStack_258,&uStack_168);
  uVar5 = uStack_24c;
  fVar27 = afStack_258[2];
  lStack_120 = param_2;
  pdb_140b772d0(&lStack_418,param_2);
  pdb_140df2970(auStack_4b8);
  fVar53 = 0.0;
  uVar39 = 0;
  uVar26 = 0;
  uVar37 = 0;
  auVar31._0_8_ = pdb_140ac6200(lStack_120);
  puVar61 = (undefined *)CONCAT44(uVar62,fVar53);
  uStack_428 = auVar31._0_8_;
  pdb_140df1b90(&fStack_3a8);
  pdb_140df1c10(&fStack_468,lStack_1f0);
  cVar3 = pdb_140b77b60(lStack_120);
  if (cVar3 == '\0') {
    uStack_570 = 0;
    goto LAB_142812e90;
  }
  cVar3 = *(char *)(lStack_120 + 0x54);
  if (cVar3 == '\0') {
    fVar41 = _DAT_14359cbd0;
    if (*(char *)(lStack_120 + 0x3c) == '\0') goto LAB_142812e0f;
LAB_142812e50:
    fVar24 = (float)pdb_140b76870(lStack_120 + 0x24);
    pfVar10 = &fStack_4a4;
    pfVar17 = &fStack_394;
    fVar41 = fVar41 + fVar24;
  }
  else {
    fVar41 = _DAT_142e37ae4;
    if (*(char *)(lStack_120 + 0x3c) != '\0') goto LAB_142812e50;
LAB_142812e0f:
    fVar24 = (float)pdb_140b76870(lStack_120 + 0x24);
    pfVar10 = &fStack_4a8;
    pfVar17 = &fStack_398;
    fVar41 = fVar41 + fVar24;
  }
  if (cVar3 == '\0') {
    fVar41 = (float)((uint)fVar41 ^ _DAT_142e37820);
  }
  fVar24 = *pfVar10;
  *pfVar10 = fVar41 + fVar24;
  *pfVar17 = fVar41 + fVar24;
  pdb_140b77190(&uStack_570,lStack_120);
LAB_142812e90:
  pdb_140df37e0(&lStack_520,auStack_4b8);
  auStack_438 = ZEXT416((uint)fVar27);
  auStack_458 = ZEXT416(uVar5);
  fStack_448 = fVar53;
  uStack_444 = uVar39;
  uStack_440 = uVar26;
  uStack_43c = uVar37;
  pdb_140df37e0(&lStack_558,&fStack_3a8);
  auStack_338._4_4_ = fStack_464;
  auStack_338._0_4_ = fStack_468;
  uStack_330._4_4_ = fStack_45c;
  uStack_330._0_4_ = fStack_460;
  auStack_328._8_8_ = 0;
  auStack_328._0_8_ = *(ulonglong *)(lStack_1f0 + 8);
  iVar22 = 0;
  uVar23 = 0;
  fVar27 = _DAT_142e36f28;
  while( true ) {
    uVar26 = (undefined4)((ulonglong)puVar61 >> 0x20);
    uVar39 = (undefined4)((ulonglong)auVar31._0_8_ >> 0x20);
    if (3 < uVar23) break;
    fVar25 = (float)pdb_140b77a00(lStack_120);
    fVar44 = fVar25 * _DAT_143308d70;
    fVar46 = fVar25 * _UNK_143308d74;
    fVar47 = fVar25 * _UNK_143308d78;
    fVar48 = _UNK_142e378e4 * _UNK_143308d7c;
    pdb_140df0010(afStack_258,&fStack_3a8);
    fVar24 = (float)*(undefined8 *)(afStack_258 + uVar23 * 2);
    fVar40 = (float)((ulonglong)*(undefined8 *)(afStack_258 + uVar23 * 2) >> 0x20);
    pdb_140df0010(&uStack_168,auStack_4b8);
    fVar41 = (float)((ulonglong)(&uStack_168)[uVar23] >> 0x20);
    fVar53 = (float)(&uStack_168)[uVar23];
    fVar42 = (fVar40 * (float)uStack_330 + fVar24 * (float)auStack_338._0_4_ +
             (float)auStack_328._0_4_) -
             (fVar41 * (float)uStack_330 + fVar53 * (float)auStack_338._0_4_ +
             (float)auStack_328._0_4_);
    fVar43 = (fVar40 * uStack_330._4_4_ + fVar24 * (float)auStack_338._4_4_ +
             (float)auStack_328._4_4_) -
             (fVar41 * uStack_330._4_4_ + fVar53 * (float)auStack_338._4_4_ +
             (float)auStack_328._4_4_);
    uStack_370 = CONCAT44(fVar43,fVar42);
    pdb_140df4520(&uStack_168,&uStack_370);
    fVar45 = (float)uStack_160;
    fVar40 = uStack_168._4_4_;
    fVar41 = (float)uStack_168;
    fVar49 = (float)uStack_160 * fVar44;
    pdb_140df4520(&uStack_168,&uStack_370);
    fVar24 = (float)uStack_168;
    uStack_1a8 = (byte *)CONCAT44((float)uStack_160,uStack_168._4_4_);
    uStack_1a0 = 0;
    pdb_140df0010(&uStack_168,auStack_4b8);
    fVar38 = (float)((ulonglong)(&uStack_168)[uVar23] >> 0x20);
    fVar53 = (float)(&uStack_168)[uVar23];
    lStack_2e0 = CONCAT44(fVar38 * uStack_330._4_4_ + fVar53 * (float)auStack_338._4_4_ +
                          (float)auStack_328._4_4_,
                          fVar38 * (float)uStack_330 + fVar53 * (float)auStack_338._0_4_ +
                          (float)auStack_328._0_4_);
    pdb_140df4520(afStack_258,&lStack_2e0);
    fVar53 = afStack_258[0];
    uStack_288 = CONCAT44(afStack_258[2],afStack_258[1]);
    uStack_280 = 0;
    auVar31._0_8_ = CONCAT44(uVar39,SQRT(fVar43 * fVar43 + fVar42 * fVar42));
    pdb_140b768b0(&uStack_168,&lStack_418,0,auVar31._0_8_,
                  CONCAT44(uVar26,SQRT(fVar25 * fVar25 + fVar44 * fVar44 + fVar44 * fVar44)));
    fVar38 = fStack_138;
    if (CONCAT44(uStack_168._4_4_,(float)uStack_168) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_160._4_4_,(float)uStack_160),
                    CONCAT44(uStack_168._4_4_,(float)uStack_168) << 3,4);
    }
    if (pbStack_150 != (byte *)0x0) {
      pub_1406abac0(pbStack_148,(longlong)pbStack_150 << 2,4);
    }
    auVar28._0_8_ = pub_142e32b00(fVar38 / _DAT_14300c290);
    auVar28._8_8_ = extraout_XMM0_Qb;
    if ((float)auVar28._0_8_ <= _DAT_142e37830) {
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = _DAT_142e37830;
      auVar28._0_8_ = auVar29._0_8_;
    }
    fVar42 = (float)auVar28._0_8_;
    uVar14 = 0;
    if (0.0 <= fVar42) {
      uVar14 = (longlong)(fVar42 - _DAT_142e36f2c) & (longlong)fVar42 >> 0x3f | (longlong)fVar42;
    }
    if (_DAT_142e36f30 < fVar42) {
      uVar14 = 0xffffffffffffffff;
    }
    puVar61 = &UNK_14359cd90;
    pdb_140de8290(afStack_258,uVar14,_DAT_143015150 / fVar38,&uStack_1f8,&UNK_14359cd90);
    uVar14 = uStack_248;
    uStack_318 = uVar23 + 1;
    fStack_348 = fVar40 * fVar44 - fVar25 * fVar41;
    unaff_XMM12_Db = fVar45 * fVar46 - fVar40 * fVar44;
    unaff_XMM12_Dc = fVar41 * fVar47 - fVar49;
    unaff_XMM12_Dd = _UNK_142e4e65c * fVar48 - 0.0;
    fStack_340 = fVar27 / SQRT(unaff_XMM12_Db * unaff_XMM12_Db + unaff_XMM12_Dc * unaff_XMM12_Dc +
                               fStack_348 * fStack_348);
    fStack_348 = fStack_340 * fStack_348;
    fStack_344 = fStack_340 * unaff_XMM12_Db;
    fStack_340 = fStack_340 * unaff_XMM12_Dc;
    fStack_33c = _UNK_142e378e4 * unaff_XMM12_Dd;
    auStack_1d8._4_4_ = fVar25;
    auStack_1d8._0_4_ = fVar44;
    fStack_1d0 = fVar44;
    unique0x100009df = 0;
    auStack_218._4_4_ = (float)uStack_1a8;
    auStack_218._0_4_ = fVar24;
    fStack_210 = (float)uStack_1a8._4_4_;
    unique0x1000095f = 0;
    uVar39 = uStack_288._4_4_;
    uStack_288 = CONCAT44((float)uStack_288,fVar53);
    uStack_280 = CONCAT44(_UNK_142e4e65c,uVar39);
    lVar18 = CONCAT44(uStack_24c,afStack_258[2]);
    auStack_298._4_4_ = fStack_340 * 0.0;
    auStack_298._0_4_ = fStack_344 * 0.0;
    fStack_290 = fStack_348 * 0.0;
    uStack_28c = 0;
    uVar23 = 0;
    fVar53 = fVar27;
    if (uStack_248 != 1) {
      do {
        if (uVar14 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar14,&UNK_14359cda8);
        }
        fVar41 = *(float *)(lVar18 + uVar23 * 4);
        lStack_2e0 = CONCAT44(lStack_2e0._4_4_,fVar41);
        if ((fVar41 < 0.0) || (fVar53 < fVar41)) {
          uStack_168 = (float *)&lStack_2e0;
          uStack_160._0_4_ = 7.7206726;
          uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359cdc0);
        }
        uVar23 = uVar23 + 1;
        if (uVar14 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar14,&UNK_14359cdd8);
        }
        fVar27 = *(float *)(lVar18 + uVar23 * 4);
        lStack_2e0 = CONCAT44(lStack_2e0._4_4_,fVar27);
        if ((fVar27 < 0.0) || (fVar53 < fVar27)) {
          uStack_168 = (float *)&lStack_2e0;
          uStack_160._0_4_ = 7.7206726;
          uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359cdf0);
        }
        uVar5 = pdb_142802660(&lStack_418);
        uVar11 = (ulonglong)uVar5;
        if (uStack_408 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,uStack_408,&UNK_14359b2b0);
        }
        if (uStack_408 <= uVar11 + 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11 + 1,uStack_408,&UNK_14359b2c8);
        }
        fVar24 = *(float *)(pbStack_410 + uVar11 * 8);
        fVar40 = *(float *)(pbStack_410 + uVar11 * 8 + 4);
        fVar45 = *(float *)(pbStack_410 + uVar11 * 8 + 8);
        fVar38 = *(float *)(pbStack_410 + uVar11 * 8 + 0xc);
        uVar5 = pdb_142802660(&lStack_418);
        fVar27 = _DAT_142e36f28;
        uVar11 = (ulonglong)uVar5;
        if (uStack_408 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,uStack_408,&UNK_14359b2b0);
        }
        if (uStack_408 <= uVar11 + 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11 + 1,uStack_408,&UNK_14359b2c8);
        }
        uStack_1a8 = (byte *)CONCAT44(uStack_1a8._4_4_,fVar41);
        fVar45 = fVar24 * (fVar53 - extraout_XMM0_Da) + fVar45 * extraout_XMM0_Da;
        fVar24 = (fVar53 - extraout_XMM0_Da) * fVar40 + fVar38 * extraout_XMM0_Da;
        fVar41 = *(float *)(pbStack_410 + uVar11 * 8 + 8) * extraout_XMM0_Da_00 +
                 *(float *)(pbStack_410 + uVar11 * 8) * (fVar53 - extraout_XMM0_Da_00);
        fVar40 = *(float *)(pbStack_410 + uVar11 * 8 + 0xc) * extraout_XMM0_Da_00 +
                 (fVar53 - extraout_XMM0_Da_00) * *(float *)(pbStack_410 + uVar11 * 8 + 4);
        fVar47 = fVar45 * (float)auStack_218._0_4_ +
                 fVar24 * (float)auStack_1d8._0_4_ + (float)auStack_298._0_4_ + (float)uStack_288;
        fVar48 = fVar45 * (float)auStack_218._4_4_ +
                 fVar24 * (float)auStack_1d8._4_4_ + (float)auStack_298._4_4_ + uStack_288._4_4_;
        fVar49 = fVar45 * fStack_210 + fVar24 * fStack_1d0 + fStack_290 + (float)uStack_280;
        fVar24 = fVar41 * (float)auStack_218._0_4_ +
                 fVar40 * (float)auStack_1d8._0_4_ + (float)auStack_298._0_4_ + (float)uStack_288;
        fVar45 = fVar41 * (float)auStack_218._4_4_ +
                 fVar40 * (float)auStack_1d8._4_4_ + (float)auStack_298._4_4_ + uStack_288._4_4_;
        fVar41 = fVar41 * fStack_210 + fVar40 * fStack_1d0 + fStack_290 + (float)uStack_280;
        fVar25 = fVar47 - fVar24;
        fVar42 = fVar48 - fVar45;
        fVar43 = fVar49 - fVar41;
        fVar24 = fVar24 - fVar47;
        fVar45 = fVar45 - fVar48;
        fVar41 = fVar41 - fVar49;
        fVar38 = fVar53 / SQRT(fVar41 * fVar41 + fVar45 * fVar45 + fVar24 * fVar24);
        unaff_XMM12_Db = 0.0;
        unaff_XMM12_Dc = 0.0;
        unaff_XMM12_Dd = 0.0;
        fVar24 = fVar38 * fVar24;
        fVar45 = fVar38 * fVar45;
        fVar38 = fVar38 * fVar41;
        fVar50 = fVar45 * fStack_348 - fStack_340 * fVar38;
        fVar51 = fVar38 * fStack_344 - fStack_348 * fVar24;
        fVar52 = fVar24 * fStack_340 - fStack_344 * fVar45;
        fVar44 = fVar52 * fVar45 - fVar51 * fVar38;
        fVar46 = fVar50 * fVar38 - fVar52 * fVar24;
        fVar54 = fVar24 * fVar51 - fVar45 * fVar50;
        fVar40 = (fVar24 * _DAT_14359cbe0 - fVar44) + fVar50 * 0.0;
        fVar55 = (fVar44 * _DAT_14359cc00 - fVar24) + fVar50 * 0.0;
        fVar60 = SQRT(fVar43 * fVar43 + fVar42 * fVar42 + fVar25 * fVar25) + _DAT_142e37ad4;
        fVar25 = (fVar45 * _DAT_14359cbe0 - fVar46) + fVar51 * 0.0;
        uStack_168._4_4_ = (fVar46 * _DAT_14359cc00 - fVar45) + fVar51 * 0.0;
        fVar41 = fVar38 * 0.0 + fVar54 * 0.0 + fVar52;
        fVar42 = fVar52 * 0.0 + (fVar38 * _DAT_14359cbf0 - fVar54);
        fVar43 = fVar52 * 0.0 + (fVar54 * _UNK_14359cbf4 - fVar38);
        auVar31._0_8_ = CONCAT44(fVar43,fVar42);
        fVar44 = fVar24 * 0.0 + fVar44 * 0.0 + fVar50;
        fVar46 = fVar45 * 0.0 + fVar46 * 0.0 + fVar51;
        fVar24 = fVar60 * fVar24 * _DAT_14359cc10;
        fVar45 = fVar60 * fVar45 * _UNK_14359cc14;
        fVar38 = fVar60 * fVar38 * _UNK_14359cc18;
        fVar54 = _UNK_142e378e4 * _UNK_142e378e4 * (fVar53 - 0.0) * _UNK_14359cc1c;
        fVar50 = fVar50 * _DAT_14359cc20;
        fVar51 = fVar51 * _UNK_14359cc24;
        fVar52 = fVar52 * _UNK_14359cc28;
        fVar53 = (fVar53 * fStack_33c - 0.0) * _UNK_14359cc2c;
        if (fVar41 <= 0.0) {
          uStack_168._4_4_ = uStack_168._4_4_ - fVar40;
          if (uStack_168._4_4_ <= 0.0) {
            uStack_168._4_4_ = (_DAT_142e36f28 - fVar41) - uStack_168._4_4_;
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
            auVar31._0_8_ = CONCAT44(fVar42 - fVar44,fVar43 - fVar46);
            uStack_168._0_4_ = uStack_168._4_4_ * uStack_160._4_4_;
            uStack_168._4_4_ = (fVar25 + fVar55) * uStack_160._4_4_;
            uStack_160._0_4_ = (fVar42 + fVar44) * uStack_160._4_4_;
            uStack_160._4_4_ = (fVar43 - fVar46) * uStack_160._4_4_;
          }
          else {
            uStack_168._4_4_ = (_DAT_142e36f28 - fVar41) + uStack_168._4_4_;
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
            uStack_168._0_4_ = (fVar55 + fVar25) * uStack_160._4_4_;
            uStack_168._4_4_ = uStack_168._4_4_ * uStack_160._4_4_;
            uStack_160._0_4_ = (fVar46 + fVar43) * uStack_160._4_4_;
            uStack_160._4_4_ = (fVar44 - fVar42) * uStack_160._4_4_;
          }
        }
        else {
          fVar40 = fVar40 + uStack_168._4_4_;
          if (fVar40 <= 0.0) {
            fVar40 = (fVar41 + _DAT_142e36f28) - fVar40;
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(fVar40);
            auVar31._0_8_ = CONCAT44(fVar43 + fVar46,fVar42 + fVar44);
            uStack_168._0_4_ = uStack_160._4_4_ * (fVar42 + fVar44);
            uStack_168._4_4_ = uStack_160._4_4_ * (fVar43 + fVar46);
            uStack_160._0_4_ = fVar40 * uStack_160._4_4_;
            uStack_160._4_4_ = uStack_160._4_4_ * (fVar25 - fVar55);
          }
          else {
            fVar40 = fVar41 + _DAT_142e36f28 + fVar40;
            auVar31._0_8_ = CONCAT44(fVar40,fVar40);
            uStack_160._4_4_ = _DAT_142e36f50 / SQRT(fVar40);
            uStack_168._0_4_ = uStack_160._4_4_ * (fVar43 - fVar46);
            uStack_168._4_4_ = uStack_160._4_4_ * (fVar44 - fVar42);
            uStack_160._0_4_ = uStack_160._4_4_ * (fVar25 - fVar55);
            uStack_160._4_4_ = uStack_160._4_4_ * fVar40;
          }
        }
        pbVar7 = (byte *)pdb_1424e5b90(&uStack_168);
        uStack_168._0_4_ = 0.25;
        uStack_160._0_4_ = 0.18;
        uStack_168._4_4_ = fVar60;
        auVar28._0_8_ = pdb_141e3c580(&uStack_168);
        uVar4 = pdb_141e3c420();
        uStack_168._0_4_ = fVar47 + fVar24 + fVar50;
        uStack_168._4_4_ = fVar48 + fVar45 + fVar51;
        uStack_160._0_4_ = fVar49 + fVar38 + fVar52;
        uStack_160._4_4_ = fVar54 + 0.0 + fVar53;
        pbStack_158 = (byte *)0x7bff00003c000000;
        pbStack_150 = (byte *)CONCAT26(uVar4,(int6)auVar28._0_8_);
        uStack_140 = uStack_184;
        uStack_13c = 0;
        fStack_138 = 0.0;
        lStack_130 = 0x200000000;
        pbStack_148 = pbVar7;
        iStack_134 = iVar22;
        pdb_142816720(param_6,&uStack_168);
        iVar22 = iVar22 + 1;
        fVar53 = fVar27;
      } while (uVar23 < uVar14 - 1);
    }
    uVar23 = uStack_318;
    if (CONCAT44(afStack_258[1],afStack_258[0]) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_24c,afStack_258[2]),
                    CONCAT44(afStack_258[1],afStack_258[0]) << 2,4);
      uVar23 = uStack_318;
    }
  }
  lStack_390 = pdb_140ac6110(lStack_120);
  pdb_140ac5730(afStack_258,&lStack_390,lStack_120);
  fVar40 = fStack_45c;
  fVar24 = fStack_460;
  fVar41 = fStack_464;
  fVar53 = fStack_468;
  if (afStack_258[0] == 1.4013e-45) {
    fVar45 = (float)((ulonglong)uStack_3a0 >> 0x20);
    if ((float)auStack_458._0_4_ <= (float)auStack_438._0_4_) {
      fVar38 = (float)auStack_438._0_4_ * fStack_3a8;
      fStack_3a8 = (float)auStack_438._0_4_ * fStack_3a4;
    }
    else {
      fVar38 = (float)((uint)fStack_3a4 ^ _DAT_142e37820) * (float)auStack_458._0_4_;
      fStack_3a8 = fStack_3a8 * (float)auStack_458._0_4_;
    }
    fVar38 = fVar38 * _DAT_142e36f60;
    fVar43 = fStack_3a8 * _UNK_142e36f64;
    fVar25 = (float)uStack_3a0 - fVar38;
    fVar42 = fVar45 - fVar43;
    fVar44 = (float)*(undefined8 *)(lStack_1f0 + 8);
    fVar46 = (float)((ulonglong)*(undefined8 *)(lStack_1f0 + 8) >> 0x20);
    lStack_2e0 = CONCAT44(fVar42 * fStack_45c + fVar25 * fStack_464 + fVar46,
                          fVar42 * fStack_460 + fVar25 * fStack_468 + fVar44);
    pdb_140df4520(&uStack_168,&lStack_2e0);
    auVar31._0_8_ = pdb_140b77a00(lStack_120);
    fVar42 = (float)uStack_160;
    fVar25 = uStack_168._4_4_;
    fVar38 = (float)uStack_3a0 + fVar38;
    fVar45 = fVar45 + fVar43;
    fVar43 = (float)auVar31._0_8_ * 0.0;
    fVar47 = (float)uStack_168 + fVar43;
    lStack_2e0 = CONCAT44(fVar46 + fVar40 * fVar45 + fVar41 * fVar38,
                          fVar44 + fVar24 * fVar45 + fVar53 * fVar38);
    pdb_140df4520(&uStack_168,&lStack_2e0);
    auVar28._0_8_ = pdb_140b77a00(lStack_120);
    fVar41 = (float)uStack_160;
    fVar53 = uStack_168._4_4_;
    fVar40 = (float)auVar28._0_8_ * 0.0;
    fVar45 = (float)uStack_168 + fVar40;
    cVar3 = pdb_140b77b60(lStack_120);
    fVar25 = (float)auVar31._0_8_ + fVar25;
    fVar43 = fVar43 + fVar42;
    fVar38 = (float)((ulonglong)auVar31._0_8_ >> 0x20) + 0.0;
    fVar24 = 0.0;
    fVar53 = (float)auVar28._0_8_ + fVar53;
    fVar40 = fVar40 + fVar41;
    fVar41 = (float)((ulonglong)auVar28._0_8_ >> 0x20) + 0.0;
    if (cVar3 != '\0') {
      fVar44 = fVar45 - fVar47;
      fVar24 = fVar53 - fVar25;
      fVar42 = fVar40 - fVar43;
      fVar46 = SQRT(fVar42 * fVar42 + fVar44 * fVar44 + fVar24 * fVar24);
      if (*(char *)(lStack_120 + 0x54) == '\x01') {
        fVar46 = fVar27 / fVar46;
        fVar48 = fVar44 * fVar46 * _DAT_142e3c624;
        fVar44 = fVar24 * fVar46 * _DAT_142f61060;
        fVar42 = fVar42 * fVar46 * _UNK_142f61064;
        fVar46 = (fVar41 - fVar38) * 0.0 * _UNK_142f61068;
        fVar24 = _UNK_142f6106c * 0.0;
      }
      else {
        fVar46 = _DAT_142e36f34 / fVar46;
        fVar48 = fVar44 * fVar46 * _DAT_142e3c624 * _DAT_142e36f50;
        fVar44 = fVar24 * fVar46 * _DAT_142f61060 * _DAT_142e36f60;
        fVar42 = fVar42 * fVar46 * _UNK_142f61064 * _UNK_142e36f64;
        fVar46 = (fVar41 - fVar38) * 0.0 * _UNK_142f61068 * _UNK_142e36f68;
        fVar24 = _UNK_142f6106c * 0.0 * _UNK_142e36f6c;
      }
      fVar47 = fVar47 - fVar48;
      fVar25 = fVar25 - fVar44;
      fVar43 = fVar43 - fVar42;
      fVar38 = fVar38 - fVar46;
      fVar24 = 0.0 - fVar24;
      fVar45 = fVar45 + fVar48;
      fVar53 = fVar53 + fVar44;
      fVar40 = fVar40 + fVar42;
      fVar41 = fVar41 + fVar46;
    }
    fVar46 = fVar53 - fVar25;
    fVar48 = fVar40 - fVar43;
    fVar42 = fVar45 - fVar47;
    fVar44 = SQRT(fVar48 * fVar48 + fVar42 * fVar42 + fVar46 * fVar46);
    auVar30._0_8_ = pub_142e32b00(fVar44 / _DAT_14300c290);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    if ((float)auVar30._0_8_ <= _DAT_142e37830) {
      auVar30._0_4_ = _DAT_142e37830;
    }
    fVar49 = auVar30._0_4_;
    uVar23 = 0;
    if (0.0 <= fVar49) {
      uVar23 = (longlong)(fVar49 - _DAT_142e36f2c) & (longlong)fVar49 >> 0x3f | (longlong)fVar49;
    }
    uVar14 = 0xffffffffffffffff;
    if (fVar49 <= _DAT_142e36f30) {
      uVar14 = uVar23;
    }
    puVar61 = &UNK_14359cca0;
    pdb_140de8290(&lStack_2e0,uVar14,_DAT_143015150 / fVar44,&uStack_1f8,&UNK_14359cca0);
    uVar23 = uStack_2d0;
    uStack_288 = CONCAT44(fVar43,fVar25);
    uStack_280 = CONCAT44(fVar24,fVar38);
    fVar24 = fVar27 / fVar44;
    fVar46 = fVar46 * fVar24;
    fVar48 = fVar48 * fVar24;
    fVar41 = (fVar41 - fVar38) * 0.0;
    fVar24 = fVar24 * fVar42;
    unaff_XMM12_Db = fVar46 * 0.0;
    unaff_XMM12_Dc = fVar41 * 0.0;
    unaff_XMM12_Dd = fVar41 * 0.0;
    fVar41 = _DAT_142e377f0 * fVar24 + fVar48 * 0.0;
    fVar38 = (float)_DAT_142f61040 * fVar46 + fVar24;
    fVar25 = (float)((ulonglong)_DAT_142f61040 >> 0x20) * fVar48 + unaff_XMM12_Db;
    fVar42 = fVar27 / SQRT(fVar25 * fVar25 + fVar41 * fVar41 + fVar38 * fVar38);
    fVar25 = fVar46 - fVar25 * fVar42;
    auStack_218 = (undefined1  [8])pfStack_2d8;
    if ((uStack_2d0 != 0) && (uStack_2d0 != 1)) {
      uStack_1a8 = (byte *)CONCAT44(uStack_1a8._4_4_,fVar44);
      _auStack_298 = ZEXT416((uint)fVar45);
      fStack_344 = 0.0;
      fStack_340 = 0.0;
      fStack_33c = 0.0;
      auStack_328 = ZEXT416((uint)*(float *)(lStack_120 + 0x30));
      auStack_1d8._0_4_ = *(float *)(lStack_120 + 0x2c) * *(float *)(lStack_120 + 0x30);
      fVar45 = _DAT_142e36f50 / SQRT(fVar27 - fVar25);
      fVar41 = fVar41 * fVar42 + fVar24;
      fVar43 = _DAT_142e36f50 / SQRT(fVar25 + fVar27);
      uVar5 = (uint)(0.0 < fVar25);
      uVar56 = (int)(uVar5 << 0x1f) >> 0x1f;
      uVar57 = (int)(uVar5 << 0x1f) >> 0x1f;
      uVar58 = (int)(uVar5 << 0x1f) >> 0x1f;
      uVar59 = (int)(uVar5 << 0x1f) >> 0x1f;
      fVar44 = (float)(~uVar56 & (uint)(fVar45 * (fVar27 - fVar25)) |
                      (uint)(fVar43 * fVar41) & uVar56);
      uVar5 = ~uVar57 & (uint)(fVar41 * fVar45) | (uint)(fVar43 * (fVar25 + fVar27)) & uVar57;
      uVar56 = ~uVar58 & (uint)(fVar45 * (fVar38 * fVar42 + _DAT_1430151a0)) |
               (uint)((fVar48 + fVar27) * fVar43) & uVar58;
      fVar42 = (float)(~uVar59 & (uint)(fVar45 * (fVar48 + _UNK_1430151a4)) |
                      (uint)(fVar43 * (0.0 - fVar38 * fVar42)) & uVar59);
      fVar27 = *pfStack_2d8;
      fVar41 = pfStack_2d8[1];
      _auStack_338 = ZEXT416((uint)*pfStack_2d8);
      fStack_348 = fVar47;
      fStack_308 = fVar44;
      fStack_304 = (float)uVar5;
      fStack_300 = (float)uVar56;
      fStack_2fc = fVar42;
      pbVar7 = (byte *)pdb_1424e5b90(&fStack_308);
      fVar25 = _DAT_142e36f28 - (float)auStack_1d8._0_4_;
      fVar38 = (_DAT_143009bc0 + fVar25) / _DAT_14359cbd4;
      fVar45 = 0.0;
      if (0.0 <= fVar38) {
        fVar45 = fVar38;
      }
      fVar38 = _DAT_142e36f28;
      if (fVar45 <= _DAT_142e36f28) {
        fVar38 = fVar45;
      }
      fVar45 = (_DAT_142e3788c - (fVar38 + fVar38)) * fVar38 * fVar38;
      fVar49 = fVar45 * _DAT_142e3c608 + (_DAT_142e36f28 - fVar45) * 0.0 + _DAT_142e3798c;
      fVar45 = (fVar41 - fVar27) * (float)uStack_1a8;
      fStack_304 = _DAT_1430679a4 * fVar45;
      fStack_300 = 0.15;
      fStack_308 = fVar49;
      auVar31._0_8_ = pdb_141e3c580(&fStack_308);
      fVar43 = _DAT_142e37950 - (float)auStack_338._0_4_;
      fVar47 = _UNK_142e37954 - (float)auStack_338._4_4_;
      uVar4 = pdb_141e3c420(_DAT_143007998 * fVar43 + fVar27);
      fVar41 = _DAT_142e36f28;
      fVar38 = (float)auStack_328._0_4_ * _DAT_14301cb98 +
               (_DAT_142e36f28 - (float)auStack_328._0_4_) * _DAT_142e37ad0 +
               (float)auStack_1d8._0_4_ * _DAT_142e3c608 + fVar25 * _DAT_142e3b1d8;
      fVar45 = fVar45 * _DAT_142e36f50;
      fVar25 = fVar38 * 0.0;
      uStack_168._0_4_ =
           (fVar24 * fVar45 + fVar27 * (float)auStack_298._0_4_ + fStack_348 * fVar43) - fVar25;
      uStack_168._4_4_ = (fVar46 * fVar45 + fVar27 * fVar53 + (float)uStack_288 * fVar43) - fVar38;
      uStack_160._0_4_ = (fVar48 * fVar45 + fVar27 * fVar40 + uStack_288._4_4_ * fVar43) - fVar25;
      uStack_160._4_4_ =
           (_DAT_142e377f0 * _UNK_142e378e4 + _DAT_142e36f28 * 0.0 + _DAT_142e377f0 * fVar47) - 0.0;
      pbStack_158 = (byte *)0x7bff00003c000000;
      pbStack_150 = (byte *)CONCAT26(uVar4,(int6)auVar31._0_8_);
      uStack_140 = uStack_184;
      uStack_13c = 0;
      fStack_138 = 0.0;
      lStack_130 = 0x200000000;
      pbStack_148 = pbVar7;
      iStack_134 = iVar22;
      pdb_142816720(param_6,&uStack_168);
      fVar45 = fStack_348;
      fVar27 = _UNK_142e4e65c;
      iVar22 = iVar22 + 1;
      if (uVar23 != 2) {
        auStack_1d8 = (undefined1  [8])((longlong)auStack_218 + uVar23 * 4);
        fVar43 = (float)uStack_288;
        fVar47 = uStack_288._4_4_;
        uVar39 = auStack_298._0_4_;
        lVar18 = 1;
        pfVar10 = (float *)((longlong)auStack_218 + 8);
        pfVar17 = (float *)((longlong)auStack_218 + 4);
        do {
          pfVar9 = pfVar10;
          fVar50 = *pfVar17;
          fVar51 = (*pfVar9 - *pfVar17) * (float)uStack_1a8;
          fVar52 = fVar51 * _DAT_142e36f50;
          fStack_308 = fVar44;
          fStack_304 = (float)uVar5;
          fStack_300 = (float)uVar56;
          fStack_2fc = fVar42;
          pbVar7 = (byte *)pdb_1424e5b90(&fStack_308);
          fStack_304 = fVar51 * _DAT_1430679a4;
          fStack_300 = 0.15;
          fStack_308 = fVar49;
          auVar31._0_8_ = pdb_141e3c580(&fStack_308);
          uVar14 = (ulonglong)_DAT_14359c200 >> 0x20;
          fVar51 = (float)_DAT_14359c200 - fVar50;
          uVar4 = pdb_141e3c420();
          uStack_168._0_4_ = (fVar52 * fVar24 + fVar50 * (float)uVar39 + fVar51 * fVar45) - fVar25;
          uStack_168._4_4_ = (fVar52 * fVar46 + fVar50 * fVar53 + fVar51 * fVar43) - fVar38;
          uStack_160._0_4_ = (fVar52 * fVar48 + fVar50 * fVar40 + fVar51 * fVar47) - fVar25;
          uStack_160._4_4_ =
               (_UNK_14300c764 * fVar41 + fVar27 * 0.0 + ((float)uVar14 - 0.0) * fVar27) - 0.0;
          pbStack_158 = (byte *)0x7bff00003c000000;
          pbStack_150 = (byte *)CONCAT26(uVar4,(int6)auVar31._0_8_);
          uStack_140 = uStack_184;
          uStack_13c = 0;
          fStack_138 = 0.0;
          lStack_130 = (ulonglong)((lVar18 == uVar23 - 2 | bStack_f1) + 1) << 0x20;
          pbStack_148 = pbVar7;
          iStack_134 = iVar22;
          pdb_142816720(param_6,&uStack_168);
          lVar18 = lVar18 + 1;
          iVar22 = iVar22 + 1;
          pfVar10 = pfVar9 + 1;
          pfVar17 = pfVar9;
          unaff_XMM12_Db = fVar46;
          unaff_XMM12_Dc = fVar48;
          unaff_XMM12_Dd = fVar41;
        } while ((undefined1  [8])(pfVar9 + 1) != auStack_1d8);
      }
    }
    fVar27 = _DAT_142e36f28;
    if (lStack_2e0 != 0) {
      pub_1406abac0((byte *)auStack_218,lStack_2e0 << 2,4);
      fVar27 = _DAT_142e36f28;
    }
  }
  pbStack_2a0 = pbStack_518 + uStack_510 * 8;
  lStack_1e8 = (uStack_510 - 1) + (ulonglong)(uStack_510 == 0);
  pbStack_220 = pbStack_550 + uStack_548 * 8;
  lStack_170 = (uStack_548 - 1) + (ulonglong)(uStack_548 == 0);
  auStack_458[0] = *(undefined1 *)(lStack_120 + 0x54);
  uStack_480 = uStack_568;
  uStack_478 = uStack_560;
  auVar31._0_8_ = CONCAT44(fStack_448,(int)uStack_428);
  _uStack_420 = CONCAT44(uStack_444,uStack_428._4_4_);
  lStack_118 = 1;
  pbStack_1e0 = pbStack_518;
  pbStack_1b8 = pbStack_518;
  pbStack_190 = pbStack_550;
  lStack_1b0 = 1;
  uStack_108 = 0;
  uStack_470 = uStack_570;
  pbVar16 = pbStack_518;
  pbVar7 = pbStack_550;
  uStack_428 = auVar31._0_8_;
  if ((uStack_570 & 1) == 0) goto LAB_142814590;
  do {
    if (lStack_1e8 == 0) {
      lStack_1e8 = 0;
      pbVar8 = pbVar16;
LAB_14281449a:
      ppbVar21 = &pbStack_110;
      pbVar19 = (byte *)0x0;
      pbVar15 = pbStack_100;
      pbVar2 = pbVar7;
      uVar23 = uStack_108;
    }
    else {
      lStack_1e8 = lStack_1e8 + -1;
      pbVar8 = pbStack_2a0;
      if (pbVar16 == pbStack_2a0) goto LAB_14281449a;
      pbVar8 = pbVar16 + 8;
      if (lStack_118 == 0) {
        pbVar20 = pbStack_1b8;
        if (pbStack_1b8 == pbStack_2a0) {
LAB_142814483:
          pbStack_1b8 = pbVar20;
          lStack_118 = 0;
          goto LAB_14281449a;
        }
      }
      else {
        pbVar20 = pbStack_2a0;
        if ((ulonglong)((longlong)pbStack_2a0 - (longlong)pbStack_1b8) < 9) goto LAB_142814483;
        pbStack_1b8 = pbStack_1b8 + 8;
      }
      pbVar20 = pbStack_1b8 + 8;
      if (lStack_170 == 0) {
        lStack_118 = 0;
        lStack_170 = 0;
        pbStack_1b8 = pbVar20;
        goto LAB_14281449a;
      }
      lStack_170 = lStack_170 + -1;
      if (pbVar7 == pbStack_220) {
        lStack_118 = 0;
        pbVar7 = pbStack_220;
        pbStack_1b8 = pbVar20;
        goto LAB_14281449a;
      }
      if (lStack_1b0 == 0) {
        pbVar15 = pbStack_190;
        if (pbStack_190 == pbStack_220) goto LAB_14281451a;
      }
      else {
        pbVar15 = pbStack_220;
        if ((ulonglong)((longlong)pbStack_220 - (longlong)pbStack_190) < 9) {
LAB_14281451a:
          pbStack_190 = pbVar15;
          lStack_118 = 0;
          lStack_1b0 = 0;
          pbVar7 = pbVar7 + 8;
          pbStack_1b8 = pbVar20;
          goto LAB_14281449a;
        }
        pbStack_190 = pbStack_190 + 8;
      }
      lStack_118 = 0;
      lStack_1b0 = 0;
      uStack_178 = uStack_108;
      ppbVar21 = &pbStack_378;
      pbVar15 = pbStack_1b8;
      pbVar2 = pbVar7 + 8;
      uVar23 = uStack_108 + 1;
      pbVar19 = pbStack_190;
      pbStack_1b8 = pbVar20;
      pbStack_190 = pbStack_190 + 8;
      pbStack_180 = pbVar7;
      pbStack_110 = pbVar16;
    }
    pbVar7 = pbVar2;
    *ppbVar21 = pbVar19;
    if (pbStack_110 == (byte *)0x0) {
LAB_142815af6:
      if (lStack_558 != 0) {
        pub_1406abac0(pbStack_550,lStack_558 << 3,4);
      }
      if (lStack_540 != 0) {
        pub_1406abac0(pbStack_538,lStack_540 << 2,4);
      }
      if (lStack_520 != 0) {
        pub_1406abac0(pbStack_518,lStack_520 << 3,4);
      }
      if (lStack_508 != 0) {
        pub_1406abac0(pbStack_500,lStack_508 << 2,4);
      }
      if (lStack_418 != 0) {
        pub_1406abac0(pbStack_410,lStack_418 << 3,4);
      }
      if (lStack_400 != 0) {
        pub_1406abac0(pbStack_3f8,lStack_400 << 2,4);
      }
      return;
    }
    pbVar16 = pbVar8;
    uStack_108 = uVar23;
    pbStack_100 = pbVar15;
    if ((uStack_480 != uStack_178) && (uVar23 = uStack_178, uStack_478 != uStack_178)) {
      do {
        pbStack_1e0 = pbVar8;
        pbVar20 = pbStack_110;
        uVar11 = uStack_510;
        pbVar8 = pbStack_518;
        uVar14 = uStack_548;
        pbVar16 = pbStack_550;
        uVar39 = (undefined4)((ulonglong)puVar61 >> 0x20);
        if (uStack_548 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uStack_548,&UNK_14359ccb8);
        }
        pbStack_360 = pbVar7;
        if (uStack_510 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uStack_510,&UNK_14359ccd0);
        }
        uStack_1a8 = pbStack_378;
        fVar53 = (float)*(undefined8 *)(pbStack_550 + uVar23 * 8) -
                 (float)*(undefined8 *)(pbStack_518 + uVar23 * 8);
        fVar41 = (float)((ulonglong)*(undefined8 *)(pbStack_550 + uVar23 * 8) >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)(pbStack_518 + uVar23 * 8) >> 0x20);
        uStack_318 = CONCAT44(fStack_464,fStack_468);
        fStack_310 = fStack_460;
        fStack_30c = fStack_45c;
        uStack_168._4_4_ = fVar41 * fStack_460 + fVar53 * fStack_468;
        uStack_168._0_4_ = fVar41 * fStack_45c + fVar53 * fStack_464;
        fVar53 = fVar27 / SQRT((float)uStack_168 * (float)uStack_168 +
                               uStack_168._4_4_ * uStack_168._4_4_);
        uStack_168._0_4_ = (float)uStack_168 * (float)((uint)fVar53 ^ _DAT_142e37820);
        uStack_168._4_4_ = uStack_168._4_4_ * fVar53;
        uStack_178 = uVar23;
        pdb_140df4520(&fStack_4c4,&uStack_168);
        fVar41 = (float)((ulonglong)*(undefined8 *)(pbVar8 + uStack_178 * 8) >> 0x20);
        fVar53 = (float)*(undefined8 *)(pbVar8 + uStack_178 * 8);
        fVar40 = (float)*(undefined8 *)(lStack_1f0 + 8);
        fVar45 = (float)((ulonglong)*(undefined8 *)(lStack_1f0 + 8) >> 0x20);
        uStack_168._0_4_ = fVar41 * fStack_310 + fVar53 * (float)uStack_318 + fVar40;
        uStack_168._4_4_ = fVar41 * fStack_30c + fVar53 * uStack_318._4_4_ + fVar45;
        pdb_140df4520(&fStack_4d0,&uStack_168);
        fVar24 = fStack_4bc;
        fVar41 = fStack_4c0;
        fVar53 = fStack_4c4;
        uVar23 = uStack_178 + 1;
        if (uVar11 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar11,&UNK_14359cce8);
        }
        if (uVar14 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar14,&UNK_14359cd00);
        }
        fVar42 = fStack_4d0 * fStack_4c4;
        fVar43 = (float)uStack_4cc;
        uVar23 = (ulonglong)uStack_4cc >> 0x20;
        fVar38 = (float)*(undefined8 *)(pbVar8 + uStack_178 * 8 + 8) -
                 (float)*(undefined8 *)(pbVar16 + uStack_178 * 8 + 8);
        fVar25 = (float)((ulonglong)*(undefined8 *)(pbVar8 + uStack_178 * 8 + 8) >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)(pbVar16 + uStack_178 * 8 + 8) >> 0x20);
        uStack_168._4_4_ = fVar25 * fStack_310 + fVar38 * (float)uStack_318;
        uStack_168._0_4_ = fVar25 * fStack_30c + fVar38 * uStack_318._4_4_;
        fVar38 = fVar27 / SQRT((float)uStack_168 * (float)uStack_168 +
                               uStack_168._4_4_ * uStack_168._4_4_);
        uStack_168._0_4_ = (float)uStack_168 * (float)((uint)fVar38 ^ _DAT_142e37820);
        uStack_168._4_4_ = uStack_168._4_4_ * fVar38;
        pdb_140df4520(&fStack_4dc,&uStack_168);
        fVar25 = (float)((ulonglong)*(undefined8 *)(pbVar8 + uStack_178 * 8 + 8) >> 0x20);
        fVar38 = (float)*(undefined8 *)(pbVar8 + uStack_178 * 8 + 8);
        uStack_168._0_4_ = fVar40 + fVar25 * fStack_310 + fVar38 * (float)uStack_318;
        uStack_168._4_4_ = fVar45 + fVar25 * fStack_30c + fVar38 * uStack_318._4_4_;
        pdb_140df4520(&fStack_4e8,&uStack_168);
        fStack_2fc = _DAT_14330c510 - ((float)uVar23 * fVar24 + fVar42 + fVar43 * fVar41);
        fStack_2ec = _DAT_14330c510 -
                     ((float)((ulonglong)uStack_4e4 >> 0x20) * fStack_4d4 +
                     fStack_4e8 * fStack_4dc + (float)uStack_4e4 * fStack_4d8);
        fStack_308 = fVar53;
        fStack_304 = fVar41;
        fStack_300 = fVar24;
        fStack_2f8 = fStack_4dc;
        fStack_2f4 = fStack_4d8;
        fStack_2f0 = fStack_4d4;
        auVar31._0_8_ = *(undefined8 *)pbVar20;
        auVar28._0_8_ = *(undefined8 *)pbStack_100;
        auVar35._0_8_ = *(undefined8 *)pbStack_180;
        uVar1 = *(undefined8 *)uStack_1a8;
        uVar26 = pdb_140b77a00(lStack_120);
        fVar53 = (float)uStack_428 - ((float)auVar35._0_8_ + (float)uVar1) * _DAT_142e36f60;
        fVar24 = uStack_428._4_4_ -
                 ((float)((ulonglong)auVar35._0_8_ >> 0x20) + (float)((ulonglong)uVar1 >> 0x20)) *
                 _UNK_142e36f64;
        fVar41 = (float)uStack_428 - ((float)auVar31._0_8_ + (float)auVar28._0_8_) * _DAT_142e36f60;
        fVar40 = uStack_428._4_4_ -
                 ((float)((ulonglong)auVar31._0_8_ >> 0x20) +
                 (float)((ulonglong)auVar28._0_8_ >> 0x20)) * _UNK_142e36f64;
        puVar61 = (undefined *)CONCAT44(uVar39,uVar26);
        pdb_140b768b0(&lStack_2e0,&lStack_418,SQRT(fVar40 * fVar40 + fVar41 * fVar41),
                      SQRT(fVar24 * fVar24 + fVar53 * fVar53),puVar61);
        auVar31._0_8_ = pub_142e329c0(fStack_2b0 / _DAT_14359cbd8);
        auVar31._8_8_ = extraout_XMM0_Qb_01;
        if ((float)auVar31._0_8_ <= _DAT_142e37830) {
          auVar32._4_12_ = auVar31._4_12_;
          auVar32._0_4_ = _DAT_142e37830;
          auVar31._0_8_ = auVar32._0_8_;
        }
        fStack_1fc = (float)auVar31._0_8_;
        iVar6 = (int)fStack_1fc;
        if (_DAT_142e382cc < fStack_1fc) {
          iVar6 = 0x7fffffff;
        }
        if (NAN(fStack_1fc)) {
          iVar6 = 0;
        }
        uStack_168 = &fStack_1fc;
        uStack_160 = &lStack_418;
        pbStack_158 = pbVar20;
        pbStack_150 = pbStack_180;
        pbStack_148 = pbStack_100;
        uStack_140 = SUB84(uStack_1a8,0);
        uStack_13c = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
        fStack_138 = (float)lStack_120;
        iStack_134 = (int)((ulonglong)lStack_120 >> 0x20);
        lStack_130 = (ulonglong)(iVar6 - 1) << 0x20;
        pdb_140fc8030(&uStack_278,&uStack_168);
        uVar23 = uStack_268;
        pbVar7 = pbStack_360;
        if ((uStack_268 == 0) || (pfStack_270 + uStack_268 * 6 + -6 == (float *)0x0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14359cd18);
        }
        pbStack_158 = *(byte **)(pfStack_270 + uStack_268 * 6 + -2);
        auVar31._0_8_ = *(undefined8 *)(pfStack_270 + uStack_268 * 6 + -6);
        uStack_168._0_4_ = (float)auVar31._0_8_;
        uStack_168._4_4_ = (float)((ulonglong)auVar31._0_8_ >> 0x20);
        uStack_160._0_4_ = (float)*(undefined8 *)(pfStack_270 + uStack_268 * 6 + -4);
        uStack_160._4_4_ =
             (float)((ulonglong)*(undefined8 *)(pfStack_270 + uStack_268 * 6 + -4) >> 0x20);
        if (uStack_268 == uStack_278) {
          pdb_142d89250(&uStack_278);
        }
        *(byte **)(pfStack_270 + uVar23 * 6 + 4) = pbStack_158;
        *(ulonglong *)(pfStack_270 + uVar23 * 6) = CONCAT44(uStack_168._4_4_,(float)uStack_168);
        *(ulonglong *)(pfStack_270 + uVar23 * 6 + 2) = CONCAT44(uStack_160._4_4_,(float)uStack_160);
        uStack_268 = uVar23 + 1;
        pfStack_2a8 = pfStack_270 + uVar23 * 6 + 6;
        bVar12 = true;
        pfVar10 = pfStack_270;
        uVar23 = 0;
        while (pfVar10 != pfStack_2a8) {
          pfVar17 = pfVar10 + 6;
          pfVar9 = pfVar10;
          if (bVar12) {
            if (pfVar17 == pfStack_2a8) {
              pfStack_368 = pfStack_2a8;
              break;
            }
            pfVar9 = pfVar17;
            pfStack_368 = pfVar10;
            pfVar17 = pfVar10 + 0xc;
          }
          uStack_288 = CONCAT44(uStack_288._4_4_,pfStack_368[4]);
          fVar24 = *pfStack_368;
          fVar40 = pfStack_368[1];
          fVar45 = pfStack_368[2];
          fVar38 = pfStack_368[3];
          fVar53 = pfStack_368[5];
          auVar31._0_8_ = *(undefined8 *)pfVar9;
          auVar28._0_8_ = *(undefined8 *)(pfVar9 + 2);
          fVar41 = pfVar9[5];
          fVar43 = (float)*(undefined8 *)(pfStack_368 + 2);
          fVar44 = (float)((ulonglong)*(undefined8 *)(pfStack_368 + 2) >> 0x20);
          fVar25 = fVar24 - fVar43;
          fVar42 = fVar40 - fVar44;
          fVar25 = SQRT(fVar42 * fVar42 + fVar25 * fVar25);
          auVar33._4_4_ = unaff_XMM12_Db;
          auVar33._0_4_ = fVar25;
          auVar33._8_4_ = unaff_XMM12_Dc;
          auVar33._12_4_ = unaff_XMM12_Dd;
          auVar34._4_12_ = auVar33._4_12_;
          auVar34._0_4_ = fVar25 + fVar25;
          pfStack_368 = pfVar9;
          auVar35._0_8_ = pub_142e329c0(auVar34._0_8_);
          auVar35._8_8_ = extraout_XMM0_Qb_02;
          if ((float)auVar35._0_8_ <= _DAT_142e3788c) {
            auVar36._4_12_ = auVar35._4_12_;
            auVar36._0_4_ = _DAT_142e3788c;
            auVar35._0_8_ = auVar36._0_8_;
          }
          fVar42 = (float)auVar35._0_8_;
          iVar6 = (int)fVar42;
          if (_DAT_142e382cc < fVar42) {
            iVar6 = 0x7fffffff;
          }
          if (NAN(fVar42)) {
            iVar6 = 0;
          }
          puVar61 = &UNK_14359cd30;
          pdb_140de8290(&lStack_390,(longlong)iVar6 + 1,0.0 / fVar25,&uStack_1f8,&UNK_14359cd30);
          uStack_260 = CONCAT44((fVar44 + fVar40) * _UNK_142e36f64,
                                (fVar43 + fVar24) * _DAT_142e36f60);
          pdb_140df4540(afStack_258,&uStack_260,fVar53);
          uStack_1c0 = CONCAT44(((float)((ulonglong)auVar31._0_8_ >> 0x20) +
                                (float)((ulonglong)auVar28._0_8_ >> 0x20)) * _UNK_142e36f64,
                                ((float)auVar31._0_8_ + (float)auVar28._0_8_) * _DAT_142e36f60);
          pdb_140df4540(&uStack_168,&uStack_1c0,fVar41);
          if (uVar23 == uStack_268 - 2) {
            if (uStack_268 < 2) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar23,uStack_268,&UNK_14359cd48);
            }
            lVar18 = uStack_268 - 3;
            if (uStack_268 == 2) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(0xffffffffffffffff,2,&UNK_14359cd60);
            }
            auVar31._0_8_ = *(undefined8 *)(pfStack_270 + lVar18 * 6);
            auVar28._0_8_ = *(undefined8 *)(pfStack_270 + lVar18 * 6 + 2);
            fVar41 = pfStack_270[lVar18 * 6 + 5];
            uStack_168._0_4_ =
                 ((float)*(undefined8 *)(pfStack_270 + uVar23 * 6 + 2) +
                 (float)*(undefined8 *)(pfStack_270 + uVar23 * 6)) * _DAT_142e36f60;
            uStack_168._4_4_ =
                 ((float)((ulonglong)*(undefined8 *)(pfStack_270 + uVar23 * 6 + 2) >> 0x20) +
                 (float)((ulonglong)*(undefined8 *)(pfStack_270 + uVar23 * 6) >> 0x20)) *
                 _UNK_142e36f64;
            pdb_140df4540(&fStack_3c4,&uStack_168,pfStack_270[uVar23 * 6 + 5]);
            uStack_168._0_4_ = ((float)auVar31._0_8_ + (float)auVar28._0_8_) * _DAT_142e36f60;
            uStack_168._4_4_ =
                 ((float)((ulonglong)auVar31._0_8_ >> 0x20) +
                 (float)((ulonglong)auVar28._0_8_ >> 0x20)) * _UNK_142e36f64;
            pdb_140df4540(&fStack_3d0,&uStack_168,fVar41);
            fVar43 = (fStack_3c0 - fStack_3cc) * (fStack_3c0 - fStack_3cc);
            fVar44 = fStack_3c4;
            fVar46 = fStack_3bc;
            fVar42 = fStack_3c8;
            fVar41 = fStack_3d0;
          }
          else {
            fVar43 = (afStack_258[1] - uStack_168._4_4_) * (afStack_258[1] - uStack_168._4_4_);
            fVar44 = afStack_258[0];
            fVar46 = afStack_258[2];
            fVar42 = (float)uStack_160;
            fVar41 = (float)uStack_168;
          }
          uVar14 = uStack_380;
          auStack_218._0_4_ =
               SQRT((fVar46 - fVar42) * (fVar46 - fVar42) +
                    fVar43 + (fVar44 - fVar41) * (fVar44 - fVar41));
          pdb_14007ee60();
          pfVar10 = (float *)pub_1406abab0(0x10,4);
          if (pfVar10 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,0x10);
          }
          *pfVar10 = fVar24;
          pfVar10[1] = fVar40;
          pfVar10[2] = fVar45;
          pfVar10[3] = fVar38;
          uStack_168._0_4_ = 2.8026e-45;
          uStack_168._4_4_ = 0.0;
          uStack_160._0_4_ = SUB84(pfVar10,0);
          uStack_160._4_4_ = (float)((ulonglong)pfVar10 >> 0x20);
          pbStack_158 = (byte *)0x2;
          pdb_142802830(afStack_258,&uStack_168,&UNK_14359cd78);
          uStack_488 = uVar23 + 1;
          auStack_218._0_4_ = (float)auStack_218._0_4_ * _DAT_14359cbdc;
          auStack_438._0_8_ = pfVar17;
          auStack_328._0_8_ = uVar23;
          auStack_298._0_4_ = (float)uVar23;
          auStack_338[0] = uVar23 == 0 | bStack_f1;
          uVar23 = 0;
          fStack_448 = fVar25;
          fStack_348 = fVar53;
          while (uVar23 < uVar14 - 1) {
            if (uVar14 <= uVar23) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar23,uVar14,&UNK_14359ce08);
            }
            fVar53 = *(float *)(pbStack_388 + uVar23 * 4);
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,fVar53);
            if ((fVar53 < 0.0) || (fVar27 < fVar53)) {
              uStack_168 = (float *)&uStack_1c0;
              uStack_160._0_4_ = 7.7206726;
              uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359ce20);
            }
            uVar23 = uVar23 + 1;
            if (uVar14 <= uVar23) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar23,uVar14,&UNK_14359ce38);
            }
            fVar41 = *(float *)(pbStack_388 + uVar23 * 4);
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,fVar41);
            if ((fVar41 < 0.0) || (fVar27 < fVar41)) {
              uStack_168 = (float *)&uStack_1c0;
              uStack_160._0_4_ = 7.7206726;
              uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14359b36c,&uStack_168,&UNK_14359ce50);
            }
            uVar5 = pdb_142802660(afStack_258);
            uVar11 = uStack_248;
            uVar13 = (ulonglong)uVar5;
            if (uStack_248 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar13,uStack_248,&UNK_14359b2b0);
            }
            if (uStack_248 <= uVar13 + 1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar13 + 1,uStack_248,&UNK_14359b2c8);
            }
            lVar18 = CONCAT44(uStack_24c,afStack_258[2]);
            auVar31._0_8_ = *(undefined8 *)(lVar18 + uVar13 * 8);
            auVar28._0_8_ = *(undefined8 *)(lVar18 + 8 + uVar13 * 8);
            fVar24 = (float)*(undefined8 *)(lStack_1f0 + 8);
            fVar40 = (float)((ulonglong)*(undefined8 *)(lStack_1f0 + 8) >> 0x20);
            uVar5 = pdb_142802660(afStack_258);
            uVar13 = (ulonglong)uVar5;
            if (uVar11 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar13,uVar11,&UNK_14359b2b0);
            }
            if (uVar11 <= uVar13 + 1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar13 + 1,uVar11,&UNK_14359b2c8);
            }
            fVar38 = extraout_XMM0_Da_01 * (float)auVar28._0_8_ +
                     (fVar27 - extraout_XMM0_Da_01) * (float)auVar31._0_8_;
            fVar25 = extraout_XMM0_Da_01 * (float)((ulonglong)auVar28._0_8_ >> 0x20) +
                     (fVar27 - extraout_XMM0_Da_01) * (float)((ulonglong)auVar31._0_8_ >> 0x20);
            auVar31._0_8_ = *(undefined8 *)(lVar18 + uVar13 * 8);
            auVar28._0_8_ = *(undefined8 *)(lVar18 + 8 + uVar13 * 8);
            fVar42 = extraout_XMM0_Da_02 * (float)auVar28._0_8_ +
                     (fVar27 - extraout_XMM0_Da_02) * (float)auVar31._0_8_;
            fVar43 = extraout_XMM0_Da_02 * (float)((ulonglong)auVar28._0_8_ >> 0x20) +
                     (fVar27 - extraout_XMM0_Da_02) * (float)((ulonglong)auVar31._0_8_ >> 0x20);
            fVar45 = fVar25 * fStack_310 + fVar38 * (float)uStack_318 + fVar24;
            fVar38 = fVar25 * fStack_30c + fVar38 * uStack_318._4_4_ + fVar40;
            fVar24 = fVar43 * fStack_310 + fVar42 * (float)uStack_318 + fVar24;
            fVar40 = fVar43 * fStack_30c + fVar42 * uStack_318._4_4_ + fVar40;
            fVar25 = fVar45 - fVar24;
            fVar42 = fVar38 - fVar40;
            fVar44 = SQRT(fVar42 * fVar42 + fVar25 * fVar25);
            fVar43 = fVar27 / fVar44;
            fVar25 = fVar43 * fVar25;
            fVar43 = fVar43 * fVar42;
            uStack_490 = CONCAT44(fVar43,fVar25);
            uStack_260 = CONCAT44(fVar25,(uint)fVar43 ^ _DAT_142e37820);
            uStack_1c0 = CONCAT44((fVar40 + fVar38) * _UNK_142e36f64,
                                  (fVar24 + fVar45) * _DAT_142e36f60);
            pdb_140df4540(&uStack_358,&uStack_1c0,fStack_348);
            fVar24 = (float)pdb_140e02880(&uStack_1f8);
            fVar40 = (fVar27 - fVar24) * _DAT_142e3c670;
            fVar24 = fVar24 * _DAT_142e37990;
            uVar5 = pdb_142802660(&lStack_2e0);
            uVar11 = (ulonglong)uVar5;
            if (uStack_2d0 <= uVar11 + 1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar11 + 1,uStack_2d0,&UNK_14359b2e0);
            }
            fVar45 = pfStack_2d8[uVar11 * 2 + 2] - pfStack_2d8[uVar11 * 2];
            fVar38 = pfStack_2d8[uVar11 * 2 + 3] - pfStack_2d8[uVar11 * 2 + 1];
            fVar27 = fVar27 / SQRT(fVar38 * fVar38 + fVar45 * fVar45);
            pub_142e32990((fVar27 * fVar38) / (fVar45 * fVar27));
            pdb_140df4520(&fStack_4a0,&uStack_490);
            fVar25 = fStack_498;
            fVar38 = fStack_49c;
            fVar45 = fStack_4a0;
            pdb_140df4520(&uStack_168,&uStack_260);
            fVar27 = _DAT_142e36f50;
            auStack_1d8._0_4_ = fVar41;
            uStack_1a8 = (byte *)CONCAT44(uStack_1a8._4_4_,fVar44);
            fVar41 = (float)pub_142e32b30();
            fVar48 = fVar45 * fVar41;
            fVar49 = fVar38 * fVar41;
            fVar50 = fVar25 * fVar41;
            fVar42 = (float)pub_142e329e0();
            fVar44 = fVar50 * fVar50;
            fVar46 = fVar42 * fVar42;
            fVar47 = fVar49 * fVar49 + fVar48 * fVar48;
            fVar43 = fVar50 * (float)uStack_160 +
                     fVar49 * uStack_168._4_4_ + fVar48 * (float)uStack_168;
            fVar43 = fVar43 + fVar43;
            fVar52 = fVar42 + fVar42;
            fVar51 = fVar52 * (fVar49 * (float)uStack_160 - uStack_168._4_4_ * fVar50) +
                     fVar43 * fVar48 + (fVar46 - (fVar47 + fVar44)) * (float)uStack_168;
            unaff_XMM12_Db =
                 fVar52 * (fVar50 * (float)uStack_168 - (float)uStack_160 * fVar48) +
                 fVar43 * fVar49 + (fVar46 - (fVar47 + fVar44)) * uStack_168._4_4_;
            unaff_XMM12_Dc =
                 fVar52 * (fVar48 * uStack_168._4_4_ - (float)uStack_168 * fVar49) +
                 fVar43 * fVar50 + (fVar46 - (fVar47 + fVar44)) * (float)uStack_160;
            unaff_XMM12_Dd =
                 fVar52 * (fVar41 * 0.0 * 0.0 - fVar41 * 0.0 * 0.0) +
                 fVar43 * fVar42 + (fVar46 - (fVar47 + fVar44)) * (float)uStack_160;
            fVar41 = fVar25 * unaff_XMM12_Db - fVar38 * unaff_XMM12_Dc;
            fVar42 = fVar45 * unaff_XMM12_Dc - fVar25 * fVar51;
            fVar43 = fVar38 * fVar51 - fVar45 * unaff_XMM12_Db;
            pfVar10 = &fStack_308;
            if (fVar27 < fVar53) {
              pfVar10 = &fStack_2f8;
            }
            uStack_588 = *(undefined8 *)pfVar10;
            uStack_580 = *(undefined8 *)(pfVar10 + 2);
            if (fVar43 <= 0.0) {
              uStack_168._4_4_ = (float)((uint)unaff_XMM12_Db ^ _DAT_142e37820) - fVar45;
              if (uStack_168._4_4_ <= 0.0) {
                uStack_168._4_4_ = (_DAT_142e36f28 - fVar43) - uStack_168._4_4_;
                uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
                uStack_168._0_4_ = uStack_168._4_4_ * uStack_160._4_4_;
                uStack_168._4_4_ = (fVar38 - fVar51) * uStack_160._4_4_;
                uStack_160._0_4_ = (fVar41 + fVar25) * uStack_160._4_4_;
                uStack_160._4_4_ =
                     ((float)((uint)unaff_XMM12_Dc ^ _DAT_142e37820) - fVar42) * uStack_160._4_4_;
              }
              else {
                uStack_168._4_4_ = uStack_168._4_4_ + (_DAT_142e36f28 - fVar43);
                uStack_160._4_4_ = _DAT_142e36f50 / SQRT(uStack_168._4_4_);
                uStack_168._0_4_ = (fVar38 - fVar51) * uStack_160._4_4_;
                uStack_168._4_4_ = uStack_168._4_4_ * uStack_160._4_4_;
                uStack_160._0_4_ = (fVar42 - unaff_XMM12_Dc) * uStack_160._4_4_;
                uStack_160._4_4_ = (fVar41 - fVar25) * uStack_160._4_4_;
              }
            }
            else {
              uStack_160._4_4_ = fVar45 - unaff_XMM12_Db;
              if (uStack_160._4_4_ <= 0.0) {
                uStack_160._4_4_ = (fVar43 + _UNK_1430140f4) - uStack_160._4_4_;
                fVar27 = _DAT_142e36f50 / SQRT(uStack_160._4_4_);
                uStack_168._0_4_ = (fVar41 + fVar25) * fVar27;
                uStack_168._4_4_ = ((fVar42 + _DAT_1430140f0) - unaff_XMM12_Dc) * fVar27;
                uStack_160._0_4_ = uStack_160._4_4_ * fVar27;
                uStack_160._4_4_ = (fVar38 + fVar51) * fVar27;
              }
              else {
                uStack_160._4_4_ = uStack_160._4_4_ + fVar43 + _UNK_1430140f4;
                fVar27 = _DAT_142e36f50 / SQRT(uStack_160._4_4_);
                uStack_168._0_4_ =
                     ((float)((uint)unaff_XMM12_Dc ^ _DAT_142e37820) - fVar42) * fVar27;
                uStack_168._4_4_ = (fVar41 - fVar25) * fVar27;
                uStack_160._0_4_ = (fVar38 + fVar51) * fVar27;
                uStack_160._4_4_ = uStack_160._4_4_ * fVar27;
              }
            }
            uVar26 = (float)uStack_1a8;
            uVar39 = auStack_1d8._0_4_;
            pbVar7 = (byte *)pdb_1424e5b90(&uStack_168);
            fVar27 = _DAT_142e36f28;
            uStack_168._0_4_ = (float)uStack_588;
            uStack_168._4_4_ = (float)((ulonglong)uStack_588 >> 0x20);
            uStack_160._0_4_ = (float)uStack_580;
            uStack_160._4_4_ = (float)((ulonglong)uStack_580 >> 0x20);
            auVar31._0_8_ = pdb_141e3c5c0(&uStack_168);
            fVar41 = (fVar24 + fVar40) * (float)auStack_218._0_4_;
            uStack_168._0_4_ = (float)uVar26;
            uStack_160._0_4_ = 0.1;
            uStack_168._4_4_ = fVar41;
            auVar28._0_8_ = pdb_140df4560(&uStack_168);
            pdb_140e02880(&uStack_1f8);
            uVar4 = pdb_141e3c420();
            uVar5 = 2;
            if ((auStack_338[0] == '\0') &&
               ((auStack_458[0] == '\0' ||
                ((_DAT_142e36f50 <= fVar53 * fStack_448 &&
                 (_DAT_142e36f50 <= (fVar27 - (float)uVar39) * fStack_448)))))) {
              uVar5 = 1;
            }
            uStack_160._0_4_ = fStack_350;
            uStack_168._0_4_ = (float)uStack_358;
            uStack_168._4_4_ = (float)((ulonglong)uStack_358 >> 0x20);
            uStack_160._4_4_ = 0.0;
            pbStack_150 = (byte *)CONCAT26(uVar4,(int6)auVar28._0_8_);
            uStack_140 = uStack_184;
            uStack_13c = 0;
            fStack_138 = 0.0;
            lStack_130 = (ulonglong)uVar5 << 0x20;
            pbStack_158 = (byte *)auVar31._0_8_;
            pbStack_148 = pbVar7;
            iStack_134 = iVar22;
            pdb_142816720(param_6,&uStack_168);
            if (auStack_328._0_8_ == 0) {
              fVar53 = unaff_XMM12_Db * fVar41;
              uStack_168._0_4_ = fVar51 * fVar41 * _DAT_143035ef0;
              unaff_XMM12_Db = unaff_XMM12_Dc * fVar41 * _UNK_143035ef8;
              unaff_XMM12_Dd = _DAT_142e36f28 * _UNK_142e378e4 * _UNK_143035efc;
              fVar24 = (float)uStack_358 - (float)uStack_168;
              fVar40 = (float)((ulonglong)uStack_358 >> 0x20) - fVar53 * _UNK_143035ef4;
              fVar42 = fStack_350 - unaff_XMM12_Db;
              fVar43 = _DAT_142e36f28 - unaff_XMM12_Dd;
              uStack_168._0_4_ = (float)uStack_358 + (float)uStack_168;
              uStack_168._4_4_ = fStack_350 + unaff_XMM12_Db;
              pdb_140df4540(&fStack_3b8,&uStack_168,fVar40);
              fVar53 = fStack_3b8 - fVar24;
              fVar41 = fStack_3b0 - fVar42;
              fVar53 = SQRT(fVar41 * fVar41 +
                            (fStack_3b4 - fVar40) * (fStack_3b4 - fVar40) + fVar53 * fVar53);
              unaff_XMM12_Dc = unaff_XMM12_Db;
              if (_DAT_142e3b1d8 < fVar53) {
                uStack_3dc = uVar26;
                uStack_3d4 = 0x3dcccccd;
                fVar46 = fStack_3b8 * _DAT_143314dc0;
                fVar47 = fStack_3b4 * _UNK_143314dc4;
                fVar48 = fStack_3b0 * _UNK_143314dc8;
                fVar49 = _DAT_142e36f28 * _UNK_143314dcc;
                fVar24 = fVar24 * _DAT_143035ef0;
                fVar40 = fVar40 * _UNK_143035ef4;
                fVar42 = fVar42 * _UNK_143035ef8;
                fVar43 = fVar43 * _UNK_143035efc;
                fVar44 = fVar38 * 0.0 - fVar45;
                fVar41 = (fVar25 * _DAT_142e377f0 + fVar45 * 0.0) - fVar45 * _DAT_142e36f28;
                fVar45 = fVar25 - fVar38 * 0.0;
                if (fVar41 <= 0.0) {
                  uStack_160._4_4_ = _DAT_142e36f50 / SQRT(_DAT_143277eb0 - fVar41);
                  uStack_168._0_4_ = uStack_160._4_4_ * (_DAT_143277eb0 - fVar41);
                  uStack_168._4_4_ = uStack_160._4_4_ * (fVar45 + fVar38);
                  uStack_160._0_4_ = uStack_160._4_4_ * (fVar25 + _UNK_143277eb8);
                  uStack_160._4_4_ = uStack_160._4_4_ * (fVar44 + _UNK_143277ebc);
                }
                else {
                  uStack_160._4_4_ = _DAT_142e36f50 / SQRT(fVar27 + fVar41);
                  uStack_168._0_4_ = uStack_160._4_4_ * (fVar38 + fVar45);
                  uStack_168._4_4_ = uStack_160._4_4_ * (fVar27 + fVar41);
                  uStack_160._0_4_ = (fVar44 + fVar27) * uStack_160._4_4_;
                  uStack_160._4_4_ = uStack_160._4_4_ * (0.0 - fVar25);
                }
                fStack_3d8 = fVar53;
                pbVar7 = (byte *)pdb_1424e5b90(&uStack_168);
                auVar31._0_8_ = pdb_141e3c5c0(&uStack_588);
                auVar28._0_8_ = pdb_140df4560(&uStack_3dc);
                uVar4 = pdb_141e3c420();
                uStack_168._0_4_ = fVar24 + fVar46;
                uStack_168._4_4_ = fVar40 + fVar47;
                uStack_160._0_4_ = fVar42 + fVar48;
                uStack_160._4_4_ = fVar43 + fVar49;
                pbStack_150 = (byte *)CONCAT26(uVar4,(int6)auVar28._0_8_);
                uStack_140 = uStack_184;
                uStack_13c = 0;
                fStack_138 = 0.0;
                lStack_130 = 0x200000000;
                pbStack_158 = (byte *)auVar31._0_8_;
                pbStack_148 = pbVar7;
                iStack_134 = iVar22;
                pdb_142816720(param_6,&uStack_168);
              }
            }
            iVar22 = iVar22 + 1;
          }
          if (CONCAT44(afStack_258[1],afStack_258[0]) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_24c,afStack_258[2]),
                          CONCAT44(afStack_258[1],afStack_258[0]) << 3,4);
          }
          pbVar7 = pbStack_360;
          pfVar10 = (float *)auStack_438._0_8_;
          if (lStack_240 != 0) {
            pub_1406abac0(pbStack_238,lStack_240 << 2,4);
          }
          if (lStack_390 != 0) {
            pub_1406abac0(pbStack_388,lStack_390 << 2,4);
          }
          bVar12 = false;
          uVar23 = uStack_488;
        }
        if (uStack_278 != 0) {
          pub_1406abac0((byte *)pfStack_270,uStack_278 * 0x18,4);
        }
        if (lStack_2e0 != 0) {
          pub_1406abac0((byte *)pfStack_2d8,lStack_2e0 << 3,4);
        }
        if (lStack_2c8 != 0) {
          pub_1406abac0(pbStack_2c0,lStack_2c8 << 2,4);
        }
        pbVar16 = pbStack_1e0;
        if ((uStack_470 & 1) != 0) break;
LAB_142814590:
        uVar23 = uStack_178;
        if (lStack_1e8 == 0) {
          lStack_1e8 = 0;
          pbVar8 = pbStack_1e0;
LAB_1428146ca:
          ppbVar21 = &pbStack_110;
          pbVar16 = (byte *)0x0;
        }
        else {
          lStack_1e8 = lStack_1e8 + -1;
          pbVar8 = pbStack_2a0;
          if (pbStack_1e0 == pbStack_2a0) goto LAB_1428146ca;
          pbVar8 = pbStack_1e0 + 8;
          if (lStack_118 == 0) {
            if (pbStack_1b8 == pbStack_2a0) {
LAB_1428146b4:
              lStack_118 = 0;
            }
            else {
              pbVar20 = pbStack_1b8 + 8;
              pbVar16 = pbStack_1b8;
              pbStack_1b8 = pbVar20;
              if (lStack_170 != 0) goto LAB_1428145ec;
LAB_142815a2f:
              lStack_118 = 0;
              lStack_170 = 0;
            }
            goto LAB_1428146ca;
          }
          if ((ulonglong)((longlong)pbStack_2a0 - (longlong)pbStack_1b8) < 9) {
            pbStack_1b8 = pbStack_2a0;
            goto LAB_1428146b4;
          }
          pbVar16 = pbStack_1b8 + 8;
          pbStack_1b8 = pbStack_1b8 + 0x10;
          if (lStack_170 == 0) goto LAB_142815a2f;
LAB_1428145ec:
          lStack_170 = lStack_170 + -1;
          if (pbVar7 == pbStack_220) {
            lStack_118 = 0;
            pbVar7 = pbStack_220;
            goto LAB_1428146ca;
          }
          pbVar20 = pbVar7 + 8;
          if (lStack_1b0 == 0) {
            if (pbStack_190 == pbStack_220) {
              lStack_118 = 0;
              lStack_1b0 = 0;
              pbVar7 = pbVar20;
              goto LAB_1428146ca;
            }
LAB_14281462b:
            pbStack_110 = pbStack_1e0;
            lStack_118 = 0;
            lStack_1b0 = 0;
            ppbVar21 = &pbStack_378;
            uVar23 = uStack_108;
            pbStack_100 = pbVar16;
            pbStack_180 = pbVar7;
            pbVar7 = pbVar20;
            uStack_108 = uStack_108 + 1;
            pbVar16 = pbStack_190;
            pbStack_190 = pbStack_190 + 8;
          }
          else {
            fVar27 = _DAT_142e36f28;
            if (8 < (ulonglong)((longlong)pbStack_220 - (longlong)pbStack_190)) {
              pbStack_190 = pbStack_190 + 8;
              goto LAB_14281462b;
            }
            lStack_118 = 0;
            pbStack_190 = pbStack_220;
            lStack_1b0 = 0;
            ppbVar21 = &pbStack_110;
            pbVar16 = (byte *)0x0;
            pbVar7 = pbVar20;
          }
        }
        *ppbVar21 = pbVar16;
        pbStack_1e0 = pbVar8;
        if (pbStack_110 == (byte *)0x0) goto LAB_142815af6;
      } while( true );
    }
  } while( true );
}

