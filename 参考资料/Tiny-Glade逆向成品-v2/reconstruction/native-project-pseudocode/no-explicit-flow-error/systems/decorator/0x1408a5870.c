// VA 0x1408a5870, PDB extent 4929 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::construct_stone_stair_steps
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::construct_stone_stair_steps
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 4929 */

void pdb_1408a5870(longlong param_1,float *param_2,longlong param_3,float *param_4,float *param_5,
                  float *param_6,ulonglong *param_7,undefined8 param_8,longlong *param_9,
                  undefined4 param_10,undefined8 param_11,ushort param_12,char param_13,
                  undefined4 param_14,longlong param_15,longlong param_16,float *param_17,
                  char param_18)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  float fVar45;
  undefined1 auVar44 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float *pfStack_430;
  float *pfStack_428;
  longlong lStack_420;
  longlong lStack_418;
  undefined8 uStack_410;
  float *pfStack_408;
  longlong lStack_400;
  longlong lStack_3f8;
  undefined8 uStack_3f0;
  float *pfStack_3e8;
  longlong lStack_3e0;
  longlong lStack_3d8;
  undefined8 uStack_3d0;
  float *pfStack_3c8;
  undefined8 uStack_3c0;
  ulonglong uStack_380;
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  float *pfStack_358;
  undefined8 uStack_350;
  float fStack_348;
  float fStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined1 auStack_2f8 [16];
  float fStack_2e8;
  undefined8 uStack_2e4;
  float fStack_2dc;
  undefined8 uStack_2d8;
  ulonglong uStack_2d0;
  undefined8 uStack_2c8;
  longlong lStack_2c0;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 uStack_298;
  float fStack_290;
  float fStack_28c;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  longlong lStack_1f0;
  float *pfStack_1e8;
  longlong lStack_1e0;
  undefined1 auStack_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [16];
  float *pfStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  undefined1 auStack_198 [8];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_10c;
  undefined1 auStack_108 [20];
  float fStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (param_6 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_1430142e8);
  }
  if (param_6 == (float *)0x1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(1,1,&UNK_143014300);
  }
  fStack_f4 = param_5[1];
  auStack_1c8 = ZEXT416((uint)(fStack_f4 - param_5[4]));
  fVar22 = (float)pub_142e32a40(_DAT_142e3c624 /
                                SQRT((param_5[2] - param_5[5]) * (param_5[2] - param_5[5]) +
                                     (*param_5 - param_5[3]) * (*param_5 - param_5[3])));
  uVar17 = (longlong)(fVar22 - _DAT_142e36f2c) & (longlong)fVar22 >> 0x3f | (longlong)fVar22;
  if (fVar22 < 0.0) {
    uVar17 = 0;
  }
  uStack_2b0 = 0xffffffffffffffff;
  if (fVar22 <= _DAT_142e36f30) {
    uStack_2b0 = uVar17;
  }
  auStack_108._0_8_ = (longlong)param_6 * 3;
  pfStack_428 = param_5 + (longlong)param_6 * 3;
  pfStack_430 = param_5;
  lStack_418 = param_1 + (longlong)param_2 * 4;
  if (param_6 <= param_2) {
    param_2 = param_6;
  }
  lStack_3f8 = param_3 + (longlong)param_4 * 8;
  pfStack_3e8 = param_4;
  if (param_2 <= param_4) {
    pfStack_3e8 = param_2;
  }
  uStack_410 = 0;
  lStack_3d8 = param_16 + (longlong)param_17 * 4;
  if (pfStack_3e8 <= param_17) {
    param_17 = pfStack_3e8;
  }
  uStack_3f0 = 0;
  lStack_3e0 = param_16;
  uStack_3d0 = 0;
  pfStack_1a0 = param_6;
  uStack_2b8 = (longlong)param_6 - (longlong)(uStack_2b0 + 2);
  if (param_6 < (float *)(uStack_2b0 + 2)) {
    uStack_2b8 = 0;
  }
  uStack_3c0 = 0;
  uStack_380 = 0;
  lStack_420 = param_1;
  pfStack_408 = param_2;
  lStack_400 = param_3;
  pfStack_3c8 = param_17;
  pfStack_1b0 = pfStack_428;
  pdb_1414ebc90(&fStack_188,&pfStack_430);
  pfVar13 = (float *)CONCAT44(fStack_184,fStack_188);
  if (pfVar13 != (float *)0x0) {
    auStack_1c8._4_4_ = auStack_1c8._4_4_ & _UNK_142e377e4;
    auStack_1c8._0_4_ = auStack_1c8._0_4_ & _DAT_142e377e0;
    auStack_1c8._8_4_ = auStack_1c8._8_4_ & _UNK_142e377e8;
    auStack_1c8._12_4_ = auStack_1c8._12_4_ & _UNK_142e377ec;
    fStack_348 = 0.0;
    if (param_13 != '\0') {
      fStack_348 = _DAT_142e37ae4;
    }
    pfStack_1a8 = param_5 + auStack_108._0_8_ + -3;
    pfStack_1a0 = (float *)((longlong)pfStack_1a0 - 2);
    uStack_2c8 = *(undefined8 *)(param_15 + 8);
    lStack_2c0 = *(longlong *)(param_15 + 0x10) * 2;
    pfStack_358 = *(float **)(param_15 + 0x50);
    uStack_350 = 0;
    uStack_340 = 0;
    uStack_338 = CONCAT44(param_14,param_14);
    uStack_330 = 0;
    fStack_344 = fStack_348;
    do {
      pfVar1 = uStack_178;
      auVar25 = _auStack_198;
      uVar17 = uStack_380 + 1;
      pfVar21 = (float *)CONCAT44(fStack_17c,fStack_180);
      auStack_198._4_4_ = fStack_16c;
      auStack_198._0_4_ = fStack_170;
      uVar10 = auStack_168._8_8_;
      uVar11 = auStack_158._0_8_;
      fVar22 = *(float *)(auStack_168._0_8_ + 4);
      fVar39 = pfVar13[1];
      fVar46 = (float)((uint)(fVar22 - fVar39) & _DAT_142e377e0);
      if (fVar46 <= _DAT_142e382c0) {
        fVar46 = _DAT_142e382c0;
      }
      fVar51 = (float)auStack_1c8._0_4_;
      _auStack_198 = auVar25;
      if ((param_12 & 0x100) == 0) {
        if (pfStack_1a8 == (float *)0x0) {
          uStack_380 = uVar17;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143014318);
        }
        if (pfStack_1b0[-2] <= fStack_f4) goto LAB_1408a5bf0;
        bVar16 = uStack_2b8 < uStack_380;
        if ((param_12 & 1) == 0) goto LAB_1408a5bf8;
LAB_1408a5c40:
        if (!bVar16) {
LAB_1408a5c4b:
          fVar51 = 0.0;
        }
      }
      else {
LAB_1408a5bf0:
        bVar16 = false;
        if ((param_12 & 1) != 0) goto LAB_1408a5c40;
LAB_1408a5bf8:
        if (pfStack_1a8 == (float *)0x0) {
          uStack_380 = uVar17;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143014330);
        }
        if (fStack_f4 < pfStack_1b0[-2] || fStack_f4 == pfStack_1b0[-2]) goto LAB_1408a5c40;
        if (uStack_2b0 <= uStack_380 && !bVar16) goto LAB_1408a5c4b;
      }
      uStack_2d0 = uStack_380;
      fVar46 = fVar46 + fVar51;
      _fStack_190 = auVar25._8_8_;
      uStack_298 = (float *)auStack_158._8_8_;
      if (param_18 != '\0') {
        fVar46 = fVar46 * _DAT_142e36f50;
      }
      auStack_378 = ZEXT416((uint)fVar39);
      fVar51 = fVar22;
      if (fVar22 <= fVar39) {
        fVar51 = fVar39;
      }
      fVar37 = (float)(~-(uint)NAN(fVar39) & (uint)fVar51 | -(uint)NAN(fVar39) & (uint)fVar22);
      fVar39 = *pfVar13;
      fVar51 = pfVar13[2];
      fVar24 = *(float *)auStack_168._0_8_;
      fVar38 = *(float *)(auStack_168._0_8_ + 8);
      fStack_188 = (float)uStack_2c8;
      fStack_184 = (float)((ulonglong)uStack_2c8 >> 0x20);
      fStack_180 = (float)lStack_2c0;
      fStack_17c = (float)((ulonglong)lStack_2c0 >> 0x20);
      uStack_178 = pfStack_358;
      uStack_380 = uVar17;
      auStack_368 = ZEXT416((uint)fVar22);
      fVar23 = (float)pdb_1402202d0(&fStack_188,fVar24 * _DAT_142e36f50 + fVar39 * _DAT_142e36f50,
                                    fVar38 * _DAT_142e36f50 + fVar51 * _DAT_142e36f50);
      fVar23 = fVar23 + _DAT_142e3c608;
      fVar22 = fVar23;
      if (fVar23 <= fVar37) {
        fVar22 = fVar37;
      }
      uVar33 = ~-(uint)NAN(fVar37) & (uint)fVar22 | -(uint)NAN(fVar37) & (uint)fVar23;
      fStack_188 = fVar39;
      fStack_184 = fVar51;
      pdb_140df4540(&fStack_2dc,&fStack_188,uVar33);
      fStack_188 = fVar24;
      fStack_184 = fVar38;
      pdb_140df4540(&fStack_2e8,&fStack_188,uVar33);
      fVar23 = fStack_2dc;
      fVar24 = _DAT_142e36f28;
      auStack_2f8 = ZEXT416((uint)fVar46);
      fVar46 = fVar46 * _DAT_142e36f38;
      fVar22 = *pfVar21;
      fVar39 = *pfVar1;
      fVar51 = pfVar1[1];
      fVar47 = _DAT_142e36f28 / SQRT(fVar39 * fVar39 + fVar51 * fVar51);
      fVar38 = (float)((uint)fVar51 ^ _DAT_142e37820) * fVar47;
      fVar47 = fVar47 * fVar39;
      uStack_230 = CONCAT44(fVar47,fVar38);
      pdb_140df4520(&fStack_188,&uStack_230);
      fVar32 = fStack_180;
      fVar31 = fStack_184;
      fVar37 = fStack_188;
      fVar51 = _DAT_142e377f0;
      fVar30 = (float)uStack_2d8;
      uVar17 = (ulonglong)uStack_2d8 >> 0x20;
      uStack_230 = CONCAT44(fVar47,fVar38);
      pdb_140df4520(&fStack_188,&uStack_230);
      fVar38 = fStack_2e8;
      auStack_108._0_16_ = ZEXT416((uint)fStack_184);
      _auStack_268 = ZEXT416((uint)fStack_180);
      auStack_278 = ZEXT416((uint)fStack_188);
      fVar52 = (float)uStack_2e4;
      uVar42 = (ulonglong)uStack_2e4 >> 0x20;
      auVar43._0_4_ = fVar22 - fStack_348;
      auVar43._4_4_ = *(float *)uVar10 - fStack_344;
      auVar43._8_4_ = 0.0 - (float)uStack_340;
      auVar43._12_4_ = 0.0 - uStack_340._4_4_;
      fVar22 = *(float *)uVar11;
      fVar39 = *(float *)(uVar11 + 4);
      fVar48 = fVar24 / SQRT(fVar22 * fVar22 + fVar39 * fVar39);
      fVar39 = (float)((uint)fVar39 ^ _DAT_142e37820) * fVar48;
      fVar48 = fVar48 * fVar22;
      uStack_230 = CONCAT44(fVar48,fVar39);
      pdb_140df4520(&fStack_188,&uStack_230);
      fVar36 = fStack_180;
      fVar35 = fStack_184;
      fVar47 = fStack_188;
      uStack_230 = CONCAT44(fVar48,fVar39);
      pdb_140df4520(&fStack_188,&uStack_230);
      _auStack_258 = ZEXT416((uint)fStack_188);
      auStack_248 = ZEXT416((uint)fStack_180);
      auVar25._8_8_ = uStack_330;
      auVar25._0_8_ = uStack_338;
      auVar25 = maxps(auVar25,auVar43);
      fVar41 = (float)(~-(uint)NAN(auVar43._0_4_) & auVar25._0_4_ |
                      (uint)uStack_338 & -(uint)NAN(auVar43._0_4_));
      fVar45 = (float)(~-(uint)NAN(auVar43._4_4_) & auVar25._4_4_ |
                      (uint)((ulonglong)uStack_338 >> 0x20) & -(uint)NAN(auVar43._4_4_));
      auStack_288 = ZEXT416((uint)(fStack_184 * fVar45));
      fVar27 = fVar45 * _UNK_142e36f64;
      fVar28 = (float)(~-(uint)NAN(auVar43._12_4_) & auVar25._12_4_ |
                      (uint)((ulonglong)uStack_330 >> 0x20) & -(uint)NAN(auVar43._12_4_)) *
               _UNK_142e36f6c;
      fVar40 = fVar27 + fVar41 * _DAT_142e36f60;
      fVar48 = (float)pdb_140de8220();
      uVar8 = uStack_2d0;
      fVar39 = _DAT_142e36f28;
      fVar22 = 0.0;
      if (0.0 <= fVar48) {
        fVar22 = fVar48;
      }
      fVar48 = fVar24;
      if (fVar22 <= fVar24) {
        fVar48 = fVar22;
      }
      _auStack_1d8 = ZEXT416((uint)fVar48);
      fStack_2a8 = fVar40;
      fStack_2a4 = fVar27;
      fStack_2a0 = fVar28;
      fStack_29c = fVar28;
      if (fVar40 < 0.0) {
LAB_1408a6017:
        if ((fVar40 < _DAT_142f6e3d4) || (_DAT_142e37990 <= fVar40)) {
          fVar27 = (_DAT_142e36f28 - fVar48) * _DAT_142e3783c;
          fVar48 = fVar48 * _DAT_142f6e3f0;
          fVar28 = (float)pdb_140e02880(param_7);
          fVar22 = 0.0;
          if (0.0 <= fVar28) {
            fVar22 = fVar28;
          }
          if (fVar22 <= fVar39) {
            fVar39 = fVar22;
          }
          fVar22 = (_DAT_142e3788c - (fVar39 + fVar39)) * fVar39 * fVar39 * (fVar48 + fVar27) +
                   _DAT_142e3c620;
          auVar7._4_4_ = fStack_2a4;
          auVar7._0_4_ = fStack_2a8;
          auVar7._8_4_ = fStack_2a0;
          auVar7._12_4_ = fStack_29c;
          auVar26._4_12_ = auVar7._4_12_;
          auVar26._0_4_ = fStack_2a8 / fVar22;
          fVar39 = (float)pub_142e329c0(auVar26._0_8_);
          uVar14 = (longlong)(fVar39 - _DAT_142e36f2c) & (longlong)fVar39 >> 0x3f | (longlong)fVar39
          ;
          if (fVar39 < 0.0) {
            uVar14 = 0;
          }
          if (_DAT_142e36f30 < fVar39) {
            uVar14 = 0xffffffffffffffff;
          }
          lVar18 = uVar14 + (uVar14 == 0);
          fVar22 = fVar22 * _DAT_142e37988;
          if (fVar22 <= _DAT_142e3c630) {
            fVar22 = _DAT_142e3c630;
          }
        }
        else {
          uVar14 = *param_7 + 0xa0761d6478bd642f;
          *param_7 = uVar14;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar14 ^ 0xe7037ed1a0b428db;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar14;
          lVar18 = 1 - ((longlong)(SUB168(auVar4 * auVar5,8) ^ SUB168(auVar4 * auVar5,0)) >> 0x3f);
          fVar22 = 0.0;
        }
      }
      else {
        lVar18 = 1;
        fVar22 = 0.0;
        if (_DAT_142f6e3d4 <= fVar40) goto LAB_1408a6017;
      }
      fVar40 = fVar46 * 0.0;
      fVar48 = fVar51 + _DAT_142e36f28;
      fVar30 = fVar30 + fVar46;
      fVar27 = (float)uVar17 + fVar40;
      fVar51 = _DAT_142e36f28 + fVar51;
      fVar46 = fVar46 + fVar52;
      fVar52 = fVar40 + (float)uVar42;
      fVar39 = _DAT_142e36f28 * fVar24 * _DAT_1430140c0;
      fVar28 = (fVar23 + fVar40) - fVar41 * fVar37 * _UNK_1430140c4;
      fVar31 = fVar30 - fVar41 * fVar31 * _UNK_1430140c8;
      fVar32 = fVar27 - fVar41 * fVar32 * _UNK_1430140cc;
      fVar24 = _DAT_142e36f28 * fVar24 * _DAT_1430140c0;
      fVar53 = (fVar40 + fVar38) - fVar45 * fVar47 * _UNK_1430140c4;
      fVar54 = fVar46 - fVar45 * fVar35 * _UNK_1430140c8;
      fVar55 = fVar52 - fVar45 * fVar36 * _UNK_1430140cc;
      pdb_140de8290(&lStack_1f0,lVar18 + 1,fVar22 / fStack_2a8,param_7,&UNK_143014348);
      fVar22 = (fVar48 - fVar39) * _DAT_1430140d0;
      fVar39 = fVar28 * _UNK_1430140d4;
      fVar37 = fVar31 * _UNK_1430140d8;
      fVar47 = fVar32 * _UNK_1430140dc;
      fVar51 = (fVar51 - fVar24) * _DAT_14300c780;
      fVar24 = fVar53 * _UNK_14300c784;
      fVar35 = fVar54 * _UNK_14300c788;
      fVar36 = fVar55 * _UNK_14300c78c;
      fStack_10c = (float)pdb_140e02880(param_7);
      uVar12 = auStack_108._4_4_;
      fVar48 = *uStack_298 * _DAT_142e36f50 + *(float *)auStack_198 * _DAT_142e36f50;
      if ((param_18 == '\0') || (_DAT_142e3b1d8 <= fVar48)) {
        _auStack_198 = ZEXT416((uint)fVar48);
        fVar30 = (float)auStack_108._0_4_ * fVar41 * _DAT_142e36f50 + fVar30;
        uVar9 = auStack_288._4_4_;
        fVar23 = fVar41 * (float)auStack_278._0_4_ * _DAT_142e36f60 + fVar23 + fVar40;
        fVar27 = fVar41 * (float)auStack_268._0_4_ * _UNK_142e36f64 + fVar27;
        fVar38 = fVar45 * (float)auStack_258._0_4_ * _DAT_142e36f60 + fVar40 + fVar38;
        fVar52 = fVar45 * (float)auStack_248._0_4_ * _UNK_142e36f64 + fVar52;
        fVar46 = (float)auStack_288._0_4_ * _DAT_142e36f50 + fVar46;
        fStack_300 = (float)auStack_2f8._0_4_ * _DAT_142e36f50;
        fStack_2fc = fStack_300 * 0.0;
        fStack_328 = fStack_2fc + fVar28;
        fStack_324 = fStack_300 + fVar31;
        fStack_320 = fStack_2fc + fVar32;
        fStack_31c = fStack_2fc + fVar23;
        fStack_318 = fStack_300 + fVar30;
        fStack_314 = fStack_2fc + fVar27;
        fStack_310 = fStack_2fc + fVar53;
        fStack_30c = fStack_300 + fVar54;
        fStack_308 = fVar55 + fStack_2fc;
        fStack_304 = fVar38 + fStack_2fc;
        fStack_300 = fVar46 + fStack_300;
        fStack_2fc = fVar52 + fStack_2fc;
        uStack_230 = 0;
        uStack_228 = 1;
        uStack_220 = 2;
        uStack_218 = 2;
        uStack_210 = 1;
        uStack_208 = 3;
        pdb_1414ecd30(&uStack_178,&uStack_230,&fStack_328);
        lVar18 = param_9[2];
        if ((ulonglong)(*param_9 - lVar18) < 6) {
          pdb_142d7f1b0(param_9,lVar18,6,0x10,0x10);
          lVar18 = param_9[2];
        }
        fVar48 = fVar38 * _DAT_142e36f60 + fVar23 * _DAT_142e36f60;
        fVar40 = fVar52 * _UNK_142e36f64 + fVar27 * _UNK_142e36f64;
        fVar39 = fVar39 + fVar24;
        fStack_290 = fVar37 + fVar35;
        fStack_28c = fVar47 + fVar36;
        lVar3 = param_9[1];
        lVar15 = lVar18 * 0x10;
        puVar2 = (undefined8 *)(lVar3 + 0x50 + lVar15);
        *puVar2 = uStack_128;
        puVar2[1] = uStack_120;
        puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar15);
        *puVar2 = CONCAT44(fStack_134,uStack_138);
        puVar2[1] = CONCAT44(uStack_12c,fStack_130);
        puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar15);
        *puVar2 = uStack_148;
        puVar2[1] = CONCAT44(iStack_13c,uStack_140);
        puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar15);
        *puVar2 = auStack_158._0_8_;
        puVar2[1] = auStack_158._8_8_;
        puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar15);
        *puVar2 = auStack_168._0_8_;
        puVar2[1] = auStack_168._8_8_;
        *(undefined8 *)(lVar3 + lVar15) = uStack_178;
        ((undefined8 *)(lVar3 + lVar15))[1] = CONCAT44(fStack_16c,fStack_170);
        param_9[2] = lVar18 + 6;
        uStack_298 = (float *)CONCAT44(fVar39,fVar22 + fVar51);
        fVar39 = fVar39 - fVar48;
        fVar22 = _DAT_142e36f28 /
                 SQRT((fStack_28c - fVar40) * (fStack_28c - fVar40) + fVar39 * fVar39);
        bVar16 = (int)ABS(fVar22) - 0x800000U < 0x7f000000 && -1 < (int)fVar22;
        if ((int)fVar22 - 1U < 0x7fffff || bVar16) {
          fVar39 = fVar39 * fVar22;
        }
        else {
          fVar39 = 0.0;
        }
        pdb_140de9410(&fStack_328,CONCAT31((int3)((int)ABS(fVar22) - 0x800000U >> 8),bVar16),fVar39)
        ;
        fVar39 = fVar46 * _DAT_142e36f50 + fVar30 * _DAT_142e36f50;
        auVar44._0_4_ =
             (fVar32 - fVar55) * (fVar32 - fVar55) +
             (fVar31 - fVar54) * (fVar31 - fVar54) + (fVar28 - fVar53) * (fVar28 - fVar53);
        auVar44._4_4_ =
             (fVar27 - fVar52) * (fVar27 - fVar52) +
             (fVar30 - fVar46) * (fVar30 - fVar46) + (fVar23 - fVar38) * (fVar23 - fVar38);
        auVar44._8_4_ =
             (fVar32 - fVar55) * (fVar32 - fVar55) +
             (fVar32 - fVar55) * (fVar32 - fVar55) + (fVar28 - fVar53) * (fVar28 - fVar53);
        auVar44._12_4_ =
             (fVar32 - fVar55) * (fVar32 - fVar55) +
             ((float)uVar12 - (float)uVar9) * ((float)uVar12 - (float)uVar9) +
             (fVar27 - fVar52) * (fVar27 - fVar52);
        fVar46 = (float)((uint)((float)auStack_378._0_4_ - (float)auStack_368._0_4_) &
                        _DAT_142e377e0) * _DAT_142e3c670;
        fVar51 = (float)auStack_1d8._0_4_ * _DAT_142e37988 +
                 (_DAT_142e36f28 - (float)auStack_1d8._0_4_) * _DAT_142e3c608;
        fVar22 = fVar46;
        if (fVar51 <= fVar46) {
          fVar22 = fVar51;
        }
        auVar29._0_4_ = ~-(uint)NAN(fVar51) & (uint)fVar22;
        auVar29._4_4_ = ~auStack_1d8._4_4_ & auStack_378._4_4_ & _UNK_142e377e4;
        auVar29._8_4_ = ~(uint)fStack_1d0 & auStack_378._8_4_ & _UNK_142e377e8;
        auVar29._12_4_ = ~(uint)fStack_1cc & auStack_378._12_4_ & _UNK_142e377ec;
        auVar34._0_4_ = -(uint)NAN(fVar51) & (uint)fVar46;
        auVar34._4_4_ = auStack_1d8._4_4_ & auStack_378._4_4_ & _UNK_142e377e4;
        auVar34._8_4_ = (uint)fStack_1d0 & auStack_378._8_4_ & _UNK_142e377e8;
        auVar34._12_4_ = (uint)fStack_1cc & auStack_378._12_4_ & _UNK_142e377ec;
        fVar51 = (float)auStack_1d8._0_4_ * _DAT_142e3c608 +
                 (_DAT_142e36f28 - (float)auStack_1d8._0_4_) * _DAT_142e37ad4;
        fVar22 = fVar46;
        if (fVar51 <= fVar46) {
          fVar22 = fVar51;
        }
        auStack_278 = sqrtps(auVar29,auVar44);
        pfVar13 = pfStack_1e8 + lStack_1e0;
        auStack_288._4_12_ = SUB1612(auVar34 | auVar29,4);
        auStack_268._4_4_ = fStack_324;
        auStack_268._0_4_ = fStack_328;
        uStack_260._4_4_ = fStack_31c;
        uStack_260._0_4_ = fStack_320;
        auStack_288._0_4_ =
             SUB164(auVar34 | auVar29,0) * fStack_10c +
             (_DAT_142e36f28 - fStack_10c) *
             (float)(-(uint)NAN(fVar51) & (uint)fVar46 | ~-(uint)NAN(fVar51) & (uint)fVar22);
        auStack_258._4_4_ = fStack_314;
        auStack_258._0_4_ = fStack_318;
        uStack_250._4_4_ = fStack_30c;
        uStack_250._0_4_ = fStack_310;
        auStack_198._4_4_ = fVar48;
        auStack_198._0_4_ = (float)auStack_198._0_4_ * _DAT_1430140e0;
        fStack_190 = fVar39;
        fStack_18c = fVar40;
        auStack_1d8._4_4_ = fVar48;
        auStack_1d8._0_4_ = fStack_308;
        fStack_1d0 = fVar39;
        fStack_1cc = fVar40;
        uVar33 = (uint)((float *)uVar8 == pfStack_1a0 || uVar8 == 0);
        iVar19 = 0;
        bVar16 = true;
        auStack_248._4_4_ = (int)(uVar33 << 0x1f) >> 0x1f;
        auStack_248._0_4_ = (int)(uVar33 << 0x1f) >> 0x1f;
        auStack_248._8_4_ = (int)(uVar33 << 0x1f) >> 0x1f;
        auStack_248._12_4_ = (int)(uVar33 << 0x1f) >> 0x1f;
        pfVar21 = pfStack_1e8;
        while (pfVar21 != pfVar13) {
          pfVar1 = pfVar21 + 1;
          pfVar20 = pfVar1;
          if (bVar16) {
            if (pfVar1 == pfVar13) break;
            param_17 = pfVar21;
            pfVar20 = pfVar21 + 2;
            pfVar21 = pfVar1;
          }
          auStack_108._0_16_ = ZEXT416((uint)*param_17);
          fVar22 = *pfVar21;
          fVar39 = (float)pdb_140e02880(param_7);
          fVar30 = _DAT_142e37950 - 0.0;
          fVar40 = _UNK_142e37954 - fVar22;
          fVar36 = _DAT_142e36f28 * (float)auStack_198._0_4_;
          fVar37 = (float)((ulonglong)_DAT_1430140f0 >> 0x20) - (float)auStack_108._0_4_;
          fVar46 = ((float)_DAT_1430140f0 - 0.0) * (float)uStack_298;
          fVar47 = _DAT_142e36f28 * (float)auStack_1d8._0_4_;
          fVar31 = (float)auStack_108._0_4_ * (float)auStack_1d8._4_4_ + fVar37 * uStack_298._4_4_;
          fVar35 = (float)auStack_108._0_4_ * fStack_1d0 + fVar37 * fStack_290;
          fVar32 = (float)auStack_108._0_4_ * fStack_1cc + fVar37 * fStack_28c;
          fVar48 = fVar22 * (float)auStack_198._4_4_ + uStack_298._4_4_ * fVar40;
          fVar27 = fVar22 * fStack_190 + fStack_290 * fVar40;
          fVar28 = fVar22 * fStack_18c + fStack_28c * fVar40;
          fVar51 = fVar31 - fVar48;
          fVar24 = fVar35 - fVar27;
          fVar38 = fVar32 - fVar28;
          fVar38 = SQRT(fVar38 * fVar38 + fVar24 * fVar24 + fVar51 * fVar51) * _DAT_143014100;
          fVar48 = fVar48 * _UNK_1430140c4;
          fVar27 = fVar27 * _UNK_1430140c8;
          fVar28 = fVar28 * _UNK_1430140cc;
          fVar51 = (float)pdb_140e02880(param_7);
          fVar23 = (float)auStack_108._0_4_ + _DAT_142e36f38;
          fVar51 = fVar51 * _DAT_142e37ad4;
          fVar24 = (float)pdb_140e02880(param_7);
          uStack_138 = pdb_14094c330(param_10);
          fStack_16c = _DAT_1430140d0 - fVar36 * fVar39 * fVar30;
          fVar38 = fStack_16c * fVar38;
          fVar39 = fStack_16c * (float)auStack_2f8._0_4_;
          uStack_148 = CONCAT44(fVar22 * (float)auStack_278._4_4_ +
                                (float)auStack_278._0_4_ * fVar40,
                                fVar37 * (float)auStack_278._0_4_ +
                                (float)auStack_278._4_4_ * (float)auStack_108._0_4_);
          auVar49._0_4_ = (fVar47 + fVar46) * _DAT_1430140d0;
          auVar49._4_4_ = fVar31 * _UNK_1430140d4;
          auVar49._8_4_ = fVar35 * _UNK_1430140d8;
          auVar49._12_4_ = fVar32 * _UNK_1430140dc;
          auVar6._4_8_ = auVar49._8_8_;
          auVar6._0_4_ = auVar49._4_4_ + fVar48;
          auVar50._0_8_ = auVar6._0_8_ << 0x20;
          auVar50._8_4_ = auVar49._8_4_ + fVar27;
          auVar50._12_4_ = auVar49._12_4_ + fVar28;
          auStack_168._4_12_ = auVar50._4_12_;
          auStack_168._0_4_ = fStack_16c * auVar49._0_4_;
          fVar23 = (float)((uint)fVar23 & _DAT_142e377e0);
          fStack_130 = fStack_2a8 * fVar22;
          fVar22 = (float)((uint)(fVar22 + _DAT_142e36f38) & _DAT_142e377e0);
          uVar42 = CONCAT44(fVar51 - (_DAT_142e36f28 - (fVar23 + fVar23)) * (float)auStack_288._0_4_
                            ,fVar24 * _DAT_142e37ad4 -
                             (_DAT_142e36f28 - (fVar22 + fVar22)) * (float)auStack_288._0_4_);
          fStack_188 = fVar38 * (float)auStack_268._0_4_;
          fStack_184 = fVar38 * (float)auStack_268._4_4_;
          fStack_180 = fVar38 * (float)uStack_260;
          fStack_17c = fVar39 * uStack_260._4_4_;
          fStack_170 = fStack_16c * (float)uStack_250;
          fStack_16c = fStack_16c * uStack_250._4_4_;
          uStack_178 = (float *)CONCAT44(fVar39 * (float)auStack_258._4_4_,
                                         fVar39 * (float)auStack_258._0_4_);
          uVar17 = ~auStack_248._8_8_ & uVar42;
          auStack_158._8_4_ = (int)uVar17;
          auStack_158._0_8_ = ~auStack_248._0_8_ & uVar42;
          auStack_158._12_4_ = (int)(uVar17 >> 0x20);
          fStack_134 = (float)auStack_108._0_4_ * fStack_2a8;
          iStack_13c = iVar19 + (int)uVar8;
          uStack_140 = 0;
          uStack_12c = 0x60;
          pdb_14094c790(&uStack_230,&fStack_188);
          pdb_1414aad80(param_8,&uStack_230);
          iVar19 = iVar19 + 1;
          bVar16 = false;
          param_17 = pfVar21;
          pfVar21 = pfVar20;
        }
      }
      if (lStack_1f0 != 0) {
        pub_1406abac0((byte *)pfStack_1e8,lStack_1f0 << 2,4);
      }
      pdb_1414ebc90(&fStack_188,&pfStack_430);
      pfVar13 = (float *)CONCAT44(fStack_184,fStack_188);
    } while (pfVar13 != (float *)0x0);
  }
  return;
}

