// VA 0x1414736a0, PDB extent 14 bytes
// utils::geometry::intersect::Triangle::intersect_ray
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::intersect::Triangle::intersect_ray
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 14 */

void pdb_1414736a0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
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
  
  fVar17 = (float)*param_2;
  fVar13 = (float)((ulonglong)*param_2 >> 0x20);
  fVar5 = (float)*(undefined8 *)((longlong)param_2 + 4);
  fVar19 = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 4) >> 0x20);
  fVar9 = (float)*(undefined8 *)((longlong)param_2 + 0xc) - fVar17;
  fVar3 = (float)param_2[2] - fVar5;
  fVar4 = (float)((ulonglong)param_2[2] >> 0x20) - fVar19;
  fVar2 = *(float *)((longlong)param_2 + 0x1c) - fVar5;
  fVar6 = *(float *)(param_2 + 4) - fVar19;
  fVar7 = *(float *)(param_2 + 3) - fVar17;
  fVar10 = *(float *)((longlong)param_3 + 0xc);
  fVar11 = (float)param_3[2];
  fVar12 = (float)((ulonglong)param_3[2] >> 0x20);
  fVar14 = fVar6 * fVar11 - fVar12 * fVar2;
  fVar15 = fVar7 * fVar12 - fVar6 * fVar10;
  fVar8 = fVar2 * fVar10 - fVar7 * fVar11;
  fVar16 = fVar4 * fVar8 + fVar15 * fVar3 + fVar9 * fVar14;
  uVar1 = 0;
  if (_DAT_142e37934 <= (float)(_DAT_142e377e0 & (uint)fVar16)) {
    fVar16 = _DAT_142e36f28 / fVar16;
    fVar17 = (float)*param_3 - fVar17;
    fVar18 = (float)((ulonglong)*param_3 >> 0x20) - fVar13;
    fVar19 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 4) >> 0x20) - fVar19;
    fVar8 = (fVar8 * fVar19 + fVar15 * fVar18 + fVar14 * fVar17) * fVar16;
    if ((0.0 <= fVar8) && (fVar8 <= _DAT_142e36f28)) {
      fVar3 = fVar3 * fVar17 - ((float)*(undefined8 *)((longlong)param_3 + 4) - fVar5) * fVar9;
      fVar5 = fVar4 * fVar18 -
              fVar19 * ((float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20) -
                       fVar13);
      fVar4 = fVar19 * fVar9 - fVar4 * fVar17;
      fVar10 = (fVar10 * fVar5 + fVar11 * fVar4 + fVar12 * fVar3) * fVar16;
      if ((0.0 <= fVar10) &&
         ((fVar8 + fVar10 <= _DAT_142e36f28 &&
          (fVar16 = fVar16 * (fVar7 * fVar5 + fVar2 * fVar4 + fVar6 * fVar3),
          _DAT_142e37934 < fVar16)))) {
        param_1[1] = fVar16;
        param_1[2] = fVar8;
        param_1[3] = fVar10;
        uVar1 = 1;
      }
    }
  }
  *param_1 = uVar1;
  return;
}

