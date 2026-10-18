// VA 0x140deec50, PDB extent 11 bytes
// utils::geometry::aabb::Aabb2::height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 11 */

float pdb_140deec50(longlong param_1)

{
  return *(float *)(param_1 + 0xc) - *(float *)(param_1 + 4);
}

