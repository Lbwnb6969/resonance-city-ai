// VA 0x14281a470, PDB extent 4622 bytes
// timberframe::timberframe_circle::construct_timberframe_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/timberframe_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: timberframe::timberframe_circle::construct_timberframe_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/timberframe_circle.rs
   Extent: 4622 */

char pdb_14281a470(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  float *pfVar17;
  ulonglong uVar18;
  bool bVar19;
  float fVar20;
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
  float fVar40;
  undefined8 uStack_368;
  longlong lStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  longlong lStack_330;
  longlong lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  int iStack_310;
  longlong lStack_308;
  float *pfStack_300;
  longlong lStack_2f8;
  ulonglong *puStack_2f0;
  float *pfStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  longlong lStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  longlong lStack_2b8;
  undefined4 *puStack_2b0;
  undefined1 auStack_2a8 [16];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float *pfStack_288;
  float *pfStack_280;
  float fStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  float fStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [16];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float *pfStack_218;
  float *pfStack_210;
  float fStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  float fStack_1fc;
  float afStack_1f8 [2];
  ulonglong uStack_1f0;
  char *pcStack_1e8;
  float *pfStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float *pfStack_1c8;
  float *pfStack_1c0;
  float fStack_1b8;
  undefined8 uStack_1b4;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  longlong lStack_110;
  char *pcStack_108;
  float *pfStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar7 = (undefined8 *)pdb_1428196e0(*param_3,&UNK_14359da50);
  if ((puVar7 == (undefined8 *)0x0) ||
     (lVar8 = (**(code **)(puVar7[1] + 0x18))(*puVar7), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14359dc80);
  }
  if (*(longlong *)*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14359dc98);
  }
  lVar2 = ((longlong *)*param_2)[1];
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14359db48);
  }
  lVar1 = lVar2 + 0x18;
  LOCK();
  bVar19 = *(char *)(lVar2 + 0x18) == '\0';
  if (bVar19) {
    *(char *)(lVar2 + 0x18) = '\x01';
  }
  UNLOCK();
  if (bVar19) {
    pdb_140e9a150(lVar1);
    lVar1 = *(longlong *)(lVar2 + 0x10);
  }
  else {
    pdb_142dbd1a0(lVar1,1,1000000000);
    pdb_140e9a150(lVar1);
    lVar1 = *(longlong *)(lVar2 + 0x10);
  }
  if ((lVar1 == 0) ||
     (piVar9 = (int *)(*(longlong *)(lVar2 + 8) + lVar1 * 4 + -4), piVar9 == (int *)0x0)) {
    lStack_360 = *(longlong *)(lVar8 + 0x10);
    if (lStack_360 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14359db60);
    }
    iStack_310 = (int)lStack_360 + -1;
  }
  else {
    iStack_310 = *piVar9;
    lStack_360 = *(longlong *)(lVar8 + 0x10);
  }
  uStack_368 = *(undefined8 *)(lVar8 + 8);
  uStack_358 = *(undefined4 *)(lVar8 + 0x18);
  uStack_354 = *(undefined4 *)(lVar8 + 0x1c);
  uStack_350 = *(undefined4 *)(lVar8 + 0x20);
  uStack_34c = *(undefined4 *)(lVar8 + 0x24);
  uStack_340 = *(undefined8 *)(lVar8 + 0x28);
  uStack_338 = *(undefined8 *)(lVar8 + 0x30);
  lStack_330 = lVar8 + 0x78;
  lStack_328 = lVar8 + 0x58;
  uStack_320 = *(undefined8 *)(lVar8 + 0x38);
  uStack_318 = *(undefined8 *)(lVar8 + 0x40);
  puStack_2f0 = (ulonglong *)*param_1;
  lVar8 = param_1[1];
  uVar3 = *puStack_2f0;
  uVar18 = 0;
  uVar11 = uVar3 - *(ulonglong *)(lVar8 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar8 + 0x18)) {
    uVar11 = uVar18;
  }
  uVar10 = uVar3 - *(ulonglong *)(lVar8 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar8 + 0x38)) {
    uVar10 = uVar18;
  }
  pcVar14 = (char *)(uVar11 * 0x28 + *(longlong *)(lVar8 + 8));
  uVar3 = *(ulonglong *)(lVar8 + 0x10) - uVar11;
  if (*(ulonglong *)(lVar8 + 0x10) < uVar11) {
    pcVar14 = (char *)0x8;
    uVar3 = uVar18;
  }
  pcVar16 = (char *)(uVar10 * 0x28 + *(longlong *)(lVar8 + 0x28));
  uVar11 = *(ulonglong *)(lVar8 + 0x30) - uVar10;
  if (*(ulonglong *)(lVar8 + 0x30) < uVar10) {
    pcVar16 = (char *)0x8;
    uVar11 = uVar18;
  }
  *puStack_2f0 = (*(longlong *)(lVar8 + 0x40) - uVar11) - uVar3;
  fVar4 = _DAT_142e36f28;
  pcStack_2e0 = pcVar14 + uVar3 * 0x28;
  pcStack_2d8 = pcVar16 + uVar11 * 0x28;
  lStack_2d0 = *param_4;
  uStack_18c = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_2b8 = *param_5;
  puStack_2b0 = (undefined4 *)param_5[2];
  lStack_348 = lVar2;
LAB_14281a6ea:
  do {
    if ((pcVar14 == (char *)0x0) || (pcVar14 == pcStack_2e0)) {
      if ((pcVar16 == (char *)0x0) || (pcVar16 == pcStack_2d8)) {
        if (((uVar18 & 1) != 0) && (*_DAT_143ca8e90 != 0)) {
          uStack_178._0_4_ = 0.0;
          uStack_178._4_4_ = 0.0;
          fStack_170 = 217.86288;
          fStack_16c = 1.4013e-45;
          fStack_168 = 4.34403e-44;
          fStack_164 = 0.0;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          uStack_158 = &UNK_14359dc48;
          uStack_150 = 0x34;
          uStack_148 = 1;
          uStack_140 = &UNK_14359dce6;
          uStack_138 = 0x1f;
          uStack_130 = 0x8900000001;
          puStack_128 = &UNK_14359dcb0;
          uStack_120 = 0x6d;
          pdb_140f332f0(&uStack_f1,&uStack_178);
        }
        lVar2 = lStack_348;
        lVar8 = lStack_348 + 0x18;
        pdb_140e9a350();
        LOCK();
        cVar6 = *(char *)(lVar2 + 0x18);
        bVar19 = cVar6 == '\x01';
        if (bVar19) {
          *(char *)(lVar2 + 0x18) = '\0';
          cVar6 = '\x01';
        }
        UNLOCK();
        if (!bVar19) {
          cVar6 = pdb_142dbcef0(lVar8,0);
        }
        return cVar6;
      }
      pcVar12 = (char *)0x0;
      pcVar13 = pcVar16 + 0x28;
      pcVar15 = pcVar16;
    }
    else {
      pcVar12 = pcVar14 + 0x28;
      pcVar13 = pcVar16;
      pcVar15 = pcVar14;
    }
    *puStack_2f0 = *puStack_2f0 + 1;
    pcVar16 = pcVar13;
    pcVar14 = pcVar12;
  } while (*pcVar15 != '\0');
  pcStack_1e8 = pcVar15 + 4;
  auStack_2a8 = ZEXT416(*(uint *)(lStack_2d0 + 8));
  auStack_248 = ZEXT416(*(uint *)(lStack_2d0 + 0xc));
  pcStack_2c8 = pcVar12;
  pcStack_2c0 = pcVar13;
  pcStack_108 = pcVar15;
  fVar20 = (float)pdb_140deff30();
  fVar20 = fVar20 / _DAT_142e37838;
  uStack_1f0 = 0;
  if (0.0 <= fVar20) {
    uStack_1f0 = (longlong)(fVar20 - _DAT_142e36f2c) & (longlong)fVar20 >> 0x3f | (longlong)fVar20;
  }
  if (_DAT_142e36f30 < fVar20) {
    uStack_1f0 = 0xffffffffffffffff;
  }
  if (uStack_1f0 < 7) {
    uStack_1f0 = 6;
  }
  pdb_140def830(&uStack_178,pcStack_108 + 4);
  lStack_110 = CONCAT44(uStack_178._4_4_,(float)uStack_178);
  pfVar17 = (float *)CONCAT44(fStack_164,fStack_168);
  pfStack_100 = (float *)CONCAT44(fStack_15c,fStack_160);
  fVar20 = (float)CONCAT44(fStack_16c,fStack_170) + _DAT_142e36f34;
  fVar34 = (float)auStack_248._0_4_ * _DAT_142e378e0;
  fVar35 = (float)auStack_248._0_4_ * _UNK_142e378e4;
  fVar36 = (float)auStack_248._0_4_ * _UNK_142e378e8;
  fVar37 = (float)auStack_248._0_4_ * _UNK_142e378ec;
  lVar8 = 0;
  uStack_178 = &fStack_298;
  if (pfVar17 < pfStack_100) {
    do {
      fVar22 = (float)pfVar17 / fVar20;
      fStack_298 = fVar22;
      if ((fVar22 < 0.0) || (fVar4 < fVar22)) {
        fStack_170 = 7.7206726;
        fStack_16c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1436473e8,&uStack_178,&UNK_14359dd30);
      }
      fStack_228 = (float)pdb_140def2c0(lStack_110);
      fStack_224 = fVar22;
      pdb_140df4540(&uStack_178,&fStack_228,auStack_2a8._0_4_);
      fVar24 = fStack_170;
      fVar23 = uStack_178._4_4_;
      fVar22 = (float)uStack_178;
      uStack_178._0_4_ = _DAT_142e3787c;
      uStack_178._4_4_ = 0.0;
      fStack_170 = 0.0;
      fStack_16c = 0.0;
      uStack_158 = (undefined *)CONCAT44(_UNK_14300a514,_DAT_14300a510);
      uStack_150 = CONCAT44(_UNK_14300a51c,_UNK_14300a518);
      uStack_148 = CONCAT44(fVar23,fVar22);
      uStack_140 = (undefined *)CONCAT44(fVar24,fVar24);
      fStack_168 = fVar34;
      fStack_164 = fVar35;
      fStack_160 = fVar36;
      fStack_15c = fVar37;
      pdb_140e07fe0(&fStack_1d8,&uStack_178);
      pdb_140a77410(&uStack_178);
      fStack_278 = fStack_1b8;
      uStack_274 = (undefined4)uStack_1b4;
      uStack_270 = uStack_1b4._4_4_;
      fStack_26c = fStack_1ac;
      pfStack_288 = pfStack_1c8;
      pfStack_280 = pfStack_1c0;
      fStack_298 = fStack_1d8;
      fStack_294 = fStack_1d4;
      fStack_290 = fStack_1d0;
      fStack_28c = fStack_1cc;
      uStack_268 = _DAT_143432ef0;
      uStack_264 = _UNK_143432ef4;
      uStack_260 = _UNK_143432ef8;
      uStack_25c = _UNK_143432efc;
      uStack_258 = (undefined4)uStack_138;
      uStack_254 = uStack_138._4_4_;
      uStack_250 = (undefined4)uStack_130;
      uStack_24c = uStack_130._4_4_;
      bVar5 = pdb_1428199b0(&uStack_368,&fStack_298);
      pfVar17 = (float *)((longlong)pfVar17 + 1);
      uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar5);
      lVar8 = lVar8 + 1;
    } while (pfVar17 < pfStack_100);
  }
  pdb_140c012e0(&lStack_308,auStack_248._0_4_);
  pfStack_2e8 = pfStack_300 + lStack_2f8;
  afStack_1f8[0] = 0.0;
  afStack_1f8[1] = (float)auStack_248._0_4_;
  pfStack_1e0 = pfStack_300;
  lStack_110 = 0;
  pfVar17 = pfStack_300;
LAB_14281a9e7:
  if ((pfVar17 == (float *)0x0) || (pfVar17 == pfStack_2e8)) {
    if (lStack_110 == 8) goto LAB_14281ae90;
    pfVar17 = (float *)((longlong)afStack_1f8 + lStack_110);
    lStack_110 = lStack_110 + 4;
    pfStack_100 = (float *)0x0;
  }
  else {
    pfStack_100 = pfVar17 + 1;
  }
  fVar20 = *pfVar17;
  pdb_140def830(&uStack_178,pcStack_108 + 4,uStack_1f0);
  pfStack_1c8 = (float *)CONCAT44(fStack_164,fStack_168);
  pfStack_1c0 = (float *)CONCAT44(fStack_15c,fStack_160);
  fStack_1d8 = (float)uStack_178;
  fStack_1d4 = uStack_178._4_4_;
  fStack_1d0 = fStack_170;
  fStack_1cc = fStack_16c;
  fStack_1b8 = 0.0;
  fVar20 = fVar20 + (float)auStack_2a8._0_4_;
  fVar34 = fVar20 * 0.0;
  pfVar17 = pfStack_100;
  if (pfStack_1c8 < (float *)CONCAT44(fStack_15c,fStack_160)) {
    do {
      if ((longlong)pfStack_1c8 < 0) {
        fVar35 = (float)pfStack_1c8;
        if ((int)fStack_1cc < 0) goto LAB_14281aad4;
LAB_14281ab14:
        fVar36 = (float)CONCAT44(fStack_1cc,fStack_1d0);
      }
      else {
        fVar35 = (float)(longlong)pfStack_1c8;
        if (-1 < (int)fStack_1cc) goto LAB_14281ab14;
LAB_14281aad4:
        fVar36 = (float)CONCAT44(fStack_1cc,fStack_1d0);
      }
      fVar35 = fVar35 / (fVar36 + _DAT_142e36f34);
      fStack_188 = fVar35;
      if ((fVar35 < 0.0) || (fVar4 < fVar35)) {
        uStack_178 = &fStack_188;
        fStack_170 = 7.7206726;
        fStack_16c = 1.4013e-45;
        pfStack_1c8 = (float *)((longlong)pfStack_1c8 + 1U);
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1436473e8,&uStack_178,&UNK_143647438);
      }
      pfStack_1c8 = (float *)((longlong)pfStack_1c8 + 1U);
      uStack_178._0_4_ = (float)pdb_140def2c0(CONCAT44(fStack_1d4,fStack_1d8));
      uStack_178._4_4_ = fVar35;
      pdb_140df4520(&fStack_224,&uStack_178);
      fStack_228 = 1.4013e-45;
      if (fStack_1b8 == 1.4013e-45) {
        uStack_1b4 = CONCAT44(fStack_1a4,fStack_1a8);
        fVar35 = fStack_21c;
        fVar36 = fStack_224;
        fVar37 = fStack_220;
        fVar22 = fStack_1a0;
        fVar23 = fStack_1a8;
        fVar24 = fStack_1a4;
      }
      else {
        fStack_298 = 1.4013e-45;
        fStack_294 = fStack_224;
        fStack_290 = fStack_220;
        fStack_28c = fStack_21c;
        pfStack_288 = &fStack_1d8;
        pdb_142b101c0(&uStack_178,&fStack_298);
        fStack_1a8 = fStack_168;
        fStack_1a4 = fStack_164;
        fStack_1a0 = fStack_160;
        fStack_1b8 = (float)uStack_178;
        uStack_1b4 = CONCAT44(fStack_170,uStack_178._4_4_);
        fStack_1ac = fStack_16c;
        pfVar17 = pfStack_100;
        fVar35 = fStack_160;
        fVar36 = fStack_168;
        fVar37 = fStack_164;
        fVar22 = fStack_16c;
        fVar23 = uStack_178._4_4_;
        fVar24 = fStack_170;
        if ((float)uStack_178 != 1.4013e-45) break;
      }
      fVar26 = (fVar23 + fVar36) * _DAT_142e36f60;
      fVar27 = (fVar24 + fVar37) * _UNK_142e36f64;
      fVar40 = (fVar22 + fVar35) * _DAT_142e36f50;
      fVar21 = fVar35 - fVar22;
      fStack_228 = fVar36 - fVar23;
      fStack_224 = fVar4 / SQRT(fVar21 * fVar21 + fStack_228 * fStack_228);
      fStack_228 = fStack_224 * fStack_228;
      fStack_224 = fStack_224 * fVar21;
      fStack_1ac = fVar22;
      fStack_1a8 = fVar36;
      fStack_1a4 = fVar37;
      fStack_1a0 = fVar35;
      pdb_140df4540(&fStack_298,&fStack_228,0);
      pdb_140de8fd0(&uStack_178,&fStack_298);
      fVar40 = fVar40 + fVar34;
      fStack_180 = SQRT((fVar22 - fVar35) * (fVar22 - fVar35) +
                        (fVar24 - fVar37) * (fVar24 - fVar37) +
                        (fVar23 - fVar36) * (fVar23 - fVar36));
      fStack_188 = (float)_DAT_1430151c0;
      fStack_184 = (float)((ulonglong)_DAT_1430151c0 >> 0x20);
      fVar38 = fStack_170 + fStack_170;
      fVar35 = fStack_170 * fVar38;
      fVar23 = uStack_178._4_4_ + uStack_178._4_4_;
      fVar37 = fVar23 * (float)uStack_178;
      fVar30 = fVar38 * (float)uStack_178;
      fVar32 = fVar38 * uStack_178._4_4_;
      fVar21 = (float)uStack_178 * ((float)uStack_178 + (float)uStack_178);
      fVar22 = fVar23 * fStack_16c;
      fVar24 = ((float)uStack_178 + (float)uStack_178) * fStack_16c;
      fVar38 = fStack_16c * fVar38;
      fStack_16c = fVar30 - fVar22;
      fStack_15c = fVar24 + fVar32;
      fVar36 = fVar4 - (fVar21 + uStack_178._4_4_ * fVar23);
      uStack_178._0_4_ = fStack_188 * (fVar4 - (uStack_178._4_4_ * fVar23 + fVar35));
      uStack_178._4_4_ = fStack_188 * (fVar37 + fVar38);
      fStack_170 = fStack_188 * fStack_16c;
      fStack_16c = fStack_188 * fStack_16c;
      fStack_168 = fStack_184 * (fVar37 - fVar38);
      fStack_164 = fStack_184 * (fVar4 - (fVar35 + fVar21));
      fStack_160 = fStack_184 * fStack_15c;
      fStack_15c = fStack_184 * fStack_15c;
      uStack_158 = (undefined *)
                   CONCAT44(fStack_180 * (fVar32 - fVar24),fStack_180 * (fVar22 + fVar30));
      uStack_150 = CONCAT44(fStack_180 * fVar36,fStack_180 * fVar36);
      uStack_148 = CONCAT44(fVar27 + fVar20,fVar26 + fVar34);
      uStack_140 = (undefined *)CONCAT44(fVar40,fVar40);
      pdb_140e07fe0(&fStack_228,&uStack_178);
      pdb_140a77410(&uStack_178);
      fStack_278 = fStack_208;
      uStack_274 = uStack_204;
      uStack_270 = uStack_200;
      fStack_26c = fStack_1fc;
      pfStack_288 = pfStack_218;
      pfStack_280 = pfStack_210;
      fStack_298 = fStack_228;
      fStack_294 = fStack_224;
      fStack_290 = fStack_220;
      fStack_28c = fStack_21c;
      uStack_268 = _DAT_143432ef0;
      uStack_264 = _UNK_143432ef4;
      uStack_260 = _UNK_143432ef8;
      uStack_25c = _UNK_143432efc;
      uStack_258 = (undefined4)uStack_138;
      uStack_254 = uStack_138._4_4_;
      uStack_250 = (undefined4)uStack_130;
      uStack_24c = uStack_130._4_4_;
      bVar5 = pdb_1428199b0(&uStack_368,&fStack_298);
      uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar5);
      lVar8 = lVar8 + 1;
      pfVar17 = pfStack_100;
    } while (pfStack_1c8 < pfStack_1c0);
  }
  goto LAB_14281a9e7;
LAB_14281ae90:
  if (lStack_308 != 0) {
    pub_1406abac0((byte *)pfStack_1e0,lStack_308 << 2,4);
  }
  if (pcStack_108[0x1c] == '\0') {
    fVar34 = (float)pdb_140b76fd0();
    pdb_140def830(&uStack_178,pcStack_1e8,uStack_1f0);
    fVar20 = _DAT_142e36f28;
    pcStack_108 = (char *)CONCAT44(uStack_178._4_4_,(float)uStack_178);
    pfVar17 = (float *)CONCAT44(fStack_164,fStack_168);
    pfStack_100 = (float *)CONCAT44(fStack_15c,fStack_160);
    fVar36 = (float)CONCAT44(fStack_16c,fStack_170) + _DAT_142e36f34;
    fVar35 = (float)auStack_2a8._0_4_ + (float)auStack_248._0_4_;
    if (pfVar17 < pfStack_100) {
      do {
        fVar37 = (float)pfVar17 / fVar36;
        fStack_298 = fVar37;
        if ((fVar37 < 0.0) || (fVar4 < fVar37)) {
          fStack_170 = 7.7206726;
          fStack_16c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_1436473e8,&uStack_178,&UNK_14359dd30);
        }
        uStack_178._0_4_ = (float)pdb_140def2c0(pcStack_108);
        uStack_178._4_4_ = fVar37;
        pdb_140df4520(&fStack_224,&uStack_178);
        fVar26 = fStack_21c;
        fVar21 = fStack_220;
        fVar24 = fStack_224;
        fStack_228 = 1.4013e-45;
        pdb_140df4540(&fStack_238,pcStack_1e8,fVar34 + fVar35);
        fVar23 = fStack_230;
        fVar22 = fStack_234;
        fVar37 = fStack_238;
        fVar24 = fVar24 + fVar35 * 0.0;
        fVar21 = fVar21 + fVar35;
        fVar26 = fVar26 + fVar35 * 0.0;
        fVar38 = _UNK_14300b15c + fVar20;
        fVar27 = fStack_230 - fVar26;
        fStack_298 = fStack_238 - fVar24;
        fStack_294 = fStack_234 - fVar21;
        fStack_290 = fVar4 / SQRT(fStack_294 * fStack_294 + fStack_298 * fStack_298 +
                                  fVar27 * fVar27);
        fStack_298 = fStack_290 * fStack_298;
        fStack_294 = fStack_290 * fStack_294;
        fStack_290 = fStack_290 * fVar27;
        pdb_140de8fd0(&uStack_178,&fStack_298);
        fVar27 = fVar24 - fVar37;
        fVar30 = fVar21 - fVar22;
        fVar32 = fVar26 - fVar23;
        fVar27 = SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar27 * fVar27);
        fVar28 = (fVar23 + fVar26) * _UNK_143432f28;
        fVar29 = (_DAT_142e377f0 + fVar38) * _UNK_143432f2c;
        fVar39 = fStack_170 + fStack_170;
        fVar23 = fStack_170 * fVar39;
        fVar38 = uStack_178._4_4_ + uStack_178._4_4_;
        fVar30 = fVar38 * (float)uStack_178;
        fVar31 = fVar39 * (float)uStack_178;
        fVar33 = fVar39 * uStack_178._4_4_;
        fVar25 = (float)uStack_178 * ((float)uStack_178 + (float)uStack_178);
        fVar32 = fVar38 * fStack_16c;
        fVar40 = ((float)uStack_178 + (float)uStack_178) * fStack_16c;
        fVar39 = fStack_16c * fVar39;
        fStack_16c = fVar31 - fVar32;
        fStack_15c = fVar40 + fVar33;
        fVar26 = fVar4 - (fVar25 + uStack_178._4_4_ * fVar38);
        uStack_178._0_4_ = fVar29 * (fVar4 - (uStack_178._4_4_ * fVar38 + fVar23));
        uStack_178._4_4_ = fVar29 * (fVar30 + fVar39);
        fStack_170 = fVar29 * fStack_16c;
        fStack_16c = fVar29 * fStack_16c;
        fStack_168 = (fVar30 - fVar39) * _DAT_143309780;
        fStack_164 = (fVar4 - (fVar23 + fVar25)) * _UNK_143309784;
        fStack_160 = fStack_15c * _UNK_143309788;
        fStack_15c = fStack_15c * _UNK_14330978c;
        uStack_158 = (undefined *)CONCAT44(fVar27 * (fVar33 - fVar40),fVar27 * (fVar32 + fVar31));
        uStack_150 = CONCAT44(fVar27 * fVar26,fVar27 * fVar26);
        uStack_148 = CONCAT44((fVar22 + fVar21) * _UNK_143432f24,(fVar37 + fVar24) * _DAT_143432f20)
        ;
        uStack_140 = (undefined *)CONCAT44(fVar28,fVar28);
        pdb_140e07fe0(&fStack_1d8,&uStack_178);
        pdb_140a77410(&uStack_178);
        fStack_278 = fStack_1b8;
        uStack_274 = (undefined4)uStack_1b4;
        uStack_270 = uStack_1b4._4_4_;
        fStack_26c = fStack_1ac;
        pfStack_288 = pfStack_1c8;
        pfStack_280 = pfStack_1c0;
        fStack_298 = fStack_1d8;
        fStack_294 = fStack_1d4;
        fStack_290 = fStack_1d0;
        fStack_28c = fStack_1cc;
        uStack_268 = _DAT_143432ef0;
        uStack_264 = _UNK_143432ef4;
        uStack_260 = _UNK_143432ef8;
        uStack_25c = _UNK_143432efc;
        uStack_258 = (undefined4)uStack_138;
        uStack_254 = uStack_138._4_4_;
        uStack_250 = (undefined4)uStack_130;
        uStack_24c = uStack_130._4_4_;
        bVar5 = pdb_1428199b0(&uStack_368);
        pfVar17 = (float *)((longlong)pfVar17 + 1);
        uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar5);
        lVar8 = lVar8 + 1;
      } while (pfVar17 < pfStack_100);
    }
  }
  *puStack_2b0 = uStack_18c;
  *(longlong *)(lStack_2b8 + 8) = lVar8;
  pcVar16 = pcStack_2c0;
  pcVar14 = pcStack_2c8;
  goto LAB_14281a6ea;
}

