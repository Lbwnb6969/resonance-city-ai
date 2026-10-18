// VA 0x1417da250, PDB extent 5047 bytes
// asset_pipe::texture_processing::alpha_distribution_visibility
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture_processing::alpha_distribution_visibility
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 5047 */

void pdb_1417da250(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  float fVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  longlong lVar25;
  undefined1 auVar26 [16];
  longlong lVar27;
  longlong lVar29;
  undefined1 auVar28 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  byte *pbStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  undefined8 *puStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  longlong *plStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar18 = param_4[2];
  if (uVar18 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    if (*param_4 == 0) {
      return;
    }
    lVar12 = param_4[1];
    uVar20 = GetProcessHeap(lVar12,*param_4 << 2);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar20,0,lVar12);
    return;
  }
  puStack_150 = param_1;
  pdb_14007ee60();
  pbStack_c8 = pub_1406abab0(0x58,8);
  auVar6 = _DAT_142e3c640;
  plStack_e0 = param_4;
  if (pbStack_c8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x58);
  }
  pbStack_60 = (byte *)param_4[1];
  if (7 < uVar18) {
    uVar8 = uVar18 & 0x1ffffffffffffff8;
    uVar14 = 0;
    do {
      auVar31 = maxps(ZEXT816(0),*(undefined1 (*) [16])(pbStack_60 + uVar14));
      auVar26 = maxps(ZEXT816(0),*(undefined1 (*) [16])(pbStack_60 + uVar14 + 0x10));
      auVar31 = minps(auVar6,auVar31);
      auVar26 = minps(auVar6,auVar26);
      *(undefined1 (*) [16])(pbStack_60 + uVar14) = auVar31;
      *(undefined1 (*) [16])(pbStack_60 + uVar14 + 0x10) = auVar26;
      uVar14 = uVar14 + 0x20;
      fVar22 = _DAT_142e36f28;
      if ((uVar18 * 4 & 0xffffffffffffffe0) == uVar14) goto joined_r0x0001417da37a;
    } while( true );
  }
  uVar8 = 0;
  fVar22 = _DAT_142e36f28;
  do {
    fVar4 = 0.0;
    if (0.0 <= *(float *)(pbStack_60 + uVar8 * 4)) {
      fVar4 = *(float *)(pbStack_60 + uVar8 * 4);
    }
    fVar5 = fVar22;
    if (fVar4 <= fVar22) {
      fVar5 = fVar4;
    }
    *(float *)(pbStack_60 + uVar8 * 4) = fVar5;
    uVar8 = uVar8 + 1;
joined_r0x0001417da37a:
  } while (uVar18 != uVar8);
  pbStack_50 = (byte *)*param_4;
  pbVar17 = (byte *)(param_3 * param_2);
  uVar8 = (longlong)pbVar17 * 8;
  if (0x7ffffffffffffff8 < uVar8 || (ulonglong)pbVar17 >> 0x3d != 0) {
    uVar20 = 0;
LAB_1417da3f0:
    pdb_142dc7e2a(uVar20,uVar8);
    goto LAB_1417dabe6;
  }
  if (uVar8 == 0) {
    pbStack_58 = (byte *)0x0;
    pbStack_70 = (byte *)0x8;
    if ((byte *)0x1 < pbVar17) goto LAB_1417da437;
LAB_1417da464:
    pbVar9 = pbStack_70;
    if (pbVar17 != (byte *)0x0) goto LAB_1417da4c0;
  }
  else {
    pdb_14007ee60();
    uVar20 = 8;
    pbVar9 = pub_1406abab0(uVar8,8);
    if (pbVar9 == (byte *)0x0) goto LAB_1417da3f0;
    pbStack_70 = pbVar9;
    pbStack_58 = pbVar17;
    if (pbVar17 < (byte *)0x2) goto LAB_1417da464;
LAB_1417da437:
    uVar7 = _UNK_143065938;
    uVar20 = _DAT_143065930;
    if (pbVar17 < (byte *)0x5) {
      pbVar10 = (byte *)0x1;
      pbVar9 = pbStack_70;
LAB_1417da4a9:
      lVar12 = (longlong)pbVar17 - (longlong)pbVar10;
      do {
        pbVar9[0] = 1;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9[4] = 0;
        pbVar9[5] = 0;
        pbVar9[6] = 0;
        pbVar9[7] = 0;
        pbVar9 = pbVar9 + 8;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    else {
      pbVar11 = (byte *)((ulonglong)(pbVar17 + -1) & 0xfffffffffffffffc);
      pbVar9 = pbStack_70 + (longlong)pbVar11 * 8;
      pbVar10 = pbVar11 + 1;
      pbVar19 = (byte *)0x0;
      do {
        *(undefined8 *)(pbStack_70 + (longlong)pbVar19 * 8) = uVar20;
        *(undefined8 *)(pbStack_70 + (longlong)pbVar19 * 8 + 8) = uVar7;
        *(undefined8 *)(pbStack_70 + (longlong)pbVar19 * 8 + 0x10) = uVar20;
        *(undefined8 *)(pbStack_70 + (longlong)pbVar19 * 8 + 0x10 + 8) = uVar7;
        pbVar19 = pbVar19 + 4;
      } while (pbVar11 != pbVar19);
      if (pbVar17 + -1 != pbVar11) goto LAB_1417da4a9;
    }
LAB_1417da4c0:
    pbVar9[0] = 1;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
  }
  pbStack_148 = (byte *)0x0;
  pbStack_140 = (byte *)0x8;
  pbStack_138 = (byte *)0x0;
  pdb_1425690d0(&lStack_b8,&pbStack_148);
  *(byte **)(pbStack_c8 + 0x40) = pbStack_a8;
  *(longlong *)(pbStack_c8 + 0x30) = lStack_b8;
  *(byte **)(pbStack_c8 + 0x38) = pbStack_b0;
  *(byte **)pbStack_c8 = pbStack_50;
  *(byte **)(pbStack_c8 + 8) = pbStack_60;
  *(ulonglong *)(pbStack_c8 + 0x10) = uVar18;
  *(byte **)(pbStack_c8 + 0x18) = pbStack_58;
  *(byte **)(pbStack_c8 + 0x20) = pbStack_70;
  *(byte **)(pbStack_c8 + 0x28) = pbVar17;
  *(longlong *)(pbStack_c8 + 0x48) = param_2;
  *(longlong *)(pbStack_c8 + 0x50) = param_3;
  pbStack_88 = (byte *)0x1;
  pbStack_80 = pbStack_c8;
  pbStack_78 = (byte *)0x1;
  lVar12 = 0x58;
  pbVar17 = pbStack_c8 + 0x58;
  do {
    if (pbStack_80 + lVar12 == (byte *)0x58) break;
    uVar18 = *(ulonglong *)(pbVar17 + -0x10);
    uVar8 = *(ulonglong *)(pbVar17 + -8);
    if (uVar8 < 2 && uVar18 < 2) goto LAB_1417daa8d;
    uVar15 = uVar18 - (uVar18 >> 1);
    uVar16 = uVar8 - (uVar8 >> 1);
    pbVar9 = (byte *)(uVar16 * uVar15);
    uVar14 = (longlong)pbVar9 * 4;
    if (0x7ffffffffffffffc < uVar14 || (ulonglong)pbVar9 >> 0x3e != 0) {
      uVar20 = 0;
LAB_1417da9f5:
      pdb_142dc7e2a(uVar20,uVar14);
      goto LAB_1417dabe6;
    }
    uStack_e8 = uVar8;
    pbStack_50 = pbVar9;
    if (uVar14 == 0) {
      pbStack_60 = (byte *)0x4;
      pbVar9 = (byte *)0x0;
    }
    else {
      pdb_14007ee60();
      uVar20 = 4;
      pbStack_60 = pub_1406abae0(uVar14,4);
      pbVar9 = pbStack_50;
      if (pbStack_60 == (byte *)0x0) goto LAB_1417da9f5;
    }
    uVar8 = (longlong)pbStack_50 * 8;
    pbStack_d8 = pbVar9;
    if (0x7ffffffffffffff8 < uVar8 || (ulonglong)pbStack_50 >> 0x3d != 0) {
      uVar20 = 0;
LAB_1417daa08:
      pdb_142dc7e2a(uVar20,uVar8);
      goto LAB_1417dabe6;
    }
    if (uVar8 == 0) {
      pbStack_68 = (byte *)0x8;
      pbStack_c0 = (byte *)0x0;
    }
    else {
      pdb_14007ee60();
      uVar20 = 8;
      pbStack_68 = pub_1406abae0(uVar8,8);
      if (pbStack_68 == (byte *)0x0) goto LAB_1417daa08;
      pbStack_c0 = pbStack_50;
    }
    pbVar9 = pbStack_50;
    lStack_b8 = 0;
    pbStack_b0 = (byte *)0x8;
    pbStack_a8 = (byte *)0x0;
    pdb_1425690d0(&uStack_1b0);
    uStack_a0 = *(ulonglong *)(pbVar17 + -0x50);
    pbStack_70 = *(byte **)(pbVar17 + -0x48);
    pbStack_90 = *(byte **)(pbVar17 + -0x30);
    pbStack_98 = *(byte **)(pbVar17 + -0x38);
    lStack_d0 = lStack_1a8;
    pbStack_58 = pbStack_1a0;
    pbVar17 = pbStack_d8;
    uVar8 = uStack_e8;
    uVar14 = 0;
    uStack_168 = uVar15;
    uStack_160 = uVar16;
    uStack_f0 = uVar18;
    while (pbVar10 = pbStack_78, uVar14 < uVar16) {
      uStack_158 = uVar14 + 1;
      lStack_178 = uVar14 * uVar15;
      uStack_190 = uVar14 * 2 + 2;
      uStack_170 = uVar14 * 2;
      if (uVar8 < uStack_190) {
        uStack_190 = uVar8;
      }
      uVar13 = 0;
      while (uVar14 = uStack_158, uVar13 < uVar15) {
        uStack_180 = uVar13 + 1;
        pbVar10 = (byte *)(uVar13 + lStack_178);
        uVar14 = uVar13 * 2 + 2;
        uStack_188 = uVar13 * 2;
        if (uVar18 < uVar14) {
          uVar14 = uVar18;
        }
        plVar1 = (longlong *)(lStack_d0 + (longlong)pbVar10 * 0x18);
        uVar21 = uStack_170;
        while (pbVar17 = pbStack_d8, uVar8 = uStack_e8, pbVar9 = pbStack_50, uVar13 = uStack_180,
              uVar15 = uStack_168, uVar16 = uStack_160, uVar18 = uStack_f0, uVar21 < uStack_190) {
          uStack_198 = uVar21 + 1;
          lVar12 = uVar21 * uStack_f0;
          for (uVar18 = uStack_188; uVar21 = uStack_198, uVar18 < uVar14; uVar18 = uVar18 + 1) {
            pbVar17 = (byte *)(uVar18 + lVar12);
            if (pbStack_70 <= pbVar17) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar17,pbStack_70,&UNK_143339258);
            }
            if (pbStack_50 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar10,pbStack_50,&UNK_143339270);
            }
            *(float *)(pbStack_60 + (longlong)pbVar10 * 4) =
                 *(float *)(uStack_a0 + (longlong)pbVar17 * 4) +
                 *(float *)(pbStack_60 + (longlong)pbVar10 * 4);
            if (pbStack_90 <= pbVar17) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar17,pbStack_90,&UNK_143339288);
            }
            *(longlong *)(pbStack_68 + (longlong)pbVar10 * 8) =
                 *(longlong *)(pbStack_68 + (longlong)pbVar10 * 8) +
                 *(longlong *)(pbStack_98 + (longlong)pbVar17 * 8);
            if (pbStack_58 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar10,pbStack_58,&UNK_1433392a0);
            }
            lVar2 = plVar1[2];
            if (lVar2 == *plVar1) {
              pdb_142dbb1c0(plVar1);
            }
            *(byte **)(plVar1[1] + lVar2 * 8) = pbVar17;
            plVar1[2] = lVar2 + 1;
          }
        }
      }
    }
    pbStack_140 = pbStack_60;
    pbStack_130 = pbStack_c0;
    pbStack_128 = pbStack_68;
    pbStack_108 = pbStack_1a0;
    uStack_118 = uStack_1b0;
    lStack_110 = lStack_1a8;
    pbStack_148 = pbVar17;
    pbStack_138 = pbVar9;
    pbStack_120 = pbVar9;
    uStack_100 = uVar15;
    uStack_f8 = uVar16;
    if (pbStack_78 == pbStack_88) {
      pdb_142d7ebb0(&pbStack_88);
    }
    lVar12 = (longlong)pbVar10 * 0x58;
    *(ulonglong *)(pbStack_80 + lVar12 + 0x50) = uStack_f8;
    *(byte **)(pbStack_80 + lVar12 + 0x40) = pbStack_108;
    *(ulonglong *)(pbStack_80 + lVar12 + 0x40 + 8) = uStack_100;
    auVar6._8_8_ = pbStack_130;
    auVar6._0_8_ = pbStack_138;
    auVar26._8_8_ = pbStack_120;
    auVar26._0_8_ = pbStack_128;
    auVar31._8_8_ = lStack_110;
    auVar31._0_8_ = uStack_118;
    *(undefined1 (*) [16])(pbStack_80 + lVar12 + 0x30) = auVar31;
    *(undefined1 (*) [16])(pbStack_80 + lVar12 + 0x20) = auVar26;
    *(undefined1 (*) [16])(pbStack_80 + lVar12 + 0x10) = auVar6;
    *(byte **)(pbStack_80 + lVar12) = pbStack_148;
    *(byte **)(pbStack_80 + lVar12 + 8) = pbStack_140;
    pbStack_78 = pbVar10 + 1;
    lVar12 = (longlong)pbStack_78 * 0x58;
    pbVar17 = pbStack_80 + lVar12;
  } while (pbStack_78 != (byte *)0x0);
  if (pbStack_78 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0xffffffffffffffff,0,&UNK_143338fd8);
  }
LAB_1417daa8d:
  pbVar10 = pbStack_78;
  pbVar9 = pbStack_80;
  pbVar11 = pbStack_78 + -1;
  lVar12 = (longlong)pbVar11 * 0x58;
  uVar18 = *(ulonglong *)(pbStack_80 + lVar12 + 0x10);
  fVar22 = _DAT_142e377f0;
  if (uVar18 != 0) {
    lVar2 = *(longlong *)(pbStack_80 + lVar12 + 8);
    uVar8 = (ulonglong)((uint)uVar18 & 7);
    if (uVar18 < 8) {
      auVar24 = ZEXT416((uint)_DAT_142e377f0);
      uVar14 = 0;
LAB_1417dab25:
      uVar18 = 0;
      do {
        auVar24._0_4_ = auVar24._0_4_ + *(float *)(lVar2 + uVar14 * 4 + uVar18 * 4);
        uVar20 = auVar24._0_8_;
        uVar18 = uVar18 + 1;
      } while (uVar8 != uVar18);
    }
    else {
      auVar24 = ZEXT416((uint)_DAT_142e377f0);
      uVar14 = 0;
      do {
        auVar24._0_4_ =
             auVar24._0_4_ + *(float *)(lVar2 + uVar14 * 4) + *(float *)(lVar2 + 4 + uVar14 * 4) +
             *(float *)(lVar2 + 8 + uVar14 * 4) + *(float *)(lVar2 + 0xc + uVar14 * 4) +
             *(float *)(lVar2 + 0x10 + uVar14 * 4) + *(float *)(lVar2 + 0x14 + uVar14 * 4) +
             *(float *)(lVar2 + 0x18 + uVar14 * 4) + *(float *)(lVar2 + 0x1c + uVar14 * 4);
        uVar20 = auVar24._0_8_;
        uVar14 = uVar14 + 8;
      } while ((uVar18 & 0xfffffffffffffff8) != uVar14);
      if (uVar8 != 0) goto LAB_1417dab25;
    }
    fVar22 = (float)pub_142e329c0(uVar20);
  }
  if (pbVar10 <= pbVar11) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pbVar11,pbVar10,&UNK_143338ff0);
  }
  uVar18 = *(ulonglong *)(pbVar9 + lVar12 + 0x28);
  auVar28 = ZEXT816(0);
  if (uVar18 != 0) {
    lVar2 = *(longlong *)(pbVar9 + lVar12 + 0x20);
    if (3 < uVar18) {
      uVar8 = uVar18 & 0xfffffffffffffffc;
      lVar27 = 0;
      lVar29 = 0;
      uVar14 = 0;
      lVar30 = 0;
      lVar23 = 0;
      do {
        plVar1 = (longlong *)(lVar2 + uVar14 * 8);
        lVar30 = lVar30 + *plVar1;
        lVar23 = lVar23 + plVar1[1];
        plVar1 = (longlong *)(lVar2 + 0x10 + uVar14 * 8);
        lVar27 = lVar27 + *plVar1;
        lVar29 = lVar29 + plVar1[1];
        uVar14 = uVar14 + 4;
      } while (uVar8 != uVar14);
      uVar14 = lVar29 + lVar23 + lVar27 + lVar30;
      goto LAB_1417dabef;
    }
    uVar8 = 0;
    uVar14 = 0;
    do {
      uVar14 = uVar14 + *(longlong *)(lVar2 + uVar8 * 8);
      uVar8 = uVar8 + 1;
LAB_1417dabef:
    } while (uVar18 != uVar8);
    if ((longlong)uVar14 < 0) {
      auVar28 = ZEXT416((uint)(float)uVar14);
    }
    else {
      auVar28 = ZEXT416((uint)(float)(longlong)uVar14);
    }
  }
  fVar4 = 0.0;
  if (0.0 <= fVar22) {
    fVar4 = fVar22;
  }
  if (fVar4 <= auVar28._0_4_) {
    auVar28._0_4_ = fVar4;
  }
  fVar22 = auVar28._0_4_;
  uVar18 = 0;
  if (0.0 <= fVar22) {
    uVar18 = (longlong)(fVar22 - _DAT_142e36f2c) & (longlong)fVar22 >> 0x3f | (longlong)fVar22;
  }
  uVar8 = 0xffffffffffffffff;
  if (fVar22 <= _DAT_142e36f30) {
    uVar8 = uVar18;
  }
  pdb_1425697f0(&lStack_b8,pbVar9,pbVar17);
  if (pbStack_78 <= pbVar11) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pbVar11,pbStack_78,&UNK_143339008);
  }
  pbVar17 = *(byte **)(pbStack_80 + lVar12 + 0x10);
  uVar18 = (longlong)pbVar17 * 8;
  if ((ulonglong)pbVar17 >> 0x3c == 0) {
    if (pbVar17 == (byte *)0x0) {
      pbVar9 = (byte *)0x8;
    }
    else {
      pdb_14007ee60();
      uVar20 = 8;
      pbVar9 = pub_1406abab0(uVar18,8);
      lVar30 = _UNK_142e4ffa8;
      lVar29 = _DAT_142e4ffa0;
      lVar27 = _UNK_142e4ff98;
      lVar2 = _DAT_142e4ff90;
      if (pbVar9 == (byte *)0x0) goto LAB_1417daca9;
      if ((byte *)0x3 < pbVar17) {
        pbVar10 = (byte *)((ulonglong)pbVar17 & 0xffffffffffffffc);
        uVar14 = 0;
        lVar23 = _DAT_142e4ff80;
        lVar25 = _UNK_142e4ff88;
        do {
          *(longlong *)(pbVar9 + uVar14) = lVar23;
          *(longlong *)(pbVar9 + uVar14 + 8) = lVar25;
          *(longlong *)(pbVar9 + uVar14 + 0x10) = lVar23 + lVar2;
          *(longlong *)(pbVar9 + uVar14 + 0x10 + 8) = lVar25 + lVar27;
          lVar23 = lVar23 + lVar29;
          lVar25 = lVar25 + lVar30;
          uVar14 = uVar14 + 0x20;
          if ((uVar18 & 0x7fffffffffffffe0) == uVar14) goto LAB_1417dad64;
        } while( true );
      }
      pbVar10 = (byte *)0x0;
      do {
        *(byte **)(pbVar9 + (longlong)pbVar10 * 8) = pbVar10;
        pbVar10 = pbVar10 + 1;
LAB_1417dad64:
      } while (pbVar17 != pbVar10);
    }
    uStack_a0 = uVar18;
    pbStack_98 = pbVar9;
    pbStack_90 = pbVar17;
    if (pbStack_78 <= pbVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pbVar11,pbStack_78,&UNK_143339020);
    }
    pbStack_50 = pbStack_a8;
    if (pbStack_a8 <= pbVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pbVar11,pbStack_a8,&UNK_143339038);
    }
    pbStack_68 = pbStack_b0;
    pdb_1417d9b80(pbStack_80 + lVar12,pbVar9,pbVar17,uVar8,pbVar11,
                  *(undefined8 *)(pbStack_b0 + (longlong)pbVar11 * 0x18 + 8),
                  *(undefined8 *)(pbStack_b0 + (longlong)pbVar11 * 0x18 + 8 + 8));
    pbVar17 = (byte *)0x0;
    while ((pbVar10 = pbVar11, pbVar9 = pbStack_68, ((ulonglong)pbVar17 & 1) == 0 &&
           (pbVar10 != (byte *)0x0))) {
      pbVar19 = pbVar10 + -1;
      pbStack_58 = (byte *)CONCAT71((int7)((ulonglong)pbVar17 >> 8),pbVar19 == (byte *)0x0);
      pbStack_70 = pbVar19;
      if (pbVar19 == (byte *)0x0) {
        pbStack_70 = pbVar10;
      }
      if (pbStack_78 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pbVar10,pbStack_78,&UNK_143339068);
      }
      lVar12 = (longlong)pbVar10 * 0x58;
      uVar18 = *(ulonglong *)(pbStack_80 + lVar12 + 0x10);
      pbStack_60 = pbStack_68 + (longlong)pbVar19 * 0x18;
      uVar8 = 0;
      while (uVar14 = uVar8, pbVar17 = pbStack_58, pbVar11 = pbStack_70, uVar14 < uVar18) {
        if (pbStack_50 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar10,pbStack_50,&UNK_143339080);
        }
        uVar8 = *(ulonglong *)(pbVar9 + (longlong)pbVar10 * 0x18 + 0x10);
        if (uVar8 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14,uVar8,&UNK_143339098);
        }
        lVar2 = *(longlong *)(*(longlong *)(pbVar9 + (longlong)pbVar10 * 0x18 + 8) + uVar14 * 8);
        uVar8 = uVar14 + 1;
        if (lVar2 != 0) {
          if (pbStack_78 <= pbVar19) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pbVar19,pbStack_78,&UNK_1433390b0);
          }
          if (pbStack_78 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pbVar10,pbStack_78,&UNK_1433390c8);
          }
          if (*(ulonglong *)(pbStack_80 + lVar12 + 0x40) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar14,*(ulonglong *)(pbStack_80 + lVar12 + 0x40),&UNK_1433390e0);
          }
          pdb_1417d9b80(pbStack_80 + (longlong)pbVar19 * 0x58,
                        *(undefined8 *)
                         (*(longlong *)(pbStack_80 + lVar12 + 0x38) + 8 + uVar14 * 0x18),
                        *(undefined8 *)
                         (*(longlong *)(pbStack_80 + lVar12 + 0x38) + 0x10 + uVar14 * 0x18),lVar2,
                        pbVar19,*(undefined8 *)(pbStack_60 + 8),*(undefined8 *)(pbStack_60 + 0x10));
        }
      }
    }
    lVar12 = *(longlong *)pbStack_68;
    pbVar17 = *(byte **)(pbStack_68 + 8);
    lVar2 = *(longlong *)(pbStack_68 + 0x10);
    pbVar9 = pbStack_50 + -1;
    pub_142e32770(pbStack_68,pbStack_68 + 0x18,((longlong)pbStack_50 * 8 + -8) * 3);
    pbStack_a8 = pbVar9;
    if (!SBORROW8(0,lVar12)) {
      pbStack_130 = pbVar17 + lVar2 * 8;
      pbStack_148 = pbVar17;
      pbStack_140 = pbVar17;
      pbStack_138 = (byte *)lVar12;
      pdb_142568ed0(puStack_150,&pbStack_148);
      if (pbStack_90 != (byte *)0x0) {
        pub_1406abac0(pbStack_98,uStack_a0,8);
      }
      if (pbVar9 != (byte *)0x0) {
        pbVar17 = pbStack_68 + 8;
        do {
          if (*(longlong *)(pbVar17 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar17,*(longlong *)(pbVar17 + -8) << 3,8);
          }
          pbVar17 = pbVar17 + 0x18;
          pbVar9 = pbVar9 + -1;
        } while (pbVar9 != (byte *)0x0);
      }
      if (lStack_b8 != 0) {
        pub_1406abac0(pbStack_68,lStack_b8 * 0x18,8);
      }
      pbStack_60 = pbStack_78;
      pbStack_50 = (byte *)0x0;
      pbStack_58 = pbStack_80;
      pbVar17 = pbStack_80;
      while (pbStack_60 != pbStack_50) {
        pbStack_50 = pbStack_50 + 1;
        pdb_141db47c0(pbVar17);
        pbVar17 = pbVar17 + 0x58;
      }
      if (pbStack_88 != (byte *)0x0) {
        pub_1406abac0(pbStack_58,(longlong)pbStack_88 * 0x58,8);
      }
      return;
    }
    pdb_142dc7ef8(0,pbVar9,&UNK_143339050);
  }
  else {
    uVar20 = 0;
LAB_1417daca9:
    pdb_142dc7e2a(uVar20,uVar18);
  }
LAB_1417dabe6:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

