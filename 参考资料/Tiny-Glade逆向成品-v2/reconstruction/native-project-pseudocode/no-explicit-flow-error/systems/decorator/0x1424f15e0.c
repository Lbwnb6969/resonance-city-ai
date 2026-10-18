// VA 0x1424f15e0, PDB extent 6760 bytes
// system_decorator::decorator_visual::door_stairs_assemble_bricks::construct_door_stairs<ref_mut$<system_decorator::decorator_visual::door_stairs_assemble_bricks::door_stairs_assemble_bricks::closure$0::closure$0::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/door_stairs_assemble_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::door_stairs_assemble_bricks::construct_door_stairs<ref_mut$<system_decorator::decorator_visual::door_stairs_assemble_bricks::door_stairs_assemble_bricks::closure$0::closure$0::closure_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/door_stairs_assemble_bricks.rs
   Extent: 6760 */

void pdb_1424f15e0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,char param_8,undefined8 param_9,float param_10,
                  float param_11,undefined8 *param_12,undefined8 param_13,undefined4 param_14)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  float *pfVar18;
  ulonglong uVar19;
  float *pfVar20;
  ulonglong uVar21;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float *pfVar25;
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
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulonglong uStack_2e0;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  float *pfStack_2c8;
  ulonglong uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  float fStack_250;
  float fStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  ulonglong uStack_228;
  float *pfStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  float fStack_1b4;
  undefined1 *puStack_1b0;
  ulonglong uStack_1a8;
  float *pfStack_1a0;
  float fStack_194;
  float *pfStack_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  int iStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  byte *pbStack_110;
  float *pfStack_108;
  float fStack_100;
  float fStack_fc;
  float *pfStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar36 = (param_3 - param_4) + param_6;
  fStack_100 = param_2;
  fStack_fc = param_1;
  fVar26 = (float)pub_142e329c0(fVar36 / _DAT_142e3787c);
  uVar19 = 0;
  if (0.0 <= fVar26) {
    uVar19 = (longlong)(fVar26 - _DAT_142e36f2c) & (longlong)fVar26 >> 0x3f | (longlong)fVar26;
  }
  uVar23 = 0xffffffffffffffff;
  if (fVar26 <= _DAT_142e36f30) {
    uVar23 = uVar19;
  }
  uVar19 = 2;
  if (2 < uVar23) {
    uVar19 = uVar23;
  }
  pdb_140de8290(&fStack_178,uVar19,_DAT_143513168 / fVar36,param_9,&UNK_1435131c0);
  pbStack_110 = (byte *)CONCAT44(fStack_16c,fStack_170);
  uVar23 = CONCAT44(fStack_164,fStack_168);
  uVar19 = uVar23 * 4;
  uStack_210 = uVar19;
  if (uVar23 == 0) {
    pfVar18 = (float *)0x4;
  }
  else {
    pdb_14007ee60();
    pfVar18 = (float *)pub_1406abab0(uVar19,4);
    fVar28 = _UNK_142e3c64c;
    fVar27 = _UNK_142e3c648;
    fVar36 = _UNK_142e3c644;
    fVar26 = _DAT_142e3c640;
    if (pfVar18 == (float *)0x0) {
      pdb_142dc7e2a(4,uVar19);
LAB_1424f2ac6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_6 = param_4 - param_6;
    if (uVar23 < 8) {
      uVar19 = 0;
      fVar26 = _DAT_142e36f28;
    }
    else {
      uVar19 = uVar23 & 0xfffffffffffffff8;
      uVar21 = 0;
      do {
        pfVar20 = (float *)(pbStack_110 + uVar21 * 4);
        fVar29 = pfVar20[1];
        fVar31 = pfVar20[2];
        fVar30 = pfVar20[3];
        pfVar22 = (float *)(pbStack_110 + uVar21 * 4 + 0x10);
        fVar32 = *pfVar22;
        fVar34 = pfVar22[1];
        fVar35 = pfVar22[2];
        fVar33 = pfVar22[3];
        pfVar22 = pfVar18 + uVar21;
        *pfVar22 = *pfVar20 * param_6 + (fVar26 - *pfVar20) * param_3;
        pfVar22[1] = fVar29 * param_6 + (fVar36 - fVar29) * param_3;
        pfVar22[2] = fVar31 * param_6 + (fVar27 - fVar31) * param_3;
        pfVar22[3] = fVar30 * param_6 + (fVar28 - fVar30) * param_3;
        pfVar20 = pfVar18 + uVar21 + 4;
        *pfVar20 = fVar32 * param_6 + (fVar26 - fVar32) * param_3;
        pfVar20[1] = fVar34 * param_6 + (fVar36 - fVar34) * param_3;
        pfVar20[2] = fVar35 * param_6 + (fVar27 - fVar35) * param_3;
        pfVar20[3] = fVar33 * param_6 + (fVar28 - fVar33) * param_3;
        uVar21 = uVar21 + 8;
      } while (uVar19 != uVar21);
      fVar26 = _DAT_142e36f28;
      if (uVar23 == uVar19) goto LAB_1424f1818;
    }
    do {
      pfVar18[uVar19] =
           (fVar26 - *(float *)(pbStack_110 + uVar19 * 4)) * (param_3 - 0.0) +
           *(float *)(pbStack_110 + uVar19 * 4) * param_6;
      uVar19 = uVar19 + 1;
    } while (uVar23 != uVar19);
  }
LAB_1424f1818:
  if (CONCAT44(fStack_174,fStack_178) != 0) {
    pub_1406abac0(pbStack_110,CONCAT44(fStack_174,fStack_178) << 2,4);
  }
  fVar27 = (float)pub_142e329c0((param_3 - param_4) / _DAT_142e3787c);
  fVar36 = _DAT_142e36f30;
  fVar26 = _DAT_142e36f2c;
  uVar19 = (longlong)fVar27 >> 0x3f & (longlong)(fVar27 - _DAT_142e36f2c) | (longlong)fVar27;
  if (fVar27 < 0.0) {
    uVar19 = 0;
  }
  if (_DAT_142e36f30 < fVar27) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar21 = 2;
  if (2 < uVar19) {
    uVar21 = uVar19;
  }
  uStack_2c0 = 5;
  if (uVar21 < 5) {
    uStack_2c0 = uVar21;
  }
  fVar28 = (float)(longlong)uStack_2c0;
  fVar29 = (float)pub_142e329c0(param_5 / _DAT_14300a334);
  fVar27 = _DAT_142e36f28;
  uVar19 = (longlong)fVar29 >> 0x3f & (longlong)(fVar29 - fVar26) | (longlong)fVar29;
  if (fVar29 < 0.0) {
    uVar19 = 0;
  }
  if (fVar36 < fVar29) {
    uVar19 = 0xffffffffffffffff;
  }
  uStack_228 = 3;
  if (3 < uVar19) {
    uStack_228 = uVar19;
  }
  pfStack_1a0 = pfVar18 + uVar23;
  fStack_194 = _DAT_14351316c / param_5;
  fVar30 = _DAT_142e3b1d8 + param_7 / fVar28;
  param_5 = param_5 * _DAT_142e36f50;
  pbStack_110 = (byte *)*param_12;
  puStack_1b0 = (undefined1 *)param_12[1];
  uStack_258 = (float *)CONCAT44(fVar30,fVar30);
  bVar14 = true;
  uVar19 = 0;
  fVar26 = _DAT_142e3c640;
  fVar36 = _UNK_142e3c644;
  fVar29 = _UNK_142e3c648;
  fVar31 = _UNK_142e3c64c;
  fStack_250 = fVar30;
  fStack_24c = fVar30;
  uStack_218 = uVar23;
  fStack_1b4 = param_7 / fVar28;
  pfStack_190 = pfVar18;
  while (pfVar18 != pfStack_1a0) {
    pfVar20 = pfVar18 + 1;
    if (bVar14) {
      if (pfVar20 == pfStack_1a0) break;
      pfVar22 = pfVar18 + 2;
      pfStack_2c8 = pfVar18;
      pfVar18 = pfVar20;
      pfVar20 = pfVar22;
    }
    pfStack_220 = pfVar20;
    uStack_2d0 = uVar19 + 1;
    uStack_2d8 = uStack_2d0;
    if (uStack_2c0 < uStack_2d0) {
      uStack_2d8 = uStack_2c0;
    }
    fVar28 = *pfVar18 - *pfStack_2c8;
    iVar2 = (int)uVar19 * 2;
    pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,
                                    *pfVar18 * _DAT_142e36f50 + *pfStack_2c8 * _DAT_142e36f50);
    fStack_180 = (float)((uint)fVar28 & _UNK_142e377e8);
    fStack_17c = (float)((uint)fVar28 & _UNK_142e377ec);
    uStack_188 = (float *)CONCAT44((uint)fVar28 & _UNK_142e377e4,(uint)fVar28 & _DAT_142e377e0);
    uVar19 = 0;
    pfStack_2c8 = pfVar18;
    while (uVar19 < uStack_2d8) {
      pdb_140de8290(&fStack_178,uStack_228,fStack_194,param_9,&UNK_1435131f0);
      pfVar18 = (float *)CONCAT44(fStack_16c,fStack_170);
      uVar23 = CONCAT44(fStack_164,fStack_168);
      if (uVar23 == 0) {
        pfVar20 = (float *)0x4;
      }
      else {
        pfStack_f8 = pfVar18;
        pdb_14007ee60();
        pfVar20 = (float *)pub_1406abab0(uVar23 * 4,4);
        if (pfVar20 == (float *)0x0) {
          pdb_142dc7e2a(4,uVar23 * 4);
          goto LAB_1424f2ac6;
        }
        if (7 < uVar23) {
          uVar21 = uVar23 & 0xfffffffffffffff8;
          uVar24 = 0;
          do {
            pfVar18 = pfStack_f8 + uVar24;
            fVar28 = pfVar18[1];
            fVar32 = pfVar18[2];
            fVar34 = pfVar18[3];
            pfVar22 = pfStack_f8 + uVar24 + 4;
            fVar35 = *pfVar22;
            fVar33 = pfVar22[1];
            fVar4 = pfVar22[2];
            fVar5 = pfVar22[3];
            pfVar22 = pfVar20 + uVar24;
            *pfVar22 = *pfVar18 * param_5 - (fVar26 - *pfVar18) * param_5;
            pfVar22[1] = fVar28 * param_5 - (fVar36 - fVar28) * param_5;
            pfVar22[2] = fVar32 * param_5 - (fVar29 - fVar32) * param_5;
            pfVar22[3] = fVar34 * param_5 - (fVar31 - fVar34) * param_5;
            pfVar18 = pfVar20 + uVar24 + 4;
            *pfVar18 = fVar35 * param_5 - (fVar26 - fVar35) * param_5;
            pfVar18[1] = fVar33 * param_5 - (fVar36 - fVar33) * param_5;
            pfVar18[2] = fVar4 * param_5 - (fVar29 - fVar4) * param_5;
            pfVar18[3] = fVar5 * param_5 - (fVar31 - fVar5) * param_5;
            uVar24 = uVar24 + 8;
            if (uVar21 == uVar24) goto LAB_1424f21a0;
          } while( true );
        }
        uVar21 = 0;
        do {
          pfVar20[uVar21] = pfStack_f8[uVar21] * param_5 - (fVar27 - pfStack_f8[uVar21]) * param_5;
          uVar21 = uVar21 + 1;
LAB_1424f21a0:
          pfVar18 = pfStack_f8;
        } while (uVar23 != uVar21);
      }
      if (CONCAT44(fStack_174,fStack_178) != 0) {
        pub_1406abac0((byte *)pfVar18,CONCAT44(fStack_174,fStack_178) << 2,4);
      }
      uVar21 = uVar19 + 1;
      fVar28 = (float)(longlong)uVar19 * fStack_1b4 + _DAT_14300b140;
      uVar19 = uVar21;
      if (uVar23 != 0) {
        uStack_1a8 = uVar23 * 4;
        uStack_2e0 = uVar21;
        pfStack_f8 = pfVar20;
        if (uVar23 != 1) {
          fVar35 = param_11 * fVar28 + fStack_100;
          fVar34 = fVar28 * param_10 + fStack_fc;
          fVar26 = *pfVar20;
          fVar36 = pfVar20[1];
          uVar3 = *(undefined8 *)pfVar20;
          fVar28 = fVar36 * _DAT_142e36f50 + fVar26 * _DAT_142e36f50;
          fStack_178 = fVar34 - fVar28 * param_11;
          fStack_174 = param_10 * fVar28 + fVar35;
          pdb_140df4540(&uStack_238,&fStack_178,pfStack_108._0_4_);
          pdb_140de88f0(&fStack_2b8,param_10,param_11);
          fVar31 = fStack_2b0 + fStack_2b0;
          fVar28 = fStack_2b4 + fStack_2b4;
          fVar32 = fStack_2b8 * (fStack_2b8 + fStack_2b8);
          fVar29 = (fStack_2b8 + fStack_2b8) * fStack_2ac;
          fStack_16c = fVar31 * fStack_2b8 - fVar28 * fStack_2ac;
          fStack_15c = fVar29 + fVar31 * fStack_2b4;
          fStack_14c = fVar27 - (fVar32 + fStack_2b4 * fVar28);
          fVar36 = fVar36 - fVar26;
          fStack_178 = (float)((uint)fVar36 & _DAT_142e377e0) *
                       (fVar27 - (fStack_2b4 * fVar28 + fStack_2b0 * fVar31));
          fStack_174 = (float)((uint)fVar36 & _UNK_142e377e4) *
                       (fVar28 * fStack_2b8 + fStack_2ac * fVar31);
          fStack_170 = (float)((uint)fVar36 & _UNK_142e377e8) * fStack_16c;
          fStack_16c = (float)((uint)fVar36 & _UNK_142e377ec) * fStack_16c;
          fStack_168 = (fVar28 * fStack_2b8 - fStack_2ac * fVar31) * (float)uStack_188;
          fStack_164 = (fVar27 - (fStack_2b0 * fVar31 + fVar32)) * uStack_188._4_4_;
          fStack_160 = fStack_15c * fStack_180;
          fStack_15c = fStack_15c * fStack_17c;
          fStack_158 = (fVar28 * fStack_2ac + fVar31 * fStack_2b8) * (float)uStack_258;
          fStack_154 = (fVar31 * fStack_2b4 - fVar29) * uStack_258._4_4_;
          fStack_150 = fStack_14c * fStack_250;
          fStack_14c = fStack_14c * fStack_24c;
          uStack_148 = uStack_238;
          uStack_144 = uStack_234;
          uStack_140 = uStack_230;
          _uStack_13c = CONCAT44(uStack_138,uStack_230);
          pdb_140e07fe0(&uStack_320,&fStack_178);
          uVar16 = pdb_1409012c0(param_14);
          iVar17 = pdb_140315970(&param_13);
          pdb_140951920(&fStack_2b8);
          iStack_12c = iVar17 + iVar2;
          uStack_1e8 = uStack_300;
          uVar11 = uStack_1e8;
          uStack_1e0 = uStack_2f8;
          uVar12 = uStack_1e0;
          uStack_1f8 = uStack_310;
          uVar9 = uStack_1f8;
          uStack_1f0 = uStack_308;
          uVar10 = uStack_1f0;
          uStack_208 = uStack_320;
          uVar7 = uStack_208;
          uStack_200 = uStack_318;
          uVar8 = uStack_200;
          uStack_1d8 = uStack_288;
          uVar13 = uStack_1d8;
          uStack_1d0 = (undefined4)uStack_280;
          uStack_1cc = (undefined4)((ulonglong)uStack_280 >> 0x20);
          uStack_1c0 = uStack_270;
          uStack_1c8 = (undefined4)uStack_278;
          uStack_1c4 = (undefined4)((ulonglong)uStack_278 >> 0x20);
          uStack_134 = CONCAT44(uStack_270,uStack_1c4);
          uStack_208._0_4_ = (float)uStack_320;
          uStack_208._4_4_ = (undefined4)((ulonglong)uStack_320 >> 0x20);
          uStack_200._0_4_ = (undefined4)uStack_318;
          uStack_200._4_4_ = (undefined4)((ulonglong)uStack_318 >> 0x20);
          uStack_1f8._0_4_ = (undefined4)uStack_310;
          uStack_1f8._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
          uStack_1f0._0_4_ = (undefined4)uStack_308;
          uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_308 >> 0x20);
          uStack_1e8._0_4_ = (undefined4)uStack_300;
          uStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_300 >> 0x20);
          uStack_1e0._0_4_ = (undefined4)uStack_2f8;
          uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_2f8 >> 0x20);
          uStack_1d8._0_4_ = (undefined4)uStack_288;
          uStack_1d8._4_4_ = (undefined4)((ulonglong)uStack_288 >> 0x20);
          uStack_148 = (undefined4)uStack_1d8;
          uStack_144 = uStack_1d8._4_4_;
          uStack_140 = uStack_1d0;
          _uStack_13c = CONCAT44(uStack_1c8,uStack_1cc);
          fStack_158 = (float)(undefined4)uStack_1e8;
          fStack_154 = (float)uStack_1e8._4_4_;
          fStack_150 = (float)(undefined4)uStack_1e0;
          fStack_14c = (float)uStack_1e0._4_4_;
          fStack_168 = (float)(undefined4)uStack_1f8;
          fStack_164 = (float)uStack_1f8._4_4_;
          fStack_160 = (float)(undefined4)uStack_1f0;
          fStack_15c = (float)uStack_1f0._4_4_;
          fStack_178 = (float)uStack_208;
          fStack_174 = (float)uStack_208._4_4_;
          fStack_170 = (float)(undefined4)uStack_200;
          fStack_16c = (float)uStack_200._4_4_;
          uStack_11c = uStack_25c;
          uStack_208 = uVar7;
          uStack_200 = uVar8;
          uStack_1f8 = uVar9;
          uStack_1f0 = uVar10;
          uStack_1e8 = uVar11;
          uStack_1e0 = uVar12;
          uStack_1d8 = uVar13;
          uStack_128 = uVar16;
          uStack_124 = uVar3;
          pdb_14094c790(&uStack_320,&fStack_178);
          cVar15 = pdb_1414aad80(pbStack_110,&uStack_320);
          if (cVar15 != '\0') {
            *puStack_1b0 = 1;
          }
          if (uVar23 != 2) {
            pfVar18 = pfStack_f8 + uVar23;
            pfVar20 = pfStack_f8 + 2;
            pfVar22 = pfStack_f8 + 1;
            do {
              pfVar25 = pfVar20;
              fVar26 = *pfVar22;
              fVar36 = *pfVar25;
              fVar28 = fVar36 * _DAT_142e36f50 + fVar26 * _DAT_142e36f50;
              fStack_178 = fVar34 - fVar28 * param_11;
              fStack_174 = param_10 * fVar28 + fVar35;
              pdb_140df4540(&uStack_238,&fStack_178,pfStack_108._0_4_);
              pdb_140de88f0(&fStack_2b8,param_10,param_11);
              fVar33 = fStack_2b0 + fStack_2b0;
              fVar29 = fStack_2b4 + fStack_2b4;
              fVar32 = fStack_2b8 * (fStack_2b8 + fStack_2b8);
              fVar31 = (fStack_2b8 + fStack_2b8) * fStack_2ac;
              fStack_16c = fVar33 * fStack_2b8 - fVar29 * fStack_2ac;
              fStack_15c = fVar31 + fVar33 * fStack_2b4;
              fStack_14c = fVar27 - (fVar32 + fStack_2b4 * fVar29);
              fVar28 = fVar36 - fVar26;
              fStack_178 = (float)((uint)fVar28 & _DAT_142e377e0) *
                           (fVar27 - (fStack_2b4 * fVar29 + fStack_2b0 * fVar33));
              fStack_174 = (float)((uint)fVar28 & _UNK_142e377e4) *
                           (fVar29 * fStack_2b8 + fStack_2ac * fVar33);
              fStack_170 = (float)((uint)fVar28 & _UNK_142e377e8) * fStack_16c;
              fStack_16c = (float)((uint)fVar28 & _UNK_142e377ec) * fStack_16c;
              fStack_168 = (fVar29 * fStack_2b8 - fStack_2ac * fVar33) * (float)uStack_188;
              fStack_164 = (fVar27 - (fStack_2b0 * fVar33 + fVar32)) * uStack_188._4_4_;
              fStack_160 = fStack_15c * fStack_180;
              fStack_15c = fStack_15c * fStack_17c;
              fStack_158 = (fVar29 * fStack_2ac + fVar33 * fStack_2b8) * (float)uStack_258;
              fStack_154 = (fVar33 * fStack_2b4 - fVar31) * uStack_258._4_4_;
              fStack_150 = fStack_14c * fStack_250;
              fStack_14c = fStack_14c * fStack_24c;
              uStack_148 = uStack_238;
              uStack_144 = uStack_234;
              uStack_140 = uStack_230;
              _uStack_13c = CONCAT44(uStack_138,uStack_230);
              pdb_140e07fe0(&uStack_320,&fStack_178);
              uVar16 = pdb_1409012c0(param_14);
              iVar17 = pdb_140315970(&param_13);
              pdb_140951920(&fStack_2b8);
              iStack_12c = iVar17 + iVar2;
              uStack_1e8 = uStack_300;
              uVar10 = uStack_1e8;
              uStack_1e0 = uStack_2f8;
              uVar11 = uStack_1e0;
              uStack_1f8 = uStack_310;
              uVar8 = uStack_1f8;
              uStack_1f0 = uStack_308;
              uVar9 = uStack_1f0;
              uStack_208 = uStack_320;
              uVar3 = uStack_208;
              uStack_200 = uStack_318;
              uVar7 = uStack_200;
              uStack_1d8 = uStack_288;
              uVar12 = uStack_1d8;
              uStack_1d0 = (undefined4)uStack_280;
              uStack_1cc = (undefined4)((ulonglong)uStack_280 >> 0x20);
              uStack_1c0 = uStack_270;
              uStack_1c8 = (undefined4)uStack_278;
              uStack_1c4 = (undefined4)((ulonglong)uStack_278 >> 0x20);
              uStack_134 = CONCAT44(uStack_270,uStack_1c4);
              uStack_208._0_4_ = (float)uStack_320;
              uStack_208._4_4_ = (undefined4)((ulonglong)uStack_320 >> 0x20);
              uStack_200._0_4_ = (undefined4)uStack_318;
              uStack_200._4_4_ = (undefined4)((ulonglong)uStack_318 >> 0x20);
              uStack_1f8._0_4_ = (undefined4)uStack_310;
              uStack_1f8._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
              uStack_1f0._0_4_ = (undefined4)uStack_308;
              uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_308 >> 0x20);
              uStack_1e8._0_4_ = (undefined4)uStack_300;
              uStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_300 >> 0x20);
              uStack_1e0._0_4_ = (undefined4)uStack_2f8;
              uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_2f8 >> 0x20);
              uStack_1d8._0_4_ = (undefined4)uStack_288;
              uStack_1d8._4_4_ = (undefined4)((ulonglong)uStack_288 >> 0x20);
              uStack_148 = (undefined4)uStack_1d8;
              uStack_144 = uStack_1d8._4_4_;
              uStack_140 = uStack_1d0;
              _uStack_13c = CONCAT44(uStack_1c8,uStack_1cc);
              fStack_158 = (float)(undefined4)uStack_1e8;
              fStack_154 = (float)uStack_1e8._4_4_;
              fStack_150 = (float)(undefined4)uStack_1e0;
              fStack_14c = (float)uStack_1e0._4_4_;
              fStack_168 = (float)(undefined4)uStack_1f8;
              fStack_164 = (float)uStack_1f8._4_4_;
              fStack_160 = (float)(undefined4)uStack_1f0;
              fStack_15c = (float)uStack_1f0._4_4_;
              fStack_178 = (float)uStack_208;
              fStack_174 = (float)uStack_208._4_4_;
              fStack_170 = (float)(undefined4)uStack_200;
              fStack_16c = (float)uStack_200._4_4_;
              uStack_124 = CONCAT44(fVar36,fVar26);
              uStack_11c = uStack_25c;
              uStack_208 = uVar3;
              uStack_200 = uVar7;
              uStack_1f8 = uVar8;
              uStack_1f0 = uVar9;
              uStack_1e8 = uVar10;
              uStack_1e0 = uVar11;
              uStack_1d8 = uVar12;
              uStack_128 = uVar16;
              pdb_14094c790(&uStack_320,&fStack_178);
              cVar15 = pdb_1414aad80(pbStack_110,&uStack_320);
              if (cVar15 != '\0') {
                *puStack_1b0 = 1;
              }
              pfVar20 = pfVar25 + 1;
              pfVar22 = pfVar25;
            } while (pfVar25 + 1 != pfVar18);
          }
        }
        pub_1406abac0((byte *)pfStack_f8,uStack_1a8,4);
        uVar19 = uStack_2e0;
        fVar26 = _DAT_142e3c640;
        fVar36 = _UNK_142e3c644;
        fVar29 = _UNK_142e3c648;
        fVar31 = _UNK_142e3c64c;
      }
    }
    bVar14 = false;
    pfVar18 = pfStack_220;
    uVar19 = uStack_2d0;
  }
  pfVar18 = pfStack_190;
  if (param_8 != '\0') {
    fVar28 = fVar30 * _DAT_142e36f38 + _DAT_14300b140 + _DAT_142f60fec;
    fStack_100 = fStack_100 + param_11 * fVar28;
    fStack_fc = fStack_fc + fVar28 * param_10;
    bVar14 = true;
    pfStack_108 = pfStack_190;
    uVar19 = 0;
    while (uVar23 = uVar19, pfStack_108 != pfStack_1a0) {
      pfVar20 = pfStack_108 + 1;
      pfVar22 = pfStack_108;
      if (bVar14) {
        if (pfVar20 == pfStack_1a0) break;
        uStack_258 = pfStack_108;
        pfVar22 = pfVar20;
        pfVar20 = pfStack_108 + 2;
      }
      pfStack_108 = pfVar20;
      fVar28 = *uStack_258;
      fVar30 = *pfVar22;
      uStack_258 = pfVar22;
      pdb_140de8290(&fStack_178,uStack_228,fStack_194,param_9,&UNK_1435131d8);
      pfVar20 = (float *)CONCAT44(fStack_16c,fStack_170);
      uVar21 = CONCAT44(fStack_164,fStack_168);
      if (uVar21 == 0) {
        pfVar22 = (float *)0x4;
      }
      else {
        uStack_188 = pfVar20;
        pdb_14007ee60();
        pfVar22 = (float *)pub_1406abab0(uVar21 * 4,4);
        if (pfVar22 == (float *)0x0) {
          pdb_142dc7e2a(4,uVar21 * 4);
          goto LAB_1424f2ac6;
        }
        if (7 < uVar21) {
          uVar19 = uVar21 & 0xfffffffffffffff8;
          uVar24 = 0;
          do {
            pfVar18 = uStack_188 + uVar24;
            fVar32 = pfVar18[1];
            fVar34 = pfVar18[2];
            fVar35 = pfVar18[3];
            pfVar20 = uStack_188 + uVar24 + 4;
            fVar33 = *pfVar20;
            fVar4 = pfVar20[1];
            fVar5 = pfVar20[2];
            fVar6 = pfVar20[3];
            pfVar20 = pfVar22 + uVar24;
            *pfVar20 = *pfVar18 * param_5 - (fVar26 - *pfVar18) * param_5;
            pfVar20[1] = fVar32 * param_5 - (fVar36 - fVar32) * param_5;
            pfVar20[2] = fVar34 * param_5 - (fVar29 - fVar34) * param_5;
            pfVar20[3] = fVar35 * param_5 - (fVar31 - fVar35) * param_5;
            pfVar18 = pfVar22 + uVar24 + 4;
            *pfVar18 = fVar33 * param_5 - (fVar26 - fVar33) * param_5;
            pfVar18[1] = fVar4 * param_5 - (fVar36 - fVar4) * param_5;
            pfVar18[2] = fVar5 * param_5 - (fVar29 - fVar5) * param_5;
            pfVar18[3] = fVar6 * param_5 - (fVar31 - fVar6) * param_5;
            uVar24 = uVar24 + 8;
            if (uVar19 == uVar24) goto LAB_1424f29e0;
          } while( true );
        }
        uVar19 = 0;
        do {
          pfVar22[uVar19] = uStack_188[uVar19] * param_5 - (fVar27 - uStack_188[uVar19]) * param_5;
          uVar19 = uVar19 + 1;
LAB_1424f29e0:
          pfVar20 = uStack_188;
        } while (uVar21 != uVar19);
      }
      pfVar18 = pfStack_190;
      if (CONCAT44(fStack_174,fStack_178) != 0) {
        pub_1406abac0((byte *)pfVar20,CONCAT44(fStack_174,fStack_178) << 2,4);
      }
      uVar19 = uVar23 + 1;
      bVar14 = false;
      if (uVar21 != 0) {
        pfStack_f8 = (float *)(uVar21 * 4);
        uStack_1a8 = uVar19;
        uStack_188 = pfVar22;
        if (uVar21 != 1) {
          fVar35 = fVar30 * _DAT_142e36f50 + fVar28 * _DAT_142e36f50;
          fVar26 = *pfVar22;
          fVar36 = pfVar22[1];
          uVar3 = *(undefined8 *)pfVar22;
          fVar29 = fVar36 * _DAT_142e36f50 + fVar26 * _DAT_142e36f50;
          fStack_178 = fStack_fc - fVar29 * param_11;
          fStack_174 = param_10 * fVar29 + fStack_100;
          pdb_140df4540(&uStack_248,&fStack_178,fVar35);
          pdb_140de88f0(&fStack_2b8,param_10,param_11);
          fVar34 = fStack_2b0 + fStack_2b0;
          fVar29 = fStack_2b4 + fStack_2b4;
          fVar32 = fStack_2b8 * (fStack_2b8 + fStack_2b8);
          fVar31 = (fStack_2b8 + fStack_2b8) * fStack_2ac;
          fStack_16c = fVar34 * fStack_2b8 - fVar29 * fStack_2ac;
          fStack_15c = fVar31 + fVar34 * fStack_2b4;
          fStack_14c = fVar27 - (fVar32 + fStack_2b4 * fVar29);
          fVar36 = fVar36 - fVar26;
          fStack_178 = (float)((uint)fVar36 & _DAT_142e377e0) *
                       (fVar27 - (fStack_2b4 * fVar29 + fStack_2b0 * fVar34));
          fStack_174 = (float)((uint)fVar36 & _UNK_142e377e4) *
                       (fVar29 * fStack_2b8 + fStack_2ac * fVar34);
          fStack_170 = (float)((uint)fVar36 & _UNK_142e377e8) * fStack_16c;
          fStack_16c = (float)((uint)fVar36 & _UNK_142e377ec) * fStack_16c;
          fVar26 = (float)((uint)(fVar30 - fVar28) & _DAT_142e377e0);
          fStack_168 = (fVar29 * fStack_2b8 - fStack_2ac * fVar34) * fVar26;
          fStack_164 = (fVar27 - (fStack_2b0 * fVar34 + fVar32)) * fVar26;
          fStack_160 = fStack_15c * fVar26;
          fStack_15c = fStack_15c * fVar26;
          fStack_158 = (fVar29 * fStack_2ac + fVar34 * fStack_2b8) * _DAT_143309820;
          fStack_154 = (fVar34 * fStack_2b4 - fVar31) * _UNK_143309824;
          fStack_150 = fStack_14c * _UNK_143309828;
          fStack_14c = fStack_14c * _UNK_14330982c;
          uStack_148 = uStack_248;
          uStack_144 = uStack_244;
          uStack_140 = uStack_240;
          _uStack_13c = CONCAT44(uStack_138,uStack_240);
          pdb_140e07fe0(&uStack_320,&fStack_178);
          uVar16 = pdb_1409012c0(param_14);
          iVar17 = pdb_140315970(&param_13);
          pdb_140951920(&fStack_2b8);
          iVar2 = (int)uVar23 * 2;
          iStack_12c = iVar17 + iVar2;
          uStack_1e8 = uStack_300;
          uVar11 = uStack_1e8;
          uStack_1e0 = uStack_2f8;
          uVar12 = uStack_1e0;
          uStack_1f8 = uStack_310;
          uVar9 = uStack_1f8;
          uStack_1f0 = uStack_308;
          uVar10 = uStack_1f0;
          uStack_208 = uStack_320;
          uVar7 = uStack_208;
          uStack_200 = uStack_318;
          uVar8 = uStack_200;
          uStack_1d8 = uStack_288;
          uVar13 = uStack_1d8;
          uStack_1d0 = (undefined4)uStack_280;
          uStack_1cc = (undefined4)((ulonglong)uStack_280 >> 0x20);
          uStack_1c0 = uStack_270;
          uStack_1c8 = (undefined4)uStack_278;
          uStack_1c4 = (undefined4)((ulonglong)uStack_278 >> 0x20);
          uStack_134 = CONCAT44(uStack_270,uStack_1c4);
          uStack_208._0_4_ = (float)uStack_320;
          uStack_208._4_4_ = (undefined4)((ulonglong)uStack_320 >> 0x20);
          uStack_200._0_4_ = (undefined4)uStack_318;
          uStack_200._4_4_ = (undefined4)((ulonglong)uStack_318 >> 0x20);
          uStack_1f8._0_4_ = (undefined4)uStack_310;
          uStack_1f8._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
          uStack_1f0._0_4_ = (undefined4)uStack_308;
          uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_308 >> 0x20);
          uStack_1e8._0_4_ = (undefined4)uStack_300;
          uStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_300 >> 0x20);
          uStack_1e0._0_4_ = (undefined4)uStack_2f8;
          uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_2f8 >> 0x20);
          uStack_1d8._0_4_ = (undefined4)uStack_288;
          uStack_1d8._4_4_ = (undefined4)((ulonglong)uStack_288 >> 0x20);
          uStack_148 = (undefined4)uStack_1d8;
          uStack_144 = uStack_1d8._4_4_;
          uStack_140 = uStack_1d0;
          _uStack_13c = CONCAT44(uStack_1c8,uStack_1cc);
          fStack_158 = (float)(undefined4)uStack_1e8;
          fStack_154 = (float)uStack_1e8._4_4_;
          fStack_150 = (float)(undefined4)uStack_1e0;
          fStack_14c = (float)uStack_1e0._4_4_;
          fStack_168 = (float)(undefined4)uStack_1f8;
          fStack_164 = (float)uStack_1f8._4_4_;
          fStack_160 = (float)(undefined4)uStack_1f0;
          fStack_15c = (float)uStack_1f0._4_4_;
          fStack_178 = (float)uStack_208;
          fStack_174 = (float)uStack_208._4_4_;
          fStack_170 = (float)(undefined4)uStack_200;
          fStack_16c = (float)uStack_200._4_4_;
          uStack_11c = uStack_25c;
          uStack_208 = uVar7;
          uStack_200 = uVar8;
          uStack_1f8 = uVar9;
          uStack_1f0 = uVar10;
          uStack_1e8 = uVar11;
          uStack_1e0 = uVar12;
          uStack_1d8 = uVar13;
          uStack_128 = uVar16;
          uStack_124 = uVar3;
          pdb_14094c790(&uStack_320,&fStack_178);
          cVar15 = pdb_1414aad80(pbStack_110,&uStack_320);
          if (cVar15 != '\0') {
            *puStack_1b0 = 1;
          }
          if (uVar21 != 2) {
            pfVar18 = uStack_188 + uVar21;
            pfVar20 = uStack_188 + 1;
            pfVar22 = uStack_188 + 2;
            do {
              fVar36 = *pfVar20;
              fVar28 = *pfVar22;
              fVar29 = fVar28 * _DAT_142e36f50 + fVar36 * _DAT_142e36f50;
              fStack_178 = fStack_fc - fVar29 * param_11;
              fStack_174 = param_10 * fVar29 + fStack_100;
              pdb_140df4540(&uStack_248,&fStack_178,fVar35);
              pdb_140de88f0(&fStack_2b8,param_10,param_11);
              fVar34 = fStack_2b0 + fStack_2b0;
              fVar31 = fStack_2b4 + fStack_2b4;
              fVar32 = fStack_2b8 * (fStack_2b8 + fStack_2b8);
              fVar30 = (fStack_2b8 + fStack_2b8) * fStack_2ac;
              fStack_16c = fVar34 * fStack_2b8 - fVar31 * fStack_2ac;
              fStack_15c = fVar30 + fVar34 * fStack_2b4;
              fStack_14c = fVar27 - (fVar32 + fStack_2b4 * fVar31);
              fVar29 = fVar28 - fVar36;
              fStack_178 = (float)((uint)fVar29 & _DAT_142e377e0) *
                           (fVar27 - (fStack_2b4 * fVar31 + fStack_2b0 * fVar34));
              fStack_174 = (float)((uint)fVar29 & _UNK_142e377e4) *
                           (fVar31 * fStack_2b8 + fStack_2ac * fVar34);
              fStack_170 = (float)((uint)fVar29 & _UNK_142e377e8) * fStack_16c;
              fStack_16c = (float)((uint)fVar29 & _UNK_142e377ec) * fStack_16c;
              fStack_168 = (fVar31 * fStack_2b8 - fStack_2ac * fVar34) * fVar26;
              fStack_164 = (fVar27 - (fStack_2b0 * fVar34 + fVar32)) * fVar26;
              fStack_160 = fStack_15c * fVar26;
              fStack_15c = fStack_15c * fVar26;
              fStack_158 = (fVar31 * fStack_2ac + fVar34 * fStack_2b8) * _DAT_143309820;
              fStack_154 = (fVar34 * fStack_2b4 - fVar30) * _UNK_143309824;
              fStack_150 = fStack_14c * _UNK_143309828;
              fStack_14c = fStack_14c * _UNK_14330982c;
              uStack_148 = uStack_248;
              uStack_144 = uStack_244;
              uStack_140 = uStack_240;
              _uStack_13c = CONCAT44(uStack_138,uStack_240);
              pdb_140e07fe0(&uStack_320,&fStack_178);
              uVar16 = pdb_1409012c0(param_14);
              iVar17 = pdb_140315970(&param_13);
              pdb_140951920(&fStack_2b8);
              iStack_12c = iVar17 + iVar2;
              uStack_1e8 = uStack_300;
              uVar10 = uStack_1e8;
              uStack_1e0 = uStack_2f8;
              uVar11 = uStack_1e0;
              uStack_1f8 = uStack_310;
              uVar8 = uStack_1f8;
              uStack_1f0 = uStack_308;
              uVar9 = uStack_1f0;
              uStack_208 = uStack_320;
              uVar3 = uStack_208;
              uStack_200 = uStack_318;
              uVar7 = uStack_200;
              uStack_1d8 = uStack_288;
              uVar12 = uStack_1d8;
              uStack_1d0 = (undefined4)uStack_280;
              uStack_1cc = (undefined4)((ulonglong)uStack_280 >> 0x20);
              uStack_1c0 = uStack_270;
              uStack_1c8 = (undefined4)uStack_278;
              uStack_1c4 = (undefined4)((ulonglong)uStack_278 >> 0x20);
              uStack_134 = CONCAT44(uStack_270,uStack_1c4);
              uStack_208._0_4_ = (float)uStack_320;
              uStack_208._4_4_ = (undefined4)((ulonglong)uStack_320 >> 0x20);
              uStack_200._0_4_ = (undefined4)uStack_318;
              uStack_200._4_4_ = (undefined4)((ulonglong)uStack_318 >> 0x20);
              uStack_1f8._0_4_ = (undefined4)uStack_310;
              uStack_1f8._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
              uStack_1f0._0_4_ = (undefined4)uStack_308;
              uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_308 >> 0x20);
              uStack_1e8._0_4_ = (undefined4)uStack_300;
              uStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_300 >> 0x20);
              uStack_1e0._0_4_ = (undefined4)uStack_2f8;
              uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_2f8 >> 0x20);
              uStack_1d8._0_4_ = (undefined4)uStack_288;
              uStack_1d8._4_4_ = (undefined4)((ulonglong)uStack_288 >> 0x20);
              uStack_148 = (undefined4)uStack_1d8;
              uStack_144 = uStack_1d8._4_4_;
              uStack_140 = uStack_1d0;
              _uStack_13c = CONCAT44(uStack_1c8,uStack_1cc);
              fStack_158 = (float)(undefined4)uStack_1e8;
              fStack_154 = (float)uStack_1e8._4_4_;
              fStack_150 = (float)(undefined4)uStack_1e0;
              fStack_14c = (float)uStack_1e0._4_4_;
              fStack_168 = (float)(undefined4)uStack_1f8;
              fStack_164 = (float)uStack_1f8._4_4_;
              fStack_160 = (float)(undefined4)uStack_1f0;
              fStack_15c = (float)uStack_1f0._4_4_;
              fStack_178 = (float)uStack_208;
              fStack_174 = (float)uStack_208._4_4_;
              fStack_170 = (float)(undefined4)uStack_200;
              fStack_16c = (float)uStack_200._4_4_;
              uStack_124 = CONCAT44(fVar28,fVar36);
              uStack_11c = uStack_25c;
              uStack_208 = uVar3;
              uStack_200 = uVar7;
              uStack_1f8 = uVar8;
              uStack_1f0 = uVar9;
              uStack_1e8 = uVar10;
              uStack_1e0 = uVar11;
              uStack_1d8 = uVar12;
              uStack_128 = uVar16;
              pdb_14094c790(&uStack_320,&fStack_178);
              cVar15 = pdb_1414aad80(pbStack_110,&uStack_320);
              if (cVar15 != '\0') {
                *puStack_1b0 = 1;
              }
              pfVar25 = pfVar22 + 1;
              pfVar20 = pfVar22;
              pfVar22 = pfVar25;
            } while (pfVar25 != pfVar18);
          }
        }
        pub_1406abac0((byte *)uStack_188,(ulonglong)pfStack_f8,4);
        bVar14 = false;
        uVar19 = uStack_1a8;
        pfVar18 = pfStack_190;
        fVar26 = _DAT_142e3c640;
        fVar36 = _UNK_142e3c644;
        fVar29 = _UNK_142e3c648;
        fVar31 = _UNK_142e3c64c;
      }
    }
  }
  if (uStack_218 != 0) {
    pub_1406abac0((byte *)pfVar18,uStack_210,4);
  }
  return;
}

