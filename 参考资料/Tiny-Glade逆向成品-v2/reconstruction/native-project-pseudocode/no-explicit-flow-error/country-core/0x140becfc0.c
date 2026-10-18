// VA 0x140becfc0, PDB extent 3880 bytes
// country_core::resources::in_progress_curve::InProgressCurve::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/in_progress_curve.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::in_progress_curve::InProgressCurve::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/in_progress_curve.rs
   Extent: 3880 */

ulonglong *
pdb_140becfc0(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  undefined *puVar27;
  longlong lStack_238;
  byte *pbStack_230;
  longlong lStack_220;
  byte *pbStack_218;
  ulonglong *puStack_200;
  longlong lStack_1f8;
  ulonglong *puStack_1f0;
  longlong lStack_1e8;
  byte *pbStack_1e0;
  ulonglong *puStack_1c8;
  ulonglong *puStack_1c0;
  ulonglong *puStack_1b8;
  ulonglong *puStack_1b0;
  ulonglong uStack_1a8;
  byte *pbStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_170;
  byte *pbStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  byte *pbStack_150;
  ulonglong *puStack_138;
  ulonglong *puStack_130;
  ulonglong *puStack_128;
  ulonglong uStack_120;
  byte *pbStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong *puStack_100;
  byte *pbStack_f8;
  ulonglong *puStack_f0;
  ulonglong *puStack_e8;
  longlong lStack_e0;
  ulonglong *puStack_d8;
  ulonglong *puStack_c8;
  byte *pbStack_c0;
  ulonglong *puStack_b8;
  code *pcStack_b0;
  ulonglong *puStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong *puStack_80;
  byte *pbStack_78;
  ulonglong *puStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_80 = param_2;
  if (*(float *)(param_2 + 6) <= _DAT_143065940) {
    puVar12 = (ulonglong *)param_2[2];
    pbVar8 = (byte *)((longlong)puVar12 * 8);
    if (puVar12 == (ulonglong *)0x0) {
      puVar10 = (ulonglong *)0x4;
    }
    else {
      uVar13 = param_2[1];
      pdb_14007ee60();
      puVar10 = (ulonglong *)pub_1406abab0((ulonglong)pbVar8,4);
      if (puVar10 == (ulonglong *)0x0) {
        pdb_142dc7e2a(4,pbVar8);
        goto LAB_140bed9e7;
      }
      pub_142e32760(puVar10,uVar13,pbVar8);
    }
    uVar11 = param_2[5];
    uVar13 = uVar11 * 4;
    if (0x7ffffffffffffffc < uVar13 || uVar11 >> 0x3e != 0) {
      uVar19 = 0;
      pbStack_78 = pbVar8;
      puStack_70 = puVar10;
LAB_140bed248:
      puStack_1b0 = puVar12;
      pdb_142dc7e2a(uVar19,uVar13);
      goto LAB_140bed9e7;
    }
    if (uVar13 == 0) {
      pbVar8 = (byte *)0x4;
      pcStack_b0 = (code *)puVar10;
    }
    else {
      puVar3 = (undefined4 *)param_2[4];
      pbStack_78 = pbVar8;
      puStack_70 = puVar10;
      pdb_14007ee60();
      uVar19 = 4;
      pbVar8 = pub_1406abab0(uVar13,4);
      if (pbVar8 == (byte *)0x0) goto LAB_140bed248;
      pcStack_b0 = (code *)puStack_70;
      if (uVar11 != 0) {
        uVar13 = uVar11 - 1;
        if (uVar11 < uVar11 - 1) {
          uVar13 = uVar11;
        }
        if (uVar13 < 8) {
          lVar17 = 0;
          uVar13 = uVar11;
          puVar20 = puVar3;
        }
        else {
          uVar13 = uVar13 + 1;
          uVar15 = 8;
          if ((uVar13 & 7) != 0) {
            uVar15 = (ulonglong)((uint)uVar13 & 7);
          }
          lVar17 = uVar13 - uVar15;
          uVar13 = uVar11 - lVar17;
          puVar20 = puVar3 + lVar17;
          lVar22 = 0;
          do {
            uVar19 = *(undefined8 *)((longlong)(puVar3 + lVar22) + 8);
            uVar2 = *(undefined8 *)(puVar3 + lVar22 + 4);
            uVar5 = *(undefined8 *)((longlong)(puVar3 + lVar22 + 4) + 8);
            *(undefined8 *)(pbVar8 + lVar22 * 4) = *(undefined8 *)(puVar3 + lVar22);
            *(undefined8 *)(pbVar8 + lVar22 * 4 + 8) = uVar19;
            *(undefined8 *)(pbVar8 + lVar22 * 4 + 0x10) = uVar2;
            *(undefined8 *)(pbVar8 + lVar22 * 4 + 0x10 + 8) = uVar5;
            lVar22 = lVar22 + 8;
          } while (lVar17 != lVar22);
        }
        pbVar9 = pbVar8 + lVar17 * 4;
        do {
          if (puVar20 == puVar3 + uVar11) break;
          uVar1 = *puVar20;
          puVar20 = puVar20 + 1;
          *(undefined4 *)pbVar9 = uVar1;
          pbVar9 = pbVar9 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    uStack_88 = CONCAT44(uStack_88._4_4_,(int)param_2[6]);
    puStack_b8 = puVar12;
    puStack_a8 = puVar12;
    uStack_a0 = uVar11;
    pbStack_98 = pbVar8;
    uStack_90 = uVar11;
    if (puVar12 == (ulonglong *)0x0) {
      puVar10 = (ulonglong *)0x0;
      pbVar8 = (byte *)0x8;
    }
    else {
      pdb_14007ee60();
      pbVar8 = pub_1406abab0((longlong)puVar12 * 8,8);
      uVar2 = _UNK_143065938;
      uVar19 = _DAT_143065930;
      if (pbVar8 == (byte *)0x0) {
        pdb_142dc7e2a(8,(longlong)puVar12 * 8);
        goto LAB_140bed9e7;
      }
      pbVar9 = pbVar8;
      puVar10 = (ulonglong *)0x1;
      if (puVar12 != (ulonglong *)0x1) {
        puVar14 = (ulonglong *)0x1;
        puVar10 = puVar12;
        if ((ulonglong *)0x4 < puVar12) {
          pbVar16 = (byte *)((longlong)puVar12 - 1U & 0xfffffffffffffffc);
          pbVar9 = pbVar8 + (longlong)pbVar16 * 8;
          puVar14 = (ulonglong *)(pbVar16 + 1);
          pbVar21 = (byte *)0x0;
          do {
            *(undefined8 *)(pbVar8 + (longlong)pbVar21 * 8) = uVar19;
            *(undefined8 *)(pbVar8 + (longlong)pbVar21 * 8 + 8) = uVar2;
            *(undefined8 *)(pbVar8 + (longlong)pbVar21 * 8 + 0x10) = uVar19;
            *(undefined8 *)(pbVar8 + (longlong)pbVar21 * 8 + 0x10 + 8) = uVar2;
            pbVar21 = pbVar21 + 4;
          } while (pbVar16 != pbVar21);
          if ((byte *)((longlong)puVar12 - 1U) == pbVar16) goto LAB_140bed496;
        }
        do {
          puVar14 = (ulonglong *)((longlong)puVar14 + 1);
          pbVar9[0] = 1;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          pbVar9[4] = 0;
          pbVar9[5] = 0;
          pbVar9[6] = 0;
          pbVar9[7] = 0;
          pbVar9 = pbVar9 + 8;
        } while (puVar12 != puVar14);
      }
LAB_140bed496:
      pbVar9[0] = 1;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
    }
    uStack_108 = uStack_88;
    pbStack_118 = pbStack_98;
    uStack_110 = uStack_90;
    puStack_128 = puStack_a8;
    uStack_120 = uStack_a0;
    puStack_138 = puStack_b8;
    puStack_130 = (ulonglong *)pcStack_b0;
    puStack_c8 = puVar10;
    pbStack_c0 = pbVar8;
    pdb_140b41dc0(&uStack_1a8,pcStack_b0,puStack_a8,_DAT_142e3b1d8);
    puVar14 = puStack_80;
    param_1[6] = uStack_108;
    param_1[4] = (ulonglong)pbStack_118;
    param_1[5] = uStack_110;
    param_1[2] = (ulonglong)puStack_128;
    param_1[3] = uStack_120;
    *param_1 = (ulonglong)puStack_138;
    param_1[1] = (ulonglong)puStack_130;
    param_1[7] = (ulonglong)puVar10;
    param_1[8] = (ulonglong)pbVar8;
    param_1[9] = (ulonglong)puVar12;
    param_1[10] = uStack_1a8;
    param_1[0xb] = (ulonglong)pbStack_1a0;
    param_1[0xc] = uStack_198;
    param_1[0xd] = uStack_190;
    param_1[0xe] = uStack_188;
    param_1[0xf] = uStack_180;
    if (*puStack_80 != 0) {
      pub_1406abac0((byte *)puStack_80[1],*puStack_80 << 3,4);
    }
    goto LAB_140bed9e9;
  }
  uVar13 = param_2[2];
  if ((uVar13 == 0) || (uVar11 = param_2[1], uVar11 + uVar13 * 8 == 8)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143065c00);
  }
  if (uVar13 < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar13 - 2,1,&UNK_143065c18);
  }
  uVar19 = *(undefined8 *)((uVar11 - 0x10) + uVar13 * 8);
  uVar2 = *(undefined8 *)((uVar11 - 8) + uVar13 * 8);
  fVar25 = (float)uVar2 - (float)uVar19;
  fVar26 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar19 >> 0x20);
  fVar25 = SQRT(fVar26 * fVar26 + fVar25 * fVar25);
  if (_DAT_142e37830 <= fVar25) {
    fVar25 = _DAT_142e37830;
  }
  fVar25 = _DAT_142e36f28 - fVar25 / *(float *)(param_2 + 6);
  uStack_170 = CONCAT44(uStack_170._4_4_,fVar25);
  if ((fVar25 < 0.0) || (_DAT_142e36f28 < fVar25)) {
    puStack_b8 = &uStack_170;
    pcStack_b0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335ec38,&puStack_b8,&UNK_143065c30);
  }
  pdb_1419a77d0(&puStack_200,param_2,param_3,param_4,&UNK_143065c48);
  uStack_62 = 1;
  puVar27 = &UNK_143065c60;
  pdb_1419a77d0(&lStack_238,puStack_80);
  uStack_63 = 1;
  pdb_1419ab4d0(&uStack_170);
  puStack_d8 = puStack_1f0;
  puStack_e8 = puStack_200;
  lStack_e0 = lStack_1f8;
  if (puStack_1f0 == (ulonglong *)0x0) {
    pbVar8 = (byte *)0x8;
    puStack_100 = (ulonglong *)0x0;
  }
  else {
    pdb_14007ee60();
    pbVar8 = pub_1406abab0((longlong)puStack_1f0 * 8,8);
    uVar2 = _UNK_143065958;
    uVar19 = _DAT_143065950;
    if (pbVar8 == (byte *)0x0) {
      uStack_64 = 1;
      pdb_142dc7e2a(8,(longlong)puStack_1f0 * 8);
      goto LAB_140bed9e7;
    }
    pbVar9 = pbVar8;
    puStack_100 = (ulonglong *)0x1;
    if (puStack_1f0 != (ulonglong *)0x1) {
      puVar12 = (ulonglong *)0x1;
      puStack_100 = puStack_1f0;
      if ((ulonglong *)0x4 < puStack_1f0) {
        pbVar21 = (byte *)((longlong)puStack_1f0 - 1U & 0xfffffffffffffffc);
        pbVar9 = pbVar8 + (longlong)pbVar21 * 8;
        puVar12 = (ulonglong *)(pbVar21 + 1);
        pbVar16 = (byte *)0x0;
        do {
          *(undefined8 *)(pbVar8 + (longlong)pbVar16 * 8) = uVar19;
          *(undefined8 *)(pbVar8 + (longlong)pbVar16 * 8 + 8) = uVar2;
          *(undefined8 *)(pbVar8 + (longlong)pbVar16 * 8 + 0x10) = uVar19;
          *(undefined8 *)(pbVar8 + (longlong)pbVar16 * 8 + 0x10 + 8) = uVar2;
          pbVar16 = pbVar16 + 4;
        } while (pbVar21 != pbVar16);
        if ((byte *)((longlong)puStack_1f0 - 1U) == pbVar21) goto LAB_140bed1b6;
      }
      do {
        puVar12 = (ulonglong *)((longlong)puVar12 + 1);
        pbVar9[0] = 0xe8;
        pbVar9[1] = 3;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9[4] = 0;
        pbVar9[5] = 0;
        pbVar9[6] = 0;
        pbVar9[7] = 0;
        pbVar9 = pbVar9 + 8;
      } while (puStack_1f0 != puVar12);
    }
LAB_140bed1b6:
    pbVar9[0] = 0xe8;
    pbVar9[1] = 3;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
  }
  puStack_f0 = puStack_1f0;
  pbStack_f8 = pbVar8;
  if (uStack_160 == 0) {
    uStack_61 = 1;
    pdb_142dc8420(1,0,0,&UNK_143065c78,puVar27);
    goto LAB_140bed9e7;
  }
  uVar13 = uStack_160 - 1;
  uVar11 = uVar13;
  if ((ulonglong)((longlong)puStack_100 - (longlong)puStack_1f0) < uVar13) {
    uStack_61 = 1;
    pdb_142d7f1b0(&puStack_100,puStack_1f0,uVar13,8,8);
    pbVar8 = pbStack_f8;
    puVar12 = puStack_f0;
    if (uStack_160 < 5) {
LAB_140bed6a0:
      do {
        pbVar9 = pbVar8 + (longlong)puVar12 * 8;
        pbVar9[0] = 1;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9[4] = 0;
        pbVar9[5] = 0;
        pbVar9[6] = 0;
        pbVar9[7] = 0;
        puVar12 = (ulonglong *)((longlong)puVar12 + 1);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    else {
LAB_140bed65a:
      uVar2 = _UNK_143065938;
      uVar19 = _DAT_143065930;
      uVar15 = uVar13 & 0xfffffffffffffffc;
      puVar12 = (ulonglong *)((longlong)puStack_f0 + uVar15);
      uVar11 = 0;
      do {
        *(undefined8 *)(pbStack_f8 + uVar11 * 8 + (longlong)puStack_f0 * 8) = uVar19;
        *(undefined8 *)(pbStack_f8 + uVar11 * 8 + (longlong)puStack_f0 * 8 + 8) = uVar2;
        *(undefined8 *)(pbStack_f8 + uVar11 * 8 + (longlong)puStack_f0 * 8 + 0x10) = uVar19;
        *(undefined8 *)(pbStack_f8 + uVar11 * 8 + (longlong)puStack_f0 * 8 + 0x10 + 8) = uVar2;
        uVar11 = uVar11 + 4;
      } while (uVar15 != uVar11);
      uVar11 = (ulonglong)((uint)uVar13 & 3);
      pbVar8 = pbStack_f8;
      if (uVar13 != uVar15) goto LAB_140bed6a0;
    }
    if ((ulonglong)((longlong)puStack_e8 - (longlong)puStack_1f0) < uVar13) {
      uStack_61 = 1;
      pdb_142d7f1b0(&puStack_e8,puStack_1f0,uVar13,4,8);
      puStack_1f0 = puStack_d8;
    }
    pub_142e32760((longlong)puStack_1f0 * 8 + lStack_e0,pbStack_168 + 8,uVar13 * 8);
  }
  else {
    puVar12 = puStack_1f0;
    if (uVar13 != 0) {
      if (4 < uStack_160) goto LAB_140bed65a;
      goto LAB_140bed6a0;
    }
  }
  puStack_1b8 = (ulonglong *)((longlong)puStack_1f0 + uVar13);
  puStack_1c8 = puStack_e8;
  puStack_1c0 = (ulonglong *)lStack_e0;
  uStack_61 = 0;
  puStack_d8 = puStack_1b8;
  pdb_140080c90(&puStack_b8,&puStack_1c8,0);
  if (SBORROW8(0,(longlong)puStack_b8)) {
    puStack_1c8 = (ulonglong *)pcStack_b0;
    puStack_1c0 = puStack_a8;
    uStack_61 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14335e278,0x2b,&puStack_1c8,&UNK_14335e258,&UNK_143065c90);
  }
  uStack_108 = uStack_88;
  pbStack_118 = pbStack_98;
  uStack_110 = uStack_90;
  puStack_128 = puStack_a8;
  uStack_120 = uStack_a0;
  puStack_138 = puStack_b8;
  puStack_130 = (ulonglong *)pcStack_b0;
  puStack_70 = puStack_100;
  if (uStack_170 != 0) {
    pub_1406abac0(pbStack_168,uStack_170 << 3,4);
  }
  puVar10 = puStack_80;
  if (lStack_158 != 0) {
    pub_1406abac0(pbStack_150,lStack_158 << 2,4);
  }
  if (lStack_238 != 0) {
    pub_1406abac0(pbStack_230,lStack_238 << 3,4);
  }
  if (lStack_220 != 0) {
    pub_1406abac0(pbStack_218,lStack_220 << 2,4);
  }
  if (lStack_1e8 != 0) {
    pub_1406abac0(pbStack_1e0,lStack_1e8 << 2,4);
  }
  uStack_88 = uStack_108;
  pbStack_98 = pbStack_118;
  uStack_90 = uStack_110;
  puStack_a8 = puStack_128;
  uStack_a0 = uStack_120;
  puStack_b8 = puStack_138;
  pcStack_b0 = (code *)puStack_130;
  uVar15 = puVar10[2];
  uVar13 = uVar15 - 1;
  uVar11 = uVar15 * 8 - 8;
  if (uVar11 < 0x7ffffffffffffff9 && uVar13 >> 0x3d == 0) {
    pbStack_78 = pbVar8;
    if (uVar13 == 0) {
      pbStack_168 = (byte *)0x8;
    }
    else {
      pdb_14007ee60();
      uVar19 = 8;
      pbStack_168 = pub_1406abab0(uVar11,8);
      lVar7 = _UNK_142e4ffa8;
      lVar6 = _DAT_142e4ffa0;
      lVar22 = _UNK_142e4ff98;
      lVar17 = _DAT_142e4ff90;
      if (pbStack_168 == (byte *)0x0) goto LAB_140bed873;
      if (3 < uVar13) {
        uVar11 = uVar13 & 0x1ffffffffffffffc;
        uVar18 = 0;
        lVar23 = _DAT_142e4ff80;
        lVar24 = _UNK_142e4ff88;
        do {
          *(longlong *)(pbStack_168 + uVar18 * 8) = lVar23;
          *(longlong *)(pbStack_168 + uVar18 * 8 + 8) = lVar24;
          *(longlong *)(pbStack_168 + uVar18 * 8 + 0x10) = lVar23 + lVar17;
          *(longlong *)(pbStack_168 + uVar18 * 8 + 0x10 + 8) = lVar24 + lVar22;
          uVar18 = uVar18 + 4;
          lVar23 = lVar23 + lVar6;
          lVar24 = lVar24 + lVar7;
          if (uVar11 == uVar18) goto LAB_140bedaf0;
        } while( true );
      }
      uVar11 = 0;
      do {
        *(ulonglong *)(pbStack_168 + uVar11 * 8) = uVar11;
        uVar11 = uVar11 + 1;
LAB_140bedaf0:
      } while (uVar13 != uVar11);
    }
    puVar10 = puStack_a8;
    uStack_170 = uVar13;
    uStack_160 = uVar13;
    pdb_142d896b0(&uStack_170);
    *(byte **)(pbStack_168 + uVar15 * 8 + -8) = (byte *)((longlong)puVar10 - 1);
    uStack_190 = *puStack_80;
    uStack_188 = puStack_80[1];
    uStack_180 = puStack_80[2];
    uStack_1a8 = uStack_170;
    pbStack_1a0 = pbStack_168;
    param_1[6] = uStack_108;
    param_1[4] = (ulonglong)pbStack_118;
    param_1[5] = uStack_110;
    param_1[2] = (ulonglong)puStack_128;
    param_1[3] = uStack_120;
    *param_1 = (ulonglong)puStack_138;
    param_1[1] = (ulonglong)puStack_130;
    param_1[7] = (ulonglong)puStack_70;
    param_1[8] = (ulonglong)pbStack_78;
    param_1[9] = (ulonglong)puVar12;
    param_1[10] = uStack_170;
    param_1[0xb] = (ulonglong)pbStack_168;
    param_1[0xc] = uVar15;
    param_1[0xd] = uStack_190;
    param_1[0xe] = uStack_188;
    param_1[0xf] = uStack_180;
    puVar14 = puStack_80;
    uStack_198 = uVar15;
    uStack_160 = uVar15;
LAB_140bed9e9:
    if (puVar14[3] != 0) {
      pub_1406abac0((byte *)puVar14[4],puVar14[3] << 2,4);
    }
    return param_1;
  }
  uVar19 = 0;
LAB_140bed873:
  puStack_c8 = puStack_70;
  pbStack_c0 = pbVar8;
  pdb_142dc7e2a(uVar19,uVar11);
LAB_140bed9e7:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

