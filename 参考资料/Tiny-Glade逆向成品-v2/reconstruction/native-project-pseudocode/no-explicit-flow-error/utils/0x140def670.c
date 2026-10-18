// VA 0x140def670, PDB extent 37 bytes
// utils::geometry::circle::Circle2d::is_point_inside
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::circle::Circle2d::is_point_inside
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 37 */

bool pdb_140def670(undefined8 *param_1,float param_2,float param_3)

{
  param_2 = param_2 - (float)*param_1;
  param_3 = param_3 - (float)((ulonglong)*param_1 >> 0x20);
  return SQRT(param_3 * param_3 + param_2 * param_2) < *(float *)(param_1 + 1);
}

