// VA 0x1419ab4d0, PDB extent 1793 bytes
// utils::curve::Curve::crashy_resample_approx_pt_count<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001419ab863) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample_approx_pt_count<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1793 */

longlong * pdb_1419ab4d0(longlong *param_1,longlong param_2,ulonglong **param_3)

{
  ulonglong **ppuVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong **ppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
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
  longlong lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined1 auStack_168 [16];
  ulonglong **ppuStack_158;
  code *pcStack_150;
  ulonglong **ppuStack_148;
  code *pcStack_140;
  longlong lStack_138;
  code *pcStack_130;
  undefined8 **ppuStack_128;
  undefined8 *puStack_120;
  undefined8 **ppuStack_118;
  byte *pbStack_110;
  undefined8 **ppuStack_108;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  ppuStack_128 = param_3;
  if (param_3 < (ulonglong **)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e720,0x1f,&UNK_14335e740);
  }
  uVar12 = (longlong)param_3 * 8;
  if (uVar12 < 0x7ffffffffffffffd && (ulonglong)param_3 >> 0x3d == 0) goto LAB_1419ab5ac;
  plVar6 = (longlong *)0x0;
  do {
    param_1 = plVar6;
    pdb_142dc7e2a(param_1,uVar12);
LAB_1419ab5ac:
    pdb_14007ee60();
    pbStack_110 = pub_1406abab0(uVar12,4);
    plVar6 = (longlong *)0x4;
  } while (pbStack_110 == (byte *)0x0);
  ppuStack_108 = (undefined8 **)0x0;
  uVar12 = *(ulonglong *)(param_2 + 0x10);
  ppuStack_118 = param_3;
  if (uVar12 == 0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_14335e758);
  }
  fVar25 = _DAT_142e36f28 / ((float)param_3 + _DAT_142e36f34);
  puVar4 = *(undefined8 **)(param_2 + 8);
  uVar3 = *puVar4;
  fVar22 = (float)uVar3;
  fVar23 = (float)((ulonglong)uVar3 >> 0x20);
  auStack_168 = ZEXT416((uint)(_DAT_142e36f38 * fVar25 + _DAT_142e36f28));
  *(undefined8 *)pbStack_110 = uVar3;
  ppuStack_108 = (ulonglong **)0x1;
  puStack_120 = puVar4 + uVar12;
  lVar7 = *(longlong *)(param_2 + 0x20);
  if (*(ulonglong *)(param_2 + 0x28) < uVar12) {
    uVar12 = *(ulonglong *)(param_2 + 0x28);
  }
  fVar27 = 0.0;
  fVar24 = 0.0;
  fVar15 = 0.0;
  fVar21 = 0.0;
  ppuVar10 = (ulonglong **)0x1;
  uVar8 = (ulonglong)(uVar12 != 0);
  if (uVar8 < uVar12) {
    uVar11 = uVar8 + 1;
    fVar17 = fVar22;
    fVar26 = fVar23;
    if (uVar12 == 0) {
      uVar8 = uVar11;
      uVar11 = 2;
    }
    do {
      fVar28 = (float)puVar4[uVar8];
      fVar29 = (float)((ulonglong)puVar4[uVar8] >> 0x20);
      fVar2 = *(float *)(lVar7 + uVar8 * 4);
      fVar27 = fVar27 + (fVar2 - fVar15);
      fVar14 = (float)auStack_168._0_4_;
      if (fVar27 <= (float)auStack_168._0_4_) {
        fVar14 = fVar27;
      }
      fVar27 = (float)(-(uint)NAN(fVar27) & auStack_168._0_4_ | ~-(uint)NAN(fVar27) & (uint)fVar14);
LAB_1419ab6eb:
      if (fVar25 <= fVar27 - fVar21) {
        fVar21 = fVar21 + fVar25;
        uStack_f1 = 1;
        fVar14 = (float)pdb_140de8220(fVar15);
        ppuVar5 = ppuStack_108;
        if ((ppuStack_108 == (ulonglong **)0x0) ||
           (pbStack_110 + (longlong)ppuStack_108 * 8 + -8 == (byte *)0x0)) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14335e818);
        }
        uVar3 = *(undefined8 *)(pbStack_110 + (longlong)ppuStack_108 * 8 + -8);
        fVar19 = fVar28 - (float)uVar3;
        fVar20 = fVar29 - (float)((ulonglong)uVar3 >> 0x20);
        if (SQRT(fVar20 * fVar20 + fVar19 * fVar19) <= fVar24) goto code_r0x0001419ab758;
        fVar22 = 0.0;
        if (0.0 <= fVar14) {
          fVar22 = fVar14;
        }
        fVar23 = _DAT_142e36f28;
        if (fVar22 <= _DAT_142e36f28) {
          fVar23 = fVar22;
        }
        fVar22 = (_DAT_142e36f28 - fVar23) * fVar17 + fVar23 * fVar28;
        fVar23 = (_DAT_142e36f28 - fVar23) * fVar26 + fVar23 * fVar29;
        if (ppuStack_108 == ppuStack_118) {
          uStack_f1 = 1;
          pdb_142db07d0(&ppuStack_118);
        }
        goto LAB_1419ab7bb;
      }
      if ((ppuVar10 == (ulonglong **)0x0) ||
         (pbStack_110 + (longlong)ppuVar10 * 8 + -8 == (byte *)0x0)) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14335e800);
      }
      uVar3 = *(undefined8 *)(pbStack_110 + (longlong)ppuVar10 * 8 + -8);
      fVar15 = fVar28 - (float)uVar3;
      fVar17 = fVar29 - (float)((ulonglong)uVar3 >> 0x20);
      fVar15 = SQRT(fVar17 * fVar17 + fVar15 * fVar15);
      fVar17 = fVar15;
      if (fVar15 <= fVar24) {
        fVar17 = fVar24;
      }
      uVar16 = (int)((uint)(fVar24 < fVar15) << 0x1f) >> 0x1f;
      uVar18 = (int)((uint)(fVar24 < fVar15) << 0x1f) >> 0x1f;
      fVar22 = (float)(~uVar16 & (uint)fVar22 | (uint)fVar28 & uVar16);
      fVar23 = (float)(~uVar18 & (uint)fVar23 | (uint)fVar29 & uVar18);
      bVar13 = uVar11 < uVar12;
      uVar8 = uVar11;
      uVar11 = uVar11 + (uVar11 < uVar12);
      fVar15 = fVar2;
      fVar24 = fVar17;
      fVar17 = fVar28;
      fVar26 = fVar29;
    } while (bVar13);
  }
  if (pbStack_110 + (longlong)ppuVar10 * 8 + -8 == (byte *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14335e770);
  }
  if (puStack_120 + -1 == (undefined8 *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14335e788);
  }
  uVar3 = puStack_120[-1];
  fVar21 = (float)uVar3;
  fVar27 = (float)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(pbStack_110 + (longlong)ppuVar10 * 8 + -8);
  fVar25 = fVar21 - (float)uVar3;
  fVar15 = fVar27 - (float)((ulonglong)uVar3 >> 0x20);
  fVar25 = fVar15 * fVar15 + fVar25 * fVar25;
  if (fVar25 <= 0.0) {
    if (fVar24 <= SQRT(fVar25)) goto LAB_1419ab97c;
    if (ppuVar10 == ppuStack_118) {
      uStack_f1 = 1;
      pdb_142db07d0(&ppuStack_118);
    }
    *(ulonglong *)(pbStack_110 + (longlong)ppuVar10 * 8) = CONCAT44(fVar23,fVar22);
    ppuVar1 = (ulonglong **)((longlong)ppuVar10 + 1);
    ppuStack_108 = ppuVar1;
    if ((fVar23 - fVar27) * (fVar23 - fVar27) + (fVar22 - fVar21) * (fVar22 - fVar21) <= 0.0) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14335e7a0,0x47,&UNK_14335e7e8);
    }
    if (ppuVar1 == ppuStack_118) {
      uStack_f1 = 1;
      pdb_142db07d0(&ppuStack_118);
    }
    pbVar9 = pbStack_110 + (longlong)ppuVar1 * 8;
    *(float *)(pbStack_110 + (longlong)ppuVar1 * 8) = fVar21;
    lVar7 = 2;
  }
  else {
    if (ppuVar10 == ppuStack_118) {
      uStack_f1 = 1;
      pdb_142db07d0(&ppuStack_118);
    }
    pbVar9 = pbStack_110 + (longlong)ppuVar10 * 8;
    *(float *)(pbStack_110 + (longlong)ppuVar10 * 8) = fVar21;
    lVar7 = 1;
  }
  *(float *)(pbVar9 + 4) = fVar27;
  ppuStack_108 = (undefined8 **)(lVar7 + (longlong)ppuVar10);
LAB_1419ab97c:
  ppuStack_148 = ppuStack_108;
  ppuStack_158 = ppuStack_118;
  pcStack_150 = (code *)pbStack_110;
  uStack_f1 = 0;
  pdb_140080c90(&lStack_1a0,&ppuStack_158,0);
  if (SBORROW8(0,lStack_1a0)) {
    ppuStack_158 = (ulonglong **)&ppuStack_128;
    pcStack_150 = pdb_140f72a40;
    ppuStack_148 = (ulonglong **)&ppuStack_118;
    pcStack_140 = pdb_1419ad1a0;
    pcStack_130 = pdb_1415e4f30;
    lStack_138 = param_2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335e888,&ppuStack_158,&UNK_14335e8c8);
  }
  param_1[6] = lStack_170;
  param_1[4] = lStack_180;
  param_1[5] = lStack_178;
  param_1[2] = CONCAT44(uStack_18c,uStack_190);
  param_1[3] = lStack_188;
  *param_1 = lStack_1a0;
  param_1[1] = CONCAT44(uStack_194,uStack_198);
  return param_1;
code_r0x0001419ab758:
  ppuVar10 = ppuStack_108;
  if (0.0 < fVar24) {
    if (ppuStack_108 == ppuStack_118) {
      uStack_f1 = 1;
      pdb_142db07d0(&ppuStack_118);
    }
LAB_1419ab7bb:
    *(ulonglong *)(pbStack_110 + (longlong)ppuVar5 * 8) = CONCAT44(fVar23,fVar22);
    ppuVar10 = (ulonglong **)((longlong)ppuVar5 + 1);
    fVar24 = 0.0;
    ppuStack_108 = ppuVar10;
  }
  goto LAB_1419ab6eb;
}

