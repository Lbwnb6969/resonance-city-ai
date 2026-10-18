// VA 0x140defa20, PDB extent 84 bytes
// utils::geometry::circle::Circle2d::closest_point_on_perimeter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::closest_point_on_perimeter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 84 */

float pdb_140defa20(undefined8 *param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)*param_1;
  param_2 = param_2 - fVar1;
  param_3 = param_3 - (float)((ulonglong)*param_1 >> 0x20);
  return param_2 * (_DAT_142e36f28 / SQRT(param_3 * param_3 + param_2 * param_2)) *
         *(float *)(param_1 + 1) + fVar1;
}

