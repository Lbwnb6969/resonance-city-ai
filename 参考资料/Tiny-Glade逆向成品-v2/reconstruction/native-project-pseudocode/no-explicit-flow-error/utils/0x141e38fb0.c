// VA 0x141e38fb0, PDB extent 676 bytes
// utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_approx_u_from_pos<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 676 */

void pdb_141e38fb0(longlong param_1,float param_2,float param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
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
    pdb_142dc83b0(&UNK_1433ecc80,0x29,param_4);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  fVar13 = (float)puVar3[1];
  fVar15 = (float)((ulonglong)puVar3[1] >> 0x20);
  fVar11 = (float)*puVar3;
  fVar7 = (float)((ulonglong)*puVar3 >> 0x20);
  fVar8 = fVar13 - fVar11;
  fVar9 = fVar15 - fVar7;
  fVar10 = fVar9 * fVar9 + fVar8 * fVar8;
  if (fVar10 <= _DAT_142e36f24) {
    fVar10 = _DAT_142e36f24;
  }
  fVar10 = ((param_3 - fVar7) * fVar9 + (param_2 - fVar11) * fVar8) / fVar10;
  fVar8 = 0.0;
  if (0.0 <= fVar10) {
    fVar8 = fVar10;
  }
  fVar10 = _DAT_142e36f28;
  if (fVar8 <= _DAT_142e36f28) {
    fVar10 = fVar8;
  }
  fVar8 = param_2 - (fVar10 * fVar13 + (_DAT_142e36f28 - fVar10) * fVar11);
  fVar9 = param_3 - (fVar10 * fVar15 + (_DAT_142e36f28 - fVar10) * fVar7);
  fVar11 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  fVar9 = 0.0;
  fVar8 = _DAT_142e36f3c;
  if ((fVar11 < _DAT_142e36f3c) &&
     ((fVar10 < 0.0 || (fVar9 = fVar10, fVar8 = fVar11, _DAT_142e36f28 < fVar10)))) {
LAB_141e3917c:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433eccc8,0x2a,&UNK_1433eccf8);
  }
  uVar4 = 0;
  if (uVar2 != 2) {
    uVar5 = 1;
    lVar6 = 0x10;
    do {
      fVar11 = (float)*(undefined8 *)((longlong)puVar3 + lVar6);
      fVar7 = (float)((ulonglong)*(undefined8 *)((longlong)puVar3 + lVar6) >> 0x20);
      fVar12 = fVar11 - fVar13;
      fVar14 = fVar7 - fVar15;
      fVar10 = fVar14 * fVar14 + fVar12 * fVar12;
      if (fVar10 <= _DAT_142e36f24) {
        fVar10 = _DAT_142e36f24;
      }
      fVar10 = ((param_3 - fVar15) * fVar14 + (param_2 - fVar13) * fVar12) / fVar10;
      fVar12 = 0.0;
      if (0.0 <= fVar10) {
        fVar12 = fVar10;
      }
      fVar10 = _DAT_142e36f28;
      if (fVar12 <= _DAT_142e36f28) {
        fVar10 = fVar12;
      }
      fVar13 = param_2 - (fVar10 * fVar11 + (_DAT_142e36f28 - fVar10) * fVar13);
      fVar15 = param_3 - (fVar10 * fVar7 + (_DAT_142e36f28 - fVar10) * fVar15);
      fVar13 = SQRT(fVar15 * fVar15 + fVar13 * fVar13);
      if ((fVar13 < fVar8) &&
         ((fVar10 < 0.0 ||
          (uVar4 = (ulonglong)uVar5, fVar9 = fVar10, fVar8 = fVar13, _DAT_142e36f28 < fVar10))))
      goto LAB_141e3917c;
      lVar6 = lVar6 + 8;
      uVar5 = uVar5 + 1;
      fVar13 = fVar11;
      fVar15 = fVar7;
    } while (uVar2 << 3 != lVar6);
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
  fVar13 = fVar9 * (float)((ulonglong)uVar1 >> 0x20) + (_DAT_142e36f28 - fVar9) * (float)uVar1;
  if (NAN(fVar13)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433ecdf3,0x1d,param_4);
  }
  if (ABS(fVar13) == INFINITY) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433ece78,0x22,param_4);
  }
  return;
}

