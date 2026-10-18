// VA 0x1408b3700, PDB extent 4379 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::construct_wooden_stair_steps_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::construct_wooden_stair_steps_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
   Extent: 4379 */

void pdb_1408b3700(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,float param_10,byte param_11,longlong param_12,
                  longlong param_13,ulonglong param_14,undefined8 param_15)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  undefined4 uVar11;
  float *pfVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qb;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fStack_3b0;
  undefined8 uStack_3ac;
  float fStack_3a4;
  undefined8 uStack_3a0;
  float fStack_398;
  float fStack_394;
  undefined8 uStack_390;
  float *pfStack_388;
  float *pfStack_380;
  float *pfStack_378;
  float *pfStack_370;
  float *pfStack_368;
  float *pfStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  float fStack_340;
  float fStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  longlong lStack_318;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [8];
  float fStack_2f0;
  float fStack_2ec;
  ulonglong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  int iStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  ulonglong uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  longlong lStack_f0;
  
  lStack_198 = param_5 + param_6 * 0xc;
  lStack_188 = param_1 + param_2 * 4;
  if (param_2 < param_6) {
    param_6 = param_2;
  }
  lStack_168 = param_3 + param_4 * 8;
  if (param_6 <= param_4) {
    param_4 = param_6;
  }
  lStack_148 = param_13 + param_14 * 4;
  uStack_138 = param_14;
  if (param_4 <= param_14) {
    uStack_138 = param_4;
  }
  lStack_1a0 = param_5;
  uStack_180 = 0;
  uStack_160 = 0;
  lStack_150 = param_13;
  uStack_140 = 0;
  uStack_130 = 0;
  lStack_f0 = 0;
  lStack_190 = param_1;
  uStack_178 = param_6;
  lStack_170 = param_3;
  uStack_158 = param_4;
  pdb_1414ebc90(&fStack_398,&lStack_1a0);
  pfVar12 = (float *)CONCAT44(fStack_394,fStack_398);
  if (pfVar12 != (float *)0x0) {
    uVar30 = (uint)param_11;
    auStack_238._0_4_ = (int)(uVar30 << 0x1f) >> 0x1f;
    auStack_238._4_4_ = (int)(uVar30 << 0x1f) >> 0x1f;
    auStack_238._8_4_ = (int)(uVar30 << 0x1f) >> 0x1f;
    auStack_238._12_4_ = 0;
    fVar47 = _DAT_142e36f50;
    pfVar4 = (float *)CONCAT44(uStack_390._4_4_,(float)uStack_390);
    do {
      pfVar9 = pfStack_360;
      pfVar8 = pfStack_368;
      pfVar7 = pfStack_370;
      pfVar6 = pfStack_380;
      pfVar5 = pfStack_388;
      uStack_348 = lStack_f0;
      lStack_f0 = lStack_f0 + 1;
      fVar31 = *pfVar12;
      fVar1 = *pfStack_378;
      uVar2 = *(undefined8 *)(pfVar12 + 1);
      fVar20 = (float)uVar2;
      fVar24 = (float)((ulonglong)uVar2 >> 0x20);
      uVar3 = *(undefined8 *)(pfStack_378 + 1);
      fVar15 = (float)((ulonglong)uVar3 >> 0x20);
      uStack_390 = pfVar4;
      if (param_12 != 0) {
        fVar16 = fVar15 * _UNK_142e36f64;
        auVar22._4_4_ = fVar16;
        auVar22._0_4_ = fVar16;
        auVar22._8_4_ = _UNK_142e36f6c * 0.0;
        auVar22._12_4_ = _UNK_142e36f6c * 0.0;
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = fVar16 + fVar24 * _DAT_142e36f60;
        uStack_390 = (float *)(*(longlong *)(param_12 + 0x10) * 2);
        fStack_398 = (float)*(undefined8 *)(param_12 + 8);
        fStack_394 = (float)((ulonglong)*(undefined8 *)(param_12 + 8) >> 0x20);
        pfStack_388 = *(float **)(param_12 + 0x50);
        pdb_1402202d0(&fStack_398,fVar1 * fVar47 + fVar31 * fVar47,auVar23._0_8_);
      }
      fVar16 = (float)pdb_140e02880(param_15);
      lStack_318 = CONCAT44(lStack_318._4_4_,fVar16 * _DAT_142e3787c);
      uStack_1c8 = CONCAT44(fVar24,fVar24);
      fVar16 = *pfVar9 * fVar47 + *pfVar6 * fVar47;
      auStack_308 = ZEXT416((uint)fVar16);
      fVar16 = (fVar16 * _DAT_142f95158 + _DAT_142e36f28) * _DAT_14300c258;
      auStack_1b8 = ZEXT416((uint)fVar16);
      auStack_1e8 = ZEXT416((uint)(fVar16 * fVar47));
      uStack_240 = 0;
      uStack_250 = 0;
      uStack_1c0 = 0;
      uStack_1d8 = CONCAT44(fVar15,fVar15);
      uStack_1d0 = 0;
      fVar16 = fVar31;
      fVar33 = fVar1;
      uStack_258 = uVar3;
      uStack_248 = uVar2;
      if (param_11 == 0) {
        fStack_398 = fVar31;
        fStack_394 = fVar24;
        pdb_140df4540(&fStack_3b0,&fStack_398);
        fStack_398 = fVar1;
        fStack_394 = fVar15;
        pdb_140df4540(&fStack_3a4,&fStack_398);
        fVar20 = (float)uStack_3ac;
        fVar24 = (float)((ulonglong)uStack_3ac >> 0x20);
        fVar16 = fStack_3b0;
        uVar2 = uStack_3ac;
        fVar33 = fStack_3a4;
        uVar3 = uStack_3a0;
      }
      uStack_3a0 = uVar3;
      fStack_3a4 = fVar33;
      uStack_3ac = uVar2;
      fStack_3b0 = fVar16;
      fVar33 = fStack_3b0;
      uStack_330 = 0;
      fVar15 = *pfVar4;
      fVar16 = param_10;
      if (param_10 <= fVar15) {
        fVar16 = fVar15;
      }
      fVar36 = (float)lStack_318;
      fVar46 = (float)(~-(uint)NAN(fVar15) & (uint)fVar16 | -(uint)NAN(fVar15) & (uint)param_10) +
               (float)lStack_318;
      fVar16 = *pfVar5;
      fVar25 = pfVar5[1];
      fVar44 = _DAT_142e36f28 / SQRT(fVar16 * fVar16 + fVar25 * fVar25);
      fVar39 = (float)((uint)fVar25 ^ _DAT_142e37820) * fVar44;
      fVar44 = fVar44 * fVar16;
      uStack_2d8 = CONCAT44(fVar44,fVar39);
      uStack_338 = uStack_3a0;
      fStack_328 = fStack_3a4;
      pdb_140df4520(&fStack_398,&uStack_2d8);
      fVar38 = _UNK_142e36f6c;
      fVar37 = _UNK_142e36f68;
      fVar26 = _UNK_142e36f64;
      fVar25 = _DAT_142e36f60;
      fVar14 = fStack_398 * fVar46;
      auStack_2f8._4_4_ = fVar24 - (float)uStack_390 * fVar46 * _UNK_142e36f64;
      auStack_2f8._0_4_ = fVar20 - fStack_394 * fVar46 * _DAT_142e36f60;
      fStack_2f0 = 0.0 - _UNK_142e36f68 * 0.0;
      fStack_2ec = 0.0 - _UNK_142e36f6c * 0.0;
      uStack_2d8 = CONCAT44(fVar44,fVar39);
      pdb_140df4520(&fStack_398,&uStack_2d8);
      fVar44 = fStack_394 * fVar46;
      fVar45 = (float)uStack_390 * fVar46;
      fVar46 = fVar46 * fStack_398 * _DAT_142e36f50;
      fVar16 = *pfVar7;
      fVar39 = param_10;
      if (param_10 <= fVar16) {
        fVar39 = fVar16;
      }
      fVar36 = (float)(~-(uint)NAN(fVar16) & (uint)fVar39 | -(uint)NAN(fVar16) & (uint)param_10) +
               fVar36;
      fVar39 = *pfVar8;
      fVar17 = pfVar8[1];
      fVar34 = _DAT_142e36f28 / SQRT(fVar39 * fVar39 + fVar17 * fVar17);
      fVar32 = (float)((uint)fVar17 ^ _DAT_142e37820) * fVar34;
      fVar34 = fVar34 * fVar39;
      uStack_2d8 = CONCAT44(fVar34,fVar32);
      pdb_140df4520(&fStack_398,&uStack_2d8);
      fVar21 = fStack_328;
      fVar48 = fStack_328 - fStack_398 * fVar36 * _DAT_142e36f50;
      fVar39 = (float)uStack_338;
      fVar17 = uStack_338._4_4_;
      fVar18 = (float)uStack_330;
      fVar19 = uStack_330._4_4_;
      fVar40 = (float)uStack_338 - fStack_394 * fVar36 * fVar25;
      fVar41 = uStack_338._4_4_ - (float)uStack_390 * fVar36 * fVar26;
      fVar42 = (float)uStack_330 - fVar37 * 0.0;
      fVar43 = uStack_330._4_4_ - fVar38 * 0.0;
      uStack_2d8 = CONCAT44(fVar34,fVar32);
      pdb_140df4520(&fStack_398,&uStack_2d8);
      lVar10 = uStack_348;
      fStack_328 = fVar40 * _DAT_142e36f60 + (float)auStack_2f8._0_4_ * _DAT_142e36f60;
      fStack_324 = fVar41 * _UNK_142e36f64 + (float)auStack_2f8._4_4_ * _UNK_142e36f64;
      fStack_320 = fVar42 * _UNK_142e36f68 + fStack_2f0 * _UNK_142e36f68;
      fStack_31c = fVar43 * _UNK_142e36f6c + fStack_2ec * _UNK_142e36f6c;
      fVar20 = (fStack_394 * fVar36 * _DAT_142e36f60 + fVar39) * _DAT_142e36f60 +
               (fVar44 * fVar25 + fVar20) * _DAT_142e36f60;
      fVar24 = ((float)uStack_390 * fVar36 * _UNK_142e36f64 + fVar17) * _UNK_142e36f64 +
               (fVar45 * fVar26 + fVar24) * _UNK_142e36f64;
      fVar25 = (_UNK_142e36f68 * 0.0 + fVar18) * _UNK_142e36f68 +
               (fVar37 * 0.0 + 0.0) * _UNK_142e36f68;
      fVar26 = (_UNK_142e36f6c * 0.0 + fVar19) * _UNK_142e36f6c +
               (fVar38 * 0.0 + 0.0) * _UNK_142e36f6c;
      fVar37 = (fVar36 * fStack_398 * _DAT_142e36f50 + fVar21) * _DAT_142e36f60 +
               (fVar46 + fVar33) * _DAT_142e36f60;
      fVar38 = fVar48 * _UNK_142e36f64 + (fVar33 - fVar14 * fVar47) * _UNK_142e36f64;
      fVar36 = _UNK_142e36f6c * 0.0 + _UNK_142e36f6c * 0.0;
      fVar39 = fVar37 - fVar38;
      auVar35._0_4_ = fVar20 - fStack_328;
      auVar35._4_4_ = fVar24 - fStack_324;
      auVar35._8_4_ = fVar25 - fStack_320;
      auVar35._12_4_ = fVar26 - fStack_31c;
      fVar33 = SQRT(auVar35._4_4_ * auVar35._4_4_ + fVar39 * fVar39 + auVar35._0_4_ * auVar35._0_4_)
      ;
      fVar47 = _DAT_142e36f50;
      if (_DAT_143009d64 <= fVar33) {
        fVar39 = fVar39 / fVar33;
        auStack_1f8._4_4_ = fVar33;
        auStack_1f8._0_4_ = fVar33;
        auStack_1f8._8_8_ = 0;
        auStack_228 = divps(auVar35,auStack_1f8);
        fVar14 = auStack_228._4_4_;
        fVar44 = auStack_228._12_4_;
        fVar47 = auStack_228._0_4_;
        if (param_11 == 0) {
          fStack_218 = 0.0;
          fVar32 = auStack_228._8_4_ * _UNK_142e378e8;
          fVar45 = fVar14 * 0.0 - fVar39 * 0.0;
          fVar18 = fVar39 - fVar47 * _DAT_142e378e0;
          fVar19 = fVar47 * _DAT_142e378e0 - fVar14 * _UNK_142e378e4;
          fVar21 = _DAT_142e36f28 / SQRT(fVar19 * fVar19 + fVar45 * fVar45 + fVar18 * fVar18);
          uVar30 = (int)ABS(fVar21) - 0x800000;
          uVar11 = CONCAT31((int3)(uVar30 >> 8),0x7effffff < uVar30 || (int)fVar21 < 0);
          fVar46 = 0.0;
          fVar17 = 0.0;
          fStack_340 = 0.0;
          fStack_33c = 0.0;
          fStack_214 = 0.0;
          fStack_210 = 0.0;
          fStack_20c = 0.0;
          if ((int)fVar21 - 1U < 0x7fffff || 0x7effffff >= uVar30 && (int)fVar21 >= 0) {
            fStack_218 = fVar45 * fVar21;
            fVar46 = fVar18 * fVar21;
            fVar17 = fVar19 * fVar21;
            fStack_340 = (fVar32 - fVar32) * 0.0;
            fStack_33c = (fVar32 - fVar44 * _UNK_142e378ec) * 0.0;
            fStack_214 = fVar14;
            fStack_210 = fVar44;
            fStack_20c = fVar44;
          }
        }
        else {
          fStack_214 = uStack_258._4_4_ - uStack_248._4_4_;
          fStack_210 = (float)uStack_250 - (float)uStack_240;
          fStack_20c = uStack_250._4_4_ - uStack_240._4_4_;
          fVar46 = fStack_214 * fVar14 +
                   (fVar1 - fVar31) * fVar39 + ((float)uStack_258 - (float)uStack_248) * fVar47;
          fVar45 = fStack_214 - fVar14 * fVar46;
          fVar17 = (fVar1 - fVar31) - fVar39 * fVar46;
          fVar18 = fStack_20c - fVar14;
          fVar19 = fStack_20c - fVar38;
          fStack_218 = ((float)uStack_258 - (float)uStack_248) - fVar46 * fVar47;
          fVar21 = _DAT_142e36f28 /
                   SQRT(fVar17 * fVar17 + fStack_218 * fStack_218 + fVar45 * fVar45);
          bVar13 = (int)ABS(fVar21) - 0x800000U < 0x7f000000 && -1 < (int)fVar21;
          uVar11 = CONCAT31((int3)((int)ABS(fVar21) - 0x800000U >> 8),bVar13);
          bVar13 = (int)fVar21 - 1U < 0x7fffff || bVar13;
          fVar21 = (float)((uint)fVar21 ^ _DAT_142e37820);
          if (bVar13) {
            fStack_218 = fStack_218 * fVar21;
          }
          else {
            fStack_214 = 0.0;
            fStack_210 = 0.0;
            fStack_20c = 0.0;
            fStack_218 = _DAT_142e377f0;
          }
          uVar30 = (uint)bVar13;
          uVar27 = (int)(uVar30 << 0x1f) >> 0x1f;
          uVar28 = (int)(uVar30 << 0x1f) >> 0x1f;
          uVar29 = (int)(uVar30 << 0x1f) >> 0x1f;
          uVar30 = (int)(uVar30 << 0x1f) >> 0x1f;
          fVar46 = (float)(~uVar27 & _DAT_142e37b50 | (uint)(fVar45 * fVar21) & uVar27);
          fVar17 = (float)(~uVar28 & _UNK_142e37b54 | (uint)(fVar17 * fVar21) & uVar28);
          fStack_340 = (float)(~uVar29 & _UNK_142e37b58 | (uint)(fVar18 * _UNK_142e37828) & uVar29);
          fStack_33c = (float)(~uVar30 & _UNK_142e37b5c | (uint)(fVar19 * _UNK_142e37828) & uVar30);
        }
        uStack_338 = CONCAT44(fVar38,fVar38);
        uStack_330 = CONCAT44(fVar36,fVar36);
        _auStack_2f8 = ZEXT416((uint)fVar33);
        if (fVar17 * fVar17 + fStack_218 * fStack_218 + fVar46 * fVar46 < _DAT_142e36f24) {
          fStack_218 = 0.0;
          fVar18 = auStack_228._8_4_ * _UNK_142e378e8;
          fVar33 = fVar14 * 0.0 - fVar39 * 0.0;
          fVar38 = fVar39 - fVar47 * _DAT_142e378e0;
          fVar36 = fVar47 * _DAT_142e378e0 - fVar14 * _UNK_142e378e4;
          fVar45 = _DAT_142e36f28 / SQRT(fVar36 * fVar36 + fVar33 * fVar33 + fVar38 * fVar38);
          uVar30 = (int)ABS(fVar45) - 0x800000;
          uVar11 = CONCAT31((int3)(uVar30 >> 8),0x7effffff < uVar30 || (int)fVar45 < 0);
          fVar46 = 0.0;
          fVar17 = 0.0;
          fStack_340 = 0.0;
          fStack_33c = 0.0;
          fStack_214 = 0.0;
          fStack_210 = 0.0;
          fStack_20c = 0.0;
          if ((int)fVar45 - 1U < 0x7fffff || 0x7effffff >= uVar30 && (int)fVar45 >= 0) {
            fStack_218 = fVar33 * fVar45;
            fVar46 = fVar38 * fVar45;
            fVar17 = fVar36 * fVar45;
            fStack_340 = (fVar18 - fVar18) * 0.0;
            fStack_33c = (fVar18 - fVar44 * _UNK_142e378ec) * 0.0;
            fStack_214 = fVar14;
            fStack_210 = fVar44;
            fStack_20c = fVar44;
          }
        }
        uStack_348 = CONCAT44(fVar17,fVar46);
        fVar33 = fVar39 * fStack_218 - fVar17 * fVar47;
        uStack_2e0 = lVar10 * 0x3d1 ^ lStack_318 << 0x20;
        fStack_208 = fVar20;
        fStack_204 = fVar24;
        fStack_200 = fVar25;
        fStack_1fc = fVar26;
        pdb_140de8220(uStack_2e0,uVar11,
                      fVar16 * _DAT_142e36f50 + fVar15 * _DAT_142e36f50 + _DAT_143015180);
        pdb_140e02880(&uStack_2e0);
        pdb_140e02880(&uStack_2e0);
        fVar24 = (float)pub_142e32b30();
        fVar15 = (float)pub_142e329e0();
        lStack_318 = pub_142e32b30();
        auStack_308._0_8_ = pub_142e329e0();
        fVar47 = _DAT_142e36f50;
        auStack_308._8_8_ = extraout_XMM0_Qb;
        auVar22 = auStack_308;
        fVar20 = fVar33;
        if (param_11 == 0) {
          fVar20 = 0.0;
        }
        fVar38 = (float)auStack_228._0_4_ * (float)uStack_348 -
                 fStack_218 * (float)auStack_228._4_4_;
        fVar36 = (float)auStack_228._4_4_ * uStack_348._4_4_ - fVar39 * (float)uStack_348;
        fVar14 = fVar24 * (float)(~auStack_238._0_4_ & (uint)_DAT_142e378e0 |
                                 (uint)fVar38 & auStack_238._0_4_);
        fVar44 = fVar24 * (float)(~auStack_238._4_4_ & (uint)_UNK_142e378e4 |
                                 (uint)fVar36 & auStack_238._4_4_);
        fVar24 = fVar24 * fVar20;
        fVar16 = (float)auStack_228._4_4_ * fVar24 +
                 (float)auStack_228._0_4_ * fVar44 + fVar39 * fVar14;
        fVar16 = fVar16 + fVar16;
        fVar25 = fVar24 * fVar24;
        fVar17 = fVar15 * fVar15;
        fVar20 = fVar44 * fVar44 + fVar14 * fVar14;
        fVar45 = fVar17 - (fVar20 + fVar25);
        fVar46 = fVar17 - (fVar20 + fVar25);
        fVar17 = fVar17 - (fVar20 + fVar25);
        fVar26 = (float)uStack_348 * fVar24 + fStack_218 * fVar44 + uStack_348._4_4_ * fVar14;
        fVar20 = fVar33 * fVar24 + fVar36 * fVar44 + fVar38 * fVar14;
        fVar26 = fVar26 + fVar26;
        fVar20 = fVar20 + fVar20;
        fVar15 = fVar15 + fVar15;
        fStack_27c = ((float)auStack_228._4_4_ * fVar44 - (float)auStack_228._0_4_ * fVar24) *
                     fVar15 + fVar16 * fVar14 + fVar39 * fVar45;
        fStack_278 = (fVar39 * fVar24 - (float)auStack_228._4_4_ * fVar14) * fVar15 +
                     fVar16 * fVar44 + (float)auStack_228._0_4_ * fVar46;
        fStack_274 = ((float)auStack_228._0_4_ * fVar14 - fVar39 * fVar44) * fVar15 +
                     fVar16 * fVar24 + (float)auStack_228._4_4_ * fVar17;
        fVar16 = ((float)uStack_348 * fVar44 - fStack_218 * fVar24) * fVar15 +
                 fVar26 * fVar14 + uStack_348._4_4_ * fVar45;
        fVar25 = (uStack_348._4_4_ * fVar24 - (float)uStack_348 * fVar14) * fVar15 +
                 fVar26 * fVar44 + fStack_218 * fVar46;
        fVar26 = (fStack_218 * fVar14 - uStack_348._4_4_ * fVar44) * fVar15 +
                 fVar26 * fVar24 + (float)uStack_348 * fVar17;
        fVar45 = (fVar33 * fVar44 - fVar36 * fVar24) * fVar15 + fVar20 * fVar14 + fVar38 * fVar45;
        fVar46 = (fVar38 * fVar24 - fVar33 * fVar14) * fVar15 + fVar20 * fVar44 + fVar36 * fVar46;
        fVar17 = (fVar36 * fVar14 - fVar38 * fVar44) * fVar15 + fVar20 * fVar24 + fVar33 * fVar17;
        fVar19 = (float)lStack_318 * fStack_27c;
        fVar36 = fStack_278 * (float)lStack_318;
        fVar14 = fStack_274 * (float)lStack_318;
        fVar20 = fVar14 * fVar14;
        fVar38 = (float)auStack_308._0_4_ * (float)auStack_308._0_4_;
        fVar24 = fVar36 * fVar36 + fVar19 * fVar19;
        fVar15 = fVar38 - (fVar24 + fVar20);
        fVar33 = fVar38 - (fVar24 + fVar20);
        fVar38 = fVar38 - (fVar24 + fVar20);
        fVar18 = fVar26 * fVar14 + fVar25 * fVar36 + fVar16 * fVar19;
        fVar18 = fVar18 + fVar18;
        fVar44 = (float)auStack_308._0_4_ + (float)auStack_308._0_4_;
        fVar39 = fVar17 * fVar14 + fVar46 * fVar36 + fVar45 * fVar19;
        fVar39 = fVar39 + fVar39;
        fVar20 = (fVar36 * fVar17 - fVar46 * fVar14) * fVar44 + fVar39 * fVar19 + fVar45 * fVar15;
        fVar24 = (fVar14 * fVar45 - fVar17 * fVar19) * fVar44 + fVar39 * fVar36 + fVar46 * fVar33;
        fStack_280 = (fVar19 * fVar46 - fVar45 * fVar36) * fVar44 +
                     fVar39 * fVar14 + fVar17 * fVar38;
        fStack_27c = (float)auStack_1f8._0_4_ * fStack_27c;
        fStack_278 = (float)auStack_1f8._4_4_ * fStack_278;
        uVar11 = auStack_2f8._0_4_;
        fStack_274 = fStack_274 * (float)auStack_2f8._0_4_;
        fVar45 = ((float)uStack_338 + fVar37) * _DAT_142e36f50 - fStack_27c * _DAT_142e36f50;
        fVar37 = (fStack_328 + fStack_208) * _DAT_142e36f60 - fStack_278 * _DAT_142e36f60;
        fVar39 = (fStack_324 + fStack_204) * _UNK_142e36f64 - fStack_274 * _UNK_142e36f64;
        if (param_11 != 0) {
          fVar31 = (float)auStack_1e8._0_4_ + _DAT_1430151b4;
          fVar45 = fVar45 + fVar31 * fVar20;
          fVar37 = fVar37 + fVar24 * fVar31;
          fVar39 = fVar39 + fStack_280 * fVar31;
        }
        else {
          fVar37 = (((float)((uint)((float)uStack_248 - (float)uStack_258) & _DAT_142e377e0) /
                    SQRT(((float)uStack_1c8 - (float)uStack_1d8) *
                         ((float)uStack_1c8 - (float)uStack_1d8) +
                         (fVar31 - fVar1) * (fVar31 - fVar1))) / _DAT_142f61034) * _DAT_142e37ae4 +
                   fVar37 + _DAT_1430151b0;
        }
        uStack_288 = CONCAT44(fVar24 * _UNK_1430151c4,fVar20 * _DAT_1430151c0);
        fStack_280 = fStack_280 * _DAT_142e3787c;
        fStack_270 = ((fVar26 * fVar36 - fVar25 * fVar14) * fVar44 +
                     fVar18 * fVar19 + fVar16 * fVar15) * (float)auStack_1b8._0_4_ * _DAT_142e33050;
        fStack_26c = ((fVar16 * fVar14 - fVar26 * fVar19) * fVar44 +
                     fVar18 * fVar36 + fVar25 * fVar33) * (float)auStack_1b8._0_4_ * _UNK_142e33054;
        fStack_268 = ((fVar25 * fVar19 - fVar16 * fVar36) * fVar44 +
                     fVar18 * fVar14 + fVar26 * fVar38) * (float)auStack_1b8._0_4_ * _UNK_142e33058;
        fStack_264 = _DAT_142e36f28 * fVar45 * _UNK_142e3305c;
        uStack_260 = CONCAT44(fVar39,fVar37);
        auStack_308 = auVar22;
        pdb_1414ec950(param_8,&uStack_288);
        bVar13 = (float)uVar11 < _DAT_143007998;
        uVar11 = pdb_1409012c0(param_9);
        pdb_140a77410(&fStack_398);
        uStack_2d0 = CONCAT44(fStack_27c,fStack_280);
        uStack_2c8 = CONCAT44(fStack_274,fStack_278);
        uStack_2c0 = CONCAT44(fStack_26c,fStack_270);
        uStack_2b8 = CONCAT44(fStack_264,fStack_268);
        uStack_2b0 = uStack_260;
        uStack_2d8 = uStack_288;
        uStack_2a8 = 0;
        uStack_298 = uStack_358;
        uStack_290 = uStack_350;
        iStack_2a4 = (int)lVar10 * 0x3d1;
        uStack_2a0 = uVar11;
        uStack_29c = bVar13 | 0x1c;
        pdb_1414aa5f0(param_7,&uStack_2d8);
      }
      pdb_1414ebc90(&fStack_398,&lStack_1a0);
      pfVar12 = (float *)CONCAT44(fStack_394,fStack_398);
      pfVar4 = uStack_390;
    } while (pfVar12 != (float *)0x0);
  }
  return;
}

