// VA 0x1414737c0, PDB extent 157 bytes
// utils::geometry::intersect::Triangle::normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::intersect::Triangle::normal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 157 */

undefined8 * pdb_1414737c0(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = (float)((ulonglong)*(undefined8 *)(param_2 + 7) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_2 + 4);
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar1 = (float)*(undefined8 *)(param_2 + 7) - fVar5;
  fVar5 = fVar5 - (float)*(undefined8 *)(param_2 + 1);
  fVar7 = fVar8 - (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar2 = param_2[3] - *param_2;
  fVar4 = param_2[6] - param_2[3];
  fVar6 = fVar5 * (fVar3 - fVar8) - fVar7 * fVar1;
  fVar8 = fVar7 * fVar4 - fVar2 * (fVar3 - fVar8);
  fVar1 = fVar1 * fVar2 - fVar4 * fVar5;
  fVar3 = _DAT_142e36f28 / SQRT(fVar1 * fVar1 + fVar8 * fVar8 + fVar6 * fVar6);
  *param_1 = CONCAT44(fVar3 * fVar8,fVar3 * fVar6);
  *(float *)(param_1 + 1) = fVar3 * fVar1;
  return param_1;
}

