// VA 0x140deecc0, PDB extent 36 bytes
// utils::geometry::aabb::Aabb2::half_dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::half_dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 36 */

float pdb_140deecc0(float *param_1)

{
  return (param_1[2] - *param_1) * _DAT_142e36f50;
}

