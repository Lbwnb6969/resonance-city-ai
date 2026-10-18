// VA 0x14142d650, PDB extent 4435 bytes
// system_wall_constructor::utils::half_timber::roof_outline
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::half_timber::roof_outline
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
   Extent: 4435 */

int * pdb_14142d650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_370 [16];
  float afStack_360 [4];
  float fStack_350;
  float fStack_34c;
  undefined1 auStack_348 [8];
  float fStack_340;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined1 auStack_328 [16];
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong lStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  longlong lStack_2c0;
  longlong lStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined1 auStack_298 [16];
  float afStack_288 [2];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  longlong lStack_250;
  byte *pbStack_248;
  ulonglong uStack_240;
  longlong lStack_238;
  byte *pbStack_230;
  ulonglong uStack_228;
  longlong lStack_220;
  byte *pbStack_218;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  int *piStack_1f0;
  undefined1 auStack_1e8 [8];
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float *pfStack_1b8;
  float *pfStack_1b0;
  float afStack_1a8 [4];
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1c0 = param_2;
  piVar8 = (int *)pdb_14092fa10();
  if (piVar8 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*piVar8 != 1) {
    return piVar8;
  }
  puVar9 = (undefined8 *)pdb_1413e4400(param_3,&UNK_1433056b0);
  if ((puVar9 == (undefined8 *)0x0) ||
     (lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143309870);
  }
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  lVar1 = lVar3 + 0x18;
  LOCK();
  bVar16 = *(char *)(lVar3 + 0x18) == '\0';
  if (bVar16) {
    *(char *)(lVar3 + 0x18) = '\x01';
  }
  UNLOCK();
  if (bVar16) {
    pdb_140e9a150(lVar1);
    lVar1 = *(longlong *)(lVar3 + 0x10);
  }
  else {
    pdb_142dbd1a0(lVar1,1,1000000000);
    pdb_140e9a150(lVar1);
    lVar1 = *(longlong *)(lVar3 + 0x10);
  }
  if ((lVar1 == 0) ||
     (piVar11 = (int *)(*(longlong *)(lVar3 + 8) + lVar1 * 4 + -4), piVar11 == (int *)0x0)) {
    lStack_2f0 = *(longlong *)(lVar10 + 0x10);
    if (lStack_2f0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_2a0 = (int)lStack_2f0 + -1;
  }
  else {
    iStack_2a0 = *piVar11;
    lStack_2f0 = *(longlong *)(lVar10 + 0x10);
  }
  uStack_2f8 = *(undefined8 *)(lVar10 + 8);
  uStack_2e8 = *(undefined4 *)(lVar10 + 0x18);
  uStack_2e4 = *(undefined4 *)(lVar10 + 0x1c);
  uStack_2e0 = *(undefined4 *)(lVar10 + 0x20);
  uStack_2dc = *(undefined4 *)(lVar10 + 0x24);
  uStack_2d0 = *(undefined4 *)(lVar10 + 0x28);
  uStack_2cc = *(undefined4 *)(lVar10 + 0x2c);
  uStack_2c8 = *(undefined4 *)(lVar10 + 0x30);
  uStack_2c4 = *(undefined4 *)(lVar10 + 0x34);
  lStack_2c0 = lVar10 + 0x78;
  lStack_2b8 = lVar10 + 0x58;
  uStack_2b0 = *(undefined4 *)(lVar10 + 0x38);
  uStack_2ac = *(undefined4 *)(lVar10 + 0x3c);
  uStack_2a8 = *(undefined4 *)(lVar10 + 0x40);
  uStack_2a4 = *(undefined4 *)(lVar10 + 0x44);
  lStack_2d8 = lVar3;
  pdb_140b73b80(&uStack_148,param_5);
  pdb_140b73b00(afStack_1a8,&uStack_148);
  fVar29 = afStack_1a8[3];
  fVar28 = afStack_1a8[2];
  fVar5 = afStack_1a8[1];
  fVar4 = afStack_1a8[0];
  pdb_140b772d0(&lStack_238,param_5);
  pdb_140df2970(auStack_298,fVar4,fVar5,&UNK_143309888);
  uVar20 = 0;
  uVar17 = pdb_140ac6200(param_5,0,0);
  pdb_140df1b90(auStack_370,fVar28,fVar29,uVar17,uVar20,&UNK_1433098a0);
  uStack_200 = (ulonglong)*(byte *)(param_5 + 0x3c);
  afStack_360[uStack_200] = afStack_288[uStack_200];
  uVar12 = pdb_14092f900(param_1);
  uVar12 = pdb_140a84d90(uVar12);
  pdb_140df1c10(afStack_360 + 2,uVar12);
  fVar5 = _DAT_142e377f0;
  fVar4 = _DAT_142e36f28;
  pfStack_1b8 = (float *)(piVar8 + 1);
  fStack_314 = *(float *)(param_5 + 0x4c);
  fStack_318 = fStack_314 * 0.0;
  pfStack_1b0 = (float *)(piVar8 + 2);
  uStack_308 = CONCAT44(fStack_318,fStack_318);
  uStack_300 = 0;
  auStack_328 = ZEXT416((uint)fStack_314);
  fStack_30c = _DAT_143007398;
  uVar15 = 0;
  fStack_310 = fStack_318;
  piStack_1f0 = piVar8;
  do {
    piVar8 = piStack_1f0;
    if (3 < uVar15) {
      if (lStack_238 != 0) {
        pub_1406abac0(pbStack_230,lStack_238 << 3,4);
      }
      if (lStack_220 != 0) {
        pub_1406abac0(pbStack_218,lStack_220 << 2,4);
      }
      lVar3 = lStack_2d8;
      lVar10 = lStack_2d8 + 0x18;
      pdb_140e9a350();
      piVar8 = (int *)0x1;
      LOCK();
      bVar2 = *(byte *)(lVar3 + 0x18);
      if (bVar2 == 1) {
        *(byte *)(lVar3 + 0x18) = 0;
      }
      else {
        piVar8 = (int *)(ulonglong)bVar2;
      }
      UNLOCK();
      if (bVar2 != 1) {
        piVar8 = (int *)pdb_142dbcef0(lVar10,0);
      }
      return piVar8;
    }
    fVar18 = (float)pdb_140b77a00(param_5);
    fVar31 = fVar18 * _DAT_142e378e0;
    fVar32 = fVar18 * _UNK_142e378e4;
    pdb_140df0010(afStack_1a8,auStack_370);
    fVar19 = fStack_34c;
    fVar30 = fStack_350;
    fVar29 = afStack_360[3];
    fVar28 = afStack_360[2];
    fVar21 = (float)*(undefined8 *)(afStack_1a8 + uVar15 * 2);
    fVar23 = (float)((ulonglong)*(undefined8 *)(afStack_1a8 + uVar15 * 2) >> 0x20);
    uVar12 = *(undefined8 *)(piVar8 + 3);
    pdb_140df0010(&uStack_148,auStack_298);
    fVar22 = (float)(&uStack_148)[uVar15];
    fVar24 = (float)((ulonglong)(&uStack_148)[uVar15] >> 0x20);
    fVar26 = ((float)uVar12 + fVar23 * fVar30 + fVar21 * fVar28) -
             (fVar24 * fVar30 + fVar22 * fVar28 + (float)*(undefined8 *)(piVar8 + 3));
    fVar27 = ((float)((ulonglong)uVar12 >> 0x20) + fVar23 * fVar19 + fVar21 * fVar29) -
             (fVar24 * fVar19 + fVar22 * fVar29 +
             (float)((ulonglong)*(undefined8 *)(piVar8 + 3) >> 0x20));
    uStack_1c8 = CONCAT44(fVar27,fVar26);
    pdb_140df4520(&uStack_148,&uStack_1c8);
    fVar21 = fStack_140;
    fVar24 = uStack_148._4_4_;
    fVar22 = (float)uStack_148;
    pdb_140df4520(&uStack_148,&uStack_1c8);
    uStack_1d8 = (byte *)CONCAT44(fStack_140,uStack_148._4_4_);
    uStack_1d0 = 0;
    _auStack_1e8 = ZEXT416((uint)(float)uStack_148);
    pdb_140df0010(&uStack_148,auStack_298);
    fVar23 = (float)(&uStack_148)[uVar15];
    fVar25 = (float)((ulonglong)(&uStack_148)[uVar15] >> 0x20);
    uStack_280 = CONCAT44(fVar19 * fVar25 + fVar29 * fVar23 +
                          (float)((ulonglong)*(undefined8 *)(piVar8 + 3) >> 0x20),
                          fVar30 * fVar25 + fVar28 * fVar23 + (float)*(undefined8 *)(piVar8 + 3));
    pdb_140df4520(afStack_1a8,&uStack_280);
    fVar30 = afStack_1a8[2];
    fVar29 = afStack_1a8[1];
    fVar28 = afStack_1a8[0];
    pdb_140b768b0(&uStack_148,&lStack_238,0,SQRT(fVar27 * fVar27 + fVar26 * fVar26),
                  SQRT(fVar18 * fVar18 + fVar31 * fVar31 + fVar31 * fVar31));
    fVar19 = fStack_118;
    if (uStack_148 != (float *)0x0) {
      pub_1406abac0((byte *)CONCAT44(fStack_13c,fStack_140),(longlong)uStack_148 << 3,4);
    }
    if (CONCAT44(fStack_12c,fStack_130) != 0) {
      pub_1406abac0((byte *)CONCAT44(fStack_124,fStack_128),CONCAT44(fStack_12c,fStack_130) << 2,4);
    }
    fStack_150 = (float)pub_142e32b00(fVar19);
    if (fStack_150 <= _DAT_142e37830) {
      fStack_150 = _DAT_142e37830;
    }
    uStack_138 = 0;
    if (0.0 <= fStack_150) {
      uStack_138 = (longlong)(fStack_150 - _DAT_142e36f2c) & (longlong)fStack_150 >> 0x3f |
                   (longlong)fStack_150;
    }
    if (_DAT_142e36f30 < fStack_150) {
      uStack_138 = 0xffffffffffffffff;
    }
    uStack_148 = &fStack_150;
    fStack_140 = 0.0;
    fStack_13c = 0.0;
    fStack_130 = (float)((uint)fStack_130 & 0xffffff00);
    pdb_1413efbf0(&lStack_250,&uStack_148);
    uVar6 = uStack_240;
    uStack_1f8 = uVar15 + 1;
    fVar19 = fVar18 * fVar21 - fVar31 * fVar24;
    fVar21 = fVar31 * fVar22 - fVar21 * fVar31;
    fVar22 = fVar31 * fVar24 - fVar18 * fVar22;
    fVar24 = fVar4 / SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar21 * fVar21);
    auStack_348._4_4_ = fVar32;
    auStack_348._0_4_ = fVar31;
    fStack_340 = fVar31;
    unique0x10000746 = 0;
    auStack_1e8._4_4_ = (undefined4)uStack_1d8;
    fStack_1e0 = (float)uStack_1d8._4_4_;
    fStack_338 = fVar28;
    fStack_334 = fVar29;
    fStack_330 = fVar30;
    fStack_32c = _UNK_142e4e65c;
    fVar28 = fVar19 * fVar24 * 0.0;
    fVar29 = fVar24 * fVar21 * 0.0;
    fVar30 = fVar24 * fVar22 * 0.0;
    fStack_14c = *(float *)(&UNK_142e37810 + (ulonglong)(uVar15 == 3) * 4);
    uVar15 = 0;
    uStack_1d8 = pbStack_248;
    if (uStack_240 != 1) {
      do {
        if (uVar6 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uVar6,&UNK_1433098b8);
        }
        afStack_1a8[0] = *(float *)(uStack_1d8 + uVar15 * 4);
        if ((afStack_1a8[0] < 0.0) || (fVar4 < afStack_1a8[0])) {
          fStack_140 = 7.7206726;
          fStack_13c = 1.4013e-45;
          uStack_148 = afStack_1a8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&uStack_148,&UNK_1433098d0);
        }
        uVar15 = uVar15 + 1;
        if (uVar6 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uVar6,&UNK_1433098e8);
        }
        fVar19 = *(float *)(uStack_1d8 + uVar15 * 4);
        afStack_1a8[0] = fVar19;
        if ((fVar19 < 0.0) || (fVar4 < fVar19)) {
          fStack_140 = 7.7206726;
          fStack_13c = 1.4013e-45;
          uStack_148 = afStack_1a8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&uStack_148,&UNK_143309900);
        }
        uVar7 = pdb_1413f9030(&lStack_238);
        uVar14 = (ulonglong)uVar7;
        if (uStack_228 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14,uStack_228,&UNK_143306608);
        }
        if (uStack_228 <= uVar14 + 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14 + 1,uStack_228,&UNK_143306620);
        }
        fVar22 = *(float *)(pbStack_230 + uVar14 * 8);
        fVar24 = *(float *)(pbStack_230 + uVar14 * 8 + 4);
        fVar21 = *(float *)(pbStack_230 + uVar14 * 8 + 8);
        fVar18 = *(float *)(pbStack_230 + uVar14 * 8 + 0xc);
        uVar7 = pdb_1413f9030(&lStack_238,fVar19);
        uVar14 = (ulonglong)uVar7;
        if (uStack_228 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14,uStack_228,&UNK_143306608);
        }
        if (uStack_228 <= uVar14 + 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14 + 1,uStack_228,&UNK_143306620);
        }
        fVar21 = fVar22 * (fVar4 - extraout_XMM0_Da) + fVar21 * extraout_XMM0_Da;
        fVar22 = (fVar4 - extraout_XMM0_Da) * fVar24 + fVar18 * extraout_XMM0_Da;
        fVar24 = *(float *)(pbStack_230 + uVar14 * 8 + 8) * extraout_XMM0_Da_00 +
                 *(float *)(pbStack_230 + uVar14 * 8) * (fVar4 - extraout_XMM0_Da_00);
        fVar19 = *(float *)(pbStack_230 + uVar14 * 8 + 0xc) * extraout_XMM0_Da_00 +
                 (fVar4 - extraout_XMM0_Da_00) * *(float *)(pbStack_230 + uVar14 * 8 + 4);
        fVar33 = fVar21 * (float)auStack_1e8._0_4_ + fVar22 * (float)auStack_348._0_4_ + fVar28 +
                 fStack_338 + fStack_318;
        fVar34 = fVar21 * (float)auStack_1e8._4_4_ + fVar22 * (float)auStack_348._4_4_ + fVar29 +
                 fStack_334 + fStack_314;
        fVar35 = fVar21 * fStack_1e0 + fVar22 * fStack_340 + fVar30 + fStack_330 + fStack_310;
        fVar36 = fVar5 + fStack_30c;
        fVar31 = fVar24 * (float)auStack_1e8._4_4_ + fVar19 * (float)auStack_348._4_4_ + fVar29 +
                 fStack_334 + (float)auStack_328._0_4_;
        fVar37 = fVar24 * (float)auStack_1e8._0_4_ + fVar19 * (float)auStack_348._0_4_ + fVar28 +
                 fStack_338 + (float)uStack_308;
        fVar38 = fVar24 * fStack_1e0 + fVar19 * fStack_340 + fVar30 + fStack_330 + uStack_308._4_4_;
        fVar19 = fVar35 - fVar38;
        afStack_1a8[0] = fVar33 - fVar37;
        afStack_1a8[1] = fVar34 - fVar31;
        fVar32 = SQRT(afStack_1a8[1] * afStack_1a8[1] + afStack_1a8[0] * afStack_1a8[0] +
                      fVar19 * fVar19);
        afStack_1a8[2] = fVar4 / fVar32;
        afStack_1a8[0] = afStack_1a8[2] * afStack_1a8[0];
        afStack_1a8[1] = afStack_1a8[2] * afStack_1a8[1];
        afStack_1a8[2] = afStack_1a8[2] * fVar19;
        pdb_140de8fd0(&uStack_148,afStack_1a8);
        fVar39 = fStack_140 + fStack_140;
        fVar22 = fStack_140 * fVar39;
        fVar18 = uStack_148._4_4_ + uStack_148._4_4_;
        fVar19 = fVar18 * (float)uStack_148;
        fVar26 = fVar39 * (float)uStack_148;
        fVar27 = fVar39 * uStack_148._4_4_;
        fVar25 = (float)uStack_148 * ((float)uStack_148 + (float)uStack_148);
        fVar21 = fVar18 * fStack_13c;
        fVar23 = ((float)uStack_148 + (float)uStack_148) * fStack_13c;
        fVar39 = fStack_13c * fVar39;
        fVar24 = fVar26 - fVar21;
        fStack_12c = fVar23 + fVar27;
        fStack_11c = fVar4 - (fVar25 + uStack_148._4_4_ * fVar18);
        fStack_118 = (fVar37 + fVar33) * _DAT_143309680;
        fStack_114 = (fVar31 + fVar34) * _UNK_143309684;
        fStack_110 = (fVar38 + fVar35) * _UNK_143309688;
        fStack_13c = (fVar5 + fVar4) * _UNK_14330968c;
        uStack_148._0_4_ = fStack_13c * (fVar4 - (uStack_148._4_4_ * fVar18 + fVar22));
        uStack_148._4_4_ = fStack_13c * (fVar19 + fVar39);
        fStack_140 = fStack_13c * fVar24;
        fStack_13c = fStack_13c * fVar24;
        fVar32 = fVar32 + _DAT_142e37ad4;
        fStack_128 = fVar32 * (fVar21 + fVar26);
        fStack_124 = fVar32 * (fVar27 - fVar23);
        fStack_120 = fVar32 * fStack_11c;
        fStack_11c = fVar32 * fStack_11c;
        fStack_130 = fStack_12c * _UNK_142f6e378;
        fStack_12c = fStack_12c * _UNK_142f6e37c;
        uStack_138 = CONCAT44((fVar4 - (fVar22 + fVar25)) * _UNK_142f6e374,
                              (fVar19 - fVar39) * _DAT_142f6e370);
        fStack_10c = fStack_110;
        pdb_140e07fe0(&uStack_280,&uStack_148);
        uVar17 = pdb_140315970(&uStack_1c0);
        uVar20 = pdb_1409012c0(*(undefined4 *)(param_1 + 0x274));
        pdb_140a77410(&uStack_148);
        uStack_188 = uStack_260;
        uStack_184 = uStack_25c;
        uStack_180 = uStack_258;
        uStack_17c = uStack_254;
        uStack_198 = uStack_270;
        uStack_194 = uStack_26c;
        uStack_190 = uStack_268;
        uStack_18c = uStack_264;
        afStack_1a8[0] = (float)uStack_280;
        afStack_1a8[1] = (float)((ulonglong)uStack_280 >> 0x20);
        afStack_1a8[2] = (float)uStack_278;
        afStack_1a8[3] = (float)((ulonglong)uStack_278 >> 0x20);
        uStack_178 = 0;
        uStack_16c = 1;
        uStack_168 = uStack_108;
        uStack_164 = uStack_104;
        uStack_160 = uStack_100;
        uStack_15c = uStack_fc;
        uStack_174 = uVar17;
        uStack_170 = uVar20;
        pdb_1413f6d90(&uStack_2f8,afStack_1a8);
        if ((char)uStack_200 == '\0') {
          fVar19 = *pfStack_1b8;
          pfVar13 = pfStack_1b0;
        }
        else {
          fVar19 = (float)((uint)*pfStack_1b0 ^ _DAT_142e37820);
          pfVar13 = pfStack_1b8;
        }
        fVar22 = *pfVar13;
        fVar37 = fVar37 - fVar33;
        fVar38 = fVar38 - fVar35;
        afStack_1a8[1] = fVar4 / SQRT(fVar38 * fVar38 + fVar37 * fVar37);
        afStack_1a8[0] = afStack_1a8[1] * fVar37;
        afStack_1a8[1] = afStack_1a8[1] * fVar38;
        pdb_140df4520(&uStack_148,afStack_1a8);
        fVar18 = fStack_140;
        fVar21 = uStack_148._4_4_;
        fVar24 = (float)uStack_148;
        pdb_140de88f0(&uStack_148,fVar19 * fStack_14c,fVar22 * fStack_14c);
        fStack_118 = fVar33 + fVar24 * _DAT_143309690;
        fStack_114 = fVar34 + fVar21 * _UNK_143309694;
        fStack_110 = fVar35 + fVar18 * _UNK_143309698;
        fVar36 = fVar36 + _UNK_142e4e65c * _UNK_14330969c;
        fVar27 = fStack_140 + fStack_140;
        fVar22 = fStack_140 * fVar27;
        fVar21 = uStack_148._4_4_ + uStack_148._4_4_;
        fVar19 = fVar21 * (float)uStack_148;
        fVar25 = fVar27 * (float)uStack_148;
        fVar26 = fVar27 * uStack_148._4_4_;
        fVar23 = (float)uStack_148 * ((float)uStack_148 + (float)uStack_148);
        fVar24 = fVar21 * fStack_13c;
        fVar18 = ((float)uStack_148 + (float)uStack_148) * fStack_13c;
        fVar27 = fStack_13c * fVar27;
        fStack_13c = fVar25 - fVar24;
        fStack_12c = fVar18 + fVar26;
        fStack_11c = fVar4 - (fVar23 + uStack_148._4_4_ * fVar21);
        uStack_148._0_4_ = fVar36 * (fVar4 - (uStack_148._4_4_ * fVar21 + fVar22));
        uStack_148._4_4_ = fVar36 * (fVar19 + fVar27);
        fStack_140 = fVar36 * fStack_13c;
        fStack_13c = fVar36 * fStack_13c;
        fStack_130 = fStack_12c * _UNK_1433096a8;
        fStack_12c = fStack_12c * _UNK_1433096ac;
        fStack_128 = (fVar24 + fVar25) * _DAT_1433096b0;
        fStack_124 = (fVar26 - fVar18) * _UNK_1433096b4;
        fStack_120 = fStack_11c * _UNK_1433096b8;
        fStack_11c = fStack_11c * _UNK_1433096bc;
        uStack_138 = CONCAT44((fVar4 - (fVar22 + fVar23)) * _UNK_1433096a4,
                              (fVar19 - fVar27) * _DAT_1433096a0);
        fStack_10c = fStack_110;
        pdb_140e07fe0(&uStack_280,&uStack_148);
        uVar17 = pdb_140315970(&uStack_1c0);
        uVar20 = pdb_1409012c0(*(undefined4 *)(param_1 + 0x274));
        pdb_140a77410(&uStack_148);
        uStack_188 = uStack_260;
        uStack_184 = uStack_25c;
        uStack_180 = uStack_258;
        uStack_17c = uStack_254;
        uStack_198 = uStack_270;
        uStack_194 = uStack_26c;
        uStack_190 = uStack_268;
        uStack_18c = uStack_264;
        afStack_1a8[0] = (float)uStack_280;
        afStack_1a8[1] = (float)((ulonglong)uStack_280 >> 0x20);
        afStack_1a8[2] = (float)uStack_278;
        afStack_1a8[3] = (float)((ulonglong)uStack_278 >> 0x20);
        uStack_178 = 0;
        uStack_16c = 1;
        uStack_168 = uStack_108;
        uStack_164 = uStack_104;
        uStack_160 = uStack_100;
        uStack_15c = uStack_fc;
        uStack_174 = uVar17;
        uStack_170 = uVar20;
        pdb_1413f6d90(&uStack_2f8,afStack_1a8);
      } while (uVar15 < uVar6 - 1);
    }
    uVar15 = uStack_1f8;
    if (lStack_250 != 0) {
      pub_1406abac0(uStack_1d8,lStack_250 << 2,4);
      uVar15 = uStack_1f8;
    }
  } while( true );
}

