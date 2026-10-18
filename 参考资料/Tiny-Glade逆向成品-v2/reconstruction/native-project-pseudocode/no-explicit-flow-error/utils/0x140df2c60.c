// VA 0x140df2c60, PDB extent 1017 bytes
// utils::geometry::rectangle::Rectangle2d::get_closest_edge_pt_indices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::get_closest_edge_pt_indices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 1017 */

undefined1 pdb_140df2c60(undefined8 *param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar8 = (float)param_1[2];
  fVar7 = (float)((ulonglong)param_1[2] >> 0x20);
  if (0.0 < fVar7 * fVar8) {
    fVar5 = fVar7 * _DAT_143057f30;
    fVar6 = fVar8 * _UNK_143057f34;
    fVar7 = fVar7 * _UNK_143057f38;
    fVar8 = fVar8 * _UNK_143057f3c;
    fVar9 = (float)*param_1;
    fVar11 = (float)((ulonglong)*param_1 >> 0x20);
    fVar3 = (float)(_UNK_142e37824 ^ (uint)fVar11);
    fVar10 = (float)param_1[1];
    fVar16 = fVar7 * fVar3 + fVar6 * fVar9 + fVar10;
    fVar12 = (float)((ulonglong)param_1[1] >> 0x20);
    fVar17 = fVar7 * fVar9 + fVar6 * fVar11 + fVar12;
    fVar2 = fVar5 * fVar3 + fVar6 * fVar9 + fVar10;
    fVar4 = fVar5 * fVar9 + fVar6 * fVar11 + fVar12;
    fVar14 = fVar16 - fVar2;
    fVar15 = fVar17 - fVar4;
    fVar13 = fVar15 * fVar15 + fVar14 * fVar14;
    if (fVar13 <= _DAT_143006dc0) {
      fVar13 = _DAT_143006dc0;
    }
    fVar13 = ((param_3 - fVar4) * fVar15 + (param_2 - fVar2) * fVar14) / fVar13;
    fVar14 = 0.0;
    if (0.0 <= fVar13) {
      fVar14 = fVar13;
    }
    fVar13 = _DAT_142e36f28;
    if (fVar14 <= _DAT_142e36f28) {
      fVar13 = fVar14;
    }
    fVar14 = param_2 - ((_DAT_142e36f28 - fVar13) * fVar2 + fVar13 * fVar16);
    fVar13 = param_3 - ((_DAT_142e36f28 - fVar13) * fVar4 + fVar13 * fVar17);
    fVar13 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
    if (_DAT_142e4bfe4 <= fVar13) {
      fVar13 = _DAT_142e4bfe4;
    }
    fVar14 = fVar7 * fVar3 + fVar6 * fVar9 + fVar10;
    fVar15 = fVar7 * fVar9 + fVar6 * fVar11 + fVar12;
    fVar16 = fVar7 * fVar3 + fVar8 * fVar9 + fVar10;
    fVar17 = fVar7 * fVar9 + fVar8 * fVar11 + fVar12;
    fVar18 = fVar16 - fVar14;
    fVar19 = fVar17 - fVar15;
    fVar6 = fVar19 * fVar19 + fVar18 * fVar18;
    if (fVar6 <= _DAT_143006dc0) {
      fVar6 = _DAT_143006dc0;
    }
    fVar6 = ((param_3 - fVar15) * fVar19 + (param_2 - fVar14) * fVar18) / fVar6;
    fVar18 = 0.0;
    if (0.0 <= fVar6) {
      fVar18 = fVar6;
    }
    fVar6 = _DAT_142e36f28;
    if (fVar18 <= _DAT_142e36f28) {
      fVar6 = fVar18;
    }
    fVar14 = param_2 - (fVar6 * fVar16 + (_DAT_142e36f28 - fVar6) * fVar14);
    fVar6 = param_3 - (fVar6 * fVar17 + (_DAT_142e36f28 - fVar6) * fVar15);
    fVar14 = SQRT(fVar6 * fVar6 + fVar14 * fVar14);
    fVar6 = fVar14;
    if (fVar13 <= fVar14) {
      fVar6 = fVar13;
    }
    fVar15 = fVar7 * fVar3 + fVar8 * fVar9 + fVar10;
    fVar16 = fVar7 * fVar9 + fVar8 * fVar11 + fVar12;
    fVar17 = fVar5 * fVar3 + fVar8 * fVar9 + fVar10;
    fVar18 = fVar5 * fVar9 + fVar8 * fVar11 + fVar12;
    fVar19 = fVar17 - fVar15;
    fVar20 = fVar18 - fVar16;
    fVar7 = fVar20 * fVar20 + fVar19 * fVar19;
    if (fVar7 <= _DAT_143006dc0) {
      fVar7 = _DAT_143006dc0;
    }
    fVar7 = ((param_3 - fVar16) * fVar20 + (param_2 - fVar15) * fVar19) / fVar7;
    fVar19 = 0.0;
    if (0.0 <= fVar7) {
      fVar19 = fVar7;
    }
    fVar7 = _DAT_142e36f28;
    if (fVar19 <= _DAT_142e36f28) {
      fVar7 = fVar19;
    }
    fVar15 = param_2 - (fVar7 * fVar17 + (_DAT_142e36f28 - fVar7) * fVar15);
    fVar7 = param_3 - (fVar7 * fVar18 + (_DAT_142e36f28 - fVar7) * fVar16);
    fVar15 = SQRT(fVar7 * fVar7 + fVar15 * fVar15);
    fVar7 = fVar6;
    if (fVar15 < fVar6) {
      fVar7 = fVar15;
    }
    uVar1 = 2;
    if (fVar6 <= fVar15) {
      uVar1 = fVar14 < fVar13;
    }
    fVar10 = fVar5 * fVar3 + fVar8 * fVar9 + fVar10;
    fVar12 = fVar5 * fVar9 + fVar8 * fVar11 + fVar12;
    fVar13 = fVar2 - fVar10;
    fVar3 = fVar4 - fVar12;
    fVar8 = fVar3 * fVar3 + fVar13 * fVar13;
    if (fVar8 <= _DAT_143006dc0) {
      fVar8 = _DAT_143006dc0;
    }
    fVar8 = ((param_3 - fVar12) * fVar3 + (param_2 - fVar10) * fVar13) / fVar8;
    fVar13 = 0.0;
    if (0.0 <= fVar8) {
      fVar13 = fVar8;
    }
    fVar8 = _DAT_142e36f28;
    if (fVar13 <= _DAT_142e36f28) {
      fVar8 = fVar13;
    }
    param_2 = param_2 - (fVar8 * fVar2 + (_DAT_142e36f28 - fVar8) * fVar10);
    param_3 = param_3 - (fVar8 * fVar4 + (_DAT_142e36f28 - fVar8) * fVar12);
    if (SQRT(param_3 * param_3 + param_2 * param_2) < fVar7) {
      uVar1 = 3;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
}

