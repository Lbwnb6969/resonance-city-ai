// VA 0x140deec10, PDB extent 10 bytes
// utils::geometry::aabb::Aabb2::width
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::width
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 10 */

float pdb_140deec10(float *param_1)

{
  return param_1[2] - *param_1;
}

