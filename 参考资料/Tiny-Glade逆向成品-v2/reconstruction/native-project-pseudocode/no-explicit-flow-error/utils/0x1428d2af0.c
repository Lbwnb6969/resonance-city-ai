// VA 0x1428d2af0, PDB extent 1841 bytes
// utils::curve::Curve::crashy_resample_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1841 */

ulonglong * pdb_1428d2af0(ulonglong *param_1,float *param_2,float param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  float *pfVar4;
  bool bVar5;
  undefined1 extraout_AL;
  float *pfVar6;
  float *arg0;
  longlong lVar7;
  float *pfVar8;
  undefined1 uVar9;
  float *pfVar10;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 *unaff_R14;
  undefined1 *unaff_R15;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float *pfStack_140;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined4 uStack_136;
  undefined2 uStack_132;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  float *pfStack_120;
  float *pfStack_118;
  code *pcStack_110;
  float *pfStack_108;
  float *pfStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 < (undefined1 *)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1435afd96,0x28,&UNK_1435afdc0);
  }
  if ((param_3 == 0.0) && (!NAN(param_3))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1435afdd8,0x2b,&UNK_1435afe08);
  }
  if ((param_2[0xc] == 0.0) && (!NAN(param_2[0xc]))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1435afe20,0x24,&UNK_1435afe48);
  }
  pfVar8 = (float *)((longlong)puVar2 * 8);
  pfStack_108 = (float *)param_1;
  pdb_14007ee60();
  arg0 = pfVar8;
  pfVar6 = (float *)pub_1406abab0((ulonglong)pfVar8,4);
  if (pfVar6 == (float *)0x0) {
    arg0 = (float *)0x4;
    pdb_142dc7e2a(4,pfVar8);
    pfVar8 = param_2;
  }
  else {
    pfVar12 = *(float **)(param_2 + 2);
    *(undefined8 *)pfVar6 = *(undefined8 *)pfVar12;
    fVar19 = _DAT_142e36f34;
    fVar18 = _DAT_142e36f30;
    fVar17 = _DAT_142e36f2c;
    fVar20 = _DAT_142e36f28;
    pfStack_118 = (float *)0x1;
    pfStack_100 = pfVar12 + (longlong)puVar2 * 2;
    bVar5 = true;
    unaff_R14 = (undefined1 *)0x1;
    puStack_128 = puVar2;
    pfStack_120 = pfVar6;
    while (pfVar8 = pfStack_120, unaff_R15 = puStack_128, pfVar12 != pfStack_100) {
      pfVar6 = pfVar12 + 2;
      pfVar10 = pfVar6;
      pfVar4 = pfVar12;
      pfVar13 = arg0;
      if (bVar5) {
        if (pfVar6 == pfStack_100) break;
        pfVar10 = pfVar12 + 4;
        pfVar4 = pfVar6;
        pfVar13 = pfVar12;
      }
      arg0 = pfVar4;
      fVar15 = SQRT((arg0[1] - pfVar13[1]) * (arg0[1] - pfVar13[1]) +
                    (*arg0 - *pfVar13) * (*arg0 - *pfVar13));
      if (fVar15 <= _DAT_142e36f24) {
        fVar15 = _DAT_142e36f24;
      }
      fVar16 = param_3 / fVar15;
      if (fVar20 <= param_3 / fVar15) {
        fVar16 = fVar20;
      }
      fVar15 = (float)pub_142e32b00(fVar20 / fVar16);
      uVar11 = (longlong)(fVar15 - fVar17) & (longlong)fVar15 >> 0x3f | (longlong)fVar15;
      if (fVar15 < 0.0) {
        uVar11 = 0;
      }
      if (fVar18 < fVar15) {
        uVar11 = 0xffffffffffffffff;
      }
      uVar11 = uVar11 + 1;
      if (uVar11 < 3) {
        uVar11 = 2;
      }
      for (uVar14 = 1; uVar14 < uVar11; uVar14 = uVar14 + 1) {
        if ((longlong)uVar14 < 0) {
          fVar15 = (float)*(undefined8 *)pfVar13;
          fVar16 = (float)((ulonglong)*(undefined8 *)pfVar13 >> 0x20);
          fVar22 = (float)*(undefined8 *)arg0;
          fVar23 = (float)((ulonglong)*(undefined8 *)arg0 >> 0x20);
        }
        else {
          fVar15 = (float)*(undefined8 *)pfVar13;
          fVar16 = (float)((ulonglong)*(undefined8 *)pfVar13 >> 0x20);
          fVar22 = (float)*(undefined8 *)arg0;
          fVar23 = (float)((ulonglong)*(undefined8 *)arg0 >> 0x20);
        }
        if (unaff_R14 == puStack_128) {
          uStack_f1 = 1;
          pdb_142db07d0(&puStack_128);
        }
        fVar21 = (float)uVar14 / ((float)uVar11 + fVar19);
        *(ulonglong *)(pfStack_120 + (longlong)unaff_R14 * 2) =
             CONCAT44(fVar21 * fVar23 + (fVar20 - fVar21) * fVar16,
                      fVar21 * fVar22 + (fVar20 - fVar21) * fVar15);
        unaff_R14 = unaff_R14 + 1;
        pfStack_118 = (float *)unaff_R14;
      }
      bVar5 = false;
      pfVar12 = pfVar10;
    }
    pfStack_140 = param_2;
    if ((undefined1 *)0x1 < unaff_R14) {
      uVar11 = (longlong)unaff_R14 * 4;
      pdb_14007ee60();
      arg0 = (float *)pub_1406abab0(uVar11,4);
      if (arg0 == (float *)0x0) {
        pfStack_100 = (float *)unaff_R15;
        pfStack_108 = pfVar8;
        pdb_142dc7e2a(4,uVar11);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      fVar17 = (float)*(undefined8 *)pfVar8;
      fVar18 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
      fVar20 = 0.0;
      uVar14 = 0;
      do {
        uVar1 = *(undefined8 *)((longlong)pfVar8 + uVar14 * 2);
        fVar19 = (float)uVar1;
        fVar17 = fVar17 - fVar19;
        fVar15 = (float)((ulonglong)uVar1 >> 0x20);
        fVar18 = fVar18 - fVar15;
        fVar20 = SQRT(fVar18 * fVar18 + fVar17 * fVar17) + fVar20;
        *(float *)((longlong)arg0 + uVar14) = fVar20;
        uVar1 = *(undefined8 *)((longlong)pfVar8 + uVar14 * 2 + 8);
        fVar17 = (float)uVar1;
        fVar18 = (float)((ulonglong)uVar1 >> 0x20);
        fVar19 = fVar19 - fVar17;
        fVar15 = fVar15 - fVar18;
        fVar20 = SQRT(fVar15 * fVar15 + fVar19 * fVar19) + fVar20;
        *(float *)((longlong)arg0 + uVar14 + 4) = fVar20;
        uVar14 = uVar14 + 8;
      } while ((uVar11 & 0x3ffffffffffffff8) != uVar14);
      if (((ulonglong)unaff_R14 & 1) != 0) {
        uVar1 = *(undefined8 *)((longlong)pfVar8 + uVar14 * 2);
        fVar17 = fVar17 - (float)uVar1;
        fVar18 = fVar18 - (float)((ulonglong)uVar1 >> 0x20);
        fVar20 = fVar20 + SQRT(fVar18 * fVar18 + fVar17 * fVar17);
        *(float *)((longlong)arg0 + uVar14) = fVar20;
      }
      if ((fVar20 != 0.0) || (NAN(fVar20))) {
        lVar7 = 0;
        do {
          if (uVar11 - lVar7 == 0) {
            if (!SBORROW8(0,(longlong)unaff_R15)) {
              *(undefined1 **)pfStack_108 = unaff_R15;
              *(float **)((longlong)pfStack_108 + 8) = pfVar8;
              *(undefined1 **)((longlong)pfStack_108 + 0x10) = unaff_R14;
              *(undefined1 **)((longlong)pfStack_108 + 0x18) = unaff_R14;
              *(float **)((longlong)pfStack_108 + 0x20) = arg0;
              *(undefined1 **)((longlong)pfStack_108 + 0x28) = unaff_R14;
              *(float *)((longlong)pfStack_108 + 0x30) = fVar20;
              return (ulonglong *)pfStack_108;
            }
            uStack_137 = (undefined1)((ulonglong)pfVar8 >> 8);
            arg0 = (float *)((ulonglong)pfVar8 >> 0x10);
            uStack_138 = SUB81(pfVar8,0);
            goto LAB_1428d2eee;
          }
          fVar17 = *(float *)((longlong)arg0 + lVar7) / fVar20;
          *(float *)((longlong)arg0 + lVar7) = fVar17;
          lVar7 = lVar7 + 4;
        } while ((uint)ABS(fVar17) < 0x7f800000);
      }
      pub_1406abac0((byte *)arg0,uVar11,4);
      uVar9 = 1;
      uStack_138 = 1;
      uStack_137 = extraout_AL;
      goto joined_r0x0001428d301a;
    }
  }
  uVar9 = 0;
  uStack_138 = 0;
  uStack_137 = SUB81(unaff_R14,0);
joined_r0x0001428d301a:
  if (unaff_R15 != (undefined1 *)0x0) {
    pub_1406abac0((byte *)pfVar8,(longlong)unaff_R15 << 3,4);
    uStack_137 = SUB81(unaff_R14,0);
    arg0 = pfVar8;
    uStack_138 = uVar9;
  }
LAB_1428d2eee:
  uStack_136 = SUB84(arg0,0);
  uStack_132 = (undefined2)((ulonglong)arg0 >> 0x20);
  puStack_128 = &uStack_138;
  pfStack_120 = (float *)pdb_1428d3230;
  pfStack_118 = pfStack_140;
  pcStack_110 = pdb_1420f3470;
  puStack_130 = unaff_R14;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1435afe60,&puStack_128,&UNK_1435afea0);
}

