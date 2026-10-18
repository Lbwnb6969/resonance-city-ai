// VA 0x140dee720, PDB extent 32 bytes
// utils::geometry::aabb::RayBoxIntersection::is_hit
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::RayBoxIntersection::is_hit
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 32 */

uint pdb_140dee720(float *param_1)

{
  return -(uint)(*param_1 <= param_1[1] && 0.0 <= param_1[1]) & 0xffffff01;
}

