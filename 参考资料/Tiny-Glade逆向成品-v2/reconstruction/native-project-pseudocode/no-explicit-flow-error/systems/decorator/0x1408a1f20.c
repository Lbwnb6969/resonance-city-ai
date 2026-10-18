// VA 0x1408a1f20, PDB extent 3423 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::construct_ladder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::construct_ladder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 3423 */

void pdb_1408a1f20(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  float *param_5,longlong param_6,byte *param_7,undefined4 param_8,
                  ulonglong *param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined8 uStack_328;
  undefined8 uStack_320;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  undefined8 uStack_304;
  float fStack_2fc;
  undefined4 uStack_2f8;
  int iStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  undefined8 uStack_278;
  float fStack_270;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined8 uStack_258;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [12];
  float fStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  uStack_2a0 = param_2;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143014188);
  }
  if (param_5 + param_6 + -1 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430141a0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430141b8);
  }
  lVar1 = (longlong)param_3 + param_4 * 0xc;
  if (lVar1 == 0xc) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430141d0);
  }
  fVar32 = *param_5 + _DAT_143014068;
  fVar38 = param_5[param_6 + -1] + _DAT_143014068;
  uVar2 = *param_3;
  fVar33 = (float)uVar2;
  fVar27 = *(float *)(param_3 + 1);
  uVar3 = *(undefined8 *)(lVar1 + -0xc);
  fVar30 = *(float *)(lVar1 + -4);
  fVar36 = (float)uVar3;
  fVar26 = fVar36 - fVar33;
  fVar28 = fVar30 - fVar27;
  fVar29 = _DAT_142e36f28 / SQRT(fVar26 * fVar26 + fVar28 * fVar28);
  uStack_138 = CONCAT44(fVar29 * fVar26,fVar29 * (float)(_DAT_142e37820 ^ (uint)fVar28));
  pdb_140df4520(&fStack_298,&uStack_138);
  bVar4 = *param_7;
  uStack_228 = CONCAT44(fStack_294,fStack_298);
  uStack_2b8 = CONCAT44(fStack_290,fStack_294);
  auVar35._8_4_ = fStack_294;
  auVar35._0_8_ = uStack_228;
  auVar35._12_4_ = fStack_290;
  uStack_210 = auVar35._8_8_;
  uStack_218 = CONCAT44(fStack_294,fStack_298);
  fStack_178 = fVar32 * fStack_298;
  fStack_174 = fVar32 * fStack_294;
  fStack_170 = fStack_294 * 0.0;
  fStack_16c = fStack_290 * 0.0;
  uStack_220 = 0;
  fStack_168 = fVar32 * fStack_290;
  fStack_164 = fVar32 * fStack_298;
  uStack_160 = 0;
  uStack_2b0 = 0;
  fStack_184 = fVar38 * fStack_294;
  uStack_1f8 = CONCAT44(fStack_298,fStack_290);
  uStack_1f0 = 0;
  fStack_198 = fVar38 * fStack_290;
  fStack_194 = fVar38 * fStack_298;
  uStack_2d0 = 0;
  auStack_1e8 = ZEXT416((uint)fVar30);
  uStack_1a0 = 0;
  uStack_2c0 = 0;
  auStack_1d8 = ZEXT416((uint)fVar27);
  uStack_1b0 = 0;
  uStack_190 = 0;
  uStack_180 = 0;
  uStack_2d8 = uVar3;
  uStack_2c8 = uVar2;
  _auStack_208 = ZEXT416((uint)fVar38);
  auStack_1c8 = ZEXT416((uint)fVar32);
  bVar17 = true;
  fStack_1b8 = fVar27;
  fStack_1b4 = fVar33;
  fStack_1a8 = fVar30;
  fStack_1a4 = fVar36;
  fStack_188 = fStack_194;
  do {
    bVar16 = bVar17;
    fVar27 = _DAT_142e36f28;
    fVar30 = _DAT_142e36f50;
    if (!bVar16) {
      fVar30 = _DAT_142e36f38;
    }
    auVar34._0_4_ = fStack_168 * fVar30 + fStack_1b8;
    auVar34._4_4_ = fStack_164 * fVar30 + fStack_1b4;
    auVar34._8_4_ = (float)uStack_160 * 0.0 + (float)uStack_1b0;
    auVar34._12_4_ = uStack_160._4_4_ * 0.0 + uStack_1b0._4_4_;
    auVar48._0_4_ = fStack_178 * fVar30 + (float)uStack_2c8;
    auVar48._4_4_ = fStack_174 * fVar30 + uStack_2c8._4_4_;
    auVar48._8_4_ = fStack_170 * 0.0 + (float)uStack_2c0;
    auVar48._12_4_ = fStack_16c * 0.0 + uStack_2c0._4_4_;
    auVar46._0_4_ = fStack_198 * fVar30 + fStack_1a8;
    auVar46._4_4_ = fStack_194 * fVar30 + fStack_1a4;
    auVar46._8_4_ = (float)uStack_190 * 0.0 + (float)uStack_1a0;
    auVar46._12_4_ = uStack_190._4_4_ * 0.0 + uStack_1a0._4_4_;
    fVar28 = fVar30 * fStack_188 + (float)uStack_2d8;
    fVar29 = fVar30 * fStack_184 + uStack_2d8._4_4_;
    fVar32 = (float)uStack_180 * 0.0 + (float)uStack_2d0;
    fVar33 = uStack_180._4_4_ * 0.0 + uStack_2d0._4_4_;
    fVar36 = auVar46._0_4_ - auVar34._0_4_;
    fVar38 = auVar46._4_4_ - auVar34._4_4_;
    fStack_144 = _DAT_142e36f28 / SQRT(fVar38 * fVar38 + fVar36 * fVar36);
    fStack_148 = fStack_144 * fVar38;
    fStack_144 = fStack_144 * fVar36;
    fStack_140 = (auVar46._8_4_ - auVar34._8_4_) * 0.0;
    fStack_13c = (auVar46._12_4_ - auVar34._12_4_) * 0.0;
    uStack_138 = CONCAT44(fStack_144,fStack_148);
    pdb_140df4520(&fStack_288,&uStack_138);
    fVar30 = fVar29 - auVar48._4_4_;
    fVar27 = fVar27 / SQRT(fVar30 * fVar30 + fVar38 * fVar38 + fVar36 * fVar36);
    fVar36 = fVar27 * fVar36;
    fVar38 = fVar27 * fVar38;
    fVar27 = fVar27 * fVar30;
    fVar30 = fStack_288 * fVar36 - fStack_280 * fVar38;
    fVar26 = fStack_284 * fVar38 - fStack_288 * fVar27;
    fVar43 = fVar27 * fStack_280 - fStack_284 * fVar36;
    fVar37 = (fVar43 * fVar27 - fVar38 * fVar30) * _DAT_143014090;
    uVar24 = *param_9;
    uVar21 = uVar24 + 0xa0761d6478bd642f;
    *param_9 = uVar21;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar21 ^ 0xe7037ed1a0b428db;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar21;
    uVar22 = SUB168(auVar40 * auVar47,8) ^ SUB168(auVar40 * auVar47,0);
    if ((uint)((int)uVar22 * 200) < 0x60) {
      uVar24 = uVar24 + 0x40ec3ac8f17ac85e;
      do {
        uVar21 = uVar21 + 0xa0761d6478bd642f;
        auVar49._8_8_ = 0;
        auVar49._0_8_ = uVar24 ^ 0xe7037ed1a0b428db;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar24;
        uVar22 = SUB168(auVar49 * auVar9,8) ^ SUB168(auVar49 * auVar9,0);
        uVar24 = uVar24 + 0xa0761d6478bd642f;
      } while ((uint)((int)uVar22 * 200) < 0x60);
      *param_9 = uVar21;
    }
    fVar50 = (auVar34._0_4_ - auVar46._0_4_) * (auVar34._0_4_ - auVar46._0_4_);
    fStack_158 = (auVar34._4_4_ - auVar46._4_4_) * (auVar34._4_4_ - auVar46._4_4_);
    fStack_150 = (auVar34._12_4_ - auVar46._12_4_) * (auVar34._12_4_ - auVar46._12_4_);
    fVar31 = SQRT((auVar48._4_4_ - fVar29) * (auVar48._4_4_ - fVar29) + fStack_158 + fVar50);
    fVar41 = fVar43 * _DAT_143014070;
    fVar44 = fVar30 * _UNK_143014074;
    fVar45 = fVar26 * _UNK_143014078;
    fVar30 = (fVar36 * fVar30 - fVar27 * (fVar38 * fStack_284 - fStack_288 * fVar27)) *
             _UNK_143014088;
    fVar26 = (fVar38 * fVar26 - fVar36 * fVar43) * _UNK_143014088;
    fStack_154 = fStack_158;
    fStack_14c = fStack_150;
    uVar18 = pdb_1409012c0(param_8);
    pdb_140a77410(&uStack_138);
    uStack_328 = CONCAT44(fVar44,fVar41);
    uStack_320 = CONCAT44(fVar38 * fVar31,fVar45);
    uStack_304 = CONCAT44(auVar48._4_4_,auVar34._4_4_);
    uStack_2f8 = 0;
    uStack_2ec = 0x18;
    uStack_2e8 = uStack_f8;
    uStack_2e4 = uStack_f4;
    uStack_2e0 = uStack_f0;
    uStack_2dc = uStack_ec;
    fStack_318 = fVar27 * fVar31;
    fStack_314 = fVar36 * fVar31;
    fStack_310 = fVar30;
    fStack_30c = fVar26;
    fStack_308 = fVar37;
    fStack_2fc = auVar34._0_4_;
    iStack_2f4 = (int)((uVar22 & 0xffffffff) * 200 >> 0x20) + -100;
    uStack_2f0 = uVar18;
    pdb_1414aa5f0(param_1,&uStack_328);
    fVar27 = _DAT_142e36f28;
    if ((bVar4 < 5) && ((0x16U >> (bVar4 & 0x1f) & 1) != 0)) {
      fVar26 = _DAT_142e36f50 / SQRT(fVar50 + fStack_158);
      fVar30 = _DAT_142e36f50;
      if (fVar26 <= _DAT_142e36f50) {
        fVar30 = fVar26;
      }
      fVar36 = _DAT_142e36f28 - fVar30;
      uVar19 = (uint)(fVar29 < auVar48._4_4_);
      auVar39._0_4_ = (int)(uVar19 << 0x1f) >> 0x1f;
      auVar39._4_4_ = (int)(uVar19 << 0x1f) >> 0x1f;
      auVar39._8_4_ = (int)(uVar19 << 0x1f) >> 0x1f;
      auVar39._12_4_ = (int)(uVar19 << 0x1f) >> 0x1f;
      auVar35 = auVar34 & auVar39 | ~auVar39 & auVar46;
      auVar14._4_4_ = fVar29;
      auVar14._0_4_ = fVar28;
      auVar14._8_4_ = fVar32;
      auVar14._12_4_ = fVar33;
      auVar49 = auVar48 & auVar39 | ~auVar39 & auVar14;
      auVar47 = auVar46 & auVar39 | ~auVar39 & auVar34;
      auVar15._4_4_ = fVar29;
      auVar15._0_4_ = fVar28;
      auVar15._8_4_ = fVar32;
      auVar15._12_4_ = fVar33;
      auVar40 = auVar39 & auVar15 | ~auVar39 & auVar48;
      fVar41 = auVar47._0_4_ * fVar30 + auVar35._0_4_ * fVar36;
      fVar44 = auVar47._4_4_ * fVar30 + auVar35._4_4_ * fVar36;
      fVar31 = auVar40._4_4_ * fVar30 + auVar49._4_4_ * fVar36;
      uStack_138 = CONCAT44(fVar41,fVar44);
      pdb_140df4540(&uStack_278,&uStack_138);
      uStack_138 = CONCAT44(fStack_144,fStack_148);
      pdb_140df4520(&fStack_268,&uStack_138);
      fVar26 = fStack_270;
      uVar2 = uStack_278;
      fVar37 = (float)uStack_278;
      fVar28 = fVar41 - fStack_270;
      fVar29 = fVar44 - fVar37;
      fVar38 = (float)((ulonglong)uStack_278 >> 0x20);
      fVar33 = fVar31 - fVar38;
      fVar27 = fVar27 / SQRT(fVar33 * fVar33 + fVar29 * fVar29 + fVar28 * fVar28);
      fVar28 = fVar28 * fVar27;
      fVar29 = fVar29 * fVar27;
      fVar32 = ((auVar40._0_4_ * fVar30 + auVar49._0_4_ * fVar36) - fVar37) * fVar27;
      fVar33 = fVar33 * fVar27;
      fVar27 = fStack_268 * fVar28 - fStack_260 * fVar32;
      fVar30 = fStack_264 * fVar29 - fStack_268 * fVar33;
      fVar36 = fStack_260 * fVar33 - fStack_264 * fVar28;
      fVar43 = (fVar33 * fVar36 - fVar29 * fVar27) * _DAT_143014090;
      uVar24 = *param_9;
      uVar21 = uVar24 + 0xa0761d6478bd642f;
      *param_9 = uVar21;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar21 ^ 0xe7037ed1a0b428db;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar21;
      uVar22 = SUB168(auVar5 * auVar10,8) ^ SUB168(auVar5 * auVar10,0);
      if ((uint)((int)uVar22 * 200) < 0x60) {
        uVar24 = uVar24 + 0x40ec3ac8f17ac85e;
        do {
          uVar21 = uVar21 + 0xa0761d6478bd642f;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar24 ^ 0xe7037ed1a0b428db;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar24;
          uVar22 = SUB168(auVar6 * auVar11,8) ^ SUB168(auVar6 * auVar11,0);
          uVar24 = uVar24 + 0xa0761d6478bd642f;
        } while ((uint)((int)uVar22 * 200) < 0x60);
        *param_9 = uVar21;
      }
      fVar38 = fVar38 - fVar31;
      fVar38 = SQRT(fVar38 * fVar38 + (fVar37 - fVar44) * (fVar37 - fVar44) +
                    (fStack_270 - fVar41) * (fStack_270 - fVar41));
      fVar37 = fVar36 * _DAT_143014070;
      fVar31 = fVar27 * _UNK_143014074;
      fVar41 = fVar30 * _UNK_143014078;
      fVar27 = (fVar28 * fVar27 - fVar33 * (fStack_264 * fVar32 - fStack_268 * fVar33)) *
               _UNK_143014088;
      fVar30 = (fVar29 * fVar30 - fVar28 * fVar36) * _UNK_143014088;
      uVar18 = pdb_1409012c0(param_8);
      pdb_140a77410(&uStack_138);
      uStack_328 = CONCAT44(fVar31,fVar37);
      uStack_320 = CONCAT44(fVar29 * fVar38,fVar41);
      uStack_304 = uVar2;
      fStack_2fc = fVar26;
      uStack_2f8 = 0;
      uStack_2ec = 0x18;
      uStack_2e8 = uStack_f8;
      uStack_2e4 = uStack_f4;
      uStack_2e0 = uStack_f0;
      uStack_2dc = uStack_ec;
      fStack_318 = fVar33 * fVar38;
      fStack_314 = fVar28 * fVar38;
      fStack_310 = fVar27;
      fStack_30c = fVar30;
      fStack_308 = fVar43;
      iStack_2f4 = (int)((uVar22 & 0xffffffff) * 200 >> 0x20) + -100;
      uStack_2f0 = uVar18;
      pdb_1414aa5f0(param_1,&uStack_328);
    }
    bVar17 = false;
  } while (bVar16);
  fVar30 = auStack_1d8._0_4_;
  uVar18 = auStack_1e8._0_4_;
  fVar27 = fVar30 - (float)auStack_1e8._0_4_;
  fVar27 = (float)pub_142e329c0(SQRT(fVar27 * fVar27 +
                                     (uStack_2c8._4_4_ - uStack_2d8._4_4_) *
                                     (uStack_2c8._4_4_ - uStack_2d8._4_4_) +
                                     ((float)uStack_2c8 - (float)uStack_2d8) *
                                     ((float)uStack_2c8 - (float)uStack_2d8)) / _DAT_1430132b0);
  uVar24 = 0;
  uVar21 = (longlong)(fVar27 - _DAT_142e36f2c) & (longlong)fVar27 >> 0x3f | (longlong)fVar27;
  if (fVar27 < 0.0) {
    uVar21 = uVar24;
  }
  uVar22 = 0xffffffffffffffff;
  if (fVar27 <= _DAT_142e36f30) {
    uVar22 = uVar21;
  }
  uVar21 = 3;
  if (3 < uVar22) {
    uVar21 = uVar22;
  }
  auVar42._4_4_ = auStack_1c8._0_4_;
  auVar42._0_4_ = auStack_208._0_4_;
  auVar42._8_4_ = auStack_208._8_4_;
  auVar42._12_4_ = fStack_1fc;
  fVar27 = (float)DAT_142e37a90;
  fVar26 = DAT_142e37a90._4_4_;
  auVar35 = maxps(_DAT_142e37a90,auVar42);
  fVar31 = (float)(~-(uint)NAN((float)auStack_208._0_4_) & auVar35._0_4_ |
                  (uint)fVar27 & -(uint)NAN((float)auStack_208._0_4_));
  fVar41 = (float)(~-(uint)NAN((float)auStack_1c8._0_4_) & auVar35._4_4_ |
                  (uint)fVar26 & -(uint)NAN((float)auStack_1c8._0_4_));
  fVar32 = (float)(~-(uint)NAN((float)auStack_208._8_4_) & auVar35._8_4_ |
                  DAT_142e37a90._8_4_ & -(uint)NAN((float)auStack_208._8_4_));
  fVar33 = (float)(~-(uint)NAN(fStack_1fc) & auVar35._12_4_ |
                  DAT_142e37a90._12_4_ & -(uint)NAN(fStack_1fc));
  fVar29 = fVar41 * uStack_2b8._4_4_ * _DAT_142e36f50;
  fVar28 = uStack_2b8._4_4_ * fVar31 * _DAT_142e36f50;
  uStack_2c8._0_4_ = (float)uStack_2c8 - fVar41 * (float)uStack_218 * _DAT_142e36f60;
  uStack_2c8._4_4_ = uStack_2c8._4_4_ - fVar41 * uStack_218._4_4_ * _UNK_142e36f64;
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_ - fVar33 * uStack_210._4_4_ * _UNK_142e36f6c,
                        (float)uStack_2c0 - fVar33 * (float)uStack_210 * _UNK_142e36f68);
  uStack_2d8._0_4_ = (float)uStack_2d8 - fVar31 * (float)uStack_218 * _DAT_142e36f60;
  uStack_2d8._4_4_ = uStack_2d8._4_4_ - fVar31 * uStack_218._4_4_ * _UNK_142e36f64;
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_ - fVar32 * uStack_210._4_4_ * _UNK_142e36f6c,
                        (float)uStack_2d0 - fVar32 * (float)uStack_210 * _UNK_142e36f68);
  fVar38 = (float)((ulonglong)_DAT_142e378e0 >> 0x20);
  fVar32 = _DAT_142e36f28 * (float)uStack_228 - (float)uStack_2b8 * (float)_DAT_142e378e0;
  fVar33 = uStack_228._4_4_ * 0.0 - uStack_2b8._4_4_ * fVar38;
  fVar36 = (float)_DAT_142e378e0 * (float)uStack_1f8 + _DAT_142e37b50 * (float)uStack_228;
  fVar37 = ((float)uStack_2b8 * fVar32 - (float)uStack_1f8 * fVar36) * _DAT_1430140a0;
  fVar38 = (uStack_2b8._4_4_ * fVar33 -
           uStack_1f8._4_4_ * (fVar38 * uStack_1f8._4_4_ + _UNK_142e37b54 * uStack_228._4_4_)) *
           _UNK_1430140a4;
  fVar43 = ((float)uStack_228 * fVar36 - fVar33 * (float)uStack_2b8) * _DAT_142e37980;
  fVar32 = fVar32 * _DAT_142e3798c;
  do {
    if ((longlong)uVar24 < 0) {
      fVar44 = (float)uVar24 / (float)(uVar21 - 1);
      if (fVar44 == 0.0) goto joined_r0x0001408a2ac4;
LAB_1408a2ac6:
      if ((fVar44 != _DAT_142e36f28) || (NAN(fVar44) || NAN(_DAT_142e36f28))) {
        fVar45 = _DAT_142e36f28 - fVar44;
        fStack_22c = ((float)uVar18 - fVar28) * fVar44 + (fVar30 - fVar29) * fVar45;
        fStack_244 = fVar45 * fVar41 + fVar44 * fVar31;
        fStack_24c = (float)uStack_228 * fStack_244;
        uStack_258 = CONCAT44(fVar38,fVar37);
        fStack_248 = fStack_244 * (float)uStack_2b8;
        fStack_244 = fStack_244 * uStack_2b8._4_4_;
        fStack_234 = fVar45 * (float)uStack_2c8 + fVar44 * (float)uStack_2d8;
        fStack_230 = fVar45 * uStack_2c8._4_4_ + fVar44 * uStack_2d8._4_4_;
        fStack_250 = fVar43;
        fStack_240 = fVar33 * fVar27;
        fStack_23c = fVar36 * fVar26;
        fStack_238 = fVar32;
        pdb_1414ec950(uStack_2a0,&uStack_258);
        uVar25 = *param_9;
        uVar22 = uVar25 + 0xa0761d6478bd642f;
        *param_9 = uVar22;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar22 ^ 0xe7037ed1a0b428db;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar22;
        uVar23 = SUB168(auVar7 * auVar12,8) ^ SUB168(auVar7 * auVar12,0);
        if ((uint)((int)uVar23 * 200) < 0x60) {
          uVar25 = uVar25 + 0x40ec3ac8f17ac85e;
          do {
            uVar22 = uVar22 + 0xa0761d6478bd642f;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar25 ^ 0xe7037ed1a0b428db;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar25;
            uVar23 = SUB168(auVar8 * auVar13,8) ^ SUB168(auVar8 * auVar13,0);
            uVar25 = uVar25 + 0xa0761d6478bd642f;
          } while ((uint)((int)uVar23 * 200) < 0x60);
          *param_9 = uVar22;
        }
        uVar20 = pdb_1409012c0(param_8);
        pdb_140a77410(&uStack_138);
        uStack_320 = CONCAT44(fStack_24c,fStack_250);
        fStack_308 = fStack_238;
        uStack_304 = CONCAT44(fStack_230,fStack_234);
        fStack_2fc = fStack_22c;
        fStack_318 = fStack_248;
        fStack_314 = fStack_244;
        fStack_310 = fStack_240;
        fStack_30c = fStack_23c;
        uStack_328 = uStack_258;
        uStack_2f8 = 0;
        uStack_2ec = 0x19;
        uStack_2e8 = uStack_f8;
        uStack_2e4 = uStack_f4;
        uStack_2e0 = uStack_f0;
        uStack_2dc = uStack_ec;
        iStack_2f4 = (int)((uVar23 & 0xffffffff) * 200 >> 0x20) + -100;
        uStack_2f0 = uVar20;
        pdb_1414aa5f0(param_1,&uStack_328);
      }
    }
    else {
      fVar44 = (float)(longlong)uVar24 / (float)(uVar21 - 1);
      if (fVar44 != 0.0) goto LAB_1408a2ac6;
joined_r0x0001408a2ac4:
      if (NAN(fVar44)) goto LAB_1408a2ac6;
    }
    uVar24 = uVar24 + 1;
    if (uVar24 == uVar21) {
      return;
    }
  } while( true );
}

