// Matched PDB: utils::curve::Curve::try_new_from_points<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// VA 0x140080c90, PDB extent 682 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   utils::curve::Curve::try_new_from_points<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Extent: 682 bytes. No whole-program auto-analysis. */

longlong * pdb_140080c90(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = param_2[2];
  if (uVar4 < 2) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(char *)((longlong)param_1 + 9) = (char)uVar4;
    *param_1 = -0x8000000000000000;
    lVar8 = *param_2;
    if (lVar8 == 0) {
      return param_1;
    }
    puVar10 = (undefined8 *)param_2[1];
  }
  else {
    uVar2 = uVar4 * 4;
    pdb_14007ee60();
    lVar8 = func_0x0001406abab0(uVar2,4);
    if (lVar8 == 0) {
      pdb_142dc7e2a(4,uVar2);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    puVar10 = (undefined8 *)param_2[1];
    fVar15 = (float)*puVar10;
    fVar16 = (float)((ulonglong)*puVar10 >> 0x20);
    fVar14 = 0.0;
    uVar9 = 0;
    fVar17 = fVar15;
    fVar18 = fVar16;
    do {
      uVar3 = *(undefined8 *)((longlong)puVar10 + uVar9 * 2);
      fVar19 = (float)uVar3;
      fVar17 = fVar17 - fVar19;
      fVar20 = (float)((ulonglong)uVar3 >> 0x20);
      fVar18 = fVar18 - fVar20;
      fVar14 = SQRT(fVar18 * fVar18 + fVar17 * fVar17) + fVar14;
      *(float *)(lVar8 + uVar9) = fVar14;
      uVar3 = *(undefined8 *)((longlong)puVar10 + uVar9 * 2 + 8);
      fVar17 = (float)uVar3;
      fVar18 = (float)((ulonglong)uVar3 >> 0x20);
      fVar19 = fVar19 - fVar17;
      fVar20 = fVar20 - fVar18;
      fVar14 = SQRT(fVar20 * fVar20 + fVar19 * fVar19) + fVar14;
      *(float *)(lVar8 + 4 + uVar9) = fVar14;
      uVar9 = uVar9 + 8;
    } while ((uVar2 & 0xfffffffffffffff8) != uVar9);
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)((longlong)puVar10 + uVar9 * 2);
      fVar17 = fVar17 - (float)uVar3;
      fVar18 = fVar18 - (float)((ulonglong)uVar3 >> 0x20);
      fVar14 = fVar14 + SQRT(fVar18 * fVar18 + fVar17 * fVar17);
      *(float *)(lVar8 + uVar9) = fVar14;
    }
    if ((fVar14 != 0.0) || (NAN(fVar14))) {
      lVar12 = 0;
      while (uVar2 - lVar12 != 0) {
        fVar17 = *(float *)(lVar8 + lVar12) / fVar14;
        *(float *)(lVar8 + lVar12) = fVar17;
        lVar12 = lVar12 + 4;
        if (0x7f7fffff < (uint)ABS(fVar17)) goto LAB_140080dec;
      }
      if ((param_3 & 1) == 0) goto LAB_140080e41;
      fVar17 = *(float *)(puVar10 + 1);
      fVar18 = *(float *)((longlong)puVar10 + 0xc);
      if ((fVar15 == fVar17) && (!NAN(fVar15) && !NAN(fVar17))) {
        if ((fVar16 == fVar18) && (!NAN(fVar16) && !NAN(fVar18))) {
          lVar12 = 0;
          goto LAB_140080ec8;
        }
      }
      lVar11 = uVar4 * 8 + -0x10;
      lVar12 = 0;
      pfVar13 = (float *)(puVar10 + 2);
      do {
        do {
          fVar15 = fVar18;
          if (lVar11 == 0) {
LAB_140080e41:
            param_1[2] = param_2[2];
            lVar12 = param_2[1];
            *param_1 = *param_2;
            param_1[1] = lVar12;
            param_1[3] = uVar4;
            param_1[4] = lVar8;
            param_1[5] = uVar4;
            *(float *)(param_1 + 6) = fVar14;
            return param_1;
          }
          pfVar1 = pfVar13 + 2;
          fVar16 = *pfVar13;
          fVar18 = pfVar13[1];
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + -8;
          bVar5 = NAN(fVar17);
          bVar6 = fVar17 != fVar16;
          pfVar13 = pfVar1;
          fVar17 = fVar16;
        } while ((bVar6) || (bVar5 || NAN(fVar16)));
      } while ((fVar15 != fVar18) || (NAN(fVar15) || NAN(fVar18)));
LAB_140080ec8:
      *(undefined1 *)(param_1 + 1) = 2;
      param_1[2] = lVar12;
    }
    else {
LAB_140080dec:
      *(undefined1 *)(param_1 + 1) = 1;
    }
    *param_1 = -0x8000000000000000;
    func_0x0001406abac0(lVar8,uVar2,4);
    lVar8 = *param_2;
    if (lVar8 == 0) {
      return param_1;
    }
  }
  func_0x0001406abac0(puVar10,lVar8 << 3,4);
  return param_1;
}

