// VA 0x140defaa0, PDB extent 33 bytes
// utils::geometry::circle::Circle2d::aabb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::circle::Circle2d::aabb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 33 */

float * pdb_140defaa0(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 1);
  fVar2 = (float)*param_2;
  fVar3 = (float)((ulonglong)*param_2 >> 0x20);
  *param_1 = fVar2 - fVar1;
  param_1[1] = fVar3 - fVar1;
  param_1[2] = fVar1 + fVar2;
  param_1[3] = fVar1 + fVar3;
  return param_1;
}

