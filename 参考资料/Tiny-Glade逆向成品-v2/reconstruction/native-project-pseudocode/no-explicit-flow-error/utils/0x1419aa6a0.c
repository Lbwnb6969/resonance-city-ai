// VA 0x1419aa6a0, PDB extent 748 bytes
// utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 748 */

void pdb_1419aa6a0(longlong param_1,float param_2,float param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  float *pfVar3;
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
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e660,0x29,param_4);
  }
  pfVar3 = *(float **)(param_1 + 8);
  fVar7 = *pfVar3;
  fVar15 = pfVar3[5];
  fVar8 = (float)*(undefined8 *)(pfVar3 + 2);
  fVar9 = pfVar3[3] - fVar7;
  fVar10 = fVar15 - fVar8;
  fVar11 = fVar10 * fVar10 + fVar9 * fVar9;
  if (fVar11 <= _DAT_142e36f24) {
    fVar11 = _DAT_142e36f24;
  }
  fVar11 = ((param_3 - fVar8) * fVar10 + (param_2 - fVar7) * fVar9) / fVar11;
  fVar9 = 0.0;
  if (0.0 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar11 = _DAT_142e36f28;
  if (fVar9 <= _DAT_142e36f28) {
    fVar11 = fVar9;
  }
  fVar9 = (float)((ulonglong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
  fVar7 = param_2 - (fVar11 * fVar9 + (_DAT_142e36f28 - fVar11) * fVar7);
  fVar8 = param_3 - (fVar11 * fVar15 + (_DAT_142e36f28 - fVar11) * fVar8);
  fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
  fVar7 = _DAT_142e36f3c;
  fVar8 = 0.0;
  if ((fVar10 < _DAT_142e36f3c) &&
     ((fVar11 < 0.0 || (fVar7 = fVar10, fVar8 = fVar11, _DAT_142e36f28 < fVar11)))) {
LAB_1419aa8b4:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e8f8,0x2a,&UNK_14335e928);
  }
  uVar4 = 0;
  if (uVar2 != 2) {
    pfVar5 = pfVar3 + 6;
    uVar6 = 1;
    do {
      fVar11 = *pfVar5;
      fVar10 = pfVar5[2];
      fVar13 = fVar11 - fVar9;
      fVar14 = fVar10 - fVar15;
      fVar12 = fVar14 * fVar14 + fVar13 * fVar13;
      if (fVar12 <= _DAT_142e36f24) {
        fVar12 = _DAT_142e36f24;
      }
      fVar12 = ((param_3 - fVar15) * fVar14 + (param_2 - fVar9) * fVar13) / fVar12;
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar12;
      }
      fVar12 = _DAT_142e36f28;
      if (fVar13 <= _DAT_142e36f28) {
        fVar12 = fVar13;
      }
      fVar9 = param_2 - (fVar12 * fVar11 + (_DAT_142e36f28 - fVar12) * fVar9);
      fVar15 = param_3 - (fVar12 * fVar10 + (_DAT_142e36f28 - fVar12) * fVar15);
      fVar15 = SQRT(fVar15 * fVar15 + fVar9 * fVar9);
      if ((fVar15 < fVar7) &&
         ((fVar12 < 0.0 ||
          (uVar4 = (ulonglong)uVar6, fVar7 = fVar15, fVar8 = fVar12, _DAT_142e36f28 < fVar12))))
      goto LAB_1419aa8b4;
      pfVar5 = pfVar5 + 3;
      uVar6 = uVar6 + 1;
      fVar9 = fVar11;
      fVar15 = fVar10;
    } while (pfVar5 != pfVar3 + uVar2 * 3);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4,uVar2,param_4);
  }
  if (uVar2 <= uVar4 + 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar4 + 1,uVar2,param_4);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
  fVar7 = fVar8 * (float)((ulonglong)uVar1 >> 0x20) + (_DAT_142e36f28 - fVar8) * (float)uVar1;
  if (NAN(fVar7)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ec63,0x1d,param_4);
  }
  if (ABS(fVar7) == INFINITY) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ed00,0x22,param_4);
  }
  return;
}

