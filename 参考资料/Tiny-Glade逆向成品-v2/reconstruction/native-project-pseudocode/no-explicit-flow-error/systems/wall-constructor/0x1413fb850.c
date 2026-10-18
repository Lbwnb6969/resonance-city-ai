// VA 0x1413fb850, PDB extent 6701 bytes
// system_wall_constructor::segmentation::wall_path_segment::calculate_wall_path_segments_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/wall_path_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::segmentation::wall_path_segment::calculate_wall_path_segments_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/wall_path_segment.rs
   Extent: 6701 */

longlong *
pdb_1413fb850(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8,
             ulonglong **param_9,ulonglong param_10,char param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong ***pppuVar8;
  ulonglong ***pppuVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 ***pppuVar16;
  ulonglong *puVar17;
  char cVar18;
  int iVar19;
  byte *pbVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  bool bVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong ***pppuVar27;
  float *pfVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  byte *pbVar33;
  byte *pbVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 ***pppuStack_2e8;
  undefined8 ***pppuStack_2e0;
  ulonglong *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  longlong lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 ***pppuStack_2b0;
  ulonglong uStack_2a8;
  undefined8 uStack_2a0;
  float *pfStack_298;
  longlong lStack_290;
  longlong lStack_284;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong lStack_238;
  ulonglong *puStack_230;
  ulonglong *puStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined4 uStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  ulonglong uStack_1e8;
  longlong *plStack_1e0;
  ulonglong uStack_1d8;
  ulonglong *puStack_1d0;
  ulonglong uStack_1c8;
  longlong lStack_1c0;
  undefined8 ***pppuStack_1b8;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [12];
  undefined4 uStack_18c;
  ulonglong ***pppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulonglong uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 ***pppuStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong uStack_100;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lStack_200 = 0;
  lStack_1f8 = 8;
  lStack_1f0 = 0;
  lStack_2c0 = param_2 + 0x78;
  uStack_260 = *(undefined4 *)(param_2 + 0x80);
  uStack_268 = *(undefined8 *)(param_2 + 0x78);
  uStack_270 = *(undefined4 *)(param_2 + 0x80);
  uStack_278 = *(undefined8 *)(param_2 + 0x78);
  pppuStack_210 = *(undefined8 ****)(param_2 + 0x78);
  uStack_208 = *(undefined4 *)(param_2 + 0x80);
  uStack_248 = *(undefined8 *)(param_2 + 0x78);
  uStack_240 = *(undefined4 *)(param_2 + 0x80);
  uStack_258 = (undefined4)param_7;
  uStack_254 = param_7._4_4_;
  uStack_250 = (undefined4)param_8;
  uStack_24c = param_8._4_4_;
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  uStack_1d8 = 0;
  puStack_1d0 = (ulonglong *)0x8;
  uStack_1c8 = 0;
  pbVar34 = *(byte **)(param_2 + 8);
  pbVar33 = pbVar34 + *(longlong *)(param_2 + 0x10);
  uStack_1e8 = (ulonglong)*(uint *)(param_2 + 0x78);
  uStack_114 = *(uint *)(param_2 + 0x80);
  lVar31 = 0;
  uStack_2d0 = param_4;
  uStack_2c8 = param_3;
  plStack_1e0 = param_1;
  do {
    uVar25 = uStack_1c8;
    fVar15 = _DAT_143306b30;
    fVar14 = _DAT_143061400;
    uVar13 = _DAT_142e377e0;
    fVar12 = _DAT_142e36f3c;
    fVar11 = _DAT_142e36f28;
    lVar32 = 0;
    pbVar20 = pbVar34;
    do {
      if (pbVar20 == pbVar33) {
        if (uStack_1c8 < 2) {
          *plStack_1e0 = 0;
          plStack_1e0[1] = 8;
          plStack_1e0[2] = 0;
          if (uStack_1d8 != 0) {
            pub_1406abac0((byte *)puStack_1d0,uStack_1d8 << 3,8);
          }
          pdb_14049d240(&lStack_200);
          return plStack_1e0;
        }
        puStack_228 = puStack_1d0 + uStack_1c8;
        lStack_1c0 = *(longlong *)(param_2 + 0x20);
        pppuStack_1b8 = *(undefined8 ****)(param_2 + 0x28);
        uStack_118 = -uStack_114;
        if ((int)-uStack_114 < 0) {
          uStack_118 = uStack_114;
        }
        iStack_1ac = (int)uStack_1e8 + 1;
        bVar24 = true;
        puVar21 = puStack_1d0;
        goto LAB_1413fbb3e;
      }
      pbVar34 = pbVar20 + 1;
      lVar32 = lVar32 + -1;
      bVar7 = *pbVar20;
      pbVar20 = pbVar34;
    } while ((bVar7 & 0xf) == 0);
    if (uStack_1c8 == uStack_1d8) {
      pdb_142d896b0(&uStack_1d8);
    }
    lVar31 = lVar31 - lVar32;
    puStack_1d0[uVar25] = lVar31 - 1;
    uStack_1c8 = uVar25 + 1;
  } while( true );
LAB_1413fbb3e:
  if (puVar21 == puStack_228) {
LAB_1413fc7d3:
    plStack_1e0[2] = lStack_1f0;
    *plStack_1e0 = lStack_200;
    plStack_1e0[1] = lStack_1f8;
    if (uStack_1d8 != 0) {
      pub_1406abac0((byte *)puStack_1d0,uStack_1d8 << 3,8);
    }
    return plStack_1e0;
  }
  puVar17 = puVar21 + 1;
  puVar22 = puVar21;
  if (bVar24) {
    if (puVar17 == puStack_228) goto LAB_1413fc7d3;
    puVar22 = puVar17;
    puStack_2d8 = puVar21;
    puVar17 = puVar21 + 2;
  }
  puStack_230 = puVar17;
  pppuVar8 = (ulonglong ***)*puStack_2d8;
  pppuVar9 = (ulonglong ***)*puVar22;
  auStack_198._8_4_ = uStack_270;
  auStack_198._0_8_ = uStack_278;
  lVar32 = (longlong)pppuVar9 + (1 - (longlong)pppuVar8);
  uStack_1a8 = (undefined8 ****)uStack_2c8;
  uStack_1a0 = (code *)uStack_2d0;
  pppuStack_2e8 = pppuVar9;
  pppuStack_2e0 = pppuVar8;
  puStack_2d8 = puVar22;
  pppuStack_188 = pppuVar8;
  uStack_180 = lVar32;
  pdb_1413ed000(&uStack_2a0,&uStack_1a8);
  auStack_198._8_4_ = uStack_240;
  auStack_198._0_8_ = uStack_248;
  uStack_18c = uStack_23c;
  uStack_1a8 = (undefined8 ****)CONCAT44(uStack_254,uStack_258);
  uStack_1a0 = (code *)CONCAT44(uStack_24c,uStack_250);
  fVar38 = 0.0;
  pppuVar27 = pppuVar8;
  lVar31 = lVar32;
  while (lVar31 != 0) {
    uStack_180 = lVar31 + -1;
    if (pppuVar27 == (ulonglong ***)0x0) {
      uStack_f1 = 1;
      pppuStack_188 = pppuVar27;
      pdb_1413f86f0(&iStack_110,auStack_198);
      uVar25 = (ulonglong)uStack_1a0;
      lVar29 = (longlong)uStack_1a8;
      if (iStack_110 != 1) break;
      uStack_f1 = 1;
      uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
      lVar31 = uStack_180;
      if (uVar25 <= uVar23) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
      }
    }
    else {
      pppuStack_188 = (ulonglong ***)0x0;
      do {
        uStack_f1 = 1;
        pdb_1413f86f0(&iStack_110,auStack_198);
        uVar25 = (ulonglong)uStack_1a0;
        if (iStack_110 != 1) goto LAB_1413fbc10;
        uStack_f1 = 1;
        uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
        if (uVar25 <= uVar23) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
        }
        pppuVar27 = (ulonglong ***)((longlong)pppuVar27 - 1);
      } while (pppuVar27 != (ulonglong ***)0x0);
      uStack_f1 = 1;
      pdb_1413f86f0(&iStack_110,auStack_198);
      uVar25 = (ulonglong)uStack_1a0;
      lVar29 = (longlong)uStack_1a8;
      if (iStack_110 != 1) break;
      uStack_f1 = 1;
      uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
      lVar31 = uStack_180;
      if (uVar25 <= uVar23) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
      }
    }
    uStack_180._4_4_ = (undefined4)((ulonglong)lVar31 >> 0x20);
    lVar29 = lVar29 + uVar23 * 0xc;
    if (lVar29 == 0) break;
    fVar39 = *(float *)(lVar29 + 4);
    fVar35 = fVar39;
    if (fVar38 <= fVar39) {
      fVar35 = fVar38;
    }
    fVar38 = (float)(~-(uint)NAN(fVar38) & (uint)fVar35 | -(uint)NAN(fVar38) & (uint)fVar39);
    pppuVar27 = pppuStack_188;
  }
LAB_1413fbc10:
  fVar39 = fVar12;
  if (param_11 != '\0') {
    auStack_198._8_4_ = uStack_208;
    auStack_198._0_8_ = pppuStack_210;
    pppuVar27 = pppuVar8;
    lVar31 = lVar32;
    uStack_1a8 = (undefined8 ****)param_5;
    uStack_1a0 = (code *)param_6;
    while (lVar31 != 0) {
      uStack_180 = lVar31 + -1;
      if (pppuVar27 == (ulonglong ***)0x0) {
        uStack_f1 = 1;
        pppuStack_188 = pppuVar27;
        pdb_1413f86f0(&iStack_110,auStack_198);
        uVar25 = (ulonglong)uStack_1a0;
        lVar29 = (longlong)uStack_1a8;
        if (iStack_110 != 1) break;
        uStack_f1 = 1;
        uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
        lVar31 = uStack_180;
        if (uVar25 <= uVar23) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
        }
      }
      else {
        pppuStack_188 = (ulonglong ***)0x0;
        do {
          uStack_f1 = 1;
          pdb_1413f86f0(&iStack_110,auStack_198);
          uVar25 = (ulonglong)uStack_1a0;
          if (iStack_110 != 1) goto LAB_1413fbc70;
          uStack_f1 = 1;
          uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
          if (uVar25 <= uVar23) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
          }
          pppuVar27 = (ulonglong ***)((longlong)pppuVar27 - 1);
        } while (pppuVar27 != (ulonglong ***)0x0);
        uStack_f1 = 1;
        pdb_1413f86f0(&iStack_110,auStack_198);
        uVar25 = (ulonglong)uStack_1a0;
        lVar29 = (longlong)uStack_1a8;
        if (iStack_110 != 1) break;
        uStack_f1 = 1;
        uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
        lVar31 = uStack_180;
        if (uVar25 <= uVar23) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
        }
      }
      uStack_180._4_4_ = (undefined4)((ulonglong)lVar31 >> 0x20);
      pfVar3 = (float *)(lVar29 + uVar23 * 4);
      if (pfVar3 == (float *)0x0) break;
      fVar35 = *pfVar3;
      fVar36 = fVar35;
      if (fVar39 <= fVar35) {
        fVar36 = fVar39;
      }
      fVar39 = (float)(~-(uint)NAN(fVar39) & (uint)fVar36 | -(uint)NAN(fVar39) & (uint)fVar35);
      pppuVar27 = pppuStack_188;
    }
LAB_1413fbc70:
    fVar39 = fVar39 + _DAT_143005d30;
  }
  if (0.0 <= fVar38) {
    fVar38 = 0.0;
  }
  lStack_238 = lStack_290;
  uStack_1a0 = (code *)(pfStack_298 + lStack_290);
  uStack_180._0_4_ = uStack_208;
  pppuStack_188 = pppuStack_210;
  auStack_148._8_4_ = uStack_240;
  auStack_148._0_8_ = uStack_248;
  auStack_148._12_4_ = uStack_23c;
  uStack_158 = CONCAT44(uStack_254,uStack_258);
  uStack_150 = CONCAT44(uStack_24c,uStack_250);
  auStack_198._0_8_ = param_5;
  stack0xfffffffffffffe70 = param_6;
  uStack_168 = 0;
  pppuStack_160 = (undefined8 ***)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  fVar38 = (float)((uint)fVar38 & uVar13) + fVar14;
  pfVar3 = pfStack_298;
  uStack_178 = pppuVar8;
  uStack_170 = lVar32;
  pppuStack_138 = pppuVar8;
  lStack_130 = lVar32;
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  while ((pfVar28 = pfVar3, pppuVar27 = uStack_178, pfVar28 != (float *)uStack_1a0 &&
         (uStack_1a8 = (undefined8 ****)(pfVar28 + 1), uStack_170 != 0))) {
    uStack_170 = uStack_170 + -1;
    if (uStack_178 == (ulonglong ***)0x0) {
      uStack_f1 = 1;
      pdb_1413f86f0(&iStack_110,&pppuStack_188);
      uVar25 = stack0xfffffffffffffe70;
      lVar31 = auStack_198._0_8_;
      if (iStack_110 != 1) break;
      uStack_f1 = 1;
      uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
      if (uVar25 <= uVar23) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
      }
    }
    else {
      uStack_178 = (ulonglong ***)0x0;
      do {
        uStack_f1 = 1;
        pdb_1413f86f0(&iStack_110,&pppuStack_188);
        uVar25 = stack0xfffffffffffffe70;
        if (iStack_110 != 1) goto LAB_1413fc380;
        uStack_f1 = 1;
        uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
        if (uVar25 <= uVar23) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
        }
        pppuVar27 = (ulonglong ***)((longlong)pppuVar27 - 1);
      } while (pppuVar27 != (ulonglong ***)0x0);
      uStack_f1 = 1;
      pdb_1413f86f0(&iStack_110,&pppuStack_188);
      uVar25 = stack0xfffffffffffffe70;
      lVar31 = auStack_198._0_8_;
      if (iStack_110 != 1) break;
      uStack_f1 = 1;
      uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
      if (uVar25 <= uVar23) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
      }
    }
    pppuVar27 = pppuStack_138;
    pfVar2 = (float *)(lVar31 + uVar23 * 4);
    if ((pfVar2 == (float *)0x0) || (lStack_130 == 0)) break;
    lStack_130 = lStack_130 + -1;
    if (pppuStack_138 == (ulonglong ***)0x0) {
      uStack_f1 = 1;
      pdb_1413f86f0(&iStack_110,auStack_148);
      uVar25 = uStack_150;
      lVar31 = uStack_158;
      if (iStack_110 != 1) break;
      uStack_f1 = 1;
      uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
      if (uVar25 <= uVar23) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
      }
    }
    else {
      pppuStack_138 = (ulonglong ***)0x0;
      do {
        uStack_f1 = 1;
        pdb_1413f86f0(&iStack_110,auStack_148);
        uVar25 = uStack_150;
        if (iStack_110 != 1) goto LAB_1413fc380;
        uStack_f1 = 1;
        uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
        if (uVar25 <= uVar23) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
        }
        pppuVar27 = (ulonglong ***)((longlong)pppuVar27 - 1);
      } while (pppuVar27 != (ulonglong ***)0x0);
      uStack_f1 = 1;
      pdb_1413f86f0(&iStack_110,auStack_148);
      uVar25 = uStack_150;
      lVar31 = uStack_158;
      if (iStack_110 != 1) break;
      uStack_f1 = 1;
      uVar23 = pdb_1413f8440(uStack_10c,uStack_108);
      if (uVar25 <= uVar23) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar23,uVar25,&UNK_143308d50);
      }
    }
    lVar31 = lVar31 + uVar23 * 0xc;
    if (lVar31 == 0) break;
    fVar35 = *pfVar28 + fVar38;
    *pfVar28 = fVar35;
    pfVar3 = (float *)uStack_1a8;
    if (param_11 != '\0') {
      fVar37 = (*pfVar2 - *(float *)(lVar31 + 4)) + fVar15;
      fVar36 = fVar37;
      if (fVar35 <= fVar37) {
        fVar36 = fVar35;
      }
      fVar35 = (float)(~-(uint)NAN(fVar35) & (uint)fVar36 | -(uint)NAN(fVar35) & (uint)fVar37);
      fVar36 = fVar39;
      if (fVar35 <= fVar39) {
        fVar36 = fVar35;
      }
      *pfVar28 = (float)(-(uint)NAN(fVar35) & (uint)fVar39 | ~-(uint)NAN(fVar35) & (uint)fVar36);
      pfVar3 = (float *)uStack_1a8;
    }
  }
LAB_1413fc380:
  auStack_198._8_4_ = uStack_240;
  uStack_18c = uStack_23c;
  auStack_198._0_8_ = uStack_248;
  uStack_1a8 = (undefined8 ****)CONCAT44(uStack_254,uStack_258);
  uStack_1a0 = (code *)CONCAT44(uStack_24c,uStack_250);
  uStack_f1 = 1;
  pppuStack_188 = pppuVar8;
  uStack_180 = lVar32;
  pdb_1413eefd0(&uStack_2b8,&uStack_1a8);
  uStack_1a8 = (undefined8 ****)param_9;
  uStack_1a0 = (code *)param_10;
  auStack_198._8_4_ = uStack_114;
  auStack_198._0_8_ = uVar6;
  uStack_f3 = 1;
  pppuStack_188 = pppuVar8;
  uStack_180 = lVar32;
  pdb_1413e9460(&iStack_110,&uStack_1a8);
  uVar25 = uStack_2a8;
  if (uStack_2a8 < 2) {
    uStack_1a8 = &pppuStack_220;
    uStack_1a0 = pdb_14141d750;
    uStack_f2 = 1;
    pppuStack_220 = pppuVar8;
    pppuStack_218 = pppuVar9;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143306b34,&uStack_1a8,&UNK_143306b80);
  }
  if (pppuStack_1b8 <= pppuVar8) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pppuVar8,pppuStack_1b8,&UNK_143306b98);
  }
  uStack_f2 = 1;
  pdb_141421f10(&uStack_1a8,&uStack_258,*(undefined4 *)(lStack_1c0 + (longlong)pppuVar8 * 8),
                *(undefined4 *)(lStack_1c0 + 4 + (longlong)pppuVar8 * 8),&UNK_143306bb0);
  pppuVar16 = pppuStack_2b0;
  *(undefined4 *)(pppuStack_2b0 + 1) = (undefined4)uStack_1a0;
  *pppuStack_2b0 = uStack_1a8;
  if (pppuStack_1b8 <= pppuVar9) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pppuVar9,pppuStack_1b8,&UNK_143306bc8);
  }
  uStack_f2 = 1;
  pdb_141421f10(&uStack_1a8,&uStack_258,*(undefined4 *)(lStack_1c0 + (longlong)pppuVar9 * 8),
                *(undefined4 *)(lStack_1c0 + 4 + (longlong)pppuVar9 * 8),&UNK_143306be0);
  uVar23 = lStack_238 - 1;
  if (uVar25 <= uVar23) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar23,uVar25,&UNK_143306bf8);
  }
  *(undefined4 *)((longlong)pppuVar16 + uVar23 * 0xc + 8) = (undefined4)uStack_1a0;
  *(undefined8 *****)((longlong)pppuVar16 + uVar23 * 0xc) = uStack_1a8;
  if (uStack_114 == 0) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8510(&UNK_143306ca8);
  }
  iVar30 = *(int *)(lStack_1c0 + (longlong)pppuVar8 * 8);
  iVar19 = (int)uStack_1e8 + iVar30;
  if ((uStack_114 == 0xffffffff) && (SBORROW4(0,iVar19))) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8550(&UNK_143306ca8);
  }
  iVar19 = iVar19 % (int)uStack_114;
  uVar25 = (ulonglong)(int)((iVar19 >> 0x1f & uStack_118) + iVar19);
  if (param_10 <= uVar25) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar25,param_10,&UNK_143306ca8);
  }
  iVar30 = iVar30 + iStack_1ac;
  if ((uStack_114 == 0xffffffff) && (SBORROW4(0,iVar30))) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8550(&UNK_143306cc0);
  }
  iVar30 = iVar30 % (int)uStack_114;
  uVar25 = (ulonglong)(int)((iVar30 >> 0x1f & uStack_118) + iVar30);
  if (param_10 <= uVar25) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar25,param_10,&UNK_143306cc0);
  }
  uStack_f2 = 1;
  pdb_140dea7c0(param_12);
  uStack_f2 = 1;
  fVar38 = (float)pdb_140dea610(param_12);
  uVar25 = uStack_100;
  pppuStack_220._0_4_ = fVar38;
  if ((fVar38 < 0.0) || (fVar11 < fVar38)) {
    uStack_1a8 = &pppuStack_220;
    uStack_1a0 = pdb_140f70fc0;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143306cd8);
  }
  if (uStack_100 == 0) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143306c10);
  }
  pfVar3 = (float *)CONCAT44(uStack_104,uStack_108);
  *pfVar3 = fVar38;
  iVar30 = *(int *)(lStack_1c0 + (longlong)pppuVar9 * 8);
  iVar19 = (int)uStack_1e8 + iVar30;
  if ((uStack_114 == 0xffffffff) && (SBORROW4(0,iVar19))) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8550(&UNK_143306ca8);
  }
  iVar19 = iVar19 % (int)uStack_114;
  uVar26 = (ulonglong)(int)((iVar19 >> 0x1f & uStack_118) + iVar19);
  if (param_10 <= uVar26) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar26,param_10,&UNK_143306ca8);
  }
  iVar30 = iVar30 + iStack_1ac;
  if ((uStack_114 == 0xffffffff) && (SBORROW4(0,iVar30))) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8550(&UNK_143306cc0);
  }
  iVar30 = iVar30 % (int)uStack_114;
  uVar26 = (ulonglong)(int)((iVar30 >> 0x1f & uStack_118) + iVar30);
  if (param_10 <= uVar26) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar26,param_10,&UNK_143306cc0);
  }
  uStack_f2 = 1;
  pdb_140dea7c0(param_12);
  uStack_f2 = 1;
  fVar38 = (float)pdb_140dea610(param_12);
  pppuStack_220 = (undefined8 ***)CONCAT44(pppuStack_220._4_4_,fVar38);
  if ((fVar38 < 0.0) || (fVar11 < fVar38)) {
    uStack_1a8 = &pppuStack_220;
    uStack_1a0 = pdb_140f70fc0;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143306cd8);
  }
  if (uVar25 <= uVar23) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar23,uVar25,&UNK_143306c28);
  }
  pfVar3[lStack_238 + -1] = fVar38;
  lVar32 = (longlong)pppuVar9 + 1;
  uStack_1a0 = (code *)CONCAT44(uStack_1a0._4_4_,uStack_260);
  uStack_1a8 = (undefined8 ****)uStack_268;
  uStack_f2 = 1;
  pdb_1413f8660(&lStack_284,&uStack_1a8,pppuVar8,lVar32);
  uStack_f2 = 1;
  cVar18 = pdb_1413f84d0(&lStack_284);
  lVar31 = lStack_1f0;
  if (cVar18 != '\0') {
    uStack_1a8 = (undefined8 ****)lStack_2c0;
    uStack_1a0 = pdb_1413fd280;
    stack0xfffffffffffffe70 = (ulonglong)pdb_140090b90;
    auStack_198._0_8_ = &pppuStack_2e0;
    pppuStack_188 = (ulonglong ***)&pppuStack_2e8;
    uStack_180._0_4_ = 0x40090b90;
    uStack_180._4_4_ = 1;
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143306c40,&uStack_1a8,&UNK_143306c90);
  }
  uStack_1a8 = (undefined8 ****)uStack_2a0;
  uStack_1a0 = (code *)pfStack_298;
  uStack_180._0_4_ = (undefined4)uStack_2a8;
  uStack_180._4_4_ = (undefined4)(uStack_2a8 >> 0x20);
  pppuStack_188 = pppuStack_2b0;
  stack0xfffffffffffffe70 = uStack_2b8;
  auStack_198._0_8_ = lStack_290;
  uStack_168 = uStack_100;
  uStack_178 = (ulonglong ***)CONCAT44(uStack_10c,iStack_110);
  uStack_170 = CONCAT44(uStack_104,uStack_108);
  auStack_148._0_4_ = uStack_27c;
  uStack_150 = lStack_284;
  pppuStack_160 = pppuVar8;
  uStack_158 = lVar32;
  if (lStack_1f0 == lStack_200) {
    pdb_142d8d8d0(&lStack_200);
  }
  lVar32 = lVar31 * 0x68;
  *(undefined8 *)(lStack_1f8 + 0x60 + lVar32) = auStack_148._0_8_;
  plVar4 = (longlong *)(lStack_1f8 + 0x50 + lVar32);
  *plVar4 = uStack_158;
  plVar4[1] = uStack_150;
  puVar21 = (ulonglong *)(lStack_1f8 + 0x40 + lVar32);
  *puVar21 = uStack_168;
  puVar21[1] = (ulonglong)pppuStack_160;
  auVar10._8_4_ = (undefined4)uStack_180;
  auVar10._0_8_ = pppuStack_188;
  auVar10._12_4_ = uStack_180._4_4_;
  puVar5 = (undefined8 *)(lStack_1f8 + 0x30 + lVar32);
  *puVar5 = uStack_178;
  puVar5[1] = uStack_170;
  *(undefined1 (*) [16])(lStack_1f8 + 0x20 + lVar32) = auVar10;
  puVar5 = (undefined8 *)(lStack_1f8 + 0x10 + lVar32);
  *puVar5 = auStack_198._0_8_;
  puVar5[1] = stack0xfffffffffffffe70;
  puVar1 = (undefined4 *)(lStack_1f8 + lVar32);
  *puVar1 = (undefined4)uStack_1a8;
  puVar1[1] = uStack_1a8._4_4_;
  puVar1[2] = (undefined4)uStack_1a0;
  puVar1[3] = uStack_1a0._4_4_;
  lStack_1f0 = lVar31 + 1;
  bVar24 = false;
  puVar21 = puStack_230;
  goto LAB_1413fbb3e;
}

