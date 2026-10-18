// VA 0x1421a5160, PDB extent 2860 bytes
// system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitch_bricks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/stitch_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitch_bricks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/stitch_bricks.rs
   Extent: 2860 */

longlong * pdb_1421a5160(float *param_1,longlong *param_2,float *param_3,float *param_4)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  int *piVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  float *pfVar24;
  ulonglong uVar25;
  undefined *puVar26;
  undefined *puVar27;
  float *pfVar28;
  undefined *puVar29;
  float *pfVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_268 [16];
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float *pfStack_1e8;
  longlong lStack_1d8;
  longlong lStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float *pfStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float *pfStack_1a0;
  float *pfStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  int iStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  uint uStack_11c;
  longlong lStack_100;
  undefined8 uStack_f8;
  longlong *plStack_f0;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_100 = 0;
  }
  else {
    puVar27 = &UNK_14346c988;
    pfVar30 = (float *)0x48;
    uVar23 = 0x48;
    lVar15 = pdb_1421a5c90(&UNK_14346c988);
    if (lVar15 == 1) {
      if (0x48 < uVar23) {
LAB_1421a5910:
        pdb_142dc8070(&UNK_14346c988,0x48,0);
LAB_1421a5930:
        pdb_142dc8070(&UNK_14346c988,0x48);
        pcVar6 = (code *)swi(3);
        plVar17 = (longlong *)(*pcVar6)();
        return plVar17;
      }
      puVar27 = &UNK_14346c988;
      uVar16 = pdb_1421a5c90(&UNK_14346c988);
      if ((uVar16 & 1) != 0) {
        if (0x48 < uVar23 + 2) goto LAB_1421a5930;
        pfVar30 = (float *)(0x46 - uVar23);
        puVar27 = &UNK_14346c98a + uVar23;
      }
    }
    puVar26 = &UNK_14346c8c1;
    puVar29 = &UNK_14346c881;
    do {
      bVar3 = puVar26[-1];
      uVar14 = (uint)(char)bVar3;
      plStack_e8 = param_2;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar26[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar26[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar26 + -4;
            puVar26 = puVar26 + -4;
            uVar14 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar26 = puVar26 + -3;
            uVar14 = bVar5 & 0xf;
          }
          uVar14 = bVar4 & 0x3f | uVar14 << 6;
        }
        else {
          puVar26 = puVar26 + -2;
          uVar14 = bVar4 & 0x1f;
        }
        uVar14 = (uint)(bVar3 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_1421a52d4;
LAB_1421a52f2:
        puVar29 = puVar26 + -0x14346c880;
        if ((undefined *)0x40 < puVar29) {
          pdb_142dc8070(&UNK_14346c881,0x40,puVar29,0x40,&UNK_14346cac8);
          goto LAB_1421a5910;
        }
        pfVar24 = (float *)(0x40 - (longlong)puVar29);
        puVar29 = puVar26 + 1;
        goto LAB_1421a531a;
      }
      puVar26 = puVar26 + -1;
      if (uVar14 == 0x5c) goto LAB_1421a52f2;
LAB_1421a52d4:
      if (uVar14 == 0x2f) goto LAB_1421a52f2;
    } while (puVar26 != &UNK_14346c881);
    pfVar24 = (float *)0x40;
LAB_1421a531a:
    plVar17 = (longlong *)pdb_140e97000();
    if (((char)plVar17[0xd] != '\x01') &&
       (plVar17 = (longlong *)pdb_142e16b00(plVar17,0), plVar17 == (longlong *)0x0)) {
LAB_1421a58b0:
      pdb_142dc7890(&UNK_14328b3f8);
LAB_1421a58bd:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1435b40e0);
    }
    if (*plVar17 != 0) goto LAB_1421a5855;
    *plVar17 = -1;
    plStack_f0 = plVar17;
    uStack_f8 = pdb_140e94f10(plVar17 + 1,puVar27,pfVar30,puVar29,pfVar24,1,0);
    *plStack_f0 = *plStack_f0 + 1;
    lStack_100 = 1;
    param_2 = plStack_e8;
  }
  puVar18 = (undefined8 *)pdb_1428fa560(*param_2,&UNK_1435b3fb8);
  if ((puVar18 == (undefined8 *)0x0) ||
     (pfVar30 = (float *)(**(code **)(puVar18[1] + 0x18))(*puVar18), pfVar30 == (float *)0x0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14346c910);
  }
  **(float **)(param_3 + 4) = param_3[7];
  plVar17 = *(longlong **)param_3;
  if (*plVar17 == 0) {
    pdb_14007ee60();
    param_3 = (float *)pub_1406abab0(0x20,8);
    if (param_3 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 5.60519e-45;
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
    *(undefined1 *)(param_3 + 6) = 0;
    lVar15 = *(longlong *)(pfVar30 + 0x12);
    do {
      lVar20 = *(longlong *)(lVar15 + 8);
      while (lVar20 != -1) {
        if (lVar20 < 0) {
          puStack_178 = &UNK_143467420;
          pcStack_170 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143467430,&puStack_178,&UNK_1434674b8);
        }
        LOCK();
        lVar21 = *(longlong *)(lVar15 + 8);
        bVar31 = lVar20 == lVar21;
        if (bVar31) {
          *(longlong *)(lVar15 + 8) = lVar20 + 1;
          lVar21 = lVar20;
        }
        UNLOCK();
        lVar20 = lVar21;
        if (bVar31) {
          *plVar17 = lVar15;
          plVar17[1] = (longlong)param_3;
          goto joined_r0x0001421a5801;
        }
      }
    } while( true );
  }
  param_3 = (float *)plVar17[1];
joined_r0x0001421a5801:
  if (param_3 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1435b40c8);
  }
  pfVar22 = param_3 + 6;
  LOCK();
  bVar31 = *(char *)(param_3 + 6) == '\0';
  if (bVar31) {
    *(char *)(param_3 + 6) = '\x01';
  }
  UNLOCK();
  pfVar24 = param_4;
  param_4 = param_1;
  if (!bVar31) goto LAB_1421a5862;
  do {
    pdb_140e9a150(pfVar22);
    if ((*(longlong *)(param_3 + 4) == 0) ||
       (piVar19 = (int *)(*(longlong *)(param_3 + 2) + *(longlong *)(param_3 + 4) * 4 + -4),
       piVar19 == (int *)0x0)) {
      lVar15 = *(longlong *)(pfVar30 + 4);
      if (lVar15 == 0) goto LAB_1421a58bd;
      iStack_180 = (int)lVar15 + -1;
    }
    else {
      iStack_180 = *piVar19;
      lVar15 = *(longlong *)(pfVar30 + 4);
    }
    lStack_1d8 = *(longlong *)(pfVar30 + 2);
    fStack_1c8 = pfVar30[6];
    fStack_1c4 = pfVar30[7];
    fStack_1c0 = pfVar30[8];
    fStack_1bc = pfVar30[9];
    fStack_1b0 = pfVar30[10];
    fStack_1ac = pfVar30[0xb];
    fStack_1a8 = pfVar30[0xc];
    fStack_1a4 = pfVar30[0xd];
    pfStack_1a0 = pfVar30 + 0x1e;
    pfStack_198 = pfVar30 + 0x16;
    fStack_190 = pfVar30[0xe];
    fStack_18c = pfVar30[0xf];
    fStack_188 = pfVar30[0x10];
    fStack_184 = pfVar30[0x11];
    lStack_1d0 = lVar15;
    pfStack_1b8 = param_3;
    pdb_1428fb6b0(&lStack_1d8);
    uVar12 = _DAT_143054960;
    uVar11 = _DAT_1430155a0;
    fVar10 = _DAT_142e36f28;
    pfVar22 = *(float **)(*(longlong *)param_4 + 8);
    pfVar30 = pfVar22 + *(longlong *)(*(longlong *)param_4 + 0x10) * 0x14;
    plStack_e8 = *(longlong **)pfVar24;
    pfVar24 = (float *)0x0;
    while (pfVar28 = pfVar24, param_3 = pfVar22, param_3 != pfVar30) {
      uVar25 = (ulonglong)((uint)pfVar28 & 1);
      uVar23 = *(ulonglong *)(param_3 + uVar25 * 2 + 0xc);
      uVar16 = pdb_140a6a860(plStack_e8);
      pfVar22 = param_3 + 0x14;
      param_4 = pfVar28;
      pfVar24 = (float *)((longlong)pfVar28 + 1);
      if ((uVar16 & 1) != 0) {
        fStack_21c = (float)*(longlong *)(param_3 + 8);
        fStack_20c = (float)((ulonglong)*(longlong *)(param_3 + 8) >> 0x20);
        fVar7 = *param_3;
        fVar8 = param_3[1];
        fVar9 = param_3[3];
        fStack_208 = param_3[4];
        fStack_204 = param_3[5];
        fStack_200 = param_3[6];
        fVar2 = param_3[2];
        fVar38 = fVar2 + fVar2;
        fVar32 = fVar8 + fVar8;
        fVar36 = fVar7 * (fVar7 + fVar7);
        fVar33 = (fVar7 + fVar7) * fVar9;
        fVar37 = fVar38 * fVar7 - fVar32 * fVar9;
        fVar34 = fVar33 + fVar38 * fVar8;
        fVar35 = fVar10 - (fVar36 + fVar8 * fVar32);
        fStack_22c = param_3[7];
        fStack_238 = fStack_22c * (fVar10 - (fVar8 * fVar32 + fVar2 * fVar38));
        fStack_234 = fStack_22c * (fVar32 * fVar7 + fVar9 * fVar38);
        fStack_230 = fStack_22c * fVar37;
        fStack_22c = fStack_22c * fVar37;
        fStack_228 = fStack_21c * (fVar32 * fVar7 - fVar9 * fVar38);
        fStack_224 = fStack_21c * (fVar10 - (fVar2 * fVar38 + fVar36));
        fStack_220 = fStack_21c * fVar34;
        fStack_21c = fStack_21c * fVar34;
        fStack_218 = fStack_20c * (fVar32 * fVar9 + fVar38 * fVar7);
        fStack_214 = fStack_20c * (fVar38 * fVar8 - fVar33);
        fStack_210 = fStack_20c * fVar35;
        fStack_20c = fStack_20c * fVar35;
        fStack_1fc = fStack_200;
        pdb_140e07fe0(auStack_268,&fStack_238);
        fStack_1f8 = param_3[0xc];
        fStack_1f4 = param_3[0xd];
        fStack_1f0 = param_3[0xe];
        fStack_1ec = param_3[0xf];
        pfStack_1e8 = pfVar28;
        param_4 = (float *)pdb_1428f95b0(&fStack_1f8);
        uStack_128 = pdb_1409012c0(uVar23 & 0xffffffff);
        uStack_11c = (uint)(*(char *)((longlong)param_3 + uVar25 + 0x40) == '\x01') << 0xd | 4;
        uStack_158 = uStack_248;
        uStack_154 = uStack_244;
        uStack_150 = uStack_240;
        uStack_14c = uStack_23c;
        uStack_168 = uStack_258;
        uStack_164 = uStack_254;
        uStack_160 = uStack_250;
        uStack_15c = uStack_24c;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = uVar11;
        uStack_130 = 0xc2c80000;
        uStack_12c = SUB84(param_4,0);
        uStack_124 = uVar12;
        pdb_14094c790(&fStack_238,&puStack_178);
        pdb_1428fa830(&lStack_1d8);
      }
    }
    pfVar24 = pfStack_1b8 + 6;
    pdb_140e9a350();
    plVar17 = (longlong *)0x1;
    LOCK();
    bVar3 = *(byte *)pfVar24;
    if (bVar3 == 1) {
      *(byte *)pfVar24 = 0;
    }
    else {
      plVar17 = (longlong *)(ulonglong)bVar3;
    }
    UNLOCK();
    if (bVar3 != 1) {
      plVar17 = (longlong *)pdb_142dbcef0(pfVar24,0);
    }
    if (lStack_100 == 0) {
      return plVar17;
    }
    plVar17 = (longlong *)pdb_140e97000();
    if (((char)plVar17[0xd] != '\x01') &&
       (plVar17 = (longlong *)pdb_142e16b00(plVar17,0), plVar17 == (longlong *)0x0))
    goto LAB_1421a58b0;
    if (*plVar17 == 0) {
      *plVar17 = -1;
      plStack_e8 = plVar17;
      pdb_140e95370(plVar17 + 1,uStack_f8);
      *plStack_e8 = *plStack_e8 + 1;
      return plStack_e8;
    }
LAB_1421a5855:
    pfVar22 = (float *)&UNK_14328b468;
    pdb_142dc8090();
LAB_1421a5862:
    pdb_142dbd1a0();
  } while( true );
}

