// VA 0x1419aab30, PDB extent 585 bytes
// utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_approx_coord_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 585 */

int pdb_1419aab30(longlong param_1,float param_2,float param_3)

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
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  iVar3 = 0;
  if (1 < uVar1) {
    pfVar2 = *(float **)(param_1 + 8);
    fVar6 = *pfVar2;
    fVar13 = pfVar2[5];
    fVar7 = (float)*(undefined8 *)(pfVar2 + 2);
    fVar8 = pfVar2[3] - fVar6;
    fVar9 = fVar13 - fVar7;
    fVar10 = fVar9 * fVar9 + fVar8 * fVar8;
    if (fVar10 <= _DAT_142e36f24) {
      fVar10 = _DAT_142e36f24;
    }
    fVar10 = ((param_3 - fVar7) * fVar9 + (param_2 - fVar6) * fVar8) / fVar10;
    fVar8 = 0.0;
    if (0.0 <= fVar10) {
      fVar8 = fVar10;
    }
    fVar10 = _DAT_142e36f28;
    if (fVar8 <= _DAT_142e36f28) {
      fVar10 = fVar8;
    }
    fVar8 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 2) >> 0x20);
    fVar6 = param_2 - (fVar10 * fVar8 + (_DAT_142e36f28 - fVar10) * fVar6);
    fVar7 = param_3 - (fVar10 * fVar13 + (_DAT_142e36f28 - fVar10) * fVar7);
    fVar7 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    fVar6 = _DAT_142e36f3c;
    if ((fVar7 < _DAT_142e36f3c) && ((fVar10 < 0.0 || (fVar6 = fVar7, _DAT_142e36f28 < fVar10)))) {
LAB_1419aad60:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14335e8f8,0x2a,&UNK_14335e928);
    }
    if (uVar1 != 2) {
      pfVar4 = pfVar2 + 6;
      iVar5 = 1;
      iVar3 = 0;
      do {
        fVar10 = *pfVar4;
        fVar7 = pfVar4[2];
        fVar11 = fVar10 - fVar8;
        fVar12 = fVar7 - fVar13;
        fVar9 = fVar12 * fVar12 + fVar11 * fVar11;
        if (fVar9 <= _DAT_142e36f24) {
          fVar9 = _DAT_142e36f24;
        }
        fVar9 = ((param_3 - fVar13) * fVar12 + (param_2 - fVar8) * fVar11) / fVar9;
        fVar11 = 0.0;
        if (0.0 <= fVar9) {
          fVar11 = fVar9;
        }
        fVar9 = _DAT_142e36f28;
        if (fVar11 <= _DAT_142e36f28) {
          fVar9 = fVar11;
        }
        fVar8 = param_2 - (fVar9 * fVar10 + (_DAT_142e36f28 - fVar9) * fVar8);
        fVar13 = param_3 - (fVar9 * fVar7 + (_DAT_142e36f28 - fVar9) * fVar13);
        fVar13 = SQRT(fVar13 * fVar13 + fVar8 * fVar8);
        if ((fVar13 < fVar6) &&
           ((fVar9 < 0.0 || (fVar6 = fVar13, iVar3 = iVar5, _DAT_142e36f28 < fVar9))))
        goto LAB_1419aad60;
        pfVar4 = pfVar4 + 3;
        iVar5 = iVar5 + 1;
        fVar8 = fVar10;
        fVar13 = fVar7;
      } while (pfVar4 != pfVar2 + uVar1 * 3);
    }
  }
  return iVar3;
}

