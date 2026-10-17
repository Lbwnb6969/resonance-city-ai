// Matched PDB: utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// VA 0x1413fa210, PDB extent 585 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Extent: 585 bytes. No whole-program auto-analysis. */

ulonglong pdb_1413fa210(longlong param_1,float param_2,float param_3)

{
  float *pfVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 0;
  if (1 < uVar4) {
    pfVar1 = *(float **)(param_1 + 8);
    fVar7 = *pfVar1;
    fVar15 = pfVar1[5];
    fVar9 = (float)*(undefined8 *)(pfVar1 + 2);
    fVar8 = pfVar1[3] - fVar7;
    fVar10 = fVar15 - fVar9;
    fVar11 = fVar10 * fVar10 + fVar8 * fVar8;
    if (fVar11 <= _DAT_142e36f24) {
      fVar11 = _DAT_142e36f24;
    }
    fVar11 = ((param_3 - fVar9) * fVar10 + (param_2 - fVar7) * fVar8) / fVar11;
    fVar8 = 0.0;
    if (0.0 <= fVar11) {
      fVar8 = fVar11;
    }
    fVar11 = _DAT_142e36f28;
    if (fVar8 <= _DAT_142e36f28) {
      fVar11 = fVar8;
    }
    fVar10 = (float)((ulonglong)*(undefined8 *)(pfVar1 + 2) >> 0x20);
    fVar7 = param_2 - (fVar11 * fVar10 + (_DAT_142e36f28 - fVar11) * fVar7);
    fVar8 = param_3 - (fVar11 * fVar15 + (_DAT_142e36f28 - fVar11) * fVar9);
    fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
    fVar7 = 0.0;
    fVar8 = _DAT_142e36f3c;
    if ((fVar9 < _DAT_142e36f3c) &&
       ((fVar11 < 0.0 || (fVar7 = fVar11, fVar8 = fVar9, _DAT_142e36f28 < fVar11)))) {
LAB_1413fa440:
      pdb_142dc83b0(fVar7,0x2a,&UNK_143306a18);
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (uVar4 != 2) {
      pfVar5 = pfVar1 + 6;
      uVar6 = 1;
      uVar3 = 0;
      do {
        fVar11 = *pfVar5;
        fVar9 = pfVar5[2];
        fVar13 = fVar11 - fVar10;
        fVar14 = fVar9 - fVar15;
        fVar12 = fVar14 * fVar14 + fVar13 * fVar13;
        if (fVar12 <= _DAT_142e36f24) {
          fVar12 = _DAT_142e36f24;
        }
        fVar12 = ((param_3 - fVar15) * fVar14 + (param_2 - fVar10) * fVar13) / fVar12;
        fVar13 = 0.0;
        if (0.0 <= fVar12) {
          fVar13 = fVar12;
        }
        fVar12 = _DAT_142e36f28;
        if (fVar13 <= _DAT_142e36f28) {
          fVar12 = fVar13;
        }
        fVar10 = param_2 - (fVar12 * fVar11 + (_DAT_142e36f28 - fVar12) * fVar10);
        fVar15 = param_3 - (fVar12 * fVar9 + (_DAT_142e36f28 - fVar12) * fVar15);
        fVar15 = SQRT(fVar15 * fVar15 + fVar10 * fVar10);
        if ((fVar15 < fVar8) &&
           ((fVar12 < 0.0 ||
            (uVar3 = (ulonglong)uVar6, fVar7 = fVar12, fVar8 = fVar15, _DAT_142e36f28 < fVar12))))
        goto LAB_1413fa440;
        pfVar5 = pfVar5 + 3;
        uVar6 = uVar6 + 1;
        fVar10 = fVar11;
        fVar15 = fVar9;
      } while (pfVar5 != pfVar1 + uVar4 * 3);
    }
  }
  return uVar3;
}

