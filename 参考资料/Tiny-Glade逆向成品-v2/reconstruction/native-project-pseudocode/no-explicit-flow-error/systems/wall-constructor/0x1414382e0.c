// VA 0x1414382e0, PDB extent 7191 bytes
// system_wall_constructor::utils::wall_skirts::add_skirts<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_skirts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::wall_skirts::add_skirts<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_skirts.rs
   Extent: 7191 */

void pdb_1414382e0(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  bool bVar11;
  char cVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  longlong *plStack_380;
  longlong lStack_378;
  longlong lStack_370;
  longlong lStack_368;
  longlong lStack_360;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined5 uStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulonglong uStack_300;
  float *pfStack_2f8;
  float *pfStack_2f0;
  float *pfStack_2e8;
  float *pfStack_2e0;
  longlong lStack_2d8;
  float *pfStack_2d0;
  float *pfStack_2c8;
  float *pfStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined5 uStack_2a0;
  undefined3 uStack_29b;
  undefined5 uStack_298;
  byte bStack_293;
  undefined2 uStack_292;
  longlong lStack_288;
  longlong lStack_280;
  float *pfStack_278;
  longlong lStack_270;
  ulonglong uStack_268;
  float *pfStack_260;
  longlong lStack_258;
  longlong lStack_250;
  float fStack_248;
  float fStack_244;
  longlong lStack_240;
  float *pfStack_238;
  longlong lStack_230;
  longlong *plStack_228;
  ulonglong uStack_220;
  longlong lStack_218;
  longlong lStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong *plStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  undefined4 uStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a8;
  undefined1 uStack_1a0;
  float *pfStack_198;
  longlong lStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  float fStack_10c;
  float *pfStack_108;
  float fStack_fc;
  float fStack_f8;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lStack_118 = param_3;
  fVar23 = (float)pdb_140930390();
  pdb_14092f8d0(&fStack_208,param_1);
  if (fStack_208 == 1.4013e-45) {
    uStack_178 = CONCAT44(uStack_1f0,uStack_1f4);
    fStack_188 = fStack_204;
    fStack_184 = fStack_200;
    fStack_180 = fStack_1fc;
    uStack_17c = uStack_1f8;
    pdb_14007ee60();
    pfStack_108 = (float *)pub_1406abab0(0x20,4);
    if (pfStack_108 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x20);
    }
    fVar24 = (float)pdb_140df0700(&fStack_188,0);
    fVar25 = (float)pdb_140df0700(&fStack_188,1);
    fVar26 = (float)pdb_140df0700(&fStack_188,1);
    fVar27 = (float)pdb_140df0700(&fStack_188,2);
    fVar28 = (float)pdb_140df0700(&fStack_188,2);
    fVar29 = (float)pdb_140df0700(&fStack_188,3);
    fVar30 = (float)pdb_140df0700(&fStack_188,3);
    lStack_190 = 4;
    fVar31 = (float)pdb_140df0700(&fStack_188,4);
    *pfStack_108 = fVar24;
    pfStack_108[1] = fVar25;
    pfStack_108[2] = fVar26;
    pfStack_108[3] = fVar27;
    pfStack_108[4] = fVar28;
    pfStack_108[5] = fVar29;
    pfStack_108[6] = fVar30;
    pfStack_108[7] = fVar31;
  }
  else {
    pdb_14007ee60();
    pfStack_108 = (float *)pub_1406abab0(8,4);
    if (pfStack_108 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,8);
    }
    *(ulonglong *)pfStack_108 = CONCAT44(_UNK_142e378e4,_DAT_142e378e0);
    lStack_190 = 1;
  }
  pdb_140c012e0(&fStack_208);
  fVar24 = _DAT_142e36f28;
  lStack_288 = CONCAT44(fStack_204,fStack_208);
  pfStack_278 = (float *)CONCAT44(fStack_1fc,fStack_200);
  plStack_228 = (longlong *)*param_2;
  fStack_fc = *(float *)(lStack_118 + 0x30);
  pfStack_2f8 = pfStack_108 + lStack_190 * 2;
  lStack_218 = *(longlong *)(lStack_118 + 8);
  lStack_2d8 = lStack_218 + *(longlong *)(lStack_118 + 0x10) * 8;
  lVar20 = *(longlong *)(lStack_118 + 0x10);
  pfVar13 = pfStack_278 + CONCAT44(uStack_1f4,uStack_1f8);
  pfVar15 = pfStack_278;
  fVar26 = _DAT_142e4bfe4;
  fVar27 = fVar23 + fStack_fc;
  fVar28 = _DAT_142e36f2c;
  fVar29 = _DAT_142e36f30;
  fVar25 = _DAT_142e3c634;
  fVar23 = _DAT_142e3c630;
  fVar30 = _DAT_14303e470;
  do {
    do {
      if (pfVar15 == pfVar13) {
        if (lStack_288 != 0) {
          pub_1406abac0((byte *)pfStack_278,lStack_288 << 2,4);
        }
        pub_1406abac0((byte *)pfStack_108,(ulonglong)(uint)((int)lStack_190 << 3),4);
        return;
      }
      fVar31 = *pfVar15;
      pfVar15 = pfVar15 + 1;
    } while (fVar31 < *(float *)(param_1 + 0x284) + fVar30);
    fVar26 = (fVar31 + fVar27) * fVar26;
    uStack_300 = (longlong)(fVar26 - fVar28) & (longlong)fVar26 >> 0x3f | (longlong)fVar26;
    if (fVar26 < 0.0) {
      uStack_300 = 0;
    }
    if (fVar29 < fVar26) {
      uStack_300 = 0xffffffffffffffff;
    }
    pfStack_2d0 = pfVar13;
    pfStack_2c8 = pfVar15;
    lStack_270 = lVar20;
    fStack_10c = fVar31;
    pdb_14007ee60();
    pfVar13 = (float *)pub_1406abab0(4,4);
    if (pfVar13 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,4);
    }
    *pfVar13 = 0.0;
    lStack_240 = 1;
    lStack_230 = 1;
    lVar20 = 1;
    lStack_280 = param_4;
    pfStack_238 = pfVar13;
    lStack_210 = param_1;
    for (pfVar15 = pfStack_108; pfVar15 != pfStack_2f8; pfVar15 = pfVar15 + 2) {
      fVar30 = (pfVar15[1] - *pfVar15) * fStack_fc;
      fVar26 = (float)pub_142e329c0(fVar30 / fVar25);
      fStack_208 = 0.0;
      fStack_204 = 0.0;
      uVar17 = 0;
      if (0.0 <= fVar26) {
        uVar17 = (longlong)(fVar26 - fVar28) & (longlong)fVar26 >> 0x3f | (longlong)fVar26;
      }
      fStack_200 = 5.60519e-45;
      fStack_1fc = 0.0;
      if (fVar29 < fVar26) {
        uVar17 = 0xffffffffffffffff;
      }
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      pdb_140de8bb0(uVar17 + 1,fVar23 / fVar30,&uStack_300,&fStack_208,&UNK_143309d60);
      uVar17 = CONCAT44(uStack_1f4,uStack_1f8);
      uVar21 = (uVar17 - 1) + (ulonglong)(uVar17 == 0);
      lVar16 = CONCAT44(fStack_1fc,fStack_200);
      if ((ulonglong)(lStack_240 - lVar20) < uVar21) {
        pdb_142d7f1b0(&lStack_240,lVar20,uVar21,4,4);
        pfVar13 = pfStack_238;
        lVar20 = lStack_230;
      }
      if (1 < uVar17) {
        uVar21 = 0;
        do {
          fVar26 = *(float *)(lVar16 + 4 + uVar21 * 4);
          if ((fVar26 < 0.0) || (fVar24 < fVar26)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307af8,0x2a,&UNK_143307b48);
          }
          fVar26 = (float)pdb_140de9fd0(*pfVar15);
          pfVar13[lVar20] = fVar26;
          lVar20 = lVar20 + 1;
          uVar21 = uVar21 + 1;
        } while (uVar21 != (uVar17 - 1 & 0x3fffffffffffffff));
      }
      lStack_230 = lVar20;
      if (CONCAT44(fStack_204,fStack_208) != 0) {
        pub_1406abac0((byte *)CONCAT44(fStack_1fc,fStack_200),CONCAT44(fStack_204,fStack_208) << 2,4
                     );
      }
    }
    if (lStack_270 == 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143308560);
    }
    if (lStack_270 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
    }
    lStack_140 = lStack_218;
    lStack_138 = lStack_270;
    lStack_130 = lStack_118;
    plStack_1e0 = &lStack_130;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_1b8 = 0;
    fStack_1b4 = 0.0;
    fStack_1b0 = 0.0;
    uStack_1ac = 0;
    fStack_208 = 0.0;
    fStack_204 = 0.0;
    lStack_1d8 = lStack_218;
    lStack_1d0 = lStack_2d8;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    puStack_1a8 = &uStack_f2;
    uStack_1a0 = 0;
    fStack_244 = fVar27;
    pdb_141466b40(&fStack_188,&fStack_208);
    param_1 = lStack_210;
    param_4 = lStack_280;
    if (fStack_188 == 1.4013e-45) {
      fVar25 = (float)((uint)(fStack_168 - (float)uStack_178) & _DAT_142e377e0);
      fVar23 = fVar25;
      if (NAN(fStack_168 - (float)uStack_178)) {
        do {
          uStack_120 = CONCAT44(0x3f800000,fStack_180);
          pdb_141466b40(&fStack_188,&fStack_208);
          if (fStack_188 != 1.4013e-45) goto LAB_14143898e;
          fVar25 = (float)((uint)(fStack_168 - (float)uStack_178) & _DAT_142e377e0);
          fVar23 = fVar23 + fVar25;
        } while (fVar23 < 0.0);
      }
      uStack_120 = CONCAT44(fVar24 - fVar23 / fVar25,fStack_180);
    }
LAB_14143898e:
    uVar3 = *(undefined8 *)(param_6 + (uStack_120 & 0xffffffff) * 4);
    uVar4 = *(undefined8 *)(param_4 + (uStack_120 & 0xffffffff) * 4);
    fVar26 = (float)((ulonglong)uVar4 >> 0x20);
    pfStack_2e0 = pfStack_238 + lVar20;
    bVar11 = true;
    pfStack_2c0 = pfStack_238;
    pfVar13 = pfStack_238;
    pfVar15 = pfStack_2e0;
    fVar23 = (float)((ulonglong)uVar3 >> 0x20) * uStack_120._4_4_ +
             (float)uVar3 * (fVar24 - uStack_120._4_4_);
    fVar25 = fVar26 * uStack_120._4_4_ + (float)uVar4 * (fVar24 - uStack_120._4_4_);
    fVar26 = fVar26 * 0.0 + 0.0;
LAB_1414389f0:
    while (fVar29 = fVar26, fVar28 = fVar25, fVar27 = fVar23, fVar25 = _DAT_142e3c634,
          fVar23 = _DAT_142e3c630, pfVar13 != pfVar15) {
      pfVar10 = pfVar13 + 1;
      pfVar14 = pfStack_2f0;
      pfVar18 = pfVar13;
      if (bVar11) {
        if (pfVar10 == pfVar15) break;
        pfVar14 = pfVar13;
        pfVar18 = pfVar10;
        pfVar10 = pfVar13 + 2;
      }
      pfVar13 = pfVar10;
      fStack_148 = *pfVar14;
      fStack_144 = *pfVar18;
      fVar31 = fStack_144 - fStack_148;
      fVar30 = fVar31 * _DAT_142e36f50;
      if (fVar30 < 0.0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143308450,0x21,&UNK_1433084c8);
      }
      fVar23 = uStack_120._4_4_;
      uStack_1c8 = uStack_120 & 0xffffffff;
      lStack_1d0 = lStack_140 + lStack_138 * 8;
      uStack_1b8 = 0;
      fStack_1b4 = 0.0;
      fStack_1b0 = 0.0;
      uStack_1ac = 0;
      fStack_208 = 0.0;
      fStack_204 = 0.0;
      plStack_1e0 = &lStack_130;
      lStack_1d8 = lStack_140;
      puStack_1a8 = &uStack_f2;
      uStack_1a0 = 0;
      pfStack_2f0 = pfVar18;
      uStack_1c0 = uStack_1c8;
      pdb_141466b40(&fStack_188,&fStack_208);
      if (fStack_188 == 1.4013e-45) {
        fVar25 = (float)((uint)(fStack_168 - (float)uStack_178) & _DAT_142e377e0);
        for (fVar23 = (fVar24 - fVar23) * fVar25 - fVar30; fVar23 < 0.0; fVar23 = fVar23 + fVar25) {
          uStack_120 = CONCAT44(0x3f800000,fStack_180);
          pdb_141466b40(&fStack_188,&fStack_208);
          if (fStack_188 != 1.4013e-45) goto LAB_141438ba9;
          fVar25 = (float)((uint)(fStack_168 - (float)uStack_178) & _DAT_142e377e0);
        }
        uStack_120 = CONCAT44(fVar24 - fVar23 / fVar25,fStack_180);
      }
LAB_141438ba9:
      uStack_1c8 = uStack_120 & 0xffffffff;
      fVar38 = fVar24 - uStack_120._4_4_;
      fVar35 = *(float *)(param_6 + uStack_1c8 * 4);
      fVar37 = *(float *)(param_6 + 4 + uStack_1c8 * 4) * uStack_120._4_4_;
      fStack_f8 = *(float *)(param_4 + uStack_1c8 * 4) * fVar38;
      fVar23 = uStack_120._4_4_ * *(float *)(param_4 + 4 + uStack_1c8 * 4);
      lStack_1d0 = lStack_140 + lStack_138 * 8;
      uStack_1b8 = 0;
      fStack_1b4 = 0.0;
      fStack_1b0 = 0.0;
      uStack_1ac = 0;
      fStack_208 = 0.0;
      fStack_204 = 0.0;
      plStack_1e0 = &lStack_130;
      lStack_1d8 = lStack_140;
      puStack_1a8 = &uStack_f2;
      uStack_1a0 = 0;
      uStack_1c0 = uStack_1c8;
      pdb_141466b40(&fStack_188,&fStack_208);
      if (fStack_188 == 1.4013e-45) {
        fVar25 = (float)((uint)(fStack_168 - (float)uStack_178) & _DAT_142e377e0);
        for (fVar26 = fVar38 * fVar25 - fVar30; fVar26 < 0.0; fVar26 = fVar26 + fVar25) {
          uStack_120 = CONCAT44(0x3f800000,fStack_180);
          pdb_141466b40(&fStack_188,&fStack_208);
          if (fStack_188 != 1.4013e-45) goto LAB_141438d19;
          fVar25 = (float)((uint)(fStack_168 - (float)uStack_178) & _DAT_142e377e0);
        }
        uStack_120 = CONCAT44(fVar24 - fVar26 / fVar25,fStack_180);
      }
LAB_141438d19:
      fStack_f8 = fStack_f8 + fVar23;
      uVar3 = *(undefined8 *)(param_6 + (uStack_120 & 0xffffffff) * 4);
      uVar4 = *(undefined8 *)(param_4 + (uStack_120 & 0xffffffff) * 4);
      fVar26 = (float)((ulonglong)uVar4 >> 0x20);
      fVar23 = (float)((ulonglong)uVar3 >> 0x20) * uStack_120._4_4_ +
               (float)uVar3 * (fVar24 - uStack_120._4_4_);
      fVar25 = fVar26 * uStack_120._4_4_ + (float)uVar4 * (fVar24 - uStack_120._4_4_);
      fVar26 = fVar26 * 0.0 + 0.0;
      fVar32 = fVar25;
      if (fVar28 <= fVar25) {
        fVar32 = fVar28;
      }
      fVar32 = (float)(~-(uint)NAN(fVar28) & (uint)fVar32 | -(uint)NAN(fVar28) & (uint)fVar25);
      if (1 < *(uint *)(param_1 + 600)) goto LAB_141438dc0;
      bVar11 = false;
      if (fVar32 <= fStack_10c) goto LAB_141438df2;
    }
    lVar20 = lStack_270;
    pfVar13 = pfStack_2d0;
    pfVar15 = pfStack_2c8;
    fVar26 = _DAT_142e4bfe4;
    fVar27 = fStack_244;
    fVar28 = _DAT_142e36f2c;
    fVar29 = _DAT_142e36f30;
    fVar30 = _DAT_14303e470;
    if (lStack_240 != 0) {
      pub_1406abac0((byte *)pfStack_2c0,lStack_240 << 2,4);
      lVar20 = lStack_270;
      pfVar13 = pfStack_2d0;
      pfVar15 = pfStack_2c8;
      fVar26 = _DAT_142e4bfe4;
      fVar27 = fStack_244;
      fVar28 = _DAT_142e36f2c;
      fVar29 = _DAT_142e36f30;
      fVar30 = _DAT_14303e470;
    }
  } while( true );
LAB_141438dc0:
  bVar11 = false;
  if ((fStack_10c < fVar32) ||
     (*(float *)(param_1 + 0x288) <= fStack_10c - fStack_f8 &&
      fStack_10c - fStack_f8 != *(float *)(param_1 + 0x288))) goto LAB_1414389f0;
LAB_141438df2:
  fVar37 = fVar35 * fVar38 + fVar37;
  fVar38 = fVar27 + fVar37 + fVar23;
  fVar35 = fVar23;
  if (fVar38 <= 0.0) {
    fVar35 = _DAT_142e3c654;
    fVar37 = _DAT_142e3c654;
  }
  uVar22 = -(uint)(0.0 < fVar38);
  fVar27 = fVar28 + (float)(~uVar22 & (uint)_DAT_142e3c654 | (uint)fVar27 & uVar22);
  fStack_f8 = fStack_f8 + fVar37;
  if (((fStack_10c < fVar35 + fVar25) && (fStack_10c < fVar27)) &&
     (bVar11 = false, fStack_10c < fStack_f8)) goto LAB_1414389f0;
  fVar37 = (fStack_148 + fStack_144) * _DAT_142e36f50;
  fStack_358 = fVar27;
  fStack_354 = fVar28;
  fStack_350 = fVar29;
  fStack_34c = fVar29;
  fStack_248 = fVar35 + fVar25;
  pdb_140deead0(&uStack_318,fStack_fc * fVar37,fStack_10c,fVar31 * fStack_fc,0x3e4ccccd);
  pdb_14007ee60();
  lVar20 = 4;
  pfVar15 = (float *)pub_1406abab0(0x28,4);
  if (pfVar15 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x28);
  }
  lStack_368 = 0;
  lStack_360 = 0;
  fStack_208 = (float)uStack_318;
  fStack_204 = (float)((ulonglong)uStack_318 >> 0x20);
  fStack_200 = (float)uStack_310;
  fStack_1fc = (float)((ulonglong)uStack_310 >> 0x20);
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  pfVar15[4] = 0.0;
  pfVar15[5] = 0.0;
  pfVar15[6] = 0.0;
  pfVar15[7] = 0.0;
  *pfVar15 = fStack_208;
  pfVar15[1] = fStack_204;
  pfVar15[2] = fStack_200;
  pfVar15[3] = fStack_1fc;
  pfVar15[8] = 0.0;
  *(undefined2 *)(pfVar15 + 9) = 0;
  lStack_258 = 0;
  lStack_250 = 1;
  uStack_268 = 1;
  uStack_f1 = 1;
  pfStack_2e8 = pfVar13;
  pfStack_260 = pfVar15;
  for (lVar16 = pdb_140c2b5c0(param_8); lVar16 != lVar20; lVar16 = lVar16 + 0x14) {
    uStack_f1 = 1;
    pdb_140deec10(lVar16);
    uStack_f1 = 1;
    pdb_140deec50(lVar16);
    uStack_f1 = 1;
    pdb_140deec20(lVar16);
    uStack_f1 = 1;
    pdb_140deead0(&fStack_188);
    uStack_f1 = 1;
    cVar12 = pdb_140deea30(&fStack_188,&uStack_318);
    if (cVar12 != '\0') {
      uStack_f1 = 1;
      pdb_14146c450(&fStack_188,&uStack_268);
    }
    if (*(int *)(param_1 + 600) != 2) {
      uStack_f1 = 1;
      fVar27 = (float)pdb_140deec20(&fStack_188);
      uStack_f1 = 1;
      fVar28 = (float)pdb_140deec10(&fStack_188);
      if (fVar27 + fVar28 * _DAT_142e36f50 <= fStack_fc) {
        uStack_f1 = 1;
        fVar27 = (float)pdb_140deec20(&fStack_188);
        uStack_f1 = 1;
        fVar28 = (float)pdb_140deec10(&fStack_188);
        if (fVar27 < fVar28 * _DAT_142e36f50) {
          uStack_f1 = 1;
          pdb_140deec20(&fStack_188);
          uStack_f1 = 1;
          pdb_140deec20(&fStack_188);
          uStack_f1 = 1;
          pdb_140deead0(&fStack_208);
          uStack_f1 = 1;
          pdb_14146c450(&fStack_208,&uStack_268);
        }
      }
      else {
        uStack_f1 = 1;
        pdb_140deec20(&fStack_188);
        uStack_f1 = 1;
        pdb_140deec20(&fStack_188);
        uStack_f1 = 1;
        pdb_140deead0(&fStack_208);
        uStack_f1 = 1;
        pdb_14146c450(&fStack_208,&uStack_268);
      }
    }
  }
  pfStack_198 = pfStack_260;
  if (lStack_250 == 0) {
    uVar17 = uStack_268;
    if (uStack_268 == 0) goto LAB_141439606;
  }
  else {
    uStack_220 = uStack_268;
    fVar27 = (fVar37 - fVar30) * fStack_fc;
    fVar28 = (fVar37 + fVar30) * fStack_fc;
    lVar16 = lStack_258;
    lVar20 = lStack_250;
    do {
      lVar20 = lVar20 + -1;
      uVar21 = 0;
      if (uStack_220 <= lVar16 + 1U) {
        uVar21 = uStack_220;
      }
      uStack_328 = (undefined5)
                   ((ulonglong)*(undefined8 *)((longlong)pfStack_198 + lVar16 * 0x28 + 0x1d) >> 0x18
                   );
      uStack_348 = *(undefined8 *)(pfStack_198 + lVar16 * 10);
      uStack_340 = *(undefined8 *)(pfStack_198 + lVar16 * 10 + 2);
      pfVar13 = pfStack_198 + lVar16 * 10 + 4;
      fStack_338 = *pfVar13;
      fStack_334 = pfVar13[1];
      fStack_330 = pfVar13[2];
      fStack_32c = pfVar13[3];
      bVar7 = *(byte *)((longlong)pfStack_198 + lVar16 * 0x28 + 0x25);
      uVar17 = uStack_220;
      param_4 = lStack_280;
      param_1 = lStack_210;
      if (bVar7 == 2) break;
      uStack_292 = *(undefined2 *)((longlong)pfStack_198 + lVar16 * 0x28 + 0x26);
      uStack_298 = uStack_328;
      uStack_348._4_4_ = (undefined4)((ulonglong)uStack_348 >> 0x20);
      uStack_340._4_4_ = (undefined4)((ulonglong)uStack_340 >> 0x20);
      uStack_2a0 = (undefined5)*(undefined8 *)(pfVar13 + 2);
      uStack_29b = (undefined3)((uint)fStack_32c >> 8);
      uStack_2b8 = (undefined4)uStack_348;
      uStack_2b4 = uStack_348._4_4_;
      uStack_2b0 = (undefined4)uStack_340;
      uStack_2ac = uStack_340._4_4_;
      uStack_2a8 = *(undefined8 *)pfVar13;
      bStack_293 = bVar7;
      fVar29 = (float)pdb_140deec50(&uStack_2b8);
      if (_DAT_142e3b1d8 <= fVar29) {
        uVar22 = pdb_1413f9030(lStack_118);
        uVar3 = *(undefined8 *)(lStack_218 + (ulonglong)uVar22 * 8);
        uVar4 = *(undefined8 *)(lStack_218 + 8 + (ulonglong)uVar22 * 8);
        uVar22 = pdb_1413f9030(lStack_118);
        uVar5 = *(undefined8 *)(lStack_218 + (ulonglong)uVar22 * 8);
        uVar6 = *(undefined8 *)(lStack_218 + 8 + (ulonglong)uVar22 * 8);
        fVar30 = (extraout_XMM0_Da_00 * (float)uVar6 + (fVar24 - extraout_XMM0_Da_00) * (float)uVar5
                 ) - (extraout_XMM0_Da * (float)uVar4 + (fVar24 - extraout_XMM0_Da) * (float)uVar3);
        fVar35 = (extraout_XMM0_Da_00 * (float)((ulonglong)uVar6 >> 0x20) +
                 (fVar24 - extraout_XMM0_Da_00) * (float)((ulonglong)uVar5 >> 0x20)) -
                 (extraout_XMM0_Da * (float)((ulonglong)uVar4 >> 0x20) +
                 (fVar24 - extraout_XMM0_Da) * (float)((ulonglong)uVar3 >> 0x20));
        fVar36 = SQRT(fVar35 * fVar35 + fVar30 * fVar30);
        fVar30 = (fVar24 / fVar36) * fVar30;
        fVar35 = (fVar24 / fVar36) * fVar35;
        uStack_308 = CONCAT44(fVar35,fVar30);
        pdb_140df4520(&fStack_208,&uStack_308);
        fVar37 = fStack_200;
        fVar31 = fStack_204;
        fVar29 = fStack_208;
        fStack_188 = (float)((uint)fVar35 ^ _DAT_142e37820);
        fStack_184 = fVar30;
        pdb_140df4520(&fStack_208,&fStack_188);
        fVar38 = fStack_200;
        fVar35 = fStack_204;
        fVar30 = fStack_208;
        fVar32 = (float)pdb_140deec10(&uStack_2b8);
        fVar33 = (float)pdb_140deec50(&uStack_2b8);
        uVar34 = pdb_140deec20(&uStack_2b8);
        pdb_140deec20(&uStack_2b8);
        fStack_188 = (float)pdb_14007ee60(uVar34);
        fStack_184 = fVar36;
        pdb_140dea260(&fStack_208,&fStack_188,lStack_118);
        fStack_3e8 = fVar32 * fVar29;
        fStack_3e4 = fVar32 * fVar31;
        fStack_3e0 = fVar32 * fVar37;
        fStack_3dc = fVar32 * fVar37;
        fStack_3d8 = fVar33 * _DAT_142e378e0;
        fStack_3d4 = fVar33 * _UNK_142e378e4;
        fStack_3d0 = fVar33 * _UNK_142e378e8;
        fStack_3cc = fVar33 * _UNK_142e378ec;
        fStack_3c8 = fVar30 * _DAT_143309d10;
        fStack_3c4 = fVar35 * _UNK_143309d14;
        fStack_3c0 = fVar38 * _UNK_143309d18;
        fStack_3bc = fVar38 * _UNK_143309d1c;
        fStack_3b8 = fStack_208;
        fStack_3b4 = fStack_204;
        fStack_3b0 = fStack_200;
        fStack_3ac = fStack_200;
        pdb_140e07fe0(&fStack_208,&fStack_3e8);
        uStack_1b8 = pdb_1409012c0(*(undefined4 *)(lStack_210 + 0x274));
        uStack_3a8 = CONCAT44(fStack_204,fStack_208);
        uStack_3a0 = CONCAT44(fStack_1fc,fStack_200);
        uStack_398 = CONCAT44(uStack_1f4,uStack_1f8);
        uStack_390 = CONCAT44(uStack_1ec,uStack_1f0);
        plStack_380 = plStack_1e0;
        lStack_378 = lStack_368;
        lStack_370 = lStack_360;
        lStack_1d8 = lStack_368;
        lStack_1d0 = lStack_360;
        uStack_1c8 = CONCAT44(fStack_f8,fStack_358);
        uStack_1c0 = (ulonglong)(uint)fStack_248;
        uStack_1ac = 4;
        fStack_1b4 = fVar27;
        fStack_1b0 = fVar28;
        pdb_14094c790(&fStack_188,&fStack_208);
        lVar9 = plStack_228[2];
        if (lVar9 == *plStack_228) {
          pdb_142d8db70(plStack_228);
        }
        lVar8 = plStack_228[1];
        lVar19 = lVar9 * 0x40;
        puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar19);
        *puVar1 = uStack_158;
        puVar1[1] = uStack_150;
        puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar19);
        *puVar1 = CONCAT44(uStack_164,fStack_168);
        puVar1[1] = uStack_160;
        puVar2 = (undefined4 *)(lVar8 + 0x10 + lVar19);
        *puVar2 = (float)uStack_178;
        puVar2[1] = uStack_178._4_4_;
        puVar2[2] = uStack_170;
        puVar2[3] = uStack_16c;
        *(undefined8 *)(lVar8 + lVar19) = CONCAT44(fStack_184,fStack_188);
        ((undefined8 *)(lVar8 + lVar19))[1] = CONCAT44(uStack_17c,fStack_180);
        plStack_228[2] = lVar9 + 1;
      }
      lVar16 = (lVar16 - uVar21) + 1;
      uVar17 = uStack_220;
      param_4 = lStack_280;
      param_1 = lStack_210;
    } while (lVar20 != 0);
  }
  pub_1406abac0((byte *)pfStack_198,uVar17 * 0x28,4);
LAB_141439606:
  bVar11 = false;
  pfVar13 = pfStack_2e8;
  pfVar15 = pfStack_2e0;
  goto LAB_1414389f0;
}

