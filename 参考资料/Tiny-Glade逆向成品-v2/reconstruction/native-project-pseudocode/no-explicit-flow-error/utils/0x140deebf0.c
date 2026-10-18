// VA 0x140deebf0, PDB extent 20 bytes
// utils::geometry::aabb::Aabb2::dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 20 */

float pdb_140deebf0(float *param_1)

{
  return param_1[2] - *param_1;
}

