// VA 0x140def6a0, PDB extent 31 bytes
// utils::geometry::circle::Circle2d::signed_distance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::circle::Circle2d::signed_distance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 31 */

undefined8 pdb_140def6a0(undefined8 *param_1,float param_2,float param_3)

{
  param_2 = param_2 - (float)*param_1;
  param_3 = param_3 - (float)((ulonglong)*param_1 >> 0x20);
  param_3 = param_3 * param_3;
  return CONCAT44(param_3,SQRT(param_3 + param_2 * param_2) - *(float *)(param_1 + 1));
}

