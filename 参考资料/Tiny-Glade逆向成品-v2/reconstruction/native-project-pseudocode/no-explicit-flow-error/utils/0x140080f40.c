// VA 0x140080f40, PDB extent 585 bytes
// utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 585 */

int pdb_140080f40(longlong param_1,float param_2,float param_3)

{
  ulonglong uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  iVar3 = 0;
  if (1 < uVar1) {
    pfVar2 = *(float **)(param_1 + 8);
    fVar6 = *pfVar2;
    fVar14 = pfVar2[5];
    fVar8 = (float)*(undefined8 *)(pfVar2 + 2);
    fVar7 = pfVar2[3] - fVar6;
    fVar9 = fVar14 - fVar8;
    fVar10 = fVar9 * fVar9 + fVar7 * fVar7;
    if (fVar10 <= _DAT_142e36f24) {
      fVar10 = _DAT_142e36f24;
    }
    fVar10 = ((param_3 - fVar8) * fVar9 + (param_2 - fVar6) * fVar7) / fVar10;
    fVar7 = 0.0;
    if (0.0 <= fVar10) {
      fVar7 = fVar10;
    }
    fVar10 = _DAT_142e36f28;
    if (fVar7 <= _DAT_142e36f28) {
      fVar10 = fVar7;
    }
    fVar9 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 2) >> 0x20);
    fVar6 = param_2 - (fVar10 * fVar9 + (_DAT_142e36f28 - fVar10) * fVar6);
    fVar7 = param_3 - (fVar10 * fVar14 + (_DAT_142e36f28 - fVar10) * fVar8);
    fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    fVar6 = 0.0;
    fVar7 = _DAT_142e36f3c;
    if ((fVar8 < _DAT_142e36f3c) &&
       ((fVar10 < 0.0 || (fVar6 = fVar10, fVar7 = fVar8, _DAT_142e36f28 < fVar10)))) {
LAB_140081170:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(fVar6,0x2a,&UNK_142e37330);
    }
    if (uVar1 != 2) {
      pfVar4 = pfVar2 + 6;
      iVar5 = 1;
      iVar3 = 0;
      do {
        fVar10 = *pfVar4;
        fVar8 = pfVar4[2];
        fVar12 = fVar10 - fVar9;
        fVar13 = fVar8 - fVar14;
        fVar11 = fVar13 * fVar13 + fVar12 * fVar12;
        if (fVar11 <= _DAT_142e36f24) {
          fVar11 = _DAT_142e36f24;
        }
        fVar11 = ((param_3 - fVar14) * fVar13 + (param_2 - fVar9) * fVar12) / fVar11;
        fVar12 = 0.0;
        if (0.0 <= fVar11) {
          fVar12 = fVar11;
        }
        fVar11 = _DAT_142e36f28;
        if (fVar12 <= _DAT_142e36f28) {
          fVar11 = fVar12;
        }
        fVar9 = param_2 - (fVar11 * fVar10 + (_DAT_142e36f28 - fVar11) * fVar9);
        fVar14 = param_3 - (fVar11 * fVar8 + (_DAT_142e36f28 - fVar11) * fVar14);
        fVar14 = SQRT(fVar14 * fVar14 + fVar9 * fVar9);
        if ((fVar14 < fVar7) &&
           ((fVar11 < 0.0 ||
            (fVar6 = fVar11, fVar7 = fVar14, iVar3 = iVar5, _DAT_142e36f28 < fVar11))))
        goto LAB_140081170;
        pfVar4 = pfVar4 + 3;
        iVar5 = iVar5 + 1;
        fVar9 = fVar10;
        fVar14 = fVar8;
      } while (pfVar4 != pfVar2 + uVar1 * 3);
    }
  }
  return iVar3;
}

