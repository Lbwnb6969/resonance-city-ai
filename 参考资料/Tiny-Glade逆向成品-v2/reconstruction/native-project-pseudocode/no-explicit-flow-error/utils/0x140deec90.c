// VA 0x140deec90, PDB extent 35 bytes
// utils::geometry::aabb::Aabb2::expanded
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::expanded
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 35 */

float * pdb_140deec90(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_3 = param_3 * _DAT_142e36f60;
  param_4 = param_4 * _UNK_142e36f64;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 - param_3;
  param_1[1] = fVar1 - param_4;
  param_1[2] = param_3 + fVar2;
  param_1[3] = param_4 + fVar3;
  return param_1;
}

