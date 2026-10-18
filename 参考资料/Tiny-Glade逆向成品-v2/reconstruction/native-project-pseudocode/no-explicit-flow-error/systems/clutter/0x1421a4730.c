// VA 0x1421a4730, PDB extent 2601 bytes
// system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitch_beams
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/stitch_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::stitch_bricks::spawn_stitch_beams
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/stitch_bricks.rs
   Extent: 2601 */

longlong * pdb_1421a4730(float *param_1,undefined8 *param_2,byte *param_3,float *param_4)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar21;
  byte *pbVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  byte *pbVar26;
  float *pfVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
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
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *puStack_170;
  byte *pbStack_168;
  undefined4 uStack_160;
  undefined8 *puStack_158;
  byte *pbStack_150;
  undefined4 uStack_148;
  undefined *puStack_140;
  code *pcStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte *pbStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  float *pfStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') {
    lStack_d0 = 0;
  }
  else {
    puVar25 = &UNK_14346ca19;
    lVar28 = 0x47;
    uVar20 = 0x47;
    lVar14 = pdb_1421a5c90(&UNK_14346ca19);
    if (lVar14 == 1) {
      if (0x47 < uVar20) {
LAB_1421a4ea0:
        pdb_142dc8070(&UNK_14346ca19,0x47,0);
LAB_1421a4ec0:
        pdb_142dc8070(&UNK_14346ca19,0x47);
        pcVar6 = (code *)swi(3);
        plVar16 = (longlong *)(*pcVar6)();
        return plVar16;
      }
      puVar25 = &UNK_14346ca19;
      uVar15 = pdb_1421a5c90(&UNK_14346ca19);
      if ((uVar15 & 1) != 0) {
        if (0x47 < uVar20 + 2) goto LAB_1421a4ec0;
        lVar28 = 0x45 - uVar20;
        puVar25 = &UNK_14346ca1b + uVar20;
      }
    }
    puVar23 = &UNK_14346c8c1;
    pfVar27 = (float *)&UNK_14346c881;
    do {
      bVar2 = puVar23[-1];
      uVar12 = (uint)(char)bVar2;
      pfStack_b8 = param_1;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar23[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar23[-3];
          if ((char)bVar4 < -0x40) {
            pbVar22 = puVar23 + -4;
            puVar23 = puVar23 + -4;
            uVar12 = bVar4 & 0x3f | (*pbVar22 & 7) << 6;
          }
          else {
            puVar23 = puVar23 + -3;
            uVar12 = bVar4 & 0xf;
          }
          uVar12 = bVar3 & 0x3f | uVar12 << 6;
        }
        else {
          puVar23 = puVar23 + -2;
          uVar12 = bVar3 & 0x1f;
        }
        uVar12 = (uint)(bVar2 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_1421a4894;
LAB_1421a48ac:
        puVar24 = puVar23 + -0x14346c880;
        if ((undefined *)0x40 < puVar24) {
          pdb_142dc8070(&UNK_14346c881,0x40,puVar24,0x40,&UNK_14346cac8);
          goto LAB_1421a4ea0;
        }
        lVar14 = 0x40 - (longlong)puVar24;
        pfVar27 = (float *)(puVar23 + 1);
        goto LAB_1421a48ce;
      }
      puVar23 = puVar23 + -1;
      if (uVar12 == 0x5c) goto LAB_1421a48ac;
LAB_1421a4894:
      if (uVar12 == 0x2f) goto LAB_1421a48ac;
    } while (puVar23 != &UNK_14346c881);
    lVar14 = 0x40;
LAB_1421a48ce:
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] != '\x01') &&
       (plVar16 = (longlong *)pdb_142e16b00(plVar16,0), plVar16 == (longlong *)0x0)) {
LAB_1421a4e40:
      pdb_142dc7890(&UNK_14328b3f8);
LAB_1421a4e4d:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1435b40e0);
    }
    if (*plVar16 != 0) goto LAB_1421a4de5;
    *plVar16 = -1;
    plStack_c0 = plVar16;
    uStack_c8 = pdb_140e94f10(plVar16 + 1,puVar25,lVar28,pfVar27,lVar14,1,0);
    *plStack_c0 = *plStack_c0 + 1;
    lStack_d0 = 1;
    param_1 = pfStack_b8;
  }
  puVar17 = (undefined8 *)pdb_1428fa560(*param_2,&UNK_1435b3fd0);
  if ((puVar17 == (undefined8 *)0x0) ||
     (param_2 = (undefined8 *)(**(code **)(puVar17[1] + 0x18))(*puVar17),
     param_2 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14346c8f8);
  }
  **(undefined4 **)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x1c);
  plVar16 = *(longlong **)param_3;
  if (*plVar16 == 0) {
    pdb_14007ee60();
    param_3 = pub_1406abab0(0x20,8);
    if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 4;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    param_3[0x18] = 0;
    lVar14 = param_2[9];
    do {
      lVar28 = *(longlong *)(lVar14 + 8);
      while (lVar28 != -1) {
        if (lVar28 < 0) {
          puStack_140 = &UNK_143467420;
          pcStack_138 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143467430,&puStack_140,&UNK_1434674b8);
        }
        LOCK();
        lVar19 = *(longlong *)(lVar14 + 8);
        bVar29 = lVar28 == lVar19;
        if (bVar29) {
          *(longlong *)(lVar14 + 8) = lVar28 + 1;
          lVar19 = lVar28;
        }
        UNLOCK();
        lVar28 = lVar19;
        if (bVar29) {
          *plVar16 = lVar14;
          plVar16[1] = (longlong)param_3;
          goto joined_r0x0001421a4d91;
        }
      }
    } while( true );
  }
  param_3 = (byte *)plVar16[1];
joined_r0x0001421a4d91:
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1435b40c8);
  }
  pbVar22 = param_3 + 0x18;
  LOCK();
  bVar29 = param_3[0x18] == 0;
  if (bVar29) {
    param_3[0x18] = 1;
  }
  UNLOCK();
  pfVar27 = param_4;
  if (!bVar29) goto LAB_1421a4df2;
  do {
    param_4 = param_1;
    pdb_140e9a150(pbVar22);
    if ((*(longlong *)(param_3 + 0x10) == 0) ||
       (piVar18 = (int *)(*(longlong *)(param_3 + 8) + *(longlong *)(param_3 + 0x10) * 4 + -4),
       piVar18 == (int *)0x0)) {
      lVar14 = param_2[2];
      if (lVar14 == 0) goto LAB_1421a4e4d;
      iStack_e8 = (int)lVar14 + -1;
    }
    else {
      iStack_e8 = *piVar18;
      lVar14 = param_2[2];
    }
    puStack_140 = (undefined *)param_2[1];
    uStack_130 = *(undefined4 *)(param_2 + 3);
    uStack_12c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_128 = *(undefined4 *)(param_2 + 4);
    uStack_124 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_118 = *(undefined4 *)(param_2 + 5);
    uStack_114 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_110 = *(undefined4 *)(param_2 + 6);
    uStack_10c = *(undefined4 *)((longlong)param_2 + 0x34);
    puStack_108 = param_2 + 0xf;
    puStack_100 = param_2 + 0xb;
    uStack_f8 = *(undefined4 *)(param_2 + 7);
    uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_f0 = *(undefined4 *)(param_2 + 8);
    uStack_ec = *(undefined4 *)((longlong)param_2 + 0x44);
    pcStack_138 = (code *)lVar14;
    pbStack_120 = param_3;
    pdb_1428fb6b0(&puStack_140);
    fVar10 = _DAT_142e36f28;
    pfVar5 = *(float **)(*(longlong *)param_4 + 8);
    pfStack_b8 = pfVar5 + *(longlong *)(*(longlong *)param_4 + 0x10) * 0x10;
    plStack_c0 = *(longlong **)pfVar27;
    pbVar22 = (byte *)0x0;
    while (pbVar26 = pbVar22, pfVar21 = pfVar5, pfVar21 != pfStack_b8) {
      param_2 = *(undefined8 **)(pfVar21 + 0xc);
      puVar17 = param_2;
      uVar20 = pdb_140a6a860(plStack_c0);
      param_3 = pbVar26;
      pfVar5 = pfVar21 + 0x10;
      pbVar22 = pbVar26 + 1;
      pfVar27 = pfVar21;
      if ((uVar20 & 1) != 0) {
        fStack_1fc = (float)*(longlong *)(pfVar21 + 8);
        fStack_1ec = (float)((ulonglong)*(longlong *)(pfVar21 + 8) >> 0x20);
        fVar7 = *pfVar21;
        fVar8 = pfVar21[1];
        fVar9 = pfVar21[3];
        fStack_1e8 = pfVar21[4];
        fStack_1e4 = pfVar21[5];
        fStack_1e0 = pfVar21[6];
        fVar1 = pfVar21[2];
        fVar36 = fVar1 + fVar1;
        fVar30 = fVar8 + fVar8;
        fVar34 = fVar7 * (fVar7 + fVar7);
        fVar31 = (fVar7 + fVar7) * fVar9;
        fVar35 = fVar36 * fVar7 - fVar30 * fVar9;
        fVar32 = fVar31 + fVar36 * fVar8;
        fVar33 = fVar10 - (fVar34 + fVar8 * fVar30);
        fStack_20c = pfVar21[7];
        fStack_218 = fStack_20c * (fVar10 - (fVar8 * fVar30 + fVar1 * fVar36));
        fStack_214 = fStack_20c * (fVar30 * fVar7 + fVar9 * fVar36);
        fStack_210 = fStack_20c * fVar35;
        fStack_20c = fStack_20c * fVar35;
        fStack_208 = fStack_1fc * (fVar30 * fVar7 - fVar9 * fVar36);
        fStack_204 = fStack_1fc * (fVar10 - (fVar1 * fVar36 + fVar34));
        fStack_200 = fStack_1fc * fVar32;
        fStack_1fc = fStack_1fc * fVar32;
        fStack_1f8 = fStack_1ec * (fVar30 * fVar9 + fVar36 * fVar7);
        fStack_1f4 = fStack_1ec * (fVar36 * fVar8 - fVar31);
        fStack_1f0 = fStack_1ec * fVar33;
        fStack_1ec = fStack_1ec * fVar33;
        fStack_1dc = fStack_1e0;
        pdb_140e07fe0(&uStack_248,&fStack_218);
        uStack_148 = 0;
        puStack_158 = param_2;
        pbStack_150 = pbVar26;
        uVar13 = pdb_1428f9750(&puStack_158);
        uStack_160 = 1;
        puStack_170 = param_2;
        pbStack_168 = pbVar26;
        param_2 = (undefined8 *)pdb_1428f9750(&puStack_170);
        uVar12 = pdb_1409012c0((ulonglong)puVar17 & 0xffffffff);
        param_4 = (float *)(ulonglong)uVar12;
        cVar11 = *(char *)(pfVar21 + 0xe);
        param_3 = (byte *)CONCAT71((int7)((ulonglong)pbVar26 >> 8),cVar11);
        pdb_140a77410(&fStack_218);
        iStack_18c = (uint)(cVar11 == '\x03') * 0x20 + 1;
        uStack_1a8 = uStack_228;
        uStack_1a4 = uStack_224;
        uStack_1a0 = uStack_220;
        uStack_19c = uStack_21c;
        uStack_1b8 = uStack_238;
        uStack_1b4 = uStack_234;
        uStack_1b0 = uStack_230;
        uStack_1ac = uStack_22c;
        uStack_1c8 = uStack_248;
        uStack_1c0 = uStack_240;
        uStack_194 = SUB84(param_2,0);
        uStack_188 = uStack_1d8;
        uStack_184 = uStack_1d4;
        uStack_180 = uStack_1d0;
        uStack_17c = uStack_1cc;
        uStack_198 = uVar13;
        uStack_190 = uVar12;
        pdb_1428faf20(&puStack_140);
      }
    }
    pbVar22 = pbStack_120 + 0x18;
    pdb_140e9a350();
    plVar16 = (longlong *)0x1;
    LOCK();
    bVar2 = *pbVar22;
    if (bVar2 == 1) {
      *pbVar22 = 0;
    }
    else {
      plVar16 = (longlong *)(ulonglong)bVar2;
    }
    UNLOCK();
    if (bVar2 != 1) {
      plVar16 = (longlong *)pdb_142dbcef0(pbVar22,0);
    }
    if (lStack_d0 == 0) {
      return plVar16;
    }
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] != '\x01') &&
       (plVar16 = (longlong *)pdb_142e16b00(plVar16,0), plVar16 == (longlong *)0x0))
    goto LAB_1421a4e40;
    if (*plVar16 == 0) {
      *plVar16 = -1;
      pfStack_b8 = (float *)plVar16;
      pdb_140e95370(plVar16 + 1,uStack_c8);
      *(longlong *)pfStack_b8 = *(longlong *)pfStack_b8 + 1;
      return (longlong *)pfStack_b8;
    }
LAB_1421a4de5:
    pbVar22 = &UNK_14328b468;
    pdb_142dc8090();
    param_1 = param_4;
LAB_1421a4df2:
    pdb_142dbd1a0();
  } while( true );
}

