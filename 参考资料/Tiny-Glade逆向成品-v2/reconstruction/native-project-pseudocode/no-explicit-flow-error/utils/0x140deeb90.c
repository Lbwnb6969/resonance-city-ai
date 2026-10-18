// VA 0x140deeb90, PDB extent 57 bytes
// utils::geometry::aabb::Aabb2::intersects_non_inclusive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::intersects_non_inclusive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 57 */

uint pdb_140deeb90(float *param_1,float *param_2)

{
  if ((*param_2 <= param_1[2] && param_1[2] != *param_2) &&
     (*param_1 <= param_2[2] && param_2[2] != *param_1)) {
    return -(uint)(param_1[1] < param_2[3] && param_2[1] < param_1[3]) & 0xffffff01;
  }
  return 0;
}

