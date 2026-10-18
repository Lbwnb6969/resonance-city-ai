// VA 0x141f4efc0, PDB extent 9195 bytes
// timberframe::timberframe_rectangle::construct_timberframe_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/timberframe_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   timberframe::timberframe_rectangle::construct_timberframe_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/timberframe_rectangle.rs
   Extent: 9195 */

char pdb_141f4efc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float *pfVar13;
  char *pcVar14;
  ulonglong uVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  char *pcVar19;
  char *pcVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
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
  float fVar41;
  float fVar42;
  longlong lStack_3b8;
  float *pfStack_3b0;
  ulonglong uStack_3a8;
  longlong lStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  longlong lStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong lStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  longlong lStack_350;
  longlong lStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  int iStack_330;
  ulonglong *puStack_328;
  char *pcStack_320;
  char *pcStack_318;
  longlong lStack_310;
  longlong lStack_308;
  undefined4 *puStack_300;
  float *pfStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float afStack_2b0 [2];
  float *pfStack_2a8;
  float *pfStack_2a0;
  undefined1 auStack_298 [16];
  longlong lStack_288;
  float *pfStack_280;
  ulonglong uStack_278;
  longlong lStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  float fStack_230;
  float fStack_22c;
  longlong lStack_228;
  float *pfStack_220;
  ulonglong uStack_218;
  longlong lStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1ec;
  float *pfStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  longlong lStack_1d0;
  float *pfStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  float *pfStack_180;
  float fStack_178;
  float fStack_174;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_105;
  float fStack_104;
  char *pcStack_100;
  float *pfStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pfVar9 = (float *)*param_2;
  uVar11 = *param_3;
  if (*(longlong *)pfVar9 == 0) {
    puVar5 = (undefined8 *)pdb_1428196e0(uVar11,&UNK_14359da50);
    if ((puVar5 == (undefined8 *)0x0) ||
       (lVar6 = (**(code **)(puVar5[1] + 0x18))(*puVar5), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143432f68);
    }
    pdb_14007ee60();
    pfStack_f8 = (float *)pub_1406abab0(0x20,8);
    if (pfStack_f8 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    pfStack_f8[0] = 0.0;
    pfStack_f8[1] = 0.0;
    pfStack_f8[2] = 5.60519e-45;
    pfStack_f8[3] = 0.0;
    pfStack_f8[4] = 0.0;
    pfStack_f8[5] = 0.0;
    *(undefined1 *)(pfStack_f8 + 6) = 0;
    uStack_238 = *(float **)(lVar6 + 0x48);
    do {
      lVar6 = *(longlong *)(uStack_238 + 2);
      while (lVar6 != -1) {
        if (lVar6 < 0) {
          fStack_178 = 217.84741;
          fStack_174 = 1.4013e-45;
          fStack_170 = 2.7316895;
          fStack_16c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14359d900,&fStack_178,&UNK_14359d988);
        }
        LOCK();
        lVar7 = *(longlong *)(uStack_238 + 2);
        bVar22 = lVar6 == lVar7;
        if (bVar22) {
          *(longlong *)(uStack_238 + 2) = lVar6 + 1;
          lVar7 = lVar6;
        }
        UNLOCK();
        lVar6 = lVar7;
        if (bVar22) {
          *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
          uStack_118 = pfVar9;
          if (*(longlong *)pfVar9 != 0) {
            pdb_141f4b310(pfVar9);
          }
          *(float **)uStack_118 = uStack_238;
          *(float **)(uStack_118 + 2) = pfStack_f8;
          pfVar9 = uStack_118;
          goto LAB_141f4f13c;
        }
      }
    } while( true );
  }
LAB_141f4f13c:
  puVar5 = (undefined8 *)pdb_1428196e0(uVar11,&UNK_14359da50);
  if ((puVar5 == (undefined8 *)0x0) ||
     (lVar6 = (**(code **)(puVar5[1] + 0x18))(*puVar5), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143432f80);
  }
  if (*(longlong *)pfVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143432f98);
  }
  lVar7 = *(longlong *)(pfVar9 + 2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14359db48);
  }
  lVar1 = lVar7 + 0x18;
  LOCK();
  bVar22 = *(char *)(lVar7 + 0x18) == '\0';
  if (bVar22) {
    *(char *)(lVar7 + 0x18) = '\x01';
  }
  UNLOCK();
  if (bVar22) {
    pdb_140e9a150(lVar1);
    lVar1 = *(longlong *)(lVar7 + 0x10);
  }
  else {
    pdb_142dbd1a0(lVar1,1,1000000000);
    pdb_140e9a150(lVar1);
    lVar1 = *(longlong *)(lVar7 + 0x10);
  }
  if ((lVar1 == 0) ||
     (piVar8 = (int *)(*(longlong *)(lVar7 + 8) + lVar1 * 4 + -4), piVar8 == (int *)0x0)) {
    lStack_380 = *(longlong *)(lVar6 + 0x10);
    if (lStack_380 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14359db60);
    }
    iStack_330 = (int)lStack_380 + -1;
  }
  else {
    iStack_330 = *piVar8;
    lStack_380 = *(longlong *)(lVar6 + 0x10);
  }
  uStack_388 = *(undefined8 *)(lVar6 + 8);
  uStack_378 = *(undefined4 *)(lVar6 + 0x18);
  uStack_374 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_370 = *(undefined4 *)(lVar6 + 0x20);
  uStack_36c = *(undefined4 *)(lVar6 + 0x24);
  uStack_360 = *(undefined4 *)(lVar6 + 0x28);
  uStack_35c = *(undefined4 *)(lVar6 + 0x2c);
  uStack_358 = *(undefined4 *)(lVar6 + 0x30);
  uStack_354 = *(undefined4 *)(lVar6 + 0x34);
  lStack_350 = lVar6 + 0x78;
  lStack_348 = lVar6 + 0x58;
  uStack_340 = *(undefined4 *)(lVar6 + 0x38);
  uStack_33c = *(undefined4 *)(lVar6 + 0x3c);
  uStack_338 = *(undefined4 *)(lVar6 + 0x40);
  uStack_334 = *(undefined4 *)(lVar6 + 0x44);
  lStack_368 = lVar7;
  pdb_14281a140(&uStack_388);
  puStack_328 = (ulonglong *)*param_1;
  lVar6 = param_1[1];
  uVar15 = *puStack_328;
  uVar18 = 0;
  uVar21 = uVar15 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar15 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar21 = uVar18;
  }
  uVar12 = uVar15 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar15 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar12 = uVar18;
  }
  pcVar19 = (char *)(uVar21 * 0x28 + *(longlong *)(lVar6 + 8));
  uVar15 = *(ulonglong *)(lVar6 + 0x10) - uVar21;
  if (*(ulonglong *)(lVar6 + 0x10) < uVar21) {
    pcVar19 = (char *)0x8;
    uVar15 = uVar18;
  }
  pcVar20 = (char *)(uVar12 * 0x28 + *(longlong *)(lVar6 + 0x28));
  uVar21 = *(ulonglong *)(lVar6 + 0x30) - uVar12;
  if (*(ulonglong *)(lVar6 + 0x30) < uVar12) {
    pcVar20 = (char *)0x8;
    uVar21 = uVar18;
  }
  *puStack_328 = (*(longlong *)(lVar6 + 0x40) - uVar21) - uVar15;
  pcStack_320 = pcVar19 + uVar15 * 0x28;
  pcStack_318 = pcVar20 + uVar21 * 0x28;
  lStack_310 = *param_5;
  uStack_1ec = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_308 = *param_4;
  puStack_300 = (undefined4 *)param_4[2];
  fVar28 = _DAT_142e36f28;
LAB_141f4f389:
  do {
    if ((pcVar19 == (char *)0x0) || (pcVar19 == pcStack_320)) {
      if ((pcVar20 == (char *)0x0) || (pcVar20 == pcStack_318)) {
        if (((uVar18 & 1) != 0) && (*_DAT_143ca8e90 != 0)) {
          fStack_178 = 0.0;
          fStack_174 = 0.0;
          fStack_170 = 195.1871;
          fStack_16c = 1.4013e-45;
          fStack_168 = 4.76441e-44;
          fStack_164 = 0.0;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          uStack_158 = &UNK_143432f30;
          uStack_150 = 0x37;
          uStack_148 = 1;
          uStack_140 = &UNK_143432fe6;
          uStack_138 = 0x22;
          uStack_130 = 0xd700000001;
          puStack_128 = &UNK_143432fb0;
          uStack_120 = 0x6d;
          pdb_140f332f0(&uStack_105,&fStack_178);
        }
        lVar7 = lStack_368;
        lVar6 = lStack_368 + 0x18;
        pdb_140e9a350();
        LOCK();
        cVar4 = *(char *)(lVar7 + 0x18);
        bVar22 = cVar4 == '\x01';
        if (bVar22) {
          *(char *)(lVar7 + 0x18) = '\0';
          cVar4 = '\x01';
        }
        UNLOCK();
        if (!bVar22) {
          cVar4 = pdb_142dbcef0(lVar6,0);
        }
        return cVar4;
      }
      pcVar14 = pcVar20;
      pcVar19 = (char *)0x0;
      pcVar20 = pcVar20 + 0x28;
    }
    else {
      pcVar14 = pcVar19;
      pcVar19 = pcVar19 + 0x28;
    }
    *puStack_328 = *puStack_328 + 1;
  } while (*pcVar14 == '\0');
  pfStack_2f8 = (float *)(pcVar14 + 4);
  fStack_104 = *(float *)(lStack_310 + 8);
  auStack_298 = ZEXT416(*(uint *)(lStack_310 + 0xc));
  pcStack_100 = pcVar14;
  pdb_140df3ac0(&lStack_1d0);
  pfVar9 = pfStack_1c8;
  pcStack_1e0 = pcVar19;
  pcStack_1d8 = pcVar20;
  if (uStack_1c0 == 0) {
    lVar6 = 0;
  }
  else {
    uStack_118 = (float *)(uStack_1c0 * 0xc);
    uVar25 = auStack_298._0_4_;
    pfVar10 = (float *)0x0;
    lVar6 = 0;
    pcVar19 = pcStack_100 + 4;
    do {
      uVar11 = *(undefined8 *)((longlong)pfVar9 + (longlong)pfVar10);
      uVar2 = *(undefined4 *)((longlong)(pfVar9 + 2) + (longlong)pfVar10);
      pdb_140df1c30(&fStack_178,pcVar19);
      if ((float)uStack_158 <= 0.0) {
        fStack_168 = fStack_168 - fStack_178;
        if (fStack_168 <= 0.0) {
          fStack_168 = (fVar28 - (float)uStack_158) - fStack_168;
          fVar26 = _DAT_142e36f50 / SQRT(fStack_168);
          fVar23 = fStack_168 * fVar26;
          fVar29 = fVar26 * (fStack_174 + fStack_16c);
          fVar30 = fVar26 * (fStack_170 + fStack_160);
          fVar26 = (fStack_164 - fStack_15c) * fVar26;
        }
        else {
          fStack_168 = (fVar28 - (float)uStack_158) + fStack_168;
          fVar26 = _DAT_142e36f50 / SQRT(fStack_168);
          fVar23 = (fStack_16c + fStack_174) * fVar26;
          fVar29 = fVar26 * fStack_168;
          fVar30 = fVar26 * (fStack_15c + fStack_164);
          fVar26 = (fStack_160 - fStack_170) * fVar26;
        }
      }
      else {
        fStack_178 = fStack_178 + fStack_168;
        if (fStack_178 <= 0.0) {
          fStack_178 = ((float)uStack_158 + fVar28) - fStack_178;
          fVar26 = _DAT_142e36f50 / SQRT(fStack_178);
          fVar23 = (fStack_170 + fStack_160) * fVar26;
          fVar29 = fVar26 * (fStack_164 + fStack_15c);
          fVar30 = fVar26 * fStack_178;
          fVar26 = (fStack_174 - fStack_16c) * fVar26;
        }
        else {
          fStack_178 = fStack_178 + (float)uStack_158 + fVar28;
          fVar26 = _DAT_142e36f50 / SQRT(fStack_178);
          fVar23 = (fStack_164 - fStack_15c) * fVar26;
          fVar29 = fVar26 * (fStack_160 - fStack_170);
          fVar30 = fVar26 * (fStack_174 - fStack_16c);
          fVar26 = fVar26 * fStack_178;
        }
      }
      fVar37 = fVar29 + fVar29;
      fVar39 = fVar30 + fVar30;
      fVar24 = fVar23 * (fVar23 + fVar23);
      fVar31 = (fVar23 + fVar23) * fVar26;
      fStack_16c = fVar23 * fVar39 - fVar37 * fVar26;
      fStack_15c = fVar39 * fVar29 + fVar31;
      fStack_168 = (fVar23 * fVar37 - fVar39 * fVar26) * (float)uVar25;
      fStack_164 = (fVar28 - (fVar30 * fVar39 + fVar24)) * (float)uVar25;
      fStack_160 = fStack_15c * (float)uVar25;
      fStack_15c = fStack_15c * (float)uVar25;
      fVar24 = fVar28 - (fVar29 * fVar37 + fVar24);
      fStack_178 = (fVar28 - (fVar29 * fVar37 + fVar30 * fVar39)) * _DAT_143309780;
      fStack_174 = (fVar23 * fVar37 + fVar39 * fVar26) * _UNK_143309784;
      fStack_170 = fStack_16c * _UNK_143309788;
      fStack_16c = fStack_16c * _UNK_14330978c;
      uStack_158 = (undefined *)
                   CONCAT44((fVar39 * fVar29 - fVar31) * _UNK_143309784,
                            (fVar23 * fVar39 + fVar37 * fVar26) * _DAT_143309780);
      uStack_150 = CONCAT44(fVar24 * _UNK_14330978c,fVar24 * _UNK_143309788);
      uStack_140 = (undefined *)CONCAT44(uVar2,uVar2);
      uStack_148 = uVar11;
      pdb_140e07fe0(&lStack_228,&fStack_178);
      pdb_140a77410(&fStack_178);
      uStack_268 = uStack_208;
      uStack_264 = uStack_204;
      uStack_260 = uStack_200;
      uStack_25c = uStack_1fc;
      uStack_278 = uStack_218;
      lStack_270 = lStack_210;
      lStack_288 = lStack_228;
      pfStack_280 = pfStack_220;
      fStack_258 = _DAT_143432ef0;
      uStack_254 = _UNK_143432ef4;
      uStack_250 = _UNK_143432ef8;
      uStack_24c = _UNK_143432efc;
      uStack_248 = (undefined4)uStack_138;
      uStack_244 = uStack_138._4_4_;
      uStack_240 = (undefined4)uStack_130;
      uStack_23c = uStack_130._4_4_;
      bVar3 = pdb_1428199b0(&uStack_388,&lStack_288);
      uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar3);
      lVar6 = lVar6 + 1;
      pfVar10 = pfVar10 + 3;
    } while (uStack_118 != pfVar10);
  }
  if (lStack_1d0 != 0) {
    pub_1406abac0((byte *)pfVar9,lStack_1d0 * 0xc,4);
  }
  pcVar20 = pcStack_1d8;
  pcVar19 = pcStack_1e0;
  if (lStack_1b8 != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_1ac,uStack_1b0),lStack_1b8 << 2,4);
  }
  pdb_140df3ac0(&lStack_1d0,pcStack_100 + 4,fStack_104);
  pfStack_2a0 = pfStack_1c8;
  if (uStack_1c0 != 0) {
    pfStack_1e8 = pfStack_1c8 + uStack_1c0 * 3;
    uStack_238 = (float *)CONCAT44(auStack_298._0_4_,auStack_298._0_4_);
    fStack_230 = (float)auStack_298._0_4_;
    fStack_22c = (float)auStack_298._0_4_;
    bVar22 = true;
    pfVar9 = pfStack_1c8;
    do {
      pfVar10 = pfVar9 + 3;
      if (bVar22) {
        if (pfVar10 == pfStack_1e8) {
          pfStack_2a8 = pfStack_1e8;
          break;
        }
        pfVar13 = pfVar9 + 6;
        pfStack_2a8 = pfVar9;
        pfVar9 = pfVar10;
        pfVar10 = pfVar13;
      }
      pfStack_180 = pfVar10;
      fVar23 = pfStack_2a8[2];
      fVar24 = (float)*(undefined8 *)pfStack_2a8;
      fVar31 = (float)((ulonglong)*(undefined8 *)pfStack_2a8 >> 0x20);
      uStack_118 = *(float **)pfVar9;
      pfStack_f8 = (float *)CONCAT44(pfStack_f8._4_4_,pfVar9[2]);
      fVar26 = fVar23 - pfVar9[2];
      uStack_110 = 0;
      fVar29 = fVar24 - SUB84(uStack_118,0);
      fVar30 = fVar31 - (float)((ulonglong)uStack_118 >> 0x20);
      pfStack_2a8 = pfVar9;
      fVar26 = (float)pub_142e32a40(SQRT(fVar26 * fVar26 + fVar30 * fVar30 + fVar29 * fVar29) /
                                    _DAT_143432f00);
      uVar15 = 0;
      if (0.0 <= fVar26) {
        uVar15 = (longlong)(fVar26 - _DAT_142e36f2c) & (longlong)fVar26 >> 0x3f | (longlong)fVar26;
      }
      if (_DAT_142e36f30 < fVar26) {
        uVar15 = 0xffffffffffffffff;
      }
      if (1 < uVar15) {
        pcVar14 = pcStack_100 + 4;
        lVar6 = lVar6 + uVar15 + -1;
        uVar21 = 1;
        fVar26 = fVar28;
        do {
          pdb_140df1c30(&fStack_178,pcVar14);
          fVar28 = _DAT_142e36f28;
          fVar30 = (float)uVar21 / (float)uVar15;
          fVar29 = fVar26 - fVar30;
          fVar37 = fVar30 * pfStack_f8._0_4_ + fVar23 * fVar29;
          if ((float)uStack_158 <= 0.0) {
            fStack_168 = fStack_168 - fStack_178;
            if (fStack_168 <= 0.0) {
              fStack_168 = (fVar26 - (float)uStack_158) - fStack_168;
              fVar39 = _DAT_142e36f50 / SQRT(fStack_168);
              fVar26 = fStack_168 * fVar39;
              fVar33 = fVar39 * (fStack_174 + fStack_16c);
              fVar35 = fVar39 * (fStack_170 + fStack_160);
              fVar39 = (fStack_164 - fStack_15c) * fVar39;
            }
            else {
              fStack_168 = (fVar26 - (float)uStack_158) + fStack_168;
              fVar39 = _DAT_142e36f50 / SQRT(fStack_168);
              fVar26 = (fStack_16c + fStack_174) * fVar39;
              fVar33 = fVar39 * fStack_168;
              fVar35 = fVar39 * (fStack_15c + fStack_164);
              fVar39 = (fStack_160 - fStack_170) * fVar39;
            }
          }
          else {
            fStack_178 = fStack_178 + fStack_168;
            if (fStack_178 <= 0.0) {
              fStack_178 = ((float)uStack_158 + fVar26) - fStack_178;
              fVar39 = _DAT_142e36f50 / SQRT(fStack_178);
              fVar26 = (fStack_170 + fStack_160) * fVar39;
              fVar33 = fVar39 * (fStack_164 + fStack_15c);
              fVar35 = fVar39 * fStack_178;
              fVar39 = (fStack_174 - fStack_16c) * fVar39;
            }
            else {
              fStack_178 = fStack_178 + (float)uStack_158 + fVar26;
              fVar39 = _DAT_142e36f50 / SQRT(fStack_178);
              fVar26 = (fStack_164 - fStack_15c) * fVar39;
              fVar33 = fVar39 * (fStack_160 - fStack_170);
              fVar35 = fVar39 * (fStack_174 - fStack_16c);
              fVar39 = fVar39 * fStack_178;
            }
          }
          fVar40 = fVar33 + fVar33;
          fVar41 = fVar35 + fVar35;
          fVar27 = fVar26 * (fVar26 + fVar26);
          fVar32 = (fVar26 + fVar26) * fVar39;
          fStack_16c = fVar26 * fVar41 - fVar40 * fVar39;
          fStack_15c = fVar41 * fVar33 + fVar32;
          fStack_168 = (fVar26 * fVar40 - fVar41 * fVar39) * (float)uStack_238;
          fStack_164 = (_DAT_142e36f28 - (fVar35 * fVar41 + fVar27)) * uStack_238._4_4_;
          fStack_160 = fStack_15c * fStack_230;
          fStack_15c = fStack_15c * fStack_22c;
          fVar27 = _DAT_142e36f28 - (fVar33 * fVar40 + fVar27);
          fStack_178 = (_DAT_142e36f28 - (fVar33 * fVar40 + fVar35 * fVar41)) * _DAT_143432f10;
          fStack_174 = (fVar26 * fVar40 + fVar41 * fVar39) * _UNK_143432f14;
          fStack_170 = fStack_16c * _UNK_143432f18;
          fStack_16c = fStack_16c * _UNK_143432f1c;
          uStack_158 = (undefined *)
                       CONCAT44((fVar41 * fVar33 - fVar32) * _UNK_143432f14,
                                (fVar26 * fVar41 + fVar40 * fVar39) * _DAT_143432f10);
          uStack_150 = CONCAT44(fVar27 * _UNK_143432f1c,fVar27 * _UNK_143432f18);
          uStack_148 = CONCAT44(fVar30 * uStack_118._4_4_ + fVar29 * fVar31,
                                fVar30 * (float)uStack_118 + fVar29 * fVar24);
          uStack_140 = (undefined *)CONCAT44(fVar37,fVar37);
          pdb_140e07fe0(&lStack_228,&fStack_178);
          pdb_140a77410(&fStack_178);
          uStack_268 = uStack_208;
          uStack_264 = uStack_204;
          uStack_260 = uStack_200;
          uStack_25c = uStack_1fc;
          uStack_278 = uStack_218;
          lStack_270 = lStack_210;
          lStack_288 = lStack_228;
          pfStack_280 = pfStack_220;
          fStack_258 = _DAT_143432ef0;
          uStack_254 = _UNK_143432ef4;
          uStack_250 = _UNK_143432ef8;
          uStack_24c = _UNK_143432efc;
          uStack_248 = (undefined4)uStack_138;
          uStack_244 = uStack_138._4_4_;
          uStack_240 = (undefined4)uStack_130;
          uStack_23c = uStack_130._4_4_;
          bVar3 = pdb_1428199b0(&uStack_388,&lStack_288);
          uVar21 = uVar21 + 1;
          uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar3);
          pcVar19 = pcStack_1e0;
          pcVar20 = pcStack_1d8;
          fVar26 = fVar28;
        } while (uVar15 != uVar21);
      }
      bVar22 = false;
      pfVar9 = pfStack_180;
    } while (pfStack_180 != pfStack_1e8);
  }
  if (lStack_1d0 != 0) {
    pub_1406abac0((byte *)pfStack_2a0,lStack_1d0 * 0xc,4);
  }
  if (lStack_1b8 != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_1ac,uStack_1b0),lStack_1b8 << 2,4);
  }
  pdb_140c012e0(&lStack_3b8,auStack_298._0_4_);
  uStack_238 = pfStack_3b0 + uStack_3a8;
  afStack_2b0[0] = 0.0;
  afStack_2b0[1] = (float)auStack_298._0_4_;
  pfStack_180 = pfStack_3b0;
  pfStack_f8 = (float *)0x0;
  pfVar9 = pfStack_3b0;
LAB_141f4fdf1:
  if ((pfVar9 == (float *)0x0) || (pfVar9 == uStack_238)) {
    if (pfStack_f8 == (float *)0x8) goto LAB_141f503d0;
    pfVar10 = (float *)((longlong)afStack_2b0 + (longlong)pfStack_f8);
    pfStack_f8 = pfStack_f8 + 1;
    pfVar9 = (float *)0x0;
  }
  else {
    pfVar10 = pfVar9;
    pfVar9 = pfVar9 + 1;
  }
  fVar23 = *pfVar10;
  pdb_140df3ac0(&lStack_1d0,pcStack_100 + 4,0);
  uVar15 = uStack_1c0;
  uStack_118 = pfStack_1c8;
  if ((uStack_1c0 != 0) && (uStack_1c0 != 1)) {
    fVar26 = pfStack_1c8[2];
    fVar29 = pfStack_1c8[5];
    fVar37 = (float)*(undefined8 *)pfStack_1c8;
    fVar39 = (float)((ulonglong)*(undefined8 *)pfStack_1c8 >> 0x20);
    fVar33 = (float)*(undefined8 *)(pfStack_1c8 + 3);
    fVar35 = (float)((ulonglong)*(undefined8 *)(pfStack_1c8 + 3) >> 0x20);
    fVar27 = (fVar37 + fVar33) * _DAT_142e36f60;
    fVar32 = (fVar39 + fVar35) * _UNK_142e36f64;
    fVar42 = (fVar26 + fVar29) * _DAT_142e36f50;
    fVar30 = fVar29 - fVar26;
    fVar24 = fVar33 - fVar37;
    fVar31 = fVar28 / SQRT(fVar30 * fVar30 + fVar24 * fVar24);
    lStack_228 = CONCAT44(fVar31 * fVar30,fVar31 * fVar24);
    pdb_140df4540(&lStack_288,&lStack_228,0);
    pdb_140de8fd0(&fStack_178,&lStack_288);
    fVar23 = fVar23 + fStack_104;
    fVar41 = fVar23 * 0.0;
    fVar42 = fVar42 + fVar41;
    fVar39 = fVar39 - fVar35;
    fStack_190 = SQRT((fVar26 - fVar29) * (fVar26 - fVar29) +
                      fVar39 * fVar39 + (fVar37 - fVar33) * (fVar37 - fVar33));
    fStack_198 = (float)_DAT_1430151c0;
    fStack_194 = (float)((ulonglong)_DAT_1430151c0 >> 0x20);
    fVar40 = fStack_170 + fStack_170;
    fVar29 = fStack_170 * fVar40;
    fVar24 = fStack_174 + fStack_174;
    fVar26 = fVar24 * fStack_178;
    fVar39 = fVar40 * fStack_178;
    fVar35 = fVar40 * fStack_174;
    fVar37 = fStack_178 * (fStack_178 + fStack_178);
    fVar30 = fVar24 * fStack_16c;
    fVar31 = (fStack_178 + fStack_178) * fStack_16c;
    fVar40 = fStack_16c * fVar40;
    fStack_16c = fVar39 - fVar30;
    fStack_15c = fVar31 + fVar35;
    fVar33 = fVar28 - (fVar37 + fStack_174 * fVar24);
    fStack_178 = fStack_198 * (fVar28 - (fStack_174 * fVar24 + fVar29));
    fStack_174 = fStack_198 * (fVar26 + fVar40);
    fStack_170 = fStack_198 * fStack_16c;
    fStack_16c = fStack_198 * fStack_16c;
    fStack_168 = fStack_194 * (fVar26 - fVar40);
    fStack_164 = fStack_194 * (fVar28 - (fVar29 + fVar37));
    fStack_160 = fStack_194 * fStack_15c;
    fStack_15c = fStack_194 * fStack_15c;
    uStack_158 = (undefined *)
                 CONCAT44(fStack_190 * (fVar35 - fVar31),fStack_190 * (fVar30 + fVar39));
    uStack_150 = CONCAT44(fStack_190 * fVar33,fStack_190 * fVar33);
    uStack_148 = CONCAT44(fVar32 + fVar23,fVar27 + fVar41);
    uStack_140 = (undefined *)CONCAT44(fVar42,fVar42);
    pdb_140e07fe0(&lStack_228,&fStack_178);
    pdb_140a77410(&fStack_178);
    uStack_268 = uStack_208;
    uStack_264 = uStack_204;
    uStack_260 = uStack_200;
    uStack_25c = uStack_1fc;
    uStack_278 = uStack_218;
    lStack_270 = lStack_210;
    lStack_288 = lStack_228;
    pfStack_280 = pfStack_220;
    fStack_258 = _DAT_143432ef0;
    uStack_254 = _UNK_143432ef4;
    uStack_250 = _UNK_143432ef8;
    uStack_24c = _UNK_143432efc;
    uStack_248 = (undefined4)uStack_138;
    uStack_244 = uStack_138._4_4_;
    uStack_240 = (undefined4)uStack_130;
    uStack_23c = uStack_130._4_4_;
    bVar3 = pdb_1428199b0(&uStack_388,&lStack_288);
    uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar3);
    lVar6 = lVar6 + 1;
    if (uVar15 != 2) {
      pfVar10 = uStack_118 + uVar15 * 3;
      pfVar13 = uStack_118 + 3;
      pfVar16 = uStack_118 + 6;
      do {
        fVar26 = pfVar13[2];
        fVar29 = pfVar16[2];
        fVar31 = (float)*(undefined8 *)pfVar13;
        fVar37 = (float)((ulonglong)*(undefined8 *)pfVar13 >> 0x20);
        fVar39 = (float)*(undefined8 *)pfVar16;
        fVar27 = (float)((ulonglong)*(undefined8 *)pfVar16 >> 0x20);
        fVar33 = (fVar31 + fVar39) * _DAT_142e36f60;
        fVar35 = (fVar37 + fVar27) * _UNK_142e36f64;
        fVar42 = (fVar26 + fVar29) * _DAT_142e36f50;
        fVar30 = fVar29 - fVar26;
        fVar24 = fVar39 - fVar31;
        fVar28 = fVar28 / SQRT(fVar30 * fVar30 + fVar24 * fVar24);
        lStack_228 = CONCAT44(fVar28 * fVar30,fVar28 * fVar24);
        pdb_140df4540(&lStack_288,&lStack_228,0);
        pdb_140de8fd0(&fStack_178,&lStack_288);
        fVar28 = _DAT_142e36f28;
        fVar42 = fVar42 + fVar41;
        fVar37 = fVar37 - fVar27;
        fStack_190 = SQRT((fVar26 - fVar29) * (fVar26 - fVar29) +
                          fVar37 * fVar37 + (fVar31 - fVar39) * (fVar31 - fVar39));
        fStack_198 = (float)_DAT_1430151c0;
        fStack_194 = (float)((ulonglong)_DAT_1430151c0 >> 0x20);
        fVar40 = fStack_170 + fStack_170;
        fVar26 = fStack_170 * fVar40;
        fVar31 = fStack_174 + fStack_174;
        fVar30 = fVar31 * fStack_178;
        fVar27 = fVar40 * fStack_178;
        fVar32 = fVar40 * fStack_174;
        fVar39 = fStack_178 * (fStack_178 + fStack_178);
        fVar24 = fVar31 * fStack_16c;
        fVar37 = (fStack_178 + fStack_178) * fStack_16c;
        fVar40 = fStack_16c * fVar40;
        fStack_16c = fVar27 - fVar24;
        fStack_15c = fVar37 + fVar32;
        fVar29 = _DAT_142e36f28 - (fVar39 + fStack_174 * fVar31);
        fStack_178 = fStack_198 * (_DAT_142e36f28 - (fStack_174 * fVar31 + fVar26));
        fStack_174 = fStack_198 * (fVar30 + fVar40);
        fStack_170 = fStack_198 * fStack_16c;
        fStack_16c = fStack_198 * fStack_16c;
        fStack_168 = fStack_194 * (fVar30 - fVar40);
        fStack_164 = fStack_194 * (_DAT_142e36f28 - (fVar26 + fVar39));
        fStack_160 = fStack_194 * fStack_15c;
        fStack_15c = fStack_194 * fStack_15c;
        uStack_158 = (undefined *)
                     CONCAT44(fStack_190 * (fVar32 - fVar37),fStack_190 * (fVar24 + fVar27));
        uStack_150 = CONCAT44(fStack_190 * fVar29,fStack_190 * fVar29);
        uStack_148 = CONCAT44(fVar35 + fVar23,fVar33 + fVar41);
        uStack_140 = (undefined *)CONCAT44(fVar42,fVar42);
        pdb_140e07fe0(&lStack_228,&fStack_178);
        pdb_140a77410(&fStack_178);
        uStack_268 = uStack_208;
        uStack_264 = uStack_204;
        uStack_260 = uStack_200;
        uStack_25c = uStack_1fc;
        uStack_278 = uStack_218;
        lStack_270 = lStack_210;
        lStack_288 = lStack_228;
        pfStack_280 = pfStack_220;
        fStack_258 = _DAT_143432ef0;
        uStack_254 = _UNK_143432ef4;
        uStack_250 = _UNK_143432ef8;
        uStack_24c = _UNK_143432efc;
        uStack_248 = (undefined4)uStack_138;
        uStack_244 = uStack_138._4_4_;
        uStack_240 = (undefined4)uStack_130;
        uStack_23c = uStack_130._4_4_;
        bVar3 = pdb_1428199b0(&uStack_388,&lStack_288);
        pfVar17 = pfVar16 + 3;
        uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar3);
        lVar6 = lVar6 + 1;
        pfVar13 = pfVar16;
        pfVar16 = pfVar17;
      } while (pfVar17 != pfVar10);
    }
  }
  if (lStack_1d0 != 0) {
    pub_1406abac0((byte *)uStack_118,lStack_1d0 * 0xc,4);
  }
  pcVar19 = pcStack_1e0;
  pcVar20 = pcStack_1d8;
  if (lStack_1b8 != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_1ac,uStack_1b0),lStack_1b8 << 2,4);
    pcVar19 = pcStack_1e0;
    pcVar20 = pcStack_1d8;
  }
  goto LAB_141f4fdf1;
LAB_141f503d0:
  if (lStack_3b8 != 0) {
    pub_1406abac0((byte *)pfStack_180,lStack_3b8 << 2,4);
  }
  if (pcStack_100[0x1c] == '\0') {
    fVar29 = (float)pdb_140b76fd0();
    fVar28 = *(float *)(pcStack_100 + 0x14);
    fVar23 = *(float *)(pcStack_100 + 0x18);
    fVar26 = fVar23;
    uVar25 = pdb_140b770a0(fVar28);
    uVar11 = pdb_140ac60c0(uVar25,fVar28 < fVar23,fVar28,fVar23);
    fStack_178 = (float)uVar11;
    fStack_174 = (float)((ulonglong)uVar11 >> 0x20);
    uStack_188 = pdb_140315970(&fStack_178);
    fStack_198 = *pfStack_2f8;
    fStack_194 = pfStack_2f8[1];
    fStack_190 = pfStack_2f8[2];
    fStack_18c = pfStack_2f8[3];
    pdb_140df37e0(&lStack_228);
    uVar15 = uStack_218;
    pfVar9 = pfStack_220;
    pdb_140df37e0(&lStack_1d0,&fStack_198);
    if (uStack_1c0 < uVar15) {
      uVar15 = uStack_1c0;
    }
    fVar28 = fStack_104 + (float)auStack_298._0_4_;
    fVar29 = fVar29 + fVar28;
    uStack_118 = pfVar9;
    pfVar10 = pfStack_1c8;
    if (uVar15 != 0) {
      lVar6 = lVar6 + uVar15;
      pfStack_f8 = pfStack_1c8;
      pfVar13 = pfStack_1c8;
      do {
        pdb_140df4540(&fStack_2c0,pfVar9,fVar28);
        pdb_140df4540(&fStack_2d0,pfVar13,fVar29);
        fVar37 = fStack_2b8;
        fVar31 = fStack_2bc;
        fVar24 = fStack_2c0;
        fVar30 = fStack_2c8;
        fVar26 = fStack_2cc;
        fVar23 = fStack_2d0;
        fVar39 = fStack_2c8 - fStack_2b8;
        fVar33 = fStack_2cc - fStack_2bc;
        fVar27 = fStack_2d0 - fStack_2c0;
        fVar35 = _DAT_142e36f28 / SQRT(fVar33 * fVar33 + fVar27 * fVar27 + fVar39 * fVar39);
        lStack_288 = CONCAT44(fVar35 * fVar33,fVar35 * fVar27);
        pfStack_280 = (float *)CONCAT44(pfStack_280._4_4_,fVar35 * fVar39);
        pdb_140de8fd0(&fStack_178,&lStack_288);
        fVar35 = fVar31 - fVar26;
        fVar33 = fVar37 - fVar30;
        fVar39 = fVar24 - fVar23;
        fVar39 = SQRT(fVar33 * fVar33 + fVar35 * fVar35 + fVar39 * fVar39);
        fVar41 = (fVar30 + fVar37) * _UNK_143432f28;
        fVar42 = (_DAT_142e377f0 + _DAT_142e36f28) * _UNK_143432f2c;
        fVar38 = fStack_170 + fStack_170;
        fVar30 = fStack_170 * fVar38;
        fVar27 = fStack_174 + fStack_174;
        fVar33 = fVar27 * fStack_178;
        fVar34 = fVar38 * fStack_178;
        fVar36 = fVar38 * fStack_174;
        fVar40 = fStack_178 * (fStack_178 + fStack_178);
        fVar35 = fVar27 * fStack_16c;
        fVar32 = (fStack_178 + fStack_178) * fStack_16c;
        fVar38 = fStack_16c * fVar38;
        fStack_16c = fVar34 - fVar35;
        fStack_15c = fVar32 + fVar36;
        fVar37 = _DAT_142e36f28 - (fVar40 + fStack_174 * fVar27);
        fStack_178 = fVar42 * (_DAT_142e36f28 - (fStack_174 * fVar27 + fVar30));
        fStack_174 = fVar42 * (fVar33 + fVar38);
        fStack_170 = fVar42 * fStack_16c;
        fStack_16c = fVar42 * fStack_16c;
        fStack_168 = (fVar33 - fVar38) * _DAT_143309780;
        fStack_164 = (_DAT_142e36f28 - (fVar30 + fVar40)) * _UNK_143309784;
        fStack_160 = fStack_15c * _UNK_143309788;
        fStack_15c = fStack_15c * _UNK_14330978c;
        uStack_158 = (undefined *)CONCAT44(fVar39 * (fVar36 - fVar32),fVar39 * (fVar35 + fVar34));
        uStack_150 = CONCAT44(fVar39 * fVar37,fVar39 * fVar37);
        uStack_148 = CONCAT44((fVar26 + fVar31) * _UNK_143432f24,(fVar23 + fVar24) * _DAT_143432f20)
        ;
        uStack_140 = (undefined *)CONCAT44(fVar41,fVar41);
        pdb_140e07fe0(&lStack_3b8,&fStack_178);
        pdb_140a77410(&fStack_178);
        uStack_268 = uStack_398;
        uStack_264 = uStack_394;
        uStack_260 = uStack_390;
        uStack_25c = uStack_38c;
        uStack_278 = uStack_3a8;
        lStack_270 = lStack_3a0;
        lStack_288 = lStack_3b8;
        pfStack_280 = pfStack_3b0;
        fStack_258 = _DAT_143432ef0;
        uStack_254 = _UNK_143432ef4;
        uStack_250 = _UNK_143432ef8;
        uStack_24c = _UNK_143432efc;
        uStack_248 = (undefined4)uStack_138;
        uStack_244 = uStack_138._4_4_;
        uStack_240 = (undefined4)uStack_130;
        uStack_23c = uStack_130._4_4_;
        fVar26 = _DAT_143432ef0;
        bVar3 = pdb_1428199b0(&uStack_388,&lStack_288);
        uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar3);
        pfVar13 = pfVar13 + 2;
        pfVar9 = pfVar9 + 2;
        uVar15 = uVar15 - 1;
        pfVar10 = pfStack_f8;
      } while (uVar15 != 0);
    }
    if (lStack_1d0 != 0) {
      pub_1406abac0((byte *)pfVar10,lStack_1d0 << 3,4);
    }
    pcVar20 = pcStack_1d8;
    pcVar19 = pcStack_1e0;
    fVar28 = _DAT_142e36f28;
    if (lStack_1b8 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_1ac,uStack_1b0),lStack_1b8 << 2,4);
    }
    if (lStack_228 != 0) {
      pub_1406abac0((byte *)uStack_118,lStack_228 << 3,4);
    }
    if (lStack_210 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_204,uStack_208),lStack_210 << 2,4);
    }
    fVar23 = (float)pdb_140df3ee0(&fStack_198);
    if (_DAT_142e36f50 < fVar23) {
      bVar22 = uStack_188._4_4_ <= (float)uStack_188;
      fStack_178 = (float)pdb_140df3e10(&fStack_198,bVar22);
      fStack_174 = fVar26;
      pdb_140df4540(&fStack_2e0,&fStack_178,fVar29);
      fStack_178 = (float)pdb_140df3e10(&fStack_198,bVar22 + '\x01');
      fStack_174 = fVar26;
      pdb_140df4540(&fStack_2f0,&fStack_178,fVar29);
      fVar31 = fStack_2d8;
      fVar24 = fStack_2dc;
      fVar30 = fStack_2e0;
      fVar29 = fStack_2e8;
      fVar26 = fStack_2ec;
      fVar23 = fStack_2f0;
      fVar37 = fStack_2e8 - fStack_2d8;
      fVar39 = fStack_2ec - fStack_2dc;
      fVar35 = fStack_2f0 - fStack_2e0;
      fVar33 = fVar28 / SQRT(fVar39 * fVar39 + fVar35 * fVar35 + fVar37 * fVar37);
      lStack_288 = CONCAT44(fVar33 * fVar39,fVar33 * fVar35);
      pfStack_280 = (float *)CONCAT44(pfStack_280._4_4_,fVar33 * fVar37);
      pdb_140de8fd0(&fStack_178,&lStack_288);
      fVar33 = fVar24 - fVar26;
      fVar39 = fVar31 - fVar29;
      fVar37 = fVar30 - fVar23;
      fVar37 = SQRT(fVar39 * fVar39 + fVar33 * fVar33 + fVar37 * fVar37);
      fVar40 = (fVar29 + fVar31) * _UNK_143432f28;
      fVar41 = (_DAT_142e377f0 + fVar28) * _UNK_143432f2c;
      fVar36 = fStack_170 + fStack_170;
      fVar29 = fStack_170 * fVar36;
      fVar35 = fStack_174 + fStack_174;
      fVar39 = fVar35 * fStack_178;
      fVar42 = fVar36 * fStack_178;
      fVar34 = fVar36 * fStack_174;
      fVar32 = fStack_178 * (fStack_178 + fStack_178);
      fVar33 = fVar35 * fStack_16c;
      fVar27 = (fStack_178 + fStack_178) * fStack_16c;
      fVar36 = fStack_16c * fVar36;
      fStack_16c = fVar42 - fVar33;
      fStack_15c = fVar27 + fVar34;
      fVar31 = fVar28 - (fVar32 + fStack_174 * fVar35);
      fStack_178 = fVar41 * (fVar28 - (fStack_174 * fVar35 + fVar29));
      fStack_174 = fVar41 * (fVar39 + fVar36);
      fStack_170 = fVar41 * fStack_16c;
      fStack_16c = fVar41 * fStack_16c;
      fStack_168 = (fVar39 - fVar36) * _DAT_143309780;
      fStack_164 = (fVar28 - (fVar29 + fVar32)) * _UNK_143309784;
      fStack_160 = fStack_15c * _UNK_143309788;
      fStack_15c = fStack_15c * _UNK_14330978c;
      uStack_158 = (undefined *)CONCAT44(fVar37 * (fVar34 - fVar27),fVar37 * (fVar33 + fVar42));
      uStack_150 = CONCAT44(fVar37 * fVar31,fVar37 * fVar31);
      uStack_148 = CONCAT44((fVar26 + fVar24) * _UNK_143432f24,(fVar23 + fVar30) * _DAT_143432f20);
      uStack_140 = (undefined *)CONCAT44(fVar40,fVar40);
      pdb_140e07fe0(&lStack_1d0,&fStack_178);
      pdb_140a77410(&fStack_178);
      uStack_268 = uStack_1b0;
      uStack_264 = uStack_1ac;
      uStack_260 = uStack_1a8;
      uStack_25c = uStack_1a4;
      uStack_278 = uStack_1c0;
      lStack_270 = lStack_1b8;
      lStack_288 = lStack_1d0;
      pfStack_280 = pfStack_1c8;
      fStack_258 = _DAT_143432ef0;
      uStack_254 = _UNK_143432ef4;
      uStack_250 = _UNK_143432ef8;
      uStack_24c = _UNK_143432efc;
      uStack_248 = (undefined4)uStack_138;
      uStack_244 = uStack_138._4_4_;
      uStack_240 = (undefined4)uStack_130;
      uStack_23c = uStack_130._4_4_;
      bVar3 = pdb_1428199b0(&uStack_388);
      uVar18 = (ulonglong)(byte)((byte)uVar18 | bVar3);
      lVar6 = lVar6 + 1;
    }
  }
  *puStack_300 = uStack_1ec;
  *(longlong *)(lStack_308 + 8) = lVar6;
  goto LAB_141f4f389;
}

